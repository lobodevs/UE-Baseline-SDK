#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_CoreUObject {
struct Object;
}
namespace _Script_Engine {
struct Level;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct RollbackNetStartupActorInfo {
    private: char pad_0[0xb0]; public:
    _Script_CoreUObject::Object*& get_Archetype();
    _Script_Engine::Level*& get_Level();
    void* get_ObjReferences();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0xb0
#pragma pack(pop)
}
