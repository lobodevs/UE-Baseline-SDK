#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "GraphAssetPlayerInformation.hpp"
void* _Script_Engine::GraphAssetPlayerInformation::get_PlayerNodeIndices() {
    return (void*)((uintptr_t)this + 0x0);
}
_Script_CoreUObject::Class* _Script_Engine::GraphAssetPlayerInformation::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.GraphAssetPlayerInformation");
    return result;
}
