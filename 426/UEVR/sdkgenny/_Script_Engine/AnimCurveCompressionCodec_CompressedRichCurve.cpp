#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "AnimCurveCompressionCodec.hpp"
#include "AnimCurveCompressionCodec_CompressedRichCurve.hpp"
_Script_CoreUObject::Class* _Script_Engine::AnimCurveCompressionCodec_CompressedRichCurve::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.AnimCurveCompressionCodec_CompressedRichCurve");
    return result;
}
