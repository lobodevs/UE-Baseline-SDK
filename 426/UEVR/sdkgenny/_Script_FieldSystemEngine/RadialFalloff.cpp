#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Vector.hpp"
#include "FieldNodeFloat.hpp"
#include "RadialFalloff.hpp"
float& _Script_FieldSystemEngine::RadialFalloff::get_Radius() {
    return *(float*)((uintptr_t)this + 0xc0);
}
float& _Script_FieldSystemEngine::RadialFalloff::get_Magnitude() {
    return *(float*)((uintptr_t)this + 0xb0);
}
float& _Script_FieldSystemEngine::RadialFalloff::get_MinRange() {
    return *(float*)((uintptr_t)this + 0xb4);
}
float& _Script_FieldSystemEngine::RadialFalloff::get_MaxRange() {
    return *(float*)((uintptr_t)this + 0xb8);
}
float& _Script_FieldSystemEngine::RadialFalloff::get_Default() {
    return *(float*)((uintptr_t)this + 0xbc);
}
void* _Script_FieldSystemEngine::RadialFalloff::get_Position() {
    return (void*)((uintptr_t)this + 0xc4);
}
void* _Script_FieldSystemEngine::RadialFalloff::get_Falloff() {
    return (void*)((uintptr_t)this + 0xd0);
}
_Script_CoreUObject::Class* _Script_FieldSystemEngine::RadialFalloff::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/FieldSystemEngine.RadialFalloff");
    return result;
}
_Script_FieldSystemEngine::RadialFalloff* _Script_FieldSystemEngine::RadialFalloff::SetRadialFalloff(float Magnitude, float MinRange, float MaxRange, float Default, float Radius, _Script_CoreUObject::Vector Position, void* Falloff) {
    return;
}
