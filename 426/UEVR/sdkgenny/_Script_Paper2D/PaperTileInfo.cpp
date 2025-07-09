#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "PaperTileInfo.hpp"
#include "PaperTileSet.hpp"
_Script_Paper2D::PaperTileSet*& _Script_Paper2D::PaperTileInfo::get_TileSet() {
    return *(_Script_Paper2D::PaperTileSet**)((uintptr_t)this + 0x0);
}
int32_t& _Script_Paper2D::PaperTileInfo::get_PackedTileIndex() {
    return *(int32_t*)((uintptr_t)this + 0x8);
}
_Script_CoreUObject::Class* _Script_Paper2D::PaperTileInfo::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Paper2D.PaperTileInfo");
    return result;
}
