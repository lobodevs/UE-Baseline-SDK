#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "MovieSceneEntitySystem.hpp"
#include "MovieSceneEntitySystemLinker.hpp"
_Script_MovieScene::MovieSceneEntitySystemLinker*& _Script_MovieScene::MovieSceneEntitySystem::get_Linker() {
    return *(_Script_MovieScene::MovieSceneEntitySystemLinker**)((uintptr_t)this + 0x28);
}
_Script_CoreUObject::Class* _Script_MovieScene::MovieSceneEntitySystem::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/MovieScene.MovieSceneEntitySystem");
    return result;
}
