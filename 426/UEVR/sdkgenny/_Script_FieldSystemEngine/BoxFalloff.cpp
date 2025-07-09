#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Transform.hpp"
#include "BoxFalloff.hpp"
#include "FieldNodeFloat.hpp"
float& _Script_FieldSystemEngine::BoxFalloff::get_Default() {
    return *(float*)((uintptr_t)this + 0xbc);
}
float& _Script_FieldSystemEngine::BoxFalloff::get_Magnitude() {
    return *(float*)((uintptr_t)this + 0xb0);
}
float& _Script_FieldSystemEngine::BoxFalloff::get_MaxRange() {
    return *(float*)((uintptr_t)this + 0xb8);
}
float& _Script_FieldSystemEngine::BoxFalloff::get_MinRange() {
    return *(float*)((uintptr_t)this + 0xb4);
}
void* _Script_FieldSystemEngine::BoxFalloff::get_Transform() {
    return (void*)((uintptr_t)this + 0xc0);
}
void* _Script_FieldSystemEngine::BoxFalloff::get_Falloff() {
    return (void*)((uintptr_t)this + 0xf0);
}
_Script_CoreUObject::Class* _Script_FieldSystemEngine::BoxFalloff::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/FieldSystemEngine.BoxFalloff");
    return result;
}
_Script_FieldSystemEngine::BoxFalloff* _Script_FieldSystemEngine::BoxFalloff::SetBoxFalloff(float Magnitude, float MinRange, float MaxRange, float Default, _Script_CoreUObject::Transform Transform, void* Falloff) {
    return;
}
