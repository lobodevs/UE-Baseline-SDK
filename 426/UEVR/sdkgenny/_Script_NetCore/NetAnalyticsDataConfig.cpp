#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "NetAnalyticsDataConfig.hpp"
_Script_CoreUObject::Class* _Script_NetCore::NetAnalyticsDataConfig::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/NetCore.NetAnalyticsDataConfig");
    return result;
}
void* _Script_NetCore::NetAnalyticsDataConfig::get_DataName() {
    return (void*)((uintptr_t)this + 0x0);
}
bool _Script_NetCore::NetAnalyticsDataConfig::get_bEnabled() {
    return (*(uint8_t*)((uintptr_t)this + 0x8 + 0)) & 1 != 0;
}
void _Script_NetCore::NetAnalyticsDataConfig::set_bEnabled(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x8 + 0);
    *(uint8_t*)((uintptr_t)this + 0x8 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
