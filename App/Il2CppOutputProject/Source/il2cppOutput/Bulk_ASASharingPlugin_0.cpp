#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <cstring>
#include <string.h>
#include <stdio.h>
#include <cmath>
#include <limits>
#include <assert.h>
#include <stdint.h>

#include "il2cpp-class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "il2cpp-object-internals.h"

template <typename R, typename T1>
struct VirtFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
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
template <typename R, typename T1, typename T2>
struct InterfaceFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3>
struct InterfaceFuncInvoker3
{
	typedef R (*Func)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename R>
struct InterfaceFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};

// ASASharingPlugin.ASASharing
struct ASASharing_t4C210DEC4C2882F3A7980F6E7EADC735EB231397;
// ASASharingPlugin.ASASharing/<GetSharedAzureAnchorCoroutine>d__2
struct U3CGetSharedAzureAnchorCoroutineU3Ed__2_tB6B8C40880A24708E646404771CFC482A9F68727;
// RestSharp.Authenticators.IAuthenticator
struct IAuthenticator_tD8D3CBD4DDC057E7D168A9C4CE0674D3EC054334;
// RestSharp.IRestRequest
struct IRestRequest_tA5BFF68FD5A6B7D4D8DD42AC2507A08077A5DDD8;
// RestSharp.ParameterType[]
struct ParameterTypeU5BU5D_t8A5D23BDD5046CD7A65A782E87DACF25B8B61CD3;
// RestSharp.RestClient
struct RestClient_t9D31ABF964C6E6DACDA93F8E0317FB6E32D25D53;
// RestSharp.RestRequest
struct RestRequest_t729C3BD2490C2DDC84A0F3F56FE665A1ED6B0F22;
// RestSharp.Serialization.Xml.IXmlSerializer
struct IXmlSerializer_t163C75F44FD51877EBBE46C646A86CE6A27EA515;
// RestSharp.Serializers.ISerializer
struct ISerializer_t33FFB457299EA627C4B5A503227D60458F4ED07B;
// System.Action`1<RestSharp.IRestResponse>
struct Action_1_t7711586CEBBEE9FE3667D306BD01714439FD06D7;
// System.Action`1<System.IO.Stream>
struct Action_1_tC8BAB6C7B8E5508F10B3A5EF475B0FFAE7688621;
// System.Action`1<System.Net.HttpWebRequest>
struct Action_1_t082771D1AD0CF25BB88E99B2C2FAC5370D42031B;
// System.Action`1<UnityEngine.AsyncOperation>
struct Action_1_tCBF754C290FAE894631BED8FD56E9E22C4C187F9;
// System.Action`2<System.IO.Stream,RestSharp.IHttpResponse>
struct Action_2_t1ABB7E0D801DB5E255301AE2B00F26A073DA2EB6;
// System.Char[]
struct CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2;
// System.Collections.Generic.IDictionary`2<RestSharp.DataFormat,RestSharp.Serialization.IRestSerializer>
struct IDictionary_2_t7403CEC15B53A82AA8AA18C8228934D93CA766E5;
// System.Collections.Generic.IDictionary`2<System.String,System.Func`1<RestSharp.Deserializers.IDeserializer>>
struct IDictionary_2_tC71517FF438D454E846E20479FDA72D4D11CEF4A;
// System.Collections.Generic.IList`1<RestSharp.Parameter>
struct IList_1_tCEDA1B8956E4F40CE20703F9971ABD1D8B4746BA;
// System.Collections.Generic.IList`1<System.Net.DecompressionMethods>
struct IList_1_tAFC81E578299F84F5DB47719E027D781B7B086A4;
// System.Collections.Generic.IList`1<System.String>
struct IList_1_tFFB5515FC97391D04D5034ED7F334357FED1FAE6;
// System.Collections.Generic.List`1<RestSharp.FileParameter>
struct List_1_tF00B14A4D0C0DE7F2CA46E52F4490D6FEB28D832;
// System.Collections.Generic.List`1<RestSharp.Parameter>
struct List_1_t726C84D85916790BBA13349F4DCD6D82E61E7EA0;
// System.Collections.IDictionary
struct IDictionary_t1BD5C1546718A374EA8122FBD6C6EE45331E8CE7;
// System.Collections.IEnumerator
struct IEnumerator_t8789118187258CC88B77AFAC6315B5AF87D3E18A;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196;
// System.Func`2<System.String,System.String>
struct Func_2_tC62BE092E723BEF01AD0556B6837E5D8B14DA9D3;
// System.Func`3<System.String,System.Text.Encoding,System.String>
struct Func_3_tF5C1919C183EFC7AA9F6726F4F7D44FBBB7475C3;
// System.IntPtr[]
struct IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD;
// System.Net.Cache.RequestCachePolicy
struct RequestCachePolicy_t30D7352C7E9D49EEADD492A70EC92C118D90CD61;
// System.Net.CookieContainer
struct CookieContainer_t7E062D04BAED9F3B30DDEC14B09660BB506A2A73;
// System.Net.ICredentials
struct ICredentials_t1A41F1096B037CAB53AE01434DF0747881455344;
// System.Net.IWebProxy
struct IWebProxy_tA24C0862A1ACA35D20FD079E2672CA5786C1A67E;
// System.Net.Security.RemoteCertificateValidationCallback
struct RemoteCertificateValidationCallback_t9C6BA19681BAA3CD78E6674293A57FF5DF62831E;
// System.NotSupportedException
struct NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770;
// System.Security.Cryptography.X509Certificates.X509CertificateCollection
struct X509CertificateCollection_t824A6C58D0D1B4A7CAE30F26CE8EE4B23A8A1833;
// System.String
struct String_t;
// System.Text.Encoding
struct Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4;
// System.Text.RegularExpressions.Regex
struct Regex_tFD46E63A462E852189FD6AB4E2B0B67C4D8FDBDF;
// System.Uri
struct Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E;
// System.Version
struct Version_tDBE6876C59B6F56D4F8CAA03851177ABC6FE0DFD;
// System.Void
struct Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017;
// UnityEngine.AsyncOperation
struct AsyncOperation_t304C51ABED8AE734CC8DDDFE13013D8D5A44641D;
// UnityEngine.Networking.CertificateHandler
struct CertificateHandler_tBD070BF4150A44AB482FD36EA3882C363117E8C0;
// UnityEngine.Networking.DownloadHandler
struct DownloadHandler_t4A7802ADC97024B469C87FA454B6973951980EE9;
// UnityEngine.Networking.UnityWebRequest
struct UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129;
// UnityEngine.Networking.UploadHandler
struct UploadHandler_t24F4097D30A1E7C689D8881A27F251B4741601E4;

extern RuntimeClass* Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var;
extern RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
extern RuntimeClass* IDisposable_t7218B22548186B208D65EA5B7870503810A2D15A_il2cpp_TypeInfo_var;
extern RuntimeClass* IRestRequest_tA5BFF68FD5A6B7D4D8DD42AC2507A08077A5DDD8_il2cpp_TypeInfo_var;
extern RuntimeClass* IRestResponse_tF42BE849D1210C9084A28893F8D00F8D2A26563A_il2cpp_TypeInfo_var;
extern RuntimeClass* Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var;
extern RuntimeClass* NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010_il2cpp_TypeInfo_var;
extern RuntimeClass* RestClient_t9D31ABF964C6E6DACDA93F8E0317FB6E32D25D53_il2cpp_TypeInfo_var;
extern RuntimeClass* RestRequest_t729C3BD2490C2DDC84A0F3F56FE665A1ED6B0F22_il2cpp_TypeInfo_var;
extern RuntimeClass* U3CGetSharedAzureAnchorCoroutineU3Ed__2_tB6B8C40880A24708E646404771CFC482A9F68727_il2cpp_TypeInfo_var;
extern String_t* _stringLiteral03A996868D049E00C83030322D6C66E344D74566;
extern String_t* _stringLiteral12A22DD81CC700D0A382226B74CE386EC575A16A;
extern String_t* _stringLiteral42099B4AF021E53FD8FD4E056C2568D7C2E3FFA8;
extern String_t* _stringLiteral44D021A0E816944C5B66D0E45423DEC8129D1BB6;
extern String_t* _stringLiteral5A1C656971CB5881411962EEBE8AC466632BFA00;
extern String_t* _stringLiteral69EBE76DF9E51D756FC20EDD01F67B7D7A28B7AA;
extern String_t* _stringLiteral6F50428FD228E2D0AA992292704EC5A8E6C4A463;
extern String_t* _stringLiteral70C4D620C45C09DF2F02179370AFBF70B56C11A1;
extern String_t* _stringLiteral77D12B97BA61FFCCB079E0DD2EF6809C1E957255;
extern String_t* _stringLiteral8693E9163C692ECB6C54A2F933BCB6B0E33D898A;
extern String_t* _stringLiteral959CA3F1117C10AF3420172C931905E86C9FB26A;
extern String_t* _stringLiteral9CDF1065724A36B065957F3A212C08A238C8F319;
extern String_t* _stringLiteralA06D83986280D6BC40B002809E575012DC226EC9;
extern String_t* _stringLiteralA13C3C1E94DAB78F9725210E85E369AD737ACFC2;
extern String_t* _stringLiteralBB54DB510A92908A5A4DF79FC1AD1EAE8DF50EC3;
extern String_t* _stringLiteralCA9FD0B2414177B79AC2EA7AD76252E4EF6DD65C;
extern String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
extern String_t* _stringLiteralE1AE90FC2F86D79825A96562ADD0919AED98DD02;
extern const RuntimeMethod* ASASharing_ShareAnchor_m6640A75BF1A085825DB3A8F192C003F1DC0F0CDF_RuntimeMethod_var;
extern const RuntimeMethod* U3CGetSharedAzureAnchorCoroutineU3Ed__2_System_Collections_IEnumerator_Reset_m86DF3B0EEFEB5370B11F6D9C0029E68FCFEA3723_RuntimeMethod_var;
extern const uint32_t ASASharing_GetSharedAzureAnchorCoroutine_mD90C6B56DDB60DC3A14A8B159E87E71321FA1519_MetadataUsageId;
extern const uint32_t ASASharing_ShareAnchor_m6640A75BF1A085825DB3A8F192C003F1DC0F0CDF_MetadataUsageId;
extern const uint32_t U3CGetSharedAzureAnchorCoroutineU3Ed__2_MoveNext_m54FB019A5EBFCA6884A5D56F285FB444E404A5B8_MetadataUsageId;
extern const uint32_t U3CGetSharedAzureAnchorCoroutineU3Ed__2_System_Collections_IEnumerator_Reset_m86DF3B0EEFEB5370B11F6D9C0029E68FCFEA3723_MetadataUsageId;
extern const uint32_t U3CGetSharedAzureAnchorCoroutineU3Ed__2_U3CU3Em__Finally1_mB5EDC6BB144D7CE63C6F499801C66E961E804E53_MetadataUsageId;
struct CertificateHandler_tBD070BF4150A44AB482FD36EA3882C363117E8C0_marshaled_com;
struct DownloadHandler_t4A7802ADC97024B469C87FA454B6973951980EE9_marshaled_com;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;
struct UploadHandler_t24F4097D30A1E7C689D8881A27F251B4741601E4_marshaled_com;



