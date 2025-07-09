#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "TTTrackId.hpp"
int32_t& _Script_Engine::TTTrackId::get_TrackType() {
    return *(int32_t*)((uintptr_t)this + 0x0);
}
int32_t& _Script_Engine::TTTrackId::get_TrackIndex() {
    return *(int32_t*)((uintptr_t)this + 0x4);
}
_Script_CoreUObject::Class* _Script_Engine::TTTrackId::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.TTTrackId");
    return result;
}
