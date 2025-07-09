#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "KShapeElem.hpp"
#include "KSphereElem.hpp"
void* _Script_Engine::KSphereElem::get_Center() {
    return (void*)((uintptr_t)this + 0x30);
}
float& _Script_Engine::KSphereElem::get_Radius() {
    return *(float*)((uintptr_t)this + 0x3c);
}
_Script_CoreUObject::Class* _Script_Engine::KSphereElem::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.KSphereElem");
    return result;
}
