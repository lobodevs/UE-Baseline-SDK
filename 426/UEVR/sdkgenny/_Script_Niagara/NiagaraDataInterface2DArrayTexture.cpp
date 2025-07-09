#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\Texture2DArray.hpp"
#include "NiagaraDataInterface.hpp"
#include "NiagaraDataInterface2DArrayTexture.hpp"
_Script_Engine::Texture2DArray*& _Script_Niagara::NiagaraDataInterface2DArrayTexture::get_Texture() {
    return *(_Script_Engine::Texture2DArray**)((uintptr_t)this + 0x38);
}
_Script_CoreUObject::Class* _Script_Niagara::NiagaraDataInterface2DArrayTexture::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Niagara.NiagaraDataInterface2DArrayTexture");
    return result;
}
