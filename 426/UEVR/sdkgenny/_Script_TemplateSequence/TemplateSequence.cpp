#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_MovieScene\MovieScene.hpp"
#include "..\_Script_MovieScene\MovieSceneSequence.hpp"
#include "TemplateSequence.hpp"
_Script_MovieScene::MovieScene*& _Script_TemplateSequence::TemplateSequence::get_MovieScene() {
    return *(_Script_MovieScene::MovieScene**)((uintptr_t)this + 0x60);
}
_Script_CoreUObject::Class* _Script_TemplateSequence::TemplateSequence::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/TemplateSequence.TemplateSequence");
    return result;
}
void* _Script_TemplateSequence::TemplateSequence::get_BoundActorClass() {
    return (void*)((uintptr_t)this + 0x68);
}
void* _Script_TemplateSequence::TemplateSequence::get_BoundPreviewActor() {
    return (void*)((uintptr_t)this + 0x90);
}
void* _Script_TemplateSequence::TemplateSequence::get_BoundActorComponents() {
    return (void*)((uintptr_t)this + 0xb8);
}
