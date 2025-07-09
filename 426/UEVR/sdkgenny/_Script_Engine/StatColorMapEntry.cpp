#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "StatColorMapEntry.hpp"
float& _Script_Engine::StatColorMapEntry::get_In() {
    return *(float*)((uintptr_t)this + 0x0);
}
void* _Script_Engine::StatColorMapEntry::get_Out() {
    return (void*)((uintptr_t)this + 0x4);
}
_Script_CoreUObject::Class* _Script_Engine::StatColorMapEntry::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.StatColorMapEntry");
    return result;
}
