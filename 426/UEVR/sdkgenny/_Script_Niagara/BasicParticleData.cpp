#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "BasicParticleData.hpp"
void* _Script_Niagara::BasicParticleData::get_Position() {
    return (void*)((uintptr_t)this + 0x0);
}
_Script_CoreUObject::Class* _Script_Niagara::BasicParticleData::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Niagara.BasicParticleData");
    return result;
}
float& _Script_Niagara::BasicParticleData::get_Size() {
    return *(float*)((uintptr_t)this + 0xc);
}
void* _Script_Niagara::BasicParticleData::get_Velocity() {
    return (void*)((uintptr_t)this + 0x10);
}
