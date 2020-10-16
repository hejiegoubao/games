#pragma once
#include <zinx.h>
#include <google/protobuf/message.h>
#include "msg.pb.h"
class GameMsg :
    public UserData
{

public:
    //�û���������Ϣ
    //��Ϣ����
    google::protobuf::Message* pMsg = NULL;
    enum MSG_TYPE
    {
        MSG_TYPE_LOGIN_ID_NAME = 1,
        MSG_TYPE_CHAT_CONTENT = 2,
        MSG_TYPE_NEW_POSITION = 3,
        MSG_TYPE_BROADCAST = 200,
        MSG_TYPE_LOGOFF_IN_NAME = 201,
        MSG_TYPE_SRD_POSITION = 202
    }enMsgType;

    //��֪��Ϣ���ݣ�������Ϣ����
    GameMsg(MSG_TYPE _type, google::protobuf::Message* _pMsg);
    //���ֽ�������ת������Ϣ�ṹ
    GameMsg(MSG_TYPE _type, std::string _stream);    //�ֽ�����ʽ

        //���л�����Ϣ
    std::string serialize();

};

