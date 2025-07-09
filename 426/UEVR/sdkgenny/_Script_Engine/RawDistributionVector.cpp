#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "DistributionVector.hpp"
#include "RawDistribution.hpp"
#include "RawDistributionVector.hpp"
_Script_CoreUObject::Class* _Script_Engine::RawDistributionVector::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.RawDistributionVector");
    return result;
}
float& _Script_Engine::RawDistributionVector::get_MinValue() {
    return *(float*)((uintptr_t)this + 0x20);
}
float& _Script_Engine::RawDistributionVector::get_MaxValue() {
    return *(float*)((uintptr_t)this + 0x24);
}
void* _Script_Engine::RawDistributionVector::get_MinValueVec() {
    return (void*)((uintptr_t)this + 0x28);
}
void* _Script_Engine::RawDistributionVector::get_MaxValueVec() {
    return (void*)((uintptr_t)this + 0x34);
}
_Script_Engine::DistributionVector*& _Script_Engine::RawDistributionVector::get_Distribution() {
    return *(_Script_Engine::DistributionVector**)((uintptr_t)this + 0x40);
}
