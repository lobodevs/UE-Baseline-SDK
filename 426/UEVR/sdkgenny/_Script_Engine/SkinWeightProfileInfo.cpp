#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "SkinWeightProfileInfo.hpp"
void* _Script_Engine::SkinWeightProfileInfo::get_Name() {
    return (void*)((uintptr_t)this + 0x0);
}
_Script_CoreUObject::Class* _Script_Engine::SkinWeightProfileInfo::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.SkinWeightProfileInfo");
    return result;
}
void* _Script_Engine::SkinWeightProfileInfo::get_DefaultProfile() {
    return (void*)((uintptr_t)this + 0x8);
}
void* _Script_Engine::SkinWeightProfileInfo::get_DefaultProfileFromLODIndex() {
    return (void*)((uintptr_t)this + 0xc);
}
