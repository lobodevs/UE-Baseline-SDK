#include "..\FUObjectArray.hpp"
#include "EnvQueryNode.hpp"
#include "EnvQueryTest.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
void* _Script_AIModule::EnvQueryTest::get_TestPurpose() {
    return (void*)((uintptr_t)this + 0x34);
}
void* _Script_AIModule::EnvQueryTest::get_NormalizationType() {
    return (void*)((uintptr_t)this + 0xfc);
}
int32_t& _Script_AIModule::EnvQueryTest::get_TestOrder() {
    return *(int32_t*)((uintptr_t)this + 0x30);
}
void* _Script_AIModule::EnvQueryTest::get_FloatValueMin() {
    return (void*)((uintptr_t)this + 0x88);
}
void* _Script_AIModule::EnvQueryTest::get_MultipleContextScoreOp() {
    return (void*)((uintptr_t)this + 0x49);
}
void* _Script_AIModule::EnvQueryTest::get_TestComment() {
    return (void*)((uintptr_t)this + 0x38);
}
void* _Script_AIModule::EnvQueryTest::get_MultipleContextFilterOp() {
    return (void*)((uintptr_t)this + 0x48);
}
void* _Script_AIModule::EnvQueryTest::get_FilterType() {
    return (void*)((uintptr_t)this + 0x4a);
}
void* _Script_AIModule::EnvQueryTest::get_BoolValue() {
    return (void*)((uintptr_t)this + 0x50);
}
void* _Script_AIModule::EnvQueryTest::get_FloatValueMax() {
    return (void*)((uintptr_t)this + 0xc0);
}
void* _Script_AIModule::EnvQueryTest::get_ScoringEquation() {
    return (void*)((uintptr_t)this + 0xf9);
}
void* _Script_AIModule::EnvQueryTest::get_ClampMinType() {
    return (void*)((uintptr_t)this + 0xfa);
}
void* _Script_AIModule::EnvQueryTest::get_ClampMaxType() {
    return (void*)((uintptr_t)this + 0xfb);
}
void* _Script_AIModule::EnvQueryTest::get_ScoreClampMin() {
    return (void*)((uintptr_t)this + 0x100);
}
void* _Script_AIModule::EnvQueryTest::get_ScoreClampMax() {
    return (void*)((uintptr_t)this + 0x138);
}
void* _Script_AIModule::EnvQueryTest::get_ScoringFactor() {
    return (void*)((uintptr_t)this + 0x170);
}
void* _Script_AIModule::EnvQueryTest::get_ReferenceValue() {
    return (void*)((uintptr_t)this + 0x1a8);
}
bool _Script_AIModule::EnvQueryTest::get_bDefineReferenceValue() {
    return (*(uint8_t*)((uintptr_t)this + 0x1e0 + 0)) & 1 != 0;
}
void _Script_AIModule::EnvQueryTest::set_bDefineReferenceValue(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x1e0 + 0);
    *(uint8_t*)((uintptr_t)this + 0x1e0 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_AIModule::EnvQueryTest::get_bWorkOnFloatValues() {
    return (*(uint8_t*)((uintptr_t)this + 0x1f0 + 0)) & 1 != 0;
}
void _Script_AIModule::EnvQueryTest::set_bWorkOnFloatValues(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x1f0 + 0);
    *(uint8_t*)((uintptr_t)this + 0x1f0 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_CoreUObject::Class* _Script_AIModule::EnvQueryTest::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/AIModule.EnvQueryTest");
    return result;
}
