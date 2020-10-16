#pragma once
#include <zinx.h>
#include <ZinxTCP.h>
#include "GameProtocol.h"

class GameChannel :
    public ZinxTcpData
{
public:
    GameChannel(int _fd);
    //一个通道与一个协议绑定
    GameProtocol* m_protocol = NULL;
    // 返回协议对象
    virtual AZinxHandler* GetInputNextStage(BytesMsg& _oInput) override;
};


//单例创建,工厂类
class GameConnFact :public IZinxTcpConnFact {
    // 通过 IZinxTcpConnFact 继承
    virtual ZinxTcpData* CreateTcpDataChannel(int _fd) override;
};

