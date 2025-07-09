#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "StereoLayerShape.hpp"
#include "StereoLayerShapeQuad.hpp"
_Script_CoreUObject::Class* _Script_Engine::StereoLayerShapeQuad::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.StereoLayerShapeQuad");
    return result;
}
