#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Interface.hpp"
#include "LevelSequenceMetaData.hpp"
_Script_CoreUObject::Class* _Script_LevelSequence::LevelSequenceMetaData::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/LevelSequence.LevelSequenceMetaData");
    return result;
}
