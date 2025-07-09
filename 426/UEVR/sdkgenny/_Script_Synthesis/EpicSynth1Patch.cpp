#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "EpicSynth1Patch.hpp"
_Script_CoreUObject::Class* _Script_Synthesis::EpicSynth1Patch::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Synthesis.EpicSynth1Patch");
    return result;
}
void* _Script_Synthesis::EpicSynth1Patch::get_PatchSource() {
    return (void*)((uintptr_t)this + 0x0);
}
void* _Script_Synthesis::EpicSynth1Patch::get_PatchCables() {
    return (void*)((uintptr_t)this + 0x8);
}
