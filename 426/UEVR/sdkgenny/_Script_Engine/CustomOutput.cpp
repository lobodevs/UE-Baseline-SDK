#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "CustomOutput.hpp"
void* _Script_Engine::CustomOutput::get_OutputName() {
    return (void*)((uintptr_t)this + 0x0);
}
void* _Script_Engine::CustomOutput::get_OutputType() {
    return (void*)((uintptr_t)this + 0x8);
}
_Script_CoreUObject::Class* _Script_Engine::CustomOutput::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.CustomOutput");
    return result;
}
