#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "Texture2D.hpp"
#include "TextureLightProfile.hpp"
float& _Script_Engine::TextureLightProfile::get_Brightness() {
    return *(float*)((uintptr_t)this + 0x100);
}
float& _Script_Engine::TextureLightProfile::get_TextureMultiplier() {
    return *(float*)((uintptr_t)this + 0x104);
}
_Script_CoreUObject::Class* _Script_Engine::TextureLightProfile::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.TextureLightProfile");
    return result;
}
