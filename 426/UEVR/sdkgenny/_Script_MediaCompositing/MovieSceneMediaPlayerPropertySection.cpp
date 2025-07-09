#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_MediaAssets\MediaSource.hpp"
#include "MovieSceneMediaPlayerPropertySection.hpp"
#include "..\_Script_MovieScene\MovieSceneSection.hpp"
_Script_MediaAssets::MediaSource*& _Script_MediaCompositing::MovieSceneMediaPlayerPropertySection::get_MediaSource() {
    return *(_Script_MediaAssets::MediaSource**)((uintptr_t)this + 0xe8);
}
bool _Script_MediaCompositing::MovieSceneMediaPlayerPropertySection::get_bLoop() {
    return (*(uint8_t*)((uintptr_t)this + 0xf0 + 0)) & 1 != 0;
}
void _Script_MediaCompositing::MovieSceneMediaPlayerPropertySection::set_bLoop(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xf0 + 0);
    *(uint8_t*)((uintptr_t)this + 0xf0 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_CoreUObject::Class* _Script_MediaCompositing::MovieSceneMediaPlayerPropertySection::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/MediaCompositing.MovieSceneMediaPlayerPropertySection");
    return result;
}
