#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_MovieScene\MovieSceneEvalTemplate.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_MovieSceneTracks {
#pragma pack(push, 1)
struct MovieScenePrimitiveMaterialTemplate : public _Script_MovieScene::MovieSceneEvalTemplate {
    private: char pad_20[0xc8]; public:
    int32_t& get_MaterialIndex();
    void* get_MaterialChannel();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0xe8
#pragma pack(pop)
}
