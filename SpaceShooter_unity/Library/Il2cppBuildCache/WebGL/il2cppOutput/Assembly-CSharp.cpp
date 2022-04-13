#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


template <typename T1>
struct VirtActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
struct VirtActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
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

// System.Collections.Generic.Queue`1<UnityEngine.GameObject>
struct Queue_1_t19382AED9A873E9B1E7BA5D847E64540A2B4FC92;
// System.Collections.Generic.Queue`1<System.Object>
struct Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// UnityEngine.ContactPoint[]
struct ContactPointU5BU5D_t1ACD262B1EA44CD48E2039381DE96847F203E62B;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642;
// System.Int32[]
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32;
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
// System.String[]
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A;
// UnityEngine.UIVertex[]
struct UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4;
// UnityEngine.AudioClip
struct AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE;
// UnityEngine.AudioSource
struct AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B;
// BoundsCheck
struct BoundsCheck_t4F4AC8554A0272E80ACC121C8CEE14FAA5F3E4CE;
// UnityEngine.Camera
struct Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C;
// UnityEngine.Canvas
struct Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E;
// UnityEngine.Collider
struct Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02;
// UnityEngine.Collision
struct Collision_tDC11F9B3834FD25DEB8C7DD1C51B635D240BBBF0;
// UnityEngine.Component
struct Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684;
// EndCanvas
struct EndCanvas_tE65EE714A0EBB79D9AFAA943F71DA85E1FD7EFCC;
// Enemy
struct Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627;
// EnemySpawner
struct EnemySpawner_t02731B295570E1C2E63CE6A23D2A64D1E5985C9E;
// UnityEngine.UI.FontData
struct FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738;
// GameManager
struct GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1;
// UnityEngine.GameObject
struct GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319;
// HUDCanvas
struct HUDCanvas_t92770F90E8E786A01C1D48AC7281191FE50660CE;
// Hero
struct Hero_t16A1E1C16C807818D862612A955C5FFB6C878D0C;
// UnityEngine.Material
struct Material_t8927C00353A72755313F046D0CE85178AE8218EE;
// MaterialScroller
struct MaterialScroller_t8D8B509C3EB0CB75E6D42241F065B8EE4EEEAE02;
// UnityEngine.Mesh
struct Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A;
// UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A;
// ObjectPool
struct ObjectPool_tBE9877D5A57AE7ED77E2C748CC34E97C40FB4CDC;
// PoolReturn
struct PoolReturn_t749F2C2DB433ED98BDEF98AE86727EBF45684BE0;
// Projectile
struct Projectile_t8BAB3D47786918922F97CC7FADEB6146D6E31B9F;
// UnityEngine.UI.RectMask2D
struct RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15;
// UnityEngine.RectTransform
struct RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072;
// UnityEngine.Renderer
struct Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C;
// UnityEngine.Rigidbody
struct Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A;
// Shield
struct Shield_t938DA769F9DED1ACACE524C775A5032C1BD4BD61;
// StartCanvas
struct StartCanvas_tDADEA9B21D83433EFB4D2057F0251B45EFFC6D27;
// System.String
struct String_t;
// TestGame
struct TestGame_tBE1EB8C9119DE68B57C0CE8A6284EF8371A532C4;
// UnityEngine.UI.Text
struct Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1;
// UnityEngine.TextGenerator
struct TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70;
// UnityEngine.Texture2D
struct Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF;
// UnityEngine.Transform
struct Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1;
// UnityEngine.Events.UnityAction
struct UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099;
// UnityEngine.UI.VertexHelper
struct VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// UnityEngine.AudioClip/PCMReaderCallback
struct PCMReaderCallback_t9CA1437D36509A9FAC5EDD8FF2BC3259C24D0E0B;
// UnityEngine.AudioClip/PCMSetPositionCallback
struct PCMSetPositionCallback_tBDD99E7C0697687F1E7B06CDD5DE444A3709CF4C;
// UnityEngine.Camera/CameraCallback
struct CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4;

IL2CPP_EXTERN_C RuntimeClass* DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GameState_t220CA73AF42CC54408408696DBFFAB424F309FAE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Hero_t16A1E1C16C807818D862612A955C5FFB6C878D0C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectPool_tBE9877D5A57AE7ED77E2C748CC34E97C40FB4CDC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Queue_1_t19382AED9A873E9B1E7BA5D847E64540A2B4FC92_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral0147DE79556B33082B887D10099246A4B2680278;
IL2CPP_EXTERN_C String_t* _stringLiteral06A1FA59D154D294D58E8BD7C1CCCB31CEF58408;
IL2CPP_EXTERN_C String_t* _stringLiteral0F8B36544ED910BDAF860DA9FBA5A43D52BAC802;
IL2CPP_EXTERN_C String_t* _stringLiteral254D20A8F8D8DA82A92A7594351BDB3332411662;
IL2CPP_EXTERN_C String_t* _stringLiteral25F5EF17AC725A91FE3F3CE895C16ED6DD9B3499;
IL2CPP_EXTERN_C String_t* _stringLiteral265E15F1F86F1C766555899D5771CF29055DE75A;
IL2CPP_EXTERN_C String_t* _stringLiteral3260331AF5DA53ABC7CA7BAF659CF8D9FC93DEC7;
IL2CPP_EXTERN_C String_t* _stringLiteral48D78BCC75F33F659D566D84AE805896457204F9;
IL2CPP_EXTERN_C String_t* _stringLiteral59841276BDB5ADB59BD259E20A5C55AF4CF0A7D9;
IL2CPP_EXTERN_C String_t* _stringLiteral5A0D010563EAFA6C9073D35EB9EF83C988F91B75;
IL2CPP_EXTERN_C String_t* _stringLiteral5B163F927926137A826C9CBF21412F7698963A88;
IL2CPP_EXTERN_C String_t* _stringLiteral710CEFF5A6D94EED332EF2BD41342B8B16B45293;
IL2CPP_EXTERN_C String_t* _stringLiteral749F421D5FC0A89FF90F8BB638E8AC9A995121C9;
IL2CPP_EXTERN_C String_t* _stringLiteral76FBA75E795FEEECF2AB12E5CD9D37C6208A737F;
IL2CPP_EXTERN_C String_t* _stringLiteral79B0BC20C4F38EB2142290F5EFAB4EF138899A9B;
IL2CPP_EXTERN_C String_t* _stringLiteral7CC9D17927D2D3BD0BBD570AFA60EB986E51F6CF;
IL2CPP_EXTERN_C String_t* _stringLiteral7F8C014BD4810CC276D0F9F81A1E759C7B098B1E;
IL2CPP_EXTERN_C String_t* _stringLiteral80A3E99D32912A6EA89ECAC3AF60A180FC37A2F3;
IL2CPP_EXTERN_C String_t* _stringLiteral86BBAACC00198DBB3046818AD3FC2AA10AE48DE1;
IL2CPP_EXTERN_C String_t* _stringLiteral8B0221D6CFB2E025C7D842B87FFC982141A24562;
IL2CPP_EXTERN_C String_t* _stringLiteral8FB5763C9088E80B8869D48CDF95B339F63AE27A;
IL2CPP_EXTERN_C String_t* _stringLiteral9A412622D8FC840298CC336BDFB62D08756A40FA;
IL2CPP_EXTERN_C String_t* _stringLiteral9A799554A6961E2779E6D34612E5727DFDCA8368;
IL2CPP_EXTERN_C String_t* _stringLiteral9BF311279D79AF2F94F211FEDA661565729FDF4C;
IL2CPP_EXTERN_C String_t* _stringLiteralA242E0EF74FB38B86DC60AEF5C5EF280284E5543;
IL2CPP_EXTERN_C String_t* _stringLiteralA5A02C933DC61A4C5547CD26AAB7E129D0EC50A6;
IL2CPP_EXTERN_C String_t* _stringLiteralA684BD7A04CC43B4419D97C0AF2E584A9AE15078;
IL2CPP_EXTERN_C String_t* _stringLiteralA68AF01D35B427079781DE3A8B2923BD14263BE3;
IL2CPP_EXTERN_C String_t* _stringLiteralAC59E8085DCC2CAD244235A2E4E762BBD3139D29;
IL2CPP_EXTERN_C String_t* _stringLiteralB708F184BAD95425F32568A993CE7A73DE10753D;
IL2CPP_EXTERN_C String_t* _stringLiteralBCB70A4EDC367A2A3FFA1642263C970A5C4B91EF;
IL2CPP_EXTERN_C String_t* _stringLiteralC3FF3A0E12335D624641F6F9E7F443765209B583;
IL2CPP_EXTERN_C String_t* _stringLiteralD0ED343195A5AF114483C53DB9F3F7FF03CABB07;
IL2CPP_EXTERN_C String_t* _stringLiteralDF1296B24672A38692CC663E858166C834F0ABD9;
IL2CPP_EXTERN_C String_t* _stringLiteralEEF81429FC800F39A7F38441E70986565B5153BE;
IL2CPP_EXTERN_C String_t* _stringLiteralF984C9674EDCA2C39EFAD66081B054F073C3815B;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisAudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B_mCC3B7A679ECE504BFAF8C70C4EF527511F46902F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisBoundsCheck_t4F4AC8554A0272E80ACC121C8CEE14FAA5F3E4CE_mB315A5F068A2CE61C696F5715FF04986B36CE025_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_m436E5B0F17DDEF3CC61F77DEA82B1A92668AF019_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisBoundsCheck_t4F4AC8554A0272E80ACC121C8CEE14FAA5F3E4CE_mA73D98BBAA2D2A89A8D38D45C5F9F420D3F879E0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisRigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A_mA1779277BB07CE3D2CB8E340CEA85C40C6B52354_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m26431AC51B9B7A43FBABD10B4923B72B0C578F33_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Queue_1_Dequeue_mAB7D03D5E1E8D5574DB751A04534E90B970BE0CC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Queue_1_Enqueue_mBF3F677E8FA5E61DFEF3209F9DDA278775BDD513_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Queue_1__ctor_m989302E3AE90AD39E5B892C79B3A6365966D1852_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Queue_1_get_Count_mA25AD1436D3225AA2B66F58A6E79D70A2F5723A2_RuntimeMethod_var;
struct ContactPoint_tC179732A8E0014F5EFF5977ED1ADF12CF14A9017 ;

struct GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642;
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_tFDCAFCBB4B3431CFF2DC4D3E03FBFDF54EFF7E9A 
{
public:

public:
};


// System.Object


// System.Collections.Generic.Queue`1<UnityEngine.GameObject>
struct Queue_1_t19382AED9A873E9B1E7BA5D847E64540A2B4FC92  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.Queue`1::_array
	GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* ____array_0;
	// System.Int32 System.Collections.Generic.Queue`1::_head
	int32_t ____head_1;
	// System.Int32 System.Collections.Generic.Queue`1::_tail
	int32_t ____tail_2;
	// System.Int32 System.Collections.Generic.Queue`1::_size
	int32_t ____size_3;
	// System.Int32 System.Collections.Generic.Queue`1::_version
	int32_t ____version_4;
	// System.Object System.Collections.Generic.Queue`1::_syncRoot
	RuntimeObject * ____syncRoot_5;

public:
	inline static int32_t get_offset_of__array_0() { return static_cast<int32_t>(offsetof(Queue_1_t19382AED9A873E9B1E7BA5D847E64540A2B4FC92, ____array_0)); }
	inline GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* get__array_0() const { return ____array_0; }
	inline GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642** get_address_of__array_0() { return &____array_0; }
	inline void set__array_0(GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* value)
	{
		____array_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____array_0), (void*)value);
	}

	inline static int32_t get_offset_of__head_1() { return static_cast<int32_t>(offsetof(Queue_1_t19382AED9A873E9B1E7BA5D847E64540A2B4FC92, ____head_1)); }
	inline int32_t get__head_1() const { return ____head_1; }
	inline int32_t* get_address_of__head_1() { return &____head_1; }
	inline void set__head_1(int32_t value)
	{
		____head_1 = value;
	}

	inline static int32_t get_offset_of__tail_2() { return static_cast<int32_t>(offsetof(Queue_1_t19382AED9A873E9B1E7BA5D847E64540A2B4FC92, ____tail_2)); }
	inline int32_t get__tail_2() const { return ____tail_2; }
	inline int32_t* get_address_of__tail_2() { return &____tail_2; }
	inline void set__tail_2(int32_t value)
	{
		____tail_2 = value;
	}

	inline static int32_t get_offset_of__size_3() { return static_cast<int32_t>(offsetof(Queue_1_t19382AED9A873E9B1E7BA5D847E64540A2B4FC92, ____size_3)); }
	inline int32_t get__size_3() const { return ____size_3; }
	inline int32_t* get_address_of__size_3() { return &____size_3; }
	inline void set__size_3(int32_t value)
	{
		____size_3 = value;
	}

	inline static int32_t get_offset_of__version_4() { return static_cast<int32_t>(offsetof(Queue_1_t19382AED9A873E9B1E7BA5D847E64540A2B4FC92, ____version_4)); }
	inline int32_t get__version_4() const { return ____version_4; }
	inline int32_t* get_address_of__version_4() { return &____version_4; }
	inline void set__version_4(int32_t value)
	{
		____version_4 = value;
	}

	inline static int32_t get_offset_of__syncRoot_5() { return static_cast<int32_t>(offsetof(Queue_1_t19382AED9A873E9B1E7BA5D847E64540A2B4FC92, ____syncRoot_5)); }
	inline RuntimeObject * get__syncRoot_5() const { return ____syncRoot_5; }
	inline RuntimeObject ** get_address_of__syncRoot_5() { return &____syncRoot_5; }
	inline void set__syncRoot_5(RuntimeObject * value)
	{
		____syncRoot_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_5), (void*)value);
	}
};


// System.Collections.Generic.Queue`1<System.Object>
struct Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.Queue`1::_array
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ____array_0;
	// System.Int32 System.Collections.Generic.Queue`1::_head
	int32_t ____head_1;
	// System.Int32 System.Collections.Generic.Queue`1::_tail
	int32_t ____tail_2;
	// System.Int32 System.Collections.Generic.Queue`1::_size
	int32_t ____size_3;
	// System.Int32 System.Collections.Generic.Queue`1::_version
	int32_t ____version_4;
	// System.Object System.Collections.Generic.Queue`1::_syncRoot
	RuntimeObject * ____syncRoot_5;

public:
	inline static int32_t get_offset_of__array_0() { return static_cast<int32_t>(offsetof(Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64, ____array_0)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get__array_0() const { return ____array_0; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of__array_0() { return &____array_0; }
	inline void set__array_0(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		____array_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____array_0), (void*)value);
	}

	inline static int32_t get_offset_of__head_1() { return static_cast<int32_t>(offsetof(Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64, ____head_1)); }
	inline int32_t get__head_1() const { return ____head_1; }
	inline int32_t* get_address_of__head_1() { return &____head_1; }
	inline void set__head_1(int32_t value)
	{
		____head_1 = value;
	}

	inline static int32_t get_offset_of__tail_2() { return static_cast<int32_t>(offsetof(Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64, ____tail_2)); }
	inline int32_t get__tail_2() const { return ____tail_2; }
	inline int32_t* get_address_of__tail_2() { return &____tail_2; }
	inline void set__tail_2(int32_t value)
	{
		____tail_2 = value;
	}

	inline static int32_t get_offset_of__size_3() { return static_cast<int32_t>(offsetof(Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64, ____size_3)); }
	inline int32_t get__size_3() const { return ____size_3; }
	inline int32_t* get_address_of__size_3() { return &____size_3; }
	inline void set__size_3(int32_t value)
	{
		____size_3 = value;
	}

	inline static int32_t get_offset_of__version_4() { return static_cast<int32_t>(offsetof(Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64, ____version_4)); }
	inline int32_t get__version_4() const { return ____version_4; }
	inline int32_t* get_address_of__version_4() { return &____version_4; }
	inline void set__version_4(int32_t value)
	{
		____version_4 = value;
	}

	inline static int32_t get_offset_of__syncRoot_5() { return static_cast<int32_t>(offsetof(Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64, ____syncRoot_5)); }
	inline RuntimeObject * get__syncRoot_5() const { return ____syncRoot_5; }
	inline RuntimeObject ** get_address_of__syncRoot_5() { return &____syncRoot_5; }
	inline void set__syncRoot_5(RuntimeObject * value)
	{
		____syncRoot_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_5), (void*)value);
	}
};

struct Il2CppArrayBounds;

// System.Array


// System.String
struct String_t  : public RuntimeObject
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
		Il2CppCodeGenWriteBarrier((void**)(&___Empty_5), (void*)value);
	}
};


// System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_com
{
};

// System.Boolean
struct Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37, ___m_value_0)); }
	inline bool get_m_value_0() const { return ___m_value_0; }
	inline bool* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(bool value)
	{
		___m_value_0 = value;
	}
};

struct Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields
{
public:
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;

public:
	inline static int32_t get_offset_of_TrueString_5() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields, ___TrueString_5)); }
	inline String_t* get_TrueString_5() const { return ___TrueString_5; }
	inline String_t** get_address_of_TrueString_5() { return &___TrueString_5; }
	inline void set_TrueString_5(String_t* value)
	{
		___TrueString_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TrueString_5), (void*)value);
	}

	inline static int32_t get_offset_of_FalseString_6() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields, ___FalseString_6)); }
	inline String_t* get_FalseString_6() const { return ___FalseString_6; }
	inline String_t** get_address_of_FalseString_6() { return &___FalseString_6; }
	inline void set_FalseString_6(String_t* value)
	{
		___FalseString_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FalseString_6), (void*)value);
	}
};


// UnityEngine.Color
struct Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 
{
public:
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;

public:
	inline static int32_t get_offset_of_r_0() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___r_0)); }
	inline float get_r_0() const { return ___r_0; }
	inline float* get_address_of_r_0() { return &___r_0; }
	inline void set_r_0(float value)
	{
		___r_0 = value;
	}

	inline static int32_t get_offset_of_g_1() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___g_1)); }
	inline float get_g_1() const { return ___g_1; }
	inline float* get_address_of_g_1() { return &___g_1; }
	inline void set_g_1(float value)
	{
		___g_1 = value;
	}

	inline static int32_t get_offset_of_b_2() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___b_2)); }
	inline float get_b_2() const { return ___b_2; }
	inline float* get_address_of_b_2() { return &___b_2; }
	inline void set_b_2(float value)
	{
		___b_2 = value;
	}

	inline static int32_t get_offset_of_a_3() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___a_3)); }
	inline float get_a_3() const { return ___a_3; }
	inline float* get_address_of_a_3() { return &___a_3; }
	inline void set_a_3(float value)
	{
		___a_3 = value;
	}
};


// System.DateTime
struct DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 
{
public:
	// System.UInt64 System.DateTime::dateData
	uint64_t ___dateData_44;

public:
	inline static int32_t get_offset_of_dateData_44() { return static_cast<int32_t>(offsetof(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405, ___dateData_44)); }
	inline uint64_t get_dateData_44() const { return ___dateData_44; }
	inline uint64_t* get_address_of_dateData_44() { return &___dateData_44; }
	inline void set_dateData_44(uint64_t value)
	{
		___dateData_44 = value;
	}
};

struct DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_StaticFields
{
public:
	// System.Int32[] System.DateTime::DaysToMonth365
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___DaysToMonth365_29;
	// System.Int32[] System.DateTime::DaysToMonth366
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___DaysToMonth366_30;
	// System.DateTime System.DateTime::MinValue
	DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  ___MinValue_31;
	// System.DateTime System.DateTime::MaxValue
	DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  ___MaxValue_32;

public:
	inline static int32_t get_offset_of_DaysToMonth365_29() { return static_cast<int32_t>(offsetof(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_StaticFields, ___DaysToMonth365_29)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_DaysToMonth365_29() const { return ___DaysToMonth365_29; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_DaysToMonth365_29() { return &___DaysToMonth365_29; }
	inline void set_DaysToMonth365_29(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___DaysToMonth365_29 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DaysToMonth365_29), (void*)value);
	}

	inline static int32_t get_offset_of_DaysToMonth366_30() { return static_cast<int32_t>(offsetof(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_StaticFields, ___DaysToMonth366_30)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_DaysToMonth366_30() const { return ___DaysToMonth366_30; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_DaysToMonth366_30() { return &___DaysToMonth366_30; }
	inline void set_DaysToMonth366_30(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___DaysToMonth366_30 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DaysToMonth366_30), (void*)value);
	}

	inline static int32_t get_offset_of_MinValue_31() { return static_cast<int32_t>(offsetof(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_StaticFields, ___MinValue_31)); }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  get_MinValue_31() const { return ___MinValue_31; }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 * get_address_of_MinValue_31() { return &___MinValue_31; }
	inline void set_MinValue_31(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  value)
	{
		___MinValue_31 = value;
	}

	inline static int32_t get_offset_of_MaxValue_32() { return static_cast<int32_t>(offsetof(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_StaticFields, ___MaxValue_32)); }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  get_MaxValue_32() const { return ___MaxValue_32; }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 * get_address_of_MaxValue_32() { return &___MaxValue_32; }
	inline void set_MaxValue_32(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  value)
	{
		___MaxValue_32 = value;
	}
};


// System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA  : public ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52
{
public:

public:
};

struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_StaticFields
{
public:
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___enumSeperatorCharArray_0;

public:
	inline static int32_t get_offset_of_enumSeperatorCharArray_0() { return static_cast<int32_t>(offsetof(Enum_t23B90B40F60E677A8025267341651C94AE079CDA_StaticFields, ___enumSeperatorCharArray_0)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_enumSeperatorCharArray_0() const { return ___enumSeperatorCharArray_0; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_enumSeperatorCharArray_0() { return &___enumSeperatorCharArray_0; }
	inline void set_enumSeperatorCharArray_0(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___enumSeperatorCharArray_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enumSeperatorCharArray_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshaled_com
{
};

// System.Int32
struct Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046, ___m_value_0)); }
	inline int32_t get_m_value_0() const { return ___m_value_0; }
	inline int32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int32_t value)
	{
		___m_value_0 = value;
	}
};


// System.IntPtr
struct IntPtr_t 
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


// UnityEngine.Quaternion
struct Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 
{
public:
	// System.Single UnityEngine.Quaternion::x
	float ___x_0;
	// System.Single UnityEngine.Quaternion::y
	float ___y_1;
	// System.Single UnityEngine.Quaternion::z
	float ___z_2;
	// System.Single UnityEngine.Quaternion::w
	float ___w_3;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}

	inline static int32_t get_offset_of_z_2() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___z_2)); }
	inline float get_z_2() const { return ___z_2; }
	inline float* get_address_of_z_2() { return &___z_2; }
	inline void set_z_2(float value)
	{
		___z_2 = value;
	}

	inline static int32_t get_offset_of_w_3() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___w_3)); }
	inline float get_w_3() const { return ___w_3; }
	inline float* get_address_of_w_3() { return &___w_3; }
	inline void set_w_3(float value)
	{
		___w_3 = value;
	}
};

struct Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4_StaticFields
{
public:
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___identityQuaternion_4;

public:
	inline static int32_t get_offset_of_identityQuaternion_4() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4_StaticFields, ___identityQuaternion_4)); }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  get_identityQuaternion_4() const { return ___identityQuaternion_4; }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * get_address_of_identityQuaternion_4() { return &___identityQuaternion_4; }
	inline void set_identityQuaternion_4(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  value)
	{
		___identityQuaternion_4 = value;
	}
};


// UnityEngine.SceneManagement.Scene
struct Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE 
{
public:
	// System.Int32 UnityEngine.SceneManagement.Scene::m_Handle
	int32_t ___m_Handle_0;

public:
	inline static int32_t get_offset_of_m_Handle_0() { return static_cast<int32_t>(offsetof(Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE, ___m_Handle_0)); }
	inline int32_t get_m_Handle_0() const { return ___m_Handle_0; }
	inline int32_t* get_address_of_m_Handle_0() { return &___m_Handle_0; }
	inline void set_m_Handle_0(int32_t value)
	{
		___m_Handle_0 = value;
	}
};


// System.Single
struct Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E 
{
public:
	// System.Single System.Single::m_value
	float ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E, ___m_value_0)); }
	inline float get_m_value_0() const { return ___m_value_0; }
	inline float* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(float value)
	{
		___m_value_0 = value;
	}
};


// UnityEngine.Vector2
struct Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 
{
public:
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}
};

struct Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields
{
public:
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___negativeInfinityVector_9;

public:
	inline static int32_t get_offset_of_zeroVector_2() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___zeroVector_2)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_zeroVector_2() const { return ___zeroVector_2; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_zeroVector_2() { return &___zeroVector_2; }
	inline void set_zeroVector_2(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___zeroVector_2 = value;
	}

	inline static int32_t get_offset_of_oneVector_3() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___oneVector_3)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_oneVector_3() const { return ___oneVector_3; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_oneVector_3() { return &___oneVector_3; }
	inline void set_oneVector_3(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___oneVector_3 = value;
	}

	inline static int32_t get_offset_of_upVector_4() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___upVector_4)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_upVector_4() const { return ___upVector_4; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_upVector_4() { return &___upVector_4; }
	inline void set_upVector_4(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___upVector_4 = value;
	}

	inline static int32_t get_offset_of_downVector_5() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___downVector_5)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_downVector_5() const { return ___downVector_5; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_downVector_5() { return &___downVector_5; }
	inline void set_downVector_5(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___downVector_5 = value;
	}

	inline static int32_t get_offset_of_leftVector_6() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___leftVector_6)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_leftVector_6() const { return ___leftVector_6; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_leftVector_6() { return &___leftVector_6; }
	inline void set_leftVector_6(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___leftVector_6 = value;
	}

	inline static int32_t get_offset_of_rightVector_7() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___rightVector_7)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_rightVector_7() const { return ___rightVector_7; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_rightVector_7() { return &___rightVector_7; }
	inline void set_rightVector_7(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___rightVector_7 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___positiveInfinityVector_8)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_positiveInfinityVector_8() const { return ___positiveInfinityVector_8; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_positiveInfinityVector_8() { return &___positiveInfinityVector_8; }
	inline void set_positiveInfinityVector_8(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___positiveInfinityVector_8 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_9() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___negativeInfinityVector_9)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_negativeInfinityVector_9() const { return ___negativeInfinityVector_9; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_negativeInfinityVector_9() { return &___negativeInfinityVector_9; }
	inline void set_negativeInfinityVector_9(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___negativeInfinityVector_9 = value;
	}
};


// UnityEngine.Vector3
struct Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E 
{
public:
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;

public:
	inline static int32_t get_offset_of_x_2() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___x_2)); }
	inline float get_x_2() const { return ___x_2; }
	inline float* get_address_of_x_2() { return &___x_2; }
	inline void set_x_2(float value)
	{
		___x_2 = value;
	}

	inline static int32_t get_offset_of_y_3() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___y_3)); }
	inline float get_y_3() const { return ___y_3; }
	inline float* get_address_of_y_3() { return &___y_3; }
	inline void set_y_3(float value)
	{
		___y_3 = value;
	}

	inline static int32_t get_offset_of_z_4() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___z_4)); }
	inline float get_z_4() const { return ___z_4; }
	inline float* get_address_of_z_4() { return &___z_4; }
	inline void set_z_4(float value)
	{
		___z_4 = value;
	}
};

struct Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields
{
public:
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___negativeInfinityVector_14;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___zeroVector_5)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___oneVector_6)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_upVector_7() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___upVector_7)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_upVector_7() const { return ___upVector_7; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_upVector_7() { return &___upVector_7; }
	inline void set_upVector_7(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___upVector_7 = value;
	}

	inline static int32_t get_offset_of_downVector_8() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___downVector_8)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_downVector_8() const { return ___downVector_8; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_downVector_8() { return &___downVector_8; }
	inline void set_downVector_8(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___downVector_8 = value;
	}

	inline static int32_t get_offset_of_leftVector_9() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___leftVector_9)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_leftVector_9() const { return ___leftVector_9; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_leftVector_9() { return &___leftVector_9; }
	inline void set_leftVector_9(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___leftVector_9 = value;
	}

	inline static int32_t get_offset_of_rightVector_10() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___rightVector_10)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_rightVector_10() const { return ___rightVector_10; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_rightVector_10() { return &___rightVector_10; }
	inline void set_rightVector_10(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___rightVector_10 = value;
	}

	inline static int32_t get_offset_of_forwardVector_11() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___forwardVector_11)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_forwardVector_11() const { return ___forwardVector_11; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_forwardVector_11() { return &___forwardVector_11; }
	inline void set_forwardVector_11(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___forwardVector_11 = value;
	}

	inline static int32_t get_offset_of_backVector_12() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___backVector_12)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_backVector_12() const { return ___backVector_12; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_backVector_12() { return &___backVector_12; }
	inline void set_backVector_12(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___backVector_12 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_13() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___positiveInfinityVector_13)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_positiveInfinityVector_13() const { return ___positiveInfinityVector_13; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_positiveInfinityVector_13() { return &___positiveInfinityVector_13; }
	inline void set_positiveInfinityVector_13(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___positiveInfinityVector_13 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_14() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___negativeInfinityVector_14)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_negativeInfinityVector_14() const { return ___negativeInfinityVector_14; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_negativeInfinityVector_14() { return &___negativeInfinityVector_14; }
	inline void set_negativeInfinityVector_14(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___negativeInfinityVector_14 = value;
	}
};


// UnityEngine.Vector4
struct Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 
{
public:
	// System.Single UnityEngine.Vector4::x
	float ___x_1;
	// System.Single UnityEngine.Vector4::y
	float ___y_2;
	// System.Single UnityEngine.Vector4::z
	float ___z_3;
	// System.Single UnityEngine.Vector4::w
	float ___w_4;

public:
	inline static int32_t get_offset_of_x_1() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___x_1)); }
	inline float get_x_1() const { return ___x_1; }
	inline float* get_address_of_x_1() { return &___x_1; }
	inline void set_x_1(float value)
	{
		___x_1 = value;
	}

	inline static int32_t get_offset_of_y_2() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___y_2)); }
	inline float get_y_2() const { return ___y_2; }
	inline float* get_address_of_y_2() { return &___y_2; }
	inline void set_y_2(float value)
	{
		___y_2 = value;
	}

	inline static int32_t get_offset_of_z_3() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___z_3)); }
	inline float get_z_3() const { return ___z_3; }
	inline float* get_address_of_z_3() { return &___z_3; }
	inline void set_z_3(float value)
	{
		___z_3 = value;
	}

	inline static int32_t get_offset_of_w_4() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___w_4)); }
	inline float get_w_4() const { return ___w_4; }
	inline float* get_address_of_w_4() { return &___w_4; }
	inline void set_w_4(float value)
	{
		___w_4 = value;
	}
};

