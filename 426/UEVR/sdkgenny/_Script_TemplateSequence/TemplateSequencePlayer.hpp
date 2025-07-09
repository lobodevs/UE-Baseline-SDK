#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_MovieScene\MovieSceneSequencePlaybackSettings.hpp"
#include "..\_Script_MovieScene\MovieSceneSequencePlayer.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_CoreUObject {
struct Object;
}
namespace _Script_TemplateSequence {
struct TemplateSequence;
}
namespace _Script_TemplateSequence {
struct TemplateSequenceActor;
}
namespace _Script_TemplateSequence {
#pragma pack(push, 1)
struct TemplateSequencePlayer : public _Script_MovieScene::MovieSceneSequencePlayer {
    private: char pad_680[0x8]; public:
    static _Script_CoreUObject::Class* static_class();
    _Script_TemplateSequence::TemplateSequencePlayer* CreateTemplateSequencePlayer(_Script_CoreUObject::Object* WorldContextObject, _Script_TemplateSequence::TemplateSequence* TemplateSequence, _Script_MovieScene::MovieSceneSequencePlaybackSettings Settings, _Script_TemplateSequence::TemplateSequenceActor*& OutActor);
}; // Size: 0x688
#pragma pack(pop)
}
