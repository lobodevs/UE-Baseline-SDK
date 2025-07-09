#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "SoundNode.hpp"
#include "SoundNodeMixer.hpp"
_Script_CoreUObject::Class* _Script_Engine::SoundNodeMixer::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.SoundNodeMixer");
    return result;
}
void* _Script_Engine::SoundNodeMixer::get_InputVolume() {
    return (void*)((uintptr_t)this + 0x48);
}
