#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "MaterialExpression.hpp"
#include "MaterialExpressionVectorNoise.hpp"
_Script_CoreUObject::Class* _Script_Engine::MaterialExpressionVectorNoise::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.MaterialExpressionVectorNoise");
    return result;
}
int32_t& _Script_Engine::MaterialExpressionVectorNoise::get_Quality() {
    return *(int32_t*)((uintptr_t)this + 0x58);
}
void* _Script_Engine::MaterialExpressionVectorNoise::get_NoiseFunction() {
    return (void*)((uintptr_t)this + 0x54);
}
void* _Script_Engine::MaterialExpressionVectorNoise::get_Position() {
    return (void*)((uintptr_t)this + 0x40);
}
bool _Script_Engine::MaterialExpressionVectorNoise::get_bTiling() {
    return (*(uint8_t*)((uintptr_t)this + 0x5c + 0)) & 1 != 0;
}
void _Script_Engine::MaterialExpressionVectorNoise::set_bTiling(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x5c + 0);
    *(uint8_t*)((uintptr_t)this + 0x5c + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_Engine::MaterialExpressionVectorNoise::get_TileSize() {
    return (void*)((uintptr_t)this + 0x60);
}
