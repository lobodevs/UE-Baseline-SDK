#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "NiagaraSignificanceHandler.hpp"
_Script_CoreUObject::Class* _Script_Niagara::NiagaraSignificanceHandler::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Niagara.NiagaraSignificanceHandler");
    return result;
}
