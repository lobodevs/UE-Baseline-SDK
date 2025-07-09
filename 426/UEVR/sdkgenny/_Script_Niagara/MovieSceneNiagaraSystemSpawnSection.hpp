#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_MovieScene\MovieSceneSection.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Niagara {
#pragma pack(push, 1)
struct MovieSceneNiagaraSystemSpawnSection : public _Script_MovieScene::MovieSceneSection {
    private: char pad_e8[0x10]; public:
    void* get_SectionStartBehavior();
    void* get_SectionEvaluateBehavior();
    void* get_SectionEndBehavior();
    void* get_AgeUpdateMode();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0xf8
#pragma pack(pop)
}
