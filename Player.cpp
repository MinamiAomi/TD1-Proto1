#include "Player.h"
#include "Game.h"
#include "Key.h"
#include "DeltaTime.h"

Player::Player(Game* game) :
	GameObject(game)
{}
Player::~Player(){}

void Player::Create() {

}

void Player::Init() {

}

void Player::Update(){

}

void Player::Draw(){

}

void Player::Input(){
	if (Key::IsTrigger(KC_SPACE)) {

	}
}