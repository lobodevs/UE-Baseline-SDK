#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\ActorComponent.hpp"
#include "MediaComponent.hpp"
#include "MediaPlayer.hpp"
#include "MediaTexture.hpp"
_Script_MediaAssets::MediaTexture* _Script_MediaAssets::MediaComponent::GetMediaTexture() {
    return;
}
_Script_MediaAssets::MediaTexture*& _Script_MediaAssets::MediaComponent::get_MediaTexture() {
    return *(_Script_MediaAssets::MediaTexture**)((uintptr_t)this + 0xb0);
}
_Script_MediaAssets::MediaPlayer*& _Script_MediaAssets::MediaComponent::get_MediaPlayer() {
    return *(_Script_MediaAssets::MediaPlayer**)((uintptr_t)this + 0xb8);
}
_Script_CoreUObject::Class* _Script_MediaAssets::MediaComponent::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/MediaAssets.MediaComponent");
    return result;
}
_Script_MediaAssets::MediaPlayer* _Script_MediaAssets::MediaComponent::GetMediaPlayer() {
    return;
}
