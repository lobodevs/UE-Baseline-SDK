#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "AnimCompress.hpp"
#include "AnimCompress_RemoveEverySecondKey.hpp"
bool _Script_Engine::AnimCompress_RemoveEverySecondKey::get_bStartAtSecondKey() {
    return (*(uint8_t*)((uintptr_t)this + 0x44 + 0)) & 1 != 0;
}
int32_t& _Script_Engine::AnimCompress_RemoveEverySecondKey::get_MinKeys() {
    return *(int32_t*)((uintptr_t)this + 0x40);
}
_Script_CoreUObject::Class* _Script_Engine::AnimCompress_RemoveEverySecondKey::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.AnimCompress_RemoveEverySecondKey");
    return result;
}
void _Script_Engine::AnimCompress_RemoveEverySecondKey::set_bStartAtSecondKey(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x44 + 0);
    *(uint8_t*)((uintptr_t)this + 0x44 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