#ifndef U3CMODULEU3E_T7315DE30FEBFF181027DE5CB9C79F66593CFFE6E_H
#define U3CMODULEU3E_T7315DE30FEBFF181027DE5CB9C79F66593CFFE6E_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct  U3CModuleU3E_t7315DE30FEBFF181027DE5CB9C79F66593CFFE6E 
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CMODULEU3E_T7315DE30FEBFF181027DE5CB9C79F66593CFFE6E_H
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
#ifndef ASASHARING_T4C210DEC4C2882F3A7980F6E7EADC735EB231397_H
#define ASASHARING_T4C210DEC4C2882F3A7980F6E7EADC735EB231397_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ASASharingPlugin.ASASharing
struct  ASASharing_t4C210DEC4C2882F3A7980F6E7EADC735EB231397  : public RuntimeObject
{
public:
	// System.String ASASharingPlugin.ASASharing::DownloadedAzureAnchorID
	String_t* ___DownloadedAzureAnchorID_0;

public:
	inline static int32_t get_offset_of_DownloadedAzureAnchorID_0() { return static_cast<int32_t>(offsetof(ASASharing_t4C210DEC4C2882F3A7980F6E7EADC735EB231397, ___DownloadedAzureAnchorID_0)); }
	inline String_t* get_DownloadedAzureAnchorID_0() const { return ___DownloadedAzureAnchorID_0; }
	inline String_t** get_address_of_DownloadedAzureAnchorID_0() { return &___DownloadedAzureAnchorID_0; }
	inline void set_DownloadedAzureAnchorID_0(String_t* value)
	{
		___DownloadedAzureAnchorID_0 = value;
		Il2CppCodeGenWriteBarrier((&___DownloadedAzureAnchorID_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ASASHARING_T4C210DEC4C2882F3A7980F6E7EADC735EB231397_H
#ifndef U3CGETSHAREDAZUREANCHORCOROUTINEU3ED__2_TB6B8C40880A24708E646404771CFC482A9F68727_H
#define U3CGETSHAREDAZUREANCHORCOROUTINEU3ED__2_TB6B8C40880A24708E646404771CFC482A9F68727_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ASASharingPlugin.ASASharing_<GetSharedAzureAnchorCoroutine>d__2
struct  U3CGetSharedAzureAnchorCoroutineU3Ed__2_tB6B8C40880A24708E646404771CFC482A9F68727  : public RuntimeObject
{
public:
	// System.Int32 ASASharingPlugin.ASASharing_<GetSharedAzureAnchorCoroutine>d__2::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object ASASharingPlugin.ASASharing_<GetSharedAzureAnchorCoroutine>d__2::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// ASASharingPlugin.ASASharing ASASharingPlugin.ASASharing_<GetSharedAzureAnchorCoroutine>d__2::<>4__this
	ASASharing_t4C210DEC4C2882F3A7980F6E7EADC735EB231397 * ___U3CU3E4__this_2;
	// System.String ASASharingPlugin.ASASharing_<GetSharedAzureAnchorCoroutine>d__2::sharingPin
	String_t* ___sharingPin_3;
	// UnityEngine.Networking.UnityWebRequest ASASharingPlugin.ASASharing_<GetSharedAzureAnchorCoroutine>d__2::<www>5__2
	UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129 * ___U3CwwwU3E5__2_4;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CGetSharedAzureAnchorCoroutineU3Ed__2_tB6B8C40880A24708E646404771CFC482A9F68727, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CGetSharedAzureAnchorCoroutineU3Ed__2_tB6B8C40880A24708E646404771CFC482A9F68727, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3E2__current_1), value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CGetSharedAzureAnchorCoroutineU3Ed__2_tB6B8C40880A24708E646404771CFC482A9F68727, ___U3CU3E4__this_2)); }
	inline ASASharing_t4C210DEC4C2882F3A7980F6E7EADC735EB231397 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline ASASharing_t4C210DEC4C2882F3A7980F6E7EADC735EB231397 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(ASASharing_t4C210DEC4C2882F3A7980F6E7EADC735EB231397 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3E4__this_2), value);
	}

	inline static int32_t get_offset_of_sharingPin_3() { return static_cast<int32_t>(offsetof(U3CGetSharedAzureAnchorCoroutineU3Ed__2_tB6B8C40880A24708E646404771CFC482A9F68727, ___sharingPin_3)); }
	inline String_t* get_sharingPin_3() const { return ___sharingPin_3; }
	inline String_t** get_address_of_sharingPin_3() { return &___sharingPin_3; }
	inline void set_sharingPin_3(String_t* value)
	{
		___sharingPin_3 = value;
		Il2CppCodeGenWriteBarrier((&___sharingPin_3), value);
	}

	inline static int32_t get_offset_of_U3CwwwU3E5__2_4() { return static_cast<int32_t>(offsetof(U3CGetSharedAzureAnchorCoroutineU3Ed__2_tB6B8C40880A24708E646404771CFC482A9F68727, ___U3CwwwU3E5__2_4)); }
	inline UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129 * get_U3CwwwU3E5__2_4() const { return ___U3CwwwU3E5__2_4; }
	inline UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129 ** get_address_of_U3CwwwU3E5__2_4() { return &___U3CwwwU3E5__2_4; }
	inline void set_U3CwwwU3E5__2_4(UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129 * value)
	{
		___U3CwwwU3E5__2_4 = value;
		Il2CppCodeGenWriteBarrier((&___U3CwwwU3E5__2_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CGETSHAREDAZUREANCHORCOROUTINEU3ED__2_TB6B8C40880A24708E646404771CFC482A9F68727_H
struct Il2CppArrayBounds;
#ifndef RUNTIMEARRAY_H
#define RUNTIMEARRAY_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Array

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEARRAY_H
#ifndef EXCEPTION_T_H
#define EXCEPTION_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Exception
struct  Exception_t  : public RuntimeObject
{
public:
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t * ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject * ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject * ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD* ___native_trace_ips_15;

public:
	inline static int32_t get_offset_of__className_1() { return static_cast<int32_t>(offsetof(Exception_t, ____className_1)); }
	inline String_t* get__className_1() const { return ____className_1; }
	inline String_t** get_address_of__className_1() { return &____className_1; }
	inline void set__className_1(String_t* value)
	{
		____className_1 = value;
		Il2CppCodeGenWriteBarrier((&____className_1), value);
	}

	inline static int32_t get_offset_of__message_2() { return static_cast<int32_t>(offsetof(Exception_t, ____message_2)); }
	inline String_t* get__message_2() const { return ____message_2; }
	inline String_t** get_address_of__message_2() { return &____message_2; }
	inline void set__message_2(String_t* value)
	{
		____message_2 = value;
		Il2CppCodeGenWriteBarrier((&____message_2), value);
	}

	inline static int32_t get_offset_of__data_3() { return static_cast<int32_t>(offsetof(Exception_t, ____data_3)); }
	inline RuntimeObject* get__data_3() const { return ____data_3; }
	inline RuntimeObject** get_address_of__data_3() { return &____data_3; }
	inline void set__data_3(RuntimeObject* value)
	{
		____data_3 = value;
		Il2CppCodeGenWriteBarrier((&____data_3), value);
	}

	inline static int32_t get_offset_of__innerException_4() { return static_cast<int32_t>(offsetof(Exception_t, ____innerException_4)); }
	inline Exception_t * get__innerException_4() const { return ____innerException_4; }
	inline Exception_t ** get_address_of__innerException_4() { return &____innerException_4; }
	inline void set__innerException_4(Exception_t * value)
	{
		____innerException_4 = value;
		Il2CppCodeGenWriteBarrier((&____innerException_4), value);
	}

	inline static int32_t get_offset_of__helpURL_5() { return static_cast<int32_t>(offsetof(Exception_t, ____helpURL_5)); }
	inline String_t* get__helpURL_5() const { return ____helpURL_5; }
	inline String_t** get_address_of__helpURL_5() { return &____helpURL_5; }
	inline void set__helpURL_5(String_t* value)
	{
		____helpURL_5 = value;
		Il2CppCodeGenWriteBarrier((&____helpURL_5), value);
	}

	inline static int32_t get_offset_of__stackTrace_6() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTrace_6)); }
	inline RuntimeObject * get__stackTrace_6() const { return ____stackTrace_6; }
	inline RuntimeObject ** get_address_of__stackTrace_6() { return &____stackTrace_6; }
	inline void set__stackTrace_6(RuntimeObject * value)
	{
		____stackTrace_6 = value;
		Il2CppCodeGenWriteBarrier((&____stackTrace_6), value);
	}

	inline static int32_t get_offset_of__stackTraceString_7() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTraceString_7)); }
	inline String_t* get__stackTraceString_7() const { return ____stackTraceString_7; }
	inline String_t** get_address_of__stackTraceString_7() { return &____stackTraceString_7; }
	inline void set__stackTraceString_7(String_t* value)
	{
		____stackTraceString_7 = value;
		Il2CppCodeGenWriteBarrier((&____stackTraceString_7), value);
	}

	inline static int32_t get_offset_of__remoteStackTraceString_8() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackTraceString_8)); }
	inline String_t* get__remoteStackTraceString_8() const { return ____remoteStackTraceString_8; }
	inline String_t** get_address_of__remoteStackTraceString_8() { return &____remoteStackTraceString_8; }
	inline void set__remoteStackTraceString_8(String_t* value)
	{
		____remoteStackTraceString_8 = value;
		Il2CppCodeGenWriteBarrier((&____remoteStackTraceString_8), value);
	}

	inline static int32_t get_offset_of__remoteStackIndex_9() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackIndex_9)); }
	inline int32_t get__remoteStackIndex_9() const { return ____remoteStackIndex_9; }
	inline int32_t* get_address_of__remoteStackIndex_9() { return &____remoteStackIndex_9; }
	inline void set__remoteStackIndex_9(int32_t value)
	{
		____remoteStackIndex_9 = value;
	}

	inline static int32_t get_offset_of__dynamicMethods_10() { return static_cast<int32_t>(offsetof(Exception_t, ____dynamicMethods_10)); }
	inline RuntimeObject * get__dynamicMethods_10() const { return ____dynamicMethods_10; }
	inline RuntimeObject ** get_address_of__dynamicMethods_10() { return &____dynamicMethods_10; }
	inline void set__dynamicMethods_10(RuntimeObject * value)
	{
		____dynamicMethods_10 = value;
		Il2CppCodeGenWriteBarrier((&____dynamicMethods_10), value);
	}

	inline static int32_t get_offset_of__HResult_11() { return static_cast<int32_t>(offsetof(Exception_t, ____HResult_11)); }
	inline int32_t get__HResult_11() const { return ____HResult_11; }
	inline int32_t* get_address_of__HResult_11() { return &____HResult_11; }
	inline void set__HResult_11(int32_t value)
	{
		____HResult_11 = value;
	}

	inline static int32_t get_offset_of__source_12() { return static_cast<int32_t>(offsetof(Exception_t, ____source_12)); }
	inline String_t* get__source_12() const { return ____source_12; }
	inline String_t** get_address_of__source_12() { return &____source_12; }
	inline void set__source_12(String_t* value)
	{
		____source_12 = value;
		Il2CppCodeGenWriteBarrier((&____source_12), value);
	}

	inline static int32_t get_offset_of__safeSerializationManager_13() { return static_cast<int32_t>(offsetof(Exception_t, ____safeSerializationManager_13)); }
	inline SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * get__safeSerializationManager_13() const { return ____safeSerializationManager_13; }
	inline SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 ** get_address_of__safeSerializationManager_13() { return &____safeSerializationManager_13; }
	inline void set__safeSerializationManager_13(SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * value)
	{
		____safeSerializationManager_13 = value;
		Il2CppCodeGenWriteBarrier((&____safeSerializationManager_13), value);
	}

	inline static int32_t get_offset_of_captured_traces_14() { return static_cast<int32_t>(offsetof(Exception_t, ___captured_traces_14)); }
	inline StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* get_captured_traces_14() const { return ___captured_traces_14; }
	inline StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196** get_address_of_captured_traces_14() { return &___captured_traces_14; }
	inline void set_captured_traces_14(StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* value)
	{
		___captured_traces_14 = value;
		Il2CppCodeGenWriteBarrier((&___captured_traces_14), value);
	}

	inline static int32_t get_offset_of_native_trace_ips_15() { return static_cast<int32_t>(offsetof(Exception_t, ___native_trace_ips_15)); }
	inline IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD* get_native_trace_ips_15() const { return ___native_trace_ips_15; }
	inline IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD** get_address_of_native_trace_ips_15() { return &___native_trace_ips_15; }
	inline void set_native_trace_ips_15(IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD* value)
	{
		___native_trace_ips_15 = value;
		Il2CppCodeGenWriteBarrier((&___native_trace_ips_15), value);
	}
};

struct Exception_t_StaticFields
{
public:
	// System.Object System.Exception::s_EDILock
	RuntimeObject * ___s_EDILock_0;

public:
	inline static int32_t get_offset_of_s_EDILock_0() { return static_cast<int32_t>(offsetof(Exception_t_StaticFields, ___s_EDILock_0)); }
	inline RuntimeObject * get_s_EDILock_0() const { return ___s_EDILock_0; }
	inline RuntimeObject ** get_address_of_s_EDILock_0() { return &___s_EDILock_0; }
	inline void set_s_EDILock_0(RuntimeObject * value)
	{
		___s_EDILock_0 = value;
		Il2CppCodeGenWriteBarrier((&___s_EDILock_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Exception
struct Exception_t_marshaled_pinvoke
{
	char* ____className_1;
	char* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_pinvoke* ____innerException_4;
	char* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	char* ____stackTraceString_7;
	char* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	char* ____source_12;
	SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * ____safeSerializationManager_13;
	StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* ___captured_traces_14;
	intptr_t* ___native_trace_ips_15;
};
// Native definition for COM marshalling of System.Exception
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className_1;
	Il2CppChar* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_com* ____innerException_4;
	Il2CppChar* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	Il2CppChar* ____stackTraceString_7;
	Il2CppChar* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	Il2CppChar* ____source_12;
	SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * ____safeSerializationManager_13;
	StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* ___captured_traces_14;
	intptr_t* ___native_trace_ips_15;
};
#endif // EXCEPTION_T_H
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
#ifndef YIELDINSTRUCTION_T836035AC7BD07A3C7909F7AD2A5B42DE99D91C44_H
#define YIELDINSTRUCTION_T836035AC7BD07A3C7909F7AD2A5B42DE99D91C44_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.YieldInstruction
struct  YieldInstruction_t836035AC7BD07A3C7909F7AD2A5B42DE99D91C44  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_t836035AC7BD07A3C7909F7AD2A5B42DE99D91C44_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_t836035AC7BD07A3C7909F7AD2A5B42DE99D91C44_marshaled_com
{
};
#endif // YIELDINSTRUCTION_T836035AC7BD07A3C7909F7AD2A5B42DE99D91C44_H
#ifndef BOOLEAN_TB53F6830F670160873277339AA58F15CAED4399C_H
#define BOOLEAN_TB53F6830F670160873277339AA58F15CAED4399C_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Boolean
struct  Boolean_tB53F6830F670160873277339AA58F15CAED4399C 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Boolean_tB53F6830F670160873277339AA58F15CAED4399C, ___m_value_0)); }
	inline bool get_m_value_0() const { return ___m_value_0; }
	inline bool* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(bool value)
	{
		___m_value_0 = value;
	}
};

struct Boolean_tB53F6830F670160873277339AA58F15CAED4399C_StaticFields
{
public:
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;

public:
	inline static int32_t get_offset_of_TrueString_5() { return static_cast<int32_t>(offsetof(Boolean_tB53F6830F670160873277339AA58F15CAED4399C_StaticFields, ___TrueString_5)); }
	inline String_t* get_TrueString_5() const { return ___TrueString_5; }
	inline String_t** get_address_of_TrueString_5() { return &___TrueString_5; }
	inline void set_TrueString_5(String_t* value)
	{
		___TrueString_5 = value;
		Il2CppCodeGenWriteBarrier((&___TrueString_5), value);
	}

