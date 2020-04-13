//
// Created by Manuel Rinaldi on 12/04/2020.
//

#ifndef RASPBERRY_HOME_SYSTEM_LIGHTPLUGIN_H
#define RASPBERRY_HOME_SYSTEM_LIGHTPLUGIN_H

#include <boost/config.hpp>
#include "PluginBase.h"

class BOOST_SYMBOL_EXPORT LightPlugin : PluginBase {
        public:
        LightPlugin();
        ~LightPlugin();
        void display() const;
};

extern "C" BOOST_SYMBOL_EXPORT LightPlugin plugin;
LightPlugin plugin;


#endif //RASPBERRY_HOME_SYSTEM_LIGHTPLUGIN_H
