#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_CoreUObject\Object.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct WorldComposition : public _Script_CoreUObject::Object {
    private: char pad_28[0x40]; public:
    void* get_TilesStreaming();
    double& get_TilesStreamingTimeThreshold();
    bool get_bLoadAllTilesDuringCinematic();
    void set_bLoadAllTilesDuringCinematic(bool value);
    bool get_bRebaseOriginIn3DSpace();
    void set_bRebaseOriginIn3DSpace(bool value);
    float& get_RebaseOriginDistance();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x68
#pragma pack(pop)
}
