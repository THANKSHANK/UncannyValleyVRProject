#include "pch-cpp.hpp"





template <typename T1>
struct VirtualActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R>
struct VirtualFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct InterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1, typename T2>
struct InterfaceActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
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
template <typename R, typename T1>
struct InterfaceFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};

struct Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C;
struct Action_1_t88CC03E8C305DA991BBBCEBE79519B58D52F577F;
struct Action_1_t10D7C827ADC73ED438E0CA8F04465BA6F2BAED7D;
struct IEnumerable_1_tF95C9E01A913DD50575531C8305932628663D9E9;
struct IEnumerable_1_t5C0B7461C42765B8F783474FDE7D0949645E64A6;
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
struct List_1_tA7666C6690CE2AEE97571615AD3AFCE2BB020597;
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
struct Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D;
struct RenderBufferU5BU5D_t243AD088CC8449166000DC2F429023524FD855F5;
struct RenderBufferLoadActionU5BU5D_t49A752C09896D99A1F5734A4AFDE4588AB2883BA;
struct RenderBufferStoreActionU5BU5D_tFEA8F5DD460573EA9F35FBEC5727D1804C5DCBF5;
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
struct XRDisplaySubsystemU5BU5D_t741124D80DCCCF62F2AF47431354B7387672F264;
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA;
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184;
struct CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B;
struct DepthProvider_tAB92D399B17711BD5948E6DDEDEA2647B42CBD77;
struct DepthProviderNotSupported_t921A3A2D107552501A0108FA3CCAF5843CBE8E46;
struct EnvironmentDepthManager_t66B25129AB8791DEB056A5AFAB14151358AAA631;
struct HDROutputSettings_t6A590B1AA325DD7389D71F502B762BF1592A9F62;
struct IDepthProvider_t82F515402325FE9773830CB67FB735BEABEEBBDF;
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
struct ILogger_tD1F573C6DC829FBA987FA1EBA0A5FA64E0C2BC42;
struct ISubsystemDescriptor_tEF29944D579CC7D70F52CB883150735991D54E6E;
struct IntegratedSubsystem_t990160A89854D87C0836DC589B720231C02D4CE3;
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3;
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A;
struct OVRCameraRig_t7FC2BB0D30DED2B7F0C8914AF2B66E9F4CF891A9;
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
struct RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27;
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
struct Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692;
struct String_t;
struct Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700;
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1;
struct UnitySourceGeneratedAssemblyMonoScriptTypes_v1_t1ACF46C8B2EF733FA0223A82328A383F4AABE8DA;
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
struct XRDisplaySubsystem_t4B00B0BF1894A039ACFA8DDC2C2EB9301118C1F1;

IL2CPP_EXTERN_C RuntimeClass* ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DepthProvider_tAB92D399B17711BD5948E6DDEDEA2647B42CBD77_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EnvironmentDepthManager_t66B25129AB8791DEB056A5AFAB14151358AAA631_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EnvironmentDepthUtils_tF0B57ABF5A71BC39C607681F1611BD437291128A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Graphics_t99CD970FFEA58171C70F54DF0C06D315BD452F2C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDepthProvider_t82F515402325FE9773830CB67FB735BEABEEBBDF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ILogger_tD1F573C6DC829FBA987FA1EBA0A5FA64E0C2BC42_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tA7666C6690CE2AEE97571615AD3AFCE2BB020597_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* OcclusionShadersMode_t5E05D042A31C02AED3DAE94D664CB5FB98B24A9C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RenderBufferLoadActionU5BU5D_t49A752C09896D99A1F5734A4AFDE4588AB2883BA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RenderBufferStoreActionU5BU5D_tFEA8F5DD460573EA9F35FBEC5727D1804C5DCBF5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RenderBufferU5BU5D_t243AD088CC8449166000DC2F429023524FD855F5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SubsystemManager_t9A7261E4D0B53B996F04B8707D8E1C33AB65E824_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_tDEA4DBF25ED3A57BEF93477E21812F662B700F3C____0D012443DC42B6466C51BBF80E84C3534C4AE4AAF1117C5FE62B9246E40D618D_FieldInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_tDEA4DBF25ED3A57BEF93477E21812F662B700F3C____5D27C2DFCAAFDFCE15FB82D88C6B253892F9F55928DA69D9B76D672B6AB4333E_FieldInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral06E02AAD278C470CA00827078CCD2F85C887CBD0;
IL2CPP_EXTERN_C String_t* _stringLiteral1DBA9D771CF21BD0FF172F0B4156503587FD5B7F;
IL2CPP_EXTERN_C String_t* _stringLiteral204F544BAFC4863B359F592A20972AD51732AE93;
IL2CPP_EXTERN_C String_t* _stringLiteral5F224B2AEF4A637D33372AD5CB608CD3CE8013AF;
IL2CPP_EXTERN_C String_t* _stringLiteral9FC59D8986B846D2BF95AF308D4A1BDF1803347C;
IL2CPP_EXTERN_C String_t* _stringLiteralA5E8D505AB96888EB0230DF995112A81F0791818;
IL2CPP_EXTERN_C String_t* _stringLiteralB29005781C891F9AA15F6FF036E1C296DF7D185D;
IL2CPP_EXTERN_C String_t* _stringLiteralC92F425FF6D1AA7661F3BC4F16E65014AB18038A;
IL2CPP_EXTERN_C String_t* _stringLiteralD4F5A00EE4168A8128DDBCD07A1218D7BFEA7A37;
IL2CPP_EXTERN_C String_t* _stringLiteralDE36140A6B900DD92158BBA056C0056D6031D25D;
IL2CPP_EXTERN_C String_t* _stringLiteralF5C8165CA10C005224204E77DF9D14B920A64297;
IL2CPP_EXTERN_C String_t* _stringLiteralF811479F06651C8AFA71880841D3E3465A1FE575;
IL2CPP_EXTERN_C const RuntimeMethod* DepthProviderNotSupported_GetDepthTextureId_m25108A6D6C920FFFC2E5A048B39CCB7DE076AC55_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DepthProviderNotSupported_GetFrameDesc_mDF51925532A90D3B0D8FA36B190EDF11A69006BA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_Single_TisXRDisplaySubsystem_t4B00B0BF1894A039ACFA8DDC2C2EB9301118C1F1_mA37F49C846EFE2734EC2E7A4550E7E13824C4EF3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m86269E3BF7BFAEF2B25AF0E6E3A0BCA88770566F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_GetValueOrDefault_m1534AD85F2094EE7E4C958FBEE356468ED7A1B51_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1__ctor_m257B28AB68BEE9F7CB9F0FEA0143F06DE418FE80_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_get_HasValue_mDEB82F7445A31CA12FE47E887EAE322E7ABB1B54_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_FindObjectOfType_TisOVRCameraRig_t7FC2BB0D30DED2B7F0C8914AF2B66E9F4CF891A9_m1564DCD77DA806C8E84BE6808F00823EBCA88234_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SubsystemManager_GetInstances_TisXRDisplaySubsystem_t4B00B0BF1894A039ACFA8DDC2C2EB9301118C1F1_mCDFAF63EF2A2778CA3677E75360BC7961FCB3370_RuntimeMethod_var;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;
struct RenderBuffer_tBE7B342979EF2FA36E24C8A7F9242212F5B89551;

struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D;
struct RenderBufferU5BU5D_t243AD088CC8449166000DC2F429023524FD855F5;
struct RenderBufferLoadActionU5BU5D_t49A752C09896D99A1F5734A4AFDE4588AB2883BA;
struct RenderBufferStoreActionU5BU5D_tFEA8F5DD460573EA9F35FBEC5727D1804C5DCBF5;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
struct U3CModuleU3E_tC73739737D4E911DBA1D240C198942E5C147CBD1 
{
};
struct List_1_tA7666C6690CE2AEE97571615AD3AFCE2BB020597  : public RuntimeObject
{
	XRDisplaySubsystemU5BU5D_t741124D80DCCCF62F2AF47431354B7387672F264* ____items;
	int32_t ____size;
	int32_t ____version;
	RuntimeObject* ____syncRoot;
};
struct U3CPrivateImplementationDetailsU3E_tDEA4DBF25ED3A57BEF93477E21812F662B700F3C  : public RuntimeObject
{
};
struct Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F  : public RuntimeObject
{
};
struct DepthProvider_tAB92D399B17711BD5948E6DDEDEA2647B42CBD77  : public RuntimeObject
{
};
struct DepthProviderNotSupported_t921A3A2D107552501A0108FA3CCAF5843CBE8E46  : public RuntimeObject
{
};
struct EnvironmentDepthUtils_tF0B57ABF5A71BC39C607681F1611BD437291128A  : public RuntimeObject
{
};
struct String_t  : public RuntimeObject
{
	int32_t ____stringLength;
	Il2CppChar ____firstChar;
};
struct UnitySourceGeneratedAssemblyMonoScriptTypes_v1_t1ACF46C8B2EF733FA0223A82328A383F4AABE8DA  : public RuntimeObject
{
};
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F  : public RuntimeObject
{
};
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_pinvoke
{
};
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_com
{
};
struct Nullable_1_tD043F01310E483091D0E9A5526C3425F13EF2099 
{
	bool ___hasValue;
	uint32_t ___value;
};
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	bool ___m_value;
};
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3 
{
	uint8_t ___m_value;
};
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2  : public ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F
{
};
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_pinvoke
{
};
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_com
{
};
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	int32_t ___m_value;
};
struct IntPtr_t 
{
	void* ___m_value;
};
struct Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 
{
	float ___m00;
	float ___m10;
	float ___m20;
	float ___m30;
	float ___m01;
	float ___m11;
	float ___m21;
	float ___m31;
	float ___m02;
	float ___m12;
	float ___m22;
	float ___m32;
	float ___m03;
	float ___m13;
	float ___m23;
	float ___m33;
};
struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 
{
	float ___x;
	float ___y;
	float ___z;
	float ___w;
};
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	float ___m_value;
};
struct UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B 
{
	uint32_t ___m_value;
};
struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 
{
	float ___x;
	float ___y;
	float ___z;
};
struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 
{
	float ___x;
	float ___y;
	float ___z;
	float ___w;
};
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915 
{
	union
	{
		struct
		{
		};
		uint8_t Void_t4861ACF8F4594C3437BB48B6E56783494B843915__padding[1];
	};
};
#pragma pack(push, tp, 1)
struct __StaticArrayInitTypeSizeU3D290_t3F0E55955034DA993CA30A29A7184E1F09830953 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D290_t3F0E55955034DA993CA30A29A7184E1F09830953__padding[290];
	};
};
#pragma pack(pop, tp)
#pragma pack(push, tp, 1)
struct __StaticArrayInitTypeSizeU3D294_tCA36ADAEA2B1F88B28FD4C2C6A84B6DBCCD15F21 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D294_tCA36ADAEA2B1F88B28FD4C2C6A84B6DBCCD15F21__padding[294];
	};
};
#pragma pack(pop, tp)
struct MonoScriptData_t3416D25F961CB51863D291A045234B8C52193BA3 
{
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___FilePathsData;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___TypesData;
	int32_t ___TotalTypes;
	int32_t ___TotalFiles;
	bool ___IsEditorOnly;
};
struct MonoScriptData_t3416D25F961CB51863D291A045234B8C52193BA3_marshaled_pinvoke
{
	Il2CppSafeArray* ___FilePathsData;
	Il2CppSafeArray* ___TypesData;
	int32_t ___TotalTypes;
	int32_t ___TotalFiles;
	int32_t ___IsEditorOnly;
};
struct MonoScriptData_t3416D25F961CB51863D291A045234B8C52193BA3_marshaled_com
{
	Il2CppSafeArray* ___FilePathsData;
	Il2CppSafeArray* ___TypesData;
	int32_t ___TotalTypes;
	int32_t ___TotalFiles;
	int32_t ___IsEditorOnly;
};
struct EnvironmentDepthCreateParams_tDC6F7E5ABE8081C06DAE48548AA6CA7601824CA0 
{
	bool ___removeHands;
};
struct EnvironmentDepthCreateParams_tDC6F7E5ABE8081C06DAE48548AA6CA7601824CA0_marshaled_pinvoke
{
	int32_t ___removeHands;
};
struct EnvironmentDepthCreateParams_tDC6F7E5ABE8081C06DAE48548AA6CA7601824CA0_marshaled_com
{
	int32_t ___removeHands;
};
struct CubemapFace_t300D6E2CD7DF60D44AA28338748B607677ED1D1B 
{
	int32_t ___value__;
};
struct DepthFrameDesc_t8E03631D7F12D148E09C208091FBCA5C692E2DB2 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___createPoseLocation;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___createPoseRotation;
	float ___fovLeftAngle;
	float ___fovRightAngle;
	float ___fovTopAngle;
	float ___fovDownAngle;
	float ___nearZ;
	float ___farZ;
};
struct Exception_t  : public RuntimeObject
{
	String_t* ____className;
	String_t* ____message;
	RuntimeObject* ____data;
	Exception_t* ____innerException;
	String_t* ____helpURL;
	RuntimeObject* ____stackTrace;
	String_t* ____stackTraceString;
	String_t* ____remoteStackTraceString;
	int32_t ____remoteStackIndex;
	RuntimeObject* ____dynamicMethods;
	int32_t ____HResult;
	String_t* ____source;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces;
	IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* ___native_trace_ips;
	int32_t ___caught_in_unmanaged;
};
struct Exception_t_marshaled_pinvoke
{
	char* ____className;
	char* ____message;
	RuntimeObject* ____data;
	Exception_t_marshaled_pinvoke* ____innerException;
	char* ____helpURL;
	Il2CppIUnknown* ____stackTrace;
	char* ____stackTraceString;
	char* ____remoteStackTraceString;
	int32_t ____remoteStackIndex;
	Il2CppIUnknown* ____dynamicMethods;
	int32_t ____HResult;
	char* ____source;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces;
	Il2CppSafeArray* ___native_trace_ips;
	int32_t ___caught_in_unmanaged;
};
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className;
	Il2CppChar* ____message;
	RuntimeObject* ____data;
	Exception_t_marshaled_com* ____innerException;
	Il2CppChar* ____helpURL;
	Il2CppIUnknown* ____stackTrace;
	Il2CppChar* ____stackTraceString;
	Il2CppChar* ____remoteStackTraceString;
	int32_t ____remoteStackIndex;
	Il2CppIUnknown* ____dynamicMethods;
	int32_t ____HResult;
	Il2CppChar* ____source;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces;
	Il2CppSafeArray* ___native_trace_ips;
	int32_t ___caught_in_unmanaged;
};
struct GraphicsFormat_tC3D1898F3F3F1F57256C7F3FFD6BA9A37AE7E713 
{
	int32_t ___value__;
};
struct IntegratedSubsystem_t990160A89854D87C0836DC589B720231C02D4CE3  : public RuntimeObject
{
	intptr_t ___m_Ptr;
	RuntimeObject* ___m_SubsystemDescriptor;
};
struct IntegratedSubsystem_t990160A89854D87C0836DC589B720231C02D4CE3_marshaled_pinvoke
{
	intptr_t ___m_Ptr;
	RuntimeObject* ___m_SubsystemDescriptor;
};
struct IntegratedSubsystem_t990160A89854D87C0836DC589B720231C02D4CE3_marshaled_com
{
	intptr_t ___m_Ptr;
	RuntimeObject* ___m_SubsystemDescriptor;
};
struct LogType_t9CC0F1B620DFBF3A01E8C2D2316A850D745EF331 
{
	int32_t ___value__;
};
struct MeshTopology_t815FF5CF04D62195A23E2DF8A5C0A071F11FBCBF 
{
	int32_t ___value__;
};
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C  : public RuntimeObject
{
	intptr_t ___m_CachedPtr;
};
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr;
};
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
	intptr_t ___m_CachedPtr;
};
struct OcclusionShadersMode_t5E05D042A31C02AED3DAE94D664CB5FB98B24A9C 
{
	int32_t ___value__;
};
struct RenderBuffer_tBE7B342979EF2FA36E24C8A7F9242212F5B89551 
{
	int32_t ___m_RenderTextureInstanceID;
	intptr_t ___m_BufferPtr;
};
struct RenderBufferLoadAction_t3333B2CABABAC39DA0CDC25602E5E4FD93C2CB0E 
{
	int32_t ___value__;
};
struct RenderBufferStoreAction_t87683F22C09634E24A574F21F42037C953A2C8B7 
{
	int32_t ___value__;
};
struct RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 
{
	intptr_t ___value;
};
struct TextureDimension_t8D7148B9168256EE1E9AF91378ABA148888CE642 
{
	int32_t ___value__;
};
struct EnvironmentDepthFrameDesc_t54EAD2C9E064A249F726E96306B9615EA364918C 
{
	bool ___isValid;
	double ___createTime;
	double ___predictedDisplayTime;
	int32_t ___swapchainIndex;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___createPoseLocation;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___createPoseRotation;
	float ___fovLeftAngle;
	float ___fovRightAngle;
	float ___fovTopAngle;
	float ___fovDownAngle;
	float ___nearZ;
	float ___farZ;
	float ___minDepth;
	float ___maxDepth;
};
struct EnvironmentDepthFrameDesc_t54EAD2C9E064A249F726E96306B9615EA364918C_marshaled_pinvoke
{
	int32_t ___isValid;
	double ___createTime;
	double ___predictedDisplayTime;
	int32_t ___swapchainIndex;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___createPoseLocation;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___createPoseRotation;
	float ___fovLeftAngle;
	float ___fovRightAngle;
	float ___fovTopAngle;
	float ___fovDownAngle;
	float ___nearZ;
	float ___farZ;
	float ___minDepth;
	float ___maxDepth;
};
struct EnvironmentDepthFrameDesc_t54EAD2C9E064A249F726E96306B9615EA364918C_marshaled_com
{
	int32_t ___isValid;
	double ___createTime;
	double ___predictedDisplayTime;
	int32_t ___swapchainIndex;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___createPoseLocation;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___createPoseRotation;
	float ___fovLeftAngle;
	float ___fovRightAngle;
	float ___fovTopAngle;
	float ___fovDownAngle;
	float ___nearZ;
	float ___farZ;
	float ___minDepth;
	float ___maxDepth;
};
struct IntegratedSubsystem_1_t8312865F01EEA1EDE4B24A973E47ADD526616848  : public IntegratedSubsystem_t990160A89854D87C0836DC589B720231C02D4CE3
{
};
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};
struct RenderTargetSetup_tD71CE5727C526D33A6784394E0F9D9E2AB8CA86F 
{
	RenderBufferU5BU5D_t243AD088CC8449166000DC2F429023524FD855F5* ___color;
	RenderBuffer_tBE7B342979EF2FA36E24C8A7F9242212F5B89551 ___depth;
	int32_t ___mipLevel;
	int32_t ___cubemapFace;
	int32_t ___depthSlice;
	RenderBufferLoadActionU5BU5D_t49A752C09896D99A1F5734A4AFDE4588AB2883BA* ___colorLoad;
	RenderBufferStoreActionU5BU5D_tFEA8F5DD460573EA9F35FBEC5727D1804C5DCBF5* ___colorStore;
	int32_t ___depthLoad;
	int32_t ___depthStore;
};
struct RenderTargetSetup_tD71CE5727C526D33A6784394E0F9D9E2AB8CA86F_marshaled_pinvoke
{
	RenderBuffer_tBE7B342979EF2FA36E24C8A7F9242212F5B89551* ___color;
	RenderBuffer_tBE7B342979EF2FA36E24C8A7F9242212F5B89551 ___depth;
	int32_t ___mipLevel;
	int32_t ___cubemapFace;
	int32_t ___depthSlice;
	int32_t* ___colorLoad;
	int32_t* ___colorStore;
	int32_t ___depthLoad;
	int32_t ___depthStore;
};
struct RenderTargetSetup_tD71CE5727C526D33A6784394E0F9D9E2AB8CA86F_marshaled_com
{
	RenderBuffer_tBE7B342979EF2FA36E24C8A7F9242212F5B89551* ___color;
	RenderBuffer_tBE7B342979EF2FA36E24C8A7F9242212F5B89551 ___depth;
	int32_t ___mipLevel;
	int32_t ___cubemapFace;
	int32_t ___depthSlice;
	int32_t* ___colorLoad;
	int32_t* ___colorStore;
	int32_t ___depthLoad;
	int32_t ___depthStore;
};
struct Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};
struct Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};
struct RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27  : public Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700
{
};
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};
struct XRDisplaySubsystem_t4B00B0BF1894A039ACFA8DDC2C2EB9301118C1F1  : public IntegratedSubsystem_1_t8312865F01EEA1EDE4B24A973E47ADD526616848
{
	Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* ___displayFocusChanged;
	HDROutputSettings_t6A590B1AA325DD7389D71F502B762BF1592A9F62* ___m_HDROutputSettings;
};
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
	CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B* ___m_CancellationTokenSource;
};
struct EnvironmentDepthManager_t66B25129AB8791DEB056A5AFAB14151358AAA631  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	int32_t ____occlusionShadersMode;
	bool ____removeHands;
	OVRCameraRig_t7FC2BB0D30DED2B7F0C8914AF2B66E9F4CF891A9* ____cameraRig;
	bool ____hasPermission;
	Nullable_1_tD043F01310E483091D0E9A5526C3425F13EF2099 ____prevTextureId;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ____preprocessMaterial;
	RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* ____preprocessTexture;
	RenderTargetSetup_tD71CE5727C526D33A6784394E0F9D9E2AB8CA86F ____preprocessRenderTargetSetup;
	bool ___U3CIsDepthAvailableU3Ek__BackingField;
	Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D* ____reprojectionMatrices;
	XRDisplaySubsystem_t4B00B0BF1894A039ACFA8DDC2C2EB9301118C1F1* ____xrDisplay;
};
struct OVRCameraRig_t7FC2BB0D30DED2B7F0C8914AF2B66E9F4CF891A9  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___U3CtrackingSpaceU3Ek__BackingField;
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___U3CleftEyeAnchorU3Ek__BackingField;
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___U3CcenterEyeAnchorU3Ek__BackingField;
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___U3CrightEyeAnchorU3Ek__BackingField;
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___U3CleftHandAnchorU3Ek__BackingField;
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___U3CrightHandAnchorU3Ek__BackingField;
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___U3CleftHandAnchorDetachedU3Ek__BackingField;
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___U3CrightHandAnchorDetachedU3Ek__BackingField;
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___U3CleftControllerInHandAnchorU3Ek__BackingField;
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___U3CleftHandOnControllerAnchorU3Ek__BackingField;
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___U3CrightControllerInHandAnchorU3Ek__BackingField;
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___U3CrightHandOnControllerAnchorU3Ek__BackingField;
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___U3CleftControllerAnchorU3Ek__BackingField;
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___U3CrightControllerAnchorU3Ek__BackingField;
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___U3CtrackerAnchorU3Ek__BackingField;
	Action_1_t88CC03E8C305DA991BBBCEBE79519B58D52F577F* ___UpdatedAnchors;
	Action_1_t10D7C827ADC73ED438E0CA8F04465BA6F2BAED7D* ___TrackingSpaceChanged;
	bool ___usePerEyeCameras;
	bool ___useFixedUpdateForTracking;
	bool ___disableEyeAnchorCameras;
	bool ____skipUpdate;
	String_t* ___trackingSpaceName;
	String_t* ___trackerAnchorName;
	String_t* ___leftEyeAnchorName;
	String_t* ___centerEyeAnchorName;
	String_t* ___rightEyeAnchorName;
	String_t* ___leftHandAnchorName;
	String_t* ___rightHandAnchorName;
	String_t* ___leftControllerAnchorName;
	String_t* ___rightControllerAnchorName;
	String_t* ___leftHandAnchorDetachedName;
	String_t* ___rightHandAnchorDetachedName;
	String_t* ___leftControllerInHandAnchorName;
	String_t* ___leftHandOnControllerAnchorName;
	String_t* ___rightControllerInHandAnchorName;
	String_t* ___rightHandOnControllerAnchorName;
	Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ____centerEyeCamera;
	Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ____leftEyeCamera;
	Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ____rightEyeCamera;
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ____previousTrackingSpaceTransform;
};
struct List_1_tA7666C6690CE2AEE97571615AD3AFCE2BB020597_StaticFields
{
	XRDisplaySubsystemU5BU5D_t741124D80DCCCF62F2AF47431354B7387672F264* ___s_emptyArray;
};
struct U3CPrivateImplementationDetailsU3E_tDEA4DBF25ED3A57BEF93477E21812F662B700F3C_StaticFields
{
	__StaticArrayInitTypeSizeU3D294_tCA36ADAEA2B1F88B28FD4C2C6A84B6DBCCD15F21 ___0D012443DC42B6466C51BBF80E84C3534C4AE4AAF1117C5FE62B9246E40D618D;
	__StaticArrayInitTypeSizeU3D290_t3F0E55955034DA993CA30A29A7184E1F09830953 ___5D27C2DFCAAFDFCE15FB82D88C6B253892F9F55928DA69D9B76D672B6AB4333E;
};
struct Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_StaticFields
{
	RuntimeObject* ___s_DefaultLogger;
	RuntimeObject* ___s_Logger;
};
struct EnvironmentDepthUtils_tF0B57ABF5A71BC39C607681F1611BD437291128A_StaticFields
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ____scalingVector3;
};
struct String_t_StaticFields
{
	String_t* ___Empty;
};
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	String_t* ___TrueString;
	String_t* ___FalseString;
};
struct Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_StaticFields
{
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___zeroMatrix;
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___identityMatrix;
};
struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_StaticFields
{
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___identityQuaternion;
};
struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___zeroVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___oneVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___upVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___downVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___leftVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rightVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___forwardVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___backVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___positiveInfinityVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___negativeInfinityVector;
};
struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_StaticFields
{
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___zeroVector;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___oneVector;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___positiveInfinityVector;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___negativeInfinityVector;
};
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticFields
{
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject;
};
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3_StaticFields
{
	int32_t ___k_ColorId;
	int32_t ___k_MainTexId;
};
struct Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700_StaticFields
{
	int32_t ___GenerateAllMips;
};
struct EnvironmentDepthManager_t66B25129AB8791DEB056A5AFAB14151358AAA631_StaticFields
{
	int32_t ___DepthTextureID;
	int32_t ___ReprojectionMatricesID;
	int32_t ___ZBufferParamsID;
	int32_t ___PreprocessedEnvironmentDepthTexture;
	RuntimeObject* ____provider;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031  : public RuntimeArray
{
	ALIGN_FIELD (8) uint8_t m_Items[1];

	inline uint8_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline uint8_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, uint8_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline uint8_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline uint8_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, uint8_t value)
	{
		m_Items[index] = value;
	}
};
struct Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D  : public RuntimeArray
{
	ALIGN_FIELD (8) Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 m_Items[1];

	inline Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 value)
	{
		m_Items[index] = value;
	}
};
struct RenderBufferU5BU5D_t243AD088CC8449166000DC2F429023524FD855F5  : public RuntimeArray
{
	ALIGN_FIELD (8) RenderBuffer_tBE7B342979EF2FA36E24C8A7F9242212F5B89551 m_Items[1];

	inline RenderBuffer_tBE7B342979EF2FA36E24C8A7F9242212F5B89551 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RenderBuffer_tBE7B342979EF2FA36E24C8A7F9242212F5B89551* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RenderBuffer_tBE7B342979EF2FA36E24C8A7F9242212F5B89551 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline RenderBuffer_tBE7B342979EF2FA36E24C8A7F9242212F5B89551 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RenderBuffer_tBE7B342979EF2FA36E24C8A7F9242212F5B89551* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RenderBuffer_tBE7B342979EF2FA36E24C8A7F9242212F5B89551 value)
	{
		m_Items[index] = value;
	}
};
struct RenderBufferLoadActionU5BU5D_t49A752C09896D99A1F5734A4AFDE4588AB2883BA  : public RuntimeArray
{
	ALIGN_FIELD (8) int32_t m_Items[1];

	inline int32_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int32_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int32_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int32_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int32_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int32_t value)
	{
		m_Items[index] = value;
	}
};
struct RenderBufferStoreActionU5BU5D_tFEA8F5DD460573EA9F35FBEC5727D1804C5DCBF5  : public RuntimeArray
{
	ALIGN_FIELD (8) int32_t m_Items[1];

	inline int32_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int32_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int32_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int32_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int32_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int32_t value)
	{
		m_Items[index] = value;
	}
};


IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m76CBBC3E2F0583F5AD30CE592CEA1225C06A0428_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___0_capacity, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SubsystemManager_GetInstances_TisRuntimeObject_mCBA01F889BE624767358AB5494CD2D7F1B2FB064_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* ___0_subsystems, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enumerable_Single_TisRuntimeObject_m4966D6BB67940E1EE80ADA3CC60C81D03436C62F_gshared (RuntimeObject* ___0_source, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Object_FindObjectOfType_TisRuntimeObject_m02DFBF011F3B59F777A5E521DB2A116DD496E968_gshared (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint32_t Nullable_1_GetValueOrDefault_m1534AD85F2094EE7E4C958FBEE356468ED7A1B51_gshared_inline (Nullable_1_tD043F01310E483091D0E9A5526C3425F13EF2099* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_mDEB82F7445A31CA12FE47E887EAE322E7ABB1B54_gshared_inline (Nullable_1_tD043F01310E483091D0E9A5526C3425F13EF2099* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Nullable_1__ctor_m257B28AB68BEE9F7CB9F0FEA0143F06DE418FE80_gshared (Nullable_1_tD043F01310E483091D0E9A5526C3425F13EF2099* __this, uint32_t ___0_value, const RuntimeMethod* method) ;

IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RuntimeHelpers_InitializeArray_m751372AA3F24FBF6DA9B9D687CBFA2DE436CAB9B (RuntimeArray* ___0_array, RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 ___1_fldHandle, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Utils_GetEnvironmentDepthSupported_m38CA4657EF6046185F2EE6E32A9737EC476F515A (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Utils_SetEnvironmentDepthHandRemoval_m74A0B2D0F70133331927F4C5D9EFC89DA84F5DAE (bool ___0_isEnabled, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Utils_GetEnvironmentDepthTextureId_m986C21DB57C620DB46A88A619565A08FDF5FEDAA (uint32_t* ___0_id, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Utils_SetupEnvironmentDepth_mF52FEC1788E8688BD34C1D8F3DC52B167DAFE0DA (EnvironmentDepthCreateParams_tDC6F7E5ABE8081C06DAE48548AA6CA7601824CA0 ___0_createParams, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Utils_SetEnvironmentDepthRendering_m257DC253F68E571F263D0F31E9F9C8E6B1A1070C (bool ___0_isEnabled, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Utils_ShutdownEnvironmentDepth_mCAFD47820798F457C57144C916090DB793C54EE1 (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EnvironmentDepthFrameDesc_t54EAD2C9E064A249F726E96306B9615EA364918C Utils_GetEnvironmentDepthFrameDesc_m8CE3DDE71EE471F4AF71009F6CDEB4813D6756FB (int32_t ___0_eye, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DepthProvider__ctor_mCB99FD4179FFC55D5742D76402C62DB9B99040CE (DepthProvider_tAB92D399B17711BD5948E6DDEDEA2647B42CBD77* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool EnvironmentDepthManager_get_IsDepthAvailable_m46C6D9DCA227381A3840DBE6B41083EFB8FD132C_inline (EnvironmentDepthManager_t66B25129AB8791DEB056A5AFAB14151358AAA631* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnvironmentDepthManager_SetOcclusionShaderKeywords_m5E0A4D11D6250C621884346B7E1A9CE72B443DD0 (int32_t ___0_mode, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Behaviour_get_enabled_mAAC9F15E9EBF552217A5AE2681589CC0BFA300C1 (Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool EnvironmentDepthManager_get_IsSupported_m7DA10536D673EAAB71E7A1B798270D959EF5D52B (const RuntimeMethod* method) ;
inline void List_1__ctor_m86269E3BF7BFAEF2B25AF0E6E3A0BCA88770566F (List_1_tA7666C6690CE2AEE97571615AD3AFCE2BB020597* __this, int32_t ___0_capacity, const RuntimeMethod* method)
{
	((  void (*) (List_1_tA7666C6690CE2AEE97571615AD3AFCE2BB020597*, int32_t, const RuntimeMethod*))List_1__ctor_m76CBBC3E2F0583F5AD30CE592CEA1225C06A0428_gshared)(__this, ___0_capacity, method);
}
inline void SubsystemManager_GetInstances_TisXRDisplaySubsystem_t4B00B0BF1894A039ACFA8DDC2C2EB9301118C1F1_mCDFAF63EF2A2778CA3677E75360BC7961FCB3370 (List_1_tA7666C6690CE2AEE97571615AD3AFCE2BB020597* ___0_subsystems, const RuntimeMethod* method)
{
	((  void (*) (List_1_tA7666C6690CE2AEE97571615AD3AFCE2BB020597*, const RuntimeMethod*))SubsystemManager_GetInstances_TisRuntimeObject_mCBA01F889BE624767358AB5494CD2D7F1B2FB064_gshared)(___0_subsystems, method);
}
inline XRDisplaySubsystem_t4B00B0BF1894A039ACFA8DDC2C2EB9301118C1F1* Enumerable_Single_TisXRDisplaySubsystem_t4B00B0BF1894A039ACFA8DDC2C2EB9301118C1F1_mA37F49C846EFE2734EC2E7A4550E7E13824C4EF3 (RuntimeObject* ___0_source, const RuntimeMethod* method)
{
	return ((  XRDisplaySubsystem_t4B00B0BF1894A039ACFA8DDC2C2EB9301118C1F1* (*) (RuntimeObject*, const RuntimeMethod*))Enumerable_Single_TisRuntimeObject_m4966D6BB67940E1EE80ADA3CC60C81D03436C62F_gshared)(___0_source, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* Shader_Find_m183AA54F78320212DDEC811592F98456898A41C5 (String_t* ___0_name, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material__ctor_m7FDF47105D66D19591BE505A0C42B0F90D88C9BF (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* ___0_shader, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2 (RuntimeObject* ___0_message, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A (Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA* __this, bool ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Permission_HasUserAuthorizedPermission_mF4C90E13124E28F6F672200E489CC25A9B645B8B (String_t* ___0_permission, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void EnvironmentDepthManager_set_IsDepthAvailable_m77ABBDA4D0A9BFF1247642CE22A018F22ECDA762_inline (EnvironmentDepthManager_t66B25129AB8791DEB056A5AFAB14151358AAA631* __this, bool ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Shader_SetGlobalTexture_m6DAEF0F184187427D0B7EE64827BD95A482CC09C (int32_t ___0_nameID, Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnvironmentDepthManager_ResetDepthTextureIfAvailable_m08C8274380CE0F0078AD7DBCA015C2E2807C1A32 (EnvironmentDepthManager_t66B25129AB8791DEB056A5AFAB14151358AAA631* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_x, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___1_y, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_obj, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnvironmentDepthManager_TryFetchDepthTexture_mB175985B0B413B25EBC9FE2A22FA9AB2B5AEAC0F (EnvironmentDepthManager_t66B25129AB8791DEB056A5AFAB14151358AAA631* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 EnvironmentDepthUtils_ComputeNdcToLinearDepthParameters_m4ED08BC1248832A75BCEE1B40D63F91EFA86F081 (float ___0_near, float ___1_far, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Shader_SetGlobalVector_mDC5F45B008D44A2C8BF6D450CFE8B58B847C8190 (int32_t ___0_nameID, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___1_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* OVRCameraRig_get_trackingSpace_m76339871C7804C1BD14283FBF3D91268D4D87550_inline (OVRCameraRig_t7FC2BB0D30DED2B7F0C8914AF2B66E9F4CF891A9* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 Transform_get_worldToLocalMatrix_mB633C122A01BCE8E51B10B8B8CB95F580750B3F1 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 EnvironmentDepthUtils_CalculateReprojection_m5E3435EBDF139CCC6D1E006FF797311DF8ADF2E3 (DepthFrameDesc_t8E03631D7F12D148E09C208091FBCA5C692E2DB2 ___0_frameDesc, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 Matrix4x4_op_Multiply_m75E91775655DCA8DFC8EDE0AB787285BB3935162 (Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___0_lhs, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___1_rhs, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Shader_SetGlobalMatrixArray_m0232FB4129D259C4C70254E2ED65A8F19CA5D2AB (int32_t ___0_nameID, Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D* ___1_values, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_x, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___1_y, const RuntimeMethod* method) ;
inline OVRCameraRig_t7FC2BB0D30DED2B7F0C8914AF2B66E9F4CF891A9* Object_FindObjectOfType_TisOVRCameraRig_t7FC2BB0D30DED2B7F0C8914AF2B66E9F4CF891A9_m1564DCD77DA806C8E84BE6808F00823EBCA88234 (const RuntimeMethod* method)
{
	return ((  OVRCameraRig_t7FC2BB0D30DED2B7F0C8914AF2B66E9F4CF891A9* (*) (const RuntimeMethod*))Object_FindObjectOfType_TisRuntimeObject_m02DFBF011F3B59F777A5E521DB2A116DD496E968_gshared)(method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Shader_DisableKeyword_m20FCB3643CD53D86E46DA431DA971E59D49DAF88 (String_t* ___0_keyword, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Shader_EnableKeyword_m2449D6D86962FA7F5D1ED2B165EF63B019CBCCF1 (String_t* ___0_keyword, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987 (String_t* ___0_format, RuntimeObject* ___1_arg0, RuntimeObject* ___2_arg1, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IntegratedSubsystem_get_running_m18AA0D7AD1CB593DC9EE5F3DC79643717509D6E8 (IntegratedSubsystem_t990160A89854D87C0836DC589B720231C02D4CE3* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* XRDisplaySubsystem_GetRenderTexture_mABB964AEAFF9B12DB279EDECAE85A52F6253E5CA (XRDisplaySubsystem_t4B00B0BF1894A039ACFA8DDC2C2EB9301118C1F1* __this, uint32_t ___0_unityXrRenderTextureId, const RuntimeMethod* method) ;
inline uint32_t Nullable_1_GetValueOrDefault_m1534AD85F2094EE7E4C958FBEE356468ED7A1B51_inline (Nullable_1_tD043F01310E483091D0E9A5526C3425F13EF2099* __this, const RuntimeMethod* method)
{
	return ((  uint32_t (*) (Nullable_1_tD043F01310E483091D0E9A5526C3425F13EF2099*, const RuntimeMethod*))Nullable_1_GetValueOrDefault_m1534AD85F2094EE7E4C958FBEE356468ED7A1B51_gshared_inline)(__this, method);
}
inline bool Nullable_1_get_HasValue_mDEB82F7445A31CA12FE47E887EAE322E7ABB1B54_inline (Nullable_1_tD043F01310E483091D0E9A5526C3425F13EF2099* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Nullable_1_tD043F01310E483091D0E9A5526C3425F13EF2099*, const RuntimeMethod*))Nullable_1_get_HasValue_mDEB82F7445A31CA12FE47E887EAE322E7ABB1B54_gshared_inline)(__this, method);
}
inline void Nullable_1__ctor_m257B28AB68BEE9F7CB9F0FEA0143F06DE418FE80 (Nullable_1_tD043F01310E483091D0E9A5526C3425F13EF2099* __this, uint32_t ___0_value, const RuntimeMethod* method)
{
	((  void (*) (Nullable_1_tD043F01310E483091D0E9A5526C3425F13EF2099*, uint32_t, const RuntimeMethod*))Nullable_1__ctor_m257B28AB68BEE9F7CB9F0FEA0143F06DE418FE80_gshared)(__this, ___0_value, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnvironmentDepthManager_CacheCameraRig_m6D78ED0C4C3C425E94D10381A114EDBF9B9B21D8 (EnvironmentDepthManager_t66B25129AB8791DEB056A5AFAB14151358AAA631* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnvironmentDepthManager_PreprocessDepthTexture_m3446EA7F2AB6FEEE92A73344D2EC6DE9FBB02253 (EnvironmentDepthManager_t66B25129AB8791DEB056A5AFAB14151358AAA631* __this, RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* ___0_depthTexture, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RenderTexture__ctor_mD60FB2D8D9560774F2E21BAC0A0061CB17904EA3 (RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* __this, int32_t ___0_width, int32_t ___1_height, int32_t ___2_colorFormat, int32_t ___3_depthStencilFormat, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RenderTexture_set_volumeDepth_mD9B1E6BA4BE6B1741427B34A23B9D48BA9493633 (RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* __this, int32_t ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_set_name_mC79E6DC8FFD72479C90F0C4CC7F42A0FEAF5AE47 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* __this, String_t* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RenderTexture_set_depth_m3D8EF7C98634724B2DB8279387A81C4E19B5DA53 (RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* __this, int32_t ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RenderTexture_Create_mA6E4D3CCC84AC3F68E85AA0D6609E1692C672AD2 (RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RenderBuffer_tBE7B342979EF2FA36E24C8A7F9242212F5B89551 RenderTexture_get_colorBuffer_mE043AF01C1B2FB73BDC9C82D78528A367089CDE0 (RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RenderBuffer_tBE7B342979EF2FA36E24C8A7F9242212F5B89551 RenderTexture_get_depthBuffer_mBBDFA14B3AC2AE4796795E89A0BCA59D54B859D5 (RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Graphics_SetRenderTarget_m473C88BAC10F05E85918C154CB0426D05A1933D4 (RenderTargetSetup_tD71CE5727C526D33A6784394E0F9D9E2AB8CA86F ___0_setup, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Material_SetPass_mBB03542DFF4FAEADFCED332009F9D61B6DED75FE (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, int32_t ___0_pass, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Graphics_DrawProceduralNow_m978B544E28AF7B83FD6FF4AC88C41C9BF66CDC62 (int32_t ___0_topology, int32_t ___1_vertexCount, int32_t ___2_instanceCount, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Debug_get_unityLogger_m4FDE4D41C187123244FE13124DA636BB50C9C1E1_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Shader_PropertyToID_mE98523D50F5656CAE89B30695C458253EB8956CA (String_t* ___0_name, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* EnvironmentDepthManager_CreateProvider_m35224046022B072044C09BCE9A58DF60117F03B1 (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Single_IsInfinity_m8D101DE5C104130734F6DCA3E6E86345B064E4AD_inline (float ___0_f, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector4__ctor_m96B2CD8B862B271F513AF0BDC2EABD58E4DBC813_inline (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* __this, float ___0_x, float ___1_y, float ___2_z, float ___3_w, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnvironmentDepthUtils_CalculateDepthCameraMatrices_mEAFC3CA26D1CB1BB8D595409083E1B6EB21E8F60 (DepthFrameDesc_t8E03631D7F12D148E09C208091FBCA5C692E2DB2 ___0_frameDesc, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6* ___1_projMatrix, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6* ___2_viewMatrix, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Quaternion__ctor_m868FD60AA65DD5A8AC0C5DEB0608381A8D85FCD8_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* __this, float ___0_x, float ___1_y, float ___2_z, float ___3_w, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 Matrix4x4_TRS_mCC04FD47347234B451ACC6CCD2CE6D02E1E0E1E3 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_pos, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___1_q, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___2_s, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 Matrix4x4_get_inverse_m4F4A881CD789281EA90EB68CFD39F36C8A81E6BD (Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___0_x, float ___1_y, float ___2_z, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t BitConverter_SingleToInt32Bits_mC760C7CFC89725E3CF68DC45BE3A9A42A7E7DA73_inline (float ___0_value, const RuntimeMethod* method) ;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MonoScriptData_t3416D25F961CB51863D291A045234B8C52193BA3 UnitySourceGeneratedAssemblyMonoScriptTypes_v1_Get_m75C3BB6863489AED0D5ED23A50FC2B78D83B0D4B (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_tDEA4DBF25ED3A57BEF93477E21812F662B700F3C____0D012443DC42B6466C51BBF80E84C3534C4AE4AAF1117C5FE62B9246E40D618D_FieldInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_tDEA4DBF25ED3A57BEF93477E21812F662B700F3C____5D27C2DFCAAFDFCE15FB82D88C6B253892F9F55928DA69D9B76D672B6AB4333E_FieldInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	MonoScriptData_t3416D25F961CB51863D291A045234B8C52193BA3 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(MonoScriptData_t3416D25F961CB51863D291A045234B8C52193BA3));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)294));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = L_0;
		RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 L_2 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_tDEA4DBF25ED3A57BEF93477E21812F662B700F3C____0D012443DC42B6466C51BBF80E84C3534C4AE4AAF1117C5FE62B9246E40D618D_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_m751372AA3F24FBF6DA9B9D687CBFA2DE436CAB9B((RuntimeArray*)L_1, L_2, NULL);
		(&V_0)->___FilePathsData = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___FilePathsData), (void*)L_1);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)290));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = L_3;
		RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 L_5 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_tDEA4DBF25ED3A57BEF93477E21812F662B700F3C____5D27C2DFCAAFDFCE15FB82D88C6B253892F9F55928DA69D9B76D672B6AB4333E_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_m751372AA3F24FBF6DA9B9D687CBFA2DE436CAB9B((RuntimeArray*)L_4, L_5, NULL);
		(&V_0)->___TypesData = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___TypesData), (void*)L_4);
		(&V_0)->___TotalFiles = 3;
		(&V_0)->___TotalTypes = 6;
		(&V_0)->___IsEditorOnly = (bool)0;
		MonoScriptData_t3416D25F961CB51863D291A045234B8C52193BA3 L_6 = V_0;
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnitySourceGeneratedAssemblyMonoScriptTypes_v1__ctor_m2B5E401043D3EF6EC0554C5045D2FA46F2A513E6 (UnitySourceGeneratedAssemblyMonoScriptTypes_v1_t1ACF46C8B2EF733FA0223A82328A383F4AABE8DA* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
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
IL2CPP_EXTERN_C void MonoScriptData_t3416D25F961CB51863D291A045234B8C52193BA3_marshal_pinvoke(const MonoScriptData_t3416D25F961CB51863D291A045234B8C52193BA3& unmarshaled, MonoScriptData_t3416D25F961CB51863D291A045234B8C52193BA3_marshaled_pinvoke& marshaled)
{
	marshaled.___FilePathsData = il2cpp_codegen_com_marshal_safe_array(IL2CPP_VT_I1, unmarshaled.___FilePathsData);
	marshaled.___TypesData = il2cpp_codegen_com_marshal_safe_array(IL2CPP_VT_I1, unmarshaled.___TypesData);
	marshaled.___TotalTypes = unmarshaled.___TotalTypes;
	marshaled.___TotalFiles = unmarshaled.___TotalFiles;
	marshaled.___IsEditorOnly = static_cast<int32_t>(unmarshaled.___IsEditorOnly);
}
IL2CPP_EXTERN_C void MonoScriptData_t3416D25F961CB51863D291A045234B8C52193BA3_marshal_pinvoke_back(const MonoScriptData_t3416D25F961CB51863D291A045234B8C52193BA3_marshaled_pinvoke& marshaled, MonoScriptData_t3416D25F961CB51863D291A045234B8C52193BA3& unmarshaled)
{
	unmarshaled.___FilePathsData = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)il2cpp_codegen_com_marshal_safe_array_result(IL2CPP_VT_I1, il2cpp_defaults.byte_class, marshaled.___FilePathsData);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___FilePathsData), (void*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)il2cpp_codegen_com_marshal_safe_array_result(IL2CPP_VT_I1, il2cpp_defaults.byte_class, marshaled.___FilePathsData));
	unmarshaled.___TypesData = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)il2cpp_codegen_com_marshal_safe_array_result(IL2CPP_VT_I1, il2cpp_defaults.byte_class, marshaled.___TypesData);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___TypesData), (void*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)il2cpp_codegen_com_marshal_safe_array_result(IL2CPP_VT_I1, il2cpp_defaults.byte_class, marshaled.___TypesData));
	int32_t unmarshaledTotalTypes_temp_2 = 0;
	unmarshaledTotalTypes_temp_2 = marshaled.___TotalTypes;
	unmarshaled.___TotalTypes = unmarshaledTotalTypes_temp_2;
	int32_t unmarshaledTotalFiles_temp_3 = 0;
	unmarshaledTotalFiles_temp_3 = marshaled.___TotalFiles;
	unmarshaled.___TotalFiles = unmarshaledTotalFiles_temp_3;
	bool unmarshaledIsEditorOnly_temp_4 = false;
	unmarshaledIsEditorOnly_temp_4 = static_cast<bool>(marshaled.___IsEditorOnly);
	unmarshaled.___IsEditorOnly = unmarshaledIsEditorOnly_temp_4;
}
IL2CPP_EXTERN_C void MonoScriptData_t3416D25F961CB51863D291A045234B8C52193BA3_marshal_pinvoke_cleanup(MonoScriptData_t3416D25F961CB51863D291A045234B8C52193BA3_marshaled_pinvoke& marshaled)
{
	il2cpp_codegen_com_destroy_safe_array(marshaled.___FilePathsData);
	marshaled.___FilePathsData = NULL;
	il2cpp_codegen_com_destroy_safe_array(marshaled.___TypesData);
	marshaled.___TypesData = NULL;
}
IL2CPP_EXTERN_C void MonoScriptData_t3416D25F961CB51863D291A045234B8C52193BA3_marshal_com(const MonoScriptData_t3416D25F961CB51863D291A045234B8C52193BA3& unmarshaled, MonoScriptData_t3416D25F961CB51863D291A045234B8C52193BA3_marshaled_com& marshaled)
{
	marshaled.___FilePathsData = il2cpp_codegen_com_marshal_safe_array(IL2CPP_VT_I1, unmarshaled.___FilePathsData);
	marshaled.___TypesData = il2cpp_codegen_com_marshal_safe_array(IL2CPP_VT_I1, unmarshaled.___TypesData);
	marshaled.___TotalTypes = unmarshaled.___TotalTypes;
	marshaled.___TotalFiles = unmarshaled.___TotalFiles;
	marshaled.___IsEditorOnly = static_cast<int32_t>(unmarshaled.___IsEditorOnly);
}
IL2CPP_EXTERN_C void MonoScriptData_t3416D25F961CB51863D291A045234B8C52193BA3_marshal_com_back(const MonoScriptData_t3416D25F961CB51863D291A045234B8C52193BA3_marshaled_com& marshaled, MonoScriptData_t3416D25F961CB51863D291A045234B8C52193BA3& unmarshaled)
{
	unmarshaled.___FilePathsData = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)il2cpp_codegen_com_marshal_safe_array_result(IL2CPP_VT_I1, il2cpp_defaults.byte_class, marshaled.___FilePathsData);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___FilePathsData), (void*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)il2cpp_codegen_com_marshal_safe_array_result(IL2CPP_VT_I1, il2cpp_defaults.byte_class, marshaled.___FilePathsData));
	unmarshaled.___TypesData = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)il2cpp_codegen_com_marshal_safe_array_result(IL2CPP_VT_I1, il2cpp_defaults.byte_class, marshaled.___TypesData);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___TypesData), (void*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)il2cpp_codegen_com_marshal_safe_array_result(IL2CPP_VT_I1, il2cpp_defaults.byte_class, marshaled.___TypesData));
	int32_t unmarshaledTotalTypes_temp_2 = 0;
	unmarshaledTotalTypes_temp_2 = marshaled.___TotalTypes;
	unmarshaled.___TotalTypes = unmarshaledTotalTypes_temp_2;
	int32_t unmarshaledTotalFiles_temp_3 = 0;
	unmarshaledTotalFiles_temp_3 = marshaled.___TotalFiles;
	unmarshaled.___TotalFiles = unmarshaledTotalFiles_temp_3;
	bool unmarshaledIsEditorOnly_temp_4 = false;
	unmarshaledIsEditorOnly_temp_4 = static_cast<bool>(marshaled.___IsEditorOnly);
	unmarshaled.___IsEditorOnly = unmarshaledIsEditorOnly_temp_4;
}
IL2CPP_EXTERN_C void MonoScriptData_t3416D25F961CB51863D291A045234B8C52193BA3_marshal_com_cleanup(MonoScriptData_t3416D25F961CB51863D291A045234B8C52193BA3_marshaled_com& marshaled)
{
	il2cpp_codegen_com_destroy_safe_array(marshaled.___FilePathsData);
	marshaled.___FilePathsData = NULL;
	il2cpp_codegen_com_destroy_safe_array(marshaled.___TypesData);
	marshaled.___TypesData = NULL;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DepthProvider_get_IsSupported_m59FF0B0FA6F2458CA6B43317A3158979CDA38B09 (DepthProvider_tAB92D399B17711BD5948E6DDEDEA2647B42CBD77* __this, const RuntimeMethod* method) 
{
	{
		bool L_0;
		L_0 = Utils_GetEnvironmentDepthSupported_m38CA4657EF6046185F2EE6E32A9737EC476F515A(NULL);
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DepthProvider_set_RemoveHands_mC7D8EDCFB93EDE0C13BB5E98811EC46E44FBFF99 (DepthProvider_tAB92D399B17711BD5948E6DDEDEA2647B42CBD77* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		bool L_0 = ___0_value;
		bool L_1;
		L_1 = Utils_SetEnvironmentDepthHandRemoval_m74A0B2D0F70133331927F4C5D9EFC89DA84F5DAE(L_0, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DepthProvider_GetDepthTextureId_m00C5628A1E1DC633BBACEB9E6D4043B44872CD0B (DepthProvider_tAB92D399B17711BD5948E6DDEDEA2647B42CBD77* __this, uint32_t* ___0_textureId, const RuntimeMethod* method) 
{
	{
		uint32_t* L_0 = ___0_textureId;
		bool L_1;
		L_1 = Utils_GetEnvironmentDepthTextureId_m986C21DB57C620DB46A88A619565A08FDF5FEDAA(L_0, NULL);
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DepthProvider_SetDepthEnabled_m6C202FC7579D7332E2B72F4C5667983419AAD234 (DepthProvider_tAB92D399B17711BD5948E6DDEDEA2647B42CBD77* __this, bool ___0_isEnabled, bool ___1_removeHands, const RuntimeMethod* method) 
{
	EnvironmentDepthCreateParams_tDC6F7E5ABE8081C06DAE48548AA6CA7601824CA0 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		bool L_0 = ___0_isEnabled;
		if (!L_0)
		{
			goto IL_0020;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(EnvironmentDepthCreateParams_tDC6F7E5ABE8081C06DAE48548AA6CA7601824CA0));
		bool L_1 = ___1_removeHands;
		(&V_0)->___removeHands = L_1;
		EnvironmentDepthCreateParams_tDC6F7E5ABE8081C06DAE48548AA6CA7601824CA0 L_2 = V_0;
		Utils_SetupEnvironmentDepth_mF52FEC1788E8688BD34C1D8F3DC52B167DAFE0DA(L_2, NULL);
		Utils_SetEnvironmentDepthRendering_m257DC253F68E571F263D0F31E9F9C8E6B1A1070C((bool)1, NULL);
		return;
	}

IL_0020:
	{
		Utils_ShutdownEnvironmentDepth_mCAFD47820798F457C57144C916090DB793C54EE1(NULL);
		Utils_SetEnvironmentDepthRendering_m257DC253F68E571F263D0F31E9F9C8E6B1A1070C((bool)0, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DepthFrameDesc_t8E03631D7F12D148E09C208091FBCA5C692E2DB2 DepthProvider_GetFrameDesc_m461EBD123EE0AE04E5112759CEB837F57EA1221F (DepthProvider_tAB92D399B17711BD5948E6DDEDEA2647B42CBD77* __this, int32_t ___0_eye, const RuntimeMethod* method) 
{
	EnvironmentDepthFrameDesc_t54EAD2C9E064A249F726E96306B9615EA364918C V_0;
	memset((&V_0), 0, sizeof(V_0));
	DepthFrameDesc_t8E03631D7F12D148E09C208091FBCA5C692E2DB2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		int32_t L_0 = ___0_eye;
		EnvironmentDepthFrameDesc_t54EAD2C9E064A249F726E96306B9615EA364918C L_1;
		L_1 = Utils_GetEnvironmentDepthFrameDesc_m8CE3DDE71EE471F4AF71009F6CDEB4813D6756FB(L_0, NULL);
		V_0 = L_1;
		il2cpp_codegen_initobj((&V_1), sizeof(DepthFrameDesc_t8E03631D7F12D148E09C208091FBCA5C692E2DB2));
		EnvironmentDepthFrameDesc_t54EAD2C9E064A249F726E96306B9615EA364918C L_2 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = L_2.___createPoseLocation;
		(&V_1)->___createPoseLocation = L_3;
		EnvironmentDepthFrameDesc_t54EAD2C9E064A249F726E96306B9615EA364918C L_4 = V_0;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_5 = L_4.___createPoseRotation;
		(&V_1)->___createPoseRotation = L_5;
		EnvironmentDepthFrameDesc_t54EAD2C9E064A249F726E96306B9615EA364918C L_6 = V_0;
		float L_7 = L_6.___fovLeftAngle;
		(&V_1)->___fovLeftAngle = L_7;
		EnvironmentDepthFrameDesc_t54EAD2C9E064A249F726E96306B9615EA364918C L_8 = V_0;
		float L_9 = L_8.___fovRightAngle;
		(&V_1)->___fovRightAngle = L_9;
		EnvironmentDepthFrameDesc_t54EAD2C9E064A249F726E96306B9615EA364918C L_10 = V_0;
		float L_11 = L_10.___fovTopAngle;
		(&V_1)->___fovTopAngle = L_11;
		EnvironmentDepthFrameDesc_t54EAD2C9E064A249F726E96306B9615EA364918C L_12 = V_0;
		float L_13 = L_12.___fovDownAngle;
		(&V_1)->___fovDownAngle = L_13;
		EnvironmentDepthFrameDesc_t54EAD2C9E064A249F726E96306B9615EA364918C L_14 = V_0;
		float L_15 = L_14.___nearZ;
		(&V_1)->___nearZ = L_15;
		EnvironmentDepthFrameDesc_t54EAD2C9E064A249F726E96306B9615EA364918C L_16 = V_0;
		float L_17 = L_16.___farZ;
		(&V_1)->___farZ = L_17;
		DepthFrameDesc_t8E03631D7F12D148E09C208091FBCA5C692E2DB2 L_18 = V_1;
		return L_18;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DepthProvider__ctor_mCB99FD4179FFC55D5742D76402C62DB9B99040CE (DepthProvider_tAB92D399B17711BD5948E6DDEDEA2647B42CBD77* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* EnvironmentDepthManager_CreateProvider_m35224046022B072044C09BCE9A58DF60117F03B1 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DepthProvider_tAB92D399B17711BD5948E6DDEDEA2647B42CBD77_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		DepthProvider_tAB92D399B17711BD5948E6DDEDEA2647B42CBD77* L_0 = (DepthProvider_tAB92D399B17711BD5948E6DDEDEA2647B42CBD77*)il2cpp_codegen_object_new(DepthProvider_tAB92D399B17711BD5948E6DDEDEA2647B42CBD77_il2cpp_TypeInfo_var);
		DepthProvider__ctor_mCB99FD4179FFC55D5742D76402C62DB9B99040CE(L_0, NULL);
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool EnvironmentDepthManager_get_IsSupported_m7DA10536D673EAAB71E7A1B798270D959EF5D52B (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EnvironmentDepthManager_t66B25129AB8791DEB056A5AFAB14151358AAA631_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDepthProvider_t82F515402325FE9773830CB67FB735BEABEEBBDF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(EnvironmentDepthManager_t66B25129AB8791DEB056A5AFAB14151358AAA631_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((EnvironmentDepthManager_t66B25129AB8791DEB056A5AFAB14151358AAA631_StaticFields*)il2cpp_codegen_static_fields_for(EnvironmentDepthManager_t66B25129AB8791DEB056A5AFAB14151358AAA631_il2cpp_TypeInfo_var))->____provider;
		NullCheck(L_0);
		bool L_1;
		L_1 = InterfaceFuncInvoker0< bool >::Invoke(0, IDepthProvider_t82F515402325FE9773830CB67FB735BEABEEBBDF_il2cpp_TypeInfo_var, L_0);
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool EnvironmentDepthManager_get_IsDepthAvailable_m46C6D9DCA227381A3840DBE6B41083EFB8FD132C (EnvironmentDepthManager_t66B25129AB8791DEB056A5AFAB14151358AAA631* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___U3CIsDepthAvailableU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnvironmentDepthManager_set_IsDepthAvailable_m77ABBDA4D0A9BFF1247642CE22A018F22ECDA762 (EnvironmentDepthManager_t66B25129AB8791DEB056A5AFAB14151358AAA631* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		bool L_0 = ___0_value;
		__this->___U3CIsDepthAvailableU3Ek__BackingField = L_0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t EnvironmentDepthManager_get_OcclusionShadersMode_mF0CA69250148479C4BC4EE85DFD948CBD9EE5D6C (EnvironmentDepthManager_t66B25129AB8791DEB056A5AFAB14151358AAA631* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____occlusionShadersMode;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnvironmentDepthManager_set_OcclusionShadersMode_m457114F6E041C154E08A45E7AB442CFBC673C9D5 (EnvironmentDepthManager_t66B25129AB8791DEB056A5AFAB14151358AAA631* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EnvironmentDepthManager_t66B25129AB8791DEB056A5AFAB14151358AAA631_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = __this->____occlusionShadersMode;
		int32_t L_1 = ___0_value;
		if ((!(((uint32_t)L_0) == ((uint32_t)L_1))))
		{
			goto IL_000a;
		}
	}
	{
		return;
	}

IL_000a:
	{
		int32_t L_2 = ___0_value;
		__this->____occlusionShadersMode = L_2;
		bool L_3;
		L_3 = EnvironmentDepthManager_get_IsDepthAvailable_m46C6D9DCA227381A3840DBE6B41083EFB8FD132C_inline(__this, NULL);
		if (!L_3)
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_4 = ___0_value;
		il2cpp_codegen_runtime_class_init_inline(EnvironmentDepthManager_t66B25129AB8791DEB056A5AFAB14151358AAA631_il2cpp_TypeInfo_var);
		EnvironmentDepthManager_SetOcclusionShaderKeywords_m5E0A4D11D6250C621884346B7E1A9CE72B443DD0(L_4, NULL);
	}

IL_001f:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool EnvironmentDepthManager_get_RemoveHands_mB1BAB22E297B860E48BD05BD6BD238D05C47FAFE (EnvironmentDepthManager_t66B25129AB8791DEB056A5AFAB14151358AAA631* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->____removeHands;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnvironmentDepthManager_set_RemoveHands_mA9AB95B7CAE5D8DFBAD88EE83AAC3394E12B1595 (EnvironmentDepthManager_t66B25129AB8791DEB056A5AFAB14151358AAA631* __this, bool ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EnvironmentDepthManager_t66B25129AB8791DEB056A5AFAB14151358AAA631_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDepthProvider_t82F515402325FE9773830CB67FB735BEABEEBBDF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = __this->____removeHands;
		bool L_1 = ___0_value;
		if ((!(((uint32_t)L_0) == ((uint32_t)L_1))))
		{
			goto IL_000a;
		}
	}
	{
		return;
	}

IL_000a:
	{
		bool L_2 = ___0_value;
		__this->____removeHands = L_2;
		bool L_3;
		L_3 = Behaviour_get_enabled_mAAC9F15E9EBF552217A5AE2681589CC0BFA300C1(__this, NULL);
		if (!L_3)
		{
			goto IL_0024;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(EnvironmentDepthManager_t66B25129AB8791DEB056A5AFAB14151358AAA631_il2cpp_TypeInfo_var);
		RuntimeObject* L_4 = ((EnvironmentDepthManager_t66B25129AB8791DEB056A5AFAB14151358AAA631_StaticFields*)il2cpp_codegen_static_fields_for(EnvironmentDepthManager_t66B25129AB8791DEB056A5AFAB14151358AAA631_il2cpp_TypeInfo_var))->____provider;
		bool L_5 = ___0_value;
		NullCheck(L_4);
		InterfaceActionInvoker1< bool >::Invoke(1, IDepthProvider_t82F515402325FE9773830CB67FB735BEABEEBBDF_il2cpp_TypeInfo_var, L_4, L_5);
	}

IL_0024:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnvironmentDepthManager_Awake_m0ADA6BE3CBB9FDEAA038174B84A47F6ADB3E781C (EnvironmentDepthManager_t66B25129AB8791DEB056A5AFAB14151358AAA631* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Single_TisXRDisplaySubsystem_t4B00B0BF1894A039ACFA8DDC2C2EB9301118C1F1_mA37F49C846EFE2734EC2E7A4550E7E13824C4EF3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EnvironmentDepthManager_t66B25129AB8791DEB056A5AFAB14151358AAA631_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m86269E3BF7BFAEF2B25AF0E6E3A0BCA88770566F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tA7666C6690CE2AEE97571615AD3AFCE2BB020597_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SubsystemManager_GetInstances_TisXRDisplaySubsystem_t4B00B0BF1894A039ACFA8DDC2C2EB9301118C1F1_mCDFAF63EF2A2778CA3677E75360BC7961FCB3370_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SubsystemManager_t9A7261E4D0B53B996F04B8707D8E1C33AB65E824_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC92F425FF6D1AA7661F3BC4F16E65014AB18038A);
		s_Il2CppMethodInitialized = true;
	}
	List_1_tA7666C6690CE2AEE97571615AD3AFCE2BB020597* V_0 = NULL;
	Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* V_1 = NULL;
	{
		il2cpp_codegen_runtime_class_init_inline(EnvironmentDepthManager_t66B25129AB8791DEB056A5AFAB14151358AAA631_il2cpp_TypeInfo_var);
		bool L_0;
		L_0 = EnvironmentDepthManager_get_IsSupported_m7DA10536D673EAAB71E7A1B798270D959EF5D52B(NULL);
		if (L_0)
		{
			goto IL_0008;
		}
	}
	{
		return;
	}

IL_0008:
	{
		List_1_tA7666C6690CE2AEE97571615AD3AFCE2BB020597* L_1 = (List_1_tA7666C6690CE2AEE97571615AD3AFCE2BB020597*)il2cpp_codegen_object_new(List_1_tA7666C6690CE2AEE97571615AD3AFCE2BB020597_il2cpp_TypeInfo_var);
		List_1__ctor_m86269E3BF7BFAEF2B25AF0E6E3A0BCA88770566F(L_1, 1, List_1__ctor_m86269E3BF7BFAEF2B25AF0E6E3A0BCA88770566F_RuntimeMethod_var);
		V_0 = L_1;
		List_1_tA7666C6690CE2AEE97571615AD3AFCE2BB020597* L_2 = V_0;
		il2cpp_codegen_runtime_class_init_inline(SubsystemManager_t9A7261E4D0B53B996F04B8707D8E1C33AB65E824_il2cpp_TypeInfo_var);
		SubsystemManager_GetInstances_TisXRDisplaySubsystem_t4B00B0BF1894A039ACFA8DDC2C2EB9301118C1F1_mCDFAF63EF2A2778CA3677E75360BC7961FCB3370(L_2, SubsystemManager_GetInstances_TisXRDisplaySubsystem_t4B00B0BF1894A039ACFA8DDC2C2EB9301118C1F1_mCDFAF63EF2A2778CA3677E75360BC7961FCB3370_RuntimeMethod_var);
		List_1_tA7666C6690CE2AEE97571615AD3AFCE2BB020597* L_3 = V_0;
		XRDisplaySubsystem_t4B00B0BF1894A039ACFA8DDC2C2EB9301118C1F1* L_4;
		L_4 = Enumerable_Single_TisXRDisplaySubsystem_t4B00B0BF1894A039ACFA8DDC2C2EB9301118C1F1_mA37F49C846EFE2734EC2E7A4550E7E13824C4EF3(L_3, Enumerable_Single_TisXRDisplaySubsystem_t4B00B0BF1894A039ACFA8DDC2C2EB9301118C1F1_mA37F49C846EFE2734EC2E7A4550E7E13824C4EF3_RuntimeMethod_var);
		__this->____xrDisplay = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____xrDisplay), (void*)L_4);
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_5;
		L_5 = Shader_Find_m183AA54F78320212DDEC811592F98456898A41C5(_stringLiteralC92F425FF6D1AA7661F3BC4F16E65014AB18038A, NULL);
		V_1 = L_5;
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_6 = V_1;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_7 = (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3*)il2cpp_codegen_object_new(Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3_il2cpp_TypeInfo_var);
		Material__ctor_m7FDF47105D66D19591BE505A0C42B0F90D88C9BF(L_7, L_6, NULL);
		__this->____preprocessMaterial = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____preprocessMaterial), (void*)L_7);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnvironmentDepthManager_OnEnable_m3425FD09A569E30BAAE5B148C8C46B75CD12654B (EnvironmentDepthManager_t66B25129AB8791DEB056A5AFAB14151358AAA631* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EnvironmentDepthManager_t66B25129AB8791DEB056A5AFAB14151358AAA631_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDepthProvider_t82F515402325FE9773830CB67FB735BEABEEBBDF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral204F544BAFC4863B359F592A20972AD51732AE93);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9FC59D8986B846D2BF95AF308D4A1BDF1803347C);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(EnvironmentDepthManager_t66B25129AB8791DEB056A5AFAB14151358AAA631_il2cpp_TypeInfo_var);
		bool L_0;
		L_0 = EnvironmentDepthManager_get_IsSupported_m7DA10536D673EAAB71E7A1B798270D959EF5D52B(NULL);
		if (L_0)
		{
			goto IL_0019;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(_stringLiteral204F544BAFC4863B359F592A20972AD51732AE93, NULL);
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(__this, (bool)0, NULL);
		return;
	}

IL_0019:
	{
		bool L_1;
		L_1 = Permission_HasUserAuthorizedPermission_mF4C90E13124E28F6F672200E489CC25A9B645B8B(_stringLiteral9FC59D8986B846D2BF95AF308D4A1BDF1803347C, NULL);
		__this->____hasPermission = L_1;
		bool L_2 = __this->____hasPermission;
		if (!L_2)
		{
			goto IL_0042;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(EnvironmentDepthManager_t66B25129AB8791DEB056A5AFAB14151358AAA631_il2cpp_TypeInfo_var);
		RuntimeObject* L_3 = ((EnvironmentDepthManager_t66B25129AB8791DEB056A5AFAB14151358AAA631_StaticFields*)il2cpp_codegen_static_fields_for(EnvironmentDepthManager_t66B25129AB8791DEB056A5AFAB14151358AAA631_il2cpp_TypeInfo_var))->____provider;
		bool L_4 = __this->____removeHands;
		NullCheck(L_3);
		InterfaceActionInvoker2< bool, bool >::Invoke(2, IDepthProvider_t82F515402325FE9773830CB67FB735BEABEEBBDF_il2cpp_TypeInfo_var, L_3, (bool)1, L_4);
	}

IL_0042:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnvironmentDepthManager_ResetDepthTextureIfAvailable_m08C8274380CE0F0078AD7DBCA015C2E2807C1A32 (EnvironmentDepthManager_t66B25129AB8791DEB056A5AFAB14151358AAA631* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EnvironmentDepthManager_t66B25129AB8791DEB056A5AFAB14151358AAA631_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0;
		L_0 = EnvironmentDepthManager_get_IsDepthAvailable_m46C6D9DCA227381A3840DBE6B41083EFB8FD132C_inline(__this, NULL);
		if (!L_0)
		{
			goto IL_0028;
		}
	}
	{
		EnvironmentDepthManager_set_IsDepthAvailable_m77ABBDA4D0A9BFF1247642CE22A018F22ECDA762_inline(__this, (bool)0, NULL);
		il2cpp_codegen_runtime_class_init_inline(EnvironmentDepthManager_t66B25129AB8791DEB056A5AFAB14151358AAA631_il2cpp_TypeInfo_var);
		int32_t L_1 = ((EnvironmentDepthManager_t66B25129AB8791DEB056A5AFAB14151358AAA631_StaticFields*)il2cpp_codegen_static_fields_for(EnvironmentDepthManager_t66B25129AB8791DEB056A5AFAB14151358AAA631_il2cpp_TypeInfo_var))->___DepthTextureID;
		Shader_SetGlobalTexture_m6DAEF0F184187427D0B7EE64827BD95A482CC09C(L_1, (Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700*)NULL, NULL);
		int32_t L_2 = __this->____occlusionShadersMode;
		if (!L_2)
		{
			goto IL_0028;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(EnvironmentDepthManager_t66B25129AB8791DEB056A5AFAB14151358AAA631_il2cpp_TypeInfo_var);
		EnvironmentDepthManager_SetOcclusionShaderKeywords_m5E0A4D11D6250C621884346B7E1A9CE72B443DD0(0, NULL);
	}

IL_0028:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnvironmentDepthManager_OnDisable_mF0DE61B956A3C760549EF7AC61F828F6C2ACAFB5 (EnvironmentDepthManager_t66B25129AB8791DEB056A5AFAB14151358AAA631* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EnvironmentDepthManager_t66B25129AB8791DEB056A5AFAB14151358AAA631_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDepthProvider_t82F515402325FE9773830CB67FB735BEABEEBBDF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		EnvironmentDepthManager_ResetDepthTextureIfAvailable_m08C8274380CE0F0078AD7DBCA015C2E2807C1A32(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(EnvironmentDepthManager_t66B25129AB8791DEB056A5AFAB14151358AAA631_il2cpp_TypeInfo_var);
		bool L_0;
		L_0 = EnvironmentDepthManager_get_IsSupported_m7DA10536D673EAAB71E7A1B798270D959EF5D52B(NULL);
		if (!L_0)
		{
			goto IL_0021;
		}
	}
	{
		bool L_1 = __this->____hasPermission;
		if (!L_1)
		{
			goto IL_0021;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(EnvironmentDepthManager_t66B25129AB8791DEB056A5AFAB14151358AAA631_il2cpp_TypeInfo_var);
		RuntimeObject* L_2 = ((EnvironmentDepthManager_t66B25129AB8791DEB056A5AFAB14151358AAA631_StaticFields*)il2cpp_codegen_static_fields_for(EnvironmentDepthManager_t66B25129AB8791DEB056A5AFAB14151358AAA631_il2cpp_TypeInfo_var))->____provider;
		NullCheck(L_2);
		InterfaceActionInvoker2< bool, bool >::Invoke(2, IDepthProvider_t82F515402325FE9773830CB67FB735BEABEEBBDF_il2cpp_TypeInfo_var, L_2, (bool)0, (bool)0);
	}

IL_0021:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnvironmentDepthManager_OnDestroy_m676509BBC91DDF17F034F3867448E7E3F3D56E9C (EnvironmentDepthManager_t66B25129AB8791DEB056A5AFAB14151358AAA631* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_0 = __this->____preprocessMaterial;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_2 = __this->____preprocessMaterial;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(L_2, NULL);
	}

IL_0019:
	{
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_3 = __this->____preprocessTexture;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_3, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_4)
		{
			goto IL_0032;
		}
	}
	{
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_5 = __this->____preprocessTexture;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(L_5, NULL);
	}

IL_0032:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnvironmentDepthManager_Update_mE49EE443C3BEBFD2ED232B39989505B5F6DD7E45 (EnvironmentDepthManager_t66B25129AB8791DEB056A5AFAB14151358AAA631* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EnvironmentDepthManager_t66B25129AB8791DEB056A5AFAB14151358AAA631_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EnvironmentDepthUtils_tF0B57ABF5A71BC39C607681F1611BD437291128A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDepthProvider_t82F515402325FE9773830CB67FB735BEABEEBBDF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9FC59D8986B846D2BF95AF308D4A1BDF1803347C);
		s_Il2CppMethodInitialized = true;
	}
	DepthFrameDesc_t8E03631D7F12D148E09C208091FBCA5C692E2DB2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	DepthFrameDesc_t8E03631D7F12D148E09C208091FBCA5C692E2DB2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 V_2;
	memset((&V_2), 0, sizeof(V_2));
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 V_3;
	memset((&V_3), 0, sizeof(V_3));
	{
		bool L_0 = __this->____hasPermission;
		if (L_0)
		{
			goto IL_002d;
		}
	}
	{
		bool L_1;
		L_1 = Permission_HasUserAuthorizedPermission_mF4C90E13124E28F6F672200E489CC25A9B645B8B(_stringLiteral9FC59D8986B846D2BF95AF308D4A1BDF1803347C, NULL);
		if (L_1)
		{
			goto IL_0015;
		}
	}
	{
		return;
	}

IL_0015:
	{
		__this->____hasPermission = (bool)1;
		il2cpp_codegen_runtime_class_init_inline(EnvironmentDepthManager_t66B25129AB8791DEB056A5AFAB14151358AAA631_il2cpp_TypeInfo_var);
		RuntimeObject* L_2 = ((EnvironmentDepthManager_t66B25129AB8791DEB056A5AFAB14151358AAA631_StaticFields*)il2cpp_codegen_static_fields_for(EnvironmentDepthManager_t66B25129AB8791DEB056A5AFAB14151358AAA631_il2cpp_TypeInfo_var))->____provider;
		bool L_3 = __this->____removeHands;
		NullCheck(L_2);
		InterfaceActionInvoker2< bool, bool >::Invoke(2, IDepthProvider_t82F515402325FE9773830CB67FB735BEABEEBBDF_il2cpp_TypeInfo_var, L_2, (bool)1, L_3);
	}

IL_002d:
	{
		EnvironmentDepthManager_TryFetchDepthTexture_mB175985B0B413B25EBC9FE2A22FA9AB2B5AEAC0F(__this, NULL);
		bool L_4;
		L_4 = EnvironmentDepthManager_get_IsDepthAvailable_m46C6D9DCA227381A3840DBE6B41083EFB8FD132C_inline(__this, NULL);
		if (L_4)
		{
			goto IL_003c;
		}
	}
	{
		return;
	}

IL_003c:
	{
		il2cpp_codegen_runtime_class_init_inline(EnvironmentDepthManager_t66B25129AB8791DEB056A5AFAB14151358AAA631_il2cpp_TypeInfo_var);
		RuntimeObject* L_5 = ((EnvironmentDepthManager_t66B25129AB8791DEB056A5AFAB14151358AAA631_StaticFields*)il2cpp_codegen_static_fields_for(EnvironmentDepthManager_t66B25129AB8791DEB056A5AFAB14151358AAA631_il2cpp_TypeInfo_var))->____provider;
		NullCheck(L_5);
		DepthFrameDesc_t8E03631D7F12D148E09C208091FBCA5C692E2DB2 L_6;
		L_6 = InterfaceFuncInvoker1< DepthFrameDesc_t8E03631D7F12D148E09C208091FBCA5C692E2DB2, int32_t >::Invoke(3, IDepthProvider_t82F515402325FE9773830CB67FB735BEABEEBBDF_il2cpp_TypeInfo_var, L_5, 0);
		V_0 = L_6;
		RuntimeObject* L_7 = ((EnvironmentDepthManager_t66B25129AB8791DEB056A5AFAB14151358AAA631_StaticFields*)il2cpp_codegen_static_fields_for(EnvironmentDepthManager_t66B25129AB8791DEB056A5AFAB14151358AAA631_il2cpp_TypeInfo_var))->____provider;
		NullCheck(L_7);
		DepthFrameDesc_t8E03631D7F12D148E09C208091FBCA5C692E2DB2 L_8;
		L_8 = InterfaceFuncInvoker1< DepthFrameDesc_t8E03631D7F12D148E09C208091FBCA5C692E2DB2, int32_t >::Invoke(3, IDepthProvider_t82F515402325FE9773830CB67FB735BEABEEBBDF_il2cpp_TypeInfo_var, L_7, 1);
		V_1 = L_8;
		DepthFrameDesc_t8E03631D7F12D148E09C208091FBCA5C692E2DB2 L_9 = V_0;
		float L_10 = L_9.___nearZ;
		DepthFrameDesc_t8E03631D7F12D148E09C208091FBCA5C692E2DB2 L_11 = V_0;
		float L_12 = L_11.___farZ;
		il2cpp_codegen_runtime_class_init_inline(EnvironmentDepthUtils_tF0B57ABF5A71BC39C607681F1611BD437291128A_il2cpp_TypeInfo_var);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_13;
		L_13 = EnvironmentDepthUtils_ComputeNdcToLinearDepthParameters_m4ED08BC1248832A75BCEE1B40D63F91EFA86F081(L_10, L_12, NULL);
		V_2 = L_13;
		int32_t L_14 = ((EnvironmentDepthManager_t66B25129AB8791DEB056A5AFAB14151358AAA631_StaticFields*)il2cpp_codegen_static_fields_for(EnvironmentDepthManager_t66B25129AB8791DEB056A5AFAB14151358AAA631_il2cpp_TypeInfo_var))->___ZBufferParamsID;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_15 = V_2;
		Shader_SetGlobalVector_mDC5F45B008D44A2C8BF6D450CFE8B58B847C8190(L_14, L_15, NULL);
		OVRCameraRig_t7FC2BB0D30DED2B7F0C8914AF2B66E9F4CF891A9* L_16 = __this->____cameraRig;
		NullCheck(L_16);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_17;
		L_17 = OVRCameraRig_get_trackingSpace_m76339871C7804C1BD14283FBF3D91268D4D87550_inline(L_16, NULL);
		NullCheck(L_17);
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_18;
		L_18 = Transform_get_worldToLocalMatrix_mB633C122A01BCE8E51B10B8B8CB95F580750B3F1(L_17, NULL);
		V_3 = L_18;
		Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D* L_19 = __this->____reprojectionMatrices;
		DepthFrameDesc_t8E03631D7F12D148E09C208091FBCA5C692E2DB2 L_20 = V_0;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_21;
		L_21 = EnvironmentDepthUtils_CalculateReprojection_m5E3435EBDF139CCC6D1E006FF797311DF8ADF2E3(L_20, NULL);
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_22 = V_3;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_23;
		L_23 = Matrix4x4_op_Multiply_m75E91775655DCA8DFC8EDE0AB787285BB3935162(L_21, L_22, NULL);
		NullCheck(L_19);
		(L_19)->SetAt(static_cast<il2cpp_array_size_t>(0), (Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6)L_23);
		Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D* L_24 = __this->____reprojectionMatrices;
		DepthFrameDesc_t8E03631D7F12D148E09C208091FBCA5C692E2DB2 L_25 = V_1;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_26;
		L_26 = EnvironmentDepthUtils_CalculateReprojection_m5E3435EBDF139CCC6D1E006FF797311DF8ADF2E3(L_25, NULL);
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_27 = V_3;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_28;
		L_28 = Matrix4x4_op_Multiply_m75E91775655DCA8DFC8EDE0AB787285BB3935162(L_26, L_27, NULL);
		NullCheck(L_24);
		(L_24)->SetAt(static_cast<il2cpp_array_size_t>(1), (Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6)L_28);
		int32_t L_29 = ((EnvironmentDepthManager_t66B25129AB8791DEB056A5AFAB14151358AAA631_StaticFields*)il2cpp_codegen_static_fields_for(EnvironmentDepthManager_t66B25129AB8791DEB056A5AFAB14151358AAA631_il2cpp_TypeInfo_var))->___ReprojectionMatricesID;
		Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D* L_30 = __this->____reprojectionMatrices;
		Shader_SetGlobalMatrixArray_m0232FB4129D259C4C70254E2ED65A8F19CA5D2AB(L_29, L_30, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnvironmentDepthManager_CacheCameraRig_m6D78ED0C4C3C425E94D10381A114EDBF9B9B21D8 (EnvironmentDepthManager_t66B25129AB8791DEB056A5AFAB14151358AAA631* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_FindObjectOfType_TisOVRCameraRig_t7FC2BB0D30DED2B7F0C8914AF2B66E9F4CF891A9_m1564DCD77DA806C8E84BE6808F00823EBCA88234_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		OVRCameraRig_t7FC2BB0D30DED2B7F0C8914AF2B66E9F4CF891A9* L_0 = __this->____cameraRig;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		OVRCameraRig_t7FC2BB0D30DED2B7F0C8914AF2B66E9F4CF891A9* L_2;
		L_2 = Object_FindObjectOfType_TisOVRCameraRig_t7FC2BB0D30DED2B7F0C8914AF2B66E9F4CF891A9_m1564DCD77DA806C8E84BE6808F00823EBCA88234(Object_FindObjectOfType_TisOVRCameraRig_t7FC2BB0D30DED2B7F0C8914AF2B66E9F4CF891A9_m1564DCD77DA806C8E84BE6808F00823EBCA88234_RuntimeMethod_var);
		__this->____cameraRig = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____cameraRig), (void*)L_2);
	}

IL_0019:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnvironmentDepthManager_SetOcclusionShaderKeywords_m5E0A4D11D6250C621884346B7E1A9CE72B443DD0 (int32_t ___0_mode, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OcclusionShadersMode_t5E05D042A31C02AED3DAE94D664CB5FB98B24A9C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1DBA9D771CF21BD0FF172F0B4156503587FD5B7F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA5E8D505AB96888EB0230DF995112A81F0791818);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF5C8165CA10C005224204E77DF9D14B920A64297);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF811479F06651C8AFA71880841D3E3465A1FE575);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___0_mode;
		switch (L_0)
		{
			case 0:
			{
				goto IL_003e;
			}
			case 1:
			{
				goto IL_0014;
			}
			case 2:
			{
				goto IL_0029;
			}
		}
	}
	{
		goto IL_0053;
	}

IL_0014:
	{
		Shader_DisableKeyword_m20FCB3643CD53D86E46DA431DA971E59D49DAF88(_stringLiteralF811479F06651C8AFA71880841D3E3465A1FE575, NULL);
		Shader_EnableKeyword_m2449D6D86962FA7F5D1ED2B165EF63B019CBCCF1(_stringLiteral1DBA9D771CF21BD0FF172F0B4156503587FD5B7F, NULL);
		return;
	}

IL_0029:
	{
		Shader_DisableKeyword_m20FCB3643CD53D86E46DA431DA971E59D49DAF88(_stringLiteral1DBA9D771CF21BD0FF172F0B4156503587FD5B7F, NULL);
		Shader_EnableKeyword_m2449D6D86962FA7F5D1ED2B165EF63B019CBCCF1(_stringLiteralF811479F06651C8AFA71880841D3E3465A1FE575, NULL);
		return;
	}

IL_003e:
	{
		Shader_DisableKeyword_m20FCB3643CD53D86E46DA431DA971E59D49DAF88(_stringLiteral1DBA9D771CF21BD0FF172F0B4156503587FD5B7F, NULL);
		Shader_DisableKeyword_m20FCB3643CD53D86E46DA431DA971E59D49DAF88(_stringLiteralF811479F06651C8AFA71880841D3E3465A1FE575, NULL);
		return;
	}

IL_0053:
	{
		int32_t L_1 = ___0_mode;
		int32_t L_2 = L_1;
		RuntimeObject* L_3 = Box(OcclusionShadersMode_t5E05D042A31C02AED3DAE94D664CB5FB98B24A9C_il2cpp_TypeInfo_var, &L_2);
		String_t* L_4;
		L_4 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(_stringLiteralA5E8D505AB96888EB0230DF995112A81F0791818, _stringLiteralF5C8165CA10C005224204E77DF9D14B920A64297, L_3, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(L_4, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnvironmentDepthManager_TryFetchDepthTexture_mB175985B0B413B25EBC9FE2A22FA9AB2B5AEAC0F (EnvironmentDepthManager_t66B25129AB8791DEB056A5AFAB14151358AAA631* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EnvironmentDepthManager_t66B25129AB8791DEB056A5AFAB14151358AAA631_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDepthProvider_t82F515402325FE9773830CB67FB735BEABEEBBDF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_GetValueOrDefault_m1534AD85F2094EE7E4C958FBEE356468ED7A1B51_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1__ctor_m257B28AB68BEE9F7CB9F0FEA0143F06DE418FE80_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_HasValue_mDEB82F7445A31CA12FE47E887EAE322E7ABB1B54_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* V_1 = NULL;
	Nullable_1_tD043F01310E483091D0E9A5526C3425F13EF2099 V_2;
	memset((&V_2), 0, sizeof(V_2));
	uint32_t V_3 = 0;
	{
		V_0 = 0;
		XRDisplaySubsystem_t4B00B0BF1894A039ACFA8DDC2C2EB9301118C1F1* L_0 = __this->____xrDisplay;
		NullCheck(L_0);
		bool L_1;
		L_1 = IntegratedSubsystem_get_running_m18AA0D7AD1CB593DC9EE5F3DC79643717509D6E8(L_0, NULL);
		if (!L_1)
		{
			goto IL_001d;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(EnvironmentDepthManager_t66B25129AB8791DEB056A5AFAB14151358AAA631_il2cpp_TypeInfo_var);
		RuntimeObject* L_2 = ((EnvironmentDepthManager_t66B25129AB8791DEB056A5AFAB14151358AAA631_StaticFields*)il2cpp_codegen_static_fields_for(EnvironmentDepthManager_t66B25129AB8791DEB056A5AFAB14151358AAA631_il2cpp_TypeInfo_var))->____provider;
		NullCheck(L_2);
		bool L_3;
		L_3 = InterfaceFuncInvoker1< bool, uint32_t* >::Invoke(4, IDepthProvider_t82F515402325FE9773830CB67FB735BEABEEBBDF_il2cpp_TypeInfo_var, L_2, (&V_0));
		if (L_3)
		{
			goto IL_001e;
		}
	}

IL_001d:
	{
		return;
	}

IL_001e:
	{
		XRDisplaySubsystem_t4B00B0BF1894A039ACFA8DDC2C2EB9301118C1F1* L_4 = __this->____xrDisplay;
		uint32_t L_5 = V_0;
		NullCheck(L_4);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_6;
		L_6 = XRDisplaySubsystem_GetRenderTexture_mABB964AEAFF9B12DB279EDECAE85A52F6253E5CA(L_4, L_5, NULL);
		V_1 = L_6;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_7 = V_1;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_8;
		L_8 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_7, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_8)
		{
			goto IL_003b;
		}
	}
	{
		EnvironmentDepthManager_ResetDepthTextureIfAvailable_m08C8274380CE0F0078AD7DBCA015C2E2807C1A32(__this, NULL);
		return;
	}

IL_003b:
	{
		Nullable_1_tD043F01310E483091D0E9A5526C3425F13EF2099 L_9 = __this->____prevTextureId;
		V_2 = L_9;
		uint32_t L_10 = V_0;
		V_3 = L_10;
		uint32_t L_11;
		L_11 = Nullable_1_GetValueOrDefault_m1534AD85F2094EE7E4C958FBEE356468ED7A1B51_inline((&V_2), Nullable_1_GetValueOrDefault_m1534AD85F2094EE7E4C958FBEE356468ED7A1B51_RuntimeMethod_var);
		uint32_t L_12 = V_3;
		bool L_13;
		L_13 = Nullable_1_get_HasValue_mDEB82F7445A31CA12FE47E887EAE322E7ABB1B54_inline((&V_2), Nullable_1_get_HasValue_mDEB82F7445A31CA12FE47E887EAE322E7ABB1B54_RuntimeMethod_var);
		if (!((int32_t)(((((int32_t)L_11) == ((int32_t)L_12))? 1 : 0)&(int32_t)L_13)))
		{
			goto IL_0059;
		}
	}
	{
		return;
	}

IL_0059:
	{
		uint32_t L_14 = V_0;
		Nullable_1_tD043F01310E483091D0E9A5526C3425F13EF2099 L_15;
		memset((&L_15), 0, sizeof(L_15));
		Nullable_1__ctor_m257B28AB68BEE9F7CB9F0FEA0143F06DE418FE80((&L_15), L_14, Nullable_1__ctor_m257B28AB68BEE9F7CB9F0FEA0143F06DE418FE80_RuntimeMethod_var);
		__this->____prevTextureId = L_15;
		EnvironmentDepthManager_CacheCameraRig_m6D78ED0C4C3C425E94D10381A114EDBF9B9B21D8(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(EnvironmentDepthManager_t66B25129AB8791DEB056A5AFAB14151358AAA631_il2cpp_TypeInfo_var);
		int32_t L_16 = ((EnvironmentDepthManager_t66B25129AB8791DEB056A5AFAB14151358AAA631_StaticFields*)il2cpp_codegen_static_fields_for(EnvironmentDepthManager_t66B25129AB8791DEB056A5AFAB14151358AAA631_il2cpp_TypeInfo_var))->___DepthTextureID;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_17 = V_1;
		Shader_SetGlobalTexture_m6DAEF0F184187427D0B7EE64827BD95A482CC09C(L_16, L_17, NULL);
		bool L_18;
		L_18 = EnvironmentDepthManager_get_IsDepthAvailable_m46C6D9DCA227381A3840DBE6B41083EFB8FD132C_inline(__this, NULL);
		if (L_18)
		{
			goto IL_0098;
		}
	}
	{
		EnvironmentDepthManager_set_IsDepthAvailable_m77ABBDA4D0A9BFF1247642CE22A018F22ECDA762_inline(__this, (bool)1, NULL);
		int32_t L_19 = __this->____occlusionShadersMode;
		if (!L_19)
		{
			goto IL_0098;
		}
	}
	{
		int32_t L_20 = __this->____occlusionShadersMode;
		il2cpp_codegen_runtime_class_init_inline(EnvironmentDepthManager_t66B25129AB8791DEB056A5AFAB14151358AAA631_il2cpp_TypeInfo_var);
		EnvironmentDepthManager_SetOcclusionShaderKeywords_m5E0A4D11D6250C621884346B7E1A9CE72B443DD0(L_20, NULL);
	}

IL_0098:
	{
		int32_t L_21 = __this->____occlusionShadersMode;
		if ((!(((uint32_t)L_21) == ((uint32_t)2))))
		{
			goto IL_00a8;
		}
	}
	{
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_22 = V_1;
		EnvironmentDepthManager_PreprocessDepthTexture_m3446EA7F2AB6FEEE92A73344D2EC6DE9FBB02253(__this, L_22, NULL);
	}

IL_00a8:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnvironmentDepthManager_PreprocessDepthTexture_m3446EA7F2AB6FEEE92A73344D2EC6DE9FBB02253 (EnvironmentDepthManager_t66B25129AB8791DEB056A5AFAB14151358AAA631* __this, RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* ___0_depthTexture, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EnvironmentDepthManager_t66B25129AB8791DEB056A5AFAB14151358AAA631_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Graphics_t99CD970FFEA58171C70F54DF0C06D315BD452F2C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RenderBufferLoadActionU5BU5D_t49A752C09896D99A1F5734A4AFDE4588AB2883BA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RenderBufferStoreActionU5BU5D_tFEA8F5DD460573EA9F35FBEC5727D1804C5DCBF5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RenderBufferU5BU5D_t243AD088CC8449166000DC2F429023524FD855F5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD4F5A00EE4168A8128DDBCD07A1218D7BFEA7A37);
		s_Il2CppMethodInitialized = true;
	}
	RenderTargetSetup_tD71CE5727C526D33A6784394E0F9D9E2AB8CA86F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_0 = __this->____preprocessTexture;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_00ed;
		}
	}
	{
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_2 = ___0_depthTexture;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = VirtualFuncInvoker0< int32_t >::Invoke(4, L_2);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_4 = ___0_depthTexture;
		NullCheck(L_4);
		int32_t L_5;
		L_5 = VirtualFuncInvoker0< int32_t >::Invoke(6, L_4);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_6 = (RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27*)il2cpp_codegen_object_new(RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27_il2cpp_TypeInfo_var);
		RenderTexture__ctor_mD60FB2D8D9560774F2E21BAC0A0061CB17904EA3(L_6, L_3, L_5, ((int32_t)48), 0, NULL);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_7 = L_6;
		NullCheck(L_7);
		VirtualActionInvoker1< int32_t >::Invoke(9, L_7, 5);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_8 = L_7;
		NullCheck(L_8);
		RenderTexture_set_volumeDepth_mD9B1E6BA4BE6B1741427B34A23B9D48BA9493633(L_8, 2, NULL);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_9 = L_8;
		NullCheck(L_9);
		Object_set_name_mC79E6DC8FFD72479C90F0C4CC7F42A0FEAF5AE47(L_9, _stringLiteralD4F5A00EE4168A8128DDBCD07A1218D7BFEA7A37, NULL);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_10 = L_9;
		NullCheck(L_10);
		RenderTexture_set_depth_m3D8EF7C98634724B2DB8279387A81C4E19B5DA53(L_10, 0, NULL);
		__this->____preprocessTexture = L_10;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____preprocessTexture), (void*)L_10);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_11 = __this->____preprocessTexture;
		NullCheck(L_11);
		bool L_12;
		L_12 = RenderTexture_Create_mA6E4D3CCC84AC3F68E85AA0D6609E1692C672AD2(L_11, NULL);
		il2cpp_codegen_runtime_class_init_inline(EnvironmentDepthManager_t66B25129AB8791DEB056A5AFAB14151358AAA631_il2cpp_TypeInfo_var);
		int32_t L_13 = ((EnvironmentDepthManager_t66B25129AB8791DEB056A5AFAB14151358AAA631_StaticFields*)il2cpp_codegen_static_fields_for(EnvironmentDepthManager_t66B25129AB8791DEB056A5AFAB14151358AAA631_il2cpp_TypeInfo_var))->___PreprocessedEnvironmentDepthTexture;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_14 = __this->____preprocessTexture;
		Shader_SetGlobalTexture_m6DAEF0F184187427D0B7EE64827BD95A482CC09C(L_13, L_14, NULL);
		il2cpp_codegen_initobj((&V_0), sizeof(RenderTargetSetup_tD71CE5727C526D33A6784394E0F9D9E2AB8CA86F));
		RenderBufferU5BU5D_t243AD088CC8449166000DC2F429023524FD855F5* L_15 = (RenderBufferU5BU5D_t243AD088CC8449166000DC2F429023524FD855F5*)(RenderBufferU5BU5D_t243AD088CC8449166000DC2F429023524FD855F5*)SZArrayNew(RenderBufferU5BU5D_t243AD088CC8449166000DC2F429023524FD855F5_il2cpp_TypeInfo_var, (uint32_t)1);
		RenderBufferU5BU5D_t243AD088CC8449166000DC2F429023524FD855F5* L_16 = L_15;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_17 = __this->____preprocessTexture;
		NullCheck(L_17);
		RenderBuffer_tBE7B342979EF2FA36E24C8A7F9242212F5B89551 L_18;
		L_18 = RenderTexture_get_colorBuffer_mE043AF01C1B2FB73BDC9C82D78528A367089CDE0(L_17, NULL);
		NullCheck(L_16);
		(L_16)->SetAt(static_cast<il2cpp_array_size_t>(0), (RenderBuffer_tBE7B342979EF2FA36E24C8A7F9242212F5B89551)L_18);
		(&V_0)->___color = L_16;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___color), (void*)L_16);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_19 = __this->____preprocessTexture;
		NullCheck(L_19);
		RenderBuffer_tBE7B342979EF2FA36E24C8A7F9242212F5B89551 L_20;
		L_20 = RenderTexture_get_depthBuffer_mBBDFA14B3AC2AE4796795E89A0BCA59D54B859D5(L_19, NULL);
		(&V_0)->___depth = L_20;
		(&V_0)->___depthSlice = (-1);
		RenderBufferLoadActionU5BU5D_t49A752C09896D99A1F5734A4AFDE4588AB2883BA* L_21 = (RenderBufferLoadActionU5BU5D_t49A752C09896D99A1F5734A4AFDE4588AB2883BA*)(RenderBufferLoadActionU5BU5D_t49A752C09896D99A1F5734A4AFDE4588AB2883BA*)SZArrayNew(RenderBufferLoadActionU5BU5D_t49A752C09896D99A1F5734A4AFDE4588AB2883BA_il2cpp_TypeInfo_var, (uint32_t)1);
		RenderBufferLoadActionU5BU5D_t49A752C09896D99A1F5734A4AFDE4588AB2883BA* L_22 = L_21;
		NullCheck(L_22);
		(L_22)->SetAt(static_cast<il2cpp_array_size_t>(0), (int32_t)2);
		(&V_0)->___colorLoad = L_22;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___colorLoad), (void*)L_22);
		RenderBufferStoreActionU5BU5D_tFEA8F5DD460573EA9F35FBEC5727D1804C5DCBF5* L_23 = (RenderBufferStoreActionU5BU5D_tFEA8F5DD460573EA9F35FBEC5727D1804C5DCBF5*)(RenderBufferStoreActionU5BU5D_tFEA8F5DD460573EA9F35FBEC5727D1804C5DCBF5*)SZArrayNew(RenderBufferStoreActionU5BU5D_tFEA8F5DD460573EA9F35FBEC5727D1804C5DCBF5_il2cpp_TypeInfo_var, (uint32_t)1);
		(&V_0)->___colorStore = L_23;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___colorStore), (void*)L_23);
		(&V_0)->___depthLoad = 2;
		(&V_0)->___depthStore = 3;
		(&V_0)->___mipLevel = 0;
		(&V_0)->___cubemapFace = (-1);
		RenderTargetSetup_tD71CE5727C526D33A6784394E0F9D9E2AB8CA86F L_24 = V_0;
		__this->____preprocessRenderTargetSetup = L_24;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->____preprocessRenderTargetSetup))->___color), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->____preprocessRenderTargetSetup))->___colorLoad), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->____preprocessRenderTargetSetup))->___colorStore), (void*)NULL);
		#endif
	}

IL_00ed:
	{
		RenderTargetSetup_tD71CE5727C526D33A6784394E0F9D9E2AB8CA86F L_25 = __this->____preprocessRenderTargetSetup;
		il2cpp_codegen_runtime_class_init_inline(Graphics_t99CD970FFEA58171C70F54DF0C06D315BD452F2C_il2cpp_TypeInfo_var);
		Graphics_SetRenderTarget_m473C88BAC10F05E85918C154CB0426D05A1933D4(L_25, NULL);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_26 = __this->____preprocessMaterial;
		NullCheck(L_26);
		bool L_27;
		L_27 = Material_SetPass_mBB03542DFF4FAEADFCED332009F9D61B6DED75FE(L_26, 0, NULL);
		Graphics_DrawProceduralNow_m978B544E28AF7B83FD6FF4AC88C41C9BF66CDC62(0, 3, 2, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnvironmentDepthManager_Log_m1CB09C58585D4E275084C2E6DCB56920334BBE3E (int32_t ___0_type, String_t* ___1_msg, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ILogger_tD1F573C6DC829FBA987FA1EBA0A5FA64E0C2BC42_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		RuntimeObject* L_0;
		L_0 = Debug_get_unityLogger_m4FDE4D41C187123244FE13124DA636BB50C9C1E1_inline(NULL);
		int32_t L_1 = ___0_type;
		String_t* L_2 = ___1_msg;
		NullCheck(L_0);
		InterfaceActionInvoker2< int32_t, RuntimeObject* >::Invoke(3, ILogger_tD1F573C6DC829FBA987FA1EBA0A5FA64E0C2BC42_il2cpp_TypeInfo_var, L_0, L_1, L_2);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnvironmentDepthManager__ctor_m21A2BC6430D9332470D4AA443155413563A20F52 (EnvironmentDepthManager_t66B25129AB8791DEB056A5AFAB14151358AAA631* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->____occlusionShadersMode = 2;
		Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D* L_0 = (Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D*)(Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D*)SZArrayNew(Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D_il2cpp_TypeInfo_var, (uint32_t)2);
		__this->____reprojectionMatrices = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____reprojectionMatrices), (void*)L_0);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnvironmentDepthManager__cctor_mB5AE399ADCD05E59E531AED3129B2926C4A3B153 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EnvironmentDepthManager_t66B25129AB8791DEB056A5AFAB14151358AAA631_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral06E02AAD278C470CA00827078CCD2F85C887CBD0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5F224B2AEF4A637D33372AD5CB608CD3CE8013AF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB29005781C891F9AA15F6FF036E1C296DF7D185D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDE36140A6B900DD92158BBA056C0056D6031D25D);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0;
		L_0 = Shader_PropertyToID_mE98523D50F5656CAE89B30695C458253EB8956CA(_stringLiteralDE36140A6B900DD92158BBA056C0056D6031D25D, NULL);
		((EnvironmentDepthManager_t66B25129AB8791DEB056A5AFAB14151358AAA631_StaticFields*)il2cpp_codegen_static_fields_for(EnvironmentDepthManager_t66B25129AB8791DEB056A5AFAB14151358AAA631_il2cpp_TypeInfo_var))->___DepthTextureID = L_0;
		int32_t L_1;
		L_1 = Shader_PropertyToID_mE98523D50F5656CAE89B30695C458253EB8956CA(_stringLiteral06E02AAD278C470CA00827078CCD2F85C887CBD0, NULL);
		((EnvironmentDepthManager_t66B25129AB8791DEB056A5AFAB14151358AAA631_StaticFields*)il2cpp_codegen_static_fields_for(EnvironmentDepthManager_t66B25129AB8791DEB056A5AFAB14151358AAA631_il2cpp_TypeInfo_var))->___ReprojectionMatricesID = L_1;
		int32_t L_2;
		L_2 = Shader_PropertyToID_mE98523D50F5656CAE89B30695C458253EB8956CA(_stringLiteral5F224B2AEF4A637D33372AD5CB608CD3CE8013AF, NULL);
		((EnvironmentDepthManager_t66B25129AB8791DEB056A5AFAB14151358AAA631_StaticFields*)il2cpp_codegen_static_fields_for(EnvironmentDepthManager_t66B25129AB8791DEB056A5AFAB14151358AAA631_il2cpp_TypeInfo_var))->___ZBufferParamsID = L_2;
		int32_t L_3;
		L_3 = Shader_PropertyToID_mE98523D50F5656CAE89B30695C458253EB8956CA(_stringLiteralB29005781C891F9AA15F6FF036E1C296DF7D185D, NULL);
		((EnvironmentDepthManager_t66B25129AB8791DEB056A5AFAB14151358AAA631_StaticFields*)il2cpp_codegen_static_fields_for(EnvironmentDepthManager_t66B25129AB8791DEB056A5AFAB14151358AAA631_il2cpp_TypeInfo_var))->___PreprocessedEnvironmentDepthTexture = L_3;
		RuntimeObject* L_4;
		L_4 = EnvironmentDepthManager_CreateProvider_m35224046022B072044C09BCE9A58DF60117F03B1(NULL);
		((EnvironmentDepthManager_t66B25129AB8791DEB056A5AFAB14151358AAA631_StaticFields*)il2cpp_codegen_static_fields_for(EnvironmentDepthManager_t66B25129AB8791DEB056A5AFAB14151358AAA631_il2cpp_TypeInfo_var))->____provider = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&((EnvironmentDepthManager_t66B25129AB8791DEB056A5AFAB14151358AAA631_StaticFields*)il2cpp_codegen_static_fields_for(EnvironmentDepthManager_t66B25129AB8791DEB056A5AFAB14151358AAA631_il2cpp_TypeInfo_var))->____provider), (void*)L_4);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DepthProviderNotSupported_get_IsSupported_m34C21FF90DCAF1D795886B3E44869668D2AF2B5B (DepthProviderNotSupported_t921A3A2D107552501A0108FA3CCAF5843CBE8E46* __this, const RuntimeMethod* method) 
{
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DepthProviderNotSupported_set_RemoveHands_m4092087F7C37911FE0B780C159C45A6EB059654E (DepthProviderNotSupported_t921A3A2D107552501A0108FA3CCAF5843CBE8E46* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DepthProviderNotSupported_SetDepthEnabled_m1205999B3797AAE75239D5B0008F830AB484D40B (DepthProviderNotSupported_t921A3A2D107552501A0108FA3CCAF5843CBE8E46* __this, bool ___0_isEnabled, bool ___1_removeHands, const RuntimeMethod* method) 
{
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DepthFrameDesc_t8E03631D7F12D148E09C208091FBCA5C692E2DB2 DepthProviderNotSupported_GetFrameDesc_mDF51925532A90D3B0D8FA36B190EDF11A69006BA (DepthProviderNotSupported_t921A3A2D107552501A0108FA3CCAF5843CBE8E46* __this, int32_t ___0_eye, const RuntimeMethod* method) 
{
	DepthFrameDesc_t8E03631D7F12D148E09C208091FBCA5C692E2DB2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DepthProviderNotSupported_GetFrameDesc_mDF51925532A90D3B0D8FA36B190EDF11A69006BA_RuntimeMethod_var)));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DepthProviderNotSupported_GetDepthTextureId_m25108A6D6C920FFFC2E5A048B39CCB7DE076AC55 (DepthProviderNotSupported_t921A3A2D107552501A0108FA3CCAF5843CBE8E46* __this, uint32_t* ___0_textureId, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DepthProviderNotSupported_GetDepthTextureId_m25108A6D6C920FFFC2E5A048B39CCB7DE076AC55_RuntimeMethod_var)));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DepthProviderNotSupported__ctor_m36C707656C1F484EA4DF05DDA2435CEA343A9B4A (DepthProviderNotSupported_t921A3A2D107552501A0108FA3CCAF5843CBE8E46* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 EnvironmentDepthUtils_ComputeNdcToLinearDepthParameters_m4ED08BC1248832A75BCEE1B40D63F91EFA86F081 (float ___0_near, float ___1_far, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	{
		float L_0 = ___1_far;
		float L_1 = ___0_near;
		if ((((float)L_0) < ((float)L_1)))
		{
			goto IL_000c;
		}
	}
	{
		float L_2 = ___1_far;
		bool L_3;
		L_3 = Single_IsInfinity_m8D101DE5C104130734F6DCA3E6E86345B064E4AD_inline(L_2, NULL);
		if (!L_3)
		{
			goto IL_001c;
		}
	}

IL_000c:
	{
		float L_4 = ___0_near;
		V_0 = ((float)il2cpp_codegen_multiply((-2.0f), L_4));
		V_1 = (-1.0f);
		goto IL_0033;
	}

IL_001c:
	{
		float L_5 = ___1_far;
		float L_6 = ___0_near;
		float L_7 = ___1_far;
		float L_8 = ___0_near;
		V_0 = ((float)(((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply((-2.0f), L_5)), L_6))/((float)il2cpp_codegen_subtract(L_7, L_8))));
		float L_9 = ___1_far;
		float L_10 = ___0_near;
		float L_11 = ___1_far;
		float L_12 = ___0_near;
		V_1 = ((float)(((-((float)il2cpp_codegen_add(L_9, L_10))))/((float)il2cpp_codegen_subtract(L_11, L_12))));
	}

IL_0033:
	{
		float L_13 = V_0;
		float L_14 = V_1;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_15;
		memset((&L_15), 0, sizeof(L_15));
		Vector4__ctor_m96B2CD8B862B271F513AF0BDC2EABD58E4DBC813_inline((&L_15), L_13, L_14, (0.0f), (0.0f), NULL);
		return L_15;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 EnvironmentDepthUtils_CalculateReprojection_m5E3435EBDF139CCC6D1E006FF797311DF8ADF2E3 (DepthFrameDesc_t8E03631D7F12D148E09C208091FBCA5C692E2DB2 ___0_frameDesc, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EnvironmentDepthUtils_tF0B57ABF5A71BC39C607681F1611BD437291128A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		DepthFrameDesc_t8E03631D7F12D148E09C208091FBCA5C692E2DB2 L_0 = ___0_frameDesc;
		il2cpp_codegen_runtime_class_init_inline(EnvironmentDepthUtils_tF0B57ABF5A71BC39C607681F1611BD437291128A_il2cpp_TypeInfo_var);
		EnvironmentDepthUtils_CalculateDepthCameraMatrices_mEAFC3CA26D1CB1BB8D595409083E1B6EB21E8F60(L_0, (&V_0), (&V_1), NULL);
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_1 = V_0;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_2 = V_1;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_3;
		L_3 = Matrix4x4_op_Multiply_m75E91775655DCA8DFC8EDE0AB787285BB3935162(L_1, L_2, NULL);
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnvironmentDepthUtils_CalculateDepthCameraMatrices_mEAFC3CA26D1CB1BB8D595409083E1B6EB21E8F60 (DepthFrameDesc_t8E03631D7F12D148E09C208091FBCA5C692E2DB2 ___0_frameDesc, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6* ___1_projMatrix, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6* ___2_viewMatrix, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EnvironmentDepthUtils_tF0B57ABF5A71BC39C607681F1611BD437291128A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	float V_4 = 0.0f;
	float V_5 = 0.0f;
	float V_6 = 0.0f;
	float V_7 = 0.0f;
	float V_8 = 0.0f;
	float V_9 = 0.0f;
	float V_10 = 0.0f;
	float V_11 = 0.0f;
	float V_12 = 0.0f;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 V_13;
	memset((&V_13), 0, sizeof(V_13));
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_14;
	memset((&V_14), 0, sizeof(V_14));
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 V_15;
	memset((&V_15), 0, sizeof(V_15));
	{
		DepthFrameDesc_t8E03631D7F12D148E09C208091FBCA5C692E2DB2 L_0 = ___0_frameDesc;
		float L_1 = L_0.___fovLeftAngle;
		V_0 = L_1;
		DepthFrameDesc_t8E03631D7F12D148E09C208091FBCA5C692E2DB2 L_2 = ___0_frameDesc;
		float L_3 = L_2.___fovRightAngle;
		V_1 = L_3;
		DepthFrameDesc_t8E03631D7F12D148E09C208091FBCA5C692E2DB2 L_4 = ___0_frameDesc;
		float L_5 = L_4.___fovDownAngle;
		V_2 = L_5;
		DepthFrameDesc_t8E03631D7F12D148E09C208091FBCA5C692E2DB2 L_6 = ___0_frameDesc;
		float L_7 = L_6.___fovTopAngle;
		V_3 = L_7;
		DepthFrameDesc_t8E03631D7F12D148E09C208091FBCA5C692E2DB2 L_8 = ___0_frameDesc;
		float L_9 = L_8.___nearZ;
		V_4 = L_9;
		DepthFrameDesc_t8E03631D7F12D148E09C208091FBCA5C692E2DB2 L_10 = ___0_frameDesc;
		float L_11 = L_10.___farZ;
		V_5 = L_11;
		float L_12 = V_1;
		float L_13 = V_0;
		V_6 = ((float)((2.0f)/((float)il2cpp_codegen_add(L_12, L_13))));
		float L_14 = V_3;
		float L_15 = V_2;
		V_7 = ((float)((2.0f)/((float)il2cpp_codegen_add(L_14, L_15))));
		float L_16 = V_1;
		float L_17 = V_0;
		float L_18 = V_1;
		float L_19 = V_0;
		V_8 = ((float)(((float)il2cpp_codegen_subtract(L_16, L_17))/((float)il2cpp_codegen_add(L_18, L_19))));
		float L_20 = V_3;
		float L_21 = V_2;
		float L_22 = V_3;
		float L_23 = V_2;
		V_9 = ((float)(((float)il2cpp_codegen_subtract(L_20, L_21))/((float)il2cpp_codegen_add(L_22, L_23))));
		float L_24 = V_5;
		bool L_25;
		L_25 = Single_IsInfinity_m8D101DE5C104130734F6DCA3E6E86345B064E4AD_inline(L_24, NULL);
		if (!L_25)
		{
			goto IL_0070;
		}
	}
	{
		V_10 = (-1.0f);
		float L_26 = V_4;
		V_11 = ((float)il2cpp_codegen_multiply((-2.0f), L_26));
		goto IL_0092;
	}

IL_0070:
	{
		float L_27 = V_5;
		float L_28 = V_4;
		float L_29 = V_5;
		float L_30 = V_4;
		V_10 = ((float)(((-((float)il2cpp_codegen_add(L_27, L_28))))/((float)il2cpp_codegen_subtract(L_29, L_30))));
		float L_31 = V_5;
		float L_32 = V_4;
		float L_33 = V_5;
		float L_34 = V_4;
		V_11 = ((float)(((-((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply((2.0f), L_31)), L_32))))/((float)il2cpp_codegen_subtract(L_33, L_34))));
	}

IL_0092:
	{
		V_12 = (-1.0f);
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6* L_35 = ___1_projMatrix;
		il2cpp_codegen_initobj((&V_15), sizeof(Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6));
		float L_36 = V_6;
		(&V_15)->___m00 = L_36;
		(&V_15)->___m01 = (0.0f);
		float L_37 = V_8;
		(&V_15)->___m02 = L_37;
		(&V_15)->___m03 = (0.0f);
		(&V_15)->___m10 = (0.0f);
		float L_38 = V_7;
		(&V_15)->___m11 = L_38;
		float L_39 = V_9;
		(&V_15)->___m12 = L_39;
		(&V_15)->___m13 = (0.0f);
		(&V_15)->___m20 = (0.0f);
		(&V_15)->___m21 = (0.0f);
		float L_40 = V_10;
		(&V_15)->___m22 = L_40;
		float L_41 = V_11;
		(&V_15)->___m23 = L_41;
		(&V_15)->___m30 = (0.0f);
		(&V_15)->___m31 = (0.0f);
		float L_42 = V_12;
		(&V_15)->___m32 = L_42;
		(&V_15)->___m33 = (0.0f);
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_43 = V_15;
		*(Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6*)L_35 = L_43;
		DepthFrameDesc_t8E03631D7F12D148E09C208091FBCA5C692E2DB2 L_44 = ___0_frameDesc;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_45 = L_44.___createPoseRotation;
		V_13 = L_45;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_46 = V_13;
		float L_47 = L_46.___x;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_48 = V_13;
		float L_49 = L_48.___y;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_50 = V_13;
		float L_51 = L_50.___z;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_52 = V_13;
		float L_53 = L_52.___w;
		Quaternion__ctor_m868FD60AA65DD5A8AC0C5DEB0608381A8D85FCD8_inline((&V_14), L_47, L_49, L_51, L_53, NULL);
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6* L_54 = ___2_viewMatrix;
		DepthFrameDesc_t8E03631D7F12D148E09C208091FBCA5C692E2DB2 L_55 = ___0_frameDesc;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_56 = L_55.___createPoseLocation;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_57 = V_14;
		il2cpp_codegen_runtime_class_init_inline(EnvironmentDepthUtils_tF0B57ABF5A71BC39C607681F1611BD437291128A_il2cpp_TypeInfo_var);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_58 = ((EnvironmentDepthUtils_tF0B57ABF5A71BC39C607681F1611BD437291128A_StaticFields*)il2cpp_codegen_static_fields_for(EnvironmentDepthUtils_tF0B57ABF5A71BC39C607681F1611BD437291128A_il2cpp_TypeInfo_var))->____scalingVector3;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_59;
		L_59 = Matrix4x4_TRS_mCC04FD47347234B451ACC6CCD2CE6D02E1E0E1E3(L_56, L_57, L_58, NULL);
		V_15 = L_59;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_60;
		L_60 = Matrix4x4_get_inverse_m4F4A881CD789281EA90EB68CFD39F36C8A81E6BD((&V_15), NULL);
		*(Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6*)L_54 = L_60;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnvironmentDepthUtils__cctor_m2DF5D2142435F391BB3D02EC4A0EFC82248879D5 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EnvironmentDepthUtils_tF0B57ABF5A71BC39C607681F1611BD437291128A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_0), (1.0f), (1.0f), (-1.0f), NULL);
		((EnvironmentDepthUtils_tF0B57ABF5A71BC39C607681F1611BD437291128A_StaticFields*)il2cpp_codegen_static_fields_for(EnvironmentDepthUtils_tF0B57ABF5A71BC39C607681F1611BD437291128A_il2cpp_TypeInfo_var))->____scalingVector3 = L_0;
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool EnvironmentDepthManager_get_IsDepthAvailable_m46C6D9DCA227381A3840DBE6B41083EFB8FD132C_inline (EnvironmentDepthManager_t66B25129AB8791DEB056A5AFAB14151358AAA631* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___U3CIsDepthAvailableU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void EnvironmentDepthManager_set_IsDepthAvailable_m77ABBDA4D0A9BFF1247642CE22A018F22ECDA762_inline (EnvironmentDepthManager_t66B25129AB8791DEB056A5AFAB14151358AAA631* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		bool L_0 = ___0_value;
		__this->___U3CIsDepthAvailableU3Ek__BackingField = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* OVRCameraRig_get_trackingSpace_m76339871C7804C1BD14283FBF3D91268D4D87550_inline (OVRCameraRig_t7FC2BB0D30DED2B7F0C8914AF2B66E9F4CF891A9* __this, const RuntimeMethod* method) 
{
	{
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = __this->___U3CtrackingSpaceU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Debug_get_unityLogger_m4FDE4D41C187123244FE13124DA636BB50C9C1E1_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_StaticFields*)il2cpp_codegen_static_fields_for(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var))->___s_Logger;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Single_IsInfinity_m8D101DE5C104130734F6DCA3E6E86345B064E4AD_inline (float ___0_f, const RuntimeMethod* method) 
{
	{
		float L_0 = ___0_f;
		int32_t L_1;
		L_1 = BitConverter_SingleToInt32Bits_mC760C7CFC89725E3CF68DC45BE3A9A42A7E7DA73_inline(L_0, NULL);
		return (bool)((((int32_t)((int32_t)(L_1&((int32_t)2147483647LL)))) == ((int32_t)((int32_t)2139095040)))? 1 : 0);
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector4__ctor_m96B2CD8B862B271F513AF0BDC2EABD58E4DBC813_inline (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* __this, float ___0_x, float ___1_y, float ___2_z, float ___3_w, const RuntimeMethod* method) 
{
	{
		float L_0 = ___0_x;
		__this->___x = L_0;
		float L_1 = ___1_y;
		__this->___y = L_1;
		float L_2 = ___2_z;
		__this->___z = L_2;
		float L_3 = ___3_w;
		__this->___w = L_3;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Quaternion__ctor_m868FD60AA65DD5A8AC0C5DEB0608381A8D85FCD8_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* __this, float ___0_x, float ___1_y, float ___2_z, float ___3_w, const RuntimeMethod* method) 
{
	{
		float L_0 = ___0_x;
		__this->___x = L_0;
		float L_1 = ___1_y;
		__this->___y = L_1;
		float L_2 = ___2_z;
		__this->___z = L_2;
		float L_3 = ___3_w;
		__this->___w = L_3;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___0_x, float ___1_y, float ___2_z, const RuntimeMethod* method) 
{
	{
		float L_0 = ___0_x;
		__this->___x = L_0;
		float L_1 = ___1_y;
		__this->___y = L_1;
		float L_2 = ___2_z;
		__this->___z = L_2;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint32_t Nullable_1_GetValueOrDefault_m1534AD85F2094EE7E4C958FBEE356468ED7A1B51_gshared_inline (Nullable_1_tD043F01310E483091D0E9A5526C3425F13EF2099* __this, const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = __this->___value;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_mDEB82F7445A31CA12FE47E887EAE322E7ABB1B54_gshared_inline (Nullable_1_tD043F01310E483091D0E9A5526C3425F13EF2099* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___hasValue;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t BitConverter_SingleToInt32Bits_mC760C7CFC89725E3CF68DC45BE3A9A42A7E7DA73_inline (float ___0_value, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = *((int32_t*)((uintptr_t)(&___0_value)));
		return L_0;
	}
}
