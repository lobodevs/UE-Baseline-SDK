#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "BlueprintFunctionLibrary.hpp"
#include "BlueprintPathsLibrary.hpp"
_Script_CoreUObject::Class* _Script_Engine::BlueprintPathsLibrary::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.BlueprintPathsLibrary");
    return result;
}
void* _Script_Engine::BlueprintPathsLibrary::GameSourceDir() {
    return;
}
void* _Script_Engine::BlueprintPathsLibrary::VideoCaptureDir() {
    return;
}
void _Script_Engine::BlueprintPathsLibrary::ValidatePath(void* InPath, bool& bDidSucceed, void*& OutReason) {
    return;
}
void _Script_Engine::BlueprintPathsLibrary::Split(void* InPath, void*& PathPart, void*& FilenamePart, void*& ExtensionPart) {
    return;
}
void* _Script_Engine::BlueprintPathsLibrary::GetCleanFilename(void* InPath) {
    return;
}
void _Script_Engine::BlueprintPathsLibrary::SetProjectFilePath(void* NewGameProjectFilePath) {
    return;
}
bool _Script_Engine::BlueprintPathsLibrary::ShouldSaveToUserDir() {
    return;
}
void* _Script_Engine::BlueprintPathsLibrary::SourceConfigDir() {
    return;
}
void* _Script_Engine::BlueprintPathsLibrary::ShaderWorkingDir() {
    return;
}
void* _Script_Engine::BlueprintPathsLibrary::SetExtension(void* InPath, void* InNewExtension) {
    return;
}
void _Script_Engine::BlueprintPathsLibrary::MakeStandardFilename(void* InPath, void*& OutPath) {
    return;
}
void* _Script_Engine::BlueprintPathsLibrary::ScreenShotDir() {
    return;
}
void* _Script_Engine::BlueprintPathsLibrary::GetEditorLocalizationPaths() {
    return;
}
void* _Script_Engine::BlueprintPathsLibrary::SandboxesDir() {
    return;
}
void* _Script_Engine::BlueprintPathsLibrary::RootDir() {
    return;
}
void _Script_Engine::BlueprintPathsLibrary::RemoveDuplicateSlashes(void* InPath, void*& OutPath) {
    return;
}
void* _Script_Engine::BlueprintPathsLibrary::ProjectUserDir() {
    return;
}
void* _Script_Engine::BlueprintPathsLibrary::ProjectSavedDir() {
    return;
}
bool _Script_Engine::BlueprintPathsLibrary::IsProjectFilePathSet() {
    return;
}
void* _Script_Engine::BlueprintPathsLibrary::ProjectPluginsDir() {
    return;
}
void* _Script_Engine::BlueprintPathsLibrary::ProjectPersistentDownloadDir() {
    return;
}
void _Script_Engine::BlueprintPathsLibrary::NormalizeFilename(void* InPath, void*& OutPath) {
    return;
}
void* _Script_Engine::BlueprintPathsLibrary::ProjectModsDir() {
    return;
}
void* _Script_Engine::BlueprintPathsLibrary::EngineSavedDir() {
    return;
}
void* _Script_Engine::BlueprintPathsLibrary::ProjectLogDir() {
    return;
}
bool _Script_Engine::BlueprintPathsLibrary::HasProjectPersistentDownloadDir() {
    return;
}
void* _Script_Engine::BlueprintPathsLibrary::ProjectIntermediateDir() {
    return;
}
void* _Script_Engine::BlueprintPathsLibrary::ProjectDir() {
    return;
}
void* _Script_Engine::BlueprintPathsLibrary::EngineSourceDir() {
    return;
}
void* _Script_Engine::BlueprintPathsLibrary::ProjectContentDir() {
    return;
}
void* _Script_Engine::BlueprintPathsLibrary::ProjectConfigDir() {
    return;
}
void* _Script_Engine::BlueprintPathsLibrary::ProfilingDir() {
    return;
}
void _Script_Engine::BlueprintPathsLibrary::NormalizeDirectoryName(void* InPath, void*& OutPath) {
    return;
}
void* _Script_Engine::BlueprintPathsLibrary::MakeValidFileName(void* inString, void* InReplacementChar) {
    return;
}
void _Script_Engine::BlueprintPathsLibrary::MakePlatformFilename(void* InPath, void*& OutPath) {
    return;
}
void* _Script_Engine::BlueprintPathsLibrary::GetBaseFilename(void* InPath, bool bRemovePath) {
    return;
}
bool _Script_Engine::BlueprintPathsLibrary::MakePathRelativeTo(void* InPath, void* InRelativeTo, void*& OutPath) {
    return;
}
void* _Script_Engine::BlueprintPathsLibrary::LaunchDir() {
    return;
}
bool _Script_Engine::BlueprintPathsLibrary::IsSamePath(void* PathA, void* PathB) {
    return;
}
void* _Script_Engine::BlueprintPathsLibrary::EngineUserDir() {
    return;
}
bool _Script_Engine::BlueprintPathsLibrary::IsRestrictedPath(void* InPath) {
    return;
}
bool _Script_Engine::BlueprintPathsLibrary::IsRelative(void* InPath) {
    return;
}
bool _Script_Engine::BlueprintPathsLibrary::FileExists(void* InPath) {
    return;
}
bool _Script_Engine::BlueprintPathsLibrary::IsDrive(void* InPath) {
    return;
}
void* _Script_Engine::BlueprintPathsLibrary::EnterpriseFeaturePackDir() {
    return;
}
void* _Script_Engine::BlueprintPathsLibrary::GetToolTipLocalizationPaths() {
    return;
}
void* _Script_Engine::BlueprintPathsLibrary::GetRestrictedFolderNames() {
    return;
}
void* _Script_Engine::BlueprintPathsLibrary::GetRelativePathToRoot() {
    return;
}
void* _Script_Engine::BlueprintPathsLibrary::GetPropertyNameLocalizationPaths() {
    return;
}
void* _Script_Engine::BlueprintPathsLibrary::GetProjectFilePath() {
    return;
}
void* _Script_Engine::BlueprintPathsLibrary::GetPath(void* InPath) {
    return;
}
void* _Script_Engine::BlueprintPathsLibrary::GetInvalidFileSystemChars() {
    return;
}
void* _Script_Engine::BlueprintPathsLibrary::GetGameLocalizationPaths() {
    return;
}
void* _Script_Engine::BlueprintPathsLibrary::GetExtension(void* InPath, bool bIncludeDot) {
    return;
}
void* _Script_Engine::BlueprintPathsLibrary::GetEngineLocalizationPaths() {
    return;
}
void* _Script_Engine::BlueprintPathsLibrary::GameDevelopersDir() {
    return;
}
void* _Script_Engine::BlueprintPathsLibrary::GeneratedConfigDir() {
    return;
}
void* _Script_Engine::BlueprintPathsLibrary::GameUserDeveloperDir() {
    return;
}
void* _Script_Engine::BlueprintPathsLibrary::GameAgnosticSavedDir() {
    return;
}
void* _Script_Engine::BlueprintPathsLibrary::FeaturePackDir() {
    return;
}
void* _Script_Engine::BlueprintPathsLibrary::EnterprisePluginsDir() {
    return;
}
void* _Script_Engine::BlueprintPathsLibrary::EnterpriseDir() {
    return;
}
void* _Script_Engine::BlueprintPathsLibrary::EngineVersionAgnosticUserDir() {
    return;
}
void* _Script_Engine::BlueprintPathsLibrary::EnginePluginsDir() {
    return;
}
void* _Script_Engine::BlueprintPathsLibrary::EngineIntermediateDir() {
    return;
}
void* _Script_Engine::BlueprintPathsLibrary::EngineDir() {
    return;
}
void* _Script_Engine::BlueprintPathsLibrary::EngineContentDir() {
    return;
}
void* _Script_Engine::BlueprintPathsLibrary::EngineConfigDir() {
    return;
}
bool _Script_Engine::BlueprintPathsLibrary::DirectoryExists(void* InPath) {
    return;
}
void* _Script_Engine::BlueprintPathsLibrary::DiffDir() {
    return;
}
void* _Script_Engine::BlueprintPathsLibrary::CreateTempFilename(void* Path, void* Prefix, void* Extension) {
    return;
}
void* _Script_Engine::BlueprintPathsLibrary::ConvertToSandboxPath(void* InPath, void* InSandboxName) {
    return;
}
void* _Script_Engine::BlueprintPathsLibrary::ConvertRelativePathToFull(void* InPath, void* InBasePath) {
    return;
}
void* _Script_Engine::BlueprintPathsLibrary::ConvertFromSandboxPath(void* InPath, void* InSandboxName) {
    return;
}
void* _Script_Engine::BlueprintPathsLibrary::Combine(void*& InPaths) {
    return;
}
bool _Script_Engine::BlueprintPathsLibrary::CollapseRelativeDirectories(void* InPath, void*& OutPath) {
    return;
}
void* _Script_Engine::BlueprintPathsLibrary::CloudDir() {
    return;
}
void* _Script_Engine::BlueprintPathsLibrary::ChangeExtension(void* InPath, void* InNewExtension) {
    return;
}
void* _Script_Engine::BlueprintPathsLibrary::BugItDir() {
    return;
}
void* _Script_Engine::BlueprintPathsLibrary::AutomationTransientDir() {
    return;
}
void* _Script_Engine::BlueprintPathsLibrary::AutomationLogDir() {
    return;
}
void* _Script_Engine::BlueprintPathsLibrary::AutomationDir() {
    return;
}
