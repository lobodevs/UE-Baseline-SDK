#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "LevelVariantSets.hpp"
#include "VariantSet.hpp"
void* _Script_VariantManagerContent::LevelVariantSets::get_DirectorClass() {
    return (void*)((uintptr_t)this + 0x28);
}
void* _Script_VariantManagerContent::LevelVariantSets::get_VariantSets() {
    return (void*)((uintptr_t)this + 0x30);
}
_Script_CoreUObject::Class* _Script_VariantManagerContent::LevelVariantSets::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/VariantManagerContent.LevelVariantSets");
    return result;
}
int32_t _Script_VariantManagerContent::LevelVariantSets::GetNumVariantSets() {
    return;
}
_Script_VariantManagerContent::VariantSet* _Script_VariantManagerContent::LevelVariantSets::GetVariantSetByName(void* VariantSetName) {
    return;
}
_Script_VariantManagerContent::VariantSet* _Script_VariantManagerContent::LevelVariantSets::GetVariantSet(int32_t VariantSetIndex) {
    return;
}
