#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "..\_Script_MovieScene\MovieSceneEntitySystemLinker.hpp"
#include "UMGSequenceTickManager.hpp"
void* _Script_UMG::UMGSequenceTickManager::get_WeakUserWidgets() {
    return (void*)((uintptr_t)this + 0x28);
}
_Script_MovieScene::MovieSceneEntitySystemLinker*& _Script_UMG::UMGSequenceTickManager::get_Linker() {
    return *(_Script_MovieScene::MovieSceneEntitySystemLinker**)((uintptr_t)this + 0x78);
}
_Script_CoreUObject::Class* _Script_UMG::UMGSequenceTickManager::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/UMG.UMGSequenceTickManager");
    return result;
}
