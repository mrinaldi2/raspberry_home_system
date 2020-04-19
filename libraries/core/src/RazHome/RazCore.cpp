//
// Created by Manuel Rinaldi on 13/04/2020.
//

#include "RazCore.h"
#include <iostream>

RazHome::RazCore::RazCore() {
    this->loadedPlugins = new std::vector<RazHome::Library>();
}

RazHome::RazCore::~RazCore() {
    delete this->loadedPlugins;
    delete this->plugins;
}

void RazHome::RazCore::run() {
    if (IS_DEBUG) {
        std::cout << "Will load config" << std::endl;
    }
    this->plugins = this->parser.parse("../config/config.yaml");
    if (IS_DEBUG) {
        std::cout << "File loaded" << std::endl;
    }
    //load plugins
    for (auto plugin = this->plugins->begin(); plugin != this->plugins->end(); ++plugin ) {
        RazHome::Library loadedPlugin = this->loader.loadPlugin(plugin->name, plugin->libPath);

        //register plugins
        
        this->manageInputSig.connect(boost::bind(&PluginBase::parseKey, loadedPlugin.plugin));
        this->renderSig.connect(boost::bind(&PluginBase::render, loadedPlugin.plugin));

        this->loadedPlugins->push_back(loadedPlugin);

    }

    while(true) {

        this->manageInputSig();
        this->render();
        this->renderSig();
        sleep(2);
    }
}