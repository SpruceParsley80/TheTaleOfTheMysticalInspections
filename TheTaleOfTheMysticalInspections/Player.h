#pragma once
#include <iostream>;
#include <string>;
#include "Entity.h";
using namespace std;
namespace game {
	class player : public entity {
	private:
		int strength;
		int charisma;
		int intelligence;
		int constitution;
		int wisdom;
		int dexterity;
	};
}