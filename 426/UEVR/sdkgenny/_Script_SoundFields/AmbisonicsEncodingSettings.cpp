#include "..\FUObjectArray.hpp"
#include "..\_Script_AudioExtensions\SoundfieldEncodingSettingsBase.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "AmbisonicsEncodingSettings.hpp"
int32_t& _Script_SoundFields::AmbisonicsEncodingSettings::get_AmbisonicsOrder() {
    return *(int32_t*)((uintptr_t)this + 0x28);
}
_Script_CoreUObject::Class* _Script_SoundFields::AmbisonicsEncodingSettings::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/SoundFields.AmbisonicsEncodingSettings");
    return result;
}
