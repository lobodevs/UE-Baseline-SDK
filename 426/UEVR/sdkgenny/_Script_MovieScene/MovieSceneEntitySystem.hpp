#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_CoreUObject\Object.hpp"
namespace _Script_MovieScene {
struct MovieSceneEntitySystemLinker;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_MovieScene {
#pragma pack(push, 1)
struct MovieSceneEntitySystem : public _Script_CoreUObject::Object {
    private: char pad_28[0x18]; public:
    _Script_MovieScene::MovieSceneEntitySystemLinker*& get_Linker();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x40
#pragma pack(pop)
}
