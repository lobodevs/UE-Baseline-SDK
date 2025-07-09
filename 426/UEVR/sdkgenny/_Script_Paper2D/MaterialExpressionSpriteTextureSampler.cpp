#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\MaterialExpressionTextureSampleParameter2D.hpp"
#include "MaterialExpressionSpriteTextureSampler.hpp"
bool _Script_Paper2D::MaterialExpressionSpriteTextureSampler::get_bSampleAdditionalTextures() {
    return (*(uint8_t*)((uintptr_t)this + 0x80 + 0)) & 1 != 0;
}
void _Script_Paper2D::MaterialExpressionSpriteTextureSampler::set_bSampleAdditionalTextures(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x80 + 0);
    *(uint8_t*)((uintptr_t)this + 0x80 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
int32_t& _Script_Paper2D::MaterialExpressionSpriteTextureSampler::get_AdditionalSlotIndex() {
    return *(int32_t*)((uintptr_t)this + 0x84);
}
void* _Script_Paper2D::MaterialExpressionSpriteTextureSampler::get_SlotDisplayName() {
    return (void*)((uintptr_t)this + 0x88);
}
_Script_CoreUObject::Class* _Script_Paper2D::MaterialExpressionSpriteTextureSampler::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Paper2D.MaterialExpressionSpriteTextureSampler");
    return result;
}
