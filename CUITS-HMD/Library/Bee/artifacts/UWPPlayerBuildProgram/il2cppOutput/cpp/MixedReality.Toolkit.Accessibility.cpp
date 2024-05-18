#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>


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
template <typename T1, typename T2>
struct VirtualActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
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
template <typename R, typename T1>
struct VirtualFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R, typename T1, typename T2>
struct VirtualFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4>
struct VirtualFuncInvoker4
{
	typedef R (*Func)(void*, T1, T2, T3, T4, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, p4, invokeData.method);
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
struct Action_1_tB93AB717F9D419A1BEC832FF76E74EAA32184CC1;
struct Dictionary_2_tE1D19D0AA81D718342812CD900CBF4D4C298AF8E;
struct Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180;
struct Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA;
struct Func_3_tC721DF8CDD07ED66A4833A19A2ED2302608C906C;
struct Func_3_t6F6D9932638EA1A5A45303C6626C818C25D164E5;
struct IEnumerable_1_t6AE17B07175DBD12A85153B9F8B709B29419C733;
struct IEnumerable_1_t73E24A3585FE00B560A12D422A7066F996ACD0A0;
struct IEnumerable_1_tF95C9E01A913DD50575531C8305932628663D9E9;
struct IEqualityComparer_1_tCC09FBE705E85E03B43A69897D3CB1582F920BD9;
struct KeyCollection_tF1DFF34D6882A27E9FE9CBAF10A79F298D6BEC85;
struct KeyCollection_tB45A861D090B15129521119AE48ED3813820A974;
struct List_1_t3F33A8B72EA0ADD649C3EDDA8DCA89789DEBA09C;
struct List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B;
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
struct MRTKSubsystemProvider_1_tA1BCC59B43276DC9E4D7789F187D4365A6998E3B;
struct MRTKSubsystemProvider_1_tC08188F41A5C4CC25C7CA1DC3A76C6D9DE5290D6;
struct MRTKSubsystem_3_t057DB79908BCA9C22BB5ED3F4421C19D4E3C89A1;
struct MRTKSubsystem_3_tC6F5612EAD44F0EC50AF80375D83C3337116F6A8;
struct SubsystemDescriptorWithProvider_2_tC4502634FFCB447A8B24CF8C693DCC68195C7D2A;
struct SubsystemDescriptorWithProvider_2_tDBA1506DD7EBA024E21E2A6CAF1B5CE3DA9DFF07;
struct SubsystemWithProvider_3_tF6354EEABB229041BC6BBAEABA61FA71F76B3674;
struct SubsystemWithProvider_3_t548D9C2A4778C7ADB62496A2A07F8B7563309893;
struct TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4;
struct ValueCollection_tAE64CCEC60B5F147734777C2F91A95E9FDE4C7A7;
struct ValueCollection_t038245E04B5D2A80048D9F8021A23E69A0C9DBAA;
struct EntryU5BU5D_t8E1515AE3053915350C8CFA99D5CFB569F78F282;
struct TMP_TextProcessingStack_1U5BU5D_t08293E0BB072311BB96170F351D1083BCA97B9B2;
struct AccessibleObjectClassificationU5BU5D_tA4DC2401749541EF78C5E850D68A4BD5D2720F4C;
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
struct Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259;
struct DecimalU5BU5D_t93BA0C88FA80728F73B792EE1A5199D0C060B615;
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
struct FontWeightU5BU5D_t2A406B5BAB0DD0F06E7F1773DB062E4AF98067BA;
struct GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF;
struct HighlightStateU5BU5D_tA878A0AF1F4F52882ACD29515AADC277EE135622;
struct HorizontalAlignmentOptionsU5BU5D_t4D185662282BFB910D8B9A8199E91578E9422658;
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
struct MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D;
struct MaterialReferenceU5BU5D_t7491D335AB3E3E13CE9C0F5E931F396F6A02E1F2;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct RichTextTagAttributeU5BU5D_t5816316EFD8F59DBC30B9F88E15828C564E47B6D;
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C;
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
struct TMP_CharacterInfoU5BU5D_t297D56FCF66DAA99D8FEA7C30F9F3926902C5B99;
struct TMP_ColorGradientU5BU5D_t2F65E8C42F268DFF33BB1392D94BCF5B5087308A;
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
struct UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA;
struct Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA;
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C;
struct WordWrapStateU5BU5D_t473D59C9DBCC949CE72EF1EB471CBA152A6CEAC9;
struct UnicodeCharU5BU5D_t67F27D09F8EB28D2C42DFF16FE60054F157012F5;
struct AccessibilitySubsystem_t26A604A92BAA7AB49AE390E0005A789720443582;
struct AccessibilitySubsystemConfig_t04BF4C96175B11A0C996CDD69CA75C82A8B645C3;
struct AccessibilitySubsystemDescriptor_t366293770CE03F66419FAB2461E0D33BCE4CDCF1;
struct AccessibleObject_t0223569CC040AD2AB2F90BEAE62CEA22CC0F9675;
struct AccessibleObjectClassification_t48AAC4E76C1D9AA7E8CFB11F30B54DC795646ED9;
struct ApplicationException_tA744BED4E90266BD255285CD4CF909BAB3EE811A;
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263;
struct BaseSubsystemConfig_t45DE317EA7641CB136203849EDA560353093B13A;
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184;
struct CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B;
struct Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26;
struct CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860;
struct Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76;
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3;
struct Delegate_t;
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
struct ITextPreprocessor_tDBB49C8B68D7B80E8D233B9D9666C43981EFAAB9;
struct LayoutElement_tB1F24CC11AF4AA87015C8D8EE06D22349C5BF40A;
struct MRTKAccessibilitySubsystem_t18CB758CAB0BD6C5DDC4115125641F7EBAA8018F;
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3;
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
struct Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4;
struct MethodInfo_t;
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
struct ObjectRole_tA769A97007F1FAAC073D12B94CDBD0CED6743438;
struct RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670;
struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5;
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
struct ScreenReaderObjectSettings_t2BF065764D49859C4497D5B07DAE75AAD36F33F8;
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A;
struct String_t;
struct SubsystemDescriptorWithProvider_t2A61A2C951A4A179E898CF207726BF6B5AF474D5;
struct SubsystemProvider_tE1865B8FE698C81A59AED35E0E536BD53F402455;
struct SubsystemWithProvider_tC72E35EE2D413A4B0635B058154BABF265F31242;
struct TMP_Character_t7D37A55EF1A9FF6D0BFE6D50E86A00F80E7FAF35;
struct TMP_ColorGradient_t17B51752B4E9499A1FF7D875DCEC1D15A0F4AEBB;
struct TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160;
struct TMP_SpriteAnimator_t2E0F016A61CA343E3222FF51E7CF0E53F9F256E4;
struct TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39;
struct TMP_Style_tA9E5B1B35EBFE24EF980CEA03251B638282E120C;
struct TMP_StyleSheet_t70C71699F5CB2D855C361DBB78A44C901236C859;
struct TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9;
struct TMP_TextElement_t262A55214F712D4274485ABE5676E5254B84D0A5;
struct TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D;
struct TextAccessibility_t6BF564AD435E02350F6019627AB366FB8E54F126;
struct Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4;
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1;
struct Type_t;
struct UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7;
struct UnitySourceGeneratedAssemblyMonoScriptTypes_v1_tA68F2CC8CEAEB0D4E437737EB8EBB7395477CD2E;
struct VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE;
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
struct Provider_t6B89658FF42BACD2F4C91E0ABFF9D2DA6DE3D60A;
struct CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD;
struct AccessibilityProvider_tED15C3EB0977856F8B4828DFCAD18A7ED3AF6716;
struct CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8;

IL2CPP_EXTERN_C RuntimeClass* AccessibilityHelpers_t8CFD641C8E88DFC48B4AB10FB6785970B773D6CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AccessibilitySubsystemCinfo_tCF25C9AEB9158D1CCC734DBF683F94EF917F3FAB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AccessibilitySubsystemDescriptor_t366293770CE03F66419FAB2461E0D33BCE4CDCF1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AccessibilityUtilities_tFAA889699821BD03A832D5E3343203DEC9016D1A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AccessibleObject_t0223569CC040AD2AB2F90BEAE62CEA22CC0F9675_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ApplicationException_tA744BED4E90266BD255285CD4CF909BAB3EE811A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CameraFOVChecker_t3475E4E43D873C7B11A8E76B124E52979A7D9A8E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_tE1D19D0AA81D718342812CD900CBF4D4C298AF8E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ICollection_1_tD8640BD3EEEC2043D69EE193D0BF9F8569B458D6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MRTKSubsystem_3_t057DB79908BCA9C22BB5ED3F4421C19D4E3C89A1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* String_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SubsystemDescriptorStore_tEF3761B84B8C25EA4B93F94A487551820B268250_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* XRSubsystemHelpers_t45A7829EE68B01DAAC3E4509FC75A1D794423C7F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_t76D3D5B88CE5A56F800440C413335495B3E694C6____B87180DE4EDED6B182B5F53341706668371CB84D1ABAB0F05B310058A4995C7C_FieldInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_t76D3D5B88CE5A56F800440C413335495B3E694C6____C66327DA6927415FA81D8359F89BA468D920FEF648351C5D42FEE7413FEC07A4_FieldInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral0514B8E4342F7B936BE02120037C20832C1C2F20;
IL2CPP_EXTERN_C String_t* _stringLiteral0B0FA4353F2CBCCACE1A1F98B3C3F3738127E492;
IL2CPP_EXTERN_C String_t* _stringLiteral2714B1EC52279442F9A3B7ED93239624B9226A15;
IL2CPP_EXTERN_C String_t* _stringLiteral281033B411A2723B0C82F6B48AC1E70FEB902A11;
IL2CPP_EXTERN_C String_t* _stringLiteral52D2CD097CFAA0461035A19E2C6115F54219A6EE;
IL2CPP_EXTERN_C String_t* _stringLiteral680D5F85FF107897716444439FE6176166BED070;
IL2CPP_EXTERN_C String_t* _stringLiteral8B158F9A3667630BBA0D7A4DB24E6105065433E7;
IL2CPP_EXTERN_C String_t* _stringLiteral906F379A3EDE20E3AEF88CF2F80715B39D89684B;
IL2CPP_EXTERN_C String_t* _stringLiteralA48C0F16E39A46C469EC5BB4DA73F02A7D84D8E7;
IL2CPP_EXTERN_C String_t* _stringLiteralA8731F4AEB28CD3592CFFC1849F528FCA9738497;
IL2CPP_EXTERN_C String_t* _stringLiteralACBDBFBF2CD1DAF969EC64771234F755CFEFF59A;
IL2CPP_EXTERN_C String_t* _stringLiteralC059A8FD08BCE672BF2CB48A49B7329B485F3ED8;
IL2CPP_EXTERN_C String_t* _stringLiteralE528A64618644524EC116F5E5BB24B0B6C94B55F;
IL2CPP_EXTERN_C String_t* _stringLiteralE9DAA516D37F8A67FD590A557B2B18E7B9BC8F7C;
IL2CPP_EXTERN_C const RuntimeMethod* AccessibilitySubsystemCinfo_GetHashCode_mB84786CBF53EF4A9B060D109E71B73C705B7FF09_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AccessibilitySubsystemDescriptor_Create_m13D5FA518F88AFBC27B603EFD3E2DAE6AC11B4D9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_TryGetComponent_TisTMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9_m56A0C11CF03EEBE9218C3AC9957362AAFF155090_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Add_m257B8C90C41CB522B5A2D24FFF4676471FE46B33_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_ContainsKey_m25BEAB34BCA70DF90CF8FFB48C90F4356C816B0B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_mC921F0A6E3AEDBFBCFB8814339BAE1322DD2ABDC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Item_m78CDA8E556C6471CCE4A2F137898CDD00DED974E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Keys_m7B5DDF7BCC66529C9DC6E9C39BAD534182492AD8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Values_mB8994FB01D5326868F236A779F2DF4E5BAC10D7A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m4FEC06045F10D0643E3EB6DBBFB57844CDF58166_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m75297E7D08AE3AB13BC9E9B5B217CFD43E463FB0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m04143F3DAE9E0837982BEE60843B7B78C168BE6D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_mF04637E81CF819EBD5975E53102C923C17FFB3E1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m571AAB121D0C10985A7C3A783461745D9DA3FE9C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m658804DB42C0652E5963E8B12A95415AA17257ED_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_TryGetComponent_TisCollider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76_mFF30CBE3C429844CF584BAC596EDAF7B49398705_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_AddRange_m3452DB888275C4F2F551F5EA575B97E5BD7E077C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_AddRange_mF7CB62C0F98328B0EC44EC48E5DAD891B8BC749C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m43FBF207375C6E06B8C45ECE614F9B8008FB686E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Clear_m32D399BDD753B5BD6CE27560249096418F3F0867_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Clear_mC8BB955AE59B04F0EAF93471507EEE766D066516_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Contains_m8D2C9B0C7844486763AE6C2CA3C04FA4BBA9B384_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_m5FBB6B16664449B594EE92438FDAFBF6A89BADF4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Remove_mCCE85D4D5326536C4B214C73D07030F4CCD18485_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m447372C1EF7141193B93090A77395B786C72C7BC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MRTKSubsystemProvider_1__ctor_m6FEDBFA34FB3B9BDBC5E4CD1D046FDFC84F5B34C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MRTKSubsystem_3__ctor_m347BAFB23B611CEAAAD615475078169C74B32E04_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SubsystemDescriptorWithProvider_2__ctor_m550CA2FD8B49E27F199025B8D00180D0CBA5BD70_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SubsystemWithProvider_3_get_provider_m4F14FD0B82B8F315AAFE7E700230C5B5D5F6B038_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TextAccessibility_OnInvertTextColorChanged_mEEF10C7F41CF47AC730D187DF1436CAD6918347E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ValueCollection_GetEnumerator_mDFB5AD8B638E6EF2679CFAF9138B32296E811497_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* XRSubsystemHelpers_CheckTypes_TisAccessibilitySubsystem_t26A604A92BAA7AB49AE390E0005A789720443582_TisProvider_t6B89658FF42BACD2F4C91E0ABFF9D2DA6DE3D60A_mFC88ADC53CB14101995C34E0BF2BD65E6791BB9D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* XRSubsystemHelpers_ConstructCinfo_TisMRTKAccessibilitySubsystem_t18CB758CAB0BD6C5DDC4115125641F7EBAA8018F_TisAccessibilitySubsystemCinfo_tCF25C9AEB9158D1CCC734DBF683F94EF917F3FAB_m9FED92F08254D85C3BCB0B4D0ACA8E0CA4E04998_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* XRSubsystemHelpers_GetConfiguration_TisAccessibilitySubsystemConfig_t04BF4C96175B11A0C996CDD69CA75C82A8B645C3_TisMRTKAccessibilitySubsystem_t18CB758CAB0BD6C5DDC4115125641F7EBAA8018F_mC0212D83AED30A16AD3BD0C9812DB75CF94FBCC1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* XRSubsystemHelpers_GetFirstRunningSubsystem_TisAccessibilitySubsystem_t26A604A92BAA7AB49AE390E0005A789720443582_mD714530B0B5CD3126DE804405E74629F8684E56D_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
struct U3CModuleU3E_tB91B55230D33210A45908E3E73B34D6731CF6573 
{
};
struct Dictionary_2_tE1D19D0AA81D718342812CD900CBF4D4C298AF8E  : public RuntimeObject
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets;
	EntryU5BU5D_t8E1515AE3053915350C8CFA99D5CFB569F78F282* ____entries;
	int32_t ____count;
	int32_t ____freeList;
	int32_t ____freeCount;
	int32_t ____version;
	RuntimeObject* ____comparer;
	KeyCollection_tF1DFF34D6882A27E9FE9CBAF10A79F298D6BEC85* ____keys;
	ValueCollection_tAE64CCEC60B5F147734777C2F91A95E9FDE4C7A7* ____values;
	RuntimeObject* ____syncRoot;
};
struct KeyCollection_tF1DFF34D6882A27E9FE9CBAF10A79F298D6BEC85  : public RuntimeObject
{
	Dictionary_2_tE1D19D0AA81D718342812CD900CBF4D4C298AF8E* ____dictionary;
};
struct List_1_t3F33A8B72EA0ADD649C3EDDA8DCA89789DEBA09C  : public RuntimeObject
{
	AccessibleObjectClassificationU5BU5D_tA4DC2401749541EF78C5E850D68A4BD5D2720F4C* ____items;
	int32_t ____size;
	int32_t ____version;
	RuntimeObject* ____syncRoot;
};
struct List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B  : public RuntimeObject
{
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* ____items;
	int32_t ____size;
	int32_t ____version;
	RuntimeObject* ____syncRoot;
};
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D  : public RuntimeObject
{
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ____items;
	int32_t ____size;
	int32_t ____version;
	RuntimeObject* ____syncRoot;
};
struct ValueCollection_tAE64CCEC60B5F147734777C2F91A95E9FDE4C7A7  : public RuntimeObject
{
	Dictionary_2_tE1D19D0AA81D718342812CD900CBF4D4C298AF8E* ____dictionary;
};
struct U3CPrivateImplementationDetailsU3E_t76D3D5B88CE5A56F800440C413335495B3E694C6  : public RuntimeObject
{
};
struct AccessibilityHelpers_t8CFD641C8E88DFC48B4AB10FB6785970B773D6CE  : public RuntimeObject
{
};
struct MemberInfo_t  : public RuntimeObject
{
};
struct ScreenReaderObjectSettings_t2BF065764D49859C4497D5B07DAE75AAD36F33F8  : public RuntimeObject
{
	float ___maxObjectDistance;
	int32_t ___spatializationOption;
};
struct String_t  : public RuntimeObject
{
	int32_t ____stringLength;
	Il2CppChar ____firstChar;
};
struct SubsystemDescriptorWithProvider_t2A61A2C951A4A179E898CF207726BF6B5AF474D5  : public RuntimeObject
{
	String_t* ___U3CidU3Ek__BackingField;
	Type_t* ___U3CproviderTypeU3Ek__BackingField;
	Type_t* ___U3CsubsystemTypeOverrideU3Ek__BackingField;
};
struct SubsystemProvider_tE1865B8FE698C81A59AED35E0E536BD53F402455  : public RuntimeObject
{
	bool ___m_Running;
};
struct SubsystemWithProvider_tC72E35EE2D413A4B0635B058154BABF265F31242  : public RuntimeObject
{
	bool ___U3CrunningU3Ek__BackingField;
	SubsystemProvider_tE1865B8FE698C81A59AED35E0E536BD53F402455* ___U3CproviderBaseU3Ek__BackingField;
};
struct UnitySourceGeneratedAssemblyMonoScriptTypes_v1_tA68F2CC8CEAEB0D4E437737EB8EBB7395477CD2E  : public RuntimeObject
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
struct Enumerator_t05887FF31BF2F9C1E8DF40C9EF6915337EDEE6DF 
{
	List_1_t3F33A8B72EA0ADD649C3EDDA8DCA89789DEBA09C* ____list;
	int32_t ____index;
	int32_t ____version;
	AccessibleObjectClassification_t48AAC4E76C1D9AA7E8CFB11F30B54DC795646ED9* ____current;
};
struct Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A 
{
	List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* ____list;
	int32_t ____index;
	int32_t ____version;
	RuntimeObject* ____current;
};
struct Enumerator_tAFB46C81D6CE3638BC27A7CB79EE6033BA6D14A6 
{
	Dictionary_2_tE1D19D0AA81D718342812CD900CBF4D4C298AF8E* ____dictionary;
	int32_t ____index;
	int32_t ____version;
	List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* ____currentValue;
};
struct Enumerator_t44124D16E0B2F7308FF4069BE06369B5A83896EB 
{
	Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* ____dictionary;
	int32_t ____index;
	int32_t ____version;
	RuntimeObject* ____currentValue;
};
struct SubsystemDescriptorWithProvider_2_tC4502634FFCB447A8B24CF8C693DCC68195C7D2A  : public SubsystemDescriptorWithProvider_t2A61A2C951A4A179E898CF207726BF6B5AF474D5
{
};
struct SubsystemProvider_1_t89741747B410C01681D2CD154D7B2CEBC32E696F  : public SubsystemProvider_tE1865B8FE698C81A59AED35E0E536BD53F402455
{
};
struct SubsystemWithProvider_3_tF6354EEABB229041BC6BBAEABA61FA71F76B3674  : public SubsystemWithProvider_tC72E35EE2D413A4B0635B058154BABF265F31242
{
	AccessibilitySubsystemDescriptor_t366293770CE03F66419FAB2461E0D33BCE4CDCF1* ___U3CsubsystemDescriptorU3Ek__BackingField;
	Provider_t6B89658FF42BACD2F4C91E0ABFF9D2DA6DE3D60A* ___U3CproviderU3Ek__BackingField;
};
struct SubsystemWithProvider_3_t548D9C2A4778C7ADB62496A2A07F8B7563309893  : public SubsystemWithProvider_tC72E35EE2D413A4B0635B058154BABF265F31242
{
	RuntimeObject* ___U3CsubsystemDescriptorU3Ek__BackingField;
	RuntimeObject* ___U3CproviderU3Ek__BackingField;
};
struct TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 
{
	FontWeightU5BU5D_t2A406B5BAB0DD0F06E7F1773DB062E4AF98067BA* ___itemStack;
	int32_t ___index;
	int32_t ___m_DefaultItem;
	int32_t ___m_Capacity;
	int32_t ___m_RolloverSize;
	int32_t ___m_Count;
};
struct TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 
{
	HorizontalAlignmentOptionsU5BU5D_t4D185662282BFB910D8B9A8199E91578E9422658* ___itemStack;
	int32_t ___index;
	int32_t ___m_DefaultItem;
	int32_t ___m_Capacity;
	int32_t ___m_RolloverSize;
	int32_t ___m_Count;
};
struct TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C 
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___itemStack;
	int32_t ___index;
	int32_t ___m_DefaultItem;
	int32_t ___m_Capacity;
	int32_t ___m_RolloverSize;
	int32_t ___m_Count;
};
struct TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 
{
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___itemStack;
	int32_t ___index;
	float ___m_DefaultItem;
	int32_t ___m_Capacity;
	int32_t ___m_RolloverSize;
	int32_t ___m_Count;
};
struct TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C 
{
	TMP_ColorGradientU5BU5D_t2F65E8C42F268DFF33BB1392D94BCF5B5087308A* ___itemStack;
	int32_t ___index;
	TMP_ColorGradient_t17B51752B4E9499A1FF7D875DCEC1D15A0F4AEBB* ___m_DefaultItem;
	int32_t ___m_Capacity;
	int32_t ___m_RolloverSize;
	int32_t ___m_Count;
};
struct AccessibilitySubsystemCinfo_tCF25C9AEB9158D1CCC734DBF683F94EF917F3FAB 
{
	String_t* ___U3CNameU3Ek__BackingField;
	String_t* ___U3CDisplayNameU3Ek__BackingField;
	String_t* ___U3CAuthorU3Ek__BackingField;
	Type_t* ___U3CConfigTypeU3Ek__BackingField;
	Type_t* ___U3CProviderTypeU3Ek__BackingField;
	Type_t* ___U3CSubsystemTypeOverrideU3Ek__BackingField;
};
struct AccessibilitySubsystemCinfo_tCF25C9AEB9158D1CCC734DBF683F94EF917F3FAB_marshaled_pinvoke
{
	char* ___U3CNameU3Ek__BackingField;
	char* ___U3CDisplayNameU3Ek__BackingField;
	char* ___U3CAuthorU3Ek__BackingField;
	Type_t* ___U3CConfigTypeU3Ek__BackingField;
	Type_t* ___U3CProviderTypeU3Ek__BackingField;
	Type_t* ___U3CSubsystemTypeOverrideU3Ek__BackingField;
};
struct AccessibilitySubsystemCinfo_tCF25C9AEB9158D1CCC734DBF683F94EF917F3FAB_marshaled_com
{
	Il2CppChar* ___U3CNameU3Ek__BackingField;
	Il2CppChar* ___U3CDisplayNameU3Ek__BackingField;
	Il2CppChar* ___U3CAuthorU3Ek__BackingField;
	Type_t* ___U3CConfigTypeU3Ek__BackingField;
	Type_t* ___U3CProviderTypeU3Ek__BackingField;
	Type_t* ___U3CSubsystemTypeOverrideU3Ek__BackingField;
};
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	bool ___m_value;
};
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3 
{
	uint8_t ___m_value;
};
struct Color_tD001788D726C3A7F1379BEED0260B9591F440C1F 
{
	float ___r;
	float ___g;
	float ___b;
	float ___a;
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
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	int32_t ___m_value;
};
struct IntPtr_t 
{
	void* ___m_value;
};
struct MaterialReference_tFD98FFFBBDF168028E637446C6676507186F4D0B 
{
	int32_t ___index;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset;
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___spriteAsset;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material;
	bool ___isDefaultMaterial;
	bool ___isFallbackMaterial;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___fallbackMaterial;
	float ___padding;
	int32_t ___referenceCount;
};
struct MaterialReference_tFD98FFFBBDF168028E637446C6676507186F4D0B_marshaled_pinvoke
{
	int32_t ___index;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset;
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___spriteAsset;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material;
	int32_t ___isDefaultMaterial;
	int32_t ___isFallbackMaterial;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___fallbackMaterial;
	float ___padding;
	int32_t ___referenceCount;
};
struct MaterialReference_tFD98FFFBBDF168028E637446C6676507186F4D0B_marshaled_com
{
	int32_t ___index;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset;
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___spriteAsset;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material;
	int32_t ___isDefaultMaterial;
	int32_t ___isFallbackMaterial;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___fallbackMaterial;
	float ___padding;
	int32_t ___referenceCount;
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
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	float ___m_value;
};
struct TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC 
{
	uint8_t ___bold;
	uint8_t ___italic;
	uint8_t ___underline;
	uint8_t ___strikethrough;
	uint8_t ___highlight;
	uint8_t ___superscript;
	uint8_t ___subscript;
	uint8_t ___uppercase;
	uint8_t ___lowercase;
	uint8_t ___smallcaps;
};
struct TMP_Offset_t2262BE4E87D9662487777FF8FFE1B17B0E4438C6 
{
	float ___m_Left;
	float ___m_Right;
	float ___m_Top;
	float ___m_Bottom;
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
#pragma pack(push, tp, 1)
struct __StaticArrayInitTypeSizeU3D1294_t5559C52A32667C4538C17D41235D24FC35A72A32 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D1294_t5559C52A32667C4538C17D41235D24FC35A72A32__padding[1294];
	};
};
#pragma pack(pop, tp)
#pragma pack(push, tp, 1)
struct __StaticArrayInitTypeSizeU3D916_tF112004A5828D5F5231698D0AB291DFE74AA7E9E 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D916_tF112004A5828D5F5231698D0AB291DFE74AA7E9E__padding[916];
	};
};
#pragma pack(pop, tp)
struct SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777 
{
	TMP_Character_t7D37A55EF1A9FF6D0BFE6D50E86A00F80E7FAF35* ___character;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material;
	int32_t ___materialIndex;
};
struct SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777_marshaled_pinvoke
{
	TMP_Character_t7D37A55EF1A9FF6D0BFE6D50E86A00F80E7FAF35* ___character;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material;
	int32_t ___materialIndex;
};
struct SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777_marshaled_com
{
	TMP_Character_t7D37A55EF1A9FF6D0BFE6D50E86A00F80E7FAF35* ___character;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material;
	int32_t ___materialIndex;
};
struct TextBackingContainer_t33D1CE628E7B26C45EDAC1D87BEF2DD22A5C6361 
{
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___m_Array;
	int32_t ___m_Count;
};
struct TextBackingContainer_t33D1CE628E7B26C45EDAC1D87BEF2DD22A5C6361_marshaled_pinvoke
{
	Il2CppSafeArray* ___m_Array;
	int32_t ___m_Count;
};
struct TextBackingContainer_t33D1CE628E7B26C45EDAC1D87BEF2DD22A5C6361_marshaled_com
{
	Il2CppSafeArray* ___m_Array;
	int32_t ___m_Count;
};
struct MonoScriptData_t3386082E7EC74D90D97F8F011F6B74674CC5DDD3 
{
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___FilePathsData;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___TypesData;
	int32_t ___TotalTypes;
	int32_t ___TotalFiles;
	bool ___IsEditorOnly;
};
struct MonoScriptData_t3386082E7EC74D90D97F8F011F6B74674CC5DDD3_marshaled_pinvoke
{
	Il2CppSafeArray* ___FilePathsData;
	Il2CppSafeArray* ___TypesData;
	int32_t ___TotalTypes;
	int32_t ___TotalFiles;
	int32_t ___IsEditorOnly;
};
struct MonoScriptData_t3386082E7EC74D90D97F8F011F6B74674CC5DDD3_marshaled_com
{
	Il2CppSafeArray* ___FilePathsData;
	Il2CppSafeArray* ___TypesData;
	int32_t ___TotalTypes;
	int32_t ___TotalFiles;
	int32_t ___IsEditorOnly;
};
struct MRTKSubsystemProvider_1_tA1BCC59B43276DC9E4D7789F187D4365A6998E3B  : public SubsystemProvider_1_t89741747B410C01681D2CD154D7B2CEBC32E696F
{
};
struct MRTKSubsystem_3_t057DB79908BCA9C22BB5ED3F4421C19D4E3C89A1  : public SubsystemWithProvider_3_tF6354EEABB229041BC6BBAEABA61FA71F76B3674
{
};
struct TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 
{
	Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* ___itemStack;
	int32_t ___index;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_DefaultItem;
	int32_t ___m_Capacity;
	int32_t ___m_RolloverSize;
	int32_t ___m_Count;
};
struct TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 
{
	MaterialReferenceU5BU5D_t7491D335AB3E3E13CE9C0F5E931F396F6A02E1F2* ___itemStack;
	int32_t ___index;
	MaterialReference_tFD98FFFBBDF168028E637446C6676507186F4D0B ___m_DefaultItem;
	int32_t ___m_Capacity;
	int32_t ___m_RolloverSize;
	int32_t ___m_Count;
};
struct AccessibilitySubsystemDescriptor_t366293770CE03F66419FAB2461E0D33BCE4CDCF1  : public SubsystemDescriptorWithProvider_2_tC4502634FFCB447A8B24CF8C693DCC68195C7D2A
{
	String_t* ___U3CDisplayNameU3Ek__BackingField;
	String_t* ___U3CAuthorU3Ek__BackingField;
	Type_t* ___U3CConfigTypeU3Ek__BackingField;
};
struct Delegate_t  : public RuntimeObject
{
	intptr_t ___method_ptr;
	intptr_t ___invoke_impl;
	RuntimeObject* ___m_target;
	intptr_t ___method;
	intptr_t ___delegate_trampoline;
	intptr_t ___extra_arg;
	intptr_t ___method_code;
	intptr_t ___interp_method;
	intptr_t ___interp_invoke_impl;
	MethodInfo_t* ___method_info;
	MethodInfo_t* ___original_method_info;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data;
	bool ___method_is_virtual;
};
struct Delegate_t_marshaled_pinvoke
{
	intptr_t ___method_ptr;
	intptr_t ___invoke_impl;
	Il2CppIUnknown* ___m_target;
	intptr_t ___method;
	intptr_t ___delegate_trampoline;
	intptr_t ___extra_arg;
	intptr_t ___method_code;
	intptr_t ___interp_method;
	intptr_t ___interp_invoke_impl;
	MethodInfo_t* ___method_info;
	MethodInfo_t* ___original_method_info;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data;
	int32_t ___method_is_virtual;
};
struct Delegate_t_marshaled_com
{
	intptr_t ___method_ptr;
	intptr_t ___invoke_impl;
	Il2CppIUnknown* ___m_target;
	intptr_t ___method;
	intptr_t ___delegate_trampoline;
	intptr_t ___extra_arg;
	intptr_t ___method_code;
	intptr_t ___interp_method;
	intptr_t ___interp_invoke_impl;
	MethodInfo_t* ___method_info;
	MethodInfo_t* ___original_method_info;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data;
	int32_t ___method_is_virtual;
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
struct Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___min;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___max;
};
struct HighlightState_tE4F50287E5E2E91D42AB77DEA281D88D3AD6A28B 
{
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___color;
	TMP_Offset_t2262BE4E87D9662487777FF8FFE1B17B0E4438C6 ___padding;
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
struct ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD 
{
	intptr_t ___m_Ptr;
};
struct RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 
{
	intptr_t ___value;
};
struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	intptr_t ___value;
};
struct VertexGradient_t2C057B53C0EA6E987C2B7BAB0305E686DA1C9A8F 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___topLeft;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___topRight;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___bottomLeft;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___bottomRight;
};
struct TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D 
{
	HighlightStateU5BU5D_tA878A0AF1F4F52882ACD29515AADC277EE135622* ___itemStack;
	int32_t ___index;
	HighlightState_tE4F50287E5E2E91D42AB77DEA281D88D3AD6A28B ___m_DefaultItem;
	int32_t ___m_Capacity;
	int32_t ___m_RolloverSize;
	int32_t ___m_Count;
};
struct AccessibilitySubsystem_t26A604A92BAA7AB49AE390E0005A789720443582  : public MRTKSubsystem_3_t057DB79908BCA9C22BB5ED3F4421C19D4E3C89A1
{
};
struct ApplicationException_tA744BED4E90266BD255285CD4CF909BAB3EE811A  : public Exception_t
{
};
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};
struct MulticastDelegate_t  : public Delegate_t
{
	DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771* ___delegates;
};
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates;
};
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates;
};
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A_marshaled_pinvoke : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
};
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A_marshaled_com : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
};
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};
struct TMP_LineInfo_tB75C1965B58DB7B3A046C8CA55AD6AB92B6B17B3 
{
	int32_t ___controlCharacterCount;
	int32_t ___characterCount;
	int32_t ___visibleCharacterCount;
	int32_t ___spaceCount;
	int32_t ___wordCount;
	int32_t ___firstCharacterIndex;
	int32_t ___firstVisibleCharacterIndex;
	int32_t ___lastCharacterIndex;
	int32_t ___lastVisibleCharacterIndex;
	float ___length;
	float ___lineHeight;
	float ___ascender;
	float ___baseline;
	float ___descender;
	float ___maxAdvance;
	float ___width;
	float ___marginLeft;
	float ___marginRight;
	int32_t ___alignment;
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___lineExtents;
};
struct Type_t  : public MemberInfo_t
{
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ____impl;
};
struct Provider_t6B89658FF42BACD2F4C91E0ABFF9D2DA6DE3D60A  : public MRTKSubsystemProvider_1_tA1BCC59B43276DC9E4D7789F187D4365A6998E3B
{
};
struct Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C  : public MulticastDelegate_t
{
};
struct AccessibleObjectClassification_t48AAC4E76C1D9AA7E8CFB11F30B54DC795646ED9  : public ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A
{
	String_t* ___description;
	String_t* ___U3CDescriptionU3Ek__BackingField;
};
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
	String_t* ____paramName;
};
struct BaseSubsystemConfig_t45DE317EA7641CB136203849EDA560353093B13A  : public ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A
{
};
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};
struct Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};
struct MRTKAccessibilitySubsystem_t18CB758CAB0BD6C5DDC4115125641F7EBAA8018F  : public AccessibilitySubsystem_t26A604A92BAA7AB49AE390E0005A789720443582
{
};
struct ObjectRole_tA769A97007F1FAAC073D12B94CDBD0CED6743438  : public ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A
{
	String_t* ___description;
	String_t* ___formalName;
	bool ___isAria;
	String_t* ___referenceLink;
};
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};
struct WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A 
{
	int32_t ___previous_WordBreak;
	int32_t ___total_CharacterCount;
	int32_t ___visible_CharacterCount;
	int32_t ___visible_SpriteCount;
	int32_t ___visible_LinkCount;
	int32_t ___firstCharacterIndex;
	int32_t ___firstVisibleCharacterIndex;
	int32_t ___lastCharacterIndex;
	int32_t ___lastVisibleCharIndex;
	int32_t ___lineNumber;
	float ___maxCapHeight;
	float ___maxAscender;
	float ___maxDescender;
	float ___startOfLineAscender;
	float ___maxLineAscender;
	float ___maxLineDescender;
	float ___pageAscender;
	int32_t ___horizontalAlignment;
	float ___marginLeft;
	float ___marginRight;
	float ___xAdvance;
	float ___preferredWidth;
	float ___preferredHeight;
	float ___previousLineScale;
	int32_t ___wordCount;
	int32_t ___fontStyle;
	int32_t ___italicAngle;
	float ___fontScaleMultiplier;
	float ___currentFontSize;
	float ___baselineOffset;
	float ___lineOffset;
	bool ___isDrivenLineSpacing;
	float ___glyphHorizontalAdvanceAdjustment;
	float ___cSpace;
	float ___mSpace;
	TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* ___textInfo;
	TMP_LineInfo_tB75C1965B58DB7B3A046C8CA55AD6AB92B6B17B3 ___lineInfo;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___vertexColor;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___underlineColor;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___strikethroughColor;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___highlightColor;
	TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC ___basicStyleStack;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___italicAngleStack;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___colorStack;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___underlineColorStack;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___strikethroughColorStack;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___highlightColorStack;
	TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D ___highlightStateStack;
	TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C ___colorGradientStack;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___sizeStack;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___indentStack;
	TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 ___fontWeightStack;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___styleStack;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___baselineStack;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___actionStack;
	TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 ___materialReferenceStack;
	TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 ___lineJustificationStack;
	int32_t ___spriteAnimationID;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___currentFontAsset;
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___currentSpriteAsset;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___currentMaterial;
	int32_t ___currentMaterialIndex;
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___meshExtents;
	bool ___tagNoParsing;
	bool ___isNonBreakingSpace;
};
struct WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A_marshaled_pinvoke
{
	int32_t ___previous_WordBreak;
	int32_t ___total_CharacterCount;
	int32_t ___visible_CharacterCount;
	int32_t ___visible_SpriteCount;
	int32_t ___visible_LinkCount;
	int32_t ___firstCharacterIndex;
	int32_t ___firstVisibleCharacterIndex;
	int32_t ___lastCharacterIndex;
	int32_t ___lastVisibleCharIndex;
	int32_t ___lineNumber;
	float ___maxCapHeight;
	float ___maxAscender;
	float ___maxDescender;
	float ___startOfLineAscender;
	float ___maxLineAscender;
	float ___maxLineDescender;
	float ___pageAscender;
	int32_t ___horizontalAlignment;
	float ___marginLeft;
	float ___marginRight;
	float ___xAdvance;
	float ___preferredWidth;
	float ___preferredHeight;
	float ___previousLineScale;
	int32_t ___wordCount;
	int32_t ___fontStyle;
	int32_t ___italicAngle;
	float ___fontScaleMultiplier;
	float ___currentFontSize;
	float ___baselineOffset;
	float ___lineOffset;
	int32_t ___isDrivenLineSpacing;
	float ___glyphHorizontalAdvanceAdjustment;
	float ___cSpace;
	float ___mSpace;
	TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* ___textInfo;
	TMP_LineInfo_tB75C1965B58DB7B3A046C8CA55AD6AB92B6B17B3 ___lineInfo;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___vertexColor;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___underlineColor;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___strikethroughColor;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___highlightColor;
	TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC ___basicStyleStack;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___italicAngleStack;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___colorStack;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___underlineColorStack;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___strikethroughColorStack;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___highlightColorStack;
	TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D ___highlightStateStack;
	TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C ___colorGradientStack;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___sizeStack;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___indentStack;
	TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 ___fontWeightStack;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___styleStack;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___baselineStack;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___actionStack;
	TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 ___materialReferenceStack;
	TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 ___lineJustificationStack;
	int32_t ___spriteAnimationID;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___currentFontAsset;
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___currentSpriteAsset;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___currentMaterial;
	int32_t ___currentMaterialIndex;
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___meshExtents;
	int32_t ___tagNoParsing;
	int32_t ___isNonBreakingSpace;
};
struct WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A_marshaled_com
{
	int32_t ___previous_WordBreak;
	int32_t ___total_CharacterCount;
	int32_t ___visible_CharacterCount;
	int32_t ___visible_SpriteCount;
	int32_t ___visible_LinkCount;
	int32_t ___firstCharacterIndex;
	int32_t ___firstVisibleCharacterIndex;
	int32_t ___lastCharacterIndex;
	int32_t ___lastVisibleCharIndex;
	int32_t ___lineNumber;
	float ___maxCapHeight;
	float ___maxAscender;
	float ___maxDescender;
	float ___startOfLineAscender;
	float ___maxLineAscender;
	float ___maxLineDescender;
	float ___pageAscender;
	int32_t ___horizontalAlignment;
	float ___marginLeft;
	float ___marginRight;
	float ___xAdvance;
	float ___preferredWidth;
	float ___preferredHeight;
	float ___previousLineScale;
	int32_t ___wordCount;
	int32_t ___fontStyle;
	int32_t ___italicAngle;
	float ___fontScaleMultiplier;
	float ___currentFontSize;
	float ___baselineOffset;
	float ___lineOffset;
	int32_t ___isDrivenLineSpacing;
	float ___glyphHorizontalAdvanceAdjustment;
	float ___cSpace;
	float ___mSpace;
	TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* ___textInfo;
	TMP_LineInfo_tB75C1965B58DB7B3A046C8CA55AD6AB92B6B17B3 ___lineInfo;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___vertexColor;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___underlineColor;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___strikethroughColor;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___highlightColor;
	TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC ___basicStyleStack;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___italicAngleStack;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___colorStack;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___underlineColorStack;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___strikethroughColorStack;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___highlightColorStack;
	TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D ___highlightStateStack;
	TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C ___colorGradientStack;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___sizeStack;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___indentStack;
	TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 ___fontWeightStack;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___styleStack;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___baselineStack;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___actionStack;
	TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 ___materialReferenceStack;
	TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 ___lineJustificationStack;
	int32_t ___spriteAnimationID;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___currentFontAsset;
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___currentSpriteAsset;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___currentMaterial;
	int32_t ___currentMaterialIndex;
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___meshExtents;
	int32_t ___tagNoParsing;
	int32_t ___isNonBreakingSpace;
};
struct AccessibilityProvider_tED15C3EB0977856F8B4828DFCAD18A7ED3AF6716  : public Provider_t6B89658FF42BACD2F4C91E0ABFF9D2DA6DE3D60A
{
	AccessibilitySubsystemConfig_t04BF4C96175B11A0C996CDD69CA75C82A8B645C3* ___U3CConfigU3Ek__BackingField;
	Dictionary_2_tE1D19D0AA81D718342812CD900CBF4D4C298AF8E* ___accessibleObjects;
	bool ___invertTextColor;
	Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* ___InvertTextColorChanged;
};
struct TMP_TextProcessingStack_1_t2DDA00FFC64AF6E3AFD475AB2086D16C34787E0F 
{
	WordWrapStateU5BU5D_t473D59C9DBCC949CE72EF1EB471CBA152A6CEAC9* ___itemStack;
	int32_t ___index;
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_DefaultItem;
	int32_t ___m_Capacity;
	int32_t ___m_RolloverSize;
	int32_t ___m_Count;
};
struct AccessibilitySubsystemConfig_t04BF4C96175B11A0C996CDD69CA75C82A8B645C3  : public BaseSubsystemConfig_t45DE317EA7641CB136203849EDA560353093B13A
{
	bool ___invertTextColor;
};
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
	CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B* ___m_CancellationTokenSource;
};
struct AccessibleObject_t0223569CC040AD2AB2F90BEAE62CEA22CC0F9675  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	AccessibleObjectClassification_t48AAC4E76C1D9AA7E8CFB11F30B54DC795646ED9* ___classification;
	String_t* ___contents;
	String_t* ___contentSummary;
	String_t* ___description;
	String_t* ___instructions;
	bool ___isContextuallyRelevant;
	ObjectRole_tA769A97007F1FAAC073D12B94CDBD0CED6743438* ___role;
	String_t* ___semantic;
};
struct TextAccessibility_t6BF564AD435E02350F6019627AB366FB8E54F126  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	AccessibilitySubsystem_t26A604A92BAA7AB49AE390E0005A789720443582* ___accessibilitySubsystem;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material;
};
struct UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};
struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931  : public UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D
{
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_Material;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_Color;
	bool ___m_SkipLayoutUpdate;
	bool ___m_SkipMaterialUpdate;
	bool ___m_RaycastTarget;
	bool ___m_RaycastTargetCache;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___m_RaycastPadding;
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_RectTransform;
	CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860* ___m_CanvasRenderer;
	Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* ___m_Canvas;
	bool ___m_VertsDirty;
	bool ___m_MaterialDirty;
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyLayoutCallback;
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyVertsCallback;
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyMaterialCallback;
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___m_CachedMesh;
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___m_CachedUvs;
	TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4* ___m_ColorTweenRunner;
	bool ___U3CuseLegacyMeshGenerationU3Ek__BackingField;
};
struct MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E  : public Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931
{
	bool ___m_ShouldRecalculateStencil;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_MaskMaterial;
	RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670* ___m_ParentMask;
	bool ___m_Maskable;
	bool ___m_IsMaskingGraphic;
	bool ___m_IncludeForMasking;
	CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8* ___m_OnCullStateChanged;
	bool ___m_ShouldRecalculate;
	int32_t ___m_StencilValue;
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_Corners;
};
struct TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9  : public MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E
{
	String_t* ___m_text;
	bool ___m_IsTextBackingStringDirty;
	RuntimeObject* ___m_TextPreprocessor;
	bool ___m_isRightToLeft;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___m_fontAsset;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___m_currentFontAsset;
	bool ___m_isSDFShader;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_sharedMaterial;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_currentMaterial;
	int32_t ___m_currentMaterialIndex;
	MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* ___m_fontSharedMaterials;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_fontMaterial;
	MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* ___m_fontMaterials;
	bool ___m_isMaterialDirty;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_fontColor32;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_fontColor;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_underlineColor;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_strikethroughColor;
	bool ___m_enableVertexGradient;
	int32_t ___m_colorMode;
	VertexGradient_t2C057B53C0EA6E987C2B7BAB0305E686DA1C9A8F ___m_fontColorGradient;
	TMP_ColorGradient_t17B51752B4E9499A1FF7D875DCEC1D15A0F4AEBB* ___m_fontColorGradientPreset;
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___m_spriteAsset;
	bool ___m_tintAllSprites;
	bool ___m_tintSprite;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_spriteColor;
	TMP_StyleSheet_t70C71699F5CB2D855C361DBB78A44C901236C859* ___m_StyleSheet;
	TMP_Style_tA9E5B1B35EBFE24EF980CEA03251B638282E120C* ___m_TextStyle;
	int32_t ___m_TextStyleHashCode;
	bool ___m_overrideHtmlColors;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_faceColor;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_outlineColor;
	float ___m_outlineWidth;
	float ___m_fontSize;
	float ___m_currentFontSize;
	float ___m_fontSizeBase;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___m_sizeStack;
	int32_t ___m_fontWeight;
	int32_t ___m_FontWeightInternal;
	TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 ___m_FontWeightStack;
	bool ___m_enableAutoSizing;
	float ___m_maxFontSize;
	float ___m_minFontSize;
	int32_t ___m_AutoSizeIterationCount;
	int32_t ___m_AutoSizeMaxIterationCount;
	bool ___m_IsAutoSizePointSizeSet;
	float ___m_fontSizeMin;
	float ___m_fontSizeMax;
	int32_t ___m_fontStyle;
	int32_t ___m_FontStyleInternal;
	TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC ___m_fontStyleStack;
	bool ___m_isUsingBold;
	int32_t ___m_HorizontalAlignment;
	int32_t ___m_VerticalAlignment;
	int32_t ___m_textAlignment;
	int32_t ___m_lineJustification;
	TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 ___m_lineJustificationStack;
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_textContainerLocalCorners;
	float ___m_characterSpacing;
	float ___m_cSpacing;
	float ___m_monoSpacing;
	float ___m_wordSpacing;
	float ___m_lineSpacing;
	float ___m_lineSpacingDelta;
	float ___m_lineHeight;
	bool ___m_IsDrivenLineSpacing;
	float ___m_lineSpacingMax;
	float ___m_paragraphSpacing;
	float ___m_charWidthMaxAdj;
	float ___m_charWidthAdjDelta;
	bool ___m_enableWordWrapping;
	bool ___m_isCharacterWrappingEnabled;
	bool ___m_isNonBreakingSpace;
	bool ___m_isIgnoringAlignment;
	float ___m_wordWrappingRatios;
	int32_t ___m_overflowMode;
	int32_t ___m_firstOverflowCharacterIndex;
	TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* ___m_linkedTextComponent;
	TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* ___parentLinkedComponent;
	bool ___m_isTextTruncated;
	bool ___m_enableKerning;
	float ___m_GlyphHorizontalAdvanceAdjustment;
	bool ___m_enableExtraPadding;
	bool ___checkPaddingRequired;
	bool ___m_isRichText;
	bool ___m_parseCtrlCharacters;
	bool ___m_isOverlay;
	bool ___m_isOrthographic;
	bool ___m_isCullingEnabled;
	bool ___m_isMaskingEnabled;
	bool ___isMaskUpdateRequired;
	bool ___m_ignoreCulling;
	int32_t ___m_horizontalMapping;
	int32_t ___m_verticalMapping;
	float ___m_uvLineOffset;
	int32_t ___m_renderMode;
	int32_t ___m_geometrySortingOrder;
	bool ___m_IsTextObjectScaleStatic;
	bool ___m_VertexBufferAutoSizeReduction;
	int32_t ___m_firstVisibleCharacter;
	int32_t ___m_maxVisibleCharacters;
	int32_t ___m_maxVisibleWords;
	int32_t ___m_maxVisibleLines;
	bool ___m_useMaxVisibleDescender;
	int32_t ___m_pageToDisplay;
	bool ___m_isNewPage;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___m_margin;
	float ___m_marginLeft;
	float ___m_marginRight;
	float ___m_marginWidth;
	float ___m_marginHeight;
	float ___m_width;
	TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* ___m_textInfo;
	bool ___m_havePropertiesChanged;
	bool ___m_isUsingLegacyAnimationComponent;
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_transform;
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_rectTransform;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_PreviousRectTransformSize;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_PreviousPivotPosition;
	bool ___U3CautoSizeTextContainerU3Ek__BackingField;
	bool ___m_autoSizeTextContainer;
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___m_mesh;
	bool ___m_isVolumetricText;
	Action_1_tB93AB717F9D419A1BEC832FF76E74EAA32184CC1* ___OnPreRenderText;
	TMP_SpriteAnimator_t2E0F016A61CA343E3222FF51E7CF0E53F9F256E4* ___m_spriteAnimator;
	float ___m_flexibleHeight;
	float ___m_flexibleWidth;
	float ___m_minWidth;
	float ___m_minHeight;
	float ___m_maxWidth;
	float ___m_maxHeight;
	LayoutElement_tB1F24CC11AF4AA87015C8D8EE06D22349C5BF40A* ___m_LayoutElement;
	float ___m_preferredWidth;
	float ___m_renderedWidth;
	bool ___m_isPreferredWidthDirty;
	float ___m_preferredHeight;
	float ___m_renderedHeight;
	bool ___m_isPreferredHeightDirty;
	bool ___m_isCalculatingPreferredValues;
	int32_t ___m_layoutPriority;
	bool ___m_isLayoutDirty;
	bool ___m_isAwake;
	bool ___m_isWaitingOnResourceLoad;
	int32_t ___m_inputSource;
	float ___m_fontScaleMultiplier;
	float ___tag_LineIndent;
	float ___tag_Indent;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___m_indentStack;
	bool ___tag_NoParsing;
	bool ___m_isParsingText;
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___m_FXMatrix;
	bool ___m_isFXMatrixSet;
	UnicodeCharU5BU5D_t67F27D09F8EB28D2C42DFF16FE60054F157012F5* ___m_TextProcessingArray;
	int32_t ___m_InternalTextProcessingArraySize;
	TMP_CharacterInfoU5BU5D_t297D56FCF66DAA99D8FEA7C30F9F3926902C5B99* ___m_internalCharacterInfo;
	int32_t ___m_totalCharacterCount;
	int32_t ___m_characterCount;
	int32_t ___m_firstCharacterOfLine;
	int32_t ___m_firstVisibleCharacterOfLine;
	int32_t ___m_lastCharacterOfLine;
	int32_t ___m_lastVisibleCharacterOfLine;
	int32_t ___m_lineNumber;
	int32_t ___m_lineVisibleCharacterCount;
	int32_t ___m_pageNumber;
	float ___m_PageAscender;
	float ___m_maxTextAscender;
	float ___m_maxCapHeight;
	float ___m_ElementAscender;
	float ___m_ElementDescender;
	float ___m_maxLineAscender;
	float ___m_maxLineDescender;
	float ___m_startOfLineAscender;
	float ___m_startOfLineDescender;
	float ___m_lineOffset;
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___m_meshExtents;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_htmlColor;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___m_colorStack;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___m_underlineColorStack;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___m_strikethroughColorStack;
	TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D ___m_HighlightStateStack;
	TMP_ColorGradient_t17B51752B4E9499A1FF7D875DCEC1D15A0F4AEBB* ___m_colorGradientPreset;
	TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C ___m_colorGradientStack;
	bool ___m_colorGradientPresetIsTinted;
	float ___m_tabSpacing;
	float ___m_spacing;
	TMP_TextProcessingStack_1U5BU5D_t08293E0BB072311BB96170F351D1083BCA97B9B2* ___m_TextStyleStacks;
	int32_t ___m_TextStyleStackDepth;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___m_ItalicAngleStack;
	int32_t ___m_ItalicAngle;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___m_actionStack;
	float ___m_padding;
	float ___m_baselineOffset;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___m_baselineOffsetStack;
	float ___m_xAdvance;
	int32_t ___m_textElementType;
	TMP_TextElement_t262A55214F712D4274485ABE5676E5254B84D0A5* ___m_cached_TextElement;
	SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777 ___m_Ellipsis;
	SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777 ___m_Underline;
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___m_defaultSpriteAsset;
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___m_currentSpriteAsset;
	int32_t ___m_spriteCount;
	int32_t ___m_spriteIndex;
	int32_t ___m_spriteAnimationID;
	bool ___m_ignoreActiveState;
	TextBackingContainer_t33D1CE628E7B26C45EDAC1D87BEF2DD22A5C6361 ___m_TextBackingArray;
	DecimalU5BU5D_t93BA0C88FA80728F73B792EE1A5199D0C060B615* ___k_Power;
};
struct List_1_t3F33A8B72EA0ADD649C3EDDA8DCA89789DEBA09C_StaticFields
{
	AccessibleObjectClassificationU5BU5D_tA4DC2401749541EF78C5E850D68A4BD5D2720F4C* ___s_emptyArray;
};
struct List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B_StaticFields
{
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* ___s_emptyArray;
};
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D_StaticFields
{
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___s_emptyArray;
};
struct U3CPrivateImplementationDetailsU3E_t76D3D5B88CE5A56F800440C413335495B3E694C6_StaticFields
{
	__StaticArrayInitTypeSizeU3D916_tF112004A5828D5F5231698D0AB291DFE74AA7E9E ___B87180DE4EDED6B182B5F53341706668371CB84D1ABAB0F05B310058A4995C7C;
	__StaticArrayInitTypeSizeU3D1294_t5559C52A32667C4538C17D41235D24FC35A72A32 ___C66327DA6927415FA81D8359F89BA468D920FEF648351C5D42FEE7413FEC07A4;
};
struct AccessibilityHelpers_t8CFD641C8E88DFC48B4AB10FB6785970B773D6CE_StaticFields
{
	AccessibilitySubsystem_t26A604A92BAA7AB49AE390E0005A789720443582* ___subsystem;
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
struct IntPtr_t_StaticFields
{
	intptr_t ___Zero;
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
struct MRTKSubsystem_3_t057DB79908BCA9C22BB5ED3F4421C19D4E3C89A1_StaticFields
{
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___UpdatePerfMarker;
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___LateUpdatePerfMarker;
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___FixedUpdatePerfMarker;
};
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticFields
{
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject;
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
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_StaticFields
{
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPreCull;
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPreRender;
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPostRender;
};
struct AccessibleObject_t0223569CC040AD2AB2F90BEAE62CEA22CC0F9675_StaticFields
{
	bool ___suppressSubsystemNotFound;
};
struct TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9_StaticFields
{
	MaterialReferenceU5BU5D_t7491D335AB3E3E13CE9C0F5E931F396F6A02E1F2* ___m_materialReferences;
	Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180* ___m_materialReferenceIndexLookup;
	TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 ___m_materialReferenceStack;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___s_colorWhite;
	Func_3_tC721DF8CDD07ED66A4833A19A2ED2302608C906C* ___OnFontAssetRequest;
	Func_3_t6F6D9932638EA1A5A45303C6626C818C25D164E5* ___OnSpriteAssetRequest;
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___m_htmlTag;
	RichTextTagAttributeU5BU5D_t5816316EFD8F59DBC30B9F88E15828C564E47B6D* ___m_xmlAttribute;
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___m_attributeParameterValues;
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedWordWrapState;
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedLineState;
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedEllipsisState;
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedLastValidState;
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedSoftLineBreakState;
	TMP_TextProcessingStack_1_t2DDA00FFC64AF6E3AFD475AB2086D16C34787E0F ___m_EllipsisInsertionCandidateStack;
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_ParseTextMarker;
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_InsertNewLineMarker;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___k_LargePositiveVector2;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___k_LargeNegativeVector2;
	float ___k_LargePositiveFloat;
	float ___k_LargeNegativeFloat;
	int32_t ___k_LargePositiveInt;
	int32_t ___k_LargeNegativeInt;
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


IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MRTKSubsystem_3__ctor_m341C28CE0238F15E3509D746AFBAC5D1717A1617_gshared (MRTKSubsystem_3_tC6F5612EAD44F0EC50AF80375D83C3337116F6A8* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* SubsystemWithProvider_3_get_provider_m963D70D839CE42A2C17A2C183A61C25F0E2C6732_gshared_inline (SubsystemWithProvider_3_t548D9C2A4778C7ADB62496A2A07F8B7563309893* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MRTKSubsystemProvider_1__ctor_mBAE6618278D72569444010ECF6C9B01DDBD156E2_gshared (MRTKSubsystemProvider_1_tC08188F41A5C4CC25C7CA1DC3A76C6D9DE5290D6* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SubsystemDescriptorWithProvider_2__ctor_m639DDEEB52B0E73AD96D610D0DC16CF0E9D0BEA2_gshared (SubsystemDescriptorWithProvider_2_tDBA1506DD7EBA024E21E2A6CAF1B5CE3DA9DFF07* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRSubsystemHelpers_CheckTypes_TisRuntimeObject_TisRuntimeObject_m278F3FCEAA8C04FFCE843545BD7BC34894367760_gshared (String_t* ___0_name, Type_t* ___1_subsystemTypeOverride, Type_t* ___2_providerType, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AccessibilitySubsystemCinfo_tCF25C9AEB9158D1CCC734DBF683F94EF917F3FAB XRSubsystemHelpers_ConstructCinfo_TisRuntimeObject_TisAccessibilitySubsystemCinfo_tCF25C9AEB9158D1CCC734DBF683F94EF917F3FAB_m0A52DD95E973EF4A86C99B7B222FB9E4C108D8D2_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* XRSubsystemHelpers_GetConfiguration_TisRuntimeObject_TisRuntimeObject_m8EB21D75A7CC263ACBF63D3B36DD185D3F98894A_gshared (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Clear_m16C1F2C61FED5955F10EB36BC1CB2DF34B128994_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyCollection_tB45A861D090B15129521119AE48ED3813820A974* Dictionary_2_get_Keys_m72D290F90654BFD683FA7AA7C63D9F4F692218B6_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_AddRange_m1F76B300133150E6046C5FED00E88B5DE0A02E17_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___0_collection, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueCollection_t038245E04B5D2A80048D9F8021A23E69A0C9DBAA* Dictionary_2_get_Values_mA0C01DEA55329E55380E96BBD04D4D228B437EC5_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t44124D16E0B2F7308FF4069BE06369B5A83896EB ValueCollection_GetEnumerator_m025EE28BE2F31676E08BC3D7C8E39D8232BDBBF8_gshared (ValueCollection_t038245E04B5D2A80048D9F8021A23E69A0C9DBAA* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mFD8FAB8D9FF5EDF9AE3B14CF539A8A34AA9527A8_gshared (Enumerator_t44124D16E0B2F7308FF4069BE06369B5A83896EB* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_mB407E755F3B4C51C54D24338D00A352E5B16E7F3_gshared_inline (Enumerator_t44124D16E0B2F7308FF4069BE06369B5A83896EB* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mBE11DA1DAFC756EB87E884AADC5EDC4BB72FB032_gshared (Enumerator_t44124D16E0B2F7308FF4069BE06369B5A83896EB* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsKey_m703047C213F7AB55C9DC346596287773A1F670CD_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___0_key, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_m93FFFABE8FCE7FA9793F0915E2A8842C7CD0C0C1_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_get_Item_m4AAAECBE902A211BF2126E6AFA280AEF73A3E0D6_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___0_key, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Contains_m4C9139C2A6B23E9343D3F87807B32C6E2CFE660D_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Remove_m4DFA48F4CEB9169601E75FC28517C5C06EFA5AD7_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___0_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GameObject_TryGetComponent_TisRuntimeObject_m4D430300D2DFB9276DE980D78F60A05D271D3630_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, RuntimeObject** ___0_component, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_m69C8773D6967F3B224777183E24EA621CE056F8F_gshared_inline (Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* __this, bool ___0_obj, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* XRSubsystemHelpers_GetFirstRunningSubsystem_TisRuntimeObject_m82D3DF1AA85D404A0BEAC7E9F19B938B2C1E8AC0_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Component_TryGetComponent_TisRuntimeObject_m69D4ED21F14D49D805A2337F4332934CDA07DEDB_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, RuntimeObject** ___0_component, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1__ctor_mA8C3AC97D1F076EA5D1D0C10CEE6BD3E94711501_gshared (Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void List_1_AddWithResize_m79A9BF770BEF9C06BE40D5401E55E375F2726CC4_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) ;

IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RuntimeHelpers_InitializeArray_m751372AA3F24FBF6DA9B9D687CBFA2DE436CAB9B (RuntimeArray* ___0_array, RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 ___1_fldHandle, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
inline void MRTKSubsystem_3__ctor_m347BAFB23B611CEAAAD615475078169C74B32E04 (MRTKSubsystem_3_t057DB79908BCA9C22BB5ED3F4421C19D4E3C89A1* __this, const RuntimeMethod* method)
{
	((  void (*) (MRTKSubsystem_3_t057DB79908BCA9C22BB5ED3F4421C19D4E3C89A1*, const RuntimeMethod*))MRTKSubsystem_3__ctor_m341C28CE0238F15E3509D746AFBAC5D1717A1617_gshared)(__this, method);
}
inline Provider_t6B89658FF42BACD2F4C91E0ABFF9D2DA6DE3D60A* SubsystemWithProvider_3_get_provider_m4F14FD0B82B8F315AAFE7E700230C5B5D5F6B038_inline (SubsystemWithProvider_3_tF6354EEABB229041BC6BBAEABA61FA71F76B3674* __this, const RuntimeMethod* method)
{
	return ((  Provider_t6B89658FF42BACD2F4C91E0ABFF9D2DA6DE3D60A* (*) (SubsystemWithProvider_3_tF6354EEABB229041BC6BBAEABA61FA71F76B3674*, const RuntimeMethod*))SubsystemWithProvider_3_get_provider_m963D70D839CE42A2C17A2C183A61C25F0E2C6732_gshared_inline)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AccessibilitySubsystemDescriptor_t366293770CE03F66419FAB2461E0D33BCE4CDCF1* AccessibilitySubsystemDescriptor_Create_m13D5FA518F88AFBC27B603EFD3E2DAE6AC11B4D9 (AccessibilitySubsystemCinfo_tCF25C9AEB9158D1CCC734DBF683F94EF917F3FAB ___0_cinfo, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SubsystemDescriptorStore_RegisterDescriptor_m6DEC96199F95ACCD68822060CEB79CA77AF44F12 (SubsystemDescriptorWithProvider_t2A61A2C951A4A179E898CF207726BF6B5AF474D5* ___0_descriptor, const RuntimeMethod* method) ;
inline void MRTKSubsystemProvider_1__ctor_m6FEDBFA34FB3B9BDBC5E4CD1D046FDFC84F5B34C (MRTKSubsystemProvider_1_tA1BCC59B43276DC9E4D7789F187D4365A6998E3B* __this, const RuntimeMethod* method)
{
	((  void (*) (MRTKSubsystemProvider_1_tA1BCC59B43276DC9E4D7789F187D4365A6998E3B*, const RuntimeMethod*))MRTKSubsystemProvider_1__ctor_mBAE6618278D72569444010ECF6C9B01DDBD156E2_gshared)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseSubsystemConfig__ctor_mA76AF075FD5292FF470A73700ACF7CBB83079970 (BaseSubsystemConfig_t45DE317EA7641CB136203849EDA560353093B13A* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* AccessibilitySubsystemCinfo_get_Name_m7BA15E44E11886098AA8EA821FA2B0D8CA6D3F69_inline (AccessibilitySubsystemCinfo_tCF25C9AEB9158D1CCC734DBF683F94EF917F3FAB* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AccessibilitySubsystemCinfo_set_Name_m54B2AAF7136105A464C28A65A767850BCC9D28DE_inline (AccessibilitySubsystemCinfo_tCF25C9AEB9158D1CCC734DBF683F94EF917F3FAB* __this, String_t* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* AccessibilitySubsystemCinfo_get_DisplayName_m1C3CADDFDDFF05FF5E06B578B817C79ECEE3A964_inline (AccessibilitySubsystemCinfo_tCF25C9AEB9158D1CCC734DBF683F94EF917F3FAB* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AccessibilitySubsystemCinfo_set_DisplayName_mF4B2888EB0B9CC079304C763202B433B9B64C08C_inline (AccessibilitySubsystemCinfo_tCF25C9AEB9158D1CCC734DBF683F94EF917F3FAB* __this, String_t* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* AccessibilitySubsystemCinfo_get_Author_mB23C2F600D79473293FE3F4DDE478668EE588665_inline (AccessibilitySubsystemCinfo_tCF25C9AEB9158D1CCC734DBF683F94EF917F3FAB* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AccessibilitySubsystemCinfo_set_Author_m4A54DBB53320F9B0799D1C0004DAE344C8D878CA_inline (AccessibilitySubsystemCinfo_tCF25C9AEB9158D1CCC734DBF683F94EF917F3FAB* __this, String_t* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Type_t* AccessibilitySubsystemCinfo_get_ConfigType_m5825C91DED37520EE451694F04D3017425F362D9_inline (AccessibilitySubsystemCinfo_tCF25C9AEB9158D1CCC734DBF683F94EF917F3FAB* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AccessibilitySubsystemCinfo_set_ConfigType_m1C88D3720C41C9FC6119AF8E9CA16CF0D2A5A314_inline (AccessibilitySubsystemCinfo_tCF25C9AEB9158D1CCC734DBF683F94EF917F3FAB* __this, Type_t* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Type_t* AccessibilitySubsystemCinfo_get_ProviderType_m4B965C0720F4FCAB71FDE2E1BF4432847A0E1C1B_inline (AccessibilitySubsystemCinfo_tCF25C9AEB9158D1CCC734DBF683F94EF917F3FAB* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AccessibilitySubsystemCinfo_set_ProviderType_mCDC3B7F3086F0A22F733146CD575C502735ECF7F_inline (AccessibilitySubsystemCinfo_tCF25C9AEB9158D1CCC734DBF683F94EF917F3FAB* __this, Type_t* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Type_t* AccessibilitySubsystemCinfo_get_SubsystemTypeOverride_m8C9D503648BE2A02681BF586F56DCCE002B3DEAF_inline (AccessibilitySubsystemCinfo_tCF25C9AEB9158D1CCC734DBF683F94EF917F3FAB* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AccessibilitySubsystemCinfo_set_SubsystemTypeOverride_mAFD4D08EBA60CA1B62FF06B43AED9C3CD6D4B2F3_inline (AccessibilitySubsystemCinfo_tCF25C9AEB9158D1CCC734DBF683F94EF917F3FAB* __this, Type_t* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AccessibilitySubsystemCinfo_Equals_m49E691E268E8996616A9BA9E85983707394C2DD6 (AccessibilitySubsystemCinfo_tCF25C9AEB9158D1CCC734DBF683F94EF917F3FAB* __this, AccessibilitySubsystemCinfo_tCF25C9AEB9158D1CCC734DBF683F94EF917F3FAB ___0_other, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AccessibilitySubsystemCinfo_Equals_m1BD3A23EAD9C33D50355D94B6FA45A727D8CFC42 (AccessibilitySubsystemCinfo_tCF25C9AEB9158D1CCC734DBF683F94EF917F3FAB* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AccessibilitySubsystemCinfo_op_Equality_m131E9119C6C3C0DF060F5E0444BE0B869E61BFA1 (AccessibilitySubsystemCinfo_tCF25C9AEB9158D1CCC734DBF683F94EF917F3FAB ___0_lhs, AccessibilitySubsystemCinfo_tCF25C9AEB9158D1CCC734DBF683F94EF917F3FAB ___1_rhs, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ApplicationException__ctor_mE51100DFCDB0A0DF23B482CC43EC8E396BE7BE82 (ApplicationException_tA744BED4E90266BD255285CD4CF909BAB3EE811A* __this, String_t* ___0_message, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AccessibilitySubsystemCinfo_GetHashCode_mB84786CBF53EF4A9B060D109E71B73C705B7FF09 (AccessibilitySubsystemCinfo_tCF25C9AEB9158D1CCC734DBF683F94EF917F3FAB* __this, const RuntimeMethod* method) ;
inline void SubsystemDescriptorWithProvider_2__ctor_m550CA2FD8B49E27F199025B8D00180D0CBA5BD70 (SubsystemDescriptorWithProvider_2_tC4502634FFCB447A8B24CF8C693DCC68195C7D2A* __this, const RuntimeMethod* method)
{
	((  void (*) (SubsystemDescriptorWithProvider_2_tC4502634FFCB447A8B24CF8C693DCC68195C7D2A*, const RuntimeMethod*))SubsystemDescriptorWithProvider_2__ctor_m639DDEEB52B0E73AD96D610D0DC16CF0E9D0BEA2_gshared)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AccessibilitySubsystemDescriptor_set_Name_mEFFA92DCB7010EF0D62CFA93CF66C7FE89995A35 (AccessibilitySubsystemDescriptor_t366293770CE03F66419FAB2461E0D33BCE4CDCF1* __this, String_t* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AccessibilitySubsystemDescriptor_set_DisplayName_m229717C0C39B818FA4640EF6BBE1A62F32F172E8_inline (AccessibilitySubsystemDescriptor_t366293770CE03F66419FAB2461E0D33BCE4CDCF1* __this, String_t* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AccessibilitySubsystemDescriptor_set_Author_m591A68F34AC959997975F6C2C35C4F7B9995E675_inline (AccessibilitySubsystemDescriptor_t366293770CE03F66419FAB2461E0D33BCE4CDCF1* __this, String_t* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AccessibilitySubsystemDescriptor_set_ProviderType_mAFC2AE75ADD111813929CB2345C459A474CEF14A (AccessibilitySubsystemDescriptor_t366293770CE03F66419FAB2461E0D33BCE4CDCF1* __this, Type_t* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AccessibilitySubsystemDescriptor_set_SubsystemTypeOverride_m42CE8C9FDCEC0043F91A21D048593EA54C13AB9E (AccessibilitySubsystemDescriptor_t366293770CE03F66419FAB2461E0D33BCE4CDCF1* __this, Type_t* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* SubsystemDescriptorWithProvider_get_id_m9E92FDF45FE9BFB0B28C2AE3EFE475998D01BBC7_inline (SubsystemDescriptorWithProvider_t2A61A2C951A4A179E898CF207726BF6B5AF474D5* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SubsystemDescriptorWithProvider_set_id_m4E93140B46C960FFB4723062C55D05D7B551A57B_inline (SubsystemDescriptorWithProvider_t2A61A2C951A4A179E898CF207726BF6B5AF474D5* __this, String_t* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Type_t* SubsystemDescriptorWithProvider_get_providerType_m1ED8F898361B508FFE2A46D05E81CEAC43B040D4_inline (SubsystemDescriptorWithProvider_t2A61A2C951A4A179E898CF207726BF6B5AF474D5* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SubsystemDescriptorWithProvider_set_providerType_m27A630CAFBA225796667E17DE114673056339EA4_inline (SubsystemDescriptorWithProvider_t2A61A2C951A4A179E898CF207726BF6B5AF474D5* __this, Type_t* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Type_t* SubsystemDescriptorWithProvider_get_subsystemTypeOverride_mCE84F1611CB09975FBB4BE48E015316ADDB52668_inline (SubsystemDescriptorWithProvider_t2A61A2C951A4A179E898CF207726BF6B5AF474D5* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SubsystemDescriptorWithProvider_set_subsystemTypeOverride_m34C15BBBE4EB41226EF1C0A0C8BB73A0955E0F3E_inline (SubsystemDescriptorWithProvider_t2A61A2C951A4A179E898CF207726BF6B5AF474D5* __this, Type_t* ___0_value, const RuntimeMethod* method) ;
inline bool XRSubsystemHelpers_CheckTypes_TisAccessibilitySubsystem_t26A604A92BAA7AB49AE390E0005A789720443582_TisProvider_t6B89658FF42BACD2F4C91E0ABFF9D2DA6DE3D60A_mFC88ADC53CB14101995C34E0BF2BD65E6791BB9D (String_t* ___0_name, Type_t* ___1_subsystemTypeOverride, Type_t* ___2_providerType, const RuntimeMethod* method)
{
	return ((  bool (*) (String_t*, Type_t*, Type_t*, const RuntimeMethod*))XRSubsystemHelpers_CheckTypes_TisRuntimeObject_TisRuntimeObject_m278F3FCEAA8C04FFCE843545BD7BC34894367760_gshared)(___0_name, ___1_subsystemTypeOverride, ___2_providerType, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465 (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* __this, String_t* ___0_message, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB (RuntimeObject* ___0_message, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AccessibilitySubsystemDescriptor__ctor_m1017F1BFFE0F471C44F9E8DCDCCD8EA52866279E (AccessibilitySubsystemDescriptor_t366293770CE03F66419FAB2461E0D33BCE4CDCF1* __this, AccessibilitySubsystemCinfo_tCF25C9AEB9158D1CCC734DBF683F94EF917F3FAB ___0_accessibilitySubsystemCinfo, const RuntimeMethod* method) ;
inline AccessibilitySubsystemCinfo_tCF25C9AEB9158D1CCC734DBF683F94EF917F3FAB XRSubsystemHelpers_ConstructCinfo_TisMRTKAccessibilitySubsystem_t18CB758CAB0BD6C5DDC4115125641F7EBAA8018F_TisAccessibilitySubsystemCinfo_tCF25C9AEB9158D1CCC734DBF683F94EF917F3FAB_m9FED92F08254D85C3BCB0B4D0ACA8E0CA4E04998 (const RuntimeMethod* method)
{
	return ((  AccessibilitySubsystemCinfo_tCF25C9AEB9158D1CCC734DBF683F94EF917F3FAB (*) (const RuntimeMethod*))XRSubsystemHelpers_ConstructCinfo_TisRuntimeObject_TisAccessibilitySubsystemCinfo_tCF25C9AEB9158D1CCC734DBF683F94EF917F3FAB_m0A52DD95E973EF4A86C99B7B222FB9E4C108D8D2_gshared)(method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AccessibilitySubsystem_Register_m7FE164349E7F04D107D53BCBBCEB5E34695239D3 (AccessibilitySubsystemCinfo_tCF25C9AEB9158D1CCC734DBF683F94EF917F3FAB ___0_accessibilitySubsystemParams, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B (String_t* ___0_str0, String_t* ___1_str1, String_t* ___2_str2, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2 (RuntimeObject* ___0_message, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AccessibilitySubsystem__ctor_m346280A1856D314E104FD4688F97D970CB692AE6 (AccessibilitySubsystem_t26A604A92BAA7AB49AE390E0005A789720443582* __this, const RuntimeMethod* method) ;
inline void Dictionary_2__ctor_mC921F0A6E3AEDBFBCFB8814339BAE1322DD2ABDC (Dictionary_2_tE1D19D0AA81D718342812CD900CBF4D4C298AF8E* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tE1D19D0AA81D718342812CD900CBF4D4C298AF8E*, const RuntimeMethod*))Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_gshared)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Provider__ctor_mB4F3702935FBE59EE119EECC559DEAFB0BFDA904 (Provider_t6B89658FF42BACD2F4C91E0ABFF9D2DA6DE3D60A* __this, const RuntimeMethod* method) ;
inline AccessibilitySubsystemConfig_t04BF4C96175B11A0C996CDD69CA75C82A8B645C3* XRSubsystemHelpers_GetConfiguration_TisAccessibilitySubsystemConfig_t04BF4C96175B11A0C996CDD69CA75C82A8B645C3_TisMRTKAccessibilitySubsystem_t18CB758CAB0BD6C5DDC4115125641F7EBAA8018F_mC0212D83AED30A16AD3BD0C9812DB75CF94FBCC1 (const RuntimeMethod* method)
{
	return ((  AccessibilitySubsystemConfig_t04BF4C96175B11A0C996CDD69CA75C82A8B645C3* (*) (const RuntimeMethod*))XRSubsystemHelpers_GetConfiguration_TisRuntimeObject_TisRuntimeObject_m8EB21D75A7CC263ACBF63D3B36DD185D3F98894A_gshared)(method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR AccessibilitySubsystemConfig_t04BF4C96175B11A0C996CDD69CA75C82A8B645C3* AccessibilityProvider_get_Config_m8BDDBA8D863454381F67C1D5AB92E2BFF20CFD1D_inline (AccessibilityProvider_tED15C3EB0977856F8B4828DFCAD18A7ED3AF6716* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool AccessibilitySubsystemConfig_get_InvertTextColor_m99AE5F060B8439274802FCFEC0695DAC12C2CB40_inline (AccessibilitySubsystemConfig_t04BF4C96175B11A0C996CDD69CA75C82A8B645C3* __this, const RuntimeMethod* method) ;
inline void List_1_Clear_m32D399BDD753B5BD6CE27560249096418F3F0867_inline (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B*, const RuntimeMethod*))List_1_Clear_m16C1F2C61FED5955F10EB36BC1CB2DF34B128994_gshared_inline)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AccessibilityProvider_AssembleAccessibleObjects_m4D306FFD496179B967A3339305B4C69F9E6AFB0D (AccessibilityProvider_tED15C3EB0977856F8B4828DFCAD18A7ED3AF6716* __this, List_1_t3F33A8B72EA0ADD649C3EDDA8DCA89789DEBA09C* ___0_classifications, List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* ___1_accessibleObjectsList, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AccessibilityProvider_FilterAccessibleObjects_m01D01B98B708732F7B9773926F456645BCC12AE5 (AccessibilityProvider_tED15C3EB0977856F8B4828DFCAD18A7ED3AF6716* __this, int32_t ___0_visibility, float ___1_maxDistance, List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* ___2_objectList, const RuntimeMethod* method) ;
inline void List_1_Clear_mC8BB955AE59B04F0EAF93471507EEE766D066516_inline (List_1_t3F33A8B72EA0ADD649C3EDDA8DCA89789DEBA09C* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t3F33A8B72EA0ADD649C3EDDA8DCA89789DEBA09C*, const RuntimeMethod*))List_1_Clear_m16C1F2C61FED5955F10EB36BC1CB2DF34B128994_gshared_inline)(__this, method);
}
inline KeyCollection_tF1DFF34D6882A27E9FE9CBAF10A79F298D6BEC85* Dictionary_2_get_Keys_m7B5DDF7BCC66529C9DC6E9C39BAD534182492AD8 (Dictionary_2_tE1D19D0AA81D718342812CD900CBF4D4C298AF8E* __this, const RuntimeMethod* method)
{
	return ((  KeyCollection_tF1DFF34D6882A27E9FE9CBAF10A79F298D6BEC85* (*) (Dictionary_2_tE1D19D0AA81D718342812CD900CBF4D4C298AF8E*, const RuntimeMethod*))Dictionary_2_get_Keys_m72D290F90654BFD683FA7AA7C63D9F4F692218B6_gshared)(__this, method);
}
inline void List_1_AddRange_m3452DB888275C4F2F551F5EA575B97E5BD7E077C (List_1_t3F33A8B72EA0ADD649C3EDDA8DCA89789DEBA09C* __this, RuntimeObject* ___0_collection, const RuntimeMethod* method)
{
	((  void (*) (List_1_t3F33A8B72EA0ADD649C3EDDA8DCA89789DEBA09C*, RuntimeObject*, const RuntimeMethod*))List_1_AddRange_m1F76B300133150E6046C5FED00E88B5DE0A02E17_gshared)(__this, ___0_collection, method);
}
inline ValueCollection_tAE64CCEC60B5F147734777C2F91A95E9FDE4C7A7* Dictionary_2_get_Values_mB8994FB01D5326868F236A779F2DF4E5BAC10D7A (Dictionary_2_tE1D19D0AA81D718342812CD900CBF4D4C298AF8E* __this, const RuntimeMethod* method)
{
	return ((  ValueCollection_tAE64CCEC60B5F147734777C2F91A95E9FDE4C7A7* (*) (Dictionary_2_tE1D19D0AA81D718342812CD900CBF4D4C298AF8E*, const RuntimeMethod*))Dictionary_2_get_Values_mA0C01DEA55329E55380E96BBD04D4D228B437EC5_gshared)(__this, method);
}
inline Enumerator_tAFB46C81D6CE3638BC27A7CB79EE6033BA6D14A6 ValueCollection_GetEnumerator_mDFB5AD8B638E6EF2679CFAF9138B32296E811497 (ValueCollection_tAE64CCEC60B5F147734777C2F91A95E9FDE4C7A7* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_tAFB46C81D6CE3638BC27A7CB79EE6033BA6D14A6 (*) (ValueCollection_tAE64CCEC60B5F147734777C2F91A95E9FDE4C7A7*, const RuntimeMethod*))ValueCollection_GetEnumerator_m025EE28BE2F31676E08BC3D7C8E39D8232BDBBF8_gshared)(__this, method);
}
inline void Enumerator_Dispose_m4FEC06045F10D0643E3EB6DBBFB57844CDF58166 (Enumerator_tAFB46C81D6CE3638BC27A7CB79EE6033BA6D14A6* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tAFB46C81D6CE3638BC27A7CB79EE6033BA6D14A6*, const RuntimeMethod*))Enumerator_Dispose_mFD8FAB8D9FF5EDF9AE3B14CF539A8A34AA9527A8_gshared)(__this, method);
}
inline List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* Enumerator_get_Current_m658804DB42C0652E5963E8B12A95415AA17257ED_inline (Enumerator_tAFB46C81D6CE3638BC27A7CB79EE6033BA6D14A6* __this, const RuntimeMethod* method)
{
	return ((  List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* (*) (Enumerator_tAFB46C81D6CE3638BC27A7CB79EE6033BA6D14A6*, const RuntimeMethod*))Enumerator_get_Current_mB407E755F3B4C51C54D24338D00A352E5B16E7F3_gshared_inline)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m9E3155FB84015C823606188F53B47CB44C444991 (String_t* ___0_str0, String_t* ___1_str1, const RuntimeMethod* method) ;
inline bool Enumerator_MoveNext_mF04637E81CF819EBD5975E53102C923C17FFB3E1 (Enumerator_tAFB46C81D6CE3638BC27A7CB79EE6033BA6D14A6* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tAFB46C81D6CE3638BC27A7CB79EE6033BA6D14A6*, const RuntimeMethod*))Enumerator_MoveNext_mBE11DA1DAFC756EB87E884AADC5EDC4BB72FB032_gshared)(__this, method);
}
inline bool Dictionary_2_ContainsKey_m25BEAB34BCA70DF90CF8FFB48C90F4356C816B0B (Dictionary_2_tE1D19D0AA81D718342812CD900CBF4D4C298AF8E* __this, AccessibleObjectClassification_t48AAC4E76C1D9AA7E8CFB11F30B54DC795646ED9* ___0_key, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_tE1D19D0AA81D718342812CD900CBF4D4C298AF8E*, AccessibleObjectClassification_t48AAC4E76C1D9AA7E8CFB11F30B54DC795646ED9*, const RuntimeMethod*))Dictionary_2_ContainsKey_m703047C213F7AB55C9DC346596287773A1F670CD_gshared)(__this, ___0_key, method);
}
inline void List_1__ctor_m447372C1EF7141193B93090A77395B786C72C7BC (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
inline void Dictionary_2_Add_m257B8C90C41CB522B5A2D24FFF4676471FE46B33 (Dictionary_2_tE1D19D0AA81D718342812CD900CBF4D4C298AF8E* __this, AccessibleObjectClassification_t48AAC4E76C1D9AA7E8CFB11F30B54DC795646ED9* ___0_key, List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* ___1_value, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tE1D19D0AA81D718342812CD900CBF4D4C298AF8E*, AccessibleObjectClassification_t48AAC4E76C1D9AA7E8CFB11F30B54DC795646ED9*, List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B*, const RuntimeMethod*))Dictionary_2_Add_m93FFFABE8FCE7FA9793F0915E2A8842C7CD0C0C1_gshared)(__this, ___0_key, ___1_value, method);
}
inline List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* Dictionary_2_get_Item_m78CDA8E556C6471CCE4A2F137898CDD00DED974E (Dictionary_2_tE1D19D0AA81D718342812CD900CBF4D4C298AF8E* __this, AccessibleObjectClassification_t48AAC4E76C1D9AA7E8CFB11F30B54DC795646ED9* ___0_key, const RuntimeMethod* method)
{
	return ((  List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* (*) (Dictionary_2_tE1D19D0AA81D718342812CD900CBF4D4C298AF8E*, AccessibleObjectClassification_t48AAC4E76C1D9AA7E8CFB11F30B54DC795646ED9*, const RuntimeMethod*))Dictionary_2_get_Item_m4AAAECBE902A211BF2126E6AFA280AEF73A3E0D6_gshared)(__this, ___0_key, method);
}
inline void List_1_Add_m43FBF207375C6E06B8C45ECE614F9B8008FB686E_inline (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B*, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___0_item, method);
}
inline bool List_1_Contains_m8D2C9B0C7844486763AE6C2CA3C04FA4BBA9B384 (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___0_item, const RuntimeMethod* method)
{
	return ((  bool (*) (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B*, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))List_1_Contains_m4C9139C2A6B23E9343D3F87807B32C6E2CFE660D_gshared)(__this, ___0_item, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987 (String_t* ___0_format, RuntimeObject* ___1_arg0, RuntimeObject* ___2_arg1, const RuntimeMethod* method) ;
inline bool List_1_Remove_mCCE85D4D5326536C4B214C73D07030F4CCD18485 (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___0_item, const RuntimeMethod* method)
{
	return ((  bool (*) (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B*, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))List_1_Remove_m4DFA48F4CEB9169601E75FC28517C5C06EFA5AD7_gshared)(__this, ___0_item, method);
}
inline Enumerator_t05887FF31BF2F9C1E8DF40C9EF6915337EDEE6DF List_1_GetEnumerator_m5FBB6B16664449B594EE92438FDAFBF6A89BADF4 (List_1_t3F33A8B72EA0ADD649C3EDDA8DCA89789DEBA09C* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t05887FF31BF2F9C1E8DF40C9EF6915337EDEE6DF (*) (List_1_t3F33A8B72EA0ADD649C3EDDA8DCA89789DEBA09C*, const RuntimeMethod*))List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared)(__this, method);
}
inline void Enumerator_Dispose_m75297E7D08AE3AB13BC9E9B5B217CFD43E463FB0 (Enumerator_t05887FF31BF2F9C1E8DF40C9EF6915337EDEE6DF* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t05887FF31BF2F9C1E8DF40C9EF6915337EDEE6DF*, const RuntimeMethod*))Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared)(__this, method);
}
inline AccessibleObjectClassification_t48AAC4E76C1D9AA7E8CFB11F30B54DC795646ED9* Enumerator_get_Current_m571AAB121D0C10985A7C3A783461745D9DA3FE9C_inline (Enumerator_t05887FF31BF2F9C1E8DF40C9EF6915337EDEE6DF* __this, const RuntimeMethod* method)
{
	return ((  AccessibleObjectClassification_t48AAC4E76C1D9AA7E8CFB11F30B54DC795646ED9* (*) (Enumerator_t05887FF31BF2F9C1E8DF40C9EF6915337EDEE6DF*, const RuntimeMethod*))Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline)(__this, method);
}
inline void List_1_AddRange_mF7CB62C0F98328B0EC44EC48E5DAD891B8BC749C (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* __this, RuntimeObject* ___0_collection, const RuntimeMethod* method)
{
	((  void (*) (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B*, RuntimeObject*, const RuntimeMethod*))List_1_AddRange_m1F76B300133150E6046C5FED00E88B5DE0A02E17_gshared)(__this, ___0_collection, method);
}
inline bool Enumerator_MoveNext_m04143F3DAE9E0837982BEE60843B7B78C168BE6D (Enumerator_t05887FF31BF2F9C1E8DF40C9EF6915337EDEE6DF* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t05887FF31BF2F9C1E8DF40C9EF6915337EDEE6DF*, const RuntimeMethod*))Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared)(__this, method);
}
inline int32_t List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_inline (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B*, const RuntimeMethod*))List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline)(__this, method);
}
inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979 (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	return ((  GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* (*) (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B*, int32_t, const RuntimeMethod*))List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared)(__this, ___0_index, method);
}
inline bool GameObject_TryGetComponent_TisCollider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76_mFF30CBE3C429844CF584BAC596EDAF7B49398705 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76** ___0_component, const RuntimeMethod* method)
{
	return ((  bool (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76**, const RuntimeMethod*))GameObject_TryGetComponent_TisRuntimeObject_m4D430300D2DFB9276DE980D78F60A05D271D3630_gshared)(__this, ___0_component, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* Camera_get_main_m52C992F18E05355ABB9EEB64A4BF2215E12762DF (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CameraFOVChecker_IsInFOVCached_m79438798C0A3B4D4ECDE161D0FE45E8040925D69 (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___0_camera, Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___1_myCollider, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_b, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_get_sqrMagnitude_m43C27DEC47C4811FB30AB474FF2131A963B66FC8_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AccessibilityProvider_RaiseInvertTextColorChanged_m5E307665E29899B75B3C499B4D3F562352276EFD (AccessibilityProvider_tED15C3EB0977856F8B4828DFCAD18A7ED3AF6716* __this, bool ___0_invert, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t* Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00 (Delegate_t* ___0_a, Delegate_t* ___1_b, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t* Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3 (Delegate_t* ___0_source, Delegate_t* ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AccessibilityUtilities_SetTextColorInversion_m19C6890F04D0E38F637826C326A0EA858FB65B89 (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___0_textMaterial, bool ___1_Invert, const RuntimeMethod* method) ;
inline void Action_1_Invoke_m69C8773D6967F3B224777183E24EA621CE056F8F_inline (Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* __this, bool ___0_obj, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C*, bool, const RuntimeMethod*))Action_1_Invoke_m69C8773D6967F3B224777183E24EA621CE056F8F_gshared_inline)(__this, ___0_obj, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool SubsystemWithProvider_get_running_m6BF31FC3BDA38C56C0F60FEA37767A4151B22C44_inline (SubsystemWithProvider_tC72E35EE2D413A4B0635B058154BABF265F31242* __this, const RuntimeMethod* method) ;
inline AccessibilitySubsystem_t26A604A92BAA7AB49AE390E0005A789720443582* XRSubsystemHelpers_GetFirstRunningSubsystem_TisAccessibilitySubsystem_t26A604A92BAA7AB49AE390E0005A789720443582_mD714530B0B5CD3126DE804405E74629F8684E56D (const RuntimeMethod* method)
{
	return ((  AccessibilitySubsystem_t26A604A92BAA7AB49AE390E0005A789720443582* (*) (const RuntimeMethod*))XRSubsystemHelpers_GetFirstRunningSubsystem_TisRuntimeObject_m82D3DF1AA85D404A0BEAC7E9F19B938B2C1E8AC0_gshared)(method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AccessibilitySubsystem_t26A604A92BAA7AB49AE390E0005A789720443582* AccessibilityHelpers_get_Subsystem_m8466FB86B3BFD4EA6466F7769B26434D4B66F31D (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9 (RuntimeObject* ___0_message, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR AccessibleObjectClassification_t48AAC4E76C1D9AA7E8CFB11F30B54DC795646ED9* AccessibleObject_get_Classification_mE14955800BCBC287221DD48936ED165C111773C5_inline (AccessibleObject_t0223569CC040AD2AB2F90BEAE62CEA22CC0F9675* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AccessibilitySubsystem_TryRegisterAccessibleObject_m24998FD8667A149D174B9C776075464815A9513B (AccessibilitySubsystem_t26A604A92BAA7AB49AE390E0005A789720443582* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___0_accessibleObject, AccessibleObjectClassification_t48AAC4E76C1D9AA7E8CFB11F30B54DC795646ED9* ___1_classification, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AccessibilitySubsystem_TryUnregisterAccessibleObject_m5D1040D28B0933C42D3C7202DD6023ED44661059 (AccessibilitySubsystem_t26A604A92BAA7AB49AE390E0005A789720443582* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___0_accessibleObject, AccessibleObjectClassification_t48AAC4E76C1D9AA7E8CFB11F30B54DC795646ED9* ___1_classification, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScriptableObject__ctor_mD037FDB0B487295EA47F79A4DB1BF1846C9087FF (ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AccessibilitySubsystem_get_InvertTextColor_m206C55094D228501FDA32608D19A28C43BFC49EB (AccessibilitySubsystem_t26A604A92BAA7AB49AE390E0005A789720443582* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextAccessibility_OnInvertTextColorChanged_mEEF10C7F41CF47AC730D187DF1436CAD6918347E (TextAccessibility_t6BF564AD435E02350F6019627AB366FB8E54F126* __this, bool ___0_invert, const RuntimeMethod* method) ;
inline bool Component_TryGetComponent_TisTMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9_m56A0C11CF03EEBE9218C3AC9957362AAFF155090 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9** ___0_component, const RuntimeMethod* method)
{
	return ((  bool (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9**, const RuntimeMethod*))Component_TryGetComponent_TisRuntimeObject_m69D4ED21F14D49D805A2337F4332934CDA07DEDB_gshared)(__this, ___0_component, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* TMP_Text_get_fontMaterial_m4EBEC9AF78B5B66C983A98F78948E753EE4DDFC6 (TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_x, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___1_y, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AccessibilitySubsystem_ApplyTextColorInversion_m6B180E6AB65DBB48A8342DA6F6F4167BD25A3456 (AccessibilitySubsystem_t26A604A92BAA7AB49AE390E0005A789720443582* __this, Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___0_material, bool ___1_enable, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextAccessibility_ApplyInitialConfiguration_m73BF0385F2DD0C456533D77AE83F394390DB8110 (TextAccessibility_t6BF564AD435E02350F6019627AB366FB8E54F126* __this, const RuntimeMethod* method) ;
inline void Action_1__ctor_mA8C3AC97D1F076EA5D1D0C10CEE6BD3E94711501 (Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C*, RuntimeObject*, intptr_t, const RuntimeMethod*))Action_1__ctor_mA8C3AC97D1F076EA5D1D0C10CEE6BD3E94711501_gshared)(__this, ___0_object, ___1_method, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AccessibilitySubsystem_add_InvertTextColorChanged_mF0E4A5552620BE1379B3E706BBF47ED428D0840D (AccessibilitySubsystem_t26A604A92BAA7AB49AE390E0005A789720443582* __this, Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AccessibilitySubsystem_remove_InvertTextColorChanged_m9F5AC71049A7230CBC69804770211B7715E90E35 (AccessibilitySubsystem_t26A604A92BAA7AB49AE390E0005A789720443582* __this, Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextAccessibility_GetTextMaterial_m0AC087D72AD6D0CEEA584A36A46F5E4CDA734FC4 (TextAccessibility_t6BF564AD435E02350F6019627AB366FB8E54F126* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextAccessibility_RegisterHandlers_m7E7F67229CF6733C845E16746610FA53242D0164 (TextAccessibility_t6BF564AD435E02350F6019627AB366FB8E54F126* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextAccessibility_UnregisterHandlers_m188E90F2E90DD44E7EE4D4EA2D69F49B8EAFEFB5 (TextAccessibility_t6BF564AD435E02350F6019627AB366FB8E54F126* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___0_x, float ___1_y, float ___2_z, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB (RuntimeArray* ___0_array, int32_t ___1_index, int32_t ___2_length, const RuntimeMethod* method) ;
inline void List_1_AddWithResize_m79A9BF770BEF9C06BE40D5401E55E375F2726CC4 (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, RuntimeObject*, const RuntimeMethod*))List_1_AddWithResize_m79A9BF770BEF9C06BE40D5401E55E375F2726CC4_gshared)(__this, ___0_item, method);
}
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MonoScriptData_t3386082E7EC74D90D97F8F011F6B74674CC5DDD3 UnitySourceGeneratedAssemblyMonoScriptTypes_v1_Get_mDFC5034B6EEAF6557C6CD78E23C91D524B1503D9 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_t76D3D5B88CE5A56F800440C413335495B3E694C6____B87180DE4EDED6B182B5F53341706668371CB84D1ABAB0F05B310058A4995C7C_FieldInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_t76D3D5B88CE5A56F800440C413335495B3E694C6____C66327DA6927415FA81D8359F89BA468D920FEF648351C5D42FEE7413FEC07A4_FieldInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	MonoScriptData_t3386082E7EC74D90D97F8F011F6B74674CC5DDD3 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(MonoScriptData_t3386082E7EC74D90D97F8F011F6B74674CC5DDD3));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)1294));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = L_0;
		RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 L_2 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_t76D3D5B88CE5A56F800440C413335495B3E694C6____C66327DA6927415FA81D8359F89BA468D920FEF648351C5D42FEE7413FEC07A4_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_m751372AA3F24FBF6DA9B9D687CBFA2DE436CAB9B((RuntimeArray*)L_1, L_2, NULL);
		(&V_0)->___FilePathsData = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___FilePathsData), (void*)L_1);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)916));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = L_3;
		RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 L_5 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_t76D3D5B88CE5A56F800440C413335495B3E694C6____B87180DE4EDED6B182B5F53341706668371CB84D1ABAB0F05B310058A4995C7C_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_m751372AA3F24FBF6DA9B9D687CBFA2DE436CAB9B((RuntimeArray*)L_4, L_5, NULL);
		(&V_0)->___TypesData = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___TypesData), (void*)L_4);
		(&V_0)->___TotalFiles = ((int32_t)11);
		(&V_0)->___TotalTypes = ((int32_t)14);
		(&V_0)->___IsEditorOnly = (bool)0;
		MonoScriptData_t3386082E7EC74D90D97F8F011F6B74674CC5DDD3 L_6 = V_0;
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnitySourceGeneratedAssemblyMonoScriptTypes_v1__ctor_m994A4BC3F4B5420FCE215E5DA08A4F4D060CCE37 (UnitySourceGeneratedAssemblyMonoScriptTypes_v1_tA68F2CC8CEAEB0D4E437737EB8EBB7395477CD2E* __this, const RuntimeMethod* method) 
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
IL2CPP_EXTERN_C void MonoScriptData_t3386082E7EC74D90D97F8F011F6B74674CC5DDD3_marshal_pinvoke(const MonoScriptData_t3386082E7EC74D90D97F8F011F6B74674CC5DDD3& unmarshaled, MonoScriptData_t3386082E7EC74D90D97F8F011F6B74674CC5DDD3_marshaled_pinvoke& marshaled)
{
	marshaled.___FilePathsData = il2cpp_codegen_com_marshal_safe_array(IL2CPP_VT_I1, unmarshaled.___FilePathsData);
	marshaled.___TypesData = il2cpp_codegen_com_marshal_safe_array(IL2CPP_VT_I1, unmarshaled.___TypesData);
	marshaled.___TotalTypes = unmarshaled.___TotalTypes;
	marshaled.___TotalFiles = unmarshaled.___TotalFiles;
	marshaled.___IsEditorOnly = static_cast<int32_t>(unmarshaled.___IsEditorOnly);
}
IL2CPP_EXTERN_C void MonoScriptData_t3386082E7EC74D90D97F8F011F6B74674CC5DDD3_marshal_pinvoke_back(const MonoScriptData_t3386082E7EC74D90D97F8F011F6B74674CC5DDD3_marshaled_pinvoke& marshaled, MonoScriptData_t3386082E7EC74D90D97F8F011F6B74674CC5DDD3& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	unmarshaled.___FilePathsData = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)il2cpp_codegen_com_marshal_safe_array_result(IL2CPP_VT_I1, Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var, marshaled.___FilePathsData);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___FilePathsData), (void*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)il2cpp_codegen_com_marshal_safe_array_result(IL2CPP_VT_I1, Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var, marshaled.___FilePathsData));
	unmarshaled.___TypesData = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)il2cpp_codegen_com_marshal_safe_array_result(IL2CPP_VT_I1, Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var, marshaled.___TypesData);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___TypesData), (void*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)il2cpp_codegen_com_marshal_safe_array_result(IL2CPP_VT_I1, Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var, marshaled.___TypesData));
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
IL2CPP_EXTERN_C void MonoScriptData_t3386082E7EC74D90D97F8F011F6B74674CC5DDD3_marshal_pinvoke_cleanup(MonoScriptData_t3386082E7EC74D90D97F8F011F6B74674CC5DDD3_marshaled_pinvoke& marshaled)
{
	il2cpp_codegen_com_destroy_safe_array(marshaled.___FilePathsData);
	marshaled.___FilePathsData = NULL;
	il2cpp_codegen_com_destroy_safe_array(marshaled.___TypesData);
	marshaled.___TypesData = NULL;
}
IL2CPP_EXTERN_C void MonoScriptData_t3386082E7EC74D90D97F8F011F6B74674CC5DDD3_marshal_com(const MonoScriptData_t3386082E7EC74D90D97F8F011F6B74674CC5DDD3& unmarshaled, MonoScriptData_t3386082E7EC74D90D97F8F011F6B74674CC5DDD3_marshaled_com& marshaled)
{
	marshaled.___FilePathsData = il2cpp_codegen_com_marshal_safe_array(IL2CPP_VT_I1, unmarshaled.___FilePathsData);
	marshaled.___TypesData = il2cpp_codegen_com_marshal_safe_array(IL2CPP_VT_I1, unmarshaled.___TypesData);
	marshaled.___TotalTypes = unmarshaled.___TotalTypes;
	marshaled.___TotalFiles = unmarshaled.___TotalFiles;
	marshaled.___IsEditorOnly = static_cast<int32_t>(unmarshaled.___IsEditorOnly);
}
IL2CPP_EXTERN_C void MonoScriptData_t3386082E7EC74D90D97F8F011F6B74674CC5DDD3_marshal_com_back(const MonoScriptData_t3386082E7EC74D90D97F8F011F6B74674CC5DDD3_marshaled_com& marshaled, MonoScriptData_t3386082E7EC74D90D97F8F011F6B74674CC5DDD3& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	unmarshaled.___FilePathsData = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)il2cpp_codegen_com_marshal_safe_array_result(IL2CPP_VT_I1, Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var, marshaled.___FilePathsData);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___FilePathsData), (void*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)il2cpp_codegen_com_marshal_safe_array_result(IL2CPP_VT_I1, Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var, marshaled.___FilePathsData));
	unmarshaled.___TypesData = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)il2cpp_codegen_com_marshal_safe_array_result(IL2CPP_VT_I1, Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var, marshaled.___TypesData);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___TypesData), (void*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)il2cpp_codegen_com_marshal_safe_array_result(IL2CPP_VT_I1, Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var, marshaled.___TypesData));
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
IL2CPP_EXTERN_C void MonoScriptData_t3386082E7EC74D90D97F8F011F6B74674CC5DDD3_marshal_com_cleanup(MonoScriptData_t3386082E7EC74D90D97F8F011F6B74674CC5DDD3_marshaled_com& marshaled)
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AccessibilitySubsystem__ctor_m346280A1856D314E104FD4688F97D970CB692AE6 (AccessibilitySubsystem_t26A604A92BAA7AB49AE390E0005A789720443582* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MRTKSubsystem_3__ctor_m347BAFB23B611CEAAAD615475078169C74B32E04_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MRTKSubsystem_3_t057DB79908BCA9C22BB5ED3F4421C19D4E3C89A1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(MRTKSubsystem_3_t057DB79908BCA9C22BB5ED3F4421C19D4E3C89A1_il2cpp_TypeInfo_var);
		MRTKSubsystem_3__ctor_m347BAFB23B611CEAAAD615475078169C74B32E04(__this, MRTKSubsystem_3__ctor_m347BAFB23B611CEAAAD615475078169C74B32E04_RuntimeMethod_var);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AccessibilitySubsystem_TryGetAccessibleObjects_mF07719D8BAD658B8A01A55E7F50BBF3A8389396B (AccessibilitySubsystem_t26A604A92BAA7AB49AE390E0005A789720443582* __this, List_1_t3F33A8B72EA0ADD649C3EDDA8DCA89789DEBA09C* ___0_classifications, int32_t ___1_readerView, float ___2_maxDistance, List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* ___3_accessibleObjectList, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SubsystemWithProvider_3_get_provider_m4F14FD0B82B8F315AAFE7E700230C5B5D5F6B038_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Provider_t6B89658FF42BACD2F4C91E0ABFF9D2DA6DE3D60A* L_0;
		L_0 = SubsystemWithProvider_3_get_provider_m4F14FD0B82B8F315AAFE7E700230C5B5D5F6B038_inline(__this, SubsystemWithProvider_3_get_provider_m4F14FD0B82B8F315AAFE7E700230C5B5D5F6B038_RuntimeMethod_var);
		List_1_t3F33A8B72EA0ADD649C3EDDA8DCA89789DEBA09C* L_1 = ___0_classifications;
		int32_t L_2 = ___1_readerView;
		float L_3 = ___2_maxDistance;
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_4 = ___3_accessibleObjectList;
		NullCheck(L_0);
		bool L_5;
		L_5 = VirtualFuncInvoker4< bool, List_1_t3F33A8B72EA0ADD649C3EDDA8DCA89789DEBA09C*, int32_t, float, List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* >::Invoke(25, L_0, L_1, L_2, L_3, L_4);
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AccessibilitySubsystem_TryGetAccessibleObjectClassifications_m2B771AF2840568A5F75109A3D723BBC0A52B0A18 (AccessibilitySubsystem_t26A604A92BAA7AB49AE390E0005A789720443582* __this, List_1_t3F33A8B72EA0ADD649C3EDDA8DCA89789DEBA09C* ___0_classifications, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SubsystemWithProvider_3_get_provider_m4F14FD0B82B8F315AAFE7E700230C5B5D5F6B038_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Provider_t6B89658FF42BACD2F4C91E0ABFF9D2DA6DE3D60A* L_0;
		L_0 = SubsystemWithProvider_3_get_provider_m4F14FD0B82B8F315AAFE7E700230C5B5D5F6B038_inline(__this, SubsystemWithProvider_3_get_provider_m4F14FD0B82B8F315AAFE7E700230C5B5D5F6B038_RuntimeMethod_var);
		List_1_t3F33A8B72EA0ADD649C3EDDA8DCA89789DEBA09C* L_1 = ___0_classifications;
		NullCheck(L_0);
		bool L_2;
		L_2 = VirtualFuncInvoker1< bool, List_1_t3F33A8B72EA0ADD649C3EDDA8DCA89789DEBA09C* >::Invoke(26, L_0, L_1);
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AccessibilitySubsystem_TryRegisterAccessibleObject_m24998FD8667A149D174B9C776075464815A9513B (AccessibilitySubsystem_t26A604A92BAA7AB49AE390E0005A789720443582* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___0_accessibleObject, AccessibleObjectClassification_t48AAC4E76C1D9AA7E8CFB11F30B54DC795646ED9* ___1_classification, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SubsystemWithProvider_3_get_provider_m4F14FD0B82B8F315AAFE7E700230C5B5D5F6B038_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Provider_t6B89658FF42BACD2F4C91E0ABFF9D2DA6DE3D60A* L_0;
		L_0 = SubsystemWithProvider_3_get_provider_m4F14FD0B82B8F315AAFE7E700230C5B5D5F6B038_inline(__this, SubsystemWithProvider_3_get_provider_m4F14FD0B82B8F315AAFE7E700230C5B5D5F6B038_RuntimeMethod_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = ___0_accessibleObject;
		AccessibleObjectClassification_t48AAC4E76C1D9AA7E8CFB11F30B54DC795646ED9* L_2 = ___1_classification;
		NullCheck(L_0);
		bool L_3;
		L_3 = VirtualFuncInvoker2< bool, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, AccessibleObjectClassification_t48AAC4E76C1D9AA7E8CFB11F30B54DC795646ED9* >::Invoke(27, L_0, L_1, L_2);
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AccessibilitySubsystem_TryUnregisterAccessibleObject_m5D1040D28B0933C42D3C7202DD6023ED44661059 (AccessibilitySubsystem_t26A604A92BAA7AB49AE390E0005A789720443582* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___0_accessibleObject, AccessibleObjectClassification_t48AAC4E76C1D9AA7E8CFB11F30B54DC795646ED9* ___1_classification, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SubsystemWithProvider_3_get_provider_m4F14FD0B82B8F315AAFE7E700230C5B5D5F6B038_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Provider_t6B89658FF42BACD2F4C91E0ABFF9D2DA6DE3D60A* L_0;
		L_0 = SubsystemWithProvider_3_get_provider_m4F14FD0B82B8F315AAFE7E700230C5B5D5F6B038_inline(__this, SubsystemWithProvider_3_get_provider_m4F14FD0B82B8F315AAFE7E700230C5B5D5F6B038_RuntimeMethod_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = ___0_accessibleObject;
		AccessibleObjectClassification_t48AAC4E76C1D9AA7E8CFB11F30B54DC795646ED9* L_2 = ___1_classification;
		NullCheck(L_0);
		bool L_3;
		L_3 = VirtualFuncInvoker2< bool, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, AccessibleObjectClassification_t48AAC4E76C1D9AA7E8CFB11F30B54DC795646ED9* >::Invoke(28, L_0, L_1, L_2);
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AccessibilitySubsystem_get_InvertTextColor_m206C55094D228501FDA32608D19A28C43BFC49EB (AccessibilitySubsystem_t26A604A92BAA7AB49AE390E0005A789720443582* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SubsystemWithProvider_3_get_provider_m4F14FD0B82B8F315AAFE7E700230C5B5D5F6B038_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Provider_t6B89658FF42BACD2F4C91E0ABFF9D2DA6DE3D60A* L_0;
		L_0 = SubsystemWithProvider_3_get_provider_m4F14FD0B82B8F315AAFE7E700230C5B5D5F6B038_inline(__this, SubsystemWithProvider_3_get_provider_m4F14FD0B82B8F315AAFE7E700230C5B5D5F6B038_RuntimeMethod_var);
		NullCheck(L_0);
		bool L_1;
		L_1 = VirtualFuncInvoker0< bool >::Invoke(29, L_0);
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AccessibilitySubsystem_set_InvertTextColor_m14FD0D98E21800800E69C1BB8215D24C99E71074 (AccessibilitySubsystem_t26A604A92BAA7AB49AE390E0005A789720443582* __this, bool ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SubsystemWithProvider_3_get_provider_m4F14FD0B82B8F315AAFE7E700230C5B5D5F6B038_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Provider_t6B89658FF42BACD2F4C91E0ABFF9D2DA6DE3D60A* L_0;
		L_0 = SubsystemWithProvider_3_get_provider_m4F14FD0B82B8F315AAFE7E700230C5B5D5F6B038_inline(__this, SubsystemWithProvider_3_get_provider_m4F14FD0B82B8F315AAFE7E700230C5B5D5F6B038_RuntimeMethod_var);
		bool L_1 = ___0_value;
		NullCheck(L_0);
		VirtualActionInvoker1< bool >::Invoke(30, L_0, L_1);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AccessibilitySubsystem_add_InvertTextColorChanged_mF0E4A5552620BE1379B3E706BBF47ED428D0840D (AccessibilitySubsystem_t26A604A92BAA7AB49AE390E0005A789720443582* __this, Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SubsystemWithProvider_3_get_provider_m4F14FD0B82B8F315AAFE7E700230C5B5D5F6B038_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Provider_t6B89658FF42BACD2F4C91E0ABFF9D2DA6DE3D60A* L_0;
		L_0 = SubsystemWithProvider_3_get_provider_m4F14FD0B82B8F315AAFE7E700230C5B5D5F6B038_inline(__this, SubsystemWithProvider_3_get_provider_m4F14FD0B82B8F315AAFE7E700230C5B5D5F6B038_RuntimeMethod_var);
		Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* L_1 = ___0_value;
		NullCheck(L_0);
		VirtualActionInvoker1< Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* >::Invoke(31, L_0, L_1);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AccessibilitySubsystem_remove_InvertTextColorChanged_m9F5AC71049A7230CBC69804770211B7715E90E35 (AccessibilitySubsystem_t26A604A92BAA7AB49AE390E0005A789720443582* __this, Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SubsystemWithProvider_3_get_provider_m4F14FD0B82B8F315AAFE7E700230C5B5D5F6B038_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Provider_t6B89658FF42BACD2F4C91E0ABFF9D2DA6DE3D60A* L_0;
		L_0 = SubsystemWithProvider_3_get_provider_m4F14FD0B82B8F315AAFE7E700230C5B5D5F6B038_inline(__this, SubsystemWithProvider_3_get_provider_m4F14FD0B82B8F315AAFE7E700230C5B5D5F6B038_RuntimeMethod_var);
		Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* L_1 = ___0_value;
		NullCheck(L_0);
		VirtualActionInvoker1< Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* >::Invoke(32, L_0, L_1);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AccessibilitySubsystem_ApplyTextColorInversion_m6B180E6AB65DBB48A8342DA6F6F4167BD25A3456 (AccessibilitySubsystem_t26A604A92BAA7AB49AE390E0005A789720443582* __this, Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___0_material, bool ___1_enable, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SubsystemWithProvider_3_get_provider_m4F14FD0B82B8F315AAFE7E700230C5B5D5F6B038_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Provider_t6B89658FF42BACD2F4C91E0ABFF9D2DA6DE3D60A* L_0;
		L_0 = SubsystemWithProvider_3_get_provider_m4F14FD0B82B8F315AAFE7E700230C5B5D5F6B038_inline(__this, SubsystemWithProvider_3_get_provider_m4F14FD0B82B8F315AAFE7E700230C5B5D5F6B038_RuntimeMethod_var);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_1 = ___0_material;
		bool L_2 = ___1_enable;
		NullCheck(L_0);
		VirtualActionInvoker2< Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3*, bool >::Invoke(33, L_0, L_1, L_2);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AccessibilitySubsystem_Register_m7FE164349E7F04D107D53BCBBCEB5E34695239D3 (AccessibilitySubsystemCinfo_tCF25C9AEB9158D1CCC734DBF683F94EF917F3FAB ___0_accessibilitySubsystemParams, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SubsystemDescriptorStore_tEF3761B84B8C25EA4B93F94A487551820B268250_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		AccessibilitySubsystemCinfo_tCF25C9AEB9158D1CCC734DBF683F94EF917F3FAB L_0 = ___0_accessibilitySubsystemParams;
		AccessibilitySubsystemDescriptor_t366293770CE03F66419FAB2461E0D33BCE4CDCF1* L_1;
		L_1 = AccessibilitySubsystemDescriptor_Create_m13D5FA518F88AFBC27B603EFD3E2DAE6AC11B4D9(L_0, NULL);
		il2cpp_codegen_runtime_class_init_inline(SubsystemDescriptorStore_tEF3761B84B8C25EA4B93F94A487551820B268250_il2cpp_TypeInfo_var);
		SubsystemDescriptorStore_RegisterDescriptor_m6DEC96199F95ACCD68822060CEB79CA77AF44F12(L_1, NULL);
		return (bool)1;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Provider__ctor_mB4F3702935FBE59EE119EECC559DEAFB0BFDA904 (Provider_t6B89658FF42BACD2F4C91E0ABFF9D2DA6DE3D60A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MRTKSubsystemProvider_1__ctor_m6FEDBFA34FB3B9BDBC5E4CD1D046FDFC84F5B34C_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		MRTKSubsystemProvider_1__ctor_m6FEDBFA34FB3B9BDBC5E4CD1D046FDFC84F5B34C(__this, MRTKSubsystemProvider_1__ctor_m6FEDBFA34FB3B9BDBC5E4CD1D046FDFC84F5B34C_RuntimeMethod_var);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AccessibilitySubsystemConfig_get_InvertTextColor_m99AE5F060B8439274802FCFEC0695DAC12C2CB40 (AccessibilitySubsystemConfig_t04BF4C96175B11A0C996CDD69CA75C82A8B645C3* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___invertTextColor;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AccessibilitySubsystemConfig_set_InvertTextColor_mC441327B10BCCE2A9A49B9707816792BD5997B4A (AccessibilitySubsystemConfig_t04BF4C96175B11A0C996CDD69CA75C82A8B645C3* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		bool L_0 = ___0_value;
		__this->___invertTextColor = L_0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AccessibilitySubsystemConfig_Reset_m8A1738D961C3C37D80DA4E6B721C9184049FB218 (AccessibilitySubsystemConfig_t04BF4C96175B11A0C996CDD69CA75C82A8B645C3* __this, const RuntimeMethod* method) 
{
	{
		__this->___invertTextColor = (bool)0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AccessibilitySubsystemConfig__ctor_m694C9145222318BDD3CC65BC798570CA79970060 (AccessibilitySubsystemConfig_t04BF4C96175B11A0C996CDD69CA75C82A8B645C3* __this, const RuntimeMethod* method) 
{
	{
		BaseSubsystemConfig__ctor_mA76AF075FD5292FF470A73700ACF7CBB83079970(__this, NULL);
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
IL2CPP_EXTERN_C void AccessibilitySubsystemCinfo_tCF25C9AEB9158D1CCC734DBF683F94EF917F3FAB_marshal_pinvoke(const AccessibilitySubsystemCinfo_tCF25C9AEB9158D1CCC734DBF683F94EF917F3FAB& unmarshaled, AccessibilitySubsystemCinfo_tCF25C9AEB9158D1CCC734DBF683F94EF917F3FAB_marshaled_pinvoke& marshaled)
{
	Exception_t* ___U3CConfigTypeU3Ek__BackingFieldException = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '<ConfigType>k__BackingField' of type 'AccessibilitySubsystemCinfo': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___U3CConfigTypeU3Ek__BackingFieldException, NULL);
}
IL2CPP_EXTERN_C void AccessibilitySubsystemCinfo_tCF25C9AEB9158D1CCC734DBF683F94EF917F3FAB_marshal_pinvoke_back(const AccessibilitySubsystemCinfo_tCF25C9AEB9158D1CCC734DBF683F94EF917F3FAB_marshaled_pinvoke& marshaled, AccessibilitySubsystemCinfo_tCF25C9AEB9158D1CCC734DBF683F94EF917F3FAB& unmarshaled)
{
	Exception_t* ___U3CConfigTypeU3Ek__BackingFieldException = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '<ConfigType>k__BackingField' of type 'AccessibilitySubsystemCinfo': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___U3CConfigTypeU3Ek__BackingFieldException, NULL);
}
IL2CPP_EXTERN_C void AccessibilitySubsystemCinfo_tCF25C9AEB9158D1CCC734DBF683F94EF917F3FAB_marshal_pinvoke_cleanup(AccessibilitySubsystemCinfo_tCF25C9AEB9158D1CCC734DBF683F94EF917F3FAB_marshaled_pinvoke& marshaled)
{
}
IL2CPP_EXTERN_C void AccessibilitySubsystemCinfo_tCF25C9AEB9158D1CCC734DBF683F94EF917F3FAB_marshal_com(const AccessibilitySubsystemCinfo_tCF25C9AEB9158D1CCC734DBF683F94EF917F3FAB& unmarshaled, AccessibilitySubsystemCinfo_tCF25C9AEB9158D1CCC734DBF683F94EF917F3FAB_marshaled_com& marshaled)
{
	Exception_t* ___U3CConfigTypeU3Ek__BackingFieldException = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '<ConfigType>k__BackingField' of type 'AccessibilitySubsystemCinfo': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___U3CConfigTypeU3Ek__BackingFieldException, NULL);
}
IL2CPP_EXTERN_C void AccessibilitySubsystemCinfo_tCF25C9AEB9158D1CCC734DBF683F94EF917F3FAB_marshal_com_back(const AccessibilitySubsystemCinfo_tCF25C9AEB9158D1CCC734DBF683F94EF917F3FAB_marshaled_com& marshaled, AccessibilitySubsystemCinfo_tCF25C9AEB9158D1CCC734DBF683F94EF917F3FAB& unmarshaled)
{
	Exception_t* ___U3CConfigTypeU3Ek__BackingFieldException = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '<ConfigType>k__BackingField' of type 'AccessibilitySubsystemCinfo': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___U3CConfigTypeU3Ek__BackingFieldException, NULL);
}
IL2CPP_EXTERN_C void AccessibilitySubsystemCinfo_tCF25C9AEB9158D1CCC734DBF683F94EF917F3FAB_marshal_com_cleanup(AccessibilitySubsystemCinfo_tCF25C9AEB9158D1CCC734DBF683F94EF917F3FAB_marshaled_com& marshaled)
{
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AccessibilitySubsystemCinfo_get_Name_m7BA15E44E11886098AA8EA821FA2B0D8CA6D3F69 (AccessibilitySubsystemCinfo_tCF25C9AEB9158D1CCC734DBF683F94EF917F3FAB* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CNameU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C  String_t* AccessibilitySubsystemCinfo_get_Name_m7BA15E44E11886098AA8EA821FA2B0D8CA6D3F69_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	AccessibilitySubsystemCinfo_tCF25C9AEB9158D1CCC734DBF683F94EF917F3FAB* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AccessibilitySubsystemCinfo_tCF25C9AEB9158D1CCC734DBF683F94EF917F3FAB*>(__this + _offset);
	String_t* _returnValue;
	_returnValue = AccessibilitySubsystemCinfo_get_Name_m7BA15E44E11886098AA8EA821FA2B0D8CA6D3F69_inline(_thisAdjusted, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AccessibilitySubsystemCinfo_set_Name_m54B2AAF7136105A464C28A65A767850BCC9D28DE (AccessibilitySubsystemCinfo_tCF25C9AEB9158D1CCC734DBF683F94EF917F3FAB* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___0_value;
		__this->___U3CNameU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CNameU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void AccessibilitySubsystemCinfo_set_Name_m54B2AAF7136105A464C28A65A767850BCC9D28DE_AdjustorThunk (RuntimeObject* __this, String_t* ___0_value, const RuntimeMethod* method)
{
	AccessibilitySubsystemCinfo_tCF25C9AEB9158D1CCC734DBF683F94EF917F3FAB* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AccessibilitySubsystemCinfo_tCF25C9AEB9158D1CCC734DBF683F94EF917F3FAB*>(__this + _offset);
	AccessibilitySubsystemCinfo_set_Name_m54B2AAF7136105A464C28A65A767850BCC9D28DE_inline(_thisAdjusted, ___0_value, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AccessibilitySubsystemCinfo_get_DisplayName_m1C3CADDFDDFF05FF5E06B578B817C79ECEE3A964 (AccessibilitySubsystemCinfo_tCF25C9AEB9158D1CCC734DBF683F94EF917F3FAB* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CDisplayNameU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C  String_t* AccessibilitySubsystemCinfo_get_DisplayName_m1C3CADDFDDFF05FF5E06B578B817C79ECEE3A964_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	AccessibilitySubsystemCinfo_tCF25C9AEB9158D1CCC734DBF683F94EF917F3FAB* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AccessibilitySubsystemCinfo_tCF25C9AEB9158D1CCC734DBF683F94EF917F3FAB*>(__this + _offset);
	String_t* _returnValue;
	_returnValue = AccessibilitySubsystemCinfo_get_DisplayName_m1C3CADDFDDFF05FF5E06B578B817C79ECEE3A964_inline(_thisAdjusted, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AccessibilitySubsystemCinfo_set_DisplayName_mF4B2888EB0B9CC079304C763202B433B9B64C08C (AccessibilitySubsystemCinfo_tCF25C9AEB9158D1CCC734DBF683F94EF917F3FAB* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___0_value;
		__this->___U3CDisplayNameU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CDisplayNameU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void AccessibilitySubsystemCinfo_set_DisplayName_mF4B2888EB0B9CC079304C763202B433B9B64C08C_AdjustorThunk (RuntimeObject* __this, String_t* ___0_value, const RuntimeMethod* method)
{
	AccessibilitySubsystemCinfo_tCF25C9AEB9158D1CCC734DBF683F94EF917F3FAB* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AccessibilitySubsystemCinfo_tCF25C9AEB9158D1CCC734DBF683F94EF917F3FAB*>(__this + _offset);
	AccessibilitySubsystemCinfo_set_DisplayName_mF4B2888EB0B9CC079304C763202B433B9B64C08C_inline(_thisAdjusted, ___0_value, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AccessibilitySubsystemCinfo_get_Author_mB23C2F600D79473293FE3F4DDE478668EE588665 (AccessibilitySubsystemCinfo_tCF25C9AEB9158D1CCC734DBF683F94EF917F3FAB* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CAuthorU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C  String_t* AccessibilitySubsystemCinfo_get_Author_mB23C2F600D79473293FE3F4DDE478668EE588665_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	AccessibilitySubsystemCinfo_tCF25C9AEB9158D1CCC734DBF683F94EF917F3FAB* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AccessibilitySubsystemCinfo_tCF25C9AEB9158D1CCC734DBF683F94EF917F3FAB*>(__this + _offset);
	String_t* _returnValue;
	_returnValue = AccessibilitySubsystemCinfo_get_Author_mB23C2F600D79473293FE3F4DDE478668EE588665_inline(_thisAdjusted, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AccessibilitySubsystemCinfo_set_Author_m4A54DBB53320F9B0799D1C0004DAE344C8D878CA (AccessibilitySubsystemCinfo_tCF25C9AEB9158D1CCC734DBF683F94EF917F3FAB* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___0_value;
		__this->___U3CAuthorU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CAuthorU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void AccessibilitySubsystemCinfo_set_Author_m4A54DBB53320F9B0799D1C0004DAE344C8D878CA_AdjustorThunk (RuntimeObject* __this, String_t* ___0_value, const RuntimeMethod* method)
{
	AccessibilitySubsystemCinfo_tCF25C9AEB9158D1CCC734DBF683F94EF917F3FAB* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AccessibilitySubsystemCinfo_tCF25C9AEB9158D1CCC734DBF683F94EF917F3FAB*>(__this + _offset);
	AccessibilitySubsystemCinfo_set_Author_m4A54DBB53320F9B0799D1C0004DAE344C8D878CA_inline(_thisAdjusted, ___0_value, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* AccessibilitySubsystemCinfo_get_ConfigType_m5825C91DED37520EE451694F04D3017425F362D9 (AccessibilitySubsystemCinfo_tCF25C9AEB9158D1CCC734DBF683F94EF917F3FAB* __this, const RuntimeMethod* method) 
{
	{
		Type_t* L_0 = __this->___U3CConfigTypeU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C  Type_t* AccessibilitySubsystemCinfo_get_ConfigType_m5825C91DED37520EE451694F04D3017425F362D9_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	AccessibilitySubsystemCinfo_tCF25C9AEB9158D1CCC734DBF683F94EF917F3FAB* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AccessibilitySubsystemCinfo_tCF25C9AEB9158D1CCC734DBF683F94EF917F3FAB*>(__this + _offset);
	Type_t* _returnValue;
	_returnValue = AccessibilitySubsystemCinfo_get_ConfigType_m5825C91DED37520EE451694F04D3017425F362D9_inline(_thisAdjusted, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AccessibilitySubsystemCinfo_set_ConfigType_m1C88D3720C41C9FC6119AF8E9CA16CF0D2A5A314 (AccessibilitySubsystemCinfo_tCF25C9AEB9158D1CCC734DBF683F94EF917F3FAB* __this, Type_t* ___0_value, const RuntimeMethod* method) 
{
	{
		Type_t* L_0 = ___0_value;
		__this->___U3CConfigTypeU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CConfigTypeU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void AccessibilitySubsystemCinfo_set_ConfigType_m1C88D3720C41C9FC6119AF8E9CA16CF0D2A5A314_AdjustorThunk (RuntimeObject* __this, Type_t* ___0_value, const RuntimeMethod* method)
{
	AccessibilitySubsystemCinfo_tCF25C9AEB9158D1CCC734DBF683F94EF917F3FAB* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AccessibilitySubsystemCinfo_tCF25C9AEB9158D1CCC734DBF683F94EF917F3FAB*>(__this + _offset);
	AccessibilitySubsystemCinfo_set_ConfigType_m1C88D3720C41C9FC6119AF8E9CA16CF0D2A5A314_inline(_thisAdjusted, ___0_value, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* AccessibilitySubsystemCinfo_get_ProviderType_m4B965C0720F4FCAB71FDE2E1BF4432847A0E1C1B (AccessibilitySubsystemCinfo_tCF25C9AEB9158D1CCC734DBF683F94EF917F3FAB* __this, const RuntimeMethod* method) 
{
	{
		Type_t* L_0 = __this->___U3CProviderTypeU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C  Type_t* AccessibilitySubsystemCinfo_get_ProviderType_m4B965C0720F4FCAB71FDE2E1BF4432847A0E1C1B_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	AccessibilitySubsystemCinfo_tCF25C9AEB9158D1CCC734DBF683F94EF917F3FAB* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AccessibilitySubsystemCinfo_tCF25C9AEB9158D1CCC734DBF683F94EF917F3FAB*>(__this + _offset);
	Type_t* _returnValue;
	_returnValue = AccessibilitySubsystemCinfo_get_ProviderType_m4B965C0720F4FCAB71FDE2E1BF4432847A0E1C1B_inline(_thisAdjusted, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AccessibilitySubsystemCinfo_set_ProviderType_mCDC3B7F3086F0A22F733146CD575C502735ECF7F (AccessibilitySubsystemCinfo_tCF25C9AEB9158D1CCC734DBF683F94EF917F3FAB* __this, Type_t* ___0_value, const RuntimeMethod* method) 
{
	{
		Type_t* L_0 = ___0_value;
		__this->___U3CProviderTypeU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CProviderTypeU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void AccessibilitySubsystemCinfo_set_ProviderType_mCDC3B7F3086F0A22F733146CD575C502735ECF7F_AdjustorThunk (RuntimeObject* __this, Type_t* ___0_value, const RuntimeMethod* method)
{
	AccessibilitySubsystemCinfo_tCF25C9AEB9158D1CCC734DBF683F94EF917F3FAB* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AccessibilitySubsystemCinfo_tCF25C9AEB9158D1CCC734DBF683F94EF917F3FAB*>(__this + _offset);
	AccessibilitySubsystemCinfo_set_ProviderType_mCDC3B7F3086F0A22F733146CD575C502735ECF7F_inline(_thisAdjusted, ___0_value, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* AccessibilitySubsystemCinfo_get_SubsystemTypeOverride_m8C9D503648BE2A02681BF586F56DCCE002B3DEAF (AccessibilitySubsystemCinfo_tCF25C9AEB9158D1CCC734DBF683F94EF917F3FAB* __this, const RuntimeMethod* method) 
{
	{
		Type_t* L_0 = __this->___U3CSubsystemTypeOverrideU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C  Type_t* AccessibilitySubsystemCinfo_get_SubsystemTypeOverride_m8C9D503648BE2A02681BF586F56DCCE002B3DEAF_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	AccessibilitySubsystemCinfo_tCF25C9AEB9158D1CCC734DBF683F94EF917F3FAB* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AccessibilitySubsystemCinfo_tCF25C9AEB9158D1CCC734DBF683F94EF917F3FAB*>(__this + _offset);
	Type_t* _returnValue;
	_returnValue = AccessibilitySubsystemCinfo_get_SubsystemTypeOverride_m8C9D503648BE2A02681BF586F56DCCE002B3DEAF_inline(_thisAdjusted, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AccessibilitySubsystemCinfo_set_SubsystemTypeOverride_mAFD4D08EBA60CA1B62FF06B43AED9C3CD6D4B2F3 (AccessibilitySubsystemCinfo_tCF25C9AEB9158D1CCC734DBF683F94EF917F3FAB* __this, Type_t* ___0_value, const RuntimeMethod* method) 
{
	{
		Type_t* L_0 = ___0_value;
		__this->___U3CSubsystemTypeOverrideU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CSubsystemTypeOverrideU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void AccessibilitySubsystemCinfo_set_SubsystemTypeOverride_mAFD4D08EBA60CA1B62FF06B43AED9C3CD6D4B2F3_AdjustorThunk (RuntimeObject* __this, Type_t* ___0_value, const RuntimeMethod* method)
{
	AccessibilitySubsystemCinfo_tCF25C9AEB9158D1CCC734DBF683F94EF917F3FAB* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AccessibilitySubsystemCinfo_tCF25C9AEB9158D1CCC734DBF683F94EF917F3FAB*>(__this + _offset);
	AccessibilitySubsystemCinfo_set_SubsystemTypeOverride_mAFD4D08EBA60CA1B62FF06B43AED9C3CD6D4B2F3_inline(_thisAdjusted, ___0_value, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AccessibilitySubsystemCinfo_Equals_m49E691E268E8996616A9BA9E85983707394C2DD6 (AccessibilitySubsystemCinfo_tCF25C9AEB9158D1CCC734DBF683F94EF917F3FAB* __this, AccessibilitySubsystemCinfo_tCF25C9AEB9158D1CCC734DBF683F94EF917F3FAB ___0_other, const RuntimeMethod* method) 
{
	{
		String_t* L_0;
		L_0 = AccessibilitySubsystemCinfo_get_Name_m7BA15E44E11886098AA8EA821FA2B0D8CA6D3F69_inline(__this, NULL);
		String_t* L_1;
		L_1 = AccessibilitySubsystemCinfo_get_Name_m7BA15E44E11886098AA8EA821FA2B0D8CA6D3F69_inline((&___0_other), NULL);
		if ((!(((RuntimeObject*)(String_t*)L_0) == ((RuntimeObject*)(String_t*)L_1))))
		{
			goto IL_002e;
		}
	}
	{
		Type_t* L_2;
		L_2 = AccessibilitySubsystemCinfo_get_ProviderType_m4B965C0720F4FCAB71FDE2E1BF4432847A0E1C1B_inline(__this, NULL);
		Type_t* L_3;
		L_3 = AccessibilitySubsystemCinfo_get_ProviderType_m4B965C0720F4FCAB71FDE2E1BF4432847A0E1C1B_inline((&___0_other), NULL);
		if ((!(((RuntimeObject*)(Type_t*)L_2) == ((RuntimeObject*)(Type_t*)L_3))))
		{
			goto IL_002e;
		}
	}
	{
		Type_t* L_4;
		L_4 = AccessibilitySubsystemCinfo_get_SubsystemTypeOverride_m8C9D503648BE2A02681BF586F56DCCE002B3DEAF_inline(__this, NULL);
		Type_t* L_5;
		L_5 = AccessibilitySubsystemCinfo_get_SubsystemTypeOverride_m8C9D503648BE2A02681BF586F56DCCE002B3DEAF_inline((&___0_other), NULL);
		return (bool)((((RuntimeObject*)(Type_t*)L_4) == ((RuntimeObject*)(Type_t*)L_5))? 1 : 0);
	}

IL_002e:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C  bool AccessibilitySubsystemCinfo_Equals_m49E691E268E8996616A9BA9E85983707394C2DD6_AdjustorThunk (RuntimeObject* __this, AccessibilitySubsystemCinfo_tCF25C9AEB9158D1CCC734DBF683F94EF917F3FAB ___0_other, const RuntimeMethod* method)
{
	AccessibilitySubsystemCinfo_tCF25C9AEB9158D1CCC734DBF683F94EF917F3FAB* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AccessibilitySubsystemCinfo_tCF25C9AEB9158D1CCC734DBF683F94EF917F3FAB*>(__this + _offset);
	bool _returnValue;
	_returnValue = AccessibilitySubsystemCinfo_Equals_m49E691E268E8996616A9BA9E85983707394C2DD6(_thisAdjusted, ___0_other, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AccessibilitySubsystemCinfo_Equals_m1BD3A23EAD9C33D50355D94B6FA45A727D8CFC42 (AccessibilitySubsystemCinfo_tCF25C9AEB9158D1CCC734DBF683F94EF917F3FAB* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AccessibilitySubsystemCinfo_tCF25C9AEB9158D1CCC734DBF683F94EF917F3FAB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	AccessibilitySubsystemCinfo_tCF25C9AEB9158D1CCC734DBF683F94EF917F3FAB V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject* L_0 = ___0_obj;
		if (!((RuntimeObject*)IsInstSealed((RuntimeObject*)L_0, AccessibilitySubsystemCinfo_tCF25C9AEB9158D1CCC734DBF683F94EF917F3FAB_il2cpp_TypeInfo_var)))
		{
			goto IL_0017;
		}
	}
	{
		RuntimeObject* L_1 = ___0_obj;
		V_0 = ((*(AccessibilitySubsystemCinfo_tCF25C9AEB9158D1CCC734DBF683F94EF917F3FAB*)((AccessibilitySubsystemCinfo_tCF25C9AEB9158D1CCC734DBF683F94EF917F3FAB*)(AccessibilitySubsystemCinfo_tCF25C9AEB9158D1CCC734DBF683F94EF917F3FAB*)UnBox(L_1, AccessibilitySubsystemCinfo_tCF25C9AEB9158D1CCC734DBF683F94EF917F3FAB_il2cpp_TypeInfo_var))));
		AccessibilitySubsystemCinfo_tCF25C9AEB9158D1CCC734DBF683F94EF917F3FAB L_2 = V_0;
		bool L_3;
		L_3 = AccessibilitySubsystemCinfo_Equals_m49E691E268E8996616A9BA9E85983707394C2DD6(__this, L_2, NULL);
		return L_3;
	}

IL_0017:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C  bool AccessibilitySubsystemCinfo_Equals_m1BD3A23EAD9C33D50355D94B6FA45A727D8CFC42_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method)
{
	AccessibilitySubsystemCinfo_tCF25C9AEB9158D1CCC734DBF683F94EF917F3FAB* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AccessibilitySubsystemCinfo_tCF25C9AEB9158D1CCC734DBF683F94EF917F3FAB*>(__this + _offset);
	bool _returnValue;
	_returnValue = AccessibilitySubsystemCinfo_Equals_m1BD3A23EAD9C33D50355D94B6FA45A727D8CFC42(_thisAdjusted, ___0_obj, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AccessibilitySubsystemCinfo_op_Equality_m131E9119C6C3C0DF060F5E0444BE0B869E61BFA1 (AccessibilitySubsystemCinfo_tCF25C9AEB9158D1CCC734DBF683F94EF917F3FAB ___0_lhs, AccessibilitySubsystemCinfo_tCF25C9AEB9158D1CCC734DBF683F94EF917F3FAB ___1_rhs, const RuntimeMethod* method) 
{
	{
		AccessibilitySubsystemCinfo_tCF25C9AEB9158D1CCC734DBF683F94EF917F3FAB L_0 = ___1_rhs;
		bool L_1;
		L_1 = AccessibilitySubsystemCinfo_Equals_m49E691E268E8996616A9BA9E85983707394C2DD6((&___0_lhs), L_0, NULL);
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AccessibilitySubsystemCinfo_op_Inequality_m36D213EFE52BFE6EAD556389AB9F43AB8DEC3F44 (AccessibilitySubsystemCinfo_tCF25C9AEB9158D1CCC734DBF683F94EF917F3FAB ___0_lhs, AccessibilitySubsystemCinfo_tCF25C9AEB9158D1CCC734DBF683F94EF917F3FAB ___1_rhs, const RuntimeMethod* method) 
{
	{
		AccessibilitySubsystemCinfo_tCF25C9AEB9158D1CCC734DBF683F94EF917F3FAB L_0 = ___0_lhs;
		AccessibilitySubsystemCinfo_tCF25C9AEB9158D1CCC734DBF683F94EF917F3FAB L_1 = ___1_rhs;
		bool L_2;
		L_2 = AccessibilitySubsystemCinfo_op_Equality_m131E9119C6C3C0DF060F5E0444BE0B869E61BFA1(L_0, L_1, NULL);
		return (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AccessibilitySubsystemCinfo_GetHashCode_mB84786CBF53EF4A9B060D109E71B73C705B7FF09 (AccessibilitySubsystemCinfo_tCF25C9AEB9158D1CCC734DBF683F94EF917F3FAB* __this, const RuntimeMethod* method) 
{
	{
		ApplicationException_tA744BED4E90266BD255285CD4CF909BAB3EE811A* L_0 = (ApplicationException_tA744BED4E90266BD255285CD4CF909BAB3EE811A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ApplicationException_tA744BED4E90266BD255285CD4CF909BAB3EE811A_il2cpp_TypeInfo_var)));
		ApplicationException__ctor_mE51100DFCDB0A0DF23B482CC43EC8E396BE7BE82(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral0514B8E4342F7B936BE02120037C20832C1C2F20)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AccessibilitySubsystemCinfo_GetHashCode_mB84786CBF53EF4A9B060D109E71B73C705B7FF09_RuntimeMethod_var)));
	}
}
IL2CPP_EXTERN_C  int32_t AccessibilitySubsystemCinfo_GetHashCode_mB84786CBF53EF4A9B060D109E71B73C705B7FF09_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	AccessibilitySubsystemCinfo_tCF25C9AEB9158D1CCC734DBF683F94EF917F3FAB* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AccessibilitySubsystemCinfo_tCF25C9AEB9158D1CCC734DBF683F94EF917F3FAB*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = AccessibilitySubsystemCinfo_GetHashCode_mB84786CBF53EF4A9B060D109E71B73C705B7FF09(_thisAdjusted, method);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AccessibilitySubsystemDescriptor__ctor_m1017F1BFFE0F471C44F9E8DCDCCD8EA52866279E (AccessibilitySubsystemDescriptor_t366293770CE03F66419FAB2461E0D33BCE4CDCF1* __this, AccessibilitySubsystemCinfo_tCF25C9AEB9158D1CCC734DBF683F94EF917F3FAB ___0_accessibilitySubsystemCinfo, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SubsystemDescriptorWithProvider_2__ctor_m550CA2FD8B49E27F199025B8D00180D0CBA5BD70_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		SubsystemDescriptorWithProvider_2__ctor_m550CA2FD8B49E27F199025B8D00180D0CBA5BD70(__this, SubsystemDescriptorWithProvider_2__ctor_m550CA2FD8B49E27F199025B8D00180D0CBA5BD70_RuntimeMethod_var);
		String_t* L_0;
		L_0 = AccessibilitySubsystemCinfo_get_Name_m7BA15E44E11886098AA8EA821FA2B0D8CA6D3F69_inline((&___0_accessibilitySubsystemCinfo), NULL);
		AccessibilitySubsystemDescriptor_set_Name_mEFFA92DCB7010EF0D62CFA93CF66C7FE89995A35(__this, L_0, NULL);
		String_t* L_1;
		L_1 = AccessibilitySubsystemCinfo_get_DisplayName_m1C3CADDFDDFF05FF5E06B578B817C79ECEE3A964_inline((&___0_accessibilitySubsystemCinfo), NULL);
		AccessibilitySubsystemDescriptor_set_DisplayName_m229717C0C39B818FA4640EF6BBE1A62F32F172E8_inline(__this, L_1, NULL);
		String_t* L_2;
		L_2 = AccessibilitySubsystemCinfo_get_Author_mB23C2F600D79473293FE3F4DDE478668EE588665_inline((&___0_accessibilitySubsystemCinfo), NULL);
		AccessibilitySubsystemDescriptor_set_Author_m591A68F34AC959997975F6C2C35C4F7B9995E675_inline(__this, L_2, NULL);
		Type_t* L_3;
		L_3 = AccessibilitySubsystemCinfo_get_ProviderType_m4B965C0720F4FCAB71FDE2E1BF4432847A0E1C1B_inline((&___0_accessibilitySubsystemCinfo), NULL);
		AccessibilitySubsystemDescriptor_set_ProviderType_mAFC2AE75ADD111813929CB2345C459A474CEF14A(__this, L_3, NULL);
		Type_t* L_4;
		L_4 = AccessibilitySubsystemCinfo_get_SubsystemTypeOverride_m8C9D503648BE2A02681BF586F56DCCE002B3DEAF_inline((&___0_accessibilitySubsystemCinfo), NULL);
		AccessibilitySubsystemDescriptor_set_SubsystemTypeOverride_m42CE8C9FDCEC0043F91A21D048593EA54C13AB9E(__this, L_4, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AccessibilitySubsystemDescriptor_get_Name_m108F199A1FF05C30E863E0AF62C461B1F72AFC58 (AccessibilitySubsystemDescriptor_t366293770CE03F66419FAB2461E0D33BCE4CDCF1* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0;
		L_0 = SubsystemDescriptorWithProvider_get_id_m9E92FDF45FE9BFB0B28C2AE3EFE475998D01BBC7_inline(__this, NULL);
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AccessibilitySubsystemDescriptor_set_Name_mEFFA92DCB7010EF0D62CFA93CF66C7FE89995A35 (AccessibilitySubsystemDescriptor_t366293770CE03F66419FAB2461E0D33BCE4CDCF1* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___0_value;
		SubsystemDescriptorWithProvider_set_id_m4E93140B46C960FFB4723062C55D05D7B551A57B_inline(__this, L_0, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AccessibilitySubsystemDescriptor_get_DisplayName_m57EB1603CD462F798F8FE303DFA65313FEBE8885 (AccessibilitySubsystemDescriptor_t366293770CE03F66419FAB2461E0D33BCE4CDCF1* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CDisplayNameU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AccessibilitySubsystemDescriptor_set_DisplayName_m229717C0C39B818FA4640EF6BBE1A62F32F172E8 (AccessibilitySubsystemDescriptor_t366293770CE03F66419FAB2461E0D33BCE4CDCF1* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___0_value;
		__this->___U3CDisplayNameU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CDisplayNameU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AccessibilitySubsystemDescriptor_get_Author_mB979A9783295A2FB593430FECB605A09265BAEC3 (AccessibilitySubsystemDescriptor_t366293770CE03F66419FAB2461E0D33BCE4CDCF1* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CAuthorU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AccessibilitySubsystemDescriptor_set_Author_m591A68F34AC959997975F6C2C35C4F7B9995E675 (AccessibilitySubsystemDescriptor_t366293770CE03F66419FAB2461E0D33BCE4CDCF1* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___0_value;
		__this->___U3CAuthorU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CAuthorU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* AccessibilitySubsystemDescriptor_get_ConfigType_m4135BDC70C4E0D1F9CDBAE6E649DAED4E6ACA0D0 (AccessibilitySubsystemDescriptor_t366293770CE03F66419FAB2461E0D33BCE4CDCF1* __this, const RuntimeMethod* method) 
{
	{
		Type_t* L_0 = __this->___U3CConfigTypeU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AccessibilitySubsystemDescriptor_set_ConfigType_m0C210B6EB04EC932CADFC2DDBF0F52F613DCC5F1 (AccessibilitySubsystemDescriptor_t366293770CE03F66419FAB2461E0D33BCE4CDCF1* __this, Type_t* ___0_value, const RuntimeMethod* method) 
{
	{
		Type_t* L_0 = ___0_value;
		__this->___U3CConfigTypeU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CConfigTypeU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* AccessibilitySubsystemDescriptor_get_ProviderType_m4B7348F17EC306A651B8C1ADB36C1D2D75F535BB (AccessibilitySubsystemDescriptor_t366293770CE03F66419FAB2461E0D33BCE4CDCF1* __this, const RuntimeMethod* method) 
{
	{
		Type_t* L_0;
		L_0 = SubsystemDescriptorWithProvider_get_providerType_m1ED8F898361B508FFE2A46D05E81CEAC43B040D4_inline(__this, NULL);
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AccessibilitySubsystemDescriptor_set_ProviderType_mAFC2AE75ADD111813929CB2345C459A474CEF14A (AccessibilitySubsystemDescriptor_t366293770CE03F66419FAB2461E0D33BCE4CDCF1* __this, Type_t* ___0_value, const RuntimeMethod* method) 
{
	{
		Type_t* L_0 = ___0_value;
		SubsystemDescriptorWithProvider_set_providerType_m27A630CAFBA225796667E17DE114673056339EA4_inline(__this, L_0, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* AccessibilitySubsystemDescriptor_get_SubsystemTypeOverride_m20ABACBB65F37D963EF6D5E83D3BC4991A04CD1D (AccessibilitySubsystemDescriptor_t366293770CE03F66419FAB2461E0D33BCE4CDCF1* __this, const RuntimeMethod* method) 
{
	{
		Type_t* L_0;
		L_0 = SubsystemDescriptorWithProvider_get_subsystemTypeOverride_mCE84F1611CB09975FBB4BE48E015316ADDB52668_inline(__this, NULL);
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AccessibilitySubsystemDescriptor_set_SubsystemTypeOverride_m42CE8C9FDCEC0043F91A21D048593EA54C13AB9E (AccessibilitySubsystemDescriptor_t366293770CE03F66419FAB2461E0D33BCE4CDCF1* __this, Type_t* ___0_value, const RuntimeMethod* method) 
{
	{
		Type_t* L_0 = ___0_value;
		SubsystemDescriptorWithProvider_set_subsystemTypeOverride_m34C15BBBE4EB41226EF1C0A0C8BB73A0955E0F3E_inline(__this, L_0, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AccessibilitySubsystemDescriptor_t366293770CE03F66419FAB2461E0D33BCE4CDCF1* AccessibilitySubsystemDescriptor_Create_m13D5FA518F88AFBC27B603EFD3E2DAE6AC11B4D9 (AccessibilitySubsystemCinfo_tCF25C9AEB9158D1CCC734DBF683F94EF917F3FAB ___0_cinfo, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AccessibilitySubsystemDescriptor_t366293770CE03F66419FAB2461E0D33BCE4CDCF1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRSubsystemHelpers_CheckTypes_TisAccessibilitySubsystem_t26A604A92BAA7AB49AE390E0005A789720443582_TisProvider_t6B89658FF42BACD2F4C91E0ABFF9D2DA6DE3D60A_mFC88ADC53CB14101995C34E0BF2BD65E6791BB9D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRSubsystemHelpers_t45A7829EE68B01DAAC3E4509FC75A1D794423C7F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral680D5F85FF107897716444439FE6176166BED070);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0;
		L_0 = AccessibilitySubsystemCinfo_get_Name_m7BA15E44E11886098AA8EA821FA2B0D8CA6D3F69_inline((&___0_cinfo), NULL);
		Type_t* L_1;
		L_1 = AccessibilitySubsystemCinfo_get_SubsystemTypeOverride_m8C9D503648BE2A02681BF586F56DCCE002B3DEAF_inline((&___0_cinfo), NULL);
		Type_t* L_2;
		L_2 = AccessibilitySubsystemCinfo_get_ProviderType_m4B965C0720F4FCAB71FDE2E1BF4432847A0E1C1B_inline((&___0_cinfo), NULL);
		il2cpp_codegen_runtime_class_init_inline(XRSubsystemHelpers_t45A7829EE68B01DAAC3E4509FC75A1D794423C7F_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = XRSubsystemHelpers_CheckTypes_TisAccessibilitySubsystem_t26A604A92BAA7AB49AE390E0005A789720443582_TisProvider_t6B89658FF42BACD2F4C91E0ABFF9D2DA6DE3D60A_mFC88ADC53CB14101995C34E0BF2BD65E6791BB9D(L_0, L_1, L_2, XRSubsystemHelpers_CheckTypes_TisAccessibilitySubsystem_t26A604A92BAA7AB49AE390E0005A789720443582_TisProvider_t6B89658FF42BACD2F4C91E0ABFF9D2DA6DE3D60A_mFC88ADC53CB14101995C34E0BF2BD65E6791BB9D_RuntimeMethod_var);
		if (L_3)
		{
			goto IL_0027;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_4 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral8B158F9A3667630BBA0D7A4DB24E6105065433E7)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AccessibilitySubsystemDescriptor_Create_m13D5FA518F88AFBC27B603EFD3E2DAE6AC11B4D9_RuntimeMethod_var)));
	}

IL_0027:
	{
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteral680D5F85FF107897716444439FE6176166BED070, NULL);
		AccessibilitySubsystemCinfo_tCF25C9AEB9158D1CCC734DBF683F94EF917F3FAB L_5 = ___0_cinfo;
		AccessibilitySubsystemDescriptor_t366293770CE03F66419FAB2461E0D33BCE4CDCF1* L_6 = (AccessibilitySubsystemDescriptor_t366293770CE03F66419FAB2461E0D33BCE4CDCF1*)il2cpp_codegen_object_new(AccessibilitySubsystemDescriptor_t366293770CE03F66419FAB2461E0D33BCE4CDCF1_il2cpp_TypeInfo_var);
		AccessibilitySubsystemDescriptor__ctor_m1017F1BFFE0F471C44F9E8DCDCCD8EA52866279E(L_6, L_5, NULL);
		return L_6;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MRTKAccessibilitySubsystem_Register_m0F566F665ED6C57F7BAD01365A89C6B9280BF700 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRSubsystemHelpers_ConstructCinfo_TisMRTKAccessibilitySubsystem_t18CB758CAB0BD6C5DDC4115125641F7EBAA8018F_TisAccessibilitySubsystemCinfo_tCF25C9AEB9158D1CCC734DBF683F94EF917F3FAB_m9FED92F08254D85C3BCB0B4D0ACA8E0CA4E04998_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRSubsystemHelpers_t45A7829EE68B01DAAC3E4509FC75A1D794423C7F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA48C0F16E39A46C469EC5BB4DA73F02A7D84D8E7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE528A64618644524EC116F5E5BB24B0B6C94B55F);
		s_Il2CppMethodInitialized = true;
	}
	AccessibilitySubsystemCinfo_tCF25C9AEB9158D1CCC734DBF683F94EF917F3FAB V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_runtime_class_init_inline(XRSubsystemHelpers_t45A7829EE68B01DAAC3E4509FC75A1D794423C7F_il2cpp_TypeInfo_var);
		AccessibilitySubsystemCinfo_tCF25C9AEB9158D1CCC734DBF683F94EF917F3FAB L_0;
		L_0 = XRSubsystemHelpers_ConstructCinfo_TisMRTKAccessibilitySubsystem_t18CB758CAB0BD6C5DDC4115125641F7EBAA8018F_TisAccessibilitySubsystemCinfo_tCF25C9AEB9158D1CCC734DBF683F94EF917F3FAB_m9FED92F08254D85C3BCB0B4D0ACA8E0CA4E04998(XRSubsystemHelpers_ConstructCinfo_TisMRTKAccessibilitySubsystem_t18CB758CAB0BD6C5DDC4115125641F7EBAA8018F_TisAccessibilitySubsystemCinfo_tCF25C9AEB9158D1CCC734DBF683F94EF917F3FAB_m9FED92F08254D85C3BCB0B4D0ACA8E0CA4E04998_RuntimeMethod_var);
		V_0 = L_0;
		AccessibilitySubsystemCinfo_tCF25C9AEB9158D1CCC734DBF683F94EF917F3FAB L_1 = V_0;
		bool L_2;
		L_2 = AccessibilitySubsystem_Register_m7FE164349E7F04D107D53BCBBCEB5E34695239D3(L_1, NULL);
		if (L_2)
		{
			goto IL_0029;
		}
	}
	{
		String_t* L_3;
		L_3 = AccessibilitySubsystemCinfo_get_Name_m7BA15E44E11886098AA8EA821FA2B0D8CA6D3F69_inline((&V_0), NULL);
		String_t* L_4;
		L_4 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(_stringLiteralA48C0F16E39A46C469EC5BB4DA73F02A7D84D8E7, L_3, _stringLiteralE528A64618644524EC116F5E5BB24B0B6C94B55F, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(L_4, NULL);
	}

IL_0029:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MRTKAccessibilitySubsystem__ctor_m23BF63985FE6DA3D03B73405678CF49497478C48 (MRTKAccessibilitySubsystem_t18CB758CAB0BD6C5DDC4115125641F7EBAA8018F* __this, const RuntimeMethod* method) 
{
	{
		AccessibilitySubsystem__ctor_m346280A1856D314E104FD4688F97D970CB692AE6(__this, NULL);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AccessibilitySubsystemConfig_t04BF4C96175B11A0C996CDD69CA75C82A8B645C3* AccessibilityProvider_get_Config_m8BDDBA8D863454381F67C1D5AB92E2BFF20CFD1D (AccessibilityProvider_tED15C3EB0977856F8B4828DFCAD18A7ED3AF6716* __this, const RuntimeMethod* method) 
{
	{
		AccessibilitySubsystemConfig_t04BF4C96175B11A0C996CDD69CA75C82A8B645C3* L_0 = __this->___U3CConfigU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AccessibilityProvider__ctor_m0020981F2558A0FF492DA062EB70726E1E65E1B3 (AccessibilityProvider_tED15C3EB0977856F8B4828DFCAD18A7ED3AF6716* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_mC921F0A6E3AEDBFBCFB8814339BAE1322DD2ABDC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_tE1D19D0AA81D718342812CD900CBF4D4C298AF8E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRSubsystemHelpers_GetConfiguration_TisAccessibilitySubsystemConfig_t04BF4C96175B11A0C996CDD69CA75C82A8B645C3_TisMRTKAccessibilitySubsystem_t18CB758CAB0BD6C5DDC4115125641F7EBAA8018F_mC0212D83AED30A16AD3BD0C9812DB75CF94FBCC1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRSubsystemHelpers_t45A7829EE68B01DAAC3E4509FC75A1D794423C7F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Dictionary_2_tE1D19D0AA81D718342812CD900CBF4D4C298AF8E* L_0 = (Dictionary_2_tE1D19D0AA81D718342812CD900CBF4D4C298AF8E*)il2cpp_codegen_object_new(Dictionary_2_tE1D19D0AA81D718342812CD900CBF4D4C298AF8E_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_mC921F0A6E3AEDBFBCFB8814339BAE1322DD2ABDC(L_0, Dictionary_2__ctor_mC921F0A6E3AEDBFBCFB8814339BAE1322DD2ABDC_RuntimeMethod_var);
		__this->___accessibleObjects = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___accessibleObjects), (void*)L_0);
		Provider__ctor_mB4F3702935FBE59EE119EECC559DEAFB0BFDA904(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(XRSubsystemHelpers_t45A7829EE68B01DAAC3E4509FC75A1D794423C7F_il2cpp_TypeInfo_var);
		AccessibilitySubsystemConfig_t04BF4C96175B11A0C996CDD69CA75C82A8B645C3* L_1;
		L_1 = XRSubsystemHelpers_GetConfiguration_TisAccessibilitySubsystemConfig_t04BF4C96175B11A0C996CDD69CA75C82A8B645C3_TisMRTKAccessibilitySubsystem_t18CB758CAB0BD6C5DDC4115125641F7EBAA8018F_mC0212D83AED30A16AD3BD0C9812DB75CF94FBCC1(XRSubsystemHelpers_GetConfiguration_TisAccessibilitySubsystemConfig_t04BF4C96175B11A0C996CDD69CA75C82A8B645C3_TisMRTKAccessibilitySubsystem_t18CB758CAB0BD6C5DDC4115125641F7EBAA8018F_mC0212D83AED30A16AD3BD0C9812DB75CF94FBCC1_RuntimeMethod_var);
		__this->___U3CConfigU3Ek__BackingField = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CConfigU3Ek__BackingField), (void*)L_1);
		AccessibilitySubsystemConfig_t04BF4C96175B11A0C996CDD69CA75C82A8B645C3* L_2;
		L_2 = AccessibilityProvider_get_Config_m8BDDBA8D863454381F67C1D5AB92E2BFF20CFD1D_inline(__this, NULL);
		NullCheck(L_2);
		bool L_3;
		L_3 = AccessibilitySubsystemConfig_get_InvertTextColor_m99AE5F060B8439274802FCFEC0695DAC12C2CB40_inline(L_2, NULL);
		__this->___invertTextColor = L_3;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AccessibilityProvider_TryGetAccessibleObjects_m67921EE44A66E5A277C091CD61CDB0EB10D7413A (AccessibilityProvider_tED15C3EB0977856F8B4828DFCAD18A7ED3AF6716* __this, List_1_t3F33A8B72EA0ADD649C3EDDA8DCA89789DEBA09C* ___0_classifications, int32_t ___1_visibility, float ___2_maxDistance, List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* ___3_accessibleObjectsList, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_m32D399BDD753B5BD6CE27560249096418F3F0867_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral906F379A3EDE20E3AEF88CF2F80715B39D89684B);
		s_Il2CppMethodInitialized = true;
	}
	{
		float L_0 = ___2_maxDistance;
		if ((!(((float)L_0) <= ((float)(0.0f)))))
		{
			goto IL_0014;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(_stringLiteral906F379A3EDE20E3AEF88CF2F80715B39D89684B, NULL);
		return (bool)0;
	}

IL_0014:
	{
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_1 = ___3_accessibleObjectsList;
		NullCheck(L_1);
		List_1_Clear_m32D399BDD753B5BD6CE27560249096418F3F0867_inline(L_1, List_1_Clear_m32D399BDD753B5BD6CE27560249096418F3F0867_RuntimeMethod_var);
		List_1_t3F33A8B72EA0ADD649C3EDDA8DCA89789DEBA09C* L_2 = ___0_classifications;
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_3 = ___3_accessibleObjectsList;
		AccessibilityProvider_AssembleAccessibleObjects_m4D306FFD496179B967A3339305B4C69F9E6AFB0D(__this, L_2, L_3, NULL);
		int32_t L_4 = ___1_visibility;
		float L_5 = ___2_maxDistance;
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_6 = ___3_accessibleObjectsList;
		AccessibilityProvider_FilterAccessibleObjects_m01D01B98B708732F7B9773926F456645BCC12AE5(__this, L_4, L_5, L_6, NULL);
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AccessibilityProvider_TryGetAccessibleObjectClassifications_mC0AD9F54B336AFF785258B98F163692EF2495E6B (AccessibilityProvider_tED15C3EB0977856F8B4828DFCAD18A7ED3AF6716* __this, List_1_t3F33A8B72EA0ADD649C3EDDA8DCA89789DEBA09C* ___0_classifications, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Keys_m7B5DDF7BCC66529C9DC6E9C39BAD534182492AD8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_AddRange_m3452DB888275C4F2F551F5EA575B97E5BD7E077C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_mC8BB955AE59B04F0EAF93471507EEE766D066516_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		List_1_t3F33A8B72EA0ADD649C3EDDA8DCA89789DEBA09C* L_0 = ___0_classifications;
		NullCheck(L_0);
		List_1_Clear_mC8BB955AE59B04F0EAF93471507EEE766D066516_inline(L_0, List_1_Clear_mC8BB955AE59B04F0EAF93471507EEE766D066516_RuntimeMethod_var);
		List_1_t3F33A8B72EA0ADD649C3EDDA8DCA89789DEBA09C* L_1 = ___0_classifications;
		Dictionary_2_tE1D19D0AA81D718342812CD900CBF4D4C298AF8E* L_2 = __this->___accessibleObjects;
		NullCheck(L_2);
		KeyCollection_tF1DFF34D6882A27E9FE9CBAF10A79F298D6BEC85* L_3;
		L_3 = Dictionary_2_get_Keys_m7B5DDF7BCC66529C9DC6E9C39BAD534182492AD8(L_2, Dictionary_2_get_Keys_m7B5DDF7BCC66529C9DC6E9C39BAD534182492AD8_RuntimeMethod_var);
		NullCheck(L_1);
		List_1_AddRange_m3452DB888275C4F2F551F5EA575B97E5BD7E077C(L_1, L_3, List_1_AddRange_m3452DB888275C4F2F551F5EA575B97E5BD7E077C_RuntimeMethod_var);
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AccessibilityProvider_TryRegisterAccessibleObject_mADBBEAF93FC3144E35C8EA8FD3807BA0B294EFE0 (AccessibilityProvider_tED15C3EB0977856F8B4828DFCAD18A7ED3AF6716* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___0_accessibleObject, AccessibleObjectClassification_t48AAC4E76C1D9AA7E8CFB11F30B54DC795646ED9* ___1_classification, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_m257B8C90C41CB522B5A2D24FFF4676471FE46B33_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_m25BEAB34BCA70DF90CF8FFB48C90F4356C816B0B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_m78CDA8E556C6471CCE4A2F137898CDD00DED974E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Values_mB8994FB01D5326868F236A779F2DF4E5BAC10D7A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m4FEC06045F10D0643E3EB6DBBFB57844CDF58166_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mF04637E81CF819EBD5975E53102C923C17FFB3E1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m658804DB42C0652E5963E8B12A95415AA17257ED_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollection_1_tD8640BD3EEEC2043D69EE193D0BF9F8569B458D6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m43FBF207375C6E06B8C45ECE614F9B8008FB686E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m447372C1EF7141193B93090A77395B786C72C7BC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ValueCollection_GetEnumerator_mDFB5AD8B638E6EF2679CFAF9138B32296E811497_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral281033B411A2723B0C82F6B48AC1E70FEB902A11);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_tAFB46C81D6CE3638BC27A7CB79EE6033BA6D14A6 V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	{
		Dictionary_2_tE1D19D0AA81D718342812CD900CBF4D4C298AF8E* L_0 = __this->___accessibleObjects;
		NullCheck(L_0);
		ValueCollection_tAE64CCEC60B5F147734777C2F91A95E9FDE4C7A7* L_1;
		L_1 = Dictionary_2_get_Values_mB8994FB01D5326868F236A779F2DF4E5BAC10D7A(L_0, Dictionary_2_get_Values_mB8994FB01D5326868F236A779F2DF4E5BAC10D7A_RuntimeMethod_var);
		NullCheck(L_1);
		Enumerator_tAFB46C81D6CE3638BC27A7CB79EE6033BA6D14A6 L_2;
		L_2 = ValueCollection_GetEnumerator_mDFB5AD8B638E6EF2679CFAF9138B32296E811497(L_1, ValueCollection_GetEnumerator_mDFB5AD8B638E6EF2679CFAF9138B32296E811497_RuntimeMethod_var);
		V_0 = L_2;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0046:
			{
				Enumerator_Dispose_m4FEC06045F10D0643E3EB6DBBFB57844CDF58166((&V_0), Enumerator_Dispose_m4FEC06045F10D0643E3EB6DBBFB57844CDF58166_RuntimeMethod_var);
				return;
			}
		});
		try
		{
			{
				goto IL_003b_1;
			}

IL_0013_1:
			{
				List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_3;
				L_3 = Enumerator_get_Current_m658804DB42C0652E5963E8B12A95415AA17257ED_inline((&V_0), Enumerator_get_Current_m658804DB42C0652E5963E8B12A95415AA17257ED_RuntimeMethod_var);
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4 = ___0_accessibleObject;
				NullCheck(L_3);
				bool L_5;
				L_5 = InterfaceFuncInvoker1< bool, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* >::Invoke(4, ICollection_1_tD8640BD3EEEC2043D69EE193D0BF9F8569B458D6_il2cpp_TypeInfo_var, L_3, L_4);
				if (!L_5)
				{
					goto IL_003b_1;
				}
			}
			{
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6 = ___0_accessibleObject;
				NullCheck(L_6);
				String_t* L_7;
				L_7 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_6, NULL);
				String_t* L_8;
				L_8 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_7, _stringLiteral281033B411A2723B0C82F6B48AC1E70FEB902A11, NULL);
				il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
				Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(L_8, NULL);
				V_1 = (bool)0;
				goto IL_0087;
			}

IL_003b_1:
			{
				bool L_9;
				L_9 = Enumerator_MoveNext_mF04637E81CF819EBD5975E53102C923C17FFB3E1((&V_0), Enumerator_MoveNext_mF04637E81CF819EBD5975E53102C923C17FFB3E1_RuntimeMethod_var);
				if (L_9)
				{
					goto IL_0013_1;
				}
			}
			{
				goto IL_0054;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0054:
	{
		Dictionary_2_tE1D19D0AA81D718342812CD900CBF4D4C298AF8E* L_10 = __this->___accessibleObjects;
		AccessibleObjectClassification_t48AAC4E76C1D9AA7E8CFB11F30B54DC795646ED9* L_11 = ___1_classification;
		NullCheck(L_10);
		bool L_12;
		L_12 = Dictionary_2_ContainsKey_m25BEAB34BCA70DF90CF8FFB48C90F4356C816B0B(L_10, L_11, Dictionary_2_ContainsKey_m25BEAB34BCA70DF90CF8FFB48C90F4356C816B0B_RuntimeMethod_var);
		if (L_12)
		{
			goto IL_0073;
		}
	}
	{
		Dictionary_2_tE1D19D0AA81D718342812CD900CBF4D4C298AF8E* L_13 = __this->___accessibleObjects;
		AccessibleObjectClassification_t48AAC4E76C1D9AA7E8CFB11F30B54DC795646ED9* L_14 = ___1_classification;
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_15 = (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B*)il2cpp_codegen_object_new(List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B_il2cpp_TypeInfo_var);
		List_1__ctor_m447372C1EF7141193B93090A77395B786C72C7BC(L_15, List_1__ctor_m447372C1EF7141193B93090A77395B786C72C7BC_RuntimeMethod_var);
		NullCheck(L_13);
		Dictionary_2_Add_m257B8C90C41CB522B5A2D24FFF4676471FE46B33(L_13, L_14, L_15, Dictionary_2_Add_m257B8C90C41CB522B5A2D24FFF4676471FE46B33_RuntimeMethod_var);
	}

IL_0073:
	{
		Dictionary_2_tE1D19D0AA81D718342812CD900CBF4D4C298AF8E* L_16 = __this->___accessibleObjects;
		AccessibleObjectClassification_t48AAC4E76C1D9AA7E8CFB11F30B54DC795646ED9* L_17 = ___1_classification;
		NullCheck(L_16);
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_18;
		L_18 = Dictionary_2_get_Item_m78CDA8E556C6471CCE4A2F137898CDD00DED974E(L_16, L_17, Dictionary_2_get_Item_m78CDA8E556C6471CCE4A2F137898CDD00DED974E_RuntimeMethod_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_19 = ___0_accessibleObject;
		NullCheck(L_18);
		List_1_Add_m43FBF207375C6E06B8C45ECE614F9B8008FB686E_inline(L_18, L_19, List_1_Add_m43FBF207375C6E06B8C45ECE614F9B8008FB686E_RuntimeMethod_var);
		return (bool)1;
	}

IL_0087:
	{
		bool L_20 = V_1;
		return L_20;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AccessibilityProvider_TryUnregisterAccessibleObject_m04DF8D869FAF13C99917FE3F667A488FE518696E (AccessibilityProvider_tED15C3EB0977856F8B4828DFCAD18A7ED3AF6716* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___0_accessibleObject, AccessibleObjectClassification_t48AAC4E76C1D9AA7E8CFB11F30B54DC795646ED9* ___1_classification, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_m78CDA8E556C6471CCE4A2F137898CDD00DED974E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Contains_m8D2C9B0C7844486763AE6C2CA3C04FA4BBA9B384_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Remove_mCCE85D4D5326536C4B214C73D07030F4CCD18485_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral52D2CD097CFAA0461035A19E2C6115F54219A6EE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE9DAA516D37F8A67FD590A557B2B18E7B9BC8F7C);
		s_Il2CppMethodInitialized = true;
	}
	List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* V_0 = NULL;
	{
		Dictionary_2_tE1D19D0AA81D718342812CD900CBF4D4C298AF8E* L_0 = __this->___accessibleObjects;
		AccessibleObjectClassification_t48AAC4E76C1D9AA7E8CFB11F30B54DC795646ED9* L_1 = ___1_classification;
		NullCheck(L_0);
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_2;
		L_2 = Dictionary_2_get_Item_m78CDA8E556C6471CCE4A2F137898CDD00DED974E(L_0, L_1, Dictionary_2_get_Item_m78CDA8E556C6471CCE4A2F137898CDD00DED974E_RuntimeMethod_var);
		V_0 = L_2;
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_3 = V_0;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4 = ___0_accessibleObject;
		NullCheck(L_3);
		bool L_5;
		L_5 = List_1_Contains_m8D2C9B0C7844486763AE6C2CA3C04FA4BBA9B384(L_3, L_4, List_1_Contains_m8D2C9B0C7844486763AE6C2CA3C04FA4BBA9B384_RuntimeMethod_var);
		if (L_5)
		{
			goto IL_002e;
		}
	}
	{
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6 = ___0_accessibleObject;
		NullCheck(L_6);
		String_t* L_7;
		L_7 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_6, NULL);
		AccessibleObjectClassification_t48AAC4E76C1D9AA7E8CFB11F30B54DC795646ED9* L_8 = ___1_classification;
		String_t* L_9;
		L_9 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(_stringLiteral52D2CD097CFAA0461035A19E2C6115F54219A6EE, L_7, L_8, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(L_9, NULL);
		return (bool)0;
	}

IL_002e:
	{
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_10 = V_0;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_11 = ___0_accessibleObject;
		NullCheck(L_10);
		bool L_12;
		L_12 = List_1_Remove_mCCE85D4D5326536C4B214C73D07030F4CCD18485(L_10, L_11, List_1_Remove_mCCE85D4D5326536C4B214C73D07030F4CCD18485_RuntimeMethod_var);
		if (L_12)
		{
			goto IL_004f;
		}
	}
	{
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_13 = ___0_accessibleObject;
		NullCheck(L_13);
		String_t* L_14;
		L_14 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_13, NULL);
		AccessibleObjectClassification_t48AAC4E76C1D9AA7E8CFB11F30B54DC795646ED9* L_15 = ___1_classification;
		String_t* L_16;
		L_16 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(_stringLiteralE9DAA516D37F8A67FD590A557B2B18E7B9BC8F7C, L_14, L_15, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(L_16, NULL);
		return (bool)0;
	}

IL_004f:
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AccessibilityProvider_AssembleAccessibleObjects_m4D306FFD496179B967A3339305B4C69F9E6AFB0D (AccessibilityProvider_tED15C3EB0977856F8B4828DFCAD18A7ED3AF6716* __this, List_1_t3F33A8B72EA0ADD649C3EDDA8DCA89789DEBA09C* ___0_classifications, List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* ___1_accessibleObjectsList, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_m78CDA8E556C6471CCE4A2F137898CDD00DED974E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m75297E7D08AE3AB13BC9E9B5B217CFD43E463FB0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m04143F3DAE9E0837982BEE60843B7B78C168BE6D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m571AAB121D0C10985A7C3A783461745D9DA3FE9C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_AddRange_mF7CB62C0F98328B0EC44EC48E5DAD891B8BC749C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m5FBB6B16664449B594EE92438FDAFBF6A89BADF4_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_t05887FF31BF2F9C1E8DF40C9EF6915337EDEE6DF V_0;
	memset((&V_0), 0, sizeof(V_0));
	AccessibleObjectClassification_t48AAC4E76C1D9AA7E8CFB11F30B54DC795646ED9* V_1 = NULL;
	{
		List_1_t3F33A8B72EA0ADD649C3EDDA8DCA89789DEBA09C* L_0 = ___0_classifications;
		NullCheck(L_0);
		Enumerator_t05887FF31BF2F9C1E8DF40C9EF6915337EDEE6DF L_1;
		L_1 = List_1_GetEnumerator_m5FBB6B16664449B594EE92438FDAFBF6A89BADF4(L_0, List_1_GetEnumerator_m5FBB6B16664449B594EE92438FDAFBF6A89BADF4_RuntimeMethod_var);
		V_0 = L_1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_002e:
			{
				Enumerator_Dispose_m75297E7D08AE3AB13BC9E9B5B217CFD43E463FB0((&V_0), Enumerator_Dispose_m75297E7D08AE3AB13BC9E9B5B217CFD43E463FB0_RuntimeMethod_var);
				return;
			}
		});
		try
		{
			{
				goto IL_0023_1;
			}

IL_0009_1:
			{
				AccessibleObjectClassification_t48AAC4E76C1D9AA7E8CFB11F30B54DC795646ED9* L_2;
				L_2 = Enumerator_get_Current_m571AAB121D0C10985A7C3A783461745D9DA3FE9C_inline((&V_0), Enumerator_get_Current_m571AAB121D0C10985A7C3A783461745D9DA3FE9C_RuntimeMethod_var);
				V_1 = L_2;
				List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_3 = ___1_accessibleObjectsList;
				Dictionary_2_tE1D19D0AA81D718342812CD900CBF4D4C298AF8E* L_4 = __this->___accessibleObjects;
				AccessibleObjectClassification_t48AAC4E76C1D9AA7E8CFB11F30B54DC795646ED9* L_5 = V_1;
				NullCheck(L_4);
				List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_6;
				L_6 = Dictionary_2_get_Item_m78CDA8E556C6471CCE4A2F137898CDD00DED974E(L_4, L_5, Dictionary_2_get_Item_m78CDA8E556C6471CCE4A2F137898CDD00DED974E_RuntimeMethod_var);
				NullCheck(L_3);
				List_1_AddRange_mF7CB62C0F98328B0EC44EC48E5DAD891B8BC749C(L_3, L_6, List_1_AddRange_mF7CB62C0F98328B0EC44EC48E5DAD891B8BC749C_RuntimeMethod_var);
			}

IL_0023_1:
			{
				bool L_7;
				L_7 = Enumerator_MoveNext_m04143F3DAE9E0837982BEE60843B7B78C168BE6D((&V_0), Enumerator_MoveNext_m04143F3DAE9E0837982BEE60843B7B78C168BE6D_RuntimeMethod_var);
				if (L_7)
				{
					goto IL_0009_1;
				}
			}
			{
				goto IL_003c;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_003c:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AccessibilityProvider_FilterAccessibleObjects_m01D01B98B708732F7B9773926F456645BCC12AE5 (AccessibilityProvider_tED15C3EB0977856F8B4828DFCAD18A7ED3AF6716* __this, int32_t ___0_visibility, float ___1_maxDistance, List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* ___2_objectList, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CameraFOVChecker_t3475E4E43D873C7B11A8E76B124E52979A7D9A8E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_TryGetComponent_TisCollider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76_mFF30CBE3C429844CF584BAC596EDAF7B49398705_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Remove_mCCE85D4D5326536C4B214C73D07030F4CCD18485_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	int32_t V_1 = 0;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_2 = NULL;
	Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* V_3 = NULL;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_0 = ___2_objectList;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_inline(L_0, List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_RuntimeMethod_var);
		if (L_1)
		{
			goto IL_0009;
		}
	}
	{
		return;
	}

IL_0009:
	{
		float L_2 = ___1_maxDistance;
		float L_3 = ___1_maxDistance;
		V_0 = ((float)il2cpp_codegen_multiply(L_2, L_3));
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_4 = ___2_objectList;
		NullCheck(L_4);
		int32_t L_5;
		L_5 = List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_inline(L_4, List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_RuntimeMethod_var);
		V_1 = ((int32_t)il2cpp_codegen_subtract(L_5, 1));
		goto IL_0084;
	}

IL_0018:
	{
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_6 = ___2_objectList;
		int32_t L_7 = V_1;
		NullCheck(L_6);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_8;
		L_8 = List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979(L_6, L_7, List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979_RuntimeMethod_var);
		V_2 = L_8;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_9 = V_2;
		NullCheck(L_9);
		bool L_10;
		L_10 = GameObject_TryGetComponent_TisCollider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76_mFF30CBE3C429844CF584BAC596EDAF7B49398705(L_9, (&V_3), GameObject_TryGetComponent_TisCollider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76_mFF30CBE3C429844CF584BAC596EDAF7B49398705_RuntimeMethod_var);
		if (L_10)
		{
			goto IL_0034;
		}
	}
	{
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_11 = ___2_objectList;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_12 = V_2;
		NullCheck(L_11);
		bool L_13;
		L_13 = List_1_Remove_mCCE85D4D5326536C4B214C73D07030F4CCD18485(L_11, L_12, List_1_Remove_mCCE85D4D5326536C4B214C73D07030F4CCD18485_RuntimeMethod_var);
		goto IL_0080;
	}

IL_0034:
	{
		int32_t L_14 = ___0_visibility;
		if ((!(((uint32_t)L_14) == ((uint32_t)1))))
		{
			goto IL_004d;
		}
	}
	{
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_15;
		L_15 = Camera_get_main_m52C992F18E05355ABB9EEB64A4BF2215E12762DF(NULL);
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_16 = V_3;
		il2cpp_codegen_runtime_class_init_inline(CameraFOVChecker_t3475E4E43D873C7B11A8E76B124E52979A7D9A8E_il2cpp_TypeInfo_var);
		bool L_17;
		L_17 = CameraFOVChecker_IsInFOVCached_m79438798C0A3B4D4ECDE161D0FE45E8040925D69(L_15, L_16, NULL);
		if (L_17)
		{
			goto IL_004d;
		}
	}
	{
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_18 = ___2_objectList;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_19 = V_2;
		NullCheck(L_18);
		bool L_20;
		L_20 = List_1_Remove_mCCE85D4D5326536C4B214C73D07030F4CCD18485(L_18, L_19, List_1_Remove_mCCE85D4D5326536C4B214C73D07030F4CCD18485_RuntimeMethod_var);
	}

IL_004d:
	{
		float L_21 = V_0;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_22;
		L_22 = Camera_get_main_m52C992F18E05355ABB9EEB64A4BF2215E12762DF(NULL);
		NullCheck(L_22);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_23;
		L_23 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_22, NULL);
		NullCheck(L_23);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_24;
		L_24 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_23, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_25 = V_2;
		NullCheck(L_25);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_26;
		L_26 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_25, NULL);
		NullCheck(L_26);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_27;
		L_27 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_26, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_28;
		L_28 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_24, L_27, NULL);
		V_4 = L_28;
		float L_29;
		L_29 = Vector3_get_sqrMagnitude_m43C27DEC47C4811FB30AB474FF2131A963B66FC8_inline((&V_4), NULL);
		if ((!(((float)L_21) < ((float)L_29))))
		{
			goto IL_0080;
		}
	}
	{
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_30 = ___2_objectList;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_31 = V_2;
		NullCheck(L_30);
		bool L_32;
		L_32 = List_1_Remove_mCCE85D4D5326536C4B214C73D07030F4CCD18485(L_30, L_31, List_1_Remove_mCCE85D4D5326536C4B214C73D07030F4CCD18485_RuntimeMethod_var);
	}

IL_0080:
	{
		int32_t L_33 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_subtract(L_33, 1));
	}

IL_0084:
	{
		int32_t L_34 = V_1;
		if (L_34)
		{
			goto IL_0018;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AccessibilityProvider_get_InvertTextColor_m4F336978C34357FCED9CB6A54F185D91D7FFC9D5 (AccessibilityProvider_tED15C3EB0977856F8B4828DFCAD18A7ED3AF6716* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___invertTextColor;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AccessibilityProvider_set_InvertTextColor_m04C2EC54685752849AA4A411E87B578D3C27E201 (AccessibilityProvider_tED15C3EB0977856F8B4828DFCAD18A7ED3AF6716* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___invertTextColor;
		bool L_1 = ___0_value;
		if ((((int32_t)L_0) == ((int32_t)L_1)))
		{
			goto IL_001c;
		}
	}
	{
		bool L_2 = ___0_value;
		__this->___invertTextColor = L_2;
		bool L_3 = __this->___invertTextColor;
		AccessibilityProvider_RaiseInvertTextColorChanged_m5E307665E29899B75B3C499B4D3F562352276EFD(__this, L_3, NULL);
	}

IL_001c:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AccessibilityProvider_add_InvertTextColorChanged_mEB9186F820E19B45A3FAA7F741622B988D65B60A (AccessibilityProvider_tED15C3EB0977856F8B4828DFCAD18A7ED3AF6716* __this, Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* V_0 = NULL;
	Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* V_1 = NULL;
	Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* V_2 = NULL;
	{
		Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* L_0 = __this->___InvertTextColorChanged;
		V_0 = L_0;
	}

IL_0007:
	{
		Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* L_1 = V_0;
		V_1 = L_1;
		Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* L_2 = V_1;
		Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_2, L_3, NULL);
		V_2 = ((Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C*)Castclass((RuntimeObject*)L_4, Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C_il2cpp_TypeInfo_var));
		Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C** L_5 = (Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C**)(&__this->___InvertTextColorChanged);
		Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* L_6 = V_2;
		Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* L_7 = V_1;
		Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* L_8;
		L_8 = InterlockedCompareExchangeImpl<Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C*>(L_5, L_6, L_7);
		V_0 = L_8;
		Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* L_9 = V_0;
		Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* L_10 = V_1;
		if ((!(((RuntimeObject*)(Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C*)L_9) == ((RuntimeObject*)(Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AccessibilityProvider_remove_InvertTextColorChanged_m7AEA6C526CBB774EF0336657D8850A1105242404 (AccessibilityProvider_tED15C3EB0977856F8B4828DFCAD18A7ED3AF6716* __this, Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* V_0 = NULL;
	Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* V_1 = NULL;
	Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* V_2 = NULL;
	{
		Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* L_0 = __this->___InvertTextColorChanged;
		V_0 = L_0;
	}

IL_0007:
	{
		Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* L_1 = V_0;
		V_1 = L_1;
		Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* L_2 = V_1;
		Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_2, L_3, NULL);
		V_2 = ((Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C*)Castclass((RuntimeObject*)L_4, Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C_il2cpp_TypeInfo_var));
		Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C** L_5 = (Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C**)(&__this->___InvertTextColorChanged);
		Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* L_6 = V_2;
		Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* L_7 = V_1;
		Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* L_8;
		L_8 = InterlockedCompareExchangeImpl<Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C*>(L_5, L_6, L_7);
		V_0 = L_8;
		Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* L_9 = V_0;
		Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* L_10 = V_1;
		if ((!(((RuntimeObject*)(Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C*)L_9) == ((RuntimeObject*)(Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AccessibilityProvider_ApplyTextColorInversion_m2D8F40A570E02BC19079C1AB87FE27C32594D006 (AccessibilityProvider_tED15C3EB0977856F8B4828DFCAD18A7ED3AF6716* __this, Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___0_material, bool ___1_enable, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AccessibilityUtilities_tFAA889699821BD03A832D5E3343203DEC9016D1A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_0 = ___0_material;
		bool L_1 = ___1_enable;
		il2cpp_codegen_runtime_class_init_inline(AccessibilityUtilities_tFAA889699821BD03A832D5E3343203DEC9016D1A_il2cpp_TypeInfo_var);
		AccessibilityUtilities_SetTextColorInversion_m19C6890F04D0E38F637826C326A0EA858FB65B89(L_0, L_1, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AccessibilityProvider_RaiseInvertTextColorChanged_m5E307665E29899B75B3C499B4D3F562352276EFD (AccessibilityProvider_tED15C3EB0977856F8B4828DFCAD18A7ED3AF6716* __this, bool ___0_invert, const RuntimeMethod* method) 
{
	Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* G_B2_0 = NULL;
	Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* G_B1_0 = NULL;
	{
		Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* L_0 = __this->___InvertTextColorChanged;
		Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* L_1 = L_0;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000b;
		}
		G_B1_0 = L_1;
	}
	{
		return;
	}

IL_000b:
	{
		bool L_2 = ___0_invert;
		NullCheck(G_B2_0);
		Action_1_Invoke_m69C8773D6967F3B224777183E24EA621CE056F8F_inline(G_B2_0, L_2, NULL);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AccessibilitySubsystem_t26A604A92BAA7AB49AE390E0005A789720443582* AccessibilityHelpers_get_Subsystem_m8466FB86B3BFD4EA6466F7769B26434D4B66F31D (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AccessibilityHelpers_t8CFD641C8E88DFC48B4AB10FB6785970B773D6CE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRSubsystemHelpers_GetFirstRunningSubsystem_TisAccessibilitySubsystem_t26A604A92BAA7AB49AE390E0005A789720443582_mD714530B0B5CD3126DE804405E74629F8684E56D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRSubsystemHelpers_t45A7829EE68B01DAAC3E4509FC75A1D794423C7F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		AccessibilitySubsystem_t26A604A92BAA7AB49AE390E0005A789720443582* L_0 = ((AccessibilityHelpers_t8CFD641C8E88DFC48B4AB10FB6785970B773D6CE_StaticFields*)il2cpp_codegen_static_fields_for(AccessibilityHelpers_t8CFD641C8E88DFC48B4AB10FB6785970B773D6CE_il2cpp_TypeInfo_var))->___subsystem;
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		AccessibilitySubsystem_t26A604A92BAA7AB49AE390E0005A789720443582* L_1 = ((AccessibilityHelpers_t8CFD641C8E88DFC48B4AB10FB6785970B773D6CE_StaticFields*)il2cpp_codegen_static_fields_for(AccessibilityHelpers_t8CFD641C8E88DFC48B4AB10FB6785970B773D6CE_il2cpp_TypeInfo_var))->___subsystem;
		NullCheck(L_1);
		bool L_2;
		L_2 = SubsystemWithProvider_get_running_m6BF31FC3BDA38C56C0F60FEA37767A4151B22C44_inline(L_1, NULL);
		if (L_2)
		{
			goto IL_001d;
		}
	}

IL_0013:
	{
		il2cpp_codegen_runtime_class_init_inline(XRSubsystemHelpers_t45A7829EE68B01DAAC3E4509FC75A1D794423C7F_il2cpp_TypeInfo_var);
		AccessibilitySubsystem_t26A604A92BAA7AB49AE390E0005A789720443582* L_3;
		L_3 = XRSubsystemHelpers_GetFirstRunningSubsystem_TisAccessibilitySubsystem_t26A604A92BAA7AB49AE390E0005A789720443582_mD714530B0B5CD3126DE804405E74629F8684E56D(XRSubsystemHelpers_GetFirstRunningSubsystem_TisAccessibilitySubsystem_t26A604A92BAA7AB49AE390E0005A789720443582_mD714530B0B5CD3126DE804405E74629F8684E56D_RuntimeMethod_var);
		((AccessibilityHelpers_t8CFD641C8E88DFC48B4AB10FB6785970B773D6CE_StaticFields*)il2cpp_codegen_static_fields_for(AccessibilityHelpers_t8CFD641C8E88DFC48B4AB10FB6785970B773D6CE_il2cpp_TypeInfo_var))->___subsystem = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&((AccessibilityHelpers_t8CFD641C8E88DFC48B4AB10FB6785970B773D6CE_StaticFields*)il2cpp_codegen_static_fields_for(AccessibilityHelpers_t8CFD641C8E88DFC48B4AB10FB6785970B773D6CE_il2cpp_TypeInfo_var))->___subsystem), (void*)L_3);
	}

IL_001d:
	{
		AccessibilitySubsystem_t26A604A92BAA7AB49AE390E0005A789720443582* L_4 = ((AccessibilityHelpers_t8CFD641C8E88DFC48B4AB10FB6785970B773D6CE_StaticFields*)il2cpp_codegen_static_fields_for(AccessibilityHelpers_t8CFD641C8E88DFC48B4AB10FB6785970B773D6CE_il2cpp_TypeInfo_var))->___subsystem;
		return L_4;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AccessibleObjectClassification_t48AAC4E76C1D9AA7E8CFB11F30B54DC795646ED9* AccessibleObject_get_Classification_mE14955800BCBC287221DD48936ED165C111773C5 (AccessibleObject_t0223569CC040AD2AB2F90BEAE62CEA22CC0F9675* __this, const RuntimeMethod* method) 
{
	{
		AccessibleObjectClassification_t48AAC4E76C1D9AA7E8CFB11F30B54DC795646ED9* L_0 = __this->___classification;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AccessibleObject_get_Contents_m27ECB0EBC4211B43CCFD6A922EC8D60BC411FB7F (AccessibleObject_t0223569CC040AD2AB2F90BEAE62CEA22CC0F9675* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___contents;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AccessibleObject_get_ContentSummary_m723AB41CF10D816CB79DB6FDEF560C471D56605B (AccessibleObject_t0223569CC040AD2AB2F90BEAE62CEA22CC0F9675* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___contentSummary;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AccessibleObject_get_Description_m96070B2D092B09619AA5CC49B93FA5D1FD0A7816 (AccessibleObject_t0223569CC040AD2AB2F90BEAE62CEA22CC0F9675* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___description;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AccessibleObject_get_Instructions_m963213A4B8F837A4FE436107FB69E4AEDB21AAFC (AccessibleObject_t0223569CC040AD2AB2F90BEAE62CEA22CC0F9675* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___instructions;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AccessibleObject_get_IsContextuallyRelevant_m07209CE1974DF35F5EAD42341AF255EDB0A69F8F (AccessibleObject_t0223569CC040AD2AB2F90BEAE62CEA22CC0F9675* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___isContextuallyRelevant;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AccessibleObject_set_IsContextuallyRelevant_mFDE11FBE963EC227751C1910DF01615884887F5A (AccessibleObject_t0223569CC040AD2AB2F90BEAE62CEA22CC0F9675* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		bool L_0 = ___0_value;
		__this->___isContextuallyRelevant = L_0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectRole_tA769A97007F1FAAC073D12B94CDBD0CED6743438* AccessibleObject_get_Role_m4AE204E1839B72460A2908B89E606A6041A95739 (AccessibleObject_t0223569CC040AD2AB2F90BEAE62CEA22CC0F9675* __this, const RuntimeMethod* method) 
{
	{
		ObjectRole_tA769A97007F1FAAC073D12B94CDBD0CED6743438* L_0 = __this->___role;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AccessibleObject_get_Semantic_mC9AA86F63D64997EEBDC9FE4BF117E6590CCE305 (AccessibleObject_t0223569CC040AD2AB2F90BEAE62CEA22CC0F9675* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___semantic;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AccessibleObject_OnEnable_m6EF12CDB7D95437AB6803FDFC4BA880177A60C7D (AccessibleObject_t0223569CC040AD2AB2F90BEAE62CEA22CC0F9675* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AccessibleObject_t0223569CC040AD2AB2F90BEAE62CEA22CC0F9675_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0B0FA4353F2CBCCACE1A1F98B3C3F3738127E492);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2714B1EC52279442F9A3B7ED93239624B9226A15);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralACBDBFBF2CD1DAF969EC64771234F755CFEFF59A);
		s_Il2CppMethodInitialized = true;
	}
	{
		AccessibilitySubsystem_t26A604A92BAA7AB49AE390E0005A789720443582* L_0;
		L_0 = AccessibilityHelpers_get_Subsystem_m8466FB86B3BFD4EA6466F7769B26434D4B66F31D(NULL);
		if (L_0)
		{
			goto IL_001f;
		}
	}
	{
		bool L_1 = ((AccessibleObject_t0223569CC040AD2AB2F90BEAE62CEA22CC0F9675_StaticFields*)il2cpp_codegen_static_fields_for(AccessibleObject_t0223569CC040AD2AB2F90BEAE62CEA22CC0F9675_il2cpp_TypeInfo_var))->___suppressSubsystemNotFound;
		if (L_1)
		{
			goto IL_001f;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9(_stringLiteral2714B1EC52279442F9A3B7ED93239624B9226A15, NULL);
		((AccessibleObject_t0223569CC040AD2AB2F90BEAE62CEA22CC0F9675_StaticFields*)il2cpp_codegen_static_fields_for(AccessibleObject_t0223569CC040AD2AB2F90BEAE62CEA22CC0F9675_il2cpp_TypeInfo_var))->___suppressSubsystemNotFound = (bool)1;
		return;
	}

IL_001f:
	{
		AccessibilitySubsystem_t26A604A92BAA7AB49AE390E0005A789720443582* L_2;
		L_2 = AccessibilityHelpers_get_Subsystem_m8466FB86B3BFD4EA6466F7769B26434D4B66F31D(NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3;
		L_3 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		AccessibleObjectClassification_t48AAC4E76C1D9AA7E8CFB11F30B54DC795646ED9* L_4;
		L_4 = AccessibleObject_get_Classification_mE14955800BCBC287221DD48936ED165C111773C5_inline(__this, NULL);
		NullCheck(L_2);
		bool L_5;
		L_5 = AccessibilitySubsystem_TryRegisterAccessibleObject_m24998FD8667A149D174B9C776075464815A9513B(L_2, L_3, L_4, NULL);
		if (L_5)
		{
			goto IL_0056;
		}
	}
	{
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6;
		L_6 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_6);
		String_t* L_7;
		L_7 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_6, NULL);
		String_t* L_8;
		L_8 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(_stringLiteralACBDBFBF2CD1DAF969EC64771234F755CFEFF59A, L_7, _stringLiteral0B0FA4353F2CBCCACE1A1F98B3C3F3738127E492, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(L_8, NULL);
	}

IL_0056:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AccessibleObject_OnDisable_mE4BCDDBB6753DA473F5069396BE730607452EB0D (AccessibleObject_t0223569CC040AD2AB2F90BEAE62CEA22CC0F9675* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0B0FA4353F2CBCCACE1A1F98B3C3F3738127E492);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA8731F4AEB28CD3592CFFC1849F528FCA9738497);
		s_Il2CppMethodInitialized = true;
	}
	{
		AccessibilitySubsystem_t26A604A92BAA7AB49AE390E0005A789720443582* L_0;
		L_0 = AccessibilityHelpers_get_Subsystem_m8466FB86B3BFD4EA6466F7769B26434D4B66F31D(NULL);
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
		AccessibilitySubsystem_t26A604A92BAA7AB49AE390E0005A789720443582* L_1;
		L_1 = AccessibilityHelpers_get_Subsystem_m8466FB86B3BFD4EA6466F7769B26434D4B66F31D(NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2;
		L_2 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		AccessibleObjectClassification_t48AAC4E76C1D9AA7E8CFB11F30B54DC795646ED9* L_3;
		L_3 = AccessibleObject_get_Classification_mE14955800BCBC287221DD48936ED165C111773C5_inline(__this, NULL);
		NullCheck(L_1);
		bool L_4;
		L_4 = AccessibilitySubsystem_TryUnregisterAccessibleObject_m5D1040D28B0933C42D3C7202DD6023ED44661059(L_1, L_2, L_3, NULL);
		if (L_4)
		{
			goto IL_003f;
		}
	}
	{
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5;
		L_5 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_5);
		String_t* L_6;
		L_6 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_5, NULL);
		String_t* L_7;
		L_7 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(_stringLiteralA8731F4AEB28CD3592CFFC1849F528FCA9738497, L_6, _stringLiteral0B0FA4353F2CBCCACE1A1F98B3C3F3738127E492, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(L_7, NULL);
	}

IL_003f:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AccessibleObject__ctor_mAEC10C1F8046C57177544C7BB67A3D9435C0707F (AccessibleObject_t0223569CC040AD2AB2F90BEAE62CEA22CC0F9675* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty;
		__this->___contents = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___contents), (void*)L_0);
		String_t* L_1 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty;
		__this->___contentSummary = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___contentSummary), (void*)L_1);
		String_t* L_2 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty;
		__this->___description = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___description), (void*)L_2);
		String_t* L_3 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty;
		__this->___instructions = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___instructions), (void*)L_3);
		__this->___isContextuallyRelevant = (bool)1;
		String_t* L_4 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty;
		__this->___semantic = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___semantic), (void*)L_4);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AccessibleObjectClassification_get_Description_m709C493BC5E105750D3B7CAA0D6B1070599CC2FE (AccessibleObjectClassification_t48AAC4E76C1D9AA7E8CFB11F30B54DC795646ED9* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CDescriptionU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AccessibleObjectClassification_set_Description_mEA7CB3B0F2B87E5B6FBA4C15B2135DE5985C3862 (AccessibleObjectClassification_t48AAC4E76C1D9AA7E8CFB11F30B54DC795646ED9* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___0_value;
		__this->___U3CDescriptionU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CDescriptionU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AccessibleObjectClassification__ctor_m233263924006168CB81ED260398AD43CA878680F (AccessibleObjectClassification_t48AAC4E76C1D9AA7E8CFB11F30B54DC795646ED9* __this, const RuntimeMethod* method) 
{
	{
		ScriptableObject__ctor_mD037FDB0B487295EA47F79A4DB1BF1846C9087FF(__this, NULL);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ObjectRole_get_Description_m7CCD8CB9FA67D715C4EC8B8931BEDF35F0F660FF (ObjectRole_tA769A97007F1FAAC073D12B94CDBD0CED6743438* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___description;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectRole_set_Description_m567BBDCEDF41A6880B9C57D9EE8C87C1FD971693 (ObjectRole_tA769A97007F1FAAC073D12B94CDBD0CED6743438* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___0_value;
		__this->___description = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___description), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ObjectRole_get_FormalName_m03EBDB609BFB607EAC7251DE77E5352339CDB07D (ObjectRole_tA769A97007F1FAAC073D12B94CDBD0CED6743438* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___formalName;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectRole_set_FormalName_mDDEE164704C44EF2B44F40359A66B8815E4BDD50 (ObjectRole_tA769A97007F1FAAC073D12B94CDBD0CED6743438* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___0_value;
		__this->___formalName = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___formalName), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ObjectRole_get_IsAria_m87C34CC41242ADC7FCAA920DD8A5BCF7CA02427C (ObjectRole_tA769A97007F1FAAC073D12B94CDBD0CED6743438* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___isAria;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectRole_set_IsAria_mDBFAEF3268695EEDFD32976924570AF30E613213 (ObjectRole_tA769A97007F1FAAC073D12B94CDBD0CED6743438* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		bool L_0 = ___0_value;
		__this->___isAria = L_0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ObjectRole_get_ReferenceLink_m321D03977C3FB544090A26861D16FA72AA132E46 (ObjectRole_tA769A97007F1FAAC073D12B94CDBD0CED6743438* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___referenceLink;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectRole_set_ReferenceLink_m38EC44FE2798DBCC69972B098AE899D46340459B (ObjectRole_tA769A97007F1FAAC073D12B94CDBD0CED6743438* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___0_value;
		__this->___referenceLink = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___referenceLink), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectRole__ctor_mB8E6DFD3F1DD869D4BE23BA7F8A354427CD4691F (ObjectRole_tA769A97007F1FAAC073D12B94CDBD0CED6743438* __this, const RuntimeMethod* method) 
{
	{
		ScriptableObject__ctor_mD037FDB0B487295EA47F79A4DB1BF1846C9087FF(__this, NULL);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float ScreenReaderObjectSettings_get_MaxObjectDistance_mA58E718ACDFE20B00E3ADD91718049E11E2BF78E (ScreenReaderObjectSettings_t2BF065764D49859C4497D5B07DAE75AAD36F33F8* __this, const RuntimeMethod* method) 
{
	{
		float L_0 = __this->___maxObjectDistance;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScreenReaderObjectSettings_set_MaxObjectDistance_m81B85D106D5A0A2B835404DC093615C08223B64D (ScreenReaderObjectSettings_t2BF065764D49859C4497D5B07DAE75AAD36F33F8* __this, float ___0_value, const RuntimeMethod* method) 
{
	{
		float L_0 = ___0_value;
		__this->___maxObjectDistance = L_0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ScreenReaderObjectSettings_get_SpatializationOption_mD5B0A33AD034CC0C90C2AFB92F1EF1A63594BF42 (ScreenReaderObjectSettings_t2BF065764D49859C4497D5B07DAE75AAD36F33F8* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___spatializationOption;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScreenReaderObjectSettings_set_SpatializationOption_m03E3CBAEA769E3B019808063FACE69CC11B44526 (ScreenReaderObjectSettings_t2BF065764D49859C4497D5B07DAE75AAD36F33F8* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_value;
		__this->___spatializationOption = L_0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScreenReaderObjectSettings__ctor_mB333B317B81FC3F22D8E29C700B2544C40C2C39F (ScreenReaderObjectSettings_t2BF065764D49859C4497D5B07DAE75AAD36F33F8* __this, const RuntimeMethod* method) 
{
	{
		__this->___maxObjectDistance = (std::numeric_limits<float>::infinity());
		__this->___spatializationOption = 1;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextAccessibility_ApplyInitialConfiguration_m73BF0385F2DD0C456533D77AE83F394390DB8110 (TextAccessibility_t6BF564AD435E02350F6019627AB366FB8E54F126* __this, const RuntimeMethod* method) 
{
	{
		AccessibilitySubsystem_t26A604A92BAA7AB49AE390E0005A789720443582* L_0 = __this->___accessibilitySubsystem;
		NullCheck(L_0);
		bool L_1;
		L_1 = AccessibilitySubsystem_get_InvertTextColor_m206C55094D228501FDA32608D19A28C43BFC49EB(L_0, NULL);
		TextAccessibility_OnInvertTextColorChanged_mEEF10C7F41CF47AC730D187DF1436CAD6918347E(__this, L_1, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextAccessibility_GetTextMaterial_m0AC087D72AD6D0CEEA584A36A46F5E4CDA734FC4 (TextAccessibility_t6BF564AD435E02350F6019627AB366FB8E54F126* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_TryGetComponent_TisTMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9_m56A0C11CF03EEBE9218C3AC9957362AAFF155090_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC059A8FD08BCE672BF2CB48A49B7329B485F3ED8);
		s_Il2CppMethodInitialized = true;
	}
	TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* V_0 = NULL;
	{
		bool L_0;
		L_0 = Component_TryGetComponent_TisTMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9_m56A0C11CF03EEBE9218C3AC9957362AAFF155090(__this, (&V_0), Component_TryGetComponent_TisTMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9_m56A0C11CF03EEBE9218C3AC9957362AAFF155090_RuntimeMethod_var);
		if (!L_0)
		{
			goto IL_0017;
		}
	}
	{
		TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* L_1 = V_0;
		NullCheck(L_1);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_2;
		L_2 = TMP_Text_get_fontMaterial_m4EBEC9AF78B5B66C983A98F78948E753EE4DDFC6(L_1, NULL);
		__this->___material = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___material), (void*)L_2);
		return;
	}

IL_0017:
	{
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(_stringLiteralC059A8FD08BCE672BF2CB48A49B7329B485F3ED8, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextAccessibility_OnInvertTextColorChanged_mEEF10C7F41CF47AC730D187DF1436CAD6918347E (TextAccessibility_t6BF564AD435E02350F6019627AB366FB8E54F126* __this, bool ___0_invert, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	AccessibilitySubsystem_t26A604A92BAA7AB49AE390E0005A789720443582* G_B4_0 = NULL;
	AccessibilitySubsystem_t26A604A92BAA7AB49AE390E0005A789720443582* G_B3_0 = NULL;
	{
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_0 = __this->___material;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_000f;
		}
	}
	{
		return;
	}

IL_000f:
	{
		AccessibilitySubsystem_t26A604A92BAA7AB49AE390E0005A789720443582* L_2 = __this->___accessibilitySubsystem;
		AccessibilitySubsystem_t26A604A92BAA7AB49AE390E0005A789720443582* L_3 = L_2;
		if (L_3)
		{
			G_B4_0 = L_3;
			goto IL_001a;
		}
		G_B3_0 = L_3;
	}
	{
		return;
	}

IL_001a:
	{
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_4 = __this->___material;
		bool L_5 = ___0_invert;
		NullCheck(G_B4_0);
		AccessibilitySubsystem_ApplyTextColorInversion_m6B180E6AB65DBB48A8342DA6F6F4167BD25A3456(G_B4_0, L_4, L_5, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextAccessibility_RegisterHandlers_m7E7F67229CF6733C845E16746610FA53242D0164 (TextAccessibility_t6BF564AD435E02350F6019627AB366FB8E54F126* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TextAccessibility_OnInvertTextColorChanged_mEEF10C7F41CF47AC730D187DF1436CAD6918347E_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		AccessibilitySubsystem_t26A604A92BAA7AB49AE390E0005A789720443582* L_0 = __this->___accessibilitySubsystem;
		if (!L_0)
		{
			goto IL_0025;
		}
	}
	{
		TextAccessibility_ApplyInitialConfiguration_m73BF0385F2DD0C456533D77AE83F394390DB8110(__this, NULL);
		AccessibilitySubsystem_t26A604A92BAA7AB49AE390E0005A789720443582* L_1 = __this->___accessibilitySubsystem;
		Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* L_2 = (Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C*)il2cpp_codegen_object_new(Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C_il2cpp_TypeInfo_var);
		Action_1__ctor_mA8C3AC97D1F076EA5D1D0C10CEE6BD3E94711501(L_2, __this, (intptr_t)((void*)TextAccessibility_OnInvertTextColorChanged_mEEF10C7F41CF47AC730D187DF1436CAD6918347E_RuntimeMethod_var), NULL);
		NullCheck(L_1);
		AccessibilitySubsystem_add_InvertTextColorChanged_mF0E4A5552620BE1379B3E706BBF47ED428D0840D(L_1, L_2, NULL);
	}

IL_0025:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextAccessibility_UnregisterHandlers_m188E90F2E90DD44E7EE4D4EA2D69F49B8EAFEFB5 (TextAccessibility_t6BF564AD435E02350F6019627AB366FB8E54F126* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TextAccessibility_OnInvertTextColorChanged_mEEF10C7F41CF47AC730D187DF1436CAD6918347E_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		AccessibilitySubsystem_t26A604A92BAA7AB49AE390E0005A789720443582* L_0 = __this->___accessibilitySubsystem;
		if (!L_0)
		{
			goto IL_001f;
		}
	}
	{
		AccessibilitySubsystem_t26A604A92BAA7AB49AE390E0005A789720443582* L_1 = __this->___accessibilitySubsystem;
		Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* L_2 = (Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C*)il2cpp_codegen_object_new(Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C_il2cpp_TypeInfo_var);
		Action_1__ctor_mA8C3AC97D1F076EA5D1D0C10CEE6BD3E94711501(L_2, __this, (intptr_t)((void*)TextAccessibility_OnInvertTextColorChanged_mEEF10C7F41CF47AC730D187DF1436CAD6918347E_RuntimeMethod_var), NULL);
		NullCheck(L_1);
		AccessibilitySubsystem_remove_InvertTextColorChanged_m9F5AC71049A7230CBC69804770211B7715E90E35(L_1, L_2, NULL);
	}

IL_001f:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextAccessibility_Start_mF7B79076E3F6C8EB2840229A2EBA49F8EEECA075 (TextAccessibility_t6BF564AD435E02350F6019627AB366FB8E54F126* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRSubsystemHelpers_GetFirstRunningSubsystem_TisAccessibilitySubsystem_t26A604A92BAA7AB49AE390E0005A789720443582_mD714530B0B5CD3126DE804405E74629F8684E56D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRSubsystemHelpers_t45A7829EE68B01DAAC3E4509FC75A1D794423C7F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		TextAccessibility_GetTextMaterial_m0AC087D72AD6D0CEEA584A36A46F5E4CDA734FC4(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(XRSubsystemHelpers_t45A7829EE68B01DAAC3E4509FC75A1D794423C7F_il2cpp_TypeInfo_var);
		AccessibilitySubsystem_t26A604A92BAA7AB49AE390E0005A789720443582* L_0;
		L_0 = XRSubsystemHelpers_GetFirstRunningSubsystem_TisAccessibilitySubsystem_t26A604A92BAA7AB49AE390E0005A789720443582_mD714530B0B5CD3126DE804405E74629F8684E56D(XRSubsystemHelpers_GetFirstRunningSubsystem_TisAccessibilitySubsystem_t26A604A92BAA7AB49AE390E0005A789720443582_mD714530B0B5CD3126DE804405E74629F8684E56D_RuntimeMethod_var);
		__this->___accessibilitySubsystem = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___accessibilitySubsystem), (void*)L_0);
		TextAccessibility_RegisterHandlers_m7E7F67229CF6733C845E16746610FA53242D0164(__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextAccessibility_OnEnable_mC4060921EEDE2F6BA5E5FF0EAE564B94503CE0DC (TextAccessibility_t6BF564AD435E02350F6019627AB366FB8E54F126* __this, const RuntimeMethod* method) 
{
	{
		TextAccessibility_RegisterHandlers_m7E7F67229CF6733C845E16746610FA53242D0164(__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextAccessibility_OnDisable_m70B475CC2DF016B0E9B515F9FDF0BA50039FFEC0 (TextAccessibility_t6BF564AD435E02350F6019627AB366FB8E54F126* __this, const RuntimeMethod* method) 
{
	{
		TextAccessibility_UnregisterHandlers_m188E90F2E90DD44E7EE4D4EA2D69F49B8EAFEFB5(__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextAccessibility_OnDestroy_mAC4981D53463CC9DA32932E77FFA42B4FD807DD1 (TextAccessibility_t6BF564AD435E02350F6019627AB366FB8E54F126* __this, const RuntimeMethod* method) 
{
	{
		__this->___accessibilitySubsystem = (AccessibilitySubsystem_t26A604A92BAA7AB49AE390E0005A789720443582*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___accessibilitySubsystem), (void*)(AccessibilitySubsystem_t26A604A92BAA7AB49AE390E0005A789720443582*)NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextAccessibility__ctor_m882353A18F335F527D55EAE958FA54196B298B63 (TextAccessibility_t6BF564AD435E02350F6019627AB366FB8E54F126* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* AccessibilitySubsystemCinfo_get_Name_m7BA15E44E11886098AA8EA821FA2B0D8CA6D3F69_inline (AccessibilitySubsystemCinfo_tCF25C9AEB9158D1CCC734DBF683F94EF917F3FAB* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CNameU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AccessibilitySubsystemCinfo_set_Name_m54B2AAF7136105A464C28A65A767850BCC9D28DE_inline (AccessibilitySubsystemCinfo_tCF25C9AEB9158D1CCC734DBF683F94EF917F3FAB* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___0_value;
		__this->___U3CNameU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CNameU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* AccessibilitySubsystemCinfo_get_DisplayName_m1C3CADDFDDFF05FF5E06B578B817C79ECEE3A964_inline (AccessibilitySubsystemCinfo_tCF25C9AEB9158D1CCC734DBF683F94EF917F3FAB* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CDisplayNameU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AccessibilitySubsystemCinfo_set_DisplayName_mF4B2888EB0B9CC079304C763202B433B9B64C08C_inline (AccessibilitySubsystemCinfo_tCF25C9AEB9158D1CCC734DBF683F94EF917F3FAB* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___0_value;
		__this->___U3CDisplayNameU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CDisplayNameU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* AccessibilitySubsystemCinfo_get_Author_mB23C2F600D79473293FE3F4DDE478668EE588665_inline (AccessibilitySubsystemCinfo_tCF25C9AEB9158D1CCC734DBF683F94EF917F3FAB* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CAuthorU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AccessibilitySubsystemCinfo_set_Author_m4A54DBB53320F9B0799D1C0004DAE344C8D878CA_inline (AccessibilitySubsystemCinfo_tCF25C9AEB9158D1CCC734DBF683F94EF917F3FAB* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___0_value;
		__this->___U3CAuthorU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CAuthorU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Type_t* AccessibilitySubsystemCinfo_get_ConfigType_m5825C91DED37520EE451694F04D3017425F362D9_inline (AccessibilitySubsystemCinfo_tCF25C9AEB9158D1CCC734DBF683F94EF917F3FAB* __this, const RuntimeMethod* method) 
{
	{
		Type_t* L_0 = __this->___U3CConfigTypeU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AccessibilitySubsystemCinfo_set_ConfigType_m1C88D3720C41C9FC6119AF8E9CA16CF0D2A5A314_inline (AccessibilitySubsystemCinfo_tCF25C9AEB9158D1CCC734DBF683F94EF917F3FAB* __this, Type_t* ___0_value, const RuntimeMethod* method) 
{
	{
		Type_t* L_0 = ___0_value;
		__this->___U3CConfigTypeU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CConfigTypeU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Type_t* AccessibilitySubsystemCinfo_get_ProviderType_m4B965C0720F4FCAB71FDE2E1BF4432847A0E1C1B_inline (AccessibilitySubsystemCinfo_tCF25C9AEB9158D1CCC734DBF683F94EF917F3FAB* __this, const RuntimeMethod* method) 
{
	{
		Type_t* L_0 = __this->___U3CProviderTypeU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AccessibilitySubsystemCinfo_set_ProviderType_mCDC3B7F3086F0A22F733146CD575C502735ECF7F_inline (AccessibilitySubsystemCinfo_tCF25C9AEB9158D1CCC734DBF683F94EF917F3FAB* __this, Type_t* ___0_value, const RuntimeMethod* method) 
{
	{
		Type_t* L_0 = ___0_value;
		__this->___U3CProviderTypeU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CProviderTypeU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Type_t* AccessibilitySubsystemCinfo_get_SubsystemTypeOverride_m8C9D503648BE2A02681BF586F56DCCE002B3DEAF_inline (AccessibilitySubsystemCinfo_tCF25C9AEB9158D1CCC734DBF683F94EF917F3FAB* __this, const RuntimeMethod* method) 
{
	{
		Type_t* L_0 = __this->___U3CSubsystemTypeOverrideU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AccessibilitySubsystemCinfo_set_SubsystemTypeOverride_mAFD4D08EBA60CA1B62FF06B43AED9C3CD6D4B2F3_inline (AccessibilitySubsystemCinfo_tCF25C9AEB9158D1CCC734DBF683F94EF917F3FAB* __this, Type_t* ___0_value, const RuntimeMethod* method) 
{
	{
		Type_t* L_0 = ___0_value;
		__this->___U3CSubsystemTypeOverrideU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CSubsystemTypeOverrideU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AccessibilitySubsystemDescriptor_set_DisplayName_m229717C0C39B818FA4640EF6BBE1A62F32F172E8_inline (AccessibilitySubsystemDescriptor_t366293770CE03F66419FAB2461E0D33BCE4CDCF1* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___0_value;
		__this->___U3CDisplayNameU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CDisplayNameU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AccessibilitySubsystemDescriptor_set_Author_m591A68F34AC959997975F6C2C35C4F7B9995E675_inline (AccessibilitySubsystemDescriptor_t366293770CE03F66419FAB2461E0D33BCE4CDCF1* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___0_value;
		__this->___U3CAuthorU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CAuthorU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* SubsystemDescriptorWithProvider_get_id_m9E92FDF45FE9BFB0B28C2AE3EFE475998D01BBC7_inline (SubsystemDescriptorWithProvider_t2A61A2C951A4A179E898CF207726BF6B5AF474D5* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CidU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SubsystemDescriptorWithProvider_set_id_m4E93140B46C960FFB4723062C55D05D7B551A57B_inline (SubsystemDescriptorWithProvider_t2A61A2C951A4A179E898CF207726BF6B5AF474D5* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___0_value;
		__this->___U3CidU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CidU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Type_t* SubsystemDescriptorWithProvider_get_providerType_m1ED8F898361B508FFE2A46D05E81CEAC43B040D4_inline (SubsystemDescriptorWithProvider_t2A61A2C951A4A179E898CF207726BF6B5AF474D5* __this, const RuntimeMethod* method) 
{
	{
		Type_t* L_0 = __this->___U3CproviderTypeU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SubsystemDescriptorWithProvider_set_providerType_m27A630CAFBA225796667E17DE114673056339EA4_inline (SubsystemDescriptorWithProvider_t2A61A2C951A4A179E898CF207726BF6B5AF474D5* __this, Type_t* ___0_value, const RuntimeMethod* method) 
{
	{
		Type_t* L_0 = ___0_value;
		__this->___U3CproviderTypeU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CproviderTypeU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Type_t* SubsystemDescriptorWithProvider_get_subsystemTypeOverride_mCE84F1611CB09975FBB4BE48E015316ADDB52668_inline (SubsystemDescriptorWithProvider_t2A61A2C951A4A179E898CF207726BF6B5AF474D5* __this, const RuntimeMethod* method) 
{
	{
		Type_t* L_0 = __this->___U3CsubsystemTypeOverrideU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SubsystemDescriptorWithProvider_set_subsystemTypeOverride_m34C15BBBE4EB41226EF1C0A0C8BB73A0955E0F3E_inline (SubsystemDescriptorWithProvider_t2A61A2C951A4A179E898CF207726BF6B5AF474D5* __this, Type_t* ___0_value, const RuntimeMethod* method) 
{
	{
		Type_t* L_0 = ___0_value;
		__this->___U3CsubsystemTypeOverrideU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CsubsystemTypeOverrideU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR AccessibilitySubsystemConfig_t04BF4C96175B11A0C996CDD69CA75C82A8B645C3* AccessibilityProvider_get_Config_m8BDDBA8D863454381F67C1D5AB92E2BFF20CFD1D_inline (AccessibilityProvider_tED15C3EB0977856F8B4828DFCAD18A7ED3AF6716* __this, const RuntimeMethod* method) 
{
	{
		AccessibilitySubsystemConfig_t04BF4C96175B11A0C996CDD69CA75C82A8B645C3* L_0 = __this->___U3CConfigU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool AccessibilitySubsystemConfig_get_InvertTextColor_m99AE5F060B8439274802FCFEC0695DAC12C2CB40_inline (AccessibilitySubsystemConfig_t04BF4C96175B11A0C996CDD69CA75C82A8B645C3* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___invertTextColor;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_b, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_a;
		float L_1 = L_0.___x;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___1_b;
		float L_3 = L_2.___x;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___0_a;
		float L_5 = L_4.___y;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___1_b;
		float L_7 = L_6.___y;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___0_a;
		float L_9 = L_8.___z;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___1_b;
		float L_11 = L_10.___z;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_12), ((float)il2cpp_codegen_subtract(L_1, L_3)), ((float)il2cpp_codegen_subtract(L_5, L_7)), ((float)il2cpp_codegen_subtract(L_9, L_11)), NULL);
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_get_sqrMagnitude_m43C27DEC47C4811FB30AB474FF2131A963B66FC8_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		float L_0 = __this->___x;
		float L_1 = __this->___x;
		float L_2 = __this->___y;
		float L_3 = __this->___y;
		float L_4 = __this->___z;
		float L_5 = __this->___z;
		V_0 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_0, L_1)), ((float)il2cpp_codegen_multiply(L_2, L_3)))), ((float)il2cpp_codegen_multiply(L_4, L_5))));
		goto IL_002d;
	}

IL_002d:
	{
		float L_6 = V_0;
		return L_6;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool SubsystemWithProvider_get_running_m6BF31FC3BDA38C56C0F60FEA37767A4151B22C44_inline (SubsystemWithProvider_tC72E35EE2D413A4B0635B058154BABF265F31242* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___U3CrunningU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR AccessibleObjectClassification_t48AAC4E76C1D9AA7E8CFB11F30B54DC795646ED9* AccessibleObject_get_Classification_mE14955800BCBC287221DD48936ED165C111773C5_inline (AccessibleObject_t0223569CC040AD2AB2F90BEAE62CEA22CC0F9675* __this, const RuntimeMethod* method) 
{
	{
		AccessibleObjectClassification_t48AAC4E76C1D9AA7E8CFB11F30B54DC795646ED9* L_0 = __this->___classification;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* SubsystemWithProvider_3_get_provider_m963D70D839CE42A2C17A2C183A61C25F0E2C6732_gshared_inline (SubsystemWithProvider_3_t548D9C2A4778C7ADB62496A2A07F8B7563309893* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CproviderU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Clear_m16C1F2C61FED5955F10EB36BC1CB2DF34B128994_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_0, 1));
	}
	{
		int32_t L_1 = __this->____size;
		V_0 = L_1;
		__this->____size = 0;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) <= ((int32_t)0)))
		{
			goto IL_003c;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = __this->____items;
		int32_t L_4 = V_0;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_3, 0, L_4, NULL);
		return;
	}

IL_003c:
	{
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_mB407E755F3B4C51C54D24338D00A352E5B16E7F3_gshared_inline (Enumerator_t44124D16E0B2F7308FF4069BE06369B5A83896EB* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->____currentValue;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) 
{
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_0, 1));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = __this->____items;
		V_0 = L_1;
		int32_t L_2 = __this->____size;
		V_1 = L_2;
		int32_t L_3 = V_1;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = V_0;
		NullCheck(L_4);
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size = ((int32_t)il2cpp_codegen_add(L_5, 1));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = V_0;
		int32_t L_7 = V_1;
		RuntimeObject* L_8 = ___0_item;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (RuntimeObject*)L_8);
		return;
	}

IL_0034:
	{
		RuntimeObject* L_9 = ___0_item;
		List_1_AddWithResize_m79A9BF770BEF9C06BE40D5401E55E375F2726CC4(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->____current;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_m69C8773D6967F3B224777183E24EA621CE056F8F_gshared_inline (Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* __this, bool ___0_obj, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, bool, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_obj, reinterpret_cast<RuntimeMethod*>(__this->___method));
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
