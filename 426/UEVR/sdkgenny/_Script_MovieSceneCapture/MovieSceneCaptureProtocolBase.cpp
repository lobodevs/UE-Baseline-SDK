#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "MovieSceneCaptureProtocolBase.hpp"
void* _Script_MovieSceneCapture::MovieSceneCaptureProtocolBase::get_State() {
    return (void*)((uintptr_t)this + 0x50);
}
void* _Script_MovieSceneCapture::MovieSceneCaptureProtocolBase::GetState() {
    return;
}
_Script_CoreUObject::Class* _Script_MovieSceneCapture::MovieSceneCaptureProtocolBase::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/MovieSceneCapture.MovieSceneCaptureProtocolBase");
    return result;
}
bool _Script_MovieSceneCapture::MovieSceneCaptureProtocolBase::IsCapturing() {
    return;
}