struct Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields
{
public:
	// UnityEngine.Vector4 UnityEngine.Vector4::zeroVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___zeroVector_5;
	// UnityEngine.Vector4 UnityEngine.Vector4::oneVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___oneVector_6;
	// UnityEngine.Vector4 UnityEngine.Vector4::positiveInfinityVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___positiveInfinityVector_7;
	// UnityEngine.Vector4 UnityEngine.Vector4::negativeInfinityVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___negativeInfinityVector_8;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___zeroVector_5)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___oneVector_6)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_7() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___positiveInfinityVector_7)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_positiveInfinityVector_7() const { return ___positiveInfinityVector_7; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_positiveInfinityVector_7() { return &___positiveInfinityVector_7; }
	inline void set_positiveInfinityVector_7(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___positiveInfinityVector_7 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___negativeInfinityVector_8)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_negativeInfinityVector_8() const { return ___negativeInfinityVector_8; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_negativeInfinityVector_8() { return &___negativeInfinityVector_8; }
	inline void set_negativeInfinityVector_8(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___negativeInfinityVector_8 = value;
	}
};


// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5 
{
public:
	union
	{
		struct
		{
		};
		uint8_t Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5__padding[1];
	};

public:
};


// UnityEngine.Collision
struct Collision_tDC11F9B3834FD25DEB8C7DD1C51B635D240BBBF0  : public RuntimeObject
{
public:
	// UnityEngine.Vector3 UnityEngine.Collision::m_Impulse
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_Impulse_0;
	// UnityEngine.Vector3 UnityEngine.Collision::m_RelativeVelocity
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_RelativeVelocity_1;
	// UnityEngine.Component UnityEngine.Collision::m_Body
	Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * ___m_Body_2;
	// UnityEngine.Collider UnityEngine.Collision::m_Collider
	Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * ___m_Collider_3;
	// System.Int32 UnityEngine.Collision::m_ContactCount
	int32_t ___m_ContactCount_4;
	// UnityEngine.ContactPoint[] UnityEngine.Collision::m_ReusedContacts
	ContactPointU5BU5D_t1ACD262B1EA44CD48E2039381DE96847F203E62B* ___m_ReusedContacts_5;
	// UnityEngine.ContactPoint[] UnityEngine.Collision::m_LegacyContacts
	ContactPointU5BU5D_t1ACD262B1EA44CD48E2039381DE96847F203E62B* ___m_LegacyContacts_6;

public:
	inline static int32_t get_offset_of_m_Impulse_0() { return static_cast<int32_t>(offsetof(Collision_tDC11F9B3834FD25DEB8C7DD1C51B635D240BBBF0, ___m_Impulse_0)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_m_Impulse_0() const { return ___m_Impulse_0; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_m_Impulse_0() { return &___m_Impulse_0; }
	inline void set_m_Impulse_0(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___m_Impulse_0 = value;
	}

	inline static int32_t get_offset_of_m_RelativeVelocity_1() { return static_cast<int32_t>(offsetof(Collision_tDC11F9B3834FD25DEB8C7DD1C51B635D240BBBF0, ___m_RelativeVelocity_1)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_m_RelativeVelocity_1() const { return ___m_RelativeVelocity_1; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_m_RelativeVelocity_1() { return &___m_RelativeVelocity_1; }
	inline void set_m_RelativeVelocity_1(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___m_RelativeVelocity_1 = value;
	}

	inline static int32_t get_offset_of_m_Body_2() { return static_cast<int32_t>(offsetof(Collision_tDC11F9B3834FD25DEB8C7DD1C51B635D240BBBF0, ___m_Body_2)); }
	inline Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * get_m_Body_2() const { return ___m_Body_2; }
	inline Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 ** get_address_of_m_Body_2() { return &___m_Body_2; }
	inline void set_m_Body_2(Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * value)
	{
		___m_Body_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Body_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_Collider_3() { return static_cast<int32_t>(offsetof(Collision_tDC11F9B3834FD25DEB8C7DD1C51B635D240BBBF0, ___m_Collider_3)); }
	inline Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * get_m_Collider_3() const { return ___m_Collider_3; }
	inline Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 ** get_address_of_m_Collider_3() { return &___m_Collider_3; }
	inline void set_m_Collider_3(Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * value)
	{
		___m_Collider_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Collider_3), (void*)value);
	}

	inline static int32_t get_offset_of_m_ContactCount_4() { return static_cast<int32_t>(offsetof(Collision_tDC11F9B3834FD25DEB8C7DD1C51B635D240BBBF0, ___m_ContactCount_4)); }
	inline int32_t get_m_ContactCount_4() const { return ___m_ContactCount_4; }
	inline int32_t* get_address_of_m_ContactCount_4() { return &___m_ContactCount_4; }
	inline void set_m_ContactCount_4(int32_t value)
	{
		___m_ContactCount_4 = value;
	}

	inline static int32_t get_offset_of_m_ReusedContacts_5() { return static_cast<int32_t>(offsetof(Collision_tDC11F9B3834FD25DEB8C7DD1C51B635D240BBBF0, ___m_ReusedContacts_5)); }
	inline ContactPointU5BU5D_t1ACD262B1EA44CD48E2039381DE96847F203E62B* get_m_ReusedContacts_5() const { return ___m_ReusedContacts_5; }
	inline ContactPointU5BU5D_t1ACD262B1EA44CD48E2039381DE96847F203E62B** get_address_of_m_ReusedContacts_5() { return &___m_ReusedContacts_5; }
	inline void set_m_ReusedContacts_5(ContactPointU5BU5D_t1ACD262B1EA44CD48E2039381DE96847F203E62B* value)
	{
		___m_ReusedContacts_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ReusedContacts_5), (void*)value);
	}

	inline static int32_t get_offset_of_m_LegacyContacts_6() { return static_cast<int32_t>(offsetof(Collision_tDC11F9B3834FD25DEB8C7DD1C51B635D240BBBF0, ___m_LegacyContacts_6)); }
	inline ContactPointU5BU5D_t1ACD262B1EA44CD48E2039381DE96847F203E62B* get_m_LegacyContacts_6() const { return ___m_LegacyContacts_6; }
	inline ContactPointU5BU5D_t1ACD262B1EA44CD48E2039381DE96847F203E62B** get_address_of_m_LegacyContacts_6() { return &___m_LegacyContacts_6; }
	inline void set_m_LegacyContacts_6(ContactPointU5BU5D_t1ACD262B1EA44CD48E2039381DE96847F203E62B* value)
	{
		___m_LegacyContacts_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_LegacyContacts_6), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Collision
struct Collision_tDC11F9B3834FD25DEB8C7DD1C51B635D240BBBF0_marshaled_pinvoke
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_Impulse_0;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_RelativeVelocity_1;
	Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * ___m_Body_2;
	Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * ___m_Collider_3;
	int32_t ___m_ContactCount_4;
	ContactPoint_tC179732A8E0014F5EFF5977ED1ADF12CF14A9017 * ___m_ReusedContacts_5;
	ContactPoint_tC179732A8E0014F5EFF5977ED1ADF12CF14A9017 * ___m_LegacyContacts_6;
};
// Native definition for COM marshalling of UnityEngine.Collision
struct Collision_tDC11F9B3834FD25DEB8C7DD1C51B635D240BBBF0_marshaled_com
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_Impulse_0;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_RelativeVelocity_1;
	Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * ___m_Body_2;
	Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * ___m_Collider_3;
	int32_t ___m_ContactCount_4;
	ContactPoint_tC179732A8E0014F5EFF5977ED1ADF12CF14A9017 * ___m_ReusedContacts_5;
	ContactPoint_tC179732A8E0014F5EFF5977ED1ADF12CF14A9017 * ___m_LegacyContacts_6;
};

// GameState
struct GameState_t220CA73AF42CC54408408696DBFFAB424F309FAE 
{
public:
	// System.Int32 GameState::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(GameState_t220CA73AF42CC54408408696DBFFAB424F309FAE, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.KeyCode
struct KeyCode_t1D303F7D061BF4429872E9F109ADDBCB431671F4 
{
public:
	// System.Int32 UnityEngine.KeyCode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(KeyCode_t1D303F7D061BF4429872E9F109ADDBCB431671F4, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A, ___m_CachedPtr_0)); }
	inline intptr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline intptr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(intptr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
	inline int32_t get_OffsetOfInstanceIDInCPlusPlusObject_1() const { return ___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline int32_t* get_address_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return &___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline void set_OffsetOfInstanceIDInCPlusPlusObject_1(int32_t value)
	{
		___OffsetOfInstanceIDInCPlusPlusObject_1 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// UnityEngine.AudioClip
struct AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:
	// UnityEngine.AudioClip/PCMReaderCallback UnityEngine.AudioClip::m_PCMReaderCallback
	PCMReaderCallback_t9CA1437D36509A9FAC5EDD8FF2BC3259C24D0E0B * ___m_PCMReaderCallback_4;
	// UnityEngine.AudioClip/PCMSetPositionCallback UnityEngine.AudioClip::m_PCMSetPositionCallback
	PCMSetPositionCallback_tBDD99E7C0697687F1E7B06CDD5DE444A3709CF4C * ___m_PCMSetPositionCallback_5;

public:
	inline static int32_t get_offset_of_m_PCMReaderCallback_4() { return static_cast<int32_t>(offsetof(AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE, ___m_PCMReaderCallback_4)); }
	inline PCMReaderCallback_t9CA1437D36509A9FAC5EDD8FF2BC3259C24D0E0B * get_m_PCMReaderCallback_4() const { return ___m_PCMReaderCallback_4; }
	inline PCMReaderCallback_t9CA1437D36509A9FAC5EDD8FF2BC3259C24D0E0B ** get_address_of_m_PCMReaderCallback_4() { return &___m_PCMReaderCallback_4; }
	inline void set_m_PCMReaderCallback_4(PCMReaderCallback_t9CA1437D36509A9FAC5EDD8FF2BC3259C24D0E0B * value)
	{
		___m_PCMReaderCallback_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_PCMReaderCallback_4), (void*)value);
	}

	inline static int32_t get_offset_of_m_PCMSetPositionCallback_5() { return static_cast<int32_t>(offsetof(AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE, ___m_PCMSetPositionCallback_5)); }
	inline PCMSetPositionCallback_tBDD99E7C0697687F1E7B06CDD5DE444A3709CF4C * get_m_PCMSetPositionCallback_5() const { return ___m_PCMSetPositionCallback_5; }
	inline PCMSetPositionCallback_tBDD99E7C0697687F1E7B06CDD5DE444A3709CF4C ** get_address_of_m_PCMSetPositionCallback_5() { return &___m_PCMSetPositionCallback_5; }
	inline void set_m_PCMSetPositionCallback_5(PCMSetPositionCallback_tBDD99E7C0697687F1E7B06CDD5DE444A3709CF4C * value)
	{
		___m_PCMSetPositionCallback_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_PCMSetPositionCallback_5), (void*)value);
	}
};


// UnityEngine.Component
struct Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// UnityEngine.GameObject
struct GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// UnityEngine.Material
struct Material_t8927C00353A72755313F046D0CE85178AE8218EE  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// UnityEngine.Behaviour
struct Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// UnityEngine.Collider
struct Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// UnityEngine.Renderer
struct Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// UnityEngine.Rigidbody
struct Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// UnityEngine.Transform
struct Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// UnityEngine.AudioBehaviour
struct AudioBehaviour_tB44966D47AD43C50C7294AEE9B57574E55AACA4A  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};


// UnityEngine.Camera
struct Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};

struct Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_StaticFields
{
public:
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreCull
	CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * ___onPreCull_4;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreRender
	CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * ___onPreRender_5;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPostRender
	CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * ___onPostRender_6;

public:
	inline static int32_t get_offset_of_onPreCull_4() { return static_cast<int32_t>(offsetof(Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_StaticFields, ___onPreCull_4)); }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * get_onPreCull_4() const { return ___onPreCull_4; }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D ** get_address_of_onPreCull_4() { return &___onPreCull_4; }
	inline void set_onPreCull_4(CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * value)
	{
		___onPreCull_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onPreCull_4), (void*)value);
	}

	inline static int32_t get_offset_of_onPreRender_5() { return static_cast<int32_t>(offsetof(Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_StaticFields, ___onPreRender_5)); }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * get_onPreRender_5() const { return ___onPreRender_5; }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D ** get_address_of_onPreRender_5() { return &___onPreRender_5; }
	inline void set_onPreRender_5(CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * value)
	{
		___onPreRender_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onPreRender_5), (void*)value);
	}

	inline static int32_t get_offset_of_onPostRender_6() { return static_cast<int32_t>(offsetof(Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_StaticFields, ___onPostRender_6)); }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * get_onPostRender_6() const { return ___onPostRender_6; }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D ** get_address_of_onPostRender_6() { return &___onPostRender_6; }
	inline void set_onPostRender_6(CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * value)
	{
		___onPostRender_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onPostRender_6), (void*)value);
	}
};


// UnityEngine.MonoBehaviour
struct MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};


// UnityEngine.AudioSource
struct AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B  : public AudioBehaviour_tB44966D47AD43C50C7294AEE9B57574E55AACA4A
{
public:

public:
};


// BoundsCheck
struct BoundsCheck_t4F4AC8554A0272E80ACC121C8CEE14FAA5F3E4CE  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Single BoundsCheck::radius
	float ___radius_4;
	// System.Boolean BoundsCheck::keepOnScreen
	bool ___keepOnScreen_5;
	// System.Boolean BoundsCheck::isOnScreen
	bool ___isOnScreen_6;
	// System.Boolean BoundsCheck::offLeft
	bool ___offLeft_7;
	// System.Boolean BoundsCheck::offRight
	bool ___offRight_8;
	// System.Boolean BoundsCheck::offUp
	bool ___offUp_9;
	// System.Boolean BoundsCheck::offDown
	bool ___offDown_10;
	// System.Single BoundsCheck::camWidth
	float ___camWidth_11;
	// System.Single BoundsCheck::camHeight
	float ___camHeight_12;

public:
	inline static int32_t get_offset_of_radius_4() { return static_cast<int32_t>(offsetof(BoundsCheck_t4F4AC8554A0272E80ACC121C8CEE14FAA5F3E4CE, ___radius_4)); }
	inline float get_radius_4() const { return ___radius_4; }
	inline float* get_address_of_radius_4() { return &___radius_4; }
	inline void set_radius_4(float value)
	{
		___radius_4 = value;
	}

	inline static int32_t get_offset_of_keepOnScreen_5() { return static_cast<int32_t>(offsetof(BoundsCheck_t4F4AC8554A0272E80ACC121C8CEE14FAA5F3E4CE, ___keepOnScreen_5)); }
	inline bool get_keepOnScreen_5() const { return ___keepOnScreen_5; }
	inline bool* get_address_of_keepOnScreen_5() { return &___keepOnScreen_5; }
	inline void set_keepOnScreen_5(bool value)
	{
		___keepOnScreen_5 = value;
	}

	inline static int32_t get_offset_of_isOnScreen_6() { return static_cast<int32_t>(offsetof(BoundsCheck_t4F4AC8554A0272E80ACC121C8CEE14FAA5F3E4CE, ___isOnScreen_6)); }
	inline bool get_isOnScreen_6() const { return ___isOnScreen_6; }
	inline bool* get_address_of_isOnScreen_6() { return &___isOnScreen_6; }
	inline void set_isOnScreen_6(bool value)
	{
		___isOnScreen_6 = value;
	}

	inline static int32_t get_offset_of_offLeft_7() { return static_cast<int32_t>(offsetof(BoundsCheck_t4F4AC8554A0272E80ACC121C8CEE14FAA5F3E4CE, ___offLeft_7)); }
	inline bool get_offLeft_7() const { return ___offLeft_7; }
	inline bool* get_address_of_offLeft_7() { return &___offLeft_7; }
	inline void set_offLeft_7(bool value)
	{
		___offLeft_7 = value;
	}

	inline static int32_t get_offset_of_offRight_8() { return static_cast<int32_t>(offsetof(BoundsCheck_t4F4AC8554A0272E80ACC121C8CEE14FAA5F3E4CE, ___offRight_8)); }
	inline bool get_offRight_8() const { return ___offRight_8; }
	inline bool* get_address_of_offRight_8() { return &___offRight_8; }
	inline void set_offRight_8(bool value)
	{
		___offRight_8 = value;
	}

	inline static int32_t get_offset_of_offUp_9() { return static_cast<int32_t>(offsetof(BoundsCheck_t4F4AC8554A0272E80ACC121C8CEE14FAA5F3E4CE, ___offUp_9)); }
	inline bool get_offUp_9() const { return ___offUp_9; }
	inline bool* get_address_of_offUp_9() { return &___offUp_9; }
	inline void set_offUp_9(bool value)
	{
		___offUp_9 = value;
	}

	inline static int32_t get_offset_of_offDown_10() { return static_cast<int32_t>(offsetof(BoundsCheck_t4F4AC8554A0272E80ACC121C8CEE14FAA5F3E4CE, ___offDown_10)); }
	inline bool get_offDown_10() const { return ___offDown_10; }
	inline bool* get_address_of_offDown_10() { return &___offDown_10; }
	inline void set_offDown_10(bool value)
	{
		___offDown_10 = value;
	}

	inline static int32_t get_offset_of_camWidth_11() { return static_cast<int32_t>(offsetof(BoundsCheck_t4F4AC8554A0272E80ACC121C8CEE14FAA5F3E4CE, ___camWidth_11)); }
	inline float get_camWidth_11() const { return ___camWidth_11; }
	inline float* get_address_of_camWidth_11() { return &___camWidth_11; }
	inline void set_camWidth_11(float value)
	{
		___camWidth_11 = value;
	}

	inline static int32_t get_offset_of_camHeight_12() { return static_cast<int32_t>(offsetof(BoundsCheck_t4F4AC8554A0272E80ACC121C8CEE14FAA5F3E4CE, ___camHeight_12)); }
	inline float get_camHeight_12() const { return ___camHeight_12; }
	inline float* get_address_of_camHeight_12() { return &___camHeight_12; }
	inline void set_camHeight_12(float value)
	{
		___camHeight_12 = value;
	}
};


// EndCanvas
struct EndCanvas_tE65EE714A0EBB79D9AFAA943F71DA85E1FD7EFCC  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// GameManager EndCanvas::gm
	GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * ___gm_4;
	// UnityEngine.UI.Text EndCanvas::endMsgTextbox
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___endMsgTextbox_5;

public:
	inline static int32_t get_offset_of_gm_4() { return static_cast<int32_t>(offsetof(EndCanvas_tE65EE714A0EBB79D9AFAA943F71DA85E1FD7EFCC, ___gm_4)); }
	inline GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * get_gm_4() const { return ___gm_4; }
	inline GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 ** get_address_of_gm_4() { return &___gm_4; }
	inline void set_gm_4(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * value)
	{
		___gm_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___gm_4), (void*)value);
	}

	inline static int32_t get_offset_of_endMsgTextbox_5() { return static_cast<int32_t>(offsetof(EndCanvas_tE65EE714A0EBB79D9AFAA943F71DA85E1FD7EFCC, ___endMsgTextbox_5)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_endMsgTextbox_5() const { return ___endMsgTextbox_5; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_endMsgTextbox_5() { return &___endMsgTextbox_5; }
	inline void set_endMsgTextbox_5(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___endMsgTextbox_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___endMsgTextbox_5), (void*)value);
	}
};


// Enemy
struct Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Single Enemy::speed
	float ___speed_4;
	// System.Single Enemy::fireRate
	float ___fireRate_5;
	// System.Single Enemy::health
	float ___health_6;
	// System.Int32 Enemy::score
	int32_t ___score_7;
	// BoundsCheck Enemy::bndCheck
	BoundsCheck_t4F4AC8554A0272E80ACC121C8CEE14FAA5F3E4CE * ___bndCheck_8;

public:
	inline static int32_t get_offset_of_speed_4() { return static_cast<int32_t>(offsetof(Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627, ___speed_4)); }
	inline float get_speed_4() const { return ___speed_4; }
	inline float* get_address_of_speed_4() { return &___speed_4; }
	inline void set_speed_4(float value)
	{
		___speed_4 = value;
	}

	inline static int32_t get_offset_of_fireRate_5() { return static_cast<int32_t>(offsetof(Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627, ___fireRate_5)); }
	inline float get_fireRate_5() const { return ___fireRate_5; }
	inline float* get_address_of_fireRate_5() { return &___fireRate_5; }
	inline void set_fireRate_5(float value)
	{
		___fireRate_5 = value;
	}

	inline static int32_t get_offset_of_health_6() { return static_cast<int32_t>(offsetof(Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627, ___health_6)); }
	inline float get_health_6() const { return ___health_6; }
	inline float* get_address_of_health_6() { return &___health_6; }
	inline void set_health_6(float value)
	{
		___health_6 = value;
	}

	inline static int32_t get_offset_of_score_7() { return static_cast<int32_t>(offsetof(Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627, ___score_7)); }
	inline int32_t get_score_7() const { return ___score_7; }
	inline int32_t* get_address_of_score_7() { return &___score_7; }
	inline void set_score_7(int32_t value)
	{
		___score_7 = value;
	}

	inline static int32_t get_offset_of_bndCheck_8() { return static_cast<int32_t>(offsetof(Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627, ___bndCheck_8)); }
	inline BoundsCheck_t4F4AC8554A0272E80ACC121C8CEE14FAA5F3E4CE * get_bndCheck_8() const { return ___bndCheck_8; }
	inline BoundsCheck_t4F4AC8554A0272E80ACC121C8CEE14FAA5F3E4CE ** get_address_of_bndCheck_8() { return &___bndCheck_8; }
	inline void set_bndCheck_8(BoundsCheck_t4F4AC8554A0272E80ACC121C8CEE14FAA5F3E4CE * value)
	{
		___bndCheck_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___bndCheck_8), (void*)value);
	}
};


// EnemySpawner
struct EnemySpawner_t02731B295570E1C2E63CE6A23D2A64D1E5985C9E  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.GameObject[] EnemySpawner::prefabEnemies
	GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* ___prefabEnemies_4;
	// System.Single EnemySpawner::enemySpawnPerSecond
	float ___enemySpawnPerSecond_5;
	// System.Single EnemySpawner::enemyDefaultPadding
	float ___enemyDefaultPadding_6;
	// BoundsCheck EnemySpawner::bndCheck
	BoundsCheck_t4F4AC8554A0272E80ACC121C8CEE14FAA5F3E4CE * ___bndCheck_7;

public:
	inline static int32_t get_offset_of_prefabEnemies_4() { return static_cast<int32_t>(offsetof(EnemySpawner_t02731B295570E1C2E63CE6A23D2A64D1E5985C9E, ___prefabEnemies_4)); }
	inline GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* get_prefabEnemies_4() const { return ___prefabEnemies_4; }
	inline GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642** get_address_of_prefabEnemies_4() { return &___prefabEnemies_4; }
	inline void set_prefabEnemies_4(GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* value)
	{
		___prefabEnemies_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___prefabEnemies_4), (void*)value);
	}

	inline static int32_t get_offset_of_enemySpawnPerSecond_5() { return static_cast<int32_t>(offsetof(EnemySpawner_t02731B295570E1C2E63CE6A23D2A64D1E5985C9E, ___enemySpawnPerSecond_5)); }
	inline float get_enemySpawnPerSecond_5() const { return ___enemySpawnPerSecond_5; }
	inline float* get_address_of_enemySpawnPerSecond_5() { return &___enemySpawnPerSecond_5; }
	inline void set_enemySpawnPerSecond_5(float value)
	{
		___enemySpawnPerSecond_5 = value;
	}

	inline static int32_t get_offset_of_enemyDefaultPadding_6() { return static_cast<int32_t>(offsetof(EnemySpawner_t02731B295570E1C2E63CE6A23D2A64D1E5985C9E, ___enemyDefaultPadding_6)); }
	inline float get_enemyDefaultPadding_6() const { return ___enemyDefaultPadding_6; }
	inline float* get_address_of_enemyDefaultPadding_6() { return &___enemyDefaultPadding_6; }
	inline void set_enemyDefaultPadding_6(float value)
	{
		___enemyDefaultPadding_6 = value;
	}

	inline static int32_t get_offset_of_bndCheck_7() { return static_cast<int32_t>(offsetof(EnemySpawner_t02731B295570E1C2E63CE6A23D2A64D1E5985C9E, ___bndCheck_7)); }
	inline BoundsCheck_t4F4AC8554A0272E80ACC121C8CEE14FAA5F3E4CE * get_bndCheck_7() const { return ___bndCheck_7; }
	inline BoundsCheck_t4F4AC8554A0272E80ACC121C8CEE14FAA5F3E4CE ** get_address_of_bndCheck_7() { return &___bndCheck_7; }
	inline void set_bndCheck_7(BoundsCheck_t4F4AC8554A0272E80ACC121C8CEE14FAA5F3E4CE * value)
	{
		___bndCheck_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___bndCheck_7), (void*)value);
	}
};


// GameManager
struct GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// GameState GameManager::gameState
	int32_t ___gameState_5;
	// System.String GameManager::gameTitle
	String_t* ___gameTitle_6;
	// System.String GameManager::gameCredits
	String_t* ___gameCredits_7;
	// System.String GameManager::copyrightDate
	String_t* ___copyrightDate_8;
	// System.Boolean GameManager::recordHighScore
	bool ___recordHighScore_9;
	// System.Int32 GameManager::defaultHighScore
	int32_t ___defaultHighScore_10;
	// UnityEngine.AudioClip GameManager::backgroundMusicClip
	AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * ___backgroundMusicClip_12;
	// UnityEngine.AudioSource GameManager::audioSource
	AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * ___audioSource_13;
	// System.Int32 GameManager::defaultsLives
	int32_t ___defaultsLives_14;
	// System.Int32 GameManager::currentLives
	int32_t ___currentLives_15;
	// System.Boolean GameManager::resetLostLevel
	bool ___resetLostLevel_16;
	// System.Single GameManager::gameRestartDelay
	float ___gameRestartDelay_17;
	// System.String GameManager::defaultEndMessage
	String_t* ___defaultEndMessage_20;
	// System.String GameManager::looseMessage
	String_t* ___looseMessage_21;
	// System.String GameManager::winMessage
	String_t* ___winMessage_22;
	// System.String GameManager::endMsg
	String_t* ___endMsg_23;
	// System.String GameManager::startScene
	String_t* ___startScene_24;
	// System.String GameManager::gameOverScene
	String_t* ___gameOverScene_25;
	// System.String[] GameManager::gameLevels
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___gameLevels_26;
	// System.Int32 GameManager::gameLevelsCount
	int32_t ___gameLevelsCount_27;
	// System.Int32 GameManager::loadLevel
	int32_t ___loadLevel_28;
	// System.Boolean GameManager::TestGameManager
	bool ___TestGameManager_30;
	// System.Boolean GameManager::levelLost
	bool ___levelLost_31;
	// System.Boolean GameManager::nextLevel
	bool ___nextLevel_32;
	// System.Boolean GameManager::playerWon
	bool ___playerWon_33;

public:
	inline static int32_t get_offset_of_gameState_5() { return static_cast<int32_t>(offsetof(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1, ___gameState_5)); }
	inline int32_t get_gameState_5() const { return ___gameState_5; }
	inline int32_t* get_address_of_gameState_5() { return &___gameState_5; }
	inline void set_gameState_5(int32_t value)
	{
		___gameState_5 = value;
	}

	inline static int32_t get_offset_of_gameTitle_6() { return static_cast<int32_t>(offsetof(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1, ___gameTitle_6)); }
	inline String_t* get_gameTitle_6() const { return ___gameTitle_6; }
	inline String_t** get_address_of_gameTitle_6() { return &___gameTitle_6; }
	inline void set_gameTitle_6(String_t* value)
	{
		___gameTitle_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___gameTitle_6), (void*)value);
	}

	inline static int32_t get_offset_of_gameCredits_7() { return static_cast<int32_t>(offsetof(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1, ___gameCredits_7)); }
	inline String_t* get_gameCredits_7() const { return ___gameCredits_7; }
	inline String_t** get_address_of_gameCredits_7() { return &___gameCredits_7; }
	inline void set_gameCredits_7(String_t* value)
	{
		___gameCredits_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___gameCredits_7), (void*)value);
	}

	inline static int32_t get_offset_of_copyrightDate_8() { return static_cast<int32_t>(offsetof(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1, ___copyrightDate_8)); }
	inline String_t* get_copyrightDate_8() const { return ___copyrightDate_8; }
	inline String_t** get_address_of_copyrightDate_8() { return &___copyrightDate_8; }
	inline void set_copyrightDate_8(String_t* value)
	{
		___copyrightDate_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___copyrightDate_8), (void*)value);
	}

	inline static int32_t get_offset_of_recordHighScore_9() { return static_cast<int32_t>(offsetof(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1, ___recordHighScore_9)); }
	inline bool get_recordHighScore_9() const { return ___recordHighScore_9; }
	inline bool* get_address_of_recordHighScore_9() { return &___recordHighScore_9; }
	inline void set_recordHighScore_9(bool value)
	{
		___recordHighScore_9 = value;
	}

	inline static int32_t get_offset_of_defaultHighScore_10() { return static_cast<int32_t>(offsetof(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1, ___defaultHighScore_10)); }
	inline int32_t get_defaultHighScore_10() const { return ___defaultHighScore_10; }
	inline int32_t* get_address_of_defaultHighScore_10() { return &___defaultHighScore_10; }
	inline void set_defaultHighScore_10(int32_t value)
	{
		___defaultHighScore_10 = value;
	}

	inline static int32_t get_offset_of_backgroundMusicClip_12() { return static_cast<int32_t>(offsetof(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1, ___backgroundMusicClip_12)); }
	inline AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * get_backgroundMusicClip_12() const { return ___backgroundMusicClip_12; }
	inline AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE ** get_address_of_backgroundMusicClip_12() { return &___backgroundMusicClip_12; }
	inline void set_backgroundMusicClip_12(AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * value)
	{
		___backgroundMusicClip_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___backgroundMusicClip_12), (void*)value);
	}

	inline static int32_t get_offset_of_audioSource_13() { return static_cast<int32_t>(offsetof(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1, ___audioSource_13)); }
	inline AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * get_audioSource_13() const { return ___audioSource_13; }
	inline AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B ** get_address_of_audioSource_13() { return &___audioSource_13; }
	inline void set_audioSource_13(AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * value)
	{
		___audioSource_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___audioSource_13), (void*)value);
	}

	inline static int32_t get_offset_of_defaultsLives_14() { return static_cast<int32_t>(offsetof(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1, ___defaultsLives_14)); }
	inline int32_t get_defaultsLives_14() const { return ___defaultsLives_14; }
	inline int32_t* get_address_of_defaultsLives_14() { return &___defaultsLives_14; }
	inline void set_defaultsLives_14(int32_t value)
	{
		___defaultsLives_14 = value;
	}

	inline static int32_t get_offset_of_currentLives_15() { return static_cast<int32_t>(offsetof(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1, ___currentLives_15)); }
	inline int32_t get_currentLives_15() const { return ___currentLives_15; }
	inline int32_t* get_address_of_currentLives_15() { return &___currentLives_15; }
	inline void set_currentLives_15(int32_t value)
	{
		___currentLives_15 = value;
	}

	inline static int32_t get_offset_of_resetLostLevel_16() { return static_cast<int32_t>(offsetof(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1, ___resetLostLevel_16)); }
	inline bool get_resetLostLevel_16() const { return ___resetLostLevel_16; }
	inline bool* get_address_of_resetLostLevel_16() { return &___resetLostLevel_16; }
	inline void set_resetLostLevel_16(bool value)
	{
		___resetLostLevel_16 = value;
	}

	inline static int32_t get_offset_of_gameRestartDelay_17() { return static_cast<int32_t>(offsetof(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1, ___gameRestartDelay_17)); }
	inline float get_gameRestartDelay_17() const { return ___gameRestartDelay_17; }
	inline float* get_address_of_gameRestartDelay_17() { return &___gameRestartDelay_17; }
	inline void set_gameRestartDelay_17(float value)
	{
		___gameRestartDelay_17 = value;
	}

	inline static int32_t get_offset_of_defaultEndMessage_20() { return static_cast<int32_t>(offsetof(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1, ___defaultEndMessage_20)); }
	inline String_t* get_defaultEndMessage_20() const { return ___defaultEndMessage_20; }
	inline String_t** get_address_of_defaultEndMessage_20() { return &___defaultEndMessage_20; }
	inline void set_defaultEndMessage_20(String_t* value)
	{
		___defaultEndMessage_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___defaultEndMessage_20), (void*)value);
	}

	inline static int32_t get_offset_of_looseMessage_21() { return static_cast<int32_t>(offsetof(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1, ___looseMessage_21)); }
	inline String_t* get_looseMessage_21() const { return ___looseMessage_21; }
	inline String_t** get_address_of_looseMessage_21() { return &___looseMessage_21; }
	inline void set_looseMessage_21(String_t* value)
	{
		___looseMessage_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___looseMessage_21), (void*)value);
	}

	inline static int32_t get_offset_of_winMessage_22() { return static_cast<int32_t>(offsetof(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1, ___winMessage_22)); }
	inline String_t* get_winMessage_22() const { return ___winMessage_22; }
	inline String_t** get_address_of_winMessage_22() { return &___winMessage_22; }
	inline void set_winMessage_22(String_t* value)
	{
		___winMessage_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___winMessage_22), (void*)value);
	}

	inline static int32_t get_offset_of_endMsg_23() { return static_cast<int32_t>(offsetof(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1, ___endMsg_23)); }
	inline String_t* get_endMsg_23() const { return ___endMsg_23; }
	inline String_t** get_address_of_endMsg_23() { return &___endMsg_23; }
	inline void set_endMsg_23(String_t* value)
	{
		___endMsg_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___endMsg_23), (void*)value);
	}

	inline static int32_t get_offset_of_startScene_24() { return static_cast<int32_t>(offsetof(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1, ___startScene_24)); }
	inline String_t* get_startScene_24() const { return ___startScene_24; }
	inline String_t** get_address_of_startScene_24() { return &___startScene_24; }
	inline void set_startScene_24(String_t* value)
	{
		___startScene_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___startScene_24), (void*)value);
	}

	inline static int32_t get_offset_of_gameOverScene_25() { return static_cast<int32_t>(offsetof(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1, ___gameOverScene_25)); }
	inline String_t* get_gameOverScene_25() const { return ___gameOverScene_25; }
	inline String_t** get_address_of_gameOverScene_25() { return &___gameOverScene_25; }
	inline void set_gameOverScene_25(String_t* value)
	{
		___gameOverScene_25 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___gameOverScene_25), (void*)value);
	}

	inline static int32_t get_offset_of_gameLevels_26() { return static_cast<int32_t>(offsetof(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1, ___gameLevels_26)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get_gameLevels_26() const { return ___gameLevels_26; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of_gameLevels_26() { return &___gameLevels_26; }
	inline void set_gameLevels_26(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		___gameLevels_26 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___gameLevels_26), (void*)value);
	}

	inline static int32_t get_offset_of_gameLevelsCount_27() { return static_cast<int32_t>(offsetof(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1, ___gameLevelsCount_27)); }
	inline int32_t get_gameLevelsCount_27() const { return ___gameLevelsCount_27; }
	inline int32_t* get_address_of_gameLevelsCount_27() { return &___gameLevelsCount_27; }
	inline void set_gameLevelsCount_27(int32_t value)
	{
		___gameLevelsCount_27 = value;
	}

	inline static int32_t get_offset_of_loadLevel_28() { return static_cast<int32_t>(offsetof(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1, ___loadLevel_28)); }
	inline int32_t get_loadLevel_28() const { return ___loadLevel_28; }
	inline int32_t* get_address_of_loadLevel_28() { return &___loadLevel_28; }
	inline void set_loadLevel_28(int32_t value)
	{
		___loadLevel_28 = value;
	}

	inline static int32_t get_offset_of_TestGameManager_30() { return static_cast<int32_t>(offsetof(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1, ___TestGameManager_30)); }
	inline bool get_TestGameManager_30() const { return ___TestGameManager_30; }
	inline bool* get_address_of_TestGameManager_30() { return &___TestGameManager_30; }
	inline void set_TestGameManager_30(bool value)
	{
		___TestGameManager_30 = value;
	}

	inline static int32_t get_offset_of_levelLost_31() { return static_cast<int32_t>(offsetof(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1, ___levelLost_31)); }
	inline bool get_levelLost_31() const { return ___levelLost_31; }
	inline bool* get_address_of_levelLost_31() { return &___levelLost_31; }
	inline void set_levelLost_31(bool value)
	{
		___levelLost_31 = value;
	}

	inline static int32_t get_offset_of_nextLevel_32() { return static_cast<int32_t>(offsetof(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1, ___nextLevel_32)); }
	inline bool get_nextLevel_32() const { return ___nextLevel_32; }
	inline bool* get_address_of_nextLevel_32() { return &___nextLevel_32; }
	inline void set_nextLevel_32(bool value)
	{
		___nextLevel_32 = value;
	}

	inline static int32_t get_offset_of_playerWon_33() { return static_cast<int32_t>(offsetof(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1, ___playerWon_33)); }
	inline bool get_playerWon_33() const { return ___playerWon_33; }
	inline bool* get_address_of_playerWon_33() { return &___playerWon_33; }
	inline void set_playerWon_33(bool value)
	{
		___playerWon_33 = value;
	}
};

