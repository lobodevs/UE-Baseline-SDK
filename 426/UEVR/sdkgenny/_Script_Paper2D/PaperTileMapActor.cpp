#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\Actor.hpp"
#include "PaperTileMapActor.hpp"
#include "PaperTileMapComponent.hpp"
_Script_Paper2D::PaperTileMapComponent*& _Script_Paper2D::PaperTileMapActor::get_RenderComponent() {
    return *(_Script_Paper2D::PaperTileMapComponent**)((uintptr_t)this + 0x220);
}
_Script_CoreUObject::Class* _Script_Paper2D::PaperTileMapActor::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Paper2D.PaperTileMapActor");
    return result;
}
