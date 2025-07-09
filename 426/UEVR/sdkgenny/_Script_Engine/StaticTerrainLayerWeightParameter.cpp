#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "StaticParameterBase.hpp"
#include "StaticTerrainLayerWeightParameter.hpp"
_Script_CoreUObject::Class* _Script_Engine::StaticTerrainLayerWeightParameter::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.StaticTerrainLayerWeightParameter");
    return result;
}
int32_t& _Script_Engine::StaticTerrainLayerWeightParameter::get_WeightmapIndex() {
    return *(int32_t*)((uintptr_t)this + 0x24);
}
bool _Script_Engine::StaticTerrainLayerWeightParameter::get_bWeightBasedBlend() {
    return (*(uint8_t*)((uintptr_t)this + 0x28 + 0)) & 1 != 0;
}
void _Script_Engine::StaticTerrainLayerWeightParameter::set_bWeightBasedBlend(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x28 + 0);
    *(uint8_t*)((uintptr_t)this + 0x28 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
