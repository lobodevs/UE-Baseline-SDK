#include "..\FUObjectArray.hpp"
#include "AIDataProvider.hpp"
#include "AIDataProviderValue.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
_Script_AIModule::AIDataProvider*& _Script_AIModule::AIDataProviderValue::get_DataBinding() {
    return *(_Script_AIModule::AIDataProvider**)((uintptr_t)this + 0x10);
}
void* _Script_AIModule::AIDataProviderValue::get_DataField() {
    return (void*)((uintptr_t)this + 0x18);
}
_Script_CoreUObject::Class* _Script_AIModule::AIDataProviderValue::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/AIModule.AIDataProviderValue");
    return result;
}
