#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "IndexedCurve.hpp"
#include "RealCurve.hpp"
float& _Script_Engine::RealCurve::get_DefaultValue() {
    return *(float*)((uintptr_t)this + 0x68);
}
void* _Script_Engine::RealCurve::get_PreInfinityExtrap() {
    return (void*)((uintptr_t)this + 0x6c);
}
void* _Script_Engine::RealCurve::get_PostInfinityExtrap() {
    return (void*)((uintptr_t)this + 0x6d);
}
_Script_CoreUObject::Class* _Script_Engine::RealCurve::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.RealCurve");
    return result;
}
