#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_CoreUObject\Interface.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_AIModule {
struct BlackboardData;
}
namespace _Script_AIModule {
#pragma pack(push, 1)
struct BlackboardAssetProvider : public _Script_CoreUObject::Interface {
    static _Script_CoreUObject::Class* static_class();
    _Script_AIModule::BlackboardData* GetBlackboardAsset();
}; // Size: 0x28
#pragma pack(pop)
}
