#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "..\_Script_Engine\BodySetup.hpp"
#include "..\_Script_Engine\MaterialInterface.hpp"
#include "..\_Script_Engine\Texture2D.hpp"
#include "PaperSprite.hpp"
void* _Script_Paper2D::PaperSprite::get_AdditionalSourceTextures() {
    return (void*)((uintptr_t)this + 0x38);
}
void* _Script_Paper2D::PaperSprite::get_BakedSourceUV() {
    return (void*)((uintptr_t)this + 0x48);
}
void* _Script_Paper2D::PaperSprite::get_BakedSourceDimension() {
    return (void*)((uintptr_t)this + 0x50);
}
_Script_Engine::Texture2D*& _Script_Paper2D::PaperSprite::get_BakedSourceTexture() {
    return *(_Script_Engine::Texture2D**)((uintptr_t)this + 0x58);
}
_Script_Engine::MaterialInterface*& _Script_Paper2D::PaperSprite::get_AlternateMaterial() {
    return *(_Script_Engine::MaterialInterface**)((uintptr_t)this + 0x68);
}
void* _Script_Paper2D::PaperSprite::get_Sockets() {
    return (void*)((uintptr_t)this + 0x70);
}
_Script_Engine::MaterialInterface*& _Script_Paper2D::PaperSprite::get_DefaultMaterial() {
    return *(_Script_Engine::MaterialInterface**)((uintptr_t)this + 0x60);
}
void* _Script_Paper2D::PaperSprite::get_SpriteCollisionDomain() {
    return (void*)((uintptr_t)this + 0x80);
}
float& _Script_Paper2D::PaperSprite::get_PixelsPerUnrealUnit() {
    return *(float*)((uintptr_t)this + 0x84);
}
_Script_Engine::BodySetup*& _Script_Paper2D::PaperSprite::get_BodySetup() {
    return *(_Script_Engine::BodySetup**)((uintptr_t)this + 0x88);
}
int32_t& _Script_Paper2D::PaperSprite::get_AlternateMaterialSplitIndex() {
    return *(int32_t*)((uintptr_t)this + 0x90);
}
void* _Script_Paper2D::PaperSprite::get_BakedRenderData() {
    return (void*)((uintptr_t)this + 0x98);
}
_Script_CoreUObject::Class* _Script_Paper2D::PaperSprite::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Paper2D.PaperSprite");
    return result;
}
