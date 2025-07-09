#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\Actor.hpp"
#include "..\_Script_Engine\SceneComponent.hpp"
#include "PaperTerrainActor.hpp"
#include "PaperTerrainComponent.hpp"
#include "PaperTerrainSplineComponent.hpp"
_Script_Engine::SceneComponent*& _Script_Paper2D::PaperTerrainActor::get_DummyRoot() {
    return *(_Script_Engine::SceneComponent**)((uintptr_t)this + 0x220);
}
_Script_Paper2D::PaperTerrainSplineComponent*& _Script_Paper2D::PaperTerrainActor::get_SplineComponent() {
    return *(_Script_Paper2D::PaperTerrainSplineComponent**)((uintptr_t)this + 0x228);
}
_Script_Paper2D::PaperTerrainComponent*& _Script_Paper2D::PaperTerrainActor::get_RenderComponent() {
    return *(_Script_Paper2D::PaperTerrainComponent**)((uintptr_t)this + 0x230);
}
_Script_CoreUObject::Class* _Script_Paper2D::PaperTerrainActor::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Paper2D.PaperTerrainActor");
    return result;
}
