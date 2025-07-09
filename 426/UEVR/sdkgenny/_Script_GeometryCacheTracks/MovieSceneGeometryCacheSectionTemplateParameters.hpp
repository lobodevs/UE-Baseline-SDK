#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "MovieSceneGeometryCacheParams.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_GeometryCacheTracks {
#pragma pack(push, 1)
struct MovieSceneGeometryCacheSectionTemplateParameters : public MovieSceneGeometryCacheParams {
    private: char pad_40[0x8]; public:
    void* get_SectionStartTime();
    void* get_SectionEndTime();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x48
#pragma pack(pop)
}
