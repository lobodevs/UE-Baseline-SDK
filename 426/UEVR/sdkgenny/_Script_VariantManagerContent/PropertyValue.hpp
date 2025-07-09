#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_CoreUObject\Object.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_VariantManagerContent {
#pragma pack(push, 1)
struct PropertyValue : public _Script_CoreUObject::Object {
    private: char pad_28[0x190]; public:
    void* get_Properties();
    void* get_PropertyIndices();
    void* get_CapturedPropSegments();
    void* get_FullDisplayString();
    void* get_PropertySetterName();
    void* get_PropertySetterParameterDefaults();
    bool get_bHasRecordedData();
    void set_bHasRecordedData(bool value);
    void* get_LeafPropertyClass();
    void* get_ValueBytes();
    void* get_PropCategory();
    static _Script_CoreUObject::Class* static_class();
    bool HasRecordedData();
    void* GetPropertyTooltip();
    void* GetFullDisplayString();
}; // Size: 0x1b8
#pragma pack(pop)
}
