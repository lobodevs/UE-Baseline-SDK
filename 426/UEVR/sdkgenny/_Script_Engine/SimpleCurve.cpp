#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "RealCurve.hpp"
#include "SimpleCurve.hpp"
void* _Script_Engine::SimpleCurve::get_InterpMode() {
    return (void*)((uintptr_t)this + 0x70);
}
void* _Script_Engine::SimpleCurve::get_Keys() {
    return (void*)((uintptr_t)this + 0x78);
}
_Script_CoreUObject::Class* _Script_Engine::SimpleCurve::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.SimpleCurve");
    return result;
}
