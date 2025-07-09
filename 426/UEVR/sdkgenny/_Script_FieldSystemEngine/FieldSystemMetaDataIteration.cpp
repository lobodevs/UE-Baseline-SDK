#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "FieldSystemMetaData.hpp"
#include "FieldSystemMetaDataIteration.hpp"
int32_t& _Script_FieldSystemEngine::FieldSystemMetaDataIteration::get_Iterations() {
    return *(int32_t*)((uintptr_t)this + 0xb0);
}
_Script_CoreUObject::Class* _Script_FieldSystemEngine::FieldSystemMetaDataIteration::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/FieldSystemEngine.FieldSystemMetaDataIteration");
    return result;
}
_Script_FieldSystemEngine::FieldSystemMetaDataIteration* _Script_FieldSystemEngine::FieldSystemMetaDataIteration::SetMetaDataIteration(int32_t Iterations) {
    return;
}
