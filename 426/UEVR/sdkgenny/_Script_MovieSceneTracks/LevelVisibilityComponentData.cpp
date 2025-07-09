#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "LevelVisibilityComponentData.hpp"
#include "MovieSceneLevelVisibilitySection.hpp"
_Script_CoreUObject::Class* _Script_MovieSceneTracks::LevelVisibilityComponentData::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/MovieSceneTracks.LevelVisibilityComponentData");
    return result;
}
_Script_MovieSceneTracks::MovieSceneLevelVisibilitySection*& _Script_MovieSceneTracks::LevelVisibilityComponentData::get_Section() {
    return *(_Script_MovieSceneTracks::MovieSceneLevelVisibilitySection**)((uintptr_t)this + 0x0);
}
