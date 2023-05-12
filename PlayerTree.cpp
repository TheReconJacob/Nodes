#include "PlayerTree.h"



PlayerTree::PlayerTree() {
    root = 0;
}

Player* PlayerTree::Find(int level, int kills) {
    Player* current = root;
    while (current != 0) {
        if (current->level == level && current->kills == kills)
            return current;
        else if (current->LessThan(current, new Player(level, kills)))
            current = current->rightChild;
        else
            current = current->leftChild;
    }
    return 0;
}

void PlayerTree::Insert(Player* player) {
    if (root == 0) {
        root = player;
    }
    else {
        Player* current = root;
        Player* parent;
        while (true) {
            parent = current;
            if (current->LessThan(player, current)) {
                current = current->leftChild;
                if (current == 0) {
                    parent->leftChild = player;
                    return;
                }
            }
            else {
                current = current->rightChild;
                if (current == 0) {
                    parent->rightChild = player;
                    return;
                }
            }
        }
    }
}

void PlayerTree::DisplayInOrder(Player* localRoot) {
    if (localRoot != 0) {
        DisplayInOrder(localRoot->leftChild);
        localRoot->Display();
        DisplayInOrder(localRoot->rightChild);
    }
}