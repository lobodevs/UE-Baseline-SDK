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
namespace _Script_UMG {
#pragma pack(push, 1)
struct UMGSequenceTickManager : public _Script_CoreUObject::Object {
    private: char pad_28[0xf8]; public:
    void* get_WeakUserWidgets();
    _Script_MovieScene::MovieSceneEntitySystemLinker*& get_Linker();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x120
#pragma pack(pop)
}
