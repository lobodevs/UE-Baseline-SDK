#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\Actor.hpp"
#include "PaperGroupedSpriteActor.hpp"
#include "PaperGroupedSpriteComponent.hpp"
_Script_CoreUObject::Class* _Script_Paper2D::PaperGroupedSpriteActor::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Paper2D.PaperGroupedSpriteActor");
    return result;
}
_Script_Paper2D::PaperGroupedSpriteComponent*& _Script_Paper2D::PaperGroupedSpriteActor::get_RenderComponent() {
    return *(_Script_Paper2D::PaperGroupedSpriteComponent**)((uintptr_t)this + 0x220);
}
