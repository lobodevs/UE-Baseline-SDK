#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "FXSystemAsset.hpp"
void* _Script_Engine::FXSystemAsset::get_MaxPoolSize() {
    return (void*)((uintptr_t)this + 0x28);
}
_Script_CoreUObject::Class* _Script_Engine::FXSystemAsset::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.FXSystemAsset");
    return result;
}
void* _Script_Engine::FXSystemAsset::get_PoolPrimeSize() {
    return (void*)((uintptr_t)this + 0x2c);
}
