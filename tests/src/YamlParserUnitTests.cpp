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

#define BOOST_TEST_MODULE YamlTest
#include <boost/test/unit_test.hpp>
#include <boost/dll/import.hpp>

#include <string>
#include <vector>

#include "RazYamlParser.h"
using namespace RazHome;
using namespace std;

bool is_not_null(RazYamlParser* obj) {
    return obj != NULL;
}

bool contains(vector<RazYamlNode> *vec, string name) {
    for( vector<RazYamlNode>::iterator it = vec->begin(); it != vec->end(); ++it ) {
        if(it->name == name) {
            return true;
        }
    }
    return false;
}

BOOST_AUTO_TEST_CASE( load_yaml_parser )
{
        RazYamlParser* test_object = new RazYamlParser();
        BOOST_CHECK( is_not_null(test_object)  );
        delete test_object;
}

BOOST_AUTO_TEST_CASE( parse_yaml_file )
{
        RazYamlParser* test_object = new RazYamlParser();
        string path = "config.yaml";
        vector<RazYamlNode> *plugins = test_object->parse(path);
        BOOST_CHECK( contains(plugins, "temperature")  );
        delete test_object;
}
