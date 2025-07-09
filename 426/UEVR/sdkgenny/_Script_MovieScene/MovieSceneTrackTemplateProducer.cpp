#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Interface.hpp"
#include "MovieSceneTrackTemplateProducer.hpp"
_Script_CoreUObject::Class* _Script_MovieScene::MovieSceneTrackTemplateProducer::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/MovieScene.MovieSceneTrackTemplateProducer");
    return result;
}
