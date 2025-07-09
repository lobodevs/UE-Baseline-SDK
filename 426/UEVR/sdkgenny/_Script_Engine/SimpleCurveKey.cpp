#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "SimpleCurveKey.hpp"
float& _Script_Engine::SimpleCurveKey::get_Time() {
    return *(float*)((uintptr_t)this + 0x0);
}
float& _Script_Engine::SimpleCurveKey::get_Value() {
    return *(float*)((uintptr_t)this + 0x4);
}
_Script_CoreUObject::Class* _Script_Engine::SimpleCurveKey::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.SimpleCurveKey");
    return result;
}