struct GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_StaticFields
{
public:
	// GameManager GameManager::gm
	GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * ___gm_4;
	// System.Int32 GameManager::highScore
	int32_t ___highScore_11;
	// System.Int32 GameManager::lives
	int32_t ___lives_18;
	// System.Int32 GameManager::score
	int32_t ___score_19;
	// System.String GameManager::currentSceneName
	String_t* ___currentSceneName_29;
	// System.String GameManager::thisDay
	String_t* ___thisDay_34;

public:
	inline static int32_t get_offset_of_gm_4() { return static_cast<int32_t>(offsetof(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_StaticFields, ___gm_4)); }
	inline GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * get_gm_4() const { return ___gm_4; }
	inline GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 ** get_address_of_gm_4() { return &___gm_4; }
	inline void set_gm_4(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * value)
	{
		___gm_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___gm_4), (void*)value);
	}

	inline static int32_t get_offset_of_highScore_11() { return static_cast<int32_t>(offsetof(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_StaticFields, ___highScore_11)); }
	inline int32_t get_highScore_11() const { return ___highScore_11; }
	inline int32_t* get_address_of_highScore_11() { return &___highScore_11; }
	inline void set_highScore_11(int32_t value)
	{
		___highScore_11 = value;
	}

	inline static int32_t get_offset_of_lives_18() { return static_cast<int32_t>(offsetof(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_StaticFields, ___lives_18)); }
	inline int32_t get_lives_18() const { return ___lives_18; }
	inline int32_t* get_address_of_lives_18() { return &___lives_18; }
	inline void set_lives_18(int32_t value)
	{
		___lives_18 = value;
	}

	inline static int32_t get_offset_of_score_19() { return static_cast<int32_t>(offsetof(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_StaticFields, ___score_19)); }
	inline int32_t get_score_19() const { return ___score_19; }
	inline int32_t* get_address_of_score_19() { return &___score_19; }
	inline void set_score_19(int32_t value)
	{
		___score_19 = value;
	}

	inline static int32_t get_offset_of_currentSceneName_29() { return static_cast<int32_t>(offsetof(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_StaticFields, ___currentSceneName_29)); }
	inline String_t* get_currentSceneName_29() const { return ___currentSceneName_29; }
	inline String_t** get_address_of_currentSceneName_29() { return &___currentSceneName_29; }
	inline void set_currentSceneName_29(String_t* value)
	{
		___currentSceneName_29 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___currentSceneName_29), (void*)value);
	}

	inline static int32_t get_offset_of_thisDay_34() { return static_cast<int32_t>(offsetof(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_StaticFields, ___thisDay_34)); }
	inline String_t* get_thisDay_34() const { return ___thisDay_34; }
	inline String_t** get_address_of_thisDay_34() { return &___thisDay_34; }
	inline void set_thisDay_34(String_t* value)
	{
		___thisDay_34 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___thisDay_34), (void*)value);
	}
};


// HUDCanvas
struct HUDCanvas_t92770F90E8E786A01C1D48AC7281191FE50660CE  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// GameManager HUDCanvas::gm
	GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * ___gm_4;
	// UnityEngine.UI.Text HUDCanvas::levelTextbox
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___levelTextbox_5;
	// UnityEngine.UI.Text HUDCanvas::livesTextbox
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___livesTextbox_6;
	// UnityEngine.UI.Text HUDCanvas::scoreTextbox
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___scoreTextbox_7;
	// UnityEngine.UI.Text HUDCanvas::highScoreTextbox
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___highScoreTextbox_8;
	// System.Int32 HUDCanvas::level
	int32_t ___level_9;
	// System.Int32 HUDCanvas::totalLevels
	int32_t ___totalLevels_10;
	// System.Int32 HUDCanvas::lives
	int32_t ___lives_11;
	// System.Int32 HUDCanvas::score
	int32_t ___score_12;
	// System.Int32 HUDCanvas::highscore
	int32_t ___highscore_13;

public:
	inline static int32_t get_offset_of_gm_4() { return static_cast<int32_t>(offsetof(HUDCanvas_t92770F90E8E786A01C1D48AC7281191FE50660CE, ___gm_4)); }
	inline GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * get_gm_4() const { return ___gm_4; }
	inline GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 ** get_address_of_gm_4() { return &___gm_4; }
	inline void set_gm_4(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * value)
	{
		___gm_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___gm_4), (void*)value);
	}

	inline static int32_t get_offset_of_levelTextbox_5() { return static_cast<int32_t>(offsetof(HUDCanvas_t92770F90E8E786A01C1D48AC7281191FE50660CE, ___levelTextbox_5)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_levelTextbox_5() const { return ___levelTextbox_5; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_levelTextbox_5() { return &___levelTextbox_5; }
	inline void set_levelTextbox_5(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___levelTextbox_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___levelTextbox_5), (void*)value);
	}

	inline static int32_t get_offset_of_livesTextbox_6() { return static_cast<int32_t>(offsetof(HUDCanvas_t92770F90E8E786A01C1D48AC7281191FE50660CE, ___livesTextbox_6)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_livesTextbox_6() const { return ___livesTextbox_6; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_livesTextbox_6() { return &___livesTextbox_6; }
	inline void set_livesTextbox_6(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___livesTextbox_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___livesTextbox_6), (void*)value);
	}

	inline static int32_t get_offset_of_scoreTextbox_7() { return static_cast<int32_t>(offsetof(HUDCanvas_t92770F90E8E786A01C1D48AC7281191FE50660CE, ___scoreTextbox_7)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_scoreTextbox_7() const { return ___scoreTextbox_7; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_scoreTextbox_7() { return &___scoreTextbox_7; }
	inline void set_scoreTextbox_7(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___scoreTextbox_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___scoreTextbox_7), (void*)value);
	}

	inline static int32_t get_offset_of_highScoreTextbox_8() { return static_cast<int32_t>(offsetof(HUDCanvas_t92770F90E8E786A01C1D48AC7281191FE50660CE, ___highScoreTextbox_8)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_highScoreTextbox_8() const { return ___highScoreTextbox_8; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_highScoreTextbox_8() { return &___highScoreTextbox_8; }
	inline void set_highScoreTextbox_8(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___highScoreTextbox_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___highScoreTextbox_8), (void*)value);
	}

	inline static int32_t get_offset_of_level_9() { return static_cast<int32_t>(offsetof(HUDCanvas_t92770F90E8E786A01C1D48AC7281191FE50660CE, ___level_9)); }
	inline int32_t get_level_9() const { return ___level_9; }
	inline int32_t* get_address_of_level_9() { return &___level_9; }
	inline void set_level_9(int32_t value)
	{
		___level_9 = value;
	}

	inline static int32_t get_offset_of_totalLevels_10() { return static_cast<int32_t>(offsetof(HUDCanvas_t92770F90E8E786A01C1D48AC7281191FE50660CE, ___totalLevels_10)); }
	inline int32_t get_totalLevels_10() const { return ___totalLevels_10; }
	inline int32_t* get_address_of_totalLevels_10() { return &___totalLevels_10; }
	inline void set_totalLevels_10(int32_t value)
	{
		___totalLevels_10 = value;
	}

	inline static int32_t get_offset_of_lives_11() { return static_cast<int32_t>(offsetof(HUDCanvas_t92770F90E8E786A01C1D48AC7281191FE50660CE, ___lives_11)); }
	inline int32_t get_lives_11() const { return ___lives_11; }
	inline int32_t* get_address_of_lives_11() { return &___lives_11; }
	inline void set_lives_11(int32_t value)
	{
		___lives_11 = value;
	}

	inline static int32_t get_offset_of_score_12() { return static_cast<int32_t>(offsetof(HUDCanvas_t92770F90E8E786A01C1D48AC7281191FE50660CE, ___score_12)); }
	inline int32_t get_score_12() const { return ___score_12; }
	inline int32_t* get_address_of_score_12() { return &___score_12; }
	inline void set_score_12(int32_t value)
	{
		___score_12 = value;
	}

	inline static int32_t get_offset_of_highscore_13() { return static_cast<int32_t>(offsetof(HUDCanvas_t92770F90E8E786A01C1D48AC7281191FE50660CE, ___highscore_13)); }
	inline int32_t get_highscore_13() const { return ___highscore_13; }
	inline int32_t* get_address_of_highscore_13() { return &___highscore_13; }
	inline void set_highscore_13(int32_t value)
	{
		___highscore_13 = value;
	}
};


// Hero
struct Hero_t16A1E1C16C807818D862612A955C5FFB6C878D0C  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// GameManager Hero::gm
	GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * ___gm_5;
	// ObjectPool Hero::pool
	ObjectPool_tBE9877D5A57AE7ED77E2C748CC34E97C40FB4CDC * ___pool_6;
	// System.Single Hero::speed
	float ___speed_7;
	// System.Single Hero::rollMult
	float ___rollMult_8;
	// System.Single Hero::pitchMult
	float ___pitchMult_9;
	// System.Single Hero::projectileSpeed
	float ___projectileSpeed_10;
	// UnityEngine.AudioClip Hero::projectSound
	AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * ___projectSound_11;
	// UnityEngine.AudioSource Hero::audioSource
	AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * ___audioSource_12;
	// UnityEngine.GameObject Hero::lastTriggerGo
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___lastTriggerGo_13;
	// System.Single Hero::_shieldLevel
	float ____shieldLevel_14;
	// System.Int32 Hero::maxShield
	int32_t ___maxShield_15;

public:
	inline static int32_t get_offset_of_gm_5() { return static_cast<int32_t>(offsetof(Hero_t16A1E1C16C807818D862612A955C5FFB6C878D0C, ___gm_5)); }
	inline GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * get_gm_5() const { return ___gm_5; }
	inline GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 ** get_address_of_gm_5() { return &___gm_5; }
	inline void set_gm_5(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * value)
	{
		___gm_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___gm_5), (void*)value);
	}

	inline static int32_t get_offset_of_pool_6() { return static_cast<int32_t>(offsetof(Hero_t16A1E1C16C807818D862612A955C5FFB6C878D0C, ___pool_6)); }
	inline ObjectPool_tBE9877D5A57AE7ED77E2C748CC34E97C40FB4CDC * get_pool_6() const { return ___pool_6; }
	inline ObjectPool_tBE9877D5A57AE7ED77E2C748CC34E97C40FB4CDC ** get_address_of_pool_6() { return &___pool_6; }
	inline void set_pool_6(ObjectPool_tBE9877D5A57AE7ED77E2C748CC34E97C40FB4CDC * value)
	{
		___pool_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___pool_6), (void*)value);
	}

	inline static int32_t get_offset_of_speed_7() { return static_cast<int32_t>(offsetof(Hero_t16A1E1C16C807818D862612A955C5FFB6C878D0C, ___speed_7)); }
	inline float get_speed_7() const { return ___speed_7; }
	inline float* get_address_of_speed_7() { return &___speed_7; }
	inline void set_speed_7(float value)
	{
		___speed_7 = value;
	}

	inline static int32_t get_offset_of_rollMult_8() { return static_cast<int32_t>(offsetof(Hero_t16A1E1C16C807818D862612A955C5FFB6C878D0C, ___rollMult_8)); }
	inline float get_rollMult_8() const { return ___rollMult_8; }
	inline float* get_address_of_rollMult_8() { return &___rollMult_8; }
	inline void set_rollMult_8(float value)
	{
		___rollMult_8 = value;
	}

	inline static int32_t get_offset_of_pitchMult_9() { return static_cast<int32_t>(offsetof(Hero_t16A1E1C16C807818D862612A955C5FFB6C878D0C, ___pitchMult_9)); }
	inline float get_pitchMult_9() const { return ___pitchMult_9; }
	inline float* get_address_of_pitchMult_9() { return &___pitchMult_9; }
	inline void set_pitchMult_9(float value)
	{
		___pitchMult_9 = value;
	}

	inline static int32_t get_offset_of_projectileSpeed_10() { return static_cast<int32_t>(offsetof(Hero_t16A1E1C16C807818D862612A955C5FFB6C878D0C, ___projectileSpeed_10)); }
	inline float get_projectileSpeed_10() const { return ___projectileSpeed_10; }
	inline float* get_address_of_projectileSpeed_10() { return &___projectileSpeed_10; }
	inline void set_projectileSpeed_10(float value)
	{
		___projectileSpeed_10 = value;
	}

	inline static int32_t get_offset_of_projectSound_11() { return static_cast<int32_t>(offsetof(Hero_t16A1E1C16C807818D862612A955C5FFB6C878D0C, ___projectSound_11)); }
	inline AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * get_projectSound_11() const { return ___projectSound_11; }
	inline AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE ** get_address_of_projectSound_11() { return &___projectSound_11; }
	inline void set_projectSound_11(AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * value)
	{
		___projectSound_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___projectSound_11), (void*)value);
	}

	inline static int32_t get_offset_of_audioSource_12() { return static_cast<int32_t>(offsetof(Hero_t16A1E1C16C807818D862612A955C5FFB6C878D0C, ___audioSource_12)); }
	inline AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * get_audioSource_12() const { return ___audioSource_12; }
	inline AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B ** get_address_of_audioSource_12() { return &___audioSource_12; }
	inline void set_audioSource_12(AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * value)
	{
		___audioSource_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___audioSource_12), (void*)value);
	}

	inline static int32_t get_offset_of_lastTriggerGo_13() { return static_cast<int32_t>(offsetof(Hero_t16A1E1C16C807818D862612A955C5FFB6C878D0C, ___lastTriggerGo_13)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_lastTriggerGo_13() const { return ___lastTriggerGo_13; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_lastTriggerGo_13() { return &___lastTriggerGo_13; }
	inline void set_lastTriggerGo_13(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___lastTriggerGo_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___lastTriggerGo_13), (void*)value);
	}

	inline static int32_t get_offset_of__shieldLevel_14() { return static_cast<int32_t>(offsetof(Hero_t16A1E1C16C807818D862612A955C5FFB6C878D0C, ____shieldLevel_14)); }
	inline float get__shieldLevel_14() const { return ____shieldLevel_14; }
	inline float* get_address_of__shieldLevel_14() { return &____shieldLevel_14; }
	inline void set__shieldLevel_14(float value)
	{
		____shieldLevel_14 = value;
	}

	inline static int32_t get_offset_of_maxShield_15() { return static_cast<int32_t>(offsetof(Hero_t16A1E1C16C807818D862612A955C5FFB6C878D0C, ___maxShield_15)); }
	inline int32_t get_maxShield_15() const { return ___maxShield_15; }
	inline int32_t* get_address_of_maxShield_15() { return &___maxShield_15; }
	inline void set_maxShield_15(int32_t value)
	{
		___maxShield_15 = value;
	}
};

struct Hero_t16A1E1C16C807818D862612A955C5FFB6C878D0C_StaticFields
{
public:
	// Hero Hero::SHIP
	Hero_t16A1E1C16C807818D862612A955C5FFB6C878D0C * ___SHIP_4;

public:
	inline static int32_t get_offset_of_SHIP_4() { return static_cast<int32_t>(offsetof(Hero_t16A1E1C16C807818D862612A955C5FFB6C878D0C_StaticFields, ___SHIP_4)); }
	inline Hero_t16A1E1C16C807818D862612A955C5FFB6C878D0C * get_SHIP_4() const { return ___SHIP_4; }
	inline Hero_t16A1E1C16C807818D862612A955C5FFB6C878D0C ** get_address_of_SHIP_4() { return &___SHIP_4; }
	inline void set_SHIP_4(Hero_t16A1E1C16C807818D862612A955C5FFB6C878D0C * value)
	{
		___SHIP_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___SHIP_4), (void*)value);
	}
};


// MaterialScroller
struct MaterialScroller_t8D8B509C3EB0CB75E6D42241F065B8EE4EEEAE02  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.Vector2 MaterialScroller::scrollSpeed
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___scrollSpeed_4;
	// UnityEngine.Renderer MaterialScroller::goRenderer
	Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * ___goRenderer_5;
	// UnityEngine.Material MaterialScroller::goMat
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___goMat_6;
	// UnityEngine.Vector2 MaterialScroller::offset
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___offset_7;

