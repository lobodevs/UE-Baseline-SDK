#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "SceneComponentInstanceData.hpp"
namespace _Script_Engine {
struct PrimitiveComponent;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct PrimitiveComponentInstanceData : public SceneComponentInstanceData {
    private: char pad_b8[0x48]; public:
    void* get_ComponentTransform();
    int32_t& get_VisibilityId();
    _Script_Engine::PrimitiveComponent*& get_LODParent();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x100
#pragma pack(pop)
}
