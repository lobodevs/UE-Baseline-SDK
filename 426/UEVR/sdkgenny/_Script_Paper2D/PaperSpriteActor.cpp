#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\Actor.hpp"
#include "PaperSpriteActor.hpp"
#include "PaperSpriteComponent.hpp"
_Script_Paper2D::PaperSpriteComponent*& _Script_Paper2D::PaperSpriteActor::get_RenderComponent() {
    return *(_Script_Paper2D::PaperSpriteComponent**)((uintptr_t)this + 0x220);
}
_Script_CoreUObject::Class* _Script_Paper2D::PaperSpriteActor::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Paper2D.PaperSpriteActor");
    return result;
}
