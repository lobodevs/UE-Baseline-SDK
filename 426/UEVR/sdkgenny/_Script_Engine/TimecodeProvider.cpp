#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\FrameRate.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "..\_Script_CoreUObject\QualifiedFrameTime.hpp"
#include "..\_Script_CoreUObject\Timecode.hpp"
#include "TimecodeProvider.hpp"
float& _Script_Engine::TimecodeProvider::get_FrameDelay() {
    return *(float*)((uintptr_t)this + 0x28);
}
_Script_CoreUObject::Class* _Script_Engine::TimecodeProvider::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.TimecodeProvider");
    return result;
}
_Script_CoreUObject::Timecode _Script_Engine::TimecodeProvider::GetTimecode() {
    return;
}
void* _Script_Engine::TimecodeProvider::GetSynchronizationState() {
    return;
}
_Script_CoreUObject::FrameRate _Script_Engine::TimecodeProvider::GetFrameRate() {
    return;
}
_Script_CoreUObject::QualifiedFrameTime _Script_Engine::TimecodeProvider::GetQualifiedFrameTime() {
    return;
}
_Script_CoreUObject::QualifiedFrameTime _Script_Engine::TimecodeProvider::GetDelayedQualifiedFrameTime() {
    return;
}
_Script_CoreUObject::Timecode _Script_Engine::TimecodeProvider::GetDelayedTimecode() {
    return;
}
bool _Script_Engine::TimecodeProvider::FetchTimecode(_Script_CoreUObject::QualifiedFrameTime& OutFrameTime) {
    return;
}
void _Script_Engine::TimecodeProvider::FetchAndUpdate() {
    return;
}
