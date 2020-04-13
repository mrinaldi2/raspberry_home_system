//
// Created by Manuel Rinaldi on 13/04/2020.
//

#ifndef RASPBERRYHOME_PLUGINLOADER_H
#define RASPBERRYHOME_PLUGINLOADER_H

#include <string>
#include <boost/dll/import.hpp>
namespace dll = boost::dll;
using namespace std;

#include "PluginBase.h"
#include "PluginHelper.h"

namespace RazHome {

    class PluginLoader {

    public:
        PluginLoader();
        virtual ~PluginLoader();

        Library loadPlugin(const string name, const string path);

        void registerPlugin(boost::shared_ptr<PluginBase> plugin);

    };

}
#endif //RASPBERRYHOME_PLUGINLOADER_H