public:
	inline static int32_t get_offset_of_scrollSpeed_4() { return static_cast<int32_t>(offsetof(MaterialScroller_t8D8B509C3EB0CB75E6D42241F065B8EE4EEEAE02, ___scrollSpeed_4)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_scrollSpeed_4() const { return ___scrollSpeed_4; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_scrollSpeed_4() { return &___scrollSpeed_4; }
	inline void set_scrollSpeed_4(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___scrollSpeed_4 = value;
	}

	inline static int32_t get_offset_of_goRenderer_5() { return static_cast<int32_t>(offsetof(MaterialScroller_t8D8B509C3EB0CB75E6D42241F065B8EE4EEEAE02, ___goRenderer_5)); }
	inline Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * get_goRenderer_5() const { return ___goRenderer_5; }
	inline Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C ** get_address_of_goRenderer_5() { return &___goRenderer_5; }
	inline void set_goRenderer_5(Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * value)
	{
		___goRenderer_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___goRenderer_5), (void*)value);
	}

	inline static int32_t get_offset_of_goMat_6() { return static_cast<int32_t>(offsetof(MaterialScroller_t8D8B509C3EB0CB75E6D42241F065B8EE4EEEAE02, ___goMat_6)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_goMat_6() const { return ___goMat_6; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_goMat_6() { return &___goMat_6; }
	inline void set_goMat_6(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___goMat_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___goMat_6), (void*)value);
	}

	inline static int32_t get_offset_of_offset_7() { return static_cast<int32_t>(offsetof(MaterialScroller_t8D8B509C3EB0CB75E6D42241F065B8EE4EEEAE02, ___offset_7)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_offset_7() const { return ___offset_7; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_offset_7() { return &___offset_7; }
	inline void set_offset_7(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___offset_7 = value;
	}
};


// ObjectPool
struct ObjectPool_tBE9877D5A57AE7ED77E2C748CC34E97C40FB4CDC  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Collections.Generic.Queue`1<UnityEngine.GameObject> ObjectPool::projectiles
	Queue_1_t19382AED9A873E9B1E7BA5D847E64540A2B4FC92 * ___projectiles_5;
	// UnityEngine.GameObject ObjectPool::projectilePrefab
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___projectilePrefab_6;
	// System.Int32 ObjectPool::poolStartSize
	int32_t ___poolStartSize_7;

public:
	inline static int32_t get_offset_of_projectiles_5() { return static_cast<int32_t>(offsetof(ObjectPool_tBE9877D5A57AE7ED77E2C748CC34E97C40FB4CDC, ___projectiles_5)); }
	inline Queue_1_t19382AED9A873E9B1E7BA5D847E64540A2B4FC92 * get_projectiles_5() const { return ___projectiles_5; }
	inline Queue_1_t19382AED9A873E9B1E7BA5D847E64540A2B4FC92 ** get_address_of_projectiles_5() { return &___projectiles_5; }
	inline void set_projectiles_5(Queue_1_t19382AED9A873E9B1E7BA5D847E64540A2B4FC92 * value)
	{
		___projectiles_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___projectiles_5), (void*)value);
	}

	inline static int32_t get_offset_of_projectilePrefab_6() { return static_cast<int32_t>(offsetof(ObjectPool_tBE9877D5A57AE7ED77E2C748CC34E97C40FB4CDC, ___projectilePrefab_6)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_projectilePrefab_6() const { return ___projectilePrefab_6; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_projectilePrefab_6() { return &___projectilePrefab_6; }
	inline void set_projectilePrefab_6(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___projectilePrefab_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___projectilePrefab_6), (void*)value);
	}

	inline static int32_t get_offset_of_poolStartSize_7() { return static_cast<int32_t>(offsetof(ObjectPool_tBE9877D5A57AE7ED77E2C748CC34E97C40FB4CDC, ___poolStartSize_7)); }
	inline int32_t get_poolStartSize_7() const { return ___poolStartSize_7; }
	inline int32_t* get_address_of_poolStartSize_7() { return &___poolStartSize_7; }
	inline void set_poolStartSize_7(int32_t value)
	{
		___poolStartSize_7 = value;
	}
};

struct ObjectPool_tBE9877D5A57AE7ED77E2C748CC34E97C40FB4CDC_StaticFields
{
public:
	// ObjectPool ObjectPool::POOL
	ObjectPool_tBE9877D5A57AE7ED77E2C748CC34E97C40FB4CDC * ___POOL_4;

public:
	inline static int32_t get_offset_of_POOL_4() { return static_cast<int32_t>(offsetof(ObjectPool_tBE9877D5A57AE7ED77E2C748CC34E97C40FB4CDC_StaticFields, ___POOL_4)); }
	inline ObjectPool_tBE9877D5A57AE7ED77E2C748CC34E97C40FB4CDC * get_POOL_4() const { return ___POOL_4; }
	inline ObjectPool_tBE9877D5A57AE7ED77E2C748CC34E97C40FB4CDC ** get_address_of_POOL_4() { return &___POOL_4; }
	inline void set_POOL_4(ObjectPool_tBE9877D5A57AE7ED77E2C748CC34E97C40FB4CDC * value)
	{
		___POOL_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___POOL_4), (void*)value);
	}
};


// PoolReturn
struct PoolReturn_t749F2C2DB433ED98BDEF98AE86727EBF45684BE0  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// ObjectPool PoolReturn::pool
	ObjectPool_tBE9877D5A57AE7ED77E2C748CC34E97C40FB4CDC * ___pool_4;

public:
	inline static int32_t get_offset_of_pool_4() { return static_cast<int32_t>(offsetof(PoolReturn_t749F2C2DB433ED98BDEF98AE86727EBF45684BE0, ___pool_4)); }
	inline ObjectPool_tBE9877D5A57AE7ED77E2C748CC34E97C40FB4CDC * get_pool_4() const { return ___pool_4; }
	inline ObjectPool_tBE9877D5A57AE7ED77E2C748CC34E97C40FB4CDC ** get_address_of_pool_4() { return &___pool_4; }
	inline void set_pool_4(ObjectPool_tBE9877D5A57AE7ED77E2C748CC34E97C40FB4CDC * value)
	{
		___pool_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___pool_4), (void*)value);
	}
};


// Projectile
struct Projectile_t8BAB3D47786918922F97CC7FADEB6146D6E31B9F  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// BoundsCheck Projectile::bndCheck
	BoundsCheck_t4F4AC8554A0272E80ACC121C8CEE14FAA5F3E4CE * ___bndCheck_4;

public:
	inline static int32_t get_offset_of_bndCheck_4() { return static_cast<int32_t>(offsetof(Projectile_t8BAB3D47786918922F97CC7FADEB6146D6E31B9F, ___bndCheck_4)); }
	inline BoundsCheck_t4F4AC8554A0272E80ACC121C8CEE14FAA5F3E4CE * get_bndCheck_4() const { return ___bndCheck_4; }
	inline BoundsCheck_t4F4AC8554A0272E80ACC121C8CEE14FAA5F3E4CE ** get_address_of_bndCheck_4() { return &___bndCheck_4; }
	inline void set_bndCheck_4(BoundsCheck_t4F4AC8554A0272E80ACC121C8CEE14FAA5F3E4CE * value)
	{
		___bndCheck_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___bndCheck_4), (void*)value);
	}
};


// Shield
struct Shield_t938DA769F9DED1ACACE524C775A5032C1BD4BD61  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.Color Shield::shieldColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___shieldColor_4;
	// UnityEngine.Color Shield::shieldHitColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___shieldHitColor_5;
	// UnityEngine.Color Shield::shieldPowerColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___shieldPowerColor_6;
	// System.Single Shield::alphaLevel
	float ___alphaLevel_7;
	// System.Single Shield::minAlpha
	float ___minAlpha_8;
	// System.Single Shield::maxAlpha
	float ___maxAlpha_9;
	// System.Single Shield::currLevel
	float ___currLevel_10;
	// System.Single Shield::lastLevel
	float ___lastLevel_11;
	// UnityEngine.Material Shield::mat
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___mat_12;

public:
	inline static int32_t get_offset_of_shieldColor_4() { return static_cast<int32_t>(offsetof(Shield_t938DA769F9DED1ACACE524C775A5032C1BD4BD61, ___shieldColor_4)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_shieldColor_4() const { return ___shieldColor_4; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_shieldColor_4() { return &___shieldColor_4; }
	inline void set_shieldColor_4(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___shieldColor_4 = value;
	}

	inline static int32_t get_offset_of_shieldHitColor_5() { return static_cast<int32_t>(offsetof(Shield_t938DA769F9DED1ACACE524C775A5032C1BD4BD61, ___shieldHitColor_5)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_shieldHitColor_5() const { return ___shieldHitColor_5; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_shieldHitColor_5() { return &___shieldHitColor_5; }
	inline void set_shieldHitColor_5(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___shieldHitColor_5 = value;
	}

	inline static int32_t get_offset_of_shieldPowerColor_6() { return static_cast<int32_t>(offsetof(Shield_t938DA769F9DED1ACACE524C775A5032C1BD4BD61, ___shieldPowerColor_6)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_shieldPowerColor_6() const { return ___shieldPowerColor_6; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_shieldPowerColor_6() { return &___shieldPowerColor_6; }
	inline void set_shieldPowerColor_6(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___shieldPowerColor_6 = value;
	}

	inline static int32_t get_offset_of_alphaLevel_7() { return static_cast<int32_t>(offsetof(Shield_t938DA769F9DED1ACACE524C775A5032C1BD4BD61, ___alphaLevel_7)); }
	inline float get_alphaLevel_7() const { return ___alphaLevel_7; }
	inline float* get_address_of_alphaLevel_7() { return &___alphaLevel_7; }
	inline void set_alphaLevel_7(float value)
	{
		___alphaLevel_7 = value;
	}

	inline static int32_t get_offset_of_minAlpha_8() { return static_cast<int32_t>(offsetof(Shield_t938DA769F9DED1ACACE524C775A5032C1BD4BD61, ___minAlpha_8)); }
	inline float get_minAlpha_8() const { return ___minAlpha_8; }
	inline float* get_address_of_minAlpha_8() { return &___minAlpha_8; }
	inline void set_minAlpha_8(float value)
	{
		___minAlpha_8 = value;
	}

	inline static int32_t get_offset_of_maxAlpha_9() { return static_cast<int32_t>(offsetof(Shield_t938DA769F9DED1ACACE524C775A5032C1BD4BD61, ___maxAlpha_9)); }
	inline float get_maxAlpha_9() const { return ___maxAlpha_9; }
	inline float* get_address_of_maxAlpha_9() { return &___maxAlpha_9; }
	inline void set_maxAlpha_9(float value)
	{
		___maxAlpha_9 = value;
	}

	inline static int32_t get_offset_of_currLevel_10() { return static_cast<int32_t>(offsetof(Shield_t938DA769F9DED1ACACE524C775A5032C1BD4BD61, ___currLevel_10)); }
	inline float get_currLevel_10() const { return ___currLevel_10; }
	inline float* get_address_of_currLevel_10() { return &___currLevel_10; }
	inline void set_currLevel_10(float value)
	{
		___currLevel_10 = value;
	}

	inline static int32_t get_offset_of_lastLevel_11() { return static_cast<int32_t>(offsetof(Shield_t938DA769F9DED1ACACE524C775A5032C1BD4BD61, ___lastLevel_11)); }
	inline float get_lastLevel_11() const { return ___lastLevel_11; }
	inline float* get_address_of_lastLevel_11() { return &___lastLevel_11; }
	inline void set_lastLevel_11(float value)
	{
		___lastLevel_11 = value;
	}

	inline static int32_t get_offset_of_mat_12() { return static_cast<int32_t>(offsetof(Shield_t938DA769F9DED1ACACE524C775A5032C1BD4BD61, ___mat_12)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_mat_12() const { return ___mat_12; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_mat_12() { return &___mat_12; }
	inline void set_mat_12(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___mat_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mat_12), (void*)value);
	}
};


// StartCanvas
struct StartCanvas_tDADEA9B21D83433EFB4D2057F0251B45EFFC6D27  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// GameManager StartCanvas::gm
	GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * ___gm_4;
	// UnityEngine.UI.Text StartCanvas::titleTextbox
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___titleTextbox_5;
	// UnityEngine.UI.Text StartCanvas::creditsTextbox
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___creditsTextbox_6;
	// UnityEngine.UI.Text StartCanvas::copyrightTextbox
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___copyrightTextbox_7;

public:
	inline static int32_t get_offset_of_gm_4() { return static_cast<int32_t>(offsetof(StartCanvas_tDADEA9B21D83433EFB4D2057F0251B45EFFC6D27, ___gm_4)); }
	inline GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * get_gm_4() const { return ___gm_4; }
	inline GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 ** get_address_of_gm_4() { return &___gm_4; }
	inline void set_gm_4(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * value)
	{
		___gm_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___gm_4), (void*)value);
	}

	inline static int32_t get_offset_of_titleTextbox_5() { return static_cast<int32_t>(offsetof(StartCanvas_tDADEA9B21D83433EFB4D2057F0251B45EFFC6D27, ___titleTextbox_5)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_titleTextbox_5() const { return ___titleTextbox_5; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_titleTextbox_5() { return &___titleTextbox_5; }
	inline void set_titleTextbox_5(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___titleTextbox_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___titleTextbox_5), (void*)value);
	}

	inline static int32_t get_offset_of_creditsTextbox_6() { return static_cast<int32_t>(offsetof(StartCanvas_tDADEA9B21D83433EFB4D2057F0251B45EFFC6D27, ___creditsTextbox_6)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_creditsTextbox_6() const { return ___creditsTextbox_6; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_creditsTextbox_6() { return &___creditsTextbox_6; }
	inline void set_creditsTextbox_6(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___creditsTextbox_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___creditsTextbox_6), (void*)value);
	}

	inline static int32_t get_offset_of_copyrightTextbox_7() { return static_cast<int32_t>(offsetof(StartCanvas_tDADEA9B21D83433EFB4D2057F0251B45EFFC6D27, ___copyrightTextbox_7)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_copyrightTextbox_7() const { return ___copyrightTextbox_7; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_copyrightTextbox_7() { return &___copyrightTextbox_7; }
	inline void set_copyrightTextbox_7(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___copyrightTextbox_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___copyrightTextbox_7), (void*)value);
	}
};


// TestGame
struct TestGame_tBE1EB8C9119DE68B57C0CE8A6284EF8371A532C4  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Int32 TestGame::point
	int32_t ___point_4;

public:
	inline static int32_t get_offset_of_point_4() { return static_cast<int32_t>(offsetof(TestGame_tBE1EB8C9119DE68B57C0CE8A6284EF8371A532C4, ___point_4)); }
	inline int32_t get_point_4() const { return ___point_4; }
	inline int32_t* get_address_of_point_4() { return &___point_4; }
	inline void set_point_4(int32_t value)
	{
		___point_4 = value;
	}
};


// UnityEngine.EventSystems.UIBehaviour
struct UIBehaviour_tD1C6E2D542222546D68510ECE74036EFBC3C3B0E  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};


// UnityEngine.UI.Graphic
struct Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24  : public UIBehaviour_tD1C6E2D542222546D68510ECE74036EFBC3C3B0E
{
public:
	// UnityEngine.Material UnityEngine.UI.Graphic::m_Material
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___m_Material_6;
	// UnityEngine.Color UnityEngine.UI.Graphic::m_Color
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_Color_7;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipLayoutUpdate
	bool ___m_SkipLayoutUpdate_8;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipMaterialUpdate
	bool ___m_SkipMaterialUpdate_9;
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTarget
	bool ___m_RaycastTarget_10;
	// UnityEngine.Vector4 UnityEngine.UI.Graphic::m_RaycastPadding
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___m_RaycastPadding_11;
	// UnityEngine.RectTransform UnityEngine.UI.Graphic::m_RectTransform
	RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * ___m_RectTransform_12;
	// UnityEngine.CanvasRenderer UnityEngine.UI.Graphic::m_CanvasRenderer
	CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E * ___m_CanvasRenderer_13;
	// UnityEngine.Canvas UnityEngine.UI.Graphic::m_Canvas
	Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * ___m_Canvas_14;
	// System.Boolean UnityEngine.UI.Graphic::m_VertsDirty
	bool ___m_VertsDirty_15;
	// System.Boolean UnityEngine.UI.Graphic::m_MaterialDirty
	bool ___m_MaterialDirty_16;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyLayoutCallback
	UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * ___m_OnDirtyLayoutCallback_17;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyVertsCallback
	UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * ___m_OnDirtyVertsCallback_18;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyMaterialCallback
	UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * ___m_OnDirtyMaterialCallback_19;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::m_CachedMesh
	Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * ___m_CachedMesh_22;
	// UnityEngine.Vector2[] UnityEngine.UI.Graphic::m_CachedUvs
	Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* ___m_CachedUvs_23;
	// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween> UnityEngine.UI.Graphic::m_ColorTweenRunner
	TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 * ___m_ColorTweenRunner_24;
	// System.Boolean UnityEngine.UI.Graphic::<useLegacyMeshGeneration>k__BackingField
	bool ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25;

public:
	inline static int32_t get_offset_of_m_Material_6() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_Material_6)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_m_Material_6() const { return ___m_Material_6; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_m_Material_6() { return &___m_Material_6; }
	inline void set_m_Material_6(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___m_Material_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Material_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_Color_7() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_Color_7)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_Color_7() const { return ___m_Color_7; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_Color_7() { return &___m_Color_7; }
	inline void set_m_Color_7(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_Color_7 = value;
	}

	inline static int32_t get_offset_of_m_SkipLayoutUpdate_8() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_SkipLayoutUpdate_8)); }
	inline bool get_m_SkipLayoutUpdate_8() const { return ___m_SkipLayoutUpdate_8; }
	inline bool* get_address_of_m_SkipLayoutUpdate_8() { return &___m_SkipLayoutUpdate_8; }
	inline void set_m_SkipLayoutUpdate_8(bool value)
	{
		___m_SkipLayoutUpdate_8 = value;
	}

	inline static int32_t get_offset_of_m_SkipMaterialUpdate_9() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_SkipMaterialUpdate_9)); }
	inline bool get_m_SkipMaterialUpdate_9() const { return ___m_SkipMaterialUpdate_9; }
	inline bool* get_address_of_m_SkipMaterialUpdate_9() { return &___m_SkipMaterialUpdate_9; }
	inline void set_m_SkipMaterialUpdate_9(bool value)
	{
		___m_SkipMaterialUpdate_9 = value;
	}

	inline static int32_t get_offset_of_m_RaycastTarget_10() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_RaycastTarget_10)); }
	inline bool get_m_RaycastTarget_10() const { return ___m_RaycastTarget_10; }
	inline bool* get_address_of_m_RaycastTarget_10() { return &___m_RaycastTarget_10; }
	inline void set_m_RaycastTarget_10(bool value)
	{
		___m_RaycastTarget_10 = value;
	}

	inline static int32_t get_offset_of_m_RaycastPadding_11() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_RaycastPadding_11)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_m_RaycastPadding_11() const { return ___m_RaycastPadding_11; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_m_RaycastPadding_11() { return &___m_RaycastPadding_11; }
	inline void set_m_RaycastPadding_11(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___m_RaycastPadding_11 = value;
	}

	inline static int32_t get_offset_of_m_RectTransform_12() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_RectTransform_12)); }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * get_m_RectTransform_12() const { return ___m_RectTransform_12; }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 ** get_address_of_m_RectTransform_12() { return &___m_RectTransform_12; }
	inline void set_m_RectTransform_12(RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * value)
	{
		___m_RectTransform_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_RectTransform_12), (void*)value);
	}

	inline static int32_t get_offset_of_m_CanvasRenderer_13() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_CanvasRenderer_13)); }
	inline CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E * get_m_CanvasRenderer_13() const { return ___m_CanvasRenderer_13; }
	inline CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E ** get_address_of_m_CanvasRenderer_13() { return &___m_CanvasRenderer_13; }
	inline void set_m_CanvasRenderer_13(CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E * value)
	{
		___m_CanvasRenderer_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CanvasRenderer_13), (void*)value);
	}

	inline static int32_t get_offset_of_m_Canvas_14() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_Canvas_14)); }
	inline Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * get_m_Canvas_14() const { return ___m_Canvas_14; }
	inline Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA ** get_address_of_m_Canvas_14() { return &___m_Canvas_14; }
	inline void set_m_Canvas_14(Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * value)
	{
		___m_Canvas_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Canvas_14), (void*)value);
	}

	inline static int32_t get_offset_of_m_VertsDirty_15() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_VertsDirty_15)); }
	inline bool get_m_VertsDirty_15() const { return ___m_VertsDirty_15; }
	inline bool* get_address_of_m_VertsDirty_15() { return &___m_VertsDirty_15; }
	inline void set_m_VertsDirty_15(bool value)
	{
		___m_VertsDirty_15 = value;
	}

	inline static int32_t get_offset_of_m_MaterialDirty_16() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_MaterialDirty_16)); }
	inline bool get_m_MaterialDirty_16() const { return ___m_MaterialDirty_16; }
	inline bool* get_address_of_m_MaterialDirty_16() { return &___m_MaterialDirty_16; }
	inline void set_m_MaterialDirty_16(bool value)
	{
		___m_MaterialDirty_16 = value;
	}

	inline static int32_t get_offset_of_m_OnDirtyLayoutCallback_17() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_OnDirtyLayoutCallback_17)); }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * get_m_OnDirtyLayoutCallback_17() const { return ___m_OnDirtyLayoutCallback_17; }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 ** get_address_of_m_OnDirtyLayoutCallback_17() { return &___m_OnDirtyLayoutCallback_17; }
	inline void set_m_OnDirtyLayoutCallback_17(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * value)
	{
		___m_OnDirtyLayoutCallback_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnDirtyLayoutCallback_17), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnDirtyVertsCallback_18() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_OnDirtyVertsCallback_18)); }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * get_m_OnDirtyVertsCallback_18() const { return ___m_OnDirtyVertsCallback_18; }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 ** get_address_of_m_OnDirtyVertsCallback_18() { return &___m_OnDirtyVertsCallback_18; }
	inline void set_m_OnDirtyVertsCallback_18(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * value)
	{
		___m_OnDirtyVertsCallback_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnDirtyVertsCallback_18), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnDirtyMaterialCallback_19() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_OnDirtyMaterialCallback_19)); }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * get_m_OnDirtyMaterialCallback_19() const { return ___m_OnDirtyMaterialCallback_19; }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 ** get_address_of_m_OnDirtyMaterialCallback_19() { return &___m_OnDirtyMaterialCallback_19; }
	inline void set_m_OnDirtyMaterialCallback_19(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * value)
	{
		___m_OnDirtyMaterialCallback_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnDirtyMaterialCallback_19), (void*)value);
	}

	inline static int32_t get_offset_of_m_CachedMesh_22() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_CachedMesh_22)); }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * get_m_CachedMesh_22() const { return ___m_CachedMesh_22; }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 ** get_address_of_m_CachedMesh_22() { return &___m_CachedMesh_22; }
	inline void set_m_CachedMesh_22(Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * value)
	{
		___m_CachedMesh_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CachedMesh_22), (void*)value);
	}

	inline static int32_t get_offset_of_m_CachedUvs_23() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_CachedUvs_23)); }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* get_m_CachedUvs_23() const { return ___m_CachedUvs_23; }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA** get_address_of_m_CachedUvs_23() { return &___m_CachedUvs_23; }
	inline void set_m_CachedUvs_23(Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* value)
	{
		___m_CachedUvs_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CachedUvs_23), (void*)value);
	}

	inline static int32_t get_offset_of_m_ColorTweenRunner_24() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_ColorTweenRunner_24)); }
	inline TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 * get_m_ColorTweenRunner_24() const { return ___m_ColorTweenRunner_24; }
	inline TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 ** get_address_of_m_ColorTweenRunner_24() { return &___m_ColorTweenRunner_24; }
	inline void set_m_ColorTweenRunner_24(TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 * value)
	{
		___m_ColorTweenRunner_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ColorTweenRunner_24), (void*)value);
	}

	inline static int32_t get_offset_of_U3CuseLegacyMeshGenerationU3Ek__BackingField_25() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25)); }
	inline bool get_U3CuseLegacyMeshGenerationU3Ek__BackingField_25() const { return ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25; }
	inline bool* get_address_of_U3CuseLegacyMeshGenerationU3Ek__BackingField_25() { return &___U3CuseLegacyMeshGenerationU3Ek__BackingField_25; }
	inline void set_U3CuseLegacyMeshGenerationU3Ek__BackingField_25(bool value)
	{
		___U3CuseLegacyMeshGenerationU3Ek__BackingField_25 = value;
	}
};

struct Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields
{
public:
	// UnityEngine.Material UnityEngine.UI.Graphic::s_DefaultUI
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___s_DefaultUI_4;
	// UnityEngine.Texture2D UnityEngine.UI.Graphic::s_WhiteTexture
	Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * ___s_WhiteTexture_5;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::s_Mesh
	Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * ___s_Mesh_20;
	// UnityEngine.UI.VertexHelper UnityEngine.UI.Graphic::s_VertexHelper
	VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 * ___s_VertexHelper_21;

public:
	inline static int32_t get_offset_of_s_DefaultUI_4() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_DefaultUI_4)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_s_DefaultUI_4() const { return ___s_DefaultUI_4; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_s_DefaultUI_4() { return &___s_DefaultUI_4; }
	inline void set_s_DefaultUI_4(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___s_DefaultUI_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_DefaultUI_4), (void*)value);
	}

	inline static int32_t get_offset_of_s_WhiteTexture_5() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_WhiteTexture_5)); }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * get_s_WhiteTexture_5() const { return ___s_WhiteTexture_5; }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF ** get_address_of_s_WhiteTexture_5() { return &___s_WhiteTexture_5; }
	inline void set_s_WhiteTexture_5(Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * value)
	{
		___s_WhiteTexture_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_WhiteTexture_5), (void*)value);
	}

	inline static int32_t get_offset_of_s_Mesh_20() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_Mesh_20)); }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * get_s_Mesh_20() const { return ___s_Mesh_20; }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 ** get_address_of_s_Mesh_20() { return &___s_Mesh_20; }
	inline void set_s_Mesh_20(Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * value)
	{
		___s_Mesh_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Mesh_20), (void*)value);
	}

	inline static int32_t get_offset_of_s_VertexHelper_21() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_VertexHelper_21)); }
	inline VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 * get_s_VertexHelper_21() const { return ___s_VertexHelper_21; }
	inline VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 ** get_address_of_s_VertexHelper_21() { return &___s_VertexHelper_21; }
	inline void set_s_VertexHelper_21(VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 * value)
	{
		___s_VertexHelper_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_VertexHelper_21), (void*)value);
	}
};


// UnityEngine.UI.MaskableGraphic
struct MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE  : public Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24
{
public:
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculateStencil
	bool ___m_ShouldRecalculateStencil_26;
	// UnityEngine.Material UnityEngine.UI.MaskableGraphic::m_MaskMaterial
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___m_MaskMaterial_27;
	// UnityEngine.UI.RectMask2D UnityEngine.UI.MaskableGraphic::m_ParentMask
	RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 * ___m_ParentMask_28;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_Maskable
	bool ___m_Maskable_29;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IsMaskingGraphic
	bool ___m_IsMaskingGraphic_30;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IncludeForMasking
	bool ___m_IncludeForMasking_31;
	// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent UnityEngine.UI.MaskableGraphic::m_OnCullStateChanged
	CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 * ___m_OnCullStateChanged_32;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculate
	bool ___m_ShouldRecalculate_33;
	// System.Int32 UnityEngine.UI.MaskableGraphic::m_StencilValue
	int32_t ___m_StencilValue_34;
	// UnityEngine.Vector3[] UnityEngine.UI.MaskableGraphic::m_Corners
	Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* ___m_Corners_35;

public:
	inline static int32_t get_offset_of_m_ShouldRecalculateStencil_26() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_ShouldRecalculateStencil_26)); }
	inline bool get_m_ShouldRecalculateStencil_26() const { return ___m_ShouldRecalculateStencil_26; }
	inline bool* get_address_of_m_ShouldRecalculateStencil_26() { return &___m_ShouldRecalculateStencil_26; }
	inline void set_m_ShouldRecalculateStencil_26(bool value)
	{
		___m_ShouldRecalculateStencil_26 = value;
	}

	inline static int32_t get_offset_of_m_MaskMaterial_27() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_MaskMaterial_27)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_m_MaskMaterial_27() const { return ___m_MaskMaterial_27; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_m_MaskMaterial_27() { return &___m_MaskMaterial_27; }
	inline void set_m_MaskMaterial_27(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___m_MaskMaterial_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_MaskMaterial_27), (void*)value);
	}

	inline static int32_t get_offset_of_m_ParentMask_28() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_ParentMask_28)); }
	inline RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 * get_m_ParentMask_28() const { return ___m_ParentMask_28; }
	inline RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 ** get_address_of_m_ParentMask_28() { return &___m_ParentMask_28; }
	inline void set_m_ParentMask_28(RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 * value)
	{
		___m_ParentMask_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ParentMask_28), (void*)value);
	}

	inline static int32_t get_offset_of_m_Maskable_29() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_Maskable_29)); }
	inline bool get_m_Maskable_29() const { return ___m_Maskable_29; }
	inline bool* get_address_of_m_Maskable_29() { return &___m_Maskable_29; }
	inline void set_m_Maskable_29(bool value)
	{
		___m_Maskable_29 = value;
	}

	inline static int32_t get_offset_of_m_IsMaskingGraphic_30() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_IsMaskingGraphic_30)); }
	inline bool get_m_IsMaskingGraphic_30() const { return ___m_IsMaskingGraphic_30; }
	inline bool* get_address_of_m_IsMaskingGraphic_30() { return &___m_IsMaskingGraphic_30; }
	inline void set_m_IsMaskingGraphic_30(bool value)
	{
		___m_IsMaskingGraphic_30 = value;
	}

	inline static int32_t get_offset_of_m_IncludeForMasking_31() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_IncludeForMasking_31)); }
	inline bool get_m_IncludeForMasking_31() const { return ___m_IncludeForMasking_31; }
	inline bool* get_address_of_m_IncludeForMasking_31() { return &___m_IncludeForMasking_31; }
	inline void set_m_IncludeForMasking_31(bool value)
	{
		___m_IncludeForMasking_31 = value;
	}

	inline static int32_t get_offset_of_m_OnCullStateChanged_32() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_OnCullStateChanged_32)); }
	inline CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 * get_m_OnCullStateChanged_32() const { return ___m_OnCullStateChanged_32; }
	inline CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 ** get_address_of_m_OnCullStateChanged_32() { return &___m_OnCullStateChanged_32; }
	inline void set_m_OnCullStateChanged_32(CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 * value)
	{
		___m_OnCullStateChanged_32 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnCullStateChanged_32), (void*)value);
	}

	inline static int32_t get_offset_of_m_ShouldRecalculate_33() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_ShouldRecalculate_33)); }
	inline bool get_m_ShouldRecalculate_33() const { return ___m_ShouldRecalculate_33; }
	inline bool* get_address_of_m_ShouldRecalculate_33() { return &___m_ShouldRecalculate_33; }
	inline void set_m_ShouldRecalculate_33(bool value)
	{
		___m_ShouldRecalculate_33 = value;
	}

	inline static int32_t get_offset_of_m_StencilValue_34() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_StencilValue_34)); }
	inline int32_t get_m_StencilValue_34() const { return ___m_StencilValue_34; }
	inline int32_t* get_address_of_m_StencilValue_34() { return &___m_StencilValue_34; }
	inline void set_m_StencilValue_34(int32_t value)
	{
		___m_StencilValue_34 = value;
	}

	inline static int32_t get_offset_of_m_Corners_35() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_Corners_35)); }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* get_m_Corners_35() const { return ___m_Corners_35; }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4** get_address_of_m_Corners_35() { return &___m_Corners_35; }
	inline void set_m_Corners_35(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* value)
	{
		___m_Corners_35 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Corners_35), (void*)value);
	}
};


// UnityEngine.UI.Text
struct Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1  : public MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE
{
public:
	// UnityEngine.UI.FontData UnityEngine.UI.Text::m_FontData
	FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738 * ___m_FontData_36;
	// System.String UnityEngine.UI.Text::m_Text
	String_t* ___m_Text_37;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCache
	TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * ___m_TextCache_38;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCacheForLayout
	TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * ___m_TextCacheForLayout_39;
	// System.Boolean UnityEngine.UI.Text::m_DisableFontTextureRebuiltCallback
	bool ___m_DisableFontTextureRebuiltCallback_41;
	// UnityEngine.UIVertex[] UnityEngine.UI.Text::m_TempVerts
	UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A* ___m_TempVerts_42;

public:
	inline static int32_t get_offset_of_m_FontData_36() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_FontData_36)); }
	inline FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738 * get_m_FontData_36() const { return ___m_FontData_36; }
	inline FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738 ** get_address_of_m_FontData_36() { return &___m_FontData_36; }
	inline void set_m_FontData_36(FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738 * value)
	{
		___m_FontData_36 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_FontData_36), (void*)value);
	}

	inline static int32_t get_offset_of_m_Text_37() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_Text_37)); }
	inline String_t* get_m_Text_37() const { return ___m_Text_37; }
	inline String_t** get_address_of_m_Text_37() { return &___m_Text_37; }
	inline void set_m_Text_37(String_t* value)
	{
		___m_Text_37 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Text_37), (void*)value);
	}

	inline static int32_t get_offset_of_m_TextCache_38() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_TextCache_38)); }
	inline TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * get_m_TextCache_38() const { return ___m_TextCache_38; }
	inline TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 ** get_address_of_m_TextCache_38() { return &___m_TextCache_38; }
	inline void set_m_TextCache_38(TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * value)
	{
		___m_TextCache_38 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TextCache_38), (void*)value);
	}

	inline static int32_t get_offset_of_m_TextCacheForLayout_39() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_TextCacheForLayout_39)); }
	inline TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * get_m_TextCacheForLayout_39() const { return ___m_TextCacheForLayout_39; }
	inline TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 ** get_address_of_m_TextCacheForLayout_39() { return &___m_TextCacheForLayout_39; }
	inline void set_m_TextCacheForLayout_39(TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * value)
	{
		___m_TextCacheForLayout_39 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TextCacheForLayout_39), (void*)value);
	}

	inline static int32_t get_offset_of_m_DisableFontTextureRebuiltCallback_41() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_DisableFontTextureRebuiltCallback_41)); }
	inline bool get_m_DisableFontTextureRebuiltCallback_41() const { return ___m_DisableFontTextureRebuiltCallback_41; }
	inline bool* get_address_of_m_DisableFontTextureRebuiltCallback_41() { return &___m_DisableFontTextureRebuiltCallback_41; }
	inline void set_m_DisableFontTextureRebuiltCallback_41(bool value)
	{
		___m_DisableFontTextureRebuiltCallback_41 = value;
	}

	inline static int32_t get_offset_of_m_TempVerts_42() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_TempVerts_42)); }
	inline UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A* get_m_TempVerts_42() const { return ___m_TempVerts_42; }
	inline UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A** get_address_of_m_TempVerts_42() { return &___m_TempVerts_42; }
	inline void set_m_TempVerts_42(UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A* value)
	{
		___m_TempVerts_42 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TempVerts_42), (void*)value);
	}
};

struct Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_StaticFields
{
public:
	// UnityEngine.Material UnityEngine.UI.Text::s_DefaultText
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___s_DefaultText_40;

public:
	inline static int32_t get_offset_of_s_DefaultText_40() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_StaticFields, ___s_DefaultText_40)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_s_DefaultText_40() const { return ___s_DefaultText_40; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_s_DefaultText_40() { return &___s_DefaultText_40; }
	inline void set_s_DefaultText_40(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___s_DefaultText_40 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_DefaultText_40), (void*)value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * m_Items[1];

public:
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.String[]
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) String_t* m_Items[1];

public:
	inline String_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline String_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, String_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline String_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline String_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, String_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// !!0 UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Object::Instantiate<System.Object>(!!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Object_Instantiate_TisRuntimeObject_m4039C8E65629D33E1EC84D2505BF1D5DDC936622_gshared (RuntimeObject * ___original0, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Queue`1<System.Object>::Enqueue(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_Enqueue_mCACF312F04BD04D69E3FBA7D779B5DBF39BB3728_gshared (Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 * __this, RuntimeObject * ___item0, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.Queue`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Queue_1_get_Count_mD618588C9785F06D043BE6AAD0A0B8116B2A77A3_gshared_inline (Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.Queue`1<System.Object>::Dequeue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Queue_1_Dequeue_mE9A2A69E86A7EDA9FBCEA675542F01A6D8677A14_gshared (Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Queue`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1__ctor_m065613451660A1479E4D6D00878FB7630AFE4E11_gshared (Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 * __this, const RuntimeMethod* method);

// UnityEngine.Camera UnityEngine.Camera::get_main()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * Camera_get_main_mC337C621B91591CEF89504C97EF64D717C12871C (const RuntimeMethod* method);
// System.Single UnityEngine.Camera::get_orthographicSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Camera_get_orthographicSize_m970DC87D428A71EDF30F9ED7D0E76E08B1BE4EFE (Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Camera::get_aspect()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Camera_get_aspect_mD0A1FC8F998473DA08866FF9CD61C02E6D5F4987 (Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * __this, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Application::get_isPlaying()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Application_get_isPlaying_m7BB718D8E58B807184491F64AFF0649517E56567 (const RuntimeMethod* method);
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method);
// UnityEngine.Color UnityEngine.Color::get_yellow()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  Color_get_yellow_m9FD4BDABA7E40E136BE57EE7872CEA6B1B2FA1D1 (const RuntimeMethod* method);
// System.Void UnityEngine.Gizmos::set_color(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Gizmos_set_color_m937ACC6288C81BAFFC3449FAA03BB4F680F4E74F (Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___value0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_zero()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_get_zero_m1A8F7993167785F750B6B01762D22C2597C84EF6 (const RuntimeMethod* method);
// System.Void UnityEngine.Gizmos::DrawWireCube(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Gizmos_DrawWireCube_mC526244E50C6E5793D4066C9C99023D5FF8424BF (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___center0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___size1, const RuntimeMethod* method);
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED (MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * __this, const RuntimeMethod* method);
// GameManager GameManager::get_GM()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * GameManager_get_GM_mF044B18C61B07C11CC5DF01B430E5C74431C7AA4_inline (const RuntimeMethod* method);
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8 (RuntimeObject * ___message0, const RuntimeMethod* method);
// System.Void GameManager::StartGame()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_StartGame_m6022C5CDD590728691B22E9B87185BFE3D6A8EC1 (GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * __this, const RuntimeMethod* method);
// System.Void GameManager::ExitGame()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_ExitGame_m3C47242CB3DE298E84344082AC4D28B586026847 (GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<BoundsCheck>()
inline BoundsCheck_t4F4AC8554A0272E80ACC121C8CEE14FAA5F3E4CE * Component_GetComponent_TisBoundsCheck_t4F4AC8554A0272E80ACC121C8CEE14FAA5F3E4CE_mB315A5F068A2CE61C696F5715FF04986B36CE025 (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  BoundsCheck_t4F4AC8554A0272E80ACC121C8CEE14FAA5F3E4CE * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___x0, Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___y1, const RuntimeMethod* method);
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___obj0, const RuntimeMethod* method);
// UnityEngine.Vector3 Enemy::get_pos()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Enemy_get_pos_m4D1015F337B0ED26674F1143404393B6AB1997CD (Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Time::get_deltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290 (const RuntimeMethod* method);
// System.Void Enemy::set_pos(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enemy_set_pos_mAFC1B8C8B290C02649A49441D385DC8F1EC34FD6 (Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method);
// UnityEngine.GameObject UnityEngine.Collision::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * Collision_get_gameObject_m5682F872FD28419AA36F0651CE8B19825A21859D (Collision_tDC11F9B3834FD25DEB8C7DD1C51B635D240BBBF0 * __this, const RuntimeMethod* method);
// System.String UnityEngine.GameObject::get_tag()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* GameObject_get_tag_mC21F33D368C18A631040F2887036C678B96ABC33 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method);
// System.String UnityEngine.Object::get_name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Object_get_name_m0C7BC870ED2F0DC5A2FB09628136CD7D1CB82CFB (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * __this, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method);
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void GameManager::UpdateScore(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_UpdateScore_m54CA912FF9C47361616B3364D7F8056413A91326 (GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * __this, int32_t ___point0, const RuntimeMethod* method);
// System.Void UnityEngine.MonoBehaviour::Invoke(System.String,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour_Invoke_m4AAB759653B1C6FB0653527F4DDC72D1E9162CC4 (MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * __this, String_t* ___methodName0, float ___time1, const RuntimeMethod* method);
// System.Int32 UnityEngine.Random::Range(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Random_Range_m4B3A0037ACA057F33C94508F908546B9317D996A (int32_t ___minInclusive0, int32_t ___maxExclusive1, const RuntimeMethod* method);
// !!0 UnityEngine.Object::Instantiate<UnityEngine.GameObject>(!!0)
inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m26431AC51B9B7A43FBABD10B4923B72B0C578F33 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___original0, const RuntimeMethod* method)
{
	return ((  GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_m4039C8E65629D33E1EC84D2505BF1D5DDC936622_gshared)(___original0, method);
}
// !!0 UnityEngine.GameObject::GetComponent<BoundsCheck>()
inline BoundsCheck_t4F4AC8554A0272E80ACC121C8CEE14FAA5F3E4CE * GameObject_GetComponent_TisBoundsCheck_t4F4AC8554A0272E80ACC121C8CEE14FAA5F3E4CE_mA73D98BBAA2D2A89A8D38D45C5F9F420D3F879E0 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  BoundsCheck_t4F4AC8554A0272E80ACC121C8CEE14FAA5F3E4CE * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared)(__this, method);
}
// System.Single UnityEngine.Random::Range(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Random_Range_mC15372D42A9ABDCAC3DE82E114D60A40C9C311D2 (float ___minInclusive0, float ___maxInclusive1, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___x0, Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___y1, const RuntimeMethod* method);
// System.Void UnityEngine.Object::DontDestroyOnLoad(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_DontDestroyOnLoad_m03007A68ABBA4CCD8C27B944964983395E7640F9 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___target0, const RuntimeMethod* method);
// System.Void GameManager::CheckGameManagerIsInScene()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_CheckGameManagerIsInScene_m31FE5B7548D475237B75CD05D13C888D36A9FC22 (GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * __this, const RuntimeMethod* method);
// UnityEngine.SceneManagement.Scene UnityEngine.SceneManagement.SceneManager::GetActiveScene()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE  SceneManager_GetActiveScene_mB9A5037FFB576B2432D0BFEF6A161B7C4C1921A4 (const RuntimeMethod* method);
// System.String UnityEngine.SceneManagement.Scene::get_name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Scene_get_name_m38F195D7CA6417FED310C23E4D8E86150C7835B8 (Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE * __this, const RuntimeMethod* method);
// System.Void GameManager::GetHighScore()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_GetHighScore_mDFF413F70B2F166791CBBD75BF93D57539BD9859 (GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<UnityEngine.AudioSource>()
inline AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * Component_GetComponent_TisAudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B_mCC3B7A679ECE504BFAF8C70C4EF527511F46902F (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// System.Void UnityEngine.AudioSource::set_volume(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_set_volume_m37B6B2EACA7C2C18ABEE55EE5EA404085E94EE58 (AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * __this, float ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.AudioSource::set_clip(UnityEngine.AudioClip)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_set_clip_mD1F50F7BA6EA3AF25B4922473352C5180CFF7B2B (AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * __this, AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.AudioSource::set_loop(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_set_loop_mDD9FB746D8A7392472E5484EEF8D0A667993E3E0 (AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * __this, bool ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.AudioSource::Play()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_Play_mED16664B8F8F3E4D68785C8C00FC96C4DF053AE1 (AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * __this, const RuntimeMethod* method);
// System.Boolean System.String::op_Inequality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Inequality_mDDA2DDED3E7EF042987EB7180EE3E88105F0AAE2 (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method);
// System.Void GameManager::SetGameState(GameState)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void GameManager_SetGameState_m4A3373138A9A26FA064BCA104F59933F8982FA28_inline (GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * __this, int32_t ___state0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Input::GetKey(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetKey_m77E2F3719EC63690632731872A691FF6A27C589C (String_t* ___name0, const RuntimeMethod* method);
// System.Void GameManager::CheckGameState()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_CheckGameState_mE2F499B3D31C53F265C85A7DA689F2CC29364EED (GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * __this, const RuntimeMethod* method);
// System.Void GameManager::RunTests()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_RunTests_mDE3BF2AB9D5D80C8B744A6C3FA1026B63047F04B (GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * __this, const RuntimeMethod* method);
// System.Void GameManager::NextLevel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_NextLevel_mE1B82F94BCDA9D457AB1B1F266414B47870F7852 (GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * __this, const RuntimeMethod* method);
// System.Void GameManager::GameOver()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_GameOver_m402A112370B58EBA3B2171FABC09467E1ED28E9A (GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * __this, const RuntimeMethod* method);
// System.Void GameManager::SetDefaultGameStats()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_SetDefaultGameStats_m1C9A4FA1F15820B8F81FCFF3887B5ADE35DDD555 (GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.SceneManagement.SceneManager::LoadScene(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneManager_LoadScene_m7DAF30213E99396ECBDB1BD40CC34CCF36902092 (String_t* ___sceneName0, const RuntimeMethod* method);
// System.Void UnityEngine.PlayerPrefs::SetInt(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerPrefs_SetInt_m0C5C977E960B9CA8F9AB73AF4129C3DCABD067B6 (String_t* ___key0, int32_t ___value1, const RuntimeMethod* method);
// System.Void UnityEngine.Application::Quit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Application_Quit_m8D720E5092786C2EE32310D85FE61C253D3B1F2A (const RuntimeMethod* method);
// System.Boolean UnityEngine.PlayerPrefs::HasKey(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayerPrefs_HasKey_m48BE5886380B51AB495B91C9A26115B7CB958A92 (String_t* ___key0, const RuntimeMethod* method);
// System.Int32 UnityEngine.PlayerPrefs::GetInt(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PlayerPrefs_GetInt_m6BCF9F844298D1810A68BAF23ECBA68C6960A986 (String_t* ___key0, const RuntimeMethod* method);
// System.Void GameManager::LostLife()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_LostLife_m603C8F61ECAC1533CB7ADA99334A85151F97CCF6 (GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * __this, const RuntimeMethod* method);
// System.DateTime System.DateTime::get_Now()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  DateTime_get_Now_mCAC695993D6E2C57B900C83BEF3F8B18BC4EBC2C (const RuntimeMethod* method);
// System.String System.DateTime::ToString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* DateTime_ToString_m19ECEFF7BA22ED4425F7562A82A1C2308E934204 (DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 * __this, String_t* ___format0, const RuntimeMethod* method);
// System.Void HUDCanvas::SetHUD()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HUDCanvas_SetHUD_mEECBCBA67CDB292AC22F9BB2E7F03AB22D6DD95F (HUDCanvas_t92770F90E8E786A01C1D48AC7281191FE50660CE * __this, const RuntimeMethod* method);
// System.Void HUDCanvas::GetGameStats()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HUDCanvas_GetGameStats_m5493FAA18C947194051E5F53FD046C6ED41DEE69 (HUDCanvas_t92770F90E8E786A01C1D48AC7281191FE50660CE * __this, const RuntimeMethod* method);
// System.Int32 GameManager::get_Lives()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t GameManager_get_Lives_m71273C4F0EAB39C5FD4CC98D503FECA962C6F6C3_inline (GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * __this, const RuntimeMethod* method);
// System.Int32 GameManager::get_Score()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t GameManager_get_Score_mF57A9A41AE4A9761FE592CACE4D013791D285653_inline (GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * __this, const RuntimeMethod* method);
// System.Int32 GameManager::get_HighScore()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t GameManager_get_HighScore_mCE8DDEE2A8C509DC05B997E126968B03D35B1FAE_inline (GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Implicit(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___exists0, const RuntimeMethod* method);
// System.String System.Int32::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411 (int32_t* __this, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m37A5BF26F8F8F1892D60D727303B23FB604FEE78 (String_t* ___str00, String_t* ___str11, String_t* ___str22, String_t* ___str33, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::LogError(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogError_m8850D65592770A364D494025FF3A73E8D4D70485 (RuntimeObject * ___message0, const RuntimeMethod* method);
// System.Single UnityEngine.Mathf::Min(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Mathf_Min_mD28BD5C9012619B74E475F204F96603193E99B14 (float ___a0, float ___b1, const RuntimeMethod* method);
// System.Void Hero::CheckSHIPIsInScene()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Hero_CheckSHIPIsInScene_mA16AE34D21E175A93CFCBE038E220BCDDAB20063 (Hero_t16A1E1C16C807818D862612A955C5FFB6C878D0C * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Input::GetAxis(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Input_GetAxis_m939297DEB2ECF8D8D09AD66EB69979AAD2B62326 (String_t* ___axisName0, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Quaternion::Euler(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  Quaternion_Euler_m37BF99FFFA09F4B3F83DC066641B82C59B19A9C3 (float ___x0, float ___y1, float ___z2, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_rotation(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_rotation_m1B5F3D4CE984AB31254615C9C71B0E54978583B4 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___value0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Input::GetKeyDown(UnityEngine.KeyCode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetKeyDown_m476116696E71771641BBECBAB1A4C55E69018220 (int32_t ___key0, const RuntimeMethod* method);
// System.Void Hero::FireProjectile()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Hero_FireProjectile_m36B3758E6947D2415379687C52678C73760B3C9F (Hero_t16A1E1C16C807818D862612A955C5FFB6C878D0C * __this, const RuntimeMethod* method);
// System.Void UnityEngine.AudioSource::PlayOneShot(UnityEngine.AudioClip)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_PlayOneShot_mA90B136041A61C30909301D45D0315088CA7D796 (AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * __this, AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * ___clip0, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.Transform::get_root()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * Transform_get_root_mDEB1F3B4DB26B32CEED6DFFF734F85C79C4DDA91 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// System.Single Hero::get_shieldLevel()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Hero_get_shieldLevel_m24D5C4DBFACC2941B922F03F66FC62D67BB6EAE7_inline (Hero_t16A1E1C16C807818D862612A955C5FFB6C878D0C * __this, const RuntimeMethod* method);
// System.Void Hero::set_shieldLevel(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Hero_set_shieldLevel_m59FBADCE365627014EEBC071604B14AA46602CFE (Hero_t16A1E1C16C807818D862612A955C5FFB6C878D0C * __this, float ___value0, const RuntimeMethod* method);
// UnityEngine.GameObject ObjectPool::GetObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ObjectPool_GetObject_m23C1CF70911D4E5CAFEF12E02B27D9C49D1FEB45 (ObjectPool_tBE9877D5A57AE7ED77E2C748CC34E97C40FB4CDC * __this, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.Rigidbody>()
inline Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * GameObject_GetComponent_TisRigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A_mA1779277BB07CE3D2CB8E340CEA85C40C6B52354 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared)(__this, method);
}
// UnityEngine.Vector3 UnityEngine.Vector3::get_up()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_get_up_m38AECA68388D446CFADDD022B0B867293044EA50 (const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, float ___d1, const RuntimeMethod* method);
// System.Void UnityEngine.Rigidbody::set_velocity(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody_set_velocity_m8DC0988916EB38DFD7D4584830B41D79140BF18D (Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<UnityEngine.Renderer>()
inline Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * Component_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_m436E5B0F17DDEF3CC61F77DEA82B1A92668AF019 (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// UnityEngine.Material UnityEngine.Renderer::get_material()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Material_t8927C00353A72755313F046D0CE85178AE8218EE * Renderer_get_material_mE6B01125502D08EE0D6DFE2EAEC064AD9BB31804 (Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * __this, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Vector2::op_Multiply(UnityEngine.Vector2,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Vector2_op_Multiply_mC7A7802352867555020A90205EBABA56EE5E36CB_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___a0, float ___d1, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Material::get_mainTextureOffset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Material_get_mainTextureOffset_m515864AC74B322365689879CC668D001C41577D4 (Material_t8927C00353A72755313F046D0CE85178AE8218EE * __this, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Vector2::op_Addition(UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Vector2_op_Addition_m5EACC2AEA80FEE29F380397CF1F4B11D04BE71CC_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___a0, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___b1, const RuntimeMethod* method);
// System.Void UnityEngine.Material::set_mainTextureOffset(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material_set_mainTextureOffset_m3045530900C547D17F181858EC245CC02CA5F3FE (Material_t8927C00353A72755313F046D0CE85178AE8218EE * __this, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Vector2::.ctor(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * __this, float ___x0, float ___y1, const RuntimeMethod* method);
// System.Void ObjectPool::CheckPoolIsInScene()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectPool_CheckPoolIsInScene_m2528DAD2F460A81E55D997E57DC93D12916AE08C (ObjectPool_tBE9877D5A57AE7ED77E2C748CC34E97C40FB4CDC * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Queue`1<UnityEngine.GameObject>::Enqueue(!0)
inline void Queue_1_Enqueue_mBF3F677E8FA5E61DFEF3209F9DDA278775BDD513 (Queue_1_t19382AED9A873E9B1E7BA5D847E64540A2B4FC92 * __this, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___item0, const RuntimeMethod* method)
{
	((  void (*) (Queue_1_t19382AED9A873E9B1E7BA5D847E64540A2B4FC92 *, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))Queue_1_Enqueue_mCACF312F04BD04D69E3FBA7D779B5DBF39BB3728_gshared)(__this, ___item0, method);
}
// System.Int32 System.Collections.Generic.Queue`1<UnityEngine.GameObject>::get_Count()
inline int32_t Queue_1_get_Count_mA25AD1436D3225AA2B66F58A6E79D70A2F5723A2_inline (Queue_1_t19382AED9A873E9B1E7BA5D847E64540A2B4FC92 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Queue_1_t19382AED9A873E9B1E7BA5D847E64540A2B4FC92 *, const RuntimeMethod*))Queue_1_get_Count_mD618588C9785F06D043BE6AAD0A0B8116B2A77A3_gshared_inline)(__this, method);
}
// !0 System.Collections.Generic.Queue`1<UnityEngine.GameObject>::Dequeue()
inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * Queue_1_Dequeue_mAB7D03D5E1E8D5574DB751A04534E90B970BE0CC (Queue_1_t19382AED9A873E9B1E7BA5D847E64540A2B4FC92 * __this, const RuntimeMethod* method)
{
	return ((  GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * (*) (Queue_1_t19382AED9A873E9B1E7BA5D847E64540A2B4FC92 *, const RuntimeMethod*))Queue_1_Dequeue_mE9A2A69E86A7EDA9FBCEA675542F01A6D8677A14_gshared)(__this, method);
}
// System.Void UnityEngine.Debug::LogWarning(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogWarning_m24085D883C9E74D7AB423F0625E13259923960E7 (RuntimeObject * ___message0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Queue`1<UnityEngine.GameObject>::.ctor()
inline void Queue_1__ctor_m989302E3AE90AD39E5B892C79B3A6365966D1852 (Queue_1_t19382AED9A873E9B1E7BA5D847E64540A2B4FC92 * __this, const RuntimeMethod* method)
{
	((  void (*) (Queue_1_t19382AED9A873E9B1E7BA5D847E64540A2B4FC92 *, const RuntimeMethod*))Queue_1__ctor_m065613451660A1479E4D6D00878FB7630AFE4E11_gshared)(__this, method);
}
// System.Void ObjectPool::ReturnObject(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectPool_ReturnObject_mE626DE836D2DC5DB1B4F4938971D1CE487BC85B7 (ObjectPool_tBE9877D5A57AE7ED77E2C748CC34E97C40FB4CDC * __this, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___gObject0, const RuntimeMethod* method);
// System.Void UnityEngine.Material::SetColor(System.String,UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material_SetColor_m5CAAF4A8D7F839597B4E14588E341462EEB81698 (Material_t8927C00353A72755313F046D0CE85178AE8218EE * __this, String_t* ___name0, Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___value1, const RuntimeMethod* method);
// System.Void UnityEngine.Material::SetFloat(System.String,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material_SetFloat_mBE01E05D49E5C7045E010F49A38E96B101D82768 (Material_t8927C00353A72755313F046D0CE85178AE8218EE * __this, String_t* ___name0, float ___value1, const RuntimeMethod* method);
// System.Single UnityEngine.Mathf::Clamp(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87 (float ___value0, float ___min1, float ___max2, const RuntimeMethod* method);
// System.Boolean UnityEngine.Input::GetKeyUp(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetKeyUp_m49B2C0996BCBFB9AA6AC8E6431D1D899EDA85785 (String_t* ___name0, const RuntimeMethod* method);
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
// System.Void BoundsCheck::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BoundsCheck_Awake_mE708AF54D7ACA6FFE4CECC4EB47F28693C825763 (BoundsCheck_t4F4AC8554A0272E80ACC121C8CEE14FAA5F3E4CE * __this, const RuntimeMethod* method)
{
	{
		// camHeight = Camera.main.orthographicSize;
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_0;
		L_0 = Camera_get_main_mC337C621B91591CEF89504C97EF64D717C12871C(/*hidden argument*/NULL);
		float L_1;
		L_1 = Camera_get_orthographicSize_m970DC87D428A71EDF30F9ED7D0E76E08B1BE4EFE(L_0, /*hidden argument*/NULL);
		__this->set_camHeight_12(L_1);
		// camWidth = camHeight * Camera.main.aspect;
		float L_2 = __this->get_camHeight_12();
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_3;
		L_3 = Camera_get_main_mC337C621B91591CEF89504C97EF64D717C12871C(/*hidden argument*/NULL);
		float L_4;
		L_4 = Camera_get_aspect_mD0A1FC8F998473DA08866FF9CD61C02E6D5F4987(L_3, /*hidden argument*/NULL);
		__this->set_camWidth_11(((float)il2cpp_codegen_multiply((float)L_2, (float)L_4)));
		// }//end Awake()
		return;
	}
}
// System.Void BoundsCheck::LateUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BoundsCheck_LateUpdate_m70B5C0858C146920A99BC04E4A1C28359B606F72 (BoundsCheck_t4F4AC8554A0272E80ACC121C8CEE14FAA5F3E4CE * __this, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	BoundsCheck_t4F4AC8554A0272E80ACC121C8CEE14FAA5F3E4CE * G_B12_0 = NULL;
	BoundsCheck_t4F4AC8554A0272E80ACC121C8CEE14FAA5F3E4CE * G_B9_0 = NULL;
	BoundsCheck_t4F4AC8554A0272E80ACC121C8CEE14FAA5F3E4CE * G_B10_0 = NULL;
	BoundsCheck_t4F4AC8554A0272E80ACC121C8CEE14FAA5F3E4CE * G_B11_0 = NULL;
	int32_t G_B13_0 = 0;
	BoundsCheck_t4F4AC8554A0272E80ACC121C8CEE14FAA5F3E4CE * G_B13_1 = NULL;
	{
		// Vector3 pos = transform.position; //vector 3 position
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0;
		L_0 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1;
		L_1 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		// isOnScreen = true;
		__this->set_isOnScreen_6((bool)1);
		// if(pos.x > camWidth - radius)
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2 = V_0;
		float L_3 = L_2.get_x_2();
		float L_4 = __this->get_camWidth_11();
		float L_5 = __this->get_radius_4();
		if ((!(((float)L_3) > ((float)((float)il2cpp_codegen_subtract((float)L_4, (float)L_5))))))
		{
			goto IL_0043;
		}
	}
	{
		// {   pos.x = camWidth - radius;
		float L_6 = __this->get_camWidth_11();
		float L_7 = __this->get_radius_4();
		(&V_0)->set_x_2(((float)il2cpp_codegen_subtract((float)L_6, (float)L_7)));
		// offRight = true;
		__this->set_offRight_8((bool)1);
	}

IL_0043:
	{
		// if (pos.x < -camWidth + radius)
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8 = V_0;
		float L_9 = L_8.get_x_2();
		float L_10 = __this->get_camWidth_11();
		float L_11 = __this->get_radius_4();
		if ((!(((float)L_9) < ((float)((float)il2cpp_codegen_add((float)((-L_10)), (float)L_11))))))
		{
			goto IL_0075;
		}
	}
	{
		// {   pos.x = -camWidth + radius;
		float L_12 = __this->get_camWidth_11();
		float L_13 = __this->get_radius_4();
		(&V_0)->set_x_2(((float)il2cpp_codegen_add((float)((-L_12)), (float)L_13)));
		// offLeft = true;
		__this->set_offLeft_7((bool)1);
	}

IL_0075:
	{
		// if (pos.y > camHeight - radius)
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_14 = V_0;
		float L_15 = L_14.get_y_3();
		float L_16 = __this->get_camHeight_12();
		float L_17 = __this->get_radius_4();
		if ((!(((float)L_15) > ((float)((float)il2cpp_codegen_subtract((float)L_16, (float)L_17))))))
		{
			goto IL_00a5;
		}
	}
	{
		// {   pos.y = camHeight - radius;
		float L_18 = __this->get_camHeight_12();
		float L_19 = __this->get_radius_4();
		(&V_0)->set_y_3(((float)il2cpp_codegen_subtract((float)L_18, (float)L_19)));
		// offUp = true;
		__this->set_offUp_9((bool)1);
	}

IL_00a5:
	{
		// if (pos.y < -camHeight + radius)
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_20 = V_0;
		float L_21 = L_20.get_y_3();
		float L_22 = __this->get_camHeight_12();
		float L_23 = __this->get_radius_4();
		if ((!(((float)L_21) < ((float)((float)il2cpp_codegen_add((float)((-L_22)), (float)L_23))))))
		{
			goto IL_00d7;
		}
	}
	{
		// {   pos.y = -camHeight + radius;
		float L_24 = __this->get_camHeight_12();
		float L_25 = __this->get_radius_4();
		(&V_0)->set_y_3(((float)il2cpp_codegen_add((float)((-L_24)), (float)L_25)));
		// offDown = true;
		__this->set_offDown_10((bool)1);
	}

IL_00d7:
	{
		// isOnScreen = !(offRight || offLeft || offUp || offDown);
		bool L_26 = __this->get_offRight_8();
		G_B9_0 = __this;
		if (L_26)
		{
			G_B12_0 = __this;
			goto IL_00fb;
		}
	}
	{
		bool L_27 = __this->get_offLeft_7();
		G_B10_0 = G_B9_0;
		if (L_27)
		{
			G_B12_0 = G_B9_0;
			goto IL_00fb;
		}
	}
	{
		bool L_28 = __this->get_offUp_9();
		G_B11_0 = G_B10_0;
		if (L_28)
		{
			G_B12_0 = G_B10_0;
			goto IL_00fb;
		}
	}
	{
		bool L_29 = __this->get_offDown_10();
		G_B13_0 = ((((int32_t)L_29) == ((int32_t)0))? 1 : 0);
		G_B13_1 = G_B11_0;
		goto IL_00fc;
	}

IL_00fb:
	{
		G_B13_0 = 0;
		G_B13_1 = G_B12_0;
	}

IL_00fc:
	{
		G_B13_1->set_isOnScreen_6((bool)G_B13_0);
		// if(keepOnScreen && !isOnScreen)
		bool L_30 = __this->get_keepOnScreen_5();
		if (!L_30)
		{
			goto IL_0146;
		}
	}
	{
		bool L_31 = __this->get_isOnScreen_6();
		if (L_31)
		{
			goto IL_0146;
		}
	}
	{
		// transform.position = pos;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_32;
		L_32 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_33 = V_0;
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_32, L_33, /*hidden argument*/NULL);
		// isOnScreen = true;
		__this->set_isOnScreen_6((bool)1);
		// offRight = offLeft = offUp = offDown = false; // reset the off bools to false, when object is meant to stay on screen
		int32_t L_34 = 0;
		V_1 = (bool)L_34;
		__this->set_offDown_10((bool)L_34);
		bool L_35 = V_1;
		bool L_36 = L_35;
		V_1 = L_36;
		__this->set_offUp_9(L_36);
		bool L_37 = V_1;
		bool L_38 = L_37;
		V_1 = L_38;
		__this->set_offLeft_7(L_38);
		bool L_39 = V_1;
		__this->set_offRight_8(L_39);
	}

IL_0146:
	{
		// }//end LateUpdate
		return;
	}
}
// System.Void BoundsCheck::OnDrawGizmos()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BoundsCheck_OnDrawGizmos_mB705FCB321FB9E9B53B83611FFE336C687961097 (BoundsCheck_t4F4AC8554A0272E80ACC121C8CEE14FAA5F3E4CE * __this, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// if (!Application.isPlaying) return; //when the editor is not in playmode exit
		bool L_0;
		L_0 = Application_get_isPlaying_m7BB718D8E58B807184491F64AFF0649517E56567(/*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_0008;
		}
	}
	{
		// if (!Application.isPlaying) return; //when the editor is not in playmode exit
		return;
	}

IL_0008:
	{
		// Vector3 boundSize = new Vector3(camWidth * 2, camHeight * 2, 0.1f); //set the boundary size
		float L_1 = __this->get_camWidth_11();
		float L_2 = __this->get_camHeight_12();
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(&V_0), ((float)il2cpp_codegen_multiply((float)L_1, (float)(2.0f))), ((float)il2cpp_codegen_multiply((float)L_2, (float)(2.0f))), (0.100000001f), /*hidden argument*/NULL);
		// Gizmos.color = Color.yellow;//sets draw color to yellow
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_3;
		L_3 = Color_get_yellow_m9FD4BDABA7E40E136BE57EE7872CEA6B1B2FA1D1(/*hidden argument*/NULL);
		Gizmos_set_color_m937ACC6288C81BAFFC3449FAA03BB4F680F4E74F(L_3, /*hidden argument*/NULL);
		// Gizmos.DrawWireCube(Vector3.zero, boundSize); //set the wire cube based on boundary size
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4;
		L_4 = Vector3_get_zero_m1A8F7993167785F750B6B01762D22C2597C84EF6(/*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_5 = V_0;
		Gizmos_DrawWireCube_mC526244E50C6E5793D4066C9C99023D5FF8424BF(L_4, L_5, /*hidden argument*/NULL);
		// }//end OnDrawGizmos()
		return;
	}
}
// System.Void BoundsCheck::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BoundsCheck__ctor_m286F2F4FAC28BCA6A4F487B0F4512E6CCE728E74 (BoundsCheck_t4F4AC8554A0272E80ACC121C8CEE14FAA5F3E4CE * __this, const RuntimeMethod* method)
{
	{
		// public float radius = 1f;//the radius around the object to keep on screen
		__this->set_radius_4((1.0f));
		// public bool keepOnScreen = true; //does the object need to stay on screen
		__this->set_keepOnScreen_5((bool)1);
		// public bool isOnScreen = true; //is the object on screen
		__this->set_isOnScreen_6((bool)1);
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void EndCanvas::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EndCanvas_Start_mE40DB891A0587C31C0CE042E6AFE837FE653AB63 (EndCanvas_tE65EE714A0EBB79D9AFAA943F71DA85E1FD7EFCC * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// gm = GameManager.GM; //find the game manager
		IL2CPP_RUNTIME_CLASS_INIT(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var);
		GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * L_0;
		L_0 = GameManager_get_GM_mF044B18C61B07C11CC5DF01B430E5C74431C7AA4_inline(/*hidden argument*/NULL);
		__this->set_gm_4(L_0);
		// Debug.Log(gm.endMsg);
		GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * L_1 = __this->get_gm_4();
		String_t* L_2 = L_1->get_endMsg_23();
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(L_2, /*hidden argument*/NULL);
		// endMsgTextbox.text = gm.endMsg;
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_3 = __this->get_endMsgTextbox_5();
		GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * L_4 = __this->get_gm_4();
		String_t* L_5 = L_4->get_endMsg_23();
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_3, L_5);
		// }
		return;
	}
}
// System.Void EndCanvas::GameRestart()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EndCanvas_GameRestart_m8DFFDE9A467D88DB03F38AB3508350AB68689D93 (EndCanvas_tE65EE714A0EBB79D9AFAA943F71DA85E1FD7EFCC * __this, const RuntimeMethod* method)
{
	{
		// gm.StartGame(); //refenece the StartGame method on the game manager
		GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * L_0 = __this->get_gm_4();
		GameManager_StartGame_m6022C5CDD590728691B22E9B87185BFE3D6A8EC1(L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void EndCanvas::GameExit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EndCanvas_GameExit_mFF875A4BCF5A7F3F20C3E951910FC6392CA7C4F5 (EndCanvas_tE65EE714A0EBB79D9AFAA943F71DA85E1FD7EFCC * __this, const RuntimeMethod* method)
{
	{
		// gm.ExitGame(); //refenece the ExitGame method on the game manager
		GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * L_0 = __this->get_gm_4();
		GameManager_ExitGame_m3C47242CB3DE298E84344082AC4D28B586026847(L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void EndCanvas::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EndCanvas__ctor_mB58E3BD4C37A82E182375B2ECAC4D54F92633F98 (EndCanvas_tE65EE714A0EBB79D9AFAA943F71DA85E1FD7EFCC * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// UnityEngine.Vector3 Enemy::get_pos()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Enemy_get_pos_m4D1015F337B0ED26674F1143404393B6AB1997CD (Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627 * __this, const RuntimeMethod* method)
{
	{
		// get { return (this.transform.position); }
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0;
		L_0 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1;
		L_1 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Void Enemy::set_pos(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enemy_set_pos_mAFC1B8C8B290C02649A49441D385DC8F1EC34FD6 (Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method)
{
	{
		// set { this.transform.position = value; }
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0;
		L_0 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1 = ___value0;
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_0, L_1, /*hidden argument*/NULL);
		// set { this.transform.position = value; }
		return;
	}
}
// System.Void Enemy::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enemy_Awake_mF268033197059561A4A0BC3E5F6B83B50D29C861 (Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisBoundsCheck_t4F4AC8554A0272E80ACC121C8CEE14FAA5F3E4CE_mB315A5F068A2CE61C696F5715FF04986B36CE025_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// bndCheck = GetComponent<BoundsCheck>();
		BoundsCheck_t4F4AC8554A0272E80ACC121C8CEE14FAA5F3E4CE * L_0;
		L_0 = Component_GetComponent_TisBoundsCheck_t4F4AC8554A0272E80ACC121C8CEE14FAA5F3E4CE_mB315A5F068A2CE61C696F5715FF04986B36CE025(__this, /*hidden argument*/Component_GetComponent_TisBoundsCheck_t4F4AC8554A0272E80ACC121C8CEE14FAA5F3E4CE_mB315A5F068A2CE61C696F5715FF04986B36CE025_RuntimeMethod_var);
		__this->set_bndCheck_8(L_0);
		// }//end Awake()
		return;
	}
}
// System.Void Enemy::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enemy_Update_mA01EE7AF5D3B97687752E9D22BECB4A3E13F8FD2 (Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Move();
		VirtActionInvoker0::Invoke(4 /* System.Void Enemy::Move() */, __this);
		// if(bndCheck != null && bndCheck.offDown)
		BoundsCheck_t4F4AC8554A0272E80ACC121C8CEE14FAA5F3E4CE * L_0 = __this->get_bndCheck_8();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_0, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_002c;
		}
	}
	{
		BoundsCheck_t4F4AC8554A0272E80ACC121C8CEE14FAA5F3E4CE * L_2 = __this->get_bndCheck_8();
		bool L_3 = L_2->get_offDown_10();
		if (!L_3)
		{
			goto IL_002c;
		}
	}
	{
		// Destroy(gameObject); //destory the object
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_4;
		L_4 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30(L_4, /*hidden argument*/NULL);
	}

IL_002c:
	{
		// }//end Update()
		return;
	}
}
// System.Void Enemy::Move()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enemy_Move_mC861E510D8BD0AC6E1839F87C83349466763F3CA (Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627 * __this, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// Vector3 temPos = pos; //temporay position
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0;
		L_0 = Enemy_get_pos_m4D1015F337B0ED26674F1143404393B6AB1997CD(__this, /*hidden argument*/NULL);
		V_0 = L_0;
		// temPos.y -= speed * Time.deltaTime; //temporay y postion , moving down
		float* L_1 = (&V_0)->get_address_of_y_3();
		float* L_2 = L_1;
		float L_3 = *((float*)L_2);
		float L_4 = __this->get_speed_4();
		float L_5;
		L_5 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		*((float*)L_2) = (float)((float)il2cpp_codegen_subtract((float)L_3, (float)((float)il2cpp_codegen_multiply((float)L_4, (float)L_5))));
		// pos = temPos; //position is equal to tempary positon
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6 = V_0;
		Enemy_set_pos_mAFC1B8C8B290C02649A49441D385DC8F1EC34FD6(__this, L_6, /*hidden argument*/NULL);
		// }//end Move()
		return;
	}
}
// System.Void Enemy::OnCollisionEnter(UnityEngine.Collision)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enemy_OnCollisionEnter_mE8D80BA64A59FF9208672564BF6E8414505C9E35 (Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627 * __this, Collision_tDC11F9B3834FD25DEB8C7DD1C51B635D240BBBF0 * ___collision0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral254D20A8F8D8DA82A92A7594351BDB3332411662);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9A799554A6961E2779E6D34612E5727DFDCA8368);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEEF81429FC800F39A7F38441E70986565B5153BE);
		s_Il2CppMethodInitialized = true;
	}
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * V_0 = NULL;
	{
		// GameObject otherGo = collision.gameObject;
		Collision_tDC11F9B3834FD25DEB8C7DD1C51B635D240BBBF0 * L_0 = ___collision0;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1;
		L_1 = Collision_get_gameObject_m5682F872FD28419AA36F0651CE8B19825A21859D(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		// if(otherGo.tag == "Projectile Hero")
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_2 = V_0;
		String_t* L_3;
		L_3 = GameObject_get_tag_mC21F33D368C18A631040F2887036C678B96ABC33(L_2, /*hidden argument*/NULL);
		bool L_4;
		L_4 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_3, _stringLiteral254D20A8F8D8DA82A92A7594351BDB3332411662, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_0051;
		}
	}
	{
		// Debug.Log("Enemy hit by projectile" + otherGo.name);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_5 = V_0;
		String_t* L_6;
		L_6 = Object_get_name_m0C7BC870ED2F0DC5A2FB09628136CD7D1CB82CFB(L_5, /*hidden argument*/NULL);
		String_t* L_7;
		L_7 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteralEEF81429FC800F39A7F38441E70986565B5153BE, L_6, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(L_7, /*hidden argument*/NULL);
		// otherGo.SetActive(false); //set the project to deactivate and return to pool
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_8 = V_0;
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_8, (bool)0, /*hidden argument*/NULL);
		// GameManager.GM.UpdateScore(score);//add to score
		IL2CPP_RUNTIME_CLASS_INIT(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var);
		GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * L_9;
		L_9 = GameManager_get_GM_mF044B18C61B07C11CC5DF01B430E5C74431C7AA4_inline(/*hidden argument*/NULL);
		int32_t L_10 = __this->get_score_7();
		GameManager_UpdateScore_m54CA912FF9C47361616B3364D7F8056413A91326(L_9, L_10, /*hidden argument*/NULL);
		// Destroy(gameObject);//destory enemy
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_11;
		L_11 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30(L_11, /*hidden argument*/NULL);
		// }
		return;
	}

