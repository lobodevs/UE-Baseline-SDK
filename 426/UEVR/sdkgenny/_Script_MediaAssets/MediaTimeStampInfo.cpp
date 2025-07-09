#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "MediaTimeStampInfo.hpp"
void* _Script_MediaAssets::MediaTimeStampInfo::get_Time() {
    return (void*)((uintptr_t)this + 0x28);
}
_Script_CoreUObject::Class* _Script_MediaAssets::MediaTimeStampInfo::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/MediaAssets.MediaTimeStampInfo");
    return result;
}
void* _Script_MediaAssets::MediaTimeStampInfo::get_SequenceIndex() {
    return (void*)((uintptr_t)this + 0x30);
}
