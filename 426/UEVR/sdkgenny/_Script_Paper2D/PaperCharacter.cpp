#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\Character.hpp"
#include "PaperCharacter.hpp"
#include "PaperFlipbookComponent.hpp"
_Script_Paper2D::PaperFlipbookComponent*& _Script_Paper2D::PaperCharacter::get_Sprite() {
    return *(_Script_Paper2D::PaperFlipbookComponent**)((uintptr_t)this + 0x4b8);
}
_Script_CoreUObject::Class* _Script_Paper2D::PaperCharacter::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Paper2D.PaperCharacter");
    return result;
}
