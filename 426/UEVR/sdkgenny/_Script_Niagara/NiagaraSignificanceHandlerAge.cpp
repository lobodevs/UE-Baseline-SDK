#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "NiagaraSignificanceHandler.hpp"
#include "NiagaraSignificanceHandlerAge.hpp"
_Script_CoreUObject::Class* _Script_Niagara::NiagaraSignificanceHandlerAge::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Niagara.NiagaraSignificanceHandlerAge");
    return result;
}
