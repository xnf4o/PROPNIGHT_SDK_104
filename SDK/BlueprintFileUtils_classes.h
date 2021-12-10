#pragma once

// Name: P, Version: 1


/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Classes
//---------------------------------------------------------------------------

// Class BlueprintFileUtils.BlueprintFileUtilsBPLibrary
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UBlueprintFileUtilsBPLibrary : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class BlueprintFileUtils.BlueprintFileUtilsBPLibrary");
		return ptr;
	}



	bool MoveFile(const struct FString& DestFilename, const struct FString& SrcFilename, bool bReplace, bool bEvenIfReadOnly);
	bool MakeDirectory(const struct FString& Path, bool bCreateTree);
	struct FString GetUserDirectory();
	bool FindRecursive(const struct FString& StartDirectory, TArray<struct FString>* FoundPaths, const struct FString& Wildcard, bool bFindFiles, bool bFindDirectories);
	bool FindFiles(const struct FString& Directory, TArray<struct FString>* FoundFiles, const struct FString& FileExtension);
	bool FileExists(const struct FString& Filename);
	bool DirectoryExists(const struct FString& Directory);
	bool DeleteFile(const struct FString& Filename, bool bMustExist, bool bEvenIfReadOnly);
	bool DeleteDirectory(const struct FString& Directory, bool bMustExist, bool bDeleteRecursively);
	bool CopyFile(const struct FString& DestFilename, const struct FString& SrcFilename, bool bReplace, bool bEvenIfReadOnly);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
