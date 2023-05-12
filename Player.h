#pragma once
class Player {
public:
	Player* leftChild;
	Player* rightChild;
	int kills;
	int level;
	Player(int level, int kills);
	void Display();
};