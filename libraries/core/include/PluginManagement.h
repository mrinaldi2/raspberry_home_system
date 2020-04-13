//
// Created by Manuel Rinaldi on 13/04/2020.
//

#ifndef RASPBERRYHOME_PLUGINMANAGEMENT_H
#define RASPBERRYHOME_PLUGINMANAGEMENT_H

#include <map>
#include <string>
#include "PluginHelper.h"

namespace RazHome {
    class PluginManagement {

    public:
        PluginManagement();
        virtual ~PluginManagement();

        void registerPlugins(string configuration);
        void availablePlugins();
        bool isLoaded(std::string);
    };

    std::map<std::string, Library> plugins;
}



#endif //RASPBERRYHOME_PLUGINMANAGEMENT_H
