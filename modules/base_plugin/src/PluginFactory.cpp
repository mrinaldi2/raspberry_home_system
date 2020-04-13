//
// Created by Manuel Rinaldi on 12/04/2020.
//
#include <map>
#include <string_view>
#include "PluginBase.h"
class PluginFactory
{
public:
    using PluginID = int;
    using PluginCreationFunctionT = PluginBase(*)();

    PluginFactory() = delete;

    static bool Register(std::string_view plugin_name, PluginID id, PluginCreationFunctionT creation_function);

    static PluginBase* Create(std::string_view name);
    static PluginBase* Create(PluginID id);

private:
    static std::map<std::string_view, PluginCreationFunctionT> s_CreationFunctionByName;
    static std::map<PluginID, PluginCreationFunctionT> s_CreationFunctionById;
};