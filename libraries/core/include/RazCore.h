//
// Created by Manuel Rinaldi on 13/04/2020.
//

#ifndef RASPBERRYHOME_RAZCORE_H
#define RASPBERRYHOME_RAZCORE_H

#include <boost/signals2.hpp>

#include "version_config.h"
#include "RazYamlParser.h"
#include "PluginLoader.h"


namespace RazHome {

    class RazCore {
    public:
        RazCore();
        virtual ~RazCore();
        void run();
        virtual void render() = 0;
    private:
        std::vector<RazHome::RazYamlNode> *plugins;
        RazYamlParser parser;
        PluginLoader loader;
        std::vector<RazHome::Library> *loadedPlugins;
        boost::signals2::signal<void ()> manageInputSig;
        boost::signals2::signal<void ()> renderSig;
    };

    RazCore* CreateApplication();

}


#endif //RASPBERRYHOME_RAZCORE_H
