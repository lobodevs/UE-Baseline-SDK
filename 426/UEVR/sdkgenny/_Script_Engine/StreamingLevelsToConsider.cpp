#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "StreamingLevelsToConsider.hpp"
void* _Script_Engine::StreamingLevelsToConsider::get_StreamingLevels() {
    return (void*)((uintptr_t)this + 0x0);
}
_Script_CoreUObject::Class* _Script_Engine::StreamingLevelsToConsider::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.StreamingLevelsToConsider");
    return result;
}
