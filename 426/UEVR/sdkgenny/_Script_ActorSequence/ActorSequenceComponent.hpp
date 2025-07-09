#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\ActorComponent.hpp"
namespace _Script_ActorSequence {
struct ActorSequence;
}
namespace _Script_ActorSequence {
struct ActorSequencePlayer;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_ActorSequence {
#pragma pack(push, 1)
struct ActorSequenceComponent : public _Script_Engine::ActorComponent {
    private: char pad_b0[0x28]; public:
    void* get_PlaybackSettings();
    _Script_ActorSequence::ActorSequence*& get_Sequence();
    _Script_ActorSequence::ActorSequencePlayer*& get_SequencePlayer();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0xd8
#pragma pack(pop)
}
