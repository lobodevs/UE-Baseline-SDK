#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "Synth1PatchCable.hpp"
float& _Script_Synthesis::Synth1PatchCable::get_Depth() {
    return *(float*)((uintptr_t)this + 0x0);
}
void* _Script_Synthesis::Synth1PatchCable::get_Destination() {
    return (void*)((uintptr_t)this + 0x4);
}
_Script_CoreUObject::Class* _Script_Synthesis::Synth1PatchCable::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Synthesis.Synth1PatchCable");
    return result;
}
