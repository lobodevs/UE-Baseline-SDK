#include "..\FUObjectArray.hpp"
#include "ActorSequence.hpp"
#include "ActorSequenceComponent.hpp"
#include "ActorSequencePlayer.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\ActorComponent.hpp"
void* _Script_ActorSequence::ActorSequenceComponent::get_PlaybackSettings() {
    return (void*)((uintptr_t)this + 0xb0);
}
_Script_ActorSequence::ActorSequence*& _Script_ActorSequence::ActorSequenceComponent::get_Sequence() {
    return *(_Script_ActorSequence::ActorSequence**)((uintptr_t)this + 0xc8);
}
_Script_ActorSequence::ActorSequencePlayer*& _Script_ActorSequence::ActorSequenceComponent::get_SequencePlayer() {
    return *(_Script_ActorSequence::ActorSequencePlayer**)((uintptr_t)this + 0xd0);
}
_Script_CoreUObject::Class* _Script_ActorSequence::ActorSequenceComponent::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/ActorSequence.ActorSequenceComponent");
    return result;
}
