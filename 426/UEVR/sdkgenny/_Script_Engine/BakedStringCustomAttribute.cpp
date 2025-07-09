#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "BakedStringCustomAttribute.hpp"
void* _Script_Engine::BakedStringCustomAttribute::get_AttributeName() {
    return (void*)((uintptr_t)this + 0x0);
}
_Script_CoreUObject::Class* _Script_Engine::BakedStringCustomAttribute::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.BakedStringCustomAttribute");
    return result;
}
void* _Script_Engine::BakedStringCustomAttribute::get_StringCurve() {
    return (void*)((uintptr_t)this + 0x8);
}
