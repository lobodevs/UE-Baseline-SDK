#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "InterpTrackInst.hpp"
namespace _Script_CoreUObject {
struct Object;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct InterpTrackInstProperty : public InterpTrackInst {
    private: char pad_28[0x28]; public:
    void* get_InterpProperty();
    _Script_CoreUObject::Object*& get_PropertyOuterObjectInst();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x50
#pragma pack(pop)
}
