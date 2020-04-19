#include "boost/config.hpp"
#include <vector>
#include <tuple>
#include <string>

namespace RazHome {

    struct RazYamlNode {
        int x;
        int y;
        std::string name;
        std::string libPath;
    };


    class RazYamlParser {
        public:
        RazYamlParser();
        virtual ~RazYamlParser();
        
        std::vector<RazYamlNode>* parse(std::string path);
    };
}