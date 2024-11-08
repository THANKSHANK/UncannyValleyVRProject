#include "pch-cpp.hpp"





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
struct InvokerActionInvoker1;
template <typename T1>
struct InvokerActionInvoker1<T1*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1)
	{
		void* params[1] = { p1 };
		method->invoker_method(methodPtr, method, obj, params, params[0]);
	}
};
template <typename R, typename T1, typename T2, typename T3>
struct InvokerFuncInvoker3;
template <typename R, typename T1, typename T2, typename T3>
struct InvokerFuncInvoker3<R, T1*, T2*, T3>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2, T3 p3)
	{
		R ret;
		void* params[3] = { p1, p2, &p3 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};

struct IEnumerator_1_tD1A18354B3C639229FFF8B727DB5B2EDF52C259B;
struct IEnumerator_1_tD6A90A7446DA8E6CF865EDFBBF18C1200BB6D452;
struct IEnumerator_1_t239F6ACD0FC026E7FA70965FDE161517CD367AED;
struct IEnumerator_1_t684510AD3EBF9AFC7E48CCA0E7B14A6A854517C8;
struct IEnumerator_1_t9EBA015A0670545A091B6BE5A51191A69DD0F5EB;
struct IEnumerator_1_t43D2E4BA9246755F293DFA74F001FB1A70A648FD;
struct IEnumerator_1_t934D66F891883B7459C97B6E4E88904B9D9ED453;
struct IEnumerator_1_t69592F7A01FD92D90373FE1B774330D5D5EFC8A6;
struct IEnumerator_1_t75CB2681E18F7F2791528FA2CA60361FDB5DA08D;
struct IEnumerator_1_t48B09B24A80E91B22872AE26AEBD52E96746D13F;
struct IEnumerator_1_tFCD9ABC5F281622C9F9A181C17CA09A560E31A34;
struct IEnumerator_1_t190C2759ED31DFDDAE5C640EB7BCD60BC9D33F11;
struct IEnumerator_1_t2EE4ED305272A613683B43C92A11BB6A2E2DEB7A;
struct Queue_1_t488F4FFC87B785BACAAF18A6B2E9307E5451DF68;
struct SparseArray_1_t8D77ECC0E534C3B1A8C7403D9BDAC38694EAF242;
struct SparselyPopulatedArrayFragment_1_t2D5B093B992E7F6EEEBD059E1065DFEDDBE906FC;
struct SparselyPopulatedArray_1_t127D3C1977D038D143CA5A6CDD74A71117B5A614;
struct Stack_1_tF6C1720CA323403285CF731A334044D9C18E64AD;
struct Stack_1_t3197E0F5EA36E611B259A88751D31FC2396FE4B6;
struct Stack_1_t509AEAED71EF48FB8551C238C1BA01882CC654B9;
struct Stack_1_tC86D82FC3927CE2C02687F21B34C2E808D044724;
struct Stack_1_t8A661B4E11F715EF60608DE57485D9956E00C72E;
struct Stack_1_tAD790A47551563636908E21E4F08C54C0C323EB5;
struct Stack_1_tEEC1F6968B6388E4800894946805617A2E7EDFDA;
struct Stack_1_t3B750F239246A65B0BACFB807CBA1961CA8DE0A6;
struct Stack_1_tF3E5E7101E929741300A1CF7C159A6ED9B61621A;
struct Stack_1_tB568ED1852EE70A3EECA2CD66F2AB41DDEC262FA;
struct Stack_1_t90AD4B4BDD857A86CDEC55130FE1BAB9871F0CFE;
struct Stack_1_tAE809352224B7904D166288D1476FD4C2ED0D631;
struct Stack_1_t19851BEF370D35BCE2A6C3848C5148B09113067C;
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
struct HierarchyNodeU5BU5D_t58C5014EDF77A3B09F6BA5DEE95D32133F935DB2;
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
struct Int32EnumU5BU5D_t87B7DB802810C38016332669039EF42C487A081F;
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
struct LayoutHandleU5BU5D_tC6BCD3778F861245031A441921C9F04DD1CA1DCA;
struct Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct RectU5BU5D_t83297CB2E61BDF9D27DCB1A3E5C78EBCE9F7C993;
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
struct TextureIdU5BU5D_t03041DBB5C72B7E6F5F694A36DC5FEA75432188A;
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
struct UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83;
struct UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA;
struct UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299;
struct Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA;
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C;
struct Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD;
struct VertexU5BU5D_t2C3F4FF6AFD6D7E9DD7E1D69446FD8E8FC033185;
struct VertexAttributeDescriptorU5BU5D_t5D10E60612F12777F59B7E33939F9075DB0E02B2;
struct XRNodeStateU5BU5D_tEC64805398059D44C2FBA68AABAEFFB262B93845;
struct __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC;
struct jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F;
struct MatchContextU5BU5D_t49C4E5DA5C1F9B06B211BE6F94AC6BD4D0ABCAE5;
struct AllocSizeU5BU5D_tD7D6854D89AE82553F2200BC3B1F1A2D5455D9D8;
struct MaskMeshU5BU5D_t5C162FB3760E834B8B5B0C75F438C2D8106EC8D5;
struct DispatchContextU5BU5D_t23932F8BEADFC827A9CA5636867F6721AD971757;
struct FilterUnionU5BU5D_t8778FBF9BC7FE3230BCB228346D0C62BC9A0A94D;
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263;
struct ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129;
struct ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F;
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3;
struct Guid_t;
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
struct IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA;
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB;
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A;
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
struct String_t;
struct Type_t;
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;

IL2CPP_EXTERN_C RuntimeClass* ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RuntimeObject_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral0DB46164953228904843938099AF66650313FEE5;
IL2CPP_EXTERN_C String_t* _stringLiteral38E3DBC7FC353425EF3A98DC8DAC6689AF5FD1BE;
IL2CPP_EXTERN_C String_t* _stringLiteral569FEAE6AEE421BCD8D24F22865E84F808C2A1E4;
IL2CPP_EXTERN_C String_t* _stringLiteral6195D7DA68D16D4985AD1A1B4FD2841A43CDDE70;
IL2CPP_EXTERN_C String_t* _stringLiteral69508A540AFD085A745316DD7D6345B1C8CC662D;
IL2CPP_EXTERN_C String_t* _stringLiteral7F4C724BD10943E8B0B17A6E069F992E219EF5E8;
IL2CPP_EXTERN_C String_t* _stringLiteral95F0EE30865D503A05F1D329BC3FED0946B65C24;
IL2CPP_EXTERN_C String_t* _stringLiteral967D403A541A1026A83D548E5AD5CA800AD4EFB5;
IL2CPP_EXTERN_C String_t* _stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED;
IL2CPP_EXTERN_C String_t* _stringLiteralBD0381A992FDF4F7DA60E5D83689FE7FF6309CB8;
IL2CPP_EXTERN_C String_t* _stringLiteralC00660333703C551EA80371B54D0ADCEB74C33B4;
IL2CPP_EXTERN_C String_t* _stringLiteralC37D78082ACFC8DEE7B32D9351C6E433A074FEC7;
IL2CPP_EXTERN_C String_t* _stringLiteralECE618215BAC99C6FD12D8A273CC2118945EDCC8;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct HierarchyNodeU5BU5D_t58C5014EDF77A3B09F6BA5DEE95D32133F935DB2;
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
struct Int32EnumU5BU5D_t87B7DB802810C38016332669039EF42C487A081F;
struct LayoutHandleU5BU5D_tC6BCD3778F861245031A441921C9F04DD1CA1DCA;
struct Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct RectU5BU5D_t83297CB2E61BDF9D27DCB1A3E5C78EBCE9F7C993;
struct TextureIdU5BU5D_t03041DBB5C72B7E6F5F694A36DC5FEA75432188A;
struct UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83;
struct UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA;
struct UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299;
struct Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA;
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C;
struct Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD;
struct VertexU5BU5D_t2C3F4FF6AFD6D7E9DD7E1D69446FD8E8FC033185;
struct VertexAttributeDescriptorU5BU5D_t5D10E60612F12777F59B7E33939F9075DB0E02B2;
struct XRNodeStateU5BU5D_tEC64805398059D44C2FBA68AABAEFFB262B93845;
struct __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC;
struct jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F;
struct MatchContextU5BU5D_t49C4E5DA5C1F9B06B211BE6F94AC6BD4D0ABCAE5;
struct AllocSizeU5BU5D_tD7D6854D89AE82553F2200BC3B1F1A2D5455D9D8;
struct MaskMeshU5BU5D_t5C162FB3760E834B8B5B0C75F438C2D8106EC8D5;
struct DispatchContextU5BU5D_t23932F8BEADFC827A9CA5636867F6721AD971757;
struct FilterUnionU5BU5D_t8778FBF9BC7FE3230BCB228346D0C62BC9A0A94D;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
struct EmptyArray_1_tEE36C124EB5EC64529EC1C4323F97E3809663182  : public RuntimeObject
{
};
struct EmptyArray_1_tE700FA647008891EF64C31436B092B253493667F  : public RuntimeObject
{
};
struct EmptyArray_1_t0A27D963887A48FA040C718B868C2455F9AD84FA  : public RuntimeObject
{
};
struct EmptyArray_1_tEDF8F9BBADA93E90FFD39F096CE25393DC80F9B0  : public RuntimeObject
{
};
struct EmptyArray_1_t685951D47CCFA8F90AC66EE22811A68A045FB065  : public RuntimeObject
{
};
struct EmptyArray_1_tDF0DD7256B115243AA6BD5558417387A734240EE  : public RuntimeObject
{
};
struct EmptyArray_1_t08704EABC4CA3368B0E6C088FF83A3BDE70484C8  : public RuntimeObject
{
};
struct EmptyArray_1_t21B6219CD4389EFB0E40E69BEC0AE2E54C1AA17A  : public RuntimeObject
{
};
struct EmptyArray_1_tA0524EFBAA750B3D1DCF60FE6F2B25DE798675AD  : public RuntimeObject
{
};
struct EmptyArray_1_t77BFDB090CFC6AE661834F0BD4ED43833F4F079D  : public RuntimeObject
{
};
struct EmptyArray_1_tA1B9390A54D6283BFF40643DC2A697126A16E63B  : public RuntimeObject
{
};
struct EmptyArray_1_t541233638A05830B22F809CD9B22404F5D2777BC  : public RuntimeObject
{
};
struct EmptyArray_1_tF91FBA61857F9D60B55FD121DEADC9788D1FE016  : public RuntimeObject
{
};
struct EmptyArray_1_tF700941B1D2574A82BF40EA9058FBF99EBE14C5E  : public RuntimeObject
{
};
struct EmptyArray_1_t5D64CDB38E9BC651C8728695C6D0949FFDA864CC  : public RuntimeObject
{
};
struct EmptyArray_1_t6EF0DB735E40251F6DDFDAA3DBCE13757E3630B7  : public RuntimeObject
{
};
struct EmptyArray_1_tAE71C30AFA28CB4F4022694A3F5EC3B43AA73035  : public RuntimeObject
{
};
struct EmptyArray_1_tB610FBC2B87561A97224E274FC1699BCE50B2C60  : public RuntimeObject
{
};
struct EmptyArray_1_tA32003E1DE04BE9767FD72E5DC4FEA8D1B834759  : public RuntimeObject
{
};
struct EmptyArray_1_t3B3D5AF52AEDF79216E44946FD902C84652FE8AB  : public RuntimeObject
{
};
struct EmptyArray_1_t56E96B805AC512C5B6C4977E16E37E87E7F4B44D  : public RuntimeObject
{
};
struct EmptyArray_1_t086E7BE9FC6951BD76737BD9161D5B9AD213C850  : public RuntimeObject
{
};
struct EmptyArray_1_tA318588C5DED77377D0A402E2D318FA13329CEF0  : public RuntimeObject
{
};
struct SparseArray_1_t8D77ECC0E534C3B1A8C7403D9BDAC38694EAF242  : public RuntimeObject
{
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___m_array;
};
struct SparselyPopulatedArrayFragment_1_t2D5B093B992E7F6EEEBD059E1065DFEDDBE906FC  : public RuntimeObject
{
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ____elements;
	int32_t ____freeCount;
	SparselyPopulatedArrayFragment_1_t2D5B093B992E7F6EEEBD059E1065DFEDDBE906FC* ____next;
	SparselyPopulatedArrayFragment_1_t2D5B093B992E7F6EEEBD059E1065DFEDDBE906FC* ____prev;
};
struct SparselyPopulatedArray_1_t127D3C1977D038D143CA5A6CDD74A71117B5A614  : public RuntimeObject
{
	SparselyPopulatedArrayFragment_1_t2D5B093B992E7F6EEEBD059E1065DFEDDBE906FC* ____head;
	SparselyPopulatedArrayFragment_1_t2D5B093B992E7F6EEEBD059E1065DFEDDBE906FC* ____tail;
};
struct StackDebugView_1_t44367B01AFAD9690E05D510A1EBE184344E4BC56  : public RuntimeObject
{
};
struct Stack_1_tF6C1720CA323403285CF731A334044D9C18E64AD  : public RuntimeObject
{
	HierarchyNodeU5BU5D_t58C5014EDF77A3B09F6BA5DEE95D32133F935DB2* ____array;
	int32_t ____size;
	int32_t ____version;
	RuntimeObject* ____syncRoot;
};
struct Stack_1_t3197E0F5EA36E611B259A88751D31FC2396FE4B6  : public RuntimeObject
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____array;
	int32_t ____size;
	int32_t ____version;
	RuntimeObject* ____syncRoot;
};
struct Stack_1_t509AEAED71EF48FB8551C238C1BA01882CC654B9  : public RuntimeObject
{
	Int32EnumU5BU5D_t87B7DB802810C38016332669039EF42C487A081F* ____array;
	int32_t ____size;
	int32_t ____version;
	RuntimeObject* ____syncRoot;
};
struct Stack_1_tC86D82FC3927CE2C02687F21B34C2E808D044724  : public RuntimeObject
{
	LayoutHandleU5BU5D_tC6BCD3778F861245031A441921C9F04DD1CA1DCA* ____array;
	int32_t ____size;
	int32_t ____version;
	RuntimeObject* ____syncRoot;
};
struct Stack_1_t8A661B4E11F715EF60608DE57485D9956E00C72E  : public RuntimeObject
{
	Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D* ____array;
	int32_t ____size;
	int32_t ____version;
	RuntimeObject* ____syncRoot;
};
struct Stack_1_tAD790A47551563636908E21E4F08C54C0C323EB5  : public RuntimeObject
{
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ____array;
	int32_t ____size;
	int32_t ____version;
	RuntimeObject* ____syncRoot;
};
struct Stack_1_tEEC1F6968B6388E4800894946805617A2E7EDFDA  : public RuntimeObject
{
	RectU5BU5D_t83297CB2E61BDF9D27DCB1A3E5C78EBCE9F7C993* ____array;
	int32_t ____size;
	int32_t ____version;
	RuntimeObject* ____syncRoot;
};
struct Stack_1_t3B750F239246A65B0BACFB807CBA1961CA8DE0A6  : public RuntimeObject
{
	TextureIdU5BU5D_t03041DBB5C72B7E6F5F694A36DC5FEA75432188A* ____array;
	int32_t ____size;
	int32_t ____version;
	RuntimeObject* ____syncRoot;
};
struct Stack_1_tF3E5E7101E929741300A1CF7C159A6ED9B61621A  : public RuntimeObject
{
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ____array;
	int32_t ____size;
	int32_t ____version;
	RuntimeObject* ____syncRoot;
};
struct Stack_1_tB568ED1852EE70A3EECA2CD66F2AB41DDEC262FA  : public RuntimeObject
{
	MatchContextU5BU5D_t49C4E5DA5C1F9B06B211BE6F94AC6BD4D0ABCAE5* ____array;
	int32_t ____size;
	int32_t ____version;
	RuntimeObject* ____syncRoot;
};
struct Stack_1_t90AD4B4BDD857A86CDEC55130FE1BAB9871F0CFE  : public RuntimeObject
{
	AllocSizeU5BU5D_tD7D6854D89AE82553F2200BC3B1F1A2D5455D9D8* ____array;
	int32_t ____size;
	int32_t ____version;
	RuntimeObject* ____syncRoot;
};
struct Stack_1_tAE809352224B7904D166288D1476FD4C2ED0D631  : public RuntimeObject
{
	MaskMeshU5BU5D_t5C162FB3760E834B8B5B0C75F438C2D8106EC8D5* ____array;
	int32_t ____size;
	int32_t ____version;
	RuntimeObject* ____syncRoot;
};
struct Stack_1_t19851BEF370D35BCE2A6C3848C5148B09113067C  : public RuntimeObject
{
	DispatchContextU5BU5D_t23932F8BEADFC827A9CA5636867F6721AD971757* ____array;
	int32_t ____size;
	int32_t ____version;
	RuntimeObject* ____syncRoot;
};
struct MemberInfo_t  : public RuntimeObject
{
};
struct String_t  : public RuntimeObject
{
	int32_t ____stringLength;
	Il2CppChar ____firstChar;
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
struct Enumerator_t1ED2EFBA8997D05D3B6586A9FF9D467F8D5482F0 
{
	Stack_1_t3197E0F5EA36E611B259A88751D31FC2396FE4B6* ____stack;
	int32_t ____version;
	int32_t ____index;
	int32_t ____currentElement;
};
struct Enumerator_t852186DADC50D976C4BD8FE59C506354ED48B974 
{
	Stack_1_tAD790A47551563636908E21E4F08C54C0C323EB5* ____stack;
	int32_t ____version;
	int32_t ____index;
	RuntimeObject* ____currentElement;
};
typedef Il2CppFullySharedGenericStruct Enumerator_t9C40FA80DC7A4C63469E514386FAB9AE1039DF41;
struct NativeSlice_1_t0D1A1AB7A9C4768B84EB7420D04A90920533C78A 
{
	uint8_t* ___m_Buffer;
	int32_t ___m_Stride;
	int32_t ___m_Length;
};
struct NativeSlice_1_t66375568C4FF313931F4D2F646D64FE6A406BAD2 
{
	uint8_t* ___m_Buffer;
	int32_t ___m_Stride;
	int32_t ___m_Length;
};
struct SparselyPopulatedArrayAddInfo_1_tC49C525D3AFE80CB49D53650F40C9A49D4CDD19D 
{
	SparselyPopulatedArrayFragment_1_t2D5B093B992E7F6EEEBD059E1065DFEDDBE906FC* ____source;
	int32_t ____index;
};
struct StackScope_1_tB82A0C5F6E33138F56988FA681174EF82C9ADB26 
{
	Stack_1_tF3E5E7101E929741300A1CF7C159A6ED9B61621A* ____stack;
};
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	bool ___m_value;
};
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3 
{
	uint8_t ___m_value;
};
struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17 
{
	Il2CppChar ___m_value;
};
struct Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B 
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			int32_t ___rgba;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___rgba_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			uint8_t ___r;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint8_t ___r_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___g_OffsetPadding[1];
			uint8_t ___g;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___g_OffsetPadding_forAlignmentOnly[1];
			uint8_t ___g_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___b_OffsetPadding[2];
			uint8_t ___b;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___b_OffsetPadding_forAlignmentOnly[2];
			uint8_t ___b_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___a_OffsetPadding[3];
			uint8_t ___a;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___a_OffsetPadding_forAlignmentOnly[3];
			uint8_t ___a_forAlignmentOnly;
		};
	};
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
struct HierarchyNode_t6A6A738223CC5D7FB463CAF6F379C48726891704 
{
	int32_t ___m_Id;
	int32_t ___m_Version;
};
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	int32_t ___m_value;
};
struct IntPtr_t 
{
	void* ___m_value;
};
struct LayoutHandle_tCFE060947B4EDC8F11BF5B480181493FB578BEB6 
{
	int32_t ___Index;
	int32_t ___Version;
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
struct Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D 
{
	float ___m_XMin;
	float ___m_YMin;
	float ___m_Width;
	float ___m_Height;
};
struct TextureId_tFF4B4AAE53408AB10B0B89CCA5F7B50CF2535E58 
{
	int32_t ___m_Index;
};
struct UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455 
{
	uint16_t ___m_value;
};
struct UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B 
{
	uint32_t ___m_value;
};
struct UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF 
{
	uint64_t ___m_value;
};
struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 
{
	float ___x;
	float ___y;
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
struct MatchContext_t04110FFA271D89A23BC1918BE657634A7DC06253 
{
	int32_t ___valueIndex;
	int32_t ___matchedVariableCount;
};
struct AllocSize_t906784497648EDC3F45F4EA656C6858238BA2F7C 
{
	int32_t ___vertexCount;
	int32_t ___indexCount;
};
struct DispatchContext_tFA37790A5FF30508B0146B79E4FF1880EB82E455 
{
	uint32_t ___m_GateCount;
	Queue_1_t488F4FFC87B785BACAAF18A6B2E9307E5451DF68* ___m_Queue;
};
struct DispatchContext_tFA37790A5FF30508B0146B79E4FF1880EB82E455_marshaled_pinvoke
{
	uint32_t ___m_GateCount;
	Queue_1_t488F4FFC87B785BACAAF18A6B2E9307E5451DF68* ___m_Queue;
};
struct DispatchContext_tFA37790A5FF30508B0146B79E4FF1880EB82E455_marshaled_com
{
	uint32_t ___m_GateCount;
	Queue_1_t488F4FFC87B785BACAAF18A6B2E9307E5451DF68* ___m_Queue;
};
struct ByReference_1_t946C8F453CAF957A5339893AAA7FFF61CC68CECE 
{
	intptr_t ____value;
};
struct ByReference_1_tFE9AF4BD221B916FA525C43965FD23DB6BE5AC45 
{
	intptr_t ____value;
};
struct ByReference_1_tC177AF8388672C5485D5AAD1C913963A8C7B4548 
{
	intptr_t ____value;
};
struct ByReference_1_tC00E272CA69BF0EE3939D1F6DB60E788290A8313 
{
	intptr_t ____value;
};
struct ByReference_1_t81E3F5607EE2CA97897E6361C9CAE9862DC3DED6 
{
	intptr_t ____value;
};
struct ByReference_1_t4244D12B217F7C5BB8CD15E4BCAD5F8865A82C39 
{
	intptr_t ____value;
};
struct ByReference_1_tDB2E57963CDD5776F8F033EAE071CD9E7DB1359B 
{
	intptr_t ____value;
};
struct ByReference_1_tA646A142C83B2DEAE35CC1909169EA19C12201DC 
{
	intptr_t ____value;
};
struct ByReference_1_tB7B4B385EF92E13A860B3C68B929D02E132405C8 
{
	intptr_t ____value;
};
struct ByReference_1_t607C1F3BC28B0E21B969461CDB0720FB01A82141 
{
	intptr_t ____value;
};
struct ByReference_1_tE0748F88701C64E729013351521FC3EED28DE1DC 
{
	intptr_t ____value;
};
struct ByReference_1_t8B2B9618906FBC2D3654AB3D0B4D1A067A3C9D4C 
{
	intptr_t ____value;
};
struct Enumerator_t63C146B90BB6962E05FEDDDD803FA59E6F5798ED 
{
	Stack_1_tF6C1720CA323403285CF731A334044D9C18E64AD* ____stack;
	int32_t ____version;
	int32_t ____index;
	HierarchyNode_t6A6A738223CC5D7FB463CAF6F379C48726891704 ____currentElement;
};
struct Enumerator_t4A00EBE66EB6847DAB3AEB3D0799C4458493F714 
{
	Stack_1_tC86D82FC3927CE2C02687F21B34C2E808D044724* ____stack;
	int32_t ____version;
	int32_t ____index;
	LayoutHandle_tCFE060947B4EDC8F11BF5B480181493FB578BEB6 ____currentElement;
};
struct Enumerator_t1999C0BADD971016559CDAF90DA9DC67FAEF5B8A 
{
	Stack_1_t8A661B4E11F715EF60608DE57485D9956E00C72E* ____stack;
	int32_t ____version;
	int32_t ____index;
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ____currentElement;
};
struct Enumerator_t0757D472C179E7C385905619753AC7417A77B40A 
{
	Stack_1_tEEC1F6968B6388E4800894946805617A2E7EDFDA* ____stack;
	int32_t ____version;
	int32_t ____index;
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ____currentElement;
};
struct Enumerator_tE489CD82CEA07F70C1967F4E911F125AA65FD336 
{
	Stack_1_t3B750F239246A65B0BACFB807CBA1961CA8DE0A6* ____stack;
	int32_t ____version;
	int32_t ____index;
	TextureId_tFF4B4AAE53408AB10B0B89CCA5F7B50CF2535E58 ____currentElement;
};
struct Enumerator_t6B0EB72F34C4614A45F424103A9D11C74439E854 
{
	Stack_1_tB568ED1852EE70A3EECA2CD66F2AB41DDEC262FA* ____stack;
	int32_t ____version;
	int32_t ____index;
	MatchContext_t04110FFA271D89A23BC1918BE657634A7DC06253 ____currentElement;
};
struct Enumerator_tD97C98C8AA749156CECC60E8ED112C7771E69B84 
{
	Stack_1_t90AD4B4BDD857A86CDEC55130FE1BAB9871F0CFE* ____stack;
	int32_t ____version;
	int32_t ____index;
	AllocSize_t906784497648EDC3F45F4EA656C6858238BA2F7C ____currentElement;
};
struct Enumerator_t8E71E3162A14D26A339D3561D43523590F594C86 
{
	Stack_1_t19851BEF370D35BCE2A6C3848C5148B09113067C* ____stack;
	int32_t ____version;
	int32_t ____index;
	DispatchContext_tFA37790A5FF30508B0146B79E4FF1880EB82E455 ____currentElement;
};
struct AvailableTrackingData_t223756B90093C1B8974F04856043E3983BA37402 
{
	int32_t ___value__;
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
struct Int32Enum_tCBAC8BA2BFF3A845FA599F303093BBBA374B6F0C 
{
	int32_t ___value__;
};
struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	intptr_t ___value;
};
struct Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___tint;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___uv;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___xformClipPages;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___ids;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___flags;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___opacityColorPages;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___settingIndex;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___circle;
	float ___textureId;
};
struct VertexAttribute_tF34C1B76F20CA4AEC9D606BCD37A8A0C4A24C9A6 
{
	int32_t ___value__;
};
struct VertexAttributeFormat_tD714C51E671502B116ACE5E23F042BA80649D32F 
{
	int32_t ___value__;
};
struct XRNode_t41F4B2F0EDD99DB33C49EC731C8C7F9DF142B5FF 
{
	int32_t ___value__;
};
struct jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225 
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			bool ___z;
		};
		#pragma pack(pop, tp)
		struct
		{
			bool ___z_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			int8_t ___b;
		};
		#pragma pack(pop, tp)
		struct
		{
			int8_t ___b_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			Il2CppChar ___c;
		};
		#pragma pack(pop, tp)
		struct
		{
			Il2CppChar ___c_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			int16_t ___s;
		};
		#pragma pack(pop, tp)
		struct
		{
			int16_t ___s_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			int32_t ___i;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___i_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			int64_t ___j;
		};
		#pragma pack(pop, tp)
		struct
		{
			int64_t ___j_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			float ___f;
		};
		#pragma pack(pop, tp)
		struct
		{
			float ___f_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			double ___d;
		};
		#pragma pack(pop, tp)
		struct
		{
			double ___d_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			intptr_t ___l;
		};
		#pragma pack(pop, tp)
		struct
		{
			intptr_t ___l_forAlignmentOnly;
		};
	};
};
struct jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225_marshaled_pinvoke
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			int32_t ___z;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___z_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			int8_t ___b;
		};
		#pragma pack(pop, tp)
		struct
		{
			int8_t ___b_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			uint8_t ___c;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint8_t ___c_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			int16_t ___s;
		};
		#pragma pack(pop, tp)
		struct
		{
			int16_t ___s_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			int32_t ___i;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___i_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			int64_t ___j;
		};
		#pragma pack(pop, tp)
		struct
		{
			int64_t ___j_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			float ___f;
		};
		#pragma pack(pop, tp)
		struct
		{
			float ___f_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			double ___d;
		};
		#pragma pack(pop, tp)
		struct
		{
			double ___d_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			intptr_t ___l;
		};
		#pragma pack(pop, tp)
		struct
		{
			intptr_t ___l_forAlignmentOnly;
		};
	};
};
struct jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225_marshaled_com
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			int32_t ___z;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___z_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			int8_t ___b;
		};
		#pragma pack(pop, tp)
		struct
		{
			int8_t ___b_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			uint8_t ___c;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint8_t ___c_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			int16_t ___s;
		};
		#pragma pack(pop, tp)
		struct
		{
			int16_t ___s_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			int32_t ___i;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___i_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			int64_t ___j;
		};
		#pragma pack(pop, tp)
		struct
		{
			int64_t ___j_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			float ___f;
		};
		#pragma pack(pop, tp)
		struct
		{
			float ___f_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			double ___d;
		};
		#pragma pack(pop, tp)
		struct
		{
			double ___d_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			intptr_t ___l;
		};
		#pragma pack(pop, tp)
		struct
		{
			intptr_t ___l_forAlignmentOnly;
		};
	};
};
struct RawData_t37CAF2D3F74B7723974ED7CEEE9B297D8FA64ED0  : public RuntimeObject
{
	intptr_t ___Bounds;
	intptr_t ___Count;
	uint8_t ___Data;
};
struct RawData_t37CAF2D3F74B7723974ED7CEEE9B297D8FA64ED0_marshaled_pinvoke
{
	intptr_t ___Bounds;
	intptr_t ___Count;
	uint8_t ___Data;
};
struct RawData_t37CAF2D3F74B7723974ED7CEEE9B297D8FA64ED0_marshaled_com
{
	intptr_t ___Bounds;
	intptr_t ___Count;
	uint8_t ___Data;
};
struct MaskMesh_tBA4A29153655DB02C99D6BF624A64795A084806B 
{
	NativeSlice_1_t66375568C4FF313931F4D2F646D64FE6A406BAD2 ___vertices;
	NativeSlice_1_t0D1A1AB7A9C4768B84EB7420D04A90920533C78A ___indices;
	int32_t ___indexOffset;
};
struct SpaceComponentType_tCD4A67FF4EBD7D9997F959066452AFAD5255910E 
{
	int32_t ___value__;
};
struct SpaceDiscoveryFilterType_t50E46DE8466114FD8B0B4A8BE5D1E422E823F3EE 
{
	int32_t ___value__;
};
struct Enumerator_t0D7F1F6081F1B6DDB263573004129C443F04F41C 
{
	Stack_1_t509AEAED71EF48FB8551C238C1BA01882CC654B9* ____stack;
	int32_t ____version;
	int32_t ____index;
	int32_t ____currentElement;
};
struct Enumerator_t3B367DB4E88110F0F90313AF159B54F9F2189310 
{
	Stack_1_tAE809352224B7904D166288D1476FD4C2ED0D631* ____stack;
	int32_t ____version;
	int32_t ____index;
	MaskMesh_tBA4A29153655DB02C99D6BF624A64795A084806B ____currentElement;
};
struct ReadOnlySpan_1_tA2EFC117098BD2B38ADBF809AA976D9F3C13654F 
{
	ByReference_1_t946C8F453CAF957A5339893AAA7FFF61CC68CECE ____pointer;
	int32_t ____length;
};
struct ReadOnlySpan_1_t57F4BBC957039E8E904443D25F3A78AE60DC94B4 
{
	ByReference_1_tFE9AF4BD221B916FA525C43965FD23DB6BE5AC45 ____pointer;
	int32_t ____length;
};
struct ReadOnlySpan_1_tD579EC24AE7548EFE16428C9DC0EE0423C0FDA0F 
{
	ByReference_1_tC177AF8388672C5485D5AAD1C913963A8C7B4548 ____pointer;
	int32_t ____length;
};
struct ReadOnlySpan_1_t30635DB490E7110B945ABB8301B19F8955AD4B64 
{
	ByReference_1_tC00E272CA69BF0EE3939D1F6DB60E788290A8313 ____pointer;
	int32_t ____length;
};
struct ReadOnlySpan_1_t8C2C24B6B10C9EAC8D8A8C92BED569A12615C2AE 
{
	ByReference_1_t81E3F5607EE2CA97897E6361C9CAE9862DC3DED6 ____pointer;
	int32_t ____length;
};
struct ReadOnlySpan_1_tBB5A0F9CEA726E10BE8D59F79D891AC9218E61F6 
{
	ByReference_1_t4244D12B217F7C5BB8CD15E4BCAD5F8865A82C39 ____pointer;
	int32_t ____length;
};
struct ReadOnlySpan_1_t63019D57052C95CA42C48E9757509354A8099A5A 
{
	ByReference_1_tDB2E57963CDD5776F8F033EAE071CD9E7DB1359B ____pointer;
	int32_t ____length;
};
struct ReadOnlySpan_1_tD6632037B9C2A00A111E1627D34F86F9A6611006 
{
	ByReference_1_tA646A142C83B2DEAE35CC1909169EA19C12201DC ____pointer;
	int32_t ____length;
};
struct ReadOnlySpan_1_tC8B9E9EA565116C6C5FB765E32BA552A1E45E3C5 
{
	ByReference_1_tB7B4B385EF92E13A860B3C68B929D02E132405C8 ____pointer;
	int32_t ____length;
};
struct ReadOnlySpan_1_tC416A5627E04F69CA2947A2A13F0A1DF096CABAC 
{
	ByReference_1_t607C1F3BC28B0E21B969461CDB0720FB01A82141 ____pointer;
	int32_t ____length;
};
struct ReadOnlySpan_1_tEC1E786ADECA91AF68E558734868FBB77E05D964 
{
	ByReference_1_tE0748F88701C64E729013351521FC3EED28DE1DC ____pointer;
	int32_t ____length;
};
struct ReadOnlySpan_1_t16830A9FEE9E2F3C956F2B8444295F2393BFF6F6 
{
	ByReference_1_t8B2B9618906FBC2D3654AB3D0B4D1A067A3C9D4C ____pointer;
	int32_t ____length;
};
struct Span_1_t3C28155FFD2FA88D962FCE88A14C370626303A8D 
{
	ByReference_1_t946C8F453CAF957A5339893AAA7FFF61CC68CECE ____pointer;
	int32_t ____length;
};
struct Span_1_tC47CA3FDABAC657528EC838C3FEB05AA0D4480EA 
{
	ByReference_1_tFE9AF4BD221B916FA525C43965FD23DB6BE5AC45 ____pointer;
	int32_t ____length;
};
struct Span_1_t2EECFBFD7BF99470FF5E3884902CE388B17BBDD3 
{
	ByReference_1_tC177AF8388672C5485D5AAD1C913963A8C7B4548 ____pointer;
	int32_t ____length;
};
struct Span_1_t176257933B4F95507A92292ED5363CE3EFE12BB5 
{
	ByReference_1_tC00E272CA69BF0EE3939D1F6DB60E788290A8313 ____pointer;
	int32_t ____length;
};
struct Span_1_t460D4E78469192619B0075C15897A6987393AAF9 
{
	ByReference_1_t81E3F5607EE2CA97897E6361C9CAE9862DC3DED6 ____pointer;
	int32_t ____length;
};
struct Span_1_t993DF21D9162C9A28F81991FA4EABACF87A3BAD1 
{
	ByReference_1_t4244D12B217F7C5BB8CD15E4BCAD5F8865A82C39 ____pointer;
	int32_t ____length;
};
struct Span_1_tC33D382E526B4F8C6EDCA373AD4345BA58673D8E 
{
	ByReference_1_tDB2E57963CDD5776F8F033EAE071CD9E7DB1359B ____pointer;
	int32_t ____length;
};
struct Span_1_tA5C1C4A28024D89A0077601B805025F51EFEE6E0 
{
	ByReference_1_tA646A142C83B2DEAE35CC1909169EA19C12201DC ____pointer;
	int32_t ____length;
};
struct Span_1_t2C186CD9311CD6C5819274CD880486487FC65AD5 
{
	ByReference_1_tB7B4B385EF92E13A860B3C68B929D02E132405C8 ____pointer;
	int32_t ____length;
};
struct Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54 
{
	ByReference_1_t607C1F3BC28B0E21B969461CDB0720FB01A82141 ____pointer;
	int32_t ____length;
};
struct Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 
{
	ByReference_1_tE0748F88701C64E729013351521FC3EED28DE1DC ____pointer;
	int32_t ____length;
};
struct Span_1_t73939D05896281666AE0EFF73CA9AA212455FFCB 
{
	ByReference_1_t8B2B9618906FBC2D3654AB3D0B4D1A067A3C9D4C ____pointer;
	int32_t ____length;
};
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};
struct Type_t  : public MemberInfo_t
{
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ____impl;
};
struct VertexAttributeDescriptor_tD4231FBF57335465D16308D2A18E8E83D36BFA76 
{
	int32_t ___U3CattributeU3Ek__BackingField;
	int32_t ___U3CformatU3Ek__BackingField;
	int32_t ___U3CdimensionU3Ek__BackingField;
	int32_t ___U3CstreamU3Ek__BackingField;
};
struct XRNodeState_t683158812A1D80A6BC73DB97405BB0B795A9111A 
{
	int32_t ___m_Type;
	int32_t ___m_AvailableFields;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Position;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___m_Rotation;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Velocity;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_AngularVelocity;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Acceleration;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_AngularAcceleration;
	int32_t ___m_Tracked;
	uint64_t ___m_UniqueID;
};
struct SpaceDiscoveryFilterInfoComponents_tFE3C27C1DF3BCB9C439ABD02BB4F7ED3D95AF421 
{
	int32_t ___Type;
	int32_t ___Component;
};
struct SpaceDiscoveryFilterInfoIds_t34A4026061DCD863BE49C3F98454B0069E802D8A 
{
	int32_t ___Type;
	int32_t ___NumIds;
	Guid_t* ___Ids;
};
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
	String_t* ____paramName;
};
struct ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};
struct FilterUnion_t85E549621A2CC33D9102C62C6D82B0865FF80D03 
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			int32_t ___Type;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___Type_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			SpaceDiscoveryFilterInfoComponents_tFE3C27C1DF3BCB9C439ABD02BB4F7ED3D95AF421 ___ComponentFilter;
		};
		#pragma pack(pop, tp)
		struct
		{
			SpaceDiscoveryFilterInfoComponents_tFE3C27C1DF3BCB9C439ABD02BB4F7ED3D95AF421 ___ComponentFilter_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			SpaceDiscoveryFilterInfoIds_t34A4026061DCD863BE49C3F98454B0069E802D8A ___IdFilter;
		};
		#pragma pack(pop, tp)
		struct
		{
			SpaceDiscoveryFilterInfoIds_t34A4026061DCD863BE49C3F98454B0069E802D8A ___IdFilter_forAlignmentOnly;
		};
	};
};
struct ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129  : public ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263
{
};
struct ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F  : public ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263
{
	RuntimeObject* ____actualValue;
};
struct EmptyArray_1_tEE36C124EB5EC64529EC1C4323F97E3809663182_StaticFields
{
	HierarchyNodeU5BU5D_t58C5014EDF77A3B09F6BA5DEE95D32133F935DB2* ___Value;
};
struct EmptyArray_1_tE700FA647008891EF64C31436B092B253493667F_StaticFields
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___Value;
};
struct EmptyArray_1_t0A27D963887A48FA040C718B868C2455F9AD84FA_StaticFields
{
	Int32EnumU5BU5D_t87B7DB802810C38016332669039EF42C487A081F* ___Value;
};
struct EmptyArray_1_tEDF8F9BBADA93E90FFD39F096CE25393DC80F9B0_StaticFields
{
	LayoutHandleU5BU5D_tC6BCD3778F861245031A441921C9F04DD1CA1DCA* ___Value;
};
struct EmptyArray_1_t685951D47CCFA8F90AC66EE22811A68A045FB065_StaticFields
{
	Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D* ___Value;
};
struct EmptyArray_1_tDF0DD7256B115243AA6BD5558417387A734240EE_StaticFields
{
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___Value;
};
struct EmptyArray_1_t08704EABC4CA3368B0E6C088FF83A3BDE70484C8_StaticFields
{
	RectU5BU5D_t83297CB2E61BDF9D27DCB1A3E5C78EBCE9F7C993* ___Value;
};
struct EmptyArray_1_t21B6219CD4389EFB0E40E69BEC0AE2E54C1AA17A_StaticFields
{
	TextureIdU5BU5D_t03041DBB5C72B7E6F5F694A36DC5FEA75432188A* ___Value;
};
struct EmptyArray_1_tA0524EFBAA750B3D1DCF60FE6F2B25DE798675AD_StaticFields
{
	UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* ___Value;
};
struct EmptyArray_1_t77BFDB090CFC6AE661834F0BD4ED43833F4F079D_StaticFields
{
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___Value;
};
struct EmptyArray_1_tA1B9390A54D6283BFF40643DC2A697126A16E63B_StaticFields
{
	UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___Value;
};
struct EmptyArray_1_t541233638A05830B22F809CD9B22404F5D2777BC_StaticFields
{
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___Value;
};
struct EmptyArray_1_tF91FBA61857F9D60B55FD121DEADC9788D1FE016_StaticFields
{
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___Value;
};
struct EmptyArray_1_tF700941B1D2574A82BF40EA9058FBF99EBE14C5E_StaticFields
{
	Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* ___Value;
};
struct EmptyArray_1_t5D64CDB38E9BC651C8728695C6D0949FFDA864CC_StaticFields
{
	VertexU5BU5D_t2C3F4FF6AFD6D7E9DD7E1D69446FD8E8FC033185* ___Value;
};
struct EmptyArray_1_t6EF0DB735E40251F6DDFDAA3DBCE13757E3630B7_StaticFields
{
	VertexAttributeDescriptorU5BU5D_t5D10E60612F12777F59B7E33939F9075DB0E02B2* ___Value;
};
struct EmptyArray_1_tAE71C30AFA28CB4F4022694A3F5EC3B43AA73035_StaticFields
{
	XRNodeStateU5BU5D_tEC64805398059D44C2FBA68AABAEFFB262B93845* ___Value;
};
struct EmptyArray_1_tB610FBC2B87561A97224E274FC1699BCE50B2C60_StaticFields
{
	jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* ___Value;
};
struct EmptyArray_1_tA32003E1DE04BE9767FD72E5DC4FEA8D1B834759_StaticFields
{
	MatchContextU5BU5D_t49C4E5DA5C1F9B06B211BE6F94AC6BD4D0ABCAE5* ___Value;
};
struct EmptyArray_1_t3B3D5AF52AEDF79216E44946FD902C84652FE8AB_StaticFields
{
	AllocSizeU5BU5D_tD7D6854D89AE82553F2200BC3B1F1A2D5455D9D8* ___Value;
};
struct EmptyArray_1_t56E96B805AC512C5B6C4977E16E37E87E7F4B44D_StaticFields
{
	MaskMeshU5BU5D_t5C162FB3760E834B8B5B0C75F438C2D8106EC8D5* ___Value;
};
struct EmptyArray_1_t086E7BE9FC6951BD76737BD9161D5B9AD213C850_StaticFields
{
	DispatchContextU5BU5D_t23932F8BEADFC827A9CA5636867F6721AD971757* ___Value;
};
struct EmptyArray_1_tA318588C5DED77377D0A402E2D318FA13329CEF0_StaticFields
{
	FilterUnionU5BU5D_t8778FBF9BC7FE3230BCB228346D0C62BC9A0A94D* ___Value;
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
struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17_StaticFields
{
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___s_categoryForLatin1;
};
struct HierarchyNode_t6A6A738223CC5D7FB463CAF6F379C48726891704_StaticFields
{
	HierarchyNode_t6A6A738223CC5D7FB463CAF6F379C48726891704 ___s_Null;
};
struct IntPtr_t_StaticFields
{
	intptr_t ___Zero;
};
struct Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_StaticFields
{
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___zeroMatrix;
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___identityMatrix;
};
struct TextureId_tFF4B4AAE53408AB10B0B89CCA5F7B50CF2535E58_StaticFields
{
	TextureId_tFF4B4AAE53408AB10B0B89CCA5F7B50CF2535E58 ___invalid;
};
struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_StaticFields
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___zeroVector;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___oneVector;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___upVector;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___downVector;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___leftVector;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___rightVector;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___positiveInfinityVector;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___negativeInfinityVector;
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
struct Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7_StaticFields
{
	float ___nearZ;
};
struct Type_t_StaticFields
{
	Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235* ___s_defaultBinder;
	Il2CppChar ___Delimiter;
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___EmptyTypes;
	RuntimeObject* ___Missing;
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterAttribute;
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterName;
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterNameIgnoreCase;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
struct UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83  : public RuntimeArray
{
	ALIGN_FIELD (8) uint16_t m_Items[1];

	inline uint16_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline uint16_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, uint16_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline uint16_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline uint16_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, uint16_t value)
	{
		m_Items[index] = value;
	}
};
struct UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA  : public RuntimeArray
{
	ALIGN_FIELD (8) uint32_t m_Items[1];

	inline uint32_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline uint32_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, uint32_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline uint32_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline uint32_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, uint32_t value)
	{
		m_Items[index] = value;
	}
};
struct UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299  : public RuntimeArray
{
	ALIGN_FIELD (8) uint64_t m_Items[1];

	inline uint64_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline uint64_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, uint64_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline uint64_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline uint64_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, uint64_t value)
	{
		m_Items[index] = value;
	}
};
struct Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA  : public RuntimeArray
{
	ALIGN_FIELD (8) Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 m_Items[1];

	inline Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 value)
	{
		m_Items[index] = value;
	}
};
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C  : public RuntimeArray
{
	ALIGN_FIELD (8) Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 m_Items[1];

	inline Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 value)
	{
		m_Items[index] = value;
	}
};
struct Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD  : public RuntimeArray
{
	ALIGN_FIELD (8) Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 m_Items[1];

	inline Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 value)
	{
		m_Items[index] = value;
	}
};
struct VertexU5BU5D_t2C3F4FF6AFD6D7E9DD7E1D69446FD8E8FC033185  : public RuntimeArray
{
	ALIGN_FIELD (8) Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7 m_Items[1];

	inline Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7 value)
	{
		m_Items[index] = value;
	}
};
struct VertexAttributeDescriptorU5BU5D_t5D10E60612F12777F59B7E33939F9075DB0E02B2  : public RuntimeArray
{
	ALIGN_FIELD (8) VertexAttributeDescriptor_tD4231FBF57335465D16308D2A18E8E83D36BFA76 m_Items[1];

	inline VertexAttributeDescriptor_tD4231FBF57335465D16308D2A18E8E83D36BFA76 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline VertexAttributeDescriptor_tD4231FBF57335465D16308D2A18E8E83D36BFA76* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, VertexAttributeDescriptor_tD4231FBF57335465D16308D2A18E8E83D36BFA76 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline VertexAttributeDescriptor_tD4231FBF57335465D16308D2A18E8E83D36BFA76 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline VertexAttributeDescriptor_tD4231FBF57335465D16308D2A18E8E83D36BFA76* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, VertexAttributeDescriptor_tD4231FBF57335465D16308D2A18E8E83D36BFA76 value)
	{
		m_Items[index] = value;
	}
};
struct XRNodeStateU5BU5D_tEC64805398059D44C2FBA68AABAEFFB262B93845  : public RuntimeArray
{
	ALIGN_FIELD (8) XRNodeState_t683158812A1D80A6BC73DB97405BB0B795A9111A m_Items[1];

	inline XRNodeState_t683158812A1D80A6BC73DB97405BB0B795A9111A GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline XRNodeState_t683158812A1D80A6BC73DB97405BB0B795A9111A* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, XRNodeState_t683158812A1D80A6BC73DB97405BB0B795A9111A value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline XRNodeState_t683158812A1D80A6BC73DB97405BB0B795A9111A GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline XRNodeState_t683158812A1D80A6BC73DB97405BB0B795A9111A* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, XRNodeState_t683158812A1D80A6BC73DB97405BB0B795A9111A value)
	{
		m_Items[index] = value;
	}
};
struct __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC  : public RuntimeArray
{
	ALIGN_FIELD (8) uint8_t m_Items[1];

	inline uint8_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + il2cpp_array_calc_byte_offset(this, index);
	}
	inline uint8_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + il2cpp_array_calc_byte_offset(this, index);
	}
};
struct jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F  : public RuntimeArray
{
	ALIGN_FIELD (8) jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225 m_Items[1];

	inline jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225 value)
	{
		m_Items[index] = value;
	}
};
struct FilterUnionU5BU5D_t8778FBF9BC7FE3230BCB228346D0C62BC9A0A94D  : public RuntimeArray
{
	ALIGN_FIELD (8) FilterUnion_t85E549621A2CC33D9102C62C6D82B0865FF80D03 m_Items[1];

	inline FilterUnion_t85E549621A2CC33D9102C62C6D82B0865FF80D03 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline FilterUnion_t85E549621A2CC33D9102C62C6D82B0865FF80D03* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, FilterUnion_t85E549621A2CC33D9102C62C6D82B0865FF80D03 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline FilterUnion_t85E549621A2CC33D9102C62C6D82B0865FF80D03 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline FilterUnion_t85E549621A2CC33D9102C62C6D82B0865FF80D03* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, FilterUnion_t85E549621A2CC33D9102C62C6D82B0865FF80D03 value)
	{
		m_Items[index] = value;
	}
};
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918  : public RuntimeArray
{
	ALIGN_FIELD (8) RuntimeObject* m_Items[1];

	inline RuntimeObject* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
struct HierarchyNodeU5BU5D_t58C5014EDF77A3B09F6BA5DEE95D32133F935DB2  : public RuntimeArray
{
	ALIGN_FIELD (8) HierarchyNode_t6A6A738223CC5D7FB463CAF6F379C48726891704 m_Items[1];

	inline HierarchyNode_t6A6A738223CC5D7FB463CAF6F379C48726891704 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline HierarchyNode_t6A6A738223CC5D7FB463CAF6F379C48726891704* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, HierarchyNode_t6A6A738223CC5D7FB463CAF6F379C48726891704 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline HierarchyNode_t6A6A738223CC5D7FB463CAF6F379C48726891704 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline HierarchyNode_t6A6A738223CC5D7FB463CAF6F379C48726891704* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, HierarchyNode_t6A6A738223CC5D7FB463CAF6F379C48726891704 value)
	{
		m_Items[index] = value;
	}
};
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C  : public RuntimeArray
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
struct Int32EnumU5BU5D_t87B7DB802810C38016332669039EF42C487A081F  : public RuntimeArray
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
struct LayoutHandleU5BU5D_tC6BCD3778F861245031A441921C9F04DD1CA1DCA  : public RuntimeArray
{
	ALIGN_FIELD (8) LayoutHandle_tCFE060947B4EDC8F11BF5B480181493FB578BEB6 m_Items[1];

	inline LayoutHandle_tCFE060947B4EDC8F11BF5B480181493FB578BEB6 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline LayoutHandle_tCFE060947B4EDC8F11BF5B480181493FB578BEB6* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, LayoutHandle_tCFE060947B4EDC8F11BF5B480181493FB578BEB6 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline LayoutHandle_tCFE060947B4EDC8F11BF5B480181493FB578BEB6 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline LayoutHandle_tCFE060947B4EDC8F11BF5B480181493FB578BEB6* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, LayoutHandle_tCFE060947B4EDC8F11BF5B480181493FB578BEB6 value)
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
struct RectU5BU5D_t83297CB2E61BDF9D27DCB1A3E5C78EBCE9F7C993  : public RuntimeArray
{
	ALIGN_FIELD (8) Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D m_Items[1];

	inline Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D value)
	{
		m_Items[index] = value;
	}
};
struct TextureIdU5BU5D_t03041DBB5C72B7E6F5F694A36DC5FEA75432188A  : public RuntimeArray
{
	ALIGN_FIELD (8) TextureId_tFF4B4AAE53408AB10B0B89CCA5F7B50CF2535E58 m_Items[1];

	inline TextureId_tFF4B4AAE53408AB10B0B89CCA5F7B50CF2535E58 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline TextureId_tFF4B4AAE53408AB10B0B89CCA5F7B50CF2535E58* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, TextureId_tFF4B4AAE53408AB10B0B89CCA5F7B50CF2535E58 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline TextureId_tFF4B4AAE53408AB10B0B89CCA5F7B50CF2535E58 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline TextureId_tFF4B4AAE53408AB10B0B89CCA5F7B50CF2535E58* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, TextureId_tFF4B4AAE53408AB10B0B89CCA5F7B50CF2535E58 value)
	{
		m_Items[index] = value;
	}
};
struct MatchContextU5BU5D_t49C4E5DA5C1F9B06B211BE6F94AC6BD4D0ABCAE5  : public RuntimeArray
{
	ALIGN_FIELD (8) MatchContext_t04110FFA271D89A23BC1918BE657634A7DC06253 m_Items[1];

	inline MatchContext_t04110FFA271D89A23BC1918BE657634A7DC06253 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline MatchContext_t04110FFA271D89A23BC1918BE657634A7DC06253* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, MatchContext_t04110FFA271D89A23BC1918BE657634A7DC06253 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline MatchContext_t04110FFA271D89A23BC1918BE657634A7DC06253 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline MatchContext_t04110FFA271D89A23BC1918BE657634A7DC06253* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, MatchContext_t04110FFA271D89A23BC1918BE657634A7DC06253 value)
	{
		m_Items[index] = value;
	}
};
struct AllocSizeU5BU5D_tD7D6854D89AE82553F2200BC3B1F1A2D5455D9D8  : public RuntimeArray
{
	ALIGN_FIELD (8) AllocSize_t906784497648EDC3F45F4EA656C6858238BA2F7C m_Items[1];

	inline AllocSize_t906784497648EDC3F45F4EA656C6858238BA2F7C GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline AllocSize_t906784497648EDC3F45F4EA656C6858238BA2F7C* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, AllocSize_t906784497648EDC3F45F4EA656C6858238BA2F7C value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline AllocSize_t906784497648EDC3F45F4EA656C6858238BA2F7C GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline AllocSize_t906784497648EDC3F45F4EA656C6858238BA2F7C* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, AllocSize_t906784497648EDC3F45F4EA656C6858238BA2F7C value)
	{
		m_Items[index] = value;
	}
};
struct MaskMeshU5BU5D_t5C162FB3760E834B8B5B0C75F438C2D8106EC8D5  : public RuntimeArray
{
	ALIGN_FIELD (8) MaskMesh_tBA4A29153655DB02C99D6BF624A64795A084806B m_Items[1];

	inline MaskMesh_tBA4A29153655DB02C99D6BF624A64795A084806B GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline MaskMesh_tBA4A29153655DB02C99D6BF624A64795A084806B* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, MaskMesh_tBA4A29153655DB02C99D6BF624A64795A084806B value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline MaskMesh_tBA4A29153655DB02C99D6BF624A64795A084806B GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline MaskMesh_tBA4A29153655DB02C99D6BF624A64795A084806B* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, MaskMesh_tBA4A29153655DB02C99D6BF624A64795A084806B value)
	{
		m_Items[index] = value;
	}
};
struct DispatchContextU5BU5D_t23932F8BEADFC827A9CA5636867F6721AD971757  : public RuntimeArray
{
	ALIGN_FIELD (8) DispatchContext_tFA37790A5FF30508B0146B79E4FF1880EB82E455 m_Items[1];

	inline DispatchContext_tFA37790A5FF30508B0146B79E4FF1880EB82E455 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline DispatchContext_tFA37790A5FF30508B0146B79E4FF1880EB82E455* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, DispatchContext_tFA37790A5FF30508B0146B79E4FF1880EB82E455 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___m_Queue), (void*)NULL);
	}
	inline DispatchContext_tFA37790A5FF30508B0146B79E4FF1880EB82E455 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline DispatchContext_tFA37790A5FF30508B0146B79E4FF1880EB82E455* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, DispatchContext_tFA37790A5FF30508B0146B79E4FF1880EB82E455 value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___m_Queue), (void*)NULL);
	}
};


IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Span_1_get_Length_mD173AF2E3688317C8AB9621F7626A2A34DE8F56B_gshared_inline (Span_1_t3C28155FFD2FA88D962FCE88A14C370626303A8D* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_mE48DFFFA4D52B03F4ACA304FD485E78F4BFF0E42_gshared (uint16_t* ___0_destination, uint16_t* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_mCBA8EFCAA8102765E34B993A8177EE752D80890F_gshared_inline (ReadOnlySpan_1_tA2EFC117098BD2B38ADBF809AA976D9F3C13654F* __this, uint16_t* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_m458FB27AA0EB3527A73C9D6305D452A062D2ABC4_gshared_inline (Span_1_t3C28155FFD2FA88D962FCE88A14C370626303A8D* __this, uint16_t* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* Array_Empty_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_mA9FE4AE132DC76B02E8B39B5052CBA643CFF7220_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_mC892A665B48BA9CD149DA76F26EA3607C7859792_gshared_inline (Span_1_t3C28155FFD2FA88D962FCE88A14C370626303A8D* __this, UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* ___0_array, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Span_1_get_Length_mC3EBBD1CE9C5025EB30AFDE84FCCCFB3FE794EC5_gshared_inline (Span_1_tC47CA3FDABAC657528EC838C3FEB05AA0D4480EA* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_mEC6A6EF02BD38F45F23336F48D35B9DC2BC187FD_gshared (uint32_t* ___0_destination, uint32_t* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_mFEB9E8BCBC125E065C80C12FC6037D87DC6FA2FC_gshared_inline (ReadOnlySpan_1_t57F4BBC957039E8E904443D25F3A78AE60DC94B4* __this, uint32_t* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_m44A796B80A3B7B5E228B0865F02AC548FA1E7567_gshared_inline (Span_1_tC47CA3FDABAC657528EC838C3FEB05AA0D4480EA* __this, uint32_t* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* Array_Empty_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_m8B0170B3C9368D9BDB90A666E2DF5549423C160C_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_m1161A3B3850C22A54C838C62FB009355039C28ED_gshared_inline (Span_1_tC47CA3FDABAC657528EC838C3FEB05AA0D4480EA* __this, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___0_array, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Span_1_get_Length_m62F446B5508B032A22CD1BA21D998626E6B8A5CC_gshared_inline (Span_1_t2EECFBFD7BF99470FF5E3884902CE388B17BBDD3* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_m4482A7BD91B51B22F471D785B1D22FAE110CD908_gshared (uint64_t* ___0_destination, uint64_t* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_mC03446F4F48AEBD20B80591766ACE9CE79048BCE_gshared_inline (ReadOnlySpan_1_tD579EC24AE7548EFE16428C9DC0EE0423C0FDA0F* __this, uint64_t* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_m3C68BA129DD44A3486C6B57A99412947A16855F6_gshared_inline (Span_1_t2EECFBFD7BF99470FF5E3884902CE388B17BBDD3* __this, uint64_t* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* Array_Empty_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_m696D3DE2D89DD613C8C0EB15BE627EABEF780255_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_mC83E2FCB4929477ACCB736B25B9E2F89FF2A07CF_gshared_inline (Span_1_t2EECFBFD7BF99470FF5E3884902CE388B17BBDD3* __this, UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___0_array, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Span_1_get_Length_mFBDFEEEF1A619162D612EC6564DE47BB0A018FD9_gshared_inline (Span_1_t176257933B4F95507A92292ED5363CE3EFE12BB5* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m121CA4B55102E3C616B73459B4EB23BEE8C327CB_gshared (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* ___0_destination, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_m0FEF0E91D60DF5F8905D4DAB78CEB48CDF99EFAA_gshared_inline (ReadOnlySpan_1_t30635DB490E7110B945ABB8301B19F8955AD4B64* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_m56BE0F54100AF7686F960CA4E18540A35B12420E_gshared_inline (Span_1_t176257933B4F95507A92292ED5363CE3EFE12BB5* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* Array_Empty_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_mD846707560FDEBAA9B2BE9F40C7BE2F42A59BAA9_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_m0F2A60856E23C8A9DC58E03191363DF4E8A6F1B3_gshared_inline (Span_1_t176257933B4F95507A92292ED5363CE3EFE12BB5* __this, Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___0_array, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Span_1_get_Length_m556440A32F0A1EB65C95120CEC693B9AC4DFD52B_gshared_inline (Span_1_t460D4E78469192619B0075C15897A6987393AAF9* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m5E3924B178120F38353E13C8B4545C90C49D6CED_gshared (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___0_destination, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_m682BD3D57C99591BB5B14A415A7F8F4D5B14241F_gshared_inline (ReadOnlySpan_1_t8C2C24B6B10C9EAC8D8A8C92BED569A12615C2AE* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_m150E0E8C32CF01F22FFC539541D9F6EA05DB6967_gshared_inline (Span_1_t460D4E78469192619B0075C15897A6987393AAF9* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* Array_Empty_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_mFE64AD477B9A8397B2CCC3FD2565DCA5B2F0A1F6_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_mCC34AC618271C9F9C196DA22BA5DB8C6D8AD477D_gshared_inline (Span_1_t460D4E78469192619B0075C15897A6987393AAF9* __this, Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___0_array, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Span_1_get_Length_m63B951643F7F819BFFB479C5BA2A8052CC19650C_gshared_inline (Span_1_t993DF21D9162C9A28F81991FA4EABACF87A3BAD1* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_m7C574D3870D087AA0B03CE7E94375833C6C6BC2C_gshared (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* ___0_destination, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_m622AB9D2827B0280526D71584B733E49B439579B_gshared_inline (ReadOnlySpan_1_tBB5A0F9CEA726E10BE8D59F79D891AC9218E61F6* __this, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_m1E1947C8E67BCAA48B27C9C86207CD561C1B9B4B_gshared_inline (Span_1_t993DF21D9162C9A28F81991FA4EABACF87A3BAD1* __this, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* Array_Empty_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mC82FBEFAE1DCBACBA78974694D57EE7988F95DB8_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_mD3AD596A514C9F73EAFB0946FB4E0CCD88223C72_gshared_inline (Span_1_t993DF21D9162C9A28F81991FA4EABACF87A3BAD1* __this, Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* ___0_array, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Span_1_get_Length_m04EC398D32B0C4B1E3C1C9FC225757A0414FEC91_gshared_inline (Span_1_tC33D382E526B4F8C6EDCA373AD4345BA58673D8E* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisVertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7_mB63FF1B03BD081ACDE9355ECF72840C863C44004_gshared (Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7* ___0_destination, Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_m7E238E2EA0773CDB439F87E732C9E7AD0CF67AEF_gshared_inline (ReadOnlySpan_1_t63019D57052C95CA42C48E9757509354A8099A5A* __this, Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_m988929F65D47DD66BF1FE5A786F9CEC49F6BED29_gshared_inline (Span_1_tC33D382E526B4F8C6EDCA373AD4345BA58673D8E* __this, Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR VertexU5BU5D_t2C3F4FF6AFD6D7E9DD7E1D69446FD8E8FC033185* Array_Empty_TisVertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7_mF047DEE22BA81CA2272F392E9BFA291FA2E76093_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_m4F2AA40C13302936EB20ECE7DB8B903A2D0FE8DE_gshared_inline (Span_1_tC33D382E526B4F8C6EDCA373AD4345BA58673D8E* __this, VertexU5BU5D_t2C3F4FF6AFD6D7E9DD7E1D69446FD8E8FC033185* ___0_array, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Span_1_get_Length_m3CBE615865BBBA37C35E5624C623561A3CA7780F_gshared_inline (Span_1_tA5C1C4A28024D89A0077601B805025F51EFEE6E0* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisVertexAttributeDescriptor_tD4231FBF57335465D16308D2A18E8E83D36BFA76_mD33F0334F37E4CBF4BBF4008EA599ECF998329B8_gshared (VertexAttributeDescriptor_tD4231FBF57335465D16308D2A18E8E83D36BFA76* ___0_destination, VertexAttributeDescriptor_tD4231FBF57335465D16308D2A18E8E83D36BFA76* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_mB95FD3804E51521FC7AA12B18DE8BB2E8D05AA73_gshared_inline (ReadOnlySpan_1_tD6632037B9C2A00A111E1627D34F86F9A6611006* __this, VertexAttributeDescriptor_tD4231FBF57335465D16308D2A18E8E83D36BFA76* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_mA5A972B3B527C1A511260B7C1FBE95AE7ACD76B3_gshared_inline (Span_1_tA5C1C4A28024D89A0077601B805025F51EFEE6E0* __this, VertexAttributeDescriptor_tD4231FBF57335465D16308D2A18E8E83D36BFA76* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR VertexAttributeDescriptorU5BU5D_t5D10E60612F12777F59B7E33939F9075DB0E02B2* Array_Empty_TisVertexAttributeDescriptor_tD4231FBF57335465D16308D2A18E8E83D36BFA76_m998FF89091ADB380AE37B11326EBA4E636539F6C_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_m528FFD264C3687974947130266E4DEEA1C5DEA82_gshared_inline (Span_1_tA5C1C4A28024D89A0077601B805025F51EFEE6E0* __this, VertexAttributeDescriptorU5BU5D_t5D10E60612F12777F59B7E33939F9075DB0E02B2* ___0_array, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Span_1_get_Length_m1AAE29E9DC0ED6DC7011806FFA7B6DE1641D8D01_gshared_inline (Span_1_t2C186CD9311CD6C5819274CD880486487FC65AD5* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisXRNodeState_t683158812A1D80A6BC73DB97405BB0B795A9111A_m9BBFC512D1D3429949038E5AEA1D4A79CD1DCD3B_gshared (XRNodeState_t683158812A1D80A6BC73DB97405BB0B795A9111A* ___0_destination, XRNodeState_t683158812A1D80A6BC73DB97405BB0B795A9111A* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_mCF2C3E165323BC112848DC8475FF32D4434B819A_gshared_inline (ReadOnlySpan_1_tC8B9E9EA565116C6C5FB765E32BA552A1E45E3C5* __this, XRNodeState_t683158812A1D80A6BC73DB97405BB0B795A9111A* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_mD8BFA56022C77E5DA5F3235B53D8E55644D65039_gshared_inline (Span_1_t2C186CD9311CD6C5819274CD880486487FC65AD5* __this, XRNodeState_t683158812A1D80A6BC73DB97405BB0B795A9111A* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR XRNodeStateU5BU5D_tEC64805398059D44C2FBA68AABAEFFB262B93845* Array_Empty_TisXRNodeState_t683158812A1D80A6BC73DB97405BB0B795A9111A_mAAEF2CC67A3D794C33C643E1B633B5E2CC2D05BF_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_m18FED6B7D9CC641149EE6A8D26F4F83ACF26BC76_gshared_inline (Span_1_t2C186CD9311CD6C5819274CD880486487FC65AD5* __this, XRNodeStateU5BU5D_tEC64805398059D44C2FBA68AABAEFFB262B93845* ___0_array, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_mFA6EE52BCF39100AE30C79E73F0F972182D0CA2A_gshared_inline (ReadOnlySpan_1_tC416A5627E04F69CA2947A2A13F0A1DF096CABAC* __this, Il2CppFullySharedGenericAny* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_mBA868F06359701D9950DEB1B10F52F848E9FF6DA_gshared_inline (Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54* __this, Il2CppFullySharedGenericAny* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_m94A95CF4DF158FDF992CC13DA185B637335D84C6_gshared_inline (Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54* __this, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___0_array, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Span_1_get_Length_m9C7E8DECAA7368617C319A866C6A9E960F140BF7_gshared_inline (Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_Tisjvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225_m48D2E426B92CBE28782CF29BD703DF063CFF422D_gshared (jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225* ___0_destination, jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_m655719167577EE7B24CAAF5A9D0995E0259B6A84_gshared_inline (ReadOnlySpan_1_tEC1E786ADECA91AF68E558734868FBB77E05D964* __this, jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_m1DA3ED274C046791E48A52F415066C7C86B031D1_gshared_inline (Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7* __this, jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* Array_Empty_Tisjvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225_mD8B08917D1DC7B424036208C74F0A7A6EC83DAAE_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_m13E8571165DB8DB1A1909B44B65D4F220890AC8F_gshared_inline (Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7* __this, jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* ___0_array, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Span_1_get_Length_mA01E6EC21F87170B3B3290278278ED65E825C955_gshared_inline (Span_1_t73939D05896281666AE0EFF73CA9AA212455FFCB* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisFilterUnion_t85E549621A2CC33D9102C62C6D82B0865FF80D03_m788A7B3C302B6168CE4838B8CE615ADA2A360683_gshared (FilterUnion_t85E549621A2CC33D9102C62C6D82B0865FF80D03* ___0_destination, FilterUnion_t85E549621A2CC33D9102C62C6D82B0865FF80D03* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_m9AA852A2B6E942135C2D2B2DA01E26BA0126FA7A_gshared_inline (ReadOnlySpan_1_t16830A9FEE9E2F3C956F2B8444295F2393BFF6F6* __this, FilterUnion_t85E549621A2CC33D9102C62C6D82B0865FF80D03* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_m9F0AD76F63C6307767B5992FA991815E4F0CF390_gshared_inline (Span_1_t73939D05896281666AE0EFF73CA9AA212455FFCB* __this, FilterUnion_t85E549621A2CC33D9102C62C6D82B0865FF80D03* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR FilterUnionU5BU5D_t8778FBF9BC7FE3230BCB228346D0C62BC9A0A94D* Array_Empty_TisFilterUnion_t85E549621A2CC33D9102C62C6D82B0865FF80D03_mBDE28068FF66192DC2A98763302EFE1E164D3752_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_m9CC9A801484C785265097B625A9BF84CB2E8AA44_gshared_inline (Span_1_t73939D05896281666AE0EFF73CA9AA212455FFCB* __this, FilterUnionU5BU5D_t8778FBF9BC7FE3230BCB228346D0C62BC9A0A94D* ___0_array, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SparselyPopulatedArrayAddInfo_1__ctor_m323E378EC0EE0C48A24AA0E14E40D7B020BB0458_gshared (SparselyPopulatedArrayAddInfo_1_tC49C525D3AFE80CB49D53650F40C9A49D4CDD19D* __this, SparselyPopulatedArrayFragment_1_t2D5B093B992E7F6EEEBD059E1065DFEDDBE906FC* ___0_source, int32_t ___1_index, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR SparselyPopulatedArrayFragment_1_t2D5B093B992E7F6EEEBD059E1065DFEDDBE906FC* SparselyPopulatedArrayAddInfo_1_get_Source_mBA043CE79666AA955D0FE4335ED3B82802E75C86_gshared_inline (SparselyPopulatedArrayAddInfo_1_tC49C525D3AFE80CB49D53650F40C9A49D4CDD19D* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t SparselyPopulatedArrayAddInfo_1_get_Index_mCBBF3F010A994612AC94DA417AB8D04A2C92B45A_gshared_inline (SparselyPopulatedArrayAddInfo_1_tC49C525D3AFE80CB49D53650F40C9A49D4CDD19D* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SparselyPopulatedArrayFragment_1__ctor_m849B5F4632EC0E042F4CF4F23102F9D74CE14294_gshared (SparselyPopulatedArrayFragment_1_t2D5B093B992E7F6EEEBD059E1065DFEDDBE906FC* __this, int32_t ___0_size, SparselyPopulatedArrayFragment_1_t2D5B093B992E7F6EEEBD059E1065DFEDDBE906FC* ___1_prev, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SparselyPopulatedArrayFragment_1__ctor_m1BAEA22A2C2FD0C50376CEBFC7F3A024EE3C302E_gshared (SparselyPopulatedArrayFragment_1_t2D5B093B992E7F6EEEBD059E1065DFEDDBE906FC* __this, int32_t ___0_size, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SparselyPopulatedArrayFragment_1_get_Length_m2F77B48EDD934ED6586E559645752EB229677D27_gshared (SparselyPopulatedArrayFragment_1_t2D5B093B992E7F6EEEBD059E1065DFEDDBE906FC* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StackScope_1__ctor_mB5878954E782DE87BB4C30D92E66F23988D6BC86_gshared (StackScope_1_tB82A0C5F6E33138F56988FA681174EF82C9ADB26* __this, Stack_1_tF3E5E7101E929741300A1CF7C159A6ED9B61621A** ___0_stack, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StackScope_1_Dispose_m23CF13EF100AC68D65C505ECE7714FF44A2B4248_gshared (StackScope_1_tB82A0C5F6E33138F56988FA681174EF82C9ADB26* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR HierarchyNodeU5BU5D_t58C5014EDF77A3B09F6BA5DEE95D32133F935DB2* Array_Empty_TisHierarchyNode_t6A6A738223CC5D7FB463CAF6F379C48726891704_m706F26FDE3D55E478AE8D88D0CA5AE597D17F184_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_LastIndexOf_TisHierarchyNode_t6A6A738223CC5D7FB463CAF6F379C48726891704_m36B76798B43F8ECDB69F02AEEDA8CDF00572CF1E_gshared (HierarchyNodeU5BU5D_t58C5014EDF77A3B09F6BA5DEE95D32133F935DB2* ___0_array, HierarchyNode_t6A6A738223CC5D7FB463CAF6F379C48726891704 ___1_value, int32_t ___2_startIndex, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator__ctor_mEF1727C054DE777D5CAA14257FF364FCF9D0C322_gshared (Enumerator_t63C146B90BB6962E05FEDDDD803FA59E6F5798ED* __this, Stack_1_tF6C1720CA323403285CF731A334044D9C18E64AD* ___0_stack, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Stack_1_ThrowForEmptyStack_mD8D9DAAAB71FC95A7478CAE1EFC3F9CBA60062F9_gshared (Stack_1_tF6C1720CA323403285CF731A334044D9C18E64AD* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void Stack_1_PushWithResize_m4A54403E217E9C2919499F239D795451D6427A1E_gshared (Stack_1_tF6C1720CA323403285CF731A334044D9C18E64AD* __this, HierarchyNode_t6A6A738223CC5D7FB463CAF6F379C48726891704 ___0_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Resize_TisHierarchyNode_t6A6A738223CC5D7FB463CAF6F379C48726891704_m711809DC166BD212E8F847D31D18B7C63CC00174_gshared (HierarchyNodeU5BU5D_t58C5014EDF77A3B09F6BA5DEE95D32133F935DB2** ___0_array, int32_t ___1_newSize, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* Array_Empty_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m4D53E0E0F90F37AD5DBFD2DC75E52406F90C7ABC_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_LastIndexOf_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m603821E13AA067379EA5D21B577261CBB0BEF8E6_gshared (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___0_array, int32_t ___1_value, int32_t ___2_startIndex, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator__ctor_m3D5138341817152CEF519175368AA02FBB797C96_gshared (Enumerator_t1ED2EFBA8997D05D3B6586A9FF9D467F8D5482F0* __this, Stack_1_t3197E0F5EA36E611B259A88751D31FC2396FE4B6* ___0_stack, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Stack_1_ThrowForEmptyStack_mA0C247058163BBAB7D8BFE60D542FFE434A3D834_gshared (Stack_1_t3197E0F5EA36E611B259A88751D31FC2396FE4B6* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void Stack_1_PushWithResize_m2E32959EAD54D6F02C9FF531A2AFDEF3EC04FEB6_gshared (Stack_1_t3197E0F5EA36E611B259A88751D31FC2396FE4B6* __this, int32_t ___0_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Resize_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m6BAA7BD6F22421B894347B1476C37052FAC6C916_gshared (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C** ___0_array, int32_t ___1_newSize, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Int32EnumU5BU5D_t87B7DB802810C38016332669039EF42C487A081F* Array_Empty_TisInt32Enum_tCBAC8BA2BFF3A845FA599F303093BBBA374B6F0C_m94E12BB613D748D2EEB9E1ABD961630D2F970385_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_LastIndexOf_TisInt32Enum_tCBAC8BA2BFF3A845FA599F303093BBBA374B6F0C_m92EE93D981B3058A8384DCA90FFC1502242652F7_gshared (Int32EnumU5BU5D_t87B7DB802810C38016332669039EF42C487A081F* ___0_array, int32_t ___1_value, int32_t ___2_startIndex, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator__ctor_m89062508E459D03177AC1ECE62116EFC56A6FB61_gshared (Enumerator_t0D7F1F6081F1B6DDB263573004129C443F04F41C* __this, Stack_1_t509AEAED71EF48FB8551C238C1BA01882CC654B9* ___0_stack, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Stack_1_ThrowForEmptyStack_m652E1B38200FB5443D4A6688E81A1589AE0D10DC_gshared (Stack_1_t509AEAED71EF48FB8551C238C1BA01882CC654B9* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void Stack_1_PushWithResize_mBA4873FC90B54D47FCDFAF825F1E462FA6F28560_gshared (Stack_1_t509AEAED71EF48FB8551C238C1BA01882CC654B9* __this, int32_t ___0_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Resize_TisInt32Enum_tCBAC8BA2BFF3A845FA599F303093BBBA374B6F0C_m540BB33A026A346B7B0033684BE811ED519B1E33_gshared (Int32EnumU5BU5D_t87B7DB802810C38016332669039EF42C487A081F** ___0_array, int32_t ___1_newSize, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR LayoutHandleU5BU5D_tC6BCD3778F861245031A441921C9F04DD1CA1DCA* Array_Empty_TisLayoutHandle_tCFE060947B4EDC8F11BF5B480181493FB578BEB6_m7C8D9147C004C0FB177D8EEC050E7FCBA367EE66_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_LastIndexOf_TisLayoutHandle_tCFE060947B4EDC8F11BF5B480181493FB578BEB6_m4E81267251F27979AA8C653DFD2284D2D9BDE96D_gshared (LayoutHandleU5BU5D_tC6BCD3778F861245031A441921C9F04DD1CA1DCA* ___0_array, LayoutHandle_tCFE060947B4EDC8F11BF5B480181493FB578BEB6 ___1_value, int32_t ___2_startIndex, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator__ctor_mA0D99F608AB5E5B7B3E091A14655E79FC65EE579_gshared (Enumerator_t4A00EBE66EB6847DAB3AEB3D0799C4458493F714* __this, Stack_1_tC86D82FC3927CE2C02687F21B34C2E808D044724* ___0_stack, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Stack_1_ThrowForEmptyStack_mF57B83420720498BF13BDDF518AF6641E84837B3_gshared (Stack_1_tC86D82FC3927CE2C02687F21B34C2E808D044724* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void Stack_1_PushWithResize_m65C430028275A2D49444BA6331AB2631D04D8183_gshared (Stack_1_tC86D82FC3927CE2C02687F21B34C2E808D044724* __this, LayoutHandle_tCFE060947B4EDC8F11BF5B480181493FB578BEB6 ___0_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Resize_TisLayoutHandle_tCFE060947B4EDC8F11BF5B480181493FB578BEB6_mA1FA0777E5E2094927AC5A13BBC6102247904AC3_gshared (LayoutHandleU5BU5D_tC6BCD3778F861245031A441921C9F04DD1CA1DCA** ___0_array, int32_t ___1_newSize, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D* Array_Empty_TisMatrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_m36408D2B54D6A6519FAF5E5AD03F49ECECA09F2E_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_LastIndexOf_TisMatrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_mFC821A119D3BD51B91A59F09A28A8FDC1C32F6FC_gshared (Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D* ___0_array, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___1_value, int32_t ___2_startIndex, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator__ctor_mB2E659404649FBEA780D53C3FA4E957998A349FB_gshared (Enumerator_t1999C0BADD971016559CDAF90DA9DC67FAEF5B8A* __this, Stack_1_t8A661B4E11F715EF60608DE57485D9956E00C72E* ___0_stack, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Stack_1_ThrowForEmptyStack_m8A1BE6CEDDAD8DB304FC2E141DA5635DB3B88338_gshared (Stack_1_t8A661B4E11F715EF60608DE57485D9956E00C72E* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void Stack_1_PushWithResize_m08841831A121C2488026F8131C34F8C15C250CC1_gshared (Stack_1_t8A661B4E11F715EF60608DE57485D9956E00C72E* __this, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___0_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Resize_TisMatrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_m45E2DE0DBF4E0547B569F9496A9D773B058C30CA_gshared (Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D** ___0_array, int32_t ___1_newSize, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_LastIndexOf_TisRuntimeObject_m60B0AA749643DFCD60274810604B33A8A2CF0A40_gshared (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___0_array, RuntimeObject* ___1_value, int32_t ___2_startIndex, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator__ctor_m9F25E94BA06F0C82E9CE1E5A204D5C65DEA9DEAB_gshared (Enumerator_t852186DADC50D976C4BD8FE59C506354ED48B974* __this, Stack_1_tAD790A47551563636908E21E4F08C54C0C323EB5* ___0_stack, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Stack_1_ThrowForEmptyStack_m44B37D35FD9357C7012A60D95B04AB96C0463EC7_gshared (Stack_1_tAD790A47551563636908E21E4F08C54C0C323EB5* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void Stack_1_PushWithResize_mEC6D96B634757F6C1B0839B2B591944DF48C2B9B_gshared (Stack_1_tAD790A47551563636908E21E4F08C54C0C323EB5* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Resize_TisRuntimeObject_mE8D92C287251BAF8256D85E5829F749359EC334E_gshared (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918** ___0_array, int32_t ___1_newSize, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RectU5BU5D_t83297CB2E61BDF9D27DCB1A3E5C78EBCE9F7C993* Array_Empty_TisRect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D_m85A5CFE26D5D127B03744735ED2B5FC30FCB1D59_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_LastIndexOf_TisRect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D_mCEA7CE77FA45B1CB38444D71C46BC24E06A0ECA4_gshared (RectU5BU5D_t83297CB2E61BDF9D27DCB1A3E5C78EBCE9F7C993* ___0_array, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___1_value, int32_t ___2_startIndex, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator__ctor_mF9CC77EDB16F67702CB0692CE3FB4BCA5EACC97E_gshared (Enumerator_t0757D472C179E7C385905619753AC7417A77B40A* __this, Stack_1_tEEC1F6968B6388E4800894946805617A2E7EDFDA* ___0_stack, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Stack_1_ThrowForEmptyStack_m9BB67CADD6555D0CECCD2652588673184823D4E6_gshared (Stack_1_tEEC1F6968B6388E4800894946805617A2E7EDFDA* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void Stack_1_PushWithResize_m856B55C10DA17E80AD34FF3B276B07A80685EBFE_gshared (Stack_1_tEEC1F6968B6388E4800894946805617A2E7EDFDA* __this, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___0_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Resize_TisRect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D_m2EC92F2F8F9EEAB25DF52C72C3C856D1ECA0C2A5_gshared (RectU5BU5D_t83297CB2E61BDF9D27DCB1A3E5C78EBCE9F7C993** ___0_array, int32_t ___1_newSize, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR TextureIdU5BU5D_t03041DBB5C72B7E6F5F694A36DC5FEA75432188A* Array_Empty_TisTextureId_tFF4B4AAE53408AB10B0B89CCA5F7B50CF2535E58_m3AE07A4CEAA2B2E2C2E03472BBF9F79BC799F948_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_LastIndexOf_TisTextureId_tFF4B4AAE53408AB10B0B89CCA5F7B50CF2535E58_m5291A70BF372F7D73477976310C09A5B3BE49C90_gshared (TextureIdU5BU5D_t03041DBB5C72B7E6F5F694A36DC5FEA75432188A* ___0_array, TextureId_tFF4B4AAE53408AB10B0B89CCA5F7B50CF2535E58 ___1_value, int32_t ___2_startIndex, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator__ctor_mF766BF2C1792506A6941458B5EA1940528EAABA7_gshared (Enumerator_tE489CD82CEA07F70C1967F4E911F125AA65FD336* __this, Stack_1_t3B750F239246A65B0BACFB807CBA1961CA8DE0A6* ___0_stack, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Stack_1_ThrowForEmptyStack_mB0004CD20AD9DFADDF410E929CF49B0FAFE7B78C_gshared (Stack_1_t3B750F239246A65B0BACFB807CBA1961CA8DE0A6* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void Stack_1_PushWithResize_m067591A26AE7959E4430DD0FC3844D46AEAC3E90_gshared (Stack_1_t3B750F239246A65B0BACFB807CBA1961CA8DE0A6* __this, TextureId_tFF4B4AAE53408AB10B0B89CCA5F7B50CF2535E58 ___0_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Resize_TisTextureId_tFF4B4AAE53408AB10B0B89CCA5F7B50CF2535E58_m980E6BCF46D049ECA55F63095E52D73F5C656788_gshared (TextureIdU5BU5D_t03041DBB5C72B7E6F5F694A36DC5FEA75432188A** ___0_array, int32_t ___1_newSize, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator__ctor_mD65EF492693E70B41695A031A49F72C7EFA82FCE_gshared (Enumerator_t9C40FA80DC7A4C63469E514386FAB9AE1039DF41* __this, Stack_1_tF3E5E7101E929741300A1CF7C159A6ED9B61621A* ___0_stack, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR MatchContextU5BU5D_t49C4E5DA5C1F9B06B211BE6F94AC6BD4D0ABCAE5* Array_Empty_TisMatchContext_t04110FFA271D89A23BC1918BE657634A7DC06253_m5BEAA64B8E1A4C758EDEA7D45C3177D7D8A6ADCF_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_LastIndexOf_TisMatchContext_t04110FFA271D89A23BC1918BE657634A7DC06253_mFFFE5789A9BEF9E2ED789FB50EC9F52BB8954B28_gshared (MatchContextU5BU5D_t49C4E5DA5C1F9B06B211BE6F94AC6BD4D0ABCAE5* ___0_array, MatchContext_t04110FFA271D89A23BC1918BE657634A7DC06253 ___1_value, int32_t ___2_startIndex, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator__ctor_m14E3BCC9341885A56233EF29D700857A00BBDFC7_gshared (Enumerator_t6B0EB72F34C4614A45F424103A9D11C74439E854* __this, Stack_1_tB568ED1852EE70A3EECA2CD66F2AB41DDEC262FA* ___0_stack, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Stack_1_ThrowForEmptyStack_m89DEAB4CFF2C08C84D7B4988FD3A588F243CC50C_gshared (Stack_1_tB568ED1852EE70A3EECA2CD66F2AB41DDEC262FA* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void Stack_1_PushWithResize_m046E8452EBCC5731C97F814735F12D1CC6714309_gshared (Stack_1_tB568ED1852EE70A3EECA2CD66F2AB41DDEC262FA* __this, MatchContext_t04110FFA271D89A23BC1918BE657634A7DC06253 ___0_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Resize_TisMatchContext_t04110FFA271D89A23BC1918BE657634A7DC06253_m4E7CB8B6701DF21BD6CA13920546C7869B4F6678_gshared (MatchContextU5BU5D_t49C4E5DA5C1F9B06B211BE6F94AC6BD4D0ABCAE5** ___0_array, int32_t ___1_newSize, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR AllocSizeU5BU5D_tD7D6854D89AE82553F2200BC3B1F1A2D5455D9D8* Array_Empty_TisAllocSize_t906784497648EDC3F45F4EA656C6858238BA2F7C_m5DD7EE6CA7EC17B1B022C4780B85FFA1C0A0FA12_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_LastIndexOf_TisAllocSize_t906784497648EDC3F45F4EA656C6858238BA2F7C_mB4E32AD94934B63EDD33729EAE5F161483145500_gshared (AllocSizeU5BU5D_tD7D6854D89AE82553F2200BC3B1F1A2D5455D9D8* ___0_array, AllocSize_t906784497648EDC3F45F4EA656C6858238BA2F7C ___1_value, int32_t ___2_startIndex, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator__ctor_m07361745557663CD1B1953D494AA8FB80A0730A6_gshared (Enumerator_tD97C98C8AA749156CECC60E8ED112C7771E69B84* __this, Stack_1_t90AD4B4BDD857A86CDEC55130FE1BAB9871F0CFE* ___0_stack, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Stack_1_ThrowForEmptyStack_m8771401C109B7429B07B52ED7ADA916AA59DE001_gshared (Stack_1_t90AD4B4BDD857A86CDEC55130FE1BAB9871F0CFE* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void Stack_1_PushWithResize_mCE77B35C7D03CEA8A9568F603B08799B7F7A6138_gshared (Stack_1_t90AD4B4BDD857A86CDEC55130FE1BAB9871F0CFE* __this, AllocSize_t906784497648EDC3F45F4EA656C6858238BA2F7C ___0_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Resize_TisAllocSize_t906784497648EDC3F45F4EA656C6858238BA2F7C_m0112163C0BEA82A10E26EC61120F09D685F75D82_gshared (AllocSizeU5BU5D_tD7D6854D89AE82553F2200BC3B1F1A2D5455D9D8** ___0_array, int32_t ___1_newSize, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR MaskMeshU5BU5D_t5C162FB3760E834B8B5B0C75F438C2D8106EC8D5* Array_Empty_TisMaskMesh_tBA4A29153655DB02C99D6BF624A64795A084806B_m20F2634088091DCC2AFF06339CE497560174D0A4_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_LastIndexOf_TisMaskMesh_tBA4A29153655DB02C99D6BF624A64795A084806B_m818F2FAF7CF69CA55BBDB69F07C79300EB865DF7_gshared (MaskMeshU5BU5D_t5C162FB3760E834B8B5B0C75F438C2D8106EC8D5* ___0_array, MaskMesh_tBA4A29153655DB02C99D6BF624A64795A084806B ___1_value, int32_t ___2_startIndex, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator__ctor_mE90843AFE5073A0E749A49A314E1300B5D2887F5_gshared (Enumerator_t3B367DB4E88110F0F90313AF159B54F9F2189310* __this, Stack_1_tAE809352224B7904D166288D1476FD4C2ED0D631* ___0_stack, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Stack_1_ThrowForEmptyStack_m12EE5EEA0D599F83F68A7D47079EE0F8F741B40E_gshared (Stack_1_tAE809352224B7904D166288D1476FD4C2ED0D631* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void Stack_1_PushWithResize_m9E4C7A345A0EB218950AF6C71F31410EFD75463A_gshared (Stack_1_tAE809352224B7904D166288D1476FD4C2ED0D631* __this, MaskMesh_tBA4A29153655DB02C99D6BF624A64795A084806B ___0_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Resize_TisMaskMesh_tBA4A29153655DB02C99D6BF624A64795A084806B_m9E14B2021B5551B36226D2C77EA97DCB81FA0B29_gshared (MaskMeshU5BU5D_t5C162FB3760E834B8B5B0C75F438C2D8106EC8D5** ___0_array, int32_t ___1_newSize, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR DispatchContextU5BU5D_t23932F8BEADFC827A9CA5636867F6721AD971757* Array_Empty_TisDispatchContext_tFA37790A5FF30508B0146B79E4FF1880EB82E455_mF01AA806CE655E3ABAF52F0F9DD7CC113403C7E2_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_LastIndexOf_TisDispatchContext_tFA37790A5FF30508B0146B79E4FF1880EB82E455_m166E18AA28DAF024602CFD2C985E5DEF44EE4A3F_gshared (DispatchContextU5BU5D_t23932F8BEADFC827A9CA5636867F6721AD971757* ___0_array, DispatchContext_tFA37790A5FF30508B0146B79E4FF1880EB82E455 ___1_value, int32_t ___2_startIndex, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator__ctor_mA289AC608581803432D7E23F7CB15CA69C67E3A4_gshared (Enumerator_t8E71E3162A14D26A339D3561D43523590F594C86* __this, Stack_1_t19851BEF370D35BCE2A6C3848C5148B09113067C* ___0_stack, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Stack_1_ThrowForEmptyStack_m492E2D988124B082B0EF0A9837B0A102C39E07C5_gshared (Stack_1_t19851BEF370D35BCE2A6C3848C5148B09113067C* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void Stack_1_PushWithResize_m3BD8BDA046D1582C869FF68FB773F174F369D00C_gshared (Stack_1_t19851BEF370D35BCE2A6C3848C5148B09113067C* __this, DispatchContext_tFA37790A5FF30508B0146B79E4FF1880EB82E455 ___0_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Resize_TisDispatchContext_tFA37790A5FF30508B0146B79E4FF1880EB82E455_m247E9FF1D240EF2FA626997384B01A8033DBED23_gshared (DispatchContextU5BU5D_t23932F8BEADFC827A9CA5636867F6721AD971757** ___0_array, int32_t ___1_newSize, const RuntimeMethod* method) ;

IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint8_t* Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline (RuntimeArray* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56 (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowIndexOutOfRangeException_m86F753A24E2765A35546BA6352A7E4F0BB8A66B5 (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpanHelpers_ClearWithoutReferences_m65DB2925AE7A5FF88BB3EA1BF90513C9ADF0653D (uint8_t* ___0_b, uint64_t ___1_byteLength, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Unsafe_InitBlockUnaligned_m6F2353EB9ABC9320E61629FAEE23948C80BFF03A (uint8_t* ___0_startAddress, uint8_t ___1_value, uint32_t ___2_byteCount, const RuntimeMethod* method) ;
inline int32_t Span_1_get_Length_mD173AF2E3688317C8AB9621F7626A2A34DE8F56B_inline (Span_1_t3C28155FFD2FA88D962FCE88A14C370626303A8D* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Span_1_t3C28155FFD2FA88D962FCE88A14C370626303A8D*, const RuntimeMethod*))Span_1_get_Length_mD173AF2E3688317C8AB9621F7626A2A34DE8F56B_gshared_inline)(__this, method);
}
inline void Buffer_Memmove_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_mE48DFFFA4D52B03F4ACA304FD485E78F4BFF0E42 (uint16_t* ___0_destination, uint16_t* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method)
{
	((  void (*) (uint16_t*, uint16_t*, uint64_t, const RuntimeMethod*))Buffer_Memmove_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_mE48DFFFA4D52B03F4ACA304FD485E78F4BFF0E42_gshared)(___0_destination, ___1_source, ___2_elementCount, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentException_DestinationTooShort_m6468934A3BBB67DBC5BAEF7A64D91BD5BBBB3D4D (const RuntimeMethod* method) ;
inline void ReadOnlySpan_1__ctor_mCBA8EFCAA8102765E34B993A8177EE752D80890F_inline (ReadOnlySpan_1_tA2EFC117098BD2B38ADBF809AA976D9F3C13654F* __this, uint16_t* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method)
{
	((  void (*) (ReadOnlySpan_1_tA2EFC117098BD2B38ADBF809AA976D9F3C13654F*, uint16_t*, int32_t, const RuntimeMethod*))ReadOnlySpan_1__ctor_mCBA8EFCAA8102765E34B993A8177EE752D80890F_gshared_inline)(__this, ___0_ptr, ___1_length, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57 (RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ___0_handle, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC (Type_t* ___0_left, Type_t* ___1_right, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_CreateString_m3F8794FEB452558B8A68C65E1F0B603B3D94E0E2 (String_t* __this, Il2CppChar* ___0_value, int32_t ___1_startIndex, int32_t ___2_length, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987 (String_t* ___0_format, RuntimeObject* ___1_arg0, RuntimeObject* ___2_arg1, const RuntimeMethod* method) ;
inline void Span_1__ctor_m458FB27AA0EB3527A73C9D6305D452A062D2ABC4_inline (Span_1_t3C28155FFD2FA88D962FCE88A14C370626303A8D* __this, uint16_t* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method)
{
	((  void (*) (Span_1_t3C28155FFD2FA88D962FCE88A14C370626303A8D*, uint16_t*, int32_t, const RuntimeMethod*))Span_1__ctor_m458FB27AA0EB3527A73C9D6305D452A062D2ABC4_gshared_inline)(__this, ___0_ptr, ___1_length, method);
}
inline UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* Array_Empty_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_mA9FE4AE132DC76B02E8B39B5052CBA643CFF7220_inline (const RuntimeMethod* method)
{
	return ((  UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* (*) (const RuntimeMethod*))Array_Empty_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_mA9FE4AE132DC76B02E8B39B5052CBA643CFF7220_gshared_inline)(method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* __this, String_t* ___0_message, const RuntimeMethod* method) ;
inline void Span_1__ctor_mC892A665B48BA9CD149DA76F26EA3607C7859792_inline (Span_1_t3C28155FFD2FA88D962FCE88A14C370626303A8D* __this, UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* ___0_array, const RuntimeMethod* method)
{
	((  void (*) (Span_1_t3C28155FFD2FA88D962FCE88A14C370626303A8D*, UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83*, const RuntimeMethod*))Span_1__ctor_mC892A665B48BA9CD149DA76F26EA3607C7859792_gshared_inline)(__this, ___0_array, method);
}
inline int32_t Span_1_get_Length_mC3EBBD1CE9C5025EB30AFDE84FCCCFB3FE794EC5_inline (Span_1_tC47CA3FDABAC657528EC838C3FEB05AA0D4480EA* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Span_1_tC47CA3FDABAC657528EC838C3FEB05AA0D4480EA*, const RuntimeMethod*))Span_1_get_Length_mC3EBBD1CE9C5025EB30AFDE84FCCCFB3FE794EC5_gshared_inline)(__this, method);
}
inline void Buffer_Memmove_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_mEC6A6EF02BD38F45F23336F48D35B9DC2BC187FD (uint32_t* ___0_destination, uint32_t* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method)
{
	((  void (*) (uint32_t*, uint32_t*, uint64_t, const RuntimeMethod*))Buffer_Memmove_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_mEC6A6EF02BD38F45F23336F48D35B9DC2BC187FD_gshared)(___0_destination, ___1_source, ___2_elementCount, method);
}
inline void ReadOnlySpan_1__ctor_mFEB9E8BCBC125E065C80C12FC6037D87DC6FA2FC_inline (ReadOnlySpan_1_t57F4BBC957039E8E904443D25F3A78AE60DC94B4* __this, uint32_t* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method)
{
	((  void (*) (ReadOnlySpan_1_t57F4BBC957039E8E904443D25F3A78AE60DC94B4*, uint32_t*, int32_t, const RuntimeMethod*))ReadOnlySpan_1__ctor_mFEB9E8BCBC125E065C80C12FC6037D87DC6FA2FC_gshared_inline)(__this, ___0_ptr, ___1_length, method);
}
inline void Span_1__ctor_m44A796B80A3B7B5E228B0865F02AC548FA1E7567_inline (Span_1_tC47CA3FDABAC657528EC838C3FEB05AA0D4480EA* __this, uint32_t* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method)
{
	((  void (*) (Span_1_tC47CA3FDABAC657528EC838C3FEB05AA0D4480EA*, uint32_t*, int32_t, const RuntimeMethod*))Span_1__ctor_m44A796B80A3B7B5E228B0865F02AC548FA1E7567_gshared_inline)(__this, ___0_ptr, ___1_length, method);
}
inline UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* Array_Empty_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_m8B0170B3C9368D9BDB90A666E2DF5549423C160C_inline (const RuntimeMethod* method)
{
	return ((  UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* (*) (const RuntimeMethod*))Array_Empty_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_m8B0170B3C9368D9BDB90A666E2DF5549423C160C_gshared_inline)(method);
}
inline void Span_1__ctor_m1161A3B3850C22A54C838C62FB009355039C28ED_inline (Span_1_tC47CA3FDABAC657528EC838C3FEB05AA0D4480EA* __this, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___0_array, const RuntimeMethod* method)
{
	((  void (*) (Span_1_tC47CA3FDABAC657528EC838C3FEB05AA0D4480EA*, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*, const RuntimeMethod*))Span_1__ctor_m1161A3B3850C22A54C838C62FB009355039C28ED_gshared_inline)(__this, ___0_array, method);
}
inline int32_t Span_1_get_Length_m62F446B5508B032A22CD1BA21D998626E6B8A5CC_inline (Span_1_t2EECFBFD7BF99470FF5E3884902CE388B17BBDD3* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Span_1_t2EECFBFD7BF99470FF5E3884902CE388B17BBDD3*, const RuntimeMethod*))Span_1_get_Length_m62F446B5508B032A22CD1BA21D998626E6B8A5CC_gshared_inline)(__this, method);
}
inline void Buffer_Memmove_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_m4482A7BD91B51B22F471D785B1D22FAE110CD908 (uint64_t* ___0_destination, uint64_t* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method)
{
	((  void (*) (uint64_t*, uint64_t*, uint64_t, const RuntimeMethod*))Buffer_Memmove_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_m4482A7BD91B51B22F471D785B1D22FAE110CD908_gshared)(___0_destination, ___1_source, ___2_elementCount, method);
}
inline void ReadOnlySpan_1__ctor_mC03446F4F48AEBD20B80591766ACE9CE79048BCE_inline (ReadOnlySpan_1_tD579EC24AE7548EFE16428C9DC0EE0423C0FDA0F* __this, uint64_t* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method)
{
	((  void (*) (ReadOnlySpan_1_tD579EC24AE7548EFE16428C9DC0EE0423C0FDA0F*, uint64_t*, int32_t, const RuntimeMethod*))ReadOnlySpan_1__ctor_mC03446F4F48AEBD20B80591766ACE9CE79048BCE_gshared_inline)(__this, ___0_ptr, ___1_length, method);
}
inline void Span_1__ctor_m3C68BA129DD44A3486C6B57A99412947A16855F6_inline (Span_1_t2EECFBFD7BF99470FF5E3884902CE388B17BBDD3* __this, uint64_t* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method)
{
	((  void (*) (Span_1_t2EECFBFD7BF99470FF5E3884902CE388B17BBDD3*, uint64_t*, int32_t, const RuntimeMethod*))Span_1__ctor_m3C68BA129DD44A3486C6B57A99412947A16855F6_gshared_inline)(__this, ___0_ptr, ___1_length, method);
}
inline UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* Array_Empty_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_m696D3DE2D89DD613C8C0EB15BE627EABEF780255_inline (const RuntimeMethod* method)
{
	return ((  UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* (*) (const RuntimeMethod*))Array_Empty_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_m696D3DE2D89DD613C8C0EB15BE627EABEF780255_gshared_inline)(method);
}
inline void Span_1__ctor_mC83E2FCB4929477ACCB736B25B9E2F89FF2A07CF_inline (Span_1_t2EECFBFD7BF99470FF5E3884902CE388B17BBDD3* __this, UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___0_array, const RuntimeMethod* method)
{
	((  void (*) (Span_1_t2EECFBFD7BF99470FF5E3884902CE388B17BBDD3*, UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*, const RuntimeMethod*))Span_1__ctor_mC83E2FCB4929477ACCB736B25B9E2F89FF2A07CF_gshared_inline)(__this, ___0_array, method);
}
inline int32_t Span_1_get_Length_mFBDFEEEF1A619162D612EC6564DE47BB0A018FD9_inline (Span_1_t176257933B4F95507A92292ED5363CE3EFE12BB5* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Span_1_t176257933B4F95507A92292ED5363CE3EFE12BB5*, const RuntimeMethod*))Span_1_get_Length_mFBDFEEEF1A619162D612EC6564DE47BB0A018FD9_gshared_inline)(__this, method);
}
inline void Buffer_Memmove_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m121CA4B55102E3C616B73459B4EB23BEE8C327CB (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* ___0_destination, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method)
{
	((  void (*) (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*, uint64_t, const RuntimeMethod*))Buffer_Memmove_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m121CA4B55102E3C616B73459B4EB23BEE8C327CB_gshared)(___0_destination, ___1_source, ___2_elementCount, method);
}
inline void ReadOnlySpan_1__ctor_m0FEF0E91D60DF5F8905D4DAB78CEB48CDF99EFAA_inline (ReadOnlySpan_1_t30635DB490E7110B945ABB8301B19F8955AD4B64* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method)
{
	((  void (*) (ReadOnlySpan_1_t30635DB490E7110B945ABB8301B19F8955AD4B64*, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*, int32_t, const RuntimeMethod*))ReadOnlySpan_1__ctor_m0FEF0E91D60DF5F8905D4DAB78CEB48CDF99EFAA_gshared_inline)(__this, ___0_ptr, ___1_length, method);
}
inline void Span_1__ctor_m56BE0F54100AF7686F960CA4E18540A35B12420E_inline (Span_1_t176257933B4F95507A92292ED5363CE3EFE12BB5* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method)
{
	((  void (*) (Span_1_t176257933B4F95507A92292ED5363CE3EFE12BB5*, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*, int32_t, const RuntimeMethod*))Span_1__ctor_m56BE0F54100AF7686F960CA4E18540A35B12420E_gshared_inline)(__this, ___0_ptr, ___1_length, method);
}
inline Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* Array_Empty_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_mD846707560FDEBAA9B2BE9F40C7BE2F42A59BAA9_inline (const RuntimeMethod* method)
{
	return ((  Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* (*) (const RuntimeMethod*))Array_Empty_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_mD846707560FDEBAA9B2BE9F40C7BE2F42A59BAA9_gshared_inline)(method);
}
inline void Span_1__ctor_m0F2A60856E23C8A9DC58E03191363DF4E8A6F1B3_inline (Span_1_t176257933B4F95507A92292ED5363CE3EFE12BB5* __this, Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___0_array, const RuntimeMethod* method)
{
	((  void (*) (Span_1_t176257933B4F95507A92292ED5363CE3EFE12BB5*, Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA*, const RuntimeMethod*))Span_1__ctor_m0F2A60856E23C8A9DC58E03191363DF4E8A6F1B3_gshared_inline)(__this, ___0_array, method);
}
inline int32_t Span_1_get_Length_m556440A32F0A1EB65C95120CEC693B9AC4DFD52B_inline (Span_1_t460D4E78469192619B0075C15897A6987393AAF9* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Span_1_t460D4E78469192619B0075C15897A6987393AAF9*, const RuntimeMethod*))Span_1_get_Length_m556440A32F0A1EB65C95120CEC693B9AC4DFD52B_gshared_inline)(__this, method);
}
inline void Buffer_Memmove_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m5E3924B178120F38353E13C8B4545C90C49D6CED (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___0_destination, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method)
{
	((  void (*) (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*, uint64_t, const RuntimeMethod*))Buffer_Memmove_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m5E3924B178120F38353E13C8B4545C90C49D6CED_gshared)(___0_destination, ___1_source, ___2_elementCount, method);
}
inline void ReadOnlySpan_1__ctor_m682BD3D57C99591BB5B14A415A7F8F4D5B14241F_inline (ReadOnlySpan_1_t8C2C24B6B10C9EAC8D8A8C92BED569A12615C2AE* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method)
{
	((  void (*) (ReadOnlySpan_1_t8C2C24B6B10C9EAC8D8A8C92BED569A12615C2AE*, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*, int32_t, const RuntimeMethod*))ReadOnlySpan_1__ctor_m682BD3D57C99591BB5B14A415A7F8F4D5B14241F_gshared_inline)(__this, ___0_ptr, ___1_length, method);
}
inline void Span_1__ctor_m150E0E8C32CF01F22FFC539541D9F6EA05DB6967_inline (Span_1_t460D4E78469192619B0075C15897A6987393AAF9* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method)
{
	((  void (*) (Span_1_t460D4E78469192619B0075C15897A6987393AAF9*, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*, int32_t, const RuntimeMethod*))Span_1__ctor_m150E0E8C32CF01F22FFC539541D9F6EA05DB6967_gshared_inline)(__this, ___0_ptr, ___1_length, method);
}
inline Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* Array_Empty_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_mFE64AD477B9A8397B2CCC3FD2565DCA5B2F0A1F6_inline (const RuntimeMethod* method)
{
	return ((  Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* (*) (const RuntimeMethod*))Array_Empty_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_mFE64AD477B9A8397B2CCC3FD2565DCA5B2F0A1F6_gshared_inline)(method);
}
inline void Span_1__ctor_mCC34AC618271C9F9C196DA22BA5DB8C6D8AD477D_inline (Span_1_t460D4E78469192619B0075C15897A6987393AAF9* __this, Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___0_array, const RuntimeMethod* method)
{
	((  void (*) (Span_1_t460D4E78469192619B0075C15897A6987393AAF9*, Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C*, const RuntimeMethod*))Span_1__ctor_mCC34AC618271C9F9C196DA22BA5DB8C6D8AD477D_gshared_inline)(__this, ___0_array, method);
}
inline int32_t Span_1_get_Length_m63B951643F7F819BFFB479C5BA2A8052CC19650C_inline (Span_1_t993DF21D9162C9A28F81991FA4EABACF87A3BAD1* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Span_1_t993DF21D9162C9A28F81991FA4EABACF87A3BAD1*, const RuntimeMethod*))Span_1_get_Length_m63B951643F7F819BFFB479C5BA2A8052CC19650C_gshared_inline)(__this, method);
}
inline void Buffer_Memmove_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_m7C574D3870D087AA0B03CE7E94375833C6C6BC2C (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* ___0_destination, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method)
{
	((  void (*) (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3*, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3*, uint64_t, const RuntimeMethod*))Buffer_Memmove_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_m7C574D3870D087AA0B03CE7E94375833C6C6BC2C_gshared)(___0_destination, ___1_source, ___2_elementCount, method);
}
inline void ReadOnlySpan_1__ctor_m622AB9D2827B0280526D71584B733E49B439579B_inline (ReadOnlySpan_1_tBB5A0F9CEA726E10BE8D59F79D891AC9218E61F6* __this, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method)
{
	((  void (*) (ReadOnlySpan_1_tBB5A0F9CEA726E10BE8D59F79D891AC9218E61F6*, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3*, int32_t, const RuntimeMethod*))ReadOnlySpan_1__ctor_m622AB9D2827B0280526D71584B733E49B439579B_gshared_inline)(__this, ___0_ptr, ___1_length, method);
}
inline void Span_1__ctor_m1E1947C8E67BCAA48B27C9C86207CD561C1B9B4B_inline (Span_1_t993DF21D9162C9A28F81991FA4EABACF87A3BAD1* __this, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method)
{
	((  void (*) (Span_1_t993DF21D9162C9A28F81991FA4EABACF87A3BAD1*, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3*, int32_t, const RuntimeMethod*))Span_1__ctor_m1E1947C8E67BCAA48B27C9C86207CD561C1B9B4B_gshared_inline)(__this, ___0_ptr, ___1_length, method);
}
inline Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* Array_Empty_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mC82FBEFAE1DCBACBA78974694D57EE7988F95DB8_inline (const RuntimeMethod* method)
{
	return ((  Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* (*) (const RuntimeMethod*))Array_Empty_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mC82FBEFAE1DCBACBA78974694D57EE7988F95DB8_gshared_inline)(method);
}
inline void Span_1__ctor_mD3AD596A514C9F73EAFB0946FB4E0CCD88223C72_inline (Span_1_t993DF21D9162C9A28F81991FA4EABACF87A3BAD1* __this, Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* ___0_array, const RuntimeMethod* method)
{
	((  void (*) (Span_1_t993DF21D9162C9A28F81991FA4EABACF87A3BAD1*, Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD*, const RuntimeMethod*))Span_1__ctor_mD3AD596A514C9F73EAFB0946FB4E0CCD88223C72_gshared_inline)(__this, ___0_array, method);
}
inline int32_t Span_1_get_Length_m04EC398D32B0C4B1E3C1C9FC225757A0414FEC91_inline (Span_1_tC33D382E526B4F8C6EDCA373AD4345BA58673D8E* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Span_1_tC33D382E526B4F8C6EDCA373AD4345BA58673D8E*, const RuntimeMethod*))Span_1_get_Length_m04EC398D32B0C4B1E3C1C9FC225757A0414FEC91_gshared_inline)(__this, method);
}
inline void Buffer_Memmove_TisVertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7_mB63FF1B03BD081ACDE9355ECF72840C863C44004 (Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7* ___0_destination, Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method)
{
	((  void (*) (Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7*, Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7*, uint64_t, const RuntimeMethod*))Buffer_Memmove_TisVertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7_mB63FF1B03BD081ACDE9355ECF72840C863C44004_gshared)(___0_destination, ___1_source, ___2_elementCount, method);
}
inline void ReadOnlySpan_1__ctor_m7E238E2EA0773CDB439F87E732C9E7AD0CF67AEF_inline (ReadOnlySpan_1_t63019D57052C95CA42C48E9757509354A8099A5A* __this, Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method)
{
	((  void (*) (ReadOnlySpan_1_t63019D57052C95CA42C48E9757509354A8099A5A*, Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7*, int32_t, const RuntimeMethod*))ReadOnlySpan_1__ctor_m7E238E2EA0773CDB439F87E732C9E7AD0CF67AEF_gshared_inline)(__this, ___0_ptr, ___1_length, method);
}
inline void Span_1__ctor_m988929F65D47DD66BF1FE5A786F9CEC49F6BED29_inline (Span_1_tC33D382E526B4F8C6EDCA373AD4345BA58673D8E* __this, Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method)
{
	((  void (*) (Span_1_tC33D382E526B4F8C6EDCA373AD4345BA58673D8E*, Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7*, int32_t, const RuntimeMethod*))Span_1__ctor_m988929F65D47DD66BF1FE5A786F9CEC49F6BED29_gshared_inline)(__this, ___0_ptr, ___1_length, method);
}
inline VertexU5BU5D_t2C3F4FF6AFD6D7E9DD7E1D69446FD8E8FC033185* Array_Empty_TisVertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7_mF047DEE22BA81CA2272F392E9BFA291FA2E76093_inline (const RuntimeMethod* method)
{
	return ((  VertexU5BU5D_t2C3F4FF6AFD6D7E9DD7E1D69446FD8E8FC033185* (*) (const RuntimeMethod*))Array_Empty_TisVertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7_mF047DEE22BA81CA2272F392E9BFA291FA2E76093_gshared_inline)(method);
}
inline void Span_1__ctor_m4F2AA40C13302936EB20ECE7DB8B903A2D0FE8DE_inline (Span_1_tC33D382E526B4F8C6EDCA373AD4345BA58673D8E* __this, VertexU5BU5D_t2C3F4FF6AFD6D7E9DD7E1D69446FD8E8FC033185* ___0_array, const RuntimeMethod* method)
{
	((  void (*) (Span_1_tC33D382E526B4F8C6EDCA373AD4345BA58673D8E*, VertexU5BU5D_t2C3F4FF6AFD6D7E9DD7E1D69446FD8E8FC033185*, const RuntimeMethod*))Span_1__ctor_m4F2AA40C13302936EB20ECE7DB8B903A2D0FE8DE_gshared_inline)(__this, ___0_array, method);
}
inline int32_t Span_1_get_Length_m3CBE615865BBBA37C35E5624C623561A3CA7780F_inline (Span_1_tA5C1C4A28024D89A0077601B805025F51EFEE6E0* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Span_1_tA5C1C4A28024D89A0077601B805025F51EFEE6E0*, const RuntimeMethod*))Span_1_get_Length_m3CBE615865BBBA37C35E5624C623561A3CA7780F_gshared_inline)(__this, method);
}
inline void Buffer_Memmove_TisVertexAttributeDescriptor_tD4231FBF57335465D16308D2A18E8E83D36BFA76_mD33F0334F37E4CBF4BBF4008EA599ECF998329B8 (VertexAttributeDescriptor_tD4231FBF57335465D16308D2A18E8E83D36BFA76* ___0_destination, VertexAttributeDescriptor_tD4231FBF57335465D16308D2A18E8E83D36BFA76* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method)
{
	((  void (*) (VertexAttributeDescriptor_tD4231FBF57335465D16308D2A18E8E83D36BFA76*, VertexAttributeDescriptor_tD4231FBF57335465D16308D2A18E8E83D36BFA76*, uint64_t, const RuntimeMethod*))Buffer_Memmove_TisVertexAttributeDescriptor_tD4231FBF57335465D16308D2A18E8E83D36BFA76_mD33F0334F37E4CBF4BBF4008EA599ECF998329B8_gshared)(___0_destination, ___1_source, ___2_elementCount, method);
}
inline void ReadOnlySpan_1__ctor_mB95FD3804E51521FC7AA12B18DE8BB2E8D05AA73_inline (ReadOnlySpan_1_tD6632037B9C2A00A111E1627D34F86F9A6611006* __this, VertexAttributeDescriptor_tD4231FBF57335465D16308D2A18E8E83D36BFA76* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method)
{
	((  void (*) (ReadOnlySpan_1_tD6632037B9C2A00A111E1627D34F86F9A6611006*, VertexAttributeDescriptor_tD4231FBF57335465D16308D2A18E8E83D36BFA76*, int32_t, const RuntimeMethod*))ReadOnlySpan_1__ctor_mB95FD3804E51521FC7AA12B18DE8BB2E8D05AA73_gshared_inline)(__this, ___0_ptr, ___1_length, method);
}
inline void Span_1__ctor_mA5A972B3B527C1A511260B7C1FBE95AE7ACD76B3_inline (Span_1_tA5C1C4A28024D89A0077601B805025F51EFEE6E0* __this, VertexAttributeDescriptor_tD4231FBF57335465D16308D2A18E8E83D36BFA76* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method)
{
	((  void (*) (Span_1_tA5C1C4A28024D89A0077601B805025F51EFEE6E0*, VertexAttributeDescriptor_tD4231FBF57335465D16308D2A18E8E83D36BFA76*, int32_t, const RuntimeMethod*))Span_1__ctor_mA5A972B3B527C1A511260B7C1FBE95AE7ACD76B3_gshared_inline)(__this, ___0_ptr, ___1_length, method);
}
inline VertexAttributeDescriptorU5BU5D_t5D10E60612F12777F59B7E33939F9075DB0E02B2* Array_Empty_TisVertexAttributeDescriptor_tD4231FBF57335465D16308D2A18E8E83D36BFA76_m998FF89091ADB380AE37B11326EBA4E636539F6C_inline (const RuntimeMethod* method)
{
	return ((  VertexAttributeDescriptorU5BU5D_t5D10E60612F12777F59B7E33939F9075DB0E02B2* (*) (const RuntimeMethod*))Array_Empty_TisVertexAttributeDescriptor_tD4231FBF57335465D16308D2A18E8E83D36BFA76_m998FF89091ADB380AE37B11326EBA4E636539F6C_gshared_inline)(method);
}
inline void Span_1__ctor_m528FFD264C3687974947130266E4DEEA1C5DEA82_inline (Span_1_tA5C1C4A28024D89A0077601B805025F51EFEE6E0* __this, VertexAttributeDescriptorU5BU5D_t5D10E60612F12777F59B7E33939F9075DB0E02B2* ___0_array, const RuntimeMethod* method)
{
	((  void (*) (Span_1_tA5C1C4A28024D89A0077601B805025F51EFEE6E0*, VertexAttributeDescriptorU5BU5D_t5D10E60612F12777F59B7E33939F9075DB0E02B2*, const RuntimeMethod*))Span_1__ctor_m528FFD264C3687974947130266E4DEEA1C5DEA82_gshared_inline)(__this, ___0_array, method);
}
inline int32_t Span_1_get_Length_m1AAE29E9DC0ED6DC7011806FFA7B6DE1641D8D01_inline (Span_1_t2C186CD9311CD6C5819274CD880486487FC65AD5* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Span_1_t2C186CD9311CD6C5819274CD880486487FC65AD5*, const RuntimeMethod*))Span_1_get_Length_m1AAE29E9DC0ED6DC7011806FFA7B6DE1641D8D01_gshared_inline)(__this, method);
}
inline void Buffer_Memmove_TisXRNodeState_t683158812A1D80A6BC73DB97405BB0B795A9111A_m9BBFC512D1D3429949038E5AEA1D4A79CD1DCD3B (XRNodeState_t683158812A1D80A6BC73DB97405BB0B795A9111A* ___0_destination, XRNodeState_t683158812A1D80A6BC73DB97405BB0B795A9111A* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method)
{
	((  void (*) (XRNodeState_t683158812A1D80A6BC73DB97405BB0B795A9111A*, XRNodeState_t683158812A1D80A6BC73DB97405BB0B795A9111A*, uint64_t, const RuntimeMethod*))Buffer_Memmove_TisXRNodeState_t683158812A1D80A6BC73DB97405BB0B795A9111A_m9BBFC512D1D3429949038E5AEA1D4A79CD1DCD3B_gshared)(___0_destination, ___1_source, ___2_elementCount, method);
}
inline void ReadOnlySpan_1__ctor_mCF2C3E165323BC112848DC8475FF32D4434B819A_inline (ReadOnlySpan_1_tC8B9E9EA565116C6C5FB765E32BA552A1E45E3C5* __this, XRNodeState_t683158812A1D80A6BC73DB97405BB0B795A9111A* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method)
{
	((  void (*) (ReadOnlySpan_1_tC8B9E9EA565116C6C5FB765E32BA552A1E45E3C5*, XRNodeState_t683158812A1D80A6BC73DB97405BB0B795A9111A*, int32_t, const RuntimeMethod*))ReadOnlySpan_1__ctor_mCF2C3E165323BC112848DC8475FF32D4434B819A_gshared_inline)(__this, ___0_ptr, ___1_length, method);
}
inline void Span_1__ctor_mD8BFA56022C77E5DA5F3235B53D8E55644D65039_inline (Span_1_t2C186CD9311CD6C5819274CD880486487FC65AD5* __this, XRNodeState_t683158812A1D80A6BC73DB97405BB0B795A9111A* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method)
{
	((  void (*) (Span_1_t2C186CD9311CD6C5819274CD880486487FC65AD5*, XRNodeState_t683158812A1D80A6BC73DB97405BB0B795A9111A*, int32_t, const RuntimeMethod*))Span_1__ctor_mD8BFA56022C77E5DA5F3235B53D8E55644D65039_gshared_inline)(__this, ___0_ptr, ___1_length, method);
}
inline XRNodeStateU5BU5D_tEC64805398059D44C2FBA68AABAEFFB262B93845* Array_Empty_TisXRNodeState_t683158812A1D80A6BC73DB97405BB0B795A9111A_mAAEF2CC67A3D794C33C643E1B633B5E2CC2D05BF_inline (const RuntimeMethod* method)
{
	return ((  XRNodeStateU5BU5D_tEC64805398059D44C2FBA68AABAEFFB262B93845* (*) (const RuntimeMethod*))Array_Empty_TisXRNodeState_t683158812A1D80A6BC73DB97405BB0B795A9111A_mAAEF2CC67A3D794C33C643E1B633B5E2CC2D05BF_gshared_inline)(method);
}
inline void Span_1__ctor_m18FED6B7D9CC641149EE6A8D26F4F83ACF26BC76_inline (Span_1_t2C186CD9311CD6C5819274CD880486487FC65AD5* __this, XRNodeStateU5BU5D_tEC64805398059D44C2FBA68AABAEFFB262B93845* ___0_array, const RuntimeMethod* method)
{
	((  void (*) (Span_1_t2C186CD9311CD6C5819274CD880486487FC65AD5*, XRNodeStateU5BU5D_tEC64805398059D44C2FBA68AABAEFFB262B93845*, const RuntimeMethod*))Span_1__ctor_m18FED6B7D9CC641149EE6A8D26F4F83ACF26BC76_gshared_inline)(__this, ___0_array, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3 (RuntimeObject* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172 (Type_t* ___0_left, Type_t* ___1_right, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArrayTypeMismatchException_m781AD7A903FEA43FAE3137977E6BC5F9BAEBC590 (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowInvalidTypeWithPointersNotSupported_m5707DE408588F6EAC3FC7D10F9520308CF8C8CCF (Type_t* ___0_targetType, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t IntPtr_get_Size_m1FAAA59DA73D7E32BB1AB55DD92A90AFE3251DBE (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpanHelpers_ClearWithReferences_m9641D8B6DC3AE81B4B0734BBA0E477EF131CD430 (intptr_t* ___0_ip, uint64_t ___1_pointerSizeLength, const RuntimeMethod* method) ;
inline void ReadOnlySpan_1__ctor_mFA6EE52BCF39100AE30C79E73F0F972182D0CA2A_inline (ReadOnlySpan_1_tC416A5627E04F69CA2947A2A13F0A1DF096CABAC* __this, Il2CppFullySharedGenericAny* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method)
{
	((  void (*) (ReadOnlySpan_1_tC416A5627E04F69CA2947A2A13F0A1DF096CABAC*, Il2CppFullySharedGenericAny*, int32_t, const RuntimeMethod*))ReadOnlySpan_1__ctor_mFA6EE52BCF39100AE30C79E73F0F972182D0CA2A_gshared_inline)(__this, ___0_ptr, ___1_length, method);
}
inline void Span_1__ctor_mBA868F06359701D9950DEB1B10F52F848E9FF6DA_inline (Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54* __this, Il2CppFullySharedGenericAny* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method)
{
	((  void (*) (Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54*, Il2CppFullySharedGenericAny*, int32_t, const RuntimeMethod*))Span_1__ctor_mBA868F06359701D9950DEB1B10F52F848E9FF6DA_gshared_inline)(__this, ___0_ptr, ___1_length, method);
}
inline void Span_1__ctor_m94A95CF4DF158FDF992CC13DA185B637335D84C6_inline (Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54* __this, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___0_array, const RuntimeMethod* method)
{
	((  void (*) (Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54*, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*, const RuntimeMethod*))Span_1__ctor_m94A95CF4DF158FDF992CC13DA185B637335D84C6_gshared_inline)(__this, ___0_array, method);
}
inline int32_t Span_1_get_Length_m9C7E8DECAA7368617C319A866C6A9E960F140BF7_inline (Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7*, const RuntimeMethod*))Span_1_get_Length_m9C7E8DECAA7368617C319A866C6A9E960F140BF7_gshared_inline)(__this, method);
}
inline void Buffer_Memmove_Tisjvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225_m48D2E426B92CBE28782CF29BD703DF063CFF422D (jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225* ___0_destination, jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method)
{
	((  void (*) (jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225*, jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225*, uint64_t, const RuntimeMethod*))Buffer_Memmove_Tisjvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225_m48D2E426B92CBE28782CF29BD703DF063CFF422D_gshared)(___0_destination, ___1_source, ___2_elementCount, method);
}
inline void ReadOnlySpan_1__ctor_m655719167577EE7B24CAAF5A9D0995E0259B6A84_inline (ReadOnlySpan_1_tEC1E786ADECA91AF68E558734868FBB77E05D964* __this, jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method)
{
	((  void (*) (ReadOnlySpan_1_tEC1E786ADECA91AF68E558734868FBB77E05D964*, jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225*, int32_t, const RuntimeMethod*))ReadOnlySpan_1__ctor_m655719167577EE7B24CAAF5A9D0995E0259B6A84_gshared_inline)(__this, ___0_ptr, ___1_length, method);
}
inline void Span_1__ctor_m1DA3ED274C046791E48A52F415066C7C86B031D1_inline (Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7* __this, jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method)
{
	((  void (*) (Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7*, jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225*, int32_t, const RuntimeMethod*))Span_1__ctor_m1DA3ED274C046791E48A52F415066C7C86B031D1_gshared_inline)(__this, ___0_ptr, ___1_length, method);
}
inline jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* Array_Empty_Tisjvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225_mD8B08917D1DC7B424036208C74F0A7A6EC83DAAE_inline (const RuntimeMethod* method)
{
	return ((  jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* (*) (const RuntimeMethod*))Array_Empty_Tisjvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225_mD8B08917D1DC7B424036208C74F0A7A6EC83DAAE_gshared_inline)(method);
}
inline void Span_1__ctor_m13E8571165DB8DB1A1909B44B65D4F220890AC8F_inline (Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7* __this, jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* ___0_array, const RuntimeMethod* method)
{
	((  void (*) (Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7*, jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F*, const RuntimeMethod*))Span_1__ctor_m13E8571165DB8DB1A1909B44B65D4F220890AC8F_gshared_inline)(__this, ___0_array, method);
}
inline int32_t Span_1_get_Length_mA01E6EC21F87170B3B3290278278ED65E825C955_inline (Span_1_t73939D05896281666AE0EFF73CA9AA212455FFCB* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Span_1_t73939D05896281666AE0EFF73CA9AA212455FFCB*, const RuntimeMethod*))Span_1_get_Length_mA01E6EC21F87170B3B3290278278ED65E825C955_gshared_inline)(__this, method);
}
inline void Buffer_Memmove_TisFilterUnion_t85E549621A2CC33D9102C62C6D82B0865FF80D03_m788A7B3C302B6168CE4838B8CE615ADA2A360683 (FilterUnion_t85E549621A2CC33D9102C62C6D82B0865FF80D03* ___0_destination, FilterUnion_t85E549621A2CC33D9102C62C6D82B0865FF80D03* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method)
{
	((  void (*) (FilterUnion_t85E549621A2CC33D9102C62C6D82B0865FF80D03*, FilterUnion_t85E549621A2CC33D9102C62C6D82B0865FF80D03*, uint64_t, const RuntimeMethod*))Buffer_Memmove_TisFilterUnion_t85E549621A2CC33D9102C62C6D82B0865FF80D03_m788A7B3C302B6168CE4838B8CE615ADA2A360683_gshared)(___0_destination, ___1_source, ___2_elementCount, method);
}
inline void ReadOnlySpan_1__ctor_m9AA852A2B6E942135C2D2B2DA01E26BA0126FA7A_inline (ReadOnlySpan_1_t16830A9FEE9E2F3C956F2B8444295F2393BFF6F6* __this, FilterUnion_t85E549621A2CC33D9102C62C6D82B0865FF80D03* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method)
{
	((  void (*) (ReadOnlySpan_1_t16830A9FEE9E2F3C956F2B8444295F2393BFF6F6*, FilterUnion_t85E549621A2CC33D9102C62C6D82B0865FF80D03*, int32_t, const RuntimeMethod*))ReadOnlySpan_1__ctor_m9AA852A2B6E942135C2D2B2DA01E26BA0126FA7A_gshared_inline)(__this, ___0_ptr, ___1_length, method);
}
inline void Span_1__ctor_m9F0AD76F63C6307767B5992FA991815E4F0CF390_inline (Span_1_t73939D05896281666AE0EFF73CA9AA212455FFCB* __this, FilterUnion_t85E549621A2CC33D9102C62C6D82B0865FF80D03* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method)
{
	((  void (*) (Span_1_t73939D05896281666AE0EFF73CA9AA212455FFCB*, FilterUnion_t85E549621A2CC33D9102C62C6D82B0865FF80D03*, int32_t, const RuntimeMethod*))Span_1__ctor_m9F0AD76F63C6307767B5992FA991815E4F0CF390_gshared_inline)(__this, ___0_ptr, ___1_length, method);
}
inline FilterUnionU5BU5D_t8778FBF9BC7FE3230BCB228346D0C62BC9A0A94D* Array_Empty_TisFilterUnion_t85E549621A2CC33D9102C62C6D82B0865FF80D03_mBDE28068FF66192DC2A98763302EFE1E164D3752_inline (const RuntimeMethod* method)
{
	return ((  FilterUnionU5BU5D_t8778FBF9BC7FE3230BCB228346D0C62BC9A0A94D* (*) (const RuntimeMethod*))Array_Empty_TisFilterUnion_t85E549621A2CC33D9102C62C6D82B0865FF80D03_mBDE28068FF66192DC2A98763302EFE1E164D3752_gshared_inline)(method);
}
inline void Span_1__ctor_m9CC9A801484C785265097B625A9BF84CB2E8AA44_inline (Span_1_t73939D05896281666AE0EFF73CA9AA212455FFCB* __this, FilterUnionU5BU5D_t8778FBF9BC7FE3230BCB228346D0C62BC9A0A94D* ___0_array, const RuntimeMethod* method)
{
	((  void (*) (Span_1_t73939D05896281666AE0EFF73CA9AA212455FFCB*, FilterUnionU5BU5D_t8778FBF9BC7FE3230BCB228346D0C62BC9A0A94D*, const RuntimeMethod*))Span_1__ctor_m9CC9A801484C785265097B625A9BF84CB2E8AA44_gshared_inline)(__this, ___0_array, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA (RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149 (RuntimeObject* ___0_obj, bool* ___1_lockTaken, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Copy_m4233828B4E6288B6D815F539AAA38575DE627900 (RuntimeArray* ___0_sourceArray, RuntimeArray* ___1_destinationArray, int32_t ___2_length, const RuntimeMethod* method) ;
inline void SparselyPopulatedArrayAddInfo_1__ctor_m323E378EC0EE0C48A24AA0E14E40D7B020BB0458 (SparselyPopulatedArrayAddInfo_1_tC49C525D3AFE80CB49D53650F40C9A49D4CDD19D* __this, SparselyPopulatedArrayFragment_1_t2D5B093B992E7F6EEEBD059E1065DFEDDBE906FC* ___0_source, int32_t ___1_index, const RuntimeMethod* method)
{
	((  void (*) (SparselyPopulatedArrayAddInfo_1_tC49C525D3AFE80CB49D53650F40C9A49D4CDD19D*, SparselyPopulatedArrayFragment_1_t2D5B093B992E7F6EEEBD059E1065DFEDDBE906FC*, int32_t, const RuntimeMethod*))SparselyPopulatedArrayAddInfo_1__ctor_m323E378EC0EE0C48A24AA0E14E40D7B020BB0458_gshared)(__this, ___0_source, ___1_index, method);
}
inline SparselyPopulatedArrayFragment_1_t2D5B093B992E7F6EEEBD059E1065DFEDDBE906FC* SparselyPopulatedArrayAddInfo_1_get_Source_mBA043CE79666AA955D0FE4335ED3B82802E75C86_inline (SparselyPopulatedArrayAddInfo_1_tC49C525D3AFE80CB49D53650F40C9A49D4CDD19D* __this, const RuntimeMethod* method)
{
	return ((  SparselyPopulatedArrayFragment_1_t2D5B093B992E7F6EEEBD059E1065DFEDDBE906FC* (*) (SparselyPopulatedArrayAddInfo_1_tC49C525D3AFE80CB49D53650F40C9A49D4CDD19D*, const RuntimeMethod*))SparselyPopulatedArrayAddInfo_1_get_Source_mBA043CE79666AA955D0FE4335ED3B82802E75C86_gshared_inline)(__this, method);
}
inline int32_t SparselyPopulatedArrayAddInfo_1_get_Index_mCBBF3F010A994612AC94DA417AB8D04A2C92B45A_inline (SparselyPopulatedArrayAddInfo_1_tC49C525D3AFE80CB49D53650F40C9A49D4CDD19D* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (SparselyPopulatedArrayAddInfo_1_tC49C525D3AFE80CB49D53650F40C9A49D4CDD19D*, const RuntimeMethod*))SparselyPopulatedArrayAddInfo_1_get_Index_mCBBF3F010A994612AC94DA417AB8D04A2C92B45A_gshared_inline)(__this, method);
}
inline void SparselyPopulatedArrayFragment_1__ctor_m849B5F4632EC0E042F4CF4F23102F9D74CE14294 (SparselyPopulatedArrayFragment_1_t2D5B093B992E7F6EEEBD059E1065DFEDDBE906FC* __this, int32_t ___0_size, SparselyPopulatedArrayFragment_1_t2D5B093B992E7F6EEEBD059E1065DFEDDBE906FC* ___1_prev, const RuntimeMethod* method)
{
	((  void (*) (SparselyPopulatedArrayFragment_1_t2D5B093B992E7F6EEEBD059E1065DFEDDBE906FC*, int32_t, SparselyPopulatedArrayFragment_1_t2D5B093B992E7F6EEEBD059E1065DFEDDBE906FC*, const RuntimeMethod*))SparselyPopulatedArrayFragment_1__ctor_m849B5F4632EC0E042F4CF4F23102F9D74CE14294_gshared)(__this, ___0_size, ___1_prev, method);
}
inline void SparselyPopulatedArrayFragment_1__ctor_m1BAEA22A2C2FD0C50376CEBFC7F3A024EE3C302E (SparselyPopulatedArrayFragment_1_t2D5B093B992E7F6EEEBD059E1065DFEDDBE906FC* __this, int32_t ___0_size, const RuntimeMethod* method)
{
	((  void (*) (SparselyPopulatedArrayFragment_1_t2D5B093B992E7F6EEEBD059E1065DFEDDBE906FC*, int32_t, const RuntimeMethod*))SparselyPopulatedArrayFragment_1__ctor_m1BAEA22A2C2FD0C50376CEBFC7F3A024EE3C302E_gshared)(__this, ___0_size, method);
}
inline int32_t SparselyPopulatedArrayFragment_1_get_Length_m2F77B48EDD934ED6586E559645752EB229677D27 (SparselyPopulatedArrayFragment_1_t2D5B093B992E7F6EEEBD059E1065DFEDDBE906FC* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (SparselyPopulatedArrayFragment_1_t2D5B093B992E7F6EEEBD059E1065DFEDDBE906FC*, const RuntimeMethod*))SparselyPopulatedArrayFragment_1_get_Length_m2F77B48EDD934ED6586E559645752EB229677D27_gshared)(__this, method);
}
inline void StackScope_1__ctor_mB5878954E782DE87BB4C30D92E66F23988D6BC86 (StackScope_1_tB82A0C5F6E33138F56988FA681174EF82C9ADB26* __this, Stack_1_tF3E5E7101E929741300A1CF7C159A6ED9B61621A** ___0_stack, const RuntimeMethod* method)
{
	((  void (*) (StackScope_1_tB82A0C5F6E33138F56988FA681174EF82C9ADB26*, Stack_1_tF3E5E7101E929741300A1CF7C159A6ED9B61621A**, const RuntimeMethod*))StackScope_1__ctor_mB5878954E782DE87BB4C30D92E66F23988D6BC86_gshared)(__this, ___0_stack, method);
}
inline void StackScope_1_Dispose_m23CF13EF100AC68D65C505ECE7714FF44A2B4248 (StackScope_1_tB82A0C5F6E33138F56988FA681174EF82C9ADB26* __this, const RuntimeMethod* method)
{
	((  void (*) (StackScope_1_tB82A0C5F6E33138F56988FA681174EF82C9ADB26*, const RuntimeMethod*))StackScope_1_Dispose_m23CF13EF100AC68D65C505ECE7714FF44A2B4248_gshared)(__this, method);
}
inline HierarchyNodeU5BU5D_t58C5014EDF77A3B09F6BA5DEE95D32133F935DB2* Array_Empty_TisHierarchyNode_t6A6A738223CC5D7FB463CAF6F379C48726891704_m706F26FDE3D55E478AE8D88D0CA5AE597D17F184_inline (const RuntimeMethod* method)
{
	return ((  HierarchyNodeU5BU5D_t58C5014EDF77A3B09F6BA5DEE95D32133F935DB2* (*) (const RuntimeMethod*))Array_Empty_TisHierarchyNode_t6A6A738223CC5D7FB463CAF6F379C48726891704_m706F26FDE3D55E478AE8D88D0CA5AE597D17F184_gshared_inline)(method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentOutOfRangeException__ctor_m60B543A63AC8692C28096003FBF2AD124B9D5B85 (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* __this, String_t* ___0_paramName, RuntimeObject* ___1_actualValue, String_t* ___2_message, const RuntimeMethod* method) ;
inline int32_t Array_LastIndexOf_TisHierarchyNode_t6A6A738223CC5D7FB463CAF6F379C48726891704_m36B76798B43F8ECDB69F02AEEDA8CDF00572CF1E (HierarchyNodeU5BU5D_t58C5014EDF77A3B09F6BA5DEE95D32133F935DB2* ___0_array, HierarchyNode_t6A6A738223CC5D7FB463CAF6F379C48726891704 ___1_value, int32_t ___2_startIndex, const RuntimeMethod* method)
{
	return ((  int32_t (*) (HierarchyNodeU5BU5D_t58C5014EDF77A3B09F6BA5DEE95D32133F935DB2*, HierarchyNode_t6A6A738223CC5D7FB463CAF6F379C48726891704, int32_t, const RuntimeMethod*))Array_LastIndexOf_TisHierarchyNode_t6A6A738223CC5D7FB463CAF6F379C48726891704_m36B76798B43F8ECDB69F02AEEDA8CDF00572CF1E_gshared)(___0_array, ___1_value, ___2_startIndex, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* __this, String_t* ___0_paramName, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F (RuntimeArray* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62 (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* __this, String_t* ___0_message, String_t* ___1_paramName, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC (RuntimeArray* __this, int32_t ___0_dimension, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57 (RuntimeArray* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465 (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* __this, String_t* ___0_message, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41 (RuntimeArray* ___0_sourceArray, int32_t ___1_sourceIndex, RuntimeArray* ___2_destinationArray, int32_t ___3_destinationIndex, int32_t ___4_length, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Reverse_mE788006243D34C654D7DDEF13E2D9E7B129AF8AD (RuntimeArray* ___0_array, int32_t ___1_index, int32_t ___2_length, const RuntimeMethod* method) ;
inline void Enumerator__ctor_mEF1727C054DE777D5CAA14257FF364FCF9D0C322 (Enumerator_t63C146B90BB6962E05FEDDDD803FA59E6F5798ED* __this, Stack_1_tF6C1720CA323403285CF731A334044D9C18E64AD* ___0_stack, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t63C146B90BB6962E05FEDDDD803FA59E6F5798ED*, Stack_1_tF6C1720CA323403285CF731A334044D9C18E64AD*, const RuntimeMethod*))Enumerator__ctor_mEF1727C054DE777D5CAA14257FF364FCF9D0C322_gshared)(__this, ___0_stack, method);
}
inline void Stack_1_ThrowForEmptyStack_mD8D9DAAAB71FC95A7478CAE1EFC3F9CBA60062F9 (Stack_1_tF6C1720CA323403285CF731A334044D9C18E64AD* __this, const RuntimeMethod* method)
{
	((  void (*) (Stack_1_tF6C1720CA323403285CF731A334044D9C18E64AD*, const RuntimeMethod*))Stack_1_ThrowForEmptyStack_mD8D9DAAAB71FC95A7478CAE1EFC3F9CBA60062F9_gshared)(__this, method);
}
inline void Stack_1_PushWithResize_m4A54403E217E9C2919499F239D795451D6427A1E (Stack_1_tF6C1720CA323403285CF731A334044D9C18E64AD* __this, HierarchyNode_t6A6A738223CC5D7FB463CAF6F379C48726891704 ___0_item, const RuntimeMethod* method)
{
	((  void (*) (Stack_1_tF6C1720CA323403285CF731A334044D9C18E64AD*, HierarchyNode_t6A6A738223CC5D7FB463CAF6F379C48726891704, const RuntimeMethod*))Stack_1_PushWithResize_m4A54403E217E9C2919499F239D795451D6427A1E_gshared)(__this, ___0_item, method);
}
inline void Array_Resize_TisHierarchyNode_t6A6A738223CC5D7FB463CAF6F379C48726891704_m711809DC166BD212E8F847D31D18B7C63CC00174 (HierarchyNodeU5BU5D_t58C5014EDF77A3B09F6BA5DEE95D32133F935DB2** ___0_array, int32_t ___1_newSize, const RuntimeMethod* method)
{
	((  void (*) (HierarchyNodeU5BU5D_t58C5014EDF77A3B09F6BA5DEE95D32133F935DB2**, int32_t, const RuntimeMethod*))Array_Resize_TisHierarchyNode_t6A6A738223CC5D7FB463CAF6F379C48726891704_m711809DC166BD212E8F847D31D18B7C63CC00174_gshared)(___0_array, ___1_newSize, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162 (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* __this, String_t* ___0_message, const RuntimeMethod* method) ;
inline Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* Array_Empty_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m4D53E0E0F90F37AD5DBFD2DC75E52406F90C7ABC_inline (const RuntimeMethod* method)
{
	return ((  Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* (*) (const RuntimeMethod*))Array_Empty_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m4D53E0E0F90F37AD5DBFD2DC75E52406F90C7ABC_gshared_inline)(method);
}
inline int32_t Array_LastIndexOf_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m603821E13AA067379EA5D21B577261CBB0BEF8E6 (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___0_array, int32_t ___1_value, int32_t ___2_startIndex, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*, int32_t, int32_t, const RuntimeMethod*))Array_LastIndexOf_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m603821E13AA067379EA5D21B577261CBB0BEF8E6_gshared)(___0_array, ___1_value, ___2_startIndex, method);
}
inline void Enumerator__ctor_m3D5138341817152CEF519175368AA02FBB797C96 (Enumerator_t1ED2EFBA8997D05D3B6586A9FF9D467F8D5482F0* __this, Stack_1_t3197E0F5EA36E611B259A88751D31FC2396FE4B6* ___0_stack, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t1ED2EFBA8997D05D3B6586A9FF9D467F8D5482F0*, Stack_1_t3197E0F5EA36E611B259A88751D31FC2396FE4B6*, const RuntimeMethod*))Enumerator__ctor_m3D5138341817152CEF519175368AA02FBB797C96_gshared)(__this, ___0_stack, method);
}
inline void Stack_1_ThrowForEmptyStack_mA0C247058163BBAB7D8BFE60D542FFE434A3D834 (Stack_1_t3197E0F5EA36E611B259A88751D31FC2396FE4B6* __this, const RuntimeMethod* method)
{
	((  void (*) (Stack_1_t3197E0F5EA36E611B259A88751D31FC2396FE4B6*, const RuntimeMethod*))Stack_1_ThrowForEmptyStack_mA0C247058163BBAB7D8BFE60D542FFE434A3D834_gshared)(__this, method);
}
inline void Stack_1_PushWithResize_m2E32959EAD54D6F02C9FF531A2AFDEF3EC04FEB6 (Stack_1_t3197E0F5EA36E611B259A88751D31FC2396FE4B6* __this, int32_t ___0_item, const RuntimeMethod* method)
{
	((  void (*) (Stack_1_t3197E0F5EA36E611B259A88751D31FC2396FE4B6*, int32_t, const RuntimeMethod*))Stack_1_PushWithResize_m2E32959EAD54D6F02C9FF531A2AFDEF3EC04FEB6_gshared)(__this, ___0_item, method);
}
inline void Array_Resize_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m6BAA7BD6F22421B894347B1476C37052FAC6C916 (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C** ___0_array, int32_t ___1_newSize, const RuntimeMethod* method)
{
	((  void (*) (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C**, int32_t, const RuntimeMethod*))Array_Resize_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m6BAA7BD6F22421B894347B1476C37052FAC6C916_gshared)(___0_array, ___1_newSize, method);
}
inline Int32EnumU5BU5D_t87B7DB802810C38016332669039EF42C487A081F* Array_Empty_TisInt32Enum_tCBAC8BA2BFF3A845FA599F303093BBBA374B6F0C_m94E12BB613D748D2EEB9E1ABD961630D2F970385_inline (const RuntimeMethod* method)
{
	return ((  Int32EnumU5BU5D_t87B7DB802810C38016332669039EF42C487A081F* (*) (const RuntimeMethod*))Array_Empty_TisInt32Enum_tCBAC8BA2BFF3A845FA599F303093BBBA374B6F0C_m94E12BB613D748D2EEB9E1ABD961630D2F970385_gshared_inline)(method);
}
inline int32_t Array_LastIndexOf_TisInt32Enum_tCBAC8BA2BFF3A845FA599F303093BBBA374B6F0C_m92EE93D981B3058A8384DCA90FFC1502242652F7 (Int32EnumU5BU5D_t87B7DB802810C38016332669039EF42C487A081F* ___0_array, int32_t ___1_value, int32_t ___2_startIndex, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Int32EnumU5BU5D_t87B7DB802810C38016332669039EF42C487A081F*, int32_t, int32_t, const RuntimeMethod*))Array_LastIndexOf_TisInt32Enum_tCBAC8BA2BFF3A845FA599F303093BBBA374B6F0C_m92EE93D981B3058A8384DCA90FFC1502242652F7_gshared)(___0_array, ___1_value, ___2_startIndex, method);
}
inline void Enumerator__ctor_m89062508E459D03177AC1ECE62116EFC56A6FB61 (Enumerator_t0D7F1F6081F1B6DDB263573004129C443F04F41C* __this, Stack_1_t509AEAED71EF48FB8551C238C1BA01882CC654B9* ___0_stack, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t0D7F1F6081F1B6DDB263573004129C443F04F41C*, Stack_1_t509AEAED71EF48FB8551C238C1BA01882CC654B9*, const RuntimeMethod*))Enumerator__ctor_m89062508E459D03177AC1ECE62116EFC56A6FB61_gshared)(__this, ___0_stack, method);
}
inline void Stack_1_ThrowForEmptyStack_m652E1B38200FB5443D4A6688E81A1589AE0D10DC (Stack_1_t509AEAED71EF48FB8551C238C1BA01882CC654B9* __this, const RuntimeMethod* method)
{
	((  void (*) (Stack_1_t509AEAED71EF48FB8551C238C1BA01882CC654B9*, const RuntimeMethod*))Stack_1_ThrowForEmptyStack_m652E1B38200FB5443D4A6688E81A1589AE0D10DC_gshared)(__this, method);
}
inline void Stack_1_PushWithResize_mBA4873FC90B54D47FCDFAF825F1E462FA6F28560 (Stack_1_t509AEAED71EF48FB8551C238C1BA01882CC654B9* __this, int32_t ___0_item, const RuntimeMethod* method)
{
	((  void (*) (Stack_1_t509AEAED71EF48FB8551C238C1BA01882CC654B9*, int32_t, const RuntimeMethod*))Stack_1_PushWithResize_mBA4873FC90B54D47FCDFAF825F1E462FA6F28560_gshared)(__this, ___0_item, method);
}
inline void Array_Resize_TisInt32Enum_tCBAC8BA2BFF3A845FA599F303093BBBA374B6F0C_m540BB33A026A346B7B0033684BE811ED519B1E33 (Int32EnumU5BU5D_t87B7DB802810C38016332669039EF42C487A081F** ___0_array, int32_t ___1_newSize, const RuntimeMethod* method)
{
	((  void (*) (Int32EnumU5BU5D_t87B7DB802810C38016332669039EF42C487A081F**, int32_t, const RuntimeMethod*))Array_Resize_TisInt32Enum_tCBAC8BA2BFF3A845FA599F303093BBBA374B6F0C_m540BB33A026A346B7B0033684BE811ED519B1E33_gshared)(___0_array, ___1_newSize, method);
}
inline LayoutHandleU5BU5D_tC6BCD3778F861245031A441921C9F04DD1CA1DCA* Array_Empty_TisLayoutHandle_tCFE060947B4EDC8F11BF5B480181493FB578BEB6_m7C8D9147C004C0FB177D8EEC050E7FCBA367EE66_inline (const RuntimeMethod* method)
{
	return ((  LayoutHandleU5BU5D_tC6BCD3778F861245031A441921C9F04DD1CA1DCA* (*) (const RuntimeMethod*))Array_Empty_TisLayoutHandle_tCFE060947B4EDC8F11BF5B480181493FB578BEB6_m7C8D9147C004C0FB177D8EEC050E7FCBA367EE66_gshared_inline)(method);
}
inline int32_t Array_LastIndexOf_TisLayoutHandle_tCFE060947B4EDC8F11BF5B480181493FB578BEB6_m4E81267251F27979AA8C653DFD2284D2D9BDE96D (LayoutHandleU5BU5D_tC6BCD3778F861245031A441921C9F04DD1CA1DCA* ___0_array, LayoutHandle_tCFE060947B4EDC8F11BF5B480181493FB578BEB6 ___1_value, int32_t ___2_startIndex, const RuntimeMethod* method)
{
	return ((  int32_t (*) (LayoutHandleU5BU5D_tC6BCD3778F861245031A441921C9F04DD1CA1DCA*, LayoutHandle_tCFE060947B4EDC8F11BF5B480181493FB578BEB6, int32_t, const RuntimeMethod*))Array_LastIndexOf_TisLayoutHandle_tCFE060947B4EDC8F11BF5B480181493FB578BEB6_m4E81267251F27979AA8C653DFD2284D2D9BDE96D_gshared)(___0_array, ___1_value, ___2_startIndex, method);
}
inline void Enumerator__ctor_mA0D99F608AB5E5B7B3E091A14655E79FC65EE579 (Enumerator_t4A00EBE66EB6847DAB3AEB3D0799C4458493F714* __this, Stack_1_tC86D82FC3927CE2C02687F21B34C2E808D044724* ___0_stack, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t4A00EBE66EB6847DAB3AEB3D0799C4458493F714*, Stack_1_tC86D82FC3927CE2C02687F21B34C2E808D044724*, const RuntimeMethod*))Enumerator__ctor_mA0D99F608AB5E5B7B3E091A14655E79FC65EE579_gshared)(__this, ___0_stack, method);
}
inline void Stack_1_ThrowForEmptyStack_mF57B83420720498BF13BDDF518AF6641E84837B3 (Stack_1_tC86D82FC3927CE2C02687F21B34C2E808D044724* __this, const RuntimeMethod* method)
{
	((  void (*) (Stack_1_tC86D82FC3927CE2C02687F21B34C2E808D044724*, const RuntimeMethod*))Stack_1_ThrowForEmptyStack_mF57B83420720498BF13BDDF518AF6641E84837B3_gshared)(__this, method);
}
inline void Stack_1_PushWithResize_m65C430028275A2D49444BA6331AB2631D04D8183 (Stack_1_tC86D82FC3927CE2C02687F21B34C2E808D044724* __this, LayoutHandle_tCFE060947B4EDC8F11BF5B480181493FB578BEB6 ___0_item, const RuntimeMethod* method)
{
	((  void (*) (Stack_1_tC86D82FC3927CE2C02687F21B34C2E808D044724*, LayoutHandle_tCFE060947B4EDC8F11BF5B480181493FB578BEB6, const RuntimeMethod*))Stack_1_PushWithResize_m65C430028275A2D49444BA6331AB2631D04D8183_gshared)(__this, ___0_item, method);
}
inline void Array_Resize_TisLayoutHandle_tCFE060947B4EDC8F11BF5B480181493FB578BEB6_mA1FA0777E5E2094927AC5A13BBC6102247904AC3 (LayoutHandleU5BU5D_tC6BCD3778F861245031A441921C9F04DD1CA1DCA** ___0_array, int32_t ___1_newSize, const RuntimeMethod* method)
{
	((  void (*) (LayoutHandleU5BU5D_tC6BCD3778F861245031A441921C9F04DD1CA1DCA**, int32_t, const RuntimeMethod*))Array_Resize_TisLayoutHandle_tCFE060947B4EDC8F11BF5B480181493FB578BEB6_mA1FA0777E5E2094927AC5A13BBC6102247904AC3_gshared)(___0_array, ___1_newSize, method);
}
inline Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D* Array_Empty_TisMatrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_m36408D2B54D6A6519FAF5E5AD03F49ECECA09F2E_inline (const RuntimeMethod* method)
{
	return ((  Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D* (*) (const RuntimeMethod*))Array_Empty_TisMatrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_m36408D2B54D6A6519FAF5E5AD03F49ECECA09F2E_gshared_inline)(method);
}
inline int32_t Array_LastIndexOf_TisMatrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_mFC821A119D3BD51B91A59F09A28A8FDC1C32F6FC (Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D* ___0_array, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___1_value, int32_t ___2_startIndex, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D*, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6, int32_t, const RuntimeMethod*))Array_LastIndexOf_TisMatrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_mFC821A119D3BD51B91A59F09A28A8FDC1C32F6FC_gshared)(___0_array, ___1_value, ___2_startIndex, method);
}
inline void Enumerator__ctor_mB2E659404649FBEA780D53C3FA4E957998A349FB (Enumerator_t1999C0BADD971016559CDAF90DA9DC67FAEF5B8A* __this, Stack_1_t8A661B4E11F715EF60608DE57485D9956E00C72E* ___0_stack, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t1999C0BADD971016559CDAF90DA9DC67FAEF5B8A*, Stack_1_t8A661B4E11F715EF60608DE57485D9956E00C72E*, const RuntimeMethod*))Enumerator__ctor_mB2E659404649FBEA780D53C3FA4E957998A349FB_gshared)(__this, ___0_stack, method);
}
inline void Stack_1_ThrowForEmptyStack_m8A1BE6CEDDAD8DB304FC2E141DA5635DB3B88338 (Stack_1_t8A661B4E11F715EF60608DE57485D9956E00C72E* __this, const RuntimeMethod* method)
{
	((  void (*) (Stack_1_t8A661B4E11F715EF60608DE57485D9956E00C72E*, const RuntimeMethod*))Stack_1_ThrowForEmptyStack_m8A1BE6CEDDAD8DB304FC2E141DA5635DB3B88338_gshared)(__this, method);
}
inline void Stack_1_PushWithResize_m08841831A121C2488026F8131C34F8C15C250CC1 (Stack_1_t8A661B4E11F715EF60608DE57485D9956E00C72E* __this, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___0_item, const RuntimeMethod* method)
{
	((  void (*) (Stack_1_t8A661B4E11F715EF60608DE57485D9956E00C72E*, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6, const RuntimeMethod*))Stack_1_PushWithResize_m08841831A121C2488026F8131C34F8C15C250CC1_gshared)(__this, ___0_item, method);
}
inline void Array_Resize_TisMatrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_m45E2DE0DBF4E0547B569F9496A9D773B058C30CA (Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D** ___0_array, int32_t ___1_newSize, const RuntimeMethod* method)
{
	((  void (*) (Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D**, int32_t, const RuntimeMethod*))Array_Resize_TisMatrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_m45E2DE0DBF4E0547B569F9496A9D773B058C30CA_gshared)(___0_array, ___1_newSize, method);
}
inline ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_inline (const RuntimeMethod* method)
{
	return ((  ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* (*) (const RuntimeMethod*))Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_gshared_inline)(method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB (RuntimeArray* ___0_array, int32_t ___1_index, int32_t ___2_length, const RuntimeMethod* method) ;
inline int32_t Array_LastIndexOf_TisRuntimeObject_m60B0AA749643DFCD60274810604B33A8A2CF0A40 (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___0_array, RuntimeObject* ___1_value, int32_t ___2_startIndex, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, RuntimeObject*, int32_t, const RuntimeMethod*))Array_LastIndexOf_TisRuntimeObject_m60B0AA749643DFCD60274810604B33A8A2CF0A40_gshared)(___0_array, ___1_value, ___2_startIndex, method);
}
inline void Enumerator__ctor_m9F25E94BA06F0C82E9CE1E5A204D5C65DEA9DEAB (Enumerator_t852186DADC50D976C4BD8FE59C506354ED48B974* __this, Stack_1_tAD790A47551563636908E21E4F08C54C0C323EB5* ___0_stack, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t852186DADC50D976C4BD8FE59C506354ED48B974*, Stack_1_tAD790A47551563636908E21E4F08C54C0C323EB5*, const RuntimeMethod*))Enumerator__ctor_m9F25E94BA06F0C82E9CE1E5A204D5C65DEA9DEAB_gshared)(__this, ___0_stack, method);
}
inline void Stack_1_ThrowForEmptyStack_m44B37D35FD9357C7012A60D95B04AB96C0463EC7 (Stack_1_tAD790A47551563636908E21E4F08C54C0C323EB5* __this, const RuntimeMethod* method)
{
	((  void (*) (Stack_1_tAD790A47551563636908E21E4F08C54C0C323EB5*, const RuntimeMethod*))Stack_1_ThrowForEmptyStack_m44B37D35FD9357C7012A60D95B04AB96C0463EC7_gshared)(__this, method);
}
inline void Stack_1_PushWithResize_mEC6D96B634757F6C1B0839B2B591944DF48C2B9B (Stack_1_tAD790A47551563636908E21E4F08C54C0C323EB5* __this, RuntimeObject* ___0_item, const RuntimeMethod* method)
{
	((  void (*) (Stack_1_tAD790A47551563636908E21E4F08C54C0C323EB5*, RuntimeObject*, const RuntimeMethod*))Stack_1_PushWithResize_mEC6D96B634757F6C1B0839B2B591944DF48C2B9B_gshared)(__this, ___0_item, method);
}
inline void Array_Resize_TisRuntimeObject_mE8D92C287251BAF8256D85E5829F749359EC334E (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918** ___0_array, int32_t ___1_newSize, const RuntimeMethod* method)
{
	((  void (*) (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918**, int32_t, const RuntimeMethod*))Array_Resize_TisRuntimeObject_mE8D92C287251BAF8256D85E5829F749359EC334E_gshared)(___0_array, ___1_newSize, method);
}
inline RectU5BU5D_t83297CB2E61BDF9D27DCB1A3E5C78EBCE9F7C993* Array_Empty_TisRect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D_m85A5CFE26D5D127B03744735ED2B5FC30FCB1D59_inline (const RuntimeMethod* method)
{
	return ((  RectU5BU5D_t83297CB2E61BDF9D27DCB1A3E5C78EBCE9F7C993* (*) (const RuntimeMethod*))Array_Empty_TisRect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D_m85A5CFE26D5D127B03744735ED2B5FC30FCB1D59_gshared_inline)(method);
}
inline int32_t Array_LastIndexOf_TisRect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D_mCEA7CE77FA45B1CB38444D71C46BC24E06A0ECA4 (RectU5BU5D_t83297CB2E61BDF9D27DCB1A3E5C78EBCE9F7C993* ___0_array, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___1_value, int32_t ___2_startIndex, const RuntimeMethod* method)
{
	return ((  int32_t (*) (RectU5BU5D_t83297CB2E61BDF9D27DCB1A3E5C78EBCE9F7C993*, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D, int32_t, const RuntimeMethod*))Array_LastIndexOf_TisRect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D_mCEA7CE77FA45B1CB38444D71C46BC24E06A0ECA4_gshared)(___0_array, ___1_value, ___2_startIndex, method);
}
inline void Enumerator__ctor_mF9CC77EDB16F67702CB0692CE3FB4BCA5EACC97E (Enumerator_t0757D472C179E7C385905619753AC7417A77B40A* __this, Stack_1_tEEC1F6968B6388E4800894946805617A2E7EDFDA* ___0_stack, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t0757D472C179E7C385905619753AC7417A77B40A*, Stack_1_tEEC1F6968B6388E4800894946805617A2E7EDFDA*, const RuntimeMethod*))Enumerator__ctor_mF9CC77EDB16F67702CB0692CE3FB4BCA5EACC97E_gshared)(__this, ___0_stack, method);
}
inline void Stack_1_ThrowForEmptyStack_m9BB67CADD6555D0CECCD2652588673184823D4E6 (Stack_1_tEEC1F6968B6388E4800894946805617A2E7EDFDA* __this, const RuntimeMethod* method)
{
	((  void (*) (Stack_1_tEEC1F6968B6388E4800894946805617A2E7EDFDA*, const RuntimeMethod*))Stack_1_ThrowForEmptyStack_m9BB67CADD6555D0CECCD2652588673184823D4E6_gshared)(__this, method);
}
inline void Stack_1_PushWithResize_m856B55C10DA17E80AD34FF3B276B07A80685EBFE (Stack_1_tEEC1F6968B6388E4800894946805617A2E7EDFDA* __this, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___0_item, const RuntimeMethod* method)
{
	((  void (*) (Stack_1_tEEC1F6968B6388E4800894946805617A2E7EDFDA*, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D, const RuntimeMethod*))Stack_1_PushWithResize_m856B55C10DA17E80AD34FF3B276B07A80685EBFE_gshared)(__this, ___0_item, method);
}
inline void Array_Resize_TisRect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D_m2EC92F2F8F9EEAB25DF52C72C3C856D1ECA0C2A5 (RectU5BU5D_t83297CB2E61BDF9D27DCB1A3E5C78EBCE9F7C993** ___0_array, int32_t ___1_newSize, const RuntimeMethod* method)
{
	((  void (*) (RectU5BU5D_t83297CB2E61BDF9D27DCB1A3E5C78EBCE9F7C993**, int32_t, const RuntimeMethod*))Array_Resize_TisRect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D_m2EC92F2F8F9EEAB25DF52C72C3C856D1ECA0C2A5_gshared)(___0_array, ___1_newSize, method);
}
inline TextureIdU5BU5D_t03041DBB5C72B7E6F5F694A36DC5FEA75432188A* Array_Empty_TisTextureId_tFF4B4AAE53408AB10B0B89CCA5F7B50CF2535E58_m3AE07A4CEAA2B2E2C2E03472BBF9F79BC799F948_inline (const RuntimeMethod* method)
{
	return ((  TextureIdU5BU5D_t03041DBB5C72B7E6F5F694A36DC5FEA75432188A* (*) (const RuntimeMethod*))Array_Empty_TisTextureId_tFF4B4AAE53408AB10B0B89CCA5F7B50CF2535E58_m3AE07A4CEAA2B2E2C2E03472BBF9F79BC799F948_gshared_inline)(method);
}
inline int32_t Array_LastIndexOf_TisTextureId_tFF4B4AAE53408AB10B0B89CCA5F7B50CF2535E58_m5291A70BF372F7D73477976310C09A5B3BE49C90 (TextureIdU5BU5D_t03041DBB5C72B7E6F5F694A36DC5FEA75432188A* ___0_array, TextureId_tFF4B4AAE53408AB10B0B89CCA5F7B50CF2535E58 ___1_value, int32_t ___2_startIndex, const RuntimeMethod* method)
{
	return ((  int32_t (*) (TextureIdU5BU5D_t03041DBB5C72B7E6F5F694A36DC5FEA75432188A*, TextureId_tFF4B4AAE53408AB10B0B89CCA5F7B50CF2535E58, int32_t, const RuntimeMethod*))Array_LastIndexOf_TisTextureId_tFF4B4AAE53408AB10B0B89CCA5F7B50CF2535E58_m5291A70BF372F7D73477976310C09A5B3BE49C90_gshared)(___0_array, ___1_value, ___2_startIndex, method);
}
inline void Enumerator__ctor_mF766BF2C1792506A6941458B5EA1940528EAABA7 (Enumerator_tE489CD82CEA07F70C1967F4E911F125AA65FD336* __this, Stack_1_t3B750F239246A65B0BACFB807CBA1961CA8DE0A6* ___0_stack, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tE489CD82CEA07F70C1967F4E911F125AA65FD336*, Stack_1_t3B750F239246A65B0BACFB807CBA1961CA8DE0A6*, const RuntimeMethod*))Enumerator__ctor_mF766BF2C1792506A6941458B5EA1940528EAABA7_gshared)(__this, ___0_stack, method);
}
inline void Stack_1_ThrowForEmptyStack_mB0004CD20AD9DFADDF410E929CF49B0FAFE7B78C (Stack_1_t3B750F239246A65B0BACFB807CBA1961CA8DE0A6* __this, const RuntimeMethod* method)
{
	((  void (*) (Stack_1_t3B750F239246A65B0BACFB807CBA1961CA8DE0A6*, const RuntimeMethod*))Stack_1_ThrowForEmptyStack_mB0004CD20AD9DFADDF410E929CF49B0FAFE7B78C_gshared)(__this, method);
}
inline void Stack_1_PushWithResize_m067591A26AE7959E4430DD0FC3844D46AEAC3E90 (Stack_1_t3B750F239246A65B0BACFB807CBA1961CA8DE0A6* __this, TextureId_tFF4B4AAE53408AB10B0B89CCA5F7B50CF2535E58 ___0_item, const RuntimeMethod* method)
{
	((  void (*) (Stack_1_t3B750F239246A65B0BACFB807CBA1961CA8DE0A6*, TextureId_tFF4B4AAE53408AB10B0B89CCA5F7B50CF2535E58, const RuntimeMethod*))Stack_1_PushWithResize_m067591A26AE7959E4430DD0FC3844D46AEAC3E90_gshared)(__this, ___0_item, method);
}
inline void Array_Resize_TisTextureId_tFF4B4AAE53408AB10B0B89CCA5F7B50CF2535E58_m980E6BCF46D049ECA55F63095E52D73F5C656788 (TextureIdU5BU5D_t03041DBB5C72B7E6F5F694A36DC5FEA75432188A** ___0_array, int32_t ___1_newSize, const RuntimeMethod* method)
{
	((  void (*) (TextureIdU5BU5D_t03041DBB5C72B7E6F5F694A36DC5FEA75432188A**, int32_t, const RuntimeMethod*))Array_Resize_TisTextureId_tFF4B4AAE53408AB10B0B89CCA5F7B50CF2535E58_m980E6BCF46D049ECA55F63095E52D73F5C656788_gshared)(___0_array, ___1_newSize, method);
}
inline void Enumerator__ctor_mD65EF492693E70B41695A031A49F72C7EFA82FCE (Enumerator_t9C40FA80DC7A4C63469E514386FAB9AE1039DF41* __this, Stack_1_tF3E5E7101E929741300A1CF7C159A6ED9B61621A* ___0_stack, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t9C40FA80DC7A4C63469E514386FAB9AE1039DF41*, Stack_1_tF3E5E7101E929741300A1CF7C159A6ED9B61621A*, const RuntimeMethod*))Enumerator__ctor_mD65EF492693E70B41695A031A49F72C7EFA82FCE_gshared)(__this, ___0_stack, method);
}
inline MatchContextU5BU5D_t49C4E5DA5C1F9B06B211BE6F94AC6BD4D0ABCAE5* Array_Empty_TisMatchContext_t04110FFA271D89A23BC1918BE657634A7DC06253_m5BEAA64B8E1A4C758EDEA7D45C3177D7D8A6ADCF_inline (const RuntimeMethod* method)
{
	return ((  MatchContextU5BU5D_t49C4E5DA5C1F9B06B211BE6F94AC6BD4D0ABCAE5* (*) (const RuntimeMethod*))Array_Empty_TisMatchContext_t04110FFA271D89A23BC1918BE657634A7DC06253_m5BEAA64B8E1A4C758EDEA7D45C3177D7D8A6ADCF_gshared_inline)(method);
}
inline int32_t Array_LastIndexOf_TisMatchContext_t04110FFA271D89A23BC1918BE657634A7DC06253_mFFFE5789A9BEF9E2ED789FB50EC9F52BB8954B28 (MatchContextU5BU5D_t49C4E5DA5C1F9B06B211BE6F94AC6BD4D0ABCAE5* ___0_array, MatchContext_t04110FFA271D89A23BC1918BE657634A7DC06253 ___1_value, int32_t ___2_startIndex, const RuntimeMethod* method)
{
	return ((  int32_t (*) (MatchContextU5BU5D_t49C4E5DA5C1F9B06B211BE6F94AC6BD4D0ABCAE5*, MatchContext_t04110FFA271D89A23BC1918BE657634A7DC06253, int32_t, const RuntimeMethod*))Array_LastIndexOf_TisMatchContext_t04110FFA271D89A23BC1918BE657634A7DC06253_mFFFE5789A9BEF9E2ED789FB50EC9F52BB8954B28_gshared)(___0_array, ___1_value, ___2_startIndex, method);
}
inline void Enumerator__ctor_m14E3BCC9341885A56233EF29D700857A00BBDFC7 (Enumerator_t6B0EB72F34C4614A45F424103A9D11C74439E854* __this, Stack_1_tB568ED1852EE70A3EECA2CD66F2AB41DDEC262FA* ___0_stack, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t6B0EB72F34C4614A45F424103A9D11C74439E854*, Stack_1_tB568ED1852EE70A3EECA2CD66F2AB41DDEC262FA*, const RuntimeMethod*))Enumerator__ctor_m14E3BCC9341885A56233EF29D700857A00BBDFC7_gshared)(__this, ___0_stack, method);
}
inline void Stack_1_ThrowForEmptyStack_m89DEAB4CFF2C08C84D7B4988FD3A588F243CC50C (Stack_1_tB568ED1852EE70A3EECA2CD66F2AB41DDEC262FA* __this, const RuntimeMethod* method)
{
	((  void (*) (Stack_1_tB568ED1852EE70A3EECA2CD66F2AB41DDEC262FA*, const RuntimeMethod*))Stack_1_ThrowForEmptyStack_m89DEAB4CFF2C08C84D7B4988FD3A588F243CC50C_gshared)(__this, method);
}
inline void Stack_1_PushWithResize_m046E8452EBCC5731C97F814735F12D1CC6714309 (Stack_1_tB568ED1852EE70A3EECA2CD66F2AB41DDEC262FA* __this, MatchContext_t04110FFA271D89A23BC1918BE657634A7DC06253 ___0_item, const RuntimeMethod* method)
{
	((  void (*) (Stack_1_tB568ED1852EE70A3EECA2CD66F2AB41DDEC262FA*, MatchContext_t04110FFA271D89A23BC1918BE657634A7DC06253, const RuntimeMethod*))Stack_1_PushWithResize_m046E8452EBCC5731C97F814735F12D1CC6714309_gshared)(__this, ___0_item, method);
}
inline void Array_Resize_TisMatchContext_t04110FFA271D89A23BC1918BE657634A7DC06253_m4E7CB8B6701DF21BD6CA13920546C7869B4F6678 (MatchContextU5BU5D_t49C4E5DA5C1F9B06B211BE6F94AC6BD4D0ABCAE5** ___0_array, int32_t ___1_newSize, const RuntimeMethod* method)
{
	((  void (*) (MatchContextU5BU5D_t49C4E5DA5C1F9B06B211BE6F94AC6BD4D0ABCAE5**, int32_t, const RuntimeMethod*))Array_Resize_TisMatchContext_t04110FFA271D89A23BC1918BE657634A7DC06253_m4E7CB8B6701DF21BD6CA13920546C7869B4F6678_gshared)(___0_array, ___1_newSize, method);
}
inline AllocSizeU5BU5D_tD7D6854D89AE82553F2200BC3B1F1A2D5455D9D8* Array_Empty_TisAllocSize_t906784497648EDC3F45F4EA656C6858238BA2F7C_m5DD7EE6CA7EC17B1B022C4780B85FFA1C0A0FA12_inline (const RuntimeMethod* method)
{
	return ((  AllocSizeU5BU5D_tD7D6854D89AE82553F2200BC3B1F1A2D5455D9D8* (*) (const RuntimeMethod*))Array_Empty_TisAllocSize_t906784497648EDC3F45F4EA656C6858238BA2F7C_m5DD7EE6CA7EC17B1B022C4780B85FFA1C0A0FA12_gshared_inline)(method);
}
inline int32_t Array_LastIndexOf_TisAllocSize_t906784497648EDC3F45F4EA656C6858238BA2F7C_mB4E32AD94934B63EDD33729EAE5F161483145500 (AllocSizeU5BU5D_tD7D6854D89AE82553F2200BC3B1F1A2D5455D9D8* ___0_array, AllocSize_t906784497648EDC3F45F4EA656C6858238BA2F7C ___1_value, int32_t ___2_startIndex, const RuntimeMethod* method)
{
	return ((  int32_t (*) (AllocSizeU5BU5D_tD7D6854D89AE82553F2200BC3B1F1A2D5455D9D8*, AllocSize_t906784497648EDC3F45F4EA656C6858238BA2F7C, int32_t, const RuntimeMethod*))Array_LastIndexOf_TisAllocSize_t906784497648EDC3F45F4EA656C6858238BA2F7C_mB4E32AD94934B63EDD33729EAE5F161483145500_gshared)(___0_array, ___1_value, ___2_startIndex, method);
}
inline void Enumerator__ctor_m07361745557663CD1B1953D494AA8FB80A0730A6 (Enumerator_tD97C98C8AA749156CECC60E8ED112C7771E69B84* __this, Stack_1_t90AD4B4BDD857A86CDEC55130FE1BAB9871F0CFE* ___0_stack, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tD97C98C8AA749156CECC60E8ED112C7771E69B84*, Stack_1_t90AD4B4BDD857A86CDEC55130FE1BAB9871F0CFE*, const RuntimeMethod*))Enumerator__ctor_m07361745557663CD1B1953D494AA8FB80A0730A6_gshared)(__this, ___0_stack, method);
}
inline void Stack_1_ThrowForEmptyStack_m8771401C109B7429B07B52ED7ADA916AA59DE001 (Stack_1_t90AD4B4BDD857A86CDEC55130FE1BAB9871F0CFE* __this, const RuntimeMethod* method)
{
	((  void (*) (Stack_1_t90AD4B4BDD857A86CDEC55130FE1BAB9871F0CFE*, const RuntimeMethod*))Stack_1_ThrowForEmptyStack_m8771401C109B7429B07B52ED7ADA916AA59DE001_gshared)(__this, method);
}
inline void Stack_1_PushWithResize_mCE77B35C7D03CEA8A9568F603B08799B7F7A6138 (Stack_1_t90AD4B4BDD857A86CDEC55130FE1BAB9871F0CFE* __this, AllocSize_t906784497648EDC3F45F4EA656C6858238BA2F7C ___0_item, const RuntimeMethod* method)
{
	((  void (*) (Stack_1_t90AD4B4BDD857A86CDEC55130FE1BAB9871F0CFE*, AllocSize_t906784497648EDC3F45F4EA656C6858238BA2F7C, const RuntimeMethod*))Stack_1_PushWithResize_mCE77B35C7D03CEA8A9568F603B08799B7F7A6138_gshared)(__this, ___0_item, method);
}
inline void Array_Resize_TisAllocSize_t906784497648EDC3F45F4EA656C6858238BA2F7C_m0112163C0BEA82A10E26EC61120F09D685F75D82 (AllocSizeU5BU5D_tD7D6854D89AE82553F2200BC3B1F1A2D5455D9D8** ___0_array, int32_t ___1_newSize, const RuntimeMethod* method)
{
	((  void (*) (AllocSizeU5BU5D_tD7D6854D89AE82553F2200BC3B1F1A2D5455D9D8**, int32_t, const RuntimeMethod*))Array_Resize_TisAllocSize_t906784497648EDC3F45F4EA656C6858238BA2F7C_m0112163C0BEA82A10E26EC61120F09D685F75D82_gshared)(___0_array, ___1_newSize, method);
}
inline MaskMeshU5BU5D_t5C162FB3760E834B8B5B0C75F438C2D8106EC8D5* Array_Empty_TisMaskMesh_tBA4A29153655DB02C99D6BF624A64795A084806B_m20F2634088091DCC2AFF06339CE497560174D0A4_inline (const RuntimeMethod* method)
{
	return ((  MaskMeshU5BU5D_t5C162FB3760E834B8B5B0C75F438C2D8106EC8D5* (*) (const RuntimeMethod*))Array_Empty_TisMaskMesh_tBA4A29153655DB02C99D6BF624A64795A084806B_m20F2634088091DCC2AFF06339CE497560174D0A4_gshared_inline)(method);
}
inline int32_t Array_LastIndexOf_TisMaskMesh_tBA4A29153655DB02C99D6BF624A64795A084806B_m818F2FAF7CF69CA55BBDB69F07C79300EB865DF7 (MaskMeshU5BU5D_t5C162FB3760E834B8B5B0C75F438C2D8106EC8D5* ___0_array, MaskMesh_tBA4A29153655DB02C99D6BF624A64795A084806B ___1_value, int32_t ___2_startIndex, const RuntimeMethod* method)
{
	return ((  int32_t (*) (MaskMeshU5BU5D_t5C162FB3760E834B8B5B0C75F438C2D8106EC8D5*, MaskMesh_tBA4A29153655DB02C99D6BF624A64795A084806B, int32_t, const RuntimeMethod*))Array_LastIndexOf_TisMaskMesh_tBA4A29153655DB02C99D6BF624A64795A084806B_m818F2FAF7CF69CA55BBDB69F07C79300EB865DF7_gshared)(___0_array, ___1_value, ___2_startIndex, method);
}
inline void Enumerator__ctor_mE90843AFE5073A0E749A49A314E1300B5D2887F5 (Enumerator_t3B367DB4E88110F0F90313AF159B54F9F2189310* __this, Stack_1_tAE809352224B7904D166288D1476FD4C2ED0D631* ___0_stack, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t3B367DB4E88110F0F90313AF159B54F9F2189310*, Stack_1_tAE809352224B7904D166288D1476FD4C2ED0D631*, const RuntimeMethod*))Enumerator__ctor_mE90843AFE5073A0E749A49A314E1300B5D2887F5_gshared)(__this, ___0_stack, method);
}
inline void Stack_1_ThrowForEmptyStack_m12EE5EEA0D599F83F68A7D47079EE0F8F741B40E (Stack_1_tAE809352224B7904D166288D1476FD4C2ED0D631* __this, const RuntimeMethod* method)
{
	((  void (*) (Stack_1_tAE809352224B7904D166288D1476FD4C2ED0D631*, const RuntimeMethod*))Stack_1_ThrowForEmptyStack_m12EE5EEA0D599F83F68A7D47079EE0F8F741B40E_gshared)(__this, method);
}
inline void Stack_1_PushWithResize_m9E4C7A345A0EB218950AF6C71F31410EFD75463A (Stack_1_tAE809352224B7904D166288D1476FD4C2ED0D631* __this, MaskMesh_tBA4A29153655DB02C99D6BF624A64795A084806B ___0_item, const RuntimeMethod* method)
{
	((  void (*) (Stack_1_tAE809352224B7904D166288D1476FD4C2ED0D631*, MaskMesh_tBA4A29153655DB02C99D6BF624A64795A084806B, const RuntimeMethod*))Stack_1_PushWithResize_m9E4C7A345A0EB218950AF6C71F31410EFD75463A_gshared)(__this, ___0_item, method);
}
inline void Array_Resize_TisMaskMesh_tBA4A29153655DB02C99D6BF624A64795A084806B_m9E14B2021B5551B36226D2C77EA97DCB81FA0B29 (MaskMeshU5BU5D_t5C162FB3760E834B8B5B0C75F438C2D8106EC8D5** ___0_array, int32_t ___1_newSize, const RuntimeMethod* method)
{
	((  void (*) (MaskMeshU5BU5D_t5C162FB3760E834B8B5B0C75F438C2D8106EC8D5**, int32_t, const RuntimeMethod*))Array_Resize_TisMaskMesh_tBA4A29153655DB02C99D6BF624A64795A084806B_m9E14B2021B5551B36226D2C77EA97DCB81FA0B29_gshared)(___0_array, ___1_newSize, method);
}
inline DispatchContextU5BU5D_t23932F8BEADFC827A9CA5636867F6721AD971757* Array_Empty_TisDispatchContext_tFA37790A5FF30508B0146B79E4FF1880EB82E455_mF01AA806CE655E3ABAF52F0F9DD7CC113403C7E2_inline (const RuntimeMethod* method)
{
	return ((  DispatchContextU5BU5D_t23932F8BEADFC827A9CA5636867F6721AD971757* (*) (const RuntimeMethod*))Array_Empty_TisDispatchContext_tFA37790A5FF30508B0146B79E4FF1880EB82E455_mF01AA806CE655E3ABAF52F0F9DD7CC113403C7E2_gshared_inline)(method);
}
inline int32_t Array_LastIndexOf_TisDispatchContext_tFA37790A5FF30508B0146B79E4FF1880EB82E455_m166E18AA28DAF024602CFD2C985E5DEF44EE4A3F (DispatchContextU5BU5D_t23932F8BEADFC827A9CA5636867F6721AD971757* ___0_array, DispatchContext_tFA37790A5FF30508B0146B79E4FF1880EB82E455 ___1_value, int32_t ___2_startIndex, const RuntimeMethod* method)
{
	return ((  int32_t (*) (DispatchContextU5BU5D_t23932F8BEADFC827A9CA5636867F6721AD971757*, DispatchContext_tFA37790A5FF30508B0146B79E4FF1880EB82E455, int32_t, const RuntimeMethod*))Array_LastIndexOf_TisDispatchContext_tFA37790A5FF30508B0146B79E4FF1880EB82E455_m166E18AA28DAF024602CFD2C985E5DEF44EE4A3F_gshared)(___0_array, ___1_value, ___2_startIndex, method);
}
inline void Enumerator__ctor_mA289AC608581803432D7E23F7CB15CA69C67E3A4 (Enumerator_t8E71E3162A14D26A339D3561D43523590F594C86* __this, Stack_1_t19851BEF370D35BCE2A6C3848C5148B09113067C* ___0_stack, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t8E71E3162A14D26A339D3561D43523590F594C86*, Stack_1_t19851BEF370D35BCE2A6C3848C5148B09113067C*, const RuntimeMethod*))Enumerator__ctor_mA289AC608581803432D7E23F7CB15CA69C67E3A4_gshared)(__this, ___0_stack, method);
}
inline void Stack_1_ThrowForEmptyStack_m492E2D988124B082B0EF0A9837B0A102C39E07C5 (Stack_1_t19851BEF370D35BCE2A6C3848C5148B09113067C* __this, const RuntimeMethod* method)
{
	((  void (*) (Stack_1_t19851BEF370D35BCE2A6C3848C5148B09113067C*, const RuntimeMethod*))Stack_1_ThrowForEmptyStack_m492E2D988124B082B0EF0A9837B0A102C39E07C5_gshared)(__this, method);
}
inline void Stack_1_PushWithResize_m3BD8BDA046D1582C869FF68FB773F174F369D00C (Stack_1_t19851BEF370D35BCE2A6C3848C5148B09113067C* __this, DispatchContext_tFA37790A5FF30508B0146B79E4FF1880EB82E455 ___0_item, const RuntimeMethod* method)
{
	((  void (*) (Stack_1_t19851BEF370D35BCE2A6C3848C5148B09113067C*, DispatchContext_tFA37790A5FF30508B0146B79E4FF1880EB82E455, const RuntimeMethod*))Stack_1_PushWithResize_m3BD8BDA046D1582C869FF68FB773F174F369D00C_gshared)(__this, ___0_item, method);
}
inline void Array_Resize_TisDispatchContext_tFA37790A5FF30508B0146B79E4FF1880EB82E455_m247E9FF1D240EF2FA626997384B01A8033DBED23 (DispatchContextU5BU5D_t23932F8BEADFC827A9CA5636867F6721AD971757** ___0_array, int32_t ___1_newSize, const RuntimeMethod* method)
{
	((  void (*) (DispatchContextU5BU5D_t23932F8BEADFC827A9CA5636867F6721AD971757**, int32_t, const RuntimeMethod*))Array_Resize_TisDispatchContext_tFA37790A5FF30508B0146B79E4FF1880EB82E455_m247E9FF1D240EF2FA626997384B01A8033DBED23_gshared)(___0_array, ___1_newSize, method);
}
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1__ctor_mC892A665B48BA9CD149DA76F26EA3607C7859792_gshared (Span_1_t3C28155FFD2FA88D962FCE88A14C370626303A8D* __this, UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* ___0_array, const RuntimeMethod* method) 
{
	uint16_t V_0 = 0;
	{
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_000b;
		}
	}
	{
		il2cpp_codegen_initobj(__this, sizeof(Span_1_t3C28155FFD2FA88D962FCE88A14C370626303A8D));
		return;
	}

IL_000b:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(uint16_t));
		goto IL_0037;
	}

IL_0037:
	{
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_2 = ___0_array;
		NullCheck((RuntimeArray*)L_2);
		uint8_t* L_3;
		L_3 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_2, NULL);
		uint16_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint16_t>(L_3);
		ByReference_1_t946C8F453CAF957A5339893AAA7FFF61CC68CECE L_5;
		memset((&L_5), 0, sizeof(L_5));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_5), L_4);
		__this->____pointer = L_5;
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_6 = ___0_array;
		NullCheck(L_6);
		__this->____length = ((int32_t)(((RuntimeArray*)L_6)->max_length));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1__ctor_m88D9BE6D0BF5FDFDF1EC95538768786944AA873A_gshared (Span_1_t3C28155FFD2FA88D962FCE88A14C370626303A8D* __this, UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* ___0_array, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method) 
{
	uint16_t V_0 = 0;
	{
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		int32_t L_1 = ___1_start;
		if (L_1)
		{
			goto IL_0009;
		}
	}
	{
		int32_t L_2 = ___2_length;
		if (!L_2)
		{
			goto IL_000e;
		}
	}

IL_0009:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_000e:
	{
		il2cpp_codegen_initobj(__this, sizeof(Span_1_t3C28155FFD2FA88D962FCE88A14C370626303A8D));
		return;
	}

IL_0016:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(uint16_t));
		goto IL_0042;
	}

IL_0042:
	{
		int32_t L_4 = ___1_start;
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_5 = ___0_array;
		NullCheck(L_5);
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)(((RuntimeArray*)L_5)->max_length))))))
		{
			goto IL_0050;
		}
	}
	{
		int32_t L_6 = ___2_length;
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_7 = ___0_array;
		NullCheck(L_7);
		int32_t L_8 = ___1_start;
		if ((!(((uint32_t)L_6) > ((uint32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_7)->max_length)), L_8))))))
		{
			goto IL_0055;
		}
	}

IL_0050:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_0055:
	{
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_9 = ___0_array;
		NullCheck((RuntimeArray*)L_9);
		uint8_t* L_10;
		L_10 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_9, NULL);
		uint16_t* L_11;
		L_11 = il2cpp_unsafe_as_ref<uint16_t>(L_10);
		int32_t L_12 = ___1_start;
		uint16_t* L_13;
		L_13 = il2cpp_unsafe_add<uint16_t,int32_t>(L_11, L_12);
		ByReference_1_t946C8F453CAF957A5339893AAA7FFF61CC68CECE L_14;
		memset((&L_14), 0, sizeof(L_14));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_14), L_13);
		__this->____pointer = L_14;
		int32_t L_15 = ___2_length;
		__this->____length = L_15;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1__ctor_mB886029FDB28A19EF15C463DD88A08470033D192_gshared (Span_1_t3C28155FFD2FA88D962FCE88A14C370626303A8D* __this, void* ___0_pointer, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		goto IL_0016;
	}

IL_0016:
	{
		int32_t L_0 = ___1_length;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_001f;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_001f:
	{
		void* L_1 = ___0_pointer;
		uint16_t* L_2;
		L_2 = il2cpp_unsafe_as_ref<uint16_t>((uint8_t*)L_1);
		ByReference_1_t946C8F453CAF957A5339893AAA7FFF61CC68CECE L_3;
		memset((&L_3), 0, sizeof(L_3));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_3), L_2);
		__this->____pointer = L_3;
		int32_t L_4 = ___1_length;
		__this->____length = L_4;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1__ctor_m458FB27AA0EB3527A73C9D6305D452A062D2ABC4_gshared (Span_1_t3C28155FFD2FA88D962FCE88A14C370626303A8D* __this, uint16_t* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		uint16_t* L_0 = ___0_ptr;
		ByReference_1_t946C8F453CAF957A5339893AAA7FFF61CC68CECE L_1;
		memset((&L_1), 0, sizeof(L_1));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_1), L_0);
		__this->____pointer = L_1;
		int32_t L_2 = ___1_length;
		__this->____length = L_2;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint16_t* Span_1_get_Item_m51DF8F9B68EB998FCFF5DE6A753DEC3D3BE61D30_gshared (Span_1_t3C28155FFD2FA88D962FCE88A14C370626303A8D* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	ByReference_1_t946C8F453CAF957A5339893AAA7FFF61CC68CECE V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_index;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowIndexOutOfRangeException_m86F753A24E2765A35546BA6352A7E4F0BB8A66B5(NULL);
	}

IL_000e:
	{
		ByReference_1_t946C8F453CAF957A5339893AAA7FFF61CC68CECE L_2 = __this->____pointer;
		V_0 = L_2;
		uint16_t* L_3;
		L_3 = IL2CPP_BY_REFERENCE_GET_VALUE(uint16_t, (Il2CppByReference*)(&V_0));
		int32_t L_4 = ___0_index;
		uint16_t* L_5;
		L_5 = il2cpp_unsafe_add<uint16_t,int32_t>(L_3, L_4);
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint16_t* Span_1_GetPinnableReference_m2084184F17A5461CA1BD4D2364E1423E83775299_gshared (Span_1_t3C28155FFD2FA88D962FCE88A14C370626303A8D* __this, const RuntimeMethod* method) 
{
	ByReference_1_t946C8F453CAF957A5339893AAA7FFF61CC68CECE V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->____length;
		if (L_0)
		{
			goto IL_0010;
		}
	}
	{
		uint16_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint16_t>((void*)((uintptr_t)0));
		return L_1;
	}

IL_0010:
	{
		ByReference_1_t946C8F453CAF957A5339893AAA7FFF61CC68CECE L_2 = __this->____pointer;
		V_0 = L_2;
		uint16_t* L_3;
		L_3 = IL2CPP_BY_REFERENCE_GET_VALUE(uint16_t, (Il2CppByReference*)(&V_0));
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1_Clear_m0935AE3C29451F430E10E1C162F4B2767137CC57_gshared (Span_1_t3C28155FFD2FA88D962FCE88A14C370626303A8D* __this, const RuntimeMethod* method) 
{
	ByReference_1_t946C8F453CAF957A5339893AAA7FFF61CC68CECE V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		goto IL_0034;
	}

IL_0034:
	{
		ByReference_1_t946C8F453CAF957A5339893AAA7FFF61CC68CECE L_0 = __this->____pointer;
		V_0 = L_0;
		uint16_t* L_1;
		L_1 = IL2CPP_BY_REFERENCE_GET_VALUE(uint16_t, (Il2CppByReference*)(&V_0));
		uint8_t* L_2;
		L_2 = il2cpp_unsafe_as_ref<uint8_t>(L_1);
		int32_t L_3 = __this->____length;
		int32_t L_4;
		L_4 = il2cpp_unsafe_sizeof<uint16_t>();
		SpanHelpers_ClearWithoutReferences_m65DB2925AE7A5FF88BB3EA1BF90513C9ADF0653D(L_2, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_3), ((int64_t)L_4))), NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1_Fill_m1739BAAE7DCB30488B41A98BE7F70F2C3E2A683B_gshared (Span_1_t3C28155FFD2FA88D962FCE88A14C370626303A8D* __this, uint16_t ___0_value, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	uint16_t V_1 = 0;
	ByReference_1_t946C8F453CAF957A5339893AAA7FFF61CC68CECE V_2;
	memset((&V_2), 0, sizeof(V_2));
	uint64_t V_3 = 0;
	uint16_t* V_4 = NULL;
	uint64_t V_5 = 0;
	uint64_t V_6 = 0;
	{
		int32_t L_0;
		L_0 = il2cpp_unsafe_sizeof<uint16_t>();
		if ((!(((uint32_t)L_0) == ((uint32_t)1))))
		{
			goto IL_0037;
		}
	}
	{
		int32_t L_1 = __this->____length;
		V_0 = (uint32_t)L_1;
		uint32_t L_2 = V_0;
		if (L_2)
		{
			goto IL_0013;
		}
	}
	{
		return;
	}

IL_0013:
	{
		uint16_t L_3 = ___0_value;
		V_1 = L_3;
		ByReference_1_t946C8F453CAF957A5339893AAA7FFF61CC68CECE L_4 = __this->____pointer;
		V_2 = L_4;
		uint16_t* L_5;
		L_5 = IL2CPP_BY_REFERENCE_GET_VALUE(uint16_t, (Il2CppByReference*)(&V_2));
		uint8_t* L_6;
		L_6 = il2cpp_unsafe_as_ref<uint8_t>(L_5);
		uint8_t* L_7;
		L_7 = il2cpp_unsafe_as_ref<uint8_t>((&V_1));
		int32_t L_8 = *((uint8_t*)L_7);
		uint32_t L_9 = V_0;
		Unsafe_InitBlockUnaligned_m6F2353EB9ABC9320E61629FAEE23948C80BFF03A(L_6, (uint8_t)L_8, L_9, NULL);
		return;
	}

IL_0037:
	{
		int32_t L_10 = __this->____length;
		V_3 = (uint64_t)((int64_t)(uint64_t)((uint32_t)L_10));
		uint64_t L_11 = V_3;
		if (L_11)
		{
			goto IL_0043;
		}
	}
	{
		return;
	}

IL_0043:
	{
		ByReference_1_t946C8F453CAF957A5339893AAA7FFF61CC68CECE L_12 = __this->____pointer;
		V_2 = L_12;
		uint16_t* L_13;
		L_13 = IL2CPP_BY_REFERENCE_GET_VALUE(uint16_t, (Il2CppByReference*)(&V_2));
		V_4 = L_13;
		int32_t L_14;
		L_14 = il2cpp_unsafe_sizeof<uint16_t>();
		V_5 = (uint64_t)((int64_t)(uint64_t)((uint32_t)L_14));
		V_6 = (uint64_t)((int64_t)0);
		goto IL_0110;
	}

IL_0064:
	{
		uint16_t* L_15 = V_4;
		uint64_t L_16 = V_6;
		uint64_t L_17 = V_5;
		uint16_t* L_18;
		L_18 = il2cpp_unsafe_add_byte_offset<uint16_t,uint64_t>(L_15, (uint64_t)((int64_t)il2cpp_codegen_multiply((int64_t)L_16, (int64_t)L_17)));
		uint16_t L_19 = ___0_value;
		*(uint16_t*)L_18 = L_19;
		uint16_t* L_20 = V_4;
		uint64_t L_21 = V_6;
		uint64_t L_22 = V_5;
		uint16_t* L_23;
		L_23 = il2cpp_unsafe_add_byte_offset<uint16_t,uint64_t>(L_20, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_21, ((int64_t)1))), (int64_t)L_22)));
		uint16_t L_24 = ___0_value;
		*(uint16_t*)L_23 = L_24;
		uint16_t* L_25 = V_4;
		uint64_t L_26 = V_6;
		uint64_t L_27 = V_5;
		uint16_t* L_28;
		L_28 = il2cpp_unsafe_add_byte_offset<uint16_t,uint64_t>(L_25, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_26, ((int64_t)2))), (int64_t)L_27)));
		uint16_t L_29 = ___0_value;
		*(uint16_t*)L_28 = L_29;
		uint16_t* L_30 = V_4;
		uint64_t L_31 = V_6;
		uint64_t L_32 = V_5;
		uint16_t* L_33;
		L_33 = il2cpp_unsafe_add_byte_offset<uint16_t,uint64_t>(L_30, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_31, ((int64_t)3))), (int64_t)L_32)));
		uint16_t L_34 = ___0_value;
		*(uint16_t*)L_33 = L_34;
		uint16_t* L_35 = V_4;
		uint64_t L_36 = V_6;
		uint64_t L_37 = V_5;
		uint16_t* L_38;
		L_38 = il2cpp_unsafe_add_byte_offset<uint16_t,uint64_t>(L_35, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_36, ((int64_t)4))), (int64_t)L_37)));
		uint16_t L_39 = ___0_value;
		*(uint16_t*)L_38 = L_39;
		uint16_t* L_40 = V_4;
		uint64_t L_41 = V_6;
		uint64_t L_42 = V_5;
		uint16_t* L_43;
		L_43 = il2cpp_unsafe_add_byte_offset<uint16_t,uint64_t>(L_40, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_41, ((int64_t)5))), (int64_t)L_42)));
		uint16_t L_44 = ___0_value;
		*(uint16_t*)L_43 = L_44;
		uint16_t* L_45 = V_4;
		uint64_t L_46 = V_6;
		uint64_t L_47 = V_5;
		uint16_t* L_48;
		L_48 = il2cpp_unsafe_add_byte_offset<uint16_t,uint64_t>(L_45, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_46, ((int64_t)6))), (int64_t)L_47)));
		uint16_t L_49 = ___0_value;
		*(uint16_t*)L_48 = L_49;
		uint16_t* L_50 = V_4;
		uint64_t L_51 = V_6;
		uint64_t L_52 = V_5;
		uint16_t* L_53;
		L_53 = il2cpp_unsafe_add_byte_offset<uint16_t,uint64_t>(L_50, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_51, ((int64_t)7))), (int64_t)L_52)));
		uint16_t L_54 = ___0_value;
		*(uint16_t*)L_53 = L_54;
		uint64_t L_55 = V_6;
		V_6 = (uint64_t)((int64_t)il2cpp_codegen_add((int64_t)L_55, ((int64_t)8)));
	}

IL_0110:
	{
		uint64_t L_56 = V_6;
		uint64_t L_57 = V_3;
		if ((!(((uint64_t)L_56) >= ((uint64_t)((int64_t)((int64_t)L_57&((int64_t)((int32_t)-8))))))))
		{
			goto IL_0064;
		}
	}
	{
		uint64_t L_58 = V_6;
		uint64_t L_59 = V_3;
		if ((!(((uint64_t)L_58) < ((uint64_t)((int64_t)((int64_t)L_59&((int64_t)((int32_t)-4))))))))
		{
			goto IL_0198;
		}
	}
	{
		uint16_t* L_60 = V_4;
		uint64_t L_61 = V_6;
		uint64_t L_62 = V_5;
		uint16_t* L_63;
		L_63 = il2cpp_unsafe_add_byte_offset<uint16_t,uint64_t>(L_60, (uint64_t)((int64_t)il2cpp_codegen_multiply((int64_t)L_61, (int64_t)L_62)));
		uint16_t L_64 = ___0_value;
		*(uint16_t*)L_63 = L_64;
		uint16_t* L_65 = V_4;
		uint64_t L_66 = V_6;
		uint64_t L_67 = V_5;
		uint16_t* L_68;
		L_68 = il2cpp_unsafe_add_byte_offset<uint16_t,uint64_t>(L_65, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_66, ((int64_t)1))), (int64_t)L_67)));
		uint16_t L_69 = ___0_value;
		*(uint16_t*)L_68 = L_69;
		uint16_t* L_70 = V_4;
		uint64_t L_71 = V_6;
		uint64_t L_72 = V_5;
		uint16_t* L_73;
		L_73 = il2cpp_unsafe_add_byte_offset<uint16_t,uint64_t>(L_70, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_71, ((int64_t)2))), (int64_t)L_72)));
		uint16_t L_74 = ___0_value;
		*(uint16_t*)L_73 = L_74;
		uint16_t* L_75 = V_4;
		uint64_t L_76 = V_6;
		uint64_t L_77 = V_5;
		uint16_t* L_78;
		L_78 = il2cpp_unsafe_add_byte_offset<uint16_t,uint64_t>(L_75, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_76, ((int64_t)3))), (int64_t)L_77)));
		uint16_t L_79 = ___0_value;
		*(uint16_t*)L_78 = L_79;
		uint64_t L_80 = V_6;
		V_6 = (uint64_t)((int64_t)il2cpp_codegen_add((int64_t)L_80, ((int64_t)4)));
		goto IL_0198;
	}

IL_017f:
	{
		uint16_t* L_81 = V_4;
		uint64_t L_82 = V_6;
		uint64_t L_83 = V_5;
		uint16_t* L_84;
		L_84 = il2cpp_unsafe_add_byte_offset<uint16_t,uint64_t>(L_81, (uint64_t)((int64_t)il2cpp_codegen_multiply((int64_t)L_82, (int64_t)L_83)));
		uint16_t L_85 = ___0_value;
		*(uint16_t*)L_84 = L_85;
		uint64_t L_86 = V_6;
		V_6 = (uint64_t)((int64_t)il2cpp_codegen_add((int64_t)L_86, ((int64_t)1)));
	}

IL_0198:
	{
		uint64_t L_87 = V_6;
		uint64_t L_88 = V_3;
		if ((!(((uint64_t)L_87) >= ((uint64_t)L_88))))
		{
			goto IL_017f;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1_CopyTo_m1E3344EA531D3CEBB2D498C960EA1E11D3042E89_gshared (Span_1_t3C28155FFD2FA88D962FCE88A14C370626303A8D* __this, Span_1_t3C28155FFD2FA88D962FCE88A14C370626303A8D ___0_destination, const RuntimeMethod* method) 
{
	ByReference_1_t946C8F453CAF957A5339893AAA7FFF61CC68CECE V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->____length;
		int32_t L_1;
		L_1 = Span_1_get_Length_mD173AF2E3688317C8AB9621F7626A2A34DE8F56B_inline((&___0_destination), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 13));
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_0038;
		}
	}
	{
		Span_1_t3C28155FFD2FA88D962FCE88A14C370626303A8D L_2 = ___0_destination;
		ByReference_1_t946C8F453CAF957A5339893AAA7FFF61CC68CECE L_3 = L_2.____pointer;
		V_0 = L_3;
		uint16_t* L_4;
		L_4 = IL2CPP_BY_REFERENCE_GET_VALUE(uint16_t, (Il2CppByReference*)(&V_0));
		ByReference_1_t946C8F453CAF957A5339893AAA7FFF61CC68CECE L_5 = __this->____pointer;
		V_0 = L_5;
		uint16_t* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(uint16_t, (Il2CppByReference*)(&V_0));
		int32_t L_7 = __this->____length;
		Buffer_Memmove_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_mE48DFFFA4D52B03F4ACA304FD485E78F4BFF0E42(L_4, L_6, (uint64_t)((int64_t)L_7), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 15));
		return;
	}

IL_0038:
	{
		ThrowHelper_ThrowArgumentException_DestinationTooShort_m6468934A3BBB67DBC5BAEF7A64D91BD5BBBB3D4D(NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Span_1_TryCopyTo_m8B92037E39DBEC33F5EFF019B694C6F8422F6254_gshared (Span_1_t3C28155FFD2FA88D962FCE88A14C370626303A8D* __this, Span_1_t3C28155FFD2FA88D962FCE88A14C370626303A8D ___0_destination, const RuntimeMethod* method) 
{
	bool V_0 = false;
	ByReference_1_t946C8F453CAF957A5339893AAA7FFF61CC68CECE V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		V_0 = (bool)0;
		int32_t L_0 = __this->____length;
		int32_t L_1;
		L_1 = Span_1_get_Length_mD173AF2E3688317C8AB9621F7626A2A34DE8F56B_inline((&___0_destination), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 13));
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_003b;
		}
	}
	{
		Span_1_t3C28155FFD2FA88D962FCE88A14C370626303A8D L_2 = ___0_destination;
		ByReference_1_t946C8F453CAF957A5339893AAA7FFF61CC68CECE L_3 = L_2.____pointer;
		V_1 = L_3;
		uint16_t* L_4;
		L_4 = IL2CPP_BY_REFERENCE_GET_VALUE(uint16_t, (Il2CppByReference*)(&V_1));
		ByReference_1_t946C8F453CAF957A5339893AAA7FFF61CC68CECE L_5 = __this->____pointer;
		V_1 = L_5;
		uint16_t* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(uint16_t, (Il2CppByReference*)(&V_1));
		int32_t L_7 = __this->____length;
		Buffer_Memmove_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_mE48DFFFA4D52B03F4ACA304FD485E78F4BFF0E42(L_4, L_6, (uint64_t)((int64_t)L_7), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 15));
		V_0 = (bool)1;
	}

IL_003b:
	{
		bool L_8 = V_0;
		return L_8;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_tA2EFC117098BD2B38ADBF809AA976D9F3C13654F Span_1_op_Implicit_m2BCA68E89516F4E0AD7CF9A9513466D4837140F8_gshared (Span_1_t3C28155FFD2FA88D962FCE88A14C370626303A8D ___0_span, const RuntimeMethod* method) 
{
	ByReference_1_t946C8F453CAF957A5339893AAA7FFF61CC68CECE V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Span_1_t3C28155FFD2FA88D962FCE88A14C370626303A8D L_0 = ___0_span;
		ByReference_1_t946C8F453CAF957A5339893AAA7FFF61CC68CECE L_1 = L_0.____pointer;
		V_0 = L_1;
		uint16_t* L_2;
		L_2 = IL2CPP_BY_REFERENCE_GET_VALUE(uint16_t, (Il2CppByReference*)(&V_0));
		Span_1_t3C28155FFD2FA88D962FCE88A14C370626303A8D L_3 = ___0_span;
		int32_t L_4 = L_3.____length;
		ReadOnlySpan_1_tA2EFC117098BD2B38ADBF809AA976D9F3C13654F L_5;
		memset((&L_5), 0, sizeof(L_5));
		ReadOnlySpan_1__ctor_mCBA8EFCAA8102765E34B993A8177EE752D80890F_inline((&L_5), L_2, L_4, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 17));
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Span_1_ToString_mC92A31A501B7BC12A11981C1C3D653971D37E35C_gshared (Span_1_t3C28155FFD2FA88D962FCE88A14C370626303A8D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0DB46164953228904843938099AF66650313FEE5);
		s_Il2CppMethodInitialized = true;
	}
	Il2CppChar* V_0 = NULL;
	ByReference_1_t946C8F453CAF957A5339893AAA7FFF61CC68CECE V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 9)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.char_class->byval_arg) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		bool L_4;
		L_4 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_1, L_3, NULL);
		if (!L_4)
		{
			goto IL_003e;
		}
	}
	{
		ByReference_1_t946C8F453CAF957A5339893AAA7FFF61CC68CECE L_5 = __this->____pointer;
		V_1 = L_5;
		uint16_t* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(uint16_t, (Il2CppByReference*)(&V_1));
		Il2CppChar* L_7;
		L_7 = il2cpp_unsafe_as_ref<Il2CppChar>(L_6);
		V_0 = L_7;
		Il2CppChar* L_8 = V_0;
		int32_t L_9 = __this->____length;
		String_t* L_10;
		L_10 = String_CreateString_m3F8794FEB452558B8A68C65E1F0B603B3D94E0E2(NULL, (Il2CppChar*)((uintptr_t)L_8), 0, L_9, NULL);
		return L_10;
	}

IL_003e:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_11 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 9)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_12;
		L_12 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_11, NULL);
		NullCheck((MemberInfo_t*)L_12);
		String_t* L_13;
		L_13 = VirtualFuncInvoker0< String_t* >::Invoke(8, (MemberInfo_t*)L_12);
		int32_t L_14 = __this->____length;
		int32_t L_15 = L_14;
		RuntimeObject* L_16 = Box(il2cpp_defaults.int32_class, &L_15);
		String_t* L_17;
		L_17 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(_stringLiteral0DB46164953228904843938099AF66650313FEE5, (RuntimeObject*)L_13, L_16, NULL);
		return L_17;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Span_1_t3C28155FFD2FA88D962FCE88A14C370626303A8D Span_1_Slice_m60CA4425F69A57B604820588F7299CE6056B9BF7_gshared (Span_1_t3C28155FFD2FA88D962FCE88A14C370626303A8D* __this, int32_t ___0_start, const RuntimeMethod* method) 
{
	ByReference_1_t946C8F453CAF957A5339893AAA7FFF61CC68CECE V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_start;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) > ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_000e:
	{
		ByReference_1_t946C8F453CAF957A5339893AAA7FFF61CC68CECE L_2 = __this->____pointer;
		V_0 = L_2;
		uint16_t* L_3;
		L_3 = IL2CPP_BY_REFERENCE_GET_VALUE(uint16_t, (Il2CppByReference*)(&V_0));
		int32_t L_4 = ___0_start;
		uint16_t* L_5;
		L_5 = il2cpp_unsafe_add<uint16_t,int32_t>(L_3, L_4);
		int32_t L_6 = __this->____length;
		int32_t L_7 = ___0_start;
		Span_1_t3C28155FFD2FA88D962FCE88A14C370626303A8D L_8;
		memset((&L_8), 0, sizeof(L_8));
		Span_1__ctor_m458FB27AA0EB3527A73C9D6305D452A062D2ABC4_inline((&L_8), L_5, ((int32_t)il2cpp_codegen_subtract(L_6, L_7)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 18));
		return L_8;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Span_1_t3C28155FFD2FA88D962FCE88A14C370626303A8D Span_1_Slice_mD475695D1F124D1A5F0514CB93BF8B2D12FFF09A_gshared (Span_1_t3C28155FFD2FA88D962FCE88A14C370626303A8D* __this, int32_t ___0_start, int32_t ___1_length, const RuntimeMethod* method) 
{
	ByReference_1_t946C8F453CAF957A5339893AAA7FFF61CC68CECE V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_start;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		int32_t L_2 = ___1_length;
		int32_t L_3 = __this->____length;
		int32_t L_4 = ___0_start;
		if ((!(((uint32_t)L_2) > ((uint32_t)((int32_t)il2cpp_codegen_subtract(L_3, L_4))))))
		{
			goto IL_0019;
		}
	}

IL_0014:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_0019:
	{
		ByReference_1_t946C8F453CAF957A5339893AAA7FFF61CC68CECE L_5 = __this->____pointer;
		V_0 = L_5;
		uint16_t* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(uint16_t, (Il2CppByReference*)(&V_0));
		int32_t L_7 = ___0_start;
		uint16_t* L_8;
		L_8 = il2cpp_unsafe_add<uint16_t,int32_t>(L_6, L_7);
		int32_t L_9 = ___1_length;
		Span_1_t3C28155FFD2FA88D962FCE88A14C370626303A8D L_10;
		memset((&L_10), 0, sizeof(L_10));
		Span_1__ctor_m458FB27AA0EB3527A73C9D6305D452A062D2ABC4_inline((&L_10), L_8, L_9, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 18));
		return L_10;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* Span_1_ToArray_m69B5996786351756E80F75F1F46A6D8D14817044_gshared (Span_1_t3C28155FFD2FA88D962FCE88A14C370626303A8D* __this, const RuntimeMethod* method) 
{
	ByReference_1_t946C8F453CAF957A5339893AAA7FFF61CC68CECE V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->____length;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_1;
		L_1 = Array_Empty_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_mA9FE4AE132DC76B02E8B39B5052CBA643CFF7220_inline(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 19));
		return L_1;
	}

IL_000e:
	{
		int32_t L_2 = __this->____length;
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_3 = (UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83*)(UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83*)SZArrayNew(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 20), (uint32_t)L_2);
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_4 = L_3;
		NullCheck((RuntimeArray*)L_4);
		uint8_t* L_5;
		L_5 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_4, NULL);
		uint16_t* L_6;
		L_6 = il2cpp_unsafe_as_ref<uint16_t>(L_5);
		ByReference_1_t946C8F453CAF957A5339893AAA7FFF61CC68CECE L_7 = __this->____pointer;
		V_0 = L_7;
		uint16_t* L_8;
		L_8 = IL2CPP_BY_REFERENCE_GET_VALUE(uint16_t, (Il2CppByReference*)(&V_0));
		int32_t L_9 = __this->____length;
		Buffer_Memmove_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_mE48DFFFA4D52B03F4ACA304FD485E78F4BFF0E42(L_6, L_8, (uint64_t)((int64_t)L_9), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 15));
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Span_1_get_Length_mD173AF2E3688317C8AB9621F7626A2A34DE8F56B_gshared (Span_1_t3C28155FFD2FA88D962FCE88A14C370626303A8D* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____length;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Span_1_Equals_m658BC08F24940E68B344C2623996A8BAA8506DFF_gshared (Span_1_t3C28155FFD2FA88D962FCE88A14C370626303A8D* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral69508A540AFD085A745316DD7D6345B1C8CC662D)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Span_1_GetHashCode_m0DD2A2BE777631909AB6BC8EB9C8C50A65227EF8_gshared (Span_1_t3C28155FFD2FA88D962FCE88A14C370626303A8D* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralECE618215BAC99C6FD12D8A273CC2118945EDCC8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Span_1_t3C28155FFD2FA88D962FCE88A14C370626303A8D Span_1_op_Implicit_mDFEC7007D8B0366E7FB8FA350AC4D3F3EAFB4EA7_gshared (UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* ___0_array, const RuntimeMethod* method) 
{
	{
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_0 = ___0_array;
		Span_1_t3C28155FFD2FA88D962FCE88A14C370626303A8D L_1;
		memset((&L_1), 0, sizeof(L_1));
		Span_1__ctor_mC892A665B48BA9CD149DA76F26EA3607C7859792_inline((&L_1), L_0, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 21));
		return L_1;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1__ctor_m1161A3B3850C22A54C838C62FB009355039C28ED_gshared (Span_1_tC47CA3FDABAC657528EC838C3FEB05AA0D4480EA* __this, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___0_array, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_000b;
		}
	}
	{
		il2cpp_codegen_initobj(__this, sizeof(Span_1_tC47CA3FDABAC657528EC838C3FEB05AA0D4480EA));
		return;
	}

IL_000b:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(uint32_t));
		goto IL_0037;
	}

IL_0037:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_2 = ___0_array;
		NullCheck((RuntimeArray*)L_2);
		uint8_t* L_3;
		L_3 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_2, NULL);
		uint32_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint32_t>(L_3);
		ByReference_1_tFE9AF4BD221B916FA525C43965FD23DB6BE5AC45 L_5;
		memset((&L_5), 0, sizeof(L_5));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_5), L_4);
		__this->____pointer = L_5;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_6 = ___0_array;
		NullCheck(L_6);
		__this->____length = ((int32_t)(((RuntimeArray*)L_6)->max_length));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1__ctor_m660EEF593C35EC36D687474C6F23E166CD9F31D9_gshared (Span_1_tC47CA3FDABAC657528EC838C3FEB05AA0D4480EA* __this, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___0_array, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		int32_t L_1 = ___1_start;
		if (L_1)
		{
			goto IL_0009;
		}
	}
	{
		int32_t L_2 = ___2_length;
		if (!L_2)
		{
			goto IL_000e;
		}
	}

IL_0009:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_000e:
	{
		il2cpp_codegen_initobj(__this, sizeof(Span_1_tC47CA3FDABAC657528EC838C3FEB05AA0D4480EA));
		return;
	}

IL_0016:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(uint32_t));
		goto IL_0042;
	}

IL_0042:
	{
		int32_t L_4 = ___1_start;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_5 = ___0_array;
		NullCheck(L_5);
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)(((RuntimeArray*)L_5)->max_length))))))
		{
			goto IL_0050;
		}
	}
	{
		int32_t L_6 = ___2_length;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_7 = ___0_array;
		NullCheck(L_7);
		int32_t L_8 = ___1_start;
		if ((!(((uint32_t)L_6) > ((uint32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_7)->max_length)), L_8))))))
		{
			goto IL_0055;
		}
	}

IL_0050:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_0055:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_9 = ___0_array;
		NullCheck((RuntimeArray*)L_9);
		uint8_t* L_10;
		L_10 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_9, NULL);
		uint32_t* L_11;
		L_11 = il2cpp_unsafe_as_ref<uint32_t>(L_10);
		int32_t L_12 = ___1_start;
		uint32_t* L_13;
		L_13 = il2cpp_unsafe_add<uint32_t,int32_t>(L_11, L_12);
		ByReference_1_tFE9AF4BD221B916FA525C43965FD23DB6BE5AC45 L_14;
		memset((&L_14), 0, sizeof(L_14));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_14), L_13);
		__this->____pointer = L_14;
		int32_t L_15 = ___2_length;
		__this->____length = L_15;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1__ctor_m999E2C05EC97317809898828AF892B8C79ACC7C1_gshared (Span_1_tC47CA3FDABAC657528EC838C3FEB05AA0D4480EA* __this, void* ___0_pointer, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		goto IL_0016;
	}

IL_0016:
	{
		int32_t L_0 = ___1_length;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_001f;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_001f:
	{
		void* L_1 = ___0_pointer;
		uint32_t* L_2;
		L_2 = il2cpp_unsafe_as_ref<uint32_t>((uint8_t*)L_1);
		ByReference_1_tFE9AF4BD221B916FA525C43965FD23DB6BE5AC45 L_3;
		memset((&L_3), 0, sizeof(L_3));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_3), L_2);
		__this->____pointer = L_3;
		int32_t L_4 = ___1_length;
		__this->____length = L_4;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1__ctor_m44A796B80A3B7B5E228B0865F02AC548FA1E7567_gshared (Span_1_tC47CA3FDABAC657528EC838C3FEB05AA0D4480EA* __this, uint32_t* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		uint32_t* L_0 = ___0_ptr;
		ByReference_1_tFE9AF4BD221B916FA525C43965FD23DB6BE5AC45 L_1;
		memset((&L_1), 0, sizeof(L_1));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_1), L_0);
		__this->____pointer = L_1;
		int32_t L_2 = ___1_length;
		__this->____length = L_2;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t* Span_1_get_Item_m02A8F30DBE1911D7E5357E864D231529455D1963_gshared (Span_1_tC47CA3FDABAC657528EC838C3FEB05AA0D4480EA* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	ByReference_1_tFE9AF4BD221B916FA525C43965FD23DB6BE5AC45 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_index;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowIndexOutOfRangeException_m86F753A24E2765A35546BA6352A7E4F0BB8A66B5(NULL);
	}

IL_000e:
	{
		ByReference_1_tFE9AF4BD221B916FA525C43965FD23DB6BE5AC45 L_2 = __this->____pointer;
		V_0 = L_2;
		uint32_t* L_3;
		L_3 = IL2CPP_BY_REFERENCE_GET_VALUE(uint32_t, (Il2CppByReference*)(&V_0));
		int32_t L_4 = ___0_index;
		uint32_t* L_5;
		L_5 = il2cpp_unsafe_add<uint32_t,int32_t>(L_3, L_4);
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t* Span_1_GetPinnableReference_m296F8EBB04F54E3973579C184284BEFAA947B759_gshared (Span_1_tC47CA3FDABAC657528EC838C3FEB05AA0D4480EA* __this, const RuntimeMethod* method) 
{
	ByReference_1_tFE9AF4BD221B916FA525C43965FD23DB6BE5AC45 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->____length;
		if (L_0)
		{
			goto IL_0010;
		}
	}
	{
		uint32_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint32_t>((void*)((uintptr_t)0));
		return L_1;
	}

IL_0010:
	{
		ByReference_1_tFE9AF4BD221B916FA525C43965FD23DB6BE5AC45 L_2 = __this->____pointer;
		V_0 = L_2;
		uint32_t* L_3;
		L_3 = IL2CPP_BY_REFERENCE_GET_VALUE(uint32_t, (Il2CppByReference*)(&V_0));
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1_Clear_m2B78C0269CD984BA3EDE84E92E7D0405F534E396_gshared (Span_1_tC47CA3FDABAC657528EC838C3FEB05AA0D4480EA* __this, const RuntimeMethod* method) 
{
	ByReference_1_tFE9AF4BD221B916FA525C43965FD23DB6BE5AC45 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		goto IL_0034;
	}

IL_0034:
	{
		ByReference_1_tFE9AF4BD221B916FA525C43965FD23DB6BE5AC45 L_0 = __this->____pointer;
		V_0 = L_0;
		uint32_t* L_1;
		L_1 = IL2CPP_BY_REFERENCE_GET_VALUE(uint32_t, (Il2CppByReference*)(&V_0));
		uint8_t* L_2;
		L_2 = il2cpp_unsafe_as_ref<uint8_t>(L_1);
		int32_t L_3 = __this->____length;
		int32_t L_4;
		L_4 = il2cpp_unsafe_sizeof<uint32_t>();
		SpanHelpers_ClearWithoutReferences_m65DB2925AE7A5FF88BB3EA1BF90513C9ADF0653D(L_2, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_3), ((int64_t)L_4))), NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1_Fill_m8EC6942077811D5BDD7FE56421443067FD9B57B8_gshared (Span_1_tC47CA3FDABAC657528EC838C3FEB05AA0D4480EA* __this, uint32_t ___0_value, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	uint32_t V_1 = 0;
	ByReference_1_tFE9AF4BD221B916FA525C43965FD23DB6BE5AC45 V_2;
	memset((&V_2), 0, sizeof(V_2));
	uint64_t V_3 = 0;
	uint32_t* V_4 = NULL;
	uint64_t V_5 = 0;
	uint64_t V_6 = 0;
	{
		int32_t L_0;
		L_0 = il2cpp_unsafe_sizeof<uint32_t>();
		if ((!(((uint32_t)L_0) == ((uint32_t)1))))
		{
			goto IL_0037;
		}
	}
	{
		int32_t L_1 = __this->____length;
		V_0 = (uint32_t)L_1;
		uint32_t L_2 = V_0;
		if (L_2)
		{
			goto IL_0013;
		}
	}
	{
		return;
	}

IL_0013:
	{
		uint32_t L_3 = ___0_value;
		V_1 = L_3;
		ByReference_1_tFE9AF4BD221B916FA525C43965FD23DB6BE5AC45 L_4 = __this->____pointer;
		V_2 = L_4;
		uint32_t* L_5;
		L_5 = IL2CPP_BY_REFERENCE_GET_VALUE(uint32_t, (Il2CppByReference*)(&V_2));
		uint8_t* L_6;
		L_6 = il2cpp_unsafe_as_ref<uint8_t>(L_5);
		uint8_t* L_7;
		L_7 = il2cpp_unsafe_as_ref<uint8_t>((&V_1));
		int32_t L_8 = *((uint8_t*)L_7);
		uint32_t L_9 = V_0;
		Unsafe_InitBlockUnaligned_m6F2353EB9ABC9320E61629FAEE23948C80BFF03A(L_6, (uint8_t)L_8, L_9, NULL);
		return;
	}

IL_0037:
	{
		int32_t L_10 = __this->____length;
		V_3 = (uint64_t)((int64_t)(uint64_t)((uint32_t)L_10));
		uint64_t L_11 = V_3;
		if (L_11)
		{
			goto IL_0043;
		}
	}
	{
		return;
	}

IL_0043:
	{
		ByReference_1_tFE9AF4BD221B916FA525C43965FD23DB6BE5AC45 L_12 = __this->____pointer;
		V_2 = L_12;
		uint32_t* L_13;
		L_13 = IL2CPP_BY_REFERENCE_GET_VALUE(uint32_t, (Il2CppByReference*)(&V_2));
		V_4 = L_13;
		int32_t L_14;
		L_14 = il2cpp_unsafe_sizeof<uint32_t>();
		V_5 = (uint64_t)((int64_t)(uint64_t)((uint32_t)L_14));
		V_6 = (uint64_t)((int64_t)0);
		goto IL_0110;
	}

IL_0064:
	{
		uint32_t* L_15 = V_4;
		uint64_t L_16 = V_6;
		uint64_t L_17 = V_5;
		uint32_t* L_18;
		L_18 = il2cpp_unsafe_add_byte_offset<uint32_t,uint64_t>(L_15, (uint64_t)((int64_t)il2cpp_codegen_multiply((int64_t)L_16, (int64_t)L_17)));
		uint32_t L_19 = ___0_value;
		*(uint32_t*)L_18 = L_19;
		uint32_t* L_20 = V_4;
		uint64_t L_21 = V_6;
		uint64_t L_22 = V_5;
		uint32_t* L_23;
		L_23 = il2cpp_unsafe_add_byte_offset<uint32_t,uint64_t>(L_20, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_21, ((int64_t)1))), (int64_t)L_22)));
		uint32_t L_24 = ___0_value;
		*(uint32_t*)L_23 = L_24;
		uint32_t* L_25 = V_4;
		uint64_t L_26 = V_6;
		uint64_t L_27 = V_5;
		uint32_t* L_28;
		L_28 = il2cpp_unsafe_add_byte_offset<uint32_t,uint64_t>(L_25, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_26, ((int64_t)2))), (int64_t)L_27)));
		uint32_t L_29 = ___0_value;
		*(uint32_t*)L_28 = L_29;
		uint32_t* L_30 = V_4;
		uint64_t L_31 = V_6;
		uint64_t L_32 = V_5;
		uint32_t* L_33;
		L_33 = il2cpp_unsafe_add_byte_offset<uint32_t,uint64_t>(L_30, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_31, ((int64_t)3))), (int64_t)L_32)));
		uint32_t L_34 = ___0_value;
		*(uint32_t*)L_33 = L_34;
		uint32_t* L_35 = V_4;
		uint64_t L_36 = V_6;
		uint64_t L_37 = V_5;
		uint32_t* L_38;
		L_38 = il2cpp_unsafe_add_byte_offset<uint32_t,uint64_t>(L_35, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_36, ((int64_t)4))), (int64_t)L_37)));
		uint32_t L_39 = ___0_value;
		*(uint32_t*)L_38 = L_39;
		uint32_t* L_40 = V_4;
		uint64_t L_41 = V_6;
		uint64_t L_42 = V_5;
		uint32_t* L_43;
		L_43 = il2cpp_unsafe_add_byte_offset<uint32_t,uint64_t>(L_40, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_41, ((int64_t)5))), (int64_t)L_42)));
		uint32_t L_44 = ___0_value;
		*(uint32_t*)L_43 = L_44;
		uint32_t* L_45 = V_4;
		uint64_t L_46 = V_6;
		uint64_t L_47 = V_5;
		uint32_t* L_48;
		L_48 = il2cpp_unsafe_add_byte_offset<uint32_t,uint64_t>(L_45, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_46, ((int64_t)6))), (int64_t)L_47)));
		uint32_t L_49 = ___0_value;
		*(uint32_t*)L_48 = L_49;
		uint32_t* L_50 = V_4;
		uint64_t L_51 = V_6;
		uint64_t L_52 = V_5;
		uint32_t* L_53;
		L_53 = il2cpp_unsafe_add_byte_offset<uint32_t,uint64_t>(L_50, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_51, ((int64_t)7))), (int64_t)L_52)));
		uint32_t L_54 = ___0_value;
		*(uint32_t*)L_53 = L_54;
		uint64_t L_55 = V_6;
		V_6 = (uint64_t)((int64_t)il2cpp_codegen_add((int64_t)L_55, ((int64_t)8)));
	}

IL_0110:
	{
		uint64_t L_56 = V_6;
		uint64_t L_57 = V_3;
		if ((!(((uint64_t)L_56) >= ((uint64_t)((int64_t)((int64_t)L_57&((int64_t)((int32_t)-8))))))))
		{
			goto IL_0064;
		}
	}
	{
		uint64_t L_58 = V_6;
		uint64_t L_59 = V_3;
		if ((!(((uint64_t)L_58) < ((uint64_t)((int64_t)((int64_t)L_59&((int64_t)((int32_t)-4))))))))
		{
			goto IL_0198;
		}
	}
	{
		uint32_t* L_60 = V_4;
		uint64_t L_61 = V_6;
		uint64_t L_62 = V_5;
		uint32_t* L_63;
		L_63 = il2cpp_unsafe_add_byte_offset<uint32_t,uint64_t>(L_60, (uint64_t)((int64_t)il2cpp_codegen_multiply((int64_t)L_61, (int64_t)L_62)));
		uint32_t L_64 = ___0_value;
		*(uint32_t*)L_63 = L_64;
		uint32_t* L_65 = V_4;
		uint64_t L_66 = V_6;
		uint64_t L_67 = V_5;
		uint32_t* L_68;
		L_68 = il2cpp_unsafe_add_byte_offset<uint32_t,uint64_t>(L_65, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_66, ((int64_t)1))), (int64_t)L_67)));
		uint32_t L_69 = ___0_value;
		*(uint32_t*)L_68 = L_69;
		uint32_t* L_70 = V_4;
		uint64_t L_71 = V_6;
		uint64_t L_72 = V_5;
		uint32_t* L_73;
		L_73 = il2cpp_unsafe_add_byte_offset<uint32_t,uint64_t>(L_70, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_71, ((int64_t)2))), (int64_t)L_72)));
		uint32_t L_74 = ___0_value;
		*(uint32_t*)L_73 = L_74;
		uint32_t* L_75 = V_4;
		uint64_t L_76 = V_6;
		uint64_t L_77 = V_5;
		uint32_t* L_78;
		L_78 = il2cpp_unsafe_add_byte_offset<uint32_t,uint64_t>(L_75, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_76, ((int64_t)3))), (int64_t)L_77)));
		uint32_t L_79 = ___0_value;
		*(uint32_t*)L_78 = L_79;
		uint64_t L_80 = V_6;
		V_6 = (uint64_t)((int64_t)il2cpp_codegen_add((int64_t)L_80, ((int64_t)4)));
		goto IL_0198;
	}

IL_017f:
	{
		uint32_t* L_81 = V_4;
		uint64_t L_82 = V_6;
		uint64_t L_83 = V_5;
		uint32_t* L_84;
		L_84 = il2cpp_unsafe_add_byte_offset<uint32_t,uint64_t>(L_81, (uint64_t)((int64_t)il2cpp_codegen_multiply((int64_t)L_82, (int64_t)L_83)));
		uint32_t L_85 = ___0_value;
		*(uint32_t*)L_84 = L_85;
		uint64_t L_86 = V_6;
		V_6 = (uint64_t)((int64_t)il2cpp_codegen_add((int64_t)L_86, ((int64_t)1)));
	}

IL_0198:
	{
		uint64_t L_87 = V_6;
		uint64_t L_88 = V_3;
		if ((!(((uint64_t)L_87) >= ((uint64_t)L_88))))
		{
			goto IL_017f;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1_CopyTo_m45ED9076CBEDB2D4CA30A83E16D9BEE75626A9FF_gshared (Span_1_tC47CA3FDABAC657528EC838C3FEB05AA0D4480EA* __this, Span_1_tC47CA3FDABAC657528EC838C3FEB05AA0D4480EA ___0_destination, const RuntimeMethod* method) 
{
	ByReference_1_tFE9AF4BD221B916FA525C43965FD23DB6BE5AC45 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->____length;
		int32_t L_1;
		L_1 = Span_1_get_Length_mC3EBBD1CE9C5025EB30AFDE84FCCCFB3FE794EC5_inline((&___0_destination), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 13));
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_0038;
		}
	}
	{
		Span_1_tC47CA3FDABAC657528EC838C3FEB05AA0D4480EA L_2 = ___0_destination;
		ByReference_1_tFE9AF4BD221B916FA525C43965FD23DB6BE5AC45 L_3 = L_2.____pointer;
		V_0 = L_3;
		uint32_t* L_4;
		L_4 = IL2CPP_BY_REFERENCE_GET_VALUE(uint32_t, (Il2CppByReference*)(&V_0));
		ByReference_1_tFE9AF4BD221B916FA525C43965FD23DB6BE5AC45 L_5 = __this->____pointer;
		V_0 = L_5;
		uint32_t* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(uint32_t, (Il2CppByReference*)(&V_0));
		int32_t L_7 = __this->____length;
		Buffer_Memmove_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_mEC6A6EF02BD38F45F23336F48D35B9DC2BC187FD(L_4, L_6, (uint64_t)((int64_t)L_7), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 15));
		return;
	}

IL_0038:
	{
		ThrowHelper_ThrowArgumentException_DestinationTooShort_m6468934A3BBB67DBC5BAEF7A64D91BD5BBBB3D4D(NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Span_1_TryCopyTo_mB44CEE930589FCECFE9020025FFB505DD707B2D5_gshared (Span_1_tC47CA3FDABAC657528EC838C3FEB05AA0D4480EA* __this, Span_1_tC47CA3FDABAC657528EC838C3FEB05AA0D4480EA ___0_destination, const RuntimeMethod* method) 
{
	bool V_0 = false;
	ByReference_1_tFE9AF4BD221B916FA525C43965FD23DB6BE5AC45 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		V_0 = (bool)0;
		int32_t L_0 = __this->____length;
		int32_t L_1;
		L_1 = Span_1_get_Length_mC3EBBD1CE9C5025EB30AFDE84FCCCFB3FE794EC5_inline((&___0_destination), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 13));
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_003b;
		}
	}
	{
		Span_1_tC47CA3FDABAC657528EC838C3FEB05AA0D4480EA L_2 = ___0_destination;
		ByReference_1_tFE9AF4BD221B916FA525C43965FD23DB6BE5AC45 L_3 = L_2.____pointer;
		V_1 = L_3;
		uint32_t* L_4;
		L_4 = IL2CPP_BY_REFERENCE_GET_VALUE(uint32_t, (Il2CppByReference*)(&V_1));
		ByReference_1_tFE9AF4BD221B916FA525C43965FD23DB6BE5AC45 L_5 = __this->____pointer;
		V_1 = L_5;
		uint32_t* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(uint32_t, (Il2CppByReference*)(&V_1));
		int32_t L_7 = __this->____length;
		Buffer_Memmove_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_mEC6A6EF02BD38F45F23336F48D35B9DC2BC187FD(L_4, L_6, (uint64_t)((int64_t)L_7), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 15));
		V_0 = (bool)1;
	}

IL_003b:
	{
		bool L_8 = V_0;
		return L_8;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_t57F4BBC957039E8E904443D25F3A78AE60DC94B4 Span_1_op_Implicit_m030D7D0A16134F1819235F6051864FF9A776A1F6_gshared (Span_1_tC47CA3FDABAC657528EC838C3FEB05AA0D4480EA ___0_span, const RuntimeMethod* method) 
{
	ByReference_1_tFE9AF4BD221B916FA525C43965FD23DB6BE5AC45 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Span_1_tC47CA3FDABAC657528EC838C3FEB05AA0D4480EA L_0 = ___0_span;
		ByReference_1_tFE9AF4BD221B916FA525C43965FD23DB6BE5AC45 L_1 = L_0.____pointer;
		V_0 = L_1;
		uint32_t* L_2;
		L_2 = IL2CPP_BY_REFERENCE_GET_VALUE(uint32_t, (Il2CppByReference*)(&V_0));
		Span_1_tC47CA3FDABAC657528EC838C3FEB05AA0D4480EA L_3 = ___0_span;
		int32_t L_4 = L_3.____length;
		ReadOnlySpan_1_t57F4BBC957039E8E904443D25F3A78AE60DC94B4 L_5;
		memset((&L_5), 0, sizeof(L_5));
		ReadOnlySpan_1__ctor_mFEB9E8BCBC125E065C80C12FC6037D87DC6FA2FC_inline((&L_5), L_2, L_4, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 17));
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Span_1_ToString_mD3E4D84FCE98C375E6C9F2162A57B2395B398873_gshared (Span_1_tC47CA3FDABAC657528EC838C3FEB05AA0D4480EA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0DB46164953228904843938099AF66650313FEE5);
		s_Il2CppMethodInitialized = true;
	}
	Il2CppChar* V_0 = NULL;
	ByReference_1_tFE9AF4BD221B916FA525C43965FD23DB6BE5AC45 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 9)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.char_class->byval_arg) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		bool L_4;
		L_4 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_1, L_3, NULL);
		if (!L_4)
		{
			goto IL_003e;
		}
	}
	{
		ByReference_1_tFE9AF4BD221B916FA525C43965FD23DB6BE5AC45 L_5 = __this->____pointer;
		V_1 = L_5;
		uint32_t* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(uint32_t, (Il2CppByReference*)(&V_1));
		Il2CppChar* L_7;
		L_7 = il2cpp_unsafe_as_ref<Il2CppChar>(L_6);
		V_0 = L_7;
		Il2CppChar* L_8 = V_0;
		int32_t L_9 = __this->____length;
		String_t* L_10;
		L_10 = String_CreateString_m3F8794FEB452558B8A68C65E1F0B603B3D94E0E2(NULL, (Il2CppChar*)((uintptr_t)L_8), 0, L_9, NULL);
		return L_10;
	}

IL_003e:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_11 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 9)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_12;
		L_12 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_11, NULL);
		NullCheck((MemberInfo_t*)L_12);
		String_t* L_13;
		L_13 = VirtualFuncInvoker0< String_t* >::Invoke(8, (MemberInfo_t*)L_12);
		int32_t L_14 = __this->____length;
		int32_t L_15 = L_14;
		RuntimeObject* L_16 = Box(il2cpp_defaults.int32_class, &L_15);
		String_t* L_17;
		L_17 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(_stringLiteral0DB46164953228904843938099AF66650313FEE5, (RuntimeObject*)L_13, L_16, NULL);
		return L_17;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Span_1_tC47CA3FDABAC657528EC838C3FEB05AA0D4480EA Span_1_Slice_m0F9C99478BF7174C4DDEA1889C51F3FA1B7A0234_gshared (Span_1_tC47CA3FDABAC657528EC838C3FEB05AA0D4480EA* __this, int32_t ___0_start, const RuntimeMethod* method) 
{
	ByReference_1_tFE9AF4BD221B916FA525C43965FD23DB6BE5AC45 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_start;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) > ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_000e:
	{
		ByReference_1_tFE9AF4BD221B916FA525C43965FD23DB6BE5AC45 L_2 = __this->____pointer;
		V_0 = L_2;
		uint32_t* L_3;
		L_3 = IL2CPP_BY_REFERENCE_GET_VALUE(uint32_t, (Il2CppByReference*)(&V_0));
		int32_t L_4 = ___0_start;
		uint32_t* L_5;
		L_5 = il2cpp_unsafe_add<uint32_t,int32_t>(L_3, L_4);
		int32_t L_6 = __this->____length;
		int32_t L_7 = ___0_start;
		Span_1_tC47CA3FDABAC657528EC838C3FEB05AA0D4480EA L_8;
		memset((&L_8), 0, sizeof(L_8));
		Span_1__ctor_m44A796B80A3B7B5E228B0865F02AC548FA1E7567_inline((&L_8), L_5, ((int32_t)il2cpp_codegen_subtract(L_6, L_7)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 18));
		return L_8;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Span_1_tC47CA3FDABAC657528EC838C3FEB05AA0D4480EA Span_1_Slice_mD2B8E011F70C9E2504AF31237A6738E6BDB321A5_gshared (Span_1_tC47CA3FDABAC657528EC838C3FEB05AA0D4480EA* __this, int32_t ___0_start, int32_t ___1_length, const RuntimeMethod* method) 
{
	ByReference_1_tFE9AF4BD221B916FA525C43965FD23DB6BE5AC45 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_start;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		int32_t L_2 = ___1_length;
		int32_t L_3 = __this->____length;
		int32_t L_4 = ___0_start;
		if ((!(((uint32_t)L_2) > ((uint32_t)((int32_t)il2cpp_codegen_subtract(L_3, L_4))))))
		{
			goto IL_0019;
		}
	}

IL_0014:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_0019:
	{
		ByReference_1_tFE9AF4BD221B916FA525C43965FD23DB6BE5AC45 L_5 = __this->____pointer;
		V_0 = L_5;
		uint32_t* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(uint32_t, (Il2CppByReference*)(&V_0));
		int32_t L_7 = ___0_start;
		uint32_t* L_8;
		L_8 = il2cpp_unsafe_add<uint32_t,int32_t>(L_6, L_7);
		int32_t L_9 = ___1_length;
		Span_1_tC47CA3FDABAC657528EC838C3FEB05AA0D4480EA L_10;
		memset((&L_10), 0, sizeof(L_10));
		Span_1__ctor_m44A796B80A3B7B5E228B0865F02AC548FA1E7567_inline((&L_10), L_8, L_9, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 18));
		return L_10;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* Span_1_ToArray_m69464A7BA0B38D8637E326F94C6FBBB031DF39C4_gshared (Span_1_tC47CA3FDABAC657528EC838C3FEB05AA0D4480EA* __this, const RuntimeMethod* method) 
{
	ByReference_1_tFE9AF4BD221B916FA525C43965FD23DB6BE5AC45 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->____length;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_1;
		L_1 = Array_Empty_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_m8B0170B3C9368D9BDB90A666E2DF5549423C160C_inline(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 19));
		return L_1;
	}

IL_000e:
	{
		int32_t L_2 = __this->____length;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_3 = (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)SZArrayNew(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 20), (uint32_t)L_2);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_4 = L_3;
		NullCheck((RuntimeArray*)L_4);
		uint8_t* L_5;
		L_5 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_4, NULL);
		uint32_t* L_6;
		L_6 = il2cpp_unsafe_as_ref<uint32_t>(L_5);
		ByReference_1_tFE9AF4BD221B916FA525C43965FD23DB6BE5AC45 L_7 = __this->____pointer;
		V_0 = L_7;
		uint32_t* L_8;
		L_8 = IL2CPP_BY_REFERENCE_GET_VALUE(uint32_t, (Il2CppByReference*)(&V_0));
		int32_t L_9 = __this->____length;
		Buffer_Memmove_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_mEC6A6EF02BD38F45F23336F48D35B9DC2BC187FD(L_6, L_8, (uint64_t)((int64_t)L_9), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 15));
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Span_1_get_Length_mC3EBBD1CE9C5025EB30AFDE84FCCCFB3FE794EC5_gshared (Span_1_tC47CA3FDABAC657528EC838C3FEB05AA0D4480EA* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____length;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Span_1_Equals_mBCA1DE3F35219C89B8834EC233C51D4CF12DF5A8_gshared (Span_1_tC47CA3FDABAC657528EC838C3FEB05AA0D4480EA* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral69508A540AFD085A745316DD7D6345B1C8CC662D)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Span_1_GetHashCode_m8ADDE3CC62F09D09699842E5024D67145223201D_gshared (Span_1_tC47CA3FDABAC657528EC838C3FEB05AA0D4480EA* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralECE618215BAC99C6FD12D8A273CC2118945EDCC8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Span_1_tC47CA3FDABAC657528EC838C3FEB05AA0D4480EA Span_1_op_Implicit_m5689B5F42218BA135D8CF5E828BF56EFB7FF7FBD_gshared (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___0_array, const RuntimeMethod* method) 
{
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_0 = ___0_array;
		Span_1_tC47CA3FDABAC657528EC838C3FEB05AA0D4480EA L_1;
		memset((&L_1), 0, sizeof(L_1));
		Span_1__ctor_m1161A3B3850C22A54C838C62FB009355039C28ED_inline((&L_1), L_0, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 21));
		return L_1;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1__ctor_mC83E2FCB4929477ACCB736B25B9E2F89FF2A07CF_gshared (Span_1_t2EECFBFD7BF99470FF5E3884902CE388B17BBDD3* __this, UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___0_array, const RuntimeMethod* method) 
{
	uint64_t V_0 = 0;
	{
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_000b;
		}
	}
	{
		il2cpp_codegen_initobj(__this, sizeof(Span_1_t2EECFBFD7BF99470FF5E3884902CE388B17BBDD3));
		return;
	}

IL_000b:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(uint64_t));
		goto IL_0037;
	}

IL_0037:
	{
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_2 = ___0_array;
		NullCheck((RuntimeArray*)L_2);
		uint8_t* L_3;
		L_3 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_2, NULL);
		uint64_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint64_t>(L_3);
		ByReference_1_tC177AF8388672C5485D5AAD1C913963A8C7B4548 L_5;
		memset((&L_5), 0, sizeof(L_5));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_5), L_4);
		__this->____pointer = L_5;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_6 = ___0_array;
		NullCheck(L_6);
		__this->____length = ((int32_t)(((RuntimeArray*)L_6)->max_length));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1__ctor_mACE9723FAD4FABB5DB3492127924E7DED70D581F_gshared (Span_1_t2EECFBFD7BF99470FF5E3884902CE388B17BBDD3* __this, UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___0_array, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method) 
{
	uint64_t V_0 = 0;
	{
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		int32_t L_1 = ___1_start;
		if (L_1)
		{
			goto IL_0009;
		}
	}
	{
		int32_t L_2 = ___2_length;
		if (!L_2)
		{
			goto IL_000e;
		}
	}

IL_0009:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_000e:
	{
		il2cpp_codegen_initobj(__this, sizeof(Span_1_t2EECFBFD7BF99470FF5E3884902CE388B17BBDD3));
		return;
	}

IL_0016:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(uint64_t));
		goto IL_0042;
	}

IL_0042:
	{
		int32_t L_4 = ___1_start;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_5 = ___0_array;
		NullCheck(L_5);
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)(((RuntimeArray*)L_5)->max_length))))))
		{
			goto IL_0050;
		}
	}
	{
		int32_t L_6 = ___2_length;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_7 = ___0_array;
		NullCheck(L_7);
		int32_t L_8 = ___1_start;
		if ((!(((uint32_t)L_6) > ((uint32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_7)->max_length)), L_8))))))
		{
			goto IL_0055;
		}
	}

IL_0050:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_0055:
	{
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_9 = ___0_array;
		NullCheck((RuntimeArray*)L_9);
		uint8_t* L_10;
		L_10 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_9, NULL);
		uint64_t* L_11;
		L_11 = il2cpp_unsafe_as_ref<uint64_t>(L_10);
		int32_t L_12 = ___1_start;
		uint64_t* L_13;
		L_13 = il2cpp_unsafe_add<uint64_t,int32_t>(L_11, L_12);
		ByReference_1_tC177AF8388672C5485D5AAD1C913963A8C7B4548 L_14;
		memset((&L_14), 0, sizeof(L_14));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_14), L_13);
		__this->____pointer = L_14;
		int32_t L_15 = ___2_length;
		__this->____length = L_15;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1__ctor_m88AFBBE67F3E951762332D952D09441CB09F29B8_gshared (Span_1_t2EECFBFD7BF99470FF5E3884902CE388B17BBDD3* __this, void* ___0_pointer, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		goto IL_0016;
	}

IL_0016:
	{
		int32_t L_0 = ___1_length;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_001f;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_001f:
	{
		void* L_1 = ___0_pointer;
		uint64_t* L_2;
		L_2 = il2cpp_unsafe_as_ref<uint64_t>((uint8_t*)L_1);
		ByReference_1_tC177AF8388672C5485D5AAD1C913963A8C7B4548 L_3;
		memset((&L_3), 0, sizeof(L_3));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_3), L_2);
		__this->____pointer = L_3;
		int32_t L_4 = ___1_length;
		__this->____length = L_4;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1__ctor_m3C68BA129DD44A3486C6B57A99412947A16855F6_gshared (Span_1_t2EECFBFD7BF99470FF5E3884902CE388B17BBDD3* __this, uint64_t* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		uint64_t* L_0 = ___0_ptr;
		ByReference_1_tC177AF8388672C5485D5AAD1C913963A8C7B4548 L_1;
		memset((&L_1), 0, sizeof(L_1));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_1), L_0);
		__this->____pointer = L_1;
		int32_t L_2 = ___1_length;
		__this->____length = L_2;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t* Span_1_get_Item_m30051484137413775875E0518C56A0F7562A62AF_gshared (Span_1_t2EECFBFD7BF99470FF5E3884902CE388B17BBDD3* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	ByReference_1_tC177AF8388672C5485D5AAD1C913963A8C7B4548 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_index;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowIndexOutOfRangeException_m86F753A24E2765A35546BA6352A7E4F0BB8A66B5(NULL);
	}

IL_000e:
	{
		ByReference_1_tC177AF8388672C5485D5AAD1C913963A8C7B4548 L_2 = __this->____pointer;
		V_0 = L_2;
		uint64_t* L_3;
		L_3 = IL2CPP_BY_REFERENCE_GET_VALUE(uint64_t, (Il2CppByReference*)(&V_0));
		int32_t L_4 = ___0_index;
		uint64_t* L_5;
		L_5 = il2cpp_unsafe_add<uint64_t,int32_t>(L_3, L_4);
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t* Span_1_GetPinnableReference_m8E9CCA07F04C35E18E9D852F9221816617DFF043_gshared (Span_1_t2EECFBFD7BF99470FF5E3884902CE388B17BBDD3* __this, const RuntimeMethod* method) 
{
	ByReference_1_tC177AF8388672C5485D5AAD1C913963A8C7B4548 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->____length;
		if (L_0)
		{
			goto IL_0010;
		}
	}
	{
		uint64_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint64_t>((void*)((uintptr_t)0));
		return L_1;
	}

IL_0010:
	{
		ByReference_1_tC177AF8388672C5485D5AAD1C913963A8C7B4548 L_2 = __this->____pointer;
		V_0 = L_2;
		uint64_t* L_3;
		L_3 = IL2CPP_BY_REFERENCE_GET_VALUE(uint64_t, (Il2CppByReference*)(&V_0));
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1_Clear_mE1DD2BC27D0EE4070148EC36656CB584143712DD_gshared (Span_1_t2EECFBFD7BF99470FF5E3884902CE388B17BBDD3* __this, const RuntimeMethod* method) 
{
	ByReference_1_tC177AF8388672C5485D5AAD1C913963A8C7B4548 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		goto IL_0034;
	}

IL_0034:
	{
		ByReference_1_tC177AF8388672C5485D5AAD1C913963A8C7B4548 L_0 = __this->____pointer;
		V_0 = L_0;
		uint64_t* L_1;
		L_1 = IL2CPP_BY_REFERENCE_GET_VALUE(uint64_t, (Il2CppByReference*)(&V_0));
		uint8_t* L_2;
		L_2 = il2cpp_unsafe_as_ref<uint8_t>(L_1);
		int32_t L_3 = __this->____length;
		int32_t L_4;
		L_4 = il2cpp_unsafe_sizeof<uint64_t>();
		SpanHelpers_ClearWithoutReferences_m65DB2925AE7A5FF88BB3EA1BF90513C9ADF0653D(L_2, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_3), ((int64_t)L_4))), NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1_Fill_mDA5F8A3B92B36549BDE83CCF74C6B56A77B077AF_gshared (Span_1_t2EECFBFD7BF99470FF5E3884902CE388B17BBDD3* __this, uint64_t ___0_value, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	uint64_t V_1 = 0;
	ByReference_1_tC177AF8388672C5485D5AAD1C913963A8C7B4548 V_2;
	memset((&V_2), 0, sizeof(V_2));
	uint64_t V_3 = 0;
	uint64_t* V_4 = NULL;
	uint64_t V_5 = 0;
	uint64_t V_6 = 0;
	{
		int32_t L_0;
		L_0 = il2cpp_unsafe_sizeof<uint64_t>();
		if ((!(((uint32_t)L_0) == ((uint32_t)1))))
		{
			goto IL_0037;
		}
	}
	{
		int32_t L_1 = __this->____length;
		V_0 = (uint32_t)L_1;
		uint32_t L_2 = V_0;
		if (L_2)
		{
			goto IL_0013;
		}
	}
	{
		return;
	}

IL_0013:
	{
		uint64_t L_3 = ___0_value;
		V_1 = L_3;
		ByReference_1_tC177AF8388672C5485D5AAD1C913963A8C7B4548 L_4 = __this->____pointer;
		V_2 = L_4;
		uint64_t* L_5;
		L_5 = IL2CPP_BY_REFERENCE_GET_VALUE(uint64_t, (Il2CppByReference*)(&V_2));
		uint8_t* L_6;
		L_6 = il2cpp_unsafe_as_ref<uint8_t>(L_5);
		uint8_t* L_7;
		L_7 = il2cpp_unsafe_as_ref<uint8_t>((&V_1));
		int32_t L_8 = *((uint8_t*)L_7);
		uint32_t L_9 = V_0;
		Unsafe_InitBlockUnaligned_m6F2353EB9ABC9320E61629FAEE23948C80BFF03A(L_6, (uint8_t)L_8, L_9, NULL);
		return;
	}

IL_0037:
	{
		int32_t L_10 = __this->____length;
		V_3 = (uint64_t)((int64_t)(uint64_t)((uint32_t)L_10));
		uint64_t L_11 = V_3;
		if (L_11)
		{
			goto IL_0043;
		}
	}
	{
		return;
	}

IL_0043:
	{
		ByReference_1_tC177AF8388672C5485D5AAD1C913963A8C7B4548 L_12 = __this->____pointer;
		V_2 = L_12;
		uint64_t* L_13;
		L_13 = IL2CPP_BY_REFERENCE_GET_VALUE(uint64_t, (Il2CppByReference*)(&V_2));
		V_4 = L_13;
		int32_t L_14;
		L_14 = il2cpp_unsafe_sizeof<uint64_t>();
		V_5 = (uint64_t)((int64_t)(uint64_t)((uint32_t)L_14));
		V_6 = (uint64_t)((int64_t)0);
		goto IL_0110;
	}

IL_0064:
	{
		uint64_t* L_15 = V_4;
		uint64_t L_16 = V_6;
		uint64_t L_17 = V_5;
		uint64_t* L_18;
		L_18 = il2cpp_unsafe_add_byte_offset<uint64_t,uint64_t>(L_15, (uint64_t)((int64_t)il2cpp_codegen_multiply((int64_t)L_16, (int64_t)L_17)));
		uint64_t L_19 = ___0_value;
		*(uint64_t*)L_18 = L_19;
		uint64_t* L_20 = V_4;
		uint64_t L_21 = V_6;
		uint64_t L_22 = V_5;
		uint64_t* L_23;
		L_23 = il2cpp_unsafe_add_byte_offset<uint64_t,uint64_t>(L_20, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_21, ((int64_t)1))), (int64_t)L_22)));
		uint64_t L_24 = ___0_value;
		*(uint64_t*)L_23 = L_24;
		uint64_t* L_25 = V_4;
		uint64_t L_26 = V_6;
		uint64_t L_27 = V_5;
		uint64_t* L_28;
		L_28 = il2cpp_unsafe_add_byte_offset<uint64_t,uint64_t>(L_25, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_26, ((int64_t)2))), (int64_t)L_27)));
		uint64_t L_29 = ___0_value;
		*(uint64_t*)L_28 = L_29;
		uint64_t* L_30 = V_4;
		uint64_t L_31 = V_6;
		uint64_t L_32 = V_5;
		uint64_t* L_33;
		L_33 = il2cpp_unsafe_add_byte_offset<uint64_t,uint64_t>(L_30, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_31, ((int64_t)3))), (int64_t)L_32)));
		uint64_t L_34 = ___0_value;
		*(uint64_t*)L_33 = L_34;
		uint64_t* L_35 = V_4;
		uint64_t L_36 = V_6;
		uint64_t L_37 = V_5;
		uint64_t* L_38;
		L_38 = il2cpp_unsafe_add_byte_offset<uint64_t,uint64_t>(L_35, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_36, ((int64_t)4))), (int64_t)L_37)));
		uint64_t L_39 = ___0_value;
		*(uint64_t*)L_38 = L_39;
		uint64_t* L_40 = V_4;
		uint64_t L_41 = V_6;
		uint64_t L_42 = V_5;
		uint64_t* L_43;
		L_43 = il2cpp_unsafe_add_byte_offset<uint64_t,uint64_t>(L_40, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_41, ((int64_t)5))), (int64_t)L_42)));
		uint64_t L_44 = ___0_value;
		*(uint64_t*)L_43 = L_44;
		uint64_t* L_45 = V_4;
		uint64_t L_46 = V_6;
		uint64_t L_47 = V_5;
		uint64_t* L_48;
		L_48 = il2cpp_unsafe_add_byte_offset<uint64_t,uint64_t>(L_45, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_46, ((int64_t)6))), (int64_t)L_47)));
		uint64_t L_49 = ___0_value;
		*(uint64_t*)L_48 = L_49;
		uint64_t* L_50 = V_4;
		uint64_t L_51 = V_6;
		uint64_t L_52 = V_5;
		uint64_t* L_53;
		L_53 = il2cpp_unsafe_add_byte_offset<uint64_t,uint64_t>(L_50, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_51, ((int64_t)7))), (int64_t)L_52)));
		uint64_t L_54 = ___0_value;
		*(uint64_t*)L_53 = L_54;
		uint64_t L_55 = V_6;
		V_6 = (uint64_t)((int64_t)il2cpp_codegen_add((int64_t)L_55, ((int64_t)8)));
	}

IL_0110:
	{
		uint64_t L_56 = V_6;
		uint64_t L_57 = V_3;
		if ((!(((uint64_t)L_56) >= ((uint64_t)((int64_t)((int64_t)L_57&((int64_t)((int32_t)-8))))))))
		{
			goto IL_0064;
		}
	}
	{
		uint64_t L_58 = V_6;
		uint64_t L_59 = V_3;
		if ((!(((uint64_t)L_58) < ((uint64_t)((int64_t)((int64_t)L_59&((int64_t)((int32_t)-4))))))))
		{
			goto IL_0198;
		}
	}
	{
		uint64_t* L_60 = V_4;
		uint64_t L_61 = V_6;
		uint64_t L_62 = V_5;
		uint64_t* L_63;
		L_63 = il2cpp_unsafe_add_byte_offset<uint64_t,uint64_t>(L_60, (uint64_t)((int64_t)il2cpp_codegen_multiply((int64_t)L_61, (int64_t)L_62)));
		uint64_t L_64 = ___0_value;
		*(uint64_t*)L_63 = L_64;
		uint64_t* L_65 = V_4;
		uint64_t L_66 = V_6;
		uint64_t L_67 = V_5;
		uint64_t* L_68;
		L_68 = il2cpp_unsafe_add_byte_offset<uint64_t,uint64_t>(L_65, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_66, ((int64_t)1))), (int64_t)L_67)));
		uint64_t L_69 = ___0_value;
		*(uint64_t*)L_68 = L_69;
		uint64_t* L_70 = V_4;
		uint64_t L_71 = V_6;
		uint64_t L_72 = V_5;
		uint64_t* L_73;
		L_73 = il2cpp_unsafe_add_byte_offset<uint64_t,uint64_t>(L_70, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_71, ((int64_t)2))), (int64_t)L_72)));
		uint64_t L_74 = ___0_value;
		*(uint64_t*)L_73 = L_74;
		uint64_t* L_75 = V_4;
		uint64_t L_76 = V_6;
		uint64_t L_77 = V_5;
		uint64_t* L_78;
		L_78 = il2cpp_unsafe_add_byte_offset<uint64_t,uint64_t>(L_75, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_76, ((int64_t)3))), (int64_t)L_77)));
		uint64_t L_79 = ___0_value;
		*(uint64_t*)L_78 = L_79;
		uint64_t L_80 = V_6;
		V_6 = (uint64_t)((int64_t)il2cpp_codegen_add((int64_t)L_80, ((int64_t)4)));
		goto IL_0198;
	}

IL_017f:
	{
		uint64_t* L_81 = V_4;
		uint64_t L_82 = V_6;
		uint64_t L_83 = V_5;
		uint64_t* L_84;
		L_84 = il2cpp_unsafe_add_byte_offset<uint64_t,uint64_t>(L_81, (uint64_t)((int64_t)il2cpp_codegen_multiply((int64_t)L_82, (int64_t)L_83)));
		uint64_t L_85 = ___0_value;
		*(uint64_t*)L_84 = L_85;
		uint64_t L_86 = V_6;
		V_6 = (uint64_t)((int64_t)il2cpp_codegen_add((int64_t)L_86, ((int64_t)1)));
	}

IL_0198:
	{
		uint64_t L_87 = V_6;
		uint64_t L_88 = V_3;
		if ((!(((uint64_t)L_87) >= ((uint64_t)L_88))))
		{
			goto IL_017f;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1_CopyTo_m4F011B6E94BE67BF00E6EEF0F52FC07C6143590D_gshared (Span_1_t2EECFBFD7BF99470FF5E3884902CE388B17BBDD3* __this, Span_1_t2EECFBFD7BF99470FF5E3884902CE388B17BBDD3 ___0_destination, const RuntimeMethod* method) 
{
	ByReference_1_tC177AF8388672C5485D5AAD1C913963A8C7B4548 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->____length;
		int32_t L_1;
		L_1 = Span_1_get_Length_m62F446B5508B032A22CD1BA21D998626E6B8A5CC_inline((&___0_destination), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 13));
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_0038;
		}
	}
	{
		Span_1_t2EECFBFD7BF99470FF5E3884902CE388B17BBDD3 L_2 = ___0_destination;
		ByReference_1_tC177AF8388672C5485D5AAD1C913963A8C7B4548 L_3 = L_2.____pointer;
		V_0 = L_3;
		uint64_t* L_4;
		L_4 = IL2CPP_BY_REFERENCE_GET_VALUE(uint64_t, (Il2CppByReference*)(&V_0));
		ByReference_1_tC177AF8388672C5485D5AAD1C913963A8C7B4548 L_5 = __this->____pointer;
		V_0 = L_5;
		uint64_t* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(uint64_t, (Il2CppByReference*)(&V_0));
		int32_t L_7 = __this->____length;
		Buffer_Memmove_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_m4482A7BD91B51B22F471D785B1D22FAE110CD908(L_4, L_6, (uint64_t)((int64_t)L_7), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 15));
		return;
	}

IL_0038:
	{
		ThrowHelper_ThrowArgumentException_DestinationTooShort_m6468934A3BBB67DBC5BAEF7A64D91BD5BBBB3D4D(NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Span_1_TryCopyTo_mAB8D99AE7F7B967B3A5381D38CA35D489ED76345_gshared (Span_1_t2EECFBFD7BF99470FF5E3884902CE388B17BBDD3* __this, Span_1_t2EECFBFD7BF99470FF5E3884902CE388B17BBDD3 ___0_destination, const RuntimeMethod* method) 
{
	bool V_0 = false;
	ByReference_1_tC177AF8388672C5485D5AAD1C913963A8C7B4548 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		V_0 = (bool)0;
		int32_t L_0 = __this->____length;
		int32_t L_1;
		L_1 = Span_1_get_Length_m62F446B5508B032A22CD1BA21D998626E6B8A5CC_inline((&___0_destination), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 13));
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_003b;
		}
	}
	{
		Span_1_t2EECFBFD7BF99470FF5E3884902CE388B17BBDD3 L_2 = ___0_destination;
		ByReference_1_tC177AF8388672C5485D5AAD1C913963A8C7B4548 L_3 = L_2.____pointer;
		V_1 = L_3;
		uint64_t* L_4;
		L_4 = IL2CPP_BY_REFERENCE_GET_VALUE(uint64_t, (Il2CppByReference*)(&V_1));
		ByReference_1_tC177AF8388672C5485D5AAD1C913963A8C7B4548 L_5 = __this->____pointer;
		V_1 = L_5;
		uint64_t* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(uint64_t, (Il2CppByReference*)(&V_1));
		int32_t L_7 = __this->____length;
		Buffer_Memmove_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_m4482A7BD91B51B22F471D785B1D22FAE110CD908(L_4, L_6, (uint64_t)((int64_t)L_7), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 15));
		V_0 = (bool)1;
	}

IL_003b:
	{
		bool L_8 = V_0;
		return L_8;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_tD579EC24AE7548EFE16428C9DC0EE0423C0FDA0F Span_1_op_Implicit_mF533047803AD7D0C594E51DBD4C261DA5D5E370D_gshared (Span_1_t2EECFBFD7BF99470FF5E3884902CE388B17BBDD3 ___0_span, const RuntimeMethod* method) 
{
	ByReference_1_tC177AF8388672C5485D5AAD1C913963A8C7B4548 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Span_1_t2EECFBFD7BF99470FF5E3884902CE388B17BBDD3 L_0 = ___0_span;
		ByReference_1_tC177AF8388672C5485D5AAD1C913963A8C7B4548 L_1 = L_0.____pointer;
		V_0 = L_1;
		uint64_t* L_2;
		L_2 = IL2CPP_BY_REFERENCE_GET_VALUE(uint64_t, (Il2CppByReference*)(&V_0));
		Span_1_t2EECFBFD7BF99470FF5E3884902CE388B17BBDD3 L_3 = ___0_span;
		int32_t L_4 = L_3.____length;
		ReadOnlySpan_1_tD579EC24AE7548EFE16428C9DC0EE0423C0FDA0F L_5;
		memset((&L_5), 0, sizeof(L_5));
		ReadOnlySpan_1__ctor_mC03446F4F48AEBD20B80591766ACE9CE79048BCE_inline((&L_5), L_2, L_4, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 17));
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Span_1_ToString_m6E70F419212ED46A47A2900761157E051D0A88D7_gshared (Span_1_t2EECFBFD7BF99470FF5E3884902CE388B17BBDD3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0DB46164953228904843938099AF66650313FEE5);
		s_Il2CppMethodInitialized = true;
	}
	Il2CppChar* V_0 = NULL;
	ByReference_1_tC177AF8388672C5485D5AAD1C913963A8C7B4548 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 9)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.char_class->byval_arg) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		bool L_4;
		L_4 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_1, L_3, NULL);
		if (!L_4)
		{
			goto IL_003e;
		}
	}
	{
		ByReference_1_tC177AF8388672C5485D5AAD1C913963A8C7B4548 L_5 = __this->____pointer;
		V_1 = L_5;
		uint64_t* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(uint64_t, (Il2CppByReference*)(&V_1));
		Il2CppChar* L_7;
		L_7 = il2cpp_unsafe_as_ref<Il2CppChar>(L_6);
		V_0 = L_7;
		Il2CppChar* L_8 = V_0;
		int32_t L_9 = __this->____length;
		String_t* L_10;
		L_10 = String_CreateString_m3F8794FEB452558B8A68C65E1F0B603B3D94E0E2(NULL, (Il2CppChar*)((uintptr_t)L_8), 0, L_9, NULL);
		return L_10;
	}

IL_003e:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_11 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 9)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_12;
		L_12 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_11, NULL);
		NullCheck((MemberInfo_t*)L_12);
		String_t* L_13;
		L_13 = VirtualFuncInvoker0< String_t* >::Invoke(8, (MemberInfo_t*)L_12);
		int32_t L_14 = __this->____length;
		int32_t L_15 = L_14;
		RuntimeObject* L_16 = Box(il2cpp_defaults.int32_class, &L_15);
		String_t* L_17;
		L_17 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(_stringLiteral0DB46164953228904843938099AF66650313FEE5, (RuntimeObject*)L_13, L_16, NULL);
		return L_17;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Span_1_t2EECFBFD7BF99470FF5E3884902CE388B17BBDD3 Span_1_Slice_m0B26EE6F75B6659A26656BAF1AE818DD4FF1C376_gshared (Span_1_t2EECFBFD7BF99470FF5E3884902CE388B17BBDD3* __this, int32_t ___0_start, const RuntimeMethod* method) 
{
	ByReference_1_tC177AF8388672C5485D5AAD1C913963A8C7B4548 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_start;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) > ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_000e:
	{
		ByReference_1_tC177AF8388672C5485D5AAD1C913963A8C7B4548 L_2 = __this->____pointer;
		V_0 = L_2;
		uint64_t* L_3;
		L_3 = IL2CPP_BY_REFERENCE_GET_VALUE(uint64_t, (Il2CppByReference*)(&V_0));
		int32_t L_4 = ___0_start;
		uint64_t* L_5;
		L_5 = il2cpp_unsafe_add<uint64_t,int32_t>(L_3, L_4);
		int32_t L_6 = __this->____length;
		int32_t L_7 = ___0_start;
		Span_1_t2EECFBFD7BF99470FF5E3884902CE388B17BBDD3 L_8;
		memset((&L_8), 0, sizeof(L_8));
		Span_1__ctor_m3C68BA129DD44A3486C6B57A99412947A16855F6_inline((&L_8), L_5, ((int32_t)il2cpp_codegen_subtract(L_6, L_7)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 18));
		return L_8;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Span_1_t2EECFBFD7BF99470FF5E3884902CE388B17BBDD3 Span_1_Slice_m66C540ED824CAA1711823B4BF222E5F30BC81573_gshared (Span_1_t2EECFBFD7BF99470FF5E3884902CE388B17BBDD3* __this, int32_t ___0_start, int32_t ___1_length, const RuntimeMethod* method) 
{
	ByReference_1_tC177AF8388672C5485D5AAD1C913963A8C7B4548 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_start;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		int32_t L_2 = ___1_length;
		int32_t L_3 = __this->____length;
		int32_t L_4 = ___0_start;
		if ((!(((uint32_t)L_2) > ((uint32_t)((int32_t)il2cpp_codegen_subtract(L_3, L_4))))))
		{
			goto IL_0019;
		}
	}

IL_0014:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_0019:
	{
		ByReference_1_tC177AF8388672C5485D5AAD1C913963A8C7B4548 L_5 = __this->____pointer;
		V_0 = L_5;
		uint64_t* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(uint64_t, (Il2CppByReference*)(&V_0));
		int32_t L_7 = ___0_start;
		uint64_t* L_8;
		L_8 = il2cpp_unsafe_add<uint64_t,int32_t>(L_6, L_7);
		int32_t L_9 = ___1_length;
		Span_1_t2EECFBFD7BF99470FF5E3884902CE388B17BBDD3 L_10;
		memset((&L_10), 0, sizeof(L_10));
		Span_1__ctor_m3C68BA129DD44A3486C6B57A99412947A16855F6_inline((&L_10), L_8, L_9, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 18));
		return L_10;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* Span_1_ToArray_mE0817125C69F368855E8B03DE0BA9F37FA32377E_gshared (Span_1_t2EECFBFD7BF99470FF5E3884902CE388B17BBDD3* __this, const RuntimeMethod* method) 
{
	ByReference_1_tC177AF8388672C5485D5AAD1C913963A8C7B4548 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->____length;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_1;
		L_1 = Array_Empty_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_m696D3DE2D89DD613C8C0EB15BE627EABEF780255_inline(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 19));
		return L_1;
	}

IL_000e:
	{
		int32_t L_2 = __this->____length;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_3 = (UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)SZArrayNew(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 20), (uint32_t)L_2);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_4 = L_3;
		NullCheck((RuntimeArray*)L_4);
		uint8_t* L_5;
		L_5 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_4, NULL);
		uint64_t* L_6;
		L_6 = il2cpp_unsafe_as_ref<uint64_t>(L_5);
		ByReference_1_tC177AF8388672C5485D5AAD1C913963A8C7B4548 L_7 = __this->____pointer;
		V_0 = L_7;
		uint64_t* L_8;
		L_8 = IL2CPP_BY_REFERENCE_GET_VALUE(uint64_t, (Il2CppByReference*)(&V_0));
		int32_t L_9 = __this->____length;
		Buffer_Memmove_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_m4482A7BD91B51B22F471D785B1D22FAE110CD908(L_6, L_8, (uint64_t)((int64_t)L_9), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 15));
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Span_1_get_Length_m62F446B5508B032A22CD1BA21D998626E6B8A5CC_gshared (Span_1_t2EECFBFD7BF99470FF5E3884902CE388B17BBDD3* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____length;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Span_1_Equals_m96D35BF7B64CE4FB8444E07FC1FC616FFD98825F_gshared (Span_1_t2EECFBFD7BF99470FF5E3884902CE388B17BBDD3* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral69508A540AFD085A745316DD7D6345B1C8CC662D)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Span_1_GetHashCode_m315CB2A6699FD8608FEA6FFEC966216869215960_gshared (Span_1_t2EECFBFD7BF99470FF5E3884902CE388B17BBDD3* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralECE618215BAC99C6FD12D8A273CC2118945EDCC8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Span_1_t2EECFBFD7BF99470FF5E3884902CE388B17BBDD3 Span_1_op_Implicit_m921D52D34E89E0735644236C2846D3DC7A41B774_gshared (UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___0_array, const RuntimeMethod* method) 
{
	{
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_0 = ___0_array;
		Span_1_t2EECFBFD7BF99470FF5E3884902CE388B17BBDD3 L_1;
		memset((&L_1), 0, sizeof(L_1));
		Span_1__ctor_mC83E2FCB4929477ACCB736B25B9E2F89FF2A07CF_inline((&L_1), L_0, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 21));
		return L_1;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1__ctor_m0F2A60856E23C8A9DC58E03191363DF4E8A6F1B3_gshared (Span_1_t176257933B4F95507A92292ED5363CE3EFE12BB5* __this, Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___0_array, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_000b;
		}
	}
	{
		il2cpp_codegen_initobj(__this, sizeof(Span_1_t176257933B4F95507A92292ED5363CE3EFE12BB5));
		return;
	}

IL_000b:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7));
		goto IL_0037;
	}

IL_0037:
	{
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_2 = ___0_array;
		NullCheck((RuntimeArray*)L_2);
		uint8_t* L_3;
		L_3 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_2, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_4;
		L_4 = il2cpp_unsafe_as_ref<Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7>(L_3);
		ByReference_1_tC00E272CA69BF0EE3939D1F6DB60E788290A8313 L_5;
		memset((&L_5), 0, sizeof(L_5));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_5), L_4);
		__this->____pointer = L_5;
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_6 = ___0_array;
		NullCheck(L_6);
		__this->____length = ((int32_t)(((RuntimeArray*)L_6)->max_length));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1__ctor_mD3D10FEB32F6598A9C692F522A03F2DF9C84A52F_gshared (Span_1_t176257933B4F95507A92292ED5363CE3EFE12BB5* __this, Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___0_array, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		int32_t L_1 = ___1_start;
		if (L_1)
		{
			goto IL_0009;
		}
	}
	{
		int32_t L_2 = ___2_length;
		if (!L_2)
		{
			goto IL_000e;
		}
	}

IL_0009:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_000e:
	{
		il2cpp_codegen_initobj(__this, sizeof(Span_1_t176257933B4F95507A92292ED5363CE3EFE12BB5));
		return;
	}

IL_0016:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7));
		goto IL_0042;
	}

IL_0042:
	{
		int32_t L_4 = ___1_start;
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_5 = ___0_array;
		NullCheck(L_5);
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)(((RuntimeArray*)L_5)->max_length))))))
		{
			goto IL_0050;
		}
	}
	{
		int32_t L_6 = ___2_length;
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_7 = ___0_array;
		NullCheck(L_7);
		int32_t L_8 = ___1_start;
		if ((!(((uint32_t)L_6) > ((uint32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_7)->max_length)), L_8))))))
		{
			goto IL_0055;
		}
	}

IL_0050:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_0055:
	{
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_9 = ___0_array;
		NullCheck((RuntimeArray*)L_9);
		uint8_t* L_10;
		L_10 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_9, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_11;
		L_11 = il2cpp_unsafe_as_ref<Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7>(L_10);
		int32_t L_12 = ___1_start;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_13;
		L_13 = il2cpp_unsafe_add<Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7,int32_t>(L_11, L_12);
		ByReference_1_tC00E272CA69BF0EE3939D1F6DB60E788290A8313 L_14;
		memset((&L_14), 0, sizeof(L_14));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_14), L_13);
		__this->____pointer = L_14;
		int32_t L_15 = ___2_length;
		__this->____length = L_15;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1__ctor_m50C1AB8CF970B0E296CD917975C18DCB815D193B_gshared (Span_1_t176257933B4F95507A92292ED5363CE3EFE12BB5* __this, void* ___0_pointer, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		goto IL_0016;
	}

IL_0016:
	{
		int32_t L_0 = ___1_length;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_001f;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_001f:
	{
		void* L_1 = ___0_pointer;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_2;
		L_2 = il2cpp_unsafe_as_ref<Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7>((uint8_t*)L_1);
		ByReference_1_tC00E272CA69BF0EE3939D1F6DB60E788290A8313 L_3;
		memset((&L_3), 0, sizeof(L_3));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_3), L_2);
		__this->____pointer = L_3;
		int32_t L_4 = ___1_length;
		__this->____length = L_4;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1__ctor_m56BE0F54100AF7686F960CA4E18540A35B12420E_gshared (Span_1_t176257933B4F95507A92292ED5363CE3EFE12BB5* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_0 = ___0_ptr;
		ByReference_1_tC00E272CA69BF0EE3939D1F6DB60E788290A8313 L_1;
		memset((&L_1), 0, sizeof(L_1));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_1), L_0);
		__this->____pointer = L_1;
		int32_t L_2 = ___1_length;
		__this->____length = L_2;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* Span_1_get_Item_m7922C29DD6AD6F5538B02AEF310A87693B613C1B_gshared (Span_1_t176257933B4F95507A92292ED5363CE3EFE12BB5* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	ByReference_1_tC00E272CA69BF0EE3939D1F6DB60E788290A8313 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_index;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowIndexOutOfRangeException_m86F753A24E2765A35546BA6352A7E4F0BB8A66B5(NULL);
	}

IL_000e:
	{
		ByReference_1_tC00E272CA69BF0EE3939D1F6DB60E788290A8313 L_2 = __this->____pointer;
		V_0 = L_2;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_3;
		L_3 = IL2CPP_BY_REFERENCE_GET_VALUE(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7, (Il2CppByReference*)(&V_0));
		int32_t L_4 = ___0_index;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_5;
		L_5 = il2cpp_unsafe_add<Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7,int32_t>(L_3, L_4);
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* Span_1_GetPinnableReference_m38F959B29A2F632B0CA4808E2A43254C2F3F1909_gshared (Span_1_t176257933B4F95507A92292ED5363CE3EFE12BB5* __this, const RuntimeMethod* method) 
{
	ByReference_1_tC00E272CA69BF0EE3939D1F6DB60E788290A8313 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->____length;
		if (L_0)
		{
			goto IL_0010;
		}
	}
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_1;
		L_1 = il2cpp_unsafe_as_ref<Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7>((void*)((uintptr_t)0));
		return L_1;
	}

IL_0010:
	{
		ByReference_1_tC00E272CA69BF0EE3939D1F6DB60E788290A8313 L_2 = __this->____pointer;
		V_0 = L_2;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_3;
		L_3 = IL2CPP_BY_REFERENCE_GET_VALUE(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7, (Il2CppByReference*)(&V_0));
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1_Clear_m23EDA188CB4C8D35FE357FE4156D378DB59A0790_gshared (Span_1_t176257933B4F95507A92292ED5363CE3EFE12BB5* __this, const RuntimeMethod* method) 
{
	ByReference_1_tC00E272CA69BF0EE3939D1F6DB60E788290A8313 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		goto IL_0034;
	}

IL_0034:
	{
		ByReference_1_tC00E272CA69BF0EE3939D1F6DB60E788290A8313 L_0 = __this->____pointer;
		V_0 = L_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_1;
		L_1 = IL2CPP_BY_REFERENCE_GET_VALUE(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7, (Il2CppByReference*)(&V_0));
		uint8_t* L_2;
		L_2 = il2cpp_unsafe_as_ref<uint8_t>(L_1);
		int32_t L_3 = __this->____length;
		int32_t L_4;
		L_4 = il2cpp_unsafe_sizeof<Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7>();
		SpanHelpers_ClearWithoutReferences_m65DB2925AE7A5FF88BB3EA1BF90513C9ADF0653D(L_2, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_3), ((int64_t)L_4))), NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1_Fill_mB6442ABF2572024464E692A429812C329CAA45D7_gshared (Span_1_t176257933B4F95507A92292ED5363CE3EFE12BB5* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_value, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_1;
	memset((&V_1), 0, sizeof(V_1));
	ByReference_1_tC00E272CA69BF0EE3939D1F6DB60E788290A8313 V_2;
	memset((&V_2), 0, sizeof(V_2));
	uint64_t V_3 = 0;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* V_4 = NULL;
	uint64_t V_5 = 0;
	uint64_t V_6 = 0;
	{
		int32_t L_0;
		L_0 = il2cpp_unsafe_sizeof<Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7>();
		if ((!(((uint32_t)L_0) == ((uint32_t)1))))
		{
			goto IL_0037;
		}
	}
	{
		int32_t L_1 = __this->____length;
		V_0 = (uint32_t)L_1;
		uint32_t L_2 = V_0;
		if (L_2)
		{
			goto IL_0013;
		}
	}
	{
		return;
	}

IL_0013:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3 = ___0_value;
		V_1 = L_3;
		ByReference_1_tC00E272CA69BF0EE3939D1F6DB60E788290A8313 L_4 = __this->____pointer;
		V_2 = L_4;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_5;
		L_5 = IL2CPP_BY_REFERENCE_GET_VALUE(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7, (Il2CppByReference*)(&V_2));
		uint8_t* L_6;
		L_6 = il2cpp_unsafe_as_ref<uint8_t>(L_5);
		uint8_t* L_7;
		L_7 = il2cpp_unsafe_as_ref<uint8_t>((&V_1));
		int32_t L_8 = *((uint8_t*)L_7);
		uint32_t L_9 = V_0;
		Unsafe_InitBlockUnaligned_m6F2353EB9ABC9320E61629FAEE23948C80BFF03A(L_6, (uint8_t)L_8, L_9, NULL);
		return;
	}

IL_0037:
	{
		int32_t L_10 = __this->____length;
		V_3 = (uint64_t)((int64_t)(uint64_t)((uint32_t)L_10));
		uint64_t L_11 = V_3;
		if (L_11)
		{
			goto IL_0043;
		}
	}
	{
		return;
	}

IL_0043:
	{
		ByReference_1_tC00E272CA69BF0EE3939D1F6DB60E788290A8313 L_12 = __this->____pointer;
		V_2 = L_12;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_13;
		L_13 = IL2CPP_BY_REFERENCE_GET_VALUE(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7, (Il2CppByReference*)(&V_2));
		V_4 = L_13;
		int32_t L_14;
		L_14 = il2cpp_unsafe_sizeof<Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7>();
		V_5 = (uint64_t)((int64_t)(uint64_t)((uint32_t)L_14));
		V_6 = (uint64_t)((int64_t)0);
		goto IL_0110;
	}

IL_0064:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_15 = V_4;
		uint64_t L_16 = V_6;
		uint64_t L_17 = V_5;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_18;
		L_18 = il2cpp_unsafe_add_byte_offset<Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7,uint64_t>(L_15, (uint64_t)((int64_t)il2cpp_codegen_multiply((int64_t)L_16, (int64_t)L_17)));
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_19 = ___0_value;
		*(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*)L_18 = L_19;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_20 = V_4;
		uint64_t L_21 = V_6;
		uint64_t L_22 = V_5;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_23;
		L_23 = il2cpp_unsafe_add_byte_offset<Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7,uint64_t>(L_20, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_21, ((int64_t)1))), (int64_t)L_22)));
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_24 = ___0_value;
		*(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*)L_23 = L_24;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_25 = V_4;
		uint64_t L_26 = V_6;
		uint64_t L_27 = V_5;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_28;
		L_28 = il2cpp_unsafe_add_byte_offset<Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7,uint64_t>(L_25, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_26, ((int64_t)2))), (int64_t)L_27)));
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_29 = ___0_value;
		*(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*)L_28 = L_29;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_30 = V_4;
		uint64_t L_31 = V_6;
		uint64_t L_32 = V_5;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_33;
		L_33 = il2cpp_unsafe_add_byte_offset<Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7,uint64_t>(L_30, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_31, ((int64_t)3))), (int64_t)L_32)));
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_34 = ___0_value;
		*(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*)L_33 = L_34;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_35 = V_4;
		uint64_t L_36 = V_6;
		uint64_t L_37 = V_5;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_38;
		L_38 = il2cpp_unsafe_add_byte_offset<Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7,uint64_t>(L_35, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_36, ((int64_t)4))), (int64_t)L_37)));
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_39 = ___0_value;
		*(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*)L_38 = L_39;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_40 = V_4;
		uint64_t L_41 = V_6;
		uint64_t L_42 = V_5;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_43;
		L_43 = il2cpp_unsafe_add_byte_offset<Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7,uint64_t>(L_40, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_41, ((int64_t)5))), (int64_t)L_42)));
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_44 = ___0_value;
		*(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*)L_43 = L_44;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_45 = V_4;
		uint64_t L_46 = V_6;
		uint64_t L_47 = V_5;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_48;
		L_48 = il2cpp_unsafe_add_byte_offset<Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7,uint64_t>(L_45, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_46, ((int64_t)6))), (int64_t)L_47)));
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_49 = ___0_value;
		*(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*)L_48 = L_49;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_50 = V_4;
		uint64_t L_51 = V_6;
		uint64_t L_52 = V_5;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_53;
		L_53 = il2cpp_unsafe_add_byte_offset<Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7,uint64_t>(L_50, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_51, ((int64_t)7))), (int64_t)L_52)));
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_54 = ___0_value;
		*(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*)L_53 = L_54;
		uint64_t L_55 = V_6;
		V_6 = (uint64_t)((int64_t)il2cpp_codegen_add((int64_t)L_55, ((int64_t)8)));
	}

IL_0110:
	{
		uint64_t L_56 = V_6;
		uint64_t L_57 = V_3;
		if ((!(((uint64_t)L_56) >= ((uint64_t)((int64_t)((int64_t)L_57&((int64_t)((int32_t)-8))))))))
		{
			goto IL_0064;
		}
	}
	{
		uint64_t L_58 = V_6;
		uint64_t L_59 = V_3;
		if ((!(((uint64_t)L_58) < ((uint64_t)((int64_t)((int64_t)L_59&((int64_t)((int32_t)-4))))))))
		{
			goto IL_0198;
		}
	}
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_60 = V_4;
		uint64_t L_61 = V_6;
		uint64_t L_62 = V_5;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_63;
		L_63 = il2cpp_unsafe_add_byte_offset<Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7,uint64_t>(L_60, (uint64_t)((int64_t)il2cpp_codegen_multiply((int64_t)L_61, (int64_t)L_62)));
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_64 = ___0_value;
		*(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*)L_63 = L_64;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_65 = V_4;
		uint64_t L_66 = V_6;
		uint64_t L_67 = V_5;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_68;
		L_68 = il2cpp_unsafe_add_byte_offset<Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7,uint64_t>(L_65, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_66, ((int64_t)1))), (int64_t)L_67)));
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_69 = ___0_value;
		*(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*)L_68 = L_69;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_70 = V_4;
		uint64_t L_71 = V_6;
		uint64_t L_72 = V_5;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_73;
		L_73 = il2cpp_unsafe_add_byte_offset<Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7,uint64_t>(L_70, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_71, ((int64_t)2))), (int64_t)L_72)));
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_74 = ___0_value;
		*(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*)L_73 = L_74;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_75 = V_4;
		uint64_t L_76 = V_6;
		uint64_t L_77 = V_5;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_78;
		L_78 = il2cpp_unsafe_add_byte_offset<Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7,uint64_t>(L_75, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_76, ((int64_t)3))), (int64_t)L_77)));
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_79 = ___0_value;
		*(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*)L_78 = L_79;
		uint64_t L_80 = V_6;
		V_6 = (uint64_t)((int64_t)il2cpp_codegen_add((int64_t)L_80, ((int64_t)4)));
		goto IL_0198;
	}

IL_017f:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_81 = V_4;
		uint64_t L_82 = V_6;
		uint64_t L_83 = V_5;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_84;
		L_84 = il2cpp_unsafe_add_byte_offset<Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7,uint64_t>(L_81, (uint64_t)((int64_t)il2cpp_codegen_multiply((int64_t)L_82, (int64_t)L_83)));
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_85 = ___0_value;
		*(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*)L_84 = L_85;
		uint64_t L_86 = V_6;
		V_6 = (uint64_t)((int64_t)il2cpp_codegen_add((int64_t)L_86, ((int64_t)1)));
	}

IL_0198:
	{
		uint64_t L_87 = V_6;
		uint64_t L_88 = V_3;
		if ((!(((uint64_t)L_87) >= ((uint64_t)L_88))))
		{
			goto IL_017f;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1_CopyTo_mD459AF4C30451D2A2FFC5BC60AE00E34A40674D6_gshared (Span_1_t176257933B4F95507A92292ED5363CE3EFE12BB5* __this, Span_1_t176257933B4F95507A92292ED5363CE3EFE12BB5 ___0_destination, const RuntimeMethod* method) 
{
	ByReference_1_tC00E272CA69BF0EE3939D1F6DB60E788290A8313 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->____length;
		int32_t L_1;
		L_1 = Span_1_get_Length_mFBDFEEEF1A619162D612EC6564DE47BB0A018FD9_inline((&___0_destination), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 13));
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_0038;
		}
	}
	{
		Span_1_t176257933B4F95507A92292ED5363CE3EFE12BB5 L_2 = ___0_destination;
		ByReference_1_tC00E272CA69BF0EE3939D1F6DB60E788290A8313 L_3 = L_2.____pointer;
		V_0 = L_3;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_4;
		L_4 = IL2CPP_BY_REFERENCE_GET_VALUE(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7, (Il2CppByReference*)(&V_0));
		ByReference_1_tC00E272CA69BF0EE3939D1F6DB60E788290A8313 L_5 = __this->____pointer;
		V_0 = L_5;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7, (Il2CppByReference*)(&V_0));
		int32_t L_7 = __this->____length;
		Buffer_Memmove_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m121CA4B55102E3C616B73459B4EB23BEE8C327CB(L_4, L_6, (uint64_t)((int64_t)L_7), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 15));
		return;
	}

IL_0038:
	{
		ThrowHelper_ThrowArgumentException_DestinationTooShort_m6468934A3BBB67DBC5BAEF7A64D91BD5BBBB3D4D(NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Span_1_TryCopyTo_m1EB7E00A8CB10619B7C5320F7552188DFD901ED1_gshared (Span_1_t176257933B4F95507A92292ED5363CE3EFE12BB5* __this, Span_1_t176257933B4F95507A92292ED5363CE3EFE12BB5 ___0_destination, const RuntimeMethod* method) 
{
	bool V_0 = false;
	ByReference_1_tC00E272CA69BF0EE3939D1F6DB60E788290A8313 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		V_0 = (bool)0;
		int32_t L_0 = __this->____length;
		int32_t L_1;
		L_1 = Span_1_get_Length_mFBDFEEEF1A619162D612EC6564DE47BB0A018FD9_inline((&___0_destination), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 13));
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_003b;
		}
	}
	{
		Span_1_t176257933B4F95507A92292ED5363CE3EFE12BB5 L_2 = ___0_destination;
		ByReference_1_tC00E272CA69BF0EE3939D1F6DB60E788290A8313 L_3 = L_2.____pointer;
		V_1 = L_3;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_4;
		L_4 = IL2CPP_BY_REFERENCE_GET_VALUE(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7, (Il2CppByReference*)(&V_1));
		ByReference_1_tC00E272CA69BF0EE3939D1F6DB60E788290A8313 L_5 = __this->____pointer;
		V_1 = L_5;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7, (Il2CppByReference*)(&V_1));
		int32_t L_7 = __this->____length;
		Buffer_Memmove_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m121CA4B55102E3C616B73459B4EB23BEE8C327CB(L_4, L_6, (uint64_t)((int64_t)L_7), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 15));
		V_0 = (bool)1;
	}

IL_003b:
	{
		bool L_8 = V_0;
		return L_8;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_t30635DB490E7110B945ABB8301B19F8955AD4B64 Span_1_op_Implicit_mFF4CF6C646BD1388C5469609B35694481F190D34_gshared (Span_1_t176257933B4F95507A92292ED5363CE3EFE12BB5 ___0_span, const RuntimeMethod* method) 
{
	ByReference_1_tC00E272CA69BF0EE3939D1F6DB60E788290A8313 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Span_1_t176257933B4F95507A92292ED5363CE3EFE12BB5 L_0 = ___0_span;
		ByReference_1_tC00E272CA69BF0EE3939D1F6DB60E788290A8313 L_1 = L_0.____pointer;
		V_0 = L_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_2;
		L_2 = IL2CPP_BY_REFERENCE_GET_VALUE(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7, (Il2CppByReference*)(&V_0));
		Span_1_t176257933B4F95507A92292ED5363CE3EFE12BB5 L_3 = ___0_span;
		int32_t L_4 = L_3.____length;
		ReadOnlySpan_1_t30635DB490E7110B945ABB8301B19F8955AD4B64 L_5;
		memset((&L_5), 0, sizeof(L_5));
		ReadOnlySpan_1__ctor_m0FEF0E91D60DF5F8905D4DAB78CEB48CDF99EFAA_inline((&L_5), L_2, L_4, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 17));
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Span_1_ToString_m8BA75E501BB27747260AE8DD0BBC717C33B3D52F_gshared (Span_1_t176257933B4F95507A92292ED5363CE3EFE12BB5* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0DB46164953228904843938099AF66650313FEE5);
		s_Il2CppMethodInitialized = true;
	}
	Il2CppChar* V_0 = NULL;
	ByReference_1_tC00E272CA69BF0EE3939D1F6DB60E788290A8313 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 9)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.char_class->byval_arg) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		bool L_4;
		L_4 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_1, L_3, NULL);
		if (!L_4)
		{
			goto IL_003e;
		}
	}
	{
		ByReference_1_tC00E272CA69BF0EE3939D1F6DB60E788290A8313 L_5 = __this->____pointer;
		V_1 = L_5;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7, (Il2CppByReference*)(&V_1));
		Il2CppChar* L_7;
		L_7 = il2cpp_unsafe_as_ref<Il2CppChar>(L_6);
		V_0 = L_7;
		Il2CppChar* L_8 = V_0;
		int32_t L_9 = __this->____length;
		String_t* L_10;
		L_10 = String_CreateString_m3F8794FEB452558B8A68C65E1F0B603B3D94E0E2(NULL, (Il2CppChar*)((uintptr_t)L_8), 0, L_9, NULL);
		return L_10;
	}

IL_003e:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_11 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 9)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_12;
		L_12 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_11, NULL);
		NullCheck((MemberInfo_t*)L_12);
		String_t* L_13;
		L_13 = VirtualFuncInvoker0< String_t* >::Invoke(8, (MemberInfo_t*)L_12);
		int32_t L_14 = __this->____length;
		int32_t L_15 = L_14;
		RuntimeObject* L_16 = Box(il2cpp_defaults.int32_class, &L_15);
		String_t* L_17;
		L_17 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(_stringLiteral0DB46164953228904843938099AF66650313FEE5, (RuntimeObject*)L_13, L_16, NULL);
		return L_17;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Span_1_t176257933B4F95507A92292ED5363CE3EFE12BB5 Span_1_Slice_m3BEF57FA4B42A4B9D97C73BD248E636F043D73D7_gshared (Span_1_t176257933B4F95507A92292ED5363CE3EFE12BB5* __this, int32_t ___0_start, const RuntimeMethod* method) 
{
	ByReference_1_tC00E272CA69BF0EE3939D1F6DB60E788290A8313 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_start;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) > ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_000e:
	{
		ByReference_1_tC00E272CA69BF0EE3939D1F6DB60E788290A8313 L_2 = __this->____pointer;
		V_0 = L_2;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_3;
		L_3 = IL2CPP_BY_REFERENCE_GET_VALUE(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7, (Il2CppByReference*)(&V_0));
		int32_t L_4 = ___0_start;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_5;
		L_5 = il2cpp_unsafe_add<Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7,int32_t>(L_3, L_4);
		int32_t L_6 = __this->____length;
		int32_t L_7 = ___0_start;
		Span_1_t176257933B4F95507A92292ED5363CE3EFE12BB5 L_8;
		memset((&L_8), 0, sizeof(L_8));
		Span_1__ctor_m56BE0F54100AF7686F960CA4E18540A35B12420E_inline((&L_8), L_5, ((int32_t)il2cpp_codegen_subtract(L_6, L_7)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 18));
		return L_8;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Span_1_t176257933B4F95507A92292ED5363CE3EFE12BB5 Span_1_Slice_m2CE72E2E7D6CBF7552506BAB0A542ADF2B073C84_gshared (Span_1_t176257933B4F95507A92292ED5363CE3EFE12BB5* __this, int32_t ___0_start, int32_t ___1_length, const RuntimeMethod* method) 
{
	ByReference_1_tC00E272CA69BF0EE3939D1F6DB60E788290A8313 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_start;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		int32_t L_2 = ___1_length;
		int32_t L_3 = __this->____length;
		int32_t L_4 = ___0_start;
		if ((!(((uint32_t)L_2) > ((uint32_t)((int32_t)il2cpp_codegen_subtract(L_3, L_4))))))
		{
			goto IL_0019;
		}
	}

IL_0014:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_0019:
	{
		ByReference_1_tC00E272CA69BF0EE3939D1F6DB60E788290A8313 L_5 = __this->____pointer;
		V_0 = L_5;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7, (Il2CppByReference*)(&V_0));
		int32_t L_7 = ___0_start;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_8;
		L_8 = il2cpp_unsafe_add<Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7,int32_t>(L_6, L_7);
		int32_t L_9 = ___1_length;
		Span_1_t176257933B4F95507A92292ED5363CE3EFE12BB5 L_10;
		memset((&L_10), 0, sizeof(L_10));
		Span_1__ctor_m56BE0F54100AF7686F960CA4E18540A35B12420E_inline((&L_10), L_8, L_9, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 18));
		return L_10;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* Span_1_ToArray_m32DA34FCDE6D7AB9EA941ABF7CE26FEE26AEA49C_gshared (Span_1_t176257933B4F95507A92292ED5363CE3EFE12BB5* __this, const RuntimeMethod* method) 
{
	ByReference_1_tC00E272CA69BF0EE3939D1F6DB60E788290A8313 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->____length;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_1;
		L_1 = Array_Empty_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_mD846707560FDEBAA9B2BE9F40C7BE2F42A59BAA9_inline(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 19));
		return L_1;
	}

IL_000e:
	{
		int32_t L_2 = __this->____length;
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_3 = (Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA*)(Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA*)SZArrayNew(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 20), (uint32_t)L_2);
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_4 = L_3;
		NullCheck((RuntimeArray*)L_4);
		uint8_t* L_5;
		L_5 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_4, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_6;
		L_6 = il2cpp_unsafe_as_ref<Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7>(L_5);
		ByReference_1_tC00E272CA69BF0EE3939D1F6DB60E788290A8313 L_7 = __this->____pointer;
		V_0 = L_7;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_8;
		L_8 = IL2CPP_BY_REFERENCE_GET_VALUE(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7, (Il2CppByReference*)(&V_0));
		int32_t L_9 = __this->____length;
		Buffer_Memmove_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m121CA4B55102E3C616B73459B4EB23BEE8C327CB(L_6, L_8, (uint64_t)((int64_t)L_9), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 15));
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Span_1_get_Length_mFBDFEEEF1A619162D612EC6564DE47BB0A018FD9_gshared (Span_1_t176257933B4F95507A92292ED5363CE3EFE12BB5* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____length;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Span_1_Equals_m2E85F7D3362C21B7B40F534C4961F7E625F6CD9A_gshared (Span_1_t176257933B4F95507A92292ED5363CE3EFE12BB5* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral69508A540AFD085A745316DD7D6345B1C8CC662D)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Span_1_GetHashCode_m34BC4ED94EC9796150BF4B171D9CEB22D4685775_gshared (Span_1_t176257933B4F95507A92292ED5363CE3EFE12BB5* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralECE618215BAC99C6FD12D8A273CC2118945EDCC8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Span_1_t176257933B4F95507A92292ED5363CE3EFE12BB5 Span_1_op_Implicit_mECFBEDE427C7F8B60CFE22C08246B66E1E62AB18_gshared (Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___0_array, const RuntimeMethod* method) 
{
	{
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_0 = ___0_array;
		Span_1_t176257933B4F95507A92292ED5363CE3EFE12BB5 L_1;
		memset((&L_1), 0, sizeof(L_1));
		Span_1__ctor_m0F2A60856E23C8A9DC58E03191363DF4E8A6F1B3_inline((&L_1), L_0, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 21));
		return L_1;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1__ctor_mCC34AC618271C9F9C196DA22BA5DB8C6D8AD477D_gshared (Span_1_t460D4E78469192619B0075C15897A6987393AAF9* __this, Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___0_array, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_000b;
		}
	}
	{
		il2cpp_codegen_initobj(__this, sizeof(Span_1_t460D4E78469192619B0075C15897A6987393AAF9));
		return;
	}

IL_000b:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2));
		goto IL_0037;
	}

IL_0037:
	{
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_2 = ___0_array;
		NullCheck((RuntimeArray*)L_2);
		uint8_t* L_3;
		L_3 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_2, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_4;
		L_4 = il2cpp_unsafe_as_ref<Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2>(L_3);
		ByReference_1_t81E3F5607EE2CA97897E6361C9CAE9862DC3DED6 L_5;
		memset((&L_5), 0, sizeof(L_5));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_5), L_4);
		__this->____pointer = L_5;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_6 = ___0_array;
		NullCheck(L_6);
		__this->____length = ((int32_t)(((RuntimeArray*)L_6)->max_length));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1__ctor_m8185F6B96EDF20580766D2EB6ACB212C7B2AF23C_gshared (Span_1_t460D4E78469192619B0075C15897A6987393AAF9* __this, Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___0_array, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		int32_t L_1 = ___1_start;
		if (L_1)
		{
			goto IL_0009;
		}
	}
	{
		int32_t L_2 = ___2_length;
		if (!L_2)
		{
			goto IL_000e;
		}
	}

IL_0009:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_000e:
	{
		il2cpp_codegen_initobj(__this, sizeof(Span_1_t460D4E78469192619B0075C15897A6987393AAF9));
		return;
	}

IL_0016:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2));
		goto IL_0042;
	}

IL_0042:
	{
		int32_t L_4 = ___1_start;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_5 = ___0_array;
		NullCheck(L_5);
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)(((RuntimeArray*)L_5)->max_length))))))
		{
			goto IL_0050;
		}
	}
	{
		int32_t L_6 = ___2_length;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_7 = ___0_array;
		NullCheck(L_7);
		int32_t L_8 = ___1_start;
		if ((!(((uint32_t)L_6) > ((uint32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_7)->max_length)), L_8))))))
		{
			goto IL_0055;
		}
	}

IL_0050:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_0055:
	{
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_9 = ___0_array;
		NullCheck((RuntimeArray*)L_9);
		uint8_t* L_10;
		L_10 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_9, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_11;
		L_11 = il2cpp_unsafe_as_ref<Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2>(L_10);
		int32_t L_12 = ___1_start;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_13;
		L_13 = il2cpp_unsafe_add<Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2,int32_t>(L_11, L_12);
		ByReference_1_t81E3F5607EE2CA97897E6361C9CAE9862DC3DED6 L_14;
		memset((&L_14), 0, sizeof(L_14));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_14), L_13);
		__this->____pointer = L_14;
		int32_t L_15 = ___2_length;
		__this->____length = L_15;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1__ctor_mCCDE317B7EF9509DB97AFE5968CF15240BB7DE03_gshared (Span_1_t460D4E78469192619B0075C15897A6987393AAF9* __this, void* ___0_pointer, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		goto IL_0016;
	}

IL_0016:
	{
		int32_t L_0 = ___1_length;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_001f;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_001f:
	{
		void* L_1 = ___0_pointer;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_2;
		L_2 = il2cpp_unsafe_as_ref<Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2>((uint8_t*)L_1);
		ByReference_1_t81E3F5607EE2CA97897E6361C9CAE9862DC3DED6 L_3;
		memset((&L_3), 0, sizeof(L_3));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_3), L_2);
		__this->____pointer = L_3;
		int32_t L_4 = ___1_length;
		__this->____length = L_4;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1__ctor_m150E0E8C32CF01F22FFC539541D9F6EA05DB6967_gshared (Span_1_t460D4E78469192619B0075C15897A6987393AAF9* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_0 = ___0_ptr;
		ByReference_1_t81E3F5607EE2CA97897E6361C9CAE9862DC3DED6 L_1;
		memset((&L_1), 0, sizeof(L_1));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_1), L_0);
		__this->____pointer = L_1;
		int32_t L_2 = ___1_length;
		__this->____length = L_2;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* Span_1_get_Item_m3314C5CC3CAE6E7D226566CE0DC46BC4C79DAC8F_gshared (Span_1_t460D4E78469192619B0075C15897A6987393AAF9* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	ByReference_1_t81E3F5607EE2CA97897E6361C9CAE9862DC3DED6 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_index;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowIndexOutOfRangeException_m86F753A24E2765A35546BA6352A7E4F0BB8A66B5(NULL);
	}

IL_000e:
	{
		ByReference_1_t81E3F5607EE2CA97897E6361C9CAE9862DC3DED6 L_2 = __this->____pointer;
		V_0 = L_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_3;
		L_3 = IL2CPP_BY_REFERENCE_GET_VALUE(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, (Il2CppByReference*)(&V_0));
		int32_t L_4 = ___0_index;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_5;
		L_5 = il2cpp_unsafe_add<Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2,int32_t>(L_3, L_4);
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* Span_1_GetPinnableReference_m6592220ED6E9E21535C79DAD2B5C7411440CE238_gshared (Span_1_t460D4E78469192619B0075C15897A6987393AAF9* __this, const RuntimeMethod* method) 
{
	ByReference_1_t81E3F5607EE2CA97897E6361C9CAE9862DC3DED6 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->____length;
		if (L_0)
		{
			goto IL_0010;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_1;
		L_1 = il2cpp_unsafe_as_ref<Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2>((void*)((uintptr_t)0));
		return L_1;
	}

IL_0010:
	{
		ByReference_1_t81E3F5607EE2CA97897E6361C9CAE9862DC3DED6 L_2 = __this->____pointer;
		V_0 = L_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_3;
		L_3 = IL2CPP_BY_REFERENCE_GET_VALUE(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, (Il2CppByReference*)(&V_0));
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1_Clear_m6E7824DAEA34E2FE4D5FCE78B65604233DC05050_gshared (Span_1_t460D4E78469192619B0075C15897A6987393AAF9* __this, const RuntimeMethod* method) 
{
	ByReference_1_t81E3F5607EE2CA97897E6361C9CAE9862DC3DED6 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		goto IL_0034;
	}

IL_0034:
	{
		ByReference_1_t81E3F5607EE2CA97897E6361C9CAE9862DC3DED6 L_0 = __this->____pointer;
		V_0 = L_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_1;
		L_1 = IL2CPP_BY_REFERENCE_GET_VALUE(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, (Il2CppByReference*)(&V_0));
		uint8_t* L_2;
		L_2 = il2cpp_unsafe_as_ref<uint8_t>(L_1);
		int32_t L_3 = __this->____length;
		int32_t L_4;
		L_4 = il2cpp_unsafe_sizeof<Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2>();
		SpanHelpers_ClearWithoutReferences_m65DB2925AE7A5FF88BB3EA1BF90513C9ADF0653D(L_2, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_3), ((int64_t)L_4))), NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1_Fill_m617F7A3B9E7E3B0C5C66871FBB8BC05D5190FD48_gshared (Span_1_t460D4E78469192619B0075C15897A6987393AAF9* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_value, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	ByReference_1_t81E3F5607EE2CA97897E6361C9CAE9862DC3DED6 V_2;
	memset((&V_2), 0, sizeof(V_2));
	uint64_t V_3 = 0;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* V_4 = NULL;
	uint64_t V_5 = 0;
	uint64_t V_6 = 0;
	{
		int32_t L_0;
		L_0 = il2cpp_unsafe_sizeof<Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2>();
		if ((!(((uint32_t)L_0) == ((uint32_t)1))))
		{
			goto IL_0037;
		}
	}
	{
		int32_t L_1 = __this->____length;
		V_0 = (uint32_t)L_1;
		uint32_t L_2 = V_0;
		if (L_2)
		{
			goto IL_0013;
		}
	}
	{
		return;
	}

IL_0013:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___0_value;
		V_1 = L_3;
		ByReference_1_t81E3F5607EE2CA97897E6361C9CAE9862DC3DED6 L_4 = __this->____pointer;
		V_2 = L_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_5;
		L_5 = IL2CPP_BY_REFERENCE_GET_VALUE(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, (Il2CppByReference*)(&V_2));
		uint8_t* L_6;
		L_6 = il2cpp_unsafe_as_ref<uint8_t>(L_5);
		uint8_t* L_7;
		L_7 = il2cpp_unsafe_as_ref<uint8_t>((&V_1));
		int32_t L_8 = *((uint8_t*)L_7);
		uint32_t L_9 = V_0;
		Unsafe_InitBlockUnaligned_m6F2353EB9ABC9320E61629FAEE23948C80BFF03A(L_6, (uint8_t)L_8, L_9, NULL);
		return;
	}

IL_0037:
	{
		int32_t L_10 = __this->____length;
		V_3 = (uint64_t)((int64_t)(uint64_t)((uint32_t)L_10));
		uint64_t L_11 = V_3;
		if (L_11)
		{
			goto IL_0043;
		}
	}
	{
		return;
	}

IL_0043:
	{
		ByReference_1_t81E3F5607EE2CA97897E6361C9CAE9862DC3DED6 L_12 = __this->____pointer;
		V_2 = L_12;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_13;
		L_13 = IL2CPP_BY_REFERENCE_GET_VALUE(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, (Il2CppByReference*)(&V_2));
		V_4 = L_13;
		int32_t L_14;
		L_14 = il2cpp_unsafe_sizeof<Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2>();
		V_5 = (uint64_t)((int64_t)(uint64_t)((uint32_t)L_14));
		V_6 = (uint64_t)((int64_t)0);
		goto IL_0110;
	}

IL_0064:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_15 = V_4;
		uint64_t L_16 = V_6;
		uint64_t L_17 = V_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_18;
		L_18 = il2cpp_unsafe_add_byte_offset<Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2,uint64_t>(L_15, (uint64_t)((int64_t)il2cpp_codegen_multiply((int64_t)L_16, (int64_t)L_17)));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_19 = ___0_value;
		*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)L_18 = L_19;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_20 = V_4;
		uint64_t L_21 = V_6;
		uint64_t L_22 = V_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_23;
		L_23 = il2cpp_unsafe_add_byte_offset<Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2,uint64_t>(L_20, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_21, ((int64_t)1))), (int64_t)L_22)));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_24 = ___0_value;
		*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)L_23 = L_24;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_25 = V_4;
		uint64_t L_26 = V_6;
		uint64_t L_27 = V_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_28;
		L_28 = il2cpp_unsafe_add_byte_offset<Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2,uint64_t>(L_25, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_26, ((int64_t)2))), (int64_t)L_27)));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_29 = ___0_value;
		*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)L_28 = L_29;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_30 = V_4;
		uint64_t L_31 = V_6;
		uint64_t L_32 = V_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_33;
		L_33 = il2cpp_unsafe_add_byte_offset<Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2,uint64_t>(L_30, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_31, ((int64_t)3))), (int64_t)L_32)));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_34 = ___0_value;
		*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)L_33 = L_34;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_35 = V_4;
		uint64_t L_36 = V_6;
		uint64_t L_37 = V_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_38;
		L_38 = il2cpp_unsafe_add_byte_offset<Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2,uint64_t>(L_35, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_36, ((int64_t)4))), (int64_t)L_37)));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_39 = ___0_value;
		*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)L_38 = L_39;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_40 = V_4;
		uint64_t L_41 = V_6;
		uint64_t L_42 = V_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_43;
		L_43 = il2cpp_unsafe_add_byte_offset<Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2,uint64_t>(L_40, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_41, ((int64_t)5))), (int64_t)L_42)));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_44 = ___0_value;
		*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)L_43 = L_44;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_45 = V_4;
		uint64_t L_46 = V_6;
		uint64_t L_47 = V_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_48;
		L_48 = il2cpp_unsafe_add_byte_offset<Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2,uint64_t>(L_45, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_46, ((int64_t)6))), (int64_t)L_47)));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_49 = ___0_value;
		*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)L_48 = L_49;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_50 = V_4;
		uint64_t L_51 = V_6;
		uint64_t L_52 = V_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_53;
		L_53 = il2cpp_unsafe_add_byte_offset<Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2,uint64_t>(L_50, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_51, ((int64_t)7))), (int64_t)L_52)));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_54 = ___0_value;
		*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)L_53 = L_54;
		uint64_t L_55 = V_6;
		V_6 = (uint64_t)((int64_t)il2cpp_codegen_add((int64_t)L_55, ((int64_t)8)));
	}

IL_0110:
	{
		uint64_t L_56 = V_6;
		uint64_t L_57 = V_3;
		if ((!(((uint64_t)L_56) >= ((uint64_t)((int64_t)((int64_t)L_57&((int64_t)((int32_t)-8))))))))
		{
			goto IL_0064;
		}
	}
	{
		uint64_t L_58 = V_6;
		uint64_t L_59 = V_3;
		if ((!(((uint64_t)L_58) < ((uint64_t)((int64_t)((int64_t)L_59&((int64_t)((int32_t)-4))))))))
		{
			goto IL_0198;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_60 = V_4;
		uint64_t L_61 = V_6;
		uint64_t L_62 = V_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_63;
		L_63 = il2cpp_unsafe_add_byte_offset<Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2,uint64_t>(L_60, (uint64_t)((int64_t)il2cpp_codegen_multiply((int64_t)L_61, (int64_t)L_62)));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_64 = ___0_value;
		*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)L_63 = L_64;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_65 = V_4;
		uint64_t L_66 = V_6;
		uint64_t L_67 = V_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_68;
		L_68 = il2cpp_unsafe_add_byte_offset<Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2,uint64_t>(L_65, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_66, ((int64_t)1))), (int64_t)L_67)));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_69 = ___0_value;
		*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)L_68 = L_69;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_70 = V_4;
		uint64_t L_71 = V_6;
		uint64_t L_72 = V_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_73;
		L_73 = il2cpp_unsafe_add_byte_offset<Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2,uint64_t>(L_70, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_71, ((int64_t)2))), (int64_t)L_72)));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_74 = ___0_value;
		*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)L_73 = L_74;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_75 = V_4;
		uint64_t L_76 = V_6;
		uint64_t L_77 = V_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_78;
		L_78 = il2cpp_unsafe_add_byte_offset<Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2,uint64_t>(L_75, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_76, ((int64_t)3))), (int64_t)L_77)));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_79 = ___0_value;
		*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)L_78 = L_79;
		uint64_t L_80 = V_6;
		V_6 = (uint64_t)((int64_t)il2cpp_codegen_add((int64_t)L_80, ((int64_t)4)));
		goto IL_0198;
	}

IL_017f:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_81 = V_4;
		uint64_t L_82 = V_6;
		uint64_t L_83 = V_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_84;
		L_84 = il2cpp_unsafe_add_byte_offset<Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2,uint64_t>(L_81, (uint64_t)((int64_t)il2cpp_codegen_multiply((int64_t)L_82, (int64_t)L_83)));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_85 = ___0_value;
		*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)L_84 = L_85;
		uint64_t L_86 = V_6;
		V_6 = (uint64_t)((int64_t)il2cpp_codegen_add((int64_t)L_86, ((int64_t)1)));
	}

IL_0198:
	{
		uint64_t L_87 = V_6;
		uint64_t L_88 = V_3;
		if ((!(((uint64_t)L_87) >= ((uint64_t)L_88))))
		{
			goto IL_017f;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1_CopyTo_m0F08E3E374BC97DFF1704281DD48947FD3C36583_gshared (Span_1_t460D4E78469192619B0075C15897A6987393AAF9* __this, Span_1_t460D4E78469192619B0075C15897A6987393AAF9 ___0_destination, const RuntimeMethod* method) 
{
	ByReference_1_t81E3F5607EE2CA97897E6361C9CAE9862DC3DED6 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->____length;
		int32_t L_1;
		L_1 = Span_1_get_Length_m556440A32F0A1EB65C95120CEC693B9AC4DFD52B_inline((&___0_destination), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 13));
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_0038;
		}
	}
	{
		Span_1_t460D4E78469192619B0075C15897A6987393AAF9 L_2 = ___0_destination;
		ByReference_1_t81E3F5607EE2CA97897E6361C9CAE9862DC3DED6 L_3 = L_2.____pointer;
		V_0 = L_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_4;
		L_4 = IL2CPP_BY_REFERENCE_GET_VALUE(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, (Il2CppByReference*)(&V_0));
		ByReference_1_t81E3F5607EE2CA97897E6361C9CAE9862DC3DED6 L_5 = __this->____pointer;
		V_0 = L_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, (Il2CppByReference*)(&V_0));
		int32_t L_7 = __this->____length;
		Buffer_Memmove_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m5E3924B178120F38353E13C8B4545C90C49D6CED(L_4, L_6, (uint64_t)((int64_t)L_7), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 15));
		return;
	}

IL_0038:
	{
		ThrowHelper_ThrowArgumentException_DestinationTooShort_m6468934A3BBB67DBC5BAEF7A64D91BD5BBBB3D4D(NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Span_1_TryCopyTo_mE22F2A768A1050E6BFB3CD8B4AEC7B819C991C36_gshared (Span_1_t460D4E78469192619B0075C15897A6987393AAF9* __this, Span_1_t460D4E78469192619B0075C15897A6987393AAF9 ___0_destination, const RuntimeMethod* method) 
{
	bool V_0 = false;
	ByReference_1_t81E3F5607EE2CA97897E6361C9CAE9862DC3DED6 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		V_0 = (bool)0;
		int32_t L_0 = __this->____length;
		int32_t L_1;
		L_1 = Span_1_get_Length_m556440A32F0A1EB65C95120CEC693B9AC4DFD52B_inline((&___0_destination), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 13));
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_003b;
		}
	}
	{
		Span_1_t460D4E78469192619B0075C15897A6987393AAF9 L_2 = ___0_destination;
		ByReference_1_t81E3F5607EE2CA97897E6361C9CAE9862DC3DED6 L_3 = L_2.____pointer;
		V_1 = L_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_4;
		L_4 = IL2CPP_BY_REFERENCE_GET_VALUE(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, (Il2CppByReference*)(&V_1));
		ByReference_1_t81E3F5607EE2CA97897E6361C9CAE9862DC3DED6 L_5 = __this->____pointer;
		V_1 = L_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, (Il2CppByReference*)(&V_1));
		int32_t L_7 = __this->____length;
		Buffer_Memmove_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m5E3924B178120F38353E13C8B4545C90C49D6CED(L_4, L_6, (uint64_t)((int64_t)L_7), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 15));
		V_0 = (bool)1;
	}

IL_003b:
	{
		bool L_8 = V_0;
		return L_8;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_t8C2C24B6B10C9EAC8D8A8C92BED569A12615C2AE Span_1_op_Implicit_m5D47150C8F313F781084C0B7AB26B085FA5BFA1D_gshared (Span_1_t460D4E78469192619B0075C15897A6987393AAF9 ___0_span, const RuntimeMethod* method) 
{
	ByReference_1_t81E3F5607EE2CA97897E6361C9CAE9862DC3DED6 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Span_1_t460D4E78469192619B0075C15897A6987393AAF9 L_0 = ___0_span;
		ByReference_1_t81E3F5607EE2CA97897E6361C9CAE9862DC3DED6 L_1 = L_0.____pointer;
		V_0 = L_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_2;
		L_2 = IL2CPP_BY_REFERENCE_GET_VALUE(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, (Il2CppByReference*)(&V_0));
		Span_1_t460D4E78469192619B0075C15897A6987393AAF9 L_3 = ___0_span;
		int32_t L_4 = L_3.____length;
		ReadOnlySpan_1_t8C2C24B6B10C9EAC8D8A8C92BED569A12615C2AE L_5;
		memset((&L_5), 0, sizeof(L_5));
		ReadOnlySpan_1__ctor_m682BD3D57C99591BB5B14A415A7F8F4D5B14241F_inline((&L_5), L_2, L_4, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 17));
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Span_1_ToString_mF3BF6D62DF3F7F4ADB18BC40C16BA8E73DABBBB9_gshared (Span_1_t460D4E78469192619B0075C15897A6987393AAF9* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0DB46164953228904843938099AF66650313FEE5);
		s_Il2CppMethodInitialized = true;
	}
	Il2CppChar* V_0 = NULL;
	ByReference_1_t81E3F5607EE2CA97897E6361C9CAE9862DC3DED6 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 9)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.char_class->byval_arg) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		bool L_4;
		L_4 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_1, L_3, NULL);
		if (!L_4)
		{
			goto IL_003e;
		}
	}
	{
		ByReference_1_t81E3F5607EE2CA97897E6361C9CAE9862DC3DED6 L_5 = __this->____pointer;
		V_1 = L_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, (Il2CppByReference*)(&V_1));
		Il2CppChar* L_7;
		L_7 = il2cpp_unsafe_as_ref<Il2CppChar>(L_6);
		V_0 = L_7;
		Il2CppChar* L_8 = V_0;
		int32_t L_9 = __this->____length;
		String_t* L_10;
		L_10 = String_CreateString_m3F8794FEB452558B8A68C65E1F0B603B3D94E0E2(NULL, (Il2CppChar*)((uintptr_t)L_8), 0, L_9, NULL);
		return L_10;
	}

IL_003e:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_11 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 9)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_12;
		L_12 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_11, NULL);
		NullCheck((MemberInfo_t*)L_12);
		String_t* L_13;
		L_13 = VirtualFuncInvoker0< String_t* >::Invoke(8, (MemberInfo_t*)L_12);
		int32_t L_14 = __this->____length;
		int32_t L_15 = L_14;
		RuntimeObject* L_16 = Box(il2cpp_defaults.int32_class, &L_15);
		String_t* L_17;
		L_17 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(_stringLiteral0DB46164953228904843938099AF66650313FEE5, (RuntimeObject*)L_13, L_16, NULL);
		return L_17;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Span_1_t460D4E78469192619B0075C15897A6987393AAF9 Span_1_Slice_mC6EDEB2937854A25EE8250D473E51F3B43A568D5_gshared (Span_1_t460D4E78469192619B0075C15897A6987393AAF9* __this, int32_t ___0_start, const RuntimeMethod* method) 
{
	ByReference_1_t81E3F5607EE2CA97897E6361C9CAE9862DC3DED6 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_start;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) > ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_000e:
	{
		ByReference_1_t81E3F5607EE2CA97897E6361C9CAE9862DC3DED6 L_2 = __this->____pointer;
		V_0 = L_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_3;
		L_3 = IL2CPP_BY_REFERENCE_GET_VALUE(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, (Il2CppByReference*)(&V_0));
		int32_t L_4 = ___0_start;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_5;
		L_5 = il2cpp_unsafe_add<Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2,int32_t>(L_3, L_4);
		int32_t L_6 = __this->____length;
		int32_t L_7 = ___0_start;
		Span_1_t460D4E78469192619B0075C15897A6987393AAF9 L_8;
		memset((&L_8), 0, sizeof(L_8));
		Span_1__ctor_m150E0E8C32CF01F22FFC539541D9F6EA05DB6967_inline((&L_8), L_5, ((int32_t)il2cpp_codegen_subtract(L_6, L_7)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 18));
		return L_8;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Span_1_t460D4E78469192619B0075C15897A6987393AAF9 Span_1_Slice_mEC63F7379D6B0247C3FAD97651111BEB91D13893_gshared (Span_1_t460D4E78469192619B0075C15897A6987393AAF9* __this, int32_t ___0_start, int32_t ___1_length, const RuntimeMethod* method) 
{
	ByReference_1_t81E3F5607EE2CA97897E6361C9CAE9862DC3DED6 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_start;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		int32_t L_2 = ___1_length;
		int32_t L_3 = __this->____length;
		int32_t L_4 = ___0_start;
		if ((!(((uint32_t)L_2) > ((uint32_t)((int32_t)il2cpp_codegen_subtract(L_3, L_4))))))
		{
			goto IL_0019;
		}
	}

IL_0014:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_0019:
	{
		ByReference_1_t81E3F5607EE2CA97897E6361C9CAE9862DC3DED6 L_5 = __this->____pointer;
		V_0 = L_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, (Il2CppByReference*)(&V_0));
		int32_t L_7 = ___0_start;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_8;
		L_8 = il2cpp_unsafe_add<Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2,int32_t>(L_6, L_7);
		int32_t L_9 = ___1_length;
		Span_1_t460D4E78469192619B0075C15897A6987393AAF9 L_10;
		memset((&L_10), 0, sizeof(L_10));
		Span_1__ctor_m150E0E8C32CF01F22FFC539541D9F6EA05DB6967_inline((&L_10), L_8, L_9, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 18));
		return L_10;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* Span_1_ToArray_m2E6BEE60BD48A117C372CF405F27139869922A06_gshared (Span_1_t460D4E78469192619B0075C15897A6987393AAF9* __this, const RuntimeMethod* method) 
{
	ByReference_1_t81E3F5607EE2CA97897E6361C9CAE9862DC3DED6 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->____length;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_1;
		L_1 = Array_Empty_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_mFE64AD477B9A8397B2CCC3FD2565DCA5B2F0A1F6_inline(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 19));
		return L_1;
	}

IL_000e:
	{
		int32_t L_2 = __this->____length;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_3 = (Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C*)(Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C*)SZArrayNew(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 20), (uint32_t)L_2);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_4 = L_3;
		NullCheck((RuntimeArray*)L_4);
		uint8_t* L_5;
		L_5 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_4, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_6;
		L_6 = il2cpp_unsafe_as_ref<Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2>(L_5);
		ByReference_1_t81E3F5607EE2CA97897E6361C9CAE9862DC3DED6 L_7 = __this->____pointer;
		V_0 = L_7;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_8;
		L_8 = IL2CPP_BY_REFERENCE_GET_VALUE(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, (Il2CppByReference*)(&V_0));
		int32_t L_9 = __this->____length;
		Buffer_Memmove_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m5E3924B178120F38353E13C8B4545C90C49D6CED(L_6, L_8, (uint64_t)((int64_t)L_9), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 15));
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Span_1_get_Length_m556440A32F0A1EB65C95120CEC693B9AC4DFD52B_gshared (Span_1_t460D4E78469192619B0075C15897A6987393AAF9* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____length;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Span_1_Equals_m16593C3984238ABD5B94D35774829B067CC1DBD0_gshared (Span_1_t460D4E78469192619B0075C15897A6987393AAF9* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral69508A540AFD085A745316DD7D6345B1C8CC662D)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Span_1_GetHashCode_m2159E9A9023A510BCD9320B5D5DDB55AC7389D3A_gshared (Span_1_t460D4E78469192619B0075C15897A6987393AAF9* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralECE618215BAC99C6FD12D8A273CC2118945EDCC8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Span_1_t460D4E78469192619B0075C15897A6987393AAF9 Span_1_op_Implicit_mA24A1765CD7932C77A7F028A1BECC4BFEF99B500_gshared (Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___0_array, const RuntimeMethod* method) 
{
	{
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_0 = ___0_array;
		Span_1_t460D4E78469192619B0075C15897A6987393AAF9 L_1;
		memset((&L_1), 0, sizeof(L_1));
		Span_1__ctor_mCC34AC618271C9F9C196DA22BA5DB8C6D8AD477D_inline((&L_1), L_0, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 21));
		return L_1;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1__ctor_mD3AD596A514C9F73EAFB0946FB4E0CCD88223C72_gshared (Span_1_t993DF21D9162C9A28F81991FA4EABACF87A3BAD1* __this, Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* ___0_array, const RuntimeMethod* method) 
{
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_000b;
		}
	}
	{
		il2cpp_codegen_initobj(__this, sizeof(Span_1_t993DF21D9162C9A28F81991FA4EABACF87A3BAD1));
		return;
	}

IL_000b:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3));
		goto IL_0037;
	}

IL_0037:
	{
		Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* L_2 = ___0_array;
		NullCheck((RuntimeArray*)L_2);
		uint8_t* L_3;
		L_3 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_2, NULL);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* L_4;
		L_4 = il2cpp_unsafe_as_ref<Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3>(L_3);
		ByReference_1_t4244D12B217F7C5BB8CD15E4BCAD5F8865A82C39 L_5;
		memset((&L_5), 0, sizeof(L_5));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_5), L_4);
		__this->____pointer = L_5;
		Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* L_6 = ___0_array;
		NullCheck(L_6);
		__this->____length = ((int32_t)(((RuntimeArray*)L_6)->max_length));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1__ctor_mBD13783731F5CE12D3824A742A6F37FF0EFBF139_gshared (Span_1_t993DF21D9162C9A28F81991FA4EABACF87A3BAD1* __this, Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* ___0_array, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method) 
{
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		int32_t L_1 = ___1_start;
		if (L_1)
		{
			goto IL_0009;
		}
	}
	{
		int32_t L_2 = ___2_length;
		if (!L_2)
		{
			goto IL_000e;
		}
	}

IL_0009:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_000e:
	{
		il2cpp_codegen_initobj(__this, sizeof(Span_1_t993DF21D9162C9A28F81991FA4EABACF87A3BAD1));
		return;
	}

IL_0016:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3));
		goto IL_0042;
	}

IL_0042:
	{
		int32_t L_4 = ___1_start;
		Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* L_5 = ___0_array;
		NullCheck(L_5);
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)(((RuntimeArray*)L_5)->max_length))))))
		{
			goto IL_0050;
		}
	}
	{
		int32_t L_6 = ___2_length;
		Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* L_7 = ___0_array;
		NullCheck(L_7);
		int32_t L_8 = ___1_start;
		if ((!(((uint32_t)L_6) > ((uint32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_7)->max_length)), L_8))))))
		{
			goto IL_0055;
		}
	}

IL_0050:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_0055:
	{
		Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* L_9 = ___0_array;
		NullCheck((RuntimeArray*)L_9);
		uint8_t* L_10;
		L_10 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_9, NULL);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* L_11;
		L_11 = il2cpp_unsafe_as_ref<Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3>(L_10);
		int32_t L_12 = ___1_start;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* L_13;
		L_13 = il2cpp_unsafe_add<Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3,int32_t>(L_11, L_12);
		ByReference_1_t4244D12B217F7C5BB8CD15E4BCAD5F8865A82C39 L_14;
		memset((&L_14), 0, sizeof(L_14));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_14), L_13);
		__this->____pointer = L_14;
		int32_t L_15 = ___2_length;
		__this->____length = L_15;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1__ctor_m35263B255C49C34B49026B8D2239D90D20A46BAE_gshared (Span_1_t993DF21D9162C9A28F81991FA4EABACF87A3BAD1* __this, void* ___0_pointer, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		goto IL_0016;
	}

IL_0016:
	{
		int32_t L_0 = ___1_length;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_001f;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_001f:
	{
		void* L_1 = ___0_pointer;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* L_2;
		L_2 = il2cpp_unsafe_as_ref<Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3>((uint8_t*)L_1);
		ByReference_1_t4244D12B217F7C5BB8CD15E4BCAD5F8865A82C39 L_3;
		memset((&L_3), 0, sizeof(L_3));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_3), L_2);
		__this->____pointer = L_3;
		int32_t L_4 = ___1_length;
		__this->____length = L_4;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1__ctor_m1E1947C8E67BCAA48B27C9C86207CD561C1B9B4B_gshared (Span_1_t993DF21D9162C9A28F81991FA4EABACF87A3BAD1* __this, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* L_0 = ___0_ptr;
		ByReference_1_t4244D12B217F7C5BB8CD15E4BCAD5F8865A82C39 L_1;
		memset((&L_1), 0, sizeof(L_1));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_1), L_0);
		__this->____pointer = L_1;
		int32_t L_2 = ___1_length;
		__this->____length = L_2;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* Span_1_get_Item_m2DFA2B85FB075E58BA5021D896690B31B690B80D_gshared (Span_1_t993DF21D9162C9A28F81991FA4EABACF87A3BAD1* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	ByReference_1_t4244D12B217F7C5BB8CD15E4BCAD5F8865A82C39 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_index;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowIndexOutOfRangeException_m86F753A24E2765A35546BA6352A7E4F0BB8A66B5(NULL);
	}

IL_000e:
	{
		ByReference_1_t4244D12B217F7C5BB8CD15E4BCAD5F8865A82C39 L_2 = __this->____pointer;
		V_0 = L_2;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* L_3;
		L_3 = IL2CPP_BY_REFERENCE_GET_VALUE(Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3, (Il2CppByReference*)(&V_0));
		int32_t L_4 = ___0_index;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* L_5;
		L_5 = il2cpp_unsafe_add<Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3,int32_t>(L_3, L_4);
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* Span_1_GetPinnableReference_mBF14517FF606BD747D2DD8885385789A26767C2F_gshared (Span_1_t993DF21D9162C9A28F81991FA4EABACF87A3BAD1* __this, const RuntimeMethod* method) 
{
	ByReference_1_t4244D12B217F7C5BB8CD15E4BCAD5F8865A82C39 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->____length;
		if (L_0)
		{
			goto IL_0010;
		}
	}
	{
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* L_1;
		L_1 = il2cpp_unsafe_as_ref<Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3>((void*)((uintptr_t)0));
		return L_1;
	}

IL_0010:
	{
		ByReference_1_t4244D12B217F7C5BB8CD15E4BCAD5F8865A82C39 L_2 = __this->____pointer;
		V_0 = L_2;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* L_3;
		L_3 = IL2CPP_BY_REFERENCE_GET_VALUE(Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3, (Il2CppByReference*)(&V_0));
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1_Clear_mA09977AEE1D388C1C3A3966A7151E911C47ECCF0_gshared (Span_1_t993DF21D9162C9A28F81991FA4EABACF87A3BAD1* __this, const RuntimeMethod* method) 
{
	ByReference_1_t4244D12B217F7C5BB8CD15E4BCAD5F8865A82C39 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		goto IL_0034;
	}

IL_0034:
	{
		ByReference_1_t4244D12B217F7C5BB8CD15E4BCAD5F8865A82C39 L_0 = __this->____pointer;
		V_0 = L_0;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* L_1;
		L_1 = IL2CPP_BY_REFERENCE_GET_VALUE(Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3, (Il2CppByReference*)(&V_0));
		uint8_t* L_2;
		L_2 = il2cpp_unsafe_as_ref<uint8_t>(L_1);
		int32_t L_3 = __this->____length;
		int32_t L_4;
		L_4 = il2cpp_unsafe_sizeof<Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3>();
		SpanHelpers_ClearWithoutReferences_m65DB2925AE7A5FF88BB3EA1BF90513C9ADF0653D(L_2, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_3), ((int64_t)L_4))), NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1_Fill_mBE7EC04AC3A0DC15DE392CD681C434F697A4EA64_gshared (Span_1_t993DF21D9162C9A28F81991FA4EABACF87A3BAD1* __this, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___0_value, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 V_1;
	memset((&V_1), 0, sizeof(V_1));
	ByReference_1_t4244D12B217F7C5BB8CD15E4BCAD5F8865A82C39 V_2;
	memset((&V_2), 0, sizeof(V_2));
	uint64_t V_3 = 0;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* V_4 = NULL;
	uint64_t V_5 = 0;
	uint64_t V_6 = 0;
	{
		int32_t L_0;
		L_0 = il2cpp_unsafe_sizeof<Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3>();
		if ((!(((uint32_t)L_0) == ((uint32_t)1))))
		{
			goto IL_0037;
		}
	}
	{
		int32_t L_1 = __this->____length;
		V_0 = (uint32_t)L_1;
		uint32_t L_2 = V_0;
		if (L_2)
		{
			goto IL_0013;
		}
	}
	{
		return;
	}

IL_0013:
	{
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_3 = ___0_value;
		V_1 = L_3;
		ByReference_1_t4244D12B217F7C5BB8CD15E4BCAD5F8865A82C39 L_4 = __this->____pointer;
		V_2 = L_4;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* L_5;
		L_5 = IL2CPP_BY_REFERENCE_GET_VALUE(Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3, (Il2CppByReference*)(&V_2));
		uint8_t* L_6;
		L_6 = il2cpp_unsafe_as_ref<uint8_t>(L_5);
		uint8_t* L_7;
		L_7 = il2cpp_unsafe_as_ref<uint8_t>((&V_1));
		int32_t L_8 = *((uint8_t*)L_7);
		uint32_t L_9 = V_0;
		Unsafe_InitBlockUnaligned_m6F2353EB9ABC9320E61629FAEE23948C80BFF03A(L_6, (uint8_t)L_8, L_9, NULL);
		return;
	}

IL_0037:
	{
		int32_t L_10 = __this->____length;
		V_3 = (uint64_t)((int64_t)(uint64_t)((uint32_t)L_10));
		uint64_t L_11 = V_3;
		if (L_11)
		{
			goto IL_0043;
		}
	}
	{
		return;
	}

IL_0043:
	{
		ByReference_1_t4244D12B217F7C5BB8CD15E4BCAD5F8865A82C39 L_12 = __this->____pointer;
		V_2 = L_12;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* L_13;
		L_13 = IL2CPP_BY_REFERENCE_GET_VALUE(Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3, (Il2CppByReference*)(&V_2));
		V_4 = L_13;
		int32_t L_14;
		L_14 = il2cpp_unsafe_sizeof<Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3>();
		V_5 = (uint64_t)((int64_t)(uint64_t)((uint32_t)L_14));
		V_6 = (uint64_t)((int64_t)0);
		goto IL_0110;
	}

IL_0064:
	{
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* L_15 = V_4;
		uint64_t L_16 = V_6;
		uint64_t L_17 = V_5;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* L_18;
		L_18 = il2cpp_unsafe_add_byte_offset<Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3,uint64_t>(L_15, (uint64_t)((int64_t)il2cpp_codegen_multiply((int64_t)L_16, (int64_t)L_17)));
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_19 = ___0_value;
		*(Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3*)L_18 = L_19;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* L_20 = V_4;
		uint64_t L_21 = V_6;
		uint64_t L_22 = V_5;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* L_23;
		L_23 = il2cpp_unsafe_add_byte_offset<Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3,uint64_t>(L_20, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_21, ((int64_t)1))), (int64_t)L_22)));
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_24 = ___0_value;
		*(Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3*)L_23 = L_24;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* L_25 = V_4;
		uint64_t L_26 = V_6;
		uint64_t L_27 = V_5;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* L_28;
		L_28 = il2cpp_unsafe_add_byte_offset<Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3,uint64_t>(L_25, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_26, ((int64_t)2))), (int64_t)L_27)));
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_29 = ___0_value;
		*(Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3*)L_28 = L_29;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* L_30 = V_4;
		uint64_t L_31 = V_6;
		uint64_t L_32 = V_5;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* L_33;
		L_33 = il2cpp_unsafe_add_byte_offset<Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3,uint64_t>(L_30, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_31, ((int64_t)3))), (int64_t)L_32)));
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_34 = ___0_value;
		*(Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3*)L_33 = L_34;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* L_35 = V_4;
		uint64_t L_36 = V_6;
		uint64_t L_37 = V_5;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* L_38;
		L_38 = il2cpp_unsafe_add_byte_offset<Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3,uint64_t>(L_35, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_36, ((int64_t)4))), (int64_t)L_37)));
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_39 = ___0_value;
		*(Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3*)L_38 = L_39;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* L_40 = V_4;
		uint64_t L_41 = V_6;
		uint64_t L_42 = V_5;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* L_43;
		L_43 = il2cpp_unsafe_add_byte_offset<Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3,uint64_t>(L_40, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_41, ((int64_t)5))), (int64_t)L_42)));
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_44 = ___0_value;
		*(Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3*)L_43 = L_44;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* L_45 = V_4;
		uint64_t L_46 = V_6;
		uint64_t L_47 = V_5;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* L_48;
		L_48 = il2cpp_unsafe_add_byte_offset<Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3,uint64_t>(L_45, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_46, ((int64_t)6))), (int64_t)L_47)));
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_49 = ___0_value;
		*(Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3*)L_48 = L_49;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* L_50 = V_4;
		uint64_t L_51 = V_6;
		uint64_t L_52 = V_5;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* L_53;
		L_53 = il2cpp_unsafe_add_byte_offset<Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3,uint64_t>(L_50, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_51, ((int64_t)7))), (int64_t)L_52)));
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_54 = ___0_value;
		*(Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3*)L_53 = L_54;
		uint64_t L_55 = V_6;
		V_6 = (uint64_t)((int64_t)il2cpp_codegen_add((int64_t)L_55, ((int64_t)8)));
	}

IL_0110:
	{
		uint64_t L_56 = V_6;
		uint64_t L_57 = V_3;
		if ((!(((uint64_t)L_56) >= ((uint64_t)((int64_t)((int64_t)L_57&((int64_t)((int32_t)-8))))))))
		{
			goto IL_0064;
		}
	}
	{
		uint64_t L_58 = V_6;
		uint64_t L_59 = V_3;
		if ((!(((uint64_t)L_58) < ((uint64_t)((int64_t)((int64_t)L_59&((int64_t)((int32_t)-4))))))))
		{
			goto IL_0198;
		}
	}
	{
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* L_60 = V_4;
		uint64_t L_61 = V_6;
		uint64_t L_62 = V_5;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* L_63;
		L_63 = il2cpp_unsafe_add_byte_offset<Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3,uint64_t>(L_60, (uint64_t)((int64_t)il2cpp_codegen_multiply((int64_t)L_61, (int64_t)L_62)));
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_64 = ___0_value;
		*(Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3*)L_63 = L_64;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* L_65 = V_4;
		uint64_t L_66 = V_6;
		uint64_t L_67 = V_5;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* L_68;
		L_68 = il2cpp_unsafe_add_byte_offset<Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3,uint64_t>(L_65, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_66, ((int64_t)1))), (int64_t)L_67)));
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_69 = ___0_value;
		*(Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3*)L_68 = L_69;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* L_70 = V_4;
		uint64_t L_71 = V_6;
		uint64_t L_72 = V_5;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* L_73;
		L_73 = il2cpp_unsafe_add_byte_offset<Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3,uint64_t>(L_70, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_71, ((int64_t)2))), (int64_t)L_72)));
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_74 = ___0_value;
		*(Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3*)L_73 = L_74;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* L_75 = V_4;
		uint64_t L_76 = V_6;
		uint64_t L_77 = V_5;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* L_78;
		L_78 = il2cpp_unsafe_add_byte_offset<Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3,uint64_t>(L_75, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_76, ((int64_t)3))), (int64_t)L_77)));
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_79 = ___0_value;
		*(Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3*)L_78 = L_79;
		uint64_t L_80 = V_6;
		V_6 = (uint64_t)((int64_t)il2cpp_codegen_add((int64_t)L_80, ((int64_t)4)));
		goto IL_0198;
	}

IL_017f:
	{
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* L_81 = V_4;
		uint64_t L_82 = V_6;
		uint64_t L_83 = V_5;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* L_84;
		L_84 = il2cpp_unsafe_add_byte_offset<Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3,uint64_t>(L_81, (uint64_t)((int64_t)il2cpp_codegen_multiply((int64_t)L_82, (int64_t)L_83)));
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_85 = ___0_value;
		*(Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3*)L_84 = L_85;
		uint64_t L_86 = V_6;
		V_6 = (uint64_t)((int64_t)il2cpp_codegen_add((int64_t)L_86, ((int64_t)1)));
	}

IL_0198:
	{
		uint64_t L_87 = V_6;
		uint64_t L_88 = V_3;
		if ((!(((uint64_t)L_87) >= ((uint64_t)L_88))))
		{
			goto IL_017f;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1_CopyTo_m670DC4E7C30A0C96F3B2B7612F36300AE7E90FDB_gshared (Span_1_t993DF21D9162C9A28F81991FA4EABACF87A3BAD1* __this, Span_1_t993DF21D9162C9A28F81991FA4EABACF87A3BAD1 ___0_destination, const RuntimeMethod* method) 
{
	ByReference_1_t4244D12B217F7C5BB8CD15E4BCAD5F8865A82C39 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->____length;
		int32_t L_1;
		L_1 = Span_1_get_Length_m63B951643F7F819BFFB479C5BA2A8052CC19650C_inline((&___0_destination), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 13));
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_0038;
		}
	}
	{
		Span_1_t993DF21D9162C9A28F81991FA4EABACF87A3BAD1 L_2 = ___0_destination;
		ByReference_1_t4244D12B217F7C5BB8CD15E4BCAD5F8865A82C39 L_3 = L_2.____pointer;
		V_0 = L_3;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* L_4;
		L_4 = IL2CPP_BY_REFERENCE_GET_VALUE(Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3, (Il2CppByReference*)(&V_0));
		ByReference_1_t4244D12B217F7C5BB8CD15E4BCAD5F8865A82C39 L_5 = __this->____pointer;
		V_0 = L_5;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3, (Il2CppByReference*)(&V_0));
		int32_t L_7 = __this->____length;
		Buffer_Memmove_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_m7C574D3870D087AA0B03CE7E94375833C6C6BC2C(L_4, L_6, (uint64_t)((int64_t)L_7), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 15));
		return;
	}

IL_0038:
	{
		ThrowHelper_ThrowArgumentException_DestinationTooShort_m6468934A3BBB67DBC5BAEF7A64D91BD5BBBB3D4D(NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Span_1_TryCopyTo_mD09579F8AC876D558285930EEBD15C694BAFDD55_gshared (Span_1_t993DF21D9162C9A28F81991FA4EABACF87A3BAD1* __this, Span_1_t993DF21D9162C9A28F81991FA4EABACF87A3BAD1 ___0_destination, const RuntimeMethod* method) 
{
	bool V_0 = false;
	ByReference_1_t4244D12B217F7C5BB8CD15E4BCAD5F8865A82C39 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		V_0 = (bool)0;
		int32_t L_0 = __this->____length;
		int32_t L_1;
		L_1 = Span_1_get_Length_m63B951643F7F819BFFB479C5BA2A8052CC19650C_inline((&___0_destination), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 13));
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_003b;
		}
	}
	{
		Span_1_t993DF21D9162C9A28F81991FA4EABACF87A3BAD1 L_2 = ___0_destination;
		ByReference_1_t4244D12B217F7C5BB8CD15E4BCAD5F8865A82C39 L_3 = L_2.____pointer;
		V_1 = L_3;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* L_4;
		L_4 = IL2CPP_BY_REFERENCE_GET_VALUE(Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3, (Il2CppByReference*)(&V_1));
		ByReference_1_t4244D12B217F7C5BB8CD15E4BCAD5F8865A82C39 L_5 = __this->____pointer;
		V_1 = L_5;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3, (Il2CppByReference*)(&V_1));
		int32_t L_7 = __this->____length;
		Buffer_Memmove_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_m7C574D3870D087AA0B03CE7E94375833C6C6BC2C(L_4, L_6, (uint64_t)((int64_t)L_7), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 15));
		V_0 = (bool)1;
	}

IL_003b:
	{
		bool L_8 = V_0;
		return L_8;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_tBB5A0F9CEA726E10BE8D59F79D891AC9218E61F6 Span_1_op_Implicit_mCB521CF5F0CBBAEB087B4C41C1C78DD0A2248B0D_gshared (Span_1_t993DF21D9162C9A28F81991FA4EABACF87A3BAD1 ___0_span, const RuntimeMethod* method) 
{
	ByReference_1_t4244D12B217F7C5BB8CD15E4BCAD5F8865A82C39 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Span_1_t993DF21D9162C9A28F81991FA4EABACF87A3BAD1 L_0 = ___0_span;
		ByReference_1_t4244D12B217F7C5BB8CD15E4BCAD5F8865A82C39 L_1 = L_0.____pointer;
		V_0 = L_1;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* L_2;
		L_2 = IL2CPP_BY_REFERENCE_GET_VALUE(Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3, (Il2CppByReference*)(&V_0));
		Span_1_t993DF21D9162C9A28F81991FA4EABACF87A3BAD1 L_3 = ___0_span;
		int32_t L_4 = L_3.____length;
		ReadOnlySpan_1_tBB5A0F9CEA726E10BE8D59F79D891AC9218E61F6 L_5;
		memset((&L_5), 0, sizeof(L_5));
		ReadOnlySpan_1__ctor_m622AB9D2827B0280526D71584B733E49B439579B_inline((&L_5), L_2, L_4, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 17));
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Span_1_ToString_m8050611093AAA741E5B0948A4DA294F80F36F5B0_gshared (Span_1_t993DF21D9162C9A28F81991FA4EABACF87A3BAD1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0DB46164953228904843938099AF66650313FEE5);
		s_Il2CppMethodInitialized = true;
	}
	Il2CppChar* V_0 = NULL;
	ByReference_1_t4244D12B217F7C5BB8CD15E4BCAD5F8865A82C39 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 9)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.char_class->byval_arg) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		bool L_4;
		L_4 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_1, L_3, NULL);
		if (!L_4)
		{
			goto IL_003e;
		}
	}
	{
		ByReference_1_t4244D12B217F7C5BB8CD15E4BCAD5F8865A82C39 L_5 = __this->____pointer;
		V_1 = L_5;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3, (Il2CppByReference*)(&V_1));
		Il2CppChar* L_7;
		L_7 = il2cpp_unsafe_as_ref<Il2CppChar>(L_6);
		V_0 = L_7;
		Il2CppChar* L_8 = V_0;
		int32_t L_9 = __this->____length;
		String_t* L_10;
		L_10 = String_CreateString_m3F8794FEB452558B8A68C65E1F0B603B3D94E0E2(NULL, (Il2CppChar*)((uintptr_t)L_8), 0, L_9, NULL);
		return L_10;
	}

IL_003e:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_11 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 9)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_12;
		L_12 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_11, NULL);
		NullCheck((MemberInfo_t*)L_12);
		String_t* L_13;
		L_13 = VirtualFuncInvoker0< String_t* >::Invoke(8, (MemberInfo_t*)L_12);
		int32_t L_14 = __this->____length;
		int32_t L_15 = L_14;
		RuntimeObject* L_16 = Box(il2cpp_defaults.int32_class, &L_15);
		String_t* L_17;
		L_17 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(_stringLiteral0DB46164953228904843938099AF66650313FEE5, (RuntimeObject*)L_13, L_16, NULL);
		return L_17;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Span_1_t993DF21D9162C9A28F81991FA4EABACF87A3BAD1 Span_1_Slice_mB9AF404874235AA4BEE8017E88A336EEA2E6301D_gshared (Span_1_t993DF21D9162C9A28F81991FA4EABACF87A3BAD1* __this, int32_t ___0_start, const RuntimeMethod* method) 
{
	ByReference_1_t4244D12B217F7C5BB8CD15E4BCAD5F8865A82C39 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_start;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) > ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_000e:
	{
		ByReference_1_t4244D12B217F7C5BB8CD15E4BCAD5F8865A82C39 L_2 = __this->____pointer;
		V_0 = L_2;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* L_3;
		L_3 = IL2CPP_BY_REFERENCE_GET_VALUE(Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3, (Il2CppByReference*)(&V_0));
		int32_t L_4 = ___0_start;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* L_5;
		L_5 = il2cpp_unsafe_add<Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3,int32_t>(L_3, L_4);
		int32_t L_6 = __this->____length;
		int32_t L_7 = ___0_start;
		Span_1_t993DF21D9162C9A28F81991FA4EABACF87A3BAD1 L_8;
		memset((&L_8), 0, sizeof(L_8));
		Span_1__ctor_m1E1947C8E67BCAA48B27C9C86207CD561C1B9B4B_inline((&L_8), L_5, ((int32_t)il2cpp_codegen_subtract(L_6, L_7)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 18));
		return L_8;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Span_1_t993DF21D9162C9A28F81991FA4EABACF87A3BAD1 Span_1_Slice_mC06C0132DC9F1F52318186B696F160B63C8C9C18_gshared (Span_1_t993DF21D9162C9A28F81991FA4EABACF87A3BAD1* __this, int32_t ___0_start, int32_t ___1_length, const RuntimeMethod* method) 
{
	ByReference_1_t4244D12B217F7C5BB8CD15E4BCAD5F8865A82C39 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_start;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		int32_t L_2 = ___1_length;
		int32_t L_3 = __this->____length;
		int32_t L_4 = ___0_start;
		if ((!(((uint32_t)L_2) > ((uint32_t)((int32_t)il2cpp_codegen_subtract(L_3, L_4))))))
		{
			goto IL_0019;
		}
	}

IL_0014:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_0019:
	{
		ByReference_1_t4244D12B217F7C5BB8CD15E4BCAD5F8865A82C39 L_5 = __this->____pointer;
		V_0 = L_5;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3, (Il2CppByReference*)(&V_0));
		int32_t L_7 = ___0_start;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* L_8;
		L_8 = il2cpp_unsafe_add<Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3,int32_t>(L_6, L_7);
		int32_t L_9 = ___1_length;
		Span_1_t993DF21D9162C9A28F81991FA4EABACF87A3BAD1 L_10;
		memset((&L_10), 0, sizeof(L_10));
		Span_1__ctor_m1E1947C8E67BCAA48B27C9C86207CD561C1B9B4B_inline((&L_10), L_8, L_9, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 18));
		return L_10;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* Span_1_ToArray_mBCD2D9E7C594EAF63CC33D62601F3BCEB8F9BA68_gshared (Span_1_t993DF21D9162C9A28F81991FA4EABACF87A3BAD1* __this, const RuntimeMethod* method) 
{
	ByReference_1_t4244D12B217F7C5BB8CD15E4BCAD5F8865A82C39 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->____length;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* L_1;
		L_1 = Array_Empty_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mC82FBEFAE1DCBACBA78974694D57EE7988F95DB8_inline(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 19));
		return L_1;
	}

IL_000e:
	{
		int32_t L_2 = __this->____length;
		Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* L_3 = (Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD*)(Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD*)SZArrayNew(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 20), (uint32_t)L_2);
		Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* L_4 = L_3;
		NullCheck((RuntimeArray*)L_4);
		uint8_t* L_5;
		L_5 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_4, NULL);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* L_6;
		L_6 = il2cpp_unsafe_as_ref<Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3>(L_5);
		ByReference_1_t4244D12B217F7C5BB8CD15E4BCAD5F8865A82C39 L_7 = __this->____pointer;
		V_0 = L_7;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* L_8;
		L_8 = IL2CPP_BY_REFERENCE_GET_VALUE(Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3, (Il2CppByReference*)(&V_0));
		int32_t L_9 = __this->____length;
		Buffer_Memmove_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_m7C574D3870D087AA0B03CE7E94375833C6C6BC2C(L_6, L_8, (uint64_t)((int64_t)L_9), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 15));
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Span_1_get_Length_m63B951643F7F819BFFB479C5BA2A8052CC19650C_gshared (Span_1_t993DF21D9162C9A28F81991FA4EABACF87A3BAD1* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____length;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Span_1_Equals_mF25ED9C4F124E1CA15E2A39394C815167ED64950_gshared (Span_1_t993DF21D9162C9A28F81991FA4EABACF87A3BAD1* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral69508A540AFD085A745316DD7D6345B1C8CC662D)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Span_1_GetHashCode_mD6046C7E35966467678B3A8D24D5074808C6B68F_gshared (Span_1_t993DF21D9162C9A28F81991FA4EABACF87A3BAD1* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralECE618215BAC99C6FD12D8A273CC2118945EDCC8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Span_1_t993DF21D9162C9A28F81991FA4EABACF87A3BAD1 Span_1_op_Implicit_m53CD60E0213B1955B43645EE79190E82F50D072A_gshared (Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* ___0_array, const RuntimeMethod* method) 
{
	{
		Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* L_0 = ___0_array;
		Span_1_t993DF21D9162C9A28F81991FA4EABACF87A3BAD1 L_1;
		memset((&L_1), 0, sizeof(L_1));
		Span_1__ctor_mD3AD596A514C9F73EAFB0946FB4E0CCD88223C72_inline((&L_1), L_0, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 21));
		return L_1;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1__ctor_m4F2AA40C13302936EB20ECE7DB8B903A2D0FE8DE_gshared (Span_1_tC33D382E526B4F8C6EDCA373AD4345BA58673D8E* __this, VertexU5BU5D_t2C3F4FF6AFD6D7E9DD7E1D69446FD8E8FC033185* ___0_array, const RuntimeMethod* method) 
{
	Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		VertexU5BU5D_t2C3F4FF6AFD6D7E9DD7E1D69446FD8E8FC033185* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_000b;
		}
	}
	{
		il2cpp_codegen_initobj(__this, sizeof(Span_1_tC33D382E526B4F8C6EDCA373AD4345BA58673D8E));
		return;
	}

IL_000b:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7));
		goto IL_0037;
	}

IL_0037:
	{
		VertexU5BU5D_t2C3F4FF6AFD6D7E9DD7E1D69446FD8E8FC033185* L_2 = ___0_array;
		NullCheck((RuntimeArray*)L_2);
		uint8_t* L_3;
		L_3 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_2, NULL);
		Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7* L_4;
		L_4 = il2cpp_unsafe_as_ref<Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7>(L_3);
		ByReference_1_tDB2E57963CDD5776F8F033EAE071CD9E7DB1359B L_5;
		memset((&L_5), 0, sizeof(L_5));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_5), L_4);
		__this->____pointer = L_5;
		VertexU5BU5D_t2C3F4FF6AFD6D7E9DD7E1D69446FD8E8FC033185* L_6 = ___0_array;
		NullCheck(L_6);
		__this->____length = ((int32_t)(((RuntimeArray*)L_6)->max_length));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1__ctor_m06831E23C56672EA4D78DF00D7F6F62EA45EF662_gshared (Span_1_tC33D382E526B4F8C6EDCA373AD4345BA58673D8E* __this, VertexU5BU5D_t2C3F4FF6AFD6D7E9DD7E1D69446FD8E8FC033185* ___0_array, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method) 
{
	Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		VertexU5BU5D_t2C3F4FF6AFD6D7E9DD7E1D69446FD8E8FC033185* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		int32_t L_1 = ___1_start;
		if (L_1)
		{
			goto IL_0009;
		}
	}
	{
		int32_t L_2 = ___2_length;
		if (!L_2)
		{
			goto IL_000e;
		}
	}

IL_0009:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_000e:
	{
		il2cpp_codegen_initobj(__this, sizeof(Span_1_tC33D382E526B4F8C6EDCA373AD4345BA58673D8E));
		return;
	}

IL_0016:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7));
		goto IL_0042;
	}

IL_0042:
	{
		int32_t L_4 = ___1_start;
		VertexU5BU5D_t2C3F4FF6AFD6D7E9DD7E1D69446FD8E8FC033185* L_5 = ___0_array;
		NullCheck(L_5);
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)(((RuntimeArray*)L_5)->max_length))))))
		{
			goto IL_0050;
		}
	}
	{
		int32_t L_6 = ___2_length;
		VertexU5BU5D_t2C3F4FF6AFD6D7E9DD7E1D69446FD8E8FC033185* L_7 = ___0_array;
		NullCheck(L_7);
		int32_t L_8 = ___1_start;
		if ((!(((uint32_t)L_6) > ((uint32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_7)->max_length)), L_8))))))
		{
			goto IL_0055;
		}
	}

IL_0050:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_0055:
	{
		VertexU5BU5D_t2C3F4FF6AFD6D7E9DD7E1D69446FD8E8FC033185* L_9 = ___0_array;
		NullCheck((RuntimeArray*)L_9);
		uint8_t* L_10;
		L_10 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_9, NULL);
		Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7* L_11;
		L_11 = il2cpp_unsafe_as_ref<Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7>(L_10);
		int32_t L_12 = ___1_start;
		Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7* L_13;
		L_13 = il2cpp_unsafe_add<Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7,int32_t>(L_11, L_12);
		ByReference_1_tDB2E57963CDD5776F8F033EAE071CD9E7DB1359B L_14;
		memset((&L_14), 0, sizeof(L_14));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_14), L_13);
		__this->____pointer = L_14;
		int32_t L_15 = ___2_length;
		__this->____length = L_15;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1__ctor_mEF79C6C7DC9343F4FB8969CC003E52010C7E12AA_gshared (Span_1_tC33D382E526B4F8C6EDCA373AD4345BA58673D8E* __this, void* ___0_pointer, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		goto IL_0016;
	}

IL_0016:
	{
		int32_t L_0 = ___1_length;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_001f;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_001f:
	{
		void* L_1 = ___0_pointer;
		Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7* L_2;
		L_2 = il2cpp_unsafe_as_ref<Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7>((uint8_t*)L_1);
		ByReference_1_tDB2E57963CDD5776F8F033EAE071CD9E7DB1359B L_3;
		memset((&L_3), 0, sizeof(L_3));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_3), L_2);
		__this->____pointer = L_3;
		int32_t L_4 = ___1_length;
		__this->____length = L_4;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1__ctor_m988929F65D47DD66BF1FE5A786F9CEC49F6BED29_gshared (Span_1_tC33D382E526B4F8C6EDCA373AD4345BA58673D8E* __this, Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7* L_0 = ___0_ptr;
		ByReference_1_tDB2E57963CDD5776F8F033EAE071CD9E7DB1359B L_1;
		memset((&L_1), 0, sizeof(L_1));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_1), L_0);
		__this->____pointer = L_1;
		int32_t L_2 = ___1_length;
		__this->____length = L_2;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7* Span_1_get_Item_mDCF9FBC3D51BDE6BD8F6AA9B9FA23F6C453CA18B_gshared (Span_1_tC33D382E526B4F8C6EDCA373AD4345BA58673D8E* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	ByReference_1_tDB2E57963CDD5776F8F033EAE071CD9E7DB1359B V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_index;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowIndexOutOfRangeException_m86F753A24E2765A35546BA6352A7E4F0BB8A66B5(NULL);
	}

IL_000e:
	{
		ByReference_1_tDB2E57963CDD5776F8F033EAE071CD9E7DB1359B L_2 = __this->____pointer;
		V_0 = L_2;
		Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7* L_3;
		L_3 = IL2CPP_BY_REFERENCE_GET_VALUE(Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7, (Il2CppByReference*)(&V_0));
		int32_t L_4 = ___0_index;
		Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7* L_5;
		L_5 = il2cpp_unsafe_add<Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7,int32_t>(L_3, L_4);
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7* Span_1_GetPinnableReference_m147BFB9D13CEC0AB0AEA5A65A972CE3E68038682_gshared (Span_1_tC33D382E526B4F8C6EDCA373AD4345BA58673D8E* __this, const RuntimeMethod* method) 
{
	ByReference_1_tDB2E57963CDD5776F8F033EAE071CD9E7DB1359B V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->____length;
		if (L_0)
		{
			goto IL_0010;
		}
	}
	{
		Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7* L_1;
		L_1 = il2cpp_unsafe_as_ref<Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7>((void*)((uintptr_t)0));
		return L_1;
	}

IL_0010:
	{
		ByReference_1_tDB2E57963CDD5776F8F033EAE071CD9E7DB1359B L_2 = __this->____pointer;
		V_0 = L_2;
		Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7* L_3;
		L_3 = IL2CPP_BY_REFERENCE_GET_VALUE(Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7, (Il2CppByReference*)(&V_0));
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1_Clear_m2372A7252AEEA68709EA75B228DE5051BDB2A700_gshared (Span_1_tC33D382E526B4F8C6EDCA373AD4345BA58673D8E* __this, const RuntimeMethod* method) 
{
	ByReference_1_tDB2E57963CDD5776F8F033EAE071CD9E7DB1359B V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		goto IL_0034;
	}

IL_0034:
	{
		ByReference_1_tDB2E57963CDD5776F8F033EAE071CD9E7DB1359B L_0 = __this->____pointer;
		V_0 = L_0;
		Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7* L_1;
		L_1 = IL2CPP_BY_REFERENCE_GET_VALUE(Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7, (Il2CppByReference*)(&V_0));
		uint8_t* L_2;
		L_2 = il2cpp_unsafe_as_ref<uint8_t>(L_1);
		int32_t L_3 = __this->____length;
		int32_t L_4;
		L_4 = il2cpp_unsafe_sizeof<Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7>();
		SpanHelpers_ClearWithoutReferences_m65DB2925AE7A5FF88BB3EA1BF90513C9ADF0653D(L_2, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_3), ((int64_t)L_4))), NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1_Fill_m4FBBB04AB56263245E6ACF39AD3F0E843C1481F1_gshared (Span_1_tC33D382E526B4F8C6EDCA373AD4345BA58673D8E* __this, Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7 ___0_value, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7 V_1;
	memset((&V_1), 0, sizeof(V_1));
	ByReference_1_tDB2E57963CDD5776F8F033EAE071CD9E7DB1359B V_2;
	memset((&V_2), 0, sizeof(V_2));
	uint64_t V_3 = 0;
	Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7* V_4 = NULL;
	uint64_t V_5 = 0;
	uint64_t V_6 = 0;
	{
		int32_t L_0;
		L_0 = il2cpp_unsafe_sizeof<Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7>();
		if ((!(((uint32_t)L_0) == ((uint32_t)1))))
		{
			goto IL_0037;
		}
	}
	{
		int32_t L_1 = __this->____length;
		V_0 = (uint32_t)L_1;
		uint32_t L_2 = V_0;
		if (L_2)
		{
			goto IL_0013;
		}
	}
	{
		return;
	}

IL_0013:
	{
		Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7 L_3 = ___0_value;
		V_1 = L_3;
		ByReference_1_tDB2E57963CDD5776F8F033EAE071CD9E7DB1359B L_4 = __this->____pointer;
		V_2 = L_4;
		Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7* L_5;
		L_5 = IL2CPP_BY_REFERENCE_GET_VALUE(Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7, (Il2CppByReference*)(&V_2));
		uint8_t* L_6;
		L_6 = il2cpp_unsafe_as_ref<uint8_t>(L_5);
		uint8_t* L_7;
		L_7 = il2cpp_unsafe_as_ref<uint8_t>((&V_1));
		int32_t L_8 = *((uint8_t*)L_7);
		uint32_t L_9 = V_0;
		Unsafe_InitBlockUnaligned_m6F2353EB9ABC9320E61629FAEE23948C80BFF03A(L_6, (uint8_t)L_8, L_9, NULL);
		return;
	}

IL_0037:
	{
		int32_t L_10 = __this->____length;
		V_3 = (uint64_t)((int64_t)(uint64_t)((uint32_t)L_10));
		uint64_t L_11 = V_3;
		if (L_11)
		{
			goto IL_0043;
		}
	}
	{
		return;
	}

IL_0043:
	{
		ByReference_1_tDB2E57963CDD5776F8F033EAE071CD9E7DB1359B L_12 = __this->____pointer;
		V_2 = L_12;
		Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7* L_13;
		L_13 = IL2CPP_BY_REFERENCE_GET_VALUE(Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7, (Il2CppByReference*)(&V_2));
		V_4 = L_13;
		int32_t L_14;
		L_14 = il2cpp_unsafe_sizeof<Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7>();
		V_5 = (uint64_t)((int64_t)(uint64_t)((uint32_t)L_14));
		V_6 = (uint64_t)((int64_t)0);
		goto IL_0110;
	}

IL_0064:
	{
		Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7* L_15 = V_4;
		uint64_t L_16 = V_6;
		uint64_t L_17 = V_5;
		Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7* L_18;
		L_18 = il2cpp_unsafe_add_byte_offset<Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7,uint64_t>(L_15, (uint64_t)((int64_t)il2cpp_codegen_multiply((int64_t)L_16, (int64_t)L_17)));
		Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7 L_19 = ___0_value;
		*(Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7*)L_18 = L_19;
		Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7* L_20 = V_4;
		uint64_t L_21 = V_6;
		uint64_t L_22 = V_5;
		Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7* L_23;
		L_23 = il2cpp_unsafe_add_byte_offset<Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7,uint64_t>(L_20, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_21, ((int64_t)1))), (int64_t)L_22)));
		Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7 L_24 = ___0_value;
		*(Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7*)L_23 = L_24;
		Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7* L_25 = V_4;
		uint64_t L_26 = V_6;
		uint64_t L_27 = V_5;
		Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7* L_28;
		L_28 = il2cpp_unsafe_add_byte_offset<Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7,uint64_t>(L_25, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_26, ((int64_t)2))), (int64_t)L_27)));
		Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7 L_29 = ___0_value;
		*(Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7*)L_28 = L_29;
		Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7* L_30 = V_4;
		uint64_t L_31 = V_6;
		uint64_t L_32 = V_5;
		Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7* L_33;
		L_33 = il2cpp_unsafe_add_byte_offset<Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7,uint64_t>(L_30, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_31, ((int64_t)3))), (int64_t)L_32)));
		Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7 L_34 = ___0_value;
		*(Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7*)L_33 = L_34;
		Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7* L_35 = V_4;
		uint64_t L_36 = V_6;
		uint64_t L_37 = V_5;
		Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7* L_38;
		L_38 = il2cpp_unsafe_add_byte_offset<Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7,uint64_t>(L_35, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_36, ((int64_t)4))), (int64_t)L_37)));
		Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7 L_39 = ___0_value;
		*(Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7*)L_38 = L_39;
		Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7* L_40 = V_4;
		uint64_t L_41 = V_6;
		uint64_t L_42 = V_5;
		Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7* L_43;
		L_43 = il2cpp_unsafe_add_byte_offset<Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7,uint64_t>(L_40, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_41, ((int64_t)5))), (int64_t)L_42)));
		Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7 L_44 = ___0_value;
		*(Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7*)L_43 = L_44;
		Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7* L_45 = V_4;
		uint64_t L_46 = V_6;
		uint64_t L_47 = V_5;
		Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7* L_48;
		L_48 = il2cpp_unsafe_add_byte_offset<Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7,uint64_t>(L_45, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_46, ((int64_t)6))), (int64_t)L_47)));
		Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7 L_49 = ___0_value;
		*(Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7*)L_48 = L_49;
		Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7* L_50 = V_4;
		uint64_t L_51 = V_6;
		uint64_t L_52 = V_5;
		Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7* L_53;
		L_53 = il2cpp_unsafe_add_byte_offset<Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7,uint64_t>(L_50, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_51, ((int64_t)7))), (int64_t)L_52)));
		Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7 L_54 = ___0_value;
		*(Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7*)L_53 = L_54;
		uint64_t L_55 = V_6;
		V_6 = (uint64_t)((int64_t)il2cpp_codegen_add((int64_t)L_55, ((int64_t)8)));
	}

IL_0110:
	{
		uint64_t L_56 = V_6;
		uint64_t L_57 = V_3;
		if ((!(((uint64_t)L_56) >= ((uint64_t)((int64_t)((int64_t)L_57&((int64_t)((int32_t)-8))))))))
		{
			goto IL_0064;
		}
	}
	{
		uint64_t L_58 = V_6;
		uint64_t L_59 = V_3;
		if ((!(((uint64_t)L_58) < ((uint64_t)((int64_t)((int64_t)L_59&((int64_t)((int32_t)-4))))))))
		{
			goto IL_0198;
		}
	}
	{
		Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7* L_60 = V_4;
		uint64_t L_61 = V_6;
		uint64_t L_62 = V_5;
		Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7* L_63;
		L_63 = il2cpp_unsafe_add_byte_offset<Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7,uint64_t>(L_60, (uint64_t)((int64_t)il2cpp_codegen_multiply((int64_t)L_61, (int64_t)L_62)));
		Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7 L_64 = ___0_value;
		*(Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7*)L_63 = L_64;
		Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7* L_65 = V_4;
		uint64_t L_66 = V_6;
		uint64_t L_67 = V_5;
		Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7* L_68;
		L_68 = il2cpp_unsafe_add_byte_offset<Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7,uint64_t>(L_65, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_66, ((int64_t)1))), (int64_t)L_67)));
		Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7 L_69 = ___0_value;
		*(Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7*)L_68 = L_69;
		Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7* L_70 = V_4;
		uint64_t L_71 = V_6;
		uint64_t L_72 = V_5;
		Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7* L_73;
		L_73 = il2cpp_unsafe_add_byte_offset<Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7,uint64_t>(L_70, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_71, ((int64_t)2))), (int64_t)L_72)));
		Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7 L_74 = ___0_value;
		*(Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7*)L_73 = L_74;
		Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7* L_75 = V_4;
		uint64_t L_76 = V_6;
		uint64_t L_77 = V_5;
		Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7* L_78;
		L_78 = il2cpp_unsafe_add_byte_offset<Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7,uint64_t>(L_75, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_76, ((int64_t)3))), (int64_t)L_77)));
		Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7 L_79 = ___0_value;
		*(Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7*)L_78 = L_79;
		uint64_t L_80 = V_6;
		V_6 = (uint64_t)((int64_t)il2cpp_codegen_add((int64_t)L_80, ((int64_t)4)));
		goto IL_0198;
	}

IL_017f:
	{
		Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7* L_81 = V_4;
		uint64_t L_82 = V_6;
		uint64_t L_83 = V_5;
		Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7* L_84;
		L_84 = il2cpp_unsafe_add_byte_offset<Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7,uint64_t>(L_81, (uint64_t)((int64_t)il2cpp_codegen_multiply((int64_t)L_82, (int64_t)L_83)));
		Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7 L_85 = ___0_value;
		*(Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7*)L_84 = L_85;
		uint64_t L_86 = V_6;
		V_6 = (uint64_t)((int64_t)il2cpp_codegen_add((int64_t)L_86, ((int64_t)1)));
	}

IL_0198:
	{
		uint64_t L_87 = V_6;
		uint64_t L_88 = V_3;
		if ((!(((uint64_t)L_87) >= ((uint64_t)L_88))))
		{
			goto IL_017f;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1_CopyTo_mF0608EBF8C2B920D53028305C0B2CAD0E8A6E201_gshared (Span_1_tC33D382E526B4F8C6EDCA373AD4345BA58673D8E* __this, Span_1_tC33D382E526B4F8C6EDCA373AD4345BA58673D8E ___0_destination, const RuntimeMethod* method) 
{
	ByReference_1_tDB2E57963CDD5776F8F033EAE071CD9E7DB1359B V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->____length;
		int32_t L_1;
		L_1 = Span_1_get_Length_m04EC398D32B0C4B1E3C1C9FC225757A0414FEC91_inline((&___0_destination), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 13));
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_0038;
		}
	}
	{
		Span_1_tC33D382E526B4F8C6EDCA373AD4345BA58673D8E L_2 = ___0_destination;
		ByReference_1_tDB2E57963CDD5776F8F033EAE071CD9E7DB1359B L_3 = L_2.____pointer;
		V_0 = L_3;
		Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7* L_4;
		L_4 = IL2CPP_BY_REFERENCE_GET_VALUE(Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7, (Il2CppByReference*)(&V_0));
		ByReference_1_tDB2E57963CDD5776F8F033EAE071CD9E7DB1359B L_5 = __this->____pointer;
		V_0 = L_5;
		Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7, (Il2CppByReference*)(&V_0));
		int32_t L_7 = __this->____length;
		Buffer_Memmove_TisVertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7_mB63FF1B03BD081ACDE9355ECF72840C863C44004(L_4, L_6, (uint64_t)((int64_t)L_7), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 15));
		return;
	}

IL_0038:
	{
		ThrowHelper_ThrowArgumentException_DestinationTooShort_m6468934A3BBB67DBC5BAEF7A64D91BD5BBBB3D4D(NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Span_1_TryCopyTo_m96724F8C8034471A55C18F3B678D773163724417_gshared (Span_1_tC33D382E526B4F8C6EDCA373AD4345BA58673D8E* __this, Span_1_tC33D382E526B4F8C6EDCA373AD4345BA58673D8E ___0_destination, const RuntimeMethod* method) 
{
	bool V_0 = false;
	ByReference_1_tDB2E57963CDD5776F8F033EAE071CD9E7DB1359B V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		V_0 = (bool)0;
		int32_t L_0 = __this->____length;
		int32_t L_1;
		L_1 = Span_1_get_Length_m04EC398D32B0C4B1E3C1C9FC225757A0414FEC91_inline((&___0_destination), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 13));
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_003b;
		}
	}
	{
		Span_1_tC33D382E526B4F8C6EDCA373AD4345BA58673D8E L_2 = ___0_destination;
		ByReference_1_tDB2E57963CDD5776F8F033EAE071CD9E7DB1359B L_3 = L_2.____pointer;
		V_1 = L_3;
		Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7* L_4;
		L_4 = IL2CPP_BY_REFERENCE_GET_VALUE(Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7, (Il2CppByReference*)(&V_1));
		ByReference_1_tDB2E57963CDD5776F8F033EAE071CD9E7DB1359B L_5 = __this->____pointer;
		V_1 = L_5;
		Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7, (Il2CppByReference*)(&V_1));
		int32_t L_7 = __this->____length;
		Buffer_Memmove_TisVertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7_mB63FF1B03BD081ACDE9355ECF72840C863C44004(L_4, L_6, (uint64_t)((int64_t)L_7), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 15));
		V_0 = (bool)1;
	}

IL_003b:
	{
		bool L_8 = V_0;
		return L_8;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_t63019D57052C95CA42C48E9757509354A8099A5A Span_1_op_Implicit_m16327BF53AEF3F89E406E1CC2C703928015B6890_gshared (Span_1_tC33D382E526B4F8C6EDCA373AD4345BA58673D8E ___0_span, const RuntimeMethod* method) 
{
	ByReference_1_tDB2E57963CDD5776F8F033EAE071CD9E7DB1359B V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Span_1_tC33D382E526B4F8C6EDCA373AD4345BA58673D8E L_0 = ___0_span;
		ByReference_1_tDB2E57963CDD5776F8F033EAE071CD9E7DB1359B L_1 = L_0.____pointer;
		V_0 = L_1;
		Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7* L_2;
		L_2 = IL2CPP_BY_REFERENCE_GET_VALUE(Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7, (Il2CppByReference*)(&V_0));
		Span_1_tC33D382E526B4F8C6EDCA373AD4345BA58673D8E L_3 = ___0_span;
		int32_t L_4 = L_3.____length;
		ReadOnlySpan_1_t63019D57052C95CA42C48E9757509354A8099A5A L_5;
		memset((&L_5), 0, sizeof(L_5));
		ReadOnlySpan_1__ctor_m7E238E2EA0773CDB439F87E732C9E7AD0CF67AEF_inline((&L_5), L_2, L_4, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 17));
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Span_1_ToString_m1FBAF18E11A99ED95CE3DDC9FB36EF28041556DE_gshared (Span_1_tC33D382E526B4F8C6EDCA373AD4345BA58673D8E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0DB46164953228904843938099AF66650313FEE5);
		s_Il2CppMethodInitialized = true;
	}
	Il2CppChar* V_0 = NULL;
	ByReference_1_tDB2E57963CDD5776F8F033EAE071CD9E7DB1359B V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 9)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.char_class->byval_arg) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		bool L_4;
		L_4 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_1, L_3, NULL);
		if (!L_4)
		{
			goto IL_003e;
		}
	}
	{
		ByReference_1_tDB2E57963CDD5776F8F033EAE071CD9E7DB1359B L_5 = __this->____pointer;
		V_1 = L_5;
		Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7, (Il2CppByReference*)(&V_1));
		Il2CppChar* L_7;
		L_7 = il2cpp_unsafe_as_ref<Il2CppChar>(L_6);
		V_0 = L_7;
		Il2CppChar* L_8 = V_0;
		int32_t L_9 = __this->____length;
		String_t* L_10;
		L_10 = String_CreateString_m3F8794FEB452558B8A68C65E1F0B603B3D94E0E2(NULL, (Il2CppChar*)((uintptr_t)L_8), 0, L_9, NULL);
		return L_10;
	}

IL_003e:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_11 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 9)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_12;
		L_12 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_11, NULL);
		NullCheck((MemberInfo_t*)L_12);
		String_t* L_13;
		L_13 = VirtualFuncInvoker0< String_t* >::Invoke(8, (MemberInfo_t*)L_12);
		int32_t L_14 = __this->____length;
		int32_t L_15 = L_14;
		RuntimeObject* L_16 = Box(il2cpp_defaults.int32_class, &L_15);
		String_t* L_17;
		L_17 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(_stringLiteral0DB46164953228904843938099AF66650313FEE5, (RuntimeObject*)L_13, L_16, NULL);
		return L_17;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Span_1_tC33D382E526B4F8C6EDCA373AD4345BA58673D8E Span_1_Slice_mAD1F3297ABB4BBB79ACE334B4DB85CAC21B052DC_gshared (Span_1_tC33D382E526B4F8C6EDCA373AD4345BA58673D8E* __this, int32_t ___0_start, const RuntimeMethod* method) 
{
	ByReference_1_tDB2E57963CDD5776F8F033EAE071CD9E7DB1359B V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_start;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) > ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_000e:
	{
		ByReference_1_tDB2E57963CDD5776F8F033EAE071CD9E7DB1359B L_2 = __this->____pointer;
		V_0 = L_2;
		Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7* L_3;
		L_3 = IL2CPP_BY_REFERENCE_GET_VALUE(Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7, (Il2CppByReference*)(&V_0));
		int32_t L_4 = ___0_start;
		Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7* L_5;
		L_5 = il2cpp_unsafe_add<Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7,int32_t>(L_3, L_4);
		int32_t L_6 = __this->____length;
		int32_t L_7 = ___0_start;
		Span_1_tC33D382E526B4F8C6EDCA373AD4345BA58673D8E L_8;
		memset((&L_8), 0, sizeof(L_8));
		Span_1__ctor_m988929F65D47DD66BF1FE5A786F9CEC49F6BED29_inline((&L_8), L_5, ((int32_t)il2cpp_codegen_subtract(L_6, L_7)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 18));
		return L_8;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Span_1_tC33D382E526B4F8C6EDCA373AD4345BA58673D8E Span_1_Slice_m9E1F23C1A013A7D34E89EFFEE4803D23B0DC15E3_gshared (Span_1_tC33D382E526B4F8C6EDCA373AD4345BA58673D8E* __this, int32_t ___0_start, int32_t ___1_length, const RuntimeMethod* method) 
{
	ByReference_1_tDB2E57963CDD5776F8F033EAE071CD9E7DB1359B V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_start;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		int32_t L_2 = ___1_length;
		int32_t L_3 = __this->____length;
		int32_t L_4 = ___0_start;
		if ((!(((uint32_t)L_2) > ((uint32_t)((int32_t)il2cpp_codegen_subtract(L_3, L_4))))))
		{
			goto IL_0019;
		}
	}

IL_0014:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_0019:
	{
		ByReference_1_tDB2E57963CDD5776F8F033EAE071CD9E7DB1359B L_5 = __this->____pointer;
		V_0 = L_5;
		Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7, (Il2CppByReference*)(&V_0));
		int32_t L_7 = ___0_start;
		Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7* L_8;
		L_8 = il2cpp_unsafe_add<Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7,int32_t>(L_6, L_7);
		int32_t L_9 = ___1_length;
		Span_1_tC33D382E526B4F8C6EDCA373AD4345BA58673D8E L_10;
		memset((&L_10), 0, sizeof(L_10));
		Span_1__ctor_m988929F65D47DD66BF1FE5A786F9CEC49F6BED29_inline((&L_10), L_8, L_9, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 18));
		return L_10;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR VertexU5BU5D_t2C3F4FF6AFD6D7E9DD7E1D69446FD8E8FC033185* Span_1_ToArray_mFAFB9D6B36B8BDA94666446105B77C9AF96A779E_gshared (Span_1_tC33D382E526B4F8C6EDCA373AD4345BA58673D8E* __this, const RuntimeMethod* method) 
{
	ByReference_1_tDB2E57963CDD5776F8F033EAE071CD9E7DB1359B V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->____length;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		VertexU5BU5D_t2C3F4FF6AFD6D7E9DD7E1D69446FD8E8FC033185* L_1;
		L_1 = Array_Empty_TisVertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7_mF047DEE22BA81CA2272F392E9BFA291FA2E76093_inline(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 19));
		return L_1;
	}

IL_000e:
	{
		int32_t L_2 = __this->____length;
		VertexU5BU5D_t2C3F4FF6AFD6D7E9DD7E1D69446FD8E8FC033185* L_3 = (VertexU5BU5D_t2C3F4FF6AFD6D7E9DD7E1D69446FD8E8FC033185*)(VertexU5BU5D_t2C3F4FF6AFD6D7E9DD7E1D69446FD8E8FC033185*)SZArrayNew(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 20), (uint32_t)L_2);
		VertexU5BU5D_t2C3F4FF6AFD6D7E9DD7E1D69446FD8E8FC033185* L_4 = L_3;
		NullCheck((RuntimeArray*)L_4);
		uint8_t* L_5;
		L_5 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_4, NULL);
		Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7* L_6;
		L_6 = il2cpp_unsafe_as_ref<Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7>(L_5);
		ByReference_1_tDB2E57963CDD5776F8F033EAE071CD9E7DB1359B L_7 = __this->____pointer;
		V_0 = L_7;
		Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7* L_8;
		L_8 = IL2CPP_BY_REFERENCE_GET_VALUE(Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7, (Il2CppByReference*)(&V_0));
		int32_t L_9 = __this->____length;
		Buffer_Memmove_TisVertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7_mB63FF1B03BD081ACDE9355ECF72840C863C44004(L_6, L_8, (uint64_t)((int64_t)L_9), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 15));
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Span_1_get_Length_m04EC398D32B0C4B1E3C1C9FC225757A0414FEC91_gshared (Span_1_tC33D382E526B4F8C6EDCA373AD4345BA58673D8E* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____length;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Span_1_Equals_m8E8321725E1BA34CD15CAB7381D05072C26FE0A9_gshared (Span_1_tC33D382E526B4F8C6EDCA373AD4345BA58673D8E* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral69508A540AFD085A745316DD7D6345B1C8CC662D)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Span_1_GetHashCode_m926FF85A1F1EB6BD1BDF07DEB8FF866478409048_gshared (Span_1_tC33D382E526B4F8C6EDCA373AD4345BA58673D8E* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralECE618215BAC99C6FD12D8A273CC2118945EDCC8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Span_1_tC33D382E526B4F8C6EDCA373AD4345BA58673D8E Span_1_op_Implicit_m15EA7BE38DE10A60DFDCB14EF721D5CA7E185D30_gshared (VertexU5BU5D_t2C3F4FF6AFD6D7E9DD7E1D69446FD8E8FC033185* ___0_array, const RuntimeMethod* method) 
{
	{
		VertexU5BU5D_t2C3F4FF6AFD6D7E9DD7E1D69446FD8E8FC033185* L_0 = ___0_array;
		Span_1_tC33D382E526B4F8C6EDCA373AD4345BA58673D8E L_1;
		memset((&L_1), 0, sizeof(L_1));
		Span_1__ctor_m4F2AA40C13302936EB20ECE7DB8B903A2D0FE8DE_inline((&L_1), L_0, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 21));
		return L_1;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1__ctor_m528FFD264C3687974947130266E4DEEA1C5DEA82_gshared (Span_1_tA5C1C4A28024D89A0077601B805025F51EFEE6E0* __this, VertexAttributeDescriptorU5BU5D_t5D10E60612F12777F59B7E33939F9075DB0E02B2* ___0_array, const RuntimeMethod* method) 
{
	VertexAttributeDescriptor_tD4231FBF57335465D16308D2A18E8E83D36BFA76 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		VertexAttributeDescriptorU5BU5D_t5D10E60612F12777F59B7E33939F9075DB0E02B2* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_000b;
		}
	}
	{
		il2cpp_codegen_initobj(__this, sizeof(Span_1_tA5C1C4A28024D89A0077601B805025F51EFEE6E0));
		return;
	}

IL_000b:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(VertexAttributeDescriptor_tD4231FBF57335465D16308D2A18E8E83D36BFA76));
		goto IL_0037;
	}

IL_0037:
	{
		VertexAttributeDescriptorU5BU5D_t5D10E60612F12777F59B7E33939F9075DB0E02B2* L_2 = ___0_array;
		NullCheck((RuntimeArray*)L_2);
		uint8_t* L_3;
		L_3 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_2, NULL);
		VertexAttributeDescriptor_tD4231FBF57335465D16308D2A18E8E83D36BFA76* L_4;
		L_4 = il2cpp_unsafe_as_ref<VertexAttributeDescriptor_tD4231FBF57335465D16308D2A18E8E83D36BFA76>(L_3);
		ByReference_1_tA646A142C83B2DEAE35CC1909169EA19C12201DC L_5;
		memset((&L_5), 0, sizeof(L_5));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_5), L_4);
		__this->____pointer = L_5;
		VertexAttributeDescriptorU5BU5D_t5D10E60612F12777F59B7E33939F9075DB0E02B2* L_6 = ___0_array;
		NullCheck(L_6);
		__this->____length = ((int32_t)(((RuntimeArray*)L_6)->max_length));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1__ctor_m1357D8100446DE1453D6048BA0C72F78C97763CA_gshared (Span_1_tA5C1C4A28024D89A0077601B805025F51EFEE6E0* __this, VertexAttributeDescriptorU5BU5D_t5D10E60612F12777F59B7E33939F9075DB0E02B2* ___0_array, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method) 
{
	VertexAttributeDescriptor_tD4231FBF57335465D16308D2A18E8E83D36BFA76 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		VertexAttributeDescriptorU5BU5D_t5D10E60612F12777F59B7E33939F9075DB0E02B2* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		int32_t L_1 = ___1_start;
		if (L_1)
		{
			goto IL_0009;
		}
	}
	{
		int32_t L_2 = ___2_length;
		if (!L_2)
		{
			goto IL_000e;
		}
	}

IL_0009:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_000e:
	{
		il2cpp_codegen_initobj(__this, sizeof(Span_1_tA5C1C4A28024D89A0077601B805025F51EFEE6E0));
		return;
	}

IL_0016:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(VertexAttributeDescriptor_tD4231FBF57335465D16308D2A18E8E83D36BFA76));
		goto IL_0042;
	}

IL_0042:
	{
		int32_t L_4 = ___1_start;
		VertexAttributeDescriptorU5BU5D_t5D10E60612F12777F59B7E33939F9075DB0E02B2* L_5 = ___0_array;
		NullCheck(L_5);
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)(((RuntimeArray*)L_5)->max_length))))))
		{
			goto IL_0050;
		}
	}
	{
		int32_t L_6 = ___2_length;
		VertexAttributeDescriptorU5BU5D_t5D10E60612F12777F59B7E33939F9075DB0E02B2* L_7 = ___0_array;
		NullCheck(L_7);
		int32_t L_8 = ___1_start;
		if ((!(((uint32_t)L_6) > ((uint32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_7)->max_length)), L_8))))))
		{
			goto IL_0055;
		}
	}

IL_0050:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_0055:
	{
		VertexAttributeDescriptorU5BU5D_t5D10E60612F12777F59B7E33939F9075DB0E02B2* L_9 = ___0_array;
		NullCheck((RuntimeArray*)L_9);
		uint8_t* L_10;
		L_10 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_9, NULL);
		VertexAttributeDescriptor_tD4231FBF57335465D16308D2A18E8E83D36BFA76* L_11;
		L_11 = il2cpp_unsafe_as_ref<VertexAttributeDescriptor_tD4231FBF57335465D16308D2A18E8E83D36BFA76>(L_10);
		int32_t L_12 = ___1_start;
		VertexAttributeDescriptor_tD4231FBF57335465D16308D2A18E8E83D36BFA76* L_13;
		L_13 = il2cpp_unsafe_add<VertexAttributeDescriptor_tD4231FBF57335465D16308D2A18E8E83D36BFA76,int32_t>(L_11, L_12);
		ByReference_1_tA646A142C83B2DEAE35CC1909169EA19C12201DC L_14;
		memset((&L_14), 0, sizeof(L_14));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_14), L_13);
		__this->____pointer = L_14;
		int32_t L_15 = ___2_length;
		__this->____length = L_15;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1__ctor_m7C69275E904D5F5E3D1FE6FEAA97AFE174F67D41_gshared (Span_1_tA5C1C4A28024D89A0077601B805025F51EFEE6E0* __this, void* ___0_pointer, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		goto IL_0016;
	}

IL_0016:
	{
		int32_t L_0 = ___1_length;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_001f;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_001f:
	{
		void* L_1 = ___0_pointer;
		VertexAttributeDescriptor_tD4231FBF57335465D16308D2A18E8E83D36BFA76* L_2;
		L_2 = il2cpp_unsafe_as_ref<VertexAttributeDescriptor_tD4231FBF57335465D16308D2A18E8E83D36BFA76>((uint8_t*)L_1);
		ByReference_1_tA646A142C83B2DEAE35CC1909169EA19C12201DC L_3;
		memset((&L_3), 0, sizeof(L_3));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_3), L_2);
		__this->____pointer = L_3;
		int32_t L_4 = ___1_length;
		__this->____length = L_4;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1__ctor_mA5A972B3B527C1A511260B7C1FBE95AE7ACD76B3_gshared (Span_1_tA5C1C4A28024D89A0077601B805025F51EFEE6E0* __this, VertexAttributeDescriptor_tD4231FBF57335465D16308D2A18E8E83D36BFA76* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		VertexAttributeDescriptor_tD4231FBF57335465D16308D2A18E8E83D36BFA76* L_0 = ___0_ptr;
		ByReference_1_tA646A142C83B2DEAE35CC1909169EA19C12201DC L_1;
		memset((&L_1), 0, sizeof(L_1));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_1), L_0);
		__this->____pointer = L_1;
		int32_t L_2 = ___1_length;
		__this->____length = L_2;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR VertexAttributeDescriptor_tD4231FBF57335465D16308D2A18E8E83D36BFA76* Span_1_get_Item_mA8597322C1894C0EFF75F28F1BE8BC753064CAA4_gshared (Span_1_tA5C1C4A28024D89A0077601B805025F51EFEE6E0* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	ByReference_1_tA646A142C83B2DEAE35CC1909169EA19C12201DC V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_index;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowIndexOutOfRangeException_m86F753A24E2765A35546BA6352A7E4F0BB8A66B5(NULL);
	}

IL_000e:
	{
		ByReference_1_tA646A142C83B2DEAE35CC1909169EA19C12201DC L_2 = __this->____pointer;
		V_0 = L_2;
		VertexAttributeDescriptor_tD4231FBF57335465D16308D2A18E8E83D36BFA76* L_3;
		L_3 = IL2CPP_BY_REFERENCE_GET_VALUE(VertexAttributeDescriptor_tD4231FBF57335465D16308D2A18E8E83D36BFA76, (Il2CppByReference*)(&V_0));
		int32_t L_4 = ___0_index;
		VertexAttributeDescriptor_tD4231FBF57335465D16308D2A18E8E83D36BFA76* L_5;
		L_5 = il2cpp_unsafe_add<VertexAttributeDescriptor_tD4231FBF57335465D16308D2A18E8E83D36BFA76,int32_t>(L_3, L_4);
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR VertexAttributeDescriptor_tD4231FBF57335465D16308D2A18E8E83D36BFA76* Span_1_GetPinnableReference_mC531A8FECF805F3772479F391D3E074B3265DBF2_gshared (Span_1_tA5C1C4A28024D89A0077601B805025F51EFEE6E0* __this, const RuntimeMethod* method) 
{
	ByReference_1_tA646A142C83B2DEAE35CC1909169EA19C12201DC V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->____length;
		if (L_0)
		{
			goto IL_0010;
		}
	}
	{
		VertexAttributeDescriptor_tD4231FBF57335465D16308D2A18E8E83D36BFA76* L_1;
		L_1 = il2cpp_unsafe_as_ref<VertexAttributeDescriptor_tD4231FBF57335465D16308D2A18E8E83D36BFA76>((void*)((uintptr_t)0));
		return L_1;
	}

IL_0010:
	{
		ByReference_1_tA646A142C83B2DEAE35CC1909169EA19C12201DC L_2 = __this->____pointer;
		V_0 = L_2;
		VertexAttributeDescriptor_tD4231FBF57335465D16308D2A18E8E83D36BFA76* L_3;
		L_3 = IL2CPP_BY_REFERENCE_GET_VALUE(VertexAttributeDescriptor_tD4231FBF57335465D16308D2A18E8E83D36BFA76, (Il2CppByReference*)(&V_0));
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1_Clear_m1CAC1DC9A99466D22AD7A15238B7BB77109F6CA1_gshared (Span_1_tA5C1C4A28024D89A0077601B805025F51EFEE6E0* __this, const RuntimeMethod* method) 
{
	ByReference_1_tA646A142C83B2DEAE35CC1909169EA19C12201DC V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		goto IL_0034;
	}

IL_0034:
	{
		ByReference_1_tA646A142C83B2DEAE35CC1909169EA19C12201DC L_0 = __this->____pointer;
		V_0 = L_0;
		VertexAttributeDescriptor_tD4231FBF57335465D16308D2A18E8E83D36BFA76* L_1;
		L_1 = IL2CPP_BY_REFERENCE_GET_VALUE(VertexAttributeDescriptor_tD4231FBF57335465D16308D2A18E8E83D36BFA76, (Il2CppByReference*)(&V_0));
		uint8_t* L_2;
		L_2 = il2cpp_unsafe_as_ref<uint8_t>(L_1);
		int32_t L_3 = __this->____length;
		int32_t L_4;
		L_4 = il2cpp_unsafe_sizeof<VertexAttributeDescriptor_tD4231FBF57335465D16308D2A18E8E83D36BFA76>();
		SpanHelpers_ClearWithoutReferences_m65DB2925AE7A5FF88BB3EA1BF90513C9ADF0653D(L_2, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_3), ((int64_t)L_4))), NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1_Fill_m53AD8A5A372FDB709BAB1D8EF9CB8E806B3AB2FF_gshared (Span_1_tA5C1C4A28024D89A0077601B805025F51EFEE6E0* __this, VertexAttributeDescriptor_tD4231FBF57335465D16308D2A18E8E83D36BFA76 ___0_value, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	VertexAttributeDescriptor_tD4231FBF57335465D16308D2A18E8E83D36BFA76 V_1;
	memset((&V_1), 0, sizeof(V_1));
	ByReference_1_tA646A142C83B2DEAE35CC1909169EA19C12201DC V_2;
	memset((&V_2), 0, sizeof(V_2));
	uint64_t V_3 = 0;
	VertexAttributeDescriptor_tD4231FBF57335465D16308D2A18E8E83D36BFA76* V_4 = NULL;
	uint64_t V_5 = 0;
	uint64_t V_6 = 0;
	{
		int32_t L_0;
		L_0 = il2cpp_unsafe_sizeof<VertexAttributeDescriptor_tD4231FBF57335465D16308D2A18E8E83D36BFA76>();
		if ((!(((uint32_t)L_0) == ((uint32_t)1))))
		{
			goto IL_0037;
		}
	}
	{
		int32_t L_1 = __this->____length;
		V_0 = (uint32_t)L_1;
		uint32_t L_2 = V_0;
		if (L_2)
		{
			goto IL_0013;
		}
	}
	{
		return;
	}

IL_0013:
	{
		VertexAttributeDescriptor_tD4231FBF57335465D16308D2A18E8E83D36BFA76 L_3 = ___0_value;
		V_1 = L_3;
		ByReference_1_tA646A142C83B2DEAE35CC1909169EA19C12201DC L_4 = __this->____pointer;
		V_2 = L_4;
		VertexAttributeDescriptor_tD4231FBF57335465D16308D2A18E8E83D36BFA76* L_5;
		L_5 = IL2CPP_BY_REFERENCE_GET_VALUE(VertexAttributeDescriptor_tD4231FBF57335465D16308D2A18E8E83D36BFA76, (Il2CppByReference*)(&V_2));
		uint8_t* L_6;
		L_6 = il2cpp_unsafe_as_ref<uint8_t>(L_5);
		uint8_t* L_7;
		L_7 = il2cpp_unsafe_as_ref<uint8_t>((&V_1));
		int32_t L_8 = *((uint8_t*)L_7);
		uint32_t L_9 = V_0;
		Unsafe_InitBlockUnaligned_m6F2353EB9ABC9320E61629FAEE23948C80BFF03A(L_6, (uint8_t)L_8, L_9, NULL);
		return;
	}

IL_0037:
	{
		int32_t L_10 = __this->____length;
		V_3 = (uint64_t)((int64_t)(uint64_t)((uint32_t)L_10));
		uint64_t L_11 = V_3;
		if (L_11)
		{
			goto IL_0043;
		}
	}
	{
		return;
	}

IL_0043:
	{
		ByReference_1_tA646A142C83B2DEAE35CC1909169EA19C12201DC L_12 = __this->____pointer;
		V_2 = L_12;
		VertexAttributeDescriptor_tD4231FBF57335465D16308D2A18E8E83D36BFA76* L_13;
		L_13 = IL2CPP_BY_REFERENCE_GET_VALUE(VertexAttributeDescriptor_tD4231FBF57335465D16308D2A18E8E83D36BFA76, (Il2CppByReference*)(&V_2));
		V_4 = L_13;
		int32_t L_14;
		L_14 = il2cpp_unsafe_sizeof<VertexAttributeDescriptor_tD4231FBF57335465D16308D2A18E8E83D36BFA76>();
		V_5 = (uint64_t)((int64_t)(uint64_t)((uint32_t)L_14));
		V_6 = (uint64_t)((int64_t)0);
		goto IL_0110;
	}

IL_0064:
	{
		VertexAttributeDescriptor_tD4231FBF57335465D16308D2A18E8E83D36BFA76* L_15 = V_4;
		uint64_t L_16 = V_6;
		uint64_t L_17 = V_5;
		VertexAttributeDescriptor_tD4231FBF57335465D16308D2A18E8E83D36BFA76* L_18;
		L_18 = il2cpp_unsafe_add_byte_offset<VertexAttributeDescriptor_tD4231FBF57335465D16308D2A18E8E83D36BFA76,uint64_t>(L_15, (uint64_t)((int64_t)il2cpp_codegen_multiply((int64_t)L_16, (int64_t)L_17)));
		VertexAttributeDescriptor_tD4231FBF57335465D16308D2A18E8E83D36BFA76 L_19 = ___0_value;
		*(VertexAttributeDescriptor_tD4231FBF57335465D16308D2A18E8E83D36BFA76*)L_18 = L_19;
		VertexAttributeDescriptor_tD4231FBF57335465D16308D2A18E8E83D36BFA76* L_20 = V_4;
		uint64_t L_21 = V_6;
		uint64_t L_22 = V_5;
		VertexAttributeDescriptor_tD4231FBF57335465D16308D2A18E8E83D36BFA76* L_23;
		L_23 = il2cpp_unsafe_add_byte_offset<VertexAttributeDescriptor_tD4231FBF57335465D16308D2A18E8E83D36BFA76,uint64_t>(L_20, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_21, ((int64_t)1))), (int64_t)L_22)));
		VertexAttributeDescriptor_tD4231FBF57335465D16308D2A18E8E83D36BFA76 L_24 = ___0_value;
		*(VertexAttributeDescriptor_tD4231FBF57335465D16308D2A18E8E83D36BFA76*)L_23 = L_24;
		VertexAttributeDescriptor_tD4231FBF57335465D16308D2A18E8E83D36BFA76* L_25 = V_4;
		uint64_t L_26 = V_6;
		uint64_t L_27 = V_5;
		VertexAttributeDescriptor_tD4231FBF57335465D16308D2A18E8E83D36BFA76* L_28;
		L_28 = il2cpp_unsafe_add_byte_offset<VertexAttributeDescriptor_tD4231FBF57335465D16308D2A18E8E83D36BFA76,uint64_t>(L_25, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_26, ((int64_t)2))), (int64_t)L_27)));
		VertexAttributeDescriptor_tD4231FBF57335465D16308D2A18E8E83D36BFA76 L_29 = ___0_value;
		*(VertexAttributeDescriptor_tD4231FBF57335465D16308D2A18E8E83D36BFA76*)L_28 = L_29;
		VertexAttributeDescriptor_tD4231FBF57335465D16308D2A18E8E83D36BFA76* L_30 = V_4;
		uint64_t L_31 = V_6;
		uint64_t L_32 = V_5;
		VertexAttributeDescriptor_tD4231FBF57335465D16308D2A18E8E83D36BFA76* L_33;
		L_33 = il2cpp_unsafe_add_byte_offset<VertexAttributeDescriptor_tD4231FBF57335465D16308D2A18E8E83D36BFA76,uint64_t>(L_30, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_31, ((int64_t)3))), (int64_t)L_32)));
		VertexAttributeDescriptor_tD4231FBF57335465D16308D2A18E8E83D36BFA76 L_34 = ___0_value;
		*(VertexAttributeDescriptor_tD4231FBF57335465D16308D2A18E8E83D36BFA76*)L_33 = L_34;
		VertexAttributeDescriptor_tD4231FBF57335465D16308D2A18E8E83D36BFA76* L_35 = V_4;
		uint64_t L_36 = V_6;
		uint64_t L_37 = V_5;
		VertexAttributeDescriptor_tD4231FBF57335465D16308D2A18E8E83D36BFA76* L_38;
		L_38 = il2cpp_unsafe_add_byte_offset<VertexAttributeDescriptor_tD4231FBF57335465D16308D2A18E8E83D36BFA76,uint64_t>(L_35, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_36, ((int64_t)4))), (int64_t)L_37)));
		VertexAttributeDescriptor_tD4231FBF57335465D16308D2A18E8E83D36BFA76 L_39 = ___0_value;
		*(VertexAttributeDescriptor_tD4231FBF57335465D16308D2A18E8E83D36BFA76*)L_38 = L_39;
		VertexAttributeDescriptor_tD4231FBF57335465D16308D2A18E8E83D36BFA76* L_40 = V_4;
		uint64_t L_41 = V_6;
		uint64_t L_42 = V_5;
		VertexAttributeDescriptor_tD4231FBF57335465D16308D2A18E8E83D36BFA76* L_43;
		L_43 = il2cpp_unsafe_add_byte_offset<VertexAttributeDescriptor_tD4231FBF57335465D16308D2A18E8E83D36BFA76,uint64_t>(L_40, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_41, ((int64_t)5))), (int64_t)L_42)));
		VertexAttributeDescriptor_tD4231FBF57335465D16308D2A18E8E83D36BFA76 L_44 = ___0_value;
		*(VertexAttributeDescriptor_tD4231FBF57335465D16308D2A18E8E83D36BFA76*)L_43 = L_44;
		VertexAttributeDescriptor_tD4231FBF57335465D16308D2A18E8E83D36BFA76* L_45 = V_4;
		uint64_t L_46 = V_6;
		uint64_t L_47 = V_5;
		VertexAttributeDescriptor_tD4231FBF57335465D16308D2A18E8E83D36BFA76* L_48;
		L_48 = il2cpp_unsafe_add_byte_offset<VertexAttributeDescriptor_tD4231FBF57335465D16308D2A18E8E83D36BFA76,uint64_t>(L_45, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_46, ((int64_t)6))), (int64_t)L_47)));
		VertexAttributeDescriptor_tD4231FBF57335465D16308D2A18E8E83D36BFA76 L_49 = ___0_value;
		*(VertexAttributeDescriptor_tD4231FBF57335465D16308D2A18E8E83D36BFA76*)L_48 = L_49;
		VertexAttributeDescriptor_tD4231FBF57335465D16308D2A18E8E83D36BFA76* L_50 = V_4;
		uint64_t L_51 = V_6;
		uint64_t L_52 = V_5;
		VertexAttributeDescriptor_tD4231FBF57335465D16308D2A18E8E83D36BFA76* L_53;
		L_53 = il2cpp_unsafe_add_byte_offset<VertexAttributeDescriptor_tD4231FBF57335465D16308D2A18E8E83D36BFA76,uint64_t>(L_50, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_51, ((int64_t)7))), (int64_t)L_52)));
		VertexAttributeDescriptor_tD4231FBF57335465D16308D2A18E8E83D36BFA76 L_54 = ___0_value;
		*(VertexAttributeDescriptor_tD4231FBF57335465D16308D2A18E8E83D36BFA76*)L_53 = L_54;
		uint64_t L_55 = V_6;
		V_6 = (uint64_t)((int64_t)il2cpp_codegen_add((int64_t)L_55, ((int64_t)8)));
	}

IL_0110:
	{
		uint64_t L_56 = V_6;
		uint64_t L_57 = V_3;
		if ((!(((uint64_t)L_56) >= ((uint64_t)((int64_t)((int64_t)L_57&((int64_t)((int32_t)-8))))))))
		{
			goto IL_0064;
		}
	}
	{
		uint64_t L_58 = V_6;
		uint64_t L_59 = V_3;
		if ((!(((uint64_t)L_58) < ((uint64_t)((int64_t)((int64_t)L_59&((int64_t)((int32_t)-4))))))))
		{
			goto IL_0198;
		}
	}
	{
		VertexAttributeDescriptor_tD4231FBF57335465D16308D2A18E8E83D36BFA76* L_60 = V_4;
		uint64_t L_61 = V_6;
		uint64_t L_62 = V_5;
		VertexAttributeDescriptor_tD4231FBF57335465D16308D2A18E8E83D36BFA76* L_63;
		L_63 = il2cpp_unsafe_add_byte_offset<VertexAttributeDescriptor_tD4231FBF57335465D16308D2A18E8E83D36BFA76,uint64_t>(L_60, (uint64_t)((int64_t)il2cpp_codegen_multiply((int64_t)L_61, (int64_t)L_62)));
		VertexAttributeDescriptor_tD4231FBF57335465D16308D2A18E8E83D36BFA76 L_64 = ___0_value;
		*(VertexAttributeDescriptor_tD4231FBF57335465D16308D2A18E8E83D36BFA76*)L_63 = L_64;
		VertexAttributeDescriptor_tD4231FBF57335465D16308D2A18E8E83D36BFA76* L_65 = V_4;
		uint64_t L_66 = V_6;
		uint64_t L_67 = V_5;
		VertexAttributeDescriptor_tD4231FBF57335465D16308D2A18E8E83D36BFA76* L_68;
		L_68 = il2cpp_unsafe_add_byte_offset<VertexAttributeDescriptor_tD4231FBF57335465D16308D2A18E8E83D36BFA76,uint64_t>(L_65, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_66, ((int64_t)1))), (int64_t)L_67)));
		VertexAttributeDescriptor_tD4231FBF57335465D16308D2A18E8E83D36BFA76 L_69 = ___0_value;
		*(VertexAttributeDescriptor_tD4231FBF57335465D16308D2A18E8E83D36BFA76*)L_68 = L_69;
		VertexAttributeDescriptor_tD4231FBF57335465D16308D2A18E8E83D36BFA76* L_70 = V_4;
		uint64_t L_71 = V_6;
		uint64_t L_72 = V_5;
		VertexAttributeDescriptor_tD4231FBF57335465D16308D2A18E8E83D36BFA76* L_73;
		L_73 = il2cpp_unsafe_add_byte_offset<VertexAttributeDescriptor_tD4231FBF57335465D16308D2A18E8E83D36BFA76,uint64_t>(L_70, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_71, ((int64_t)2))), (int64_t)L_72)));
		VertexAttributeDescriptor_tD4231FBF57335465D16308D2A18E8E83D36BFA76 L_74 = ___0_value;
		*(VertexAttributeDescriptor_tD4231FBF57335465D16308D2A18E8E83D36BFA76*)L_73 = L_74;
		VertexAttributeDescriptor_tD4231FBF57335465D16308D2A18E8E83D36BFA76* L_75 = V_4;
		uint64_t L_76 = V_6;
		uint64_t L_77 = V_5;
		VertexAttributeDescriptor_tD4231FBF57335465D16308D2A18E8E83D36BFA76* L_78;
		L_78 = il2cpp_unsafe_add_byte_offset<VertexAttributeDescriptor_tD4231FBF57335465D16308D2A18E8E83D36BFA76,uint64_t>(L_75, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_76, ((int64_t)3))), (int64_t)L_77)));
		VertexAttributeDescriptor_tD4231FBF57335465D16308D2A18E8E83D36BFA76 L_79 = ___0_value;
		*(VertexAttributeDescriptor_tD4231FBF57335465D16308D2A18E8E83D36BFA76*)L_78 = L_79;
		uint64_t L_80 = V_6;
		V_6 = (uint64_t)((int64_t)il2cpp_codegen_add((int64_t)L_80, ((int64_t)4)));
		goto IL_0198;
	}

IL_017f:
	{
		VertexAttributeDescriptor_tD4231FBF57335465D16308D2A18E8E83D36BFA76* L_81 = V_4;
		uint64_t L_82 = V_6;
		uint64_t L_83 = V_5;
		VertexAttributeDescriptor_tD4231FBF57335465D16308D2A18E8E83D36BFA76* L_84;
		L_84 = il2cpp_unsafe_add_byte_offset<VertexAttributeDescriptor_tD4231FBF57335465D16308D2A18E8E83D36BFA76,uint64_t>(L_81, (uint64_t)((int64_t)il2cpp_codegen_multiply((int64_t)L_82, (int64_t)L_83)));
		VertexAttributeDescriptor_tD4231FBF57335465D16308D2A18E8E83D36BFA76 L_85 = ___0_value;
		*(VertexAttributeDescriptor_tD4231FBF57335465D16308D2A18E8E83D36BFA76*)L_84 = L_85;
		uint64_t L_86 = V_6;
		V_6 = (uint64_t)((int64_t)il2cpp_codegen_add((int64_t)L_86, ((int64_t)1)));
	}

IL_0198:
	{
		uint64_t L_87 = V_6;
		uint64_t L_88 = V_3;
		if ((!(((uint64_t)L_87) >= ((uint64_t)L_88))))
		{
			goto IL_017f;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1_CopyTo_mC915B466348E9296AF676BA10EB38634FEF2AA53_gshared (Span_1_tA5C1C4A28024D89A0077601B805025F51EFEE6E0* __this, Span_1_tA5C1C4A28024D89A0077601B805025F51EFEE6E0 ___0_destination, const RuntimeMethod* method) 
{
	ByReference_1_tA646A142C83B2DEAE35CC1909169EA19C12201DC V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->____length;
		int32_t L_1;
		L_1 = Span_1_get_Length_m3CBE615865BBBA37C35E5624C623561A3CA7780F_inline((&___0_destination), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 13));
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_0038;
		}
	}
	{
		Span_1_tA5C1C4A28024D89A0077601B805025F51EFEE6E0 L_2 = ___0_destination;
		ByReference_1_tA646A142C83B2DEAE35CC1909169EA19C12201DC L_3 = L_2.____pointer;
		V_0 = L_3;
		VertexAttributeDescriptor_tD4231FBF57335465D16308D2A18E8E83D36BFA76* L_4;
		L_4 = IL2CPP_BY_REFERENCE_GET_VALUE(VertexAttributeDescriptor_tD4231FBF57335465D16308D2A18E8E83D36BFA76, (Il2CppByReference*)(&V_0));
		ByReference_1_tA646A142C83B2DEAE35CC1909169EA19C12201DC L_5 = __this->____pointer;
		V_0 = L_5;
		VertexAttributeDescriptor_tD4231FBF57335465D16308D2A18E8E83D36BFA76* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(VertexAttributeDescriptor_tD4231FBF57335465D16308D2A18E8E83D36BFA76, (Il2CppByReference*)(&V_0));
		int32_t L_7 = __this->____length;
		Buffer_Memmove_TisVertexAttributeDescriptor_tD4231FBF57335465D16308D2A18E8E83D36BFA76_mD33F0334F37E4CBF4BBF4008EA599ECF998329B8(L_4, L_6, (uint64_t)((int64_t)L_7), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 15));
		return;
	}

IL_0038:
	{
		ThrowHelper_ThrowArgumentException_DestinationTooShort_m6468934A3BBB67DBC5BAEF7A64D91BD5BBBB3D4D(NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Span_1_TryCopyTo_mA6C8AB821E080F71E957163025D55C209EC03700_gshared (Span_1_tA5C1C4A28024D89A0077601B805025F51EFEE6E0* __this, Span_1_tA5C1C4A28024D89A0077601B805025F51EFEE6E0 ___0_destination, const RuntimeMethod* method) 
{
	bool V_0 = false;
	ByReference_1_tA646A142C83B2DEAE35CC1909169EA19C12201DC V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		V_0 = (bool)0;
		int32_t L_0 = __this->____length;
		int32_t L_1;
		L_1 = Span_1_get_Length_m3CBE615865BBBA37C35E5624C623561A3CA7780F_inline((&___0_destination), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 13));
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_003b;
		}
	}
	{
		Span_1_tA5C1C4A28024D89A0077601B805025F51EFEE6E0 L_2 = ___0_destination;
		ByReference_1_tA646A142C83B2DEAE35CC1909169EA19C12201DC L_3 = L_2.____pointer;
		V_1 = L_3;
		VertexAttributeDescriptor_tD4231FBF57335465D16308D2A18E8E83D36BFA76* L_4;
		L_4 = IL2CPP_BY_REFERENCE_GET_VALUE(VertexAttributeDescriptor_tD4231FBF57335465D16308D2A18E8E83D36BFA76, (Il2CppByReference*)(&V_1));
		ByReference_1_tA646A142C83B2DEAE35CC1909169EA19C12201DC L_5 = __this->____pointer;
		V_1 = L_5;
		VertexAttributeDescriptor_tD4231FBF57335465D16308D2A18E8E83D36BFA76* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(VertexAttributeDescriptor_tD4231FBF57335465D16308D2A18E8E83D36BFA76, (Il2CppByReference*)(&V_1));
		int32_t L_7 = __this->____length;
		Buffer_Memmove_TisVertexAttributeDescriptor_tD4231FBF57335465D16308D2A18E8E83D36BFA76_mD33F0334F37E4CBF4BBF4008EA599ECF998329B8(L_4, L_6, (uint64_t)((int64_t)L_7), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 15));
		V_0 = (bool)1;
	}

IL_003b:
	{
		bool L_8 = V_0;
		return L_8;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_tD6632037B9C2A00A111E1627D34F86F9A6611006 Span_1_op_Implicit_m66A9CBC456C842A9F0FDA55FA21772C0EED42FA9_gshared (Span_1_tA5C1C4A28024D89A0077601B805025F51EFEE6E0 ___0_span, const RuntimeMethod* method) 
{
	ByReference_1_tA646A142C83B2DEAE35CC1909169EA19C12201DC V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Span_1_tA5C1C4A28024D89A0077601B805025F51EFEE6E0 L_0 = ___0_span;
		ByReference_1_tA646A142C83B2DEAE35CC1909169EA19C12201DC L_1 = L_0.____pointer;
		V_0 = L_1;
		VertexAttributeDescriptor_tD4231FBF57335465D16308D2A18E8E83D36BFA76* L_2;
		L_2 = IL2CPP_BY_REFERENCE_GET_VALUE(VertexAttributeDescriptor_tD4231FBF57335465D16308D2A18E8E83D36BFA76, (Il2CppByReference*)(&V_0));
		Span_1_tA5C1C4A28024D89A0077601B805025F51EFEE6E0 L_3 = ___0_span;
		int32_t L_4 = L_3.____length;
		ReadOnlySpan_1_tD6632037B9C2A00A111E1627D34F86F9A6611006 L_5;
		memset((&L_5), 0, sizeof(L_5));
		ReadOnlySpan_1__ctor_mB95FD3804E51521FC7AA12B18DE8BB2E8D05AA73_inline((&L_5), L_2, L_4, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 17));
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Span_1_ToString_mCD30E7D15EDEA4988026128ADEBEA7CCC033F65F_gshared (Span_1_tA5C1C4A28024D89A0077601B805025F51EFEE6E0* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0DB46164953228904843938099AF66650313FEE5);
		s_Il2CppMethodInitialized = true;
	}
	Il2CppChar* V_0 = NULL;
	ByReference_1_tA646A142C83B2DEAE35CC1909169EA19C12201DC V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 9)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.char_class->byval_arg) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		bool L_4;
		L_4 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_1, L_3, NULL);
		if (!L_4)
		{
			goto IL_003e;
		}
	}
	{
		ByReference_1_tA646A142C83B2DEAE35CC1909169EA19C12201DC L_5 = __this->____pointer;
		V_1 = L_5;
		VertexAttributeDescriptor_tD4231FBF57335465D16308D2A18E8E83D36BFA76* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(VertexAttributeDescriptor_tD4231FBF57335465D16308D2A18E8E83D36BFA76, (Il2CppByReference*)(&V_1));
		Il2CppChar* L_7;
		L_7 = il2cpp_unsafe_as_ref<Il2CppChar>(L_6);
		V_0 = L_7;
		Il2CppChar* L_8 = V_0;
		int32_t L_9 = __this->____length;
		String_t* L_10;
		L_10 = String_CreateString_m3F8794FEB452558B8A68C65E1F0B603B3D94E0E2(NULL, (Il2CppChar*)((uintptr_t)L_8), 0, L_9, NULL);
		return L_10;
	}

IL_003e:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_11 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 9)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_12;
		L_12 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_11, NULL);
		NullCheck((MemberInfo_t*)L_12);
		String_t* L_13;
		L_13 = VirtualFuncInvoker0< String_t* >::Invoke(8, (MemberInfo_t*)L_12);
		int32_t L_14 = __this->____length;
		int32_t L_15 = L_14;
		RuntimeObject* L_16 = Box(il2cpp_defaults.int32_class, &L_15);
		String_t* L_17;
		L_17 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(_stringLiteral0DB46164953228904843938099AF66650313FEE5, (RuntimeObject*)L_13, L_16, NULL);
		return L_17;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Span_1_tA5C1C4A28024D89A0077601B805025F51EFEE6E0 Span_1_Slice_m26E008D08186C7ACC4E3EAEFA91D1B9C132724E7_gshared (Span_1_tA5C1C4A28024D89A0077601B805025F51EFEE6E0* __this, int32_t ___0_start, const RuntimeMethod* method) 
{
	ByReference_1_tA646A142C83B2DEAE35CC1909169EA19C12201DC V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_start;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) > ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_000e:
	{
		ByReference_1_tA646A142C83B2DEAE35CC1909169EA19C12201DC L_2 = __this->____pointer;
		V_0 = L_2;
		VertexAttributeDescriptor_tD4231FBF57335465D16308D2A18E8E83D36BFA76* L_3;
		L_3 = IL2CPP_BY_REFERENCE_GET_VALUE(VertexAttributeDescriptor_tD4231FBF57335465D16308D2A18E8E83D36BFA76, (Il2CppByReference*)(&V_0));
		int32_t L_4 = ___0_start;
		VertexAttributeDescriptor_tD4231FBF57335465D16308D2A18E8E83D36BFA76* L_5;
		L_5 = il2cpp_unsafe_add<VertexAttributeDescriptor_tD4231FBF57335465D16308D2A18E8E83D36BFA76,int32_t>(L_3, L_4);
		int32_t L_6 = __this->____length;
		int32_t L_7 = ___0_start;
		Span_1_tA5C1C4A28024D89A0077601B805025F51EFEE6E0 L_8;
		memset((&L_8), 0, sizeof(L_8));
		Span_1__ctor_mA5A972B3B527C1A511260B7C1FBE95AE7ACD76B3_inline((&L_8), L_5, ((int32_t)il2cpp_codegen_subtract(L_6, L_7)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 18));
		return L_8;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Span_1_tA5C1C4A28024D89A0077601B805025F51EFEE6E0 Span_1_Slice_mF4669B69D33FB037699798658B453FCEF23A9049_gshared (Span_1_tA5C1C4A28024D89A0077601B805025F51EFEE6E0* __this, int32_t ___0_start, int32_t ___1_length, const RuntimeMethod* method) 
{
	ByReference_1_tA646A142C83B2DEAE35CC1909169EA19C12201DC V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_start;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		int32_t L_2 = ___1_length;
		int32_t L_3 = __this->____length;
		int32_t L_4 = ___0_start;
		if ((!(((uint32_t)L_2) > ((uint32_t)((int32_t)il2cpp_codegen_subtract(L_3, L_4))))))
		{
			goto IL_0019;
		}
	}

IL_0014:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_0019:
	{
		ByReference_1_tA646A142C83B2DEAE35CC1909169EA19C12201DC L_5 = __this->____pointer;
		V_0 = L_5;
		VertexAttributeDescriptor_tD4231FBF57335465D16308D2A18E8E83D36BFA76* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(VertexAttributeDescriptor_tD4231FBF57335465D16308D2A18E8E83D36BFA76, (Il2CppByReference*)(&V_0));
		int32_t L_7 = ___0_start;
		VertexAttributeDescriptor_tD4231FBF57335465D16308D2A18E8E83D36BFA76* L_8;
		L_8 = il2cpp_unsafe_add<VertexAttributeDescriptor_tD4231FBF57335465D16308D2A18E8E83D36BFA76,int32_t>(L_6, L_7);
		int32_t L_9 = ___1_length;
		Span_1_tA5C1C4A28024D89A0077601B805025F51EFEE6E0 L_10;
		memset((&L_10), 0, sizeof(L_10));
		Span_1__ctor_mA5A972B3B527C1A511260B7C1FBE95AE7ACD76B3_inline((&L_10), L_8, L_9, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 18));
		return L_10;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR VertexAttributeDescriptorU5BU5D_t5D10E60612F12777F59B7E33939F9075DB0E02B2* Span_1_ToArray_m20AD591E9FFC095AB36CDF26970FF208CD73532E_gshared (Span_1_tA5C1C4A28024D89A0077601B805025F51EFEE6E0* __this, const RuntimeMethod* method) 
{
	ByReference_1_tA646A142C83B2DEAE35CC1909169EA19C12201DC V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->____length;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		VertexAttributeDescriptorU5BU5D_t5D10E60612F12777F59B7E33939F9075DB0E02B2* L_1;
		L_1 = Array_Empty_TisVertexAttributeDescriptor_tD4231FBF57335465D16308D2A18E8E83D36BFA76_m998FF89091ADB380AE37B11326EBA4E636539F6C_inline(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 19));
		return L_1;
	}

IL_000e:
	{
		int32_t L_2 = __this->____length;
		VertexAttributeDescriptorU5BU5D_t5D10E60612F12777F59B7E33939F9075DB0E02B2* L_3 = (VertexAttributeDescriptorU5BU5D_t5D10E60612F12777F59B7E33939F9075DB0E02B2*)(VertexAttributeDescriptorU5BU5D_t5D10E60612F12777F59B7E33939F9075DB0E02B2*)SZArrayNew(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 20), (uint32_t)L_2);
		VertexAttributeDescriptorU5BU5D_t5D10E60612F12777F59B7E33939F9075DB0E02B2* L_4 = L_3;
		NullCheck((RuntimeArray*)L_4);
		uint8_t* L_5;
		L_5 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_4, NULL);
		VertexAttributeDescriptor_tD4231FBF57335465D16308D2A18E8E83D36BFA76* L_6;
		L_6 = il2cpp_unsafe_as_ref<VertexAttributeDescriptor_tD4231FBF57335465D16308D2A18E8E83D36BFA76>(L_5);
		ByReference_1_tA646A142C83B2DEAE35CC1909169EA19C12201DC L_7 = __this->____pointer;
		V_0 = L_7;
		VertexAttributeDescriptor_tD4231FBF57335465D16308D2A18E8E83D36BFA76* L_8;
		L_8 = IL2CPP_BY_REFERENCE_GET_VALUE(VertexAttributeDescriptor_tD4231FBF57335465D16308D2A18E8E83D36BFA76, (Il2CppByReference*)(&V_0));
		int32_t L_9 = __this->____length;
		Buffer_Memmove_TisVertexAttributeDescriptor_tD4231FBF57335465D16308D2A18E8E83D36BFA76_mD33F0334F37E4CBF4BBF4008EA599ECF998329B8(L_6, L_8, (uint64_t)((int64_t)L_9), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 15));
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Span_1_get_Length_m3CBE615865BBBA37C35E5624C623561A3CA7780F_gshared (Span_1_tA5C1C4A28024D89A0077601B805025F51EFEE6E0* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____length;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Span_1_Equals_mB10FABD8F40D8C35001153B66C04C3EE4CD3B4CF_gshared (Span_1_tA5C1C4A28024D89A0077601B805025F51EFEE6E0* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral69508A540AFD085A745316DD7D6345B1C8CC662D)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Span_1_GetHashCode_m97156F91B986D42C007F3DA06DDAB3487752797D_gshared (Span_1_tA5C1C4A28024D89A0077601B805025F51EFEE6E0* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralECE618215BAC99C6FD12D8A273CC2118945EDCC8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Span_1_tA5C1C4A28024D89A0077601B805025F51EFEE6E0 Span_1_op_Implicit_m147E79D0F0A3DF7956BCA4542554A01631FC4496_gshared (VertexAttributeDescriptorU5BU5D_t5D10E60612F12777F59B7E33939F9075DB0E02B2* ___0_array, const RuntimeMethod* method) 
{
	{
		VertexAttributeDescriptorU5BU5D_t5D10E60612F12777F59B7E33939F9075DB0E02B2* L_0 = ___0_array;
		Span_1_tA5C1C4A28024D89A0077601B805025F51EFEE6E0 L_1;
		memset((&L_1), 0, sizeof(L_1));
		Span_1__ctor_m528FFD264C3687974947130266E4DEEA1C5DEA82_inline((&L_1), L_0, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 21));
		return L_1;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1__ctor_m18FED6B7D9CC641149EE6A8D26F4F83ACF26BC76_gshared (Span_1_t2C186CD9311CD6C5819274CD880486487FC65AD5* __this, XRNodeStateU5BU5D_tEC64805398059D44C2FBA68AABAEFFB262B93845* ___0_array, const RuntimeMethod* method) 
{
	XRNodeState_t683158812A1D80A6BC73DB97405BB0B795A9111A V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		XRNodeStateU5BU5D_tEC64805398059D44C2FBA68AABAEFFB262B93845* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_000b;
		}
	}
	{
		il2cpp_codegen_initobj(__this, sizeof(Span_1_t2C186CD9311CD6C5819274CD880486487FC65AD5));
		return;
	}

IL_000b:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(XRNodeState_t683158812A1D80A6BC73DB97405BB0B795A9111A));
		goto IL_0037;
	}

IL_0037:
	{
		XRNodeStateU5BU5D_tEC64805398059D44C2FBA68AABAEFFB262B93845* L_2 = ___0_array;
		NullCheck((RuntimeArray*)L_2);
		uint8_t* L_3;
		L_3 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_2, NULL);
		XRNodeState_t683158812A1D80A6BC73DB97405BB0B795A9111A* L_4;
		L_4 = il2cpp_unsafe_as_ref<XRNodeState_t683158812A1D80A6BC73DB97405BB0B795A9111A>(L_3);
		ByReference_1_tB7B4B385EF92E13A860B3C68B929D02E132405C8 L_5;
		memset((&L_5), 0, sizeof(L_5));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_5), L_4);
		__this->____pointer = L_5;
		XRNodeStateU5BU5D_tEC64805398059D44C2FBA68AABAEFFB262B93845* L_6 = ___0_array;
		NullCheck(L_6);
		__this->____length = ((int32_t)(((RuntimeArray*)L_6)->max_length));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1__ctor_m0A2876B43F4939FE12936CC35AB5704186D417B0_gshared (Span_1_t2C186CD9311CD6C5819274CD880486487FC65AD5* __this, XRNodeStateU5BU5D_tEC64805398059D44C2FBA68AABAEFFB262B93845* ___0_array, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method) 
{
	XRNodeState_t683158812A1D80A6BC73DB97405BB0B795A9111A V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		XRNodeStateU5BU5D_tEC64805398059D44C2FBA68AABAEFFB262B93845* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		int32_t L_1 = ___1_start;
		if (L_1)
		{
			goto IL_0009;
		}
	}
	{
		int32_t L_2 = ___2_length;
		if (!L_2)
		{
			goto IL_000e;
		}
	}

IL_0009:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_000e:
	{
		il2cpp_codegen_initobj(__this, sizeof(Span_1_t2C186CD9311CD6C5819274CD880486487FC65AD5));
		return;
	}

IL_0016:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(XRNodeState_t683158812A1D80A6BC73DB97405BB0B795A9111A));
		goto IL_0042;
	}

IL_0042:
	{
		int32_t L_4 = ___1_start;
		XRNodeStateU5BU5D_tEC64805398059D44C2FBA68AABAEFFB262B93845* L_5 = ___0_array;
		NullCheck(L_5);
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)(((RuntimeArray*)L_5)->max_length))))))
		{
			goto IL_0050;
		}
	}
	{
		int32_t L_6 = ___2_length;
		XRNodeStateU5BU5D_tEC64805398059D44C2FBA68AABAEFFB262B93845* L_7 = ___0_array;
		NullCheck(L_7);
		int32_t L_8 = ___1_start;
		if ((!(((uint32_t)L_6) > ((uint32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_7)->max_length)), L_8))))))
		{
			goto IL_0055;
		}
	}

IL_0050:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_0055:
	{
		XRNodeStateU5BU5D_tEC64805398059D44C2FBA68AABAEFFB262B93845* L_9 = ___0_array;
		NullCheck((RuntimeArray*)L_9);
		uint8_t* L_10;
		L_10 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_9, NULL);
		XRNodeState_t683158812A1D80A6BC73DB97405BB0B795A9111A* L_11;
		L_11 = il2cpp_unsafe_as_ref<XRNodeState_t683158812A1D80A6BC73DB97405BB0B795A9111A>(L_10);
		int32_t L_12 = ___1_start;
		XRNodeState_t683158812A1D80A6BC73DB97405BB0B795A9111A* L_13;
		L_13 = il2cpp_unsafe_add<XRNodeState_t683158812A1D80A6BC73DB97405BB0B795A9111A,int32_t>(L_11, L_12);
		ByReference_1_tB7B4B385EF92E13A860B3C68B929D02E132405C8 L_14;
		memset((&L_14), 0, sizeof(L_14));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_14), L_13);
		__this->____pointer = L_14;
		int32_t L_15 = ___2_length;
		__this->____length = L_15;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1__ctor_m2554E8EB07B89EE148D8D1FEB54C1ABCBDD8C92C_gshared (Span_1_t2C186CD9311CD6C5819274CD880486487FC65AD5* __this, void* ___0_pointer, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		goto IL_0016;
	}

IL_0016:
	{
		int32_t L_0 = ___1_length;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_001f;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_001f:
	{
		void* L_1 = ___0_pointer;
		XRNodeState_t683158812A1D80A6BC73DB97405BB0B795A9111A* L_2;
		L_2 = il2cpp_unsafe_as_ref<XRNodeState_t683158812A1D80A6BC73DB97405BB0B795A9111A>((uint8_t*)L_1);
		ByReference_1_tB7B4B385EF92E13A860B3C68B929D02E132405C8 L_3;
		memset((&L_3), 0, sizeof(L_3));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_3), L_2);
		__this->____pointer = L_3;
		int32_t L_4 = ___1_length;
		__this->____length = L_4;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1__ctor_mD8BFA56022C77E5DA5F3235B53D8E55644D65039_gshared (Span_1_t2C186CD9311CD6C5819274CD880486487FC65AD5* __this, XRNodeState_t683158812A1D80A6BC73DB97405BB0B795A9111A* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		XRNodeState_t683158812A1D80A6BC73DB97405BB0B795A9111A* L_0 = ___0_ptr;
		ByReference_1_tB7B4B385EF92E13A860B3C68B929D02E132405C8 L_1;
		memset((&L_1), 0, sizeof(L_1));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_1), L_0);
		__this->____pointer = L_1;
		int32_t L_2 = ___1_length;
		__this->____length = L_2;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XRNodeState_t683158812A1D80A6BC73DB97405BB0B795A9111A* Span_1_get_Item_m9C801B3683836F05B8F8A864C36D75B2D2CFDD72_gshared (Span_1_t2C186CD9311CD6C5819274CD880486487FC65AD5* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	ByReference_1_tB7B4B385EF92E13A860B3C68B929D02E132405C8 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_index;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowIndexOutOfRangeException_m86F753A24E2765A35546BA6352A7E4F0BB8A66B5(NULL);
	}

IL_000e:
	{
		ByReference_1_tB7B4B385EF92E13A860B3C68B929D02E132405C8 L_2 = __this->____pointer;
		V_0 = L_2;
		XRNodeState_t683158812A1D80A6BC73DB97405BB0B795A9111A* L_3;
		L_3 = IL2CPP_BY_REFERENCE_GET_VALUE(XRNodeState_t683158812A1D80A6BC73DB97405BB0B795A9111A, (Il2CppByReference*)(&V_0));
		int32_t L_4 = ___0_index;
		XRNodeState_t683158812A1D80A6BC73DB97405BB0B795A9111A* L_5;
		L_5 = il2cpp_unsafe_add<XRNodeState_t683158812A1D80A6BC73DB97405BB0B795A9111A,int32_t>(L_3, L_4);
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XRNodeState_t683158812A1D80A6BC73DB97405BB0B795A9111A* Span_1_GetPinnableReference_mE0449009B037B91360E8EAB43D442C0EBD1C736C_gshared (Span_1_t2C186CD9311CD6C5819274CD880486487FC65AD5* __this, const RuntimeMethod* method) 
{
	ByReference_1_tB7B4B385EF92E13A860B3C68B929D02E132405C8 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->____length;
		if (L_0)
		{
			goto IL_0010;
		}
	}
	{
		XRNodeState_t683158812A1D80A6BC73DB97405BB0B795A9111A* L_1;
		L_1 = il2cpp_unsafe_as_ref<XRNodeState_t683158812A1D80A6BC73DB97405BB0B795A9111A>((void*)((uintptr_t)0));
		return L_1;
	}

IL_0010:
	{
		ByReference_1_tB7B4B385EF92E13A860B3C68B929D02E132405C8 L_2 = __this->____pointer;
		V_0 = L_2;
		XRNodeState_t683158812A1D80A6BC73DB97405BB0B795A9111A* L_3;
		L_3 = IL2CPP_BY_REFERENCE_GET_VALUE(XRNodeState_t683158812A1D80A6BC73DB97405BB0B795A9111A, (Il2CppByReference*)(&V_0));
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1_Clear_m7D685C64A61E3223DA4BE4909BF6986E4B211A09_gshared (Span_1_t2C186CD9311CD6C5819274CD880486487FC65AD5* __this, const RuntimeMethod* method) 
{
	ByReference_1_tB7B4B385EF92E13A860B3C68B929D02E132405C8 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		goto IL_0034;
	}

IL_0034:
	{
		ByReference_1_tB7B4B385EF92E13A860B3C68B929D02E132405C8 L_0 = __this->____pointer;
		V_0 = L_0;
		XRNodeState_t683158812A1D80A6BC73DB97405BB0B795A9111A* L_1;
		L_1 = IL2CPP_BY_REFERENCE_GET_VALUE(XRNodeState_t683158812A1D80A6BC73DB97405BB0B795A9111A, (Il2CppByReference*)(&V_0));
		uint8_t* L_2;
		L_2 = il2cpp_unsafe_as_ref<uint8_t>(L_1);
		int32_t L_3 = __this->____length;
		int32_t L_4;
		L_4 = il2cpp_unsafe_sizeof<XRNodeState_t683158812A1D80A6BC73DB97405BB0B795A9111A>();
		SpanHelpers_ClearWithoutReferences_m65DB2925AE7A5FF88BB3EA1BF90513C9ADF0653D(L_2, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_3), ((int64_t)L_4))), NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1_Fill_m2E0B871B0E5CF7DA67B95F88440F59BF151D92DD_gshared (Span_1_t2C186CD9311CD6C5819274CD880486487FC65AD5* __this, XRNodeState_t683158812A1D80A6BC73DB97405BB0B795A9111A ___0_value, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	XRNodeState_t683158812A1D80A6BC73DB97405BB0B795A9111A V_1;
	memset((&V_1), 0, sizeof(V_1));
	ByReference_1_tB7B4B385EF92E13A860B3C68B929D02E132405C8 V_2;
	memset((&V_2), 0, sizeof(V_2));
	uint64_t V_3 = 0;
	XRNodeState_t683158812A1D80A6BC73DB97405BB0B795A9111A* V_4 = NULL;
	uint64_t V_5 = 0;
	uint64_t V_6 = 0;
	{
		int32_t L_0;
		L_0 = il2cpp_unsafe_sizeof<XRNodeState_t683158812A1D80A6BC73DB97405BB0B795A9111A>();
		if ((!(((uint32_t)L_0) == ((uint32_t)1))))
		{
			goto IL_0037;
		}
	}
	{
		int32_t L_1 = __this->____length;
		V_0 = (uint32_t)L_1;
		uint32_t L_2 = V_0;
		if (L_2)
		{
			goto IL_0013;
		}
	}
	{
		return;
	}

IL_0013:
	{
		XRNodeState_t683158812A1D80A6BC73DB97405BB0B795A9111A L_3 = ___0_value;
		V_1 = L_3;
		ByReference_1_tB7B4B385EF92E13A860B3C68B929D02E132405C8 L_4 = __this->____pointer;
		V_2 = L_4;
		XRNodeState_t683158812A1D80A6BC73DB97405BB0B795A9111A* L_5;
		L_5 = IL2CPP_BY_REFERENCE_GET_VALUE(XRNodeState_t683158812A1D80A6BC73DB97405BB0B795A9111A, (Il2CppByReference*)(&V_2));
		uint8_t* L_6;
		L_6 = il2cpp_unsafe_as_ref<uint8_t>(L_5);
		uint8_t* L_7;
		L_7 = il2cpp_unsafe_as_ref<uint8_t>((&V_1));
		int32_t L_8 = *((uint8_t*)L_7);
		uint32_t L_9 = V_0;
		Unsafe_InitBlockUnaligned_m6F2353EB9ABC9320E61629FAEE23948C80BFF03A(L_6, (uint8_t)L_8, L_9, NULL);
		return;
	}

IL_0037:
	{
		int32_t L_10 = __this->____length;
		V_3 = (uint64_t)((int64_t)(uint64_t)((uint32_t)L_10));
		uint64_t L_11 = V_3;
		if (L_11)
		{
			goto IL_0043;
		}
	}
	{
		return;
	}

IL_0043:
	{
		ByReference_1_tB7B4B385EF92E13A860B3C68B929D02E132405C8 L_12 = __this->____pointer;
		V_2 = L_12;
		XRNodeState_t683158812A1D80A6BC73DB97405BB0B795A9111A* L_13;
		L_13 = IL2CPP_BY_REFERENCE_GET_VALUE(XRNodeState_t683158812A1D80A6BC73DB97405BB0B795A9111A, (Il2CppByReference*)(&V_2));
		V_4 = L_13;
		int32_t L_14;
		L_14 = il2cpp_unsafe_sizeof<XRNodeState_t683158812A1D80A6BC73DB97405BB0B795A9111A>();
		V_5 = (uint64_t)((int64_t)(uint64_t)((uint32_t)L_14));
		V_6 = (uint64_t)((int64_t)0);
		goto IL_0110;
	}

IL_0064:
	{
		XRNodeState_t683158812A1D80A6BC73DB97405BB0B795A9111A* L_15 = V_4;
		uint64_t L_16 = V_6;
		uint64_t L_17 = V_5;
		XRNodeState_t683158812A1D80A6BC73DB97405BB0B795A9111A* L_18;
		L_18 = il2cpp_unsafe_add_byte_offset<XRNodeState_t683158812A1D80A6BC73DB97405BB0B795A9111A,uint64_t>(L_15, (uint64_t)((int64_t)il2cpp_codegen_multiply((int64_t)L_16, (int64_t)L_17)));
		XRNodeState_t683158812A1D80A6BC73DB97405BB0B795A9111A L_19 = ___0_value;
		*(XRNodeState_t683158812A1D80A6BC73DB97405BB0B795A9111A*)L_18 = L_19;
		XRNodeState_t683158812A1D80A6BC73DB97405BB0B795A9111A* L_20 = V_4;
		uint64_t L_21 = V_6;
		uint64_t L_22 = V_5;
		XRNodeState_t683158812A1D80A6BC73DB97405BB0B795A9111A* L_23;
		L_23 = il2cpp_unsafe_add_byte_offset<XRNodeState_t683158812A1D80A6BC73DB97405BB0B795A9111A,uint64_t>(L_20, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_21, ((int64_t)1))), (int64_t)L_22)));
		XRNodeState_t683158812A1D80A6BC73DB97405BB0B795A9111A L_24 = ___0_value;
		*(XRNodeState_t683158812A1D80A6BC73DB97405BB0B795A9111A*)L_23 = L_24;
		XRNodeState_t683158812A1D80A6BC73DB97405BB0B795A9111A* L_25 = V_4;
		uint64_t L_26 = V_6;
		uint64_t L_27 = V_5;
		XRNodeState_t683158812A1D80A6BC73DB97405BB0B795A9111A* L_28;
		L_28 = il2cpp_unsafe_add_byte_offset<XRNodeState_t683158812A1D80A6BC73DB97405BB0B795A9111A,uint64_t>(L_25, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_26, ((int64_t)2))), (int64_t)L_27)));
		XRNodeState_t683158812A1D80A6BC73DB97405BB0B795A9111A L_29 = ___0_value;
		*(XRNodeState_t683158812A1D80A6BC73DB97405BB0B795A9111A*)L_28 = L_29;
		XRNodeState_t683158812A1D80A6BC73DB97405BB0B795A9111A* L_30 = V_4;
		uint64_t L_31 = V_6;
		uint64_t L_32 = V_5;
		XRNodeState_t683158812A1D80A6BC73DB97405BB0B795A9111A* L_33;
		L_33 = il2cpp_unsafe_add_byte_offset<XRNodeState_t683158812A1D80A6BC73DB97405BB0B795A9111A,uint64_t>(L_30, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_31, ((int64_t)3))), (int64_t)L_32)));
		XRNodeState_t683158812A1D80A6BC73DB97405BB0B795A9111A L_34 = ___0_value;
		*(XRNodeState_t683158812A1D80A6BC73DB97405BB0B795A9111A*)L_33 = L_34;
		XRNodeState_t683158812A1D80A6BC73DB97405BB0B795A9111A* L_35 = V_4;
		uint64_t L_36 = V_6;
		uint64_t L_37 = V_5;
		XRNodeState_t683158812A1D80A6BC73DB97405BB0B795A9111A* L_38;
		L_38 = il2cpp_unsafe_add_byte_offset<XRNodeState_t683158812A1D80A6BC73DB97405BB0B795A9111A,uint64_t>(L_35, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_36, ((int64_t)4))), (int64_t)L_37)));
		XRNodeState_t683158812A1D80A6BC73DB97405BB0B795A9111A L_39 = ___0_value;
		*(XRNodeState_t683158812A1D80A6BC73DB97405BB0B795A9111A*)L_38 = L_39;
		XRNodeState_t683158812A1D80A6BC73DB97405BB0B795A9111A* L_40 = V_4;
		uint64_t L_41 = V_6;
		uint64_t L_42 = V_5;
		XRNodeState_t683158812A1D80A6BC73DB97405BB0B795A9111A* L_43;
		L_43 = il2cpp_unsafe_add_byte_offset<XRNodeState_t683158812A1D80A6BC73DB97405BB0B795A9111A,uint64_t>(L_40, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_41, ((int64_t)5))), (int64_t)L_42)));
		XRNodeState_t683158812A1D80A6BC73DB97405BB0B795A9111A L_44 = ___0_value;
		*(XRNodeState_t683158812A1D80A6BC73DB97405BB0B795A9111A*)L_43 = L_44;
		XRNodeState_t683158812A1D80A6BC73DB97405BB0B795A9111A* L_45 = V_4;
		uint64_t L_46 = V_6;
		uint64_t L_47 = V_5;
		XRNodeState_t683158812A1D80A6BC73DB97405BB0B795A9111A* L_48;
		L_48 = il2cpp_unsafe_add_byte_offset<XRNodeState_t683158812A1D80A6BC73DB97405BB0B795A9111A,uint64_t>(L_45, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_46, ((int64_t)6))), (int64_t)L_47)));
		XRNodeState_t683158812A1D80A6BC73DB97405BB0B795A9111A L_49 = ___0_value;
		*(XRNodeState_t683158812A1D80A6BC73DB97405BB0B795A9111A*)L_48 = L_49;
		XRNodeState_t683158812A1D80A6BC73DB97405BB0B795A9111A* L_50 = V_4;
		uint64_t L_51 = V_6;
		uint64_t L_52 = V_5;
		XRNodeState_t683158812A1D80A6BC73DB97405BB0B795A9111A* L_53;
		L_53 = il2cpp_unsafe_add_byte_offset<XRNodeState_t683158812A1D80A6BC73DB97405BB0B795A9111A,uint64_t>(L_50, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_51, ((int64_t)7))), (int64_t)L_52)));
		XRNodeState_t683158812A1D80A6BC73DB97405BB0B795A9111A L_54 = ___0_value;
		*(XRNodeState_t683158812A1D80A6BC73DB97405BB0B795A9111A*)L_53 = L_54;
		uint64_t L_55 = V_6;
		V_6 = (uint64_t)((int64_t)il2cpp_codegen_add((int64_t)L_55, ((int64_t)8)));
	}

IL_0110:
	{
		uint64_t L_56 = V_6;
		uint64_t L_57 = V_3;
		if ((!(((uint64_t)L_56) >= ((uint64_t)((int64_t)((int64_t)L_57&((int64_t)((int32_t)-8))))))))
		{
			goto IL_0064;
		}
	}
	{
		uint64_t L_58 = V_6;
		uint64_t L_59 = V_3;
		if ((!(((uint64_t)L_58) < ((uint64_t)((int64_t)((int64_t)L_59&((int64_t)((int32_t)-4))))))))
		{
			goto IL_0198;
		}
	}
	{
		XRNodeState_t683158812A1D80A6BC73DB97405BB0B795A9111A* L_60 = V_4;
		uint64_t L_61 = V_6;
		uint64_t L_62 = V_5;
		XRNodeState_t683158812A1D80A6BC73DB97405BB0B795A9111A* L_63;
		L_63 = il2cpp_unsafe_add_byte_offset<XRNodeState_t683158812A1D80A6BC73DB97405BB0B795A9111A,uint64_t>(L_60, (uint64_t)((int64_t)il2cpp_codegen_multiply((int64_t)L_61, (int64_t)L_62)));
		XRNodeState_t683158812A1D80A6BC73DB97405BB0B795A9111A L_64 = ___0_value;
		*(XRNodeState_t683158812A1D80A6BC73DB97405BB0B795A9111A*)L_63 = L_64;
		XRNodeState_t683158812A1D80A6BC73DB97405BB0B795A9111A* L_65 = V_4;
		uint64_t L_66 = V_6;
		uint64_t L_67 = V_5;
		XRNodeState_t683158812A1D80A6BC73DB97405BB0B795A9111A* L_68;
		L_68 = il2cpp_unsafe_add_byte_offset<XRNodeState_t683158812A1D80A6BC73DB97405BB0B795A9111A,uint64_t>(L_65, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_66, ((int64_t)1))), (int64_t)L_67)));
		XRNodeState_t683158812A1D80A6BC73DB97405BB0B795A9111A L_69 = ___0_value;
		*(XRNodeState_t683158812A1D80A6BC73DB97405BB0B795A9111A*)L_68 = L_69;
		XRNodeState_t683158812A1D80A6BC73DB97405BB0B795A9111A* L_70 = V_4;
		uint64_t L_71 = V_6;
		uint64_t L_72 = V_5;
		XRNodeState_t683158812A1D80A6BC73DB97405BB0B795A9111A* L_73;
		L_73 = il2cpp_unsafe_add_byte_offset<XRNodeState_t683158812A1D80A6BC73DB97405BB0B795A9111A,uint64_t>(L_70, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_71, ((int64_t)2))), (int64_t)L_72)));
		XRNodeState_t683158812A1D80A6BC73DB97405BB0B795A9111A L_74 = ___0_value;
		*(XRNodeState_t683158812A1D80A6BC73DB97405BB0B795A9111A*)L_73 = L_74;
		XRNodeState_t683158812A1D80A6BC73DB97405BB0B795A9111A* L_75 = V_4;
		uint64_t L_76 = V_6;
		uint64_t L_77 = V_5;
		XRNodeState_t683158812A1D80A6BC73DB97405BB0B795A9111A* L_78;
		L_78 = il2cpp_unsafe_add_byte_offset<XRNodeState_t683158812A1D80A6BC73DB97405BB0B795A9111A,uint64_t>(L_75, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_76, ((int64_t)3))), (int64_t)L_77)));
		XRNodeState_t683158812A1D80A6BC73DB97405BB0B795A9111A L_79 = ___0_value;
		*(XRNodeState_t683158812A1D80A6BC73DB97405BB0B795A9111A*)L_78 = L_79;
		uint64_t L_80 = V_6;
		V_6 = (uint64_t)((int64_t)il2cpp_codegen_add((int64_t)L_80, ((int64_t)4)));
		goto IL_0198;
	}

IL_017f:
	{
		XRNodeState_t683158812A1D80A6BC73DB97405BB0B795A9111A* L_81 = V_4;
		uint64_t L_82 = V_6;
		uint64_t L_83 = V_5;
		XRNodeState_t683158812A1D80A6BC73DB97405BB0B795A9111A* L_84;
		L_84 = il2cpp_unsafe_add_byte_offset<XRNodeState_t683158812A1D80A6BC73DB97405BB0B795A9111A,uint64_t>(L_81, (uint64_t)((int64_t)il2cpp_codegen_multiply((int64_t)L_82, (int64_t)L_83)));
		XRNodeState_t683158812A1D80A6BC73DB97405BB0B795A9111A L_85 = ___0_value;
		*(XRNodeState_t683158812A1D80A6BC73DB97405BB0B795A9111A*)L_84 = L_85;
		uint64_t L_86 = V_6;
		V_6 = (uint64_t)((int64_t)il2cpp_codegen_add((int64_t)L_86, ((int64_t)1)));
	}

IL_0198:
	{
		uint64_t L_87 = V_6;
		uint64_t L_88 = V_3;
		if ((!(((uint64_t)L_87) >= ((uint64_t)L_88))))
		{
			goto IL_017f;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1_CopyTo_mD3EDE0EE154FB4A3E6723C3DA978F147FD6AE856_gshared (Span_1_t2C186CD9311CD6C5819274CD880486487FC65AD5* __this, Span_1_t2C186CD9311CD6C5819274CD880486487FC65AD5 ___0_destination, const RuntimeMethod* method) 
{
	ByReference_1_tB7B4B385EF92E13A860B3C68B929D02E132405C8 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->____length;
		int32_t L_1;
		L_1 = Span_1_get_Length_m1AAE29E9DC0ED6DC7011806FFA7B6DE1641D8D01_inline((&___0_destination), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 13));
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_0038;
		}
	}
	{
		Span_1_t2C186CD9311CD6C5819274CD880486487FC65AD5 L_2 = ___0_destination;
		ByReference_1_tB7B4B385EF92E13A860B3C68B929D02E132405C8 L_3 = L_2.____pointer;
		V_0 = L_3;
		XRNodeState_t683158812A1D80A6BC73DB97405BB0B795A9111A* L_4;
		L_4 = IL2CPP_BY_REFERENCE_GET_VALUE(XRNodeState_t683158812A1D80A6BC73DB97405BB0B795A9111A, (Il2CppByReference*)(&V_0));
		ByReference_1_tB7B4B385EF92E13A860B3C68B929D02E132405C8 L_5 = __this->____pointer;
		V_0 = L_5;
		XRNodeState_t683158812A1D80A6BC73DB97405BB0B795A9111A* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(XRNodeState_t683158812A1D80A6BC73DB97405BB0B795A9111A, (Il2CppByReference*)(&V_0));
		int32_t L_7 = __this->____length;
		Buffer_Memmove_TisXRNodeState_t683158812A1D80A6BC73DB97405BB0B795A9111A_m9BBFC512D1D3429949038E5AEA1D4A79CD1DCD3B(L_4, L_6, (uint64_t)((int64_t)L_7), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 15));
		return;
	}

IL_0038:
	{
		ThrowHelper_ThrowArgumentException_DestinationTooShort_m6468934A3BBB67DBC5BAEF7A64D91BD5BBBB3D4D(NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Span_1_TryCopyTo_mB4BECD208C6C320D6F5CEBCD1D8ED933A41846BA_gshared (Span_1_t2C186CD9311CD6C5819274CD880486487FC65AD5* __this, Span_1_t2C186CD9311CD6C5819274CD880486487FC65AD5 ___0_destination, const RuntimeMethod* method) 
{
	bool V_0 = false;
	ByReference_1_tB7B4B385EF92E13A860B3C68B929D02E132405C8 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		V_0 = (bool)0;
		int32_t L_0 = __this->____length;
		int32_t L_1;
		L_1 = Span_1_get_Length_m1AAE29E9DC0ED6DC7011806FFA7B6DE1641D8D01_inline((&___0_destination), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 13));
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_003b;
		}
	}
	{
		Span_1_t2C186CD9311CD6C5819274CD880486487FC65AD5 L_2 = ___0_destination;
		ByReference_1_tB7B4B385EF92E13A860B3C68B929D02E132405C8 L_3 = L_2.____pointer;
		V_1 = L_3;
		XRNodeState_t683158812A1D80A6BC73DB97405BB0B795A9111A* L_4;
		L_4 = IL2CPP_BY_REFERENCE_GET_VALUE(XRNodeState_t683158812A1D80A6BC73DB97405BB0B795A9111A, (Il2CppByReference*)(&V_1));
		ByReference_1_tB7B4B385EF92E13A860B3C68B929D02E132405C8 L_5 = __this->____pointer;
		V_1 = L_5;
		XRNodeState_t683158812A1D80A6BC73DB97405BB0B795A9111A* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(XRNodeState_t683158812A1D80A6BC73DB97405BB0B795A9111A, (Il2CppByReference*)(&V_1));
		int32_t L_7 = __this->____length;
		Buffer_Memmove_TisXRNodeState_t683158812A1D80A6BC73DB97405BB0B795A9111A_m9BBFC512D1D3429949038E5AEA1D4A79CD1DCD3B(L_4, L_6, (uint64_t)((int64_t)L_7), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 15));
		V_0 = (bool)1;
	}

IL_003b:
	{
		bool L_8 = V_0;
		return L_8;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_tC8B9E9EA565116C6C5FB765E32BA552A1E45E3C5 Span_1_op_Implicit_mB6C6C53FF5658ED283991C8FC8E1B49242D9EC7C_gshared (Span_1_t2C186CD9311CD6C5819274CD880486487FC65AD5 ___0_span, const RuntimeMethod* method) 
{
	ByReference_1_tB7B4B385EF92E13A860B3C68B929D02E132405C8 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Span_1_t2C186CD9311CD6C5819274CD880486487FC65AD5 L_0 = ___0_span;
		ByReference_1_tB7B4B385EF92E13A860B3C68B929D02E132405C8 L_1 = L_0.____pointer;
		V_0 = L_1;
		XRNodeState_t683158812A1D80A6BC73DB97405BB0B795A9111A* L_2;
		L_2 = IL2CPP_BY_REFERENCE_GET_VALUE(XRNodeState_t683158812A1D80A6BC73DB97405BB0B795A9111A, (Il2CppByReference*)(&V_0));
		Span_1_t2C186CD9311CD6C5819274CD880486487FC65AD5 L_3 = ___0_span;
		int32_t L_4 = L_3.____length;
		ReadOnlySpan_1_tC8B9E9EA565116C6C5FB765E32BA552A1E45E3C5 L_5;
		memset((&L_5), 0, sizeof(L_5));
		ReadOnlySpan_1__ctor_mCF2C3E165323BC112848DC8475FF32D4434B819A_inline((&L_5), L_2, L_4, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 17));
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Span_1_ToString_mEA140105D72AC7A233A57BD57E537B6A08987B91_gshared (Span_1_t2C186CD9311CD6C5819274CD880486487FC65AD5* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0DB46164953228904843938099AF66650313FEE5);
		s_Il2CppMethodInitialized = true;
	}
	Il2CppChar* V_0 = NULL;
	ByReference_1_tB7B4B385EF92E13A860B3C68B929D02E132405C8 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 9)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.char_class->byval_arg) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		bool L_4;
		L_4 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_1, L_3, NULL);
		if (!L_4)
		{
			goto IL_003e;
		}
	}
	{
		ByReference_1_tB7B4B385EF92E13A860B3C68B929D02E132405C8 L_5 = __this->____pointer;
		V_1 = L_5;
		XRNodeState_t683158812A1D80A6BC73DB97405BB0B795A9111A* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(XRNodeState_t683158812A1D80A6BC73DB97405BB0B795A9111A, (Il2CppByReference*)(&V_1));
		Il2CppChar* L_7;
		L_7 = il2cpp_unsafe_as_ref<Il2CppChar>(L_6);
		V_0 = L_7;
		Il2CppChar* L_8 = V_0;
		int32_t L_9 = __this->____length;
		String_t* L_10;
		L_10 = String_CreateString_m3F8794FEB452558B8A68C65E1F0B603B3D94E0E2(NULL, (Il2CppChar*)((uintptr_t)L_8), 0, L_9, NULL);
		return L_10;
	}

IL_003e:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_11 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 9)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_12;
		L_12 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_11, NULL);
		NullCheck((MemberInfo_t*)L_12);
		String_t* L_13;
		L_13 = VirtualFuncInvoker0< String_t* >::Invoke(8, (MemberInfo_t*)L_12);
		int32_t L_14 = __this->____length;
		int32_t L_15 = L_14;
		RuntimeObject* L_16 = Box(il2cpp_defaults.int32_class, &L_15);
		String_t* L_17;
		L_17 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(_stringLiteral0DB46164953228904843938099AF66650313FEE5, (RuntimeObject*)L_13, L_16, NULL);
		return L_17;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Span_1_t2C186CD9311CD6C5819274CD880486487FC65AD5 Span_1_Slice_m9556185130BCACFB7FE801756A2AA681F4F75342_gshared (Span_1_t2C186CD9311CD6C5819274CD880486487FC65AD5* __this, int32_t ___0_start, const RuntimeMethod* method) 
{
	ByReference_1_tB7B4B385EF92E13A860B3C68B929D02E132405C8 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_start;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) > ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_000e:
	{
		ByReference_1_tB7B4B385EF92E13A860B3C68B929D02E132405C8 L_2 = __this->____pointer;
		V_0 = L_2;
		XRNodeState_t683158812A1D80A6BC73DB97405BB0B795A9111A* L_3;
		L_3 = IL2CPP_BY_REFERENCE_GET_VALUE(XRNodeState_t683158812A1D80A6BC73DB97405BB0B795A9111A, (Il2CppByReference*)(&V_0));
		int32_t L_4 = ___0_start;
		XRNodeState_t683158812A1D80A6BC73DB97405BB0B795A9111A* L_5;
		L_5 = il2cpp_unsafe_add<XRNodeState_t683158812A1D80A6BC73DB97405BB0B795A9111A,int32_t>(L_3, L_4);
		int32_t L_6 = __this->____length;
		int32_t L_7 = ___0_start;
		Span_1_t2C186CD9311CD6C5819274CD880486487FC65AD5 L_8;
		memset((&L_8), 0, sizeof(L_8));
		Span_1__ctor_mD8BFA56022C77E5DA5F3235B53D8E55644D65039_inline((&L_8), L_5, ((int32_t)il2cpp_codegen_subtract(L_6, L_7)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 18));
		return L_8;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Span_1_t2C186CD9311CD6C5819274CD880486487FC65AD5 Span_1_Slice_mCE4F082EC777E4C2FD0F167395415E8E77E97787_gshared (Span_1_t2C186CD9311CD6C5819274CD880486487FC65AD5* __this, int32_t ___0_start, int32_t ___1_length, const RuntimeMethod* method) 
{
	ByReference_1_tB7B4B385EF92E13A860B3C68B929D02E132405C8 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_start;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		int32_t L_2 = ___1_length;
		int32_t L_3 = __this->____length;
		int32_t L_4 = ___0_start;
		if ((!(((uint32_t)L_2) > ((uint32_t)((int32_t)il2cpp_codegen_subtract(L_3, L_4))))))
		{
			goto IL_0019;
		}
	}

IL_0014:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_0019:
	{
		ByReference_1_tB7B4B385EF92E13A860B3C68B929D02E132405C8 L_5 = __this->____pointer;
		V_0 = L_5;
		XRNodeState_t683158812A1D80A6BC73DB97405BB0B795A9111A* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(XRNodeState_t683158812A1D80A6BC73DB97405BB0B795A9111A, (Il2CppByReference*)(&V_0));
		int32_t L_7 = ___0_start;
		XRNodeState_t683158812A1D80A6BC73DB97405BB0B795A9111A* L_8;
		L_8 = il2cpp_unsafe_add<XRNodeState_t683158812A1D80A6BC73DB97405BB0B795A9111A,int32_t>(L_6, L_7);
		int32_t L_9 = ___1_length;
		Span_1_t2C186CD9311CD6C5819274CD880486487FC65AD5 L_10;
		memset((&L_10), 0, sizeof(L_10));
		Span_1__ctor_mD8BFA56022C77E5DA5F3235B53D8E55644D65039_inline((&L_10), L_8, L_9, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 18));
		return L_10;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XRNodeStateU5BU5D_tEC64805398059D44C2FBA68AABAEFFB262B93845* Span_1_ToArray_m4425B0092B1A4993DA5CFEEAE68EE1ECB6612986_gshared (Span_1_t2C186CD9311CD6C5819274CD880486487FC65AD5* __this, const RuntimeMethod* method) 
{
	ByReference_1_tB7B4B385EF92E13A860B3C68B929D02E132405C8 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->____length;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		XRNodeStateU5BU5D_tEC64805398059D44C2FBA68AABAEFFB262B93845* L_1;
		L_1 = Array_Empty_TisXRNodeState_t683158812A1D80A6BC73DB97405BB0B795A9111A_mAAEF2CC67A3D794C33C643E1B633B5E2CC2D05BF_inline(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 19));
		return L_1;
	}

IL_000e:
	{
		int32_t L_2 = __this->____length;
		XRNodeStateU5BU5D_tEC64805398059D44C2FBA68AABAEFFB262B93845* L_3 = (XRNodeStateU5BU5D_tEC64805398059D44C2FBA68AABAEFFB262B93845*)(XRNodeStateU5BU5D_tEC64805398059D44C2FBA68AABAEFFB262B93845*)SZArrayNew(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 20), (uint32_t)L_2);
		XRNodeStateU5BU5D_tEC64805398059D44C2FBA68AABAEFFB262B93845* L_4 = L_3;
		NullCheck((RuntimeArray*)L_4);
		uint8_t* L_5;
		L_5 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_4, NULL);
		XRNodeState_t683158812A1D80A6BC73DB97405BB0B795A9111A* L_6;
		L_6 = il2cpp_unsafe_as_ref<XRNodeState_t683158812A1D80A6BC73DB97405BB0B795A9111A>(L_5);
		ByReference_1_tB7B4B385EF92E13A860B3C68B929D02E132405C8 L_7 = __this->____pointer;
		V_0 = L_7;
		XRNodeState_t683158812A1D80A6BC73DB97405BB0B795A9111A* L_8;
		L_8 = IL2CPP_BY_REFERENCE_GET_VALUE(XRNodeState_t683158812A1D80A6BC73DB97405BB0B795A9111A, (Il2CppByReference*)(&V_0));
		int32_t L_9 = __this->____length;
		Buffer_Memmove_TisXRNodeState_t683158812A1D80A6BC73DB97405BB0B795A9111A_m9BBFC512D1D3429949038E5AEA1D4A79CD1DCD3B(L_6, L_8, (uint64_t)((int64_t)L_9), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 15));
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Span_1_get_Length_m1AAE29E9DC0ED6DC7011806FFA7B6DE1641D8D01_gshared (Span_1_t2C186CD9311CD6C5819274CD880486487FC65AD5* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____length;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Span_1_Equals_m5FA23E60026DCCDED3C5A2BFDC13FF82278BBEE6_gshared (Span_1_t2C186CD9311CD6C5819274CD880486487FC65AD5* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral69508A540AFD085A745316DD7D6345B1C8CC662D)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Span_1_GetHashCode_mC1222502B06D3D95A15CF17A729FBC4A11BFA41A_gshared (Span_1_t2C186CD9311CD6C5819274CD880486487FC65AD5* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralECE618215BAC99C6FD12D8A273CC2118945EDCC8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Span_1_t2C186CD9311CD6C5819274CD880486487FC65AD5 Span_1_op_Implicit_m3D6FA7A48D6BACA5A5344549F89D80CC3FB5D052_gshared (XRNodeStateU5BU5D_tEC64805398059D44C2FBA68AABAEFFB262B93845* ___0_array, const RuntimeMethod* method) 
{
	{
		XRNodeStateU5BU5D_tEC64805398059D44C2FBA68AABAEFFB262B93845* L_0 = ___0_array;
		Span_1_t2C186CD9311CD6C5819274CD880486487FC65AD5 L_1;
		memset((&L_1), 0, sizeof(L_1));
		Span_1__ctor_m18FED6B7D9CC641149EE6A8D26F4F83ACF26BC76_inline((&L_1), L_0, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 21));
		return L_1;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1__ctor_m94A95CF4DF158FDF992CC13DA185B637335D84C6_gshared (Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54* __this, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___0_array, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_tE7A3A53452487AB9BCB918AC1C5A795CF215388A = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2));
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_T_tE7A3A53452487AB9BCB918AC1C5A795CF215388A);
	Il2CppFullySharedGenericAny V_0 = alloca(SizeOf_T_tE7A3A53452487AB9BCB918AC1C5A795CF215388A);
	memset(V_0, 0, SizeOf_T_tE7A3A53452487AB9BCB918AC1C5A795CF215388A);
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_000b;
		}
	}
	{
		il2cpp_codegen_initobj(__this, sizeof(Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54));
		return;
	}

IL_000b:
	{
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_0, SizeOf_T_tE7A3A53452487AB9BCB918AC1C5A795CF215388A);
		il2cpp_codegen_memcpy(L_1, V_0, SizeOf_T_tE7A3A53452487AB9BCB918AC1C5A795CF215388A);
		bool L_2 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2), L_1);
		if (L_2)
		{
			goto IL_0037;
		}
	}
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_3 = ___0_array;
		NullCheck((RuntimeObject*)L_3);
		Type_t* L_4;
		L_4 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3((RuntimeObject*)L_3, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_5 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_6;
		L_6 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_5, NULL);
		bool L_7;
		L_7 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_4, L_6, NULL);
		if (!L_7)
		{
			goto IL_0037;
		}
	}
	{
		ThrowHelper_ThrowArrayTypeMismatchException_m781AD7A903FEA43FAE3137977E6BC5F9BAEBC590(NULL);
	}

IL_0037:
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_8 = ___0_array;
		NullCheck((RuntimeArray*)L_8);
		uint8_t* L_9;
		L_9 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_8, NULL);
		Il2CppFullySharedGenericAny* L_10;
		L_10 = il2cpp_unsafe_as_ref<Il2CppFullySharedGenericAny>(L_9);
		ByReference_1_t607C1F3BC28B0E21B969461CDB0720FB01A82141 L_11;
		memset((&L_11), 0, sizeof(L_11));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_11), L_10);
		__this->____pointer = L_11;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_12 = ___0_array;
		NullCheck(L_12);
		__this->____length = ((int32_t)(((RuntimeArray*)L_12)->max_length));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1__ctor_m663A61429C38D76851892CB8A3E875E44548618D_gshared (Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54* __this, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___0_array, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_tE7A3A53452487AB9BCB918AC1C5A795CF215388A = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2));
	const Il2CppFullySharedGenericAny L_3 = alloca(SizeOf_T_tE7A3A53452487AB9BCB918AC1C5A795CF215388A);
	Il2CppFullySharedGenericAny V_0 = alloca(SizeOf_T_tE7A3A53452487AB9BCB918AC1C5A795CF215388A);
	memset(V_0, 0, SizeOf_T_tE7A3A53452487AB9BCB918AC1C5A795CF215388A);
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		int32_t L_1 = ___1_start;
		if (L_1)
		{
			goto IL_0009;
		}
	}
	{
		int32_t L_2 = ___2_length;
		if (!L_2)
		{
			goto IL_000e;
		}
	}

IL_0009:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_000e:
	{
		il2cpp_codegen_initobj(__this, sizeof(Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54));
		return;
	}

IL_0016:
	{
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_0, SizeOf_T_tE7A3A53452487AB9BCB918AC1C5A795CF215388A);
		il2cpp_codegen_memcpy(L_3, V_0, SizeOf_T_tE7A3A53452487AB9BCB918AC1C5A795CF215388A);
		bool L_4 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2), L_3);
		if (L_4)
		{
			goto IL_0042;
		}
	}
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_5 = ___0_array;
		NullCheck((RuntimeObject*)L_5);
		Type_t* L_6;
		L_6 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3((RuntimeObject*)L_5, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		bool L_9;
		L_9 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_6, L_8, NULL);
		if (!L_9)
		{
			goto IL_0042;
		}
	}
	{
		ThrowHelper_ThrowArrayTypeMismatchException_m781AD7A903FEA43FAE3137977E6BC5F9BAEBC590(NULL);
	}

IL_0042:
	{
		int32_t L_10 = ___1_start;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_11 = ___0_array;
		NullCheck(L_11);
		if ((!(((uint32_t)L_10) <= ((uint32_t)((int32_t)(((RuntimeArray*)L_11)->max_length))))))
		{
			goto IL_0050;
		}
	}
	{
		int32_t L_12 = ___2_length;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_13 = ___0_array;
		NullCheck(L_13);
		int32_t L_14 = ___1_start;
		if ((!(((uint32_t)L_12) > ((uint32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_13)->max_length)), L_14))))))
		{
			goto IL_0055;
		}
	}

IL_0050:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_0055:
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_15 = ___0_array;
		NullCheck((RuntimeArray*)L_15);
		uint8_t* L_16;
		L_16 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_15, NULL);
		Il2CppFullySharedGenericAny* L_17;
		L_17 = il2cpp_unsafe_as_ref<Il2CppFullySharedGenericAny>(L_16);
		int32_t L_18 = ___1_start;
		Il2CppFullySharedGenericAny* L_19;
		L_19 = ((  Il2CppFullySharedGenericAny* (*) (Il2CppFullySharedGenericAny*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 7)))(L_17, L_18, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 7));
		ByReference_1_t607C1F3BC28B0E21B969461CDB0720FB01A82141 L_20;
		memset((&L_20), 0, sizeof(L_20));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_20), L_19);
		__this->____pointer = L_20;
		int32_t L_21 = ___2_length;
		__this->____length = L_21;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1__ctor_m5599DAEC88C08C9797F461E977BF22E14E3C3008_gshared (Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54* __this, void* ___0_pointer, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		bool L_0;
		L_0 = il2cpp_codegen_is_reference_or_contains_references(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 8));
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_1 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 9)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_2;
		L_2 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_1, NULL);
		ThrowHelper_ThrowInvalidTypeWithPointersNotSupported_m5707DE408588F6EAC3FC7D10F9520308CF8C8CCF(L_2, NULL);
	}

IL_0016:
	{
		int32_t L_3 = ___1_length;
		if ((((int32_t)L_3) >= ((int32_t)0)))
		{
			goto IL_001f;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_001f:
	{
		void* L_4 = ___0_pointer;
		Il2CppFullySharedGenericAny* L_5;
		L_5 = il2cpp_unsafe_as_ref<Il2CppFullySharedGenericAny>((uint8_t*)L_4);
		ByReference_1_t607C1F3BC28B0E21B969461CDB0720FB01A82141 L_6;
		memset((&L_6), 0, sizeof(L_6));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_6), L_5);
		__this->____pointer = L_6;
		int32_t L_7 = ___1_length;
		__this->____length = L_7;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1__ctor_mBA868F06359701D9950DEB1B10F52F848E9FF6DA_gshared (Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54* __this, Il2CppFullySharedGenericAny* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		Il2CppFullySharedGenericAny* L_0 = ___0_ptr;
		ByReference_1_t607C1F3BC28B0E21B969461CDB0720FB01A82141 L_1;
		memset((&L_1), 0, sizeof(L_1));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_1), L_0);
		__this->____pointer = L_1;
		int32_t L_2 = ___1_length;
		__this->____length = L_2;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppFullySharedGenericAny* Span_1_get_Item_m9C593C1A8E070D42D9DC7DB6C73CECDFB5626B81_gshared (Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	ByReference_1_t607C1F3BC28B0E21B969461CDB0720FB01A82141 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_index;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowIndexOutOfRangeException_m86F753A24E2765A35546BA6352A7E4F0BB8A66B5(NULL);
	}

IL_000e:
	{
		ByReference_1_t607C1F3BC28B0E21B969461CDB0720FB01A82141 L_2 = __this->____pointer;
		V_0 = L_2;
		Il2CppFullySharedGenericAny* L_3;
		L_3 = IL2CPP_BY_REFERENCE_GET_VALUE(Il2CppFullySharedGenericAny, (Il2CppByReference*)(&V_0));
		int32_t L_4 = ___0_index;
		Il2CppFullySharedGenericAny* L_5;
		L_5 = ((  Il2CppFullySharedGenericAny* (*) (Il2CppFullySharedGenericAny*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 7)))(L_3, L_4, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 7));
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppFullySharedGenericAny* Span_1_GetPinnableReference_mBC5955DDAAEA56F142B5C441DB6FBD96F2AB6ADB_gshared (Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54* __this, const RuntimeMethod* method) 
{
	ByReference_1_t607C1F3BC28B0E21B969461CDB0720FB01A82141 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->____length;
		if (L_0)
		{
			goto IL_0010;
		}
	}
	{
		Il2CppFullySharedGenericAny* L_1;
		L_1 = il2cpp_unsafe_as_ref<Il2CppFullySharedGenericAny>((void*)((uintptr_t)0));
		return L_1;
	}

IL_0010:
	{
		ByReference_1_t607C1F3BC28B0E21B969461CDB0720FB01A82141 L_2 = __this->____pointer;
		V_0 = L_2;
		Il2CppFullySharedGenericAny* L_3;
		L_3 = IL2CPP_BY_REFERENCE_GET_VALUE(Il2CppFullySharedGenericAny, (Il2CppByReference*)(&V_0));
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1_Clear_m11A4E1CD4E1718E30A0C2DA5934B04EDE635A447_gshared (Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54* __this, const RuntimeMethod* method) 
{
	ByReference_1_t607C1F3BC28B0E21B969461CDB0720FB01A82141 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		bool L_0;
		L_0 = il2cpp_codegen_is_reference_or_contains_references(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 8));
		if (!L_0)
		{
			goto IL_0034;
		}
	}
	{
		ByReference_1_t607C1F3BC28B0E21B969461CDB0720FB01A82141 L_1 = __this->____pointer;
		V_0 = L_1;
		Il2CppFullySharedGenericAny* L_2;
		L_2 = IL2CPP_BY_REFERENCE_GET_VALUE(Il2CppFullySharedGenericAny, (Il2CppByReference*)(&V_0));
		intptr_t* L_3;
		L_3 = il2cpp_unsafe_as_ref<intptr_t>(L_2);
		int32_t L_4 = __this->____length;
		int32_t L_5;
		L_5 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 11)))(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 11));
		int32_t L_6;
		L_6 = IntPtr_get_Size_m1FAAA59DA73D7E32BB1AB55DD92A90AFE3251DBE(NULL);
		SpanHelpers_ClearWithReferences_m9641D8B6DC3AE81B4B0734BBA0E477EF131CD430(L_3, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_4), ((int64_t)((int32_t)(L_5/L_6))))), NULL);
		return;
	}

IL_0034:
	{
		ByReference_1_t607C1F3BC28B0E21B969461CDB0720FB01A82141 L_7 = __this->____pointer;
		V_0 = L_7;
		Il2CppFullySharedGenericAny* L_8;
		L_8 = IL2CPP_BY_REFERENCE_GET_VALUE(Il2CppFullySharedGenericAny, (Il2CppByReference*)(&V_0));
		uint8_t* L_9;
		L_9 = il2cpp_unsafe_as_ref<uint8_t>(L_8);
		int32_t L_10 = __this->____length;
		int32_t L_11;
		L_11 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 11)))(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 11));
		SpanHelpers_ClearWithoutReferences_m65DB2925AE7A5FF88BB3EA1BF90513C9ADF0653D(L_9, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_10), ((int64_t)L_11))), NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1_Fill_m6EAE11FECC435B38881A2D1F4D4575D178BCE162_gshared (Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54* __this, Il2CppFullySharedGenericAny ___0_value, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_tE7A3A53452487AB9BCB918AC1C5A795CF215388A = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2));
	const Il2CppFullySharedGenericAny L_3 = alloca(SizeOf_T_tE7A3A53452487AB9BCB918AC1C5A795CF215388A);
	const Il2CppFullySharedGenericAny L_19 = L_3;
	const Il2CppFullySharedGenericAny L_64 = L_3;
	const Il2CppFullySharedGenericAny L_85 = L_3;
	const Il2CppFullySharedGenericAny L_24 = alloca(SizeOf_T_tE7A3A53452487AB9BCB918AC1C5A795CF215388A);
	const Il2CppFullySharedGenericAny L_69 = L_24;
	const Il2CppFullySharedGenericAny L_29 = alloca(SizeOf_T_tE7A3A53452487AB9BCB918AC1C5A795CF215388A);
	const Il2CppFullySharedGenericAny L_74 = L_29;
	const Il2CppFullySharedGenericAny L_34 = alloca(SizeOf_T_tE7A3A53452487AB9BCB918AC1C5A795CF215388A);
	const Il2CppFullySharedGenericAny L_79 = L_34;
	const Il2CppFullySharedGenericAny L_39 = alloca(SizeOf_T_tE7A3A53452487AB9BCB918AC1C5A795CF215388A);
	const Il2CppFullySharedGenericAny L_44 = alloca(SizeOf_T_tE7A3A53452487AB9BCB918AC1C5A795CF215388A);
	const Il2CppFullySharedGenericAny L_49 = alloca(SizeOf_T_tE7A3A53452487AB9BCB918AC1C5A795CF215388A);
	const Il2CppFullySharedGenericAny L_54 = alloca(SizeOf_T_tE7A3A53452487AB9BCB918AC1C5A795CF215388A);
	uint32_t V_0 = 0;
	Il2CppFullySharedGenericAny V_1 = alloca(SizeOf_T_tE7A3A53452487AB9BCB918AC1C5A795CF215388A);
	memset(V_1, 0, SizeOf_T_tE7A3A53452487AB9BCB918AC1C5A795CF215388A);
	ByReference_1_t607C1F3BC28B0E21B969461CDB0720FB01A82141 V_2;
	memset((&V_2), 0, sizeof(V_2));
	uint64_t V_3 = 0;
	Il2CppFullySharedGenericAny* V_4 = NULL;
	uint64_t V_5 = 0;
	uint64_t V_6 = 0;
	{
		int32_t L_0;
		L_0 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 11)))(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 11));
		if ((!(((uint32_t)L_0) == ((uint32_t)1))))
		{
			goto IL_0037;
		}
	}
	{
		int32_t L_1 = __this->____length;
		V_0 = (uint32_t)L_1;
		uint32_t L_2 = V_0;
		if (L_2)
		{
			goto IL_0013;
		}
	}
	{
		return;
	}

IL_0013:
	{
		il2cpp_codegen_memcpy(L_3, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2)) ? ___0_value : &___0_value), SizeOf_T_tE7A3A53452487AB9BCB918AC1C5A795CF215388A);
		il2cpp_codegen_memcpy(V_1, L_3, SizeOf_T_tE7A3A53452487AB9BCB918AC1C5A795CF215388A);
		ByReference_1_t607C1F3BC28B0E21B969461CDB0720FB01A82141 L_4 = __this->____pointer;
		V_2 = L_4;
		Il2CppFullySharedGenericAny* L_5;
		L_5 = IL2CPP_BY_REFERENCE_GET_VALUE(Il2CppFullySharedGenericAny, (Il2CppByReference*)(&V_2));
		uint8_t* L_6;
		L_6 = il2cpp_unsafe_as_ref<uint8_t>(L_5);
		uint8_t* L_7;
		L_7 = il2cpp_unsafe_as_ref<uint8_t>((Il2CppFullySharedGenericAny*)V_1);
		int32_t L_8 = *((uint8_t*)L_7);
		uint32_t L_9 = V_0;
		Unsafe_InitBlockUnaligned_m6F2353EB9ABC9320E61629FAEE23948C80BFF03A(L_6, (uint8_t)L_8, L_9, NULL);
		return;
	}

IL_0037:
	{
		int32_t L_10 = __this->____length;
		V_3 = (uint64_t)((int64_t)(uint64_t)((uint32_t)L_10));
		uint64_t L_11 = V_3;
		if (L_11)
		{
			goto IL_0043;
		}
	}
	{
		return;
	}

IL_0043:
	{
		ByReference_1_t607C1F3BC28B0E21B969461CDB0720FB01A82141 L_12 = __this->____pointer;
		V_2 = L_12;
		Il2CppFullySharedGenericAny* L_13;
		L_13 = IL2CPP_BY_REFERENCE_GET_VALUE(Il2CppFullySharedGenericAny, (Il2CppByReference*)(&V_2));
		V_4 = L_13;
		int32_t L_14;
		L_14 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 11)))(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 11));
		V_5 = (uint64_t)((int64_t)(uint64_t)((uint32_t)L_14));
		V_6 = (uint64_t)((int64_t)0);
		goto IL_0110;
	}

IL_0064:
	{
		Il2CppFullySharedGenericAny* L_15 = V_4;
		uint64_t L_16 = V_6;
		uint64_t L_17 = V_5;
		Il2CppFullySharedGenericAny* L_18;
		L_18 = ((  Il2CppFullySharedGenericAny* (*) (Il2CppFullySharedGenericAny*, uint64_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 12)))(L_15, (uint64_t)((int64_t)il2cpp_codegen_multiply((int64_t)L_16, (int64_t)L_17)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 12));
		il2cpp_codegen_memcpy(L_19, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2)) ? ___0_value : &___0_value), SizeOf_T_tE7A3A53452487AB9BCB918AC1C5A795CF215388A);
		il2cpp_codegen_memcpy((Il2CppFullySharedGenericAny*)L_18, L_19, SizeOf_T_tE7A3A53452487AB9BCB918AC1C5A795CF215388A);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2), (void**)(Il2CppFullySharedGenericAny*)L_18, (void*)L_19);
		Il2CppFullySharedGenericAny* L_20 = V_4;
		uint64_t L_21 = V_6;
		uint64_t L_22 = V_5;
		Il2CppFullySharedGenericAny* L_23;
		L_23 = ((  Il2CppFullySharedGenericAny* (*) (Il2CppFullySharedGenericAny*, uint64_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 12)))(L_20, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_21, ((int64_t)1))), (int64_t)L_22)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 12));
		il2cpp_codegen_memcpy(L_24, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2)) ? ___0_value : &___0_value), SizeOf_T_tE7A3A53452487AB9BCB918AC1C5A795CF215388A);
		il2cpp_codegen_memcpy((Il2CppFullySharedGenericAny*)L_23, L_24, SizeOf_T_tE7A3A53452487AB9BCB918AC1C5A795CF215388A);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2), (void**)(Il2CppFullySharedGenericAny*)L_23, (void*)L_24);
		Il2CppFullySharedGenericAny* L_25 = V_4;
		uint64_t L_26 = V_6;
		uint64_t L_27 = V_5;
		Il2CppFullySharedGenericAny* L_28;
		L_28 = ((  Il2CppFullySharedGenericAny* (*) (Il2CppFullySharedGenericAny*, uint64_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 12)))(L_25, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_26, ((int64_t)2))), (int64_t)L_27)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 12));
		il2cpp_codegen_memcpy(L_29, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2)) ? ___0_value : &___0_value), SizeOf_T_tE7A3A53452487AB9BCB918AC1C5A795CF215388A);
		il2cpp_codegen_memcpy((Il2CppFullySharedGenericAny*)L_28, L_29, SizeOf_T_tE7A3A53452487AB9BCB918AC1C5A795CF215388A);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2), (void**)(Il2CppFullySharedGenericAny*)L_28, (void*)L_29);
		Il2CppFullySharedGenericAny* L_30 = V_4;
		uint64_t L_31 = V_6;
		uint64_t L_32 = V_5;
		Il2CppFullySharedGenericAny* L_33;
		L_33 = ((  Il2CppFullySharedGenericAny* (*) (Il2CppFullySharedGenericAny*, uint64_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 12)))(L_30, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_31, ((int64_t)3))), (int64_t)L_32)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 12));
		il2cpp_codegen_memcpy(L_34, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2)) ? ___0_value : &___0_value), SizeOf_T_tE7A3A53452487AB9BCB918AC1C5A795CF215388A);
		il2cpp_codegen_memcpy((Il2CppFullySharedGenericAny*)L_33, L_34, SizeOf_T_tE7A3A53452487AB9BCB918AC1C5A795CF215388A);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2), (void**)(Il2CppFullySharedGenericAny*)L_33, (void*)L_34);
		Il2CppFullySharedGenericAny* L_35 = V_4;
		uint64_t L_36 = V_6;
		uint64_t L_37 = V_5;
		Il2CppFullySharedGenericAny* L_38;
		L_38 = ((  Il2CppFullySharedGenericAny* (*) (Il2CppFullySharedGenericAny*, uint64_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 12)))(L_35, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_36, ((int64_t)4))), (int64_t)L_37)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 12));
		il2cpp_codegen_memcpy(L_39, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2)) ? ___0_value : &___0_value), SizeOf_T_tE7A3A53452487AB9BCB918AC1C5A795CF215388A);
		il2cpp_codegen_memcpy((Il2CppFullySharedGenericAny*)L_38, L_39, SizeOf_T_tE7A3A53452487AB9BCB918AC1C5A795CF215388A);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2), (void**)(Il2CppFullySharedGenericAny*)L_38, (void*)L_39);
		Il2CppFullySharedGenericAny* L_40 = V_4;
		uint64_t L_41 = V_6;
		uint64_t L_42 = V_5;
		Il2CppFullySharedGenericAny* L_43;
		L_43 = ((  Il2CppFullySharedGenericAny* (*) (Il2CppFullySharedGenericAny*, uint64_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 12)))(L_40, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_41, ((int64_t)5))), (int64_t)L_42)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 12));
		il2cpp_codegen_memcpy(L_44, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2)) ? ___0_value : &___0_value), SizeOf_T_tE7A3A53452487AB9BCB918AC1C5A795CF215388A);
		il2cpp_codegen_memcpy((Il2CppFullySharedGenericAny*)L_43, L_44, SizeOf_T_tE7A3A53452487AB9BCB918AC1C5A795CF215388A);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2), (void**)(Il2CppFullySharedGenericAny*)L_43, (void*)L_44);
		Il2CppFullySharedGenericAny* L_45 = V_4;
		uint64_t L_46 = V_6;
		uint64_t L_47 = V_5;
		Il2CppFullySharedGenericAny* L_48;
		L_48 = ((  Il2CppFullySharedGenericAny* (*) (Il2CppFullySharedGenericAny*, uint64_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 12)))(L_45, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_46, ((int64_t)6))), (int64_t)L_47)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 12));
		il2cpp_codegen_memcpy(L_49, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2)) ? ___0_value : &___0_value), SizeOf_T_tE7A3A53452487AB9BCB918AC1C5A795CF215388A);
		il2cpp_codegen_memcpy((Il2CppFullySharedGenericAny*)L_48, L_49, SizeOf_T_tE7A3A53452487AB9BCB918AC1C5A795CF215388A);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2), (void**)(Il2CppFullySharedGenericAny*)L_48, (void*)L_49);
		Il2CppFullySharedGenericAny* L_50 = V_4;
		uint64_t L_51 = V_6;
		uint64_t L_52 = V_5;
		Il2CppFullySharedGenericAny* L_53;
		L_53 = ((  Il2CppFullySharedGenericAny* (*) (Il2CppFullySharedGenericAny*, uint64_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 12)))(L_50, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_51, ((int64_t)7))), (int64_t)L_52)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 12));
		il2cpp_codegen_memcpy(L_54, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2)) ? ___0_value : &___0_value), SizeOf_T_tE7A3A53452487AB9BCB918AC1C5A795CF215388A);
		il2cpp_codegen_memcpy((Il2CppFullySharedGenericAny*)L_53, L_54, SizeOf_T_tE7A3A53452487AB9BCB918AC1C5A795CF215388A);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2), (void**)(Il2CppFullySharedGenericAny*)L_53, (void*)L_54);
		uint64_t L_55 = V_6;
		V_6 = (uint64_t)((int64_t)il2cpp_codegen_add((int64_t)L_55, ((int64_t)8)));
	}

IL_0110:
	{
		uint64_t L_56 = V_6;
		uint64_t L_57 = V_3;
		if ((!(((uint64_t)L_56) >= ((uint64_t)((int64_t)((int64_t)L_57&((int64_t)((int32_t)-8))))))))
		{
			goto IL_0064;
		}
	}
	{
		uint64_t L_58 = V_6;
		uint64_t L_59 = V_3;
		if ((!(((uint64_t)L_58) < ((uint64_t)((int64_t)((int64_t)L_59&((int64_t)((int32_t)-4))))))))
		{
			goto IL_0198;
		}
	}
	{
		Il2CppFullySharedGenericAny* L_60 = V_4;
		uint64_t L_61 = V_6;
		uint64_t L_62 = V_5;
		Il2CppFullySharedGenericAny* L_63;
		L_63 = ((  Il2CppFullySharedGenericAny* (*) (Il2CppFullySharedGenericAny*, uint64_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 12)))(L_60, (uint64_t)((int64_t)il2cpp_codegen_multiply((int64_t)L_61, (int64_t)L_62)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 12));
		il2cpp_codegen_memcpy(L_64, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2)) ? ___0_value : &___0_value), SizeOf_T_tE7A3A53452487AB9BCB918AC1C5A795CF215388A);
		il2cpp_codegen_memcpy((Il2CppFullySharedGenericAny*)L_63, L_64, SizeOf_T_tE7A3A53452487AB9BCB918AC1C5A795CF215388A);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2), (void**)(Il2CppFullySharedGenericAny*)L_63, (void*)L_64);
		Il2CppFullySharedGenericAny* L_65 = V_4;
		uint64_t L_66 = V_6;
		uint64_t L_67 = V_5;
		Il2CppFullySharedGenericAny* L_68;
		L_68 = ((  Il2CppFullySharedGenericAny* (*) (Il2CppFullySharedGenericAny*, uint64_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 12)))(L_65, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_66, ((int64_t)1))), (int64_t)L_67)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 12));
		il2cpp_codegen_memcpy(L_69, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2)) ? ___0_value : &___0_value), SizeOf_T_tE7A3A53452487AB9BCB918AC1C5A795CF215388A);
		il2cpp_codegen_memcpy((Il2CppFullySharedGenericAny*)L_68, L_69, SizeOf_T_tE7A3A53452487AB9BCB918AC1C5A795CF215388A);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2), (void**)(Il2CppFullySharedGenericAny*)L_68, (void*)L_69);
		Il2CppFullySharedGenericAny* L_70 = V_4;
		uint64_t L_71 = V_6;
		uint64_t L_72 = V_5;
		Il2CppFullySharedGenericAny* L_73;
		L_73 = ((  Il2CppFullySharedGenericAny* (*) (Il2CppFullySharedGenericAny*, uint64_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 12)))(L_70, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_71, ((int64_t)2))), (int64_t)L_72)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 12));
		il2cpp_codegen_memcpy(L_74, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2)) ? ___0_value : &___0_value), SizeOf_T_tE7A3A53452487AB9BCB918AC1C5A795CF215388A);
		il2cpp_codegen_memcpy((Il2CppFullySharedGenericAny*)L_73, L_74, SizeOf_T_tE7A3A53452487AB9BCB918AC1C5A795CF215388A);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2), (void**)(Il2CppFullySharedGenericAny*)L_73, (void*)L_74);
		Il2CppFullySharedGenericAny* L_75 = V_4;
		uint64_t L_76 = V_6;
		uint64_t L_77 = V_5;
		Il2CppFullySharedGenericAny* L_78;
		L_78 = ((  Il2CppFullySharedGenericAny* (*) (Il2CppFullySharedGenericAny*, uint64_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 12)))(L_75, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_76, ((int64_t)3))), (int64_t)L_77)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 12));
		il2cpp_codegen_memcpy(L_79, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2)) ? ___0_value : &___0_value), SizeOf_T_tE7A3A53452487AB9BCB918AC1C5A795CF215388A);
		il2cpp_codegen_memcpy((Il2CppFullySharedGenericAny*)L_78, L_79, SizeOf_T_tE7A3A53452487AB9BCB918AC1C5A795CF215388A);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2), (void**)(Il2CppFullySharedGenericAny*)L_78, (void*)L_79);
		uint64_t L_80 = V_6;
		V_6 = (uint64_t)((int64_t)il2cpp_codegen_add((int64_t)L_80, ((int64_t)4)));
		goto IL_0198;
	}

IL_017f:
	{
		Il2CppFullySharedGenericAny* L_81 = V_4;
		uint64_t L_82 = V_6;
		uint64_t L_83 = V_5;
		Il2CppFullySharedGenericAny* L_84;
		L_84 = ((  Il2CppFullySharedGenericAny* (*) (Il2CppFullySharedGenericAny*, uint64_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 12)))(L_81, (uint64_t)((int64_t)il2cpp_codegen_multiply((int64_t)L_82, (int64_t)L_83)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 12));
		il2cpp_codegen_memcpy(L_85, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2)) ? ___0_value : &___0_value), SizeOf_T_tE7A3A53452487AB9BCB918AC1C5A795CF215388A);
		il2cpp_codegen_memcpy((Il2CppFullySharedGenericAny*)L_84, L_85, SizeOf_T_tE7A3A53452487AB9BCB918AC1C5A795CF215388A);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2), (void**)(Il2CppFullySharedGenericAny*)L_84, (void*)L_85);
		uint64_t L_86 = V_6;
		V_6 = (uint64_t)((int64_t)il2cpp_codegen_add((int64_t)L_86, ((int64_t)1)));
	}

IL_0198:
	{
		uint64_t L_87 = V_6;
		uint64_t L_88 = V_3;
		if ((!(((uint64_t)L_87) >= ((uint64_t)L_88))))
		{
			goto IL_017f;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1_CopyTo_m87850B36DC83BF310EC6136E6D14DC5634F96F05_gshared (Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54* __this, Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54 ___0_destination, const RuntimeMethod* method) 
{
	ByReference_1_t607C1F3BC28B0E21B969461CDB0720FB01A82141 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->____length;
		int32_t L_1;
		L_1 = ((  int32_t (*) (Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 13)))((&___0_destination), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 13));
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_0038;
		}
	}
	{
		Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54 L_2 = ___0_destination;
		ByReference_1_t607C1F3BC28B0E21B969461CDB0720FB01A82141 L_3 = L_2.____pointer;
		V_0 = L_3;
		Il2CppFullySharedGenericAny* L_4;
		L_4 = IL2CPP_BY_REFERENCE_GET_VALUE(Il2CppFullySharedGenericAny, (Il2CppByReference*)(&V_0));
		ByReference_1_t607C1F3BC28B0E21B969461CDB0720FB01A82141 L_5 = __this->____pointer;
		V_0 = L_5;
		Il2CppFullySharedGenericAny* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(Il2CppFullySharedGenericAny, (Il2CppByReference*)(&V_0));
		int32_t L_7 = __this->____length;
		((  void (*) (Il2CppFullySharedGenericAny*, Il2CppFullySharedGenericAny*, uint64_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 15)))(L_4, L_6, (uint64_t)((int64_t)L_7), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 15));
		return;
	}

IL_0038:
	{
		ThrowHelper_ThrowArgumentException_DestinationTooShort_m6468934A3BBB67DBC5BAEF7A64D91BD5BBBB3D4D(NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Span_1_TryCopyTo_m464C81DB101113B73DCD3F43C757D672CD893B37_gshared (Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54* __this, Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54 ___0_destination, const RuntimeMethod* method) 
{
	bool V_0 = false;
	ByReference_1_t607C1F3BC28B0E21B969461CDB0720FB01A82141 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		V_0 = (bool)0;
		int32_t L_0 = __this->____length;
		int32_t L_1;
		L_1 = ((  int32_t (*) (Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 13)))((&___0_destination), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 13));
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_003b;
		}
	}
	{
		Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54 L_2 = ___0_destination;
		ByReference_1_t607C1F3BC28B0E21B969461CDB0720FB01A82141 L_3 = L_2.____pointer;
		V_1 = L_3;
		Il2CppFullySharedGenericAny* L_4;
		L_4 = IL2CPP_BY_REFERENCE_GET_VALUE(Il2CppFullySharedGenericAny, (Il2CppByReference*)(&V_1));
		ByReference_1_t607C1F3BC28B0E21B969461CDB0720FB01A82141 L_5 = __this->____pointer;
		V_1 = L_5;
		Il2CppFullySharedGenericAny* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(Il2CppFullySharedGenericAny, (Il2CppByReference*)(&V_1));
		int32_t L_7 = __this->____length;
		((  void (*) (Il2CppFullySharedGenericAny*, Il2CppFullySharedGenericAny*, uint64_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 15)))(L_4, L_6, (uint64_t)((int64_t)L_7), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 15));
		V_0 = (bool)1;
	}

IL_003b:
	{
		bool L_8 = V_0;
		return L_8;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_tC416A5627E04F69CA2947A2A13F0A1DF096CABAC Span_1_op_Implicit_m704A5B9FD25EEA23756181A8EB40B875387A6C01_gshared (Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54 ___0_span, const RuntimeMethod* method) 
{
	ByReference_1_t607C1F3BC28B0E21B969461CDB0720FB01A82141 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54 L_0 = ___0_span;
		ByReference_1_t607C1F3BC28B0E21B969461CDB0720FB01A82141 L_1 = L_0.____pointer;
		V_0 = L_1;
		Il2CppFullySharedGenericAny* L_2;
		L_2 = IL2CPP_BY_REFERENCE_GET_VALUE(Il2CppFullySharedGenericAny, (Il2CppByReference*)(&V_0));
		Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54 L_3 = ___0_span;
		int32_t L_4 = L_3.____length;
		ReadOnlySpan_1_tC416A5627E04F69CA2947A2A13F0A1DF096CABAC L_5;
		memset((&L_5), 0, sizeof(L_5));
		ReadOnlySpan_1__ctor_mFA6EE52BCF39100AE30C79E73F0F972182D0CA2A_inline((&L_5), L_2, L_4, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 17));
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Span_1_ToString_m51B73F86825C26B44AF2E5C9152D807780EB84ED_gshared (Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0DB46164953228904843938099AF66650313FEE5);
		s_Il2CppMethodInitialized = true;
	}
	Il2CppChar* V_0 = NULL;
	ByReference_1_t607C1F3BC28B0E21B969461CDB0720FB01A82141 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 9)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.char_class->byval_arg) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		bool L_4;
		L_4 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_1, L_3, NULL);
		if (!L_4)
		{
			goto IL_003e;
		}
	}
	{
		ByReference_1_t607C1F3BC28B0E21B969461CDB0720FB01A82141 L_5 = __this->____pointer;
		V_1 = L_5;
		Il2CppFullySharedGenericAny* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(Il2CppFullySharedGenericAny, (Il2CppByReference*)(&V_1));
		Il2CppChar* L_7;
		L_7 = il2cpp_unsafe_as_ref<Il2CppChar>(L_6);
		V_0 = L_7;
		Il2CppChar* L_8 = V_0;
		int32_t L_9 = __this->____length;
		String_t* L_10;
		L_10 = String_CreateString_m3F8794FEB452558B8A68C65E1F0B603B3D94E0E2(NULL, (Il2CppChar*)((uintptr_t)L_8), 0, L_9, NULL);
		return L_10;
	}

IL_003e:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_11 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 9)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_12;
		L_12 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_11, NULL);
		NullCheck((MemberInfo_t*)L_12);
		String_t* L_13;
		L_13 = VirtualFuncInvoker0< String_t* >::Invoke(8, (MemberInfo_t*)L_12);
		int32_t L_14 = __this->____length;
		int32_t L_15 = L_14;
		RuntimeObject* L_16 = Box(il2cpp_defaults.int32_class, &L_15);
		String_t* L_17;
		L_17 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(_stringLiteral0DB46164953228904843938099AF66650313FEE5, (RuntimeObject*)L_13, L_16, NULL);
		return L_17;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54 Span_1_Slice_mC857EC48EAC26C4D9A5C6302BA08A7796020C8E1_gshared (Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54* __this, int32_t ___0_start, const RuntimeMethod* method) 
{
	ByReference_1_t607C1F3BC28B0E21B969461CDB0720FB01A82141 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_start;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) > ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_000e:
	{
		ByReference_1_t607C1F3BC28B0E21B969461CDB0720FB01A82141 L_2 = __this->____pointer;
		V_0 = L_2;
		Il2CppFullySharedGenericAny* L_3;
		L_3 = IL2CPP_BY_REFERENCE_GET_VALUE(Il2CppFullySharedGenericAny, (Il2CppByReference*)(&V_0));
		int32_t L_4 = ___0_start;
		Il2CppFullySharedGenericAny* L_5;
		L_5 = ((  Il2CppFullySharedGenericAny* (*) (Il2CppFullySharedGenericAny*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 7)))(L_3, L_4, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 7));
		int32_t L_6 = __this->____length;
		int32_t L_7 = ___0_start;
		Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54 L_8;
		memset((&L_8), 0, sizeof(L_8));
		Span_1__ctor_mBA868F06359701D9950DEB1B10F52F848E9FF6DA_inline((&L_8), L_5, ((int32_t)il2cpp_codegen_subtract(L_6, L_7)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 18));
		return L_8;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54 Span_1_Slice_m4D5C2B295B93702EF492EC0660798DE3BFC3FFDA_gshared (Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54* __this, int32_t ___0_start, int32_t ___1_length, const RuntimeMethod* method) 
{
	ByReference_1_t607C1F3BC28B0E21B969461CDB0720FB01A82141 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_start;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		int32_t L_2 = ___1_length;
		int32_t L_3 = __this->____length;
		int32_t L_4 = ___0_start;
		if ((!(((uint32_t)L_2) > ((uint32_t)((int32_t)il2cpp_codegen_subtract(L_3, L_4))))))
		{
			goto IL_0019;
		}
	}

IL_0014:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_0019:
	{
		ByReference_1_t607C1F3BC28B0E21B969461CDB0720FB01A82141 L_5 = __this->____pointer;
		V_0 = L_5;
		Il2CppFullySharedGenericAny* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(Il2CppFullySharedGenericAny, (Il2CppByReference*)(&V_0));
		int32_t L_7 = ___0_start;
		Il2CppFullySharedGenericAny* L_8;
		L_8 = ((  Il2CppFullySharedGenericAny* (*) (Il2CppFullySharedGenericAny*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 7)))(L_6, L_7, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 7));
		int32_t L_9 = ___1_length;
		Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54 L_10;
		memset((&L_10), 0, sizeof(L_10));
		Span_1__ctor_mBA868F06359701D9950DEB1B10F52F848E9FF6DA_inline((&L_10), L_8, L_9, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 18));
		return L_10;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* Span_1_ToArray_mBB0A9E11BBAA9FDE1D0C045FBA14F4CD3E84773E_gshared (Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54* __this, const RuntimeMethod* method) 
{
	ByReference_1_t607C1F3BC28B0E21B969461CDB0720FB01A82141 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->____length;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_1;
		L_1 = ((  __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 19)))(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 19));
		return L_1;
	}

IL_000e:
	{
		int32_t L_2 = __this->____length;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_3 = (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)(__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)SZArrayNew(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 20), (uint32_t)L_2);
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_4 = L_3;
		NullCheck((RuntimeArray*)L_4);
		uint8_t* L_5;
		L_5 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_4, NULL);
		Il2CppFullySharedGenericAny* L_6;
		L_6 = il2cpp_unsafe_as_ref<Il2CppFullySharedGenericAny>(L_5);
		ByReference_1_t607C1F3BC28B0E21B969461CDB0720FB01A82141 L_7 = __this->____pointer;
		V_0 = L_7;
		Il2CppFullySharedGenericAny* L_8;
		L_8 = IL2CPP_BY_REFERENCE_GET_VALUE(Il2CppFullySharedGenericAny, (Il2CppByReference*)(&V_0));
		int32_t L_9 = __this->____length;
		((  void (*) (Il2CppFullySharedGenericAny*, Il2CppFullySharedGenericAny*, uint64_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 15)))(L_6, L_8, (uint64_t)((int64_t)L_9), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 15));
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Span_1_get_Length_m4CED98A19744D579382FDCEDEF16DBC11586BE1C_gshared (Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____length;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Span_1_Equals_m40491EA378B979FB91CD7BC368CA95BE931D13F0_gshared (Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral69508A540AFD085A745316DD7D6345B1C8CC662D)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Span_1_GetHashCode_m3061054FFC5FFBF234FA34F5319A12C2E9241B3F_gshared (Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralECE618215BAC99C6FD12D8A273CC2118945EDCC8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54 Span_1_op_Implicit_mEAE085B1C884F71E5CF01E09CD6F285B497BBDE8_gshared (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___0_array, const RuntimeMethod* method) 
{
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_0 = ___0_array;
		Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54 L_1;
		memset((&L_1), 0, sizeof(L_1));
		Span_1__ctor_m94A95CF4DF158FDF992CC13DA185B637335D84C6_inline((&L_1), L_0, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 21));
		return L_1;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1__ctor_m13E8571165DB8DB1A1909B44B65D4F220890AC8F_gshared (Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7* __this, jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* ___0_array, const RuntimeMethod* method) 
{
	jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_000b;
		}
	}
	{
		il2cpp_codegen_initobj(__this, sizeof(Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7));
		return;
	}

IL_000b:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225));
		goto IL_0037;
	}

IL_0037:
	{
		jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* L_2 = ___0_array;
		NullCheck((RuntimeArray*)L_2);
		uint8_t* L_3;
		L_3 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_2, NULL);
		jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225* L_4;
		L_4 = il2cpp_unsafe_as_ref<jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225>(L_3);
		ByReference_1_tE0748F88701C64E729013351521FC3EED28DE1DC L_5;
		memset((&L_5), 0, sizeof(L_5));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_5), L_4);
		__this->____pointer = L_5;
		jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* L_6 = ___0_array;
		NullCheck(L_6);
		__this->____length = ((int32_t)(((RuntimeArray*)L_6)->max_length));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1__ctor_m6124823D76DBCB84B895045F4072C5D8BAD54418_gshared (Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7* __this, jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* ___0_array, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method) 
{
	jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		int32_t L_1 = ___1_start;
		if (L_1)
		{
			goto IL_0009;
		}
	}
	{
		int32_t L_2 = ___2_length;
		if (!L_2)
		{
			goto IL_000e;
		}
	}

IL_0009:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_000e:
	{
		il2cpp_codegen_initobj(__this, sizeof(Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7));
		return;
	}

IL_0016:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225));
		goto IL_0042;
	}

IL_0042:
	{
		int32_t L_4 = ___1_start;
		jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* L_5 = ___0_array;
		NullCheck(L_5);
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)(((RuntimeArray*)L_5)->max_length))))))
		{
			goto IL_0050;
		}
	}
	{
		int32_t L_6 = ___2_length;
		jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* L_7 = ___0_array;
		NullCheck(L_7);
		int32_t L_8 = ___1_start;
		if ((!(((uint32_t)L_6) > ((uint32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_7)->max_length)), L_8))))))
		{
			goto IL_0055;
		}
	}

IL_0050:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_0055:
	{
		jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* L_9 = ___0_array;
		NullCheck((RuntimeArray*)L_9);
		uint8_t* L_10;
		L_10 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_9, NULL);
		jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225* L_11;
		L_11 = il2cpp_unsafe_as_ref<jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225>(L_10);
		int32_t L_12 = ___1_start;
		jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225* L_13;
		L_13 = il2cpp_unsafe_add<jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225,int32_t>(L_11, L_12);
		ByReference_1_tE0748F88701C64E729013351521FC3EED28DE1DC L_14;
		memset((&L_14), 0, sizeof(L_14));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_14), L_13);
		__this->____pointer = L_14;
		int32_t L_15 = ___2_length;
		__this->____length = L_15;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1__ctor_mA426411A0F5450BCD564C621BB663B1273773B99_gshared (Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7* __this, void* ___0_pointer, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		goto IL_0016;
	}

IL_0016:
	{
		int32_t L_0 = ___1_length;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_001f;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_001f:
	{
		void* L_1 = ___0_pointer;
		jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225* L_2;
		L_2 = il2cpp_unsafe_as_ref<jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225>((uint8_t*)L_1);
		ByReference_1_tE0748F88701C64E729013351521FC3EED28DE1DC L_3;
		memset((&L_3), 0, sizeof(L_3));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_3), L_2);
		__this->____pointer = L_3;
		int32_t L_4 = ___1_length;
		__this->____length = L_4;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1__ctor_m1DA3ED274C046791E48A52F415066C7C86B031D1_gshared (Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7* __this, jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225* L_0 = ___0_ptr;
		ByReference_1_tE0748F88701C64E729013351521FC3EED28DE1DC L_1;
		memset((&L_1), 0, sizeof(L_1));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_1), L_0);
		__this->____pointer = L_1;
		int32_t L_2 = ___1_length;
		__this->____length = L_2;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225* Span_1_get_Item_mB5F50B0D20B3D8E944F96112B8B4DAC7D17650EA_gshared (Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	ByReference_1_tE0748F88701C64E729013351521FC3EED28DE1DC V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_index;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowIndexOutOfRangeException_m86F753A24E2765A35546BA6352A7E4F0BB8A66B5(NULL);
	}

IL_000e:
	{
		ByReference_1_tE0748F88701C64E729013351521FC3EED28DE1DC L_2 = __this->____pointer;
		V_0 = L_2;
		jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225* L_3;
		L_3 = IL2CPP_BY_REFERENCE_GET_VALUE(jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225, (Il2CppByReference*)(&V_0));
		int32_t L_4 = ___0_index;
		jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225* L_5;
		L_5 = il2cpp_unsafe_add<jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225,int32_t>(L_3, L_4);
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225* Span_1_GetPinnableReference_m56356CEAA8E67F718DC61AF6B7C4A08BB6CB7049_gshared (Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7* __this, const RuntimeMethod* method) 
{
	ByReference_1_tE0748F88701C64E729013351521FC3EED28DE1DC V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->____length;
		if (L_0)
		{
			goto IL_0010;
		}
	}
	{
		jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225* L_1;
		L_1 = il2cpp_unsafe_as_ref<jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225>((void*)((uintptr_t)0));
		return L_1;
	}

IL_0010:
	{
		ByReference_1_tE0748F88701C64E729013351521FC3EED28DE1DC L_2 = __this->____pointer;
		V_0 = L_2;
		jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225* L_3;
		L_3 = IL2CPP_BY_REFERENCE_GET_VALUE(jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225, (Il2CppByReference*)(&V_0));
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1_Clear_m91ABCA1B4BF1AC38DEC21718D6A7A946A42A62EF_gshared (Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7* __this, const RuntimeMethod* method) 
{
	ByReference_1_tE0748F88701C64E729013351521FC3EED28DE1DC V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		goto IL_0034;
	}

IL_0034:
	{
		ByReference_1_tE0748F88701C64E729013351521FC3EED28DE1DC L_0 = __this->____pointer;
		V_0 = L_0;
		jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225* L_1;
		L_1 = IL2CPP_BY_REFERENCE_GET_VALUE(jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225, (Il2CppByReference*)(&V_0));
		uint8_t* L_2;
		L_2 = il2cpp_unsafe_as_ref<uint8_t>(L_1);
		int32_t L_3 = __this->____length;
		int32_t L_4;
		L_4 = il2cpp_unsafe_sizeof<jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225>();
		SpanHelpers_ClearWithoutReferences_m65DB2925AE7A5FF88BB3EA1BF90513C9ADF0653D(L_2, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_3), ((int64_t)L_4))), NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1_Fill_m5F214A54E6119724209D9A6022CF24DDB9C02AF6_gshared (Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7* __this, jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225 ___0_value, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225 V_1;
	memset((&V_1), 0, sizeof(V_1));
	ByReference_1_tE0748F88701C64E729013351521FC3EED28DE1DC V_2;
	memset((&V_2), 0, sizeof(V_2));
	uint64_t V_3 = 0;
	jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225* V_4 = NULL;
	uint64_t V_5 = 0;
	uint64_t V_6 = 0;
	{
		int32_t L_0;
		L_0 = il2cpp_unsafe_sizeof<jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225>();
		if ((!(((uint32_t)L_0) == ((uint32_t)1))))
		{
			goto IL_0037;
		}
	}
	{
		int32_t L_1 = __this->____length;
		V_0 = (uint32_t)L_1;
		uint32_t L_2 = V_0;
		if (L_2)
		{
			goto IL_0013;
		}
	}
	{
		return;
	}

IL_0013:
	{
		jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225 L_3 = ___0_value;
		V_1 = L_3;
		ByReference_1_tE0748F88701C64E729013351521FC3EED28DE1DC L_4 = __this->____pointer;
		V_2 = L_4;
		jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225* L_5;
		L_5 = IL2CPP_BY_REFERENCE_GET_VALUE(jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225, (Il2CppByReference*)(&V_2));
		uint8_t* L_6;
		L_6 = il2cpp_unsafe_as_ref<uint8_t>(L_5);
		uint8_t* L_7;
		L_7 = il2cpp_unsafe_as_ref<uint8_t>((&V_1));
		int32_t L_8 = *((uint8_t*)L_7);
		uint32_t L_9 = V_0;
		Unsafe_InitBlockUnaligned_m6F2353EB9ABC9320E61629FAEE23948C80BFF03A(L_6, (uint8_t)L_8, L_9, NULL);
		return;
	}

IL_0037:
	{
		int32_t L_10 = __this->____length;
		V_3 = (uint64_t)((int64_t)(uint64_t)((uint32_t)L_10));
		uint64_t L_11 = V_3;
		if (L_11)
		{
			goto IL_0043;
		}
	}
	{
		return;
	}

IL_0043:
	{
		ByReference_1_tE0748F88701C64E729013351521FC3EED28DE1DC L_12 = __this->____pointer;
		V_2 = L_12;
		jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225* L_13;
		L_13 = IL2CPP_BY_REFERENCE_GET_VALUE(jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225, (Il2CppByReference*)(&V_2));
		V_4 = L_13;
		int32_t L_14;
		L_14 = il2cpp_unsafe_sizeof<jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225>();
		V_5 = (uint64_t)((int64_t)(uint64_t)((uint32_t)L_14));
		V_6 = (uint64_t)((int64_t)0);
		goto IL_0110;
	}

IL_0064:
	{
		jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225* L_15 = V_4;
		uint64_t L_16 = V_6;
		uint64_t L_17 = V_5;
		jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225* L_18;
		L_18 = il2cpp_unsafe_add_byte_offset<jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225,uint64_t>(L_15, (uint64_t)((int64_t)il2cpp_codegen_multiply((int64_t)L_16, (int64_t)L_17)));
		jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225 L_19 = ___0_value;
		*(jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225*)L_18 = L_19;
		jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225* L_20 = V_4;
		uint64_t L_21 = V_6;
		uint64_t L_22 = V_5;
		jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225* L_23;
		L_23 = il2cpp_unsafe_add_byte_offset<jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225,uint64_t>(L_20, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_21, ((int64_t)1))), (int64_t)L_22)));
		jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225 L_24 = ___0_value;
		*(jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225*)L_23 = L_24;
		jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225* L_25 = V_4;
		uint64_t L_26 = V_6;
		uint64_t L_27 = V_5;
		jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225* L_28;
		L_28 = il2cpp_unsafe_add_byte_offset<jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225,uint64_t>(L_25, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_26, ((int64_t)2))), (int64_t)L_27)));
		jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225 L_29 = ___0_value;
		*(jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225*)L_28 = L_29;
		jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225* L_30 = V_4;
		uint64_t L_31 = V_6;
		uint64_t L_32 = V_5;
		jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225* L_33;
		L_33 = il2cpp_unsafe_add_byte_offset<jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225,uint64_t>(L_30, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_31, ((int64_t)3))), (int64_t)L_32)));
		jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225 L_34 = ___0_value;
		*(jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225*)L_33 = L_34;
		jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225* L_35 = V_4;
		uint64_t L_36 = V_6;
		uint64_t L_37 = V_5;
		jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225* L_38;
		L_38 = il2cpp_unsafe_add_byte_offset<jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225,uint64_t>(L_35, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_36, ((int64_t)4))), (int64_t)L_37)));
		jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225 L_39 = ___0_value;
		*(jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225*)L_38 = L_39;
		jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225* L_40 = V_4;
		uint64_t L_41 = V_6;
		uint64_t L_42 = V_5;
		jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225* L_43;
		L_43 = il2cpp_unsafe_add_byte_offset<jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225,uint64_t>(L_40, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_41, ((int64_t)5))), (int64_t)L_42)));
		jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225 L_44 = ___0_value;
		*(jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225*)L_43 = L_44;
		jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225* L_45 = V_4;
		uint64_t L_46 = V_6;
		uint64_t L_47 = V_5;
		jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225* L_48;
		L_48 = il2cpp_unsafe_add_byte_offset<jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225,uint64_t>(L_45, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_46, ((int64_t)6))), (int64_t)L_47)));
		jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225 L_49 = ___0_value;
		*(jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225*)L_48 = L_49;
		jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225* L_50 = V_4;
		uint64_t L_51 = V_6;
		uint64_t L_52 = V_5;
		jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225* L_53;
		L_53 = il2cpp_unsafe_add_byte_offset<jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225,uint64_t>(L_50, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_51, ((int64_t)7))), (int64_t)L_52)));
		jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225 L_54 = ___0_value;
		*(jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225*)L_53 = L_54;
		uint64_t L_55 = V_6;
		V_6 = (uint64_t)((int64_t)il2cpp_codegen_add((int64_t)L_55, ((int64_t)8)));
	}

IL_0110:
	{
		uint64_t L_56 = V_6;
		uint64_t L_57 = V_3;
		if ((!(((uint64_t)L_56) >= ((uint64_t)((int64_t)((int64_t)L_57&((int64_t)((int32_t)-8))))))))
		{
			goto IL_0064;
		}
	}
	{
		uint64_t L_58 = V_6;
		uint64_t L_59 = V_3;
		if ((!(((uint64_t)L_58) < ((uint64_t)((int64_t)((int64_t)L_59&((int64_t)((int32_t)-4))))))))
		{
			goto IL_0198;
		}
	}
	{
		jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225* L_60 = V_4;
		uint64_t L_61 = V_6;
		uint64_t L_62 = V_5;
		jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225* L_63;
		L_63 = il2cpp_unsafe_add_byte_offset<jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225,uint64_t>(L_60, (uint64_t)((int64_t)il2cpp_codegen_multiply((int64_t)L_61, (int64_t)L_62)));
		jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225 L_64 = ___0_value;
		*(jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225*)L_63 = L_64;
		jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225* L_65 = V_4;
		uint64_t L_66 = V_6;
		uint64_t L_67 = V_5;
		jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225* L_68;
		L_68 = il2cpp_unsafe_add_byte_offset<jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225,uint64_t>(L_65, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_66, ((int64_t)1))), (int64_t)L_67)));
		jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225 L_69 = ___0_value;
		*(jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225*)L_68 = L_69;
		jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225* L_70 = V_4;
		uint64_t L_71 = V_6;
		uint64_t L_72 = V_5;
		jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225* L_73;
		L_73 = il2cpp_unsafe_add_byte_offset<jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225,uint64_t>(L_70, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_71, ((int64_t)2))), (int64_t)L_72)));
		jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225 L_74 = ___0_value;
		*(jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225*)L_73 = L_74;
		jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225* L_75 = V_4;
		uint64_t L_76 = V_6;
		uint64_t L_77 = V_5;
		jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225* L_78;
		L_78 = il2cpp_unsafe_add_byte_offset<jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225,uint64_t>(L_75, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_76, ((int64_t)3))), (int64_t)L_77)));
		jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225 L_79 = ___0_value;
		*(jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225*)L_78 = L_79;
		uint64_t L_80 = V_6;
		V_6 = (uint64_t)((int64_t)il2cpp_codegen_add((int64_t)L_80, ((int64_t)4)));
		goto IL_0198;
	}

IL_017f:
	{
		jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225* L_81 = V_4;
		uint64_t L_82 = V_6;
		uint64_t L_83 = V_5;
		jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225* L_84;
		L_84 = il2cpp_unsafe_add_byte_offset<jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225,uint64_t>(L_81, (uint64_t)((int64_t)il2cpp_codegen_multiply((int64_t)L_82, (int64_t)L_83)));
		jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225 L_85 = ___0_value;
		*(jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225*)L_84 = L_85;
		uint64_t L_86 = V_6;
		V_6 = (uint64_t)((int64_t)il2cpp_codegen_add((int64_t)L_86, ((int64_t)1)));
	}

IL_0198:
	{
		uint64_t L_87 = V_6;
		uint64_t L_88 = V_3;
		if ((!(((uint64_t)L_87) >= ((uint64_t)L_88))))
		{
			goto IL_017f;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1_CopyTo_m4A21D34A3385E3970F0A5816F70F7333A06BE56B_gshared (Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7* __this, Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 ___0_destination, const RuntimeMethod* method) 
{
	ByReference_1_tE0748F88701C64E729013351521FC3EED28DE1DC V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->____length;
		int32_t L_1;
		L_1 = Span_1_get_Length_m9C7E8DECAA7368617C319A866C6A9E960F140BF7_inline((&___0_destination), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 13));
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_0038;
		}
	}
	{
		Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_2 = ___0_destination;
		ByReference_1_tE0748F88701C64E729013351521FC3EED28DE1DC L_3 = L_2.____pointer;
		V_0 = L_3;
		jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225* L_4;
		L_4 = IL2CPP_BY_REFERENCE_GET_VALUE(jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225, (Il2CppByReference*)(&V_0));
		ByReference_1_tE0748F88701C64E729013351521FC3EED28DE1DC L_5 = __this->____pointer;
		V_0 = L_5;
		jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225, (Il2CppByReference*)(&V_0));
		int32_t L_7 = __this->____length;
		Buffer_Memmove_Tisjvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225_m48D2E426B92CBE28782CF29BD703DF063CFF422D(L_4, L_6, (uint64_t)((int64_t)L_7), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 15));
		return;
	}

IL_0038:
	{
		ThrowHelper_ThrowArgumentException_DestinationTooShort_m6468934A3BBB67DBC5BAEF7A64D91BD5BBBB3D4D(NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Span_1_TryCopyTo_m99A85634C362E5EB0DA6C2D017EBB178D32307F9_gshared (Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7* __this, Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 ___0_destination, const RuntimeMethod* method) 
{
	bool V_0 = false;
	ByReference_1_tE0748F88701C64E729013351521FC3EED28DE1DC V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		V_0 = (bool)0;
		int32_t L_0 = __this->____length;
		int32_t L_1;
		L_1 = Span_1_get_Length_m9C7E8DECAA7368617C319A866C6A9E960F140BF7_inline((&___0_destination), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 13));
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_003b;
		}
	}
	{
		Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_2 = ___0_destination;
		ByReference_1_tE0748F88701C64E729013351521FC3EED28DE1DC L_3 = L_2.____pointer;
		V_1 = L_3;
		jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225* L_4;
		L_4 = IL2CPP_BY_REFERENCE_GET_VALUE(jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225, (Il2CppByReference*)(&V_1));
		ByReference_1_tE0748F88701C64E729013351521FC3EED28DE1DC L_5 = __this->____pointer;
		V_1 = L_5;
		jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225, (Il2CppByReference*)(&V_1));
		int32_t L_7 = __this->____length;
		Buffer_Memmove_Tisjvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225_m48D2E426B92CBE28782CF29BD703DF063CFF422D(L_4, L_6, (uint64_t)((int64_t)L_7), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 15));
		V_0 = (bool)1;
	}

IL_003b:
	{
		bool L_8 = V_0;
		return L_8;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_tEC1E786ADECA91AF68E558734868FBB77E05D964 Span_1_op_Implicit_m17AF33F5674C02E3D7679E066E81DB5609B84BAB_gshared (Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 ___0_span, const RuntimeMethod* method) 
{
	ByReference_1_tE0748F88701C64E729013351521FC3EED28DE1DC V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_0 = ___0_span;
		ByReference_1_tE0748F88701C64E729013351521FC3EED28DE1DC L_1 = L_0.____pointer;
		V_0 = L_1;
		jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225* L_2;
		L_2 = IL2CPP_BY_REFERENCE_GET_VALUE(jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225, (Il2CppByReference*)(&V_0));
		Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_3 = ___0_span;
		int32_t L_4 = L_3.____length;
		ReadOnlySpan_1_tEC1E786ADECA91AF68E558734868FBB77E05D964 L_5;
		memset((&L_5), 0, sizeof(L_5));
		ReadOnlySpan_1__ctor_m655719167577EE7B24CAAF5A9D0995E0259B6A84_inline((&L_5), L_2, L_4, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 17));
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Span_1_ToString_m981EF00CBB9E2175CE158EE6AF832867FCAB1BAE_gshared (Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0DB46164953228904843938099AF66650313FEE5);
		s_Il2CppMethodInitialized = true;
	}
	Il2CppChar* V_0 = NULL;
	ByReference_1_tE0748F88701C64E729013351521FC3EED28DE1DC V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 9)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.char_class->byval_arg) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		bool L_4;
		L_4 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_1, L_3, NULL);
		if (!L_4)
		{
			goto IL_003e;
		}
	}
	{
		ByReference_1_tE0748F88701C64E729013351521FC3EED28DE1DC L_5 = __this->____pointer;
		V_1 = L_5;
		jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225, (Il2CppByReference*)(&V_1));
		Il2CppChar* L_7;
		L_7 = il2cpp_unsafe_as_ref<Il2CppChar>(L_6);
		V_0 = L_7;
		Il2CppChar* L_8 = V_0;
		int32_t L_9 = __this->____length;
		String_t* L_10;
		L_10 = String_CreateString_m3F8794FEB452558B8A68C65E1F0B603B3D94E0E2(NULL, (Il2CppChar*)((uintptr_t)L_8), 0, L_9, NULL);
		return L_10;
	}

IL_003e:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_11 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 9)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_12;
		L_12 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_11, NULL);
		NullCheck((MemberInfo_t*)L_12);
		String_t* L_13;
		L_13 = VirtualFuncInvoker0< String_t* >::Invoke(8, (MemberInfo_t*)L_12);
		int32_t L_14 = __this->____length;
		int32_t L_15 = L_14;
		RuntimeObject* L_16 = Box(il2cpp_defaults.int32_class, &L_15);
		String_t* L_17;
		L_17 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(_stringLiteral0DB46164953228904843938099AF66650313FEE5, (RuntimeObject*)L_13, L_16, NULL);
		return L_17;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 Span_1_Slice_m2BA372A81D74723E61E19017C77886B880B5BF29_gshared (Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7* __this, int32_t ___0_start, const RuntimeMethod* method) 
{
	ByReference_1_tE0748F88701C64E729013351521FC3EED28DE1DC V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_start;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) > ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_000e:
	{
		ByReference_1_tE0748F88701C64E729013351521FC3EED28DE1DC L_2 = __this->____pointer;
		V_0 = L_2;
		jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225* L_3;
		L_3 = IL2CPP_BY_REFERENCE_GET_VALUE(jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225, (Il2CppByReference*)(&V_0));
		int32_t L_4 = ___0_start;
		jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225* L_5;
		L_5 = il2cpp_unsafe_add<jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225,int32_t>(L_3, L_4);
		int32_t L_6 = __this->____length;
		int32_t L_7 = ___0_start;
		Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_8;
		memset((&L_8), 0, sizeof(L_8));
		Span_1__ctor_m1DA3ED274C046791E48A52F415066C7C86B031D1_inline((&L_8), L_5, ((int32_t)il2cpp_codegen_subtract(L_6, L_7)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 18));
		return L_8;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 Span_1_Slice_mC2BFF8AEEE5C308DBAE92526A79182BA3523561E_gshared (Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7* __this, int32_t ___0_start, int32_t ___1_length, const RuntimeMethod* method) 
{
	ByReference_1_tE0748F88701C64E729013351521FC3EED28DE1DC V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_start;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		int32_t L_2 = ___1_length;
		int32_t L_3 = __this->____length;
		int32_t L_4 = ___0_start;
		if ((!(((uint32_t)L_2) > ((uint32_t)((int32_t)il2cpp_codegen_subtract(L_3, L_4))))))
		{
			goto IL_0019;
		}
	}

IL_0014:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_0019:
	{
		ByReference_1_tE0748F88701C64E729013351521FC3EED28DE1DC L_5 = __this->____pointer;
		V_0 = L_5;
		jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225, (Il2CppByReference*)(&V_0));
		int32_t L_7 = ___0_start;
		jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225* L_8;
		L_8 = il2cpp_unsafe_add<jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225,int32_t>(L_6, L_7);
		int32_t L_9 = ___1_length;
		Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_10;
		memset((&L_10), 0, sizeof(L_10));
		Span_1__ctor_m1DA3ED274C046791E48A52F415066C7C86B031D1_inline((&L_10), L_8, L_9, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 18));
		return L_10;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* Span_1_ToArray_mB0599718A25BB507D329B31366909FD456AFCEA6_gshared (Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7* __this, const RuntimeMethod* method) 
{
	ByReference_1_tE0748F88701C64E729013351521FC3EED28DE1DC V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->____length;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* L_1;
		L_1 = Array_Empty_Tisjvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225_mD8B08917D1DC7B424036208C74F0A7A6EC83DAAE_inline(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 19));
		return L_1;
	}

IL_000e:
	{
		int32_t L_2 = __this->____length;
		jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* L_3 = (jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F*)(jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F*)SZArrayNew(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 20), (uint32_t)L_2);
		jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* L_4 = L_3;
		NullCheck((RuntimeArray*)L_4);
		uint8_t* L_5;
		L_5 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_4, NULL);
		jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225* L_6;
		L_6 = il2cpp_unsafe_as_ref<jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225>(L_5);
		ByReference_1_tE0748F88701C64E729013351521FC3EED28DE1DC L_7 = __this->____pointer;
		V_0 = L_7;
		jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225* L_8;
		L_8 = IL2CPP_BY_REFERENCE_GET_VALUE(jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225, (Il2CppByReference*)(&V_0));
		int32_t L_9 = __this->____length;
		Buffer_Memmove_Tisjvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225_m48D2E426B92CBE28782CF29BD703DF063CFF422D(L_6, L_8, (uint64_t)((int64_t)L_9), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 15));
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Span_1_get_Length_m9C7E8DECAA7368617C319A866C6A9E960F140BF7_gshared (Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____length;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Span_1_Equals_m9F3E0520692B8B831C6629192F893B72EA9D95D2_gshared (Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral69508A540AFD085A745316DD7D6345B1C8CC662D)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Span_1_GetHashCode_mF597BBC608D68A57C8937FFFA10D01B1617B0349_gshared (Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralECE618215BAC99C6FD12D8A273CC2118945EDCC8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 Span_1_op_Implicit_m2562566D0096520B0F0B4642C72BCFA5460FFE30_gshared (jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* ___0_array, const RuntimeMethod* method) 
{
	{
		jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* L_0 = ___0_array;
		Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_1;
		memset((&L_1), 0, sizeof(L_1));
		Span_1__ctor_m13E8571165DB8DB1A1909B44B65D4F220890AC8F_inline((&L_1), L_0, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 21));
		return L_1;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1__ctor_m9CC9A801484C785265097B625A9BF84CB2E8AA44_gshared (Span_1_t73939D05896281666AE0EFF73CA9AA212455FFCB* __this, FilterUnionU5BU5D_t8778FBF9BC7FE3230BCB228346D0C62BC9A0A94D* ___0_array, const RuntimeMethod* method) 
{
	FilterUnion_t85E549621A2CC33D9102C62C6D82B0865FF80D03 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		FilterUnionU5BU5D_t8778FBF9BC7FE3230BCB228346D0C62BC9A0A94D* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_000b;
		}
	}
	{
		il2cpp_codegen_initobj(__this, sizeof(Span_1_t73939D05896281666AE0EFF73CA9AA212455FFCB));
		return;
	}

IL_000b:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(FilterUnion_t85E549621A2CC33D9102C62C6D82B0865FF80D03));
		goto IL_0037;
	}

IL_0037:
	{
		FilterUnionU5BU5D_t8778FBF9BC7FE3230BCB228346D0C62BC9A0A94D* L_2 = ___0_array;
		NullCheck((RuntimeArray*)L_2);
		uint8_t* L_3;
		L_3 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_2, NULL);
		FilterUnion_t85E549621A2CC33D9102C62C6D82B0865FF80D03* L_4;
		L_4 = il2cpp_unsafe_as_ref<FilterUnion_t85E549621A2CC33D9102C62C6D82B0865FF80D03>(L_3);
		ByReference_1_t8B2B9618906FBC2D3654AB3D0B4D1A067A3C9D4C L_5;
		memset((&L_5), 0, sizeof(L_5));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_5), L_4);
		__this->____pointer = L_5;
		FilterUnionU5BU5D_t8778FBF9BC7FE3230BCB228346D0C62BC9A0A94D* L_6 = ___0_array;
		NullCheck(L_6);
		__this->____length = ((int32_t)(((RuntimeArray*)L_6)->max_length));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1__ctor_m9D3B69906666780062B0CC31C279B4037A6D66FF_gshared (Span_1_t73939D05896281666AE0EFF73CA9AA212455FFCB* __this, FilterUnionU5BU5D_t8778FBF9BC7FE3230BCB228346D0C62BC9A0A94D* ___0_array, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method) 
{
	FilterUnion_t85E549621A2CC33D9102C62C6D82B0865FF80D03 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		FilterUnionU5BU5D_t8778FBF9BC7FE3230BCB228346D0C62BC9A0A94D* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		int32_t L_1 = ___1_start;
		if (L_1)
		{
			goto IL_0009;
		}
	}
	{
		int32_t L_2 = ___2_length;
		if (!L_2)
		{
			goto IL_000e;
		}
	}

IL_0009:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_000e:
	{
		il2cpp_codegen_initobj(__this, sizeof(Span_1_t73939D05896281666AE0EFF73CA9AA212455FFCB));
		return;
	}

IL_0016:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(FilterUnion_t85E549621A2CC33D9102C62C6D82B0865FF80D03));
		goto IL_0042;
	}

IL_0042:
	{
		int32_t L_4 = ___1_start;
		FilterUnionU5BU5D_t8778FBF9BC7FE3230BCB228346D0C62BC9A0A94D* L_5 = ___0_array;
		NullCheck(L_5);
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)(((RuntimeArray*)L_5)->max_length))))))
		{
			goto IL_0050;
		}
	}
	{
		int32_t L_6 = ___2_length;
		FilterUnionU5BU5D_t8778FBF9BC7FE3230BCB228346D0C62BC9A0A94D* L_7 = ___0_array;
		NullCheck(L_7);
		int32_t L_8 = ___1_start;
		if ((!(((uint32_t)L_6) > ((uint32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_7)->max_length)), L_8))))))
		{
			goto IL_0055;
		}
	}

IL_0050:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_0055:
	{
		FilterUnionU5BU5D_t8778FBF9BC7FE3230BCB228346D0C62BC9A0A94D* L_9 = ___0_array;
		NullCheck((RuntimeArray*)L_9);
		uint8_t* L_10;
		L_10 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_9, NULL);
		FilterUnion_t85E549621A2CC33D9102C62C6D82B0865FF80D03* L_11;
		L_11 = il2cpp_unsafe_as_ref<FilterUnion_t85E549621A2CC33D9102C62C6D82B0865FF80D03>(L_10);
		int32_t L_12 = ___1_start;
		FilterUnion_t85E549621A2CC33D9102C62C6D82B0865FF80D03* L_13;
		L_13 = il2cpp_unsafe_add<FilterUnion_t85E549621A2CC33D9102C62C6D82B0865FF80D03,int32_t>(L_11, L_12);
		ByReference_1_t8B2B9618906FBC2D3654AB3D0B4D1A067A3C9D4C L_14;
		memset((&L_14), 0, sizeof(L_14));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_14), L_13);
		__this->____pointer = L_14;
		int32_t L_15 = ___2_length;
		__this->____length = L_15;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1__ctor_mD793F9843A01CEBC58A81C6394A44F69F5100D4A_gshared (Span_1_t73939D05896281666AE0EFF73CA9AA212455FFCB* __this, void* ___0_pointer, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		goto IL_0016;
	}

IL_0016:
	{
		int32_t L_0 = ___1_length;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_001f;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_001f:
	{
		void* L_1 = ___0_pointer;
		FilterUnion_t85E549621A2CC33D9102C62C6D82B0865FF80D03* L_2;
		L_2 = il2cpp_unsafe_as_ref<FilterUnion_t85E549621A2CC33D9102C62C6D82B0865FF80D03>((uint8_t*)L_1);
		ByReference_1_t8B2B9618906FBC2D3654AB3D0B4D1A067A3C9D4C L_3;
		memset((&L_3), 0, sizeof(L_3));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_3), L_2);
		__this->____pointer = L_3;
		int32_t L_4 = ___1_length;
		__this->____length = L_4;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1__ctor_m9F0AD76F63C6307767B5992FA991815E4F0CF390_gshared (Span_1_t73939D05896281666AE0EFF73CA9AA212455FFCB* __this, FilterUnion_t85E549621A2CC33D9102C62C6D82B0865FF80D03* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		FilterUnion_t85E549621A2CC33D9102C62C6D82B0865FF80D03* L_0 = ___0_ptr;
		ByReference_1_t8B2B9618906FBC2D3654AB3D0B4D1A067A3C9D4C L_1;
		memset((&L_1), 0, sizeof(L_1));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_1), L_0);
		__this->____pointer = L_1;
		int32_t L_2 = ___1_length;
		__this->____length = L_2;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FilterUnion_t85E549621A2CC33D9102C62C6D82B0865FF80D03* Span_1_get_Item_m5477A5CB4A599E976987895F80FA6AB924428CDA_gshared (Span_1_t73939D05896281666AE0EFF73CA9AA212455FFCB* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	ByReference_1_t8B2B9618906FBC2D3654AB3D0B4D1A067A3C9D4C V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_index;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowIndexOutOfRangeException_m86F753A24E2765A35546BA6352A7E4F0BB8A66B5(NULL);
	}

IL_000e:
	{
		ByReference_1_t8B2B9618906FBC2D3654AB3D0B4D1A067A3C9D4C L_2 = __this->____pointer;
		V_0 = L_2;
		FilterUnion_t85E549621A2CC33D9102C62C6D82B0865FF80D03* L_3;
		L_3 = IL2CPP_BY_REFERENCE_GET_VALUE(FilterUnion_t85E549621A2CC33D9102C62C6D82B0865FF80D03, (Il2CppByReference*)(&V_0));
		int32_t L_4 = ___0_index;
		FilterUnion_t85E549621A2CC33D9102C62C6D82B0865FF80D03* L_5;
		L_5 = il2cpp_unsafe_add<FilterUnion_t85E549621A2CC33D9102C62C6D82B0865FF80D03,int32_t>(L_3, L_4);
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FilterUnion_t85E549621A2CC33D9102C62C6D82B0865FF80D03* Span_1_GetPinnableReference_mFD47945A558AD35F2B162BCA1B264B47C61CBC9B_gshared (Span_1_t73939D05896281666AE0EFF73CA9AA212455FFCB* __this, const RuntimeMethod* method) 
{
	ByReference_1_t8B2B9618906FBC2D3654AB3D0B4D1A067A3C9D4C V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->____length;
		if (L_0)
		{
			goto IL_0010;
		}
	}
	{
		FilterUnion_t85E549621A2CC33D9102C62C6D82B0865FF80D03* L_1;
		L_1 = il2cpp_unsafe_as_ref<FilterUnion_t85E549621A2CC33D9102C62C6D82B0865FF80D03>((void*)((uintptr_t)0));
		return L_1;
	}

IL_0010:
	{
		ByReference_1_t8B2B9618906FBC2D3654AB3D0B4D1A067A3C9D4C L_2 = __this->____pointer;
		V_0 = L_2;
		FilterUnion_t85E549621A2CC33D9102C62C6D82B0865FF80D03* L_3;
		L_3 = IL2CPP_BY_REFERENCE_GET_VALUE(FilterUnion_t85E549621A2CC33D9102C62C6D82B0865FF80D03, (Il2CppByReference*)(&V_0));
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1_Clear_m7411699B0348307DE4A5E59D0FE894E90B6D6585_gshared (Span_1_t73939D05896281666AE0EFF73CA9AA212455FFCB* __this, const RuntimeMethod* method) 
{
	ByReference_1_t8B2B9618906FBC2D3654AB3D0B4D1A067A3C9D4C V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		goto IL_0034;
	}

IL_0034:
	{
		ByReference_1_t8B2B9618906FBC2D3654AB3D0B4D1A067A3C9D4C L_0 = __this->____pointer;
		V_0 = L_0;
		FilterUnion_t85E549621A2CC33D9102C62C6D82B0865FF80D03* L_1;
		L_1 = IL2CPP_BY_REFERENCE_GET_VALUE(FilterUnion_t85E549621A2CC33D9102C62C6D82B0865FF80D03, (Il2CppByReference*)(&V_0));
		uint8_t* L_2;
		L_2 = il2cpp_unsafe_as_ref<uint8_t>(L_1);
		int32_t L_3 = __this->____length;
		int32_t L_4;
		L_4 = il2cpp_unsafe_sizeof<FilterUnion_t85E549621A2CC33D9102C62C6D82B0865FF80D03>();
		SpanHelpers_ClearWithoutReferences_m65DB2925AE7A5FF88BB3EA1BF90513C9ADF0653D(L_2, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_3), ((int64_t)L_4))), NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1_Fill_m054D924D08C11AA6DC9FDC730E04C08A80C2D54F_gshared (Span_1_t73939D05896281666AE0EFF73CA9AA212455FFCB* __this, FilterUnion_t85E549621A2CC33D9102C62C6D82B0865FF80D03 ___0_value, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	FilterUnion_t85E549621A2CC33D9102C62C6D82B0865FF80D03 V_1;
	memset((&V_1), 0, sizeof(V_1));
	ByReference_1_t8B2B9618906FBC2D3654AB3D0B4D1A067A3C9D4C V_2;
	memset((&V_2), 0, sizeof(V_2));
	uint64_t V_3 = 0;
	FilterUnion_t85E549621A2CC33D9102C62C6D82B0865FF80D03* V_4 = NULL;
	uint64_t V_5 = 0;
	uint64_t V_6 = 0;
	{
		int32_t L_0;
		L_0 = il2cpp_unsafe_sizeof<FilterUnion_t85E549621A2CC33D9102C62C6D82B0865FF80D03>();
		if ((!(((uint32_t)L_0) == ((uint32_t)1))))
		{
			goto IL_0037;
		}
	}
	{
		int32_t L_1 = __this->____length;
		V_0 = (uint32_t)L_1;
		uint32_t L_2 = V_0;
		if (L_2)
		{
			goto IL_0013;
		}
	}
	{
		return;
	}

IL_0013:
	{
		FilterUnion_t85E549621A2CC33D9102C62C6D82B0865FF80D03 L_3 = ___0_value;
		V_1 = L_3;
		ByReference_1_t8B2B9618906FBC2D3654AB3D0B4D1A067A3C9D4C L_4 = __this->____pointer;
		V_2 = L_4;
		FilterUnion_t85E549621A2CC33D9102C62C6D82B0865FF80D03* L_5;
		L_5 = IL2CPP_BY_REFERENCE_GET_VALUE(FilterUnion_t85E549621A2CC33D9102C62C6D82B0865FF80D03, (Il2CppByReference*)(&V_2));
		uint8_t* L_6;
		L_6 = il2cpp_unsafe_as_ref<uint8_t>(L_5);
		uint8_t* L_7;
		L_7 = il2cpp_unsafe_as_ref<uint8_t>((&V_1));
		int32_t L_8 = *((uint8_t*)L_7);
		uint32_t L_9 = V_0;
		Unsafe_InitBlockUnaligned_m6F2353EB9ABC9320E61629FAEE23948C80BFF03A(L_6, (uint8_t)L_8, L_9, NULL);
		return;
	}

IL_0037:
	{
		int32_t L_10 = __this->____length;
		V_3 = (uint64_t)((int64_t)(uint64_t)((uint32_t)L_10));
		uint64_t L_11 = V_3;
		if (L_11)
		{
			goto IL_0043;
		}
	}
	{
		return;
	}

IL_0043:
	{
		ByReference_1_t8B2B9618906FBC2D3654AB3D0B4D1A067A3C9D4C L_12 = __this->____pointer;
		V_2 = L_12;
		FilterUnion_t85E549621A2CC33D9102C62C6D82B0865FF80D03* L_13;
		L_13 = IL2CPP_BY_REFERENCE_GET_VALUE(FilterUnion_t85E549621A2CC33D9102C62C6D82B0865FF80D03, (Il2CppByReference*)(&V_2));
		V_4 = L_13;
		int32_t L_14;
		L_14 = il2cpp_unsafe_sizeof<FilterUnion_t85E549621A2CC33D9102C62C6D82B0865FF80D03>();
		V_5 = (uint64_t)((int64_t)(uint64_t)((uint32_t)L_14));
		V_6 = (uint64_t)((int64_t)0);
		goto IL_0110;
	}

IL_0064:
	{
		FilterUnion_t85E549621A2CC33D9102C62C6D82B0865FF80D03* L_15 = V_4;
		uint64_t L_16 = V_6;
		uint64_t L_17 = V_5;
		FilterUnion_t85E549621A2CC33D9102C62C6D82B0865FF80D03* L_18;
		L_18 = il2cpp_unsafe_add_byte_offset<FilterUnion_t85E549621A2CC33D9102C62C6D82B0865FF80D03,uint64_t>(L_15, (uint64_t)((int64_t)il2cpp_codegen_multiply((int64_t)L_16, (int64_t)L_17)));
		FilterUnion_t85E549621A2CC33D9102C62C6D82B0865FF80D03 L_19 = ___0_value;
		*(FilterUnion_t85E549621A2CC33D9102C62C6D82B0865FF80D03*)L_18 = L_19;
		FilterUnion_t85E549621A2CC33D9102C62C6D82B0865FF80D03* L_20 = V_4;
		uint64_t L_21 = V_6;
		uint64_t L_22 = V_5;
		FilterUnion_t85E549621A2CC33D9102C62C6D82B0865FF80D03* L_23;
		L_23 = il2cpp_unsafe_add_byte_offset<FilterUnion_t85E549621A2CC33D9102C62C6D82B0865FF80D03,uint64_t>(L_20, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_21, ((int64_t)1))), (int64_t)L_22)));
		FilterUnion_t85E549621A2CC33D9102C62C6D82B0865FF80D03 L_24 = ___0_value;
		*(FilterUnion_t85E549621A2CC33D9102C62C6D82B0865FF80D03*)L_23 = L_24;
		FilterUnion_t85E549621A2CC33D9102C62C6D82B0865FF80D03* L_25 = V_4;
		uint64_t L_26 = V_6;
		uint64_t L_27 = V_5;
		FilterUnion_t85E549621A2CC33D9102C62C6D82B0865FF80D03* L_28;
		L_28 = il2cpp_unsafe_add_byte_offset<FilterUnion_t85E549621A2CC33D9102C62C6D82B0865FF80D03,uint64_t>(L_25, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_26, ((int64_t)2))), (int64_t)L_27)));
		FilterUnion_t85E549621A2CC33D9102C62C6D82B0865FF80D03 L_29 = ___0_value;
		*(FilterUnion_t85E549621A2CC33D9102C62C6D82B0865FF80D03*)L_28 = L_29;
		FilterUnion_t85E549621A2CC33D9102C62C6D82B0865FF80D03* L_30 = V_4;
		uint64_t L_31 = V_6;
		uint64_t L_32 = V_5;
		FilterUnion_t85E549621A2CC33D9102C62C6D82B0865FF80D03* L_33;
		L_33 = il2cpp_unsafe_add_byte_offset<FilterUnion_t85E549621A2CC33D9102C62C6D82B0865FF80D03,uint64_t>(L_30, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_31, ((int64_t)3))), (int64_t)L_32)));
		FilterUnion_t85E549621A2CC33D9102C62C6D82B0865FF80D03 L_34 = ___0_value;
		*(FilterUnion_t85E549621A2CC33D9102C62C6D82B0865FF80D03*)L_33 = L_34;
		FilterUnion_t85E549621A2CC33D9102C62C6D82B0865FF80D03* L_35 = V_4;
		uint64_t L_36 = V_6;
		uint64_t L_37 = V_5;
		FilterUnion_t85E549621A2CC33D9102C62C6D82B0865FF80D03* L_38;
		L_38 = il2cpp_unsafe_add_byte_offset<FilterUnion_t85E549621A2CC33D9102C62C6D82B0865FF80D03,uint64_t>(L_35, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_36, ((int64_t)4))), (int64_t)L_37)));
		FilterUnion_t85E549621A2CC33D9102C62C6D82B0865FF80D03 L_39 = ___0_value;
		*(FilterUnion_t85E549621A2CC33D9102C62C6D82B0865FF80D03*)L_38 = L_39;
		FilterUnion_t85E549621A2CC33D9102C62C6D82B0865FF80D03* L_40 = V_4;
		uint64_t L_41 = V_6;
		uint64_t L_42 = V_5;
		FilterUnion_t85E549621A2CC33D9102C62C6D82B0865FF80D03* L_43;
		L_43 = il2cpp_unsafe_add_byte_offset<FilterUnion_t85E549621A2CC33D9102C62C6D82B0865FF80D03,uint64_t>(L_40, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_41, ((int64_t)5))), (int64_t)L_42)));
		FilterUnion_t85E549621A2CC33D9102C62C6D82B0865FF80D03 L_44 = ___0_value;
		*(FilterUnion_t85E549621A2CC33D9102C62C6D82B0865FF80D03*)L_43 = L_44;
		FilterUnion_t85E549621A2CC33D9102C62C6D82B0865FF80D03* L_45 = V_4;
		uint64_t L_46 = V_6;
		uint64_t L_47 = V_5;
		FilterUnion_t85E549621A2CC33D9102C62C6D82B0865FF80D03* L_48;
		L_48 = il2cpp_unsafe_add_byte_offset<FilterUnion_t85E549621A2CC33D9102C62C6D82B0865FF80D03,uint64_t>(L_45, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_46, ((int64_t)6))), (int64_t)L_47)));
		FilterUnion_t85E549621A2CC33D9102C62C6D82B0865FF80D03 L_49 = ___0_value;
		*(FilterUnion_t85E549621A2CC33D9102C62C6D82B0865FF80D03*)L_48 = L_49;
		FilterUnion_t85E549621A2CC33D9102C62C6D82B0865FF80D03* L_50 = V_4;
		uint64_t L_51 = V_6;
		uint64_t L_52 = V_5;
		FilterUnion_t85E549621A2CC33D9102C62C6D82B0865FF80D03* L_53;
		L_53 = il2cpp_unsafe_add_byte_offset<FilterUnion_t85E549621A2CC33D9102C62C6D82B0865FF80D03,uint64_t>(L_50, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_51, ((int64_t)7))), (int64_t)L_52)));
		FilterUnion_t85E549621A2CC33D9102C62C6D82B0865FF80D03 L_54 = ___0_value;
		*(FilterUnion_t85E549621A2CC33D9102C62C6D82B0865FF80D03*)L_53 = L_54;
		uint64_t L_55 = V_6;
		V_6 = (uint64_t)((int64_t)il2cpp_codegen_add((int64_t)L_55, ((int64_t)8)));
	}

IL_0110:
	{
		uint64_t L_56 = V_6;
		uint64_t L_57 = V_3;
		if ((!(((uint64_t)L_56) >= ((uint64_t)((int64_t)((int64_t)L_57&((int64_t)((int32_t)-8))))))))
		{
			goto IL_0064;
		}
	}
	{
		uint64_t L_58 = V_6;
		uint64_t L_59 = V_3;
		if ((!(((uint64_t)L_58) < ((uint64_t)((int64_t)((int64_t)L_59&((int64_t)((int32_t)-4))))))))
		{
			goto IL_0198;
		}
	}
	{
		FilterUnion_t85E549621A2CC33D9102C62C6D82B0865FF80D03* L_60 = V_4;
		uint64_t L_61 = V_6;
		uint64_t L_62 = V_5;
		FilterUnion_t85E549621A2CC33D9102C62C6D82B0865FF80D03* L_63;
		L_63 = il2cpp_unsafe_add_byte_offset<FilterUnion_t85E549621A2CC33D9102C62C6D82B0865FF80D03,uint64_t>(L_60, (uint64_t)((int64_t)il2cpp_codegen_multiply((int64_t)L_61, (int64_t)L_62)));
		FilterUnion_t85E549621A2CC33D9102C62C6D82B0865FF80D03 L_64 = ___0_value;
		*(FilterUnion_t85E549621A2CC33D9102C62C6D82B0865FF80D03*)L_63 = L_64;
		FilterUnion_t85E549621A2CC33D9102C62C6D82B0865FF80D03* L_65 = V_4;
		uint64_t L_66 = V_6;
		uint64_t L_67 = V_5;
		FilterUnion_t85E549621A2CC33D9102C62C6D82B0865FF80D03* L_68;
		L_68 = il2cpp_unsafe_add_byte_offset<FilterUnion_t85E549621A2CC33D9102C62C6D82B0865FF80D03,uint64_t>(L_65, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_66, ((int64_t)1))), (int64_t)L_67)));
		FilterUnion_t85E549621A2CC33D9102C62C6D82B0865FF80D03 L_69 = ___0_value;
		*(FilterUnion_t85E549621A2CC33D9102C62C6D82B0865FF80D03*)L_68 = L_69;
		FilterUnion_t85E549621A2CC33D9102C62C6D82B0865FF80D03* L_70 = V_4;
		uint64_t L_71 = V_6;
		uint64_t L_72 = V_5;
		FilterUnion_t85E549621A2CC33D9102C62C6D82B0865FF80D03* L_73;
		L_73 = il2cpp_unsafe_add_byte_offset<FilterUnion_t85E549621A2CC33D9102C62C6D82B0865FF80D03,uint64_t>(L_70, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_71, ((int64_t)2))), (int64_t)L_72)));
		FilterUnion_t85E549621A2CC33D9102C62C6D82B0865FF80D03 L_74 = ___0_value;
		*(FilterUnion_t85E549621A2CC33D9102C62C6D82B0865FF80D03*)L_73 = L_74;
		FilterUnion_t85E549621A2CC33D9102C62C6D82B0865FF80D03* L_75 = V_4;
		uint64_t L_76 = V_6;
		uint64_t L_77 = V_5;
		FilterUnion_t85E549621A2CC33D9102C62C6D82B0865FF80D03* L_78;
		L_78 = il2cpp_unsafe_add_byte_offset<FilterUnion_t85E549621A2CC33D9102C62C6D82B0865FF80D03,uint64_t>(L_75, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_76, ((int64_t)3))), (int64_t)L_77)));
		FilterUnion_t85E549621A2CC33D9102C62C6D82B0865FF80D03 L_79 = ___0_value;
		*(FilterUnion_t85E549621A2CC33D9102C62C6D82B0865FF80D03*)L_78 = L_79;
		uint64_t L_80 = V_6;
		V_6 = (uint64_t)((int64_t)il2cpp_codegen_add((int64_t)L_80, ((int64_t)4)));
		goto IL_0198;
	}

IL_017f:
	{
		FilterUnion_t85E549621A2CC33D9102C62C6D82B0865FF80D03* L_81 = V_4;
		uint64_t L_82 = V_6;
		uint64_t L_83 = V_5;
		FilterUnion_t85E549621A2CC33D9102C62C6D82B0865FF80D03* L_84;
		L_84 = il2cpp_unsafe_add_byte_offset<FilterUnion_t85E549621A2CC33D9102C62C6D82B0865FF80D03,uint64_t>(L_81, (uint64_t)((int64_t)il2cpp_codegen_multiply((int64_t)L_82, (int64_t)L_83)));
		FilterUnion_t85E549621A2CC33D9102C62C6D82B0865FF80D03 L_85 = ___0_value;
		*(FilterUnion_t85E549621A2CC33D9102C62C6D82B0865FF80D03*)L_84 = L_85;
		uint64_t L_86 = V_6;
		V_6 = (uint64_t)((int64_t)il2cpp_codegen_add((int64_t)L_86, ((int64_t)1)));
	}

IL_0198:
	{
		uint64_t L_87 = V_6;
		uint64_t L_88 = V_3;
		if ((!(((uint64_t)L_87) >= ((uint64_t)L_88))))
		{
			goto IL_017f;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1_CopyTo_m3A90799D05728E56E67FACFEFEB37CB18C822981_gshared (Span_1_t73939D05896281666AE0EFF73CA9AA212455FFCB* __this, Span_1_t73939D05896281666AE0EFF73CA9AA212455FFCB ___0_destination, const RuntimeMethod* method) 
{
	ByReference_1_t8B2B9618906FBC2D3654AB3D0B4D1A067A3C9D4C V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->____length;
		int32_t L_1;
		L_1 = Span_1_get_Length_mA01E6EC21F87170B3B3290278278ED65E825C955_inline((&___0_destination), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 13));
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_0038;
		}
	}
	{
		Span_1_t73939D05896281666AE0EFF73CA9AA212455FFCB L_2 = ___0_destination;
		ByReference_1_t8B2B9618906FBC2D3654AB3D0B4D1A067A3C9D4C L_3 = L_2.____pointer;
		V_0 = L_3;
		FilterUnion_t85E549621A2CC33D9102C62C6D82B0865FF80D03* L_4;
		L_4 = IL2CPP_BY_REFERENCE_GET_VALUE(FilterUnion_t85E549621A2CC33D9102C62C6D82B0865FF80D03, (Il2CppByReference*)(&V_0));
		ByReference_1_t8B2B9618906FBC2D3654AB3D0B4D1A067A3C9D4C L_5 = __this->____pointer;
		V_0 = L_5;
		FilterUnion_t85E549621A2CC33D9102C62C6D82B0865FF80D03* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(FilterUnion_t85E549621A2CC33D9102C62C6D82B0865FF80D03, (Il2CppByReference*)(&V_0));
		int32_t L_7 = __this->____length;
		Buffer_Memmove_TisFilterUnion_t85E549621A2CC33D9102C62C6D82B0865FF80D03_m788A7B3C302B6168CE4838B8CE615ADA2A360683(L_4, L_6, (uint64_t)((int64_t)L_7), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 15));
		return;
	}

IL_0038:
	{
		ThrowHelper_ThrowArgumentException_DestinationTooShort_m6468934A3BBB67DBC5BAEF7A64D91BD5BBBB3D4D(NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Span_1_TryCopyTo_m03E6112E60B138CEF343CA3F83B43B696751022C_gshared (Span_1_t73939D05896281666AE0EFF73CA9AA212455FFCB* __this, Span_1_t73939D05896281666AE0EFF73CA9AA212455FFCB ___0_destination, const RuntimeMethod* method) 
{
	bool V_0 = false;
	ByReference_1_t8B2B9618906FBC2D3654AB3D0B4D1A067A3C9D4C V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		V_0 = (bool)0;
		int32_t L_0 = __this->____length;
		int32_t L_1;
		L_1 = Span_1_get_Length_mA01E6EC21F87170B3B3290278278ED65E825C955_inline((&___0_destination), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 13));
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_003b;
		}
	}
	{
		Span_1_t73939D05896281666AE0EFF73CA9AA212455FFCB L_2 = ___0_destination;
		ByReference_1_t8B2B9618906FBC2D3654AB3D0B4D1A067A3C9D4C L_3 = L_2.____pointer;
		V_1 = L_3;
		FilterUnion_t85E549621A2CC33D9102C62C6D82B0865FF80D03* L_4;
		L_4 = IL2CPP_BY_REFERENCE_GET_VALUE(FilterUnion_t85E549621A2CC33D9102C62C6D82B0865FF80D03, (Il2CppByReference*)(&V_1));
		ByReference_1_t8B2B9618906FBC2D3654AB3D0B4D1A067A3C9D4C L_5 = __this->____pointer;
		V_1 = L_5;
		FilterUnion_t85E549621A2CC33D9102C62C6D82B0865FF80D03* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(FilterUnion_t85E549621A2CC33D9102C62C6D82B0865FF80D03, (Il2CppByReference*)(&V_1));
		int32_t L_7 = __this->____length;
		Buffer_Memmove_TisFilterUnion_t85E549621A2CC33D9102C62C6D82B0865FF80D03_m788A7B3C302B6168CE4838B8CE615ADA2A360683(L_4, L_6, (uint64_t)((int64_t)L_7), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 15));
		V_0 = (bool)1;
	}

IL_003b:
	{
		bool L_8 = V_0;
		return L_8;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_t16830A9FEE9E2F3C956F2B8444295F2393BFF6F6 Span_1_op_Implicit_mF014853C76FEEEA42ACBE5CFEC119106EC42D74B_gshared (Span_1_t73939D05896281666AE0EFF73CA9AA212455FFCB ___0_span, const RuntimeMethod* method) 
{
	ByReference_1_t8B2B9618906FBC2D3654AB3D0B4D1A067A3C9D4C V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Span_1_t73939D05896281666AE0EFF73CA9AA212455FFCB L_0 = ___0_span;
		ByReference_1_t8B2B9618906FBC2D3654AB3D0B4D1A067A3C9D4C L_1 = L_0.____pointer;
		V_0 = L_1;
		FilterUnion_t85E549621A2CC33D9102C62C6D82B0865FF80D03* L_2;
		L_2 = IL2CPP_BY_REFERENCE_GET_VALUE(FilterUnion_t85E549621A2CC33D9102C62C6D82B0865FF80D03, (Il2CppByReference*)(&V_0));
		Span_1_t73939D05896281666AE0EFF73CA9AA212455FFCB L_3 = ___0_span;
		int32_t L_4 = L_3.____length;
		ReadOnlySpan_1_t16830A9FEE9E2F3C956F2B8444295F2393BFF6F6 L_5;
		memset((&L_5), 0, sizeof(L_5));
		ReadOnlySpan_1__ctor_m9AA852A2B6E942135C2D2B2DA01E26BA0126FA7A_inline((&L_5), L_2, L_4, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 17));
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Span_1_ToString_m313247B32F13B5950E1C1E2F8385A8B029397D1C_gshared (Span_1_t73939D05896281666AE0EFF73CA9AA212455FFCB* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0DB46164953228904843938099AF66650313FEE5);
		s_Il2CppMethodInitialized = true;
	}
	Il2CppChar* V_0 = NULL;
	ByReference_1_t8B2B9618906FBC2D3654AB3D0B4D1A067A3C9D4C V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 9)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.char_class->byval_arg) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		bool L_4;
		L_4 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_1, L_3, NULL);
		if (!L_4)
		{
			goto IL_003e;
		}
	}
	{
		ByReference_1_t8B2B9618906FBC2D3654AB3D0B4D1A067A3C9D4C L_5 = __this->____pointer;
		V_1 = L_5;
		FilterUnion_t85E549621A2CC33D9102C62C6D82B0865FF80D03* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(FilterUnion_t85E549621A2CC33D9102C62C6D82B0865FF80D03, (Il2CppByReference*)(&V_1));
		Il2CppChar* L_7;
		L_7 = il2cpp_unsafe_as_ref<Il2CppChar>(L_6);
		V_0 = L_7;
		Il2CppChar* L_8 = V_0;
		int32_t L_9 = __this->____length;
		String_t* L_10;
		L_10 = String_CreateString_m3F8794FEB452558B8A68C65E1F0B603B3D94E0E2(NULL, (Il2CppChar*)((uintptr_t)L_8), 0, L_9, NULL);
		return L_10;
	}

IL_003e:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_11 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 9)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_12;
		L_12 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_11, NULL);
		NullCheck((MemberInfo_t*)L_12);
		String_t* L_13;
		L_13 = VirtualFuncInvoker0< String_t* >::Invoke(8, (MemberInfo_t*)L_12);
		int32_t L_14 = __this->____length;
		int32_t L_15 = L_14;
		RuntimeObject* L_16 = Box(il2cpp_defaults.int32_class, &L_15);
		String_t* L_17;
		L_17 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(_stringLiteral0DB46164953228904843938099AF66650313FEE5, (RuntimeObject*)L_13, L_16, NULL);
		return L_17;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Span_1_t73939D05896281666AE0EFF73CA9AA212455FFCB Span_1_Slice_mEBB5AFBEEDA9771B684905610AB79500FACB6673_gshared (Span_1_t73939D05896281666AE0EFF73CA9AA212455FFCB* __this, int32_t ___0_start, const RuntimeMethod* method) 
{
	ByReference_1_t8B2B9618906FBC2D3654AB3D0B4D1A067A3C9D4C V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_start;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) > ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_000e:
	{
		ByReference_1_t8B2B9618906FBC2D3654AB3D0B4D1A067A3C9D4C L_2 = __this->____pointer;
		V_0 = L_2;
		FilterUnion_t85E549621A2CC33D9102C62C6D82B0865FF80D03* L_3;
		L_3 = IL2CPP_BY_REFERENCE_GET_VALUE(FilterUnion_t85E549621A2CC33D9102C62C6D82B0865FF80D03, (Il2CppByReference*)(&V_0));
		int32_t L_4 = ___0_start;
		FilterUnion_t85E549621A2CC33D9102C62C6D82B0865FF80D03* L_5;
		L_5 = il2cpp_unsafe_add<FilterUnion_t85E549621A2CC33D9102C62C6D82B0865FF80D03,int32_t>(L_3, L_4);
		int32_t L_6 = __this->____length;
		int32_t L_7 = ___0_start;
		Span_1_t73939D05896281666AE0EFF73CA9AA212455FFCB L_8;
		memset((&L_8), 0, sizeof(L_8));
		Span_1__ctor_m9F0AD76F63C6307767B5992FA991815E4F0CF390_inline((&L_8), L_5, ((int32_t)il2cpp_codegen_subtract(L_6, L_7)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 18));
		return L_8;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Span_1_t73939D05896281666AE0EFF73CA9AA212455FFCB Span_1_Slice_m2CDBB95D159B27E6EBC4957255AECB4E7D7E3591_gshared (Span_1_t73939D05896281666AE0EFF73CA9AA212455FFCB* __this, int32_t ___0_start, int32_t ___1_length, const RuntimeMethod* method) 
{
	ByReference_1_t8B2B9618906FBC2D3654AB3D0B4D1A067A3C9D4C V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_start;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		int32_t L_2 = ___1_length;
		int32_t L_3 = __this->____length;
		int32_t L_4 = ___0_start;
		if ((!(((uint32_t)L_2) > ((uint32_t)((int32_t)il2cpp_codegen_subtract(L_3, L_4))))))
		{
			goto IL_0019;
		}
	}

IL_0014:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_0019:
	{
		ByReference_1_t8B2B9618906FBC2D3654AB3D0B4D1A067A3C9D4C L_5 = __this->____pointer;
		V_0 = L_5;
		FilterUnion_t85E549621A2CC33D9102C62C6D82B0865FF80D03* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(FilterUnion_t85E549621A2CC33D9102C62C6D82B0865FF80D03, (Il2CppByReference*)(&V_0));
		int32_t L_7 = ___0_start;
		FilterUnion_t85E549621A2CC33D9102C62C6D82B0865FF80D03* L_8;
		L_8 = il2cpp_unsafe_add<FilterUnion_t85E549621A2CC33D9102C62C6D82B0865FF80D03,int32_t>(L_6, L_7);
		int32_t L_9 = ___1_length;
		Span_1_t73939D05896281666AE0EFF73CA9AA212455FFCB L_10;
		memset((&L_10), 0, sizeof(L_10));
		Span_1__ctor_m9F0AD76F63C6307767B5992FA991815E4F0CF390_inline((&L_10), L_8, L_9, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 18));
		return L_10;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FilterUnionU5BU5D_t8778FBF9BC7FE3230BCB228346D0C62BC9A0A94D* Span_1_ToArray_m2B622566B9ACB1C92DB9177481D3B2B462F18644_gshared (Span_1_t73939D05896281666AE0EFF73CA9AA212455FFCB* __this, const RuntimeMethod* method) 
{
	ByReference_1_t8B2B9618906FBC2D3654AB3D0B4D1A067A3C9D4C V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->____length;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		FilterUnionU5BU5D_t8778FBF9BC7FE3230BCB228346D0C62BC9A0A94D* L_1;
		L_1 = Array_Empty_TisFilterUnion_t85E549621A2CC33D9102C62C6D82B0865FF80D03_mBDE28068FF66192DC2A98763302EFE1E164D3752_inline(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 19));
		return L_1;
	}

IL_000e:
	{
		int32_t L_2 = __this->____length;
		FilterUnionU5BU5D_t8778FBF9BC7FE3230BCB228346D0C62BC9A0A94D* L_3 = (FilterUnionU5BU5D_t8778FBF9BC7FE3230BCB228346D0C62BC9A0A94D*)(FilterUnionU5BU5D_t8778FBF9BC7FE3230BCB228346D0C62BC9A0A94D*)SZArrayNew(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 20), (uint32_t)L_2);
		FilterUnionU5BU5D_t8778FBF9BC7FE3230BCB228346D0C62BC9A0A94D* L_4 = L_3;
		NullCheck((RuntimeArray*)L_4);
		uint8_t* L_5;
		L_5 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_4, NULL);
		FilterUnion_t85E549621A2CC33D9102C62C6D82B0865FF80D03* L_6;
		L_6 = il2cpp_unsafe_as_ref<FilterUnion_t85E549621A2CC33D9102C62C6D82B0865FF80D03>(L_5);
		ByReference_1_t8B2B9618906FBC2D3654AB3D0B4D1A067A3C9D4C L_7 = __this->____pointer;
		V_0 = L_7;
		FilterUnion_t85E549621A2CC33D9102C62C6D82B0865FF80D03* L_8;
		L_8 = IL2CPP_BY_REFERENCE_GET_VALUE(FilterUnion_t85E549621A2CC33D9102C62C6D82B0865FF80D03, (Il2CppByReference*)(&V_0));
		int32_t L_9 = __this->____length;
		Buffer_Memmove_TisFilterUnion_t85E549621A2CC33D9102C62C6D82B0865FF80D03_m788A7B3C302B6168CE4838B8CE615ADA2A360683(L_6, L_8, (uint64_t)((int64_t)L_9), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 15));
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Span_1_get_Length_mA01E6EC21F87170B3B3290278278ED65E825C955_gshared (Span_1_t73939D05896281666AE0EFF73CA9AA212455FFCB* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____length;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Span_1_Equals_mB140A12AE5E6DAE52DEEEE03424E5FDE3C01ACFC_gshared (Span_1_t73939D05896281666AE0EFF73CA9AA212455FFCB* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral69508A540AFD085A745316DD7D6345B1C8CC662D)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Span_1_GetHashCode_m22AF51CD5D9FC2CFB3796AF633754C6686C6959D_gshared (Span_1_t73939D05896281666AE0EFF73CA9AA212455FFCB* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralECE618215BAC99C6FD12D8A273CC2118945EDCC8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Span_1_t73939D05896281666AE0EFF73CA9AA212455FFCB Span_1_op_Implicit_m5B6F70F53C21192AD2CD0C25AC50193FB5383E54_gshared (FilterUnionU5BU5D_t8778FBF9BC7FE3230BCB228346D0C62BC9A0A94D* ___0_array, const RuntimeMethod* method) 
{
	{
		FilterUnionU5BU5D_t8778FBF9BC7FE3230BCB228346D0C62BC9A0A94D* L_0 = ___0_array;
		Span_1_t73939D05896281666AE0EFF73CA9AA212455FFCB L_1;
		memset((&L_1), 0, sizeof(L_1));
		Span_1__ctor_m9CC9A801484C785265097B625A9BF84CB2E8AA44_inline((&L_1), L_0, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 21));
		return L_1;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SparseArray_1__ctor_m835EE9E3B6A134B4BAB7901843AAF2E8FA962B8E_gshared (SparseArray_1_t8D77ECC0E534C3B1A8C7403D9BDAC38694EAF242* __this, int32_t ___0_initialSize, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		int32_t L_0 = ___0_initialSize;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 0), (uint32_t)L_0);
		il2cpp_codegen_memory_barrier();
		__this->___m_array = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_array), (void*)L_1);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* SparseArray_1_get_Current_m0FCEEF0118EEDEB25CD8A7FB6E38D1BBC12F86AF_gshared (SparseArray_1_t8D77ECC0E534C3B1A8C7403D9BDAC38694EAF242* __this, const RuntimeMethod* method) 
{
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = __this->___m_array;
		il2cpp_codegen_memory_barrier();
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SparseArray_1_Add_mFA82FEC4F7D90A91283709B10F5151F2A7C2ADF0_gshared (SparseArray_1_t8D77ECC0E534C3B1A8C7403D9BDAC38694EAF242* __this, RuntimeObject* ___0_e, const RuntimeMethod* method) 
{
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_0 = NULL;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_1 = NULL;
	bool V_2 = false;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_5 = NULL;

IL_0000:
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = __this->___m_array;
		il2cpp_codegen_memory_barrier();
		V_0 = L_0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = V_0;
		V_1 = L_1;
		V_2 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_008e:
			{
				{
					bool L_2 = V_2;
					if (!L_2)
					{
						goto IL_0097;
					}
				}
				{
					ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = V_1;
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA((RuntimeObject*)L_3, NULL);
				}

IL_0097:
				{
					return;
				}
			}
		});
		try
		{
			{
				ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = V_1;
				Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149((RuntimeObject*)L_4, (&V_2), NULL);
				V_3 = 0;
				goto IL_0083_1;
			}

IL_0019_1:
			{
				ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_5 = V_0;
				int32_t L_6 = V_3;
				NullCheck(L_5);
				int32_t L_7 = L_6;
				RuntimeObject* L_8 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
				if (L_8)
				{
					goto IL_0039_1;
				}
			}
			{
				ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_9 = V_0;
				int32_t L_10 = V_3;
				NullCheck(L_9);
				RuntimeObject* L_11 = ___0_e;
				VolatileWrite((RuntimeObject**)((L_9)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_10))), (RuntimeObject*)L_11);
				int32_t L_12 = V_3;
				V_4 = L_12;
				goto IL_0098;
			}

IL_0039_1:
			{
				int32_t L_13 = V_3;
				ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_14 = V_0;
				NullCheck(L_14);
				if ((!(((uint32_t)L_13) == ((uint32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_14)->max_length)), 1))))))
				{
					goto IL_007f_1;
				}
			}
			{
				ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_15 = V_0;
				ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_16 = __this->___m_array;
				il2cpp_codegen_memory_barrier();
				if ((!(((RuntimeObject*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)L_15) == ((RuntimeObject*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)L_16))))
				{
					goto IL_007f_1;
				}
			}
			{
				ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_17 = V_0;
				NullCheck(L_17);
				ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_18 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 0), (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(((RuntimeArray*)L_17)->max_length)), 2)));
				V_5 = L_18;
				ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_19 = V_0;
				ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_20 = V_5;
				int32_t L_21 = V_3;
				Array_Copy_m4233828B4E6288B6D815F539AAA38575DE627900((RuntimeArray*)L_19, (RuntimeArray*)L_20, ((int32_t)il2cpp_codegen_add(L_21, 1)), NULL);
				ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_22 = V_5;
				int32_t L_23 = V_3;
				RuntimeObject* L_24 = ___0_e;
				NullCheck(L_22);
				(L_22)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_23, 1))), (RuntimeObject*)L_24);
				ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_25 = V_5;
				il2cpp_codegen_memory_barrier();
				__this->___m_array = L_25;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___m_array), (void*)L_25);
				int32_t L_26 = V_3;
				V_4 = ((int32_t)il2cpp_codegen_add(L_26, 1));
				goto IL_0098;
			}

IL_007f_1:
			{
				int32_t L_27 = V_3;
				V_3 = ((int32_t)il2cpp_codegen_add(L_27, 1));
			}

IL_0083_1:
			{
				int32_t L_28 = V_3;
				ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_29 = V_0;
				NullCheck(L_29);
				if ((((int32_t)L_28) < ((int32_t)((int32_t)(((RuntimeArray*)L_29)->max_length)))))
				{
					goto IL_0019_1;
				}
			}
			{
				goto IL_0000;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0098:
	{
		int32_t L_30 = V_4;
		return L_30;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SparseArray_1_Remove_mC48EB2673EB8C6ABDA639D24E83B75A2F4189EB9_gshared (SparseArray_1_t8D77ECC0E534C3B1A8C7403D9BDAC38694EAF242* __this, RuntimeObject* ___0_e, const RuntimeMethod* method) 
{
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_0 = NULL;
	bool V_1 = false;
	int32_t V_2 = 0;
	RuntimeObject* V_3 = NULL;
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = __this->___m_array;
		il2cpp_codegen_memory_barrier();
		V_0 = L_0;
		V_1 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0063:
			{
				{
					bool L_1 = V_1;
					if (!L_1)
					{
						goto IL_006c;
					}
				}
				{
					ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = V_0;
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA((RuntimeObject*)L_2, NULL);
				}

IL_006c:
				{
					return;
				}
			}
		});
		try
		{
			{
				ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = V_0;
				Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149((RuntimeObject*)L_3, (&V_1), NULL);
				V_2 = 0;
				goto IL_0054_1;
			}

IL_0017_1:
			{
				ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = __this->___m_array;
				il2cpp_codegen_memory_barrier();
				int32_t L_5 = V_2;
				NullCheck(L_4);
				int32_t L_6 = L_5;
				RuntimeObject* L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
				RuntimeObject* L_8 = ___0_e;
				if ((!(((RuntimeObject*)(RuntimeObject*)L_7) == ((RuntimeObject*)(RuntimeObject*)L_8))))
				{
					goto IL_0050_1;
				}
			}
			{
				ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_9 = __this->___m_array;
				il2cpp_codegen_memory_barrier();
				int32_t L_10 = V_2;
				NullCheck(L_9);
				il2cpp_codegen_initobj((&V_3), sizeof(RuntimeObject*));
				RuntimeObject* L_11 = V_3;
				VolatileWrite((RuntimeObject**)((L_9)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_10))), (RuntimeObject*)L_11);
				goto IL_006d;
			}

IL_0050_1:
			{
				int32_t L_12 = V_2;
				V_2 = ((int32_t)il2cpp_codegen_add(L_12, 1));
			}

IL_0054_1:
			{
				int32_t L_13 = V_2;
				ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_14 = __this->___m_array;
				il2cpp_codegen_memory_barrier();
				NullCheck(L_14);
				if ((((int32_t)L_13) < ((int32_t)((int32_t)(((RuntimeArray*)L_14)->max_length)))))
				{
					goto IL_0017_1;
				}
			}
			{
				goto IL_006d;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_006d:
	{
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SparselyPopulatedArrayAddInfo_1__ctor_m323E378EC0EE0C48A24AA0E14E40D7B020BB0458_gshared (SparselyPopulatedArrayAddInfo_1_tC49C525D3AFE80CB49D53650F40C9A49D4CDD19D* __this, SparselyPopulatedArrayFragment_1_t2D5B093B992E7F6EEEBD059E1065DFEDDBE906FC* ___0_source, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		SparselyPopulatedArrayFragment_1_t2D5B093B992E7F6EEEBD059E1065DFEDDBE906FC* L_0 = ___0_source;
		__this->____source = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____source), (void*)L_0);
		int32_t L_1 = ___1_index;
		__this->____index = L_1;
		return;
	}
}
IL2CPP_EXTERN_C  void SparselyPopulatedArrayAddInfo_1__ctor_m323E378EC0EE0C48A24AA0E14E40D7B020BB0458_AdjustorThunk (RuntimeObject* __this, SparselyPopulatedArrayFragment_1_t2D5B093B992E7F6EEEBD059E1065DFEDDBE906FC* ___0_source, int32_t ___1_index, const RuntimeMethod* method)
{
	SparselyPopulatedArrayAddInfo_1_tC49C525D3AFE80CB49D53650F40C9A49D4CDD19D* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<SparselyPopulatedArrayAddInfo_1_tC49C525D3AFE80CB49D53650F40C9A49D4CDD19D*>(__this + _offset);
	SparselyPopulatedArrayAddInfo_1__ctor_m323E378EC0EE0C48A24AA0E14E40D7B020BB0458(_thisAdjusted, ___0_source, ___1_index, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SparselyPopulatedArrayFragment_1_t2D5B093B992E7F6EEEBD059E1065DFEDDBE906FC* SparselyPopulatedArrayAddInfo_1_get_Source_mBA043CE79666AA955D0FE4335ED3B82802E75C86_gshared (SparselyPopulatedArrayAddInfo_1_tC49C525D3AFE80CB49D53650F40C9A49D4CDD19D* __this, const RuntimeMethod* method) 
{
	{
		SparselyPopulatedArrayFragment_1_t2D5B093B992E7F6EEEBD059E1065DFEDDBE906FC* L_0 = __this->____source;
		return L_0;
	}
}
IL2CPP_EXTERN_C  SparselyPopulatedArrayFragment_1_t2D5B093B992E7F6EEEBD059E1065DFEDDBE906FC* SparselyPopulatedArrayAddInfo_1_get_Source_mBA043CE79666AA955D0FE4335ED3B82802E75C86_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	SparselyPopulatedArrayAddInfo_1_tC49C525D3AFE80CB49D53650F40C9A49D4CDD19D* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<SparselyPopulatedArrayAddInfo_1_tC49C525D3AFE80CB49D53650F40C9A49D4CDD19D*>(__this + _offset);
	SparselyPopulatedArrayFragment_1_t2D5B093B992E7F6EEEBD059E1065DFEDDBE906FC* _returnValue;
	_returnValue = SparselyPopulatedArrayAddInfo_1_get_Source_mBA043CE79666AA955D0FE4335ED3B82802E75C86_inline(_thisAdjusted, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SparselyPopulatedArrayAddInfo_1_get_Index_mCBBF3F010A994612AC94DA417AB8D04A2C92B45A_gshared (SparselyPopulatedArrayAddInfo_1_tC49C525D3AFE80CB49D53650F40C9A49D4CDD19D* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____index;
		return L_0;
	}
}
IL2CPP_EXTERN_C  int32_t SparselyPopulatedArrayAddInfo_1_get_Index_mCBBF3F010A994612AC94DA417AB8D04A2C92B45A_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	SparselyPopulatedArrayAddInfo_1_tC49C525D3AFE80CB49D53650F40C9A49D4CDD19D* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<SparselyPopulatedArrayAddInfo_1_tC49C525D3AFE80CB49D53650F40C9A49D4CDD19D*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = SparselyPopulatedArrayAddInfo_1_get_Index_mCBBF3F010A994612AC94DA417AB8D04A2C92B45A_inline(_thisAdjusted, method);
	return _returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SparselyPopulatedArrayFragment_1__ctor_m1BAEA22A2C2FD0C50376CEBFC7F3A024EE3C302E_gshared (SparselyPopulatedArrayFragment_1_t2D5B093B992E7F6EEEBD059E1065DFEDDBE906FC* __this, int32_t ___0_size, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_size;
		SparselyPopulatedArrayFragment_1__ctor_m849B5F4632EC0E042F4CF4F23102F9D74CE14294(__this, L_0, (SparselyPopulatedArrayFragment_1_t2D5B093B992E7F6EEEBD059E1065DFEDDBE906FC*)NULL, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SparselyPopulatedArrayFragment_1__ctor_m849B5F4632EC0E042F4CF4F23102F9D74CE14294_gshared (SparselyPopulatedArrayFragment_1_t2D5B093B992E7F6EEEBD059E1065DFEDDBE906FC* __this, int32_t ___0_size, SparselyPopulatedArrayFragment_1_t2D5B093B992E7F6EEEBD059E1065DFEDDBE906FC* ___1_prev, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		int32_t L_0 = ___0_size;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 2), (uint32_t)L_0);
		__this->____elements = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____elements), (void*)L_1);
		int32_t L_2 = ___0_size;
		il2cpp_codegen_memory_barrier();
		__this->____freeCount = L_2;
		SparselyPopulatedArrayFragment_1_t2D5B093B992E7F6EEEBD059E1065DFEDDBE906FC* L_3 = ___1_prev;
		il2cpp_codegen_memory_barrier();
		__this->____prev = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____prev), (void*)L_3);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SparselyPopulatedArrayFragment_1_get_Item_mEF1B53A93D46F6F69F18517CF5472F67BCE45C38_gshared (SparselyPopulatedArrayFragment_1_t2D5B093B992E7F6EEEBD059E1065DFEDDBE906FC* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = __this->____elements;
		int32_t L_1 = ___0_index;
		NullCheck(L_0);
		RuntimeObject* L_2;
		L_2 = VolatileRead(((L_0)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_1))));
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SparselyPopulatedArrayFragment_1_get_Length_m2F77B48EDD934ED6586E559645752EB229677D27_gshared (SparselyPopulatedArrayFragment_1_t2D5B093B992E7F6EEEBD059E1065DFEDDBE906FC* __this, const RuntimeMethod* method) 
{
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = __this->____elements;
		NullCheck(L_0);
		return ((int32_t)(((RuntimeArray*)L_0)->max_length));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SparselyPopulatedArrayFragment_1_t2D5B093B992E7F6EEEBD059E1065DFEDDBE906FC* SparselyPopulatedArrayFragment_1_get_Prev_m549822EBEA5C7E59A7EAC7B83D621B72E822A8FA_gshared (SparselyPopulatedArrayFragment_1_t2D5B093B992E7F6EEEBD059E1065DFEDDBE906FC* __this, const RuntimeMethod* method) 
{
	{
		SparselyPopulatedArrayFragment_1_t2D5B093B992E7F6EEEBD059E1065DFEDDBE906FC* L_0 = __this->____prev;
		il2cpp_codegen_memory_barrier();
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SparselyPopulatedArrayFragment_1_SafeAtomicRemove_m41CC9DA2BF22A6BD80CE1F09B5F56031C6EE67FC_gshared (SparselyPopulatedArrayFragment_1_t2D5B093B992E7F6EEEBD059E1065DFEDDBE906FC* __this, int32_t ___0_index, RuntimeObject* ___1_expectedElement, const RuntimeMethod* method) 
{
	RuntimeObject* V_0 = NULL;
	RuntimeObject* G_B2_0 = NULL;
	RuntimeObject* G_B1_0 = NULL;
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = __this->____elements;
		int32_t L_1 = ___0_index;
		NullCheck(L_0);
		il2cpp_codegen_initobj((&V_0), sizeof(RuntimeObject*));
		RuntimeObject* L_2 = V_0;
		RuntimeObject* L_3 = ___1_expectedElement;
		RuntimeObject* L_4;
		L_4 = InterlockedCompareExchangeImpl<RuntimeObject*>(((L_0)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_1))), L_2, L_3);
		RuntimeObject* L_5 = L_4;
		if (!L_5)
		{
			G_B2_0 = L_5;
			goto IL_0035;
		}
		G_B1_0 = L_5;
	}
	{
		int32_t L_6 = __this->____freeCount;
		il2cpp_codegen_memory_barrier();
		il2cpp_codegen_memory_barrier();
		__this->____freeCount = ((int32_t)il2cpp_codegen_add(L_6, 1));
		G_B2_0 = G_B1_0;
	}

IL_0035:
	{
		return G_B2_0;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SparselyPopulatedArray_1__ctor_m13D75BA18ED19BF0AE6E4AB201C66718D56D0643_gshared (SparselyPopulatedArray_1_t127D3C1977D038D143CA5A6CDD74A71117B5A614* __this, int32_t ___0_initialSize, const RuntimeMethod* method) 
{
	SparselyPopulatedArrayFragment_1_t2D5B093B992E7F6EEEBD059E1065DFEDDBE906FC* V_0 = NULL;
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		int32_t L_0 = ___0_initialSize;
		SparselyPopulatedArrayFragment_1_t2D5B093B992E7F6EEEBD059E1065DFEDDBE906FC* L_1 = (SparselyPopulatedArrayFragment_1_t2D5B093B992E7F6EEEBD059E1065DFEDDBE906FC*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 0));
		SparselyPopulatedArrayFragment_1__ctor_m1BAEA22A2C2FD0C50376CEBFC7F3A024EE3C302E(L_1, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 1));
		SparselyPopulatedArrayFragment_1_t2D5B093B992E7F6EEEBD059E1065DFEDDBE906FC* L_2 = L_1;
		V_0 = L_2;
		il2cpp_codegen_memory_barrier();
		__this->____tail = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____tail), (void*)L_2);
		SparselyPopulatedArrayFragment_1_t2D5B093B992E7F6EEEBD059E1065DFEDDBE906FC* L_3 = V_0;
		__this->____head = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____head), (void*)L_3);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SparselyPopulatedArrayFragment_1_t2D5B093B992E7F6EEEBD059E1065DFEDDBE906FC* SparselyPopulatedArray_1_get_Tail_m28175FF31A3507C7DDE945D58B2ADEA01D07B64C_gshared (SparselyPopulatedArray_1_t127D3C1977D038D143CA5A6CDD74A71117B5A614* __this, const RuntimeMethod* method) 
{
	{
		SparselyPopulatedArrayFragment_1_t2D5B093B992E7F6EEEBD059E1065DFEDDBE906FC* L_0 = __this->____tail;
		il2cpp_codegen_memory_barrier();
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SparselyPopulatedArrayAddInfo_1_tC49C525D3AFE80CB49D53650F40C9A49D4CDD19D SparselyPopulatedArray_1_Add_mE99CA2479CB966676495F0908849E6ADE8C79CDB_gshared (SparselyPopulatedArray_1_t127D3C1977D038D143CA5A6CDD74A71117B5A614* __this, RuntimeObject* ___0_element, const RuntimeMethod* method) 
{
	SparselyPopulatedArrayFragment_1_t2D5B093B992E7F6EEEBD059E1065DFEDDBE906FC* V_0 = NULL;
	SparselyPopulatedArrayFragment_1_t2D5B093B992E7F6EEEBD059E1065DFEDDBE906FC* V_1 = NULL;
	SparselyPopulatedArrayFragment_1_t2D5B093B992E7F6EEEBD059E1065DFEDDBE906FC* V_2 = NULL;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	RuntimeObject* V_7 = NULL;
	int32_t V_8 = 0;
	SparselyPopulatedArrayFragment_1_t2D5B093B992E7F6EEEBD059E1065DFEDDBE906FC* G_B15_0 = NULL;
	SparselyPopulatedArrayFragment_1_t2D5B093B992E7F6EEEBD059E1065DFEDDBE906FC* G_B14_0 = NULL;
	int32_t G_B16_0 = 0;
	SparselyPopulatedArrayFragment_1_t2D5B093B992E7F6EEEBD059E1065DFEDDBE906FC* G_B16_1 = NULL;
	int32_t G_B24_0 = 0;

IL_0000:
	{
		SparselyPopulatedArrayFragment_1_t2D5B093B992E7F6EEEBD059E1065DFEDDBE906FC* L_0 = __this->____tail;
		il2cpp_codegen_memory_barrier();
		V_0 = L_0;
		goto IL_001d;
	}

IL_000b:
	{
		SparselyPopulatedArrayFragment_1_t2D5B093B992E7F6EEEBD059E1065DFEDDBE906FC* L_1 = V_0;
		NullCheck(L_1);
		SparselyPopulatedArrayFragment_1_t2D5B093B992E7F6EEEBD059E1065DFEDDBE906FC* L_2 = L_1->____next;
		il2cpp_codegen_memory_barrier();
		SparselyPopulatedArrayFragment_1_t2D5B093B992E7F6EEEBD059E1065DFEDDBE906FC* L_3 = L_2;
		V_0 = L_3;
		il2cpp_codegen_memory_barrier();
		__this->____tail = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____tail), (void*)L_3);
	}

IL_001d:
	{
		SparselyPopulatedArrayFragment_1_t2D5B093B992E7F6EEEBD059E1065DFEDDBE906FC* L_4 = V_0;
		NullCheck(L_4);
		SparselyPopulatedArrayFragment_1_t2D5B093B992E7F6EEEBD059E1065DFEDDBE906FC* L_5 = L_4->____next;
		il2cpp_codegen_memory_barrier();
		if (L_5)
		{
			goto IL_000b;
		}
	}
	{
		SparselyPopulatedArrayFragment_1_t2D5B093B992E7F6EEEBD059E1065DFEDDBE906FC* L_6 = V_0;
		V_1 = L_6;
		goto IL_0115;
	}

IL_002e:
	{
		SparselyPopulatedArrayFragment_1_t2D5B093B992E7F6EEEBD059E1065DFEDDBE906FC* L_7 = V_1;
		NullCheck(L_7);
		int32_t L_8 = L_7->____freeCount;
		il2cpp_codegen_memory_barrier();
		if ((((int32_t)L_8) >= ((int32_t)1)))
		{
			goto IL_004b;
		}
	}
	{
		SparselyPopulatedArrayFragment_1_t2D5B093B992E7F6EEEBD059E1065DFEDDBE906FC* L_9 = V_1;
		SparselyPopulatedArrayFragment_1_t2D5B093B992E7F6EEEBD059E1065DFEDDBE906FC* L_10 = L_9;
		NullCheck(L_10);
		int32_t L_11 = L_10->____freeCount;
		il2cpp_codegen_memory_barrier();
		NullCheck(L_10);
		il2cpp_codegen_memory_barrier();
		L_10->____freeCount = ((int32_t)il2cpp_codegen_subtract(L_11, 1));
	}

IL_004b:
	{
		SparselyPopulatedArrayFragment_1_t2D5B093B992E7F6EEEBD059E1065DFEDDBE906FC* L_12 = V_1;
		NullCheck(L_12);
		int32_t L_13 = L_12->____freeCount;
		il2cpp_codegen_memory_barrier();
		if ((((int32_t)L_13) > ((int32_t)0)))
		{
			goto IL_0065;
		}
	}
	{
		SparselyPopulatedArrayFragment_1_t2D5B093B992E7F6EEEBD059E1065DFEDDBE906FC* L_14 = V_1;
		NullCheck(L_14);
		int32_t L_15 = L_14->____freeCount;
		il2cpp_codegen_memory_barrier();
		if ((((int32_t)L_15) >= ((int32_t)((int32_t)-10))))
		{
			goto IL_010c;
		}
	}

IL_0065:
	{
		SparselyPopulatedArrayFragment_1_t2D5B093B992E7F6EEEBD059E1065DFEDDBE906FC* L_16 = V_1;
		NullCheck(L_16);
		int32_t L_17;
		L_17 = SparselyPopulatedArrayFragment_1_get_Length_m2F77B48EDD934ED6586E559645752EB229677D27(L_16, il2cpp_rgctx_method(method->klass->rgctx_data, 4));
		V_3 = L_17;
		int32_t L_18 = V_3;
		SparselyPopulatedArrayFragment_1_t2D5B093B992E7F6EEEBD059E1065DFEDDBE906FC* L_19 = V_1;
		NullCheck(L_19);
		int32_t L_20 = L_19->____freeCount;
		il2cpp_codegen_memory_barrier();
		int32_t L_21 = V_3;
		V_4 = ((int32_t)(((int32_t)il2cpp_codegen_subtract(L_18, L_20))%L_21));
		int32_t L_22 = V_4;
		if ((((int32_t)L_22) >= ((int32_t)0)))
		{
			goto IL_0094;
		}
	}
	{
		V_4 = 0;
		SparselyPopulatedArrayFragment_1_t2D5B093B992E7F6EEEBD059E1065DFEDDBE906FC* L_23 = V_1;
		SparselyPopulatedArrayFragment_1_t2D5B093B992E7F6EEEBD059E1065DFEDDBE906FC* L_24 = L_23;
		NullCheck(L_24);
		int32_t L_25 = L_24->____freeCount;
		il2cpp_codegen_memory_barrier();
		NullCheck(L_24);
		il2cpp_codegen_memory_barrier();
		L_24->____freeCount = ((int32_t)il2cpp_codegen_subtract(L_25, 1));
	}

IL_0094:
	{
		V_5 = 0;
		goto IL_0107;
	}

IL_0099:
	{
		int32_t L_26 = V_4;
		int32_t L_27 = V_5;
		int32_t L_28 = V_3;
		V_6 = ((int32_t)(((int32_t)il2cpp_codegen_add(L_26, L_27))%L_28));
		SparselyPopulatedArrayFragment_1_t2D5B093B992E7F6EEEBD059E1065DFEDDBE906FC* L_29 = V_1;
		NullCheck(L_29);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_30 = L_29->____elements;
		int32_t L_31 = V_6;
		NullCheck(L_30);
		int32_t L_32 = L_31;
		RuntimeObject* L_33 = (L_30)->GetAt(static_cast<il2cpp_array_size_t>(L_32));
		if (L_33)
		{
			goto IL_0101;
		}
	}
	{
		SparselyPopulatedArrayFragment_1_t2D5B093B992E7F6EEEBD059E1065DFEDDBE906FC* L_34 = V_1;
		NullCheck(L_34);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_35 = L_34->____elements;
		int32_t L_36 = V_6;
		NullCheck(L_35);
		RuntimeObject* L_37 = ___0_element;
		il2cpp_codegen_initobj((&V_7), sizeof(RuntimeObject*));
		RuntimeObject* L_38 = V_7;
		RuntimeObject* L_39;
		L_39 = InterlockedCompareExchangeImpl<RuntimeObject*>(((L_35)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_36))), L_37, L_38);
		if (L_39)
		{
			goto IL_0101;
		}
	}
	{
		SparselyPopulatedArrayFragment_1_t2D5B093B992E7F6EEEBD059E1065DFEDDBE906FC* L_40 = V_1;
		NullCheck(L_40);
		int32_t L_41 = L_40->____freeCount;
		il2cpp_codegen_memory_barrier();
		V_8 = ((int32_t)il2cpp_codegen_subtract(L_41, 1));
		SparselyPopulatedArrayFragment_1_t2D5B093B992E7F6EEEBD059E1065DFEDDBE906FC* L_42 = V_1;
		int32_t L_43 = V_8;
		if ((((int32_t)L_43) > ((int32_t)0)))
		{
			G_B15_0 = L_42;
			goto IL_00ef;
		}
		G_B14_0 = L_42;
	}
	{
		G_B16_0 = 0;
		G_B16_1 = G_B14_0;
		goto IL_00f1;
	}

IL_00ef:
	{
		int32_t L_44 = V_8;
		G_B16_0 = L_44;
		G_B16_1 = G_B15_0;
	}

IL_00f1:
	{
		NullCheck(G_B16_1);
		il2cpp_codegen_memory_barrier();
		G_B16_1->____freeCount = G_B16_0;
		SparselyPopulatedArrayFragment_1_t2D5B093B992E7F6EEEBD059E1065DFEDDBE906FC* L_45 = V_1;
		int32_t L_46 = V_6;
		SparselyPopulatedArrayAddInfo_1_tC49C525D3AFE80CB49D53650F40C9A49D4CDD19D L_47;
		memset((&L_47), 0, sizeof(L_47));
		SparselyPopulatedArrayAddInfo_1__ctor_m323E378EC0EE0C48A24AA0E14E40D7B020BB0458((&L_47), L_45, L_46, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		return L_47;
	}

IL_0101:
	{
		int32_t L_48 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_48, 1));
	}

IL_0107:
	{
		int32_t L_49 = V_5;
		int32_t L_50 = V_3;
		if ((((int32_t)L_49) < ((int32_t)L_50)))
		{
			goto IL_0099;
		}
	}

IL_010c:
	{
		SparselyPopulatedArrayFragment_1_t2D5B093B992E7F6EEEBD059E1065DFEDDBE906FC* L_51 = V_1;
		NullCheck(L_51);
		SparselyPopulatedArrayFragment_1_t2D5B093B992E7F6EEEBD059E1065DFEDDBE906FC* L_52 = L_51->____prev;
		il2cpp_codegen_memory_barrier();
		V_1 = L_52;
	}

IL_0115:
	{
		SparselyPopulatedArrayFragment_1_t2D5B093B992E7F6EEEBD059E1065DFEDDBE906FC* L_53 = V_1;
		if (L_53)
		{
			goto IL_002e;
		}
	}
	{
		SparselyPopulatedArrayFragment_1_t2D5B093B992E7F6EEEBD059E1065DFEDDBE906FC* L_54 = V_0;
		NullCheck(L_54);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_55 = L_54->____elements;
		NullCheck(L_55);
		if ((((int32_t)((int32_t)(((RuntimeArray*)L_55)->max_length))) == ((int32_t)((int32_t)4096))))
		{
			goto IL_0136;
		}
	}
	{
		SparselyPopulatedArrayFragment_1_t2D5B093B992E7F6EEEBD059E1065DFEDDBE906FC* L_56 = V_0;
		NullCheck(L_56);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_57 = L_56->____elements;
		NullCheck(L_57);
		G_B24_0 = ((int32_t)il2cpp_codegen_multiply(((int32_t)(((RuntimeArray*)L_57)->max_length)), 2));
		goto IL_013b;
	}

IL_0136:
	{
		G_B24_0 = ((int32_t)4096);
	}

IL_013b:
	{
		SparselyPopulatedArrayFragment_1_t2D5B093B992E7F6EEEBD059E1065DFEDDBE906FC* L_58 = V_0;
		SparselyPopulatedArrayFragment_1_t2D5B093B992E7F6EEEBD059E1065DFEDDBE906FC* L_59 = (SparselyPopulatedArrayFragment_1_t2D5B093B992E7F6EEEBD059E1065DFEDDBE906FC*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 0));
		SparselyPopulatedArrayFragment_1__ctor_m849B5F4632EC0E042F4CF4F23102F9D74CE14294(L_59, G_B24_0, L_58, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		V_2 = L_59;
		SparselyPopulatedArrayFragment_1_t2D5B093B992E7F6EEEBD059E1065DFEDDBE906FC* L_60 = V_0;
		NullCheck(L_60);
		SparselyPopulatedArrayFragment_1_t2D5B093B992E7F6EEEBD059E1065DFEDDBE906FC** L_61 = (SparselyPopulatedArrayFragment_1_t2D5B093B992E7F6EEEBD059E1065DFEDDBE906FC**)(&L_60->____next);
		il2cpp_codegen_memory_barrier();
		SparselyPopulatedArrayFragment_1_t2D5B093B992E7F6EEEBD059E1065DFEDDBE906FC* L_62 = V_2;
		SparselyPopulatedArrayFragment_1_t2D5B093B992E7F6EEEBD059E1065DFEDDBE906FC* L_63;
		L_63 = InterlockedCompareExchangeImpl<SparselyPopulatedArrayFragment_1_t2D5B093B992E7F6EEEBD059E1065DFEDDBE906FC*>(L_61, L_62, (SparselyPopulatedArrayFragment_1_t2D5B093B992E7F6EEEBD059E1065DFEDDBE906FC*)NULL);
		if (L_63)
		{
			goto IL_0000;
		}
	}
	{
		SparselyPopulatedArrayFragment_1_t2D5B093B992E7F6EEEBD059E1065DFEDDBE906FC* L_64 = V_2;
		il2cpp_codegen_memory_barrier();
		__this->____tail = L_64;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____tail), (void*)L_64);
		goto IL_0000;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StackScope_1__ctor_mB5878954E782DE87BB4C30D92E66F23988D6BC86_gshared (StackScope_1_tB82A0C5F6E33138F56988FA681174EF82C9ADB26* __this, Stack_1_tF3E5E7101E929741300A1CF7C159A6ED9B61621A** ___0_stack, const RuntimeMethod* method) 
{
	Stack_1_tF3E5E7101E929741300A1CF7C159A6ED9B61621A* V_0 = NULL;
	{
		Stack_1_tF3E5E7101E929741300A1CF7C159A6ED9B61621A** L_0 = ___0_stack;
		Stack_1_tF3E5E7101E929741300A1CF7C159A6ED9B61621A* L_1;
		L_1 = ((  Stack_1_tF3E5E7101E929741300A1CF7C159A6ED9B61621A* (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 1)))(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		Stack_1_tF3E5E7101E929741300A1CF7C159A6ED9B61621A* L_2 = L_1;
		V_0 = L_2;
		*((RuntimeObject**)L_0) = (RuntimeObject*)L_2;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_0, (void*)(RuntimeObject*)L_2);
		Stack_1_tF3E5E7101E929741300A1CF7C159A6ED9B61621A* L_3 = V_0;
		__this->____stack = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____stack), (void*)L_3);
		return;
	}
}
IL2CPP_EXTERN_C  void StackScope_1__ctor_mB5878954E782DE87BB4C30D92E66F23988D6BC86_AdjustorThunk (RuntimeObject* __this, Stack_1_tF3E5E7101E929741300A1CF7C159A6ED9B61621A** ___0_stack, const RuntimeMethod* method)
{
	StackScope_1_tB82A0C5F6E33138F56988FA681174EF82C9ADB26* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<StackScope_1_tB82A0C5F6E33138F56988FA681174EF82C9ADB26*>(__this + _offset);
	StackScope_1__ctor_mB5878954E782DE87BB4C30D92E66F23988D6BC86(_thisAdjusted, ___0_stack, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StackScope_1_Dispose_m23CF13EF100AC68D65C505ECE7714FF44A2B4248_gshared (StackScope_1_tB82A0C5F6E33138F56988FA681174EF82C9ADB26* __this, const RuntimeMethod* method) 
{
	{
		Stack_1_tF3E5E7101E929741300A1CF7C159A6ED9B61621A* L_0 = __this->____stack;
		((  void (*) (Stack_1_tF3E5E7101E929741300A1CF7C159A6ED9B61621A*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 4)))(L_0, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 4));
		return;
	}
}
IL2CPP_EXTERN_C  void StackScope_1_Dispose_m23CF13EF100AC68D65C505ECE7714FF44A2B4248_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	StackScope_1_tB82A0C5F6E33138F56988FA681174EF82C9ADB26* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<StackScope_1_tB82A0C5F6E33138F56988FA681174EF82C9ADB26*>(__this + _offset);
	StackScope_1_Dispose_m23CF13EF100AC68D65C505ECE7714FF44A2B4248(_thisAdjusted, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Stack_1__ctor_m7B4412DFF480FB70849787D82FA782044F527C9A_gshared (Stack_1_tF6C1720CA323403285CF731A334044D9C18E64AD* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		HierarchyNodeU5BU5D_t58C5014EDF77A3B09F6BA5DEE95D32133F935DB2* L_0;
		L_0 = Array_Empty_TisHierarchyNode_t6A6A738223CC5D7FB463CAF6F379C48726891704_m706F26FDE3D55E478AE8D88D0CA5AE597D17F184_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		__this->____array = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____array), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Stack_1__ctor_mC8BB2D21A068A79F3FCE8217D5EE279BB0B067E7_gshared (Stack_1_tF6C1720CA323403285CF731A334044D9C18E64AD* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		int32_t L_0 = ___0_capacity;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0020;
		}
	}
	{
		int32_t L_1 = ___0_capacity;
		int32_t L_2 = L_1;
		RuntimeObject* L_3 = Box(il2cpp_defaults.int32_class, &L_2);
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_4 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_m60B543A63AC8692C28096003FBF2AD124B9D5B85(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC37D78082ACFC8DEE7B32D9351C6E433A074FEC7)), L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral38E3DBC7FC353425EF3A98DC8DAC6689AF5FD1BE)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, method);
	}

IL_0020:
	{
		int32_t L_5 = ___0_capacity;
		HierarchyNodeU5BU5D_t58C5014EDF77A3B09F6BA5DEE95D32133F935DB2* L_6 = (HierarchyNodeU5BU5D_t58C5014EDF77A3B09F6BA5DEE95D32133F935DB2*)(HierarchyNodeU5BU5D_t58C5014EDF77A3B09F6BA5DEE95D32133F935DB2*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 3), (uint32_t)L_5);
		__this->____array = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____array), (void*)L_6);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Stack_1_get_Count_m5413C7FBAD67084EEA47A1417FAB381E9EDD5740_gshared (Stack_1_tF6C1720CA323403285CF731A334044D9C18E64AD* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Stack_1_System_Collections_ICollection_get_IsSynchronized_mC19A4D0EAE204A0813A537A52BEF00907C036A1D_gshared (Stack_1_tF6C1720CA323403285CF731A334044D9C18E64AD* __this, const RuntimeMethod* method) 
{
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Stack_1_System_Collections_ICollection_get_SyncRoot_m457F3D1D35CE93A1ADFE9996D197DCDAA8EEEBE7_gshared (Stack_1_tF6C1720CA323403285CF731A334044D9C18E64AD* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->____syncRoot;
		if (L_0)
		{
			goto IL_001a;
		}
	}
	{
		RuntimeObject** L_1 = (RuntimeObject**)(&__this->____syncRoot);
		RuntimeObject* L_2 = (RuntimeObject*)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(L_2, NULL);
		RuntimeObject* L_3;
		L_3 = InterlockedCompareExchangeImpl<RuntimeObject*>(L_1, L_2, NULL);
	}

IL_001a:
	{
		RuntimeObject* L_4 = __this->____syncRoot;
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Stack_1_Clear_m67A638102B31A444816BB13DEA828B6D084A9EFD_gshared (Stack_1_tF6C1720CA323403285CF731A334044D9C18E64AD* __this, const RuntimeMethod* method) 
{
	{
		goto IL_0019;
	}

IL_0019:
	{
		__this->____size = 0;
		int32_t L_0 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_0, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Stack_1_Contains_m1EEF44DB8EF776EC38949A3263F43D6705F85D97_gshared (Stack_1_tF6C1720CA323403285CF731A334044D9C18E64AD* __this, HierarchyNode_t6A6A738223CC5D7FB463CAF6F379C48726891704 ___0_item, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		if (!L_0)
		{
			goto IL_0023;
		}
	}
	{
		HierarchyNodeU5BU5D_t58C5014EDF77A3B09F6BA5DEE95D32133F935DB2* L_1 = __this->____array;
		HierarchyNode_t6A6A738223CC5D7FB463CAF6F379C48726891704 L_2 = ___0_item;
		int32_t L_3 = __this->____size;
		int32_t L_4;
		L_4 = Array_LastIndexOf_TisHierarchyNode_t6A6A738223CC5D7FB463CAF6F379C48726891704_m36B76798B43F8ECDB69F02AEEDA8CDF00572CF1E(L_1, L_2, ((int32_t)il2cpp_codegen_subtract(L_3, 1)), il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		return (bool)((((int32_t)((((int32_t)L_4) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_0023:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Stack_1_System_Collections_ICollection_CopyTo_m39F4FC6BF51DCC25F19EEB613F548DD6871CED0D_gshared (Stack_1_tF6C1720CA323403285CF731A334044D9C18E64AD* __this, RuntimeArray* ___0_array, int32_t ___1_arrayIndex, const RuntimeMethod* method) 
{
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeArray* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		RuntimeArray* L_2 = ___0_array;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(L_2, NULL);
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0027;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_4 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral967D403A541A1026A83D548E5AD5CA800AD4EFB5)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, method);
	}

IL_0027:
	{
		RuntimeArray* L_5 = ___0_array;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(L_5, 0, NULL);
		if (!L_6)
		{
			goto IL_0040;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_7 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_7, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral6195D7DA68D16D4985AD1A1B4FD2841A43CDDE70)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, method);
	}

IL_0040:
	{
		int32_t L_8 = ___1_arrayIndex;
		if ((((int32_t)L_8) < ((int32_t)0)))
		{
			goto IL_004d;
		}
	}
	{
		int32_t L_9 = ___1_arrayIndex;
		RuntimeArray* L_10 = ___0_array;
		NullCheck(L_10);
		int32_t L_11;
		L_11 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(L_10, NULL);
		if ((((int32_t)L_9) <= ((int32_t)L_11)))
		{
			goto IL_0063;
		}
	}

IL_004d:
	{
		int32_t L_12 = ___1_arrayIndex;
		int32_t L_13 = L_12;
		RuntimeObject* L_14 = Box(il2cpp_defaults.int32_class, &L_13);
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_15 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_m60B543A63AC8692C28096003FBF2AD124B9D5B85(L_15, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC00660333703C551EA80371B54D0ADCEB74C33B4)), L_14, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral569FEAE6AEE421BCD8D24F22865E84F808C2A1E4)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_15, method);
	}

IL_0063:
	{
		RuntimeArray* L_16 = ___0_array;
		NullCheck(L_16);
		int32_t L_17;
		L_17 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(L_16, NULL);
		int32_t L_18 = ___1_arrayIndex;
		int32_t L_19 = __this->____size;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_17, L_18))) >= ((int32_t)L_19)))
		{
			goto IL_007e;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_20 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_20, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral7F4C724BD10943E8B0B17A6E069F992E219EF5E8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_20, method);
	}

IL_007e:
	{
	}
	try
	{
		HierarchyNodeU5BU5D_t58C5014EDF77A3B09F6BA5DEE95D32133F935DB2* L_21 = __this->____array;
		RuntimeArray* L_22 = ___0_array;
		int32_t L_23 = ___1_arrayIndex;
		int32_t L_24 = __this->____size;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_21, 0, L_22, L_23, L_24, NULL);
		RuntimeArray* L_25 = ___0_array;
		int32_t L_26 = ___1_arrayIndex;
		int32_t L_27 = __this->____size;
		Array_Reverse_mE788006243D34C654D7DDEF13E2D9E7B129AF8AD(L_25, L_26, L_27, NULL);
		goto IL_00b3;
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00a2;
		}
		throw e;
	}

CATCH_00a2:
	{
		ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1* L_28 = ((ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*)IL2CPP_GET_ACTIVE_EXCEPTION(ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*));;
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_29 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_29, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralBD0381A992FDF4F7DA60E5D83689FE7FF6309CB8)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_29, method);
	}

IL_00b3:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t63C146B90BB6962E05FEDDDD803FA59E6F5798ED Stack_1_GetEnumerator_m6FA7C47EC23D4DBD260C1699E7395E25E30AB02B_gshared (Stack_1_tF6C1720CA323403285CF731A334044D9C18E64AD* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t63C146B90BB6962E05FEDDDD803FA59E6F5798ED L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_mEF1727C054DE777D5CAA14257FF364FCF9D0C322((&L_0), __this, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Stack_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m306DC47932E88E2B919C82C20220290E8D291D85_gshared (Stack_1_tF6C1720CA323403285CF731A334044D9C18E64AD* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t63C146B90BB6962E05FEDDDD803FA59E6F5798ED L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_mEF1727C054DE777D5CAA14257FF364FCF9D0C322((&L_0), __this, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		Enumerator_t63C146B90BB6962E05FEDDDD803FA59E6F5798ED L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 7), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Stack_1_System_Collections_IEnumerable_GetEnumerator_mF54393D749F94A352C422C39A00DEA470B96CDC3_gshared (Stack_1_tF6C1720CA323403285CF731A334044D9C18E64AD* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t63C146B90BB6962E05FEDDDD803FA59E6F5798ED L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_mEF1727C054DE777D5CAA14257FF364FCF9D0C322((&L_0), __this, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		Enumerator_t63C146B90BB6962E05FEDDDD803FA59E6F5798ED L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 7), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR HierarchyNode_t6A6A738223CC5D7FB463CAF6F379C48726891704 Stack_1_Peek_mE327606DC12972FDAEDF7B96AF450645E2C4C076_gshared (Stack_1_tF6C1720CA323403285CF731A334044D9C18E64AD* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	HierarchyNodeU5BU5D_t58C5014EDF77A3B09F6BA5DEE95D32133F935DB2* V_1 = NULL;
	{
		int32_t L_0 = __this->____size;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_0, 1));
		HierarchyNodeU5BU5D_t58C5014EDF77A3B09F6BA5DEE95D32133F935DB2* L_1 = __this->____array;
		V_1 = L_1;
		int32_t L_2 = V_0;
		HierarchyNodeU5BU5D_t58C5014EDF77A3B09F6BA5DEE95D32133F935DB2* L_3 = V_1;
		NullCheck(L_3);
		if ((!(((uint32_t)L_2) >= ((uint32_t)((int32_t)(((RuntimeArray*)L_3)->max_length))))))
		{
			goto IL_001c;
		}
	}
	{
		Stack_1_ThrowForEmptyStack_mD8D9DAAAB71FC95A7478CAE1EFC3F9CBA60062F9(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
	}

IL_001c:
	{
		HierarchyNodeU5BU5D_t58C5014EDF77A3B09F6BA5DEE95D32133F935DB2* L_4 = V_1;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		HierarchyNode_t6A6A738223CC5D7FB463CAF6F379C48726891704 L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		return L_7;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR HierarchyNode_t6A6A738223CC5D7FB463CAF6F379C48726891704 Stack_1_Pop_m8815BEDB98179FDABAFDF585872797E2BBDD8BAB_gshared (Stack_1_tF6C1720CA323403285CF731A334044D9C18E64AD* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	HierarchyNodeU5BU5D_t58C5014EDF77A3B09F6BA5DEE95D32133F935DB2* V_1 = NULL;
	HierarchyNode_t6A6A738223CC5D7FB463CAF6F379C48726891704 V_2;
	memset((&V_2), 0, sizeof(V_2));
	HierarchyNode_t6A6A738223CC5D7FB463CAF6F379C48726891704 G_B4_0;
	memset((&G_B4_0), 0, sizeof(G_B4_0));
	HierarchyNode_t6A6A738223CC5D7FB463CAF6F379C48726891704 G_B3_0;
	memset((&G_B3_0), 0, sizeof(G_B3_0));
	{
		int32_t L_0 = __this->____size;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_0, 1));
		HierarchyNodeU5BU5D_t58C5014EDF77A3B09F6BA5DEE95D32133F935DB2* L_1 = __this->____array;
		V_1 = L_1;
		int32_t L_2 = V_0;
		HierarchyNodeU5BU5D_t58C5014EDF77A3B09F6BA5DEE95D32133F935DB2* L_3 = V_1;
		NullCheck(L_3);
		if ((!(((uint32_t)L_2) >= ((uint32_t)((int32_t)(((RuntimeArray*)L_3)->max_length))))))
		{
			goto IL_001c;
		}
	}
	{
		Stack_1_ThrowForEmptyStack_mD8D9DAAAB71FC95A7478CAE1EFC3F9CBA60062F9(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
	}

IL_001c:
	{
		int32_t L_4 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_4, 1));
		int32_t L_5 = V_0;
		__this->____size = L_5;
		HierarchyNodeU5BU5D_t58C5014EDF77A3B09F6BA5DEE95D32133F935DB2* L_6 = V_1;
		int32_t L_7 = V_0;
		NullCheck(L_6);
		int32_t L_8 = L_7;
		HierarchyNode_t6A6A738223CC5D7FB463CAF6F379C48726891704 L_9 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		G_B4_0 = L_9;
		goto IL_004f;
	}

IL_004f:
	{
		return G_B4_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Stack_1_TryPop_m208AEBEBCE757014CB8B517D8B3ECD2F564BC04D_gshared (Stack_1_tF6C1720CA323403285CF731A334044D9C18E64AD* __this, HierarchyNode_t6A6A738223CC5D7FB463CAF6F379C48726891704* ___0_result, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	HierarchyNodeU5BU5D_t58C5014EDF77A3B09F6BA5DEE95D32133F935DB2* V_1 = NULL;
	HierarchyNode_t6A6A738223CC5D7FB463CAF6F379C48726891704 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0 = __this->____size;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_0, 1));
		HierarchyNodeU5BU5D_t58C5014EDF77A3B09F6BA5DEE95D32133F935DB2* L_1 = __this->____array;
		V_1 = L_1;
		int32_t L_2 = V_0;
		HierarchyNodeU5BU5D_t58C5014EDF77A3B09F6BA5DEE95D32133F935DB2* L_3 = V_1;
		NullCheck(L_3);
		if ((!(((uint32_t)L_2) >= ((uint32_t)((int32_t)(((RuntimeArray*)L_3)->max_length))))))
		{
			goto IL_001f;
		}
	}
	{
		HierarchyNode_t6A6A738223CC5D7FB463CAF6F379C48726891704* L_4 = ___0_result;
		il2cpp_codegen_initobj(L_4, sizeof(HierarchyNode_t6A6A738223CC5D7FB463CAF6F379C48726891704));
		return (bool)0;
	}

IL_001f:
	{
		int32_t L_5 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_5, 1));
		int32_t L_6 = V_0;
		__this->____size = L_6;
		HierarchyNode_t6A6A738223CC5D7FB463CAF6F379C48726891704* L_7 = ___0_result;
		HierarchyNodeU5BU5D_t58C5014EDF77A3B09F6BA5DEE95D32133F935DB2* L_8 = V_1;
		int32_t L_9 = V_0;
		NullCheck(L_8);
		int32_t L_10 = L_9;
		HierarchyNode_t6A6A738223CC5D7FB463CAF6F379C48726891704 L_11 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		*(HierarchyNode_t6A6A738223CC5D7FB463CAF6F379C48726891704*)L_7 = L_11;
		goto IL_0058;
	}

IL_0058:
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Stack_1_Push_m5EE820AA81D8C9906941A114D06B87D1BC7C5CFC_gshared (Stack_1_tF6C1720CA323403285CF731A334044D9C18E64AD* __this, HierarchyNode_t6A6A738223CC5D7FB463CAF6F379C48726891704 ___0_item, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	HierarchyNodeU5BU5D_t58C5014EDF77A3B09F6BA5DEE95D32133F935DB2* V_1 = NULL;
	{
		int32_t L_0 = __this->____size;
		V_0 = L_0;
		HierarchyNodeU5BU5D_t58C5014EDF77A3B09F6BA5DEE95D32133F935DB2* L_1 = __this->____array;
		V_1 = L_1;
		int32_t L_2 = V_0;
		HierarchyNodeU5BU5D_t58C5014EDF77A3B09F6BA5DEE95D32133F935DB2* L_3 = V_1;
		NullCheck(L_3);
		if ((!(((uint32_t)L_2) < ((uint32_t)((int32_t)(((RuntimeArray*)L_3)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		HierarchyNodeU5BU5D_t58C5014EDF77A3B09F6BA5DEE95D32133F935DB2* L_4 = V_1;
		int32_t L_5 = V_0;
		HierarchyNode_t6A6A738223CC5D7FB463CAF6F379C48726891704 L_6 = ___0_item;
		NullCheck(L_4);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(L_5), (HierarchyNode_t6A6A738223CC5D7FB463CAF6F379C48726891704)L_6);
		int32_t L_7 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_7, 1));
		int32_t L_8 = V_0;
		__this->____size = ((int32_t)il2cpp_codegen_add(L_8, 1));
		return;
	}

IL_0034:
	{
		HierarchyNode_t6A6A738223CC5D7FB463CAF6F379C48726891704 L_9 = ___0_item;
		Stack_1_PushWithResize_m4A54403E217E9C2919499F239D795451D6427A1E(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void Stack_1_PushWithResize_m4A54403E217E9C2919499F239D795451D6427A1E_gshared (Stack_1_tF6C1720CA323403285CF731A334044D9C18E64AD* __this, HierarchyNode_t6A6A738223CC5D7FB463CAF6F379C48726891704 ___0_item, const RuntimeMethod* method) 
{
	HierarchyNodeU5BU5D_t58C5014EDF77A3B09F6BA5DEE95D32133F935DB2** G_B2_0 = NULL;
	HierarchyNodeU5BU5D_t58C5014EDF77A3B09F6BA5DEE95D32133F935DB2** G_B1_0 = NULL;
	int32_t G_B3_0 = 0;
	HierarchyNodeU5BU5D_t58C5014EDF77A3B09F6BA5DEE95D32133F935DB2** G_B3_1 = NULL;
	{
		HierarchyNodeU5BU5D_t58C5014EDF77A3B09F6BA5DEE95D32133F935DB2** L_0 = (HierarchyNodeU5BU5D_t58C5014EDF77A3B09F6BA5DEE95D32133F935DB2**)(&__this->____array);
		HierarchyNodeU5BU5D_t58C5014EDF77A3B09F6BA5DEE95D32133F935DB2* L_1 = __this->____array;
		NullCheck(L_1);
		if (!(((RuntimeArray*)L_1)->max_length))
		{
			G_B2_0 = L_0;
			goto IL_001b;
		}
		G_B1_0 = L_0;
	}
	{
		HierarchyNodeU5BU5D_t58C5014EDF77A3B09F6BA5DEE95D32133F935DB2* L_2 = __this->____array;
		NullCheck(L_2);
		G_B3_0 = ((int32_t)il2cpp_codegen_multiply(2, ((int32_t)(((RuntimeArray*)L_2)->max_length))));
		G_B3_1 = G_B1_0;
		goto IL_001c;
	}

IL_001b:
	{
		G_B3_0 = 4;
		G_B3_1 = G_B2_0;
	}

IL_001c:
	{
		Array_Resize_TisHierarchyNode_t6A6A738223CC5D7FB463CAF6F379C48726891704_m711809DC166BD212E8F847D31D18B7C63CC00174(G_B3_1, G_B3_0, il2cpp_rgctx_method(method->klass->rgctx_data, 13));
		HierarchyNodeU5BU5D_t58C5014EDF77A3B09F6BA5DEE95D32133F935DB2* L_3 = __this->____array;
		int32_t L_4 = __this->____size;
		HierarchyNode_t6A6A738223CC5D7FB463CAF6F379C48726891704 L_5 = ___0_item;
		NullCheck(L_3);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(L_4), (HierarchyNode_t6A6A738223CC5D7FB463CAF6F379C48726891704)L_5);
		int32_t L_6 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_6, 1));
		int32_t L_7 = __this->____size;
		__this->____size = ((int32_t)il2cpp_codegen_add(L_7, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Stack_1_ThrowForEmptyStack_mD8D9DAAAB71FC95A7478CAE1EFC3F9CBA60062F9_gshared (Stack_1_tF6C1720CA323403285CF731A334044D9C18E64AD* __this, const RuntimeMethod* method) 
{
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_0 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral95F0EE30865D503A05F1D329BC3FED0946B65C24)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Stack_1__ctor_mF63AE96E8925749CDACE05B89002A389DDD748D1_gshared (Stack_1_t3197E0F5EA36E611B259A88751D31FC2396FE4B6* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_0;
		L_0 = Array_Empty_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m4D53E0E0F90F37AD5DBFD2DC75E52406F90C7ABC_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		__this->____array = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____array), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Stack_1__ctor_m141F1BE46354DA6AD95BD4791941D8BB59594DCA_gshared (Stack_1_t3197E0F5EA36E611B259A88751D31FC2396FE4B6* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		int32_t L_0 = ___0_capacity;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0020;
		}
	}
	{
		int32_t L_1 = ___0_capacity;
		int32_t L_2 = L_1;
		RuntimeObject* L_3 = Box(il2cpp_defaults.int32_class, &L_2);
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_4 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_m60B543A63AC8692C28096003FBF2AD124B9D5B85(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC37D78082ACFC8DEE7B32D9351C6E433A074FEC7)), L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral38E3DBC7FC353425EF3A98DC8DAC6689AF5FD1BE)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, method);
	}

IL_0020:
	{
		int32_t L_5 = ___0_capacity;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_6 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 3), (uint32_t)L_5);
		__this->____array = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____array), (void*)L_6);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Stack_1_get_Count_m367DD1E571E10E5D1B0D13434E35DC7FC31FA886_gshared (Stack_1_t3197E0F5EA36E611B259A88751D31FC2396FE4B6* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Stack_1_System_Collections_ICollection_get_IsSynchronized_mE296FAAA22A3EB0AC336CF00A25F421F6B67A818_gshared (Stack_1_t3197E0F5EA36E611B259A88751D31FC2396FE4B6* __this, const RuntimeMethod* method) 
{
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Stack_1_System_Collections_ICollection_get_SyncRoot_mA506A2FE234FF6181FB2AF00DB329E33CFF628B2_gshared (Stack_1_t3197E0F5EA36E611B259A88751D31FC2396FE4B6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->____syncRoot;
		if (L_0)
		{
			goto IL_001a;
		}
	}
	{
		RuntimeObject** L_1 = (RuntimeObject**)(&__this->____syncRoot);
		RuntimeObject* L_2 = (RuntimeObject*)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(L_2, NULL);
		RuntimeObject* L_3;
		L_3 = InterlockedCompareExchangeImpl<RuntimeObject*>(L_1, L_2, NULL);
	}

IL_001a:
	{
		RuntimeObject* L_4 = __this->____syncRoot;
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Stack_1_Clear_mEE1C6E0AF654AE01D41D12DAF62217D4FE3930E0_gshared (Stack_1_t3197E0F5EA36E611B259A88751D31FC2396FE4B6* __this, const RuntimeMethod* method) 
{
	{
		goto IL_0019;
	}

IL_0019:
	{
		__this->____size = 0;
		int32_t L_0 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_0, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Stack_1_Contains_m582B32C425FCABE2412EAFD287EE75C402ECF671_gshared (Stack_1_t3197E0F5EA36E611B259A88751D31FC2396FE4B6* __this, int32_t ___0_item, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		if (!L_0)
		{
			goto IL_0023;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = __this->____array;
		int32_t L_2 = ___0_item;
		int32_t L_3 = __this->____size;
		int32_t L_4;
		L_4 = Array_LastIndexOf_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m603821E13AA067379EA5D21B577261CBB0BEF8E6(L_1, L_2, ((int32_t)il2cpp_codegen_subtract(L_3, 1)), il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		return (bool)((((int32_t)((((int32_t)L_4) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_0023:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Stack_1_System_Collections_ICollection_CopyTo_m43C5D88AC2BA4A7B9657B005A68F0EE5930F395F_gshared (Stack_1_t3197E0F5EA36E611B259A88751D31FC2396FE4B6* __this, RuntimeArray* ___0_array, int32_t ___1_arrayIndex, const RuntimeMethod* method) 
{
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeArray* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		RuntimeArray* L_2 = ___0_array;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(L_2, NULL);
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0027;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_4 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral967D403A541A1026A83D548E5AD5CA800AD4EFB5)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, method);
	}

IL_0027:
	{
		RuntimeArray* L_5 = ___0_array;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(L_5, 0, NULL);
		if (!L_6)
		{
			goto IL_0040;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_7 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_7, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral6195D7DA68D16D4985AD1A1B4FD2841A43CDDE70)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, method);
	}

IL_0040:
	{
		int32_t L_8 = ___1_arrayIndex;
		if ((((int32_t)L_8) < ((int32_t)0)))
		{
			goto IL_004d;
		}
	}
	{
		int32_t L_9 = ___1_arrayIndex;
		RuntimeArray* L_10 = ___0_array;
		NullCheck(L_10);
		int32_t L_11;
		L_11 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(L_10, NULL);
		if ((((int32_t)L_9) <= ((int32_t)L_11)))
		{
			goto IL_0063;
		}
	}

IL_004d:
	{
		int32_t L_12 = ___1_arrayIndex;
		int32_t L_13 = L_12;
		RuntimeObject* L_14 = Box(il2cpp_defaults.int32_class, &L_13);
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_15 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_m60B543A63AC8692C28096003FBF2AD124B9D5B85(L_15, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC00660333703C551EA80371B54D0ADCEB74C33B4)), L_14, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral569FEAE6AEE421BCD8D24F22865E84F808C2A1E4)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_15, method);
	}

IL_0063:
	{
		RuntimeArray* L_16 = ___0_array;
		NullCheck(L_16);
		int32_t L_17;
		L_17 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(L_16, NULL);
		int32_t L_18 = ___1_arrayIndex;
		int32_t L_19 = __this->____size;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_17, L_18))) >= ((int32_t)L_19)))
		{
			goto IL_007e;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_20 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_20, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral7F4C724BD10943E8B0B17A6E069F992E219EF5E8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_20, method);
	}

IL_007e:
	{
	}
	try
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_21 = __this->____array;
		RuntimeArray* L_22 = ___0_array;
		int32_t L_23 = ___1_arrayIndex;
		int32_t L_24 = __this->____size;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_21, 0, L_22, L_23, L_24, NULL);
		RuntimeArray* L_25 = ___0_array;
		int32_t L_26 = ___1_arrayIndex;
		int32_t L_27 = __this->____size;
		Array_Reverse_mE788006243D34C654D7DDEF13E2D9E7B129AF8AD(L_25, L_26, L_27, NULL);
		goto IL_00b3;
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00a2;
		}
		throw e;
	}

CATCH_00a2:
	{
		ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1* L_28 = ((ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*)IL2CPP_GET_ACTIVE_EXCEPTION(ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*));;
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_29 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_29, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralBD0381A992FDF4F7DA60E5D83689FE7FF6309CB8)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_29, method);
	}

IL_00b3:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t1ED2EFBA8997D05D3B6586A9FF9D467F8D5482F0 Stack_1_GetEnumerator_mDC30F9E4DD7D12559CD9C33E6C412F630A4F9BE3_gshared (Stack_1_t3197E0F5EA36E611B259A88751D31FC2396FE4B6* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t1ED2EFBA8997D05D3B6586A9FF9D467F8D5482F0 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m3D5138341817152CEF519175368AA02FBB797C96((&L_0), __this, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Stack_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m9B28A06DBE13C361182F64834E2480DB46457B8E_gshared (Stack_1_t3197E0F5EA36E611B259A88751D31FC2396FE4B6* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t1ED2EFBA8997D05D3B6586A9FF9D467F8D5482F0 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m3D5138341817152CEF519175368AA02FBB797C96((&L_0), __this, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		Enumerator_t1ED2EFBA8997D05D3B6586A9FF9D467F8D5482F0 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 7), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Stack_1_System_Collections_IEnumerable_GetEnumerator_mC9903FC129ABAFBAE6FDC2428B611C2CBF5E6F2D_gshared (Stack_1_t3197E0F5EA36E611B259A88751D31FC2396FE4B6* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t1ED2EFBA8997D05D3B6586A9FF9D467F8D5482F0 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m3D5138341817152CEF519175368AA02FBB797C96((&L_0), __this, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		Enumerator_t1ED2EFBA8997D05D3B6586A9FF9D467F8D5482F0 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 7), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Stack_1_Peek_m919AA48BFC239B260BB6A0639B8E027B60CB8B66_gshared (Stack_1_t3197E0F5EA36E611B259A88751D31FC2396FE4B6* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_1 = NULL;
	{
		int32_t L_0 = __this->____size;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_0, 1));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = __this->____array;
		V_1 = L_1;
		int32_t L_2 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = V_1;
		NullCheck(L_3);
		if ((!(((uint32_t)L_2) >= ((uint32_t)((int32_t)(((RuntimeArray*)L_3)->max_length))))))
		{
			goto IL_001c;
		}
	}
	{
		Stack_1_ThrowForEmptyStack_mA0C247058163BBAB7D8BFE60D542FFE434A3D834(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
	}

IL_001c:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_4 = V_1;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		int32_t L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		return L_7;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Stack_1_Pop_m59DFD2B5EC8D9044532E0AD0BDB20DB33BA76748_gshared (Stack_1_t3197E0F5EA36E611B259A88751D31FC2396FE4B6* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t G_B4_0 = 0;
	int32_t G_B3_0 = 0;
	{
		int32_t L_0 = __this->____size;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_0, 1));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = __this->____array;
		V_1 = L_1;
		int32_t L_2 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = V_1;
		NullCheck(L_3);
		if ((!(((uint32_t)L_2) >= ((uint32_t)((int32_t)(((RuntimeArray*)L_3)->max_length))))))
		{
			goto IL_001c;
		}
	}
	{
		Stack_1_ThrowForEmptyStack_mA0C247058163BBAB7D8BFE60D542FFE434A3D834(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
	}

IL_001c:
	{
		int32_t L_4 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_4, 1));
		int32_t L_5 = V_0;
		__this->____size = L_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_6 = V_1;
		int32_t L_7 = V_0;
		NullCheck(L_6);
		int32_t L_8 = L_7;
		int32_t L_9 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		G_B4_0 = L_9;
		goto IL_004f;
	}

IL_004f:
	{
		return G_B4_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Stack_1_TryPop_m452A31920DC54B5BF252AEA1A2397634090C1D9B_gshared (Stack_1_t3197E0F5EA36E611B259A88751D31FC2396FE4B6* __this, int32_t* ___0_result, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_1 = NULL;
	int32_t V_2 = 0;
	{
		int32_t L_0 = __this->____size;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_0, 1));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = __this->____array;
		V_1 = L_1;
		int32_t L_2 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = V_1;
		NullCheck(L_3);
		if ((!(((uint32_t)L_2) >= ((uint32_t)((int32_t)(((RuntimeArray*)L_3)->max_length))))))
		{
			goto IL_001f;
		}
	}
	{
		int32_t* L_4 = ___0_result;
		il2cpp_codegen_initobj(L_4, sizeof(int32_t));
		return (bool)0;
	}

IL_001f:
	{
		int32_t L_5 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_5, 1));
		int32_t L_6 = V_0;
		__this->____size = L_6;
		int32_t* L_7 = ___0_result;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_8 = V_1;
		int32_t L_9 = V_0;
		NullCheck(L_8);
		int32_t L_10 = L_9;
		int32_t L_11 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		*(int32_t*)L_7 = L_11;
		goto IL_0058;
	}

IL_0058:
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Stack_1_Push_mF7CC12CF73D9D4B66FFA2E2D264270212CAB3EDA_gshared (Stack_1_t3197E0F5EA36E611B259A88751D31FC2396FE4B6* __this, int32_t ___0_item, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_1 = NULL;
	{
		int32_t L_0 = __this->____size;
		V_0 = L_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = __this->____array;
		V_1 = L_1;
		int32_t L_2 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = V_1;
		NullCheck(L_3);
		if ((!(((uint32_t)L_2) < ((uint32_t)((int32_t)(((RuntimeArray*)L_3)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_4 = V_1;
		int32_t L_5 = V_0;
		int32_t L_6 = ___0_item;
		NullCheck(L_4);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(L_5), (int32_t)L_6);
		int32_t L_7 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_7, 1));
		int32_t L_8 = V_0;
		__this->____size = ((int32_t)il2cpp_codegen_add(L_8, 1));
		return;
	}

IL_0034:
	{
		int32_t L_9 = ___0_item;
		Stack_1_PushWithResize_m2E32959EAD54D6F02C9FF531A2AFDEF3EC04FEB6(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void Stack_1_PushWithResize_m2E32959EAD54D6F02C9FF531A2AFDEF3EC04FEB6_gshared (Stack_1_t3197E0F5EA36E611B259A88751D31FC2396FE4B6* __this, int32_t ___0_item, const RuntimeMethod* method) 
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C** G_B2_0 = NULL;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C** G_B1_0 = NULL;
	int32_t G_B3_0 = 0;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C** G_B3_1 = NULL;
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C** L_0 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C**)(&__this->____array);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = __this->____array;
		NullCheck(L_1);
		if (!(((RuntimeArray*)L_1)->max_length))
		{
			G_B2_0 = L_0;
			goto IL_001b;
		}
		G_B1_0 = L_0;
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2 = __this->____array;
		NullCheck(L_2);
		G_B3_0 = ((int32_t)il2cpp_codegen_multiply(2, ((int32_t)(((RuntimeArray*)L_2)->max_length))));
		G_B3_1 = G_B1_0;
		goto IL_001c;
	}

IL_001b:
	{
		G_B3_0 = 4;
		G_B3_1 = G_B2_0;
	}

IL_001c:
	{
		Array_Resize_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m6BAA7BD6F22421B894347B1476C37052FAC6C916(G_B3_1, G_B3_0, il2cpp_rgctx_method(method->klass->rgctx_data, 13));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = __this->____array;
		int32_t L_4 = __this->____size;
		int32_t L_5 = ___0_item;
		NullCheck(L_3);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(L_4), (int32_t)L_5);
		int32_t L_6 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_6, 1));
		int32_t L_7 = __this->____size;
		__this->____size = ((int32_t)il2cpp_codegen_add(L_7, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Stack_1_ThrowForEmptyStack_mA0C247058163BBAB7D8BFE60D542FFE434A3D834_gshared (Stack_1_t3197E0F5EA36E611B259A88751D31FC2396FE4B6* __this, const RuntimeMethod* method) 
{
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_0 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral95F0EE30865D503A05F1D329BC3FED0946B65C24)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Stack_1__ctor_mD05342C1BB452792EAB7B189EEA951942662B556_gshared (Stack_1_t509AEAED71EF48FB8551C238C1BA01882CC654B9* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		Int32EnumU5BU5D_t87B7DB802810C38016332669039EF42C487A081F* L_0;
		L_0 = Array_Empty_TisInt32Enum_tCBAC8BA2BFF3A845FA599F303093BBBA374B6F0C_m94E12BB613D748D2EEB9E1ABD961630D2F970385_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		__this->____array = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____array), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Stack_1__ctor_mABE5114368C378A79F5762E756A3D3A7BAA0E3B9_gshared (Stack_1_t509AEAED71EF48FB8551C238C1BA01882CC654B9* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		int32_t L_0 = ___0_capacity;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0020;
		}
	}
	{
		int32_t L_1 = ___0_capacity;
		int32_t L_2 = L_1;
		RuntimeObject* L_3 = Box(il2cpp_defaults.int32_class, &L_2);
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_4 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_m60B543A63AC8692C28096003FBF2AD124B9D5B85(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC37D78082ACFC8DEE7B32D9351C6E433A074FEC7)), L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral38E3DBC7FC353425EF3A98DC8DAC6689AF5FD1BE)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, method);
	}

IL_0020:
	{
		int32_t L_5 = ___0_capacity;
		Int32EnumU5BU5D_t87B7DB802810C38016332669039EF42C487A081F* L_6 = (Int32EnumU5BU5D_t87B7DB802810C38016332669039EF42C487A081F*)(Int32EnumU5BU5D_t87B7DB802810C38016332669039EF42C487A081F*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 3), (uint32_t)L_5);
		__this->____array = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____array), (void*)L_6);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Stack_1_get_Count_m4792730A13F3249ABCC0E87BE58C4CEFAA2593AB_gshared (Stack_1_t509AEAED71EF48FB8551C238C1BA01882CC654B9* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Stack_1_System_Collections_ICollection_get_IsSynchronized_m5669A05A4FD8B7CCB4CD8C85C2A6DE062991D5C3_gshared (Stack_1_t509AEAED71EF48FB8551C238C1BA01882CC654B9* __this, const RuntimeMethod* method) 
{
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Stack_1_System_Collections_ICollection_get_SyncRoot_mB3BDA03E5159B66D486FB4E1586CE35997217FD6_gshared (Stack_1_t509AEAED71EF48FB8551C238C1BA01882CC654B9* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->____syncRoot;
		if (L_0)
		{
			goto IL_001a;
		}
	}
	{
		RuntimeObject** L_1 = (RuntimeObject**)(&__this->____syncRoot);
		RuntimeObject* L_2 = (RuntimeObject*)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(L_2, NULL);
		RuntimeObject* L_3;
		L_3 = InterlockedCompareExchangeImpl<RuntimeObject*>(L_1, L_2, NULL);
	}

IL_001a:
	{
		RuntimeObject* L_4 = __this->____syncRoot;
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Stack_1_Clear_mAF063B67F8243B0B5C7A855C8A67BFCE618A77B2_gshared (Stack_1_t509AEAED71EF48FB8551C238C1BA01882CC654B9* __this, const RuntimeMethod* method) 
{
	{
		goto IL_0019;
	}

IL_0019:
	{
		__this->____size = 0;
		int32_t L_0 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_0, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Stack_1_Contains_m6BBC3821516EBCC69444130978DA5FBB01D47D84_gshared (Stack_1_t509AEAED71EF48FB8551C238C1BA01882CC654B9* __this, int32_t ___0_item, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		if (!L_0)
		{
			goto IL_0023;
		}
	}
	{
		Int32EnumU5BU5D_t87B7DB802810C38016332669039EF42C487A081F* L_1 = __this->____array;
		int32_t L_2 = ___0_item;
		int32_t L_3 = __this->____size;
		int32_t L_4;
		L_4 = Array_LastIndexOf_TisInt32Enum_tCBAC8BA2BFF3A845FA599F303093BBBA374B6F0C_m92EE93D981B3058A8384DCA90FFC1502242652F7(L_1, L_2, ((int32_t)il2cpp_codegen_subtract(L_3, 1)), il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		return (bool)((((int32_t)((((int32_t)L_4) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_0023:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Stack_1_System_Collections_ICollection_CopyTo_m4A3AD652EAB28362C9657E2E57B70D7AB605E075_gshared (Stack_1_t509AEAED71EF48FB8551C238C1BA01882CC654B9* __this, RuntimeArray* ___0_array, int32_t ___1_arrayIndex, const RuntimeMethod* method) 
{
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeArray* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		RuntimeArray* L_2 = ___0_array;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(L_2, NULL);
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0027;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_4 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral967D403A541A1026A83D548E5AD5CA800AD4EFB5)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, method);
	}

IL_0027:
	{
		RuntimeArray* L_5 = ___0_array;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(L_5, 0, NULL);
		if (!L_6)
		{
			goto IL_0040;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_7 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_7, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral6195D7DA68D16D4985AD1A1B4FD2841A43CDDE70)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, method);
	}

IL_0040:
	{
		int32_t L_8 = ___1_arrayIndex;
		if ((((int32_t)L_8) < ((int32_t)0)))
		{
			goto IL_004d;
		}
	}
	{
		int32_t L_9 = ___1_arrayIndex;
		RuntimeArray* L_10 = ___0_array;
		NullCheck(L_10);
		int32_t L_11;
		L_11 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(L_10, NULL);
		if ((((int32_t)L_9) <= ((int32_t)L_11)))
		{
			goto IL_0063;
		}
	}

IL_004d:
	{
		int32_t L_12 = ___1_arrayIndex;
		int32_t L_13 = L_12;
		RuntimeObject* L_14 = Box(il2cpp_defaults.int32_class, &L_13);
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_15 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_m60B543A63AC8692C28096003FBF2AD124B9D5B85(L_15, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC00660333703C551EA80371B54D0ADCEB74C33B4)), L_14, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral569FEAE6AEE421BCD8D24F22865E84F808C2A1E4)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_15, method);
	}

IL_0063:
	{
		RuntimeArray* L_16 = ___0_array;
		NullCheck(L_16);
		int32_t L_17;
		L_17 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(L_16, NULL);
		int32_t L_18 = ___1_arrayIndex;
		int32_t L_19 = __this->____size;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_17, L_18))) >= ((int32_t)L_19)))
		{
			goto IL_007e;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_20 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_20, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral7F4C724BD10943E8B0B17A6E069F992E219EF5E8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_20, method);
	}

IL_007e:
	{
	}
	try
	{
		Int32EnumU5BU5D_t87B7DB802810C38016332669039EF42C487A081F* L_21 = __this->____array;
		RuntimeArray* L_22 = ___0_array;
		int32_t L_23 = ___1_arrayIndex;
		int32_t L_24 = __this->____size;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_21, 0, L_22, L_23, L_24, NULL);
		RuntimeArray* L_25 = ___0_array;
		int32_t L_26 = ___1_arrayIndex;
		int32_t L_27 = __this->____size;
		Array_Reverse_mE788006243D34C654D7DDEF13E2D9E7B129AF8AD(L_25, L_26, L_27, NULL);
		goto IL_00b3;
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00a2;
		}
		throw e;
	}

CATCH_00a2:
	{
		ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1* L_28 = ((ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*)IL2CPP_GET_ACTIVE_EXCEPTION(ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*));;
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_29 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_29, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralBD0381A992FDF4F7DA60E5D83689FE7FF6309CB8)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_29, method);
	}

IL_00b3:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t0D7F1F6081F1B6DDB263573004129C443F04F41C Stack_1_GetEnumerator_mDB63D8CFE5E6ABAEAAB522D0B379A1856CC2434B_gshared (Stack_1_t509AEAED71EF48FB8551C238C1BA01882CC654B9* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t0D7F1F6081F1B6DDB263573004129C443F04F41C L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m89062508E459D03177AC1ECE62116EFC56A6FB61((&L_0), __this, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Stack_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m85DDC6ED4CF02AB415FB39E590E78CBCC427B0C7_gshared (Stack_1_t509AEAED71EF48FB8551C238C1BA01882CC654B9* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t0D7F1F6081F1B6DDB263573004129C443F04F41C L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m89062508E459D03177AC1ECE62116EFC56A6FB61((&L_0), __this, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		Enumerator_t0D7F1F6081F1B6DDB263573004129C443F04F41C L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 7), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Stack_1_System_Collections_IEnumerable_GetEnumerator_m5E943A8F427C868897F545EDBB1D696EF1DA3E92_gshared (Stack_1_t509AEAED71EF48FB8551C238C1BA01882CC654B9* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t0D7F1F6081F1B6DDB263573004129C443F04F41C L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m89062508E459D03177AC1ECE62116EFC56A6FB61((&L_0), __this, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		Enumerator_t0D7F1F6081F1B6DDB263573004129C443F04F41C L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 7), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Stack_1_Peek_mCBB15AA52FA8864E2B9065918EE83B3B246CB54F_gshared (Stack_1_t509AEAED71EF48FB8551C238C1BA01882CC654B9* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	Int32EnumU5BU5D_t87B7DB802810C38016332669039EF42C487A081F* V_1 = NULL;
	{
		int32_t L_0 = __this->____size;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_0, 1));
		Int32EnumU5BU5D_t87B7DB802810C38016332669039EF42C487A081F* L_1 = __this->____array;
		V_1 = L_1;
		int32_t L_2 = V_0;
		Int32EnumU5BU5D_t87B7DB802810C38016332669039EF42C487A081F* L_3 = V_1;
		NullCheck(L_3);
		if ((!(((uint32_t)L_2) >= ((uint32_t)((int32_t)(((RuntimeArray*)L_3)->max_length))))))
		{
			goto IL_001c;
		}
	}
	{
		Stack_1_ThrowForEmptyStack_m652E1B38200FB5443D4A6688E81A1589AE0D10DC(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
	}

IL_001c:
	{
		Int32EnumU5BU5D_t87B7DB802810C38016332669039EF42C487A081F* L_4 = V_1;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		int32_t L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		return L_7;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Stack_1_Pop_mF65EFCC543A2FA4060EBB2D1F791A2C95BF0C2B6_gshared (Stack_1_t509AEAED71EF48FB8551C238C1BA01882CC654B9* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	Int32EnumU5BU5D_t87B7DB802810C38016332669039EF42C487A081F* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t G_B4_0 = 0;
	int32_t G_B3_0 = 0;
	{
		int32_t L_0 = __this->____size;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_0, 1));
		Int32EnumU5BU5D_t87B7DB802810C38016332669039EF42C487A081F* L_1 = __this->____array;
		V_1 = L_1;
		int32_t L_2 = V_0;
		Int32EnumU5BU5D_t87B7DB802810C38016332669039EF42C487A081F* L_3 = V_1;
		NullCheck(L_3);
		if ((!(((uint32_t)L_2) >= ((uint32_t)((int32_t)(((RuntimeArray*)L_3)->max_length))))))
		{
			goto IL_001c;
		}
	}
	{
		Stack_1_ThrowForEmptyStack_m652E1B38200FB5443D4A6688E81A1589AE0D10DC(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
	}

IL_001c:
	{
		int32_t L_4 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_4, 1));
		int32_t L_5 = V_0;
		__this->____size = L_5;
		Int32EnumU5BU5D_t87B7DB802810C38016332669039EF42C487A081F* L_6 = V_1;
		int32_t L_7 = V_0;
		NullCheck(L_6);
		int32_t L_8 = L_7;
		int32_t L_9 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		G_B4_0 = L_9;
		goto IL_004f;
	}

IL_004f:
	{
		return G_B4_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Stack_1_TryPop_m16EB6172C4035BFDE28761D3A4DEB75126454AB8_gshared (Stack_1_t509AEAED71EF48FB8551C238C1BA01882CC654B9* __this, int32_t* ___0_result, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	Int32EnumU5BU5D_t87B7DB802810C38016332669039EF42C487A081F* V_1 = NULL;
	int32_t V_2 = 0;
	{
		int32_t L_0 = __this->____size;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_0, 1));
		Int32EnumU5BU5D_t87B7DB802810C38016332669039EF42C487A081F* L_1 = __this->____array;
		V_1 = L_1;
		int32_t L_2 = V_0;
		Int32EnumU5BU5D_t87B7DB802810C38016332669039EF42C487A081F* L_3 = V_1;
		NullCheck(L_3);
		if ((!(((uint32_t)L_2) >= ((uint32_t)((int32_t)(((RuntimeArray*)L_3)->max_length))))))
		{
			goto IL_001f;
		}
	}
	{
		int32_t* L_4 = ___0_result;
		il2cpp_codegen_initobj(L_4, sizeof(int32_t));
		return (bool)0;
	}

IL_001f:
	{
		int32_t L_5 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_5, 1));
		int32_t L_6 = V_0;
		__this->____size = L_6;
		int32_t* L_7 = ___0_result;
		Int32EnumU5BU5D_t87B7DB802810C38016332669039EF42C487A081F* L_8 = V_1;
		int32_t L_9 = V_0;
		NullCheck(L_8);
		int32_t L_10 = L_9;
		int32_t L_11 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		*(int32_t*)L_7 = L_11;
		goto IL_0058;
	}

IL_0058:
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Stack_1_Push_m2A7A3A8D713263E2DE6846D71351F2951D0D3459_gshared (Stack_1_t509AEAED71EF48FB8551C238C1BA01882CC654B9* __this, int32_t ___0_item, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	Int32EnumU5BU5D_t87B7DB802810C38016332669039EF42C487A081F* V_1 = NULL;
	{
		int32_t L_0 = __this->____size;
		V_0 = L_0;
		Int32EnumU5BU5D_t87B7DB802810C38016332669039EF42C487A081F* L_1 = __this->____array;
		V_1 = L_1;
		int32_t L_2 = V_0;
		Int32EnumU5BU5D_t87B7DB802810C38016332669039EF42C487A081F* L_3 = V_1;
		NullCheck(L_3);
		if ((!(((uint32_t)L_2) < ((uint32_t)((int32_t)(((RuntimeArray*)L_3)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		Int32EnumU5BU5D_t87B7DB802810C38016332669039EF42C487A081F* L_4 = V_1;
		int32_t L_5 = V_0;
		int32_t L_6 = ___0_item;
		NullCheck(L_4);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(L_5), (int32_t)L_6);
		int32_t L_7 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_7, 1));
		int32_t L_8 = V_0;
		__this->____size = ((int32_t)il2cpp_codegen_add(L_8, 1));
		return;
	}

IL_0034:
	{
		int32_t L_9 = ___0_item;
		Stack_1_PushWithResize_mBA4873FC90B54D47FCDFAF825F1E462FA6F28560(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void Stack_1_PushWithResize_mBA4873FC90B54D47FCDFAF825F1E462FA6F28560_gshared (Stack_1_t509AEAED71EF48FB8551C238C1BA01882CC654B9* __this, int32_t ___0_item, const RuntimeMethod* method) 
{
	Int32EnumU5BU5D_t87B7DB802810C38016332669039EF42C487A081F** G_B2_0 = NULL;
	Int32EnumU5BU5D_t87B7DB802810C38016332669039EF42C487A081F** G_B1_0 = NULL;
	int32_t G_B3_0 = 0;
	Int32EnumU5BU5D_t87B7DB802810C38016332669039EF42C487A081F** G_B3_1 = NULL;
	{
		Int32EnumU5BU5D_t87B7DB802810C38016332669039EF42C487A081F** L_0 = (Int32EnumU5BU5D_t87B7DB802810C38016332669039EF42C487A081F**)(&__this->____array);
		Int32EnumU5BU5D_t87B7DB802810C38016332669039EF42C487A081F* L_1 = __this->____array;
		NullCheck(L_1);
		if (!(((RuntimeArray*)L_1)->max_length))
		{
			G_B2_0 = L_0;
			goto IL_001b;
		}
		G_B1_0 = L_0;
	}
	{
		Int32EnumU5BU5D_t87B7DB802810C38016332669039EF42C487A081F* L_2 = __this->____array;
		NullCheck(L_2);
		G_B3_0 = ((int32_t)il2cpp_codegen_multiply(2, ((int32_t)(((RuntimeArray*)L_2)->max_length))));
		G_B3_1 = G_B1_0;
		goto IL_001c;
	}

IL_001b:
	{
		G_B3_0 = 4;
		G_B3_1 = G_B2_0;
	}

IL_001c:
	{
		Array_Resize_TisInt32Enum_tCBAC8BA2BFF3A845FA599F303093BBBA374B6F0C_m540BB33A026A346B7B0033684BE811ED519B1E33(G_B3_1, G_B3_0, il2cpp_rgctx_method(method->klass->rgctx_data, 13));
		Int32EnumU5BU5D_t87B7DB802810C38016332669039EF42C487A081F* L_3 = __this->____array;
		int32_t L_4 = __this->____size;
		int32_t L_5 = ___0_item;
		NullCheck(L_3);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(L_4), (int32_t)L_5);
		int32_t L_6 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_6, 1));
		int32_t L_7 = __this->____size;
		__this->____size = ((int32_t)il2cpp_codegen_add(L_7, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Stack_1_ThrowForEmptyStack_m652E1B38200FB5443D4A6688E81A1589AE0D10DC_gshared (Stack_1_t509AEAED71EF48FB8551C238C1BA01882CC654B9* __this, const RuntimeMethod* method) 
{
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_0 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral95F0EE30865D503A05F1D329BC3FED0946B65C24)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Stack_1__ctor_mD8878A1996F825982948A50AE93534B26489B24A_gshared (Stack_1_tC86D82FC3927CE2C02687F21B34C2E808D044724* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		LayoutHandleU5BU5D_tC6BCD3778F861245031A441921C9F04DD1CA1DCA* L_0;
		L_0 = Array_Empty_TisLayoutHandle_tCFE060947B4EDC8F11BF5B480181493FB578BEB6_m7C8D9147C004C0FB177D8EEC050E7FCBA367EE66_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		__this->____array = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____array), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Stack_1__ctor_m11CBA955795573C8D22FBA4F6D1AA3568F1ABED7_gshared (Stack_1_tC86D82FC3927CE2C02687F21B34C2E808D044724* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		int32_t L_0 = ___0_capacity;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0020;
		}
	}
	{
		int32_t L_1 = ___0_capacity;
		int32_t L_2 = L_1;
		RuntimeObject* L_3 = Box(il2cpp_defaults.int32_class, &L_2);
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_4 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_m60B543A63AC8692C28096003FBF2AD124B9D5B85(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC37D78082ACFC8DEE7B32D9351C6E433A074FEC7)), L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral38E3DBC7FC353425EF3A98DC8DAC6689AF5FD1BE)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, method);
	}

IL_0020:
	{
		int32_t L_5 = ___0_capacity;
		LayoutHandleU5BU5D_tC6BCD3778F861245031A441921C9F04DD1CA1DCA* L_6 = (LayoutHandleU5BU5D_tC6BCD3778F861245031A441921C9F04DD1CA1DCA*)(LayoutHandleU5BU5D_tC6BCD3778F861245031A441921C9F04DD1CA1DCA*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 3), (uint32_t)L_5);
		__this->____array = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____array), (void*)L_6);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Stack_1_get_Count_mAF8526C6262631DD4A4F82689883E818AF161A54_gshared (Stack_1_tC86D82FC3927CE2C02687F21B34C2E808D044724* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Stack_1_System_Collections_ICollection_get_IsSynchronized_mC1794E7833F3468A7195B46AF09379EFA03AD2F3_gshared (Stack_1_tC86D82FC3927CE2C02687F21B34C2E808D044724* __this, const RuntimeMethod* method) 
{
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Stack_1_System_Collections_ICollection_get_SyncRoot_m3317B8DD2D1EE553125034978E8EC8C05E6F94C7_gshared (Stack_1_tC86D82FC3927CE2C02687F21B34C2E808D044724* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->____syncRoot;
		if (L_0)
		{
			goto IL_001a;
		}
	}
	{
		RuntimeObject** L_1 = (RuntimeObject**)(&__this->____syncRoot);
		RuntimeObject* L_2 = (RuntimeObject*)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(L_2, NULL);
		RuntimeObject* L_3;
		L_3 = InterlockedCompareExchangeImpl<RuntimeObject*>(L_1, L_2, NULL);
	}

IL_001a:
	{
		RuntimeObject* L_4 = __this->____syncRoot;
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Stack_1_Clear_mED74D9B29C3A069698458BC0B6B3BF88116A6367_gshared (Stack_1_tC86D82FC3927CE2C02687F21B34C2E808D044724* __this, const RuntimeMethod* method) 
{
	{
		goto IL_0019;
	}

IL_0019:
	{
		__this->____size = 0;
		int32_t L_0 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_0, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Stack_1_Contains_m01A4EF1534A09D38DA13E1EB56421A2613720F64_gshared (Stack_1_tC86D82FC3927CE2C02687F21B34C2E808D044724* __this, LayoutHandle_tCFE060947B4EDC8F11BF5B480181493FB578BEB6 ___0_item, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		if (!L_0)
		{
			goto IL_0023;
		}
	}
	{
		LayoutHandleU5BU5D_tC6BCD3778F861245031A441921C9F04DD1CA1DCA* L_1 = __this->____array;
		LayoutHandle_tCFE060947B4EDC8F11BF5B480181493FB578BEB6 L_2 = ___0_item;
		int32_t L_3 = __this->____size;
		int32_t L_4;
		L_4 = Array_LastIndexOf_TisLayoutHandle_tCFE060947B4EDC8F11BF5B480181493FB578BEB6_m4E81267251F27979AA8C653DFD2284D2D9BDE96D(L_1, L_2, ((int32_t)il2cpp_codegen_subtract(L_3, 1)), il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		return (bool)((((int32_t)((((int32_t)L_4) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_0023:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Stack_1_System_Collections_ICollection_CopyTo_m47FBD21A67A70CEE661FA18143051E0BB7B4640B_gshared (Stack_1_tC86D82FC3927CE2C02687F21B34C2E808D044724* __this, RuntimeArray* ___0_array, int32_t ___1_arrayIndex, const RuntimeMethod* method) 
{
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeArray* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		RuntimeArray* L_2 = ___0_array;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(L_2, NULL);
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0027;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_4 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral967D403A541A1026A83D548E5AD5CA800AD4EFB5)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, method);
	}

IL_0027:
	{
		RuntimeArray* L_5 = ___0_array;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(L_5, 0, NULL);
		if (!L_6)
		{
			goto IL_0040;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_7 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_7, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral6195D7DA68D16D4985AD1A1B4FD2841A43CDDE70)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, method);
	}

IL_0040:
	{
		int32_t L_8 = ___1_arrayIndex;
		if ((((int32_t)L_8) < ((int32_t)0)))
		{
			goto IL_004d;
		}
	}
	{
		int32_t L_9 = ___1_arrayIndex;
		RuntimeArray* L_10 = ___0_array;
		NullCheck(L_10);
		int32_t L_11;
		L_11 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(L_10, NULL);
		if ((((int32_t)L_9) <= ((int32_t)L_11)))
		{
			goto IL_0063;
		}
	}

IL_004d:
	{
		int32_t L_12 = ___1_arrayIndex;
		int32_t L_13 = L_12;
		RuntimeObject* L_14 = Box(il2cpp_defaults.int32_class, &L_13);
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_15 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_m60B543A63AC8692C28096003FBF2AD124B9D5B85(L_15, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC00660333703C551EA80371B54D0ADCEB74C33B4)), L_14, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral569FEAE6AEE421BCD8D24F22865E84F808C2A1E4)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_15, method);
	}

IL_0063:
	{
		RuntimeArray* L_16 = ___0_array;
		NullCheck(L_16);
		int32_t L_17;
		L_17 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(L_16, NULL);
		int32_t L_18 = ___1_arrayIndex;
		int32_t L_19 = __this->____size;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_17, L_18))) >= ((int32_t)L_19)))
		{
			goto IL_007e;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_20 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_20, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral7F4C724BD10943E8B0B17A6E069F992E219EF5E8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_20, method);
	}

IL_007e:
	{
	}
	try
	{
		LayoutHandleU5BU5D_tC6BCD3778F861245031A441921C9F04DD1CA1DCA* L_21 = __this->____array;
		RuntimeArray* L_22 = ___0_array;
		int32_t L_23 = ___1_arrayIndex;
		int32_t L_24 = __this->____size;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_21, 0, L_22, L_23, L_24, NULL);
		RuntimeArray* L_25 = ___0_array;
		int32_t L_26 = ___1_arrayIndex;
		int32_t L_27 = __this->____size;
		Array_Reverse_mE788006243D34C654D7DDEF13E2D9E7B129AF8AD(L_25, L_26, L_27, NULL);
		goto IL_00b3;
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00a2;
		}
		throw e;
	}

CATCH_00a2:
	{
		ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1* L_28 = ((ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*)IL2CPP_GET_ACTIVE_EXCEPTION(ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*));;
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_29 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_29, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralBD0381A992FDF4F7DA60E5D83689FE7FF6309CB8)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_29, method);
	}

IL_00b3:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t4A00EBE66EB6847DAB3AEB3D0799C4458493F714 Stack_1_GetEnumerator_mAB4B214A417E2B20D90B46A8A809E011A434938C_gshared (Stack_1_tC86D82FC3927CE2C02687F21B34C2E808D044724* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t4A00EBE66EB6847DAB3AEB3D0799C4458493F714 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_mA0D99F608AB5E5B7B3E091A14655E79FC65EE579((&L_0), __this, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Stack_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m8DCCA821E0A772D3FC012A3462479FC98ECF9452_gshared (Stack_1_tC86D82FC3927CE2C02687F21B34C2E808D044724* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t4A00EBE66EB6847DAB3AEB3D0799C4458493F714 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_mA0D99F608AB5E5B7B3E091A14655E79FC65EE579((&L_0), __this, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		Enumerator_t4A00EBE66EB6847DAB3AEB3D0799C4458493F714 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 7), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Stack_1_System_Collections_IEnumerable_GetEnumerator_m09BC4FBC77AA8BBE2F857331FC9F05097F333CD2_gshared (Stack_1_tC86D82FC3927CE2C02687F21B34C2E808D044724* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t4A00EBE66EB6847DAB3AEB3D0799C4458493F714 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_mA0D99F608AB5E5B7B3E091A14655E79FC65EE579((&L_0), __this, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		Enumerator_t4A00EBE66EB6847DAB3AEB3D0799C4458493F714 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 7), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR LayoutHandle_tCFE060947B4EDC8F11BF5B480181493FB578BEB6 Stack_1_Peek_m8EB8F77D3541C7C80A1F7EA7A1F2E03BB7A0F978_gshared (Stack_1_tC86D82FC3927CE2C02687F21B34C2E808D044724* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	LayoutHandleU5BU5D_tC6BCD3778F861245031A441921C9F04DD1CA1DCA* V_1 = NULL;
	{
		int32_t L_0 = __this->____size;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_0, 1));
		LayoutHandleU5BU5D_tC6BCD3778F861245031A441921C9F04DD1CA1DCA* L_1 = __this->____array;
		V_1 = L_1;
		int32_t L_2 = V_0;
		LayoutHandleU5BU5D_tC6BCD3778F861245031A441921C9F04DD1CA1DCA* L_3 = V_1;
		NullCheck(L_3);
		if ((!(((uint32_t)L_2) >= ((uint32_t)((int32_t)(((RuntimeArray*)L_3)->max_length))))))
		{
			goto IL_001c;
		}
	}
	{
		Stack_1_ThrowForEmptyStack_mF57B83420720498BF13BDDF518AF6641E84837B3(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
	}

IL_001c:
	{
		LayoutHandleU5BU5D_tC6BCD3778F861245031A441921C9F04DD1CA1DCA* L_4 = V_1;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		LayoutHandle_tCFE060947B4EDC8F11BF5B480181493FB578BEB6 L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		return L_7;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR LayoutHandle_tCFE060947B4EDC8F11BF5B480181493FB578BEB6 Stack_1_Pop_mD984AE8730D2E972E272C704F1D4CEED75106784_gshared (Stack_1_tC86D82FC3927CE2C02687F21B34C2E808D044724* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	LayoutHandleU5BU5D_tC6BCD3778F861245031A441921C9F04DD1CA1DCA* V_1 = NULL;
	LayoutHandle_tCFE060947B4EDC8F11BF5B480181493FB578BEB6 V_2;
	memset((&V_2), 0, sizeof(V_2));
	LayoutHandle_tCFE060947B4EDC8F11BF5B480181493FB578BEB6 G_B4_0;
	memset((&G_B4_0), 0, sizeof(G_B4_0));
	LayoutHandle_tCFE060947B4EDC8F11BF5B480181493FB578BEB6 G_B3_0;
	memset((&G_B3_0), 0, sizeof(G_B3_0));
	{
		int32_t L_0 = __this->____size;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_0, 1));
		LayoutHandleU5BU5D_tC6BCD3778F861245031A441921C9F04DD1CA1DCA* L_1 = __this->____array;
		V_1 = L_1;
		int32_t L_2 = V_0;
		LayoutHandleU5BU5D_tC6BCD3778F861245031A441921C9F04DD1CA1DCA* L_3 = V_1;
		NullCheck(L_3);
		if ((!(((uint32_t)L_2) >= ((uint32_t)((int32_t)(((RuntimeArray*)L_3)->max_length))))))
		{
			goto IL_001c;
		}
	}
	{
		Stack_1_ThrowForEmptyStack_mF57B83420720498BF13BDDF518AF6641E84837B3(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
	}

IL_001c:
	{
		int32_t L_4 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_4, 1));
		int32_t L_5 = V_0;
		__this->____size = L_5;
		LayoutHandleU5BU5D_tC6BCD3778F861245031A441921C9F04DD1CA1DCA* L_6 = V_1;
		int32_t L_7 = V_0;
		NullCheck(L_6);
		int32_t L_8 = L_7;
		LayoutHandle_tCFE060947B4EDC8F11BF5B480181493FB578BEB6 L_9 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		G_B4_0 = L_9;
		goto IL_004f;
	}

IL_004f:
	{
		return G_B4_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Stack_1_TryPop_mF4D3E0929ADC890E9797D64D43A996402C8065DA_gshared (Stack_1_tC86D82FC3927CE2C02687F21B34C2E808D044724* __this, LayoutHandle_tCFE060947B4EDC8F11BF5B480181493FB578BEB6* ___0_result, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	LayoutHandleU5BU5D_tC6BCD3778F861245031A441921C9F04DD1CA1DCA* V_1 = NULL;
	LayoutHandle_tCFE060947B4EDC8F11BF5B480181493FB578BEB6 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0 = __this->____size;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_0, 1));
		LayoutHandleU5BU5D_tC6BCD3778F861245031A441921C9F04DD1CA1DCA* L_1 = __this->____array;
		V_1 = L_1;
		int32_t L_2 = V_0;
		LayoutHandleU5BU5D_tC6BCD3778F861245031A441921C9F04DD1CA1DCA* L_3 = V_1;
		NullCheck(L_3);
		if ((!(((uint32_t)L_2) >= ((uint32_t)((int32_t)(((RuntimeArray*)L_3)->max_length))))))
		{
			goto IL_001f;
		}
	}
	{
		LayoutHandle_tCFE060947B4EDC8F11BF5B480181493FB578BEB6* L_4 = ___0_result;
		il2cpp_codegen_initobj(L_4, sizeof(LayoutHandle_tCFE060947B4EDC8F11BF5B480181493FB578BEB6));
		return (bool)0;
	}

IL_001f:
	{
		int32_t L_5 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_5, 1));
		int32_t L_6 = V_0;
		__this->____size = L_6;
		LayoutHandle_tCFE060947B4EDC8F11BF5B480181493FB578BEB6* L_7 = ___0_result;
		LayoutHandleU5BU5D_tC6BCD3778F861245031A441921C9F04DD1CA1DCA* L_8 = V_1;
		int32_t L_9 = V_0;
		NullCheck(L_8);
		int32_t L_10 = L_9;
		LayoutHandle_tCFE060947B4EDC8F11BF5B480181493FB578BEB6 L_11 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		*(LayoutHandle_tCFE060947B4EDC8F11BF5B480181493FB578BEB6*)L_7 = L_11;
		goto IL_0058;
	}

IL_0058:
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Stack_1_Push_m78C43407E50F450C2E6EF3611D227167BA0EC875_gshared (Stack_1_tC86D82FC3927CE2C02687F21B34C2E808D044724* __this, LayoutHandle_tCFE060947B4EDC8F11BF5B480181493FB578BEB6 ___0_item, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	LayoutHandleU5BU5D_tC6BCD3778F861245031A441921C9F04DD1CA1DCA* V_1 = NULL;
	{
		int32_t L_0 = __this->____size;
		V_0 = L_0;
		LayoutHandleU5BU5D_tC6BCD3778F861245031A441921C9F04DD1CA1DCA* L_1 = __this->____array;
		V_1 = L_1;
		int32_t L_2 = V_0;
		LayoutHandleU5BU5D_tC6BCD3778F861245031A441921C9F04DD1CA1DCA* L_3 = V_1;
		NullCheck(L_3);
		if ((!(((uint32_t)L_2) < ((uint32_t)((int32_t)(((RuntimeArray*)L_3)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		LayoutHandleU5BU5D_tC6BCD3778F861245031A441921C9F04DD1CA1DCA* L_4 = V_1;
		int32_t L_5 = V_0;
		LayoutHandle_tCFE060947B4EDC8F11BF5B480181493FB578BEB6 L_6 = ___0_item;
		NullCheck(L_4);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(L_5), (LayoutHandle_tCFE060947B4EDC8F11BF5B480181493FB578BEB6)L_6);
		int32_t L_7 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_7, 1));
		int32_t L_8 = V_0;
		__this->____size = ((int32_t)il2cpp_codegen_add(L_8, 1));
		return;
	}

IL_0034:
	{
		LayoutHandle_tCFE060947B4EDC8F11BF5B480181493FB578BEB6 L_9 = ___0_item;
		Stack_1_PushWithResize_m65C430028275A2D49444BA6331AB2631D04D8183(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void Stack_1_PushWithResize_m65C430028275A2D49444BA6331AB2631D04D8183_gshared (Stack_1_tC86D82FC3927CE2C02687F21B34C2E808D044724* __this, LayoutHandle_tCFE060947B4EDC8F11BF5B480181493FB578BEB6 ___0_item, const RuntimeMethod* method) 
{
	LayoutHandleU5BU5D_tC6BCD3778F861245031A441921C9F04DD1CA1DCA** G_B2_0 = NULL;
	LayoutHandleU5BU5D_tC6BCD3778F861245031A441921C9F04DD1CA1DCA** G_B1_0 = NULL;
	int32_t G_B3_0 = 0;
	LayoutHandleU5BU5D_tC6BCD3778F861245031A441921C9F04DD1CA1DCA** G_B3_1 = NULL;
	{
		LayoutHandleU5BU5D_tC6BCD3778F861245031A441921C9F04DD1CA1DCA** L_0 = (LayoutHandleU5BU5D_tC6BCD3778F861245031A441921C9F04DD1CA1DCA**)(&__this->____array);
		LayoutHandleU5BU5D_tC6BCD3778F861245031A441921C9F04DD1CA1DCA* L_1 = __this->____array;
		NullCheck(L_1);
		if (!(((RuntimeArray*)L_1)->max_length))
		{
			G_B2_0 = L_0;
			goto IL_001b;
		}
		G_B1_0 = L_0;
	}
	{
		LayoutHandleU5BU5D_tC6BCD3778F861245031A441921C9F04DD1CA1DCA* L_2 = __this->____array;
		NullCheck(L_2);
		G_B3_0 = ((int32_t)il2cpp_codegen_multiply(2, ((int32_t)(((RuntimeArray*)L_2)->max_length))));
		G_B3_1 = G_B1_0;
		goto IL_001c;
	}

IL_001b:
	{
		G_B3_0 = 4;
		G_B3_1 = G_B2_0;
	}

IL_001c:
	{
		Array_Resize_TisLayoutHandle_tCFE060947B4EDC8F11BF5B480181493FB578BEB6_mA1FA0777E5E2094927AC5A13BBC6102247904AC3(G_B3_1, G_B3_0, il2cpp_rgctx_method(method->klass->rgctx_data, 13));
		LayoutHandleU5BU5D_tC6BCD3778F861245031A441921C9F04DD1CA1DCA* L_3 = __this->____array;
		int32_t L_4 = __this->____size;
		LayoutHandle_tCFE060947B4EDC8F11BF5B480181493FB578BEB6 L_5 = ___0_item;
		NullCheck(L_3);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(L_4), (LayoutHandle_tCFE060947B4EDC8F11BF5B480181493FB578BEB6)L_5);
		int32_t L_6 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_6, 1));
		int32_t L_7 = __this->____size;
		__this->____size = ((int32_t)il2cpp_codegen_add(L_7, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Stack_1_ThrowForEmptyStack_mF57B83420720498BF13BDDF518AF6641E84837B3_gshared (Stack_1_tC86D82FC3927CE2C02687F21B34C2E808D044724* __this, const RuntimeMethod* method) 
{
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_0 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral95F0EE30865D503A05F1D329BC3FED0946B65C24)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Stack_1__ctor_mE8BC3D8693065B793B1A0CA19DA48B1F049CB940_gshared (Stack_1_t8A661B4E11F715EF60608DE57485D9956E00C72E* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D* L_0;
		L_0 = Array_Empty_TisMatrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_m36408D2B54D6A6519FAF5E5AD03F49ECECA09F2E_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		__this->____array = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____array), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Stack_1__ctor_mEA234C0CB558E2C38137325D097689FD7EBFFFF2_gshared (Stack_1_t8A661B4E11F715EF60608DE57485D9956E00C72E* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		int32_t L_0 = ___0_capacity;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0020;
		}
	}
	{
		int32_t L_1 = ___0_capacity;
		int32_t L_2 = L_1;
		RuntimeObject* L_3 = Box(il2cpp_defaults.int32_class, &L_2);
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_4 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_m60B543A63AC8692C28096003FBF2AD124B9D5B85(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC37D78082ACFC8DEE7B32D9351C6E433A074FEC7)), L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral38E3DBC7FC353425EF3A98DC8DAC6689AF5FD1BE)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, method);
	}

IL_0020:
	{
		int32_t L_5 = ___0_capacity;
		Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D* L_6 = (Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D*)(Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 3), (uint32_t)L_5);
		__this->____array = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____array), (void*)L_6);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Stack_1_get_Count_mE0CA6020FCAC821CECC725F9BDD93EEDFE97A872_gshared (Stack_1_t8A661B4E11F715EF60608DE57485D9956E00C72E* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Stack_1_System_Collections_ICollection_get_IsSynchronized_mAC5B5D1F0715D3F5EDCAAFD1DB41E98DC2A04E9C_gshared (Stack_1_t8A661B4E11F715EF60608DE57485D9956E00C72E* __this, const RuntimeMethod* method) 
{
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Stack_1_System_Collections_ICollection_get_SyncRoot_mC5BE9250C67B11D27BC5D7F3AC54C729612BBFF8_gshared (Stack_1_t8A661B4E11F715EF60608DE57485D9956E00C72E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->____syncRoot;
		if (L_0)
		{
			goto IL_001a;
		}
	}
	{
		RuntimeObject** L_1 = (RuntimeObject**)(&__this->____syncRoot);
		RuntimeObject* L_2 = (RuntimeObject*)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(L_2, NULL);
		RuntimeObject* L_3;
		L_3 = InterlockedCompareExchangeImpl<RuntimeObject*>(L_1, L_2, NULL);
	}

IL_001a:
	{
		RuntimeObject* L_4 = __this->____syncRoot;
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Stack_1_Clear_mE760938D1ADEAF722C519115D86462EF392D5F8E_gshared (Stack_1_t8A661B4E11F715EF60608DE57485D9956E00C72E* __this, const RuntimeMethod* method) 
{
	{
		goto IL_0019;
	}

IL_0019:
	{
		__this->____size = 0;
		int32_t L_0 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_0, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Stack_1_Contains_m5EE0B038B11D0498E8627CCD869DC641026D4D1B_gshared (Stack_1_t8A661B4E11F715EF60608DE57485D9956E00C72E* __this, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___0_item, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		if (!L_0)
		{
			goto IL_0023;
		}
	}
	{
		Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D* L_1 = __this->____array;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_2 = ___0_item;
		int32_t L_3 = __this->____size;
		int32_t L_4;
		L_4 = Array_LastIndexOf_TisMatrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_mFC821A119D3BD51B91A59F09A28A8FDC1C32F6FC(L_1, L_2, ((int32_t)il2cpp_codegen_subtract(L_3, 1)), il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		return (bool)((((int32_t)((((int32_t)L_4) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_0023:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Stack_1_System_Collections_ICollection_CopyTo_mF378128FED4B9119EE9AD3C0CD02C2BA04B244AC_gshared (Stack_1_t8A661B4E11F715EF60608DE57485D9956E00C72E* __this, RuntimeArray* ___0_array, int32_t ___1_arrayIndex, const RuntimeMethod* method) 
{
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeArray* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		RuntimeArray* L_2 = ___0_array;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(L_2, NULL);
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0027;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_4 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral967D403A541A1026A83D548E5AD5CA800AD4EFB5)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, method);
	}

IL_0027:
	{
		RuntimeArray* L_5 = ___0_array;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(L_5, 0, NULL);
		if (!L_6)
		{
			goto IL_0040;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_7 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_7, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral6195D7DA68D16D4985AD1A1B4FD2841A43CDDE70)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, method);
	}

IL_0040:
	{
		int32_t L_8 = ___1_arrayIndex;
		if ((((int32_t)L_8) < ((int32_t)0)))
		{
			goto IL_004d;
		}
	}
	{
		int32_t L_9 = ___1_arrayIndex;
		RuntimeArray* L_10 = ___0_array;
		NullCheck(L_10);
		int32_t L_11;
		L_11 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(L_10, NULL);
		if ((((int32_t)L_9) <= ((int32_t)L_11)))
		{
			goto IL_0063;
		}
	}

IL_004d:
	{
		int32_t L_12 = ___1_arrayIndex;
		int32_t L_13 = L_12;
		RuntimeObject* L_14 = Box(il2cpp_defaults.int32_class, &L_13);
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_15 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_m60B543A63AC8692C28096003FBF2AD124B9D5B85(L_15, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC00660333703C551EA80371B54D0ADCEB74C33B4)), L_14, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral569FEAE6AEE421BCD8D24F22865E84F808C2A1E4)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_15, method);
	}

IL_0063:
	{
		RuntimeArray* L_16 = ___0_array;
		NullCheck(L_16);
		int32_t L_17;
		L_17 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(L_16, NULL);
		int32_t L_18 = ___1_arrayIndex;
		int32_t L_19 = __this->____size;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_17, L_18))) >= ((int32_t)L_19)))
		{
			goto IL_007e;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_20 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_20, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral7F4C724BD10943E8B0B17A6E069F992E219EF5E8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_20, method);
	}

IL_007e:
	{
	}
	try
	{
		Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D* L_21 = __this->____array;
		RuntimeArray* L_22 = ___0_array;
		int32_t L_23 = ___1_arrayIndex;
		int32_t L_24 = __this->____size;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_21, 0, L_22, L_23, L_24, NULL);
		RuntimeArray* L_25 = ___0_array;
		int32_t L_26 = ___1_arrayIndex;
		int32_t L_27 = __this->____size;
		Array_Reverse_mE788006243D34C654D7DDEF13E2D9E7B129AF8AD(L_25, L_26, L_27, NULL);
		goto IL_00b3;
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00a2;
		}
		throw e;
	}

CATCH_00a2:
	{
		ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1* L_28 = ((ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*)IL2CPP_GET_ACTIVE_EXCEPTION(ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*));;
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_29 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_29, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralBD0381A992FDF4F7DA60E5D83689FE7FF6309CB8)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_29, method);
	}

IL_00b3:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t1999C0BADD971016559CDAF90DA9DC67FAEF5B8A Stack_1_GetEnumerator_m02240169A5AC764BD521BF173361FA927C136FB7_gshared (Stack_1_t8A661B4E11F715EF60608DE57485D9956E00C72E* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t1999C0BADD971016559CDAF90DA9DC67FAEF5B8A L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_mB2E659404649FBEA780D53C3FA4E957998A349FB((&L_0), __this, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Stack_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m90327FF68B7506C945BA4506E55DF116B296B4FC_gshared (Stack_1_t8A661B4E11F715EF60608DE57485D9956E00C72E* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t1999C0BADD971016559CDAF90DA9DC67FAEF5B8A L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_mB2E659404649FBEA780D53C3FA4E957998A349FB((&L_0), __this, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		Enumerator_t1999C0BADD971016559CDAF90DA9DC67FAEF5B8A L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 7), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Stack_1_System_Collections_IEnumerable_GetEnumerator_m2D77C0C75B6A42F516D2AFB5B44A703EC0B41F6F_gshared (Stack_1_t8A661B4E11F715EF60608DE57485D9956E00C72E* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t1999C0BADD971016559CDAF90DA9DC67FAEF5B8A L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_mB2E659404649FBEA780D53C3FA4E957998A349FB((&L_0), __this, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		Enumerator_t1999C0BADD971016559CDAF90DA9DC67FAEF5B8A L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 7), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 Stack_1_Peek_m4C71DF7964D5892AE0F074981907CC29E354C498_gshared (Stack_1_t8A661B4E11F715EF60608DE57485D9956E00C72E* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D* V_1 = NULL;
	{
		int32_t L_0 = __this->____size;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_0, 1));
		Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D* L_1 = __this->____array;
		V_1 = L_1;
		int32_t L_2 = V_0;
		Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D* L_3 = V_1;
		NullCheck(L_3);
		if ((!(((uint32_t)L_2) >= ((uint32_t)((int32_t)(((RuntimeArray*)L_3)->max_length))))))
		{
			goto IL_001c;
		}
	}
	{
		Stack_1_ThrowForEmptyStack_m8A1BE6CEDDAD8DB304FC2E141DA5635DB3B88338(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
	}

IL_001c:
	{
		Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D* L_4 = V_1;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		return L_7;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 Stack_1_Pop_m682D32993E1CB092C642F495A93915B11F401A7F_gshared (Stack_1_t8A661B4E11F715EF60608DE57485D9956E00C72E* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D* V_1 = NULL;
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 V_2;
	memset((&V_2), 0, sizeof(V_2));
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 G_B4_0;
	memset((&G_B4_0), 0, sizeof(G_B4_0));
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 G_B3_0;
	memset((&G_B3_0), 0, sizeof(G_B3_0));
	{
		int32_t L_0 = __this->____size;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_0, 1));
		Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D* L_1 = __this->____array;
		V_1 = L_1;
		int32_t L_2 = V_0;
		Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D* L_3 = V_1;
		NullCheck(L_3);
		if ((!(((uint32_t)L_2) >= ((uint32_t)((int32_t)(((RuntimeArray*)L_3)->max_length))))))
		{
			goto IL_001c;
		}
	}
	{
		Stack_1_ThrowForEmptyStack_m8A1BE6CEDDAD8DB304FC2E141DA5635DB3B88338(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
	}

IL_001c:
	{
		int32_t L_4 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_4, 1));
		int32_t L_5 = V_0;
		__this->____size = L_5;
		Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D* L_6 = V_1;
		int32_t L_7 = V_0;
		NullCheck(L_6);
		int32_t L_8 = L_7;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_9 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		G_B4_0 = L_9;
		goto IL_004f;
	}

IL_004f:
	{
		return G_B4_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Stack_1_TryPop_m5A0398B2FE8793B31D3B00B60F5190D16FA04E18_gshared (Stack_1_t8A661B4E11F715EF60608DE57485D9956E00C72E* __this, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6* ___0_result, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D* V_1 = NULL;
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0 = __this->____size;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_0, 1));
		Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D* L_1 = __this->____array;
		V_1 = L_1;
		int32_t L_2 = V_0;
		Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D* L_3 = V_1;
		NullCheck(L_3);
		if ((!(((uint32_t)L_2) >= ((uint32_t)((int32_t)(((RuntimeArray*)L_3)->max_length))))))
		{
			goto IL_001f;
		}
	}
	{
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6* L_4 = ___0_result;
		il2cpp_codegen_initobj(L_4, sizeof(Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6));
		return (bool)0;
	}

IL_001f:
	{
		int32_t L_5 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_5, 1));
		int32_t L_6 = V_0;
		__this->____size = L_6;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6* L_7 = ___0_result;
		Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D* L_8 = V_1;
		int32_t L_9 = V_0;
		NullCheck(L_8);
		int32_t L_10 = L_9;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_11 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		*(Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6*)L_7 = L_11;
		goto IL_0058;
	}

IL_0058:
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Stack_1_Push_m4D734379CC958AED5ED7FF36A9467EDCE6AFDF56_gshared (Stack_1_t8A661B4E11F715EF60608DE57485D9956E00C72E* __this, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___0_item, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D* V_1 = NULL;
	{
		int32_t L_0 = __this->____size;
		V_0 = L_0;
		Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D* L_1 = __this->____array;
		V_1 = L_1;
		int32_t L_2 = V_0;
		Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D* L_3 = V_1;
		NullCheck(L_3);
		if ((!(((uint32_t)L_2) < ((uint32_t)((int32_t)(((RuntimeArray*)L_3)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D* L_4 = V_1;
		int32_t L_5 = V_0;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_6 = ___0_item;
		NullCheck(L_4);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(L_5), (Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6)L_6);
		int32_t L_7 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_7, 1));
		int32_t L_8 = V_0;
		__this->____size = ((int32_t)il2cpp_codegen_add(L_8, 1));
		return;
	}

IL_0034:
	{
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_9 = ___0_item;
		Stack_1_PushWithResize_m08841831A121C2488026F8131C34F8C15C250CC1(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void Stack_1_PushWithResize_m08841831A121C2488026F8131C34F8C15C250CC1_gshared (Stack_1_t8A661B4E11F715EF60608DE57485D9956E00C72E* __this, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___0_item, const RuntimeMethod* method) 
{
	Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D** G_B2_0 = NULL;
	Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D** G_B1_0 = NULL;
	int32_t G_B3_0 = 0;
	Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D** G_B3_1 = NULL;
	{
		Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D** L_0 = (Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D**)(&__this->____array);
		Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D* L_1 = __this->____array;
		NullCheck(L_1);
		if (!(((RuntimeArray*)L_1)->max_length))
		{
			G_B2_0 = L_0;
			goto IL_001b;
		}
		G_B1_0 = L_0;
	}
	{
		Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D* L_2 = __this->____array;
		NullCheck(L_2);
		G_B3_0 = ((int32_t)il2cpp_codegen_multiply(2, ((int32_t)(((RuntimeArray*)L_2)->max_length))));
		G_B3_1 = G_B1_0;
		goto IL_001c;
	}

IL_001b:
	{
		G_B3_0 = 4;
		G_B3_1 = G_B2_0;
	}

IL_001c:
	{
		Array_Resize_TisMatrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_m45E2DE0DBF4E0547B569F9496A9D773B058C30CA(G_B3_1, G_B3_0, il2cpp_rgctx_method(method->klass->rgctx_data, 13));
		Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D* L_3 = __this->____array;
		int32_t L_4 = __this->____size;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_5 = ___0_item;
		NullCheck(L_3);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(L_4), (Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6)L_5);
		int32_t L_6 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_6, 1));
		int32_t L_7 = __this->____size;
		__this->____size = ((int32_t)il2cpp_codegen_add(L_7, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Stack_1_ThrowForEmptyStack_m8A1BE6CEDDAD8DB304FC2E141DA5635DB3B88338_gshared (Stack_1_t8A661B4E11F715EF60608DE57485D9956E00C72E* __this, const RuntimeMethod* method) 
{
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_0 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral95F0EE30865D503A05F1D329BC3FED0946B65C24)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Stack_1__ctor_m70E8EDA96A608CE9BAB7FC8313B233AADA573BD4_gshared (Stack_1_tAD790A47551563636908E21E4F08C54C0C323EB5* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0;
		L_0 = Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		__this->____array = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____array), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Stack_1__ctor_m25F8C6095172E75DEE8A43E857889659DFC4DCE9_gshared (Stack_1_tAD790A47551563636908E21E4F08C54C0C323EB5* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		int32_t L_0 = ___0_capacity;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0020;
		}
	}
	{
		int32_t L_1 = ___0_capacity;
		int32_t L_2 = L_1;
		RuntimeObject* L_3 = Box(il2cpp_defaults.int32_class, &L_2);
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_4 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_m60B543A63AC8692C28096003FBF2AD124B9D5B85(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC37D78082ACFC8DEE7B32D9351C6E433A074FEC7)), L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral38E3DBC7FC353425EF3A98DC8DAC6689AF5FD1BE)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, method);
	}

IL_0020:
	{
		int32_t L_5 = ___0_capacity;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 3), (uint32_t)L_5);
		__this->____array = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____array), (void*)L_6);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Stack_1_get_Count_mD08AE71D49787D30DDD9D484BCD323D646744D2E_gshared (Stack_1_tAD790A47551563636908E21E4F08C54C0C323EB5* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Stack_1_System_Collections_ICollection_get_IsSynchronized_mC8C675C38F78EC0A9434F851D663057BE1A51CC9_gshared (Stack_1_tAD790A47551563636908E21E4F08C54C0C323EB5* __this, const RuntimeMethod* method) 
{
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Stack_1_System_Collections_ICollection_get_SyncRoot_mCA7DEBD17371E49CE88F409F21DDDA6486FACCFF_gshared (Stack_1_tAD790A47551563636908E21E4F08C54C0C323EB5* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->____syncRoot;
		if (L_0)
		{
			goto IL_001a;
		}
	}
	{
		RuntimeObject** L_1 = (RuntimeObject**)(&__this->____syncRoot);
		RuntimeObject* L_2 = (RuntimeObject*)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(L_2, NULL);
		RuntimeObject* L_3;
		L_3 = InterlockedCompareExchangeImpl<RuntimeObject*>(L_1, L_2, NULL);
	}

IL_001a:
	{
		RuntimeObject* L_4 = __this->____syncRoot;
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Stack_1_Clear_mD550E89582979ECB0D6E6D68F0237FC14708BE85_gshared (Stack_1_tAD790A47551563636908E21E4F08C54C0C323EB5* __this, const RuntimeMethod* method) 
{
	{
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = __this->____array;
		int32_t L_1 = __this->____size;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_0, 0, L_1, NULL);
	}

IL_0019:
	{
		__this->____size = 0;
		int32_t L_2 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_2, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Stack_1_Contains_mDA7FA93F340E77121271246B7003BF77B08DDCF2_gshared (Stack_1_tAD790A47551563636908E21E4F08C54C0C323EB5* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		if (!L_0)
		{
			goto IL_0023;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = __this->____array;
		RuntimeObject* L_2 = ___0_item;
		int32_t L_3 = __this->____size;
		int32_t L_4;
		L_4 = Array_LastIndexOf_TisRuntimeObject_m60B0AA749643DFCD60274810604B33A8A2CF0A40(L_1, L_2, ((int32_t)il2cpp_codegen_subtract(L_3, 1)), il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		return (bool)((((int32_t)((((int32_t)L_4) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_0023:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Stack_1_System_Collections_ICollection_CopyTo_m20FF8EC87636B953D59AA7A6810DA984A5D136E6_gshared (Stack_1_tAD790A47551563636908E21E4F08C54C0C323EB5* __this, RuntimeArray* ___0_array, int32_t ___1_arrayIndex, const RuntimeMethod* method) 
{
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeArray* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		RuntimeArray* L_2 = ___0_array;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(L_2, NULL);
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0027;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_4 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral967D403A541A1026A83D548E5AD5CA800AD4EFB5)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, method);
	}

IL_0027:
	{
		RuntimeArray* L_5 = ___0_array;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(L_5, 0, NULL);
		if (!L_6)
		{
			goto IL_0040;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_7 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_7, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral6195D7DA68D16D4985AD1A1B4FD2841A43CDDE70)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, method);
	}

IL_0040:
	{
		int32_t L_8 = ___1_arrayIndex;
		if ((((int32_t)L_8) < ((int32_t)0)))
		{
			goto IL_004d;
		}
	}
	{
		int32_t L_9 = ___1_arrayIndex;
		RuntimeArray* L_10 = ___0_array;
		NullCheck(L_10);
		int32_t L_11;
		L_11 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(L_10, NULL);
		if ((((int32_t)L_9) <= ((int32_t)L_11)))
		{
			goto IL_0063;
		}
	}

IL_004d:
	{
		int32_t L_12 = ___1_arrayIndex;
		int32_t L_13 = L_12;
		RuntimeObject* L_14 = Box(il2cpp_defaults.int32_class, &L_13);
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_15 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_m60B543A63AC8692C28096003FBF2AD124B9D5B85(L_15, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC00660333703C551EA80371B54D0ADCEB74C33B4)), L_14, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral569FEAE6AEE421BCD8D24F22865E84F808C2A1E4)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_15, method);
	}

IL_0063:
	{
		RuntimeArray* L_16 = ___0_array;
		NullCheck(L_16);
		int32_t L_17;
		L_17 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(L_16, NULL);
		int32_t L_18 = ___1_arrayIndex;
		int32_t L_19 = __this->____size;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_17, L_18))) >= ((int32_t)L_19)))
		{
			goto IL_007e;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_20 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_20, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral7F4C724BD10943E8B0B17A6E069F992E219EF5E8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_20, method);
	}

IL_007e:
	{
	}
	try
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_21 = __this->____array;
		RuntimeArray* L_22 = ___0_array;
		int32_t L_23 = ___1_arrayIndex;
		int32_t L_24 = __this->____size;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_21, 0, L_22, L_23, L_24, NULL);
		RuntimeArray* L_25 = ___0_array;
		int32_t L_26 = ___1_arrayIndex;
		int32_t L_27 = __this->____size;
		Array_Reverse_mE788006243D34C654D7DDEF13E2D9E7B129AF8AD(L_25, L_26, L_27, NULL);
		goto IL_00b3;
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00a2;
		}
		throw e;
	}

CATCH_00a2:
	{
		ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1* L_28 = ((ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*)IL2CPP_GET_ACTIVE_EXCEPTION(ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*));;
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_29 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_29, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralBD0381A992FDF4F7DA60E5D83689FE7FF6309CB8)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_29, method);
	}

IL_00b3:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t852186DADC50D976C4BD8FE59C506354ED48B974 Stack_1_GetEnumerator_m0CCBAC4DEE59DAE0D095E9ABAE44E17B5002382C_gshared (Stack_1_tAD790A47551563636908E21E4F08C54C0C323EB5* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t852186DADC50D976C4BD8FE59C506354ED48B974 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m9F25E94BA06F0C82E9CE1E5A204D5C65DEA9DEAB((&L_0), __this, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Stack_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m7E1DB0BA4510B052067303F5439D47FC54F76815_gshared (Stack_1_tAD790A47551563636908E21E4F08C54C0C323EB5* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t852186DADC50D976C4BD8FE59C506354ED48B974 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m9F25E94BA06F0C82E9CE1E5A204D5C65DEA9DEAB((&L_0), __this, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		Enumerator_t852186DADC50D976C4BD8FE59C506354ED48B974 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 7), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Stack_1_System_Collections_IEnumerable_GetEnumerator_mB13E70A7273352E65D0A8D7D574425EA412808C3_gshared (Stack_1_tAD790A47551563636908E21E4F08C54C0C323EB5* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t852186DADC50D976C4BD8FE59C506354ED48B974 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m9F25E94BA06F0C82E9CE1E5A204D5C65DEA9DEAB((&L_0), __this, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		Enumerator_t852186DADC50D976C4BD8FE59C506354ED48B974 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 7), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Stack_1_Peek_mF0ECF6A61726B66E6D9B33D8C4DEAA47E586E6E4_gshared (Stack_1_tAD790A47551563636908E21E4F08C54C0C323EB5* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_1 = NULL;
	{
		int32_t L_0 = __this->____size;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_0, 1));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = __this->____array;
		V_1 = L_1;
		int32_t L_2 = V_0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = V_1;
		NullCheck(L_3);
		if ((!(((uint32_t)L_2) >= ((uint32_t)((int32_t)(((RuntimeArray*)L_3)->max_length))))))
		{
			goto IL_001c;
		}
	}
	{
		Stack_1_ThrowForEmptyStack_m44B37D35FD9357C7012A60D95B04AB96C0463EC7(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
	}

IL_001c:
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = V_1;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		RuntimeObject* L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		return L_7;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Stack_1_Pop_m2AFF69249659372F07EE25817DBCAFE74E1CF778_gshared (Stack_1_tAD790A47551563636908E21E4F08C54C0C323EB5* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_1 = NULL;
	RuntimeObject* V_2 = NULL;
	RuntimeObject* G_B4_0 = NULL;
	RuntimeObject* G_B3_0 = NULL;
	{
		int32_t L_0 = __this->____size;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_0, 1));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = __this->____array;
		V_1 = L_1;
		int32_t L_2 = V_0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = V_1;
		NullCheck(L_3);
		if ((!(((uint32_t)L_2) >= ((uint32_t)((int32_t)(((RuntimeArray*)L_3)->max_length))))))
		{
			goto IL_001c;
		}
	}
	{
		Stack_1_ThrowForEmptyStack_m44B37D35FD9357C7012A60D95B04AB96C0463EC7(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
	}

IL_001c:
	{
		int32_t L_4 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_4, 1));
		int32_t L_5 = V_0;
		__this->____size = L_5;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = V_1;
		int32_t L_7 = V_0;
		NullCheck(L_6);
		int32_t L_8 = L_7;
		RuntimeObject* L_9 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		G_B3_0 = L_9;
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_10 = V_1;
		int32_t L_11 = V_0;
		il2cpp_codegen_initobj((&V_2), sizeof(RuntimeObject*));
		RuntimeObject* L_12 = V_2;
		NullCheck(L_10);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(L_11), (RuntimeObject*)L_12);
		G_B4_0 = G_B3_0;
	}

IL_004f:
	{
		return G_B4_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Stack_1_TryPop_m963EB60D733BD73C9293F3856623FB359DCEF4A8_gshared (Stack_1_tAD790A47551563636908E21E4F08C54C0C323EB5* __this, RuntimeObject** ___0_result, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_1 = NULL;
	RuntimeObject* V_2 = NULL;
	{
		int32_t L_0 = __this->____size;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_0, 1));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = __this->____array;
		V_1 = L_1;
		int32_t L_2 = V_0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = V_1;
		NullCheck(L_3);
		if ((!(((uint32_t)L_2) >= ((uint32_t)((int32_t)(((RuntimeArray*)L_3)->max_length))))))
		{
			goto IL_001f;
		}
	}
	{
		RuntimeObject** L_4 = ___0_result;
		il2cpp_codegen_initobj(L_4, sizeof(RuntimeObject*));
		return (bool)0;
	}

IL_001f:
	{
		int32_t L_5 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_5, 1));
		int32_t L_6 = V_0;
		__this->____size = L_6;
		RuntimeObject** L_7 = ___0_result;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_8 = V_1;
		int32_t L_9 = V_0;
		NullCheck(L_8);
		int32_t L_10 = L_9;
		RuntimeObject* L_11 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		*(RuntimeObject**)L_7 = L_11;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_7, (void*)L_11);
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_12 = V_1;
		int32_t L_13 = V_0;
		il2cpp_codegen_initobj((&V_2), sizeof(RuntimeObject*));
		RuntimeObject* L_14 = V_2;
		NullCheck(L_12);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(L_13), (RuntimeObject*)L_14);
	}

IL_0058:
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Stack_1_Push_m709DD11BC1291A905814182CF9A367DE7399A778_gshared (Stack_1_tAD790A47551563636908E21E4F08C54C0C323EB5* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_1 = NULL;
	{
		int32_t L_0 = __this->____size;
		V_0 = L_0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = __this->____array;
		V_1 = L_1;
		int32_t L_2 = V_0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = V_1;
		NullCheck(L_3);
		if ((!(((uint32_t)L_2) < ((uint32_t)((int32_t)(((RuntimeArray*)L_3)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = V_1;
		int32_t L_5 = V_0;
		RuntimeObject* L_6 = ___0_item;
		NullCheck(L_4);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(L_5), (RuntimeObject*)L_6);
		int32_t L_7 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_7, 1));
		int32_t L_8 = V_0;
		__this->____size = ((int32_t)il2cpp_codegen_add(L_8, 1));
		return;
	}

IL_0034:
	{
		RuntimeObject* L_9 = ___0_item;
		Stack_1_PushWithResize_mEC6D96B634757F6C1B0839B2B591944DF48C2B9B(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void Stack_1_PushWithResize_mEC6D96B634757F6C1B0839B2B591944DF48C2B9B_gshared (Stack_1_tAD790A47551563636908E21E4F08C54C0C323EB5* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) 
{
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918** G_B2_0 = NULL;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918** G_B1_0 = NULL;
	int32_t G_B3_0 = 0;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918** G_B3_1 = NULL;
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918** L_0 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918**)(&__this->____array);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = __this->____array;
		NullCheck(L_1);
		if (!(((RuntimeArray*)L_1)->max_length))
		{
			G_B2_0 = L_0;
			goto IL_001b;
		}
		G_B1_0 = L_0;
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = __this->____array;
		NullCheck(L_2);
		G_B3_0 = ((int32_t)il2cpp_codegen_multiply(2, ((int32_t)(((RuntimeArray*)L_2)->max_length))));
		G_B3_1 = G_B1_0;
		goto IL_001c;
	}

IL_001b:
	{
		G_B3_0 = 4;
		G_B3_1 = G_B2_0;
	}

IL_001c:
	{
		Array_Resize_TisRuntimeObject_mE8D92C287251BAF8256D85E5829F749359EC334E(G_B3_1, G_B3_0, il2cpp_rgctx_method(method->klass->rgctx_data, 13));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = __this->____array;
		int32_t L_4 = __this->____size;
		RuntimeObject* L_5 = ___0_item;
		NullCheck(L_3);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(L_4), (RuntimeObject*)L_5);
		int32_t L_6 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_6, 1));
		int32_t L_7 = __this->____size;
		__this->____size = ((int32_t)il2cpp_codegen_add(L_7, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Stack_1_ThrowForEmptyStack_m44B37D35FD9357C7012A60D95B04AB96C0463EC7_gshared (Stack_1_tAD790A47551563636908E21E4F08C54C0C323EB5* __this, const RuntimeMethod* method) 
{
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_0 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral95F0EE30865D503A05F1D329BC3FED0946B65C24)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Stack_1__ctor_mE8025F482A1E24A3D57137158FD84D1DE34436CA_gshared (Stack_1_tEEC1F6968B6388E4800894946805617A2E7EDFDA* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		RectU5BU5D_t83297CB2E61BDF9D27DCB1A3E5C78EBCE9F7C993* L_0;
		L_0 = Array_Empty_TisRect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D_m85A5CFE26D5D127B03744735ED2B5FC30FCB1D59_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		__this->____array = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____array), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Stack_1__ctor_mFF546E1DE2E2F989C809B6F382BDF89D49AD1BB3_gshared (Stack_1_tEEC1F6968B6388E4800894946805617A2E7EDFDA* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		int32_t L_0 = ___0_capacity;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0020;
		}
	}
	{
		int32_t L_1 = ___0_capacity;
		int32_t L_2 = L_1;
		RuntimeObject* L_3 = Box(il2cpp_defaults.int32_class, &L_2);
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_4 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_m60B543A63AC8692C28096003FBF2AD124B9D5B85(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC37D78082ACFC8DEE7B32D9351C6E433A074FEC7)), L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral38E3DBC7FC353425EF3A98DC8DAC6689AF5FD1BE)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, method);
	}

IL_0020:
	{
		int32_t L_5 = ___0_capacity;
		RectU5BU5D_t83297CB2E61BDF9D27DCB1A3E5C78EBCE9F7C993* L_6 = (RectU5BU5D_t83297CB2E61BDF9D27DCB1A3E5C78EBCE9F7C993*)(RectU5BU5D_t83297CB2E61BDF9D27DCB1A3E5C78EBCE9F7C993*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 3), (uint32_t)L_5);
		__this->____array = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____array), (void*)L_6);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Stack_1_get_Count_m6352E8A1C75FAF97C0127210A3241D92172561AD_gshared (Stack_1_tEEC1F6968B6388E4800894946805617A2E7EDFDA* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Stack_1_System_Collections_ICollection_get_IsSynchronized_m37971AC3BF416AC49D0B33790CE37E3EB4291B18_gshared (Stack_1_tEEC1F6968B6388E4800894946805617A2E7EDFDA* __this, const RuntimeMethod* method) 
{
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Stack_1_System_Collections_ICollection_get_SyncRoot_m67AA71A87E100FD3E26C9D60E12884C477BBB4F1_gshared (Stack_1_tEEC1F6968B6388E4800894946805617A2E7EDFDA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->____syncRoot;
		if (L_0)
		{
			goto IL_001a;
		}
	}
	{
		RuntimeObject** L_1 = (RuntimeObject**)(&__this->____syncRoot);
		RuntimeObject* L_2 = (RuntimeObject*)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(L_2, NULL);
		RuntimeObject* L_3;
		L_3 = InterlockedCompareExchangeImpl<RuntimeObject*>(L_1, L_2, NULL);
	}

IL_001a:
	{
		RuntimeObject* L_4 = __this->____syncRoot;
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Stack_1_Clear_mD2D3759CB5BA49536707C59755691DDAA6C21960_gshared (Stack_1_tEEC1F6968B6388E4800894946805617A2E7EDFDA* __this, const RuntimeMethod* method) 
{
	{
		goto IL_0019;
	}

IL_0019:
	{
		__this->____size = 0;
		int32_t L_0 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_0, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Stack_1_Contains_m5A90B4FBA534A75F3F7FCE612F7D0E9DFC580A69_gshared (Stack_1_tEEC1F6968B6388E4800894946805617A2E7EDFDA* __this, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___0_item, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		if (!L_0)
		{
			goto IL_0023;
		}
	}
	{
		RectU5BU5D_t83297CB2E61BDF9D27DCB1A3E5C78EBCE9F7C993* L_1 = __this->____array;
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_2 = ___0_item;
		int32_t L_3 = __this->____size;
		int32_t L_4;
		L_4 = Array_LastIndexOf_TisRect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D_mCEA7CE77FA45B1CB38444D71C46BC24E06A0ECA4(L_1, L_2, ((int32_t)il2cpp_codegen_subtract(L_3, 1)), il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		return (bool)((((int32_t)((((int32_t)L_4) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_0023:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Stack_1_System_Collections_ICollection_CopyTo_m589A8571C3366E1A6A8EF4F891252F12F431BB6E_gshared (Stack_1_tEEC1F6968B6388E4800894946805617A2E7EDFDA* __this, RuntimeArray* ___0_array, int32_t ___1_arrayIndex, const RuntimeMethod* method) 
{
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeArray* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		RuntimeArray* L_2 = ___0_array;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(L_2, NULL);
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0027;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_4 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral967D403A541A1026A83D548E5AD5CA800AD4EFB5)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, method);
	}

IL_0027:
	{
		RuntimeArray* L_5 = ___0_array;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(L_5, 0, NULL);
		if (!L_6)
		{
			goto IL_0040;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_7 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_7, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral6195D7DA68D16D4985AD1A1B4FD2841A43CDDE70)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, method);
	}

IL_0040:
	{
		int32_t L_8 = ___1_arrayIndex;
		if ((((int32_t)L_8) < ((int32_t)0)))
		{
			goto IL_004d;
		}
	}
	{
		int32_t L_9 = ___1_arrayIndex;
		RuntimeArray* L_10 = ___0_array;
		NullCheck(L_10);
		int32_t L_11;
		L_11 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(L_10, NULL);
		if ((((int32_t)L_9) <= ((int32_t)L_11)))
		{
			goto IL_0063;
		}
	}

IL_004d:
	{
		int32_t L_12 = ___1_arrayIndex;
		int32_t L_13 = L_12;
		RuntimeObject* L_14 = Box(il2cpp_defaults.int32_class, &L_13);
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_15 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_m60B543A63AC8692C28096003FBF2AD124B9D5B85(L_15, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC00660333703C551EA80371B54D0ADCEB74C33B4)), L_14, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral569FEAE6AEE421BCD8D24F22865E84F808C2A1E4)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_15, method);
	}

IL_0063:
	{
		RuntimeArray* L_16 = ___0_array;
		NullCheck(L_16);
		int32_t L_17;
		L_17 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(L_16, NULL);
		int32_t L_18 = ___1_arrayIndex;
		int32_t L_19 = __this->____size;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_17, L_18))) >= ((int32_t)L_19)))
		{
			goto IL_007e;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_20 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_20, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral7F4C724BD10943E8B0B17A6E069F992E219EF5E8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_20, method);
	}

IL_007e:
	{
	}
	try
	{
		RectU5BU5D_t83297CB2E61BDF9D27DCB1A3E5C78EBCE9F7C993* L_21 = __this->____array;
		RuntimeArray* L_22 = ___0_array;
		int32_t L_23 = ___1_arrayIndex;
		int32_t L_24 = __this->____size;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_21, 0, L_22, L_23, L_24, NULL);
		RuntimeArray* L_25 = ___0_array;
		int32_t L_26 = ___1_arrayIndex;
		int32_t L_27 = __this->____size;
		Array_Reverse_mE788006243D34C654D7DDEF13E2D9E7B129AF8AD(L_25, L_26, L_27, NULL);
		goto IL_00b3;
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00a2;
		}
		throw e;
	}

CATCH_00a2:
	{
		ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1* L_28 = ((ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*)IL2CPP_GET_ACTIVE_EXCEPTION(ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*));;
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_29 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_29, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralBD0381A992FDF4F7DA60E5D83689FE7FF6309CB8)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_29, method);
	}

IL_00b3:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t0757D472C179E7C385905619753AC7417A77B40A Stack_1_GetEnumerator_m9ECE8B11D246B323E2A277C12779D2457FF28B95_gshared (Stack_1_tEEC1F6968B6388E4800894946805617A2E7EDFDA* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t0757D472C179E7C385905619753AC7417A77B40A L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_mF9CC77EDB16F67702CB0692CE3FB4BCA5EACC97E((&L_0), __this, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Stack_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m235708CFE73EA3B5FAFDF5E55C46B1E14AD51A9A_gshared (Stack_1_tEEC1F6968B6388E4800894946805617A2E7EDFDA* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t0757D472C179E7C385905619753AC7417A77B40A L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_mF9CC77EDB16F67702CB0692CE3FB4BCA5EACC97E((&L_0), __this, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		Enumerator_t0757D472C179E7C385905619753AC7417A77B40A L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 7), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Stack_1_System_Collections_IEnumerable_GetEnumerator_mA76D46F5397A86465AF4139789EBFEBF6F630786_gshared (Stack_1_tEEC1F6968B6388E4800894946805617A2E7EDFDA* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t0757D472C179E7C385905619753AC7417A77B40A L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_mF9CC77EDB16F67702CB0692CE3FB4BCA5EACC97E((&L_0), __this, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		Enumerator_t0757D472C179E7C385905619753AC7417A77B40A L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 7), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D Stack_1_Peek_mB2B555E4E7CE625B69E74DA48FC6E95B192A62C2_gshared (Stack_1_tEEC1F6968B6388E4800894946805617A2E7EDFDA* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	RectU5BU5D_t83297CB2E61BDF9D27DCB1A3E5C78EBCE9F7C993* V_1 = NULL;
	{
		int32_t L_0 = __this->____size;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_0, 1));
		RectU5BU5D_t83297CB2E61BDF9D27DCB1A3E5C78EBCE9F7C993* L_1 = __this->____array;
		V_1 = L_1;
		int32_t L_2 = V_0;
		RectU5BU5D_t83297CB2E61BDF9D27DCB1A3E5C78EBCE9F7C993* L_3 = V_1;
		NullCheck(L_3);
		if ((!(((uint32_t)L_2) >= ((uint32_t)((int32_t)(((RuntimeArray*)L_3)->max_length))))))
		{
			goto IL_001c;
		}
	}
	{
		Stack_1_ThrowForEmptyStack_m9BB67CADD6555D0CECCD2652588673184823D4E6(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
	}

IL_001c:
	{
		RectU5BU5D_t83297CB2E61BDF9D27DCB1A3E5C78EBCE9F7C993* L_4 = V_1;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		return L_7;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D Stack_1_Pop_mBABC10C3A66167B8C5202740BEED900AB0FF3516_gshared (Stack_1_tEEC1F6968B6388E4800894946805617A2E7EDFDA* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	RectU5BU5D_t83297CB2E61BDF9D27DCB1A3E5C78EBCE9F7C993* V_1 = NULL;
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D V_2;
	memset((&V_2), 0, sizeof(V_2));
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D G_B4_0;
	memset((&G_B4_0), 0, sizeof(G_B4_0));
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D G_B3_0;
	memset((&G_B3_0), 0, sizeof(G_B3_0));
	{
		int32_t L_0 = __this->____size;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_0, 1));
		RectU5BU5D_t83297CB2E61BDF9D27DCB1A3E5C78EBCE9F7C993* L_1 = __this->____array;
		V_1 = L_1;
		int32_t L_2 = V_0;
		RectU5BU5D_t83297CB2E61BDF9D27DCB1A3E5C78EBCE9F7C993* L_3 = V_1;
		NullCheck(L_3);
		if ((!(((uint32_t)L_2) >= ((uint32_t)((int32_t)(((RuntimeArray*)L_3)->max_length))))))
		{
			goto IL_001c;
		}
	}
	{
		Stack_1_ThrowForEmptyStack_m9BB67CADD6555D0CECCD2652588673184823D4E6(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
	}

IL_001c:
	{
		int32_t L_4 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_4, 1));
		int32_t L_5 = V_0;
		__this->____size = L_5;
		RectU5BU5D_t83297CB2E61BDF9D27DCB1A3E5C78EBCE9F7C993* L_6 = V_1;
		int32_t L_7 = V_0;
		NullCheck(L_6);
		int32_t L_8 = L_7;
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_9 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		G_B4_0 = L_9;
		goto IL_004f;
	}

IL_004f:
	{
		return G_B4_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Stack_1_TryPop_mAE0AAD4B6AC95E20C8AC3747F20A52CF840D211E_gshared (Stack_1_tEEC1F6968B6388E4800894946805617A2E7EDFDA* __this, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* ___0_result, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	RectU5BU5D_t83297CB2E61BDF9D27DCB1A3E5C78EBCE9F7C993* V_1 = NULL;
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0 = __this->____size;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_0, 1));
		RectU5BU5D_t83297CB2E61BDF9D27DCB1A3E5C78EBCE9F7C993* L_1 = __this->____array;
		V_1 = L_1;
		int32_t L_2 = V_0;
		RectU5BU5D_t83297CB2E61BDF9D27DCB1A3E5C78EBCE9F7C993* L_3 = V_1;
		NullCheck(L_3);
		if ((!(((uint32_t)L_2) >= ((uint32_t)((int32_t)(((RuntimeArray*)L_3)->max_length))))))
		{
			goto IL_001f;
		}
	}
	{
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* L_4 = ___0_result;
		il2cpp_codegen_initobj(L_4, sizeof(Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D));
		return (bool)0;
	}

IL_001f:
	{
		int32_t L_5 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_5, 1));
		int32_t L_6 = V_0;
		__this->____size = L_6;
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* L_7 = ___0_result;
		RectU5BU5D_t83297CB2E61BDF9D27DCB1A3E5C78EBCE9F7C993* L_8 = V_1;
		int32_t L_9 = V_0;
		NullCheck(L_8);
		int32_t L_10 = L_9;
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_11 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		*(Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D*)L_7 = L_11;
		goto IL_0058;
	}

IL_0058:
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Stack_1_Push_mE3EEAE2C77DEA8C3F932C6074FAFCFDA80E6D86F_gshared (Stack_1_tEEC1F6968B6388E4800894946805617A2E7EDFDA* __this, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___0_item, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	RectU5BU5D_t83297CB2E61BDF9D27DCB1A3E5C78EBCE9F7C993* V_1 = NULL;
	{
		int32_t L_0 = __this->____size;
		V_0 = L_0;
		RectU5BU5D_t83297CB2E61BDF9D27DCB1A3E5C78EBCE9F7C993* L_1 = __this->____array;
		V_1 = L_1;
		int32_t L_2 = V_0;
		RectU5BU5D_t83297CB2E61BDF9D27DCB1A3E5C78EBCE9F7C993* L_3 = V_1;
		NullCheck(L_3);
		if ((!(((uint32_t)L_2) < ((uint32_t)((int32_t)(((RuntimeArray*)L_3)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		RectU5BU5D_t83297CB2E61BDF9D27DCB1A3E5C78EBCE9F7C993* L_4 = V_1;
		int32_t L_5 = V_0;
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_6 = ___0_item;
		NullCheck(L_4);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(L_5), (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D)L_6);
		int32_t L_7 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_7, 1));
		int32_t L_8 = V_0;
		__this->____size = ((int32_t)il2cpp_codegen_add(L_8, 1));
		return;
	}

IL_0034:
	{
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_9 = ___0_item;
		Stack_1_PushWithResize_m856B55C10DA17E80AD34FF3B276B07A80685EBFE(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void Stack_1_PushWithResize_m856B55C10DA17E80AD34FF3B276B07A80685EBFE_gshared (Stack_1_tEEC1F6968B6388E4800894946805617A2E7EDFDA* __this, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___0_item, const RuntimeMethod* method) 
{
	RectU5BU5D_t83297CB2E61BDF9D27DCB1A3E5C78EBCE9F7C993** G_B2_0 = NULL;
	RectU5BU5D_t83297CB2E61BDF9D27DCB1A3E5C78EBCE9F7C993** G_B1_0 = NULL;
	int32_t G_B3_0 = 0;
	RectU5BU5D_t83297CB2E61BDF9D27DCB1A3E5C78EBCE9F7C993** G_B3_1 = NULL;
	{
		RectU5BU5D_t83297CB2E61BDF9D27DCB1A3E5C78EBCE9F7C993** L_0 = (RectU5BU5D_t83297CB2E61BDF9D27DCB1A3E5C78EBCE9F7C993**)(&__this->____array);
		RectU5BU5D_t83297CB2E61BDF9D27DCB1A3E5C78EBCE9F7C993* L_1 = __this->____array;
		NullCheck(L_1);
		if (!(((RuntimeArray*)L_1)->max_length))
		{
			G_B2_0 = L_0;
			goto IL_001b;
		}
		G_B1_0 = L_0;
	}
	{
		RectU5BU5D_t83297CB2E61BDF9D27DCB1A3E5C78EBCE9F7C993* L_2 = __this->____array;
		NullCheck(L_2);
		G_B3_0 = ((int32_t)il2cpp_codegen_multiply(2, ((int32_t)(((RuntimeArray*)L_2)->max_length))));
		G_B3_1 = G_B1_0;
		goto IL_001c;
	}

IL_001b:
	{
		G_B3_0 = 4;
		G_B3_1 = G_B2_0;
	}

IL_001c:
	{
		Array_Resize_TisRect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D_m2EC92F2F8F9EEAB25DF52C72C3C856D1ECA0C2A5(G_B3_1, G_B3_0, il2cpp_rgctx_method(method->klass->rgctx_data, 13));
		RectU5BU5D_t83297CB2E61BDF9D27DCB1A3E5C78EBCE9F7C993* L_3 = __this->____array;
		int32_t L_4 = __this->____size;
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_5 = ___0_item;
		NullCheck(L_3);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(L_4), (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D)L_5);
		int32_t L_6 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_6, 1));
		int32_t L_7 = __this->____size;
		__this->____size = ((int32_t)il2cpp_codegen_add(L_7, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Stack_1_ThrowForEmptyStack_m9BB67CADD6555D0CECCD2652588673184823D4E6_gshared (Stack_1_tEEC1F6968B6388E4800894946805617A2E7EDFDA* __this, const RuntimeMethod* method) 
{
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_0 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral95F0EE30865D503A05F1D329BC3FED0946B65C24)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Stack_1__ctor_m991D1F32313E86427FCF566730B675C621B16EBE_gshared (Stack_1_t3B750F239246A65B0BACFB807CBA1961CA8DE0A6* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		TextureIdU5BU5D_t03041DBB5C72B7E6F5F694A36DC5FEA75432188A* L_0;
		L_0 = Array_Empty_TisTextureId_tFF4B4AAE53408AB10B0B89CCA5F7B50CF2535E58_m3AE07A4CEAA2B2E2C2E03472BBF9F79BC799F948_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		__this->____array = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____array), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Stack_1__ctor_m01E0E3AEA36B56123B096B18EEAD5E14ADBD2D32_gshared (Stack_1_t3B750F239246A65B0BACFB807CBA1961CA8DE0A6* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		int32_t L_0 = ___0_capacity;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0020;
		}
	}
	{
		int32_t L_1 = ___0_capacity;
		int32_t L_2 = L_1;
		RuntimeObject* L_3 = Box(il2cpp_defaults.int32_class, &L_2);
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_4 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_m60B543A63AC8692C28096003FBF2AD124B9D5B85(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC37D78082ACFC8DEE7B32D9351C6E433A074FEC7)), L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral38E3DBC7FC353425EF3A98DC8DAC6689AF5FD1BE)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, method);
	}

IL_0020:
	{
		int32_t L_5 = ___0_capacity;
		TextureIdU5BU5D_t03041DBB5C72B7E6F5F694A36DC5FEA75432188A* L_6 = (TextureIdU5BU5D_t03041DBB5C72B7E6F5F694A36DC5FEA75432188A*)(TextureIdU5BU5D_t03041DBB5C72B7E6F5F694A36DC5FEA75432188A*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 3), (uint32_t)L_5);
		__this->____array = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____array), (void*)L_6);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Stack_1_get_Count_m6A7423122DB56788E859B23516004EB0E3D81F24_gshared (Stack_1_t3B750F239246A65B0BACFB807CBA1961CA8DE0A6* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Stack_1_System_Collections_ICollection_get_IsSynchronized_m158F2D015FA1317715473EF182E8B3DC98350B21_gshared (Stack_1_t3B750F239246A65B0BACFB807CBA1961CA8DE0A6* __this, const RuntimeMethod* method) 
{
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Stack_1_System_Collections_ICollection_get_SyncRoot_mCFDD0C1A2A7203E22AFC5C2059A9ABFBD4D4F697_gshared (Stack_1_t3B750F239246A65B0BACFB807CBA1961CA8DE0A6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->____syncRoot;
		if (L_0)
		{
			goto IL_001a;
		}
	}
	{
		RuntimeObject** L_1 = (RuntimeObject**)(&__this->____syncRoot);
		RuntimeObject* L_2 = (RuntimeObject*)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(L_2, NULL);
		RuntimeObject* L_3;
		L_3 = InterlockedCompareExchangeImpl<RuntimeObject*>(L_1, L_2, NULL);
	}

IL_001a:
	{
		RuntimeObject* L_4 = __this->____syncRoot;
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Stack_1_Clear_m7EA7A397FED8408124F3A9C4908C45BC281DDEAC_gshared (Stack_1_t3B750F239246A65B0BACFB807CBA1961CA8DE0A6* __this, const RuntimeMethod* method) 
{
	{
		goto IL_0019;
	}

IL_0019:
	{
		__this->____size = 0;
		int32_t L_0 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_0, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Stack_1_Contains_m7D45199080703E1EA648AF927A94D9C0CC6BA424_gshared (Stack_1_t3B750F239246A65B0BACFB807CBA1961CA8DE0A6* __this, TextureId_tFF4B4AAE53408AB10B0B89CCA5F7B50CF2535E58 ___0_item, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		if (!L_0)
		{
			goto IL_0023;
		}
	}
	{
		TextureIdU5BU5D_t03041DBB5C72B7E6F5F694A36DC5FEA75432188A* L_1 = __this->____array;
		TextureId_tFF4B4AAE53408AB10B0B89CCA5F7B50CF2535E58 L_2 = ___0_item;
		int32_t L_3 = __this->____size;
		int32_t L_4;
		L_4 = Array_LastIndexOf_TisTextureId_tFF4B4AAE53408AB10B0B89CCA5F7B50CF2535E58_m5291A70BF372F7D73477976310C09A5B3BE49C90(L_1, L_2, ((int32_t)il2cpp_codegen_subtract(L_3, 1)), il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		return (bool)((((int32_t)((((int32_t)L_4) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_0023:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Stack_1_System_Collections_ICollection_CopyTo_mE9995ABC06E5FF2CE921C696F1C154434A2D301C_gshared (Stack_1_t3B750F239246A65B0BACFB807CBA1961CA8DE0A6* __this, RuntimeArray* ___0_array, int32_t ___1_arrayIndex, const RuntimeMethod* method) 
{
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeArray* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		RuntimeArray* L_2 = ___0_array;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(L_2, NULL);
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0027;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_4 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral967D403A541A1026A83D548E5AD5CA800AD4EFB5)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, method);
	}

IL_0027:
	{
		RuntimeArray* L_5 = ___0_array;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(L_5, 0, NULL);
		if (!L_6)
		{
			goto IL_0040;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_7 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_7, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral6195D7DA68D16D4985AD1A1B4FD2841A43CDDE70)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, method);
	}

IL_0040:
	{
		int32_t L_8 = ___1_arrayIndex;
		if ((((int32_t)L_8) < ((int32_t)0)))
		{
			goto IL_004d;
		}
	}
	{
		int32_t L_9 = ___1_arrayIndex;
		RuntimeArray* L_10 = ___0_array;
		NullCheck(L_10);
		int32_t L_11;
		L_11 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(L_10, NULL);
		if ((((int32_t)L_9) <= ((int32_t)L_11)))
		{
			goto IL_0063;
		}
	}

IL_004d:
	{
		int32_t L_12 = ___1_arrayIndex;
		int32_t L_13 = L_12;
		RuntimeObject* L_14 = Box(il2cpp_defaults.int32_class, &L_13);
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_15 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_m60B543A63AC8692C28096003FBF2AD124B9D5B85(L_15, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC00660333703C551EA80371B54D0ADCEB74C33B4)), L_14, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral569FEAE6AEE421BCD8D24F22865E84F808C2A1E4)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_15, method);
	}

IL_0063:
	{
		RuntimeArray* L_16 = ___0_array;
		NullCheck(L_16);
		int32_t L_17;
		L_17 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(L_16, NULL);
		int32_t L_18 = ___1_arrayIndex;
		int32_t L_19 = __this->____size;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_17, L_18))) >= ((int32_t)L_19)))
		{
			goto IL_007e;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_20 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_20, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral7F4C724BD10943E8B0B17A6E069F992E219EF5E8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_20, method);
	}

IL_007e:
	{
	}
	try
	{
		TextureIdU5BU5D_t03041DBB5C72B7E6F5F694A36DC5FEA75432188A* L_21 = __this->____array;
		RuntimeArray* L_22 = ___0_array;
		int32_t L_23 = ___1_arrayIndex;
		int32_t L_24 = __this->____size;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_21, 0, L_22, L_23, L_24, NULL);
		RuntimeArray* L_25 = ___0_array;
		int32_t L_26 = ___1_arrayIndex;
		int32_t L_27 = __this->____size;
		Array_Reverse_mE788006243D34C654D7DDEF13E2D9E7B129AF8AD(L_25, L_26, L_27, NULL);
		goto IL_00b3;
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00a2;
		}
		throw e;
	}

CATCH_00a2:
	{
		ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1* L_28 = ((ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*)IL2CPP_GET_ACTIVE_EXCEPTION(ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*));;
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_29 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_29, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralBD0381A992FDF4F7DA60E5D83689FE7FF6309CB8)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_29, method);
	}

IL_00b3:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_tE489CD82CEA07F70C1967F4E911F125AA65FD336 Stack_1_GetEnumerator_mBFA852F5309ACB3BE81AE3F1BD6C6314D2826F76_gshared (Stack_1_t3B750F239246A65B0BACFB807CBA1961CA8DE0A6* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_tE489CD82CEA07F70C1967F4E911F125AA65FD336 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_mF766BF2C1792506A6941458B5EA1940528EAABA7((&L_0), __this, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Stack_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m105ADEA0BC43042D14EEEE163CD4507D2D48FD02_gshared (Stack_1_t3B750F239246A65B0BACFB807CBA1961CA8DE0A6* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_tE489CD82CEA07F70C1967F4E911F125AA65FD336 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_mF766BF2C1792506A6941458B5EA1940528EAABA7((&L_0), __this, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		Enumerator_tE489CD82CEA07F70C1967F4E911F125AA65FD336 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 7), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Stack_1_System_Collections_IEnumerable_GetEnumerator_mC30B5062A8C59C707ABA68D4A6F584E654E362A7_gshared (Stack_1_t3B750F239246A65B0BACFB807CBA1961CA8DE0A6* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_tE489CD82CEA07F70C1967F4E911F125AA65FD336 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_mF766BF2C1792506A6941458B5EA1940528EAABA7((&L_0), __this, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		Enumerator_tE489CD82CEA07F70C1967F4E911F125AA65FD336 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 7), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TextureId_tFF4B4AAE53408AB10B0B89CCA5F7B50CF2535E58 Stack_1_Peek_mEEA697E5B5416609C6CFE11A9F849A68CA2690D7_gshared (Stack_1_t3B750F239246A65B0BACFB807CBA1961CA8DE0A6* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	TextureIdU5BU5D_t03041DBB5C72B7E6F5F694A36DC5FEA75432188A* V_1 = NULL;
	{
		int32_t L_0 = __this->____size;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_0, 1));
		TextureIdU5BU5D_t03041DBB5C72B7E6F5F694A36DC5FEA75432188A* L_1 = __this->____array;
		V_1 = L_1;
		int32_t L_2 = V_0;
		TextureIdU5BU5D_t03041DBB5C72B7E6F5F694A36DC5FEA75432188A* L_3 = V_1;
		NullCheck(L_3);
		if ((!(((uint32_t)L_2) >= ((uint32_t)((int32_t)(((RuntimeArray*)L_3)->max_length))))))
		{
			goto IL_001c;
		}
	}
	{
		Stack_1_ThrowForEmptyStack_mB0004CD20AD9DFADDF410E929CF49B0FAFE7B78C(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
	}

IL_001c:
	{
		TextureIdU5BU5D_t03041DBB5C72B7E6F5F694A36DC5FEA75432188A* L_4 = V_1;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		TextureId_tFF4B4AAE53408AB10B0B89CCA5F7B50CF2535E58 L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		return L_7;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TextureId_tFF4B4AAE53408AB10B0B89CCA5F7B50CF2535E58 Stack_1_Pop_mD8A2569C08BA8307962EEBB916FD6E1729CDF465_gshared (Stack_1_t3B750F239246A65B0BACFB807CBA1961CA8DE0A6* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	TextureIdU5BU5D_t03041DBB5C72B7E6F5F694A36DC5FEA75432188A* V_1 = NULL;
	TextureId_tFF4B4AAE53408AB10B0B89CCA5F7B50CF2535E58 V_2;
	memset((&V_2), 0, sizeof(V_2));
	TextureId_tFF4B4AAE53408AB10B0B89CCA5F7B50CF2535E58 G_B4_0;
	memset((&G_B4_0), 0, sizeof(G_B4_0));
	TextureId_tFF4B4AAE53408AB10B0B89CCA5F7B50CF2535E58 G_B3_0;
	memset((&G_B3_0), 0, sizeof(G_B3_0));
	{
		int32_t L_0 = __this->____size;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_0, 1));
		TextureIdU5BU5D_t03041DBB5C72B7E6F5F694A36DC5FEA75432188A* L_1 = __this->____array;
		V_1 = L_1;
		int32_t L_2 = V_0;
		TextureIdU5BU5D_t03041DBB5C72B7E6F5F694A36DC5FEA75432188A* L_3 = V_1;
		NullCheck(L_3);
		if ((!(((uint32_t)L_2) >= ((uint32_t)((int32_t)(((RuntimeArray*)L_3)->max_length))))))
		{
			goto IL_001c;
		}
	}
	{
		Stack_1_ThrowForEmptyStack_mB0004CD20AD9DFADDF410E929CF49B0FAFE7B78C(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
	}

IL_001c:
	{
		int32_t L_4 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_4, 1));
		int32_t L_5 = V_0;
		__this->____size = L_5;
		TextureIdU5BU5D_t03041DBB5C72B7E6F5F694A36DC5FEA75432188A* L_6 = V_1;
		int32_t L_7 = V_0;
		NullCheck(L_6);
		int32_t L_8 = L_7;
		TextureId_tFF4B4AAE53408AB10B0B89CCA5F7B50CF2535E58 L_9 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		G_B4_0 = L_9;
		goto IL_004f;
	}

IL_004f:
	{
		return G_B4_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Stack_1_TryPop_mA37B5362701BB51704327757C4765C776F3C7F7D_gshared (Stack_1_t3B750F239246A65B0BACFB807CBA1961CA8DE0A6* __this, TextureId_tFF4B4AAE53408AB10B0B89CCA5F7B50CF2535E58* ___0_result, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	TextureIdU5BU5D_t03041DBB5C72B7E6F5F694A36DC5FEA75432188A* V_1 = NULL;
	TextureId_tFF4B4AAE53408AB10B0B89CCA5F7B50CF2535E58 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0 = __this->____size;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_0, 1));
		TextureIdU5BU5D_t03041DBB5C72B7E6F5F694A36DC5FEA75432188A* L_1 = __this->____array;
		V_1 = L_1;
		int32_t L_2 = V_0;
		TextureIdU5BU5D_t03041DBB5C72B7E6F5F694A36DC5FEA75432188A* L_3 = V_1;
		NullCheck(L_3);
		if ((!(((uint32_t)L_2) >= ((uint32_t)((int32_t)(((RuntimeArray*)L_3)->max_length))))))
		{
			goto IL_001f;
		}
	}
	{
		TextureId_tFF4B4AAE53408AB10B0B89CCA5F7B50CF2535E58* L_4 = ___0_result;
		il2cpp_codegen_initobj(L_4, sizeof(TextureId_tFF4B4AAE53408AB10B0B89CCA5F7B50CF2535E58));
		return (bool)0;
	}

IL_001f:
	{
		int32_t L_5 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_5, 1));
		int32_t L_6 = V_0;
		__this->____size = L_6;
		TextureId_tFF4B4AAE53408AB10B0B89CCA5F7B50CF2535E58* L_7 = ___0_result;
		TextureIdU5BU5D_t03041DBB5C72B7E6F5F694A36DC5FEA75432188A* L_8 = V_1;
		int32_t L_9 = V_0;
		NullCheck(L_8);
		int32_t L_10 = L_9;
		TextureId_tFF4B4AAE53408AB10B0B89CCA5F7B50CF2535E58 L_11 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		*(TextureId_tFF4B4AAE53408AB10B0B89CCA5F7B50CF2535E58*)L_7 = L_11;
		goto IL_0058;
	}

IL_0058:
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Stack_1_Push_m2ACE225399F5ADD408CF5B3214D0840CF7CB6922_gshared (Stack_1_t3B750F239246A65B0BACFB807CBA1961CA8DE0A6* __this, TextureId_tFF4B4AAE53408AB10B0B89CCA5F7B50CF2535E58 ___0_item, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	TextureIdU5BU5D_t03041DBB5C72B7E6F5F694A36DC5FEA75432188A* V_1 = NULL;
	{
		int32_t L_0 = __this->____size;
		V_0 = L_0;
		TextureIdU5BU5D_t03041DBB5C72B7E6F5F694A36DC5FEA75432188A* L_1 = __this->____array;
		V_1 = L_1;
		int32_t L_2 = V_0;
		TextureIdU5BU5D_t03041DBB5C72B7E6F5F694A36DC5FEA75432188A* L_3 = V_1;
		NullCheck(L_3);
		if ((!(((uint32_t)L_2) < ((uint32_t)((int32_t)(((RuntimeArray*)L_3)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		TextureIdU5BU5D_t03041DBB5C72B7E6F5F694A36DC5FEA75432188A* L_4 = V_1;
		int32_t L_5 = V_0;
		TextureId_tFF4B4AAE53408AB10B0B89CCA5F7B50CF2535E58 L_6 = ___0_item;
		NullCheck(L_4);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(L_5), (TextureId_tFF4B4AAE53408AB10B0B89CCA5F7B50CF2535E58)L_6);
		int32_t L_7 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_7, 1));
		int32_t L_8 = V_0;
		__this->____size = ((int32_t)il2cpp_codegen_add(L_8, 1));
		return;
	}

IL_0034:
	{
		TextureId_tFF4B4AAE53408AB10B0B89CCA5F7B50CF2535E58 L_9 = ___0_item;
		Stack_1_PushWithResize_m067591A26AE7959E4430DD0FC3844D46AEAC3E90(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void Stack_1_PushWithResize_m067591A26AE7959E4430DD0FC3844D46AEAC3E90_gshared (Stack_1_t3B750F239246A65B0BACFB807CBA1961CA8DE0A6* __this, TextureId_tFF4B4AAE53408AB10B0B89CCA5F7B50CF2535E58 ___0_item, const RuntimeMethod* method) 
{
	TextureIdU5BU5D_t03041DBB5C72B7E6F5F694A36DC5FEA75432188A** G_B2_0 = NULL;
	TextureIdU5BU5D_t03041DBB5C72B7E6F5F694A36DC5FEA75432188A** G_B1_0 = NULL;
	int32_t G_B3_0 = 0;
	TextureIdU5BU5D_t03041DBB5C72B7E6F5F694A36DC5FEA75432188A** G_B3_1 = NULL;
	{
		TextureIdU5BU5D_t03041DBB5C72B7E6F5F694A36DC5FEA75432188A** L_0 = (TextureIdU5BU5D_t03041DBB5C72B7E6F5F694A36DC5FEA75432188A**)(&__this->____array);
		TextureIdU5BU5D_t03041DBB5C72B7E6F5F694A36DC5FEA75432188A* L_1 = __this->____array;
		NullCheck(L_1);
		if (!(((RuntimeArray*)L_1)->max_length))
		{
			G_B2_0 = L_0;
			goto IL_001b;
		}
		G_B1_0 = L_0;
	}
	{
		TextureIdU5BU5D_t03041DBB5C72B7E6F5F694A36DC5FEA75432188A* L_2 = __this->____array;
		NullCheck(L_2);
		G_B3_0 = ((int32_t)il2cpp_codegen_multiply(2, ((int32_t)(((RuntimeArray*)L_2)->max_length))));
		G_B3_1 = G_B1_0;
		goto IL_001c;
	}

IL_001b:
	{
		G_B3_0 = 4;
		G_B3_1 = G_B2_0;
	}

IL_001c:
	{
		Array_Resize_TisTextureId_tFF4B4AAE53408AB10B0B89CCA5F7B50CF2535E58_m980E6BCF46D049ECA55F63095E52D73F5C656788(G_B3_1, G_B3_0, il2cpp_rgctx_method(method->klass->rgctx_data, 13));
		TextureIdU5BU5D_t03041DBB5C72B7E6F5F694A36DC5FEA75432188A* L_3 = __this->____array;
		int32_t L_4 = __this->____size;
		TextureId_tFF4B4AAE53408AB10B0B89CCA5F7B50CF2535E58 L_5 = ___0_item;
		NullCheck(L_3);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(L_4), (TextureId_tFF4B4AAE53408AB10B0B89CCA5F7B50CF2535E58)L_5);
		int32_t L_6 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_6, 1));
		int32_t L_7 = __this->____size;
		__this->____size = ((int32_t)il2cpp_codegen_add(L_7, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Stack_1_ThrowForEmptyStack_mB0004CD20AD9DFADDF410E929CF49B0FAFE7B78C_gshared (Stack_1_t3B750F239246A65B0BACFB807CBA1961CA8DE0A6* __this, const RuntimeMethod* method) 
{
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_0 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral95F0EE30865D503A05F1D329BC3FED0946B65C24)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Stack_1__ctor_m5C333061E1285AC5B22F556173FBE157EF1A37B7_gshared (Stack_1_tF3E5E7101E929741300A1CF7C159A6ED9B61621A* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_0;
		L_0 = ((  __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))(il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		__this->____array = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____array), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Stack_1__ctor_mFDFA9E1123DD1C9E5970223E605B8C973B39721A_gshared (Stack_1_tF3E5E7101E929741300A1CF7C159A6ED9B61621A* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		int32_t L_0 = ___0_capacity;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0020;
		}
	}
	{
		int32_t L_1 = ___0_capacity;
		int32_t L_2 = L_1;
		RuntimeObject* L_3 = Box(il2cpp_defaults.int32_class, &L_2);
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_4 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_m60B543A63AC8692C28096003FBF2AD124B9D5B85(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC37D78082ACFC8DEE7B32D9351C6E433A074FEC7)), L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral38E3DBC7FC353425EF3A98DC8DAC6689AF5FD1BE)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, method);
	}

IL_0020:
	{
		int32_t L_5 = ___0_capacity;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_6 = (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)(__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 3), (uint32_t)L_5);
		__this->____array = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____array), (void*)L_6);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Stack_1_get_Count_mCAD00A69587F884F88C36DE7423C3C329166144E_gshared (Stack_1_tF3E5E7101E929741300A1CF7C159A6ED9B61621A* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Stack_1_System_Collections_ICollection_get_IsSynchronized_m084F2313417250EF4A79BEE4D6B5C9A3D01B0301_gshared (Stack_1_tF3E5E7101E929741300A1CF7C159A6ED9B61621A* __this, const RuntimeMethod* method) 
{
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Stack_1_System_Collections_ICollection_get_SyncRoot_m18B990E9A22AC2A51EEF9B2A6A96F1F38E765554_gshared (Stack_1_tF3E5E7101E929741300A1CF7C159A6ED9B61621A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->____syncRoot;
		if (L_0)
		{
			goto IL_001a;
		}
	}
	{
		RuntimeObject** L_1 = (RuntimeObject**)(&__this->____syncRoot);
		RuntimeObject* L_2 = (RuntimeObject*)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(L_2, NULL);
		RuntimeObject* L_3;
		L_3 = InterlockedCompareExchangeImpl<RuntimeObject*>(L_1, L_2, NULL);
	}

IL_001a:
	{
		RuntimeObject* L_4 = __this->____syncRoot;
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Stack_1_Clear_m7853EC4DED588552A96316078B84CEC9208D84FD_gshared (Stack_1_tF3E5E7101E929741300A1CF7C159A6ED9B61621A* __this, const RuntimeMethod* method) 
{
	{
		bool L_0;
		L_0 = il2cpp_codegen_is_reference_or_contains_references(il2cpp_rgctx_method(method->klass->rgctx_data, 4));
		if (!L_0)
		{
			goto IL_0019;
		}
	}
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_1 = __this->____array;
		int32_t L_2 = __this->____size;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_1, 0, L_2, NULL);
	}

IL_0019:
	{
		__this->____size = 0;
		int32_t L_3 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_3, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Stack_1_Contains_m7C570B2DD3589F6E3E678A388A4DBD81F167AA53_gshared (Stack_1_tF3E5E7101E929741300A1CF7C159A6ED9B61621A* __this, Il2CppFullySharedGenericAny ___0_item, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_t96A73EA6CF7DEE94DD5C5BA4D6F3BB998BAB8976 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 5));
	const Il2CppFullySharedGenericAny L_2 = alloca(SizeOf_T_t96A73EA6CF7DEE94DD5C5BA4D6F3BB998BAB8976);
	{
		int32_t L_0 = __this->____size;
		if (!L_0)
		{
			goto IL_0023;
		}
	}
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_1 = __this->____array;
		il2cpp_codegen_memcpy(L_2, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 5)) ? ___0_item : &___0_item), SizeOf_T_t96A73EA6CF7DEE94DD5C5BA4D6F3BB998BAB8976);
		int32_t L_3 = __this->____size;
		int32_t L_4;
		L_4 = InvokerFuncInvoker3< int32_t, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*, Il2CppFullySharedGenericAny, int32_t >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 6)), il2cpp_rgctx_method(method->klass->rgctx_data, 6), NULL, L_1, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 5)) ? L_2: *(void**)L_2), ((int32_t)il2cpp_codegen_subtract(L_3, 1)));
		return (bool)((((int32_t)((((int32_t)L_4) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_0023:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Stack_1_System_Collections_ICollection_CopyTo_m159A15659D97C7AAA88168A81B98CD7C0140F1F4_gshared (Stack_1_tF3E5E7101E929741300A1CF7C159A6ED9B61621A* __this, RuntimeArray* ___0_array, int32_t ___1_arrayIndex, const RuntimeMethod* method) 
{
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeArray* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		RuntimeArray* L_2 = ___0_array;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(L_2, NULL);
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0027;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_4 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral967D403A541A1026A83D548E5AD5CA800AD4EFB5)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, method);
	}

IL_0027:
	{
		RuntimeArray* L_5 = ___0_array;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(L_5, 0, NULL);
		if (!L_6)
		{
			goto IL_0040;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_7 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_7, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral6195D7DA68D16D4985AD1A1B4FD2841A43CDDE70)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, method);
	}

IL_0040:
	{
		int32_t L_8 = ___1_arrayIndex;
		if ((((int32_t)L_8) < ((int32_t)0)))
		{
			goto IL_004d;
		}
	}
	{
		int32_t L_9 = ___1_arrayIndex;
		RuntimeArray* L_10 = ___0_array;
		NullCheck(L_10);
		int32_t L_11;
		L_11 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(L_10, NULL);
		if ((((int32_t)L_9) <= ((int32_t)L_11)))
		{
			goto IL_0063;
		}
	}

IL_004d:
	{
		int32_t L_12 = ___1_arrayIndex;
		int32_t L_13 = L_12;
		RuntimeObject* L_14 = Box(il2cpp_defaults.int32_class, &L_13);
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_15 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_m60B543A63AC8692C28096003FBF2AD124B9D5B85(L_15, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC00660333703C551EA80371B54D0ADCEB74C33B4)), L_14, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral569FEAE6AEE421BCD8D24F22865E84F808C2A1E4)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_15, method);
	}

IL_0063:
	{
		RuntimeArray* L_16 = ___0_array;
		NullCheck(L_16);
		int32_t L_17;
		L_17 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(L_16, NULL);
		int32_t L_18 = ___1_arrayIndex;
		int32_t L_19 = __this->____size;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_17, L_18))) >= ((int32_t)L_19)))
		{
			goto IL_007e;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_20 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_20, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral7F4C724BD10943E8B0B17A6E069F992E219EF5E8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_20, method);
	}

IL_007e:
	{
	}
	try
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_21 = __this->____array;
		RuntimeArray* L_22 = ___0_array;
		int32_t L_23 = ___1_arrayIndex;
		int32_t L_24 = __this->____size;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_21, 0, L_22, L_23, L_24, NULL);
		RuntimeArray* L_25 = ___0_array;
		int32_t L_26 = ___1_arrayIndex;
		int32_t L_27 = __this->____size;
		Array_Reverse_mE788006243D34C654D7DDEF13E2D9E7B129AF8AD(L_25, L_26, L_27, NULL);
		goto IL_00b3;
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00a2;
		}
		throw e;
	}

CATCH_00a2:
	{
		ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1* L_28 = ((ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*)IL2CPP_GET_ACTIVE_EXCEPTION(ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*));;
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_29 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_29, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralBD0381A992FDF4F7DA60E5D83689FE7FF6309CB8)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_29, method);
	}

IL_00b3:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Stack_1_GetEnumerator_m407739F51246B6C7E996868F09750497FF67EDE7_gshared (Stack_1_tF3E5E7101E929741300A1CF7C159A6ED9B61621A* __this, Enumerator_t9C40FA80DC7A4C63469E514386FAB9AE1039DF41* il2cppRetVal, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_Enumerator_t198FF3485E55915F2A85031CEE0E247740169CD6 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 7));
	const Enumerator_t9C40FA80DC7A4C63469E514386FAB9AE1039DF41 L_0 = alloca(SizeOf_Enumerator_t198FF3485E55915F2A85031CEE0E247740169CD6);
	{
		memset(L_0, 0, SizeOf_Enumerator_t198FF3485E55915F2A85031CEE0E247740169CD6);
		Enumerator__ctor_mD65EF492693E70B41695A031A49F72C7EFA82FCE((Enumerator_t9C40FA80DC7A4C63469E514386FAB9AE1039DF41*)L_0, __this, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		il2cpp_codegen_memcpy(il2cppRetVal, L_0, SizeOf_Enumerator_t198FF3485E55915F2A85031CEE0E247740169CD6);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Stack_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m165EB962DDEDC9EF1558FDB60FA18ACC8A96F9E0_gshared (Stack_1_tF3E5E7101E929741300A1CF7C159A6ED9B61621A* __this, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_Enumerator_t198FF3485E55915F2A85031CEE0E247740169CD6 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 7));
	const Enumerator_t9C40FA80DC7A4C63469E514386FAB9AE1039DF41 L_0 = alloca(SizeOf_Enumerator_t198FF3485E55915F2A85031CEE0E247740169CD6);
	{
		memset(L_0, 0, SizeOf_Enumerator_t198FF3485E55915F2A85031CEE0E247740169CD6);
		Enumerator__ctor_mD65EF492693E70B41695A031A49F72C7EFA82FCE((Enumerator_t9C40FA80DC7A4C63469E514386FAB9AE1039DF41*)L_0, __this, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		RuntimeObject* L_1 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 7), L_0);
		return (RuntimeObject*)L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Stack_1_System_Collections_IEnumerable_GetEnumerator_m11E86131F4C73FD9931AEAE577F779FE6C81F6CF_gshared (Stack_1_tF3E5E7101E929741300A1CF7C159A6ED9B61621A* __this, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_Enumerator_t198FF3485E55915F2A85031CEE0E247740169CD6 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 7));
	const Enumerator_t9C40FA80DC7A4C63469E514386FAB9AE1039DF41 L_0 = alloca(SizeOf_Enumerator_t198FF3485E55915F2A85031CEE0E247740169CD6);
	{
		memset(L_0, 0, SizeOf_Enumerator_t198FF3485E55915F2A85031CEE0E247740169CD6);
		Enumerator__ctor_mD65EF492693E70B41695A031A49F72C7EFA82FCE((Enumerator_t9C40FA80DC7A4C63469E514386FAB9AE1039DF41*)L_0, __this, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		RuntimeObject* L_1 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 7), L_0);
		return (RuntimeObject*)L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Stack_1_Peek_m4B2292270D894BE7419111BEF9727F6FE56CE9FE_gshared (Stack_1_tF3E5E7101E929741300A1CF7C159A6ED9B61621A* __this, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_t96A73EA6CF7DEE94DD5C5BA4D6F3BB998BAB8976 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 5));
	const Il2CppFullySharedGenericAny L_7 = alloca(SizeOf_T_t96A73EA6CF7DEE94DD5C5BA4D6F3BB998BAB8976);
	int32_t V_0 = 0;
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* V_1 = NULL;
	{
		int32_t L_0 = __this->____size;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_0, 1));
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_1 = __this->____array;
		V_1 = L_1;
		int32_t L_2 = V_0;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_3 = V_1;
		NullCheck(L_3);
		if ((!(((uint32_t)L_2) >= ((uint32_t)((int32_t)(((RuntimeArray*)L_3)->max_length))))))
		{
			goto IL_001c;
		}
	}
	{
		((  void (*) (Stack_1_tF3E5E7101E929741300A1CF7C159A6ED9B61621A*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 10)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
	}

IL_001c:
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_4 = V_1;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		il2cpp_codegen_memcpy(L_7, (L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_6)), SizeOf_T_t96A73EA6CF7DEE94DD5C5BA4D6F3BB998BAB8976);
		il2cpp_codegen_memcpy(il2cppRetVal, L_7, SizeOf_T_t96A73EA6CF7DEE94DD5C5BA4D6F3BB998BAB8976);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Stack_1_Pop_m8E5FF1B4CFD9ADF4D8A7C4CFF4713C83E163A34A_gshared (Stack_1_tF3E5E7101E929741300A1CF7C159A6ED9B61621A* __this, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_t96A73EA6CF7DEE94DD5C5BA4D6F3BB998BAB8976 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 5));
	const Il2CppFullySharedGenericAny L_9 = alloca(SizeOf_T_t96A73EA6CF7DEE94DD5C5BA4D6F3BB998BAB8976);
	const Il2CppFullySharedGenericAny L_13 = L_9;
	int32_t V_0 = 0;
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* V_1 = NULL;
	Il2CppFullySharedGenericAny V_2 = alloca(SizeOf_T_t96A73EA6CF7DEE94DD5C5BA4D6F3BB998BAB8976);
	memset(V_2, 0, SizeOf_T_t96A73EA6CF7DEE94DD5C5BA4D6F3BB998BAB8976);
	Il2CppFullySharedGenericAny G_B4_0 = alloca(SizeOf_T_t96A73EA6CF7DEE94DD5C5BA4D6F3BB998BAB8976);
	memset(G_B4_0, 0, SizeOf_T_t96A73EA6CF7DEE94DD5C5BA4D6F3BB998BAB8976);
	Il2CppFullySharedGenericAny G_B3_0 = alloca(SizeOf_T_t96A73EA6CF7DEE94DD5C5BA4D6F3BB998BAB8976);
	memset(G_B3_0, 0, SizeOf_T_t96A73EA6CF7DEE94DD5C5BA4D6F3BB998BAB8976);
	{
		int32_t L_0 = __this->____size;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_0, 1));
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_1 = __this->____array;
		V_1 = L_1;
		int32_t L_2 = V_0;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_3 = V_1;
		NullCheck(L_3);
		if ((!(((uint32_t)L_2) >= ((uint32_t)((int32_t)(((RuntimeArray*)L_3)->max_length))))))
		{
			goto IL_001c;
		}
	}
	{
		((  void (*) (Stack_1_tF3E5E7101E929741300A1CF7C159A6ED9B61621A*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 10)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
	}

IL_001c:
	{
		int32_t L_4 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_4, 1));
		int32_t L_5 = V_0;
		__this->____size = L_5;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_6 = V_1;
		int32_t L_7 = V_0;
		NullCheck(L_6);
		int32_t L_8 = L_7;
		il2cpp_codegen_memcpy(L_9, (L_6)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_8)), SizeOf_T_t96A73EA6CF7DEE94DD5C5BA4D6F3BB998BAB8976);
		bool L_10;
		L_10 = il2cpp_codegen_is_reference_or_contains_references(il2cpp_rgctx_method(method->klass->rgctx_data, 4));
		if (!L_10)
		{
			il2cpp_codegen_memcpy(G_B4_0, L_9, SizeOf_T_t96A73EA6CF7DEE94DD5C5BA4D6F3BB998BAB8976);
			goto IL_004f;
		}
		il2cpp_codegen_memcpy(G_B3_0, L_9, SizeOf_T_t96A73EA6CF7DEE94DD5C5BA4D6F3BB998BAB8976);
	}
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_11 = V_1;
		int32_t L_12 = V_0;
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_2, SizeOf_T_t96A73EA6CF7DEE94DD5C5BA4D6F3BB998BAB8976);
		il2cpp_codegen_memcpy(L_13, V_2, SizeOf_T_t96A73EA6CF7DEE94DD5C5BA4D6F3BB998BAB8976);
		NullCheck(L_11);
		il2cpp_codegen_memcpy((L_11)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_12)), L_13, SizeOf_T_t96A73EA6CF7DEE94DD5C5BA4D6F3BB998BAB8976);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(method->klass->rgctx_data, 5), (void**)(L_11)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_12)), (void*)L_13);
		il2cpp_codegen_memcpy(G_B4_0, G_B3_0, SizeOf_T_t96A73EA6CF7DEE94DD5C5BA4D6F3BB998BAB8976);
	}

IL_004f:
	{
		il2cpp_codegen_memcpy(il2cppRetVal, G_B4_0, SizeOf_T_t96A73EA6CF7DEE94DD5C5BA4D6F3BB998BAB8976);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Stack_1_TryPop_m7B8D9D3140C584C905EE9AC45C33C02756FADD51_gshared (Stack_1_tF3E5E7101E929741300A1CF7C159A6ED9B61621A* __this, Il2CppFullySharedGenericAny* ___0_result, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_t96A73EA6CF7DEE94DD5C5BA4D6F3BB998BAB8976 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 5));
	const Il2CppFullySharedGenericAny L_11 = alloca(SizeOf_T_t96A73EA6CF7DEE94DD5C5BA4D6F3BB998BAB8976);
	const Il2CppFullySharedGenericAny L_15 = L_11;
	int32_t V_0 = 0;
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* V_1 = NULL;
	Il2CppFullySharedGenericAny V_2 = alloca(SizeOf_T_t96A73EA6CF7DEE94DD5C5BA4D6F3BB998BAB8976);
	memset(V_2, 0, SizeOf_T_t96A73EA6CF7DEE94DD5C5BA4D6F3BB998BAB8976);
	{
		int32_t L_0 = __this->____size;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_0, 1));
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_1 = __this->____array;
		V_1 = L_1;
		int32_t L_2 = V_0;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_3 = V_1;
		NullCheck(L_3);
		if ((!(((uint32_t)L_2) >= ((uint32_t)((int32_t)(((RuntimeArray*)L_3)->max_length))))))
		{
			goto IL_001f;
		}
	}
	{
		Il2CppFullySharedGenericAny* L_4 = ___0_result;
		il2cpp_codegen_initobj(L_4, SizeOf_T_t96A73EA6CF7DEE94DD5C5BA4D6F3BB998BAB8976);
		return (bool)0;
	}

IL_001f:
	{
		int32_t L_5 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_5, 1));
		int32_t L_6 = V_0;
		__this->____size = L_6;
		Il2CppFullySharedGenericAny* L_7 = ___0_result;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_8 = V_1;
		int32_t L_9 = V_0;
		NullCheck(L_8);
		int32_t L_10 = L_9;
		il2cpp_codegen_memcpy(L_11, (L_8)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_10)), SizeOf_T_t96A73EA6CF7DEE94DD5C5BA4D6F3BB998BAB8976);
		il2cpp_codegen_memcpy((Il2CppFullySharedGenericAny*)L_7, L_11, SizeOf_T_t96A73EA6CF7DEE94DD5C5BA4D6F3BB998BAB8976);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(method->klass->rgctx_data, 5), (void**)(Il2CppFullySharedGenericAny*)L_7, (void*)L_11);
		bool L_12;
		L_12 = il2cpp_codegen_is_reference_or_contains_references(il2cpp_rgctx_method(method->klass->rgctx_data, 4));
		if (!L_12)
		{
			goto IL_0058;
		}
	}
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_13 = V_1;
		int32_t L_14 = V_0;
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_2, SizeOf_T_t96A73EA6CF7DEE94DD5C5BA4D6F3BB998BAB8976);
		il2cpp_codegen_memcpy(L_15, V_2, SizeOf_T_t96A73EA6CF7DEE94DD5C5BA4D6F3BB998BAB8976);
		NullCheck(L_13);
		il2cpp_codegen_memcpy((L_13)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_14)), L_15, SizeOf_T_t96A73EA6CF7DEE94DD5C5BA4D6F3BB998BAB8976);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(method->klass->rgctx_data, 5), (void**)(L_13)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_14)), (void*)L_15);
	}

IL_0058:
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Stack_1_Push_m072EF82431D7D7E164213D822010141A4C00050D_gshared (Stack_1_tF3E5E7101E929741300A1CF7C159A6ED9B61621A* __this, Il2CppFullySharedGenericAny ___0_item, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_t96A73EA6CF7DEE94DD5C5BA4D6F3BB998BAB8976 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 5));
	const Il2CppFullySharedGenericAny L_6 = alloca(SizeOf_T_t96A73EA6CF7DEE94DD5C5BA4D6F3BB998BAB8976);
	const Il2CppFullySharedGenericAny L_9 = L_6;
	int32_t V_0 = 0;
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* V_1 = NULL;
	{
		int32_t L_0 = __this->____size;
		V_0 = L_0;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_1 = __this->____array;
		V_1 = L_1;
		int32_t L_2 = V_0;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_3 = V_1;
		NullCheck(L_3);
		if ((!(((uint32_t)L_2) < ((uint32_t)((int32_t)(((RuntimeArray*)L_3)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_4 = V_1;
		int32_t L_5 = V_0;
		il2cpp_codegen_memcpy(L_6, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 5)) ? ___0_item : &___0_item), SizeOf_T_t96A73EA6CF7DEE94DD5C5BA4D6F3BB998BAB8976);
		NullCheck(L_4);
		il2cpp_codegen_memcpy((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5)), L_6, SizeOf_T_t96A73EA6CF7DEE94DD5C5BA4D6F3BB998BAB8976);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(method->klass->rgctx_data, 5), (void**)(L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5)), (void*)L_6);
		int32_t L_7 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_7, 1));
		int32_t L_8 = V_0;
		__this->____size = ((int32_t)il2cpp_codegen_add(L_8, 1));
		return;
	}

IL_0034:
	{
		il2cpp_codegen_memcpy(L_9, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 5)) ? ___0_item : &___0_item), SizeOf_T_t96A73EA6CF7DEE94DD5C5BA4D6F3BB998BAB8976);
		InvokerActionInvoker1< Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 12)), il2cpp_rgctx_method(method->klass->rgctx_data, 12), __this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 5)) ? L_9: *(void**)L_9));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void Stack_1_PushWithResize_mEBAADD1F1CA3A4CA06A56B93D2B52196A25F7411_gshared (Stack_1_tF3E5E7101E929741300A1CF7C159A6ED9B61621A* __this, Il2CppFullySharedGenericAny ___0_item, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_t96A73EA6CF7DEE94DD5C5BA4D6F3BB998BAB8976 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 5));
	const Il2CppFullySharedGenericAny L_5 = alloca(SizeOf_T_t96A73EA6CF7DEE94DD5C5BA4D6F3BB998BAB8976);
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC** G_B2_0 = NULL;
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC** G_B1_0 = NULL;
	int32_t G_B3_0 = 0;
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC** G_B3_1 = NULL;
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC** L_0 = (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC**)(&__this->____array);
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_1 = __this->____array;
		NullCheck(L_1);
		if (!(((RuntimeArray*)L_1)->max_length))
		{
			G_B2_0 = L_0;
			goto IL_001b;
		}
		G_B1_0 = L_0;
	}
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_2 = __this->____array;
		NullCheck(L_2);
		G_B3_0 = ((int32_t)il2cpp_codegen_multiply(2, ((int32_t)(((RuntimeArray*)L_2)->max_length))));
		G_B3_1 = G_B1_0;
		goto IL_001c;
	}

IL_001b:
	{
		G_B3_0 = 4;
		G_B3_1 = G_B2_0;
	}

IL_001c:
	{
		((  void (*) (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC**, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 13)))(G_B3_1, G_B3_0, il2cpp_rgctx_method(method->klass->rgctx_data, 13));
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_3 = __this->____array;
		int32_t L_4 = __this->____size;
		il2cpp_codegen_memcpy(L_5, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 5)) ? ___0_item : &___0_item), SizeOf_T_t96A73EA6CF7DEE94DD5C5BA4D6F3BB998BAB8976);
		NullCheck(L_3);
		il2cpp_codegen_memcpy((L_3)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_4)), L_5, SizeOf_T_t96A73EA6CF7DEE94DD5C5BA4D6F3BB998BAB8976);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(method->klass->rgctx_data, 5), (void**)(L_3)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_4)), (void*)L_5);
		int32_t L_6 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_6, 1));
		int32_t L_7 = __this->____size;
		__this->____size = ((int32_t)il2cpp_codegen_add(L_7, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Stack_1_ThrowForEmptyStack_m5E2B7F746B04A08A5570995E8E3266FAF43264CC_gshared (Stack_1_tF3E5E7101E929741300A1CF7C159A6ED9B61621A* __this, const RuntimeMethod* method) 
{
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_0 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral95F0EE30865D503A05F1D329BC3FED0946B65C24)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Stack_1__ctor_m14AC177FC4E3DF8CD7C5026E5B98B999842682CE_gshared (Stack_1_tB568ED1852EE70A3EECA2CD66F2AB41DDEC262FA* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		MatchContextU5BU5D_t49C4E5DA5C1F9B06B211BE6F94AC6BD4D0ABCAE5* L_0;
		L_0 = Array_Empty_TisMatchContext_t04110FFA271D89A23BC1918BE657634A7DC06253_m5BEAA64B8E1A4C758EDEA7D45C3177D7D8A6ADCF_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		__this->____array = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____array), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Stack_1__ctor_m49337485BC3FE9EC1678C54AC792AF6AFC91FC85_gshared (Stack_1_tB568ED1852EE70A3EECA2CD66F2AB41DDEC262FA* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		int32_t L_0 = ___0_capacity;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0020;
		}
	}
	{
		int32_t L_1 = ___0_capacity;
		int32_t L_2 = L_1;
		RuntimeObject* L_3 = Box(il2cpp_defaults.int32_class, &L_2);
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_4 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_m60B543A63AC8692C28096003FBF2AD124B9D5B85(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC37D78082ACFC8DEE7B32D9351C6E433A074FEC7)), L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral38E3DBC7FC353425EF3A98DC8DAC6689AF5FD1BE)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, method);
	}

IL_0020:
	{
		int32_t L_5 = ___0_capacity;
		MatchContextU5BU5D_t49C4E5DA5C1F9B06B211BE6F94AC6BD4D0ABCAE5* L_6 = (MatchContextU5BU5D_t49C4E5DA5C1F9B06B211BE6F94AC6BD4D0ABCAE5*)(MatchContextU5BU5D_t49C4E5DA5C1F9B06B211BE6F94AC6BD4D0ABCAE5*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 3), (uint32_t)L_5);
		__this->____array = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____array), (void*)L_6);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Stack_1_get_Count_m9327D44FD6E8182FEF61EDCE801261C69CEC6341_gshared (Stack_1_tB568ED1852EE70A3EECA2CD66F2AB41DDEC262FA* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Stack_1_System_Collections_ICollection_get_IsSynchronized_mB2465842854C21C27D6A4364654F419C2B2F0DD7_gshared (Stack_1_tB568ED1852EE70A3EECA2CD66F2AB41DDEC262FA* __this, const RuntimeMethod* method) 
{
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Stack_1_System_Collections_ICollection_get_SyncRoot_m76547563EE36D89D2846F2DEE731E88B12484591_gshared (Stack_1_tB568ED1852EE70A3EECA2CD66F2AB41DDEC262FA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->____syncRoot;
		if (L_0)
		{
			goto IL_001a;
		}
	}
	{
		RuntimeObject** L_1 = (RuntimeObject**)(&__this->____syncRoot);
		RuntimeObject* L_2 = (RuntimeObject*)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(L_2, NULL);
		RuntimeObject* L_3;
		L_3 = InterlockedCompareExchangeImpl<RuntimeObject*>(L_1, L_2, NULL);
	}

IL_001a:
	{
		RuntimeObject* L_4 = __this->____syncRoot;
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Stack_1_Clear_mF241E1F4339BB39D483A733024684FE09382752B_gshared (Stack_1_tB568ED1852EE70A3EECA2CD66F2AB41DDEC262FA* __this, const RuntimeMethod* method) 
{
	{
		goto IL_0019;
	}

IL_0019:
	{
		__this->____size = 0;
		int32_t L_0 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_0, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Stack_1_Contains_mBB10FA20CFE8819DD06E71C00DB336E5FF010CF1_gshared (Stack_1_tB568ED1852EE70A3EECA2CD66F2AB41DDEC262FA* __this, MatchContext_t04110FFA271D89A23BC1918BE657634A7DC06253 ___0_item, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		if (!L_0)
		{
			goto IL_0023;
		}
	}
	{
		MatchContextU5BU5D_t49C4E5DA5C1F9B06B211BE6F94AC6BD4D0ABCAE5* L_1 = __this->____array;
		MatchContext_t04110FFA271D89A23BC1918BE657634A7DC06253 L_2 = ___0_item;
		int32_t L_3 = __this->____size;
		int32_t L_4;
		L_4 = Array_LastIndexOf_TisMatchContext_t04110FFA271D89A23BC1918BE657634A7DC06253_mFFFE5789A9BEF9E2ED789FB50EC9F52BB8954B28(L_1, L_2, ((int32_t)il2cpp_codegen_subtract(L_3, 1)), il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		return (bool)((((int32_t)((((int32_t)L_4) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_0023:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Stack_1_System_Collections_ICollection_CopyTo_m46A2895350AE3379216479DFB6FAE50C68FEBDE7_gshared (Stack_1_tB568ED1852EE70A3EECA2CD66F2AB41DDEC262FA* __this, RuntimeArray* ___0_array, int32_t ___1_arrayIndex, const RuntimeMethod* method) 
{
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeArray* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		RuntimeArray* L_2 = ___0_array;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(L_2, NULL);
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0027;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_4 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral967D403A541A1026A83D548E5AD5CA800AD4EFB5)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, method);
	}

IL_0027:
	{
		RuntimeArray* L_5 = ___0_array;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(L_5, 0, NULL);
		if (!L_6)
		{
			goto IL_0040;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_7 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_7, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral6195D7DA68D16D4985AD1A1B4FD2841A43CDDE70)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, method);
	}

IL_0040:
	{
		int32_t L_8 = ___1_arrayIndex;
		if ((((int32_t)L_8) < ((int32_t)0)))
		{
			goto IL_004d;
		}
	}
	{
		int32_t L_9 = ___1_arrayIndex;
		RuntimeArray* L_10 = ___0_array;
		NullCheck(L_10);
		int32_t L_11;
		L_11 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(L_10, NULL);
		if ((((int32_t)L_9) <= ((int32_t)L_11)))
		{
			goto IL_0063;
		}
	}

IL_004d:
	{
		int32_t L_12 = ___1_arrayIndex;
		int32_t L_13 = L_12;
		RuntimeObject* L_14 = Box(il2cpp_defaults.int32_class, &L_13);
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_15 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_m60B543A63AC8692C28096003FBF2AD124B9D5B85(L_15, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC00660333703C551EA80371B54D0ADCEB74C33B4)), L_14, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral569FEAE6AEE421BCD8D24F22865E84F808C2A1E4)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_15, method);
	}

IL_0063:
	{
		RuntimeArray* L_16 = ___0_array;
		NullCheck(L_16);
		int32_t L_17;
		L_17 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(L_16, NULL);
		int32_t L_18 = ___1_arrayIndex;
		int32_t L_19 = __this->____size;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_17, L_18))) >= ((int32_t)L_19)))
		{
			goto IL_007e;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_20 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_20, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral7F4C724BD10943E8B0B17A6E069F992E219EF5E8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_20, method);
	}

IL_007e:
	{
	}
	try
	{
		MatchContextU5BU5D_t49C4E5DA5C1F9B06B211BE6F94AC6BD4D0ABCAE5* L_21 = __this->____array;
		RuntimeArray* L_22 = ___0_array;
		int32_t L_23 = ___1_arrayIndex;
		int32_t L_24 = __this->____size;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_21, 0, L_22, L_23, L_24, NULL);
		RuntimeArray* L_25 = ___0_array;
		int32_t L_26 = ___1_arrayIndex;
		int32_t L_27 = __this->____size;
		Array_Reverse_mE788006243D34C654D7DDEF13E2D9E7B129AF8AD(L_25, L_26, L_27, NULL);
		goto IL_00b3;
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00a2;
		}
		throw e;
	}

CATCH_00a2:
	{
		ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1* L_28 = ((ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*)IL2CPP_GET_ACTIVE_EXCEPTION(ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*));;
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_29 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_29, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralBD0381A992FDF4F7DA60E5D83689FE7FF6309CB8)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_29, method);
	}

IL_00b3:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t6B0EB72F34C4614A45F424103A9D11C74439E854 Stack_1_GetEnumerator_m77D9FF1BBFCCC4E8DD470B92AA4322B635C6424B_gshared (Stack_1_tB568ED1852EE70A3EECA2CD66F2AB41DDEC262FA* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t6B0EB72F34C4614A45F424103A9D11C74439E854 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m14E3BCC9341885A56233EF29D700857A00BBDFC7((&L_0), __this, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Stack_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m2DED6FE56C05D93E7936BB02E43607A51E6903EF_gshared (Stack_1_tB568ED1852EE70A3EECA2CD66F2AB41DDEC262FA* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t6B0EB72F34C4614A45F424103A9D11C74439E854 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m14E3BCC9341885A56233EF29D700857A00BBDFC7((&L_0), __this, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		Enumerator_t6B0EB72F34C4614A45F424103A9D11C74439E854 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 7), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Stack_1_System_Collections_IEnumerable_GetEnumerator_mBEA56CDA62AE7C10641D0E25709E9FEFE4EAA7F2_gshared (Stack_1_tB568ED1852EE70A3EECA2CD66F2AB41DDEC262FA* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t6B0EB72F34C4614A45F424103A9D11C74439E854 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m14E3BCC9341885A56233EF29D700857A00BBDFC7((&L_0), __this, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		Enumerator_t6B0EB72F34C4614A45F424103A9D11C74439E854 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 7), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MatchContext_t04110FFA271D89A23BC1918BE657634A7DC06253 Stack_1_Peek_m4C20B9B8CF100B86A00FC95481714C366DD4E5C7_gshared (Stack_1_tB568ED1852EE70A3EECA2CD66F2AB41DDEC262FA* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	MatchContextU5BU5D_t49C4E5DA5C1F9B06B211BE6F94AC6BD4D0ABCAE5* V_1 = NULL;
	{
		int32_t L_0 = __this->____size;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_0, 1));
		MatchContextU5BU5D_t49C4E5DA5C1F9B06B211BE6F94AC6BD4D0ABCAE5* L_1 = __this->____array;
		V_1 = L_1;
		int32_t L_2 = V_0;
		MatchContextU5BU5D_t49C4E5DA5C1F9B06B211BE6F94AC6BD4D0ABCAE5* L_3 = V_1;
		NullCheck(L_3);
		if ((!(((uint32_t)L_2) >= ((uint32_t)((int32_t)(((RuntimeArray*)L_3)->max_length))))))
		{
			goto IL_001c;
		}
	}
	{
		Stack_1_ThrowForEmptyStack_m89DEAB4CFF2C08C84D7B4988FD3A588F243CC50C(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
	}

IL_001c:
	{
		MatchContextU5BU5D_t49C4E5DA5C1F9B06B211BE6F94AC6BD4D0ABCAE5* L_4 = V_1;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		MatchContext_t04110FFA271D89A23BC1918BE657634A7DC06253 L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		return L_7;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MatchContext_t04110FFA271D89A23BC1918BE657634A7DC06253 Stack_1_Pop_mC298BD508BB0B8BA70438D9A3ABDF83D59D1A4A8_gshared (Stack_1_tB568ED1852EE70A3EECA2CD66F2AB41DDEC262FA* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	MatchContextU5BU5D_t49C4E5DA5C1F9B06B211BE6F94AC6BD4D0ABCAE5* V_1 = NULL;
	MatchContext_t04110FFA271D89A23BC1918BE657634A7DC06253 V_2;
	memset((&V_2), 0, sizeof(V_2));
	MatchContext_t04110FFA271D89A23BC1918BE657634A7DC06253 G_B4_0;
	memset((&G_B4_0), 0, sizeof(G_B4_0));
	MatchContext_t04110FFA271D89A23BC1918BE657634A7DC06253 G_B3_0;
	memset((&G_B3_0), 0, sizeof(G_B3_0));
	{
		int32_t L_0 = __this->____size;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_0, 1));
		MatchContextU5BU5D_t49C4E5DA5C1F9B06B211BE6F94AC6BD4D0ABCAE5* L_1 = __this->____array;
		V_1 = L_1;
		int32_t L_2 = V_0;
		MatchContextU5BU5D_t49C4E5DA5C1F9B06B211BE6F94AC6BD4D0ABCAE5* L_3 = V_1;
		NullCheck(L_3);
		if ((!(((uint32_t)L_2) >= ((uint32_t)((int32_t)(((RuntimeArray*)L_3)->max_length))))))
		{
			goto IL_001c;
		}
	}
	{
		Stack_1_ThrowForEmptyStack_m89DEAB4CFF2C08C84D7B4988FD3A588F243CC50C(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
	}

IL_001c:
	{
		int32_t L_4 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_4, 1));
		int32_t L_5 = V_0;
		__this->____size = L_5;
		MatchContextU5BU5D_t49C4E5DA5C1F9B06B211BE6F94AC6BD4D0ABCAE5* L_6 = V_1;
		int32_t L_7 = V_0;
		NullCheck(L_6);
		int32_t L_8 = L_7;
		MatchContext_t04110FFA271D89A23BC1918BE657634A7DC06253 L_9 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		G_B4_0 = L_9;
		goto IL_004f;
	}

IL_004f:
	{
		return G_B4_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Stack_1_TryPop_m7105553BAE2CF3626DB835E3A655EF4CC90E6ED6_gshared (Stack_1_tB568ED1852EE70A3EECA2CD66F2AB41DDEC262FA* __this, MatchContext_t04110FFA271D89A23BC1918BE657634A7DC06253* ___0_result, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	MatchContextU5BU5D_t49C4E5DA5C1F9B06B211BE6F94AC6BD4D0ABCAE5* V_1 = NULL;
	MatchContext_t04110FFA271D89A23BC1918BE657634A7DC06253 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0 = __this->____size;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_0, 1));
		MatchContextU5BU5D_t49C4E5DA5C1F9B06B211BE6F94AC6BD4D0ABCAE5* L_1 = __this->____array;
		V_1 = L_1;
		int32_t L_2 = V_0;
		MatchContextU5BU5D_t49C4E5DA5C1F9B06B211BE6F94AC6BD4D0ABCAE5* L_3 = V_1;
		NullCheck(L_3);
		if ((!(((uint32_t)L_2) >= ((uint32_t)((int32_t)(((RuntimeArray*)L_3)->max_length))))))
		{
			goto IL_001f;
		}
	}
	{
		MatchContext_t04110FFA271D89A23BC1918BE657634A7DC06253* L_4 = ___0_result;
		il2cpp_codegen_initobj(L_4, sizeof(MatchContext_t04110FFA271D89A23BC1918BE657634A7DC06253));
		return (bool)0;
	}

IL_001f:
	{
		int32_t L_5 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_5, 1));
		int32_t L_6 = V_0;
		__this->____size = L_6;
		MatchContext_t04110FFA271D89A23BC1918BE657634A7DC06253* L_7 = ___0_result;
		MatchContextU5BU5D_t49C4E5DA5C1F9B06B211BE6F94AC6BD4D0ABCAE5* L_8 = V_1;
		int32_t L_9 = V_0;
		NullCheck(L_8);
		int32_t L_10 = L_9;
		MatchContext_t04110FFA271D89A23BC1918BE657634A7DC06253 L_11 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		*(MatchContext_t04110FFA271D89A23BC1918BE657634A7DC06253*)L_7 = L_11;
		goto IL_0058;
	}

IL_0058:
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Stack_1_Push_mBAF79A1FA0D8C0E9E3658328E92404F6D4703861_gshared (Stack_1_tB568ED1852EE70A3EECA2CD66F2AB41DDEC262FA* __this, MatchContext_t04110FFA271D89A23BC1918BE657634A7DC06253 ___0_item, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	MatchContextU5BU5D_t49C4E5DA5C1F9B06B211BE6F94AC6BD4D0ABCAE5* V_1 = NULL;
	{
		int32_t L_0 = __this->____size;
		V_0 = L_0;
		MatchContextU5BU5D_t49C4E5DA5C1F9B06B211BE6F94AC6BD4D0ABCAE5* L_1 = __this->____array;
		V_1 = L_1;
		int32_t L_2 = V_0;
		MatchContextU5BU5D_t49C4E5DA5C1F9B06B211BE6F94AC6BD4D0ABCAE5* L_3 = V_1;
		NullCheck(L_3);
		if ((!(((uint32_t)L_2) < ((uint32_t)((int32_t)(((RuntimeArray*)L_3)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		MatchContextU5BU5D_t49C4E5DA5C1F9B06B211BE6F94AC6BD4D0ABCAE5* L_4 = V_1;
		int32_t L_5 = V_0;
		MatchContext_t04110FFA271D89A23BC1918BE657634A7DC06253 L_6 = ___0_item;
		NullCheck(L_4);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(L_5), (MatchContext_t04110FFA271D89A23BC1918BE657634A7DC06253)L_6);
		int32_t L_7 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_7, 1));
		int32_t L_8 = V_0;
		__this->____size = ((int32_t)il2cpp_codegen_add(L_8, 1));
		return;
	}

IL_0034:
	{
		MatchContext_t04110FFA271D89A23BC1918BE657634A7DC06253 L_9 = ___0_item;
		Stack_1_PushWithResize_m046E8452EBCC5731C97F814735F12D1CC6714309(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void Stack_1_PushWithResize_m046E8452EBCC5731C97F814735F12D1CC6714309_gshared (Stack_1_tB568ED1852EE70A3EECA2CD66F2AB41DDEC262FA* __this, MatchContext_t04110FFA271D89A23BC1918BE657634A7DC06253 ___0_item, const RuntimeMethod* method) 
{
	MatchContextU5BU5D_t49C4E5DA5C1F9B06B211BE6F94AC6BD4D0ABCAE5** G_B2_0 = NULL;
	MatchContextU5BU5D_t49C4E5DA5C1F9B06B211BE6F94AC6BD4D0ABCAE5** G_B1_0 = NULL;
	int32_t G_B3_0 = 0;
	MatchContextU5BU5D_t49C4E5DA5C1F9B06B211BE6F94AC6BD4D0ABCAE5** G_B3_1 = NULL;
	{
		MatchContextU5BU5D_t49C4E5DA5C1F9B06B211BE6F94AC6BD4D0ABCAE5** L_0 = (MatchContextU5BU5D_t49C4E5DA5C1F9B06B211BE6F94AC6BD4D0ABCAE5**)(&__this->____array);
		MatchContextU5BU5D_t49C4E5DA5C1F9B06B211BE6F94AC6BD4D0ABCAE5* L_1 = __this->____array;
		NullCheck(L_1);
		if (!(((RuntimeArray*)L_1)->max_length))
		{
			G_B2_0 = L_0;
			goto IL_001b;
		}
		G_B1_0 = L_0;
	}
	{
		MatchContextU5BU5D_t49C4E5DA5C1F9B06B211BE6F94AC6BD4D0ABCAE5* L_2 = __this->____array;
		NullCheck(L_2);
		G_B3_0 = ((int32_t)il2cpp_codegen_multiply(2, ((int32_t)(((RuntimeArray*)L_2)->max_length))));
		G_B3_1 = G_B1_0;
		goto IL_001c;
	}

IL_001b:
	{
		G_B3_0 = 4;
		G_B3_1 = G_B2_0;
	}

IL_001c:
	{
		Array_Resize_TisMatchContext_t04110FFA271D89A23BC1918BE657634A7DC06253_m4E7CB8B6701DF21BD6CA13920546C7869B4F6678(G_B3_1, G_B3_0, il2cpp_rgctx_method(method->klass->rgctx_data, 13));
		MatchContextU5BU5D_t49C4E5DA5C1F9B06B211BE6F94AC6BD4D0ABCAE5* L_3 = __this->____array;
		int32_t L_4 = __this->____size;
		MatchContext_t04110FFA271D89A23BC1918BE657634A7DC06253 L_5 = ___0_item;
		NullCheck(L_3);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(L_4), (MatchContext_t04110FFA271D89A23BC1918BE657634A7DC06253)L_5);
		int32_t L_6 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_6, 1));
		int32_t L_7 = __this->____size;
		__this->____size = ((int32_t)il2cpp_codegen_add(L_7, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Stack_1_ThrowForEmptyStack_m89DEAB4CFF2C08C84D7B4988FD3A588F243CC50C_gshared (Stack_1_tB568ED1852EE70A3EECA2CD66F2AB41DDEC262FA* __this, const RuntimeMethod* method) 
{
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_0 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral95F0EE30865D503A05F1D329BC3FED0946B65C24)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Stack_1__ctor_m6988BDD8692AA2E23FC60D37133D0CCDD6EB5988_gshared (Stack_1_t90AD4B4BDD857A86CDEC55130FE1BAB9871F0CFE* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		AllocSizeU5BU5D_tD7D6854D89AE82553F2200BC3B1F1A2D5455D9D8* L_0;
		L_0 = Array_Empty_TisAllocSize_t906784497648EDC3F45F4EA656C6858238BA2F7C_m5DD7EE6CA7EC17B1B022C4780B85FFA1C0A0FA12_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		__this->____array = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____array), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Stack_1__ctor_m926E7695A4304CE6339322C2C24794FAEF8F3BC6_gshared (Stack_1_t90AD4B4BDD857A86CDEC55130FE1BAB9871F0CFE* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		int32_t L_0 = ___0_capacity;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0020;
		}
	}
	{
		int32_t L_1 = ___0_capacity;
		int32_t L_2 = L_1;
		RuntimeObject* L_3 = Box(il2cpp_defaults.int32_class, &L_2);
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_4 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_m60B543A63AC8692C28096003FBF2AD124B9D5B85(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC37D78082ACFC8DEE7B32D9351C6E433A074FEC7)), L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral38E3DBC7FC353425EF3A98DC8DAC6689AF5FD1BE)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, method);
	}

IL_0020:
	{
		int32_t L_5 = ___0_capacity;
		AllocSizeU5BU5D_tD7D6854D89AE82553F2200BC3B1F1A2D5455D9D8* L_6 = (AllocSizeU5BU5D_tD7D6854D89AE82553F2200BC3B1F1A2D5455D9D8*)(AllocSizeU5BU5D_tD7D6854D89AE82553F2200BC3B1F1A2D5455D9D8*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 3), (uint32_t)L_5);
		__this->____array = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____array), (void*)L_6);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Stack_1_get_Count_m1A5ADCCCA1C0F37BAFE79F920C0A23EF9C3C793B_gshared (Stack_1_t90AD4B4BDD857A86CDEC55130FE1BAB9871F0CFE* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Stack_1_System_Collections_ICollection_get_IsSynchronized_m336C796375A4F6F2C9C3782BC36449CD043374BD_gshared (Stack_1_t90AD4B4BDD857A86CDEC55130FE1BAB9871F0CFE* __this, const RuntimeMethod* method) 
{
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Stack_1_System_Collections_ICollection_get_SyncRoot_mB6D802B782B963152B326FC436233687BED6D9E6_gshared (Stack_1_t90AD4B4BDD857A86CDEC55130FE1BAB9871F0CFE* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->____syncRoot;
		if (L_0)
		{
			goto IL_001a;
		}
	}
	{
		RuntimeObject** L_1 = (RuntimeObject**)(&__this->____syncRoot);
		RuntimeObject* L_2 = (RuntimeObject*)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(L_2, NULL);
		RuntimeObject* L_3;
		L_3 = InterlockedCompareExchangeImpl<RuntimeObject*>(L_1, L_2, NULL);
	}

IL_001a:
	{
		RuntimeObject* L_4 = __this->____syncRoot;
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Stack_1_Clear_mD4B86828A29EA4BB45ED21A39F501271326934A6_gshared (Stack_1_t90AD4B4BDD857A86CDEC55130FE1BAB9871F0CFE* __this, const RuntimeMethod* method) 
{
	{
		goto IL_0019;
	}

IL_0019:
	{
		__this->____size = 0;
		int32_t L_0 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_0, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Stack_1_Contains_m26CBD43C4DC103B42F2C4FB32A44AAA0B7F26643_gshared (Stack_1_t90AD4B4BDD857A86CDEC55130FE1BAB9871F0CFE* __this, AllocSize_t906784497648EDC3F45F4EA656C6858238BA2F7C ___0_item, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		if (!L_0)
		{
			goto IL_0023;
		}
	}
	{
		AllocSizeU5BU5D_tD7D6854D89AE82553F2200BC3B1F1A2D5455D9D8* L_1 = __this->____array;
		AllocSize_t906784497648EDC3F45F4EA656C6858238BA2F7C L_2 = ___0_item;
		int32_t L_3 = __this->____size;
		int32_t L_4;
		L_4 = Array_LastIndexOf_TisAllocSize_t906784497648EDC3F45F4EA656C6858238BA2F7C_mB4E32AD94934B63EDD33729EAE5F161483145500(L_1, L_2, ((int32_t)il2cpp_codegen_subtract(L_3, 1)), il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		return (bool)((((int32_t)((((int32_t)L_4) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_0023:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Stack_1_System_Collections_ICollection_CopyTo_m576C779CE94509DC34ED8558E1842664BA022FF0_gshared (Stack_1_t90AD4B4BDD857A86CDEC55130FE1BAB9871F0CFE* __this, RuntimeArray* ___0_array, int32_t ___1_arrayIndex, const RuntimeMethod* method) 
{
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeArray* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		RuntimeArray* L_2 = ___0_array;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(L_2, NULL);
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0027;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_4 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral967D403A541A1026A83D548E5AD5CA800AD4EFB5)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, method);
	}

IL_0027:
	{
		RuntimeArray* L_5 = ___0_array;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(L_5, 0, NULL);
		if (!L_6)
		{
			goto IL_0040;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_7 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_7, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral6195D7DA68D16D4985AD1A1B4FD2841A43CDDE70)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, method);
	}

IL_0040:
	{
		int32_t L_8 = ___1_arrayIndex;
		if ((((int32_t)L_8) < ((int32_t)0)))
		{
			goto IL_004d;
		}
	}
	{
		int32_t L_9 = ___1_arrayIndex;
		RuntimeArray* L_10 = ___0_array;
		NullCheck(L_10);
		int32_t L_11;
		L_11 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(L_10, NULL);
		if ((((int32_t)L_9) <= ((int32_t)L_11)))
		{
			goto IL_0063;
		}
	}

IL_004d:
	{
		int32_t L_12 = ___1_arrayIndex;
		int32_t L_13 = L_12;
		RuntimeObject* L_14 = Box(il2cpp_defaults.int32_class, &L_13);
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_15 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_m60B543A63AC8692C28096003FBF2AD124B9D5B85(L_15, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC00660333703C551EA80371B54D0ADCEB74C33B4)), L_14, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral569FEAE6AEE421BCD8D24F22865E84F808C2A1E4)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_15, method);
	}

IL_0063:
	{
		RuntimeArray* L_16 = ___0_array;
		NullCheck(L_16);
		int32_t L_17;
		L_17 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(L_16, NULL);
		int32_t L_18 = ___1_arrayIndex;
		int32_t L_19 = __this->____size;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_17, L_18))) >= ((int32_t)L_19)))
		{
			goto IL_007e;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_20 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_20, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral7F4C724BD10943E8B0B17A6E069F992E219EF5E8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_20, method);
	}

IL_007e:
	{
	}
	try
	{
		AllocSizeU5BU5D_tD7D6854D89AE82553F2200BC3B1F1A2D5455D9D8* L_21 = __this->____array;
		RuntimeArray* L_22 = ___0_array;
		int32_t L_23 = ___1_arrayIndex;
		int32_t L_24 = __this->____size;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_21, 0, L_22, L_23, L_24, NULL);
		RuntimeArray* L_25 = ___0_array;
		int32_t L_26 = ___1_arrayIndex;
		int32_t L_27 = __this->____size;
		Array_Reverse_mE788006243D34C654D7DDEF13E2D9E7B129AF8AD(L_25, L_26, L_27, NULL);
		goto IL_00b3;
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00a2;
		}
		throw e;
	}

CATCH_00a2:
	{
		ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1* L_28 = ((ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*)IL2CPP_GET_ACTIVE_EXCEPTION(ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*));;
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_29 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_29, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralBD0381A992FDF4F7DA60E5D83689FE7FF6309CB8)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_29, method);
	}

IL_00b3:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_tD97C98C8AA749156CECC60E8ED112C7771E69B84 Stack_1_GetEnumerator_mEC9EB13D02C6150E4274E3D87AF71D68DA41A1B1_gshared (Stack_1_t90AD4B4BDD857A86CDEC55130FE1BAB9871F0CFE* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_tD97C98C8AA749156CECC60E8ED112C7771E69B84 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m07361745557663CD1B1953D494AA8FB80A0730A6((&L_0), __this, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Stack_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m6B8CB78D4F795918EAF5E63DB2C230574CAD760A_gshared (Stack_1_t90AD4B4BDD857A86CDEC55130FE1BAB9871F0CFE* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_tD97C98C8AA749156CECC60E8ED112C7771E69B84 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m07361745557663CD1B1953D494AA8FB80A0730A6((&L_0), __this, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		Enumerator_tD97C98C8AA749156CECC60E8ED112C7771E69B84 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 7), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Stack_1_System_Collections_IEnumerable_GetEnumerator_mC5851FD75FF7653647AEDDCF39AB312A047C8259_gshared (Stack_1_t90AD4B4BDD857A86CDEC55130FE1BAB9871F0CFE* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_tD97C98C8AA749156CECC60E8ED112C7771E69B84 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m07361745557663CD1B1953D494AA8FB80A0730A6((&L_0), __this, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		Enumerator_tD97C98C8AA749156CECC60E8ED112C7771E69B84 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 7), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AllocSize_t906784497648EDC3F45F4EA656C6858238BA2F7C Stack_1_Peek_m8D885781E0E260B05340059064D9FF072A391D51_gshared (Stack_1_t90AD4B4BDD857A86CDEC55130FE1BAB9871F0CFE* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	AllocSizeU5BU5D_tD7D6854D89AE82553F2200BC3B1F1A2D5455D9D8* V_1 = NULL;
	{
		int32_t L_0 = __this->____size;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_0, 1));
		AllocSizeU5BU5D_tD7D6854D89AE82553F2200BC3B1F1A2D5455D9D8* L_1 = __this->____array;
		V_1 = L_1;
		int32_t L_2 = V_0;
		AllocSizeU5BU5D_tD7D6854D89AE82553F2200BC3B1F1A2D5455D9D8* L_3 = V_1;
		NullCheck(L_3);
		if ((!(((uint32_t)L_2) >= ((uint32_t)((int32_t)(((RuntimeArray*)L_3)->max_length))))))
		{
			goto IL_001c;
		}
	}
	{
		Stack_1_ThrowForEmptyStack_m8771401C109B7429B07B52ED7ADA916AA59DE001(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
	}

IL_001c:
	{
		AllocSizeU5BU5D_tD7D6854D89AE82553F2200BC3B1F1A2D5455D9D8* L_4 = V_1;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		AllocSize_t906784497648EDC3F45F4EA656C6858238BA2F7C L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		return L_7;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AllocSize_t906784497648EDC3F45F4EA656C6858238BA2F7C Stack_1_Pop_m4EB09F3709EBEB0E859B4C41BD57A1F02F97E494_gshared (Stack_1_t90AD4B4BDD857A86CDEC55130FE1BAB9871F0CFE* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	AllocSizeU5BU5D_tD7D6854D89AE82553F2200BC3B1F1A2D5455D9D8* V_1 = NULL;
	AllocSize_t906784497648EDC3F45F4EA656C6858238BA2F7C V_2;
	memset((&V_2), 0, sizeof(V_2));
	AllocSize_t906784497648EDC3F45F4EA656C6858238BA2F7C G_B4_0;
	memset((&G_B4_0), 0, sizeof(G_B4_0));
	AllocSize_t906784497648EDC3F45F4EA656C6858238BA2F7C G_B3_0;
	memset((&G_B3_0), 0, sizeof(G_B3_0));
	{
		int32_t L_0 = __this->____size;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_0, 1));
		AllocSizeU5BU5D_tD7D6854D89AE82553F2200BC3B1F1A2D5455D9D8* L_1 = __this->____array;
		V_1 = L_1;
		int32_t L_2 = V_0;
		AllocSizeU5BU5D_tD7D6854D89AE82553F2200BC3B1F1A2D5455D9D8* L_3 = V_1;
		NullCheck(L_3);
		if ((!(((uint32_t)L_2) >= ((uint32_t)((int32_t)(((RuntimeArray*)L_3)->max_length))))))
		{
			goto IL_001c;
		}
	}
	{
		Stack_1_ThrowForEmptyStack_m8771401C109B7429B07B52ED7ADA916AA59DE001(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
	}

IL_001c:
	{
		int32_t L_4 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_4, 1));
		int32_t L_5 = V_0;
		__this->____size = L_5;
		AllocSizeU5BU5D_tD7D6854D89AE82553F2200BC3B1F1A2D5455D9D8* L_6 = V_1;
		int32_t L_7 = V_0;
		NullCheck(L_6);
		int32_t L_8 = L_7;
		AllocSize_t906784497648EDC3F45F4EA656C6858238BA2F7C L_9 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		G_B4_0 = L_9;
		goto IL_004f;
	}

IL_004f:
	{
		return G_B4_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Stack_1_TryPop_mF8B1F26D2865F1E5A3B5945D1A8BD0BE0BCAEAE2_gshared (Stack_1_t90AD4B4BDD857A86CDEC55130FE1BAB9871F0CFE* __this, AllocSize_t906784497648EDC3F45F4EA656C6858238BA2F7C* ___0_result, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	AllocSizeU5BU5D_tD7D6854D89AE82553F2200BC3B1F1A2D5455D9D8* V_1 = NULL;
	AllocSize_t906784497648EDC3F45F4EA656C6858238BA2F7C V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0 = __this->____size;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_0, 1));
		AllocSizeU5BU5D_tD7D6854D89AE82553F2200BC3B1F1A2D5455D9D8* L_1 = __this->____array;
		V_1 = L_1;
		int32_t L_2 = V_0;
		AllocSizeU5BU5D_tD7D6854D89AE82553F2200BC3B1F1A2D5455D9D8* L_3 = V_1;
		NullCheck(L_3);
		if ((!(((uint32_t)L_2) >= ((uint32_t)((int32_t)(((RuntimeArray*)L_3)->max_length))))))
		{
			goto IL_001f;
		}
	}
	{
		AllocSize_t906784497648EDC3F45F4EA656C6858238BA2F7C* L_4 = ___0_result;
		il2cpp_codegen_initobj(L_4, sizeof(AllocSize_t906784497648EDC3F45F4EA656C6858238BA2F7C));
		return (bool)0;
	}

IL_001f:
	{
		int32_t L_5 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_5, 1));
		int32_t L_6 = V_0;
		__this->____size = L_6;
		AllocSize_t906784497648EDC3F45F4EA656C6858238BA2F7C* L_7 = ___0_result;
		AllocSizeU5BU5D_tD7D6854D89AE82553F2200BC3B1F1A2D5455D9D8* L_8 = V_1;
		int32_t L_9 = V_0;
		NullCheck(L_8);
		int32_t L_10 = L_9;
		AllocSize_t906784497648EDC3F45F4EA656C6858238BA2F7C L_11 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		*(AllocSize_t906784497648EDC3F45F4EA656C6858238BA2F7C*)L_7 = L_11;
		goto IL_0058;
	}

IL_0058:
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Stack_1_Push_m6232A17919816D16392B4FD8CFD9EE078911AFAB_gshared (Stack_1_t90AD4B4BDD857A86CDEC55130FE1BAB9871F0CFE* __this, AllocSize_t906784497648EDC3F45F4EA656C6858238BA2F7C ___0_item, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	AllocSizeU5BU5D_tD7D6854D89AE82553F2200BC3B1F1A2D5455D9D8* V_1 = NULL;
	{
		int32_t L_0 = __this->____size;
		V_0 = L_0;
		AllocSizeU5BU5D_tD7D6854D89AE82553F2200BC3B1F1A2D5455D9D8* L_1 = __this->____array;
		V_1 = L_1;
		int32_t L_2 = V_0;
		AllocSizeU5BU5D_tD7D6854D89AE82553F2200BC3B1F1A2D5455D9D8* L_3 = V_1;
		NullCheck(L_3);
		if ((!(((uint32_t)L_2) < ((uint32_t)((int32_t)(((RuntimeArray*)L_3)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		AllocSizeU5BU5D_tD7D6854D89AE82553F2200BC3B1F1A2D5455D9D8* L_4 = V_1;
		int32_t L_5 = V_0;
		AllocSize_t906784497648EDC3F45F4EA656C6858238BA2F7C L_6 = ___0_item;
		NullCheck(L_4);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(L_5), (AllocSize_t906784497648EDC3F45F4EA656C6858238BA2F7C)L_6);
		int32_t L_7 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_7, 1));
		int32_t L_8 = V_0;
		__this->____size = ((int32_t)il2cpp_codegen_add(L_8, 1));
		return;
	}

IL_0034:
	{
		AllocSize_t906784497648EDC3F45F4EA656C6858238BA2F7C L_9 = ___0_item;
		Stack_1_PushWithResize_mCE77B35C7D03CEA8A9568F603B08799B7F7A6138(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void Stack_1_PushWithResize_mCE77B35C7D03CEA8A9568F603B08799B7F7A6138_gshared (Stack_1_t90AD4B4BDD857A86CDEC55130FE1BAB9871F0CFE* __this, AllocSize_t906784497648EDC3F45F4EA656C6858238BA2F7C ___0_item, const RuntimeMethod* method) 
{
	AllocSizeU5BU5D_tD7D6854D89AE82553F2200BC3B1F1A2D5455D9D8** G_B2_0 = NULL;
	AllocSizeU5BU5D_tD7D6854D89AE82553F2200BC3B1F1A2D5455D9D8** G_B1_0 = NULL;
	int32_t G_B3_0 = 0;
	AllocSizeU5BU5D_tD7D6854D89AE82553F2200BC3B1F1A2D5455D9D8** G_B3_1 = NULL;
	{
		AllocSizeU5BU5D_tD7D6854D89AE82553F2200BC3B1F1A2D5455D9D8** L_0 = (AllocSizeU5BU5D_tD7D6854D89AE82553F2200BC3B1F1A2D5455D9D8**)(&__this->____array);
		AllocSizeU5BU5D_tD7D6854D89AE82553F2200BC3B1F1A2D5455D9D8* L_1 = __this->____array;
		NullCheck(L_1);
		if (!(((RuntimeArray*)L_1)->max_length))
		{
			G_B2_0 = L_0;
			goto IL_001b;
		}
		G_B1_0 = L_0;
	}
	{
		AllocSizeU5BU5D_tD7D6854D89AE82553F2200BC3B1F1A2D5455D9D8* L_2 = __this->____array;
		NullCheck(L_2);
		G_B3_0 = ((int32_t)il2cpp_codegen_multiply(2, ((int32_t)(((RuntimeArray*)L_2)->max_length))));
		G_B3_1 = G_B1_0;
		goto IL_001c;
	}

IL_001b:
	{
		G_B3_0 = 4;
		G_B3_1 = G_B2_0;
	}

IL_001c:
	{
		Array_Resize_TisAllocSize_t906784497648EDC3F45F4EA656C6858238BA2F7C_m0112163C0BEA82A10E26EC61120F09D685F75D82(G_B3_1, G_B3_0, il2cpp_rgctx_method(method->klass->rgctx_data, 13));
		AllocSizeU5BU5D_tD7D6854D89AE82553F2200BC3B1F1A2D5455D9D8* L_3 = __this->____array;
		int32_t L_4 = __this->____size;
		AllocSize_t906784497648EDC3F45F4EA656C6858238BA2F7C L_5 = ___0_item;
		NullCheck(L_3);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(L_4), (AllocSize_t906784497648EDC3F45F4EA656C6858238BA2F7C)L_5);
		int32_t L_6 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_6, 1));
		int32_t L_7 = __this->____size;
		__this->____size = ((int32_t)il2cpp_codegen_add(L_7, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Stack_1_ThrowForEmptyStack_m8771401C109B7429B07B52ED7ADA916AA59DE001_gshared (Stack_1_t90AD4B4BDD857A86CDEC55130FE1BAB9871F0CFE* __this, const RuntimeMethod* method) 
{
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_0 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral95F0EE30865D503A05F1D329BC3FED0946B65C24)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Stack_1__ctor_mC2001849DCA37B8F4CA38329829ED8092EA6CF78_gshared (Stack_1_tAE809352224B7904D166288D1476FD4C2ED0D631* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		MaskMeshU5BU5D_t5C162FB3760E834B8B5B0C75F438C2D8106EC8D5* L_0;
		L_0 = Array_Empty_TisMaskMesh_tBA4A29153655DB02C99D6BF624A64795A084806B_m20F2634088091DCC2AFF06339CE497560174D0A4_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		__this->____array = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____array), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Stack_1__ctor_mD407A708B955AD8874E4D824A2BF9D920C56E5F6_gshared (Stack_1_tAE809352224B7904D166288D1476FD4C2ED0D631* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		int32_t L_0 = ___0_capacity;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0020;
		}
	}
	{
		int32_t L_1 = ___0_capacity;
		int32_t L_2 = L_1;
		RuntimeObject* L_3 = Box(il2cpp_defaults.int32_class, &L_2);
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_4 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_m60B543A63AC8692C28096003FBF2AD124B9D5B85(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC37D78082ACFC8DEE7B32D9351C6E433A074FEC7)), L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral38E3DBC7FC353425EF3A98DC8DAC6689AF5FD1BE)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, method);
	}

IL_0020:
	{
		int32_t L_5 = ___0_capacity;
		MaskMeshU5BU5D_t5C162FB3760E834B8B5B0C75F438C2D8106EC8D5* L_6 = (MaskMeshU5BU5D_t5C162FB3760E834B8B5B0C75F438C2D8106EC8D5*)(MaskMeshU5BU5D_t5C162FB3760E834B8B5B0C75F438C2D8106EC8D5*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 3), (uint32_t)L_5);
		__this->____array = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____array), (void*)L_6);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Stack_1_get_Count_m8CFD098826101B6EE31CC6BFB50D54375723459A_gshared (Stack_1_tAE809352224B7904D166288D1476FD4C2ED0D631* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Stack_1_System_Collections_ICollection_get_IsSynchronized_m6AC609C9A6137068EFA76214E5087C186AC24EA4_gshared (Stack_1_tAE809352224B7904D166288D1476FD4C2ED0D631* __this, const RuntimeMethod* method) 
{
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Stack_1_System_Collections_ICollection_get_SyncRoot_mDE93393DDA1CBE550B3A20698FDD7223C76BCD9A_gshared (Stack_1_tAE809352224B7904D166288D1476FD4C2ED0D631* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->____syncRoot;
		if (L_0)
		{
			goto IL_001a;
		}
	}
	{
		RuntimeObject** L_1 = (RuntimeObject**)(&__this->____syncRoot);
		RuntimeObject* L_2 = (RuntimeObject*)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(L_2, NULL);
		RuntimeObject* L_3;
		L_3 = InterlockedCompareExchangeImpl<RuntimeObject*>(L_1, L_2, NULL);
	}

IL_001a:
	{
		RuntimeObject* L_4 = __this->____syncRoot;
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Stack_1_Clear_m53824BE509EAD11B4398248C21F27E87F5860640_gshared (Stack_1_tAE809352224B7904D166288D1476FD4C2ED0D631* __this, const RuntimeMethod* method) 
{
	{
		goto IL_0019;
	}

IL_0019:
	{
		__this->____size = 0;
		int32_t L_0 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_0, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Stack_1_Contains_m3EA74D6556A8F90F8756B240CE05A577D70D59E9_gshared (Stack_1_tAE809352224B7904D166288D1476FD4C2ED0D631* __this, MaskMesh_tBA4A29153655DB02C99D6BF624A64795A084806B ___0_item, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		if (!L_0)
		{
			goto IL_0023;
		}
	}
	{
		MaskMeshU5BU5D_t5C162FB3760E834B8B5B0C75F438C2D8106EC8D5* L_1 = __this->____array;
		MaskMesh_tBA4A29153655DB02C99D6BF624A64795A084806B L_2 = ___0_item;
		int32_t L_3 = __this->____size;
		int32_t L_4;
		L_4 = Array_LastIndexOf_TisMaskMesh_tBA4A29153655DB02C99D6BF624A64795A084806B_m818F2FAF7CF69CA55BBDB69F07C79300EB865DF7(L_1, L_2, ((int32_t)il2cpp_codegen_subtract(L_3, 1)), il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		return (bool)((((int32_t)((((int32_t)L_4) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_0023:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Stack_1_System_Collections_ICollection_CopyTo_m4A0B07ABA73B6A17620A1577EE72DBEEE5DE6490_gshared (Stack_1_tAE809352224B7904D166288D1476FD4C2ED0D631* __this, RuntimeArray* ___0_array, int32_t ___1_arrayIndex, const RuntimeMethod* method) 
{
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeArray* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		RuntimeArray* L_2 = ___0_array;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(L_2, NULL);
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0027;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_4 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral967D403A541A1026A83D548E5AD5CA800AD4EFB5)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, method);
	}

IL_0027:
	{
		RuntimeArray* L_5 = ___0_array;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(L_5, 0, NULL);
		if (!L_6)
		{
			goto IL_0040;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_7 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_7, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral6195D7DA68D16D4985AD1A1B4FD2841A43CDDE70)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, method);
	}

IL_0040:
	{
		int32_t L_8 = ___1_arrayIndex;
		if ((((int32_t)L_8) < ((int32_t)0)))
		{
			goto IL_004d;
		}
	}
	{
		int32_t L_9 = ___1_arrayIndex;
		RuntimeArray* L_10 = ___0_array;
		NullCheck(L_10);
		int32_t L_11;
		L_11 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(L_10, NULL);
		if ((((int32_t)L_9) <= ((int32_t)L_11)))
		{
			goto IL_0063;
		}
	}

IL_004d:
	{
		int32_t L_12 = ___1_arrayIndex;
		int32_t L_13 = L_12;
		RuntimeObject* L_14 = Box(il2cpp_defaults.int32_class, &L_13);
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_15 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_m60B543A63AC8692C28096003FBF2AD124B9D5B85(L_15, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC00660333703C551EA80371B54D0ADCEB74C33B4)), L_14, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral569FEAE6AEE421BCD8D24F22865E84F808C2A1E4)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_15, method);
	}

IL_0063:
	{
		RuntimeArray* L_16 = ___0_array;
		NullCheck(L_16);
		int32_t L_17;
		L_17 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(L_16, NULL);
		int32_t L_18 = ___1_arrayIndex;
		int32_t L_19 = __this->____size;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_17, L_18))) >= ((int32_t)L_19)))
		{
			goto IL_007e;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_20 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_20, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral7F4C724BD10943E8B0B17A6E069F992E219EF5E8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_20, method);
	}

IL_007e:
	{
	}
	try
	{
		MaskMeshU5BU5D_t5C162FB3760E834B8B5B0C75F438C2D8106EC8D5* L_21 = __this->____array;
		RuntimeArray* L_22 = ___0_array;
		int32_t L_23 = ___1_arrayIndex;
		int32_t L_24 = __this->____size;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_21, 0, L_22, L_23, L_24, NULL);
		RuntimeArray* L_25 = ___0_array;
		int32_t L_26 = ___1_arrayIndex;
		int32_t L_27 = __this->____size;
		Array_Reverse_mE788006243D34C654D7DDEF13E2D9E7B129AF8AD(L_25, L_26, L_27, NULL);
		goto IL_00b3;
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00a2;
		}
		throw e;
	}

CATCH_00a2:
	{
		ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1* L_28 = ((ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*)IL2CPP_GET_ACTIVE_EXCEPTION(ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*));;
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_29 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_29, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralBD0381A992FDF4F7DA60E5D83689FE7FF6309CB8)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_29, method);
	}

IL_00b3:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t3B367DB4E88110F0F90313AF159B54F9F2189310 Stack_1_GetEnumerator_m609EC468B0F278F290F471ADBF911FE17F9173D7_gshared (Stack_1_tAE809352224B7904D166288D1476FD4C2ED0D631* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t3B367DB4E88110F0F90313AF159B54F9F2189310 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_mE90843AFE5073A0E749A49A314E1300B5D2887F5((&L_0), __this, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Stack_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m36D9E844AB2DEB79A2E6C99CD24310ECE58B9C84_gshared (Stack_1_tAE809352224B7904D166288D1476FD4C2ED0D631* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t3B367DB4E88110F0F90313AF159B54F9F2189310 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_mE90843AFE5073A0E749A49A314E1300B5D2887F5((&L_0), __this, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		Enumerator_t3B367DB4E88110F0F90313AF159B54F9F2189310 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 7), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Stack_1_System_Collections_IEnumerable_GetEnumerator_mC56B2F1313D8D9CBBB8B29BF8FB30C2A0A57459E_gshared (Stack_1_tAE809352224B7904D166288D1476FD4C2ED0D631* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t3B367DB4E88110F0F90313AF159B54F9F2189310 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_mE90843AFE5073A0E749A49A314E1300B5D2887F5((&L_0), __this, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		Enumerator_t3B367DB4E88110F0F90313AF159B54F9F2189310 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 7), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MaskMesh_tBA4A29153655DB02C99D6BF624A64795A084806B Stack_1_Peek_m545A07965FA85AF2625485DD70A36DA244A9F136_gshared (Stack_1_tAE809352224B7904D166288D1476FD4C2ED0D631* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	MaskMeshU5BU5D_t5C162FB3760E834B8B5B0C75F438C2D8106EC8D5* V_1 = NULL;
	{
		int32_t L_0 = __this->____size;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_0, 1));
		MaskMeshU5BU5D_t5C162FB3760E834B8B5B0C75F438C2D8106EC8D5* L_1 = __this->____array;
		V_1 = L_1;
		int32_t L_2 = V_0;
		MaskMeshU5BU5D_t5C162FB3760E834B8B5B0C75F438C2D8106EC8D5* L_3 = V_1;
		NullCheck(L_3);
		if ((!(((uint32_t)L_2) >= ((uint32_t)((int32_t)(((RuntimeArray*)L_3)->max_length))))))
		{
			goto IL_001c;
		}
	}
	{
		Stack_1_ThrowForEmptyStack_m12EE5EEA0D599F83F68A7D47079EE0F8F741B40E(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
	}

IL_001c:
	{
		MaskMeshU5BU5D_t5C162FB3760E834B8B5B0C75F438C2D8106EC8D5* L_4 = V_1;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		MaskMesh_tBA4A29153655DB02C99D6BF624A64795A084806B L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		return L_7;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MaskMesh_tBA4A29153655DB02C99D6BF624A64795A084806B Stack_1_Pop_mE697F403AF0AB0F833B730786C26999704209CCC_gshared (Stack_1_tAE809352224B7904D166288D1476FD4C2ED0D631* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	MaskMeshU5BU5D_t5C162FB3760E834B8B5B0C75F438C2D8106EC8D5* V_1 = NULL;
	MaskMesh_tBA4A29153655DB02C99D6BF624A64795A084806B V_2;
	memset((&V_2), 0, sizeof(V_2));
	MaskMesh_tBA4A29153655DB02C99D6BF624A64795A084806B G_B4_0;
	memset((&G_B4_0), 0, sizeof(G_B4_0));
	MaskMesh_tBA4A29153655DB02C99D6BF624A64795A084806B G_B3_0;
	memset((&G_B3_0), 0, sizeof(G_B3_0));
	{
		int32_t L_0 = __this->____size;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_0, 1));
		MaskMeshU5BU5D_t5C162FB3760E834B8B5B0C75F438C2D8106EC8D5* L_1 = __this->____array;
		V_1 = L_1;
		int32_t L_2 = V_0;
		MaskMeshU5BU5D_t5C162FB3760E834B8B5B0C75F438C2D8106EC8D5* L_3 = V_1;
		NullCheck(L_3);
		if ((!(((uint32_t)L_2) >= ((uint32_t)((int32_t)(((RuntimeArray*)L_3)->max_length))))))
		{
			goto IL_001c;
		}
	}
	{
		Stack_1_ThrowForEmptyStack_m12EE5EEA0D599F83F68A7D47079EE0F8F741B40E(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
	}

IL_001c:
	{
		int32_t L_4 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_4, 1));
		int32_t L_5 = V_0;
		__this->____size = L_5;
		MaskMeshU5BU5D_t5C162FB3760E834B8B5B0C75F438C2D8106EC8D5* L_6 = V_1;
		int32_t L_7 = V_0;
		NullCheck(L_6);
		int32_t L_8 = L_7;
		MaskMesh_tBA4A29153655DB02C99D6BF624A64795A084806B L_9 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		G_B4_0 = L_9;
		goto IL_004f;
	}

IL_004f:
	{
		return G_B4_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Stack_1_TryPop_m1507821F01ECE85653C7908AB4BF5CDDA6BECB5E_gshared (Stack_1_tAE809352224B7904D166288D1476FD4C2ED0D631* __this, MaskMesh_tBA4A29153655DB02C99D6BF624A64795A084806B* ___0_result, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	MaskMeshU5BU5D_t5C162FB3760E834B8B5B0C75F438C2D8106EC8D5* V_1 = NULL;
	MaskMesh_tBA4A29153655DB02C99D6BF624A64795A084806B V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0 = __this->____size;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_0, 1));
		MaskMeshU5BU5D_t5C162FB3760E834B8B5B0C75F438C2D8106EC8D5* L_1 = __this->____array;
		V_1 = L_1;
		int32_t L_2 = V_0;
		MaskMeshU5BU5D_t5C162FB3760E834B8B5B0C75F438C2D8106EC8D5* L_3 = V_1;
		NullCheck(L_3);
		if ((!(((uint32_t)L_2) >= ((uint32_t)((int32_t)(((RuntimeArray*)L_3)->max_length))))))
		{
			goto IL_001f;
		}
	}
	{
		MaskMesh_tBA4A29153655DB02C99D6BF624A64795A084806B* L_4 = ___0_result;
		il2cpp_codegen_initobj(L_4, sizeof(MaskMesh_tBA4A29153655DB02C99D6BF624A64795A084806B));
		return (bool)0;
	}

IL_001f:
	{
		int32_t L_5 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_5, 1));
		int32_t L_6 = V_0;
		__this->____size = L_6;
		MaskMesh_tBA4A29153655DB02C99D6BF624A64795A084806B* L_7 = ___0_result;
		MaskMeshU5BU5D_t5C162FB3760E834B8B5B0C75F438C2D8106EC8D5* L_8 = V_1;
		int32_t L_9 = V_0;
		NullCheck(L_8);
		int32_t L_10 = L_9;
		MaskMesh_tBA4A29153655DB02C99D6BF624A64795A084806B L_11 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		*(MaskMesh_tBA4A29153655DB02C99D6BF624A64795A084806B*)L_7 = L_11;
		goto IL_0058;
	}

IL_0058:
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Stack_1_Push_m2C039120BC692BECB3D8C0F260B01A50E1E39662_gshared (Stack_1_tAE809352224B7904D166288D1476FD4C2ED0D631* __this, MaskMesh_tBA4A29153655DB02C99D6BF624A64795A084806B ___0_item, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	MaskMeshU5BU5D_t5C162FB3760E834B8B5B0C75F438C2D8106EC8D5* V_1 = NULL;
	{
		int32_t L_0 = __this->____size;
		V_0 = L_0;
		MaskMeshU5BU5D_t5C162FB3760E834B8B5B0C75F438C2D8106EC8D5* L_1 = __this->____array;
		V_1 = L_1;
		int32_t L_2 = V_0;
		MaskMeshU5BU5D_t5C162FB3760E834B8B5B0C75F438C2D8106EC8D5* L_3 = V_1;
		NullCheck(L_3);
		if ((!(((uint32_t)L_2) < ((uint32_t)((int32_t)(((RuntimeArray*)L_3)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		MaskMeshU5BU5D_t5C162FB3760E834B8B5B0C75F438C2D8106EC8D5* L_4 = V_1;
		int32_t L_5 = V_0;
		MaskMesh_tBA4A29153655DB02C99D6BF624A64795A084806B L_6 = ___0_item;
		NullCheck(L_4);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(L_5), (MaskMesh_tBA4A29153655DB02C99D6BF624A64795A084806B)L_6);
		int32_t L_7 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_7, 1));
		int32_t L_8 = V_0;
		__this->____size = ((int32_t)il2cpp_codegen_add(L_8, 1));
		return;
	}

IL_0034:
	{
		MaskMesh_tBA4A29153655DB02C99D6BF624A64795A084806B L_9 = ___0_item;
		Stack_1_PushWithResize_m9E4C7A345A0EB218950AF6C71F31410EFD75463A(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void Stack_1_PushWithResize_m9E4C7A345A0EB218950AF6C71F31410EFD75463A_gshared (Stack_1_tAE809352224B7904D166288D1476FD4C2ED0D631* __this, MaskMesh_tBA4A29153655DB02C99D6BF624A64795A084806B ___0_item, const RuntimeMethod* method) 
{
	MaskMeshU5BU5D_t5C162FB3760E834B8B5B0C75F438C2D8106EC8D5** G_B2_0 = NULL;
	MaskMeshU5BU5D_t5C162FB3760E834B8B5B0C75F438C2D8106EC8D5** G_B1_0 = NULL;
	int32_t G_B3_0 = 0;
	MaskMeshU5BU5D_t5C162FB3760E834B8B5B0C75F438C2D8106EC8D5** G_B3_1 = NULL;
	{
		MaskMeshU5BU5D_t5C162FB3760E834B8B5B0C75F438C2D8106EC8D5** L_0 = (MaskMeshU5BU5D_t5C162FB3760E834B8B5B0C75F438C2D8106EC8D5**)(&__this->____array);
		MaskMeshU5BU5D_t5C162FB3760E834B8B5B0C75F438C2D8106EC8D5* L_1 = __this->____array;
		NullCheck(L_1);
		if (!(((RuntimeArray*)L_1)->max_length))
		{
			G_B2_0 = L_0;
			goto IL_001b;
		}
		G_B1_0 = L_0;
	}
	{
		MaskMeshU5BU5D_t5C162FB3760E834B8B5B0C75F438C2D8106EC8D5* L_2 = __this->____array;
		NullCheck(L_2);
		G_B3_0 = ((int32_t)il2cpp_codegen_multiply(2, ((int32_t)(((RuntimeArray*)L_2)->max_length))));
		G_B3_1 = G_B1_0;
		goto IL_001c;
	}

IL_001b:
	{
		G_B3_0 = 4;
		G_B3_1 = G_B2_0;
	}

IL_001c:
	{
		Array_Resize_TisMaskMesh_tBA4A29153655DB02C99D6BF624A64795A084806B_m9E14B2021B5551B36226D2C77EA97DCB81FA0B29(G_B3_1, G_B3_0, il2cpp_rgctx_method(method->klass->rgctx_data, 13));
		MaskMeshU5BU5D_t5C162FB3760E834B8B5B0C75F438C2D8106EC8D5* L_3 = __this->____array;
		int32_t L_4 = __this->____size;
		MaskMesh_tBA4A29153655DB02C99D6BF624A64795A084806B L_5 = ___0_item;
		NullCheck(L_3);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(L_4), (MaskMesh_tBA4A29153655DB02C99D6BF624A64795A084806B)L_5);
		int32_t L_6 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_6, 1));
		int32_t L_7 = __this->____size;
		__this->____size = ((int32_t)il2cpp_codegen_add(L_7, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Stack_1_ThrowForEmptyStack_m12EE5EEA0D599F83F68A7D47079EE0F8F741B40E_gshared (Stack_1_tAE809352224B7904D166288D1476FD4C2ED0D631* __this, const RuntimeMethod* method) 
{
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_0 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral95F0EE30865D503A05F1D329BC3FED0946B65C24)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Stack_1__ctor_m07307D2825486BBEAEBDCA3BF1FA677FF12C4DAA_gshared (Stack_1_t19851BEF370D35BCE2A6C3848C5148B09113067C* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		DispatchContextU5BU5D_t23932F8BEADFC827A9CA5636867F6721AD971757* L_0;
		L_0 = Array_Empty_TisDispatchContext_tFA37790A5FF30508B0146B79E4FF1880EB82E455_mF01AA806CE655E3ABAF52F0F9DD7CC113403C7E2_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		__this->____array = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____array), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Stack_1__ctor_mB0B5AEDBEEA150AF78AF53CCB402D47E14049559_gshared (Stack_1_t19851BEF370D35BCE2A6C3848C5148B09113067C* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		int32_t L_0 = ___0_capacity;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0020;
		}
	}
	{
		int32_t L_1 = ___0_capacity;
		int32_t L_2 = L_1;
		RuntimeObject* L_3 = Box(il2cpp_defaults.int32_class, &L_2);
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_4 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_m60B543A63AC8692C28096003FBF2AD124B9D5B85(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC37D78082ACFC8DEE7B32D9351C6E433A074FEC7)), L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral38E3DBC7FC353425EF3A98DC8DAC6689AF5FD1BE)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, method);
	}

IL_0020:
	{
		int32_t L_5 = ___0_capacity;
		DispatchContextU5BU5D_t23932F8BEADFC827A9CA5636867F6721AD971757* L_6 = (DispatchContextU5BU5D_t23932F8BEADFC827A9CA5636867F6721AD971757*)(DispatchContextU5BU5D_t23932F8BEADFC827A9CA5636867F6721AD971757*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 3), (uint32_t)L_5);
		__this->____array = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____array), (void*)L_6);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Stack_1_get_Count_m7C01B268906340C7147DED24513E61BBB0543B82_gshared (Stack_1_t19851BEF370D35BCE2A6C3848C5148B09113067C* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Stack_1_System_Collections_ICollection_get_IsSynchronized_m237A20184D889BA937ADED06538E9E3DADCCEA68_gshared (Stack_1_t19851BEF370D35BCE2A6C3848C5148B09113067C* __this, const RuntimeMethod* method) 
{
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Stack_1_System_Collections_ICollection_get_SyncRoot_mEC09FC9EE67F13443FD4A6CE0CC7BF20CEB32A27_gshared (Stack_1_t19851BEF370D35BCE2A6C3848C5148B09113067C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->____syncRoot;
		if (L_0)
		{
			goto IL_001a;
		}
	}
	{
		RuntimeObject** L_1 = (RuntimeObject**)(&__this->____syncRoot);
		RuntimeObject* L_2 = (RuntimeObject*)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(L_2, NULL);
		RuntimeObject* L_3;
		L_3 = InterlockedCompareExchangeImpl<RuntimeObject*>(L_1, L_2, NULL);
	}

IL_001a:
	{
		RuntimeObject* L_4 = __this->____syncRoot;
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Stack_1_Clear_m28D3E5F04F375E186D724722C828ECCFAC8BBC2D_gshared (Stack_1_t19851BEF370D35BCE2A6C3848C5148B09113067C* __this, const RuntimeMethod* method) 
{
	{
	}
	{
		DispatchContextU5BU5D_t23932F8BEADFC827A9CA5636867F6721AD971757* L_0 = __this->____array;
		int32_t L_1 = __this->____size;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_0, 0, L_1, NULL);
	}

IL_0019:
	{
		__this->____size = 0;
		int32_t L_2 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_2, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Stack_1_Contains_m8195F8FDC9D73301518C8E425A04D3B1F9B9D1CC_gshared (Stack_1_t19851BEF370D35BCE2A6C3848C5148B09113067C* __this, DispatchContext_tFA37790A5FF30508B0146B79E4FF1880EB82E455 ___0_item, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		if (!L_0)
		{
			goto IL_0023;
		}
	}
	{
		DispatchContextU5BU5D_t23932F8BEADFC827A9CA5636867F6721AD971757* L_1 = __this->____array;
		DispatchContext_tFA37790A5FF30508B0146B79E4FF1880EB82E455 L_2 = ___0_item;
		int32_t L_3 = __this->____size;
		int32_t L_4;
		L_4 = Array_LastIndexOf_TisDispatchContext_tFA37790A5FF30508B0146B79E4FF1880EB82E455_m166E18AA28DAF024602CFD2C985E5DEF44EE4A3F(L_1, L_2, ((int32_t)il2cpp_codegen_subtract(L_3, 1)), il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		return (bool)((((int32_t)((((int32_t)L_4) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_0023:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Stack_1_System_Collections_ICollection_CopyTo_m621B35BD7886C3C76C6442EB492AEF0A88A7F976_gshared (Stack_1_t19851BEF370D35BCE2A6C3848C5148B09113067C* __this, RuntimeArray* ___0_array, int32_t ___1_arrayIndex, const RuntimeMethod* method) 
{
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeArray* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		RuntimeArray* L_2 = ___0_array;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(L_2, NULL);
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0027;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_4 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral967D403A541A1026A83D548E5AD5CA800AD4EFB5)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, method);
	}

IL_0027:
	{
		RuntimeArray* L_5 = ___0_array;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(L_5, 0, NULL);
		if (!L_6)
		{
			goto IL_0040;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_7 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_7, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral6195D7DA68D16D4985AD1A1B4FD2841A43CDDE70)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, method);
	}

IL_0040:
	{
		int32_t L_8 = ___1_arrayIndex;
		if ((((int32_t)L_8) < ((int32_t)0)))
		{
			goto IL_004d;
		}
	}
	{
		int32_t L_9 = ___1_arrayIndex;
		RuntimeArray* L_10 = ___0_array;
		NullCheck(L_10);
		int32_t L_11;
		L_11 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(L_10, NULL);
		if ((((int32_t)L_9) <= ((int32_t)L_11)))
		{
			goto IL_0063;
		}
	}

IL_004d:
	{
		int32_t L_12 = ___1_arrayIndex;
		int32_t L_13 = L_12;
		RuntimeObject* L_14 = Box(il2cpp_defaults.int32_class, &L_13);
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_15 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_m60B543A63AC8692C28096003FBF2AD124B9D5B85(L_15, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC00660333703C551EA80371B54D0ADCEB74C33B4)), L_14, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral569FEAE6AEE421BCD8D24F22865E84F808C2A1E4)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_15, method);
	}

IL_0063:
	{
		RuntimeArray* L_16 = ___0_array;
		NullCheck(L_16);
		int32_t L_17;
		L_17 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(L_16, NULL);
		int32_t L_18 = ___1_arrayIndex;
		int32_t L_19 = __this->____size;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_17, L_18))) >= ((int32_t)L_19)))
		{
			goto IL_007e;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_20 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_20, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral7F4C724BD10943E8B0B17A6E069F992E219EF5E8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_20, method);
	}

IL_007e:
	{
	}
	try
	{
		DispatchContextU5BU5D_t23932F8BEADFC827A9CA5636867F6721AD971757* L_21 = __this->____array;
		RuntimeArray* L_22 = ___0_array;
		int32_t L_23 = ___1_arrayIndex;
		int32_t L_24 = __this->____size;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_21, 0, L_22, L_23, L_24, NULL);
		RuntimeArray* L_25 = ___0_array;
		int32_t L_26 = ___1_arrayIndex;
		int32_t L_27 = __this->____size;
		Array_Reverse_mE788006243D34C654D7DDEF13E2D9E7B129AF8AD(L_25, L_26, L_27, NULL);
		goto IL_00b3;
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00a2;
		}
		throw e;
	}

CATCH_00a2:
	{
		ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1* L_28 = ((ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*)IL2CPP_GET_ACTIVE_EXCEPTION(ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*));;
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_29 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_29, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralBD0381A992FDF4F7DA60E5D83689FE7FF6309CB8)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_29, method);
	}

IL_00b3:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t8E71E3162A14D26A339D3561D43523590F594C86 Stack_1_GetEnumerator_m8BE5245D87ECB05F33204ECBFD07303C2E6815D9_gshared (Stack_1_t19851BEF370D35BCE2A6C3848C5148B09113067C* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t8E71E3162A14D26A339D3561D43523590F594C86 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_mA289AC608581803432D7E23F7CB15CA69C67E3A4((&L_0), __this, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Stack_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m9C9388020CF10B36F3517EE151CE5BA747A4047E_gshared (Stack_1_t19851BEF370D35BCE2A6C3848C5148B09113067C* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t8E71E3162A14D26A339D3561D43523590F594C86 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_mA289AC608581803432D7E23F7CB15CA69C67E3A4((&L_0), __this, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		Enumerator_t8E71E3162A14D26A339D3561D43523590F594C86 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 7), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Stack_1_System_Collections_IEnumerable_GetEnumerator_m53EC09C0A6A2F55169D8E35EA1DDB6746AE96696_gshared (Stack_1_t19851BEF370D35BCE2A6C3848C5148B09113067C* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t8E71E3162A14D26A339D3561D43523590F594C86 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_mA289AC608581803432D7E23F7CB15CA69C67E3A4((&L_0), __this, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		Enumerator_t8E71E3162A14D26A339D3561D43523590F594C86 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 7), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DispatchContext_tFA37790A5FF30508B0146B79E4FF1880EB82E455 Stack_1_Peek_m9687DC4CE5E663DE105FDCBD6C1A97E214908F4C_gshared (Stack_1_t19851BEF370D35BCE2A6C3848C5148B09113067C* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	DispatchContextU5BU5D_t23932F8BEADFC827A9CA5636867F6721AD971757* V_1 = NULL;
	{
		int32_t L_0 = __this->____size;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_0, 1));
		DispatchContextU5BU5D_t23932F8BEADFC827A9CA5636867F6721AD971757* L_1 = __this->____array;
		V_1 = L_1;
		int32_t L_2 = V_0;
		DispatchContextU5BU5D_t23932F8BEADFC827A9CA5636867F6721AD971757* L_3 = V_1;
		NullCheck(L_3);
		if ((!(((uint32_t)L_2) >= ((uint32_t)((int32_t)(((RuntimeArray*)L_3)->max_length))))))
		{
			goto IL_001c;
		}
	}
	{
		Stack_1_ThrowForEmptyStack_m492E2D988124B082B0EF0A9837B0A102C39E07C5(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
	}

IL_001c:
	{
		DispatchContextU5BU5D_t23932F8BEADFC827A9CA5636867F6721AD971757* L_4 = V_1;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		DispatchContext_tFA37790A5FF30508B0146B79E4FF1880EB82E455 L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		return L_7;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DispatchContext_tFA37790A5FF30508B0146B79E4FF1880EB82E455 Stack_1_Pop_m585D99407D5E97D94651968AA90D35E373CF3DB2_gshared (Stack_1_t19851BEF370D35BCE2A6C3848C5148B09113067C* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	DispatchContextU5BU5D_t23932F8BEADFC827A9CA5636867F6721AD971757* V_1 = NULL;
	DispatchContext_tFA37790A5FF30508B0146B79E4FF1880EB82E455 V_2;
	memset((&V_2), 0, sizeof(V_2));
	DispatchContext_tFA37790A5FF30508B0146B79E4FF1880EB82E455 G_B4_0;
	memset((&G_B4_0), 0, sizeof(G_B4_0));
	DispatchContext_tFA37790A5FF30508B0146B79E4FF1880EB82E455 G_B3_0;
	memset((&G_B3_0), 0, sizeof(G_B3_0));
	{
		int32_t L_0 = __this->____size;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_0, 1));
		DispatchContextU5BU5D_t23932F8BEADFC827A9CA5636867F6721AD971757* L_1 = __this->____array;
		V_1 = L_1;
		int32_t L_2 = V_0;
		DispatchContextU5BU5D_t23932F8BEADFC827A9CA5636867F6721AD971757* L_3 = V_1;
		NullCheck(L_3);
		if ((!(((uint32_t)L_2) >= ((uint32_t)((int32_t)(((RuntimeArray*)L_3)->max_length))))))
		{
			goto IL_001c;
		}
	}
	{
		Stack_1_ThrowForEmptyStack_m492E2D988124B082B0EF0A9837B0A102C39E07C5(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
	}

IL_001c:
	{
		int32_t L_4 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_4, 1));
		int32_t L_5 = V_0;
		__this->____size = L_5;
		DispatchContextU5BU5D_t23932F8BEADFC827A9CA5636867F6721AD971757* L_6 = V_1;
		int32_t L_7 = V_0;
		NullCheck(L_6);
		int32_t L_8 = L_7;
		DispatchContext_tFA37790A5FF30508B0146B79E4FF1880EB82E455 L_9 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		G_B3_0 = L_9;
	}
	{
		DispatchContextU5BU5D_t23932F8BEADFC827A9CA5636867F6721AD971757* L_10 = V_1;
		int32_t L_11 = V_0;
		il2cpp_codegen_initobj((&V_2), sizeof(DispatchContext_tFA37790A5FF30508B0146B79E4FF1880EB82E455));
		DispatchContext_tFA37790A5FF30508B0146B79E4FF1880EB82E455 L_12 = V_2;
		NullCheck(L_10);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(L_11), (DispatchContext_tFA37790A5FF30508B0146B79E4FF1880EB82E455)L_12);
		G_B4_0 = G_B3_0;
	}

IL_004f:
	{
		return G_B4_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Stack_1_TryPop_m1DBD7A14184FE9EF21DAF8AD4C84A424908F3F3B_gshared (Stack_1_t19851BEF370D35BCE2A6C3848C5148B09113067C* __this, DispatchContext_tFA37790A5FF30508B0146B79E4FF1880EB82E455* ___0_result, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	DispatchContextU5BU5D_t23932F8BEADFC827A9CA5636867F6721AD971757* V_1 = NULL;
	DispatchContext_tFA37790A5FF30508B0146B79E4FF1880EB82E455 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0 = __this->____size;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_0, 1));
		DispatchContextU5BU5D_t23932F8BEADFC827A9CA5636867F6721AD971757* L_1 = __this->____array;
		V_1 = L_1;
		int32_t L_2 = V_0;
		DispatchContextU5BU5D_t23932F8BEADFC827A9CA5636867F6721AD971757* L_3 = V_1;
		NullCheck(L_3);
		if ((!(((uint32_t)L_2) >= ((uint32_t)((int32_t)(((RuntimeArray*)L_3)->max_length))))))
		{
			goto IL_001f;
		}
	}
	{
		DispatchContext_tFA37790A5FF30508B0146B79E4FF1880EB82E455* L_4 = ___0_result;
		il2cpp_codegen_initobj(L_4, sizeof(DispatchContext_tFA37790A5FF30508B0146B79E4FF1880EB82E455));
		return (bool)0;
	}

IL_001f:
	{
		int32_t L_5 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_5, 1));
		int32_t L_6 = V_0;
		__this->____size = L_6;
		DispatchContext_tFA37790A5FF30508B0146B79E4FF1880EB82E455* L_7 = ___0_result;
		DispatchContextU5BU5D_t23932F8BEADFC827A9CA5636867F6721AD971757* L_8 = V_1;
		int32_t L_9 = V_0;
		NullCheck(L_8);
		int32_t L_10 = L_9;
		DispatchContext_tFA37790A5FF30508B0146B79E4FF1880EB82E455 L_11 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		*(DispatchContext_tFA37790A5FF30508B0146B79E4FF1880EB82E455*)L_7 = L_11;
		Il2CppCodeGenWriteBarrier((void**)&(((DispatchContext_tFA37790A5FF30508B0146B79E4FF1880EB82E455*)L_7)->___m_Queue), (void*)NULL);
	}
	{
		DispatchContextU5BU5D_t23932F8BEADFC827A9CA5636867F6721AD971757* L_12 = V_1;
		int32_t L_13 = V_0;
		il2cpp_codegen_initobj((&V_2), sizeof(DispatchContext_tFA37790A5FF30508B0146B79E4FF1880EB82E455));
		DispatchContext_tFA37790A5FF30508B0146B79E4FF1880EB82E455 L_14 = V_2;
		NullCheck(L_12);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(L_13), (DispatchContext_tFA37790A5FF30508B0146B79E4FF1880EB82E455)L_14);
	}

IL_0058:
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Stack_1_Push_mE92767D8ADDE601F5D2A86411BF7D0CA9EBF7163_gshared (Stack_1_t19851BEF370D35BCE2A6C3848C5148B09113067C* __this, DispatchContext_tFA37790A5FF30508B0146B79E4FF1880EB82E455 ___0_item, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	DispatchContextU5BU5D_t23932F8BEADFC827A9CA5636867F6721AD971757* V_1 = NULL;
	{
		int32_t L_0 = __this->____size;
		V_0 = L_0;
		DispatchContextU5BU5D_t23932F8BEADFC827A9CA5636867F6721AD971757* L_1 = __this->____array;
		V_1 = L_1;
		int32_t L_2 = V_0;
		DispatchContextU5BU5D_t23932F8BEADFC827A9CA5636867F6721AD971757* L_3 = V_1;
		NullCheck(L_3);
		if ((!(((uint32_t)L_2) < ((uint32_t)((int32_t)(((RuntimeArray*)L_3)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		DispatchContextU5BU5D_t23932F8BEADFC827A9CA5636867F6721AD971757* L_4 = V_1;
		int32_t L_5 = V_0;
		DispatchContext_tFA37790A5FF30508B0146B79E4FF1880EB82E455 L_6 = ___0_item;
		NullCheck(L_4);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(L_5), (DispatchContext_tFA37790A5FF30508B0146B79E4FF1880EB82E455)L_6);
		int32_t L_7 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_7, 1));
		int32_t L_8 = V_0;
		__this->____size = ((int32_t)il2cpp_codegen_add(L_8, 1));
		return;
	}

IL_0034:
	{
		DispatchContext_tFA37790A5FF30508B0146B79E4FF1880EB82E455 L_9 = ___0_item;
		Stack_1_PushWithResize_m3BD8BDA046D1582C869FF68FB773F174F369D00C(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void Stack_1_PushWithResize_m3BD8BDA046D1582C869FF68FB773F174F369D00C_gshared (Stack_1_t19851BEF370D35BCE2A6C3848C5148B09113067C* __this, DispatchContext_tFA37790A5FF30508B0146B79E4FF1880EB82E455 ___0_item, const RuntimeMethod* method) 
{
	DispatchContextU5BU5D_t23932F8BEADFC827A9CA5636867F6721AD971757** G_B2_0 = NULL;
	DispatchContextU5BU5D_t23932F8BEADFC827A9CA5636867F6721AD971757** G_B1_0 = NULL;
	int32_t G_B3_0 = 0;
	DispatchContextU5BU5D_t23932F8BEADFC827A9CA5636867F6721AD971757** G_B3_1 = NULL;
	{
		DispatchContextU5BU5D_t23932F8BEADFC827A9CA5636867F6721AD971757** L_0 = (DispatchContextU5BU5D_t23932F8BEADFC827A9CA5636867F6721AD971757**)(&__this->____array);
		DispatchContextU5BU5D_t23932F8BEADFC827A9CA5636867F6721AD971757* L_1 = __this->____array;
		NullCheck(L_1);
		if (!(((RuntimeArray*)L_1)->max_length))
		{
			G_B2_0 = L_0;
			goto IL_001b;
		}
		G_B1_0 = L_0;
	}
	{
		DispatchContextU5BU5D_t23932F8BEADFC827A9CA5636867F6721AD971757* L_2 = __this->____array;
		NullCheck(L_2);
		G_B3_0 = ((int32_t)il2cpp_codegen_multiply(2, ((int32_t)(((RuntimeArray*)L_2)->max_length))));
		G_B3_1 = G_B1_0;
		goto IL_001c;
	}

IL_001b:
	{
		G_B3_0 = 4;
		G_B3_1 = G_B2_0;
	}

IL_001c:
	{
		Array_Resize_TisDispatchContext_tFA37790A5FF30508B0146B79E4FF1880EB82E455_m247E9FF1D240EF2FA626997384B01A8033DBED23(G_B3_1, G_B3_0, il2cpp_rgctx_method(method->klass->rgctx_data, 13));
		DispatchContextU5BU5D_t23932F8BEADFC827A9CA5636867F6721AD971757* L_3 = __this->____array;
		int32_t L_4 = __this->____size;
		DispatchContext_tFA37790A5FF30508B0146B79E4FF1880EB82E455 L_5 = ___0_item;
		NullCheck(L_3);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(L_4), (DispatchContext_tFA37790A5FF30508B0146B79E4FF1880EB82E455)L_5);
		int32_t L_6 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_6, 1));
		int32_t L_7 = __this->____size;
		__this->____size = ((int32_t)il2cpp_codegen_add(L_7, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Stack_1_ThrowForEmptyStack_m492E2D988124B082B0EF0A9837B0A102C39E07C5_gshared (Stack_1_t19851BEF370D35BCE2A6C3848C5148B09113067C* __this, const RuntimeMethod* method) 
{
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_0 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral95F0EE30865D503A05F1D329BC3FED0946B65C24)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint8_t* Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline (RuntimeArray* __this, const RuntimeMethod* method) 
{
	{
		RawData_t37CAF2D3F74B7723974ED7CEEE9B297D8FA64ED0* L_0;
		L_0 = il2cpp_unsafe_as<RawData_t37CAF2D3F74B7723974ED7CEEE9B297D8FA64ED0*>(__this);
		NullCheck(L_0);
		uint8_t* L_1 = (uint8_t*)(&L_0->___Data);
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Span_1_get_Length_mD173AF2E3688317C8AB9621F7626A2A34DE8F56B_gshared_inline (Span_1_t3C28155FFD2FA88D962FCE88A14C370626303A8D* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____length;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_mCBA8EFCAA8102765E34B993A8177EE752D80890F_gshared_inline (ReadOnlySpan_1_tA2EFC117098BD2B38ADBF809AA976D9F3C13654F* __this, uint16_t* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		uint16_t* L_0 = ___0_ptr;
		ByReference_1_t946C8F453CAF957A5339893AAA7FFF61CC68CECE L_1;
		memset((&L_1), 0, sizeof(L_1));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_1), L_0);
		__this->____pointer = L_1;
		int32_t L_2 = ___1_length;
		__this->____length = L_2;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_m458FB27AA0EB3527A73C9D6305D452A062D2ABC4_gshared_inline (Span_1_t3C28155FFD2FA88D962FCE88A14C370626303A8D* __this, uint16_t* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		uint16_t* L_0 = ___0_ptr;
		ByReference_1_t946C8F453CAF957A5339893AAA7FFF61CC68CECE L_1;
		memset((&L_1), 0, sizeof(L_1));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_1), L_0);
		__this->____pointer = L_1;
		int32_t L_2 = ___1_length;
		__this->____length = L_2;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* Array_Empty_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_mA9FE4AE132DC76B02E8B39B5052CBA643CFF7220_gshared_inline (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 2));
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_0 = ((EmptyArray_1_tA0524EFBAA750B3D1DCF60FE6F2B25DE798675AD_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 2)))->___Value;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_mC892A665B48BA9CD149DA76F26EA3607C7859792_gshared_inline (Span_1_t3C28155FFD2FA88D962FCE88A14C370626303A8D* __this, UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* ___0_array, const RuntimeMethod* method) 
{
	uint16_t V_0 = 0;
	{
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_000b;
		}
	}
	{
		il2cpp_codegen_initobj(__this, sizeof(Span_1_t3C28155FFD2FA88D962FCE88A14C370626303A8D));
		return;
	}

IL_000b:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(uint16_t));
		goto IL_0037;
	}

IL_0037:
	{
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_2 = ___0_array;
		NullCheck((RuntimeArray*)L_2);
		uint8_t* L_3;
		L_3 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_2, NULL);
		uint16_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint16_t>(L_3);
		ByReference_1_t946C8F453CAF957A5339893AAA7FFF61CC68CECE L_5;
		memset((&L_5), 0, sizeof(L_5));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_5), L_4);
		__this->____pointer = L_5;
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_6 = ___0_array;
		NullCheck(L_6);
		__this->____length = ((int32_t)(((RuntimeArray*)L_6)->max_length));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Span_1_get_Length_mC3EBBD1CE9C5025EB30AFDE84FCCCFB3FE794EC5_gshared_inline (Span_1_tC47CA3FDABAC657528EC838C3FEB05AA0D4480EA* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____length;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_mFEB9E8BCBC125E065C80C12FC6037D87DC6FA2FC_gshared_inline (ReadOnlySpan_1_t57F4BBC957039E8E904443D25F3A78AE60DC94B4* __this, uint32_t* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		uint32_t* L_0 = ___0_ptr;
		ByReference_1_tFE9AF4BD221B916FA525C43965FD23DB6BE5AC45 L_1;
		memset((&L_1), 0, sizeof(L_1));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_1), L_0);
		__this->____pointer = L_1;
		int32_t L_2 = ___1_length;
		__this->____length = L_2;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_m44A796B80A3B7B5E228B0865F02AC548FA1E7567_gshared_inline (Span_1_tC47CA3FDABAC657528EC838C3FEB05AA0D4480EA* __this, uint32_t* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		uint32_t* L_0 = ___0_ptr;
		ByReference_1_tFE9AF4BD221B916FA525C43965FD23DB6BE5AC45 L_1;
		memset((&L_1), 0, sizeof(L_1));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_1), L_0);
		__this->____pointer = L_1;
		int32_t L_2 = ___1_length;
		__this->____length = L_2;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* Array_Empty_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_m8B0170B3C9368D9BDB90A666E2DF5549423C160C_gshared_inline (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 2));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_0 = ((EmptyArray_1_t77BFDB090CFC6AE661834F0BD4ED43833F4F079D_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 2)))->___Value;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_m1161A3B3850C22A54C838C62FB009355039C28ED_gshared_inline (Span_1_tC47CA3FDABAC657528EC838C3FEB05AA0D4480EA* __this, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___0_array, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_000b;
		}
	}
	{
		il2cpp_codegen_initobj(__this, sizeof(Span_1_tC47CA3FDABAC657528EC838C3FEB05AA0D4480EA));
		return;
	}

IL_000b:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(uint32_t));
		goto IL_0037;
	}

IL_0037:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_2 = ___0_array;
		NullCheck((RuntimeArray*)L_2);
		uint8_t* L_3;
		L_3 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_2, NULL);
		uint32_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint32_t>(L_3);
		ByReference_1_tFE9AF4BD221B916FA525C43965FD23DB6BE5AC45 L_5;
		memset((&L_5), 0, sizeof(L_5));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_5), L_4);
		__this->____pointer = L_5;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_6 = ___0_array;
		NullCheck(L_6);
		__this->____length = ((int32_t)(((RuntimeArray*)L_6)->max_length));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Span_1_get_Length_m62F446B5508B032A22CD1BA21D998626E6B8A5CC_gshared_inline (Span_1_t2EECFBFD7BF99470FF5E3884902CE388B17BBDD3* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____length;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_mC03446F4F48AEBD20B80591766ACE9CE79048BCE_gshared_inline (ReadOnlySpan_1_tD579EC24AE7548EFE16428C9DC0EE0423C0FDA0F* __this, uint64_t* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		uint64_t* L_0 = ___0_ptr;
		ByReference_1_tC177AF8388672C5485D5AAD1C913963A8C7B4548 L_1;
		memset((&L_1), 0, sizeof(L_1));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_1), L_0);
		__this->____pointer = L_1;
		int32_t L_2 = ___1_length;
		__this->____length = L_2;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_m3C68BA129DD44A3486C6B57A99412947A16855F6_gshared_inline (Span_1_t2EECFBFD7BF99470FF5E3884902CE388B17BBDD3* __this, uint64_t* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		uint64_t* L_0 = ___0_ptr;
		ByReference_1_tC177AF8388672C5485D5AAD1C913963A8C7B4548 L_1;
		memset((&L_1), 0, sizeof(L_1));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_1), L_0);
		__this->____pointer = L_1;
		int32_t L_2 = ___1_length;
		__this->____length = L_2;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* Array_Empty_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_m696D3DE2D89DD613C8C0EB15BE627EABEF780255_gshared_inline (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 2));
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_0 = ((EmptyArray_1_tA1B9390A54D6283BFF40643DC2A697126A16E63B_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 2)))->___Value;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_mC83E2FCB4929477ACCB736B25B9E2F89FF2A07CF_gshared_inline (Span_1_t2EECFBFD7BF99470FF5E3884902CE388B17BBDD3* __this, UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___0_array, const RuntimeMethod* method) 
{
	uint64_t V_0 = 0;
	{
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_000b;
		}
	}
	{
		il2cpp_codegen_initobj(__this, sizeof(Span_1_t2EECFBFD7BF99470FF5E3884902CE388B17BBDD3));
		return;
	}

IL_000b:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(uint64_t));
		goto IL_0037;
	}

IL_0037:
	{
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_2 = ___0_array;
		NullCheck((RuntimeArray*)L_2);
		uint8_t* L_3;
		L_3 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_2, NULL);
		uint64_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint64_t>(L_3);
		ByReference_1_tC177AF8388672C5485D5AAD1C913963A8C7B4548 L_5;
		memset((&L_5), 0, sizeof(L_5));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_5), L_4);
		__this->____pointer = L_5;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_6 = ___0_array;
		NullCheck(L_6);
		__this->____length = ((int32_t)(((RuntimeArray*)L_6)->max_length));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Span_1_get_Length_mFBDFEEEF1A619162D612EC6564DE47BB0A018FD9_gshared_inline (Span_1_t176257933B4F95507A92292ED5363CE3EFE12BB5* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____length;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_m0FEF0E91D60DF5F8905D4DAB78CEB48CDF99EFAA_gshared_inline (ReadOnlySpan_1_t30635DB490E7110B945ABB8301B19F8955AD4B64* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_0 = ___0_ptr;
		ByReference_1_tC00E272CA69BF0EE3939D1F6DB60E788290A8313 L_1;
		memset((&L_1), 0, sizeof(L_1));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_1), L_0);
		__this->____pointer = L_1;
		int32_t L_2 = ___1_length;
		__this->____length = L_2;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_m56BE0F54100AF7686F960CA4E18540A35B12420E_gshared_inline (Span_1_t176257933B4F95507A92292ED5363CE3EFE12BB5* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_0 = ___0_ptr;
		ByReference_1_tC00E272CA69BF0EE3939D1F6DB60E788290A8313 L_1;
		memset((&L_1), 0, sizeof(L_1));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_1), L_0);
		__this->____pointer = L_1;
		int32_t L_2 = ___1_length;
		__this->____length = L_2;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* Array_Empty_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_mD846707560FDEBAA9B2BE9F40C7BE2F42A59BAA9_gshared_inline (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 2));
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_0 = ((EmptyArray_1_t541233638A05830B22F809CD9B22404F5D2777BC_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 2)))->___Value;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_m0F2A60856E23C8A9DC58E03191363DF4E8A6F1B3_gshared_inline (Span_1_t176257933B4F95507A92292ED5363CE3EFE12BB5* __this, Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___0_array, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_000b;
		}
	}
	{
		il2cpp_codegen_initobj(__this, sizeof(Span_1_t176257933B4F95507A92292ED5363CE3EFE12BB5));
		return;
	}

IL_000b:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7));
		goto IL_0037;
	}

IL_0037:
	{
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_2 = ___0_array;
		NullCheck((RuntimeArray*)L_2);
		uint8_t* L_3;
		L_3 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_2, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_4;
		L_4 = il2cpp_unsafe_as_ref<Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7>(L_3);
		ByReference_1_tC00E272CA69BF0EE3939D1F6DB60E788290A8313 L_5;
		memset((&L_5), 0, sizeof(L_5));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_5), L_4);
		__this->____pointer = L_5;
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_6 = ___0_array;
		NullCheck(L_6);
		__this->____length = ((int32_t)(((RuntimeArray*)L_6)->max_length));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Span_1_get_Length_m556440A32F0A1EB65C95120CEC693B9AC4DFD52B_gshared_inline (Span_1_t460D4E78469192619B0075C15897A6987393AAF9* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____length;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_m682BD3D57C99591BB5B14A415A7F8F4D5B14241F_gshared_inline (ReadOnlySpan_1_t8C2C24B6B10C9EAC8D8A8C92BED569A12615C2AE* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_0 = ___0_ptr;
		ByReference_1_t81E3F5607EE2CA97897E6361C9CAE9862DC3DED6 L_1;
		memset((&L_1), 0, sizeof(L_1));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_1), L_0);
		__this->____pointer = L_1;
		int32_t L_2 = ___1_length;
		__this->____length = L_2;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_m150E0E8C32CF01F22FFC539541D9F6EA05DB6967_gshared_inline (Span_1_t460D4E78469192619B0075C15897A6987393AAF9* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_0 = ___0_ptr;
		ByReference_1_t81E3F5607EE2CA97897E6361C9CAE9862DC3DED6 L_1;
		memset((&L_1), 0, sizeof(L_1));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_1), L_0);
		__this->____pointer = L_1;
		int32_t L_2 = ___1_length;
		__this->____length = L_2;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* Array_Empty_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_mFE64AD477B9A8397B2CCC3FD2565DCA5B2F0A1F6_gshared_inline (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 2));
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_0 = ((EmptyArray_1_tF91FBA61857F9D60B55FD121DEADC9788D1FE016_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 2)))->___Value;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_mCC34AC618271C9F9C196DA22BA5DB8C6D8AD477D_gshared_inline (Span_1_t460D4E78469192619B0075C15897A6987393AAF9* __this, Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___0_array, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_000b;
		}
	}
	{
		il2cpp_codegen_initobj(__this, sizeof(Span_1_t460D4E78469192619B0075C15897A6987393AAF9));
		return;
	}

IL_000b:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2));
		goto IL_0037;
	}

IL_0037:
	{
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_2 = ___0_array;
		NullCheck((RuntimeArray*)L_2);
		uint8_t* L_3;
		L_3 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_2, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_4;
		L_4 = il2cpp_unsafe_as_ref<Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2>(L_3);
		ByReference_1_t81E3F5607EE2CA97897E6361C9CAE9862DC3DED6 L_5;
		memset((&L_5), 0, sizeof(L_5));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_5), L_4);
		__this->____pointer = L_5;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_6 = ___0_array;
		NullCheck(L_6);
		__this->____length = ((int32_t)(((RuntimeArray*)L_6)->max_length));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Span_1_get_Length_m63B951643F7F819BFFB479C5BA2A8052CC19650C_gshared_inline (Span_1_t993DF21D9162C9A28F81991FA4EABACF87A3BAD1* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____length;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_m622AB9D2827B0280526D71584B733E49B439579B_gshared_inline (ReadOnlySpan_1_tBB5A0F9CEA726E10BE8D59F79D891AC9218E61F6* __this, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* L_0 = ___0_ptr;
		ByReference_1_t4244D12B217F7C5BB8CD15E4BCAD5F8865A82C39 L_1;
		memset((&L_1), 0, sizeof(L_1));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_1), L_0);
		__this->____pointer = L_1;
		int32_t L_2 = ___1_length;
		__this->____length = L_2;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_m1E1947C8E67BCAA48B27C9C86207CD561C1B9B4B_gshared_inline (Span_1_t993DF21D9162C9A28F81991FA4EABACF87A3BAD1* __this, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* L_0 = ___0_ptr;
		ByReference_1_t4244D12B217F7C5BB8CD15E4BCAD5F8865A82C39 L_1;
		memset((&L_1), 0, sizeof(L_1));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_1), L_0);
		__this->____pointer = L_1;
		int32_t L_2 = ___1_length;
		__this->____length = L_2;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* Array_Empty_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mC82FBEFAE1DCBACBA78974694D57EE7988F95DB8_gshared_inline (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 2));
		Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* L_0 = ((EmptyArray_1_tF700941B1D2574A82BF40EA9058FBF99EBE14C5E_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 2)))->___Value;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_mD3AD596A514C9F73EAFB0946FB4E0CCD88223C72_gshared_inline (Span_1_t993DF21D9162C9A28F81991FA4EABACF87A3BAD1* __this, Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* ___0_array, const RuntimeMethod* method) 
{
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_000b;
		}
	}
	{
		il2cpp_codegen_initobj(__this, sizeof(Span_1_t993DF21D9162C9A28F81991FA4EABACF87A3BAD1));
		return;
	}

IL_000b:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3));
		goto IL_0037;
	}

IL_0037:
	{
		Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* L_2 = ___0_array;
		NullCheck((RuntimeArray*)L_2);
		uint8_t* L_3;
		L_3 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_2, NULL);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* L_4;
		L_4 = il2cpp_unsafe_as_ref<Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3>(L_3);
		ByReference_1_t4244D12B217F7C5BB8CD15E4BCAD5F8865A82C39 L_5;
		memset((&L_5), 0, sizeof(L_5));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_5), L_4);
		__this->____pointer = L_5;
		Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* L_6 = ___0_array;
		NullCheck(L_6);
		__this->____length = ((int32_t)(((RuntimeArray*)L_6)->max_length));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Span_1_get_Length_m04EC398D32B0C4B1E3C1C9FC225757A0414FEC91_gshared_inline (Span_1_tC33D382E526B4F8C6EDCA373AD4345BA58673D8E* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____length;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_m7E238E2EA0773CDB439F87E732C9E7AD0CF67AEF_gshared_inline (ReadOnlySpan_1_t63019D57052C95CA42C48E9757509354A8099A5A* __this, Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7* L_0 = ___0_ptr;
		ByReference_1_tDB2E57963CDD5776F8F033EAE071CD9E7DB1359B L_1;
		memset((&L_1), 0, sizeof(L_1));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_1), L_0);
		__this->____pointer = L_1;
		int32_t L_2 = ___1_length;
		__this->____length = L_2;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_m988929F65D47DD66BF1FE5A786F9CEC49F6BED29_gshared_inline (Span_1_tC33D382E526B4F8C6EDCA373AD4345BA58673D8E* __this, Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7* L_0 = ___0_ptr;
		ByReference_1_tDB2E57963CDD5776F8F033EAE071CD9E7DB1359B L_1;
		memset((&L_1), 0, sizeof(L_1));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_1), L_0);
		__this->____pointer = L_1;
		int32_t L_2 = ___1_length;
		__this->____length = L_2;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR VertexU5BU5D_t2C3F4FF6AFD6D7E9DD7E1D69446FD8E8FC033185* Array_Empty_TisVertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7_mF047DEE22BA81CA2272F392E9BFA291FA2E76093_gshared_inline (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 2));
		VertexU5BU5D_t2C3F4FF6AFD6D7E9DD7E1D69446FD8E8FC033185* L_0 = ((EmptyArray_1_t5D64CDB38E9BC651C8728695C6D0949FFDA864CC_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 2)))->___Value;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_m4F2AA40C13302936EB20ECE7DB8B903A2D0FE8DE_gshared_inline (Span_1_tC33D382E526B4F8C6EDCA373AD4345BA58673D8E* __this, VertexU5BU5D_t2C3F4FF6AFD6D7E9DD7E1D69446FD8E8FC033185* ___0_array, const RuntimeMethod* method) 
{
	Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		VertexU5BU5D_t2C3F4FF6AFD6D7E9DD7E1D69446FD8E8FC033185* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_000b;
		}
	}
	{
		il2cpp_codegen_initobj(__this, sizeof(Span_1_tC33D382E526B4F8C6EDCA373AD4345BA58673D8E));
		return;
	}

IL_000b:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7));
		goto IL_0037;
	}

IL_0037:
	{
		VertexU5BU5D_t2C3F4FF6AFD6D7E9DD7E1D69446FD8E8FC033185* L_2 = ___0_array;
		NullCheck((RuntimeArray*)L_2);
		uint8_t* L_3;
		L_3 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_2, NULL);
		Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7* L_4;
		L_4 = il2cpp_unsafe_as_ref<Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7>(L_3);
		ByReference_1_tDB2E57963CDD5776F8F033EAE071CD9E7DB1359B L_5;
		memset((&L_5), 0, sizeof(L_5));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_5), L_4);
		__this->____pointer = L_5;
		VertexU5BU5D_t2C3F4FF6AFD6D7E9DD7E1D69446FD8E8FC033185* L_6 = ___0_array;
		NullCheck(L_6);
		__this->____length = ((int32_t)(((RuntimeArray*)L_6)->max_length));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Span_1_get_Length_m3CBE615865BBBA37C35E5624C623561A3CA7780F_gshared_inline (Span_1_tA5C1C4A28024D89A0077601B805025F51EFEE6E0* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____length;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_mB95FD3804E51521FC7AA12B18DE8BB2E8D05AA73_gshared_inline (ReadOnlySpan_1_tD6632037B9C2A00A111E1627D34F86F9A6611006* __this, VertexAttributeDescriptor_tD4231FBF57335465D16308D2A18E8E83D36BFA76* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		VertexAttributeDescriptor_tD4231FBF57335465D16308D2A18E8E83D36BFA76* L_0 = ___0_ptr;
		ByReference_1_tA646A142C83B2DEAE35CC1909169EA19C12201DC L_1;
		memset((&L_1), 0, sizeof(L_1));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_1), L_0);
		__this->____pointer = L_1;
		int32_t L_2 = ___1_length;
		__this->____length = L_2;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_mA5A972B3B527C1A511260B7C1FBE95AE7ACD76B3_gshared_inline (Span_1_tA5C1C4A28024D89A0077601B805025F51EFEE6E0* __this, VertexAttributeDescriptor_tD4231FBF57335465D16308D2A18E8E83D36BFA76* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		VertexAttributeDescriptor_tD4231FBF57335465D16308D2A18E8E83D36BFA76* L_0 = ___0_ptr;
		ByReference_1_tA646A142C83B2DEAE35CC1909169EA19C12201DC L_1;
		memset((&L_1), 0, sizeof(L_1));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_1), L_0);
		__this->____pointer = L_1;
		int32_t L_2 = ___1_length;
		__this->____length = L_2;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR VertexAttributeDescriptorU5BU5D_t5D10E60612F12777F59B7E33939F9075DB0E02B2* Array_Empty_TisVertexAttributeDescriptor_tD4231FBF57335465D16308D2A18E8E83D36BFA76_m998FF89091ADB380AE37B11326EBA4E636539F6C_gshared_inline (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 2));
		VertexAttributeDescriptorU5BU5D_t5D10E60612F12777F59B7E33939F9075DB0E02B2* L_0 = ((EmptyArray_1_t6EF0DB735E40251F6DDFDAA3DBCE13757E3630B7_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 2)))->___Value;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_m528FFD264C3687974947130266E4DEEA1C5DEA82_gshared_inline (Span_1_tA5C1C4A28024D89A0077601B805025F51EFEE6E0* __this, VertexAttributeDescriptorU5BU5D_t5D10E60612F12777F59B7E33939F9075DB0E02B2* ___0_array, const RuntimeMethod* method) 
{
	VertexAttributeDescriptor_tD4231FBF57335465D16308D2A18E8E83D36BFA76 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		VertexAttributeDescriptorU5BU5D_t5D10E60612F12777F59B7E33939F9075DB0E02B2* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_000b;
		}
	}
	{
		il2cpp_codegen_initobj(__this, sizeof(Span_1_tA5C1C4A28024D89A0077601B805025F51EFEE6E0));
		return;
	}

IL_000b:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(VertexAttributeDescriptor_tD4231FBF57335465D16308D2A18E8E83D36BFA76));
		goto IL_0037;
	}

IL_0037:
	{
		VertexAttributeDescriptorU5BU5D_t5D10E60612F12777F59B7E33939F9075DB0E02B2* L_2 = ___0_array;
		NullCheck((RuntimeArray*)L_2);
		uint8_t* L_3;
		L_3 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_2, NULL);
		VertexAttributeDescriptor_tD4231FBF57335465D16308D2A18E8E83D36BFA76* L_4;
		L_4 = il2cpp_unsafe_as_ref<VertexAttributeDescriptor_tD4231FBF57335465D16308D2A18E8E83D36BFA76>(L_3);
		ByReference_1_tA646A142C83B2DEAE35CC1909169EA19C12201DC L_5;
		memset((&L_5), 0, sizeof(L_5));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_5), L_4);
		__this->____pointer = L_5;
		VertexAttributeDescriptorU5BU5D_t5D10E60612F12777F59B7E33939F9075DB0E02B2* L_6 = ___0_array;
		NullCheck(L_6);
		__this->____length = ((int32_t)(((RuntimeArray*)L_6)->max_length));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Span_1_get_Length_m1AAE29E9DC0ED6DC7011806FFA7B6DE1641D8D01_gshared_inline (Span_1_t2C186CD9311CD6C5819274CD880486487FC65AD5* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____length;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_mCF2C3E165323BC112848DC8475FF32D4434B819A_gshared_inline (ReadOnlySpan_1_tC8B9E9EA565116C6C5FB765E32BA552A1E45E3C5* __this, XRNodeState_t683158812A1D80A6BC73DB97405BB0B795A9111A* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		XRNodeState_t683158812A1D80A6BC73DB97405BB0B795A9111A* L_0 = ___0_ptr;
		ByReference_1_tB7B4B385EF92E13A860B3C68B929D02E132405C8 L_1;
		memset((&L_1), 0, sizeof(L_1));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_1), L_0);
		__this->____pointer = L_1;
		int32_t L_2 = ___1_length;
		__this->____length = L_2;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_mD8BFA56022C77E5DA5F3235B53D8E55644D65039_gshared_inline (Span_1_t2C186CD9311CD6C5819274CD880486487FC65AD5* __this, XRNodeState_t683158812A1D80A6BC73DB97405BB0B795A9111A* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		XRNodeState_t683158812A1D80A6BC73DB97405BB0B795A9111A* L_0 = ___0_ptr;
		ByReference_1_tB7B4B385EF92E13A860B3C68B929D02E132405C8 L_1;
		memset((&L_1), 0, sizeof(L_1));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_1), L_0);
		__this->____pointer = L_1;
		int32_t L_2 = ___1_length;
		__this->____length = L_2;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR XRNodeStateU5BU5D_tEC64805398059D44C2FBA68AABAEFFB262B93845* Array_Empty_TisXRNodeState_t683158812A1D80A6BC73DB97405BB0B795A9111A_mAAEF2CC67A3D794C33C643E1B633B5E2CC2D05BF_gshared_inline (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 2));
		XRNodeStateU5BU5D_tEC64805398059D44C2FBA68AABAEFFB262B93845* L_0 = ((EmptyArray_1_tAE71C30AFA28CB4F4022694A3F5EC3B43AA73035_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 2)))->___Value;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_m18FED6B7D9CC641149EE6A8D26F4F83ACF26BC76_gshared_inline (Span_1_t2C186CD9311CD6C5819274CD880486487FC65AD5* __this, XRNodeStateU5BU5D_tEC64805398059D44C2FBA68AABAEFFB262B93845* ___0_array, const RuntimeMethod* method) 
{
	XRNodeState_t683158812A1D80A6BC73DB97405BB0B795A9111A V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		XRNodeStateU5BU5D_tEC64805398059D44C2FBA68AABAEFFB262B93845* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_000b;
		}
	}
	{
		il2cpp_codegen_initobj(__this, sizeof(Span_1_t2C186CD9311CD6C5819274CD880486487FC65AD5));
		return;
	}

IL_000b:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(XRNodeState_t683158812A1D80A6BC73DB97405BB0B795A9111A));
		goto IL_0037;
	}

IL_0037:
	{
		XRNodeStateU5BU5D_tEC64805398059D44C2FBA68AABAEFFB262B93845* L_2 = ___0_array;
		NullCheck((RuntimeArray*)L_2);
		uint8_t* L_3;
		L_3 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_2, NULL);
		XRNodeState_t683158812A1D80A6BC73DB97405BB0B795A9111A* L_4;
		L_4 = il2cpp_unsafe_as_ref<XRNodeState_t683158812A1D80A6BC73DB97405BB0B795A9111A>(L_3);
		ByReference_1_tB7B4B385EF92E13A860B3C68B929D02E132405C8 L_5;
		memset((&L_5), 0, sizeof(L_5));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_5), L_4);
		__this->____pointer = L_5;
		XRNodeStateU5BU5D_tEC64805398059D44C2FBA68AABAEFFB262B93845* L_6 = ___0_array;
		NullCheck(L_6);
		__this->____length = ((int32_t)(((RuntimeArray*)L_6)->max_length));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_mFA6EE52BCF39100AE30C79E73F0F972182D0CA2A_gshared_inline (ReadOnlySpan_1_tC416A5627E04F69CA2947A2A13F0A1DF096CABAC* __this, Il2CppFullySharedGenericAny* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		Il2CppFullySharedGenericAny* L_0 = ___0_ptr;
		ByReference_1_t607C1F3BC28B0E21B969461CDB0720FB01A82141 L_1;
		memset((&L_1), 0, sizeof(L_1));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_1), L_0);
		__this->____pointer = L_1;
		int32_t L_2 = ___1_length;
		__this->____length = L_2;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_mBA868F06359701D9950DEB1B10F52F848E9FF6DA_gshared_inline (Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54* __this, Il2CppFullySharedGenericAny* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		Il2CppFullySharedGenericAny* L_0 = ___0_ptr;
		ByReference_1_t607C1F3BC28B0E21B969461CDB0720FB01A82141 L_1;
		memset((&L_1), 0, sizeof(L_1));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_1), L_0);
		__this->____pointer = L_1;
		int32_t L_2 = ___1_length;
		__this->____length = L_2;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_m94A95CF4DF158FDF992CC13DA185B637335D84C6_gshared_inline (Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54* __this, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___0_array, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_tE7A3A53452487AB9BCB918AC1C5A795CF215388A = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2));
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_T_tE7A3A53452487AB9BCB918AC1C5A795CF215388A);
	Il2CppFullySharedGenericAny V_0 = alloca(SizeOf_T_tE7A3A53452487AB9BCB918AC1C5A795CF215388A);
	memset(V_0, 0, SizeOf_T_tE7A3A53452487AB9BCB918AC1C5A795CF215388A);
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_000b;
		}
	}
	{
		il2cpp_codegen_initobj(__this, sizeof(Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54));
		return;
	}

IL_000b:
	{
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_0, SizeOf_T_tE7A3A53452487AB9BCB918AC1C5A795CF215388A);
		il2cpp_codegen_memcpy(L_1, V_0, SizeOf_T_tE7A3A53452487AB9BCB918AC1C5A795CF215388A);
		bool L_2 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2), L_1);
		if (L_2)
		{
			goto IL_0037;
		}
	}
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_3 = ___0_array;
		NullCheck((RuntimeObject*)L_3);
		Type_t* L_4;
		L_4 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3((RuntimeObject*)L_3, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_5 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_6;
		L_6 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_5, NULL);
		bool L_7;
		L_7 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_4, L_6, NULL);
		if (!L_7)
		{
			goto IL_0037;
		}
	}
	{
		ThrowHelper_ThrowArrayTypeMismatchException_m781AD7A903FEA43FAE3137977E6BC5F9BAEBC590(NULL);
	}

IL_0037:
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_8 = ___0_array;
		NullCheck((RuntimeArray*)L_8);
		uint8_t* L_9;
		L_9 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_8, NULL);
		Il2CppFullySharedGenericAny* L_10;
		L_10 = il2cpp_unsafe_as_ref<Il2CppFullySharedGenericAny>(L_9);
		ByReference_1_t607C1F3BC28B0E21B969461CDB0720FB01A82141 L_11;
		memset((&L_11), 0, sizeof(L_11));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_11), L_10);
		__this->____pointer = L_11;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_12 = ___0_array;
		NullCheck(L_12);
		__this->____length = ((int32_t)(((RuntimeArray*)L_12)->max_length));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Span_1_get_Length_m9C7E8DECAA7368617C319A866C6A9E960F140BF7_gshared_inline (Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____length;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_m655719167577EE7B24CAAF5A9D0995E0259B6A84_gshared_inline (ReadOnlySpan_1_tEC1E786ADECA91AF68E558734868FBB77E05D964* __this, jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225* L_0 = ___0_ptr;
		ByReference_1_tE0748F88701C64E729013351521FC3EED28DE1DC L_1;
		memset((&L_1), 0, sizeof(L_1));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_1), L_0);
		__this->____pointer = L_1;
		int32_t L_2 = ___1_length;
		__this->____length = L_2;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_m1DA3ED274C046791E48A52F415066C7C86B031D1_gshared_inline (Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7* __this, jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225* L_0 = ___0_ptr;
		ByReference_1_tE0748F88701C64E729013351521FC3EED28DE1DC L_1;
		memset((&L_1), 0, sizeof(L_1));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_1), L_0);
		__this->____pointer = L_1;
		int32_t L_2 = ___1_length;
		__this->____length = L_2;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* Array_Empty_Tisjvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225_mD8B08917D1DC7B424036208C74F0A7A6EC83DAAE_gshared_inline (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 2));
		jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* L_0 = ((EmptyArray_1_tB610FBC2B87561A97224E274FC1699BCE50B2C60_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 2)))->___Value;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_m13E8571165DB8DB1A1909B44B65D4F220890AC8F_gshared_inline (Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7* __this, jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* ___0_array, const RuntimeMethod* method) 
{
	jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_000b;
		}
	}
	{
		il2cpp_codegen_initobj(__this, sizeof(Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7));
		return;
	}

IL_000b:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225));
		goto IL_0037;
	}

IL_0037:
	{
		jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* L_2 = ___0_array;
		NullCheck((RuntimeArray*)L_2);
		uint8_t* L_3;
		L_3 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_2, NULL);
		jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225* L_4;
		L_4 = il2cpp_unsafe_as_ref<jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225>(L_3);
		ByReference_1_tE0748F88701C64E729013351521FC3EED28DE1DC L_5;
		memset((&L_5), 0, sizeof(L_5));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_5), L_4);
		__this->____pointer = L_5;
		jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* L_6 = ___0_array;
		NullCheck(L_6);
		__this->____length = ((int32_t)(((RuntimeArray*)L_6)->max_length));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Span_1_get_Length_mA01E6EC21F87170B3B3290278278ED65E825C955_gshared_inline (Span_1_t73939D05896281666AE0EFF73CA9AA212455FFCB* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____length;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_m9AA852A2B6E942135C2D2B2DA01E26BA0126FA7A_gshared_inline (ReadOnlySpan_1_t16830A9FEE9E2F3C956F2B8444295F2393BFF6F6* __this, FilterUnion_t85E549621A2CC33D9102C62C6D82B0865FF80D03* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		FilterUnion_t85E549621A2CC33D9102C62C6D82B0865FF80D03* L_0 = ___0_ptr;
		ByReference_1_t8B2B9618906FBC2D3654AB3D0B4D1A067A3C9D4C L_1;
		memset((&L_1), 0, sizeof(L_1));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_1), L_0);
		__this->____pointer = L_1;
		int32_t L_2 = ___1_length;
		__this->____length = L_2;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_m9F0AD76F63C6307767B5992FA991815E4F0CF390_gshared_inline (Span_1_t73939D05896281666AE0EFF73CA9AA212455FFCB* __this, FilterUnion_t85E549621A2CC33D9102C62C6D82B0865FF80D03* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		FilterUnion_t85E549621A2CC33D9102C62C6D82B0865FF80D03* L_0 = ___0_ptr;
		ByReference_1_t8B2B9618906FBC2D3654AB3D0B4D1A067A3C9D4C L_1;
		memset((&L_1), 0, sizeof(L_1));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_1), L_0);
		__this->____pointer = L_1;
		int32_t L_2 = ___1_length;
		__this->____length = L_2;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR FilterUnionU5BU5D_t8778FBF9BC7FE3230BCB228346D0C62BC9A0A94D* Array_Empty_TisFilterUnion_t85E549621A2CC33D9102C62C6D82B0865FF80D03_mBDE28068FF66192DC2A98763302EFE1E164D3752_gshared_inline (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 2));
		FilterUnionU5BU5D_t8778FBF9BC7FE3230BCB228346D0C62BC9A0A94D* L_0 = ((EmptyArray_1_tA318588C5DED77377D0A402E2D318FA13329CEF0_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 2)))->___Value;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_m9CC9A801484C785265097B625A9BF84CB2E8AA44_gshared_inline (Span_1_t73939D05896281666AE0EFF73CA9AA212455FFCB* __this, FilterUnionU5BU5D_t8778FBF9BC7FE3230BCB228346D0C62BC9A0A94D* ___0_array, const RuntimeMethod* method) 
{
	FilterUnion_t85E549621A2CC33D9102C62C6D82B0865FF80D03 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		FilterUnionU5BU5D_t8778FBF9BC7FE3230BCB228346D0C62BC9A0A94D* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_000b;
		}
	}
	{
		il2cpp_codegen_initobj(__this, sizeof(Span_1_t73939D05896281666AE0EFF73CA9AA212455FFCB));
		return;
	}

IL_000b:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(FilterUnion_t85E549621A2CC33D9102C62C6D82B0865FF80D03));
		goto IL_0037;
	}

IL_0037:
	{
		FilterUnionU5BU5D_t8778FBF9BC7FE3230BCB228346D0C62BC9A0A94D* L_2 = ___0_array;
		NullCheck((RuntimeArray*)L_2);
		uint8_t* L_3;
		L_3 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_2, NULL);
		FilterUnion_t85E549621A2CC33D9102C62C6D82B0865FF80D03* L_4;
		L_4 = il2cpp_unsafe_as_ref<FilterUnion_t85E549621A2CC33D9102C62C6D82B0865FF80D03>(L_3);
		ByReference_1_t8B2B9618906FBC2D3654AB3D0B4D1A067A3C9D4C L_5;
		memset((&L_5), 0, sizeof(L_5));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_5), L_4);
		__this->____pointer = L_5;
		FilterUnionU5BU5D_t8778FBF9BC7FE3230BCB228346D0C62BC9A0A94D* L_6 = ___0_array;
		NullCheck(L_6);
		__this->____length = ((int32_t)(((RuntimeArray*)L_6)->max_length));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR SparselyPopulatedArrayFragment_1_t2D5B093B992E7F6EEEBD059E1065DFEDDBE906FC* SparselyPopulatedArrayAddInfo_1_get_Source_mBA043CE79666AA955D0FE4335ED3B82802E75C86_gshared_inline (SparselyPopulatedArrayAddInfo_1_tC49C525D3AFE80CB49D53650F40C9A49D4CDD19D* __this, const RuntimeMethod* method) 
{
	{
		SparselyPopulatedArrayFragment_1_t2D5B093B992E7F6EEEBD059E1065DFEDDBE906FC* L_0 = __this->____source;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t SparselyPopulatedArrayAddInfo_1_get_Index_mCBBF3F010A994612AC94DA417AB8D04A2C92B45A_gshared_inline (SparselyPopulatedArrayAddInfo_1_tC49C525D3AFE80CB49D53650F40C9A49D4CDD19D* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____index;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR HierarchyNodeU5BU5D_t58C5014EDF77A3B09F6BA5DEE95D32133F935DB2* Array_Empty_TisHierarchyNode_t6A6A738223CC5D7FB463CAF6F379C48726891704_m706F26FDE3D55E478AE8D88D0CA5AE597D17F184_gshared_inline (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 2));
		HierarchyNodeU5BU5D_t58C5014EDF77A3B09F6BA5DEE95D32133F935DB2* L_0 = ((EmptyArray_1_tEE36C124EB5EC64529EC1C4323F97E3809663182_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 2)))->___Value;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* Array_Empty_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m4D53E0E0F90F37AD5DBFD2DC75E52406F90C7ABC_gshared_inline (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 2));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_0 = ((EmptyArray_1_tE700FA647008891EF64C31436B092B253493667F_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 2)))->___Value;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Int32EnumU5BU5D_t87B7DB802810C38016332669039EF42C487A081F* Array_Empty_TisInt32Enum_tCBAC8BA2BFF3A845FA599F303093BBBA374B6F0C_m94E12BB613D748D2EEB9E1ABD961630D2F970385_gshared_inline (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 2));
		Int32EnumU5BU5D_t87B7DB802810C38016332669039EF42C487A081F* L_0 = ((EmptyArray_1_t0A27D963887A48FA040C718B868C2455F9AD84FA_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 2)))->___Value;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR LayoutHandleU5BU5D_tC6BCD3778F861245031A441921C9F04DD1CA1DCA* Array_Empty_TisLayoutHandle_tCFE060947B4EDC8F11BF5B480181493FB578BEB6_m7C8D9147C004C0FB177D8EEC050E7FCBA367EE66_gshared_inline (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 2));
		LayoutHandleU5BU5D_tC6BCD3778F861245031A441921C9F04DD1CA1DCA* L_0 = ((EmptyArray_1_tEDF8F9BBADA93E90FFD39F096CE25393DC80F9B0_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 2)))->___Value;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D* Array_Empty_TisMatrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_m36408D2B54D6A6519FAF5E5AD03F49ECECA09F2E_gshared_inline (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 2));
		Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D* L_0 = ((EmptyArray_1_t685951D47CCFA8F90AC66EE22811A68A045FB065_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 2)))->___Value;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_gshared_inline (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 2));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = ((EmptyArray_1_tDF0DD7256B115243AA6BD5558417387A734240EE_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 2)))->___Value;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RectU5BU5D_t83297CB2E61BDF9D27DCB1A3E5C78EBCE9F7C993* Array_Empty_TisRect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D_m85A5CFE26D5D127B03744735ED2B5FC30FCB1D59_gshared_inline (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 2));
		RectU5BU5D_t83297CB2E61BDF9D27DCB1A3E5C78EBCE9F7C993* L_0 = ((EmptyArray_1_t08704EABC4CA3368B0E6C088FF83A3BDE70484C8_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 2)))->___Value;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR TextureIdU5BU5D_t03041DBB5C72B7E6F5F694A36DC5FEA75432188A* Array_Empty_TisTextureId_tFF4B4AAE53408AB10B0B89CCA5F7B50CF2535E58_m3AE07A4CEAA2B2E2C2E03472BBF9F79BC799F948_gshared_inline (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 2));
		TextureIdU5BU5D_t03041DBB5C72B7E6F5F694A36DC5FEA75432188A* L_0 = ((EmptyArray_1_t21B6219CD4389EFB0E40E69BEC0AE2E54C1AA17A_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 2)))->___Value;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR MatchContextU5BU5D_t49C4E5DA5C1F9B06B211BE6F94AC6BD4D0ABCAE5* Array_Empty_TisMatchContext_t04110FFA271D89A23BC1918BE657634A7DC06253_m5BEAA64B8E1A4C758EDEA7D45C3177D7D8A6ADCF_gshared_inline (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 2));
		MatchContextU5BU5D_t49C4E5DA5C1F9B06B211BE6F94AC6BD4D0ABCAE5* L_0 = ((EmptyArray_1_tA32003E1DE04BE9767FD72E5DC4FEA8D1B834759_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 2)))->___Value;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR AllocSizeU5BU5D_tD7D6854D89AE82553F2200BC3B1F1A2D5455D9D8* Array_Empty_TisAllocSize_t906784497648EDC3F45F4EA656C6858238BA2F7C_m5DD7EE6CA7EC17B1B022C4780B85FFA1C0A0FA12_gshared_inline (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 2));
		AllocSizeU5BU5D_tD7D6854D89AE82553F2200BC3B1F1A2D5455D9D8* L_0 = ((EmptyArray_1_t3B3D5AF52AEDF79216E44946FD902C84652FE8AB_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 2)))->___Value;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR MaskMeshU5BU5D_t5C162FB3760E834B8B5B0C75F438C2D8106EC8D5* Array_Empty_TisMaskMesh_tBA4A29153655DB02C99D6BF624A64795A084806B_m20F2634088091DCC2AFF06339CE497560174D0A4_gshared_inline (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 2));
		MaskMeshU5BU5D_t5C162FB3760E834B8B5B0C75F438C2D8106EC8D5* L_0 = ((EmptyArray_1_t56E96B805AC512C5B6C4977E16E37E87E7F4B44D_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 2)))->___Value;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR DispatchContextU5BU5D_t23932F8BEADFC827A9CA5636867F6721AD971757* Array_Empty_TisDispatchContext_tFA37790A5FF30508B0146B79E4FF1880EB82E455_mF01AA806CE655E3ABAF52F0F9DD7CC113403C7E2_gshared_inline (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 2));
		DispatchContextU5BU5D_t23932F8BEADFC827A9CA5636867F6721AD971757* L_0 = ((EmptyArray_1_t086E7BE9FC6951BD76737BD9161D5B9AD213C850_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 2)))->___Value;
		return L_0;
	}
}
