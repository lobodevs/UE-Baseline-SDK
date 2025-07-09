#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "FormatArgumentData.hpp"
_Script_CoreUObject::Class* _Script_Engine::FormatArgumentData::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.FormatArgumentData");
    return result;
}
void* _Script_Engine::FormatArgumentData::get_ArgumentName() {
    return (void*)((uintptr_t)this + 0x0);
}
void* _Script_Engine::FormatArgumentData::get_ArgumentValueType() {
    return (void*)((uintptr_t)this + 0x10);
}
float& _Script_Engine::FormatArgumentData::get_ArgumentValueFloat() {
    return *(float*)((uintptr_t)this + 0x34);
}
void* _Script_Engine::FormatArgumentData::get_ArgumentValue() {
    return (void*)((uintptr_t)this + 0x18);
}
int32_t& _Script_Engine::FormatArgumentData::get_ArgumentValueInt() {
    return *(int32_t*)((uintptr_t)this + 0x30);
}
void* _Script_Engine::FormatArgumentData::get_ArgumentValueGender() {
    return (void*)((uintptr_t)this + 0x38);
}
