#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\SplineComponent.hpp"
#include "PaperTerrainSplineComponent.hpp"
_Script_CoreUObject::Class* _Script_Paper2D::PaperTerrainSplineComponent::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Paper2D.PaperTerrainSplineComponent");
    return result;
}
