#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Niagara {
#pragma pack(push, 1)
struct NiagaraVariableMetaData {
    private: char pad_0[0xf0]; public:
    void* get_Description();
    void* get_CategoryName();
    bool get_bAdvancedDisplay();
    void set_bAdvancedDisplay(bool value);
    int32_t& get_EditorSortPriority();
    bool get_bInlineEditConditionToggle();
    void set_bInlineEditConditionToggle(bool value);
    void* get_EditCondition();
    void* get_VisibleCondition();
    void* get_PropertyMetaData();
    void* get_ParentAttribute();
    void* get_ScopeName();
    void* get_Usage();
    bool get_bIsStaticSwitch();
    void set_bIsStaticSwitch(bool value);
    int32_t& get_StaticSwitchDefaultValue();
    bool get_bAddedToNodeGraphDeepCopy();
    void set_bAddedToNodeGraphDeepCopy(bool value);
    bool get_bOutputIsPersistent();
    void set_bOutputIsPersistent(bool value);
    void* get_CachedNamespacelessVariableName();
    bool get_bCreatedInSystemEditor();
    void set_bCreatedInSystemEditor(bool value);
    bool get_bUseLegacyNameString();
    void set_bUseLegacyNameString(bool value);
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0xf0
#pragma pack(pop)
}
