#include "GameProtocol.h"
#include <iostream>
#include "GameMsg.h"
using namespace std;

//���������ͨ��������ԭʼ����
//����ֵΪת�������Ϣ����
//ת����ʽ��TCPճ������
//| ��Ϣ���ݵĳ��ȣ�4���ֽڣ����ֽ���ǰ�� | ��ϢID��4���ֽڣ����ֽ���ǰ�� | ��Ϣ���� |
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
