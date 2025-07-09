#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "CharacterMoveResponsePackedBits.hpp"
#include "CharacterNetworkSerializationPackedBits.hpp"
_Script_CoreUObject::Class* _Script_Engine::CharacterMoveResponsePackedBits::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.CharacterMoveResponsePackedBits");
    return result;
}
