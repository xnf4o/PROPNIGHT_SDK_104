// Name: P, Version: 1

#include "../pch.h"

/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function:
//		Offset -> 0x00000000
//		Name   -> Function BlueprintFileUtils.BlueprintFileUtilsBPLibrary.MoveFile
//		Flags  -> ()
// Parameters:
//		struct FString                                     DestFilename                                               (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     SrcFilename                                                (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               bReplace                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               bEvenIfReadOnly                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UBlueprintFileUtilsBPLibrary::MoveFile(const struct FString& DestFilename, const struct FString& SrcFilename, bool bReplace, bool bEvenIfReadOnly)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BlueprintFileUtils.BlueprintFileUtilsBPLibrary.MoveFile");

	UBlueprintFileUtilsBPLibrary_MoveFile_Params params {};
	params.DestFilename = DestFilename;
	params.SrcFilename = SrcFilename;
	params.bReplace = bReplace;
	params.bEvenIfReadOnly = bEvenIfReadOnly;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function BlueprintFileUtils.BlueprintFileUtilsBPLibrary.MakeDirectory
//		Flags  -> ()
// Parameters:
//		struct FString                                     Path                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               bCreateTree                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UBlueprintFileUtilsBPLibrary::MakeDirectory(const struct FString& Path, bool bCreateTree)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BlueprintFileUtils.BlueprintFileUtilsBPLibrary.MakeDirectory");

	UBlueprintFileUtilsBPLibrary_MakeDirectory_Params params {};
	params.Path = Path;
	params.bCreateTree = bCreateTree;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function BlueprintFileUtils.BlueprintFileUtilsBPLibrary.GetUserDirectory
//		Flags  -> ()
// Parameters:
//		struct FString                                     ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FString UBlueprintFileUtilsBPLibrary::GetUserDirectory()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BlueprintFileUtils.BlueprintFileUtilsBPLibrary.GetUserDirectory");

	UBlueprintFileUtilsBPLibrary_GetUserDirectory_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function BlueprintFileUtils.BlueprintFileUtilsBPLibrary.FindRecursive
//		Flags  -> ()
// Parameters:
//		struct FString                                     StartDirectory                                             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		TArray<struct FString>                             FoundPaths                                                 (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
//		struct FString                                     Wildcard                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               bFindFiles                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               bFindDirectories                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UBlueprintFileUtilsBPLibrary::FindRecursive(const struct FString& StartDirectory, TArray<struct FString>* FoundPaths, const struct FString& Wildcard, bool bFindFiles, bool bFindDirectories)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BlueprintFileUtils.BlueprintFileUtilsBPLibrary.FindRecursive");

	UBlueprintFileUtilsBPLibrary_FindRecursive_Params params {};
	params.StartDirectory = StartDirectory;
	params.Wildcard = Wildcard;
	params.bFindFiles = bFindFiles;
	params.bFindDirectories = bFindDirectories;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (FoundPaths != nullptr)
		*FoundPaths = params.FoundPaths;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function BlueprintFileUtils.BlueprintFileUtilsBPLibrary.FindFiles
//		Flags  -> ()
// Parameters:
//		struct FString                                     Directory                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		TArray<struct FString>                             FoundFiles                                                 (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
//		struct FString                                     FileExtension                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UBlueprintFileUtilsBPLibrary::FindFiles(const struct FString& Directory, TArray<struct FString>* FoundFiles, const struct FString& FileExtension)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BlueprintFileUtils.BlueprintFileUtilsBPLibrary.FindFiles");

	UBlueprintFileUtilsBPLibrary_FindFiles_Params params {};
	params.Directory = Directory;
	params.FileExtension = FileExtension;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (FoundFiles != nullptr)
		*FoundFiles = params.FoundFiles;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function BlueprintFileUtils.BlueprintFileUtilsBPLibrary.FileExists
//		Flags  -> ()
// Parameters:
//		struct FString                                     Filename                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UBlueprintFileUtilsBPLibrary::FileExists(const struct FString& Filename)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BlueprintFileUtils.BlueprintFileUtilsBPLibrary.FileExists");

	UBlueprintFileUtilsBPLibrary_FileExists_Params params {};
	params.Filename = Filename;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function BlueprintFileUtils.BlueprintFileUtilsBPLibrary.DirectoryExists
//		Flags  -> ()
// Parameters:
//		struct FString                                     Directory                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UBlueprintFileUtilsBPLibrary::DirectoryExists(const struct FString& Directory)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BlueprintFileUtils.BlueprintFileUtilsBPLibrary.DirectoryExists");

	UBlueprintFileUtilsBPLibrary_DirectoryExists_Params params {};
	params.Directory = Directory;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function BlueprintFileUtils.BlueprintFileUtilsBPLibrary.DeleteFile
//		Flags  -> ()
// Parameters:
//		struct FString                                     Filename                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               bMustExist                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               bEvenIfReadOnly                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UBlueprintFileUtilsBPLibrary::DeleteFile(const struct FString& Filename, bool bMustExist, bool bEvenIfReadOnly)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BlueprintFileUtils.BlueprintFileUtilsBPLibrary.DeleteFile");

	UBlueprintFileUtilsBPLibrary_DeleteFile_Params params {};
	params.Filename = Filename;
	params.bMustExist = bMustExist;
	params.bEvenIfReadOnly = bEvenIfReadOnly;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function BlueprintFileUtils.BlueprintFileUtilsBPLibrary.DeleteDirectory
//		Flags  -> ()
// Parameters:
//		struct FString                                     Directory                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               bMustExist                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               bDeleteRecursively                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UBlueprintFileUtilsBPLibrary::DeleteDirectory(const struct FString& Directory, bool bMustExist, bool bDeleteRecursively)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BlueprintFileUtils.BlueprintFileUtilsBPLibrary.DeleteDirectory");

	UBlueprintFileUtilsBPLibrary_DeleteDirectory_Params params {};
	params.Directory = Directory;
	params.bMustExist = bMustExist;
	params.bDeleteRecursively = bDeleteRecursively;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function BlueprintFileUtils.BlueprintFileUtilsBPLibrary.CopyFile
//		Flags  -> ()
// Parameters:
//		struct FString                                     DestFilename                                               (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     SrcFilename                                                (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               bReplace                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               bEvenIfReadOnly                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UBlueprintFileUtilsBPLibrary::CopyFile(const struct FString& DestFilename, const struct FString& SrcFilename, bool bReplace, bool bEvenIfReadOnly)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BlueprintFileUtils.BlueprintFileUtilsBPLibrary.CopyFile");

	UBlueprintFileUtilsBPLibrary_CopyFile_Params params {};
	params.DestFilename = DestFilename;
	params.SrcFilename = SrcFilename;
	params.bReplace = bReplace;
	params.bEvenIfReadOnly = bEvenIfReadOnly;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
