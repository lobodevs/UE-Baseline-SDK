#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "NiagaraParameterStore.hpp"
#include "NiagaraScriptInstanceParameterStore.hpp"
_Script_CoreUObject::Class* _Script_Niagara::NiagaraScriptInstanceParameterStore::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Niagara.NiagaraScriptInstanceParameterStore");
    return result;
}
