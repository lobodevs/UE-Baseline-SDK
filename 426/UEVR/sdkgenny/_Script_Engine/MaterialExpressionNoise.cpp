#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "MaterialExpression.hpp"
#include "MaterialExpressionNoise.hpp"
float& _Script_Engine::MaterialExpressionNoise::get_Scale() {
    return *(float*)((uintptr_t)this + 0x68);
}
void* _Script_Engine::MaterialExpressionNoise::get_Position() {
    return (void*)((uintptr_t)this + 0x40);
}
int32_t& _Script_Engine::MaterialExpressionNoise::get_Quality() {
    return *(int32_t*)((uintptr_t)this + 0x6c);
}
void* _Script_Engine::MaterialExpressionNoise::get_FilterWidth() {
    return (void*)((uintptr_t)this + 0x54);
}
void* _Script_Engine::MaterialExpressionNoise::get_NoiseFunction() {
    return (void*)((uintptr_t)this + 0x70);
}
bool _Script_Engine::MaterialExpressionNoise::get_bTurbulence() {
    return (*(uint8_t*)((uintptr_t)this + 0x74 + 0)) & 1 != 0;
}
void _Script_Engine::MaterialExpressionNoise::set_bTurbulence(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x74 + 0);
    *(uint8_t*)((uintptr_t)this + 0x74 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
int32_t& _Script_Engine::MaterialExpressionNoise::get_Levels() {
    return *(int32_t*)((uintptr_t)this + 0x78);
}
float& _Script_Engine::MaterialExpressionNoise::get_OutputMin() {
    return *(float*)((uintptr_t)this + 0x7c);
}
float& _Script_Engine::MaterialExpressionNoise::get_OutputMax() {
    return *(float*)((uintptr_t)this + 0x80);
}
float& _Script_Engine::MaterialExpressionNoise::get_LevelScale() {
    return *(float*)((uintptr_t)this + 0x84);
}
bool _Script_Engine::MaterialExpressionNoise::get_bTiling() {
    return (*(uint8_t*)((uintptr_t)this + 0x88 + 0)) & 1 != 0;
}
void _Script_Engine::MaterialExpressionNoise::set_bTiling(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x88 + 0);
    *(uint8_t*)((uintptr_t)this + 0x88 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_Engine::MaterialExpressionNoise::get_RepeatSize() {
    return (void*)((uintptr_t)this + 0x8c);
}
_Script_CoreUObject::Class* _Script_Engine::MaterialExpressionNoise::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.MaterialExpressionNoise");
    return result;
}
