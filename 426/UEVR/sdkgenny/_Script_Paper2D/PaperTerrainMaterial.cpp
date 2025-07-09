#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\DataAsset.hpp"
#include "PaperSprite.hpp"
#include "PaperTerrainMaterial.hpp"
void* _Script_Paper2D::PaperTerrainMaterial::get_Rules() {
    return (void*)((uintptr_t)this + 0x30);
}
_Script_Paper2D::PaperSprite*& _Script_Paper2D::PaperTerrainMaterial::get_InteriorFill() {
    return *(_Script_Paper2D::PaperSprite**)((uintptr_t)this + 0x40);
}
_Script_CoreUObject::Class* _Script_Paper2D::PaperTerrainMaterial::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Paper2D.PaperTerrainMaterial");
    return result;
}
