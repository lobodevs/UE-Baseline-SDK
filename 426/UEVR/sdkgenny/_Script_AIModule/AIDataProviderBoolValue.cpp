#include "..\FUObjectArray.hpp"
#include "AIDataProviderBoolValue.hpp"
#include "AIDataProviderTypedValue.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
_Script_CoreUObject::Class* _Script_AIModule::AIDataProviderBoolValue::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/AIModule.AIDataProviderBoolValue");
    return result;
}
bool _Script_AIModule::AIDataProviderBoolValue::get_DefaultValue() {
    return (*(uint8_t*)((uintptr_t)this + 0x30 + 0)) & 1 != 0;
}
void _Script_AIModule::AIDataProviderBoolValue::set_DefaultValue(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x30 + 0);
    *(uint8_t*)((uintptr_t)this + 0x30 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
