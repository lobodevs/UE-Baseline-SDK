#include "..\FUObjectArray.hpp"
#include "EnvQueryTest.hpp"
#include "EnvQueryTest_Volume.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
void* _Script_AIModule::EnvQueryTest_Volume::get_VolumeContext() {
    return (void*)((uintptr_t)this + 0x1f8);
}
void* _Script_AIModule::EnvQueryTest_Volume::get_VolumeClass() {
    return (void*)((uintptr_t)this + 0x200);
}
bool _Script_AIModule::EnvQueryTest_Volume::get_bDoComplexVolumeTest() {
    return (*(uint8_t*)((uintptr_t)this + 0x208 + 0)) & 1 != 0;
}
void _Script_AIModule::EnvQueryTest_Volume::set_bDoComplexVolumeTest(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x208 + 0);
    *(uint8_t*)((uintptr_t)this + 0x208 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_CoreUObject::Class* _Script_AIModule::EnvQueryTest_Volume::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/AIModule.EnvQueryTest_Volume");
    return result;
}
