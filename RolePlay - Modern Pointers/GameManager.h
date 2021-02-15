//
//  GameManager.hpp
//  RolePlayingGame
//
//  Created by Aurélien Ammeloot on 10/12/2020.
//

#pragma once
#include "Sprite.h"
#include "Soldier.h"
#include <vector>
// Add the extra includes you need

using namespace std;

// Using modern pointers in this version
class GameManager {
private:
    // This is a vector of Sprite shared pointers (modern syntax)
    vector<shared_ptr<Sprite>> sprites;
public:
    // Add a sprite or derivate
    void addSprite(shared_ptr<Sprite> newSprite);
    // Update all the sprites
    void refresh();
};
