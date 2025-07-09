#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct MaterialCachedExpressionData {
    private: char pad_0[0x228]; public:
    void* get_Parameters();
    void* get_ReferencedTextures();
    void* get_FunctionInfos();
    void* get_ParameterCollectionInfos();
    void* get_DefaultLayers();
    void* get_DefaultLayerBlends();
    void* get_GrassTypes();
    void* get_DynamicParameterNames();
    void* get_QualityLevelsUsed();
    bool get_bHasRuntimeVirtualTextureOutput();
    void set_bHasRuntimeVirtualTextureOutput(bool value);
    bool get_bHasSceneColor();
    void set_bHasSceneColor(bool value);
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x228
#pragma pack(pop)
}
