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


#define BOOST_TEST_MODULE PluginLoading
#include <boost/test/unit_test.hpp>
#include <boost/dll/import.hpp>

#include <string>

#include "PluginLoader.h"
#include "PluginBase.h"

using namespace std;
using namespace RazHome;

bool is_not_null(Library plugin) {
    return plugin.name != "";
}

BOOST_AUTO_TEST_CASE( load_library )
{
        PluginLoader test_object;
        string path = "plugins/libplugin_light.so";
        Library plugin = test_object.loadPlugin("LightSensor", path);
        BOOST_CHECK( is_not_null(plugin)  );
}
