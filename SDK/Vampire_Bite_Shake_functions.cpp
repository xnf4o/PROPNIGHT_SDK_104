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
//		Name   -> Function Vampire_Bite_Shake.Vampire_Bite_Shake_C.ReceivePlayShake
//		Flags  -> ()
// Parameters:
//		float                                              Scale                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UVampire_Bite_Shake_C::ReceivePlayShake(float Scale)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Vampire_Bite_Shake.Vampire_Bite_Shake_C.ReceivePlayShake");

	UVampire_Bite_Shake_C_ReceivePlayShake_Params params {};
	params.Scale = Scale;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Vampire_Bite_Shake.Vampire_Bite_Shake_C.ExecuteUbergraph_Vampire_Bite_Shake
//		Flags  -> ()
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UVampire_Bite_Shake_C::ExecuteUbergraph_Vampire_Bite_Shake(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Vampire_Bite_Shake.Vampire_Bite_Shake_C.ExecuteUbergraph_Vampire_Bite_Shake");

	UVampire_Bite_Shake_C_ExecuteUbergraph_Vampire_Bite_Shake_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
