#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <stdint.h>

#include "il2cpp-class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "il2cpp-object-internals.h"

template <typename R>
struct VirtFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};


extern RuntimeClass* KeyValuePair_2_tBCE16D0D06F9AF10E3F89C064C5CCA69892173D4_il2cpp_TypeInfo_var;
extern RuntimeClass* String_t_il2cpp_TypeInfo_var;
extern const RuntimeMethod* KeyValuePair_2_get_Key_mCFBEF655D47EEDCBD2F5DF078E83CBC9E9650D79_RuntimeMethod_var;
extern const RuntimeMethod* KeyValuePair_2_get_Value_m959EB4BEF509E3DC620D1D2156AAB0527B292B04_RuntimeMethod_var;
extern const uint32_t IKeyValuePair_2_get_Key_m885B7C142DA2F77FF47116F854F3FEDB3F3B2F71_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern const uint32_t IKeyValuePair_2_get_Value_mF56A235FD35F100A45378377FEA55F2CD616861A_ComCallableWrapperProjectedMethod_MetadataUsageId;



#ifndef RUNTIMEOBJECT_H
#define RUNTIMEOBJECT_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEOBJECT_H
// Windows.Foundation.Collections.IKeyValuePair`2<System.UInt64,System.Object>
struct NOVTABLE IKeyValuePair_2_tDF13D32A62AC2240CBB9C84E41CF5712F4803994 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IKeyValuePair_2_get_Key_m885B7C142DA2F77FF47116F854F3FEDB3F3B2F71(uint64_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IKeyValuePair_2_get_Value_mF56A235FD35F100A45378377FEA55F2CD616861A(Il2CppIInspectable** comReturnValue) = 0;
};
#ifndef STRING_T_H
#define STRING_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.String
struct  String_t  : public RuntimeObject
{
public:
	// System.Int32 System.String::m_stringLength
	int32_t ___m_stringLength_0;
	// System.Char System.String::m_firstChar
	Il2CppChar ___m_firstChar_1;

public:
	inline static int32_t get_offset_of_m_stringLength_0() { return static_cast<int32_t>(offsetof(String_t, ___m_stringLength_0)); }
	inline int32_t get_m_stringLength_0() const { return ___m_stringLength_0; }
	inline int32_t* get_address_of_m_stringLength_0() { return &___m_stringLength_0; }
	inline void set_m_stringLength_0(int32_t value)
	{
		___m_stringLength_0 = value;
	}

	inline static int32_t get_offset_of_m_firstChar_1() { return static_cast<int32_t>(offsetof(String_t, ___m_firstChar_1)); }
	inline Il2CppChar get_m_firstChar_1() const { return ___m_firstChar_1; }
	inline Il2CppChar* get_address_of_m_firstChar_1() { return &___m_firstChar_1; }
	inline void set_m_firstChar_1(Il2CppChar value)
	{
		___m_firstChar_1 = value;
	}
};

