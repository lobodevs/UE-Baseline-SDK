#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_MediaAssets\MediaSource.hpp"
#include "MovieSceneMediaPlayerPropertySectionTemplate.hpp"
#include "..\_Script_MovieScene\MovieScenePropertySectionTemplate.hpp"
_Script_MediaAssets::MediaSource*& _Script_MediaCompositing::MovieSceneMediaPlayerPropertySectionTemplate::get_MediaSource() {
    return *(_Script_MediaAssets::MediaSource**)((uintptr_t)this + 0x38);
}
bool _Script_MediaCompositing::MovieSceneMediaPlayerPropertySectionTemplate::get_bLoop() {
    return (*(uint8_t*)((uintptr_t)this + 0x44 + 0)) & 1 != 0;
}
void* _Script_MediaCompositing::MovieSceneMediaPlayerPropertySectionTemplate::get_SectionStartFrame() {
    return (void*)((uintptr_t)this + 0x40);
}
_Script_CoreUObject::Class* _Script_MediaCompositing::MovieSceneMediaPlayerPropertySectionTemplate::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/MediaCompositing.MovieSceneMediaPlayerPropertySectionTemplate");
    return result;
}
void _Script_MediaCompositing::MovieSceneMediaPlayerPropertySectionTemplate::set_bLoop(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x44 + 0);
    *(uint8_t*)((uintptr_t)this + 0x44 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
