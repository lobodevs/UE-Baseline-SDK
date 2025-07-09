#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "UMGSequencePlayer.hpp"
#include "WidgetAnimation.hpp"
_Script_UMG::WidgetAnimation*& _Script_UMG::UMGSequencePlayer::get_Animation() {
    return *(_Script_UMG::WidgetAnimation**)((uintptr_t)this + 0x410);
}
void* _Script_UMG::UMGSequencePlayer::get_RootTemplateInstance() {
    return (void*)((uintptr_t)this + 0x420);
}
_Script_CoreUObject::Class* _Script_UMG::UMGSequencePlayer::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/UMG.UMGSequencePlayer");
    return result;
}
void _Script_UMG::UMGSequencePlayer::SetUserTag(void* InUserTag) {
    return;
}
void* _Script_UMG::UMGSequencePlayer::GetUserTag() {
    return;
}
