#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "LightMapVirtualTexture.hpp"
#include "VirtualTexture.hpp"
_Script_CoreUObject::Class* _Script_Engine::LightMapVirtualTexture::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.LightMapVirtualTexture");
    return result;
}
