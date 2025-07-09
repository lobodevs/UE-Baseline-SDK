#include "..\FUObjectArray.hpp"
#include "RecordedTransformTrack.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
_Script_CoreUObject::Class* _Script_Chaos::RecordedTransformTrack::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Chaos.RecordedTransformTrack");
    return result;
}
void* _Script_Chaos::RecordedTransformTrack::get_Records() {
    return (void*)((uintptr_t)this + 0x0);
}
