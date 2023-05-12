#pragma once
#include "Player.h"

class PlayerTree {
public:
    Player* root;
    PlayerTree();
    Player* Find(int level, int kills);
    void Insert(Player* player);
    void DisplayInOrder(Player* localRoot);
};