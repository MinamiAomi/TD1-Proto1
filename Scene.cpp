#include "Scene.h"

Scene::Scene(class Game* game) : 
	GameObject(game)
{

}
Scene::~Scene(){}

void Scene::Proc() {
	this->Update();
	this->Draw();
	this->NextScene();
}