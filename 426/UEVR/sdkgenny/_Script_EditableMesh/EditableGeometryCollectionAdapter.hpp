#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "EditableMeshAdapter.hpp"
namespace _Script_GeometryCollectionEngine {
struct GeometryCollection;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_EditableMesh {
#pragma pack(push, 1)
struct EditableGeometryCollectionAdapter : public EditableMeshAdapter {
    private: char pad_28[0xb0]; public:
    _Script_GeometryCollectionEngine::GeometryCollection*& get_GeometryCollection();
    _Script_GeometryCollectionEngine::GeometryCollection*& get_OriginalGeometryCollection();
    int32_t& get_GeometryCollectionLODIndex();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0xd8
#pragma pack(pop)
}
