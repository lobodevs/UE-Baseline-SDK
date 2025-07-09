#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "CurveLinearColor.hpp"
#include "TimelineLinearColorTrack.hpp"
_Script_Engine::CurveLinearColor*& _Script_Engine::TimelineLinearColorTrack::get_LinearColorCurve() {
    return *(_Script_Engine::CurveLinearColor**)((uintptr_t)this + 0x0);
}
void* _Script_Engine::TimelineLinearColorTrack::get_InterpFunc() {
    return (void*)((uintptr_t)this + 0x8);
}
void* _Script_Engine::TimelineLinearColorTrack::get_LinearColorPropertyName() {
    return (void*)((uintptr_t)this + 0x20);
}
void* _Script_Engine::TimelineLinearColorTrack::get_TrackName() {
    return (void*)((uintptr_t)this + 0x18);
}
_Script_CoreUObject::Class* _Script_Engine::TimelineLinearColorTrack::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.TimelineLinearColorTrack");
    return result;
}
