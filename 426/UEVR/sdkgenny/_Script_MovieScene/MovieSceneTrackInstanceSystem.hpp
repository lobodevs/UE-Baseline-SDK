#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "MovieSceneEntitySystem.hpp"
namespace _Script_MovieScene {
struct MovieSceneTrackInstanceInstantiator;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_MovieScene {
#pragma pack(push, 1)
struct MovieSceneTrackInstanceSystem : public MovieSceneEntitySystem {
    private: char pad_40[0x8]; public:
    _Script_MovieScene::MovieSceneTrackInstanceInstantiator*& get_Instantiator();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x48
#pragma pack(pop)
}
