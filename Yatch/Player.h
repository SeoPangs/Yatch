#pragma once
#include "Chart.h"
#include <string>

using namespace std;

class Player
{
private:
	int point;
	string name;
	
public:
	Chart* cht[12];
	Player();
	Player(string name);
	string get_name();

};