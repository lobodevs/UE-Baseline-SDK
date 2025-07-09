#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "StereoLayerShape.hpp"
#include "StereoLayerShapeCubemap.hpp"
_Script_CoreUObject::Class* _Script_Engine::StereoLayerShapeCubemap::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.StereoLayerShapeCubemap");
    return result;
}
