#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_MovieScene\MovieSceneTrackImplementation.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Niagara {
#pragma pack(push, 1)
struct MovieSceneNiagaraSystemTrackImplementation : public _Script_MovieScene::MovieSceneTrackImplementation {
    private: char pad_10[0x18]; public:
    void* get_SpawnSectionStartFrame();
    void* get_SpawnSectionEndFrame();
    void* get_SpawnSectionStartBehavior();
    void* get_SpawnSectionEvaluateBehavior();
    void* get_SpawnSectionEndBehavior();
    void* get_AgeUpdateMode();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x28
#pragma pack(pop)
}
