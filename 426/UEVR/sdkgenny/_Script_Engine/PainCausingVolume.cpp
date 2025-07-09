#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "Controller.hpp"
#include "PainCausingVolume.hpp"
#include "PhysicsVolume.hpp"
bool _Script_Engine::PainCausingVolume::get_bEntryPain() {
    return (*(uint8_t*)((uintptr_t)this + 0x27c + 0)) & 1 != 0;
}
void _Script_Engine::PainCausingVolume::set_bEntryPain(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x27c + 0);
    *(uint8_t*)((uintptr_t)this + 0x27c + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_Engine::PainCausingVolume::get_bPainCausing() {
    return (*(uint8_t*)((uintptr_t)this + 0x268 + 0)) & 1 != 0;
}
float& _Script_Engine::PainCausingVolume::get_PainInterval() {
    return *(float*)((uintptr_t)this + 0x278);
}
void _Script_Engine::PainCausingVolume::set_bPainCausing(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x268 + 0);
    *(uint8_t*)((uintptr_t)this + 0x268 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
float& _Script_Engine::PainCausingVolume::get_DamagePerSec() {
    return *(float*)((uintptr_t)this + 0x26c);
}
void* _Script_Engine::PainCausingVolume::get_DamageType() {
    return (void*)((uintptr_t)this + 0x270);
}
bool _Script_Engine::PainCausingVolume::get_BACKUP_bPainCausing() {
    return (*(uint8_t*)((uintptr_t)this + 0x27c + 0)) & 2 != 0;
}
void _Script_Engine::PainCausingVolume::set_BACKUP_bPainCausing(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x27c + 0);
    *(uint8_t*)((uintptr_t)this + 0x27c + 0) = (cur_value & ~2) | (value ? 2 : 0);
}
_Script_CoreUObject::Class* _Script_Engine::PainCausingVolume::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.PainCausingVolume");
    return result;
}
_Script_Engine::Controller*& _Script_Engine::PainCausingVolume::get_DamageInstigator() {
    return *(_Script_Engine::Controller**)((uintptr_t)this + 0x280);
}
