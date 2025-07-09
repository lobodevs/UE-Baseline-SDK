#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\AssetUserData.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_LevelSequence {
#pragma pack(push, 1)
struct AnimSequenceLevelSequenceLink : public _Script_Engine::AssetUserData {
    private: char pad_28[0x28]; public:
    void* get_SkelTrackGuid();
    void* get_PathToLevelSequence();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x50
#pragma pack(pop)
}