IL_0051:
	{
		// Debug.Log("Enemy hit by non-projectile" + otherGo.name);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_12 = V_0;
		String_t* L_13;
		L_13 = Object_get_name_m0C7BC870ED2F0DC5A2FB09628136CD7D1CB82CFB(L_12, /*hidden argument*/NULL);
		String_t* L_14;
		L_14 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteral9A799554A6961E2779E6D34612E5727DFDCA8368, L_13, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(L_14, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Enemy::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enemy__ctor_m3C82F8269DE4132408E15B523907244771640734 (Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627 * __this, const RuntimeMethod* method)
{
	{
		// public float speed = 10f;
		__this->set_speed_4((10.0f));
		// public float fireRate = 0.3f;
		__this->set_fireRate_5((0.300000012f));
		// public float health = 10;
		__this->set_health_6((10.0f));
		// public int score = 100;
		__this->set_score_7(((int32_t)100));
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void EnemySpawner::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemySpawner_Start_m6B02CD71F904E1335A54E17E68D8BB2996347397 (EnemySpawner_t02731B295570E1C2E63CE6A23D2A64D1E5985C9E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisBoundsCheck_t4F4AC8554A0272E80ACC121C8CEE14FAA5F3E4CE_mB315A5F068A2CE61C696F5715FF04986B36CE025_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral749F421D5FC0A89FF90F8BB638E8AC9A995121C9);
		s_Il2CppMethodInitialized = true;
	}
	{
		// bndCheck = GetComponent<BoundsCheck>(); //reference to BoundsCheck compement
		BoundsCheck_t4F4AC8554A0272E80ACC121C8CEE14FAA5F3E4CE * L_0;
		L_0 = Component_GetComponent_TisBoundsCheck_t4F4AC8554A0272E80ACC121C8CEE14FAA5F3E4CE_mB315A5F068A2CE61C696F5715FF04986B36CE025(__this, /*hidden argument*/Component_GetComponent_TisBoundsCheck_t4F4AC8554A0272E80ACC121C8CEE14FAA5F3E4CE_mB315A5F068A2CE61C696F5715FF04986B36CE025_RuntimeMethod_var);
		__this->set_bndCheck_7(L_0);
		// Invoke("SpawnEnemy", 1f / enemySpawnPerSecond); //call SpawnEnemy method after time delay
		float L_1 = __this->get_enemySpawnPerSecond_5();
		MonoBehaviour_Invoke_m4AAB759653B1C6FB0653527F4DDC72D1E9162CC4(__this, _stringLiteral749F421D5FC0A89FF90F8BB638E8AC9A995121C9, ((float)((float)(1.0f)/(float)L_1)), /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void EnemySpawner::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemySpawner_Update_mE9B85A2C67A3E6E48ADC531A0426ECF999A4C2A3 (EnemySpawner_t02731B295570E1C2E63CE6A23D2A64D1E5985C9E * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void EnemySpawner::SpawnEnemy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemySpawner_SpawnEnemy_mA3F1CAB7B3424A618FF11301B3698BE1A5D90EBF (EnemySpawner_t02731B295570E1C2E63CE6A23D2A64D1E5985C9E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisBoundsCheck_t4F4AC8554A0272E80ACC121C8CEE14FAA5F3E4CE_mA73D98BBAA2D2A89A8D38D45C5F9F420D3F879E0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m26431AC51B9B7A43FBABD10B4923B72B0C578F33_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral749F421D5FC0A89FF90F8BB638E8AC9A995121C9);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * V_1 = NULL;
	float V_2 = 0.0f;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_3;
	memset((&V_3), 0, sizeof(V_3));
	float V_4 = 0.0f;
	float V_5 = 0.0f;
	{
		// int ndx = Random.Range(0, prefabEnemies.Length);
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_0 = __this->get_prefabEnemies_4();
		int32_t L_1;
		L_1 = Random_Range_m4B3A0037ACA057F33C94508F908546B9317D996A(0, ((int32_t)((int32_t)(((RuntimeArray*)L_0)->max_length))), /*hidden argument*/NULL);
		V_0 = L_1;
		// GameObject go = Instantiate<GameObject>(prefabEnemies[ndx]);
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_2 = __this->get_prefabEnemies_4();
		int32_t L_3 = V_0;
		int32_t L_4 = L_3;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_5 = (L_2)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_4));
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_6;
		L_6 = Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m26431AC51B9B7A43FBABD10B4923B72B0C578F33(L_5, /*hidden argument*/Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m26431AC51B9B7A43FBABD10B4923B72B0C578F33_RuntimeMethod_var);
		V_1 = L_6;
		// float enemyPadding = enemyDefaultPadding;
		float L_7 = __this->get_enemyDefaultPadding_6();
		V_2 = L_7;
		// if (go.GetComponent<BoundsCheck>() != null)
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_8 = V_1;
		BoundsCheck_t4F4AC8554A0272E80ACC121C8CEE14FAA5F3E4CE * L_9;
		L_9 = GameObject_GetComponent_TisBoundsCheck_t4F4AC8554A0272E80ACC121C8CEE14FAA5F3E4CE_mA73D98BBAA2D2A89A8D38D45C5F9F420D3F879E0(L_8, /*hidden argument*/GameObject_GetComponent_TisBoundsCheck_t4F4AC8554A0272E80ACC121C8CEE14FAA5F3E4CE_mA73D98BBAA2D2A89A8D38D45C5F9F420D3F879E0_RuntimeMethod_var);
		bool L_10;
		L_10 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_9, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_10)
		{
			goto IL_0043;
		}
	}
	{
		// { enemyPadding = Mathf.Abs(go.GetComponent<BoundsCheck>().radius); }
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_11 = V_1;
		BoundsCheck_t4F4AC8554A0272E80ACC121C8CEE14FAA5F3E4CE * L_12;
		L_12 = GameObject_GetComponent_TisBoundsCheck_t4F4AC8554A0272E80ACC121C8CEE14FAA5F3E4CE_mA73D98BBAA2D2A89A8D38D45C5F9F420D3F879E0(L_11, /*hidden argument*/GameObject_GetComponent_TisBoundsCheck_t4F4AC8554A0272E80ACC121C8CEE14FAA5F3E4CE_mA73D98BBAA2D2A89A8D38D45C5F9F420D3F879E0_RuntimeMethod_var);
		float L_13 = L_12->get_radius_4();
		float L_14;
		L_14 = fabsf(L_13);
		V_2 = L_14;
	}

IL_0043:
	{
		// Vector3 pos = Vector3.zero;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_15;
		L_15 = Vector3_get_zero_m1A8F7993167785F750B6B01762D22C2597C84EF6(/*hidden argument*/NULL);
		V_3 = L_15;
		// float xMin = -bndCheck.camWidth + enemyPadding;
		BoundsCheck_t4F4AC8554A0272E80ACC121C8CEE14FAA5F3E4CE * L_16 = __this->get_bndCheck_7();
		float L_17 = L_16->get_camWidth_11();
		float L_18 = V_2;
		V_4 = ((float)il2cpp_codegen_add((float)((-L_17)), (float)L_18));
		// float xMax = bndCheck.camWidth - enemyPadding;
		BoundsCheck_t4F4AC8554A0272E80ACC121C8CEE14FAA5F3E4CE * L_19 = __this->get_bndCheck_7();
		float L_20 = L_19->get_camWidth_11();
		float L_21 = V_2;
		V_5 = ((float)il2cpp_codegen_subtract((float)L_20, (float)L_21));
		// pos.x = Random.Range(xMin, xMax);
		float L_22 = V_4;
		float L_23 = V_5;
		float L_24;
		L_24 = Random_Range_mC15372D42A9ABDCAC3DE82E114D60A40C9C311D2(L_22, L_23, /*hidden argument*/NULL);
		(&V_3)->set_x_2(L_24);
		// pos.y = bndCheck.camHeight + enemyPadding;
		BoundsCheck_t4F4AC8554A0272E80ACC121C8CEE14FAA5F3E4CE * L_25 = __this->get_bndCheck_7();
		float L_26 = L_25->get_camHeight_12();
		float L_27 = V_2;
		(&V_3)->set_y_3(((float)il2cpp_codegen_add((float)L_26, (float)L_27)));
		// pos.x = Random.Range(xMin, xMax); //range between the xmin and xmax
		float L_28 = V_4;
		float L_29 = V_5;
		float L_30;
		L_30 = Random_Range_mC15372D42A9ABDCAC3DE82E114D60A40C9C311D2(L_28, L_29, /*hidden argument*/NULL);
		(&V_3)->set_x_2(L_30);
		// pos.y = bndCheck.camHeight + enemyPadding; // height plus padding, off
		BoundsCheck_t4F4AC8554A0272E80ACC121C8CEE14FAA5F3E4CE * L_31 = __this->get_bndCheck_7();
		float L_32 = L_31->get_camHeight_12();
		float L_33 = V_2;
		(&V_3)->set_y_3(((float)il2cpp_codegen_add((float)L_32, (float)L_33)));
		// go.transform.position = pos;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_34 = V_1;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_35;
		L_35 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_34, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_36 = V_3;
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_35, L_36, /*hidden argument*/NULL);
		// Invoke("SpawnEnemy", 1f / enemySpawnPerSecond);
		float L_37 = __this->get_enemySpawnPerSecond_5();
		MonoBehaviour_Invoke_m4AAB759653B1C6FB0653527F4DDC72D1E9162CC4(__this, _stringLiteral749F421D5FC0A89FF90F8BB638E8AC9A995121C9, ((float)((float)(1.0f)/(float)L_37)), /*hidden argument*/NULL);
		// }//end SpawnEnemy()
		return;
	}
}
// System.Void EnemySpawner::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemySpawner__ctor_mED6FECD7E1057991ED710CD104501453BEEDA871 (EnemySpawner_t02731B295570E1C2E63CE6A23D2A64D1E5985C9E * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// GameManager GameManager::get_GM()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * GameManager_get_GM_mF044B18C61B07C11CC5DF01B430E5C74431C7AA4 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// static public GameManager GM { get { return gm; } } //public access to read only gm
		IL2CPP_RUNTIME_CLASS_INIT(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var);
		GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * L_0 = ((GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var))->get_gm_4();
		return L_0;
	}
}
// System.Void GameManager::CheckGameManagerIsInScene()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_CheckGameManagerIsInScene_m31FE5B7548D475237B75CD05D13C888D36A9FC22 (GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (gm == null)
		IL2CPP_RUNTIME_CLASS_INIT(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var);
		GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * L_0 = ((GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var))->get_gm_4();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_0, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_001f;
		}
	}
	{
		// gm = this; //set gm to this gm of the game object
		IL2CPP_RUNTIME_CLASS_INIT(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var);
		((GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var))->set_gm_4(__this);
		// Debug.Log(gm);
		GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * L_2 = ((GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var))->get_gm_4();
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(L_2, /*hidden argument*/NULL);
		// }
		goto IL_002a;
	}

