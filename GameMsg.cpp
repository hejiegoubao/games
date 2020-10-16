#include "GameMsg.h"

GameMsg::GameMsg(MSG_TYPE _type, google::protobuf::Message* _pMsg):enMsgType(_type), pMsg(_pMsg)
{
}

GameMsg::GameMsg(MSG_TYPE _type, std::string _stream)
{
	//ͨ���򵥹�������������Ϣ����
	switch (_type)
	{
	case GameMsg::MSG_TYPE_LOGIN_ID_NAME:
		pMsg = new pb::SyncPid();
		break;
	case GameMsg::MSG_TYPE_CHAT_CONTENT:
		pMsg = new pb::Talk();
		break;
	case GameMsg::MSG_TYPE_NEW_POSITION:
		pMsg = new pb::Position();
		break;
	case GameMsg::MSG_TYPE_BROADCAST:
		pMsg = new pb::BroadCast();
		break;
	case GameMsg::MSG_TYPE_LOGOFF_IN_NAME:
		pMsg = new pb::SyncPid();
		break;
	case GameMsg::MSG_TYPE_SRD_POSITION:
		pMsg = new pb::SyncPlayers();
		break;
	default:
		break;
	}
	/*��������������Ϣ����*/
	pMsg->ParseFromString(_stream);
}

std::string GameMsg::serialize()
{
	std::string ret;
	pMsg->SerializeToString(&ret);
	return ret;
}