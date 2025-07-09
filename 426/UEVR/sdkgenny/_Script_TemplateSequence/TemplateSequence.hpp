#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_MovieScene\MovieSceneSequence.hpp"
namespace _Script_MovieScene {
struct MovieScene;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_TemplateSequence {
#pragma pack(push, 1)
struct TemplateSequence : public _Script_MovieScene::MovieSceneSequence {
    private: char pad_60[0xa8]; public:
    _Script_MovieScene::MovieScene*& get_MovieScene();
    void* get_BoundActorClass();
    void* get_BoundPreviewActor();
    void* get_BoundActorComponents();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x108
#pragma pack(pop)
}
