#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Vector.hpp"
#include "FieldNodeInt.hpp"
#include "RadialIntMask.hpp"
void* _Script_FieldSystemEngine::RadialIntMask::get_SetMaskCondition() {
    return (void*)((uintptr_t)this + 0xc8);
}
float& _Script_FieldSystemEngine::RadialIntMask::get_Radius() {
    return *(float*)((uintptr_t)this + 0xb0);
}
void* _Script_FieldSystemEngine::RadialIntMask::get_Position() {
    return (void*)((uintptr_t)this + 0xb4);
}
int32_t& _Script_FieldSystemEngine::RadialIntMask::get_InteriorValue() {
    return *(int32_t*)((uintptr_t)this + 0xc0);
}
int32_t& _Script_FieldSystemEngine::RadialIntMask::get_ExteriorValue() {
    return *(int32_t*)((uintptr_t)this + 0xc4);
}
_Script_CoreUObject::Class* _Script_FieldSystemEngine::RadialIntMask::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/FieldSystemEngine.RadialIntMask");
    return result;
}
_Script_FieldSystemEngine::RadialIntMask* _Script_FieldSystemEngine::RadialIntMask::SetRadialIntMask(float Radius, _Script_CoreUObject::Vector Position, int32_t InteriorValue, int32_t ExteriorValue, void* SetMaskConditionIn) {
    return;
}
