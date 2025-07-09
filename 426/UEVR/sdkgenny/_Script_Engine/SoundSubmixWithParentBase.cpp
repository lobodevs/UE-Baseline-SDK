#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "SoundSubmixBase.hpp"
#include "SoundSubmixWithParentBase.hpp"
_Script_Engine::SoundSubmixBase*& _Script_Engine::SoundSubmixWithParentBase::get_ParentSubmix() {
    return *(_Script_Engine::SoundSubmixBase**)((uintptr_t)this + 0x38);
}
_Script_CoreUObject::Class* _Script_Engine::SoundSubmixWithParentBase::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.SoundSubmixWithParentBase");
    return result;
}
