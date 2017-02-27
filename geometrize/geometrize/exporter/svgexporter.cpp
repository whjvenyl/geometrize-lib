#include "svgexporter.h"

#include <cstdint>
#include <sstream>
#include <string>
#include <vector>

#include "../shaperesult.h"

namespace geometrize
{

namespace exporter
{

std::string exportSVG(const std::vector<geometrize::ShapeResult>& data)
{
    std::stringstream stream;

    for(const geometrize::ShapeResult& s : data) {
        // TODO
    }

    return stream.str();
}

}

}