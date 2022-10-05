#include "Key.h"
#include <Novice.h>

void Key::Input() {
	memcpy(preKeys, keys, 256);
	Novice::GetHitKeyStateAll(keys);
}

bool Key::IsTrigger(char keycode) {
	keys[0] = 0;
	return preKeys[keycode] == 0 && keys[keycode] != 0;
}

bool Key::IsPressed(char keycode) {
	return keys[keycode] != 0;
}

char Key::keys[256] = { 0 };
char Key::preKeys[256] = { 0 };