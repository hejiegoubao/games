#include "GameChannel.h"


GameChannel::GameChannel(int _fd) :ZinxTcpData(_fd)
{

}

AZinxHandler* GameChannel::GetInputNextStage(BytesMsg& _oInput)
{
    return m_protocol;
}

ZinxTcpData* GameConnFact::CreateTcpDataChannel(int _fd)
{
    //����Tcpͨ������
    auto pChannel = new GameChannel(_fd);
    //����Э�����
    auto pProtocol = new GameProtocol();
    //��Э�����
    pChannel->m_protocol = pProtocol;
    //��Э�������ӵ�kernel
    ZinxKernel::Zinx_Add_Proto(*pProtocol);
    return pChannel;
}
