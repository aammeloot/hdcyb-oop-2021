//
//  main.cpp
//  RolePlayingGame
//
//  Created by Aurélien Ammeloot on 10/12/2020.
//

#include "GameManager.h"
#include "Sprite.h"
#include "Soldier.h"
// Add your own includes

int main(int argc, const char * argv[]) {
    
    // Create a new game manager
    GameManager g;
    
    // Create two generic sprite
    shared_ptr<Sprite> sp1 = make_shared<Sprite>(4, 5, "Arthur");
    shared_ptr<Sprite> sp2 = make_shared<Sprite>(10, 32, "Aurelien");
    
    // Create two soldiers
    shared_ptr<Sprite> s1 = make_shared<Soldier>(45, 23, "Karen");
    shared_ptr<Sprite> s2 = make_shared<Soldier>(65,32, "Mark");
    
    // Add all that stuff to the manager
    g.addSprite(sp1);
    g.addSprite(s1);
    g.addSprite(sp2);
    g.addSprite(s2);
    
    g.refresh();
    
    return 0;
}
