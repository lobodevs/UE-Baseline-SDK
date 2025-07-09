#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\Actor.hpp"
#include "..\_Script_Engine\SceneComponent.hpp"
#include "SwitchActor.hpp"
int32_t& _Script_VariantManagerContent::SwitchActor::get_LastSelectedOption() {
    return *(int32_t*)((uintptr_t)this + 0x240);
}
_Script_Engine::SceneComponent*& _Script_VariantManagerContent::SwitchActor::get_SceneComponent() {
    return *(_Script_Engine::SceneComponent**)((uintptr_t)this + 0x238);
}
_Script_CoreUObject::Class* _Script_VariantManagerContent::SwitchActor::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/VariantManagerContent.SwitchActor");
    return result;
}
void _Script_VariantManagerContent::SwitchActor::SelectOption(int32_t OptionIndex) {
    return;
}
int32_t _Script_VariantManagerContent::SwitchActor::GetSelectedOption() {
    return;
}
void* _Script_VariantManagerContent::SwitchActor::GetOptions() {
    return;
}
