#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\LinearColor.hpp"
#include "..\_Script_Engine\MaterialInterface.hpp"
#include "..\_Script_Engine\MeshComponent.hpp"
#include "PaperSprite.hpp"
#include "PaperSpriteComponent.hpp"
_Script_Paper2D::PaperSprite*& _Script_Paper2D::PaperSpriteComponent::get_SourceSprite() {
    return *(_Script_Paper2D::PaperSprite**)((uintptr_t)this + 0x468);
}
void _Script_Paper2D::PaperSpriteComponent::SetSpriteColor(_Script_CoreUObject::LinearColor NewColor) {
    return;
}
_Script_Engine::MaterialInterface*& _Script_Paper2D::PaperSpriteComponent::get_MaterialOverride() {
    return *(_Script_Engine::MaterialInterface**)((uintptr_t)this + 0x470);
}
bool _Script_Paper2D::PaperSpriteComponent::SetSprite(_Script_Paper2D::PaperSprite* NewSprite) {
    return;
}
void* _Script_Paper2D::PaperSpriteComponent::get_SpriteColor() {
    return (void*)((uintptr_t)this + 0x478);
}
_Script_CoreUObject::Class* _Script_Paper2D::PaperSpriteComponent::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Paper2D.PaperSpriteComponent");
    return result;
}
_Script_Paper2D::PaperSprite* _Script_Paper2D::PaperSpriteComponent::GetSprite() {
    return;
}
