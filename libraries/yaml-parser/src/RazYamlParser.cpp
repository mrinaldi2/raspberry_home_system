/**
 * Copyright 2020 Manuel Rinaldi
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      https://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */


#include <iostream>
#include "yaml-cpp/yaml.h"

#include "RazYamlParser.h"

RazHome::RazYamlParser::RazYamlParser() {

}

RazHome::RazYamlParser::~RazYamlParser() {
    
}

std::vector<RazHome::RazYamlNode>* RazHome::RazYamlParser::parse(std::string path) {
    YAML::Node config = YAML::LoadFile(path);

    std::vector<RazHome::RazYamlNode> *pluginsList = nullptr;
    if (config["plugins"]) {
        pluginsList = new std::vector<RazHome::RazYamlNode>();

        YAML::Node plugins = config["plugins"];

        for(YAML::const_iterator it=plugins.begin();it!=plugins.end();++it) {
            YAML::Node plugin = it->second;
            
            RazYamlNode node;
            for(YAML::const_iterator el=plugin.begin(); el!=plugin.end();++el) {
                std::string key = el->first.as<std::string>();
                if (key == "x") {
                    node.x = el->second.as<int>();
                }
                if (key == "y") {
                    node.y = el->second.as<int>();
                }
                if (key == "name") {
                    node.name = el->second.as<std::string>();
                }
                if (key == "lib") {
                    node.libPath = el->second.as<std::string>();
                }
            }

            pluginsList->push_back(node);
        }
    }

    return pluginsList;
}