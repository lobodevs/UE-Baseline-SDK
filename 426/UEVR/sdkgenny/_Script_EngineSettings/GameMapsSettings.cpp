#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "GameMapsSettings.hpp"
void* _Script_EngineSettings::GameMapsSettings::get_LocalMapOptions() {
    return (void*)((uintptr_t)this + 0x28);
}
void _Script_EngineSettings::GameMapsSettings::set_bUseSplitscreen(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x50 + 0);
    *(uint8_t*)((uintptr_t)this + 0x50 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_EngineSettings::GameMapsSettings::get_TransitionMap() {
    return (void*)((uintptr_t)this + 0x38);
}
bool _Script_EngineSettings::GameMapsSettings::get_bUseSplitscreen() {
    return (*(uint8_t*)((uintptr_t)this + 0x50 + 0)) & 1 != 0;
}
void* _Script_EngineSettings::GameMapsSettings::get_TwoPlayerSplitscreenLayout() {
    return (void*)((uintptr_t)this + 0x51);
}
void* _Script_EngineSettings::GameMapsSettings::get_FourPlayerSplitscreenLayout() {
    return (void*)((uintptr_t)this + 0x53);
}
void* _Script_EngineSettings::GameMapsSettings::get_ThreePlayerSplitscreenLayout() {
    return (void*)((uintptr_t)this + 0x52);
}
bool _Script_EngineSettings::GameMapsSettings::get_bOffsetPlayerGamepadIds() {
    return (*(uint8_t*)((uintptr_t)this + 0x54 + 0)) & 1 != 0;
}
void _Script_EngineSettings::GameMapsSettings::set_bOffsetPlayerGamepadIds(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x54 + 0);
    *(uint8_t*)((uintptr_t)this + 0x54 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_EngineSettings::GameMapsSettings::get_GameInstanceClass() {
    return (void*)((uintptr_t)this + 0x58);
}
void* _Script_EngineSettings::GameMapsSettings::get_GameDefaultMap() {
    return (void*)((uintptr_t)this + 0x70);
}
void* _Script_EngineSettings::GameMapsSettings::get_ServerDefaultMap() {
    return (void*)((uintptr_t)this + 0x88);
}
void* _Script_EngineSettings::GameMapsSettings::get_GlobalDefaultGameMode() {
    return (void*)((uintptr_t)this + 0xa0);
}
void* _Script_EngineSettings::GameMapsSettings::get_GlobalDefaultServerGameMode() {
    return (void*)((uintptr_t)this + 0xb8);
}
void* _Script_EngineSettings::GameMapsSettings::get_GameModeMapPrefixes() {
    return (void*)((uintptr_t)this + 0xd0);
}
void* _Script_EngineSettings::GameMapsSettings::get_GameModeClassAliases() {
    return (void*)((uintptr_t)this + 0xe0);
}
_Script_CoreUObject::Class* _Script_EngineSettings::GameMapsSettings::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/EngineSettings.GameMapsSettings");
    return result;
}
void _Script_EngineSettings::GameMapsSettings::SetSkipAssigningGamepadToPlayer1(bool bSkipFirstPlayer) {
    return;
}
bool _Script_EngineSettings::GameMapsSettings::GetSkipAssigningGamepadToPlayer1() {
    return;
}
_Script_EngineSettings::GameMapsSettings* _Script_EngineSettings::GameMapsSettings::GetGameMapsSettings() {
    return;
}
