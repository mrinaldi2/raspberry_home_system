//
// Created by Manuel Rinaldi on 13/04/2020.
//

#include "PluginLoader.h"
#include "PluginBase.h"
using namespace RazHome;
#define BOOST_TEST_MODULE MyTest
#include <boost/test/unit_test.hpp>
#include <boost/dll/import.hpp>

#include <string>
using namespace std;

bool is_not_null(Library plugin) {
    return plugin.name != "";
}

BOOST_AUTO_TEST_CASE( load_library )
{
        PluginLoader test_object;
        string path = "plugins/libplugin_light.dylib";
        Library plugin = test_object.loadPlugin("LightSensor", path);
        BOOST_CHECK( is_not_null(plugin)  );
}

BOOST_AUTO_TEST_CASE( load_library )
{
        PluginLoader test_object;
        string path = "plugins/libplugin_light.dylib";
        Library plugin = test_object.loadPlugin("LightSensor", path);
        BOOST_CHECK( is_not_null(plugin)  );
}