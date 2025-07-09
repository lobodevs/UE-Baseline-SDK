#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "LayerActorStats.hpp"
_Script_CoreUObject::Class* _Script_Engine::LayerActorStats::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.LayerActorStats");
    return result;
}
int32_t& _Script_Engine::LayerActorStats::get_Total() {
    return *(int32_t*)((uintptr_t)this + 0x8);
}
void* _Script_Engine::LayerActorStats::get_Type() {
    return (void*)((uintptr_t)this + 0x0);
}
