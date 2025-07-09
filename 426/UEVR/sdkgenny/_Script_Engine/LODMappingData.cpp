#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "LODMappingData.hpp"
void* _Script_Engine::LODMappingData::get_Mapping() {
    return (void*)((uintptr_t)this + 0x0);
}
_Script_CoreUObject::Class* _Script_Engine::LODMappingData::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.LODMappingData");
    return result;
}
void* _Script_Engine::LODMappingData::get_InverseMapping() {
    return (void*)((uintptr_t)this + 0x10);
}
