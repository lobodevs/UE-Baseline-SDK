#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "MediaSoundComponentSpectralData.hpp"
float& _Script_MediaAssets::MediaSoundComponentSpectralData::get_FrequencyHz() {
    return *(float*)((uintptr_t)this + 0x0);
}
float& _Script_MediaAssets::MediaSoundComponentSpectralData::get_Magnitude() {
    return *(float*)((uintptr_t)this + 0x4);
}
_Script_CoreUObject::Class* _Script_MediaAssets::MediaSoundComponentSpectralData::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/MediaAssets.MediaSoundComponentSpectralData");
    return result;
}
