//
// Created by Manuel Rinaldi on 13/04/2020.
//

#ifndef RASPBERRYHOME_RAZCORE_H
#define RASPBERRYHOME_RAZCORE_H

#include "version_config.h"

namespace RazHome {

    class RazCore {
    public:
        RazCore();
        virtual ~RazCore();
        void run();
        virtual void render() = 0;
    };

    RazCore* CreateApplication();
}


#endif //RASPBERRYHOME_RAZCORE_H
