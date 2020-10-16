#pragma once
#include <zinx.h>
#include <ZinxTCP.h>
#include "GameProtocol.h"

class GameChannel :
    public ZinxTcpData
{
public:
    GameChannel(int _fd);
    //һ��ͨ����һ��Э���
    GameProtocol* m_protocol = NULL;
    // ����Э�����
    virtual AZinxHandler* GetInputNextStage(BytesMsg& _oInput) override;
};


//��������,������
class GameConnFact :public IZinxTcpConnFact {
    // ͨ�� IZinxTcpConnFact �̳�
    virtual ZinxTcpData* CreateTcpDataChannel(int _fd) override;
};

