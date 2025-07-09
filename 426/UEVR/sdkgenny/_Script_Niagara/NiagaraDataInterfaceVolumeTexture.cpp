#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\VolumeTexture.hpp"
#include "NiagaraDataInterface.hpp"
#include "NiagaraDataInterfaceVolumeTexture.hpp"
_Script_Engine::VolumeTexture*& _Script_Niagara::NiagaraDataInterfaceVolumeTexture::get_Texture() {
    return *(_Script_Engine::VolumeTexture**)((uintptr_t)this + 0x38);
}
_Script_CoreUObject::Class* _Script_Niagara::NiagaraDataInterfaceVolumeTexture::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Niagara.NiagaraDataInterfaceVolumeTexture");
    return result;
}
