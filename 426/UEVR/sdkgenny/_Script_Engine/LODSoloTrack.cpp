#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "LODSoloTrack.hpp"
_Script_CoreUObject::Class* _Script_Engine::LODSoloTrack::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.LODSoloTrack");
    return result;
}
void* _Script_Engine::LODSoloTrack::get_SoloEnableSetting() {
    return (void*)((uintptr_t)this + 0x0);
}
