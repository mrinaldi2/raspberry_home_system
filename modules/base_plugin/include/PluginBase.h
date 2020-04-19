//
// Created by Manuel Rinaldi on 12/04/2020.
//

#ifndef RASPBERRY_HOME_SYSTEM_PLUGINBASE_H
#define RASPBERRY_HOME_SYSTEM_PLUGINBASE_H

#include <boost/config.hpp>

namespace RazHomePlugins {

    class BOOST_SYMBOL_VISIBLE PluginBase {
        public:
            PluginBase();
            virtual ~PluginBase() {}
            virtual void parseKey() = 0;
            virtual void render() = 0;
    };

}

#endif //RASPBERRY_HOME_SYSTEM_PLUGINBASE_H
