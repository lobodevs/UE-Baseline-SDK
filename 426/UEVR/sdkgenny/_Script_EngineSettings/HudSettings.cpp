#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "HudSettings.hpp"
_Script_CoreUObject::Class* _Script_EngineSettings::HudSettings::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/EngineSettings.HudSettings");
    return result;
}
bool _Script_EngineSettings::HudSettings::get_bShowHUD() {
    return (*(uint8_t*)((uintptr_t)this + 0x28 + 0)) & 1 != 0;
}
void _Script_EngineSettings::HudSettings::set_bShowHUD(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x28 + 0);
    *(uint8_t*)((uintptr_t)this + 0x28 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_EngineSettings::HudSettings::get_DebugDisplay() {
    return (void*)((uintptr_t)this + 0x30);
}
