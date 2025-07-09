#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_GeometryCollectionTracks {
#pragma pack(push, 1)
struct MovieSceneGeometryCollectionParams {
    private: char pad_0[0x30]; public:
    void* get_GeometryCollectionCache();
    void* get_StartFrameOffset();
    void* get_EndFrameOffset();
    float& get_PlayRate();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x30
#pragma pack(pop)
}