	inline static int32_t get_offset_of_FalseString_6() { return static_cast<int32_t>(offsetof(Boolean_tB53F6830F670160873277339AA58F15CAED4399C_StaticFields, ___FalseString_6)); }
	inline String_t* get_FalseString_6() const { return ___FalseString_6; }
	inline String_t** get_address_of_FalseString_6() { return &___FalseString_6; }
	inline void set_FalseString_6(String_t* value)
	{
		___FalseString_6 = value;
		Il2CppCodeGenWriteBarrier((&___FalseString_6), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BOOLEAN_TB53F6830F670160873277339AA58F15CAED4399C_H
#ifndef ENUM_T2AF27C02B8653AE29442467390005ABC74D8F521_H
#define ENUM_T2AF27C02B8653AE29442467390005ABC74D8F521_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Enum
struct  Enum_t2AF27C02B8653AE29442467390005ABC74D8F521  : public ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF
{
public:

public:
};

struct Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_StaticFields
{
public:
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* ___enumSeperatorCharArray_0;

public:
	inline static int32_t get_offset_of_enumSeperatorCharArray_0() { return static_cast<int32_t>(offsetof(Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_StaticFields, ___enumSeperatorCharArray_0)); }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* get_enumSeperatorCharArray_0() const { return ___enumSeperatorCharArray_0; }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2** get_address_of_enumSeperatorCharArray_0() { return &___enumSeperatorCharArray_0; }
	inline void set_enumSeperatorCharArray_0(CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* value)
	{
		___enumSeperatorCharArray_0 = value;
		Il2CppCodeGenWriteBarrier((&___enumSeperatorCharArray_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_marshaled_com
{
};
#endif // ENUM_T2AF27C02B8653AE29442467390005ABC74D8F521_H
#ifndef INT32_T585191389E07734F19F3156FF88FB3EF4800D102_H
#define INT32_T585191389E07734F19F3156FF88FB3EF4800D102_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Int32
struct  Int32_t585191389E07734F19F3156FF88FB3EF4800D102 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int32_t585191389E07734F19F3156FF88FB3EF4800D102, ___m_value_0)); }
	inline int32_t get_m_value_0() const { return ___m_value_0; }
	inline int32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int32_t value)
	{
		___m_value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INT32_T585191389E07734F19F3156FF88FB3EF4800D102_H
#ifndef INTPTR_T_H
#define INTPTR_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IntPtr
struct  IntPtr_t 
{
public:
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(IntPtr_t, ___m_value_0)); }
	inline void* get_m_value_0() const { return ___m_value_0; }
	inline void** get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(void* value)
	{
		___m_value_0 = value;
	}
};

struct IntPtr_t_StaticFields
{
public:
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;

public:
	inline static int32_t get_offset_of_Zero_1() { return static_cast<int32_t>(offsetof(IntPtr_t_StaticFields, ___Zero_1)); }
	inline intptr_t get_Zero_1() const { return ___Zero_1; }
	inline intptr_t* get_address_of_Zero_1() { return &___Zero_1; }
	inline void set_Zero_1(intptr_t value)
	{
		___Zero_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INTPTR_T_H
#ifndef NULLABLE_1_T0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB_H
#define NULLABLE_1_T0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Nullable`1<System.Int32>
struct  Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB 
{
public:
	// T System.Nullable`1::value
	int32_t ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB, ___value_0)); }
	inline int32_t get_value_0() const { return ___value_0; }
	inline int32_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(int32_t value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NULLABLE_1_T0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB_H
#ifndef SYSTEMEXCEPTION_T5380468142AA850BE4A341D7AF3EAB9C78746782_H
#define SYSTEMEXCEPTION_T5380468142AA850BE4A341D7AF3EAB9C78746782_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.SystemException
struct  SystemException_t5380468142AA850BE4A341D7AF3EAB9C78746782  : public Exception_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SYSTEMEXCEPTION_T5380468142AA850BE4A341D7AF3EAB9C78746782_H
#ifndef VOID_T22962CB4C05B1D89B55A6E1139F0E87A90987017_H
#define VOID_T22962CB4C05B1D89B55A6E1139F0E87A90987017_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Void
struct  Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017 
{
public:
	union
	{
		struct
		{
		};
		uint8_t Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017__padding[1];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VOID_T22962CB4C05B1D89B55A6E1139F0E87A90987017_H
#ifndef DATAFORMAT_T4E1A7BDCEFCDA9B7E0916F22F5543F3AF7CA83B1_H
#define DATAFORMAT_T4E1A7BDCEFCDA9B7E0916F22F5543F3AF7CA83B1_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// RestSharp.DataFormat
struct  DataFormat_t4E1A7BDCEFCDA9B7E0916F22F5543F3AF7CA83B1 
{
public:
	// System.Int32 RestSharp.DataFormat::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(DataFormat_t4E1A7BDCEFCDA9B7E0916F22F5543F3AF7CA83B1, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DATAFORMAT_T4E1A7BDCEFCDA9B7E0916F22F5543F3AF7CA83B1_H
#ifndef METHOD_T26A552FD65ED74448ACAB14AC488DEA7308B10D0_H
#define METHOD_T26A552FD65ED74448ACAB14AC488DEA7308B10D0_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// RestSharp.Method
struct  Method_t26A552FD65ED74448ACAB14AC488DEA7308B10D0 
{
public:
	// System.Int32 RestSharp.Method::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Method_t26A552FD65ED74448ACAB14AC488DEA7308B10D0, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // METHOD_T26A552FD65ED74448ACAB14AC488DEA7308B10D0_H
#ifndef RESTCLIENT_T9D31ABF964C6E6DACDA93F8E0317FB6E32D25D53_H
#define RESTCLIENT_T9D31ABF964C6E6DACDA93F8E0317FB6E32D25D53_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// RestSharp.RestClient
struct  RestClient_t9D31ABF964C6E6DACDA93F8E0317FB6E32D25D53  : public RuntimeObject
{
public:
	// System.Collections.Generic.IDictionary`2<System.String,System.Func`1<RestSharp.Deserializers.IDeserializer>> RestSharp.RestClient::<ContentHandlers>k__BackingField
	RuntimeObject* ___U3CContentHandlersU3Ek__BackingField_3;
	// System.Collections.Generic.IDictionary`2<RestSharp.DataFormat,RestSharp.Serialization.IRestSerializer> RestSharp.RestClient::<Serializers>k__BackingField
	RuntimeObject* ___U3CSerializersU3Ek__BackingField_4;
	// System.Func`2<System.String,System.String> RestSharp.RestClient::<Encode>k__BackingField
	Func_2_tC62BE092E723BEF01AD0556B6837E5D8B14DA9D3 * ___U3CEncodeU3Ek__BackingField_5;
	// System.Func`3<System.String,System.Text.Encoding,System.String> RestSharp.RestClient::<EncodeQuery>k__BackingField
	Func_3_tF5C1919C183EFC7AA9F6726F4F7D44FBBB7475C3 * ___U3CEncodeQueryU3Ek__BackingField_6;
	// System.Collections.Generic.IList`1<System.String> RestSharp.RestClient::<AcceptTypes>k__BackingField
	RuntimeObject* ___U3CAcceptTypesU3Ek__BackingField_7;
	// System.Action`1<System.Net.HttpWebRequest> RestSharp.RestClient::<WebRequestConfigurator>k__BackingField
	Action_1_t082771D1AD0CF25BB88E99B2C2FAC5370D42031B * ___U3CWebRequestConfiguratorU3Ek__BackingField_8;
	// System.Boolean RestSharp.RestClient::<AutomaticDecompression>k__BackingField
	bool ___U3CAutomaticDecompressionU3Ek__BackingField_9;
	// System.Nullable`1<System.Int32> RestSharp.RestClient::<MaxRedirects>k__BackingField
	Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB  ___U3CMaxRedirectsU3Ek__BackingField_10;
	// System.Security.Cryptography.X509Certificates.X509CertificateCollection RestSharp.RestClient::<ClientCertificates>k__BackingField
	X509CertificateCollection_t824A6C58D0D1B4A7CAE30F26CE8EE4B23A8A1833 * ___U3CClientCertificatesU3Ek__BackingField_11;
	// System.Net.IWebProxy RestSharp.RestClient::<Proxy>k__BackingField
	RuntimeObject* ___U3CProxyU3Ek__BackingField_12;
	// System.Net.Cache.RequestCachePolicy RestSharp.RestClient::<CachePolicy>k__BackingField
	RequestCachePolicy_t30D7352C7E9D49EEADD492A70EC92C118D90CD61 * ___U3CCachePolicyU3Ek__BackingField_13;
	// System.Boolean RestSharp.RestClient::<Pipelined>k__BackingField
	bool ___U3CPipelinedU3Ek__BackingField_14;
	// System.Boolean RestSharp.RestClient::<FollowRedirects>k__BackingField
	bool ___U3CFollowRedirectsU3Ek__BackingField_15;
	// System.Net.CookieContainer RestSharp.RestClient::<CookieContainer>k__BackingField
	CookieContainer_t7E062D04BAED9F3B30DDEC14B09660BB506A2A73 * ___U3CCookieContainerU3Ek__BackingField_16;
	// System.String RestSharp.RestClient::<UserAgent>k__BackingField
	String_t* ___U3CUserAgentU3Ek__BackingField_17;
	// System.Int32 RestSharp.RestClient::<Timeout>k__BackingField
	int32_t ___U3CTimeoutU3Ek__BackingField_18;
	// System.Int32 RestSharp.RestClient::<ReadWriteTimeout>k__BackingField
	int32_t ___U3CReadWriteTimeoutU3Ek__BackingField_19;
	// RestSharp.Authenticators.IAuthenticator RestSharp.RestClient::<Authenticator>k__BackingField
	RuntimeObject* ___U3CAuthenticatorU3Ek__BackingField_20;
	// System.Uri RestSharp.RestClient::<BaseUrl>k__BackingField
	Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E * ___U3CBaseUrlU3Ek__BackingField_21;
	// System.Text.Encoding RestSharp.RestClient::<Encoding>k__BackingField
	Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * ___U3CEncodingU3Ek__BackingField_22;
	// System.Boolean RestSharp.RestClient::<PreAuthenticate>k__BackingField
	bool ___U3CPreAuthenticateU3Ek__BackingField_23;
	// System.Boolean RestSharp.RestClient::<FailOnDeserializationError>k__BackingField
	bool ___U3CFailOnDeserializationErrorU3Ek__BackingField_24;
	// System.Boolean RestSharp.RestClient::<UnsafeAuthenticatedConnectionSharing>k__BackingField
	bool ___U3CUnsafeAuthenticatedConnectionSharingU3Ek__BackingField_25;
	// System.String RestSharp.RestClient::<ConnectionGroupName>k__BackingField
	String_t* ___U3CConnectionGroupNameU3Ek__BackingField_26;
	// System.Net.Security.RemoteCertificateValidationCallback RestSharp.RestClient::<RemoteCertificateValidationCallback>k__BackingField
	RemoteCertificateValidationCallback_t9C6BA19681BAA3CD78E6674293A57FF5DF62831E * ___U3CRemoteCertificateValidationCallbackU3Ek__BackingField_27;
	// System.Collections.Generic.IList`1<RestSharp.Parameter> RestSharp.RestClient::<DefaultParameters>k__BackingField
	RuntimeObject* ___U3CDefaultParametersU3Ek__BackingField_28;
	// System.String RestSharp.RestClient::<BaseHost>k__BackingField
	String_t* ___U3CBaseHostU3Ek__BackingField_29;
	// System.Boolean RestSharp.RestClient::<AllowMultipleDefaultParametersWithSameName>k__BackingField
	bool ___U3CAllowMultipleDefaultParametersWithSameNameU3Ek__BackingField_30;

public:
	inline static int32_t get_offset_of_U3CContentHandlersU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(RestClient_t9D31ABF964C6E6DACDA93F8E0317FB6E32D25D53, ___U3CContentHandlersU3Ek__BackingField_3)); }
	inline RuntimeObject* get_U3CContentHandlersU3Ek__BackingField_3() const { return ___U3CContentHandlersU3Ek__BackingField_3; }
	inline RuntimeObject** get_address_of_U3CContentHandlersU3Ek__BackingField_3() { return &___U3CContentHandlersU3Ek__BackingField_3; }
	inline void set_U3CContentHandlersU3Ek__BackingField_3(RuntimeObject* value)
	{
		___U3CContentHandlersU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((&___U3CContentHandlersU3Ek__BackingField_3), value);
	}

	inline static int32_t get_offset_of_U3CSerializersU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(RestClient_t9D31ABF964C6E6DACDA93F8E0317FB6E32D25D53, ___U3CSerializersU3Ek__BackingField_4)); }
	inline RuntimeObject* get_U3CSerializersU3Ek__BackingField_4() const { return ___U3CSerializersU3Ek__BackingField_4; }
	inline RuntimeObject** get_address_of_U3CSerializersU3Ek__BackingField_4() { return &___U3CSerializersU3Ek__BackingField_4; }
	inline void set_U3CSerializersU3Ek__BackingField_4(RuntimeObject* value)
	{
		___U3CSerializersU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier((&___U3CSerializersU3Ek__BackingField_4), value);
	}

	inline static int32_t get_offset_of_U3CEncodeU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(RestClient_t9D31ABF964C6E6DACDA93F8E0317FB6E32D25D53, ___U3CEncodeU3Ek__BackingField_5)); }
	inline Func_2_tC62BE092E723BEF01AD0556B6837E5D8B14DA9D3 * get_U3CEncodeU3Ek__BackingField_5() const { return ___U3CEncodeU3Ek__BackingField_5; }
	inline Func_2_tC62BE092E723BEF01AD0556B6837E5D8B14DA9D3 ** get_address_of_U3CEncodeU3Ek__BackingField_5() { return &___U3CEncodeU3Ek__BackingField_5; }
	inline void set_U3CEncodeU3Ek__BackingField_5(Func_2_tC62BE092E723BEF01AD0556B6837E5D8B14DA9D3 * value)
	{
		___U3CEncodeU3Ek__BackingField_5 = value;
		Il2CppCodeGenWriteBarrier((&___U3CEncodeU3Ek__BackingField_5), value);
	}

	inline static int32_t get_offset_of_U3CEncodeQueryU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(RestClient_t9D31ABF964C6E6DACDA93F8E0317FB6E32D25D53, ___U3CEncodeQueryU3Ek__BackingField_6)); }
	inline Func_3_tF5C1919C183EFC7AA9F6726F4F7D44FBBB7475C3 * get_U3CEncodeQueryU3Ek__BackingField_6() const { return ___U3CEncodeQueryU3Ek__BackingField_6; }
	inline Func_3_tF5C1919C183EFC7AA9F6726F4F7D44FBBB7475C3 ** get_address_of_U3CEncodeQueryU3Ek__BackingField_6() { return &___U3CEncodeQueryU3Ek__BackingField_6; }
	inline void set_U3CEncodeQueryU3Ek__BackingField_6(Func_3_tF5C1919C183EFC7AA9F6726F4F7D44FBBB7475C3 * value)
	{
		___U3CEncodeQueryU3Ek__BackingField_6 = value;
		Il2CppCodeGenWriteBarrier((&___U3CEncodeQueryU3Ek__BackingField_6), value);
	}

	inline static int32_t get_offset_of_U3CAcceptTypesU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(RestClient_t9D31ABF964C6E6DACDA93F8E0317FB6E32D25D53, ___U3CAcceptTypesU3Ek__BackingField_7)); }
	inline RuntimeObject* get_U3CAcceptTypesU3Ek__BackingField_7() const { return ___U3CAcceptTypesU3Ek__BackingField_7; }
	inline RuntimeObject** get_address_of_U3CAcceptTypesU3Ek__BackingField_7() { return &___U3CAcceptTypesU3Ek__BackingField_7; }
	inline void set_U3CAcceptTypesU3Ek__BackingField_7(RuntimeObject* value)
	{
		___U3CAcceptTypesU3Ek__BackingField_7 = value;
		Il2CppCodeGenWriteBarrier((&___U3CAcceptTypesU3Ek__BackingField_7), value);
	}

	inline static int32_t get_offset_of_U3CWebRequestConfiguratorU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(RestClient_t9D31ABF964C6E6DACDA93F8E0317FB6E32D25D53, ___U3CWebRequestConfiguratorU3Ek__BackingField_8)); }
	inline Action_1_t082771D1AD0CF25BB88E99B2C2FAC5370D42031B * get_U3CWebRequestConfiguratorU3Ek__BackingField_8() const { return ___U3CWebRequestConfiguratorU3Ek__BackingField_8; }
	inline Action_1_t082771D1AD0CF25BB88E99B2C2FAC5370D42031B ** get_address_of_U3CWebRequestConfiguratorU3Ek__BackingField_8() { return &___U3CWebRequestConfiguratorU3Ek__BackingField_8; }
	inline void set_U3CWebRequestConfiguratorU3Ek__BackingField_8(Action_1_t082771D1AD0CF25BB88E99B2C2FAC5370D42031B * value)
	{
		___U3CWebRequestConfiguratorU3Ek__BackingField_8 = value;
		Il2CppCodeGenWriteBarrier((&___U3CWebRequestConfiguratorU3Ek__BackingField_8), value);
	}

	inline static int32_t get_offset_of_U3CAutomaticDecompressionU3Ek__BackingField_9() { return static_cast<int32_t>(offsetof(RestClient_t9D31ABF964C6E6DACDA93F8E0317FB6E32D25D53, ___U3CAutomaticDecompressionU3Ek__BackingField_9)); }
	inline bool get_U3CAutomaticDecompressionU3Ek__BackingField_9() const { return ___U3CAutomaticDecompressionU3Ek__BackingField_9; }
	inline bool* get_address_of_U3CAutomaticDecompressionU3Ek__BackingField_9() { return &___U3CAutomaticDecompressionU3Ek__BackingField_9; }
	inline void set_U3CAutomaticDecompressionU3Ek__BackingField_9(bool value)
	{
		___U3CAutomaticDecompressionU3Ek__BackingField_9 = value;
	}

	inline static int32_t get_offset_of_U3CMaxRedirectsU3Ek__BackingField_10() { return static_cast<int32_t>(offsetof(RestClient_t9D31ABF964C6E6DACDA93F8E0317FB6E32D25D53, ___U3CMaxRedirectsU3Ek__BackingField_10)); }
	inline Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB  get_U3CMaxRedirectsU3Ek__BackingField_10() const { return ___U3CMaxRedirectsU3Ek__BackingField_10; }
	inline Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB * get_address_of_U3CMaxRedirectsU3Ek__BackingField_10() { return &___U3CMaxRedirectsU3Ek__BackingField_10; }
	inline void set_U3CMaxRedirectsU3Ek__BackingField_10(Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB  value)
	{
		___U3CMaxRedirectsU3Ek__BackingField_10 = value;
	}

	inline static int32_t get_offset_of_U3CClientCertificatesU3Ek__BackingField_11() { return static_cast<int32_t>(offsetof(RestClient_t9D31ABF964C6E6DACDA93F8E0317FB6E32D25D53, ___U3CClientCertificatesU3Ek__BackingField_11)); }
	inline X509CertificateCollection_t824A6C58D0D1B4A7CAE30F26CE8EE4B23A8A1833 * get_U3CClientCertificatesU3Ek__BackingField_11() const { return ___U3CClientCertificatesU3Ek__BackingField_11; }
	inline X509CertificateCollection_t824A6C58D0D1B4A7CAE30F26CE8EE4B23A8A1833 ** get_address_of_U3CClientCertificatesU3Ek__BackingField_11() { return &___U3CClientCertificatesU3Ek__BackingField_11; }
	inline void set_U3CClientCertificatesU3Ek__BackingField_11(X509CertificateCollection_t824A6C58D0D1B4A7CAE30F26CE8EE4B23A8A1833 * value)
	{
		___U3CClientCertificatesU3Ek__BackingField_11 = value;
		Il2CppCodeGenWriteBarrier((&___U3CClientCertificatesU3Ek__BackingField_11), value);
	}

	inline static int32_t get_offset_of_U3CProxyU3Ek__BackingField_12() { return static_cast<int32_t>(offsetof(RestClient_t9D31ABF964C6E6DACDA93F8E0317FB6E32D25D53, ___U3CProxyU3Ek__BackingField_12)); }
	inline RuntimeObject* get_U3CProxyU3Ek__BackingField_12() const { return ___U3CProxyU3Ek__BackingField_12; }
	inline RuntimeObject** get_address_of_U3CProxyU3Ek__BackingField_12() { return &___U3CProxyU3Ek__BackingField_12; }
	inline void set_U3CProxyU3Ek__BackingField_12(RuntimeObject* value)
	{
		___U3CProxyU3Ek__BackingField_12 = value;
		Il2CppCodeGenWriteBarrier((&___U3CProxyU3Ek__BackingField_12), value);
	}

	inline static int32_t get_offset_of_U3CCachePolicyU3Ek__BackingField_13() { return static_cast<int32_t>(offsetof(RestClient_t9D31ABF964C6E6DACDA93F8E0317FB6E32D25D53, ___U3CCachePolicyU3Ek__BackingField_13)); }
	inline RequestCachePolicy_t30D7352C7E9D49EEADD492A70EC92C118D90CD61 * get_U3CCachePolicyU3Ek__BackingField_13() const { return ___U3CCachePolicyU3Ek__BackingField_13; }
	inline RequestCachePolicy_t30D7352C7E9D49EEADD492A70EC92C118D90CD61 ** get_address_of_U3CCachePolicyU3Ek__BackingField_13() { return &___U3CCachePolicyU3Ek__BackingField_13; }
	inline void set_U3CCachePolicyU3Ek__BackingField_13(RequestCachePolicy_t30D7352C7E9D49EEADD492A70EC92C118D90CD61 * value)
	{
		___U3CCachePolicyU3Ek__BackingField_13 = value;
		Il2CppCodeGenWriteBarrier((&___U3CCachePolicyU3Ek__BackingField_13), value);
	}

	inline static int32_t get_offset_of_U3CPipelinedU3Ek__BackingField_14() { return static_cast<int32_t>(offsetof(RestClient_t9D31ABF964C6E6DACDA93F8E0317FB6E32D25D53, ___U3CPipelinedU3Ek__BackingField_14)); }
	inline bool get_U3CPipelinedU3Ek__BackingField_14() const { return ___U3CPipelinedU3Ek__BackingField_14; }
	inline bool* get_address_of_U3CPipelinedU3Ek__BackingField_14() { return &___U3CPipelinedU3Ek__BackingField_14; }
	inline void set_U3CPipelinedU3Ek__BackingField_14(bool value)
	{
		___U3CPipelinedU3Ek__BackingField_14 = value;
	}

	inline static int32_t get_offset_of_U3CFollowRedirectsU3Ek__BackingField_15() { return static_cast<int32_t>(offsetof(RestClient_t9D31ABF964C6E6DACDA93F8E0317FB6E32D25D53, ___U3CFollowRedirectsU3Ek__BackingField_15)); }
	inline bool get_U3CFollowRedirectsU3Ek__BackingField_15() const { return ___U3CFollowRedirectsU3Ek__BackingField_15; }
	inline bool* get_address_of_U3CFollowRedirectsU3Ek__BackingField_15() { return &___U3CFollowRedirectsU3Ek__BackingField_15; }
	inline void set_U3CFollowRedirectsU3Ek__BackingField_15(bool value)
	{
		___U3CFollowRedirectsU3Ek__BackingField_15 = value;
	}

	inline static int32_t get_offset_of_U3CCookieContainerU3Ek__BackingField_16() { return static_cast<int32_t>(offsetof(RestClient_t9D31ABF964C6E6DACDA93F8E0317FB6E32D25D53, ___U3CCookieContainerU3Ek__BackingField_16)); }
	inline CookieContainer_t7E062D04BAED9F3B30DDEC14B09660BB506A2A73 * get_U3CCookieContainerU3Ek__BackingField_16() const { return ___U3CCookieContainerU3Ek__BackingField_16; }
	inline CookieContainer_t7E062D04BAED9F3B30DDEC14B09660BB506A2A73 ** get_address_of_U3CCookieContainerU3Ek__BackingField_16() { return &___U3CCookieContainerU3Ek__BackingField_16; }
	inline void set_U3CCookieContainerU3Ek__BackingField_16(CookieContainer_t7E062D04BAED9F3B30DDEC14B09660BB506A2A73 * value)
	{
		___U3CCookieContainerU3Ek__BackingField_16 = value;
		Il2CppCodeGenWriteBarrier((&___U3CCookieContainerU3Ek__BackingField_16), value);
	}

	inline static int32_t get_offset_of_U3CUserAgentU3Ek__BackingField_17() { return static_cast<int32_t>(offsetof(RestClient_t9D31ABF964C6E6DACDA93F8E0317FB6E32D25D53, ___U3CUserAgentU3Ek__BackingField_17)); }
	inline String_t* get_U3CUserAgentU3Ek__BackingField_17() const { return ___U3CUserAgentU3Ek__BackingField_17; }
	inline String_t** get_address_of_U3CUserAgentU3Ek__BackingField_17() { return &___U3CUserAgentU3Ek__BackingField_17; }
	inline void set_U3CUserAgentU3Ek__BackingField_17(String_t* value)
	{
		___U3CUserAgentU3Ek__BackingField_17 = value;
		Il2CppCodeGenWriteBarrier((&___U3CUserAgentU3Ek__BackingField_17), value);
	}

	inline static int32_t get_offset_of_U3CTimeoutU3Ek__BackingField_18() { return static_cast<int32_t>(offsetof(RestClient_t9D31ABF964C6E6DACDA93F8E0317FB6E32D25D53, ___U3CTimeoutU3Ek__BackingField_18)); }
	inline int32_t get_U3CTimeoutU3Ek__BackingField_18() const { return ___U3CTimeoutU3Ek__BackingField_18; }
	inline int32_t* get_address_of_U3CTimeoutU3Ek__BackingField_18() { return &___U3CTimeoutU3Ek__BackingField_18; }
	inline void set_U3CTimeoutU3Ek__BackingField_18(int32_t value)
	{
		___U3CTimeoutU3Ek__BackingField_18 = value;
	}

	inline static int32_t get_offset_of_U3CReadWriteTimeoutU3Ek__BackingField_19() { return static_cast<int32_t>(offsetof(RestClient_t9D31ABF964C6E6DACDA93F8E0317FB6E32D25D53, ___U3CReadWriteTimeoutU3Ek__BackingField_19)); }
	inline int32_t get_U3CReadWriteTimeoutU3Ek__BackingField_19() const { return ___U3CReadWriteTimeoutU3Ek__BackingField_19; }
	inline int32_t* get_address_of_U3CReadWriteTimeoutU3Ek__BackingField_19() { return &___U3CReadWriteTimeoutU3Ek__BackingField_19; }
	inline void set_U3CReadWriteTimeoutU3Ek__BackingField_19(int32_t value)
	{
		___U3CReadWriteTimeoutU3Ek__BackingField_19 = value;
	}

	inline static int32_t get_offset_of_U3CAuthenticatorU3Ek__BackingField_20() { return static_cast<int32_t>(offsetof(RestClient_t9D31ABF964C6E6DACDA93F8E0317FB6E32D25D53, ___U3CAuthenticatorU3Ek__BackingField_20)); }
	inline RuntimeObject* get_U3CAuthenticatorU3Ek__BackingField_20() const { return ___U3CAuthenticatorU3Ek__BackingField_20; }
	inline RuntimeObject** get_address_of_U3CAuthenticatorU3Ek__BackingField_20() { return &___U3CAuthenticatorU3Ek__BackingField_20; }
	inline void set_U3CAuthenticatorU3Ek__BackingField_20(RuntimeObject* value)
	{
		___U3CAuthenticatorU3Ek__BackingField_20 = value;
		Il2CppCodeGenWriteBarrier((&___U3CAuthenticatorU3Ek__BackingField_20), value);
	}

	inline static int32_t get_offset_of_U3CBaseUrlU3Ek__BackingField_21() { return static_cast<int32_t>(offsetof(RestClient_t9D31ABF964C6E6DACDA93F8E0317FB6E32D25D53, ___U3CBaseUrlU3Ek__BackingField_21)); }
	inline Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E * get_U3CBaseUrlU3Ek__BackingField_21() const { return ___U3CBaseUrlU3Ek__BackingField_21; }
	inline Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E ** get_address_of_U3CBaseUrlU3Ek__BackingField_21() { return &___U3CBaseUrlU3Ek__BackingField_21; }
	inline void set_U3CBaseUrlU3Ek__BackingField_21(Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E * value)
	{
		___U3CBaseUrlU3Ek__BackingField_21 = value;
		Il2CppCodeGenWriteBarrier((&___U3CBaseUrlU3Ek__BackingField_21), value);
	}

	inline static int32_t get_offset_of_U3CEncodingU3Ek__BackingField_22() { return static_cast<int32_t>(offsetof(RestClient_t9D31ABF964C6E6DACDA93F8E0317FB6E32D25D53, ___U3CEncodingU3Ek__BackingField_22)); }
	inline Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * get_U3CEncodingU3Ek__BackingField_22() const { return ___U3CEncodingU3Ek__BackingField_22; }
	inline Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 ** get_address_of_U3CEncodingU3Ek__BackingField_22() { return &___U3CEncodingU3Ek__BackingField_22; }
	inline void set_U3CEncodingU3Ek__BackingField_22(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * value)
	{
		___U3CEncodingU3Ek__BackingField_22 = value;
		Il2CppCodeGenWriteBarrier((&___U3CEncodingU3Ek__BackingField_22), value);
	}

	inline static int32_t get_offset_of_U3CPreAuthenticateU3Ek__BackingField_23() { return static_cast<int32_t>(offsetof(RestClient_t9D31ABF964C6E6DACDA93F8E0317FB6E32D25D53, ___U3CPreAuthenticateU3Ek__BackingField_23)); }
	inline bool get_U3CPreAuthenticateU3Ek__BackingField_23() const { return ___U3CPreAuthenticateU3Ek__BackingField_23; }
	inline bool* get_address_of_U3CPreAuthenticateU3Ek__BackingField_23() { return &___U3CPreAuthenticateU3Ek__BackingField_23; }
	inline void set_U3CPreAuthenticateU3Ek__BackingField_23(bool value)
	{
		___U3CPreAuthenticateU3Ek__BackingField_23 = value;
	}

	inline static int32_t get_offset_of_U3CFailOnDeserializationErrorU3Ek__BackingField_24() { return static_cast<int32_t>(offsetof(RestClient_t9D31ABF964C6E6DACDA93F8E0317FB6E32D25D53, ___U3CFailOnDeserializationErrorU3Ek__BackingField_24)); }
	inline bool get_U3CFailOnDeserializationErrorU3Ek__BackingField_24() const { return ___U3CFailOnDeserializationErrorU3Ek__BackingField_24; }
	inline bool* get_address_of_U3CFailOnDeserializationErrorU3Ek__BackingField_24() { return &___U3CFailOnDeserializationErrorU3Ek__BackingField_24; }
	inline void set_U3CFailOnDeserializationErrorU3Ek__BackingField_24(bool value)
	{
		___U3CFailOnDeserializationErrorU3Ek__BackingField_24 = value;
	}

	inline static int32_t get_offset_of_U3CUnsafeAuthenticatedConnectionSharingU3Ek__BackingField_25() { return static_cast<int32_t>(offsetof(RestClient_t9D31ABF964C6E6DACDA93F8E0317FB6E32D25D53, ___U3CUnsafeAuthenticatedConnectionSharingU3Ek__BackingField_25)); }
	inline bool get_U3CUnsafeAuthenticatedConnectionSharingU3Ek__BackingField_25() const { return ___U3CUnsafeAuthenticatedConnectionSharingU3Ek__BackingField_25; }
	inline bool* get_address_of_U3CUnsafeAuthenticatedConnectionSharingU3Ek__BackingField_25() { return &___U3CUnsafeAuthenticatedConnectionSharingU3Ek__BackingField_25; }
	inline void set_U3CUnsafeAuthenticatedConnectionSharingU3Ek__BackingField_25(bool value)
	{
		___U3CUnsafeAuthenticatedConnectionSharingU3Ek__BackingField_25 = value;
	}

	inline static int32_t get_offset_of_U3CConnectionGroupNameU3Ek__BackingField_26() { return static_cast<int32_t>(offsetof(RestClient_t9D31ABF964C6E6DACDA93F8E0317FB6E32D25D53, ___U3CConnectionGroupNameU3Ek__BackingField_26)); }
	inline String_t* get_U3CConnectionGroupNameU3Ek__BackingField_26() const { return ___U3CConnectionGroupNameU3Ek__BackingField_26; }
	inline String_t** get_address_of_U3CConnectionGroupNameU3Ek__BackingField_26() { return &___U3CConnectionGroupNameU3Ek__BackingField_26; }
	inline void set_U3CConnectionGroupNameU3Ek__BackingField_26(String_t* value)
	{
		___U3CConnectionGroupNameU3Ek__BackingField_26 = value;
		Il2CppCodeGenWriteBarrier((&___U3CConnectionGroupNameU3Ek__BackingField_26), value);
	}

	inline static int32_t get_offset_of_U3CRemoteCertificateValidationCallbackU3Ek__BackingField_27() { return static_cast<int32_t>(offsetof(RestClient_t9D31ABF964C6E6DACDA93F8E0317FB6E32D25D53, ___U3CRemoteCertificateValidationCallbackU3Ek__BackingField_27)); }
	inline RemoteCertificateValidationCallback_t9C6BA19681BAA3CD78E6674293A57FF5DF62831E * get_U3CRemoteCertificateValidationCallbackU3Ek__BackingField_27() const { return ___U3CRemoteCertificateValidationCallbackU3Ek__BackingField_27; }
	inline RemoteCertificateValidationCallback_t9C6BA19681BAA3CD78E6674293A57FF5DF62831E ** get_address_of_U3CRemoteCertificateValidationCallbackU3Ek__BackingField_27() { return &___U3CRemoteCertificateValidationCallbackU3Ek__BackingField_27; }
	inline void set_U3CRemoteCertificateValidationCallbackU3Ek__BackingField_27(RemoteCertificateValidationCallback_t9C6BA19681BAA3CD78E6674293A57FF5DF62831E * value)
	{
		___U3CRemoteCertificateValidationCallbackU3Ek__BackingField_27 = value;
		Il2CppCodeGenWriteBarrier((&___U3CRemoteCertificateValidationCallbackU3Ek__BackingField_27), value);
	}

	inline static int32_t get_offset_of_U3CDefaultParametersU3Ek__BackingField_28() { return static_cast<int32_t>(offsetof(RestClient_t9D31ABF964C6E6DACDA93F8E0317FB6E32D25D53, ___U3CDefaultParametersU3Ek__BackingField_28)); }
	inline RuntimeObject* get_U3CDefaultParametersU3Ek__BackingField_28() const { return ___U3CDefaultParametersU3Ek__BackingField_28; }
	inline RuntimeObject** get_address_of_U3CDefaultParametersU3Ek__BackingField_28() { return &___U3CDefaultParametersU3Ek__BackingField_28; }
	inline void set_U3CDefaultParametersU3Ek__BackingField_28(RuntimeObject* value)
	{
		___U3CDefaultParametersU3Ek__BackingField_28 = value;
		Il2CppCodeGenWriteBarrier((&___U3CDefaultParametersU3Ek__BackingField_28), value);
	}

	inline static int32_t get_offset_of_U3CBaseHostU3Ek__BackingField_29() { return static_cast<int32_t>(offsetof(RestClient_t9D31ABF964C6E6DACDA93F8E0317FB6E32D25D53, ___U3CBaseHostU3Ek__BackingField_29)); }
	inline String_t* get_U3CBaseHostU3Ek__BackingField_29() const { return ___U3CBaseHostU3Ek__BackingField_29; }
	inline String_t** get_address_of_U3CBaseHostU3Ek__BackingField_29() { return &___U3CBaseHostU3Ek__BackingField_29; }
	inline void set_U3CBaseHostU3Ek__BackingField_29(String_t* value)
	{
		___U3CBaseHostU3Ek__BackingField_29 = value;
		Il2CppCodeGenWriteBarrier((&___U3CBaseHostU3Ek__BackingField_29), value);
	}

	inline static int32_t get_offset_of_U3CAllowMultipleDefaultParametersWithSameNameU3Ek__BackingField_30() { return static_cast<int32_t>(offsetof(RestClient_t9D31ABF964C6E6DACDA93F8E0317FB6E32D25D53, ___U3CAllowMultipleDefaultParametersWithSameNameU3Ek__BackingField_30)); }
	inline bool get_U3CAllowMultipleDefaultParametersWithSameNameU3Ek__BackingField_30() const { return ___U3CAllowMultipleDefaultParametersWithSameNameU3Ek__BackingField_30; }
	inline bool* get_address_of_U3CAllowMultipleDefaultParametersWithSameNameU3Ek__BackingField_30() { return &___U3CAllowMultipleDefaultParametersWithSameNameU3Ek__BackingField_30; }
	inline void set_U3CAllowMultipleDefaultParametersWithSameNameU3Ek__BackingField_30(bool value)
	{
		___U3CAllowMultipleDefaultParametersWithSameNameU3Ek__BackingField_30 = value;
	}
};

