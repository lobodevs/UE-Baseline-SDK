#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "SourceEffectEQSettings.hpp"
void* _Script_Synthesis::SourceEffectEQSettings::get_EQBands() {
    return (void*)((uintptr_t)this + 0x0);
}
_Script_CoreUObject::Class* _Script_Synthesis::SourceEffectEQSettings::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Synthesis.SourceEffectEQSettings");
    return result;
}
