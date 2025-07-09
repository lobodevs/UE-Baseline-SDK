#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "MovieSceneSectionParameters.hpp"
float& _Script_MovieScene::MovieSceneSectionParameters::get_TimeScale() {
    return *(float*)((uintptr_t)this + 0x10);
}
void* _Script_MovieScene::MovieSceneSectionParameters::get_FirstLoopStartFrameOffset() {
    return (void*)((uintptr_t)this + 0xc);
}
void* _Script_MovieScene::MovieSceneSectionParameters::get_StartFrameOffset() {
    return (void*)((uintptr_t)this + 0x0);
}
int32_t& _Script_MovieScene::MovieSceneSectionParameters::get_HierarchicalBias() {
    return *(int32_t*)((uintptr_t)this + 0x14);
}
bool _Script_MovieScene::MovieSceneSectionParameters::get_bCanLoop() {
    return (*(uint8_t*)((uintptr_t)this + 0x4 + 0)) & 1 != 0;
}
float& _Script_MovieScene::MovieSceneSectionParameters::get_StartOffset() {
    return *(float*)((uintptr_t)this + 0x18);
}
void _Script_MovieScene::MovieSceneSectionParameters::set_bCanLoop(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x4 + 0);
    *(uint8_t*)((uintptr_t)this + 0x4 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_MovieScene::MovieSceneSectionParameters::get_EndFrameOffset() {
    return (void*)((uintptr_t)this + 0x8);
}
float& _Script_MovieScene::MovieSceneSectionParameters::get_PrerollTime() {
    return *(float*)((uintptr_t)this + 0x1c);
}
float& _Script_MovieScene::MovieSceneSectionParameters::get_PostrollTime() {
    return *(float*)((uintptr_t)this + 0x20);
}
_Script_CoreUObject::Class* _Script_MovieScene::MovieSceneSectionParameters::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/MovieScene.MovieSceneSectionParameters");
    return result;
}
