#include "..\FUObjectArray.hpp"
#include "AISense.hpp"
#include "AISense_Sight.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
int32_t& _Script_AIModule::AISense_Sight::get_MaxTracesPerTick() {
    return *(int32_t*)((uintptr_t)this + 0x148);
}
float& _Script_AIModule::AISense_Sight::get_SightLimitQueryImportance() {
    return *(float*)((uintptr_t)this + 0x164);
}
int32_t& _Script_AIModule::AISense_Sight::get_MinQueriesPerTimeSliceCheck() {
    return *(int32_t*)((uintptr_t)this + 0x14c);
}
double& _Script_AIModule::AISense_Sight::get_MaxTimeSlicePerTick() {
    return *(double*)((uintptr_t)this + 0x150);
}
float& _Script_AIModule::AISense_Sight::get_HighImportanceQueryDistanceThreshold() {
    return *(float*)((uintptr_t)this + 0x158);
}
float& _Script_AIModule::AISense_Sight::get_MaxQueryImportance() {
    return *(float*)((uintptr_t)this + 0x160);
}
_Script_CoreUObject::Class* _Script_AIModule::AISense_Sight::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/AIModule.AISense_Sight");
    return result;
}
