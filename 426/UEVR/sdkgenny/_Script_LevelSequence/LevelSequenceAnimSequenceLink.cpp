#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\AssetUserData.hpp"
#include "LevelSequenceAnimSequenceLink.hpp"
void* _Script_LevelSequence::LevelSequenceAnimSequenceLink::get_AnimSequenceLinks() {
    return (void*)((uintptr_t)this + 0x28);
}
_Script_CoreUObject::Class* _Script_LevelSequence::LevelSequenceAnimSequenceLink::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/LevelSequence.LevelSequenceAnimSequenceLink");
    return result;
}
