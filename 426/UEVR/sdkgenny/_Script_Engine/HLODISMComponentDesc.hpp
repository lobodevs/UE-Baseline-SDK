#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_Engine {
struct StaticMesh;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
struct MaterialInterface;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct HLODISMComponentDesc {
    private: char pad_0[0x20]; public:
    _Script_Engine::StaticMesh*& get_StaticMesh();
    _Script_Engine::MaterialInterface*& get_Material();
    void* get_Instances();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x20
#pragma pack(pop)
}
