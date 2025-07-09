#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\BlueprintGeneratedClass.hpp"
#include "WidgetBlueprintGeneratedClass.hpp"
#include "WidgetTree.hpp"
_Script_CoreUObject::Class* _Script_UMG::WidgetBlueprintGeneratedClass::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/UMG.WidgetBlueprintGeneratedClass");
    return result;
}
_Script_UMG::WidgetTree*& _Script_UMG::WidgetBlueprintGeneratedClass::get_WidgetTree() {
    return *(_Script_UMG::WidgetTree**)((uintptr_t)this + 0x328);
}
bool _Script_UMG::WidgetBlueprintGeneratedClass::get_bClassRequiresNativeTick() {
    return (*(uint8_t*)((uintptr_t)this + 0x330 + 0)) & 1 != 0;
}
void* _Script_UMG::WidgetBlueprintGeneratedClass::get_NamedSlots() {
    return (void*)((uintptr_t)this + 0x358);
}
void _Script_UMG::WidgetBlueprintGeneratedClass::set_bClassRequiresNativeTick(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x330 + 0);
    *(uint8_t*)((uintptr_t)this + 0x330 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_UMG::WidgetBlueprintGeneratedClass::get_Bindings() {
    return (void*)((uintptr_t)this + 0x338);
}
void* _Script_UMG::WidgetBlueprintGeneratedClass::get_Animations() {
    return (void*)((uintptr_t)this + 0x348);
}
