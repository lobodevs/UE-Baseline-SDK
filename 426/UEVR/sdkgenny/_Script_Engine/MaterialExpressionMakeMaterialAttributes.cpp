#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "MaterialExpression.hpp"
#include "MaterialExpressionMakeMaterialAttributes.hpp"
void* _Script_Engine::MaterialExpressionMakeMaterialAttributes::get_BaseColor() {
    return (void*)((uintptr_t)this + 0x40);
}
void* _Script_Engine::MaterialExpressionMakeMaterialAttributes::get_Specular() {
    return (void*)((uintptr_t)this + 0x68);
}
void* _Script_Engine::MaterialExpressionMakeMaterialAttributes::get_Metallic() {
    return (void*)((uintptr_t)this + 0x54);
}
void* _Script_Engine::MaterialExpressionMakeMaterialAttributes::get_OpacityMask() {
    return (void*)((uintptr_t)this + 0xcc);
}
void* _Script_Engine::MaterialExpressionMakeMaterialAttributes::get_Opacity() {
    return (void*)((uintptr_t)this + 0xb8);
}
void* _Script_Engine::MaterialExpressionMakeMaterialAttributes::get_Roughness() {
    return (void*)((uintptr_t)this + 0x7c);
}
void* _Script_Engine::MaterialExpressionMakeMaterialAttributes::get_EmissiveColor() {
    return (void*)((uintptr_t)this + 0xa4);
}
void* _Script_Engine::MaterialExpressionMakeMaterialAttributes::get_Anisotropy() {
    return (void*)((uintptr_t)this + 0x90);
}
void* _Script_Engine::MaterialExpressionMakeMaterialAttributes::get_Normal() {
    return (void*)((uintptr_t)this + 0xe0);
}
void* _Script_Engine::MaterialExpressionMakeMaterialAttributes::get_Tangent() {
    return (void*)((uintptr_t)this + 0xf4);
}
void* _Script_Engine::MaterialExpressionMakeMaterialAttributes::get_WorldPositionOffset() {
    return (void*)((uintptr_t)this + 0x108);
}
void* _Script_Engine::MaterialExpressionMakeMaterialAttributes::get_WorldDisplacement() {
    return (void*)((uintptr_t)this + 0x11c);
}
void* _Script_Engine::MaterialExpressionMakeMaterialAttributes::get_TessellationMultiplier() {
    return (void*)((uintptr_t)this + 0x130);
}
void* _Script_Engine::MaterialExpressionMakeMaterialAttributes::get_SubsurfaceColor() {
    return (void*)((uintptr_t)this + 0x144);
}
void* _Script_Engine::MaterialExpressionMakeMaterialAttributes::get_ClearCoat() {
    return (void*)((uintptr_t)this + 0x158);
}
void* _Script_Engine::MaterialExpressionMakeMaterialAttributes::get_ClearCoatRoughness() {
    return (void*)((uintptr_t)this + 0x16c);
}
void* _Script_Engine::MaterialExpressionMakeMaterialAttributes::get_AmbientOcclusion() {
    return (void*)((uintptr_t)this + 0x180);
}
void* _Script_Engine::MaterialExpressionMakeMaterialAttributes::get_Refraction() {
    return (void*)((uintptr_t)this + 0x194);
}
void* _Script_Engine::MaterialExpressionMakeMaterialAttributes::get_CustomizedUVs() {
    return (void*)((uintptr_t)this + 0x1a8);
}
void* _Script_Engine::MaterialExpressionMakeMaterialAttributes::get_PixelDepthOffset() {
    return (void*)((uintptr_t)this + 0x248);
}
void* _Script_Engine::MaterialExpressionMakeMaterialAttributes::get_ShadingModel() {
    return (void*)((uintptr_t)this + 0x25c);
}
_Script_CoreUObject::Class* _Script_Engine::MaterialExpressionMakeMaterialAttributes::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.MaterialExpressionMakeMaterialAttributes");
    return result;
}
