#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "SubsurfaceProfileStruct.hpp"
void* _Script_Engine::SubsurfaceProfileStruct::get_SurfaceAlbedo() {
    return (void*)((uintptr_t)this + 0x0);
}
void* _Script_Engine::SubsurfaceProfileStruct::get_SubsurfaceColor() {
    return (void*)((uintptr_t)this + 0x30);
}
void* _Script_Engine::SubsurfaceProfileStruct::get_MeanFreePathColor() {
    return (void*)((uintptr_t)this + 0x10);
}
bool _Script_Engine::SubsurfaceProfileStruct::get_bEnableBurley() {
    return (*(uint8_t*)((uintptr_t)this + 0x28 + 0)) & 1 != 0;
}
float& _Script_Engine::SubsurfaceProfileStruct::get_MeanFreePathDistance() {
    return *(float*)((uintptr_t)this + 0x20);
}
float& _Script_Engine::SubsurfaceProfileStruct::get_ScatterRadius() {
    return *(float*)((uintptr_t)this + 0x2c);
}
float& _Script_Engine::SubsurfaceProfileStruct::get_WorldUnitScale() {
    return *(float*)((uintptr_t)this + 0x24);
}
void _Script_Engine::SubsurfaceProfileStruct::set_bEnableBurley(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x28 + 0);
    *(uint8_t*)((uintptr_t)this + 0x28 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_Engine::SubsurfaceProfileStruct::get_FalloffColor() {
    return (void*)((uintptr_t)this + 0x40);
}
void* _Script_Engine::SubsurfaceProfileStruct::get_BoundaryColorBleed() {
    return (void*)((uintptr_t)this + 0x50);
}
float& _Script_Engine::SubsurfaceProfileStruct::get_ExtinctionScale() {
    return *(float*)((uintptr_t)this + 0x60);
}
float& _Script_Engine::SubsurfaceProfileStruct::get_NormalScale() {
    return *(float*)((uintptr_t)this + 0x64);
}
float& _Script_Engine::SubsurfaceProfileStruct::get_ScatteringDistribution() {
    return *(float*)((uintptr_t)this + 0x68);
}
float& _Script_Engine::SubsurfaceProfileStruct::get_IOR() {
    return *(float*)((uintptr_t)this + 0x6c);
}
float& _Script_Engine::SubsurfaceProfileStruct::get_Roughness0() {
    return *(float*)((uintptr_t)this + 0x70);
}
float& _Script_Engine::SubsurfaceProfileStruct::get_Roughness1() {
    return *(float*)((uintptr_t)this + 0x74);
}
float& _Script_Engine::SubsurfaceProfileStruct::get_LobeMix() {
    return *(float*)((uintptr_t)this + 0x78);
}
void* _Script_Engine::SubsurfaceProfileStruct::get_TransmissionTintColor() {
    return (void*)((uintptr_t)this + 0x7c);
}
_Script_CoreUObject::Class* _Script_Engine::SubsurfaceProfileStruct::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.SubsurfaceProfileStruct");
    return result;
}
