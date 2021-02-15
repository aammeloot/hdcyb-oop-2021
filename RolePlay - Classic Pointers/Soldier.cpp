//
//  Soldier.cpp
//  RolePlayingGame
//
//  Created by Aurélien Ammeloot on 10/12/2020.
//

#include "Soldier.h"

Soldier::Soldier(int initialX, int initialY, const string &_name):Sprite(initialX, initialY, _name)
{
    // Nothing new here
}

void Soldier::attack()
{
    cout << "My name is " << name << " and I perform a sword attack." << endl;
}
