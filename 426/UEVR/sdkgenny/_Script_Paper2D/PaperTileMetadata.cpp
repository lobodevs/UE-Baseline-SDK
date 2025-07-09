#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "PaperTileMetadata.hpp"
void* _Script_Paper2D::PaperTileMetadata::get_CollisionData() {
    return (void*)((uintptr_t)this + 0x8);
}
void* _Script_Paper2D::PaperTileMetadata::get_UserDataName() {
    return (void*)((uintptr_t)this + 0x0);
}
void* _Script_Paper2D::PaperTileMetadata::get_TerrainMembership() {
    return (void*)((uintptr_t)this + 0x38);
}
_Script_CoreUObject::Class* _Script_Paper2D::PaperTileMetadata::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Paper2D.PaperTileMetadata");
    return result;
}
