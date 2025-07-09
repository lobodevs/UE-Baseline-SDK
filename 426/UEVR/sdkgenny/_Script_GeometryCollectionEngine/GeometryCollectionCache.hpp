#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_CoreUObject\Object.hpp"
namespace _Script_GeometryCollectionEngine {
struct GeometryCollection;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_GeometryCollectionEngine {
#pragma pack(push, 1)
struct GeometryCollectionCache : public _Script_CoreUObject::Object {
    private: char pad_28[0x28]; public:
    void* get_RecordedData();
    _Script_GeometryCollectionEngine::GeometryCollection*& get_SupportedCollection();
    void* get_CompatibleCollectionState();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x50
#pragma pack(pop)
}
