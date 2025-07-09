#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_GeometryCollectionEngine {
#pragma pack(push, 1)
struct GeometryCollectionSource {
    private: char pad_0[0x60]; public:
    void* get_SourceGeometryObject();
    void* get_LocalTransform();
    void* get_SourceMaterial();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x60
#pragma pack(pop)
}
