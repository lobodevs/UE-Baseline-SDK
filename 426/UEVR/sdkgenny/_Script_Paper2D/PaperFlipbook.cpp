#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "..\_Script_Engine\MaterialInterface.hpp"
#include "PaperFlipbook.hpp"
#include "PaperSprite.hpp"
bool _Script_Paper2D::PaperFlipbook::IsValidKeyFrameIndex(int32_t Index) {
    return;
}
float& _Script_Paper2D::PaperFlipbook::get_FramesPerSecond() {
    return *(float*)((uintptr_t)this + 0x28);
}
void* _Script_Paper2D::PaperFlipbook::get_KeyFrames() {
    return (void*)((uintptr_t)this + 0x30);
}
_Script_Paper2D::PaperSprite* _Script_Paper2D::PaperFlipbook::GetSpriteAtTime(float Time, bool bClampToEnds) {
    return;
}
int32_t _Script_Paper2D::PaperFlipbook::GetKeyFrameIndexAtTime(float Time, bool bClampToEnds) {
    return;
}
_Script_Engine::MaterialInterface*& _Script_Paper2D::PaperFlipbook::get_DefaultMaterial() {
    return *(_Script_Engine::MaterialInterface**)((uintptr_t)this + 0x40);
}
void* _Script_Paper2D::PaperFlipbook::get_CollisionSource() {
    return (void*)((uintptr_t)this + 0x48);
}
_Script_CoreUObject::Class* _Script_Paper2D::PaperFlipbook::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Paper2D.PaperFlipbook");
    return result;
}
float _Script_Paper2D::PaperFlipbook::GetTotalDuration() {
    return;
}
_Script_Paper2D::PaperSprite* _Script_Paper2D::PaperFlipbook::GetSpriteAtFrame(int32_t FrameIndex) {
    return;
}
int32_t _Script_Paper2D::PaperFlipbook::GetNumKeyFrames() {
    return;
}
int32_t _Script_Paper2D::PaperFlipbook::GetNumFrames() {
    return;
}
