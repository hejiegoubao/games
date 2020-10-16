#include "GameProtocol.h"
#include <iostream>
#include "GameMsg.h"
using namespace std;

//输入参数是通道传来的原始报文
//返回值为转换后的消息对象
//转换方式：TCP粘包处理
//| 消息内容的长度（4个字节，低字节在前） | 消息ID（4个字节，低字节在前） | 消息内容 |
UserData* GameProtocol::raw2request(std::string _szInput)
{
    cout << _szInput << endl;
    return nullptr;
}

std::string* GameProtocol::response2raw(UserData& _oUserData)
{
    return nullptr;
}

Irole* GameProtocol::GetMsgProcessor(UserDataMsg& _oUserDataMsg)
{
    return nullptr;
}

Ichannel* GameProtocol::GetMsgSender(BytesMsg& _oBytes)
{
    return nullptr;
}
