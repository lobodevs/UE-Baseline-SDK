#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "BakedCustomAttributePerBoneData.hpp"
int32_t& _Script_Engine::BakedCustomAttributePerBoneData::get_BoneTreeIndex() {
    return *(int32_t*)((uintptr_t)this + 0x0);
}
void* _Script_Engine::BakedCustomAttributePerBoneData::get_StringAttributes() {
    return (void*)((uintptr_t)this + 0x8);
}
void* _Script_Engine::BakedCustomAttributePerBoneData::get_IntAttributes() {
    return (void*)((uintptr_t)this + 0x18);
}
void* _Script_Engine::BakedCustomAttributePerBoneData::get_FloatAttributes() {
    return (void*)((uintptr_t)this + 0x28);
}
_Script_CoreUObject::Class* _Script_Engine::BakedCustomAttributePerBoneData::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.BakedCustomAttributePerBoneData");
    return result;
}
