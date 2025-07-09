#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_MovieScene\MovieSceneNameableTrack.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_MovieSceneTracks {
#pragma pack(push, 1)
struct MovieSceneCameraCutTrack : public _Script_MovieScene::MovieSceneNameableTrack {
    private: char pad_78[0x18]; public:
    bool get_bCanBlend();
    void set_bCanBlend(bool value);
    void* get_Sections();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x90
#pragma pack(pop)
}
