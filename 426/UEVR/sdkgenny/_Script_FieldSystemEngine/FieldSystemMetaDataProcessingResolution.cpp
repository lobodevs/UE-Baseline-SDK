#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "FieldSystemMetaData.hpp"
#include "FieldSystemMetaDataProcessingResolution.hpp"
void* _Script_FieldSystemEngine::FieldSystemMetaDataProcessingResolution::get_ResolutionType() {
    return (void*)((uintptr_t)this + 0xb0);
}
_Script_CoreUObject::Class* _Script_FieldSystemEngine::FieldSystemMetaDataProcessingResolution::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/FieldSystemEngine.FieldSystemMetaDataProcessingResolution");
    return result;
}
_Script_FieldSystemEngine::FieldSystemMetaDataProcessingResolution* _Script_FieldSystemEngine::FieldSystemMetaDataProcessingResolution::SetMetaDataaProcessingResolutionType(void* ResolutionType) {
    return;
}
