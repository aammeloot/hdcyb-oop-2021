//
//  Sprite.hpp
//  RolePlayingGame
//
//  Created by Aurélien Ammeloot on 10/12/2020.
//

#pragma once
#include <iostream>

using namespace std;

class Sprite {
protected:
    int x;          // x = y the coordinates on the grid
    int y;
    string name;    // The character's name
public:
    // Constructor
    Sprite(int intialX, int initialY, const string &_name);
    
    void move();            // Moves sprite x+1, y+1
    virtual void attack();  // Triggers an attack
};

