#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "MovieSceneObjectBindingID.hpp"
#include "MovieSceneSignedObject.hpp"
namespace _Script_MovieScene {
struct MovieSceneCompiledData;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_MovieScene {
#pragma pack(push, 1)
struct MovieSceneSequence : public MovieSceneSignedObject {
    private: char pad_50[0x10]; public:
    _Script_MovieScene::MovieSceneCompiledData*& get_CompiledData();
    void* get_DefaultCompletionMode();
    bool get_bParentContextsAreSignificant();
    void set_bParentContextsAreSignificant(bool value);
    bool get_bPlayableDirectly();
    void set_bPlayableDirectly(bool value);
    void* get_SequenceFlags();
    static _Script_CoreUObject::Class* static_class();
    void* FindBindingsByTag(void* InBindingName);
    _Script_MovieScene::MovieSceneObjectBindingID FindBindingByTag(void* InBindingName);
}; // Size: 0x60
#pragma pack(pop)
}
