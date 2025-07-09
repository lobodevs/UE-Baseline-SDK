#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "NiagaraDataInterfaceGrid2D.hpp"
#include "NiagaraDataInterfaceGrid2DCollectionReader.hpp"
void* _Script_Niagara::NiagaraDataInterfaceGrid2DCollectionReader::get_EmitterName() {
    return (void*)((uintptr_t)this + 0xf8);
}
void* _Script_Niagara::NiagaraDataInterfaceGrid2DCollectionReader::get_DIName() {
    return (void*)((uintptr_t)this + 0x108);
}
_Script_CoreUObject::Class* _Script_Niagara::NiagaraDataInterfaceGrid2DCollectionReader::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Niagara.NiagaraDataInterfaceGrid2DCollectionReader");
    return result;
}
