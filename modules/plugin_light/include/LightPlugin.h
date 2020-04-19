//
// Created by Manuel Rinaldi on 12/04/2020.
//

#ifndef RASPBERRY_HOME_SYSTEM_LIGHTPLUGIN_H
#define RASPBERRY_HOME_SYSTEM_LIGHTPLUGIN_H

#include <boost/config.hpp>
#include "PluginBase.h"

namespace RazHomePlugins {
        class BOOST_SYMBOL_EXPORT LightPlugin : public PluginBase {
        public:
        LightPlugin();
        ~LightPlugin();
        void parseKey();
        void render();
};

extern "C" BOOST_SYMBOL_EXPORT RazHomePlugins::LightPlugin plugin;
RazHomePlugins::LightPlugin plugin;


#endif //RASPBERRY_HOME_SYSTEM_LIGHTPLUGIN_H
}
