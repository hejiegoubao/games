#pragma once
#include <zinx.h>
#include <google/protobuf/message.h>
#include "msg.pb.h"
class GameMsg :
    public UserData
{

public:
    //用户的请求信息
    //消息基类
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

    //已知消息内容，构造消息对象
    GameMsg(MSG_TYPE _type, google::protobuf::Message* _pMsg);
    //将字节流内容转换成消息结构
    GameMsg(MSG_TYPE _type, std::string _stream);    //字节流形式

        //序列化本消息
    std::string serialize();

};

