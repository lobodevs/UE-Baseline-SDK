#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "InterpTrackInst.hpp"
#include "InterpTrackInstProperty.hpp"
void* _Script_Engine::InterpTrackInstProperty::get_InterpProperty() {
    return (void*)((uintptr_t)this + 0x28);
}
_Script_CoreUObject::Object*& _Script_Engine::InterpTrackInstProperty::get_PropertyOuterObjectInst() {
    return *(_Script_CoreUObject::Object**)((uintptr_t)this + 0x48);
}
_Script_CoreUObject::Class* _Script_Engine::InterpTrackInstProperty::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.InterpTrackInstProperty");
    return result;
}
