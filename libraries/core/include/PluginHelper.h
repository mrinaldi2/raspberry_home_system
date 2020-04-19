//
// Created by Manuel Rinaldi on 13/04/2020.
//

#ifndef RASPBERRYHOME_PLUGINHELPER_H
#define RASPBERRYHOME_PLUGINHELPER_H

#include "PluginBase.h"
using namespace RazHomePlugins;

namespace RazHome {
    struct Library {
        string name;
        boost::shared_ptr<PluginBase> plugin;
        bool isLoaded;
    };
}

#endif //RASPBERRYHOME_PLUGINHELPER_H
