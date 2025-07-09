#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "..\_Script_CoreUObject\RandomStream.hpp"
#include "BlueprintFunctionLibrary.hpp"
#include "KismetArrayLibrary.hpp"
void _Script_Engine::KismetArrayLibrary::FilterArray(void*& TargetArray, void* FilterClass, void*& FilteredArray) {
    return;
}
void _Script_Engine::KismetArrayLibrary::Array_Random(void*& TargetArray, int32_t& OutItem, int32_t& OutIndex) {
    return;
}
_Script_CoreUObject::Class* _Script_Engine::KismetArrayLibrary::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.KismetArrayLibrary");
    return result;
}
void _Script_Engine::KismetArrayLibrary::Array_Swap(void*& TargetArray, int32_t FirstIndex, int32_t SecondIndex) {
    return;
}
int32_t _Script_Engine::KismetArrayLibrary::Array_Find(void*& TargetArray, int32_t& ItemToFind) {
    return;
}
void _Script_Engine::KismetArrayLibrary::SetArrayPropertyByName(_Script_CoreUObject::Object* Object, void* PropertyName, void*& Value) {
    return;
}
void _Script_Engine::KismetArrayLibrary::Array_Set(void*& TargetArray, int32_t Index, int32_t& Item, bool bSizeToFit) {
    return;
}
void _Script_Engine::KismetArrayLibrary::Array_Shuffle(void*& TargetArray) {
    return;
}
int32_t _Script_Engine::KismetArrayLibrary::Array_LastIndex(void*& TargetArray) {
    return;
}
void _Script_Engine::KismetArrayLibrary::Array_Reverse(void*& TargetArray) {
    return;
}
void _Script_Engine::KismetArrayLibrary::Array_Resize(void*& TargetArray, int32_t Size) {
    return;
}
bool _Script_Engine::KismetArrayLibrary::Array_RemoveItem(void*& TargetArray, int32_t& Item) {
    return;
}
void _Script_Engine::KismetArrayLibrary::Array_Remove(void*& TargetArray, int32_t IndexToRemove) {
    return;
}
void _Script_Engine::KismetArrayLibrary::Array_RandomFromStream(void*& TargetArray, _Script_CoreUObject::RandomStream& RandomStream, int32_t& OutItem, int32_t& OutIndex) {
    return;
}
void _Script_Engine::KismetArrayLibrary::Array_Clear(void*& TargetArray) {
    return;
}
int32_t _Script_Engine::KismetArrayLibrary::Array_Length(void*& TargetArray) {
    return;
}
bool _Script_Engine::KismetArrayLibrary::Array_IsValidIndex(void*& TargetArray, int32_t IndexToTest) {
    return;
}
void _Script_Engine::KismetArrayLibrary::Array_Insert(void*& TargetArray, int32_t& NewItem, int32_t Index) {
    return;
}
bool _Script_Engine::KismetArrayLibrary::Array_Identical(void*& ArrayA, void*& ArrayB) {
    return;
}
void _Script_Engine::KismetArrayLibrary::Array_Get(void*& TargetArray, int32_t Index, int32_t& Item) {
    return;
}
bool _Script_Engine::KismetArrayLibrary::Array_Contains(void*& TargetArray, int32_t& ItemToFind) {
    return;
}
void _Script_Engine::KismetArrayLibrary::Array_Append(void*& TargetArray, void*& SourceArray) {
    return;
}
int32_t _Script_Engine::KismetArrayLibrary::Array_AddUnique(void*& TargetArray, int32_t& NewItem) {
    return;
}
int32_t _Script_Engine::KismetArrayLibrary::Array_Add(void*& TargetArray, int32_t& NewItem) {
    return;
}
