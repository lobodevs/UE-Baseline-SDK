#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\Actor.hpp"
namespace _Script_TemplateSequence {
struct TemplateSequencePlayer;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_TemplateSequence {
struct TemplateSequence;
}
namespace _Script_TemplateSequence {
#pragma pack(push, 1)
struct TemplateSequenceActor : public _Script_Engine::Actor {
    private: char pad_220[0x50]; public:
    void* get_PlaybackSettings();
    _Script_TemplateSequence::TemplateSequencePlayer*& get_SequencePlayer();
    void* get_TemplateSequence();
    void* get_BindingOverride();
    static _Script_CoreUObject::Class* static_class();
    void SetSequence(_Script_TemplateSequence::TemplateSequence* InSequence);
    void SetBinding(_Script_Engine::Actor* Actor);
    _Script_TemplateSequence::TemplateSequence* LoadSequence();
    _Script_TemplateSequence::TemplateSequencePlayer* GetSequencePlayer();
    _Script_TemplateSequence::TemplateSequence* GetSequence();
}; // Size: 0x270
#pragma pack(pop)
}
