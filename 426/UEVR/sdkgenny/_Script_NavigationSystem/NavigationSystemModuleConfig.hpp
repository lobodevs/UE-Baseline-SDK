#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\NavigationSystemConfig.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_NavigationSystem {
#pragma pack(push, 1)
struct NavigationSystemModuleConfig : public _Script_Engine::NavigationSystemConfig {
    private: char pad_50[0x8]; public:
    bool get_bStrictlyStatic();
    void set_bStrictlyStatic(bool value);
    bool get_bCreateOnClient();
    void set_bCreateOnClient(bool value);
    bool get_bAutoSpawnMissingNavData();
    void set_bAutoSpawnMissingNavData(bool value);
    bool get_bSpawnNavDataInNavBoundsLevel();
    void set_bSpawnNavDataInNavBoundsLevel(bool value);
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x58
#pragma pack(pop)
}