struct RestClient_t9D31ABF964C6E6DACDA93F8E0317FB6E32D25D53_StaticFields
{
public:
	// System.Version RestSharp.RestClient::Version
	Version_tDBE6876C59B6F56D4F8CAA03851177ABC6FE0DFD * ___Version_0;
	// System.Text.RegularExpressions.Regex RestSharp.RestClient::StructuredSyntaxSuffixRegex
	Regex_tFD46E63A462E852189FD6AB4E2B0B67C4D8FDBDF * ___StructuredSyntaxSuffixRegex_1;
	// System.Text.RegularExpressions.Regex RestSharp.RestClient::StructuredSyntaxSuffixWildcardRegex
	Regex_tFD46E63A462E852189FD6AB4E2B0B67C4D8FDBDF * ___StructuredSyntaxSuffixWildcardRegex_2;
	// RestSharp.ParameterType[] RestSharp.RestClient::MultiParameterTypes
	ParameterTypeU5BU5D_t8A5D23BDD5046CD7A65A782E87DACF25B8B61CD3* ___MultiParameterTypes_31;

public:
	inline static int32_t get_offset_of_Version_0() { return static_cast<int32_t>(offsetof(RestClient_t9D31ABF964C6E6DACDA93F8E0317FB6E32D25D53_StaticFields, ___Version_0)); }
	inline Version_tDBE6876C59B6F56D4F8CAA03851177ABC6FE0DFD * get_Version_0() const { return ___Version_0; }
	inline Version_tDBE6876C59B6F56D4F8CAA03851177ABC6FE0DFD ** get_address_of_Version_0() { return &___Version_0; }
	inline void set_Version_0(Version_tDBE6876C59B6F56D4F8CAA03851177ABC6FE0DFD * value)
	{
		___Version_0 = value;
		Il2CppCodeGenWriteBarrier((&___Version_0), value);
	}

