#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_GeometryCache {
struct GeometryCache;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_GeometryCacheTracks {
#pragma pack(push, 1)
struct MovieSceneGeometryCacheParams {
    private: char pad_0[0x40]; public:
    _Script_GeometryCache::GeometryCache*& get_GeometryCacheAsset();
    void* get_FirstLoopStartFrameOffset();
    void* get_StartFrameOffset();
    void* get_EndFrameOffset();
    float& get_PlayRate();
    bool get_bReverse();
    void set_bReverse(bool value);
    float& get_StartOffset();
    float& get_EndOffset();
    void* get_GeometryCache();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x40
#pragma pack(pop)
}
