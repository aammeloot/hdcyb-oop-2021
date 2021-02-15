//
//  Sprite.cpp
//  RolePlayingGame
//
//  Created by Aurélien Ammeloot on 10/12/2020.
//

#include "Sprite.h"

using namespace std;

// Constructor initialises all the values of the Sprite
Sprite::Sprite(int initialX, int initialY, const string &_name)
{
    x = initialX;
    y = initialY;
    name = _name;
}

// This moves in the simplest possible way
void Sprite::move()
{
    x++;
    y++;
    cout << "Moving to " << x << "," << y << endl;
}

// Attack.
// Ideally this should be an abstract class but
// We haven't covered that in lessons yet
void Sprite::attack()
{
    cout << "My name is " << name << " but as a generic sprite I cannot perform attacks." << endl;
}
