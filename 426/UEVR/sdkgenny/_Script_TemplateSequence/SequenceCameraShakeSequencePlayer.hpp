#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_CoreUObject\Object.hpp"
namespace _Script_MovieScene {
struct MovieSceneSequence;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_TemplateSequence {
#pragma pack(push, 1)
struct SequenceCameraShakeSequencePlayer : public _Script_CoreUObject::Object {
    private: char pad_28[0x5b0]; public:
    _Script_CoreUObject::Object*& get_BoundObjectOverride();
    _Script_MovieScene::MovieSceneSequence*& get_Sequence();
    void* get_RootTemplateInstance();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x5d8
#pragma pack(pop)
}
