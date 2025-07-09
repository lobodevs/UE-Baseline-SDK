#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\Actor.hpp"
#include "PaperFlipbookActor.hpp"
#include "PaperFlipbookComponent.hpp"
_Script_Paper2D::PaperFlipbookComponent*& _Script_Paper2D::PaperFlipbookActor::get_RenderComponent() {
    return *(_Script_Paper2D::PaperFlipbookComponent**)((uintptr_t)this + 0x220);
}
_Script_CoreUObject::Class* _Script_Paper2D::PaperFlipbookActor::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Paper2D.PaperFlipbookActor");
    return result;
}
