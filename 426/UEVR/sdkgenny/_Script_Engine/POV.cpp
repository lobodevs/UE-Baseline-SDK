#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "POV.hpp"
void* _Script_Engine::POV::get_Location() {
    return (void*)((uintptr_t)this + 0x0);
}
void* _Script_Engine::POV::get_Rotation() {
    return (void*)((uintptr_t)this + 0xc);
}
float& _Script_Engine::POV::get_FOV() {
    return *(float*)((uintptr_t)this + 0x18);
}
_Script_CoreUObject::Class* _Script_Engine::POV::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.POV");
    return result;
}
