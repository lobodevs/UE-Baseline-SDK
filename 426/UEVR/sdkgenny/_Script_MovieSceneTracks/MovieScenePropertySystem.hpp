#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_MovieScene\MovieSceneEntitySystem.hpp"
namespace _Script_MovieSceneTracks {
struct MovieScenePropertyInstantiatorSystem;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_MovieSceneTracks {
#pragma pack(push, 1)
struct MovieScenePropertySystem : public _Script_MovieScene::MovieSceneEntitySystem {
    private: char pad_40[0x10]; public:
    _Script_MovieSceneTracks::MovieScenePropertyInstantiatorSystem*& get_InstantiatorSystem();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x50
#pragma pack(pop)
}