	inline static int32_t get_offset_of_StructuredSyntaxSuffixRegex_1() { return static_cast<int32_t>(offsetof(RestClient_t9D31ABF964C6E6DACDA93F8E0317FB6E32D25D53_StaticFields, ___StructuredSyntaxSuffixRegex_1)); }
	inline Regex_tFD46E63A462E852189FD6AB4E2B0B67C4D8FDBDF * get_StructuredSyntaxSuffixRegex_1() const { return ___StructuredSyntaxSuffixRegex_1; }
	inline Regex_tFD46E63A462E852189FD6AB4E2B0B67C4D8FDBDF ** get_address_of_StructuredSyntaxSuffixRegex_1() { return &___StructuredSyntaxSuffixRegex_1; }
	inline void set_StructuredSyntaxSuffixRegex_1(Regex_tFD46E63A462E852189FD6AB4E2B0B67C4D8FDBDF * value)
	{
		___StructuredSyntaxSuffixRegex_1 = value;
		Il2CppCodeGenWriteBarrier((&___StructuredSyntaxSuffixRegex_1), value);
	}

	inline static int32_t get_offset_of_StructuredSyntaxSuffixWildcardRegex_2() { return static_cast<int32_t>(offsetof(RestClient_t9D31ABF964C6E6DACDA93F8E0317FB6E32D25D53_StaticFields, ___StructuredSyntaxSuffixWildcardRegex_2)); }
	inline Regex_tFD46E63A462E852189FD6AB4E2B0B67C4D8FDBDF * get_StructuredSyntaxSuffixWildcardRegex_2() const { return ___StructuredSyntaxSuffixWildcardRegex_2; }
	inline Regex_tFD46E63A462E852189FD6AB4E2B0B67C4D8FDBDF ** get_address_of_StructuredSyntaxSuffixWildcardRegex_2() { return &___StructuredSyntaxSuffixWildcardRegex_2; }
	inline void set_StructuredSyntaxSuffixWildcardRegex_2(Regex_tFD46E63A462E852189FD6AB4E2B0B67C4D8FDBDF * value)
	{
		___StructuredSyntaxSuffixWildcardRegex_2 = value;
		Il2CppCodeGenWriteBarrier((&___StructuredSyntaxSuffixWildcardRegex_2), value);
	}

	inline static int32_t get_offset_of_MultiParameterTypes_31() { return static_cast<int32_t>(offsetof(RestClient_t9D31ABF964C6E6DACDA93F8E0317FB6E32D25D53_StaticFields, ___MultiParameterTypes_31)); }
	inline ParameterTypeU5BU5D_t8A5D23BDD5046CD7A65A782E87DACF25B8B61CD3* get_MultiParameterTypes_31() const { return ___MultiParameterTypes_31; }
	inline ParameterTypeU5BU5D_t8A5D23BDD5046CD7A65A782E87DACF25B8B61CD3** get_address_of_MultiParameterTypes_31() { return &___MultiParameterTypes_31; }
	inline void set_MultiParameterTypes_31(ParameterTypeU5BU5D_t8A5D23BDD5046CD7A65A782E87DACF25B8B61CD3* value)
	{
		___MultiParameterTypes_31 = value;
		Il2CppCodeGenWriteBarrier((&___MultiParameterTypes_31), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RESTCLIENT_T9D31ABF964C6E6DACDA93F8E0317FB6E32D25D53_H
#ifndef NOTSUPPORTEDEXCEPTION_TE75B318D6590A02A5D9B29FD97409B1750FA0010_H
#define NOTSUPPORTEDEXCEPTION_TE75B318D6590A02A5D9B29FD97409B1750FA0010_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.NotSupportedException
struct  NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010  : public SystemException_t5380468142AA850BE4A341D7AF3EAB9C78746782
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NOTSUPPORTEDEXCEPTION_TE75B318D6590A02A5D9B29FD97409B1750FA0010_H
#ifndef ASYNCOPERATION_T304C51ABED8AE734CC8DDDFE13013D8D5A44641D_H
#define ASYNCOPERATION_T304C51ABED8AE734CC8DDDFE13013D8D5A44641D_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.AsyncOperation
struct  AsyncOperation_t304C51ABED8AE734CC8DDDFE13013D8D5A44641D  : public YieldInstruction_t836035AC7BD07A3C7909F7AD2A5B42DE99D91C44
{
public:
	// System.IntPtr UnityEngine.AsyncOperation::m_Ptr
	intptr_t ___m_Ptr_0;
	// System.Action`1<UnityEngine.AsyncOperation> UnityEngine.AsyncOperation::m_completeCallback
	Action_1_tCBF754C290FAE894631BED8FD56E9E22C4C187F9 * ___m_completeCallback_1;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(AsyncOperation_t304C51ABED8AE734CC8DDDFE13013D8D5A44641D, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}

	inline static int32_t get_offset_of_m_completeCallback_1() { return static_cast<int32_t>(offsetof(AsyncOperation_t304C51ABED8AE734CC8DDDFE13013D8D5A44641D, ___m_completeCallback_1)); }
	inline Action_1_tCBF754C290FAE894631BED8FD56E9E22C4C187F9 * get_m_completeCallback_1() const { return ___m_completeCallback_1; }
	inline Action_1_tCBF754C290FAE894631BED8FD56E9E22C4C187F9 ** get_address_of_m_completeCallback_1() { return &___m_completeCallback_1; }
	inline void set_m_completeCallback_1(Action_1_tCBF754C290FAE894631BED8FD56E9E22C4C187F9 * value)
	{
		___m_completeCallback_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_completeCallback_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.AsyncOperation
struct AsyncOperation_t304C51ABED8AE734CC8DDDFE13013D8D5A44641D_marshaled_pinvoke : public YieldInstruction_t836035AC7BD07A3C7909F7AD2A5B42DE99D91C44_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
	Il2CppMethodPointer ___m_completeCallback_1;
};
// Native definition for COM marshalling of UnityEngine.AsyncOperation
struct AsyncOperation_t304C51ABED8AE734CC8DDDFE13013D8D5A44641D_marshaled_com : public YieldInstruction_t836035AC7BD07A3C7909F7AD2A5B42DE99D91C44_marshaled_com
{
	intptr_t ___m_Ptr_0;
	Il2CppMethodPointer ___m_completeCallback_1;
};
#endif // ASYNCOPERATION_T304C51ABED8AE734CC8DDDFE13013D8D5A44641D_H
#ifndef CERTIFICATEHANDLER_TBD070BF4150A44AB482FD36EA3882C363117E8C0_H
#define CERTIFICATEHANDLER_TBD070BF4150A44AB482FD36EA3882C363117E8C0_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Networking.CertificateHandler
struct  CertificateHandler_tBD070BF4150A44AB482FD36EA3882C363117E8C0  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Networking.CertificateHandler::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(CertificateHandler_tBD070BF4150A44AB482FD36EA3882C363117E8C0, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.Networking.CertificateHandler
struct CertificateHandler_tBD070BF4150A44AB482FD36EA3882C363117E8C0_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Networking.CertificateHandler
struct CertificateHandler_tBD070BF4150A44AB482FD36EA3882C363117E8C0_marshaled_com
{
	intptr_t ___m_Ptr_0;
};
#endif // CERTIFICATEHANDLER_TBD070BF4150A44AB482FD36EA3882C363117E8C0_H
#ifndef DOWNLOADHANDLER_T4A7802ADC97024B469C87FA454B6973951980EE9_H
#define DOWNLOADHANDLER_T4A7802ADC97024B469C87FA454B6973951980EE9_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Networking.DownloadHandler
struct  DownloadHandler_t4A7802ADC97024B469C87FA454B6973951980EE9  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Networking.DownloadHandler::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(DownloadHandler_t4A7802ADC97024B469C87FA454B6973951980EE9, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.Networking.DownloadHandler
struct DownloadHandler_t4A7802ADC97024B469C87FA454B6973951980EE9_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Networking.DownloadHandler
struct DownloadHandler_t4A7802ADC97024B469C87FA454B6973951980EE9_marshaled_com
{
	intptr_t ___m_Ptr_0;
};
#endif // DOWNLOADHANDLER_T4A7802ADC97024B469C87FA454B6973951980EE9_H
#ifndef UPLOADHANDLER_T24F4097D30A1E7C689D8881A27F251B4741601E4_H
#define UPLOADHANDLER_T24F4097D30A1E7C689D8881A27F251B4741601E4_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Networking.UploadHandler
struct  UploadHandler_t24F4097D30A1E7C689D8881A27F251B4741601E4  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Networking.UploadHandler::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(UploadHandler_t24F4097D30A1E7C689D8881A27F251B4741601E4, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.Networking.UploadHandler
struct UploadHandler_t24F4097D30A1E7C689D8881A27F251B4741601E4_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Networking.UploadHandler
struct UploadHandler_t24F4097D30A1E7C689D8881A27F251B4741601E4_marshaled_com
{
	intptr_t ___m_Ptr_0;
};
#endif // UPLOADHANDLER_T24F4097D30A1E7C689D8881A27F251B4741601E4_H
#ifndef RESTREQUEST_T729C3BD2490C2DDC84A0F3F56FE665A1ED6B0F22_H
#define RESTREQUEST_T729C3BD2490C2DDC84A0F3F56FE665A1ED6B0F22_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// RestSharp.RestRequest
struct  RestRequest_t729C3BD2490C2DDC84A0F3F56FE665A1ED6B0F22  : public RuntimeObject
{
public:
	// System.Collections.Generic.IList`1<System.Net.DecompressionMethods> RestSharp.RestRequest::_allowedDecompressionMethods
	RuntimeObject* ____allowedDecompressionMethods_0;
	// System.Action`1<System.IO.Stream> RestSharp.RestRequest::_responseWriter
	Action_1_tC8BAB6C7B8E5508F10B3A5EF475B0FFAE7688621 * ____responseWriter_1;
	// System.Action`2<System.IO.Stream,RestSharp.IHttpResponse> RestSharp.RestRequest::_advancedResponseWriter
	Action_2_t1ABB7E0D801DB5E255301AE2B00F26A073DA2EB6 * ____advancedResponseWriter_2;
	// System.Boolean RestSharp.RestRequest::<AlwaysMultipartFormData>k__BackingField
	bool ___U3CAlwaysMultipartFormDataU3Ek__BackingField_3;
	// RestSharp.Serializers.ISerializer RestSharp.RestRequest::<JsonSerializer>k__BackingField
	RuntimeObject* ___U3CJsonSerializerU3Ek__BackingField_4;
	// RestSharp.Serialization.Xml.IXmlSerializer RestSharp.RestRequest::<XmlSerializer>k__BackingField
	RuntimeObject* ___U3CXmlSerializerU3Ek__BackingField_5;
	// System.Boolean RestSharp.RestRequest::<UseDefaultCredentials>k__BackingField
	bool ___U3CUseDefaultCredentialsU3Ek__BackingField_6;
	// System.Collections.Generic.List`1<RestSharp.Parameter> RestSharp.RestRequest::<Parameters>k__BackingField
	List_1_t726C84D85916790BBA13349F4DCD6D82E61E7EA0 * ___U3CParametersU3Ek__BackingField_8;
	// System.Collections.Generic.List`1<RestSharp.FileParameter> RestSharp.RestRequest::<Files>k__BackingField
	List_1_tF00B14A4D0C0DE7F2CA46E52F4490D6FEB28D832 * ___U3CFilesU3Ek__BackingField_9;
	// RestSharp.Method RestSharp.RestRequest::<Method>k__BackingField
	int32_t ___U3CMethodU3Ek__BackingField_10;
	// System.String RestSharp.RestRequest::<Resource>k__BackingField
	String_t* ___U3CResourceU3Ek__BackingField_11;
	// RestSharp.DataFormat RestSharp.RestRequest::<RequestFormat>k__BackingField
	int32_t ___U3CRequestFormatU3Ek__BackingField_12;
	// System.Action`1<RestSharp.IRestResponse> RestSharp.RestRequest::<OnBeforeDeserialization>k__BackingField
	Action_1_t7711586CEBBEE9FE3667D306BD01714439FD06D7 * ___U3COnBeforeDeserializationU3Ek__BackingField_13;
	// System.Net.ICredentials RestSharp.RestRequest::<Credentials>k__BackingField
	RuntimeObject* ___U3CCredentialsU3Ek__BackingField_14;
	// System.Int32 RestSharp.RestRequest::<Timeout>k__BackingField
	int32_t ___U3CTimeoutU3Ek__BackingField_15;
	// System.Int32 RestSharp.RestRequest::<ReadWriteTimeout>k__BackingField
	int32_t ___U3CReadWriteTimeoutU3Ek__BackingField_16;
	// System.Int32 RestSharp.RestRequest::<Attempts>k__BackingField
	int32_t ___U3CAttemptsU3Ek__BackingField_17;

public:
	inline static int32_t get_offset_of__allowedDecompressionMethods_0() { return static_cast<int32_t>(offsetof(RestRequest_t729C3BD2490C2DDC84A0F3F56FE665A1ED6B0F22, ____allowedDecompressionMethods_0)); }
	inline RuntimeObject* get__allowedDecompressionMethods_0() const { return ____allowedDecompressionMethods_0; }
	inline RuntimeObject** get_address_of__allowedDecompressionMethods_0() { return &____allowedDecompressionMethods_0; }
	inline void set__allowedDecompressionMethods_0(RuntimeObject* value)
	{
		____allowedDecompressionMethods_0 = value;
		Il2CppCodeGenWriteBarrier((&____allowedDecompressionMethods_0), value);
	}

	inline static int32_t get_offset_of__responseWriter_1() { return static_cast<int32_t>(offsetof(RestRequest_t729C3BD2490C2DDC84A0F3F56FE665A1ED6B0F22, ____responseWriter_1)); }
	inline Action_1_tC8BAB6C7B8E5508F10B3A5EF475B0FFAE7688621 * get__responseWriter_1() const { return ____responseWriter_1; }
	inline Action_1_tC8BAB6C7B8E5508F10B3A5EF475B0FFAE7688621 ** get_address_of__responseWriter_1() { return &____responseWriter_1; }
	inline void set__responseWriter_1(Action_1_tC8BAB6C7B8E5508F10B3A5EF475B0FFAE7688621 * value)
	{
		____responseWriter_1 = value;
		Il2CppCodeGenWriteBarrier((&____responseWriter_1), value);
	}

	inline static int32_t get_offset_of__advancedResponseWriter_2() { return static_cast<int32_t>(offsetof(RestRequest_t729C3BD2490C2DDC84A0F3F56FE665A1ED6B0F22, ____advancedResponseWriter_2)); }
	inline Action_2_t1ABB7E0D801DB5E255301AE2B00F26A073DA2EB6 * get__advancedResponseWriter_2() const { return ____advancedResponseWriter_2; }
	inline Action_2_t1ABB7E0D801DB5E255301AE2B00F26A073DA2EB6 ** get_address_of__advancedResponseWriter_2() { return &____advancedResponseWriter_2; }
	inline void set__advancedResponseWriter_2(Action_2_t1ABB7E0D801DB5E255301AE2B00F26A073DA2EB6 * value)
	{
		____advancedResponseWriter_2 = value;
		Il2CppCodeGenWriteBarrier((&____advancedResponseWriter_2), value);
	}

	inline static int32_t get_offset_of_U3CAlwaysMultipartFormDataU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(RestRequest_t729C3BD2490C2DDC84A0F3F56FE665A1ED6B0F22, ___U3CAlwaysMultipartFormDataU3Ek__BackingField_3)); }
	inline bool get_U3CAlwaysMultipartFormDataU3Ek__BackingField_3() const { return ___U3CAlwaysMultipartFormDataU3Ek__BackingField_3; }
	inline bool* get_address_of_U3CAlwaysMultipartFormDataU3Ek__BackingField_3() { return &___U3CAlwaysMultipartFormDataU3Ek__BackingField_3; }
	inline void set_U3CAlwaysMultipartFormDataU3Ek__BackingField_3(bool value)
	{
		___U3CAlwaysMultipartFormDataU3Ek__BackingField_3 = value;
	}

	inline static int32_t get_offset_of_U3CJsonSerializerU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(RestRequest_t729C3BD2490C2DDC84A0F3F56FE665A1ED6B0F22, ___U3CJsonSerializerU3Ek__BackingField_4)); }
	inline RuntimeObject* get_U3CJsonSerializerU3Ek__BackingField_4() const { return ___U3CJsonSerializerU3Ek__BackingField_4; }
	inline RuntimeObject** get_address_of_U3CJsonSerializerU3Ek__BackingField_4() { return &___U3CJsonSerializerU3Ek__BackingField_4; }
	inline void set_U3CJsonSerializerU3Ek__BackingField_4(RuntimeObject* value)
	{
		___U3CJsonSerializerU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier((&___U3CJsonSerializerU3Ek__BackingField_4), value);
	}

	inline static int32_t get_offset_of_U3CXmlSerializerU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(RestRequest_t729C3BD2490C2DDC84A0F3F56FE665A1ED6B0F22, ___U3CXmlSerializerU3Ek__BackingField_5)); }
	inline RuntimeObject* get_U3CXmlSerializerU3Ek__BackingField_5() const { return ___U3CXmlSerializerU3Ek__BackingField_5; }
	inline RuntimeObject** get_address_of_U3CXmlSerializerU3Ek__BackingField_5() { return &___U3CXmlSerializerU3Ek__BackingField_5; }
	inline void set_U3CXmlSerializerU3Ek__BackingField_5(RuntimeObject* value)
	{
		___U3CXmlSerializerU3Ek__BackingField_5 = value;
		Il2CppCodeGenWriteBarrier((&___U3CXmlSerializerU3Ek__BackingField_5), value);
	}

	inline static int32_t get_offset_of_U3CUseDefaultCredentialsU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(RestRequest_t729C3BD2490C2DDC84A0F3F56FE665A1ED6B0F22, ___U3CUseDefaultCredentialsU3Ek__BackingField_6)); }
	inline bool get_U3CUseDefaultCredentialsU3Ek__BackingField_6() const { return ___U3CUseDefaultCredentialsU3Ek__BackingField_6; }
	inline bool* get_address_of_U3CUseDefaultCredentialsU3Ek__BackingField_6() { return &___U3CUseDefaultCredentialsU3Ek__BackingField_6; }
	inline void set_U3CUseDefaultCredentialsU3Ek__BackingField_6(bool value)
	{
		___U3CUseDefaultCredentialsU3Ek__BackingField_6 = value;
	}

	inline static int32_t get_offset_of_U3CParametersU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(RestRequest_t729C3BD2490C2DDC84A0F3F56FE665A1ED6B0F22, ___U3CParametersU3Ek__BackingField_8)); }
	inline List_1_t726C84D85916790BBA13349F4DCD6D82E61E7EA0 * get_U3CParametersU3Ek__BackingField_8() const { return ___U3CParametersU3Ek__BackingField_8; }
	inline List_1_t726C84D85916790BBA13349F4DCD6D82E61E7EA0 ** get_address_of_U3CParametersU3Ek__BackingField_8() { return &___U3CParametersU3Ek__BackingField_8; }
	inline void set_U3CParametersU3Ek__BackingField_8(List_1_t726C84D85916790BBA13349F4DCD6D82E61E7EA0 * value)
	{
		___U3CParametersU3Ek__BackingField_8 = value;
		Il2CppCodeGenWriteBarrier((&___U3CParametersU3Ek__BackingField_8), value);
	}

	inline static int32_t get_offset_of_U3CFilesU3Ek__BackingField_9() { return static_cast<int32_t>(offsetof(RestRequest_t729C3BD2490C2DDC84A0F3F56FE665A1ED6B0F22, ___U3CFilesU3Ek__BackingField_9)); }
	inline List_1_tF00B14A4D0C0DE7F2CA46E52F4490D6FEB28D832 * get_U3CFilesU3Ek__BackingField_9() const { return ___U3CFilesU3Ek__BackingField_9; }
	inline List_1_tF00B14A4D0C0DE7F2CA46E52F4490D6FEB28D832 ** get_address_of_U3CFilesU3Ek__BackingField_9() { return &___U3CFilesU3Ek__BackingField_9; }
	inline void set_U3CFilesU3Ek__BackingField_9(List_1_tF00B14A4D0C0DE7F2CA46E52F4490D6FEB28D832 * value)
	{
		___U3CFilesU3Ek__BackingField_9 = value;
		Il2CppCodeGenWriteBarrier((&___U3CFilesU3Ek__BackingField_9), value);
	}

	inline static int32_t get_offset_of_U3CMethodU3Ek__BackingField_10() { return static_cast<int32_t>(offsetof(RestRequest_t729C3BD2490C2DDC84A0F3F56FE665A1ED6B0F22, ___U3CMethodU3Ek__BackingField_10)); }
	inline int32_t get_U3CMethodU3Ek__BackingField_10() const { return ___U3CMethodU3Ek__BackingField_10; }
	inline int32_t* get_address_of_U3CMethodU3Ek__BackingField_10() { return &___U3CMethodU3Ek__BackingField_10; }
	inline void set_U3CMethodU3Ek__BackingField_10(int32_t value)
	{
		___U3CMethodU3Ek__BackingField_10 = value;
	}

	inline static int32_t get_offset_of_U3CResourceU3Ek__BackingField_11() { return static_cast<int32_t>(offsetof(RestRequest_t729C3BD2490C2DDC84A0F3F56FE665A1ED6B0F22, ___U3CResourceU3Ek__BackingField_11)); }
	inline String_t* get_U3CResourceU3Ek__BackingField_11() const { return ___U3CResourceU3Ek__BackingField_11; }
	inline String_t** get_address_of_U3CResourceU3Ek__BackingField_11() { return &___U3CResourceU3Ek__BackingField_11; }
	inline void set_U3CResourceU3Ek__BackingField_11(String_t* value)
	{
		___U3CResourceU3Ek__BackingField_11 = value;
		Il2CppCodeGenWriteBarrier((&___U3CResourceU3Ek__BackingField_11), value);
	}

	inline static int32_t get_offset_of_U3CRequestFormatU3Ek__BackingField_12() { return static_cast<int32_t>(offsetof(RestRequest_t729C3BD2490C2DDC84A0F3F56FE665A1ED6B0F22, ___U3CRequestFormatU3Ek__BackingField_12)); }
	inline int32_t get_U3CRequestFormatU3Ek__BackingField_12() const { return ___U3CRequestFormatU3Ek__BackingField_12; }
	inline int32_t* get_address_of_U3CRequestFormatU3Ek__BackingField_12() { return &___U3CRequestFormatU3Ek__BackingField_12; }
	inline void set_U3CRequestFormatU3Ek__BackingField_12(int32_t value)
	{
		___U3CRequestFormatU3Ek__BackingField_12 = value;
	}

	inline static int32_t get_offset_of_U3COnBeforeDeserializationU3Ek__BackingField_13() { return static_cast<int32_t>(offsetof(RestRequest_t729C3BD2490C2DDC84A0F3F56FE665A1ED6B0F22, ___U3COnBeforeDeserializationU3Ek__BackingField_13)); }
	inline Action_1_t7711586CEBBEE9FE3667D306BD01714439FD06D7 * get_U3COnBeforeDeserializationU3Ek__BackingField_13() const { return ___U3COnBeforeDeserializationU3Ek__BackingField_13; }
	inline Action_1_t7711586CEBBEE9FE3667D306BD01714439FD06D7 ** get_address_of_U3COnBeforeDeserializationU3Ek__BackingField_13() { return &___U3COnBeforeDeserializationU3Ek__BackingField_13; }
	inline void set_U3COnBeforeDeserializationU3Ek__BackingField_13(Action_1_t7711586CEBBEE9FE3667D306BD01714439FD06D7 * value)
	{
		___U3COnBeforeDeserializationU3Ek__BackingField_13 = value;
		Il2CppCodeGenWriteBarrier((&___U3COnBeforeDeserializationU3Ek__BackingField_13), value);
	}

	inline static int32_t get_offset_of_U3CCredentialsU3Ek__BackingField_14() { return static_cast<int32_t>(offsetof(RestRequest_t729C3BD2490C2DDC84A0F3F56FE665A1ED6B0F22, ___U3CCredentialsU3Ek__BackingField_14)); }
	inline RuntimeObject* get_U3CCredentialsU3Ek__BackingField_14() const { return ___U3CCredentialsU3Ek__BackingField_14; }
	inline RuntimeObject** get_address_of_U3CCredentialsU3Ek__BackingField_14() { return &___U3CCredentialsU3Ek__BackingField_14; }
	inline void set_U3CCredentialsU3Ek__BackingField_14(RuntimeObject* value)
	{
		___U3CCredentialsU3Ek__BackingField_14 = value;
		Il2CppCodeGenWriteBarrier((&___U3CCredentialsU3Ek__BackingField_14), value);
	}

	inline static int32_t get_offset_of_U3CTimeoutU3Ek__BackingField_15() { return static_cast<int32_t>(offsetof(RestRequest_t729C3BD2490C2DDC84A0F3F56FE665A1ED6B0F22, ___U3CTimeoutU3Ek__BackingField_15)); }
	inline int32_t get_U3CTimeoutU3Ek__BackingField_15() const { return ___U3CTimeoutU3Ek__BackingField_15; }
	inline int32_t* get_address_of_U3CTimeoutU3Ek__BackingField_15() { return &___U3CTimeoutU3Ek__BackingField_15; }
	inline void set_U3CTimeoutU3Ek__BackingField_15(int32_t value)
	{
		___U3CTimeoutU3Ek__BackingField_15 = value;
	}

	inline static int32_t get_offset_of_U3CReadWriteTimeoutU3Ek__BackingField_16() { return static_cast<int32_t>(offsetof(RestRequest_t729C3BD2490C2DDC84A0F3F56FE665A1ED6B0F22, ___U3CReadWriteTimeoutU3Ek__BackingField_16)); }
	inline int32_t get_U3CReadWriteTimeoutU3Ek__BackingField_16() const { return ___U3CReadWriteTimeoutU3Ek__BackingField_16; }
	inline int32_t* get_address_of_U3CReadWriteTimeoutU3Ek__BackingField_16() { return &___U3CReadWriteTimeoutU3Ek__BackingField_16; }
	inline void set_U3CReadWriteTimeoutU3Ek__BackingField_16(int32_t value)
	{
		___U3CReadWriteTimeoutU3Ek__BackingField_16 = value;
	}

	inline static int32_t get_offset_of_U3CAttemptsU3Ek__BackingField_17() { return static_cast<int32_t>(offsetof(RestRequest_t729C3BD2490C2DDC84A0F3F56FE665A1ED6B0F22, ___U3CAttemptsU3Ek__BackingField_17)); }
	inline int32_t get_U3CAttemptsU3Ek__BackingField_17() const { return ___U3CAttemptsU3Ek__BackingField_17; }
	inline int32_t* get_address_of_U3CAttemptsU3Ek__BackingField_17() { return &___U3CAttemptsU3Ek__BackingField_17; }
	inline void set_U3CAttemptsU3Ek__BackingField_17(int32_t value)
	{
		___U3CAttemptsU3Ek__BackingField_17 = value;
	}
};

