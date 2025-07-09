#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "MediaPlayerOptions.hpp"
void* _Script_MediaUtils::MediaPlayerOptions::get_Tracks() {
    return (void*)((uintptr_t)this + 0x0);
}
void* _Script_MediaUtils::MediaPlayerOptions::get_SeekTime() {
    return (void*)((uintptr_t)this + 0x20);
}
void* _Script_MediaUtils::MediaPlayerOptions::get_PlayOnOpen() {
    return (void*)((uintptr_t)this + 0x28);
}
void* _Script_MediaUtils::MediaPlayerOptions::get_Loop() {
    return (void*)((uintptr_t)this + 0x29);
}
_Script_CoreUObject::Class* _Script_MediaUtils::MediaPlayerOptions::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/MediaUtils.MediaPlayerOptions");
    return result;
}
