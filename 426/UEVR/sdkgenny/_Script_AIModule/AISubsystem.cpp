#include "..\FUObjectArray.hpp"
#include "AISubsystem.hpp"
#include "AISystem.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
_Script_AIModule::AISystem*& _Script_AIModule::AISubsystem::get_AISystem() {
    return *(_Script_AIModule::AISystem**)((uintptr_t)this + 0x30);
}
_Script_CoreUObject::Class* _Script_AIModule::AISubsystem::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/AIModule.AISubsystem");
    return result;
}
