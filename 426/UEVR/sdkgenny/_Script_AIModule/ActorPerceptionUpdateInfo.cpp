#include "..\FUObjectArray.hpp"
#include "ActorPerceptionUpdateInfo.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
int32_t& _Script_AIModule::ActorPerceptionUpdateInfo::get_TargetId() {
    return *(int32_t*)((uintptr_t)this + 0x0);
}
void* _Script_AIModule::ActorPerceptionUpdateInfo::get_Target() {
    return (void*)((uintptr_t)this + 0x4);
}
void* _Script_AIModule::ActorPerceptionUpdateInfo::get_Stimulus() {
    return (void*)((uintptr_t)this + 0xc);
}
_Script_CoreUObject::Class* _Script_AIModule::ActorPerceptionUpdateInfo::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/AIModule.ActorPerceptionUpdateInfo");
    return result;
}
