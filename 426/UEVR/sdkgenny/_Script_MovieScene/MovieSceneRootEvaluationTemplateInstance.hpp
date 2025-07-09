#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_MovieScene {
struct MovieSceneCompiledDataManager;
}
namespace _Script_MovieScene {
struct MovieSceneEntitySystemLinker;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_MovieScene {
#pragma pack(push, 1)
struct MovieSceneRootEvaluationTemplateInstance {
    private: char pad_0[0xe8]; public:
    void* get_WeakRootSequence();
    _Script_MovieScene::MovieSceneCompiledDataManager*& get_CompiledDataManager();
    _Script_MovieScene::MovieSceneEntitySystemLinker*& get_EntitySystemLinker();
    void* get_DirectorInstances();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0xe8
#pragma pack(pop)
}
