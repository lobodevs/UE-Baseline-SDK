#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "CustomDefine.hpp"
void* _Script_Engine::CustomDefine::get_DefineName() {
    return (void*)((uintptr_t)this + 0x0);
}
void* _Script_Engine::CustomDefine::get_DefineValue() {
    return (void*)((uintptr_t)this + 0x10);
}
_Script_CoreUObject::Class* _Script_Engine::CustomDefine::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.CustomDefine");
    return result;
}
