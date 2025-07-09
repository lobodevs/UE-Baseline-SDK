#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "AnimCurveCompressionCodec.hpp"
#include "AnimCurveCompressionSettings.hpp"
_Script_Engine::AnimCurveCompressionCodec*& _Script_Engine::AnimCurveCompressionSettings::get_Codec() {
    return *(_Script_Engine::AnimCurveCompressionCodec**)((uintptr_t)this + 0x28);
}
_Script_CoreUObject::Class* _Script_Engine::AnimCurveCompressionSettings::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.AnimCurveCompressionSettings");
    return result;
}
