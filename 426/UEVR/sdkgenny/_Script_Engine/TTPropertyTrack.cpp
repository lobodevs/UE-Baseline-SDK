#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "TTPropertyTrack.hpp"
#include "TTTrackBase.hpp"
void* _Script_Engine::TTPropertyTrack::get_PropertyName() {
    return (void*)((uintptr_t)this + 0x18);
}
_Script_CoreUObject::Class* _Script_Engine::TTPropertyTrack::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.TTPropertyTrack");
    return result;
}
