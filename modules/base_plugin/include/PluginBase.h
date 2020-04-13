//
// Created by Manuel Rinaldi on 12/04/2020.
//

#ifndef RASPBERRY_HOME_SYSTEM_PLUGINBASE_H
#define RASPBERRY_HOME_SYSTEM_PLUGINBASE_H

#include <boost/config.hpp>

class BOOST_SYMBOL_VISIBLE PluginBase {
public:
    virtual ~PluginBase() {}
    virtual void display() const = 0;
};

#endif //RASPBERRY_HOME_SYSTEM_PLUGINBASE_H
