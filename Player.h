#pragma once
class Player {
public:
	Player* leftChild;
	Player* rightChild;
	int kills;
	int level;
	Player(int level, int kills);
	void Display();
	int Factorial(int n);
	bool LessThan(Player* p1, Player* p2);
};