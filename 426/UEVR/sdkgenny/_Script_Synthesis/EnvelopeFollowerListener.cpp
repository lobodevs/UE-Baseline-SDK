#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\ActorComponent.hpp"
#include "EnvelopeFollowerListener.hpp"
void* _Script_Synthesis::EnvelopeFollowerListener::get_OnEnvelopeFollowerUpdate() {
    return (void*)((uintptr_t)this + 0xb0);
}
_Script_CoreUObject::Class* _Script_Synthesis::EnvelopeFollowerListener::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Synthesis.EnvelopeFollowerListener");
    return result;
}
