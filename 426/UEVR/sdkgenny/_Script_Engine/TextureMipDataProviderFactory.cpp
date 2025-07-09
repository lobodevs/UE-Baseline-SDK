#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "AssetUserData.hpp"
#include "TextureMipDataProviderFactory.hpp"
_Script_CoreUObject::Class* _Script_Engine::TextureMipDataProviderFactory::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.TextureMipDataProviderFactory");
    return result;
}
