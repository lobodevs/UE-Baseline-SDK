#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\Actor.hpp"
#include "TemplateSequence.hpp"
#include "TemplateSequenceActor.hpp"
#include "TemplateSequencePlayer.hpp"
void* _Script_TemplateSequence::TemplateSequenceActor::get_BindingOverride() {
    return (void*)((uintptr_t)this + 0x260);
}
void* _Script_TemplateSequence::TemplateSequenceActor::get_PlaybackSettings() {
    return (void*)((uintptr_t)this + 0x228);
}
_Script_TemplateSequence::TemplateSequence* _Script_TemplateSequence::TemplateSequenceActor::LoadSequence() {
    return;
}
_Script_TemplateSequence::TemplateSequencePlayer*& _Script_TemplateSequence::TemplateSequenceActor::get_SequencePlayer() {
    return *(_Script_TemplateSequence::TemplateSequencePlayer**)((uintptr_t)this + 0x240);
}
void* _Script_TemplateSequence::TemplateSequenceActor::get_TemplateSequence() {
    return (void*)((uintptr_t)this + 0x248);
}
_Script_CoreUObject::Class* _Script_TemplateSequence::TemplateSequenceActor::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/TemplateSequence.TemplateSequenceActor");
    return result;
}
void _Script_TemplateSequence::TemplateSequenceActor::SetBinding(_Script_Engine::Actor* Actor) {
    return;
}
void _Script_TemplateSequence::TemplateSequenceActor::SetSequence(_Script_TemplateSequence::TemplateSequence* InSequence) {
    return;
}
_Script_TemplateSequence::TemplateSequencePlayer* _Script_TemplateSequence::TemplateSequenceActor::GetSequencePlayer() {
    return;
}
_Script_TemplateSequence::TemplateSequence* _Script_TemplateSequence::TemplateSequenceActor::GetSequence() {
    return;
}
