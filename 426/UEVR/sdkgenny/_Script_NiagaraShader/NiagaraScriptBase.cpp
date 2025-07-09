#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "NiagaraScriptBase.hpp"
_Script_CoreUObject::Class* _Script_NiagaraShader::NiagaraScriptBase::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/NiagaraShader.NiagaraScriptBase");
    return result;
}
