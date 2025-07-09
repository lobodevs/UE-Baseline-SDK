#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "FieldNodeBase.hpp"
#include "ReturnResultsTerminal.hpp"
_Script_FieldSystemEngine::ReturnResultsTerminal* _Script_FieldSystemEngine::ReturnResultsTerminal::SetReturnResultsTerminal() {
    return;
}
_Script_CoreUObject::Class* _Script_FieldSystemEngine::ReturnResultsTerminal::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/FieldSystemEngine.ReturnResultsTerminal");
    return result;
}
