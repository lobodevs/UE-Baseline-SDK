#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_MovieScene\MovieSceneSequence.hpp"
namespace _Script_MovieScene {
struct MovieScene;
}
namespace _Script_CoreUObject {
struct Object;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_LevelSequence {
#pragma pack(push, 1)
struct LevelSequence : public _Script_MovieScene::MovieSceneSequence {
    private: char pad_60[0x168]; public:
    _Script_MovieScene::MovieScene*& get_MovieScene();
    void* get_ObjectReferences();
    void* get_BindingReferences();
    void* get_PossessedObjects();
    void* get_DirectorClass();
    void* get_AssetUserData();
    static _Script_CoreUObject::Class* static_class();
    void RemoveMetaDataByClass(void* InClass);
    _Script_CoreUObject::Object* FindOrAddMetaDataByClass(void* InClass);
    _Script_CoreUObject::Object* FindMetaDataByClass(void* InClass);
    _Script_CoreUObject::Object* CopyMetaData(_Script_CoreUObject::Object* InMetaData);
}; // Size: 0x1c8
#pragma pack(pop)
}
