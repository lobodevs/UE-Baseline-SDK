#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_CoreUObject\Object.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_EngineSettings {
#pragma pack(push, 1)
struct GameMapsSettings : public _Script_CoreUObject::Object {
    private: char pad_28[0xc8]; public:
    void* get_LocalMapOptions();
    void* get_TransitionMap();
    bool get_bUseSplitscreen();
    void set_bUseSplitscreen(bool value);
    void* get_TwoPlayerSplitscreenLayout();
    void* get_ThreePlayerSplitscreenLayout();
    void* get_FourPlayerSplitscreenLayout();
    bool get_bOffsetPlayerGamepadIds();
    void set_bOffsetPlayerGamepadIds(bool value);
    void* get_GameInstanceClass();
    void* get_GameDefaultMap();
    void* get_ServerDefaultMap();
    void* get_GlobalDefaultGameMode();
    void* get_GlobalDefaultServerGameMode();
    void* get_GameModeMapPrefixes();
    void* get_GameModeClassAliases();
    static _Script_CoreUObject::Class* static_class();
    void SetSkipAssigningGamepadToPlayer1(bool bSkipFirstPlayer);
    bool GetSkipAssigningGamepadToPlayer1();
    _Script_EngineSettings::GameMapsSettings* GetGameMapsSettings();
}; // Size: 0xf0
#pragma pack(pop)
}