struct String_t_StaticFields
{
public:
	// System.String System.String::Empty
	String_t* ___Empty_5;

public:
	inline static int32_t get_offset_of_Empty_5() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___Empty_5)); }
	inline String_t* get_Empty_5() const { return ___Empty_5; }
	inline String_t** get_address_of_Empty_5() { return &___Empty_5; }
	inline void set_Empty_5(String_t* value)
	{
		___Empty_5 = value;
		Il2CppCodeGenWriteBarrier((&___Empty_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STRING_T_H
#ifndef VALUETYPE_T4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_H
#define VALUETYPE_T4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ValueType
struct  ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_marshaled_com
{
};
#endif // VALUETYPE_T4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_H
#ifndef KEYVALUEPAIR_2_TBCE16D0D06F9AF10E3F89C064C5CCA69892173D4_H
#define KEYVALUEPAIR_2_TBCE16D0D06F9AF10E3F89C064C5CCA69892173D4_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.KeyValuePair`2<System.UInt64,System.Object>
struct  KeyValuePair_2_tBCE16D0D06F9AF10E3F89C064C5CCA69892173D4 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	uint64_t ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	RuntimeObject * ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_tBCE16D0D06F9AF10E3F89C064C5CCA69892173D4, ___key_0)); }
	inline uint64_t get_key_0() const { return ___key_0; }
	inline uint64_t* get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(uint64_t value)
	{
		___key_0 = value;
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_tBCE16D0D06F9AF10E3F89C064C5CCA69892173D4, ___value_1)); }
	inline RuntimeObject * get_value_1() const { return ___value_1; }
	inline RuntimeObject ** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(RuntimeObject * value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier((&___value_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // KEYVALUEPAIR_2_TBCE16D0D06F9AF10E3F89C064C5CCA69892173D4_H


// TKey System.Collections.Generic.KeyValuePair`2<System.UInt64,System.Object>::get_Key()
extern "C" IL2CPP_METHOD_ATTR uint64_t KeyValuePair_2_get_Key_mCFBEF655D47EEDCBD2F5DF078E83CBC9E9650D79_gshared (KeyValuePair_2_tBCE16D0D06F9AF10E3F89C064C5CCA69892173D4 * __this, const RuntimeMethod* method);
// TValue System.Collections.Generic.KeyValuePair`2<System.UInt64,System.Object>::get_Value()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * KeyValuePair_2_get_Value_m959EB4BEF509E3DC620D1D2156AAB0527B292B04_gshared (KeyValuePair_2_tBCE16D0D06F9AF10E3F89C064C5CCA69892173D4 * __this, const RuntimeMethod* method);

// TKey System.Collections.Generic.KeyValuePair`2<System.UInt64,System.Object>::get_Key()
inline uint64_t KeyValuePair_2_get_Key_mCFBEF655D47EEDCBD2F5DF078E83CBC9E9650D79 (KeyValuePair_2_tBCE16D0D06F9AF10E3F89C064C5CCA69892173D4 * __this, const RuntimeMethod* method)
{
	return ((  uint64_t (*) (KeyValuePair_2_tBCE16D0D06F9AF10E3F89C064C5CCA69892173D4 *, const RuntimeMethod*))KeyValuePair_2_get_Key_mCFBEF655D47EEDCBD2F5DF078E83CBC9E9650D79_gshared)(__this, method);
}
// TValue System.Collections.Generic.KeyValuePair`2<System.UInt64,System.Object>::get_Value()
inline RuntimeObject * KeyValuePair_2_get_Value_m959EB4BEF509E3DC620D1D2156AAB0527B292B04 (KeyValuePair_2_tBCE16D0D06F9AF10E3F89C064C5CCA69892173D4 * __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject * (*) (KeyValuePair_2_tBCE16D0D06F9AF10E3F89C064C5CCA69892173D4 *, const RuntimeMethod*))KeyValuePair_2_get_Value_m959EB4BEF509E3DC620D1D2156AAB0527B292B04_gshared)(__this, method);
}
// Projected COM callable wrapper method for K Windows.Foundation.Collections.IKeyValuePair`2<System.UInt64,System.Object>::get_Key()
il2cpp_hresult_t IKeyValuePair_2_get_Key_m885B7C142DA2F77FF47116F854F3FEDB3F3B2F71_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint64_t* comReturnValue)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IKeyValuePair_2_get_Key_m885B7C142DA2F77FF47116F854F3FEDB3F3B2F71_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	uint64_t returnValue;
	try
	{
		RuntimeObject* __thisValue = (RuntimeObject*)__this;
		returnValue = KeyValuePair_2_get_Key_mCFBEF655D47EEDCBD2F5DF078E83CBC9E9650D79((KeyValuePair_2_tBCE16D0D06F9AF10E3F89C064C5CCA69892173D4*)UnBox(__thisValue, KeyValuePair_2_tBCE16D0D06F9AF10E3F89C064C5CCA69892173D4_il2cpp_TypeInfo_var), KeyValuePair_2_get_Key_mCFBEF655D47EEDCBD2F5DF078E83CBC9E9650D79_RuntimeMethod_var);
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		memset(comReturnValue, 0, sizeof(*comReturnValue));
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	*comReturnValue = returnValue;
	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for V Windows.Foundation.Collections.IKeyValuePair`2<System.UInt64,System.Object>::get_Value()
il2cpp_hresult_t IKeyValuePair_2_get_Value_mF56A235FD35F100A45378377FEA55F2CD616861A_ComCallableWrapperProjectedMethod(RuntimeObject* __this, Il2CppIInspectable** comReturnValue)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IKeyValuePair_2_get_Value_mF56A235FD35F100A45378377FEA55F2CD616861A_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	RuntimeObject * returnValue;
	try
	{
		RuntimeObject* __thisValue = (RuntimeObject*)__this;
		returnValue = KeyValuePair_2_get_Value_m959EB4BEF509E3DC620D1D2156AAB0527B292B04((KeyValuePair_2_tBCE16D0D06F9AF10E3F89C064C5CCA69892173D4*)UnBox(__thisValue, KeyValuePair_2_tBCE16D0D06F9AF10E3F89C064C5CCA69892173D4_il2cpp_TypeInfo_var), KeyValuePair_2_get_Value_m959EB4BEF509E3DC620D1D2156AAB0527B292B04_RuntimeMethod_var);
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		memset(comReturnValue, 0, sizeof(*comReturnValue));
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	// Marshaling of return value back from managed representation
	Il2CppIInspectable* _returnValue_marshaled = NULL;
	if (returnValue != NULL)
	{
		if (il2cpp_codegen_is_import_or_windows_runtime(returnValue))
		{
			il2cpp_hresult_t hr = ((Il2CppComObject *)returnValue)->identity->QueryInterface(Il2CppIInspectable::IID, reinterpret_cast<void**>(&_returnValue_marshaled));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);
		}
		else
		{
			_returnValue_marshaled = il2cpp_codegen_com_get_or_create_ccw<Il2CppIInspectable>(returnValue);
		}
	}
	else
	{
		_returnValue_marshaled = NULL;
	}

	*comReturnValue = _returnValue_marshaled;
	return IL2CPP_S_OK;
}
