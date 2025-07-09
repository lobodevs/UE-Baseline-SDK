#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\LinearColor.hpp"
#include "ViewportStatsSubsystem.hpp"
#include "WorldSubsystem.hpp"
_Script_CoreUObject::Class* _Script_Engine::ViewportStatsSubsystem::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.ViewportStatsSubsystem");
    return result;
}
void _Script_Engine::ViewportStatsSubsystem::RemoveDisplayDelegate(int32_t IndexToRemove) {
    return;
}
void _Script_Engine::ViewportStatsSubsystem::AddTimedDisplay(void* Text, _Script_CoreUObject::LinearColor Color, float Duration) {
    return;
}
int32_t _Script_Engine::ViewportStatsSubsystem::AddDisplayDelegate(void*& Delegate) {
    return;
}
