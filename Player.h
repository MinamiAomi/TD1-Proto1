#pragma once
#include "GameObject.h"
#include "PolygonVertex.h"
#include <vector>

class Player : 
	public GameObject {

public:
	struct Data {
		int mVertexNum;
		std::vector<PolygonVertex> mVertexs;

		int mMoveVertexNum;
	};

private:
	Data mData;


public:
	Player(class Game* game);
	~Player();

	void Create();
	void Init();
	void Update();
	void Draw();

private:
	void Input();

};