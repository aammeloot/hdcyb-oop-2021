//
//  main.cpp
//  Composition
//
//  Created by Aurélien Ammeloot on 21/01/2021.
//

#include <iostream>
#include "Window.hpp"

int main(int argc, const char * argv[]) {
    
    Window w("C:");
    
    w.addIcon("Users");
    w.addIcon("Program Files");
    w.addIcon("Windows");
    
    w.render();
    
    return 0;
}
