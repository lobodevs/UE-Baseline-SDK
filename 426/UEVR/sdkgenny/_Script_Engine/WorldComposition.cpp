#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "WorldComposition.hpp"
void* _Script_Engine::WorldComposition::get_TilesStreaming() {
    return (void*)((uintptr_t)this + 0x48);
}
float& _Script_Engine::WorldComposition::get_RebaseOriginDistance() {
    return *(float*)((uintptr_t)this + 0x64);
}
double& _Script_Engine::WorldComposition::get_TilesStreamingTimeThreshold() {
    return *(double*)((uintptr_t)this + 0x58);
}
_Script_CoreUObject::Class* _Script_Engine::WorldComposition::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.WorldComposition");
    return result;
}
bool _Script_Engine::WorldComposition::get_bLoadAllTilesDuringCinematic() {
    return (*(uint8_t*)((uintptr_t)this + 0x60 + 0)) & 1 != 0;
}
void _Script_Engine::WorldComposition::set_bLoadAllTilesDuringCinematic(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x60 + 0);
    *(uint8_t*)((uintptr_t)this + 0x60 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_Engine::WorldComposition::get_bRebaseOriginIn3DSpace() {
    return (*(uint8_t*)((uintptr_t)this + 0x61 + 0)) & 1 != 0;
}
void _Script_Engine::WorldComposition::set_bRebaseOriginIn3DSpace(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x61 + 0);
    *(uint8_t*)((uintptr_t)this + 0x61 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
