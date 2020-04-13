//
// Created by Manuel Rinaldi on 13/04/2020.
//

#ifndef RASPBERRYHOME_HOMESCREEN_H
#define RASPBERRYHOME_HOMESCREEN_H

#include "Core.h"
using namespace RazHome;

class HomeScreen : public RazCore {
public:
    HomeScreen();
    ~HomeScreen();
    void render();
};


#endif //RASPBERRYHOME_HOMESCREEN_H
