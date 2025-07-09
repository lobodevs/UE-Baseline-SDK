#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Transform.hpp"
#include "FieldNodeFloat.hpp"
#include "NoiseField.hpp"
_Script_CoreUObject::Class* _Script_FieldSystemEngine::NoiseField::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/FieldSystemEngine.NoiseField");
    return result;
}
void* _Script_FieldSystemEngine::NoiseField::get_Transform() {
    return (void*)((uintptr_t)this + 0xc0);
}
float& _Script_FieldSystemEngine::NoiseField::get_MinRange() {
    return *(float*)((uintptr_t)this + 0xb0);
}
float& _Script_FieldSystemEngine::NoiseField::get_MaxRange() {
    return *(float*)((uintptr_t)this + 0xb4);
}
_Script_FieldSystemEngine::NoiseField* _Script_FieldSystemEngine::NoiseField::SetNoiseField(float MinRange, float MaxRange, _Script_CoreUObject::Transform Transform) {
    return;
}