struct RestRequest_t729C3BD2490C2DDC84A0F3F56FE665A1ED6B0F22_StaticFields
{
public:
	// System.Text.RegularExpressions.Regex RestSharp.RestRequest::PortSplitRegex
	Regex_tFD46E63A462E852189FD6AB4E2B0B67C4D8FDBDF * ___PortSplitRegex_7;

public:
	inline static int32_t get_offset_of_PortSplitRegex_7() { return static_cast<int32_t>(offsetof(RestRequest_t729C3BD2490C2DDC84A0F3F56FE665A1ED6B0F22_StaticFields, ___PortSplitRegex_7)); }
	inline Regex_tFD46E63A462E852189FD6AB4E2B0B67C4D8FDBDF * get_PortSplitRegex_7() const { return ___PortSplitRegex_7; }
	inline Regex_tFD46E63A462E852189FD6AB4E2B0B67C4D8FDBDF ** get_address_of_PortSplitRegex_7() { return &___PortSplitRegex_7; }
	inline void set_PortSplitRegex_7(Regex_tFD46E63A462E852189FD6AB4E2B0B67C4D8FDBDF * value)
	{
		___PortSplitRegex_7 = value;
		Il2CppCodeGenWriteBarrier((&___PortSplitRegex_7), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RESTREQUEST_T729C3BD2490C2DDC84A0F3F56FE665A1ED6B0F22_H
#ifndef UNITYWEBREQUEST_T9120F5A2C7D43B936B49C0B7E4CA54C822689129_H
#define UNITYWEBREQUEST_T9120F5A2C7D43B936B49C0B7E4CA54C822689129_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Networking.UnityWebRequest
struct  UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Networking.UnityWebRequest::m_Ptr
	intptr_t ___m_Ptr_0;
	// UnityEngine.Networking.DownloadHandler UnityEngine.Networking.UnityWebRequest::m_DownloadHandler
	DownloadHandler_t4A7802ADC97024B469C87FA454B6973951980EE9 * ___m_DownloadHandler_1;
	// UnityEngine.Networking.UploadHandler UnityEngine.Networking.UnityWebRequest::m_UploadHandler
	UploadHandler_t24F4097D30A1E7C689D8881A27F251B4741601E4 * ___m_UploadHandler_2;
	// UnityEngine.Networking.CertificateHandler UnityEngine.Networking.UnityWebRequest::m_CertificateHandler
	CertificateHandler_tBD070BF4150A44AB482FD36EA3882C363117E8C0 * ___m_CertificateHandler_3;
	// System.Uri UnityEngine.Networking.UnityWebRequest::m_Uri
	Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E * ___m_Uri_4;
	// System.Boolean UnityEngine.Networking.UnityWebRequest::<disposeCertificateHandlerOnDispose>k__BackingField
	bool ___U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5;
	// System.Boolean UnityEngine.Networking.UnityWebRequest::<disposeDownloadHandlerOnDispose>k__BackingField
	bool ___U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6;
	// System.Boolean UnityEngine.Networking.UnityWebRequest::<disposeUploadHandlerOnDispose>k__BackingField
	bool ___U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}

	inline static int32_t get_offset_of_m_DownloadHandler_1() { return static_cast<int32_t>(offsetof(UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129, ___m_DownloadHandler_1)); }
	inline DownloadHandler_t4A7802ADC97024B469C87FA454B6973951980EE9 * get_m_DownloadHandler_1() const { return ___m_DownloadHandler_1; }
	inline DownloadHandler_t4A7802ADC97024B469C87FA454B6973951980EE9 ** get_address_of_m_DownloadHandler_1() { return &___m_DownloadHandler_1; }
	inline void set_m_DownloadHandler_1(DownloadHandler_t4A7802ADC97024B469C87FA454B6973951980EE9 * value)
	{
		___m_DownloadHandler_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_DownloadHandler_1), value);
	}

	inline static int32_t get_offset_of_m_UploadHandler_2() { return static_cast<int32_t>(offsetof(UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129, ___m_UploadHandler_2)); }
	inline UploadHandler_t24F4097D30A1E7C689D8881A27F251B4741601E4 * get_m_UploadHandler_2() const { return ___m_UploadHandler_2; }
	inline UploadHandler_t24F4097D30A1E7C689D8881A27F251B4741601E4 ** get_address_of_m_UploadHandler_2() { return &___m_UploadHandler_2; }
	inline void set_m_UploadHandler_2(UploadHandler_t24F4097D30A1E7C689D8881A27F251B4741601E4 * value)
	{
		___m_UploadHandler_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_UploadHandler_2), value);
	}

	inline static int32_t get_offset_of_m_CertificateHandler_3() { return static_cast<int32_t>(offsetof(UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129, ___m_CertificateHandler_3)); }
	inline CertificateHandler_tBD070BF4150A44AB482FD36EA3882C363117E8C0 * get_m_CertificateHandler_3() const { return ___m_CertificateHandler_3; }
	inline CertificateHandler_tBD070BF4150A44AB482FD36EA3882C363117E8C0 ** get_address_of_m_CertificateHandler_3() { return &___m_CertificateHandler_3; }
	inline void set_m_CertificateHandler_3(CertificateHandler_tBD070BF4150A44AB482FD36EA3882C363117E8C0 * value)
	{
		___m_CertificateHandler_3 = value;
		Il2CppCodeGenWriteBarrier((&___m_CertificateHandler_3), value);
	}

	inline static int32_t get_offset_of_m_Uri_4() { return static_cast<int32_t>(offsetof(UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129, ___m_Uri_4)); }
	inline Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E * get_m_Uri_4() const { return ___m_Uri_4; }
	inline Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E ** get_address_of_m_Uri_4() { return &___m_Uri_4; }
	inline void set_m_Uri_4(Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E * value)
	{
		___m_Uri_4 = value;
		Il2CppCodeGenWriteBarrier((&___m_Uri_4), value);
	}

	inline static int32_t get_offset_of_U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129, ___U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5)); }
	inline bool get_U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5() const { return ___U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5; }
	inline bool* get_address_of_U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5() { return &___U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5; }
	inline void set_U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5(bool value)
	{
		___U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5 = value;
	}

	inline static int32_t get_offset_of_U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129, ___U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6)); }
	inline bool get_U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6() const { return ___U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6; }
	inline bool* get_address_of_U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6() { return &___U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6; }
	inline void set_U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6(bool value)
	{
		___U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6 = value;
	}

	inline static int32_t get_offset_of_U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129, ___U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7)); }
	inline bool get_U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7() const { return ___U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7; }
	inline bool* get_address_of_U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7() { return &___U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7; }
	inline void set_U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7(bool value)
	{
		___U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.Networking.UnityWebRequest
struct UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
	DownloadHandler_t4A7802ADC97024B469C87FA454B6973951980EE9_marshaled_pinvoke ___m_DownloadHandler_1;
	UploadHandler_t24F4097D30A1E7C689D8881A27F251B4741601E4_marshaled_pinvoke ___m_UploadHandler_2;
	CertificateHandler_tBD070BF4150A44AB482FD36EA3882C363117E8C0_marshaled_pinvoke ___m_CertificateHandler_3;
	Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E * ___m_Uri_4;
	int32_t ___U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5;
	int32_t ___U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6;
	int32_t ___U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7;
};
// Native definition for COM marshalling of UnityEngine.Networking.UnityWebRequest
struct UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129_marshaled_com
{
	intptr_t ___m_Ptr_0;
	DownloadHandler_t4A7802ADC97024B469C87FA454B6973951980EE9_marshaled_com* ___m_DownloadHandler_1;
	UploadHandler_t24F4097D30A1E7C689D8881A27F251B4741601E4_marshaled_com* ___m_UploadHandler_2;
	CertificateHandler_tBD070BF4150A44AB482FD36EA3882C363117E8C0_marshaled_com* ___m_CertificateHandler_3;
	Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E * ___m_Uri_4;
	int32_t ___U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5;
	int32_t ___U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6;
	int32_t ___U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7;
};
#endif // UNITYWEBREQUEST_T9120F5A2C7D43B936B49C0B7E4CA54C822689129_H



