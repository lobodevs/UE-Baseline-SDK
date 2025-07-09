#include "FName.hpp"
std::wstring FName::ToString() {
    using ToStringFn = TArray<wchar_t>* (*)(const FName*, TArray<wchar_t>*);
    static const auto module = GetModuleHandleA("AOB426-Win64-Shipping.exe");
    static const auto offset = 0xe34f30;
    static const auto fn = (ToStringFn)((uintptr_t)module + offset);
    static TArray<wchar_t> arr{};
    fn(this, &arr);
    return std::wstring(arr.data, arr.count);
}
