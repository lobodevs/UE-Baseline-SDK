#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "CapturedPropSegment.hpp"
_Script_CoreUObject::Class* _Script_VariantManagerContent::CapturedPropSegment::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/VariantManagerContent.CapturedPropSegment");
    return result;
}
void* _Script_VariantManagerContent::CapturedPropSegment::get_PropertyName() {
    return (void*)((uintptr_t)this + 0x0);
}
int32_t& _Script_VariantManagerContent::CapturedPropSegment::get_PropertyIndex() {
    return *(int32_t*)((uintptr_t)this + 0x10);
}
void* _Script_VariantManagerContent::CapturedPropSegment::get_ComponentName() {
    return (void*)((uintptr_t)this + 0x18);
}
