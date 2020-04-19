//
// Created by Manuel Rinaldi on 12/04/2020.
//

#include "LightPlugin.h"
#include <iostream>
using namespace std;

RazHomePlugins::LightPlugin::LightPlugin() {

}

RazHomePlugins::LightPlugin::~LightPlugin() {

}

void RazHomePlugins::LightPlugin::render() {
    cout << "Displayed on monitor" << endl;
}

void RazHomePlugins::LightPlugin::parseKey() {
    cout << "Parsed keys" << endl;
}