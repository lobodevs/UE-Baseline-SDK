#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "CachedPoseIndices.hpp"
_Script_CoreUObject::Class* _Script_Engine::CachedPoseIndices::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.CachedPoseIndices");
    return result;
}
void* _Script_Engine::CachedPoseIndices::get_OrderedSavedPoseNodeIndices() {
    return (void*)((uintptr_t)this + 0x0);
}
