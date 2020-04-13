//
// Created by Manuel Rinaldi on 13/04/2020.
//

#include "PluginLoader.h"
#include <iostream>
using namespace std;

RazHome::PluginLoader::PluginLoader() {}

RazHome::PluginLoader::~PluginLoader() {}

RazHome::Library RazHome::PluginLoader::loadPlugin(const string name, const string path) {
    dll::fs::path lib_path(path);
    boost::shared_ptr<PluginBase> plugin;
    cout << "Loading the plugin" << endl;

    plugin = dll::import<PluginBase>(
            lib_path,
            "plugin",
            dll::load_mode::append_decorations
    );

    return Library { .name = name, .plugin = plugin };
}
