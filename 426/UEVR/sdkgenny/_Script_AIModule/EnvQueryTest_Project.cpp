#include "..\FUObjectArray.hpp"
#include "EnvQueryTest.hpp"
#include "EnvQueryTest_Project.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
void* _Script_AIModule::EnvQueryTest_Project::get_ProjectionData() {
    return (void*)((uintptr_t)this + 0x1f8);
}
_Script_CoreUObject::Class* _Script_AIModule::EnvQueryTest_Project::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/AIModule.EnvQueryTest_Project");
    return result;
}