IL_001f:
	{
		// Destroy(this.gameObject); //In this case you need to delete this gm
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_3;
		L_3 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30(L_3, /*hidden argument*/NULL);
	}

IL_002a:
	{
		// DontDestroyOnLoad(this); //Do not delete the GameManager when scenes load
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_DontDestroyOnLoad_m03007A68ABBA4CCD8C27B944964983395E7640F9(__this, /*hidden argument*/NULL);
		// Debug.Log(gm);
		IL2CPP_RUNTIME_CLASS_INIT(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var);
		GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * L_4 = ((GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var))->get_gm_4();
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(L_4, /*hidden argument*/NULL);
		// }//end CheckGameManagerIsInScene()
		return;
	}
}
// System.Int32 GameManager::get_HighScore()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GameManager_get_HighScore_mCE8DDEE2A8C509DC05B997E126968B03D35B1FAE (GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public int HighScore { get { return highScore; } set { highScore = value; } }//access to private variable highScore [get/set methods]
		IL2CPP_RUNTIME_CLASS_INIT(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var);
		int32_t L_0 = ((GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var))->get_highScore_11();
		return L_0;
	}
}
// System.Void GameManager::set_HighScore(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_set_HighScore_mCF012EF7810F92DC1386B1ABEA90959492396B5A (GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public int HighScore { get { return highScore; } set { highScore = value; } }//access to private variable highScore [get/set methods]
		int32_t L_0 = ___value0;
		IL2CPP_RUNTIME_CLASS_INIT(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var);
		((GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var))->set_highScore_11(L_0);
		// public int HighScore { get { return highScore; } set { highScore = value; } }//access to private variable highScore [get/set methods]
		return;
	}
}
// System.Int32 GameManager::get_Lives()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GameManager_get_Lives_m71273C4F0EAB39C5FD4CC98D503FECA962C6F6C3 (GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public int Lives { get { return lives; } set { lives = value; } }//access to static variable lives [get/set methods]
		IL2CPP_RUNTIME_CLASS_INIT(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var);
		int32_t L_0 = ((GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var))->get_lives_18();
		return L_0;
	}
}
// System.Void GameManager::set_Lives(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_set_Lives_mEF4D95FFC5F2582DC7DD66B3E82244F69D8FE33B (GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public int Lives { get { return lives; } set { lives = value; } }//access to static variable lives [get/set methods]
		int32_t L_0 = ___value0;
		IL2CPP_RUNTIME_CLASS_INIT(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var);
		((GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var))->set_lives_18(L_0);
		// public int Lives { get { return lives; } set { lives = value; } }//access to static variable lives [get/set methods]
		return;
	}
}
// System.Int32 GameManager::get_Score()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GameManager_get_Score_mF57A9A41AE4A9761FE592CACE4D013791D285653 (GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public int Score { get { return score; } set { score = value; } }//access to static variable score [get/set methods]
		IL2CPP_RUNTIME_CLASS_INIT(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var);
		int32_t L_0 = ((GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var))->get_score_19();
		return L_0;
	}
}
// System.Void GameManager::set_Score(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_set_Score_mB5E2B753E6622169154800F2194772873C6A503D (GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public int Score { get { return score; } set { score = value; } }//access to static variable score [get/set methods]
		int32_t L_0 = ___value0;
		IL2CPP_RUNTIME_CLASS_INIT(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var);
		((GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var))->set_score_19(L_0);
		// public int Score { get { return score; } set { score = value; } }//access to static variable score [get/set methods]
		return;
	}
}
// System.Void GameManager::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_Awake_m22F42B2A82708B10F652CAD8F2E0A4767110FF30 (GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// CheckGameManagerIsInScene();
		GameManager_CheckGameManagerIsInScene_m31FE5B7548D475237B75CD05D13C888D36A9FC22(__this, /*hidden argument*/NULL);
		// currentSceneName = UnityEngine.SceneManagement.SceneManager.GetActiveScene().name;
		IL2CPP_RUNTIME_CLASS_INIT(SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE  L_0;
		L_0 = SceneManager_GetActiveScene_mB9A5037FFB576B2432D0BFEF6A161B7C4C1921A4(/*hidden argument*/NULL);
		V_0 = L_0;
		String_t* L_1;
		L_1 = Scene_get_name_m38F195D7CA6417FED310C23E4D8E86150C7835B8((Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE *)(&V_0), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var);
		((GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var))->set_currentSceneName_29(L_1);
		// GetHighScore();
		GameManager_GetHighScore_mDFF413F70B2F166791CBBD75BF93D57539BD9859(__this, /*hidden argument*/NULL);
		// }//end Awake()
		return;
	}
}
// System.Void GameManager::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_Start_m26461AEF27E44DB8FECCBC19D6C9E228B658BF8E (GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisAudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B_mCC3B7A679ECE504BFAF8C70C4EF527511F46902F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (backgroundMusicClip != null)
		AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * L_0 = __this->get_backgroundMusicClip_12();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_0, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0056;
		}
	}
	{
		// audioSource = gm.GetComponent<AudioSource>(); //reference to the Audio Source Component
		IL2CPP_RUNTIME_CLASS_INIT(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var);
		GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * L_2 = ((GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var))->get_gm_4();
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_3;
		L_3 = Component_GetComponent_TisAudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B_mCC3B7A679ECE504BFAF8C70C4EF527511F46902F(L_2, /*hidden argument*/Component_GetComponent_TisAudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B_mCC3B7A679ECE504BFAF8C70C4EF527511F46902F_RuntimeMethod_var);
		__this->set_audioSource_13(L_3);
		// audioSource.volume = 0.5f; //the volume level of the sound
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_4 = __this->get_audioSource_13();
		AudioSource_set_volume_m37B6B2EACA7C2C18ABEE55EE5EA404085E94EE58(L_4, (0.5f), /*hidden argument*/NULL);
		// audioSource.clip = backgroundMusicClip; //the music clip to play
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_5 = __this->get_audioSource_13();
		AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * L_6 = __this->get_backgroundMusicClip_12();
		AudioSource_set_clip_mD1F50F7BA6EA3AF25B4922473352C5180CFF7B2B(L_5, L_6, /*hidden argument*/NULL);
		// audioSource.loop = true; //loop the music clip
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_7 = __this->get_audioSource_13();
		AudioSource_set_loop_mDD9FB746D8A7392472E5484EEF8D0A667993E3E0(L_7, (bool)1, /*hidden argument*/NULL);
		// audioSource.Play(); //play the clip
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_8 = __this->get_audioSource_13();
		AudioSource_Play_mED16664B8F8F3E4D68785C8C00FC96C4DF053AE1(L_8, /*hidden argument*/NULL);
	}

IL_0056:
	{
		// if (currentSceneName != startScene) { SetGameState(GameState.Testing); }//set the game state for testing }
		IL2CPP_RUNTIME_CLASS_INIT(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var);
		String_t* L_9 = ((GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var))->get_currentSceneName_29();
		String_t* L_10 = __this->get_startScene_24();
		bool L_11;
		L_11 = String_op_Inequality_mDDA2DDED3E7EF042987EB7180EE3E88105F0AAE2(L_9, L_10, /*hidden argument*/NULL);
		if (!L_11)
		{
			goto IL_006f;
		}
	}
	{
		// if (currentSceneName != startScene) { SetGameState(GameState.Testing); }//set the game state for testing }
		GameManager_SetGameState_m4A3373138A9A26FA064BCA104F59933F8982FA28_inline(__this, 6, /*hidden argument*/NULL);
	}

IL_006f:
	{
		// }//end Start()
		return;
	}
}
// System.Void GameManager::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_Update_mC9303BA7C3117BD861F49F8E36151CC52117E6C1 (GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameState_t220CA73AF42CC54408408696DBFFAB424F309FAE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBCB70A4EDC367A2A3FFA1642263C970A5C4B91EF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD0ED343195A5AF114483C53DB9F3F7FF03CABB07);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (Input.GetKey("escape")) { ExitGame(); }
		bool L_0;
		L_0 = Input_GetKey_m77E2F3719EC63690632731872A691FF6A27C589C(_stringLiteralD0ED343195A5AF114483C53DB9F3F7FF03CABB07, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0012;
		}
	}
	{
		// if (Input.GetKey("escape")) { ExitGame(); }
		GameManager_ExitGame_m3C47242CB3DE298E84344082AC4D28B586026847(__this, /*hidden argument*/NULL);
	}

IL_0012:
	{
		// CheckGameState();
		GameManager_CheckGameState_mE2F499B3D31C53F265C85A7DA689F2CC29364EED(__this, /*hidden argument*/NULL);
		// Debug.Log("Game State " + gameState);
		int32_t* L_1 = __this->get_address_of_gameState_5();
		RuntimeObject * L_2 = Box(GameState_t220CA73AF42CC54408408696DBFFAB424F309FAE_il2cpp_TypeInfo_var, L_1);
		String_t* L_3;
		L_3 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_2);
		*L_1 = *(int32_t*)UnBox(L_2);
		String_t* L_4;
		L_4 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteralBCB70A4EDC367A2A3FFA1642263C970A5C4B91EF, L_3, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(L_4, /*hidden argument*/NULL);
		// }//end Update
		return;
	}
}
// System.Void GameManager::SetGameState(GameState)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_SetGameState_m4A3373138A9A26FA064BCA104F59933F8982FA28 (GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * __this, int32_t ___state0, const RuntimeMethod* method)
{
	{
		// this.gameState = state;
		int32_t L_0 = ___state0;
		__this->set_gameState_5(L_0);
		// }//end SetGameState()
		return;
	}
}
// System.Void GameManager::CheckGameState()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_CheckGameState_mE2F499B3D31C53F265C85A7DA689F2CC29364EED (GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA684BD7A04CC43B4419D97C0AF2E584A9AE15078);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// switch (gameState)
		int32_t L_0 = __this->get_gameState_5();
		V_0 = L_0;
		int32_t L_1 = V_0;
		switch (L_1)
		{
			case 0:
			{
				goto IL_0027;
			}
			case 1:
			{
				goto IL_0034;
			}
			case 2:
			{
				goto IL_0043;
			}
			case 3:
			{
				goto IL_0060;
			}
			case 4:
			{
				goto IL_007f;
			}
			case 5:
			{
				goto IL_009e;
			}
		}
	}
	{
		goto IL_008c;
	}

IL_0027:
	{
		// currentLives = defaultsLives; //set current lives to default (inital) value
		int32_t L_2 = __this->get_defaultsLives_14();
		__this->set_currentLives_15(L_2);
		// break;
		return;
	}

IL_0034:
	{
		// if (TestGameManager) { RunTests(); }
		bool L_3 = __this->get_TestGameManager_30();
		if (!L_3)
		{
			goto IL_009e;
		}
	}
	{
		// if (TestGameManager) { RunTests(); }
		GameManager_RunTests_mDE3BF2AB9D5D80C8B744A6C3FA1026B63047F04B(__this, /*hidden argument*/NULL);
		// break;
		return;
	}

IL_0043:
	{
		// endMsg = winMessage; //set win message
		String_t* L_4 = __this->get_winMessage_22();
		__this->set_endMsg_23(L_4);
		// Debug.Log("beat level");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(_stringLiteralA684BD7A04CC43B4419D97C0AF2E584A9AE15078, /*hidden argument*/NULL);
		// NextLevel(); //check for the next level
		GameManager_NextLevel_mE1B82F94BCDA9D457AB1B1F266414B47870F7852(__this, /*hidden argument*/NULL);
		// break;
		return;
	}

IL_0060:
	{
		// currentLives = defaultsLives; //reset current lives to default (inital) value
		int32_t L_5 = __this->get_defaultsLives_14();
		__this->set_currentLives_15(L_5);
		// endMsg = looseMessage; //set loose message
		String_t* L_6 = __this->get_looseMessage_21();
		__this->set_endMsg_23(L_6);
		// GameOver(); //move to game over
		GameManager_GameOver_m402A112370B58EBA3B2171FABC09467E1ED28E9A(__this, /*hidden argument*/NULL);
		// break;
		return;
	}

IL_007f:
	{
		// currentLives = defaultsLives; //set current lives to default (inital) value
		int32_t L_7 = __this->get_defaultsLives_14();
		__this->set_currentLives_15(L_7);
		// break;
		return;
	}

IL_008c:
	{
		// currentLives = defaultsLives; //set current lives to default (inital) value
		int32_t L_8 = __this->get_defaultsLives_14();
		__this->set_currentLives_15(L_8);
		// SetDefaultGameStats(); //Run the default game stats to playtest
		GameManager_SetDefaultGameStats_m1C9A4FA1F15820B8F81FCFF3887B5ADE35DDD555(__this, /*hidden argument*/NULL);
	}

IL_009e:
	{
		// }//end CheckGameState()
		return;
	}
}
// System.Void GameManager::StartGame()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_StartGame_m6022C5CDD590728691B22E9B87185BFE3D6A8EC1 (GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// gameLevelsCount = 1; //set the count for the game levels
		__this->set_gameLevelsCount_27(1);
		// loadLevel = gameLevelsCount - 1; //the level from the array
		int32_t L_0 = __this->get_gameLevelsCount_27();
		__this->set_loadLevel_28(((int32_t)il2cpp_codegen_subtract((int32_t)L_0, (int32_t)1)));
		// SceneManager.LoadScene(gameLevels[loadLevel]);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_1 = __this->get_gameLevels_26();
		int32_t L_2 = __this->get_loadLevel_28();
		int32_t L_3 = L_2;
		String_t* L_4 = (L_1)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_3));
		IL2CPP_RUNTIME_CLASS_INIT(SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m7DAF30213E99396ECBDB1BD40CC34CCF36902092(L_4, /*hidden argument*/NULL);
		// SetDefaultGameStats(); // the game stats defaults
		GameManager_SetDefaultGameStats_m1C9A4FA1F15820B8F81FCFF3887B5ADE35DDD555(__this, /*hidden argument*/NULL);
		// }//end StartGame()
		return;
	}
}
// System.Void GameManager::SetDefaultGameStats()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_SetDefaultGameStats_m1C9A4FA1F15820B8F81FCFF3887B5ADE35DDD555 (GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral79B0BC20C4F38EB2142290F5EFAB4EF138899A9B);
		s_Il2CppMethodInitialized = true;
	}
	Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// currentSceneName = UnityEngine.SceneManagement.SceneManager.GetActiveScene().name;
		IL2CPP_RUNTIME_CLASS_INIT(SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE  L_0;
		L_0 = SceneManager_GetActiveScene_mB9A5037FFB576B2432D0BFEF6A161B7C4C1921A4(/*hidden argument*/NULL);
		V_0 = L_0;
		String_t* L_1;
		L_1 = Scene_get_name_m38F195D7CA6417FED310C23E4D8E86150C7835B8((Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE *)(&V_0), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var);
		((GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var))->set_currentSceneName_29(L_1);
		// lives = currentLives; //set the number of lives
		int32_t L_2 = __this->get_currentLives_15();
		((GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var))->set_lives_18(L_2);
		// score = 0; //set starting score
		((GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var))->set_score_19(0);
		// if (recordHighScore) //if we are recording highscore
		bool L_3 = __this->get_recordHighScore_9();
		if (!L_3)
		{
			goto IL_0052;
		}
	}
	{
		// if (highScore <= defaultHighScore)
		IL2CPP_RUNTIME_CLASS_INIT(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var);
		int32_t L_4 = ((GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var))->get_highScore_11();
		int32_t L_5 = __this->get_defaultHighScore_10();
		if ((((int32_t)L_4) > ((int32_t)L_5)))
		{
			goto IL_0052;
		}
	}
	{
		// highScore = defaultHighScore; //set the high score to defulat
		int32_t L_6 = __this->get_defaultHighScore_10();
		IL2CPP_RUNTIME_CLASS_INIT(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var);
		((GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var))->set_highScore_11(L_6);
		// PlayerPrefs.SetInt("HighScore", highScore); //update high score PlayerPref
		int32_t L_7 = ((GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var))->get_highScore_11();
		PlayerPrefs_SetInt_m0C5C977E960B9CA8F9AB73AF4129C3DCABD067B6(_stringLiteral79B0BC20C4F38EB2142290F5EFAB4EF138899A9B, L_7, /*hidden argument*/NULL);
	}

IL_0052:
	{
		// endMsg = defaultEndMessage; //set the end message default
		String_t* L_8 = __this->get_defaultEndMessage_20();
		__this->set_endMsg_23(L_8);
		// playerWon = false; //set player winning condition to false
		__this->set_playerWon_33((bool)0);
		// SetGameState(GameState.Playing);//set the game state to playing
		GameManager_SetGameState_m4A3373138A9A26FA064BCA104F59933F8982FA28_inline(__this, 1, /*hidden argument*/NULL);
		// }//end SetDefaultGameStats()
		return;
	}
}
// System.Void GameManager::ExitGame()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_ExitGame_m3C47242CB3DE298E84344082AC4D28B586026847 (GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0F8B36544ED910BDAF860DA9FBA5A43D52BAC802);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Application.Quit();
		Application_Quit_m8D720E5092786C2EE32310D85FE61C253D3B1F2A(/*hidden argument*/NULL);
		// Debug.Log("Exited Game");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(_stringLiteral0F8B36544ED910BDAF860DA9FBA5A43D52BAC802, /*hidden argument*/NULL);
		// }//end ExitGame()
		return;
	}
}
// System.Void GameManager::GameOver()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_GameOver_m402A112370B58EBA3B2171FABC09467E1ED28E9A (GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SetGameState(GameState.GameOver);//set the game state to Game Over
		GameManager_SetGameState_m4A3373138A9A26FA064BCA104F59933F8982FA28_inline(__this, 4, /*hidden argument*/NULL);
		// SceneManager.LoadScene(gameOverScene); //load the game over scene
		String_t* L_0 = __this->get_gameOverScene_25();
		IL2CPP_RUNTIME_CLASS_INIT(SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m7DAF30213E99396ECBDB1BD40CC34CCF36902092(L_0, /*hidden argument*/NULL);
		// }//end GameOver()
		return;
	}
}
// System.Void GameManager::NextLevel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_NextLevel_mE1B82F94BCDA9D457AB1B1F266414B47870F7852 (GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (gameLevelsCount < gameLevels.Length)
		int32_t L_0 = __this->get_gameLevelsCount_27();
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_1 = __this->get_gameLevels_26();
		if ((((int32_t)L_0) >= ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_1)->max_length))))))
		{
			goto IL_0046;
		}
	}
	{
		// gameLevelsCount++; //add to level count for next level
		int32_t L_2 = __this->get_gameLevelsCount_27();
		__this->set_gameLevelsCount_27(((int32_t)il2cpp_codegen_add((int32_t)L_2, (int32_t)1)));
		// loadLevel = gameLevelsCount - 1; //find the next level in the array
		int32_t L_3 = __this->get_gameLevelsCount_27();
		__this->set_loadLevel_28(((int32_t)il2cpp_codegen_subtract((int32_t)L_3, (int32_t)1)));
		// SceneManager.LoadScene(gameLevels[loadLevel]); //load next level
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_4 = __this->get_gameLevels_26();
		int32_t L_5 = __this->get_loadLevel_28();
		int32_t L_6 = L_5;
		String_t* L_7 = (L_4)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_6));
		IL2CPP_RUNTIME_CLASS_INIT(SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m7DAF30213E99396ECBDB1BD40CC34CCF36902092(L_7, /*hidden argument*/NULL);
		// SetGameState(GameState.Playing);//set the game state to playing
		GameManager_SetGameState_m4A3373138A9A26FA064BCA104F59933F8982FA28_inline(__this, 1, /*hidden argument*/NULL);
		// }
		return;
	}

IL_0046:
	{
		// GameOver();
		GameManager_GameOver_m402A112370B58EBA3B2171FABC09467E1ED28E9A(__this, /*hidden argument*/NULL);
		// }//end NextLevel()
		return;
	}
}
// System.Void GameManager::LostLife()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_LostLife_m603C8F61ECAC1533CB7ADA99334A85151F97CCF6 (GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA242E0EF74FB38B86DC60AEF5C5EF280284E5543);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (lives == 1) //if there is one life left and it is lost
		IL2CPP_RUNTIME_CLASS_INIT(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var);
		int32_t L_0 = ((GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var))->get_lives_18();
		if ((!(((uint32_t)L_0) == ((uint32_t)1))))
		{
			goto IL_0010;
		}
	}
	{
		// SetGameState(GameState.LostLevel); //set the state to Lost Level
		GameManager_SetGameState_m4A3373138A9A26FA064BCA104F59933F8982FA28_inline(__this, 3, /*hidden argument*/NULL);
		// }
		return;
	}

IL_0010:
	{
		// lives--; //subtract from lives reset level lost
		IL2CPP_RUNTIME_CLASS_INIT(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var);
		int32_t L_1 = ((GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var))->get_lives_18();
		((GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var))->set_lives_18(((int32_t)il2cpp_codegen_subtract((int32_t)L_1, (int32_t)1)));
		// if (resetLostLevel){
		bool L_2 = __this->get_resetLostLevel_16();
		if (!L_2)
		{
			goto IL_0040;
		}
	}
	{
		// currentLives = lives; //set current lives to remaining for level reload
		IL2CPP_RUNTIME_CLASS_INIT(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var);
		int32_t L_3 = ((GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var))->get_lives_18();
		__this->set_currentLives_15(L_3);
		// Invoke("StartGame", gameRestartDelay); //restart the level
		float L_4 = __this->get_gameRestartDelay_17();
		MonoBehaviour_Invoke_m4AAB759653B1C6FB0653527F4DDC72D1E9162CC4(__this, _stringLiteralA242E0EF74FB38B86DC60AEF5C5EF280284E5543, L_4, /*hidden argument*/NULL);
	}

IL_0040:
	{
		// }//end LostLife()
		return;
	}
}
// System.Void GameManager::UpdateScore(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_UpdateScore_m54CA912FF9C47361616B3364D7F8056413A91326 (GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * __this, int32_t ___point0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral79B0BC20C4F38EB2142290F5EFAB4EF138899A9B);
		s_Il2CppMethodInitialized = true;
	}
	{
		// score += point;
		IL2CPP_RUNTIME_CLASS_INIT(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var);
		int32_t L_0 = ((GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var))->get_score_19();
		int32_t L_1 = ___point0;
		((GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var))->set_score_19(((int32_t)il2cpp_codegen_add((int32_t)L_0, (int32_t)L_1)));
		// if (score > highScore)
		int32_t L_2 = ((GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var))->get_score_19();
		int32_t L_3 = ((GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var))->get_highScore_11();
		if ((((int32_t)L_2) <= ((int32_t)L_3)))
		{
			goto IL_0031;
		}
	}
	{
		// highScore = score; //set the high score to the current score
		IL2CPP_RUNTIME_CLASS_INIT(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var);
		int32_t L_4 = ((GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var))->get_score_19();
		((GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var))->set_highScore_11(L_4);
		// PlayerPrefs.SetInt("HighScore", highScore); //set the playerPref for the high score
		int32_t L_5 = ((GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var))->get_highScore_11();
		PlayerPrefs_SetInt_m0C5C977E960B9CA8F9AB73AF4129C3DCABD067B6(_stringLiteral79B0BC20C4F38EB2142290F5EFAB4EF138899A9B, L_5, /*hidden argument*/NULL);
	}

IL_0031:
	{
		// }//end CheckScore()
		return;
	}
}
// System.Void GameManager::GetHighScore()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_GetHighScore_mDFF413F70B2F166791CBBD75BF93D57539BD9859 (GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5B163F927926137A826C9CBF21412F7698963A88);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral79B0BC20C4F38EB2142290F5EFAB4EF138899A9B);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (PlayerPrefs.HasKey("HighScore"))
		bool L_0;
		L_0 = PlayerPrefs_HasKey_m48BE5886380B51AB495B91C9A26115B7CB958A92(_stringLiteral79B0BC20C4F38EB2142290F5EFAB4EF138899A9B, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0025;
		}
	}
	{
		// Debug.Log("Has Key");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(_stringLiteral5B163F927926137A826C9CBF21412F7698963A88, /*hidden argument*/NULL);
		// highScore = PlayerPrefs.GetInt("HighScore"); //set the high score to the saved high score
		int32_t L_1;
		L_1 = PlayerPrefs_GetInt_m6BCF9F844298D1810A68BAF23ECBA68C6960A986(_stringLiteral79B0BC20C4F38EB2142290F5EFAB4EF138899A9B, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var);
		((GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var))->set_highScore_11(L_1);
	}

