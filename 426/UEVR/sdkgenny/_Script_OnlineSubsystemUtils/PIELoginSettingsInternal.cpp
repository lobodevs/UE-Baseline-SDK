#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "PIELoginSettingsInternal.hpp"
_Script_CoreUObject::Class* _Script_OnlineSubsystemUtils::PIELoginSettingsInternal::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/OnlineSubsystemUtils.PIELoginSettingsInternal");
    return result;
}
void* _Script_OnlineSubsystemUtils::PIELoginSettingsInternal::get_ID() {
    return (void*)((uintptr_t)this + 0x0);
}
void* _Script_OnlineSubsystemUtils::PIELoginSettingsInternal::get_Token() {
    return (void*)((uintptr_t)this + 0x10);
}
void* _Script_OnlineSubsystemUtils::PIELoginSettingsInternal::get_TokenBytes() {
    return (void*)((uintptr_t)this + 0x30);
}
void* _Script_OnlineSubsystemUtils::PIELoginSettingsInternal::get_Type() {
    return (void*)((uintptr_t)this + 0x20);
}
