#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "BandwidthTestGenerator.hpp"
void* _Script_Engine::BandwidthTestGenerator::get_ReplicatedBuffers() {
    return (void*)((uintptr_t)this + 0x0);
}
_Script_CoreUObject::Class* _Script_Engine::BandwidthTestGenerator::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.BandwidthTestGenerator");
    return result;
}