IL_0025:
	{
		// PlayerPrefs.SetInt("HighScore", highScore); //set the playerPref for the high score
		IL2CPP_RUNTIME_CLASS_INIT(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var);
		int32_t L_2 = ((GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var))->get_highScore_11();
		PlayerPrefs_SetInt_m0C5C977E960B9CA8F9AB73AF4129C3DCABD067B6(_stringLiteral79B0BC20C4F38EB2142290F5EFAB4EF138899A9B, L_2, /*hidden argument*/NULL);
		// }//end GetHighScore()
		return;
	}
}
// System.Void GameManager::RunTests()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_RunTests_mDE3BF2AB9D5D80C8B744A6C3FA1026B63047F04B (GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * __this, const RuntimeMethod* method)
{
	{
		// if (nextLevel) { nextLevel = false; NextLevel(); }
		bool L_0 = __this->get_nextLevel_32();
		if (!L_0)
		{
			goto IL_0015;
		}
	}
	{
		// if (nextLevel) { nextLevel = false; NextLevel(); }
		__this->set_nextLevel_32((bool)0);
		// if (nextLevel) { nextLevel = false; NextLevel(); }
		GameManager_NextLevel_mE1B82F94BCDA9D457AB1B1F266414B47870F7852(__this, /*hidden argument*/NULL);
	}

IL_0015:
	{
		// if (levelLost) { levelLost = false; LostLife(); }
		bool L_1 = __this->get_levelLost_31();
		if (!L_1)
		{
			goto IL_002a;
		}
	}
	{
		// if (levelLost) { levelLost = false; LostLife(); }
		__this->set_levelLost_31((bool)0);
		// if (levelLost) { levelLost = false; LostLife(); }
		GameManager_LostLife_m603C8F61ECAC1533CB7ADA99334A85151F97CCF6(__this, /*hidden argument*/NULL);
	}

IL_002a:
	{
		// if (playerWon) { playerWon = false;  SetGameState(GameState.BeatLevel); }
		bool L_2 = __this->get_playerWon_33();
		if (!L_2)
		{
			goto IL_0040;
		}
	}
	{
		// if (playerWon) { playerWon = false;  SetGameState(GameState.BeatLevel); }
		__this->set_playerWon_33((bool)0);
		// if (playerWon) { playerWon = false;  SetGameState(GameState.BeatLevel); }
		GameManager_SetGameState_m4A3373138A9A26FA064BCA104F59933F8982FA28_inline(__this, 2, /*hidden argument*/NULL);
	}

IL_0040:
	{
		// }//end RunTest()
		return;
	}
}
// System.Void GameManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager__ctor_mE8666F6D0CA9C31E16B719F79780DC4B0245B64D (GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral48D78BCC75F33F659D566D84AE805896457204F9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8FB5763C9088E80B8869D48CDF95B339F63AE27A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9A412622D8FC840298CC336BDFB62D08756A40FA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA5A02C933DC61A4C5547CD26AAB7E129D0EC50A6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC3FF3A0E12335D624641F6F9E7F443765209B583);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF984C9674EDCA2C39EFAD66081B054F073C3815B);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public string gameTitle = "Untitled Game";  //name of the game
		__this->set_gameTitle_6(_stringLiteralC3FF3A0E12335D624641F6F9E7F443765209B583);
		// public string gameCredits = "Made by Me"; //game creator(s)
		__this->set_gameCredits_7(_stringLiteral48D78BCC75F33F659D566D84AE805896457204F9);
		// public string copyrightDate = "Copyright " + thisDay; //date cretaed
		IL2CPP_RUNTIME_CLASS_INIT(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var);
		String_t* L_0 = ((GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var))->get_thisDay_34();
		String_t* L_1;
		L_1 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteral8FB5763C9088E80B8869D48CDF95B339F63AE27A, L_0, /*hidden argument*/NULL);
		__this->set_copyrightDate_8(L_1);
		// private int defaultHighScore = 1000;
		__this->set_defaultHighScore_10(((int32_t)1000));
		// public float gameRestartDelay = 2f; //the amount of delay before restart
		__this->set_gameRestartDelay_17((2.0f));
		// public string defaultEndMessage = "Game Over";//the end screen message, depends on winning outcome
		__this->set_defaultEndMessage_20(_stringLiteralF984C9674EDCA2C39EFAD66081B054F073C3815B);
		// public string looseMessage = "You Loose"; //Message if player looses
		__this->set_looseMessage_21(_stringLiteral9A412622D8FC840298CC336BDFB62D08756A40FA);
		// public string winMessage = "You Win"; //Message if player wins
		__this->set_winMessage_22(_stringLiteralA5A02C933DC61A4C5547CD26AAB7E129D0EC50A6);
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GameManager::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager__cctor_m0872BB5B2E20B9183F004EB81D5129608114D285 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDF1296B24672A38692CC663E858166C834F0ABD9);
		s_Il2CppMethodInitialized = true;
	}
	DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// static public int highScore = 1000; // the default High Score
		((GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var))->set_highScore_11(((int32_t)1000));
		// private static string thisDay = System.DateTime.Now.ToString("yyyy"); //today's date as string
		IL2CPP_RUNTIME_CLASS_INIT(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_il2cpp_TypeInfo_var);
		DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  L_0;
		L_0 = DateTime_get_Now_mCAC695993D6E2C57B900C83BEF3F8B18BC4EBC2C(/*hidden argument*/NULL);
		V_0 = L_0;
		String_t* L_1;
		L_1 = DateTime_ToString_m19ECEFF7BA22ED4425F7562A82A1C2308E934204((DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 *)(&V_0), _stringLiteralDF1296B24672A38692CC663E858166C834F0ABD9, /*hidden argument*/NULL);
		((GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var))->set_thisDay_34(L_1);
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
// System.Void HUDCanvas::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HUDCanvas_Start_m9E4A3E0897BCF382B03FC722E45E0298B7966E84 (HUDCanvas_t92770F90E8E786A01C1D48AC7281191FE50660CE * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// gm = GameManager.GM; //find the game manager
		IL2CPP_RUNTIME_CLASS_INIT(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var);
		GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * L_0;
		L_0 = GameManager_get_GM_mF044B18C61B07C11CC5DF01B430E5C74431C7AA4_inline(/*hidden argument*/NULL);
		__this->set_gm_4(L_0);
		// level = gm.gameLevelsCount;
		GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * L_1 = __this->get_gm_4();
		int32_t L_2 = L_1->get_gameLevelsCount_27();
		__this->set_level_9(L_2);
		// totalLevels = gm.gameLevels.Length;
		GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * L_3 = __this->get_gm_4();
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_4 = L_3->get_gameLevels_26();
		__this->set_totalLevels_10(((int32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))));
		// SetHUD();
		HUDCanvas_SetHUD_mEECBCBA67CDB292AC22F9BB2E7F03AB22D6DD95F(__this, /*hidden argument*/NULL);
		// }//end Start
		return;
	}
}
// System.Void HUDCanvas::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HUDCanvas_Update_m72982540D336A7DDB82C0E1F6086E11C02833901 (HUDCanvas_t92770F90E8E786A01C1D48AC7281191FE50660CE * __this, const RuntimeMethod* method)
{
	{
		// GetGameStats();
		HUDCanvas_GetGameStats_m5493FAA18C947194051E5F53FD046C6ED41DEE69(__this, /*hidden argument*/NULL);
		// SetHUD();
		HUDCanvas_SetHUD_mEECBCBA67CDB292AC22F9BB2E7F03AB22D6DD95F(__this, /*hidden argument*/NULL);
		// }//end Update()
		return;
	}
}
// System.Void HUDCanvas::GetGameStats()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HUDCanvas_GetGameStats_m5493FAA18C947194051E5F53FD046C6ED41DEE69 (HUDCanvas_t92770F90E8E786A01C1D48AC7281191FE50660CE * __this, const RuntimeMethod* method)
{
	{
		// lives = gm.Lives;
		GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * L_0 = __this->get_gm_4();
		int32_t L_1;
		L_1 = GameManager_get_Lives_m71273C4F0EAB39C5FD4CC98D503FECA962C6F6C3_inline(L_0, /*hidden argument*/NULL);
		__this->set_lives_11(L_1);
		// score = gm.Score;
		GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * L_2 = __this->get_gm_4();
		int32_t L_3;
		L_3 = GameManager_get_Score_mF57A9A41AE4A9761FE592CACE4D013791D285653_inline(L_2, /*hidden argument*/NULL);
		__this->set_score_12(L_3);
		// highscore = gm.HighScore;
		GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * L_4 = __this->get_gm_4();
		int32_t L_5;
		L_5 = GameManager_get_HighScore_mCE8DDEE2A8C509DC05B997E126968B03D35B1FAE_inline(L_4, /*hidden argument*/NULL);
		__this->set_highscore_13(L_5);
		// }
		return;
	}
}
// System.Void HUDCanvas::SetHUD()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HUDCanvas_SetHUD_mEECBCBA67CDB292AC22F9BB2E7F03AB22D6DD95F (HUDCanvas_t92770F90E8E786A01C1D48AC7281191FE50660CE * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5A0D010563EAFA6C9073D35EB9EF83C988F91B75);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral86BBAACC00198DBB3046818AD3FC2AA10AE48DE1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9BF311279D79AF2F94F211FEDA661565729FDF4C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA68AF01D35B427079781DE3A8B2923BD14263BE3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAC59E8085DCC2CAD244235A2E4E762BBD3139D29);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (levelTextbox) { levelTextbox.text = "Level " + level + "/" + totalLevels; }
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_0 = __this->get_levelTextbox_5();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499(L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_003d;
		}
	}
	{
		// if (levelTextbox) { levelTextbox.text = "Level " + level + "/" + totalLevels; }
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_2 = __this->get_levelTextbox_5();
		int32_t* L_3 = __this->get_address_of_level_9();
		String_t* L_4;
		L_4 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)L_3, /*hidden argument*/NULL);
		int32_t* L_5 = __this->get_address_of_totalLevels_10();
		String_t* L_6;
		L_6 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)L_5, /*hidden argument*/NULL);
		String_t* L_7;
		L_7 = String_Concat_m37A5BF26F8F8F1892D60D727303B23FB604FEE78(_stringLiteralA68AF01D35B427079781DE3A8B2923BD14263BE3, L_4, _stringLiteral86BBAACC00198DBB3046818AD3FC2AA10AE48DE1, L_6, /*hidden argument*/NULL);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_2, L_7);
	}

IL_003d:
	{
		// if (livesTextbox) { livesTextbox.text = "Lives " + lives; }
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_8 = __this->get_livesTextbox_6();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_9;
		L_9 = Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499(L_8, /*hidden argument*/NULL);
		if (!L_9)
		{
			goto IL_006a;
		}
	}
	{
		// if (livesTextbox) { livesTextbox.text = "Lives " + lives; }
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_10 = __this->get_livesTextbox_6();
		int32_t* L_11 = __this->get_address_of_lives_11();
		String_t* L_12;
		L_12 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)L_11, /*hidden argument*/NULL);
		String_t* L_13;
		L_13 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteral9BF311279D79AF2F94F211FEDA661565729FDF4C, L_12, /*hidden argument*/NULL);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_10, L_13);
	}

IL_006a:
	{
		// if (scoreTextbox) { scoreTextbox.text = "Score " + score; }
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_14 = __this->get_scoreTextbox_7();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_15;
		L_15 = Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499(L_14, /*hidden argument*/NULL);
		if (!L_15)
		{
			goto IL_0097;
		}
	}
	{
		// if (scoreTextbox) { scoreTextbox.text = "Score " + score; }
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_16 = __this->get_scoreTextbox_7();
		int32_t* L_17 = __this->get_address_of_score_12();
		String_t* L_18;
		L_18 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)L_17, /*hidden argument*/NULL);
		String_t* L_19;
		L_19 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteral5A0D010563EAFA6C9073D35EB9EF83C988F91B75, L_18, /*hidden argument*/NULL);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_16, L_19);
	}

IL_0097:
	{
		// if (highScoreTextbox) { highScoreTextbox.text = "High Score " + highscore; }
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_20 = __this->get_highScoreTextbox_8();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_21;
		L_21 = Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499(L_20, /*hidden argument*/NULL);
		if (!L_21)
		{
			goto IL_00c4;
		}
	}
	{
		// if (highScoreTextbox) { highScoreTextbox.text = "High Score " + highscore; }
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_22 = __this->get_highScoreTextbox_8();
		int32_t* L_23 = __this->get_address_of_highscore_13();
		String_t* L_24;
		L_24 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)L_23, /*hidden argument*/NULL);
		String_t* L_25;
		L_25 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteralAC59E8085DCC2CAD244235A2E4E762BBD3139D29, L_24, /*hidden argument*/NULL);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_22, L_25);
	}

IL_00c4:
	{
		// }//end SetHUD()
		return;
	}
}
// System.Void HUDCanvas::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HUDCanvas__ctor_mADFB7CDDFE464C578B9CA4A6D95EB3B76B4113EA (HUDCanvas_t92770F90E8E786A01C1D48AC7281191FE50660CE * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void Hero::CheckSHIPIsInScene()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Hero_CheckSHIPIsInScene_mA16AE34D21E175A93CFCBE038E220BCDDAB20063 (Hero_t16A1E1C16C807818D862612A955C5FFB6C878D0C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Hero_t16A1E1C16C807818D862612A955C5FFB6C878D0C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7CC9D17927D2D3BD0BBD570AFA60EB986E51F6CF);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (SHIP == null)
		Hero_t16A1E1C16C807818D862612A955C5FFB6C878D0C * L_0 = ((Hero_t16A1E1C16C807818D862612A955C5FFB6C878D0C_StaticFields*)il2cpp_codegen_static_fields_for(Hero_t16A1E1C16C807818D862612A955C5FFB6C878D0C_il2cpp_TypeInfo_var))->get_SHIP_4();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_0, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0014;
		}
	}
	{
		// SHIP = this; //set SHIP to this game object
		((Hero_t16A1E1C16C807818D862612A955C5FFB6C878D0C_StaticFields*)il2cpp_codegen_static_fields_for(Hero_t16A1E1C16C807818D862612A955C5FFB6C878D0C_il2cpp_TypeInfo_var))->set_SHIP_4(__this);
		// }
		return;
	}

IL_0014:
	{
		// Debug.LogError("Hero.Awake() - Attempeeted to assign second Hero.SHIP");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogError_m8850D65592770A364D494025FF3A73E8D4D70485(_stringLiteral7CC9D17927D2D3BD0BBD570AFA60EB986E51F6CF, /*hidden argument*/NULL);
		// }//end CheckGameManagerIsInScene()
		return;
	}
}
// System.Single Hero::get_shieldLevel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Hero_get_shieldLevel_m24D5C4DBFACC2941B922F03F66FC62D67BB6EAE7 (Hero_t16A1E1C16C807818D862612A955C5FFB6C878D0C * __this, const RuntimeMethod* method)
{
	{
		// get { return (_shieldLevel); }
		float L_0 = __this->get__shieldLevel_14();
		return L_0;
	}
}
// System.Void Hero::set_shieldLevel(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Hero_set_shieldLevel_m59FBADCE365627014EEBC071604B14AA46602CFE (Hero_t16A1E1C16C807818D862612A955C5FFB6C878D0C * __this, float ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _shieldLevel = Mathf.Min(value, maxShield); //Min returns the smallest of the values, therby making max sheilds 4
		float L_0 = ___value0;
		int32_t L_1 = __this->get_maxShield_15();
		float L_2;
		L_2 = Mathf_Min_mD28BD5C9012619B74E475F204F96603193E99B14(L_0, ((float)((float)L_1)), /*hidden argument*/NULL);
		__this->set__shieldLevel_14(L_2);
		// if (value < 0)
		float L_3 = ___value0;
		if ((!(((float)L_3) < ((float)(0.0f)))))
		{
			goto IL_0041;
		}
	}
	{
		// Destroy(this.gameObject);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_4;
		L_4 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30(L_4, /*hidden argument*/NULL);
		// Debug.Log(gm.name);
		GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * L_5 = __this->get_gm_5();
		String_t* L_6;
		L_6 = Object_get_name_m0C7BC870ED2F0DC5A2FB09628136CD7D1CB82CFB(L_5, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(L_6, /*hidden argument*/NULL);
		// gm.LostLife();
		GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * L_7 = __this->get_gm_5();
		GameManager_LostLife_m603C8F61ECAC1533CB7ADA99334A85151F97CCF6(L_7, /*hidden argument*/NULL);
	}

IL_0041:
	{
		// }
		return;
	}
}
// System.Void Hero::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Hero_Awake_m405A38D0D7A8E8DCB9CF0EF6B66E0FD933FD10EB (Hero_t16A1E1C16C807818D862612A955C5FFB6C878D0C * __this, const RuntimeMethod* method)
{
	{
		// CheckSHIPIsInScene(); //check for Hero SHIP
		Hero_CheckSHIPIsInScene_mA16AE34D21E175A93CFCBE038E220BCDDAB20063(__this, /*hidden argument*/NULL);
		// }//end Awake()
		return;
	}
}
// System.Void Hero::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Hero_Start_mD908DB6FB0BC6849D6B29A2996F29988FC43B182 (Hero_t16A1E1C16C807818D862612A955C5FFB6C878D0C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisAudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B_mCC3B7A679ECE504BFAF8C70C4EF527511F46902F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectPool_tBE9877D5A57AE7ED77E2C748CC34E97C40FB4CDC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// gm = GameManager.GM; //find the game manager
		IL2CPP_RUNTIME_CLASS_INIT(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var);
		GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * L_0;
		L_0 = GameManager_get_GM_mF044B18C61B07C11CC5DF01B430E5C74431C7AA4_inline(/*hidden argument*/NULL);
		__this->set_gm_5(L_0);
		// pool = ObjectPool.POOL; //find the game manager
		ObjectPool_tBE9877D5A57AE7ED77E2C748CC34E97C40FB4CDC * L_1 = ((ObjectPool_tBE9877D5A57AE7ED77E2C748CC34E97C40FB4CDC_StaticFields*)il2cpp_codegen_static_fields_for(ObjectPool_tBE9877D5A57AE7ED77E2C748CC34E97C40FB4CDC_il2cpp_TypeInfo_var))->get_POOL_4();
		__this->set_pool_6(L_1);
		// audioSource = GetComponent<AudioSource>(); //get refrence to audio source
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_2;
		L_2 = Component_GetComponent_TisAudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B_mCC3B7A679ECE504BFAF8C70C4EF527511F46902F(__this, /*hidden argument*/Component_GetComponent_TisAudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B_mCC3B7A679ECE504BFAF8C70C4EF527511F46902F_RuntimeMethod_var);
		__this->set_audioSource_12(L_2);
		// }//end Start()
		return;
	}
}
// System.Void Hero::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Hero_Update_mF0AC6E2FE7210FABB9F1129E79669EA4D60E869E (Hero_t16A1E1C16C807818D862612A955C5FFB6C878D0C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral265E15F1F86F1C766555899D5771CF29055DE75A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7F8C014BD4810CC276D0F9F81A1E759C7B098B1E);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		// float xAxis = Input.GetAxis("Horizontal");
		float L_0;
		L_0 = Input_GetAxis_m939297DEB2ECF8D8D09AD66EB69979AAD2B62326(_stringLiteral7F8C014BD4810CC276D0F9F81A1E759C7B098B1E, /*hidden argument*/NULL);
		V_0 = L_0;
		// float yAxis = Input.GetAxis("Vertical");
		float L_1;
		L_1 = Input_GetAxis_m939297DEB2ECF8D8D09AD66EB69979AAD2B62326(_stringLiteral265E15F1F86F1C766555899D5771CF29055DE75A, /*hidden argument*/NULL);
		V_1 = L_1;
		// Vector3 pos = transform.position;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_2;
		L_2 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3;
		L_3 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_2, /*hidden argument*/NULL);
		V_2 = L_3;
		// pos.x += xAxis * speed * Time.deltaTime;
		float* L_4 = (&V_2)->get_address_of_x_2();
		float* L_5 = L_4;
		float L_6 = *((float*)L_5);
		float L_7 = V_0;
		float L_8 = __this->get_speed_7();
		float L_9;
		L_9 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		*((float*)L_5) = (float)((float)il2cpp_codegen_add((float)L_6, (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_multiply((float)L_7, (float)L_8)), (float)L_9))));
		// pos.y += yAxis * speed * Time.deltaTime;
		float* L_10 = (&V_2)->get_address_of_y_3();
		float* L_11 = L_10;
		float L_12 = *((float*)L_11);
		float L_13 = V_1;
		float L_14 = __this->get_speed_7();
		float L_15;
		L_15 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		*((float*)L_11) = (float)((float)il2cpp_codegen_add((float)L_12, (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_multiply((float)L_13, (float)L_14)), (float)L_15))));
		// transform.position = pos;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_16;
		L_16 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_17 = V_2;
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_16, L_17, /*hidden argument*/NULL);
		// transform.rotation = Quaternion.Euler(yAxis * pitchMult, xAxis * rollMult, 0);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_18;
		L_18 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		float L_19 = V_1;
		float L_20 = __this->get_pitchMult_9();
		float L_21 = V_0;
		float L_22 = __this->get_rollMult_8();
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_23;
		L_23 = Quaternion_Euler_m37BF99FFFA09F4B3F83DC066641B82C59B19A9C3(((float)il2cpp_codegen_multiply((float)L_19, (float)L_20)), ((float)il2cpp_codegen_multiply((float)L_21, (float)L_22)), (0.0f), /*hidden argument*/NULL);
		Transform_set_rotation_m1B5F3D4CE984AB31254615C9C71B0E54978583B4(L_18, L_23, /*hidden argument*/NULL);
		// if (Input.GetKeyDown(KeyCode.Space))
		bool L_24;
		L_24 = Input_GetKeyDown_m476116696E71771641BBECBAB1A4C55E69018220(((int32_t)32), /*hidden argument*/NULL);
		if (!L_24)
		{
			goto IL_00b3;
		}
	}
	{
		// FireProjectile();
		Hero_FireProjectile_m36B3758E6947D2415379687C52678C73760B3C9F(__this, /*hidden argument*/NULL);
		// if (audioSource != null)
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_25 = __this->get_audioSource_12();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_26;
		L_26 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_25, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_26)
		{
			goto IL_00b3;
		}
	}
	{
		// audioSource.PlayOneShot(projectSound); //play projectileSound
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_27 = __this->get_audioSource_12();
		AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * L_28 = __this->get_projectSound_11();
		AudioSource_PlayOneShot_mA90B136041A61C30909301D45D0315088CA7D796(L_27, L_28, /*hidden argument*/NULL);
	}

IL_00b3:
	{
		// }//end Update()
		return;
	}
}
// System.Void Hero::OnTriggerEnter(UnityEngine.Collider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Hero_OnTriggerEnter_mF31ECA8E79FB5756ADB1A43A8F404B92838B14EC (Hero_t16A1E1C16C807818D862612A955C5FFB6C878D0C * __this, Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * ___other0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral06A1FA59D154D294D58E8BD7C1CCCB31CEF58408);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3260331AF5DA53ABC7CA7BAF659CF8D9FC93DEC7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB708F184BAD95425F32568A993CE7A73DE10753D);
		s_Il2CppMethodInitialized = true;
	}
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * V_0 = NULL;
	float V_1 = 0.0f;
	{
		// Transform rootT = other.gameObject.transform.root;
		Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * L_0 = ___other0;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1;
		L_1 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_0, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_2;
		L_2 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_1, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_3;
		L_3 = Transform_get_root_mDEB1F3B4DB26B32CEED6DFFF734F85C79C4DDA91(L_2, /*hidden argument*/NULL);
		// GameObject go = rootT.gameObject; //game object of parent transform
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_4;
		L_4 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		// if (go == lastTriggerGo) { return; } //don't do anything if it's the same object we last collied with
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_5 = V_0;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_6 = __this->get_lastTriggerGo_13();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_7;
		L_7 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_5, L_6, /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_0025;
		}
	}
	{
		// if (go == lastTriggerGo) { return; } //don't do anything if it's the same object we last collied with
		return;
	}

IL_0025:
	{
		// lastTriggerGo = go; //set the triger to the last trigger
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_8 = V_0;
		__this->set_lastTriggerGo_13(L_8);
		// if (go.tag == "Enemy")
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_9 = V_0;
		String_t* L_10;
		L_10 = GameObject_get_tag_mC21F33D368C18A631040F2887036C678B96ABC33(L_9, /*hidden argument*/NULL);
		bool L_11;
		L_11 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_10, _stringLiteral3260331AF5DA53ABC7CA7BAF659CF8D9FC93DEC7, /*hidden argument*/NULL);
		if (!L_11)
		{
			goto IL_0073;
		}
	}
	{
		// Debug.Log("Triggered by Enemy " + other.gameObject.name);
		Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * L_12 = ___other0;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_13;
		L_13 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_12, /*hidden argument*/NULL);
		String_t* L_14;
		L_14 = Object_get_name_m0C7BC870ED2F0DC5A2FB09628136CD7D1CB82CFB(L_13, /*hidden argument*/NULL);
		String_t* L_15;
		L_15 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteralB708F184BAD95425F32568A993CE7A73DE10753D, L_14, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(L_15, /*hidden argument*/NULL);
		// shieldLevel--;
		float L_16;
		L_16 = Hero_get_shieldLevel_m24D5C4DBFACC2941B922F03F66FC62D67BB6EAE7_inline(__this, /*hidden argument*/NULL);
		V_1 = L_16;
		float L_17 = V_1;
		Hero_set_shieldLevel_m59FBADCE365627014EEBC071604B14AA46602CFE(__this, ((float)il2cpp_codegen_subtract((float)L_17, (float)(1.0f))), /*hidden argument*/NULL);
		// Destroy(go);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_18 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30(L_18, /*hidden argument*/NULL);
		// }
		return;
	}

IL_0073:
	{
		// Debug.Log("Triggered by non-Enemy " + other.gameObject.name);
		Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * L_19 = ___other0;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_20;
		L_20 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_19, /*hidden argument*/NULL);
		String_t* L_21;
		L_21 = Object_get_name_m0C7BC870ED2F0DC5A2FB09628136CD7D1CB82CFB(L_20, /*hidden argument*/NULL);
		String_t* L_22;
		L_22 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteral06A1FA59D154D294D58E8BD7C1CCCB31CEF58408, L_21, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(L_22, /*hidden argument*/NULL);
		// }//end OnTriggerEnter()
		return;
	}
}
// System.Void Hero::FireProjectile()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Hero_FireProjectile_m36B3758E6947D2415379687C52678C73760B3C9F (Hero_t16A1E1C16C807818D862612A955C5FFB6C878D0C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisRigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A_mA1779277BB07CE3D2CB8E340CEA85C40C6B52354_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * V_0 = NULL;
	{
		// GameObject projGo = pool.GetObject(); //get object from pool
		ObjectPool_tBE9877D5A57AE7ED77E2C748CC34E97C40FB4CDC * L_0 = __this->get_pool_6();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1;
		L_1 = ObjectPool_GetObject_m23C1CF70911D4E5CAFEF12E02B27D9C49D1FEB45(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		// if (projGo != null)
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_2 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_2, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0046;
		}
	}
	{
		// projGo.transform.position = transform.position; //set position to the ships position
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_4 = V_0;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_5;
		L_5 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_4, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_6;
		L_6 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_7;
		L_7 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_6, /*hidden argument*/NULL);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_5, L_7, /*hidden argument*/NULL);
		// Rigidbody rb = projGo.GetComponent<Rigidbody>(); //get rigidbody of the projectile
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_8 = V_0;
		Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * L_9;
		L_9 = GameObject_GetComponent_TisRigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A_mA1779277BB07CE3D2CB8E340CEA85C40C6B52354(L_8, /*hidden argument*/GameObject_GetComponent_TisRigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A_mA1779277BB07CE3D2CB8E340CEA85C40C6B52354_RuntimeMethod_var);
		// rb.velocity = Vector3.up * projectileSpeed; //use velocity to move projectile
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10;
		L_10 = Vector3_get_up_m38AECA68388D446CFADDD022B0B867293044EA50(/*hidden argument*/NULL);
		float L_11 = __this->get_projectileSpeed_10();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_12;
		L_12 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_10, L_11, /*hidden argument*/NULL);
		Rigidbody_set_velocity_m8DC0988916EB38DFD7D4584830B41D79140BF18D(L_9, L_12, /*hidden argument*/NULL);
	}

