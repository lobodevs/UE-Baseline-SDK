#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "NiagaraSignificanceHandler.hpp"
#include "NiagaraSignificanceHandlerDistance.hpp"
_Script_CoreUObject::Class* _Script_Niagara::NiagaraSignificanceHandlerDistance::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Niagara.NiagaraSignificanceHandlerDistance");
    return result;
}
