
/*
==========================================
  Copyright (c) 2022 dynamic_static
      Licensed under the MIT license
    http://opensource.org/licenses/MIT
==========================================
*/

#pragma once

#include <cassert>
#include <functional>
#include <ostream>
#include <streambuf>

namespace dst {
namespace json {

class Writer final
{
public:
    enum Flags
    {
        Formatted = 1,
        Default   = Formatted
    };

    inline Writer(std::ostream& ostream, uint32_t flags = Default)
        : mpOstream { &ostream }
        , mFlags { flags }
    {
        *mpOstream << '{' << '\n';
    }

    inline ~Writer()
    {
        *mpOstream << '}' << '\n';
    }

    template <typename WriteObjectFunctionType>
    inline void write_object(const char* pName, WriteObjectFunctionType writeObjectFunction)
    {
        assert(pName);
    }

    template <typename WriteArrayFunctionType>
    inline void write_array(const char* pName, WriteArrayFunctionType writeArrayFunction)
    {
        assert(pName);
    }

    template <typename WriteFieldFunctionType>
    inline void write_field(const char* pName, WriteFieldFunctionType writeFieldFunction)
    {
        assert(pName);
    }

    template <typename WriteValueFunctionType>
    inline void write_value(const char* pName, WriteValueFunctionType writeValueFunction)
    {
        assert(pName);
    }

private:
    std::ostream* mpOstream { nullptr };
    uint32_t mFlags { Default };
};

} // namespace json
} // namespace dst
