#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_MovieScene\MovieSceneEvalTemplate.hpp"
#include "MovieScenePrimitiveMaterialTemplate.hpp"
int32_t& _Script_MovieSceneTracks::MovieScenePrimitiveMaterialTemplate::get_MaterialIndex() {
    return *(int32_t*)((uintptr_t)this + 0x20);
}
void* _Script_MovieSceneTracks::MovieScenePrimitiveMaterialTemplate::get_MaterialChannel() {
    return (void*)((uintptr_t)this + 0x28);
}
_Script_CoreUObject::Class* _Script_MovieSceneTracks::MovieScenePrimitiveMaterialTemplate::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/MovieSceneTracks.MovieScenePrimitiveMaterialTemplate");
    return result;
}
