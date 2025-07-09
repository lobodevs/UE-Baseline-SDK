#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "AnimCompress.hpp"
#include "AnimCompress_RemoveLinearKeys.hpp"
float& _Script_Engine::AnimCompress_RemoveLinearKeys::get_MaxPosDiff() {
    return *(float*)((uintptr_t)this + 0x40);
}
float& _Script_Engine::AnimCompress_RemoveLinearKeys::get_MaxAngleDiff() {
    return *(float*)((uintptr_t)this + 0x44);
}
float& _Script_Engine::AnimCompress_RemoveLinearKeys::get_MaxScaleDiff() {
    return *(float*)((uintptr_t)this + 0x48);
}
float& _Script_Engine::AnimCompress_RemoveLinearKeys::get_ParentKeyScale() {
    return *(float*)((uintptr_t)this + 0x58);
}
float& _Script_Engine::AnimCompress_RemoveLinearKeys::get_MaxEffectorDiff() {
    return *(float*)((uintptr_t)this + 0x4c);
}
float& _Script_Engine::AnimCompress_RemoveLinearKeys::get_MinEffectorDiff() {
    return *(float*)((uintptr_t)this + 0x50);
}
float& _Script_Engine::AnimCompress_RemoveLinearKeys::get_EffectorDiffSocket() {
    return *(float*)((uintptr_t)this + 0x54);
}
bool _Script_Engine::AnimCompress_RemoveLinearKeys::get_bRetarget() {
    return (*(uint8_t*)((uintptr_t)this + 0x5c + 0)) & 1 != 0;
}
void _Script_Engine::AnimCompress_RemoveLinearKeys::set_bRetarget(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x5c + 0);
    *(uint8_t*)((uintptr_t)this + 0x5c + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_Engine::AnimCompress_RemoveLinearKeys::get_bActuallyFilterLinearKeys() {
    return (*(uint8_t*)((uintptr_t)this + 0x5c + 0)) & 2 != 0;
}
void _Script_Engine::AnimCompress_RemoveLinearKeys::set_bActuallyFilterLinearKeys(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x5c + 0);
    *(uint8_t*)((uintptr_t)this + 0x5c + 0) = (cur_value & ~2) | (value ? 2 : 0);
}
_Script_CoreUObject::Class* _Script_Engine::AnimCompress_RemoveLinearKeys::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.AnimCompress_RemoveLinearKeys");
    return result;
}
