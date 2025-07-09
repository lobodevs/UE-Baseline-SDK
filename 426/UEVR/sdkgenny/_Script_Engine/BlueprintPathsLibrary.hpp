#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "BlueprintFunctionLibrary.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct BlueprintPathsLibrary : public BlueprintFunctionLibrary {
    static _Script_CoreUObject::Class* static_class();
    void* VideoCaptureDir();
    void ValidatePath(void* InPath, bool& bDidSucceed, void*& OutReason);
    void Split(void* InPath, void*& PathPart, void*& FilenamePart, void*& ExtensionPart);
    void* SourceConfigDir();
    bool ShouldSaveToUserDir();
    void* ShaderWorkingDir();
    void SetProjectFilePath(void* NewGameProjectFilePath);
    void* SetExtension(void* InPath, void* InNewExtension);
    void* ScreenShotDir();
    void* SandboxesDir();
    void* RootDir();
    void RemoveDuplicateSlashes(void* InPath, void*& OutPath);
    void* ProjectUserDir();
    void* ProjectSavedDir();
    void* ProjectPluginsDir();
    void* ProjectPersistentDownloadDir();
    void* ProjectModsDir();
    void* ProjectLogDir();
    void* ProjectIntermediateDir();
    void* ProjectDir();
    void* ProjectContentDir();
    void* ProjectConfigDir();
    void* ProfilingDir();
    void NormalizeFilename(void* InPath, void*& OutPath);
    void NormalizeDirectoryName(void* InPath, void*& OutPath);
    void* MakeValidFileName(void* inString, void* InReplacementChar);
    void MakeStandardFilename(void* InPath, void*& OutPath);
    void MakePlatformFilename(void* InPath, void*& OutPath);
    bool MakePathRelativeTo(void* InPath, void* InRelativeTo, void*& OutPath);
    void* LaunchDir();
    bool IsSamePath(void* PathA, void* PathB);
    bool IsRestrictedPath(void* InPath);
    bool IsRelative(void* InPath);
    bool IsProjectFilePathSet();
    bool IsDrive(void* InPath);
    bool HasProjectPersistentDownloadDir();
    void* GetToolTipLocalizationPaths();
    void* GetRestrictedFolderNames();
    void* GetRelativePathToRoot();
    void* GetPropertyNameLocalizationPaths();
    void* GetProjectFilePath();
    void* GetPath(void* InPath);
    void* GetInvalidFileSystemChars();
    void* GetGameLocalizationPaths();
    void* GetExtension(void* InPath, bool bIncludeDot);
    void* GetEngineLocalizationPaths();
    void* GetEditorLocalizationPaths();
    void* GetCleanFilename(void* InPath);
    void* GetBaseFilename(void* InPath, bool bRemovePath);
    void* GeneratedConfigDir();
    void* GameUserDeveloperDir();
    void* GameSourceDir();
    void* GameDevelopersDir();
    void* GameAgnosticSavedDir();
    bool FileExists(void* InPath);
    void* FeaturePackDir();
    void* EnterprisePluginsDir();
    void* EnterpriseFeaturePackDir();
    void* EnterpriseDir();
    void* EngineVersionAgnosticUserDir();
    void* EngineUserDir();
    void* EngineSourceDir();
    void* EngineSavedDir();
    void* EnginePluginsDir();
    void* EngineIntermediateDir();
    void* EngineDir();
    void* EngineContentDir();
    void* EngineConfigDir();
    bool DirectoryExists(void* InPath);
    void* DiffDir();
    void* CreateTempFilename(void* Path, void* Prefix, void* Extension);
    void* ConvertToSandboxPath(void* InPath, void* InSandboxName);
    void* ConvertRelativePathToFull(void* InPath, void* InBasePath);
    void* ConvertFromSandboxPath(void* InPath, void* InSandboxName);
    void* Combine(void*& InPaths);
    bool CollapseRelativeDirectories(void* InPath, void*& OutPath);
    void* CloudDir();
    void* ChangeExtension(void* InPath, void* InNewExtension);
    void* BugItDir();
    void* AutomationTransientDir();
    void* AutomationLogDir();
    void* AutomationDir();
}; // Size: 0x28
#pragma pack(pop)
}