IL_0046:
	{
		// }
		return;
	}
}
// System.Void Hero::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Hero__ctor_m3CB5FC229DA961BA568F2F9E95769A890C3C819C (Hero_t16A1E1C16C807818D862612A955C5FFB6C878D0C * __this, const RuntimeMethod* method)
{
	{
		// public float speed = 10;
		__this->set_speed_7((10.0f));
		// public float rollMult = -45;
		__this->set_rollMult_8((-45.0f));
		// public float pitchMult = 30;
		__this->set_pitchMult_9((30.0f));
		// public float projectileSpeed = 40;
		__this->set_projectileSpeed_10((40.0f));
		// private float _shieldLevel = 1; //level for shields
		__this->set__shieldLevel_14((1.0f));
		// public int maxShield = 4; //maximum shield level
		__this->set_maxShield_15(4);
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void MaterialScroller::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MaterialScroller_Start_m67A6D645ED42F5C4AE6F44180FC35CA7B87C8C20 (MaterialScroller_t8D8B509C3EB0CB75E6D42241F065B8EE4EEEAE02 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_m436E5B0F17DDEF3CC61F77DEA82B1A92668AF019_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// goRenderer = GetComponent<Renderer>();
		Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * L_0;
		L_0 = Component_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_m436E5B0F17DDEF3CC61F77DEA82B1A92668AF019(__this, /*hidden argument*/Component_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_m436E5B0F17DDEF3CC61F77DEA82B1A92668AF019_RuntimeMethod_var);
		__this->set_goRenderer_5(L_0);
		// goMat = goRenderer.material;
		Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * L_1 = __this->get_goRenderer_5();
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_2;
		L_2 = Renderer_get_material_mE6B01125502D08EE0D6DFE2EAEC064AD9BB31804(L_1, /*hidden argument*/NULL);
		__this->set_goMat_6(L_2);
		// }
		return;
	}
}
// System.Void MaterialScroller::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MaterialScroller_Update_m07B8DDD087C99C9A69B70FA21ED2C671EB70F47D (MaterialScroller_t8D8B509C3EB0CB75E6D42241F065B8EE4EEEAE02 * __this, const RuntimeMethod* method)
{
	{
		// offset = (scrollSpeed * Time.deltaTime); //set offset value over time
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_0 = __this->get_scrollSpeed_4();
		float L_1;
		L_1 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_2;
		L_2 = Vector2_op_Multiply_mC7A7802352867555020A90205EBABA56EE5E36CB_inline(L_0, L_1, /*hidden argument*/NULL);
		__this->set_offset_7(L_2);
		// goMat.mainTextureOffset += offset; //set texture offeset
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_3 = __this->get_goMat_6();
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_4 = L_3;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_5;
		L_5 = Material_get_mainTextureOffset_m515864AC74B322365689879CC668D001C41577D4(L_4, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_6 = __this->get_offset_7();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_7;
		L_7 = Vector2_op_Addition_m5EACC2AEA80FEE29F380397CF1F4B11D04BE71CC_inline(L_5, L_6, /*hidden argument*/NULL);
		Material_set_mainTextureOffset_m3045530900C547D17F181858EC245CC02CA5F3FE(L_4, L_7, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void MaterialScroller::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MaterialScroller__ctor_m46DD77F227B563DC0A4944CD8DC0EF3F7A6CB3C8 (MaterialScroller_t8D8B509C3EB0CB75E6D42241F065B8EE4EEEAE02 * __this, const RuntimeMethod* method)
{
	{
		// public Vector2 scrollSpeed = new Vector2(0, 0f); //x and y speed for scroll
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_0;
		memset((&L_0), 0, sizeof(L_0));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_0), (0.0f), (0.0f), /*hidden argument*/NULL);
		__this->set_scrollSpeed_4(L_0);
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void ObjectPool::CheckPoolIsInScene()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectPool_CheckPoolIsInScene_m2528DAD2F460A81E55D997E57DC93D12916AE08C (ObjectPool_tBE9877D5A57AE7ED77E2C748CC34E97C40FB4CDC * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectPool_tBE9877D5A57AE7ED77E2C748CC34E97C40FB4CDC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8B0221D6CFB2E025C7D842B87FFC982141A24562);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if(POOL == null)
		ObjectPool_tBE9877D5A57AE7ED77E2C748CC34E97C40FB4CDC * L_0 = ((ObjectPool_tBE9877D5A57AE7ED77E2C748CC34E97C40FB4CDC_StaticFields*)il2cpp_codegen_static_fields_for(ObjectPool_tBE9877D5A57AE7ED77E2C748CC34E97C40FB4CDC_il2cpp_TypeInfo_var))->get_POOL_4();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_0, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0014;
		}
	}
	{
		// POOL = this;
		((ObjectPool_tBE9877D5A57AE7ED77E2C748CC34E97C40FB4CDC_StaticFields*)il2cpp_codegen_static_fields_for(ObjectPool_tBE9877D5A57AE7ED77E2C748CC34E97C40FB4CDC_il2cpp_TypeInfo_var))->set_POOL_4(__this);
		// }
		return;
	}

IL_0014:
	{
		// Debug.LogError("POOL.Awake() - Attempeted to assign a second ObjectPool.POOL");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogError_m8850D65592770A364D494025FF3A73E8D4D70485(_stringLiteral8B0221D6CFB2E025C7D842B87FFC982141A24562, /*hidden argument*/NULL);
		// }// end CheckPoolIsInScene()
		return;
	}
}
// System.Void ObjectPool::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectPool_Awake_mF0E1BB227FFCA63FFB34326293803D5C56046B4F (ObjectPool_tBE9877D5A57AE7ED77E2C748CC34E97C40FB4CDC * __this, const RuntimeMethod* method)
{
	{
		// CheckPoolIsInScene();
		ObjectPool_CheckPoolIsInScene_m2528DAD2F460A81E55D997E57DC93D12916AE08C(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void ObjectPool::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectPool_Start_mCE3FE3D87EB7BF7ABD6DDAA78C2057F30AF5A2C1 (ObjectPool_tBE9877D5A57AE7ED77E2C748CC34E97C40FB4CDC * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m26431AC51B9B7A43FBABD10B4923B72B0C578F33_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_Enqueue_mBF3F677E8FA5E61DFEF3209F9DDA278775BDD513_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * V_1 = NULL;
	{
		// for (int i = 0; i < poolStartSize; i++)
		V_0 = 0;
		goto IL_0027;
	}

IL_0004:
	{
		// GameObject projectileGO = Instantiate(projectilePrefab); //create prefab instance
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_projectilePrefab_6();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1;
		L_1 = Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m26431AC51B9B7A43FBABD10B4923B72B0C578F33(L_0, /*hidden argument*/Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m26431AC51B9B7A43FBABD10B4923B72B0C578F33_RuntimeMethod_var);
		V_1 = L_1;
		// projectiles.Enqueue(projectileGO); //add to queue
		Queue_1_t19382AED9A873E9B1E7BA5D847E64540A2B4FC92 * L_2 = __this->get_projectiles_5();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_3 = V_1;
		Queue_1_Enqueue_mBF3F677E8FA5E61DFEF3209F9DDA278775BDD513(L_2, L_3, /*hidden argument*/Queue_1_Enqueue_mBF3F677E8FA5E61DFEF3209F9DDA278775BDD513_RuntimeMethod_var);
		// projectileGO.SetActive(false);//hide projectile
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_4 = V_1;
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_4, (bool)0, /*hidden argument*/NULL);
		// for (int i = 0; i < poolStartSize; i++)
		int32_t L_5 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_5, (int32_t)1));
	}

IL_0027:
	{
		// for (int i = 0; i < poolStartSize; i++)
		int32_t L_6 = V_0;
		int32_t L_7 = __this->get_poolStartSize_7();
		if ((((int32_t)L_6) < ((int32_t)L_7)))
		{
			goto IL_0004;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ObjectPool::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectPool_Update_mBF1746D49148052F2F20FA372BFD3800237ED4E8 (ObjectPool_tBE9877D5A57AE7ED77E2C748CC34E97C40FB4CDC * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// UnityEngine.GameObject ObjectPool::GetObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ObjectPool_GetObject_m23C1CF70911D4E5CAFEF12E02B27D9C49D1FEB45 (ObjectPool_tBE9877D5A57AE7ED77E2C748CC34E97C40FB4CDC * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_Dequeue_mAB7D03D5E1E8D5574DB751A04534E90B970BE0CC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_get_Count_mA25AD1436D3225AA2B66F58A6E79D70A2F5723A2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0147DE79556B33082B887D10099246A4B2680278);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (projectiles.Count > 0)
		Queue_1_t19382AED9A873E9B1E7BA5D847E64540A2B4FC92 * L_0 = __this->get_projectiles_5();
		int32_t L_1;
		L_1 = Queue_1_get_Count_mA25AD1436D3225AA2B66F58A6E79D70A2F5723A2_inline(L_0, /*hidden argument*/Queue_1_get_Count_mA25AD1436D3225AA2B66F58A6E79D70A2F5723A2_RuntimeMethod_var);
		if ((((int32_t)L_1) <= ((int32_t)0)))
		{
			goto IL_0021;
		}
	}
	{
		// GameObject gObject = projectiles.Dequeue(); //remove from queue
		Queue_1_t19382AED9A873E9B1E7BA5D847E64540A2B4FC92 * L_2 = __this->get_projectiles_5();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_3;
		L_3 = Queue_1_Dequeue_mAB7D03D5E1E8D5574DB751A04534E90B970BE0CC(L_2, /*hidden argument*/Queue_1_Dequeue_mAB7D03D5E1E8D5574DB751A04534E90B970BE0CC_RuntimeMethod_var);
		// gObject.SetActive(true); //enable
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_4 = L_3;
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_4, (bool)1, /*hidden argument*/NULL);
		// return gObject; //return object
		return L_4;
	}

IL_0021:
	{
		// Debug.LogWarning("Out of objects, reloading...");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogWarning_m24085D883C9E74D7AB423F0625E13259923960E7(_stringLiteral0147DE79556B33082B887D10099246A4B2680278, /*hidden argument*/NULL);
		// return null; //return null
		return (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *)NULL;
	}
}
// System.Void ObjectPool::ReturnObject(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectPool_ReturnObject_mE626DE836D2DC5DB1B4F4938971D1CE487BC85B7 (ObjectPool_tBE9877D5A57AE7ED77E2C748CC34E97C40FB4CDC * __this, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___gObject0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_Enqueue_mBF3F677E8FA5E61DFEF3209F9DDA278775BDD513_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// projectiles.Enqueue(gObject); //add back to queue
		Queue_1_t19382AED9A873E9B1E7BA5D847E64540A2B4FC92 * L_0 = __this->get_projectiles_5();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1 = ___gObject0;
		Queue_1_Enqueue_mBF3F677E8FA5E61DFEF3209F9DDA278775BDD513(L_0, L_1, /*hidden argument*/Queue_1_Enqueue_mBF3F677E8FA5E61DFEF3209F9DDA278775BDD513_RuntimeMethod_var);
		// gObject.SetActive(false); //disable
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_2 = ___gObject0;
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_2, (bool)0, /*hidden argument*/NULL);
		// }//end ReturnProjectile()
		return;
	}
}
// System.Void ObjectPool::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectPool__ctor_m238AC3CF5FD237B72A4D1A0595E92AB4DC48454F (ObjectPool_tBE9877D5A57AE7ED77E2C748CC34E97C40FB4CDC * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1__ctor_m989302E3AE90AD39E5B892C79B3A6365966D1852_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_t19382AED9A873E9B1E7BA5D847E64540A2B4FC92_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private Queue<GameObject> projectiles = new Queue<GameObject>(); // new queue of projectiles
		Queue_1_t19382AED9A873E9B1E7BA5D847E64540A2B4FC92 * L_0 = (Queue_1_t19382AED9A873E9B1E7BA5D847E64540A2B4FC92 *)il2cpp_codegen_object_new(Queue_1_t19382AED9A873E9B1E7BA5D847E64540A2B4FC92_il2cpp_TypeInfo_var);
		Queue_1__ctor_m989302E3AE90AD39E5B892C79B3A6365966D1852(L_0, /*hidden argument*/Queue_1__ctor_m989302E3AE90AD39E5B892C79B3A6365966D1852_RuntimeMethod_var);
		__this->set_projectiles_5(L_0);
		// public int poolStartSize = 5;
		__this->set_poolStartSize_7(5);
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void PoolReturn::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PoolReturn_Start_m84EE473A3CBD07E737D137F8E0956A3DB5652016 (PoolReturn_t749F2C2DB433ED98BDEF98AE86727EBF45684BE0 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectPool_tBE9877D5A57AE7ED77E2C748CC34E97C40FB4CDC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// pool = ObjectPool.POOL; //find the game manager
		ObjectPool_tBE9877D5A57AE7ED77E2C748CC34E97C40FB4CDC * L_0 = ((ObjectPool_tBE9877D5A57AE7ED77E2C748CC34E97C40FB4CDC_StaticFields*)il2cpp_codegen_static_fields_for(ObjectPool_tBE9877D5A57AE7ED77E2C748CC34E97C40FB4CDC_il2cpp_TypeInfo_var))->get_POOL_4();
		__this->set_pool_4(L_0);
		// }
		return;
	}
}
// System.Void PoolReturn::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PoolReturn_Update_m717F478E085423573B9BD32FA22C6DC512971FC6 (PoolReturn_t749F2C2DB433ED98BDEF98AE86727EBF45684BE0 * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void PoolReturn::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PoolReturn_OnDisable_m721B77515C4BE03F492CBC534E27F9FA15DECA69 (PoolReturn_t749F2C2DB433ED98BDEF98AE86727EBF45684BE0 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (pool != null)
		ObjectPool_tBE9877D5A57AE7ED77E2C748CC34E97C40FB4CDC * L_0 = __this->get_pool_4();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_0, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_001f;
		}
	}
	{
		// pool.ReturnObject(this.gameObject); //return to pool
		ObjectPool_tBE9877D5A57AE7ED77E2C748CC34E97C40FB4CDC * L_2 = __this->get_pool_4();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_3;
		L_3 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		ObjectPool_ReturnObject_mE626DE836D2DC5DB1B4F4938971D1CE487BC85B7(L_2, L_3, /*hidden argument*/NULL);
	}

IL_001f:
	{
		// }//end OnDisable()
		return;
	}
}
// System.Void PoolReturn::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PoolReturn__ctor_mDAB340117B1BC2AF0C41074476807F2B023AF70D (PoolReturn_t749F2C2DB433ED98BDEF98AE86727EBF45684BE0 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void Projectile::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Projectile_Start_m065C53350564E17D5A0A0322FF064F8C9697DAB6 (Projectile_t8BAB3D47786918922F97CC7FADEB6146D6E31B9F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisBoundsCheck_t4F4AC8554A0272E80ACC121C8CEE14FAA5F3E4CE_mB315A5F068A2CE61C696F5715FF04986B36CE025_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// bndCheck = GetComponent<BoundsCheck>();
		BoundsCheck_t4F4AC8554A0272E80ACC121C8CEE14FAA5F3E4CE * L_0;
		L_0 = Component_GetComponent_TisBoundsCheck_t4F4AC8554A0272E80ACC121C8CEE14FAA5F3E4CE_mB315A5F068A2CE61C696F5715FF04986B36CE025(__this, /*hidden argument*/Component_GetComponent_TisBoundsCheck_t4F4AC8554A0272E80ACC121C8CEE14FAA5F3E4CE_mB315A5F068A2CE61C696F5715FF04986B36CE025_RuntimeMethod_var);
		__this->set_bndCheck_4(L_0);
		// }
		return;
	}
}
// System.Void Projectile::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Projectile_Update_m382C5B499BD4599FE34A04DA3DA0701077C710B2 (Projectile_t8BAB3D47786918922F97CC7FADEB6146D6E31B9F * __this, const RuntimeMethod* method)
{
	{
		// if (bndCheck.offUp)
		BoundsCheck_t4F4AC8554A0272E80ACC121C8CEE14FAA5F3E4CE * L_0 = __this->get_bndCheck_4();
		bool L_1 = L_0->get_offUp_9();
		if (!L_1)
		{
			goto IL_0025;
		}
	}
	{
		// gameObject.SetActive(false); //set the project to deactivate and return to pool
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_2;
		L_2 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_2, (bool)0, /*hidden argument*/NULL);
		// bndCheck.offUp = false; //reset the BoundsCheck offUp boolean
		BoundsCheck_t4F4AC8554A0272E80ACC121C8CEE14FAA5F3E4CE * L_3 = __this->get_bndCheck_4();
		L_3->set_offUp_9((bool)0);
	}

IL_0025:
	{
		// }
		return;
	}
}
// System.Void Projectile::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Projectile__ctor_m22DAC83BA9B394316027755FD2ADFCA806EE39BB (Projectile_t8BAB3D47786918922F97CC7FADEB6146D6E31B9F * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void Shield::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Shield_Start_m891436A89502B5507B90831B349A27CD0B14B0F6 (Shield_t938DA769F9DED1ACACE524C775A5032C1BD4BD61 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_m436E5B0F17DDEF3CC61F77DEA82B1A92668AF019_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Hero_t16A1E1C16C807818D862612A955C5FFB6C878D0C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral76FBA75E795FEEECF2AB12E5CD9D37C6208A737F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral80A3E99D32912A6EA89ECAC3AF60A180FC37A2F3);
		s_Il2CppMethodInitialized = true;
	}
	{
		// currLevel = Hero.SHIP.shieldLevel; //get the shield level
		Hero_t16A1E1C16C807818D862612A955C5FFB6C878D0C * L_0 = ((Hero_t16A1E1C16C807818D862612A955C5FFB6C878D0C_StaticFields*)il2cpp_codegen_static_fields_for(Hero_t16A1E1C16C807818D862612A955C5FFB6C878D0C_il2cpp_TypeInfo_var))->get_SHIP_4();
		float L_1;
		L_1 = Hero_get_shieldLevel_m24D5C4DBFACC2941B922F03F66FC62D67BB6EAE7_inline(L_0, /*hidden argument*/NULL);
		__this->set_currLevel_10(L_1);
		// lastLevel = currLevel; //record the shield level
		float L_2 = __this->get_currLevel_10();
		__this->set_lastLevel_11(L_2);
		// alphaLevel = 0.5f; //set the default alpha
		__this->set_alphaLevel_7((0.5f));
		// mat = GetComponent<Renderer>().material; //get the material for the shield
		Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * L_3;
		L_3 = Component_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_m436E5B0F17DDEF3CC61F77DEA82B1A92668AF019(__this, /*hidden argument*/Component_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_m436E5B0F17DDEF3CC61F77DEA82B1A92668AF019_RuntimeMethod_var);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_4;
		L_4 = Renderer_get_material_mE6B01125502D08EE0D6DFE2EAEC064AD9BB31804(L_3, /*hidden argument*/NULL);
		__this->set_mat_12(L_4);
		// mat.SetColor("_color", shieldColor); //set the defualt color
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_5 = __this->get_mat_12();
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_6 = __this->get_shieldColor_4();
		Material_SetColor_m5CAAF4A8D7F839597B4E14588E341462EEB81698(L_5, _stringLiteral76FBA75E795FEEECF2AB12E5CD9D37C6208A737F, L_6, /*hidden argument*/NULL);
		// mat.SetFloat("_alphaLevel", alphaLevel); //finds the materials shader variable, and sets the value
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_7 = __this->get_mat_12();
		float L_8 = __this->get_alphaLevel_7();
		Material_SetFloat_mBE01E05D49E5C7045E010F49A38E96B101D82768(L_7, _stringLiteral80A3E99D32912A6EA89ECAC3AF60A180FC37A2F3, L_8, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Shield::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Shield_Update_mABB7587845FE89DC26A1ED1EE55E03FC42D60CC8 (Shield_t938DA769F9DED1ACACE524C775A5032C1BD4BD61 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Hero_t16A1E1C16C807818D862612A955C5FFB6C878D0C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral59841276BDB5ADB59BD259E20A5C55AF4CF0A7D9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral76FBA75E795FEEECF2AB12E5CD9D37C6208A737F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral80A3E99D32912A6EA89ECAC3AF60A180FC37A2F3);
		s_Il2CppMethodInitialized = true;
	}
	{
		// currLevel = Hero.SHIP.shieldLevel;
		Hero_t16A1E1C16C807818D862612A955C5FFB6C878D0C * L_0 = ((Hero_t16A1E1C16C807818D862612A955C5FFB6C878D0C_StaticFields*)il2cpp_codegen_static_fields_for(Hero_t16A1E1C16C807818D862612A955C5FFB6C878D0C_il2cpp_TypeInfo_var))->get_SHIP_4();
		float L_1;
		L_1 = Hero_get_shieldLevel_m24D5C4DBFACC2941B922F03F66FC62D67BB6EAE7_inline(L_0, /*hidden argument*/NULL);
		__this->set_currLevel_10(L_1);
		// if (currLevel == Hero.SHIP.maxShield)
		float L_2 = __this->get_currLevel_10();
		Hero_t16A1E1C16C807818D862612A955C5FFB6C878D0C * L_3 = ((Hero_t16A1E1C16C807818D862612A955C5FFB6C878D0C_StaticFields*)il2cpp_codegen_static_fields_for(Hero_t16A1E1C16C807818D862612A955C5FFB6C878D0C_il2cpp_TypeInfo_var))->get_SHIP_4();
		int32_t L_4 = L_3->get_maxShield_15();
		if ((!(((float)L_2) == ((float)((float)((float)L_4))))))
		{
			goto IL_0044;
		}
	}
	{
		// alphaLevel = 0.5f; //set the level shown to our default
		__this->set_alphaLevel_7((0.5f));
		// mat.SetFloat("_alphaLevel", alphaLevel); //set the level shown for the Fresnel effect
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_5 = __this->get_mat_12();
		float L_6 = __this->get_alphaLevel_7();
		Material_SetFloat_mBE01E05D49E5C7045E010F49A38E96B101D82768(L_5, _stringLiteral80A3E99D32912A6EA89ECAC3AF60A180FC37A2F3, L_6, /*hidden argument*/NULL);
	}

IL_0044:
	{
		// if (lastLevel > currLevel)
		float L_7 = __this->get_lastLevel_11();
		float L_8 = __this->get_currLevel_10();
		if ((!(((float)L_7) > ((float)L_8))))
		{
			goto IL_00bd;
		}
	}
	{
		// lastLevel = currLevel; //set the level Level to the current level shield
		float L_9 = __this->get_currLevel_10();
		__this->set_lastLevel_11(L_9);
		// alphaLevel += 0.1f; // decrease the levelShown value slowly (by time) therby decresing the transprancy
		float L_10 = __this->get_alphaLevel_7();
		__this->set_alphaLevel_7(((float)il2cpp_codegen_add((float)L_10, (float)(0.100000001f))));
		// mat.SetColor("_color", shieldHitColor); //Change the color on hit
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_11 = __this->get_mat_12();
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_12 = __this->get_shieldHitColor_5();
		Material_SetColor_m5CAAF4A8D7F839597B4E14588E341462EEB81698(L_11, _stringLiteral76FBA75E795FEEECF2AB12E5CD9D37C6208A737F, L_12, /*hidden argument*/NULL);
		// mat.SetFloat("_alphaLevel", Mathf.Clamp(alphaLevel, minAlpha, maxAlpha)); //finds the materials shader variable, and sets the value
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_13 = __this->get_mat_12();
		float L_14 = __this->get_alphaLevel_7();
		float L_15 = __this->get_minAlpha_8();
		float L_16 = __this->get_maxAlpha_9();
		float L_17;
		L_17 = Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87(L_14, L_15, L_16, /*hidden argument*/NULL);
		Material_SetFloat_mBE01E05D49E5C7045E010F49A38E96B101D82768(L_13, _stringLiteral80A3E99D32912A6EA89ECAC3AF60A180FC37A2F3, L_17, /*hidden argument*/NULL);
		// Invoke("ColorChange", 0.25f); //delay color rest
		MonoBehaviour_Invoke_m4AAB759653B1C6FB0653527F4DDC72D1E9162CC4(__this, _stringLiteral59841276BDB5ADB59BD259E20A5C55AF4CF0A7D9, (0.25f), /*hidden argument*/NULL);
	}

IL_00bd:
	{
		// if (lastLevel < currLevel)
		float L_18 = __this->get_lastLevel_11();
		float L_19 = __this->get_currLevel_10();
		if ((!(((float)L_18) < ((float)L_19))))
		{
			goto IL_0136;
		}
	}
	{
		// lastLevel = currLevel;//set the level Level to the current level shield
		float L_20 = __this->get_currLevel_10();
		__this->set_lastLevel_11(L_20);
		// alphaLevel -= 0.1f; // increase the levelShown value slowly (by time) therby incresing the transprancy
		float L_21 = __this->get_alphaLevel_7();
		__this->set_alphaLevel_7(((float)il2cpp_codegen_subtract((float)L_21, (float)(0.100000001f))));
		// mat.SetFloat("_alphaLevel", Mathf.Clamp(alphaLevel, minAlpha, maxAlpha)); //finds the materials shader variable, and sets the value
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_22 = __this->get_mat_12();
		float L_23 = __this->get_alphaLevel_7();
		float L_24 = __this->get_minAlpha_8();
		float L_25 = __this->get_maxAlpha_9();
		float L_26;
		L_26 = Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87(L_23, L_24, L_25, /*hidden argument*/NULL);
		Material_SetFloat_mBE01E05D49E5C7045E010F49A38E96B101D82768(L_22, _stringLiteral80A3E99D32912A6EA89ECAC3AF60A180FC37A2F3, L_26, /*hidden argument*/NULL);
		// mat.SetColor("_color", shieldPowerColor); //Change the color
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_27 = __this->get_mat_12();
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_28 = __this->get_shieldPowerColor_6();
		Material_SetColor_m5CAAF4A8D7F839597B4E14588E341462EEB81698(L_27, _stringLiteral76FBA75E795FEEECF2AB12E5CD9D37C6208A737F, L_28, /*hidden argument*/NULL);
		// Invoke("ColorChange", 0.25f); //delay color rest
		MonoBehaviour_Invoke_m4AAB759653B1C6FB0653527F4DDC72D1E9162CC4(__this, _stringLiteral59841276BDB5ADB59BD259E20A5C55AF4CF0A7D9, (0.25f), /*hidden argument*/NULL);
	}

IL_0136:
	{
		// }//end Update()
		return;
	}
}
// System.Void Shield::ColorChange()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Shield_ColorChange_m43C32BD907B31DB18B07242B4AEE3BEB762142DF (Shield_t938DA769F9DED1ACACE524C775A5032C1BD4BD61 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral76FBA75E795FEEECF2AB12E5CD9D37C6208A737F);
		s_Il2CppMethodInitialized = true;
	}
	{
		// mat.SetColor("_color", shieldColor);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_0 = __this->get_mat_12();
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_1 = __this->get_shieldColor_4();
		Material_SetColor_m5CAAF4A8D7F839597B4E14588E341462EEB81698(L_0, _stringLiteral76FBA75E795FEEECF2AB12E5CD9D37C6208A737F, L_1, /*hidden argument*/NULL);
		// }//end ColorChange()
		return;
	}
}
// System.Void Shield::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Shield__ctor_m20D0200FAA022FA52FDFB2734B4358A92B27DE63 (Shield_t938DA769F9DED1ACACE524C775A5032C1BD4BD61 * __this, const RuntimeMethod* method)
{
	{
		// public float alphaLevel = 0.5f; //the shiled level shown by shader
		__this->set_alphaLevel_7((0.5f));
		// public float minAlpha = 0.5f; //semi-transparent fresnel effect
		__this->set_minAlpha_8((0.5f));
		// public float maxAlpha = 1f; //transparent fresnel effect
		__this->set_maxAlpha_9((1.0f));
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void StartCanvas::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StartCanvas_Start_m3E5D81CA7BACA9615EC57B97131C8B8EDDBA5C05 (StartCanvas_tDADEA9B21D83433EFB4D2057F0251B45EFFC6D27 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// gm = GameManager.GM; //find the game manager
		IL2CPP_RUNTIME_CLASS_INIT(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var);
		GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * L_0;
		L_0 = GameManager_get_GM_mF044B18C61B07C11CC5DF01B430E5C74431C7AA4_inline(/*hidden argument*/NULL);
		__this->set_gm_4(L_0);
		// titleTextbox.text = gm.gameTitle;
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_1 = __this->get_titleTextbox_5();
		GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * L_2 = __this->get_gm_4();
		String_t* L_3 = L_2->get_gameTitle_6();
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_1, L_3);
		// creditsTextbox.text = gm.gameCredits;
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_4 = __this->get_creditsTextbox_6();
		GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * L_5 = __this->get_gm_4();
		String_t* L_6 = L_5->get_gameCredits_7();
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_4, L_6);
		// copyrightTextbox.text = gm.copyrightDate;
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_7 = __this->get_copyrightTextbox_7();
		GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * L_8 = __this->get_gm_4();
		String_t* L_9 = L_8->get_copyrightDate_8();
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_7, L_9);
		// }
		return;
	}
}
// System.Void StartCanvas::GameStart()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StartCanvas_GameStart_m00D9F33E48C3B264D392290A6C897E31AB552EF5 (StartCanvas_tDADEA9B21D83433EFB4D2057F0251B45EFFC6D27 * __this, const RuntimeMethod* method)
{
	{
		// gm.StartGame(); //refenece the StartGame method on the game manager
		GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * L_0 = __this->get_gm_4();
		GameManager_StartGame_m6022C5CDD590728691B22E9B87185BFE3D6A8EC1(L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void StartCanvas::GameExit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StartCanvas_GameExit_mDE0FC624DAFE8033F6CA06CAD7B401735E6FEE72 (StartCanvas_tDADEA9B21D83433EFB4D2057F0251B45EFFC6D27 * __this, const RuntimeMethod* method)
{
	{
		// gm.ExitGame(); //refenece the ExitGame method on the game manager
		GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * L_0 = __this->get_gm_4();
		GameManager_ExitGame_m3C47242CB3DE298E84344082AC4D28B586026847(L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void StartCanvas::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StartCanvas__ctor_m2FDB2D887261F8B22C6EE2A72C38468D5BD1BD21 (StartCanvas_tDADEA9B21D83433EFB4D2057F0251B45EFFC6D27 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void TestGame::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TestGame_Update_m07C3A4DF7522CF86F06C6BB94AAF503096C24BE8 (TestGame_tBE1EB8C9119DE68B57C0CE8A6284EF8371A532C4 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral25F5EF17AC725A91FE3F3CE895C16ED6DD9B3499);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral710CEFF5A6D94EED332EF2BD41342B8B16B45293);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (Input.GetKeyUp("return")) {
		bool L_0;
		L_0 = Input_GetKeyUp_m49B2C0996BCBFB9AA6AC8E6431D1D899EDA85785(_stringLiteral25F5EF17AC725A91FE3F3CE895C16ED6DD9B3499, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_001c;
		}
	}
	{
		// GameManager.GM.UpdateScore(point);
		IL2CPP_RUNTIME_CLASS_INIT(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var);
		GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * L_1;
		L_1 = GameManager_get_GM_mF044B18C61B07C11CC5DF01B430E5C74431C7AA4_inline(/*hidden argument*/NULL);
		int32_t L_2 = __this->get_point_4();
		GameManager_UpdateScore_m54CA912FF9C47361616B3364D7F8056413A91326(L_1, L_2, /*hidden argument*/NULL);
	}

IL_001c:
	{
		// if (Input.GetKeyUp("backspace"))
		bool L_3;
		L_3 = Input_GetKeyUp_m49B2C0996BCBFB9AA6AC8E6431D1D899EDA85785(_stringLiteral710CEFF5A6D94EED332EF2BD41342B8B16B45293, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0032;
		}
	}
	{
		// GameManager.GM.LostLife();
		IL2CPP_RUNTIME_CLASS_INIT(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var);
		GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * L_4;
		L_4 = GameManager_get_GM_mF044B18C61B07C11CC5DF01B430E5C74431C7AA4_inline(/*hidden argument*/NULL);
		GameManager_LostLife_m603C8F61ECAC1533CB7ADA99334A85151F97CCF6(L_4, /*hidden argument*/NULL);
	}

IL_0032:
	{
		// }//end Update()
		return;
	}
}
// System.Void TestGame::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TestGame__ctor_mA8536234FEAB28B1A6913AA4DDDD8EFEE97994E4 (TestGame_tBE1EB8C9119DE68B57C0CE8A6284EF8371A532C4 * __this, const RuntimeMethod* method)
{
	{
		// public int point = 100;
		__this->set_point_4(((int32_t)100));
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method)
{
	{
		float L_0 = ___x0;
		__this->set_x_2(L_0);
		float L_1 = ___y1;
		__this->set_y_3(L_1);
		float L_2 = ___z2;
		__this->set_z_4(L_2);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * GameManager_get_GM_mF044B18C61B07C11CC5DF01B430E5C74431C7AA4_inline (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// static public GameManager GM { get { return gm; } } //public access to read only gm
		IL2CPP_RUNTIME_CLASS_INIT(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var);
		GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * L_0 = ((GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var))->get_gm_4();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void GameManager_SetGameState_m4A3373138A9A26FA064BCA104F59933F8982FA28_inline (GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * __this, int32_t ___state0, const RuntimeMethod* method)
{
	{
		// this.gameState = state;
		int32_t L_0 = ___state0;
		__this->set_gameState_5(L_0);
		// }//end SetGameState()
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t GameManager_get_Lives_m71273C4F0EAB39C5FD4CC98D503FECA962C6F6C3_inline (GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public int Lives { get { return lives; } set { lives = value; } }//access to static variable lives [get/set methods]
		IL2CPP_RUNTIME_CLASS_INIT(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var);
		int32_t L_0 = ((GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var))->get_lives_18();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t GameManager_get_Score_mF57A9A41AE4A9761FE592CACE4D013791D285653_inline (GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public int Score { get { return score; } set { score = value; } }//access to static variable score [get/set methods]
		IL2CPP_RUNTIME_CLASS_INIT(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var);
		int32_t L_0 = ((GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var))->get_score_19();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t GameManager_get_HighScore_mCE8DDEE2A8C509DC05B997E126968B03D35B1FAE_inline (GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public int HighScore { get { return highScore; } set { highScore = value; } }//access to private variable highScore [get/set methods]
		IL2CPP_RUNTIME_CLASS_INIT(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var);
		int32_t L_0 = ((GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var))->get_highScore_11();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Hero_get_shieldLevel_m24D5C4DBFACC2941B922F03F66FC62D67BB6EAE7_inline (Hero_t16A1E1C16C807818D862612A955C5FFB6C878D0C * __this, const RuntimeMethod* method)
{
	{
		// get { return (_shieldLevel); }
		float L_0 = __this->get__shieldLevel_14();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, float ___d1, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___a0;
		float L_1 = L_0.get_x_2();
		float L_2 = ___d1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3 = ___a0;
		float L_4 = L_3.get_y_3();
		float L_5 = ___d1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6 = ___a0;
		float L_7 = L_6.get_z_4();
		float L_8 = ___d1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_9), ((float)il2cpp_codegen_multiply((float)L_1, (float)L_2)), ((float)il2cpp_codegen_multiply((float)L_4, (float)L_5)), ((float)il2cpp_codegen_multiply((float)L_7, (float)L_8)), /*hidden argument*/NULL);
		V_0 = L_9;
		goto IL_0021;
	}

IL_0021:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10 = V_0;
		return L_10;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Vector2_op_Multiply_mC7A7802352867555020A90205EBABA56EE5E36CB_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___a0, float ___d1, const RuntimeMethod* method)
{
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_0 = ___a0;
		float L_1 = L_0.get_x_0();
		float L_2 = ___d1;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_3 = ___a0;
		float L_4 = L_3.get_y_1();
		float L_5 = ___d1;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_6;
		memset((&L_6), 0, sizeof(L_6));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_6), ((float)il2cpp_codegen_multiply((float)L_1, (float)L_2)), ((float)il2cpp_codegen_multiply((float)L_4, (float)L_5)), /*hidden argument*/NULL);
		V_0 = L_6;
		goto IL_0019;
	}

IL_0019:
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_7 = V_0;
		return L_7;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Vector2_op_Addition_m5EACC2AEA80FEE29F380397CF1F4B11D04BE71CC_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___a0, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___b1, const RuntimeMethod* method)
{
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_0 = ___a0;
		float L_1 = L_0.get_x_0();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_2 = ___b1;
		float L_3 = L_2.get_x_0();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_4 = ___a0;
		float L_5 = L_4.get_y_1();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_6 = ___b1;
		float L_7 = L_6.get_y_1();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_8;
		memset((&L_8), 0, sizeof(L_8));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_8), ((float)il2cpp_codegen_add((float)L_1, (float)L_3)), ((float)il2cpp_codegen_add((float)L_5, (float)L_7)), /*hidden argument*/NULL);
		V_0 = L_8;
		goto IL_0023;
	}

IL_0023:
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_9 = V_0;
		return L_9;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * __this, float ___x0, float ___y1, const RuntimeMethod* method)
{
	{
		float L_0 = ___x0;
		__this->set_x_0(L_0);
		float L_1 = ___y1;
		__this->set_y_1(L_1);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Queue_1_get_Count_mD618588C9785F06D043BE6AAD0A0B8116B2A77A3_gshared_inline (Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get__size_3();
		return (int32_t)L_0;
	}
}
