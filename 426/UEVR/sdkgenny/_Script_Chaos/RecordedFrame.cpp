#include "..\FUObjectArray.hpp"
#include "RecordedFrame.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
void* _Script_Chaos::RecordedFrame::get_Transforms() {
    return (void*)((uintptr_t)this + 0x0);
}
void* _Script_Chaos::RecordedFrame::get_Breakings() {
    return (void*)((uintptr_t)this + 0x50);
}
void* _Script_Chaos::RecordedFrame::get_TransformIndices() {
    return (void*)((uintptr_t)this + 0x10);
}
void* _Script_Chaos::RecordedFrame::get_PreviousTransformIndices() {
    return (void*)((uintptr_t)this + 0x20);
}
void* _Script_Chaos::RecordedFrame::get_DisabledFlags() {
    return (void*)((uintptr_t)this + 0x30);
}
float& _Script_Chaos::RecordedFrame::get_Timestamp() {
    return *(float*)((uintptr_t)this + 0xb0);
}
void* _Script_Chaos::RecordedFrame::get_Collisions() {
    return (void*)((uintptr_t)this + 0x40);
}
void* _Script_Chaos::RecordedFrame::get_Trailings() {
    return (void*)((uintptr_t)this + 0x60);
}
_Script_CoreUObject::Class* _Script_Chaos::RecordedFrame::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Chaos.RecordedFrame");
    return result;
}
