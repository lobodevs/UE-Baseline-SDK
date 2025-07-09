#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "KShapeElem.hpp"
#include "KSphylElem.hpp"
void* _Script_Engine::KSphylElem::get_Center() {
    return (void*)((uintptr_t)this + 0x30);
}
void* _Script_Engine::KSphylElem::get_Rotation() {
    return (void*)((uintptr_t)this + 0x3c);
}
float& _Script_Engine::KSphylElem::get_Radius() {
    return *(float*)((uintptr_t)this + 0x48);
}
float& _Script_Engine::KSphylElem::get_Length() {
    return *(float*)((uintptr_t)this + 0x4c);
}
_Script_CoreUObject::Class* _Script_Engine::KSphylElem::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.KSphylElem");
    return result;
}
