#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "PrimitiveComponentInstanceData.hpp"
namespace _Script_Engine {
struct StaticMesh;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct StaticMeshComponentInstanceData : public PrimitiveComponentInstanceData {
    private: char pad_100[0x40]; public:
    _Script_Engine::StaticMesh*& get_StaticMesh();
    void* get_VertexColorLODs();
    void* get_CachedStaticLighting();
    void* get_StreamingTextureData();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x140
#pragma pack(pop)
}
