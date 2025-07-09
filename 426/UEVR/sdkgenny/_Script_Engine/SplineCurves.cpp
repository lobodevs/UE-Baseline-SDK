#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "SplineCurves.hpp"
#include "SplineMetadata.hpp"
void* _Script_Engine::SplineCurves::get_Position() {
    return (void*)((uintptr_t)this + 0x0);
}
void* _Script_Engine::SplineCurves::get_Rotation() {
    return (void*)((uintptr_t)this + 0x18);
}
_Script_CoreUObject::Class* _Script_Engine::SplineCurves::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.SplineCurves");
    return result;
}
void* _Script_Engine::SplineCurves::get_Scale() {
    return (void*)((uintptr_t)this + 0x30);
}
_Script_Engine::SplineMetadata*& _Script_Engine::SplineCurves::get_MetaData() {
    return *(_Script_Engine::SplineMetadata**)((uintptr_t)this + 0x60);
}
void* _Script_Engine::SplineCurves::get_ReparamTable() {
    return (void*)((uintptr_t)this + 0x48);
}
void* _Script_Engine::SplineCurves::get_Version() {
    return (void*)((uintptr_t)this + 0x68);
}
