
/*
==========================================
  Copyright (c) 2022 dynamic_static
      Licensed under the MIT license
    http://opensource.org/licenses/MIT
==========================================
*/

#include "dynamic_static/json/placeholder.hpp"

#include <iostream>
#include <sstream>

#include "catch2/catch.hpp"

namespace dst {
namespace tests {

TEST_CASE("PLACEHOLDER", "[NAME]")
{
    std::stringstream strStrm;
    {
        json::Writer jsonWriter(strStrm);
    }
    std::cout << strStrm.str() << std::endl;
}

} // namespace tests
} // namespace dst
