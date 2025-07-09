#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "DataAsset.hpp"
#include "SkeletalMeshLODSettings.hpp"
void* _Script_Engine::SkeletalMeshLODSettings::get_LODGroups() {
    return (void*)((uintptr_t)this + 0x40);
}
void* _Script_Engine::SkeletalMeshLODSettings::get_MinLOD() {
    return (void*)((uintptr_t)this + 0x30);
}
void* _Script_Engine::SkeletalMeshLODSettings::get_DisableBelowMinLodStripping() {
    return (void*)((uintptr_t)this + 0x34);
}
void* _Script_Engine::SkeletalMeshLODSettings::get_MaxNumStreamedLODs() {
    return (void*)((uintptr_t)this + 0x38);
}
bool _Script_Engine::SkeletalMeshLODSettings::get_bOverrideLODStreamingSettings() {
    return (*(uint8_t*)((uintptr_t)this + 0x35 + 0)) & 1 != 0;
}
void _Script_Engine::SkeletalMeshLODSettings::set_bOverrideLODStreamingSettings(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x35 + 0);
    *(uint8_t*)((uintptr_t)this + 0x35 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_Engine::SkeletalMeshLODSettings::get_bSupportLODStreaming() {
    return (void*)((uintptr_t)this + 0x36);
}
void* _Script_Engine::SkeletalMeshLODSettings::get_MaxNumOptionalLODs() {
    return (void*)((uintptr_t)this + 0x3c);
}
_Script_CoreUObject::Class* _Script_Engine::SkeletalMeshLODSettings::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.SkeletalMeshLODSettings");
    return result;
}
