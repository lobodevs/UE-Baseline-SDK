#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "AnimNotifyEventReference.hpp"
_Script_CoreUObject::Object*& _Script_Engine::AnimNotifyEventReference::get_NotifySource() {
    return *(_Script_CoreUObject::Object**)((uintptr_t)this + 0x8);
}
_Script_CoreUObject::Class* _Script_Engine::AnimNotifyEventReference::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.AnimNotifyEventReference");
    return result;
}
