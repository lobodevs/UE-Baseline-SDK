#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "MovieSceneGeometryCollectionParams.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_GeometryCollectionTracks {
#pragma pack(push, 1)
struct MovieSceneGeometryCollectionSectionTemplateParameters : public MovieSceneGeometryCollectionParams {
    private: char pad_30[0x8]; public:
    void* get_SectionStartTime();
    void* get_SectionEndTime();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x38
#pragma pack(pop)
}
