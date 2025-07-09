#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\TimecodeProvider.hpp"
#include "GenlockedTimecodeProvider.hpp"
bool _Script_TimeManagement::GenlockedTimecodeProvider::get_bUseGenlockToCount() {
    return (*(uint8_t*)((uintptr_t)this + 0x30 + 0)) & 1 != 0;
}
void _Script_TimeManagement::GenlockedTimecodeProvider::set_bUseGenlockToCount(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x30 + 0);
    *(uint8_t*)((uintptr_t)this + 0x30 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_CoreUObject::Class* _Script_TimeManagement::GenlockedTimecodeProvider::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/TimeManagement.GenlockedTimecodeProvider");
    return result;
}
