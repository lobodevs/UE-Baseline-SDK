#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_CoreUObject\Object.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_MovieScene {
#pragma pack(push, 1)
struct MovieSceneCompiledDataManager : public _Script_CoreUObject::Object {
    private: char pad_28[0x208]; public:
    void* get_Hierarchies();
    void* get_TrackTemplates();
    void* get_TrackTemplateFields();
    void* get_EntityComponentFields();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x230
#pragma pack(pop)
}
