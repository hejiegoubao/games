#pragma once
#include <zinx.h>
class GameRole :
    public Irole
{
    // ͨ�� Irole �̳�
    virtual bool Init() override;
    virtual UserData* ProcMsg(UserData& _poUserData) override;
    virtual void Fini() override;
};

