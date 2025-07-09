#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "CharacterNetworkSerializationPackedBits.hpp"
#include "CharacterServerMovePackedBits.hpp"
_Script_CoreUObject::Class* _Script_Engine::CharacterServerMovePackedBits::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.CharacterServerMovePackedBits");
    return result;
}
