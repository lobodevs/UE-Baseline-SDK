#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "InterpTrack.hpp"
#include "InterpTrackVectorBase.hpp"
void* _Script_Engine::InterpTrackVectorBase::get_VectorTrack() {
    return (void*)((uintptr_t)this + 0x70);
}
float& _Script_Engine::InterpTrackVectorBase::get_CurveTension() {
    return *(float*)((uintptr_t)this + 0x88);
}
_Script_CoreUObject::Class* _Script_Engine::InterpTrackVectorBase::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.InterpTrackVectorBase");
    return result;
}
