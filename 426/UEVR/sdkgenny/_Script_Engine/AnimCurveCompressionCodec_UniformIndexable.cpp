#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "AnimCurveCompressionCodec.hpp"
#include "AnimCurveCompressionCodec_UniformIndexable.hpp"
_Script_CoreUObject::Class* _Script_Engine::AnimCurveCompressionCodec_UniformIndexable::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.AnimCurveCompressionCodec_UniformIndexable");
    return result;
}
