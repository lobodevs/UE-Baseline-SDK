#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "MovieSceneNodeGroupCollection.hpp"
_Script_CoreUObject::Class* _Script_MovieScene::MovieSceneNodeGroupCollection::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/MovieScene.MovieSceneNodeGroupCollection");
    return result;
}
