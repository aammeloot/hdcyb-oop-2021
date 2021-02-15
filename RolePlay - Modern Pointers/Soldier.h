//
//  Soldier.hpp
//  RolePlayingGame
//
//  Created by Aurélien Ammeloot on 10/12/2020.
//

#pragma once
#include <iostream>
#include "Sprite.h"

using namespace std;

class Soldier: public Sprite {
public:
    // Redefine contructor
    Soldier(int initialX, int initialY, const string &_name);
    void attack();
};
 
