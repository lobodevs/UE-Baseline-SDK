#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "LensSettings.hpp"
void* _Script_Engine::LensSettings::get_Bloom() {
    return (void*)((uintptr_t)this + 0x0);
}
void* _Script_Engine::LensSettings::get_Imperfections() {
    return (void*)((uintptr_t)this + 0xb8);
}
float& _Script_Engine::LensSettings::get_ChromaticAberration() {
    return *(float*)((uintptr_t)this + 0xd8);
}
_Script_CoreUObject::Class* _Script_Engine::LensSettings::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.LensSettings");
    return result;
}
