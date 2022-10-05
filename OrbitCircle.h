#pragma once
#include "GameObject.h"
class OrbitCircle :
    public GameObject
{

public:


private:

public:
    OrbitCircle(class Game* game);
    ~OrbitCircle();

    void Create();
    void Init();
    void Draw();
};