// System.Void UnityEngine.Debug::Log(System.Object)
extern "C" IL2CPP_METHOD_ATTR void Debug_Log_m4B7C70BAFD477C6BDB59C88A0934F0B018D03708 (RuntimeObject * p0, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String)
extern "C" IL2CPP_METHOD_ATTR String_t* String_Concat_mB78D0094592718DA6D5DB6C712A9C225631666BE (String_t* p0, String_t* p1, const RuntimeMethod* method);
// System.String UnityEngine.Application::get_persistentDataPath()
extern "C" IL2CPP_METHOD_ATTR String_t* Application_get_persistentDataPath_m82E34156D8BD0A55CAC258CDFE8317FAD6945F5B (const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String,System.String)
extern "C" IL2CPP_METHOD_ATTR String_t* String_Concat_mF4626905368D6558695A823466A1AF65EADB9923 (String_t* p0, String_t* p1, String_t* p2, const RuntimeMethod* method);
// System.Void System.IO.File::WriteAllText(System.String,System.String)
extern "C" IL2CPP_METHOD_ATTR void File_WriteAllText_m7BA355E5631C6A3E3D3378D6101EF65E72A45F0A (String_t* p0, String_t* p1, const RuntimeMethod* method);
// System.Void RestSharp.RestClient::.ctor(System.String)
extern "C" IL2CPP_METHOD_ATTR void RestClient__ctor_mFA01D84FD1CAFBE626C670C31200CD3523A87D65 (RestClient_t9D31ABF964C6E6DACDA93F8E0317FB6E32D25D53 * __this, String_t* p0, const RuntimeMethod* method);
// System.Void RestSharp.RestRequest::.ctor(System.String,RestSharp.Method)
extern "C" IL2CPP_METHOD_ATTR void RestRequest__ctor_m12A8075F29E223072337AC57F436F12180497CEA (RestRequest_t729C3BD2490C2DDC84A0F3F56FE665A1ED6B0F22 * __this, String_t* p0, int32_t p1, const RuntimeMethod* method);
// RestSharp.IRestRequest RestSharp.RestRequest::AddHeader(System.String,System.String)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* RestRequest_AddHeader_m8B48D873C9FCA229DB7492BF4B752553C5E58842 (RestRequest_t729C3BD2490C2DDC84A0F3F56FE665A1ED6B0F22 * __this, String_t* p0, String_t* p1, const RuntimeMethod* method);
// System.String System.String::Format(System.String,System.Object)
extern "C" IL2CPP_METHOD_ATTR String_t* String_Format_m0ACDD8B34764E4040AED0B3EEB753567E4576BFA (String_t* p0, RuntimeObject * p1, const RuntimeMethod* method);
// System.Void ASASharingPlugin.ASASharing/<GetSharedAzureAnchorCoroutine>d__2::.ctor(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void U3CGetSharedAzureAnchorCoroutineU3Ed__2__ctor_mE15CAEE652E0F9E8AC9963A87F05A369AD146E37 (U3CGetSharedAzureAnchorCoroutineU3Ed__2_tB6B8C40880A24708E646404771CFC482A9F68727 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method);
// System.Void System.Object::.ctor()
extern "C" IL2CPP_METHOD_ATTR void Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void ASASharingPlugin.ASASharing/<GetSharedAzureAnchorCoroutine>d__2::<>m__Finally1()
extern "C" IL2CPP_METHOD_ATTR void U3CGetSharedAzureAnchorCoroutineU3Ed__2_U3CU3Em__Finally1_mB5EDC6BB144D7CE63C6F499801C66E961E804E53 (U3CGetSharedAzureAnchorCoroutineU3Ed__2_tB6B8C40880A24708E646404771CFC482A9F68727 * __this, const RuntimeMethod* method);
// System.String System.String::ToLower()
extern "C" IL2CPP_METHOD_ATTR String_t* String_ToLower_m5287204D93C9DDC4DF84581ADD756D0FDE2BA5A8 (String_t* __this, const RuntimeMethod* method);
// UnityEngine.Networking.UnityWebRequest UnityEngine.Networking.UnityWebRequest::Get(System.String)
extern "C" IL2CPP_METHOD_ATTR UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129 * UnityWebRequest_Get_mF4E12AA47AAF25221AD738B434B0EA8D40659B18 (String_t* p0, const RuntimeMethod* method);
// UnityEngine.AsyncOperation UnityEngine.Networking.UnityWebRequest::Send()
extern "C" IL2CPP_METHOD_ATTR AsyncOperation_t304C51ABED8AE734CC8DDDFE13013D8D5A44641D * UnityWebRequest_Send_mE2BC0213F05A8E6E8384AB4BB8BA75883BDD801F (UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Networking.UnityWebRequest::get_isNetworkError()
extern "C" IL2CPP_METHOD_ATTR bool UnityWebRequest_get_isNetworkError_m082AFE1A58A330AC4CBD179606B61CB39DD44588 (UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Networking.UnityWebRequest::get_isHttpError()
extern "C" IL2CPP_METHOD_ATTR bool UnityWebRequest_get_isHttpError_m8F636B70C239EC848FACC83189DE0C22CADEC1C3 (UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129 * __this, const RuntimeMethod* method);
// System.String UnityEngine.Networking.UnityWebRequest::get_error()
extern "C" IL2CPP_METHOD_ATTR String_t* UnityWebRequest_get_error_mC79FE2460B3F30B8F9E5385BD7D2B4C5B295D7CC (UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129 * __this, const RuntimeMethod* method);
// UnityEngine.Networking.DownloadHandler UnityEngine.Networking.UnityWebRequest::get_downloadHandler()
extern "C" IL2CPP_METHOD_ATTR DownloadHandler_t4A7802ADC97024B469C87FA454B6973951980EE9 * UnityWebRequest_get_downloadHandler_m83044026479E6B4B2739DCE9EEA8A0FAE7D9AF41 (UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129 * __this, const RuntimeMethod* method);
// System.String UnityEngine.Networking.DownloadHandler::get_text()
extern "C" IL2CPP_METHOD_ATTR String_t* DownloadHandler_get_text_m1D707E375899B4F4F0434B79AB8D57ADFE5424FF (DownloadHandler_t4A7802ADC97024B469C87FA454B6973951980EE9 * __this, const RuntimeMethod* method);
// System.Void ASASharingPlugin.ASASharing/<GetSharedAzureAnchorCoroutine>d__2::System.IDisposable.Dispose()
extern "C" IL2CPP_METHOD_ATTR void U3CGetSharedAzureAnchorCoroutineU3Ed__2_System_IDisposable_Dispose_mDC3E09920B44A624AC8C4E2C275A89CFEADC853F (U3CGetSharedAzureAnchorCoroutineU3Ed__2_tB6B8C40880A24708E646404771CFC482A9F68727 * __this, const RuntimeMethod* method);
// System.Void System.NotSupportedException::.ctor()
extern "C" IL2CPP_METHOD_ATTR void NotSupportedException__ctor_mA121DE1CAC8F25277DEB489DC7771209D91CAE33 (NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010 * __this, const RuntimeMethod* method);
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void ASASharingPlugin.ASASharing::ShareAnchor(System.String,System.String)
extern "C" IL2CPP_METHOD_ATTR void ASASharing_ShareAnchor_m6640A75BF1A085825DB3A8F192C003F1DC0F0CDF (ASASharing_t4C210DEC4C2882F3A7980F6E7EADC735EB231397 * __this, String_t* ___publicSharingPin0, String_t* ___AzureAnchorID1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ASASharing_ShareAnchor_m6640A75BF1A085825DB3A8F192C003F1DC0F0CDF_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	String_t* V_1 = NULL;
	RuntimeObject* V_2 = NULL;
	Exception_t * V_3 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_Log_m4B7C70BAFD477C6BDB59C88A0934F0B018D03708(_stringLiteral959CA3F1117C10AF3420172C931905E86C9FB26A, /*hidden argument*/NULL);
		String_t* L_0 = ___publicSharingPin0;
		String_t* L_1 = String_Concat_mB78D0094592718DA6D5DB6C712A9C225631666BE(_stringLiteralE1AE90FC2F86D79825A96562ADD0919AED98DD02, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		String_t* L_2 = Application_get_persistentDataPath_m82E34156D8BD0A55CAC258CDFE8317FAD6945F5B(/*hidden argument*/NULL);
		String_t* L_3 = V_0;
		String_t* L_4 = String_Concat_mF4626905368D6558695A823466A1AF65EADB9923(L_2, _stringLiteral42099B4AF021E53FD8FD4E056C2568D7C2E3FFA8, L_3, /*hidden argument*/NULL);
		V_1 = L_4;
		String_t* L_5 = V_1;
		String_t* L_6 = ___AzureAnchorID1;
		File_WriteAllText_m7BA355E5631C6A3E3D3378D6101EF65E72A45F0A(L_5, L_6, /*hidden argument*/NULL);
	}

IL_002e:
	try
	{ // begin try (depth: 1)
		RestClient_t9D31ABF964C6E6DACDA93F8E0317FB6E32D25D53 * L_7 = (RestClient_t9D31ABF964C6E6DACDA93F8E0317FB6E32D25D53 *)il2cpp_codegen_object_new(RestClient_t9D31ABF964C6E6DACDA93F8E0317FB6E32D25D53_il2cpp_TypeInfo_var);
		RestClient__ctor_mFA01D84FD1CAFBE626C670C31200CD3523A87D65(L_7, _stringLiteral9CDF1065724A36B065957F3A212C08A238C8F319, /*hidden argument*/NULL);
		RestRequest_t729C3BD2490C2DDC84A0F3F56FE665A1ED6B0F22 * L_8 = (RestRequest_t729C3BD2490C2DDC84A0F3F56FE665A1ED6B0F22 *)il2cpp_codegen_object_new(RestRequest_t729C3BD2490C2DDC84A0F3F56FE665A1ED6B0F22_il2cpp_TypeInfo_var);
		RestRequest__ctor_m12A8075F29E223072337AC57F436F12180497CEA(L_8, _stringLiteral6F50428FD228E2D0AA992292704EC5A8E6C4A463, 1, /*hidden argument*/NULL);
		NullCheck(L_8);
		RuntimeObject* L_9 = RestRequest_AddHeader_m8B48D873C9FCA229DB7492BF4B752553C5E58842(L_8, _stringLiteralBB54DB510A92908A5A4DF79FC1AD1EAE8DF50EC3, _stringLiteralCA9FD0B2414177B79AC2EA7AD76252E4EF6DD65C, /*hidden argument*/NULL);
		NullCheck(L_9);
		RuntimeObject* L_10 = InterfaceFuncInvoker2< RuntimeObject*, String_t*, String_t* >::Invoke(16 /* RestSharp.IRestRequest RestSharp.IRestRequest::AddHeader(System.String,System.String) */, IRestRequest_tA5BFF68FD5A6B7D4D8DD42AC2507A08077A5DDD8_il2cpp_TypeInfo_var, L_9, _stringLiteral77D12B97BA61FFCCB079E0DD2EF6809C1E957255, _stringLiteral12A22DD81CC700D0A382226B74CE386EC575A16A);
		V_2 = L_10;
		RuntimeObject* L_11 = V_2;
		String_t* L_12 = V_1;
		NullCheck(L_11);
		InterfaceFuncInvoker3< RuntimeObject*, String_t*, String_t*, String_t* >::Invoke(14 /* RestSharp.IRestRequest RestSharp.IRestRequest::AddFile(System.String,System.String,System.String) */, IRestRequest_tA5BFF68FD5A6B7D4D8DD42AC2507A08077A5DDD8_il2cpp_TypeInfo_var, L_11, _stringLiteral70C4D620C45C09DF2F02179370AFBF70B56C11A1, L_12, (String_t*)NULL);
		RuntimeObject* L_13 = V_2;
		int32_t L_14 = 1;
		RuntimeObject * L_15 = Box(Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var, &L_14);
		NullCheck(L_13);
		InterfaceFuncInvoker2< RuntimeObject*, String_t*, RuntimeObject * >::Invoke(15 /* RestSharp.IRestRequest RestSharp.IRestRequest::AddParameter(System.String,System.Object) */, IRestRequest_tA5BFF68FD5A6B7D4D8DD42AC2507A08077A5DDD8_il2cpp_TypeInfo_var, L_13, _stringLiteral8693E9163C692ECB6C54A2F933BCB6B0E33D898A, L_15);
		RuntimeObject* L_16 = V_2;
		NullCheck(L_7);
		RuntimeObject* L_17 = VirtFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(31 /* RestSharp.IRestResponse RestSharp.RestClient::Execute(RestSharp.IRestRequest) */, L_7, L_16);
		NullCheck(L_17);
		String_t* L_18 = InterfaceFuncInvoker0< String_t* >::Invoke(2 /* System.String RestSharp.IRestResponse::get_Content() */, IRestResponse_tF42BE849D1210C9084A28893F8D00F8D2A26563A_il2cpp_TypeInfo_var, L_17);
		NullCheck(L_18);
		VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_18);
		goto IL_00ad;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (Exception_t_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_0095;
		throw e;
	}

CATCH_0095:
	{ // begin catch(System.Exception)
		V_3 = ((Exception_t *)__exception_local);
		Exception_t * L_19 = V_3;
		NullCheck(L_19);
		String_t* L_20 = VirtFuncInvoker0< String_t* >::Invoke(5 /* System.String System.Exception::get_Message() */, L_19);
		String_t* L_21 = String_Format_m0ACDD8B34764E4040AED0B3EEB753567E4576BFA(_stringLiteral5A1C656971CB5881411962EEBE8AC466632BFA00, L_20, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_Log_m4B7C70BAFD477C6BDB59C88A0934F0B018D03708(L_21, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(__exception_local, NULL, ASASharing_ShareAnchor_m6640A75BF1A085825DB3A8F192C003F1DC0F0CDF_RuntimeMethod_var);
	} // end catch (depth: 1)

IL_00ad:
	{
		return;
	}
}
// System.Collections.IEnumerator ASASharingPlugin.ASASharing::GetSharedAzureAnchorCoroutine(System.String)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* ASASharing_GetSharedAzureAnchorCoroutine_mD90C6B56DDB60DC3A14A8B159E87E71321FA1519 (ASASharing_t4C210DEC4C2882F3A7980F6E7EADC735EB231397 * __this, String_t* ___sharingPin0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ASASharing_GetSharedAzureAnchorCoroutine_mD90C6B56DDB60DC3A14A8B159E87E71321FA1519_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CGetSharedAzureAnchorCoroutineU3Ed__2_tB6B8C40880A24708E646404771CFC482A9F68727 * L_0 = (U3CGetSharedAzureAnchorCoroutineU3Ed__2_tB6B8C40880A24708E646404771CFC482A9F68727 *)il2cpp_codegen_object_new(U3CGetSharedAzureAnchorCoroutineU3Ed__2_tB6B8C40880A24708E646404771CFC482A9F68727_il2cpp_TypeInfo_var);
		U3CGetSharedAzureAnchorCoroutineU3Ed__2__ctor_mE15CAEE652E0F9E8AC9963A87F05A369AD146E37(L_0, 0, /*hidden argument*/NULL);
		U3CGetSharedAzureAnchorCoroutineU3Ed__2_tB6B8C40880A24708E646404771CFC482A9F68727 * L_1 = L_0;
		NullCheck(L_1);
		L_1->set_U3CU3E4__this_2(__this);
		U3CGetSharedAzureAnchorCoroutineU3Ed__2_tB6B8C40880A24708E646404771CFC482A9F68727 * L_2 = L_1;
		String_t* L_3 = ___sharingPin0;
		NullCheck(L_2);
		L_2->set_sharingPin_3(L_3);
		return L_2;
	}
}
// System.Void ASASharingPlugin.ASASharing::.ctor()
extern "C" IL2CPP_METHOD_ATTR void ASASharing__ctor_mC348FA5C1CC232419A8D9964CEDF69E368FC9191 (ASASharing_t4C210DEC4C2882F3A7980F6E7EADC735EB231397 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void ASASharingPlugin.ASASharing_<GetSharedAzureAnchorCoroutine>d__2::.ctor(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void U3CGetSharedAzureAnchorCoroutineU3Ed__2__ctor_mE15CAEE652E0F9E8AC9963A87F05A369AD146E37 (U3CGetSharedAzureAnchorCoroutineU3Ed__2_tB6B8C40880A24708E646404771CFC482A9F68727 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void ASASharingPlugin.ASASharing_<GetSharedAzureAnchorCoroutine>d__2::System.IDisposable.Dispose()
extern "C" IL2CPP_METHOD_ATTR void U3CGetSharedAzureAnchorCoroutineU3Ed__2_System_IDisposable_Dispose_mDC3E09920B44A624AC8C4E2C275A89CFEADC853F (U3CGetSharedAzureAnchorCoroutineU3Ed__2_tB6B8C40880A24708E646404771CFC482A9F68727 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)((int32_t)-3))))
		{
			goto IL_0010;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((!(((uint32_t)L_2) == ((uint32_t)1))))
		{
			goto IL_001a;
		}
	}

IL_0010:
	{
	}

IL_0011:
	try
	{ // begin try (depth: 1)
		IL2CPP_LEAVE(0x1A, FINALLY_0013);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0013;
	}

FINALLY_0013:
	{ // begin finally (depth: 1)
		U3CGetSharedAzureAnchorCoroutineU3Ed__2_U3CU3Em__Finally1_mB5EDC6BB144D7CE63C6F499801C66E961E804E53(__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(19)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(19)
	{
		IL2CPP_JUMP_TBL(0x1A, IL_001a)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_001a:
	{
		return;
	}
}
// System.Boolean ASASharingPlugin.ASASharing_<GetSharedAzureAnchorCoroutine>d__2::MoveNext()
extern "C" IL2CPP_METHOD_ATTR bool U3CGetSharedAzureAnchorCoroutineU3Ed__2_MoveNext_m54FB019A5EBFCA6884A5D56F285FB444E404A5B8 (U3CGetSharedAzureAnchorCoroutineU3Ed__2_tB6B8C40880A24708E646404771CFC482A9F68727 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CGetSharedAzureAnchorCoroutineU3Ed__2_MoveNext_m54FB019A5EBFCA6884A5D56F285FB444E404A5B8_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	ASASharing_t4C210DEC4C2882F3A7980F6E7EADC735EB231397 * V_2 = NULL;
	String_t* V_3 = NULL;
	String_t* V_4 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 3);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);

IL_0000:
	try
	{ // begin try (depth: 1)
		{
			int32_t L_0 = __this->get_U3CU3E1__state_0();
			V_1 = L_0;
			ASASharing_t4C210DEC4C2882F3A7980F6E7EADC735EB231397 * L_1 = __this->get_U3CU3E4__this_2();
			V_2 = L_1;
			int32_t L_2 = V_1;
			if (!L_2)
			{
				goto IL_001c;
			}
		}

IL_0011:
		{
			int32_t L_3 = V_1;
			if ((((int32_t)L_3) == ((int32_t)1)))
			{
				goto IL_0091;
			}
		}

IL_0015:
		{
			V_0 = (bool)0;
			goto IL_0124;
		}

IL_001c:
		{
			__this->set_U3CU3E1__state_0((-1));
			IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
			Debug_Log_m4B7C70BAFD477C6BDB59C88A0934F0B018D03708(_stringLiteralA06D83986280D6BC40B002809E575012DC226EC9, /*hidden argument*/NULL);
			ASASharing_t4C210DEC4C2882F3A7980F6E7EADC735EB231397 * L_4 = V_2;
			NullCheck(L_4);
			L_4->set_DownloadedAzureAnchorID_0(_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
			String_t* L_5 = __this->get_sharingPin_3();
			NullCheck(L_5);
			String_t* L_6 = String_ToLower_m5287204D93C9DDC4DF84581ADD756D0FDE2BA5A8(L_5, /*hidden argument*/NULL);
			String_t* L_7 = String_Concat_mB78D0094592718DA6D5DB6C712A9C225631666BE(_stringLiteralA13C3C1E94DAB78F9725210E85E369AD737ACFC2, L_6, /*hidden argument*/NULL);
			V_3 = L_7;
			String_t* L_8 = V_3;
			String_t* L_9 = String_Concat_mB78D0094592718DA6D5DB6C712A9C225631666BE(_stringLiteral44D021A0E816944C5B66D0E45423DEC8129D1BB6, L_8, /*hidden argument*/NULL);
			Debug_Log_m4B7C70BAFD477C6BDB59C88A0934F0B018D03708(L_9, /*hidden argument*/NULL);
			String_t* L_10 = V_3;
			UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129 * L_11 = UnityWebRequest_Get_mF4E12AA47AAF25221AD738B434B0EA8D40659B18(L_10, /*hidden argument*/NULL);
			__this->set_U3CwwwU3E5__2_4(L_11);
			__this->set_U3CU3E1__state_0(((int32_t)-3));
			UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129 * L_12 = __this->get_U3CwwwU3E5__2_4();
			NullCheck(L_12);
			AsyncOperation_t304C51ABED8AE734CC8DDDFE13013D8D5A44641D * L_13 = UnityWebRequest_Send_mE2BC0213F05A8E6E8384AB4BB8BA75883BDD801F(L_12, /*hidden argument*/NULL);
			__this->set_U3CU3E2__current_1(L_13);
			__this->set_U3CU3E1__state_0(1);
			V_0 = (bool)1;
			goto IL_0124;
		}

IL_0091:
		{
			__this->set_U3CU3E1__state_0(((int32_t)-3));
			UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129 * L_14 = __this->get_U3CwwwU3E5__2_4();
			NullCheck(L_14);
			bool L_15 = UnityWebRequest_get_isNetworkError_m082AFE1A58A330AC4CBD179606B61CB39DD44588(L_14, /*hidden argument*/NULL);
			if (L_15)
			{
				goto IL_00b3;
			}
		}

IL_00a6:
		{
			UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129 * L_16 = __this->get_U3CwwwU3E5__2_4();
			NullCheck(L_16);
			bool L_17 = UnityWebRequest_get_isHttpError_m8F636B70C239EC848FACC83189DE0C22CADEC1C3(L_16, /*hidden argument*/NULL);
			if (!L_17)
			{
				goto IL_00c5;
			}
		}

IL_00b3:
		{
			UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129 * L_18 = __this->get_U3CwwwU3E5__2_4();
			NullCheck(L_18);
			String_t* L_19 = UnityWebRequest_get_error_mC79FE2460B3F30B8F9E5385BD7D2B4C5B295D7CC(L_18, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
			Debug_Log_m4B7C70BAFD477C6BDB59C88A0934F0B018D03708(L_19, /*hidden argument*/NULL);
			goto IL_010c;
		}

IL_00c5:
		{
			String_t* L_20 = Application_get_persistentDataPath_m82E34156D8BD0A55CAC258CDFE8317FAD6945F5B(/*hidden argument*/NULL);
			UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129 * L_21 = __this->get_U3CwwwU3E5__2_4();
			NullCheck(L_21);
			DownloadHandler_t4A7802ADC97024B469C87FA454B6973951980EE9 * L_22 = UnityWebRequest_get_downloadHandler_m83044026479E6B4B2739DCE9EEA8A0FAE7D9AF41(L_21, /*hidden argument*/NULL);
			NullCheck(L_22);
			String_t* L_23 = DownloadHandler_get_text_m1D707E375899B4F4F0434B79AB8D57ADFE5424FF(L_22, /*hidden argument*/NULL);
			V_4 = L_23;
			String_t* L_24 = __this->get_sharingPin_3();
			String_t* L_25 = String_Concat_mF4626905368D6558695A823466A1AF65EADB9923(L_20, _stringLiteral03A996868D049E00C83030322D6C66E344D74566, L_24, /*hidden argument*/NULL);
			String_t* L_26 = V_4;
			File_WriteAllText_m7BA355E5631C6A3E3D3378D6101EF65E72A45F0A(L_25, L_26, /*hidden argument*/NULL);
			String_t* L_27 = V_4;
			String_t* L_28 = String_Concat_mB78D0094592718DA6D5DB6C712A9C225631666BE(_stringLiteral69EBE76DF9E51D756FC20EDD01F67B7D7A28B7AA, L_27, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
			Debug_Log_m4B7C70BAFD477C6BDB59C88A0934F0B018D03708(L_28, /*hidden argument*/NULL);
			ASASharing_t4C210DEC4C2882F3A7980F6E7EADC735EB231397 * L_29 = V_2;
			String_t* L_30 = V_4;
			NullCheck(L_29);
			L_29->set_DownloadedAzureAnchorID_0(L_30);
		}

IL_010c:
		{
			U3CGetSharedAzureAnchorCoroutineU3Ed__2_U3CU3Em__Finally1_mB5EDC6BB144D7CE63C6F499801C66E961E804E53(__this, /*hidden argument*/NULL);
			__this->set_U3CwwwU3E5__2_4((UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129 *)NULL);
			V_0 = (bool)0;
			goto IL_0124;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FAULT_011d;
	}

FAULT_011d:
	{ // begin fault (depth: 1)
		U3CGetSharedAzureAnchorCoroutineU3Ed__2_System_IDisposable_Dispose_mDC3E09920B44A624AC8C4E2C275A89CFEADC853F(__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(285)
	} // end fault
	IL2CPP_CLEANUP(285)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0124:
	{
		bool L_31 = V_0;
		return L_31;
	}
}
// System.Void ASASharingPlugin.ASASharing_<GetSharedAzureAnchorCoroutine>d__2::<>m__Finally1()
extern "C" IL2CPP_METHOD_ATTR void U3CGetSharedAzureAnchorCoroutineU3Ed__2_U3CU3Em__Finally1_mB5EDC6BB144D7CE63C6F499801C66E961E804E53 (U3CGetSharedAzureAnchorCoroutineU3Ed__2_tB6B8C40880A24708E646404771CFC482A9F68727 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CGetSharedAzureAnchorCoroutineU3Ed__2_U3CU3Em__Finally1_mB5EDC6BB144D7CE63C6F499801C66E961E804E53_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->set_U3CU3E1__state_0((-1));
		UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129 * L_0 = __this->get_U3CwwwU3E5__2_4();
		if (!L_0)
		{
			goto IL_001a;
		}
	}
	{
		UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129 * L_1 = __this->get_U3CwwwU3E5__2_4();
		NullCheck(L_1);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t7218B22548186B208D65EA5B7870503810A2D15A_il2cpp_TypeInfo_var, L_1);
	}

IL_001a:
	{
		return;
	}
}
// System.Object ASASharingPlugin.ASASharing_<GetSharedAzureAnchorCoroutine>d__2::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * U3CGetSharedAzureAnchorCoroutineU3Ed__2_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m629E2832D5E7A3BA8C394ACC7FCA3C8A65AFAED9 (U3CGetSharedAzureAnchorCoroutineU3Ed__2_tB6B8C40880A24708E646404771CFC482A9F68727 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void ASASharingPlugin.ASASharing_<GetSharedAzureAnchorCoroutine>d__2::System.Collections.IEnumerator.Reset()
extern "C" IL2CPP_METHOD_ATTR void U3CGetSharedAzureAnchorCoroutineU3Ed__2_System_Collections_IEnumerator_Reset_m86DF3B0EEFEB5370B11F6D9C0029E68FCFEA3723 (U3CGetSharedAzureAnchorCoroutineU3Ed__2_tB6B8C40880A24708E646404771CFC482A9F68727 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CGetSharedAzureAnchorCoroutineU3Ed__2_System_Collections_IEnumerator_Reset_m86DF3B0EEFEB5370B11F6D9C0029E68FCFEA3723_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010 * L_0 = (NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010 *)il2cpp_codegen_object_new(NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_mA121DE1CAC8F25277DEB489DC7771209D91CAE33(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, NULL, U3CGetSharedAzureAnchorCoroutineU3Ed__2_System_Collections_IEnumerator_Reset_m86DF3B0EEFEB5370B11F6D9C0029E68FCFEA3723_RuntimeMethod_var);
	}
}
// System.Object ASASharingPlugin.ASASharing_<GetSharedAzureAnchorCoroutine>d__2::System.Collections.IEnumerator.get_Current()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * U3CGetSharedAzureAnchorCoroutineU3Ed__2_System_Collections_IEnumerator_get_Current_mC39F9C27B2BA71220F92017603B2DE5B7D622E70 (U3CGetSharedAzureAnchorCoroutineU3Ed__2_tB6B8C40880A24708E646404771CFC482A9F68727 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
