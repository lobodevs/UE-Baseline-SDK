#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "MaterialInterface.hpp"
#include "SkeletalMaterial.hpp"
_Script_Engine::MaterialInterface*& _Script_Engine::SkeletalMaterial::get_MaterialInterface() {
    return *(_Script_Engine::MaterialInterface**)((uintptr_t)this + 0x0);
}
_Script_CoreUObject::Class* _Script_Engine::SkeletalMaterial::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.SkeletalMaterial");
    return result;
}
void* _Script_Engine::SkeletalMaterial::get_MaterialSlotName() {
    return (void*)((uintptr_t)this + 0x8);
}
void* _Script_Engine::SkeletalMaterial::get_UVChannelData() {
    return (void*)((uintptr_t)this + 0x10);
}
