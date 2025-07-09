#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "SoundNode.hpp"
#include "SoundNodeModulator.hpp"
float& _Script_Engine::SoundNodeModulator::get_PitchMin() {
    return *(float*)((uintptr_t)this + 0x48);
}
_Script_CoreUObject::Class* _Script_Engine::SoundNodeModulator::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.SoundNodeModulator");
    return result;
}
float& _Script_Engine::SoundNodeModulator::get_PitchMax() {
    return *(float*)((uintptr_t)this + 0x4c);
}
float& _Script_Engine::SoundNodeModulator::get_VolumeMin() {
    return *(float*)((uintptr_t)this + 0x50);
}
float& _Script_Engine::SoundNodeModulator::get_VolumeMax() {
    return *(float*)((uintptr_t)this + 0x54);
}
