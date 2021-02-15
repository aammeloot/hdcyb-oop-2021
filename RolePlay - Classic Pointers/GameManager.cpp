//
//  GameManager.cpp
//  RolePlayingGame
//
//  Created by Aurélien Ammeloot on 10/12/2020.
//

#include "GameManager.h"

using namespace std;

void GameManager::addSprite(Sprite* newSprite)
{
    // Add the pointer to the sprite list
    sprites.push_back(newSprite);
}

void GameManager::refresh()
{
    // Loop through all the sprites in the list
    for (int index = 0; index < sprites.size(); index++)
    {
        Sprite* currentSprite = sprites[index];
        currentSprite->move();
        currentSprite->attack();
    }
}

GameManager::~GameManager()
{
    // Go through all the pointers in the list and clean them up
    for (int index = 0; index < sprites.size(); index++)
    {
        Sprite *currentSprite = sprites[index];
        // Deallocate memory
        delete currentSprite;
    }
}
