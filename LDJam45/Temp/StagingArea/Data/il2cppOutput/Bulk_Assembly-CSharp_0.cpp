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
struct VirtActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
struct GenericVirtActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
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
struct GenericInterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};

// BatAI
struct BatAI_t3670615739;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t3962482529;
// UnityEngine.Object
struct Object_t631007953;
// Player
struct Player_t3266647312;
// UnityEngine.Component
struct Component_t1923634451;
// UnityEngine.Transform
struct Transform_t3600365921;
// UnityEngine.Collision2D
struct Collision2D_t2842956331;
// UnityEngine.GameObject
struct GameObject_t1113636619;
// Entity
struct Entity_t3391956725;
// BossSequence
struct BossSequence_t1258426188;
// System.Collections.IEnumerator
struct IEnumerator_t1853284238;
// UnityEngine.Coroutine
struct Coroutine_t3829159415;
// BossSequence/<Sequence>c__Iterator0
struct U3CSequenceU3Ec__Iterator0_t114495004;
// BossSequence/<FallIn>c__Iterator1
struct U3CFallInU3Ec__Iterator1_t4176106444;
// BossSequence/<FadeToBlack>c__Iterator2
struct U3CFadeToBlackU3Ec__Iterator2_t2817112667;
// BossSequence/<FadeIn>c__Iterator3
struct U3CFadeInU3Ec__Iterator3_t3083571303;
// BossSequence/<WaitForPlayerToEnterTrigger>c__Iterator4
struct U3CWaitForPlayerToEnterTriggerU3Ec__Iterator4_t2176132566;
// UnityEngine.Collider2D
struct Collider2D_t2806799626;
// BossSequence/<EnterBoss>c__Iterator5
struct U3CEnterBossU3Ec__Iterator5_t1783282016;
// BossSequence/<WaitBossDead>c__Iterator6
struct U3CWaitBossDeadU3Ec__Iterator6_t3050784709;
// BossSequence/<WinScreen>c__Iterator7
struct U3CWinScreenU3Ec__Iterator7_t2096093272;
// UnityEngine.Camera
struct Camera_t4157153871;
// VoidAI
struct VoidAI_t4181225430;
// UnityEngine.WaitForSeconds
struct WaitForSeconds_t1699091251;
// CameraFollow
struct CameraFollow_t129522575;
// UnityEngine.AudioSource
struct AudioSource_t3935305588;
// System.NotSupportedException
struct NotSupportedException_t1314879016;
// UnityEngine.Behaviour
struct Behaviour_t1437897464;
// MusicManager
struct MusicManager_t3024629483;
// DeadScreen
struct DeadScreen_t3234016418;
// System.String
struct String_t;
// DeadScreen/<FadeInBack>c__Iterator0
struct U3CFadeInBackU3Ec__Iterator0_t2620013686;
// DeathParticle
struct DeathParticle_t1563849671;
// DeathParticle/<DestorySelf>c__Iterator0
struct U3CDestorySelfU3Ec__Iterator0_t3880288534;
// Particle[]
struct ParticleU5BU5D_t3335713388;
// System.Object[]
struct ObjectU5BU5D_t2843939325;
// Particle
struct Particle_t3168132017;
// Door
struct Door_t3715198229;
// System.Exception
struct Exception_t;
// MessagePopup
struct MessagePopup_t1375170899;
// LevelLoader
struct LevelLoader_t3964987435;
// EnemyNodeComparer
struct EnemyNodeComparer_t2029075025;
// SkellyAI
struct SkellyAI_t2611779661;
// Weapon
struct Weapon_t4063826929;
// UnityEngine.Rigidbody2D
struct Rigidbody2D_t939494601;
// System.Collections.Generic.Dictionary`2<EntityState,System.String>
struct Dictionary_2_t26093461;
// System.Collections.Generic.Dictionary`2<EntityState,System.Object>
struct Dictionary_2_t1258748936;
// System.Collections.Generic.List`1<EntityStateAnimationMapping>
struct List_1_t3967944201;
// UnityEngine.Animator
struct Animator_t434523843;
// UnityEngine.SpriteRenderer
struct SpriteRenderer_t3235626157;
// PrefabResource
struct PrefabResource_t3713134029;
// Entity/OnDie
struct OnDie_t3469385283;
// System.IAsyncResult
struct IAsyncResult_t767004451;
// System.AsyncCallback
struct AsyncCallback_t3962456242;
// GameInit
struct GameInit_t412799062;
// Grass
struct Grass_t1377767949;
// Grass/<PickNewAngle>c__Iterator0
struct U3CPickNewAngleU3Ec__Iterator0_t696507028;
// HealthPickup
struct HealthPickup_t2182775939;
// IntroSequence
struct IntroSequence_t4248026603;
// UnityEngine.UI.Button
struct Button_t4055032469;
// UnityEngine.UI.Button/ButtonClickedEvent
struct ButtonClickedEvent_t48803504;
// UnityEngine.Events.UnityAction
struct UnityAction_t3245792599;
// UnityEngine.Events.UnityEvent
struct UnityEvent_t2581268647;
// IntroSequence/<Intro>c__Iterator0
struct U3CIntroU3Ec__Iterator0_t2006384748;
// IntroSequence/<PlayerWalkUp>c__Iterator1
struct U3CPlayerWalkUpU3Ec__Iterator1_t3977936990;
// IntroSequence/<WaitForPlayClick>c__Iterator2
struct U3CWaitForPlayClickU3Ec__Iterator2_t2451926618;
// IntroSequence/<FadeInButton>c__Iterator3
struct U3CFadeInButtonU3Ec__Iterator3_t3780138571;
// IntroSequence/<FadeOutButton>c__Iterator4
struct U3CFadeOutButtonU3Ec__Iterator4_t2877370097;
// IntroSequence/<PlayerWalkOffscreen>c__Iterator5
struct U3CPlayerWalkOffscreenU3Ec__Iterator5_t3609804094;
// UnityEngine.UI.Image
struct Image_t2670269651;
// UnityEngine.UI.Text
struct Text_t1901882714;
// PlayerHealthBar
struct PlayerHealthBar_t2127847235;
// Level
struct Level_t2237665516;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_t3328599146;
// Door[]
struct DoorU5BU5D_t160537336;
// Level[]
struct LevelU5BU5D_t979096037;
// Weapon[]
struct WeaponU5BU5D_t718049580;
// HealthPickup[]
struct HealthPickupU5BU5D_t3497542162;
// Entity[]
struct EntityU5BU5D_t1586060696;
// System.Collections.Generic.List`1<Level>
struct List_1_t3709740258;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t257213610;
// Message
struct Message_t4258767382;
// System.Collections.Generic.Queue`1<Message>
struct Queue_1_t4105026876;
// System.Collections.Generic.Queue`1<System.Object>
struct Queue_1_t2926365658;
// MessagePopup/<ShowNext>c__Iterator0
struct U3CShowNextU3Ec__Iterator0_t3465437423;
// MusicManager/<PlayNext>c__Iterator0
struct U3CPlayNextU3Ec__Iterator0_t875241714;
// MusicManager/<FadeOut>c__Iterator1
struct U3CFadeOutU3Ec__Iterator1_t1868721799;
// UnityEngine.AudioClip
struct AudioClip_t3680889665;
// Node
struct Node_t2989995042;
// ParticleSpawner
struct ParticleSpawner_t2092424095;
// UpParticle
struct UpParticle_t1684764610;
// System.Delegate
struct Delegate_t1188392813;
// ScreenShake
struct ScreenShake_t2214968455;
// ScreenShake/<DoShake>c__Iterator0
struct U3CDoShakeU3Ec__Iterator0_t3406541319;
// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_t2585711361;
// System.Collections.Generic.IEnumerable`1<UnityEngine.GameObject>
struct IEnumerable_1_t93489508;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_t2059959053;
// System.Collections.Generic.IComparer`1<UnityEngine.GameObject>
struct IComparer_1_t2367902098;
// System.Collections.Generic.IComparer`1<System.Object>
struct IComparer_1_t39404347;
// VoidAI/<Jump>c__Iterator0
struct U3CJumpU3Ec__Iterator0_t230413210;
// VoidAI/<DoAttacks>c__Iterator1
struct U3CDoAttacksU3Ec__Iterator1_t81260554;
// Weapon/<WaitAttackDuration>c__Iterator0
struct U3CWaitAttackDurationU3Ec__Iterator0_t664319700;
// Message[]
struct MessageU5BU5D_t1300600019;
// UnityEngine.Events.InvokableCallList
struct InvokableCallList_t2498835369;
// UnityEngine.Events.PersistentCallGroup
struct PersistentCallGroup_t3050769227;
// EntityStateAnimationMapping[]
struct EntityStateAnimationMappingU5BU5D_t3177061442;
// System.Int32[]
struct Int32U5BU5D_t385246372;
// System.Collections.Generic.Link[]
struct LinkU5BU5D_t964245573;
// EntityState[]
struct EntityStateU5BU5D_t3970143109;
// System.String[]
struct StringU5BU5D_t1281789340;
// System.Collections.Generic.IEqualityComparer`1<EntityState>
struct IEqualityComparer_1_t1579011454;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t950877179;
// System.Collections.Generic.Dictionary`2/Transform`1<EntityState,System.String,System.Collections.DictionaryEntry>
struct Transform_1_t4217158323;
// System.IntPtr[]
struct IntPtrU5BU5D_t4013366056;
// System.Collections.IDictionary
struct IDictionary_t1363984059;
// System.Char[]
struct CharU5BU5D_t3528271667;
// System.Void
struct Void_t1185182177;
// UnityEngine.Sprite
struct Sprite_t280657092;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.DelegateData
struct DelegateData_t1677132599;
// UnityEngine.ContactPoint2D[]
struct ContactPoint2DU5BU5D_t96683501;
// UnityEngine.UI.Selectable
struct Selectable_t3250028441;
// UnityEngine.AudioClip/PCMReaderCallback
struct PCMReaderCallback_t1677636661;
// UnityEngine.AudioClip/PCMSetPositionCallback
struct PCMSetPositionCallback_t1059417452;
// UnityEngine.Camera/CameraCallback
struct CameraCallback_t190067161;
// UnityEngine.AudioSourceExtension
struct AudioSourceExtension_t3064908834;
// UnityEngine.Transform[]
struct TransformU5BU5D_t807237628;
// UnityEngine.AudioClip[]
struct AudioClipU5BU5D_t143221404;
// DirectionToStartMapping[]
struct DirectionToStartMappingU5BU5D_t4001959641;
// UnityEngine.Material
struct Material_t340375123;
// UnityEngine.Texture2D
struct Texture2D_t3840446185;
// UnityEngine.RectTransform
struct RectTransform_t3704657025;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_t2598313366;
// UnityEngine.Canvas
struct Canvas_t3310196443;
// UnityEngine.Mesh
struct Mesh_t3648964284;
// UnityEngine.UI.VertexHelper
struct VertexHelper_t2453304189;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_t3055525458;
// System.Collections.Generic.List`1<UnityEngine.UI.Selectable>
struct List_1_t427135887;
// UnityEngine.UI.AnimationTriggers
struct AnimationTriggers_t2532145056;
// UnityEngine.UI.Graphic
struct Graphic_t1660335611;
// System.Collections.Generic.List`1<UnityEngine.CanvasGroup>
struct List_1_t1260619206;
// UnityEngine.UI.RectMask2D
struct RectMask2D_t3474889437;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t3661388177;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t1718750761;
// UnityEngine.UI.FontData
struct FontData_t746620069;
// UnityEngine.TextGenerator
struct TextGenerator_t3211863866;
// UnityEngine.UIVertex[]
struct UIVertexU5BU5D_t1981460040;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_t1457185986;
// System.Collections.Generic.List`1<UnityEngine.UI.Image>
struct List_1_t4142344393;
// System.Action`1<UnityEngine.U2D.SpriteAtlas>
struct Action_1_t819399007;

extern RuntimeClass* Object_t631007953_il2cpp_TypeInfo_var;
extern RuntimeClass* Vector2_t2156229523_il2cpp_TypeInfo_var;
extern const RuntimeMethod* Object_FindObjectOfType_TisPlayer_t3266647312_m389548692_RuntimeMethod_var;
extern const uint32_t BatAI_Update_m1051438735_MetadataUsageId;
extern const uint32_t BatAI_OnCollisionStay2D_m420987972_MetadataUsageId;
extern RuntimeClass* String_t_il2cpp_TypeInfo_var;
extern const uint32_t BossSequence_Start_m2000204616_MetadataUsageId;
extern RuntimeClass* U3CSequenceU3Ec__Iterator0_t114495004_il2cpp_TypeInfo_var;
extern const uint32_t BossSequence_Sequence_m4274354410_MetadataUsageId;
extern RuntimeClass* U3CFallInU3Ec__Iterator1_t4176106444_il2cpp_TypeInfo_var;
extern const uint32_t BossSequence_FallIn_m3389816209_MetadataUsageId;
extern RuntimeClass* U3CFadeToBlackU3Ec__Iterator2_t2817112667_il2cpp_TypeInfo_var;
extern const uint32_t BossSequence_FadeToBlack_m833894443_MetadataUsageId;
extern RuntimeClass* U3CFadeInU3Ec__Iterator3_t3083571303_il2cpp_TypeInfo_var;
extern const uint32_t BossSequence_FadeIn_m752122934_MetadataUsageId;
extern RuntimeClass* U3CWaitForPlayerToEnterTriggerU3Ec__Iterator4_t2176132566_il2cpp_TypeInfo_var;
extern const uint32_t BossSequence_WaitForPlayerToEnterTrigger_m1039393221_MetadataUsageId;
extern const RuntimeMethod* Component_GetComponent_TisPlayer_t3266647312_m3431077271_RuntimeMethod_var;
extern const uint32_t BossSequence_OnTriggerEnter2D_m2704645033_MetadataUsageId;
extern RuntimeClass* U3CEnterBossU3Ec__Iterator5_t1783282016_il2cpp_TypeInfo_var;
extern const uint32_t BossSequence_EnterBoss_m3186382248_MetadataUsageId;
extern RuntimeClass* U3CWaitBossDeadU3Ec__Iterator6_t3050784709_il2cpp_TypeInfo_var;
extern const uint32_t BossSequence_WaitBossDead_m3885589739_MetadataUsageId;
extern RuntimeClass* U3CWinScreenU3Ec__Iterator7_t2096093272_il2cpp_TypeInfo_var;
extern const uint32_t BossSequence_WinScreen_m541912785_MetadataUsageId;
extern RuntimeClass* Vector3_t3722313464_il2cpp_TypeInfo_var;
extern RuntimeClass* WaitForSeconds_t1699091251_il2cpp_TypeInfo_var;
extern const RuntimeMethod* Component_GetComponent_TisCameraFollow_t129522575_m2586956313_RuntimeMethod_var;
extern String_t* _stringLiteral1751935316;
extern const uint32_t U3CEnterBossU3Ec__Iterator5_MoveNext_m3458584578_MetadataUsageId;
extern RuntimeClass* NotSupportedException_t1314879016_il2cpp_TypeInfo_var;
extern const RuntimeMethod* U3CEnterBossU3Ec__Iterator5_Reset_m2318588171_RuntimeMethod_var;
extern const uint32_t U3CEnterBossU3Ec__Iterator5_Reset_m2318588171_MetadataUsageId;
extern const RuntimeMethod* U3CFadeInU3Ec__Iterator3_Reset_m2216455399_RuntimeMethod_var;
extern const uint32_t U3CFadeInU3Ec__Iterator3_Reset_m2216455399_MetadataUsageId;
extern const RuntimeMethod* U3CFadeToBlackU3Ec__Iterator2_Reset_m2303301955_RuntimeMethod_var;
extern const uint32_t U3CFadeToBlackU3Ec__Iterator2_Reset_m2303301955_MetadataUsageId;
extern const uint32_t U3CFallInU3Ec__Iterator1_MoveNext_m115178457_MetadataUsageId;
extern const RuntimeMethod* U3CFallInU3Ec__Iterator1_Reset_m2472767275_RuntimeMethod_var;
extern const uint32_t U3CFallInU3Ec__Iterator1_Reset_m2472767275_MetadataUsageId;
extern const uint32_t U3CSequenceU3Ec__Iterator0_MoveNext_m1850678376_MetadataUsageId;
extern const RuntimeMethod* U3CSequenceU3Ec__Iterator0_Reset_m623534805_RuntimeMethod_var;
extern const uint32_t U3CSequenceU3Ec__Iterator0_Reset_m623534805_MetadataUsageId;
extern const RuntimeMethod* Component_GetComponent_TisEntity_t3391956725_m1664670758_RuntimeMethod_var;
extern const uint32_t U3CWaitBossDeadU3Ec__Iterator6_MoveNext_m2272936345_MetadataUsageId;
extern const RuntimeMethod* U3CWaitBossDeadU3Ec__Iterator6_Reset_m1040014548_RuntimeMethod_var;
extern const uint32_t U3CWaitBossDeadU3Ec__Iterator6_Reset_m1040014548_MetadataUsageId;
extern const RuntimeMethod* U3CWaitForPlayerToEnterTriggerU3Ec__Iterator4_Reset_m3779369590_RuntimeMethod_var;
extern const uint32_t U3CWaitForPlayerToEnterTriggerU3Ec__Iterator4_Reset_m3779369590_MetadataUsageId;
extern RuntimeClass* Input_t1431474628_il2cpp_TypeInfo_var;
extern String_t* _stringLiteral3147613217;
extern const uint32_t U3CWinScreenU3Ec__Iterator7_MoveNext_m3895457074_MetadataUsageId;
extern const RuntimeMethod* U3CWinScreenU3Ec__Iterator7_Reset_m619298565_RuntimeMethod_var;
extern const uint32_t U3CWinScreenU3Ec__Iterator7_Reset_m619298565_MetadataUsageId;
extern const uint32_t CameraFollow_Update_m2790158597_MetadataUsageId;
extern const uint32_t CameraFollow_JumpTo_m933176623_MetadataUsageId;
extern const RuntimeMethod* Object_FindObjectOfType_TisDeadScreen_t3234016418_m2550196054_RuntimeMethod_var;
extern const uint32_t DeadScreen_get_Instance_m1284687975_MetadataUsageId;
extern const uint32_t DeadScreen_Update_m3355167848_MetadataUsageId;
extern RuntimeClass* U3CFadeInBackU3Ec__Iterator0_t2620013686_il2cpp_TypeInfo_var;
extern const uint32_t DeadScreen_FadeInBack_m2646124790_MetadataUsageId;
extern const RuntimeMethod* U3CFadeInBackU3Ec__Iterator0_Reset_m2362835419_RuntimeMethod_var;
extern const uint32_t U3CFadeInBackU3Ec__Iterator0_Reset_m2362835419_MetadataUsageId;
extern const RuntimeMethod* Object_Instantiate_TisGameObject_t1113636619_m4130575780_RuntimeMethod_var;
extern const uint32_t DeathParticle_Spawn_m1747827968_MetadataUsageId;
extern RuntimeClass* U3CDestorySelfU3Ec__Iterator0_t3880288534_il2cpp_TypeInfo_var;
extern const uint32_t DeathParticle_DestorySelf_m475054106_MetadataUsageId;
extern const RuntimeMethod* Component_GetComponentsInChildren_TisParticle_t3168132017_m4250776686_RuntimeMethod_var;
extern const uint32_t U3CDestorySelfU3Ec__Iterator0_MoveNext_m257090863_MetadataUsageId;
extern const RuntimeMethod* U3CDestorySelfU3Ec__Iterator0_Reset_m2923211260_RuntimeMethod_var;
extern const uint32_t U3CDestorySelfU3Ec__Iterator0_Reset_m2923211260_MetadataUsageId;
extern RuntimeClass* DoorDirection_t488480648_il2cpp_TypeInfo_var;
extern RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
extern const RuntimeMethod* Door_Opposite_m4194424780_RuntimeMethod_var;
extern String_t* _stringLiteral2107521751;
extern const uint32_t Door_Opposite_m4194424780_MetadataUsageId;
extern String_t* _stringLiteral572433886;
extern const uint32_t Door_OnTriggerEnter2D_m2782650637_MetadataUsageId;
extern const uint32_t Door_OnTriggerExit2D_m261027791_MetadataUsageId;
extern const uint32_t Door_Update_m1158462231_MetadataUsageId;
extern const uint32_t EnemyNodeComparer_Compare_m917280223_MetadataUsageId;
extern const RuntimeMethod* Component_GetComponent_TisRigidbody2D_t939494601_m1531613439_RuntimeMethod_var;
extern const uint32_t Entity_TakeDamage_m239986278_MetadataUsageId;
extern RuntimeClass* Dictionary_2_t26093461_il2cpp_TypeInfo_var;
extern const RuntimeMethod* Dictionary_2__ctor_m327346751_RuntimeMethod_var;
extern const RuntimeMethod* List_1_GetEnumerator_m2765381048_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_get_Current_m4060103381_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2_Add_m3007986313_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_MoveNext_m1755039323_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_Dispose_m2046819164_RuntimeMethod_var;
extern const RuntimeMethod* List_1_Clear_m3690193696_RuntimeMethod_var;
extern const uint32_t Entity_Start_m2858852706_MetadataUsageId;
extern const RuntimeMethod* Dictionary_2_ContainsKey_m1345678609_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2_get_Item_m2654463680_RuntimeMethod_var;
extern const uint32_t Entity_Update_m1477389504_MetadataUsageId;
extern RuntimeClass* Quaternion_t2301928331_il2cpp_TypeInfo_var;
extern const RuntimeMethod* Object_Instantiate_TisDeathParticle_t1563849671_m1714186665_RuntimeMethod_var;
extern const uint32_t Entity_Die_m1951964753_MetadataUsageId;
extern const uint32_t Entity_ResetAttackTimer_m2795665490_MetadataUsageId;
extern const uint32_t Entity_DoWeaponAttack_m2033153511_MetadataUsageId;
extern const uint32_t Grass_Start_m824388593_MetadataUsageId;
extern const uint32_t Grass_Update_m4212941726_MetadataUsageId;
extern RuntimeClass* U3CPickNewAngleU3Ec__Iterator0_t696507028_il2cpp_TypeInfo_var;
extern const uint32_t Grass_PickNewAngle_m1899737026_MetadataUsageId;
extern const uint32_t U3CPickNewAngleU3Ec__Iterator0_MoveNext_m3125160906_MetadataUsageId;
extern const RuntimeMethod* U3CPickNewAngleU3Ec__Iterator0_Reset_m4032911234_RuntimeMethod_var;
extern const uint32_t U3CPickNewAngleU3Ec__Iterator0_Reset_m4032911234_MetadataUsageId;
extern const RuntimeMethod* GameObject_GetComponent_TisPlayer_t3266647312_m4068145281_RuntimeMethod_var;
extern const uint32_t HealthPickup_OnTriggerEnter2D_m2587496523_MetadataUsageId;
extern RuntimeClass* UnityAction_t3245792599_il2cpp_TypeInfo_var;
extern const RuntimeMethod* IntroSequence_OnClickPlay_m2706413630_RuntimeMethod_var;
extern const uint32_t IntroSequence_Start_m3735851395_MetadataUsageId;
extern const uint32_t IntroSequence_OnClickPlay_m2706413630_MetadataUsageId;
extern RuntimeClass* U3CIntroU3Ec__Iterator0_t2006384748_il2cpp_TypeInfo_var;
extern const uint32_t IntroSequence_Intro_m2395395217_MetadataUsageId;
extern RuntimeClass* U3CPlayerWalkUpU3Ec__Iterator1_t3977936990_il2cpp_TypeInfo_var;
extern const uint32_t IntroSequence_PlayerWalkUp_m3501030825_MetadataUsageId;
extern RuntimeClass* U3CWaitForPlayClickU3Ec__Iterator2_t2451926618_il2cpp_TypeInfo_var;
extern const uint32_t IntroSequence_WaitForPlayClick_m1494139642_MetadataUsageId;
extern RuntimeClass* U3CFadeInButtonU3Ec__Iterator3_t3780138571_il2cpp_TypeInfo_var;
extern const uint32_t IntroSequence_FadeInButton_m2572672586_MetadataUsageId;
extern RuntimeClass* U3CFadeOutButtonU3Ec__Iterator4_t2877370097_il2cpp_TypeInfo_var;
extern const uint32_t IntroSequence_FadeOutButton_m1652046706_MetadataUsageId;
extern RuntimeClass* U3CPlayerWalkOffscreenU3Ec__Iterator5_t3609804094_il2cpp_TypeInfo_var;
extern const uint32_t IntroSequence_PlayerWalkOffscreen_m1885669268_MetadataUsageId;
extern const RuntimeMethod* Component_GetComponent_TisImage_t2670269651_m980647750_RuntimeMethod_var;
extern const RuntimeMethod* Component_GetComponentInChildren_TisText_t1901882714_m396351542_RuntimeMethod_var;
extern const uint32_t U3CFadeInButtonU3Ec__Iterator3_MoveNext_m3001906529_MetadataUsageId;
extern const RuntimeMethod* U3CFadeInButtonU3Ec__Iterator3_Reset_m4086782520_RuntimeMethod_var;
extern const uint32_t U3CFadeInButtonU3Ec__Iterator3_Reset_m4086782520_MetadataUsageId;
extern RuntimeClass* Mathf_t3464937446_il2cpp_TypeInfo_var;
extern const uint32_t U3CFadeOutButtonU3Ec__Iterator4_MoveNext_m2572214445_MetadataUsageId;
extern const RuntimeMethod* U3CFadeOutButtonU3Ec__Iterator4_Reset_m244525034_RuntimeMethod_var;
extern const uint32_t U3CFadeOutButtonU3Ec__Iterator4_Reset_m244525034_MetadataUsageId;
extern const RuntimeMethod* GameObject_GetComponent_TisPlayerHealthBar_t2127847235_m2834258027_RuntimeMethod_var;
extern String_t* _stringLiteral2793515199;
extern const uint32_t U3CIntroU3Ec__Iterator0_MoveNext_m998214404_MetadataUsageId;
extern const RuntimeMethod* U3CIntroU3Ec__Iterator0_Reset_m4052536426_RuntimeMethod_var;
extern const uint32_t U3CIntroU3Ec__Iterator0_Reset_m4052536426_MetadataUsageId;
extern const uint32_t U3CPlayerWalkOffscreenU3Ec__Iterator5_MoveNext_m1712240710_MetadataUsageId;
extern const RuntimeMethod* U3CPlayerWalkOffscreenU3Ec__Iterator5_Reset_m3725662755_RuntimeMethod_var;
extern const uint32_t U3CPlayerWalkOffscreenU3Ec__Iterator5_Reset_m3725662755_MetadataUsageId;
extern const uint32_t U3CPlayerWalkUpU3Ec__Iterator1_MoveNext_m501019420_MetadataUsageId;
extern const RuntimeMethod* U3CPlayerWalkUpU3Ec__Iterator1_Reset_m3232860456_RuntimeMethod_var;
extern const uint32_t U3CPlayerWalkUpU3Ec__Iterator1_Reset_m3232860456_MetadataUsageId;
extern const RuntimeMethod* U3CWaitForPlayClickU3Ec__Iterator2_Reset_m1379856562_RuntimeMethod_var;
extern const uint32_t U3CWaitForPlayClickU3Ec__Iterator2_Reset_m1379856562_MetadataUsageId;
extern const RuntimeMethod* Component_GetComponentsInChildren_TisDoor_t3715198229_m363290377_RuntimeMethod_var;
extern const uint32_t Level_Load_m236525255_MetadataUsageId;
extern const RuntimeMethod* Object_FindObjectOfType_TisLevelLoader_t3964987435_m1930945093_RuntimeMethod_var;
extern const uint32_t LevelLoader_get_Instance_m1614870452_MetadataUsageId;
extern const uint32_t LevelLoader_Start_m627304286_MetadataUsageId;
extern const RuntimeMethod* Object_FindObjectsOfType_TisLevel_t2237665516_m4214053556_RuntimeMethod_var;
extern const RuntimeMethod* Object_FindObjectsOfType_TisWeapon_t4063826929_m3634948528_RuntimeMethod_var;
extern const RuntimeMethod* Object_FindObjectsOfType_TisHealthPickup_t2182775939_m3785758616_RuntimeMethod_var;
extern const RuntimeMethod* Object_FindObjectsOfType_TisEntity_t3391956725_m1410175250_RuntimeMethod_var;
extern const uint32_t LevelLoader_DestoryAllLevels_m950108988_MetadataUsageId;
extern RuntimeClass* List_1_t3709740258_il2cpp_TypeInfo_var;
extern const RuntimeMethod* List_1__ctor_m489004955_RuntimeMethod_var;
extern const RuntimeMethod* List_1_Add_m270033829_RuntimeMethod_var;
extern const RuntimeMethod* List_1_get_Count_m157552029_RuntimeMethod_var;
extern const RuntimeMethod* List_1_get_Item_m1639925114_RuntimeMethod_var;
extern const RuntimeMethod* Object_Instantiate_TisLevel_t2237665516_m21667887_RuntimeMethod_var;
extern const uint32_t LevelLoader_LoadLevel_m2719355285_MetadataUsageId;
extern const RuntimeMethod* Object_Instantiate_TisWeapon_t4063826929_m4119154349_RuntimeMethod_var;
extern const uint32_t LevelLoader_Spawn_m506406773_MetadataUsageId;
extern const RuntimeMethod* Object_Instantiate_TisHealthPickup_t2182775939_m3135568745_RuntimeMethod_var;
extern const uint32_t LevelLoader_Spawn_m3218970357_MetadataUsageId;
extern const RuntimeMethod* Object_Instantiate_TisEntity_t3391956725_m3915256508_RuntimeMethod_var;
extern const uint32_t LevelLoader_Spawn_m2273037782_MetadataUsageId;
extern const RuntimeMethod* Object_FindObjectOfType_TisMessagePopup_t1375170899_m653125726_RuntimeMethod_var;
extern const uint32_t MessagePopup_get_Instance_m3005294533_MetadataUsageId;
extern RuntimeClass* Queue_1_t4105026876_il2cpp_TypeInfo_var;
extern const RuntimeMethod* Queue_1__ctor_m1832640620_RuntimeMethod_var;
extern const uint32_t MessagePopup_Start_m653127965_MetadataUsageId;
extern RuntimeClass* Message_t4258767382_il2cpp_TypeInfo_var;
extern const RuntimeMethod* Queue_1_Enqueue_m2658102913_RuntimeMethod_var;
extern const uint32_t MessagePopup_ShowMessage_m3946694855_MetadataUsageId;
extern const RuntimeMethod* Queue_1_get_Count_m816568897_RuntimeMethod_var;
extern const uint32_t MessagePopup_Update_m503939531_MetadataUsageId;
extern RuntimeClass* U3CShowNextU3Ec__Iterator0_t3465437423_il2cpp_TypeInfo_var;
extern const uint32_t MessagePopup_ShowNext_m2695065269_MetadataUsageId;
extern const RuntimeMethod* Queue_1_Dequeue_m3764746855_RuntimeMethod_var;
extern const uint32_t U3CShowNextU3Ec__Iterator0_MoveNext_m1264815460_MetadataUsageId;
extern const RuntimeMethod* U3CShowNextU3Ec__Iterator0_Reset_m2071107674_RuntimeMethod_var;
extern const uint32_t U3CShowNextU3Ec__Iterator0_Reset_m2071107674_MetadataUsageId;
extern const RuntimeMethod* Object_FindObjectOfType_TisMusicManager_t3024629483_m1742852711_RuntimeMethod_var;
extern const uint32_t MusicManager_get_Instance_m1581818762_MetadataUsageId;
extern const uint32_t MusicManager_Start_m485694106_MetadataUsageId;
extern RuntimeClass* U3CPlayNextU3Ec__Iterator0_t875241714_il2cpp_TypeInfo_var;
extern const uint32_t MusicManager_PlayNext_m590115398_MetadataUsageId;
extern RuntimeClass* U3CFadeOutU3Ec__Iterator1_t1868721799_il2cpp_TypeInfo_var;
extern const uint32_t MusicManager_FadeOut_m3189210292_MetadataUsageId;
extern const RuntimeMethod* U3CFadeOutU3Ec__Iterator1_Reset_m3852849494_RuntimeMethod_var;
extern const uint32_t U3CFadeOutU3Ec__Iterator1_Reset_m3852849494_MetadataUsageId;
extern const RuntimeMethod* U3CPlayNextU3Ec__Iterator0_Reset_m3877278393_RuntimeMethod_var;
extern const uint32_t U3CPlayNextU3Ec__Iterator0_Reset_m3877278393_MetadataUsageId;
extern const RuntimeMethod* Component_GetComponent_TisSpriteRenderer_t3235626157_m2253180502_RuntimeMethod_var;
extern const uint32_t Node_Start_m495890796_MetadataUsageId;
extern const uint32_t Particle_Start_m1265247958_MetadataUsageId;
extern const uint32_t Particle_Update_m4200139228_MetadataUsageId;
extern const RuntimeMethod* Object_Instantiate_TisUpParticle_t1684764610_m1310796528_RuntimeMethod_var;
extern const uint32_t ParticleSpawner_Update_m1265012259_MetadataUsageId;
extern RuntimeClass* Player_t3266647312_il2cpp_TypeInfo_var;
extern RuntimeClass* OnDie_t3469385283_il2cpp_TypeInfo_var;
extern const RuntimeMethod* Player_U3CStartU3Em__0_m1765453766_RuntimeMethod_var;
extern const uint32_t Player_Start_m250748966_MetadataUsageId;
extern const uint32_t Player_DoMovement_m2376241743_MetadataUsageId;
extern const uint32_t Player_DoAttack_m2661824046_MetadataUsageId;
extern String_t* _stringLiteral496717860;
extern const uint32_t Player_U3CStartU3Em__0_m1765453766_MetadataUsageId;
extern const uint32_t PlayerHealthBar_Update_m1601163985_MetadataUsageId;
extern const RuntimeMethod* Object_FindObjectOfType_TisPrefabResource_t3713134029_m3340801862_RuntimeMethod_var;
extern const uint32_t PrefabResource_get_Instance_m593630871_MetadataUsageId;
extern const uint32_t PrefabResource_Start_m2026177683_MetadataUsageId;
extern RuntimeClass* U3CDoShakeU3Ec__Iterator0_t3406541319_il2cpp_TypeInfo_var;
extern const uint32_t ScreenShake_DoShake_m717519948_MetadataUsageId;
extern const uint32_t U3CDoShakeU3Ec__Iterator0_MoveNext_m3972262521_MetadataUsageId;
extern const RuntimeMethod* U3CDoShakeU3Ec__Iterator0_Reset_m1358545620_RuntimeMethod_var;
extern const uint32_t U3CDoShakeU3Ec__Iterator0_Reset_m1358545620_MetadataUsageId;
extern RuntimeClass* EnemyNodeComparer_t2029075025_il2cpp_TypeInfo_var;
extern RuntimeClass* SkellyAI_t2611779661_il2cpp_TypeInfo_var;
extern RuntimeClass* List_1_t2585711361_il2cpp_TypeInfo_var;
extern const RuntimeMethod* List_1__ctor_m1424466557_RuntimeMethod_var;
extern const RuntimeMethod* List_1_AddRange_m2410301057_RuntimeMethod_var;
extern String_t* _stringLiteral2028599422;
extern const uint32_t SkellyAI_Start_m711450739_MetadataUsageId;
extern const uint32_t SkellyAI_Update_m1433677785_MetadataUsageId;
extern const uint32_t SkellyAI_At_m3553782217_MetadataUsageId;
extern const RuntimeMethod* List_1_Sort_m4152420986_RuntimeMethod_var;
extern const RuntimeMethod* List_1_get_Count_m2812834599_RuntimeMethod_var;
extern const RuntimeMethod* List_1_Clear_m2500309205_RuntimeMethod_var;
extern const RuntimeMethod* List_1_GetEnumerator_m1750140655_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_get_Current_m4179928398_RuntimeMethod_var;
extern const RuntimeMethod* List_1_Contains_m4222374550_RuntimeMethod_var;
extern const RuntimeMethod* List_1_Add_m2765963565_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_MoveNext_m4286844348_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_Dispose_m1341201278_RuntimeMethod_var;
extern const uint32_t SkellyAI_PickNextNode_m1968847928_MetadataUsageId;
extern const uint32_t SkellyAI_OnCollisionStay2D_m1787522204_MetadataUsageId;
extern const uint32_t UpParticle_Update_m816190679_MetadataUsageId;
extern const uint32_t VoidAI_JumpTo_m2241273342_MetadataUsageId;
extern RuntimeClass* U3CJumpU3Ec__Iterator0_t230413210_il2cpp_TypeInfo_var;
extern const uint32_t VoidAI_Jump_m4059975097_MetadataUsageId;
extern RuntimeClass* U3CDoAttacksU3Ec__Iterator1_t81260554_il2cpp_TypeInfo_var;
extern const uint32_t VoidAI_DoAttacks_m3003784595_MetadataUsageId;
extern const uint32_t VoidAI_OnCollisionEnter2D_m2848975947_MetadataUsageId;
extern const uint32_t U3CDoAttacksU3Ec__Iterator1_MoveNext_m3034661601_MetadataUsageId;
extern const RuntimeMethod* U3CDoAttacksU3Ec__Iterator1_Reset_m4226249969_RuntimeMethod_var;
extern const uint32_t U3CDoAttacksU3Ec__Iterator1_Reset_m4226249969_MetadataUsageId;
extern const RuntimeMethod* Component_GetComponent_TisScreenShake_t2214968455_m1410286607_RuntimeMethod_var;
extern const uint32_t U3CJumpU3Ec__Iterator0_MoveNext_m1426929735_MetadataUsageId;
extern const RuntimeMethod* U3CJumpU3Ec__Iterator0_Reset_m1603441515_RuntimeMethod_var;
extern const uint32_t U3CJumpU3Ec__Iterator0_Reset_m1603441515_MetadataUsageId;
extern const RuntimeMethod* Component_GetComponent_TisAudioSource_t3935305588_m1977431131_RuntimeMethod_var;
extern const uint32_t Weapon_DoAttack_m3684433822_MetadataUsageId;
extern RuntimeClass* U3CWaitAttackDurationU3Ec__Iterator0_t664319700_il2cpp_TypeInfo_var;
extern const uint32_t Weapon_WaitAttackDuration_m2587918956_MetadataUsageId;
extern RuntimeClass* Weapon_t4063826929_il2cpp_TypeInfo_var;
extern String_t* _stringLiteral2901200384;
extern String_t* _stringLiteral4039432527;
extern const uint32_t Weapon_OnTriggerEnter2D_m2489463344_MetadataUsageId;
extern const uint32_t Weapon__cctor_m3337310628_MetadataUsageId;
extern const uint32_t U3CWaitAttackDurationU3Ec__Iterator0_MoveNext_m4132934264_MetadataUsageId;
extern const RuntimeMethod* U3CWaitAttackDurationU3Ec__Iterator0_Reset_m1227214215_RuntimeMethod_var;
extern const uint32_t U3CWaitAttackDurationU3Ec__Iterator0_Reset_m1227214215_MetadataUsageId;
struct ContactPoint2D_t3390240644 ;

struct ParticleU5BU5D_t3335713388;
struct TransformU5BU5D_t807237628;
struct GameObjectU5BU5D_t3328599146;
struct DirectionToStartMappingU5BU5D_t4001959641;
struct DoorU5BU5D_t160537336;
struct LevelU5BU5D_t979096037;
struct WeaponU5BU5D_t718049580;
struct HealthPickupU5BU5D_t3497542162;
struct EntityU5BU5D_t1586060696;
struct AudioClipU5BU5D_t143221404;


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
#ifndef U3CMODULEU3E_T692745542_H
#define U3CMODULEU3E_T692745542_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct  U3CModuleU3E_t692745542 
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CMODULEU3E_T692745542_H
#ifndef U3CWINSCREENU3EC__ITERATOR7_T2096093272_H
#define U3CWINSCREENU3EC__ITERATOR7_T2096093272_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// BossSequence/<WinScreen>c__Iterator7
struct  U3CWinScreenU3Ec__Iterator7_t2096093272  : public RuntimeObject
{
public:
	// System.Object BossSequence/<WinScreen>c__Iterator7::$current
	RuntimeObject * ___U24current_0;
	// System.Boolean BossSequence/<WinScreen>c__Iterator7::$disposing
	bool ___U24disposing_1;
	// System.Int32 BossSequence/<WinScreen>c__Iterator7::$PC
	int32_t ___U24PC_2;

public:
	inline static int32_t get_offset_of_U24current_0() { return static_cast<int32_t>(offsetof(U3CWinScreenU3Ec__Iterator7_t2096093272, ___U24current_0)); }
	inline RuntimeObject * get_U24current_0() const { return ___U24current_0; }
	inline RuntimeObject ** get_address_of_U24current_0() { return &___U24current_0; }
	inline void set_U24current_0(RuntimeObject * value)
	{
		___U24current_0 = value;
		Il2CppCodeGenWriteBarrier((&___U24current_0), value);
	}

	inline static int32_t get_offset_of_U24disposing_1() { return static_cast<int32_t>(offsetof(U3CWinScreenU3Ec__Iterator7_t2096093272, ___U24disposing_1)); }
	inline bool get_U24disposing_1() const { return ___U24disposing_1; }
	inline bool* get_address_of_U24disposing_1() { return &___U24disposing_1; }
	inline void set_U24disposing_1(bool value)
	{
		___U24disposing_1 = value;
	}

	inline static int32_t get_offset_of_U24PC_2() { return static_cast<int32_t>(offsetof(U3CWinScreenU3Ec__Iterator7_t2096093272, ___U24PC_2)); }
	inline int32_t get_U24PC_2() const { return ___U24PC_2; }
	inline int32_t* get_address_of_U24PC_2() { return &___U24PC_2; }
	inline void set_U24PC_2(int32_t value)
	{
		___U24PC_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CWINSCREENU3EC__ITERATOR7_T2096093272_H
#ifndef U3CWAITBOSSDEADU3EC__ITERATOR6_T3050784709_H
#define U3CWAITBOSSDEADU3EC__ITERATOR6_T3050784709_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// BossSequence/<WaitBossDead>c__Iterator6
struct  U3CWaitBossDeadU3Ec__Iterator6_t3050784709  : public RuntimeObject
{
public:
	// BossSequence BossSequence/<WaitBossDead>c__Iterator6::$this
	BossSequence_t1258426188 * ___U24this_0;
	// System.Object BossSequence/<WaitBossDead>c__Iterator6::$current
	RuntimeObject * ___U24current_1;
	// System.Boolean BossSequence/<WaitBossDead>c__Iterator6::$disposing
	bool ___U24disposing_2;
	// System.Int32 BossSequence/<WaitBossDead>c__Iterator6::$PC
	int32_t ___U24PC_3;

public:
	inline static int32_t get_offset_of_U24this_0() { return static_cast<int32_t>(offsetof(U3CWaitBossDeadU3Ec__Iterator6_t3050784709, ___U24this_0)); }
	inline BossSequence_t1258426188 * get_U24this_0() const { return ___U24this_0; }
	inline BossSequence_t1258426188 ** get_address_of_U24this_0() { return &___U24this_0; }
	inline void set_U24this_0(BossSequence_t1258426188 * value)
	{
		___U24this_0 = value;
		Il2CppCodeGenWriteBarrier((&___U24this_0), value);
	}

	inline static int32_t get_offset_of_U24current_1() { return static_cast<int32_t>(offsetof(U3CWaitBossDeadU3Ec__Iterator6_t3050784709, ___U24current_1)); }
	inline RuntimeObject * get_U24current_1() const { return ___U24current_1; }
	inline RuntimeObject ** get_address_of_U24current_1() { return &___U24current_1; }
	inline void set_U24current_1(RuntimeObject * value)
	{
		___U24current_1 = value;
		Il2CppCodeGenWriteBarrier((&___U24current_1), value);
	}

	inline static int32_t get_offset_of_U24disposing_2() { return static_cast<int32_t>(offsetof(U3CWaitBossDeadU3Ec__Iterator6_t3050784709, ___U24disposing_2)); }
	inline bool get_U24disposing_2() const { return ___U24disposing_2; }
	inline bool* get_address_of_U24disposing_2() { return &___U24disposing_2; }
	inline void set_U24disposing_2(bool value)
	{
		___U24disposing_2 = value;
	}

	inline static int32_t get_offset_of_U24PC_3() { return static_cast<int32_t>(offsetof(U3CWaitBossDeadU3Ec__Iterator6_t3050784709, ___U24PC_3)); }
	inline int32_t get_U24PC_3() const { return ___U24PC_3; }
	inline int32_t* get_address_of_U24PC_3() { return &___U24PC_3; }
	inline void set_U24PC_3(int32_t value)
	{
		___U24PC_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CWAITBOSSDEADU3EC__ITERATOR6_T3050784709_H
#ifndef U3CDESTORYSELFU3EC__ITERATOR0_T3880288534_H
#define U3CDESTORYSELFU3EC__ITERATOR0_T3880288534_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// DeathParticle/<DestorySelf>c__Iterator0
struct  U3CDestorySelfU3Ec__Iterator0_t3880288534  : public RuntimeObject
{
public:
	// DeathParticle DeathParticle/<DestorySelf>c__Iterator0::$this
	DeathParticle_t1563849671 * ___U24this_0;
	// System.Object DeathParticle/<DestorySelf>c__Iterator0::$current
	RuntimeObject * ___U24current_1;
	// System.Boolean DeathParticle/<DestorySelf>c__Iterator0::$disposing
	bool ___U24disposing_2;
	// System.Int32 DeathParticle/<DestorySelf>c__Iterator0::$PC
	int32_t ___U24PC_3;

public:
	inline static int32_t get_offset_of_U24this_0() { return static_cast<int32_t>(offsetof(U3CDestorySelfU3Ec__Iterator0_t3880288534, ___U24this_0)); }
	inline DeathParticle_t1563849671 * get_U24this_0() const { return ___U24this_0; }
	inline DeathParticle_t1563849671 ** get_address_of_U24this_0() { return &___U24this_0; }
	inline void set_U24this_0(DeathParticle_t1563849671 * value)
	{
		___U24this_0 = value;
		Il2CppCodeGenWriteBarrier((&___U24this_0), value);
	}

	inline static int32_t get_offset_of_U24current_1() { return static_cast<int32_t>(offsetof(U3CDestorySelfU3Ec__Iterator0_t3880288534, ___U24current_1)); }
	inline RuntimeObject * get_U24current_1() const { return ___U24current_1; }
	inline RuntimeObject ** get_address_of_U24current_1() { return &___U24current_1; }
	inline void set_U24current_1(RuntimeObject * value)
	{
		___U24current_1 = value;
		Il2CppCodeGenWriteBarrier((&___U24current_1), value);
	}

	inline static int32_t get_offset_of_U24disposing_2() { return static_cast<int32_t>(offsetof(U3CDestorySelfU3Ec__Iterator0_t3880288534, ___U24disposing_2)); }
	inline bool get_U24disposing_2() const { return ___U24disposing_2; }
	inline bool* get_address_of_U24disposing_2() { return &___U24disposing_2; }
	inline void set_U24disposing_2(bool value)
	{
		___U24disposing_2 = value;
	}

	inline static int32_t get_offset_of_U24PC_3() { return static_cast<int32_t>(offsetof(U3CDestorySelfU3Ec__Iterator0_t3880288534, ___U24PC_3)); }
	inline int32_t get_U24PC_3() const { return ___U24PC_3; }
	inline int32_t* get_address_of_U24PC_3() { return &___U24PC_3; }
	inline void set_U24PC_3(int32_t value)
	{
		___U24PC_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CDESTORYSELFU3EC__ITERATOR0_T3880288534_H
#ifndef U3CPLAYERWALKOFFSCREENU3EC__ITERATOR5_T3609804094_H
#define U3CPLAYERWALKOFFSCREENU3EC__ITERATOR5_T3609804094_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// IntroSequence/<PlayerWalkOffscreen>c__Iterator5
struct  U3CPlayerWalkOffscreenU3Ec__Iterator5_t3609804094  : public RuntimeObject
{
public:
	// IntroSequence IntroSequence/<PlayerWalkOffscreen>c__Iterator5::$this
	IntroSequence_t4248026603 * ___U24this_0;
	// System.Object IntroSequence/<PlayerWalkOffscreen>c__Iterator5::$current
	RuntimeObject * ___U24current_1;
	// System.Boolean IntroSequence/<PlayerWalkOffscreen>c__Iterator5::$disposing
	bool ___U24disposing_2;
	// System.Int32 IntroSequence/<PlayerWalkOffscreen>c__Iterator5::$PC
	int32_t ___U24PC_3;

public:
	inline static int32_t get_offset_of_U24this_0() { return static_cast<int32_t>(offsetof(U3CPlayerWalkOffscreenU3Ec__Iterator5_t3609804094, ___U24this_0)); }
	inline IntroSequence_t4248026603 * get_U24this_0() const { return ___U24this_0; }
	inline IntroSequence_t4248026603 ** get_address_of_U24this_0() { return &___U24this_0; }
	inline void set_U24this_0(IntroSequence_t4248026603 * value)
	{
		___U24this_0 = value;
		Il2CppCodeGenWriteBarrier((&___U24this_0), value);
	}

	inline static int32_t get_offset_of_U24current_1() { return static_cast<int32_t>(offsetof(U3CPlayerWalkOffscreenU3Ec__Iterator5_t3609804094, ___U24current_1)); }
	inline RuntimeObject * get_U24current_1() const { return ___U24current_1; }
	inline RuntimeObject ** get_address_of_U24current_1() { return &___U24current_1; }
	inline void set_U24current_1(RuntimeObject * value)
	{
		___U24current_1 = value;
		Il2CppCodeGenWriteBarrier((&___U24current_1), value);
	}

	inline static int32_t get_offset_of_U24disposing_2() { return static_cast<int32_t>(offsetof(U3CPlayerWalkOffscreenU3Ec__Iterator5_t3609804094, ___U24disposing_2)); }
	inline bool get_U24disposing_2() const { return ___U24disposing_2; }
	inline bool* get_address_of_U24disposing_2() { return &___U24disposing_2; }
	inline void set_U24disposing_2(bool value)
	{
		___U24disposing_2 = value;
	}

	inline static int32_t get_offset_of_U24PC_3() { return static_cast<int32_t>(offsetof(U3CPlayerWalkOffscreenU3Ec__Iterator5_t3609804094, ___U24PC_3)); }
	inline int32_t get_U24PC_3() const { return ___U24PC_3; }
	inline int32_t* get_address_of_U24PC_3() { return &___U24PC_3; }
	inline void set_U24PC_3(int32_t value)
	{
		___U24PC_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CPLAYERWALKOFFSCREENU3EC__ITERATOR5_T3609804094_H
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
#ifndef U3CFADEINU3EC__ITERATOR3_T3083571303_H
#define U3CFADEINU3EC__ITERATOR3_T3083571303_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// BossSequence/<FadeIn>c__Iterator3
struct  U3CFadeInU3Ec__Iterator3_t3083571303  : public RuntimeObject
{
public:
	// System.Int32 BossSequence/<FadeIn>c__Iterator3::<i>__1
	int32_t ___U3CiU3E__1_0;
	// BossSequence BossSequence/<FadeIn>c__Iterator3::$this
	BossSequence_t1258426188 * ___U24this_1;
	// System.Object BossSequence/<FadeIn>c__Iterator3::$current
	RuntimeObject * ___U24current_2;
	// System.Boolean BossSequence/<FadeIn>c__Iterator3::$disposing
	bool ___U24disposing_3;
	// System.Int32 BossSequence/<FadeIn>c__Iterator3::$PC
	int32_t ___U24PC_4;

public:
	inline static int32_t get_offset_of_U3CiU3E__1_0() { return static_cast<int32_t>(offsetof(U3CFadeInU3Ec__Iterator3_t3083571303, ___U3CiU3E__1_0)); }
	inline int32_t get_U3CiU3E__1_0() const { return ___U3CiU3E__1_0; }
	inline int32_t* get_address_of_U3CiU3E__1_0() { return &___U3CiU3E__1_0; }
	inline void set_U3CiU3E__1_0(int32_t value)
	{
		___U3CiU3E__1_0 = value;
	}

	inline static int32_t get_offset_of_U24this_1() { return static_cast<int32_t>(offsetof(U3CFadeInU3Ec__Iterator3_t3083571303, ___U24this_1)); }
	inline BossSequence_t1258426188 * get_U24this_1() const { return ___U24this_1; }
	inline BossSequence_t1258426188 ** get_address_of_U24this_1() { return &___U24this_1; }
	inline void set_U24this_1(BossSequence_t1258426188 * value)
	{
		___U24this_1 = value;
		Il2CppCodeGenWriteBarrier((&___U24this_1), value);
	}

	inline static int32_t get_offset_of_U24current_2() { return static_cast<int32_t>(offsetof(U3CFadeInU3Ec__Iterator3_t3083571303, ___U24current_2)); }
	inline RuntimeObject * get_U24current_2() const { return ___U24current_2; }
	inline RuntimeObject ** get_address_of_U24current_2() { return &___U24current_2; }
	inline void set_U24current_2(RuntimeObject * value)
	{
		___U24current_2 = value;
		Il2CppCodeGenWriteBarrier((&___U24current_2), value);
	}

	inline static int32_t get_offset_of_U24disposing_3() { return static_cast<int32_t>(offsetof(U3CFadeInU3Ec__Iterator3_t3083571303, ___U24disposing_3)); }
	inline bool get_U24disposing_3() const { return ___U24disposing_3; }
	inline bool* get_address_of_U24disposing_3() { return &___U24disposing_3; }
	inline void set_U24disposing_3(bool value)
	{
		___U24disposing_3 = value;
	}

	inline static int32_t get_offset_of_U24PC_4() { return static_cast<int32_t>(offsetof(U3CFadeInU3Ec__Iterator3_t3083571303, ___U24PC_4)); }
	inline int32_t get_U24PC_4() const { return ___U24PC_4; }
	inline int32_t* get_address_of_U24PC_4() { return &___U24PC_4; }
	inline void set_U24PC_4(int32_t value)
	{
		___U24PC_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CFADEINU3EC__ITERATOR3_T3083571303_H
#ifndef U3CFADETOBLACKU3EC__ITERATOR2_T2817112667_H
#define U3CFADETOBLACKU3EC__ITERATOR2_T2817112667_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// BossSequence/<FadeToBlack>c__Iterator2
struct  U3CFadeToBlackU3Ec__Iterator2_t2817112667  : public RuntimeObject
{
public:
	// System.Int32 BossSequence/<FadeToBlack>c__Iterator2::<i>__1
	int32_t ___U3CiU3E__1_0;
	// BossSequence BossSequence/<FadeToBlack>c__Iterator2::$this
	BossSequence_t1258426188 * ___U24this_1;
	// System.Object BossSequence/<FadeToBlack>c__Iterator2::$current
	RuntimeObject * ___U24current_2;
	// System.Boolean BossSequence/<FadeToBlack>c__Iterator2::$disposing
	bool ___U24disposing_3;
	// System.Int32 BossSequence/<FadeToBlack>c__Iterator2::$PC
	int32_t ___U24PC_4;

public:
	inline static int32_t get_offset_of_U3CiU3E__1_0() { return static_cast<int32_t>(offsetof(U3CFadeToBlackU3Ec__Iterator2_t2817112667, ___U3CiU3E__1_0)); }
	inline int32_t get_U3CiU3E__1_0() const { return ___U3CiU3E__1_0; }
	inline int32_t* get_address_of_U3CiU3E__1_0() { return &___U3CiU3E__1_0; }
	inline void set_U3CiU3E__1_0(int32_t value)
	{
		___U3CiU3E__1_0 = value;
	}

	inline static int32_t get_offset_of_U24this_1() { return static_cast<int32_t>(offsetof(U3CFadeToBlackU3Ec__Iterator2_t2817112667, ___U24this_1)); }
	inline BossSequence_t1258426188 * get_U24this_1() const { return ___U24this_1; }
	inline BossSequence_t1258426188 ** get_address_of_U24this_1() { return &___U24this_1; }
	inline void set_U24this_1(BossSequence_t1258426188 * value)
	{
		___U24this_1 = value;
		Il2CppCodeGenWriteBarrier((&___U24this_1), value);
	}

	inline static int32_t get_offset_of_U24current_2() { return static_cast<int32_t>(offsetof(U3CFadeToBlackU3Ec__Iterator2_t2817112667, ___U24current_2)); }
	inline RuntimeObject * get_U24current_2() const { return ___U24current_2; }
	inline RuntimeObject ** get_address_of_U24current_2() { return &___U24current_2; }
	inline void set_U24current_2(RuntimeObject * value)
	{
		___U24current_2 = value;
		Il2CppCodeGenWriteBarrier((&___U24current_2), value);
	}

	inline static int32_t get_offset_of_U24disposing_3() { return static_cast<int32_t>(offsetof(U3CFadeToBlackU3Ec__Iterator2_t2817112667, ___U24disposing_3)); }
	inline bool get_U24disposing_3() const { return ___U24disposing_3; }
	inline bool* get_address_of_U24disposing_3() { return &___U24disposing_3; }
	inline void set_U24disposing_3(bool value)
	{
		___U24disposing_3 = value;
	}

	inline static int32_t get_offset_of_U24PC_4() { return static_cast<int32_t>(offsetof(U3CFadeToBlackU3Ec__Iterator2_t2817112667, ___U24PC_4)); }
	inline int32_t get_U24PC_4() const { return ___U24PC_4; }
	inline int32_t* get_address_of_U24PC_4() { return &___U24PC_4; }
	inline void set_U24PC_4(int32_t value)
	{
		___U24PC_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CFADETOBLACKU3EC__ITERATOR2_T2817112667_H
#ifndef U3CFALLINU3EC__ITERATOR1_T4176106444_H
#define U3CFALLINU3EC__ITERATOR1_T4176106444_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// BossSequence/<FallIn>c__Iterator1
struct  U3CFallInU3Ec__Iterator1_t4176106444  : public RuntimeObject
{
public:
	// System.Single BossSequence/<FallIn>c__Iterator1::<introX>__0
	float ___U3CintroXU3E__0_0;
	// System.Single BossSequence/<FallIn>c__Iterator1::<acceleration>__0
	float ___U3CaccelerationU3E__0_1;
	// BossSequence BossSequence/<FallIn>c__Iterator1::$this
	BossSequence_t1258426188 * ___U24this_2;
	// System.Object BossSequence/<FallIn>c__Iterator1::$current
	RuntimeObject * ___U24current_3;
	// System.Boolean BossSequence/<FallIn>c__Iterator1::$disposing
	bool ___U24disposing_4;
	// System.Int32 BossSequence/<FallIn>c__Iterator1::$PC
	int32_t ___U24PC_5;

public:
	inline static int32_t get_offset_of_U3CintroXU3E__0_0() { return static_cast<int32_t>(offsetof(U3CFallInU3Ec__Iterator1_t4176106444, ___U3CintroXU3E__0_0)); }
	inline float get_U3CintroXU3E__0_0() const { return ___U3CintroXU3E__0_0; }
	inline float* get_address_of_U3CintroXU3E__0_0() { return &___U3CintroXU3E__0_0; }
	inline void set_U3CintroXU3E__0_0(float value)
	{
		___U3CintroXU3E__0_0 = value;
	}

	inline static int32_t get_offset_of_U3CaccelerationU3E__0_1() { return static_cast<int32_t>(offsetof(U3CFallInU3Ec__Iterator1_t4176106444, ___U3CaccelerationU3E__0_1)); }
	inline float get_U3CaccelerationU3E__0_1() const { return ___U3CaccelerationU3E__0_1; }
	inline float* get_address_of_U3CaccelerationU3E__0_1() { return &___U3CaccelerationU3E__0_1; }
	inline void set_U3CaccelerationU3E__0_1(float value)
	{
		___U3CaccelerationU3E__0_1 = value;
	}

	inline static int32_t get_offset_of_U24this_2() { return static_cast<int32_t>(offsetof(U3CFallInU3Ec__Iterator1_t4176106444, ___U24this_2)); }
	inline BossSequence_t1258426188 * get_U24this_2() const { return ___U24this_2; }
	inline BossSequence_t1258426188 ** get_address_of_U24this_2() { return &___U24this_2; }
	inline void set_U24this_2(BossSequence_t1258426188 * value)
	{
		___U24this_2 = value;
		Il2CppCodeGenWriteBarrier((&___U24this_2), value);
	}

	inline static int32_t get_offset_of_U24current_3() { return static_cast<int32_t>(offsetof(U3CFallInU3Ec__Iterator1_t4176106444, ___U24current_3)); }
	inline RuntimeObject * get_U24current_3() const { return ___U24current_3; }
	inline RuntimeObject ** get_address_of_U24current_3() { return &___U24current_3; }
	inline void set_U24current_3(RuntimeObject * value)
	{
		___U24current_3 = value;
		Il2CppCodeGenWriteBarrier((&___U24current_3), value);
	}

	inline static int32_t get_offset_of_U24disposing_4() { return static_cast<int32_t>(offsetof(U3CFallInU3Ec__Iterator1_t4176106444, ___U24disposing_4)); }
	inline bool get_U24disposing_4() const { return ___U24disposing_4; }
	inline bool* get_address_of_U24disposing_4() { return &___U24disposing_4; }
	inline void set_U24disposing_4(bool value)
	{
		___U24disposing_4 = value;
	}

	inline static int32_t get_offset_of_U24PC_5() { return static_cast<int32_t>(offsetof(U3CFallInU3Ec__Iterator1_t4176106444, ___U24PC_5)); }
	inline int32_t get_U24PC_5() const { return ___U24PC_5; }
	inline int32_t* get_address_of_U24PC_5() { return &___U24PC_5; }
	inline void set_U24PC_5(int32_t value)
	{
		___U24PC_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CFALLINU3EC__ITERATOR1_T4176106444_H
#ifndef U3CWAITFORPLAYERTOENTERTRIGGERU3EC__ITERATOR4_T2176132566_H
#define U3CWAITFORPLAYERTOENTERTRIGGERU3EC__ITERATOR4_T2176132566_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// BossSequence/<WaitForPlayerToEnterTrigger>c__Iterator4
struct  U3CWaitForPlayerToEnterTriggerU3Ec__Iterator4_t2176132566  : public RuntimeObject
{
public:
	// BossSequence BossSequence/<WaitForPlayerToEnterTrigger>c__Iterator4::$this
	BossSequence_t1258426188 * ___U24this_0;
	// System.Object BossSequence/<WaitForPlayerToEnterTrigger>c__Iterator4::$current
	RuntimeObject * ___U24current_1;
	// System.Boolean BossSequence/<WaitForPlayerToEnterTrigger>c__Iterator4::$disposing
	bool ___U24disposing_2;
	// System.Int32 BossSequence/<WaitForPlayerToEnterTrigger>c__Iterator4::$PC
	int32_t ___U24PC_3;

public:
	inline static int32_t get_offset_of_U24this_0() { return static_cast<int32_t>(offsetof(U3CWaitForPlayerToEnterTriggerU3Ec__Iterator4_t2176132566, ___U24this_0)); }
	inline BossSequence_t1258426188 * get_U24this_0() const { return ___U24this_0; }
	inline BossSequence_t1258426188 ** get_address_of_U24this_0() { return &___U24this_0; }
	inline void set_U24this_0(BossSequence_t1258426188 * value)
	{
		___U24this_0 = value;
		Il2CppCodeGenWriteBarrier((&___U24this_0), value);
	}

	inline static int32_t get_offset_of_U24current_1() { return static_cast<int32_t>(offsetof(U3CWaitForPlayerToEnterTriggerU3Ec__Iterator4_t2176132566, ___U24current_1)); }
	inline RuntimeObject * get_U24current_1() const { return ___U24current_1; }
	inline RuntimeObject ** get_address_of_U24current_1() { return &___U24current_1; }
	inline void set_U24current_1(RuntimeObject * value)
	{
		___U24current_1 = value;
		Il2CppCodeGenWriteBarrier((&___U24current_1), value);
	}

	inline static int32_t get_offset_of_U24disposing_2() { return static_cast<int32_t>(offsetof(U3CWaitForPlayerToEnterTriggerU3Ec__Iterator4_t2176132566, ___U24disposing_2)); }
	inline bool get_U24disposing_2() const { return ___U24disposing_2; }
	inline bool* get_address_of_U24disposing_2() { return &___U24disposing_2; }
	inline void set_U24disposing_2(bool value)
	{
		___U24disposing_2 = value;
	}

	inline static int32_t get_offset_of_U24PC_3() { return static_cast<int32_t>(offsetof(U3CWaitForPlayerToEnterTriggerU3Ec__Iterator4_t2176132566, ___U24PC_3)); }
	inline int32_t get_U24PC_3() const { return ___U24PC_3; }
	inline int32_t* get_address_of_U24PC_3() { return &___U24PC_3; }
	inline void set_U24PC_3(int32_t value)
	{
		___U24PC_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CWAITFORPLAYERTOENTERTRIGGERU3EC__ITERATOR4_T2176132566_H
#ifndef U3CFADEOUTU3EC__ITERATOR1_T1868721799_H
#define U3CFADEOUTU3EC__ITERATOR1_T1868721799_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MusicManager/<FadeOut>c__Iterator1
struct  U3CFadeOutU3Ec__Iterator1_t1868721799  : public RuntimeObject
{
public:
	// System.Int32 MusicManager/<FadeOut>c__Iterator1::<i>__1
	int32_t ___U3CiU3E__1_0;
	// MusicManager MusicManager/<FadeOut>c__Iterator1::$this
	MusicManager_t3024629483 * ___U24this_1;
	// System.Object MusicManager/<FadeOut>c__Iterator1::$current
	RuntimeObject * ___U24current_2;
	// System.Boolean MusicManager/<FadeOut>c__Iterator1::$disposing
	bool ___U24disposing_3;
	// System.Int32 MusicManager/<FadeOut>c__Iterator1::$PC
	int32_t ___U24PC_4;

public:
	inline static int32_t get_offset_of_U3CiU3E__1_0() { return static_cast<int32_t>(offsetof(U3CFadeOutU3Ec__Iterator1_t1868721799, ___U3CiU3E__1_0)); }
	inline int32_t get_U3CiU3E__1_0() const { return ___U3CiU3E__1_0; }
	inline int32_t* get_address_of_U3CiU3E__1_0() { return &___U3CiU3E__1_0; }
	inline void set_U3CiU3E__1_0(int32_t value)
	{
		___U3CiU3E__1_0 = value;
	}

	inline static int32_t get_offset_of_U24this_1() { return static_cast<int32_t>(offsetof(U3CFadeOutU3Ec__Iterator1_t1868721799, ___U24this_1)); }
	inline MusicManager_t3024629483 * get_U24this_1() const { return ___U24this_1; }
	inline MusicManager_t3024629483 ** get_address_of_U24this_1() { return &___U24this_1; }
	inline void set_U24this_1(MusicManager_t3024629483 * value)
	{
		___U24this_1 = value;
		Il2CppCodeGenWriteBarrier((&___U24this_1), value);
	}

	inline static int32_t get_offset_of_U24current_2() { return static_cast<int32_t>(offsetof(U3CFadeOutU3Ec__Iterator1_t1868721799, ___U24current_2)); }
	inline RuntimeObject * get_U24current_2() const { return ___U24current_2; }
	inline RuntimeObject ** get_address_of_U24current_2() { return &___U24current_2; }
	inline void set_U24current_2(RuntimeObject * value)
	{
		___U24current_2 = value;
		Il2CppCodeGenWriteBarrier((&___U24current_2), value);
	}

	inline static int32_t get_offset_of_U24disposing_3() { return static_cast<int32_t>(offsetof(U3CFadeOutU3Ec__Iterator1_t1868721799, ___U24disposing_3)); }
	inline bool get_U24disposing_3() const { return ___U24disposing_3; }
	inline bool* get_address_of_U24disposing_3() { return &___U24disposing_3; }
	inline void set_U24disposing_3(bool value)
	{
		___U24disposing_3 = value;
	}

	inline static int32_t get_offset_of_U24PC_4() { return static_cast<int32_t>(offsetof(U3CFadeOutU3Ec__Iterator1_t1868721799, ___U24PC_4)); }
	inline int32_t get_U24PC_4() const { return ___U24PC_4; }
	inline int32_t* get_address_of_U24PC_4() { return &___U24PC_4; }
	inline void set_U24PC_4(int32_t value)
	{
		___U24PC_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CFADEOUTU3EC__ITERATOR1_T1868721799_H
#ifndef U3CPLAYNEXTU3EC__ITERATOR0_T875241714_H
#define U3CPLAYNEXTU3EC__ITERATOR0_T875241714_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MusicManager/<PlayNext>c__Iterator0
struct  U3CPlayNextU3Ec__Iterator0_t875241714  : public RuntimeObject
{
public:
	// System.Int32 MusicManager/<PlayNext>c__Iterator0::<i>__1
	int32_t ___U3CiU3E__1_0;
	// System.Boolean MusicManager/<PlayNext>c__Iterator0::<isLast>__2
	bool ___U3CisLastU3E__2_1;
	// MusicManager MusicManager/<PlayNext>c__Iterator0::$this
	MusicManager_t3024629483 * ___U24this_2;
	// System.Object MusicManager/<PlayNext>c__Iterator0::$current
	RuntimeObject * ___U24current_3;
	// System.Boolean MusicManager/<PlayNext>c__Iterator0::$disposing
	bool ___U24disposing_4;
	// System.Int32 MusicManager/<PlayNext>c__Iterator0::$PC
	int32_t ___U24PC_5;

public:
	inline static int32_t get_offset_of_U3CiU3E__1_0() { return static_cast<int32_t>(offsetof(U3CPlayNextU3Ec__Iterator0_t875241714, ___U3CiU3E__1_0)); }
	inline int32_t get_U3CiU3E__1_0() const { return ___U3CiU3E__1_0; }
	inline int32_t* get_address_of_U3CiU3E__1_0() { return &___U3CiU3E__1_0; }
	inline void set_U3CiU3E__1_0(int32_t value)
	{
		___U3CiU3E__1_0 = value;
	}

	inline static int32_t get_offset_of_U3CisLastU3E__2_1() { return static_cast<int32_t>(offsetof(U3CPlayNextU3Ec__Iterator0_t875241714, ___U3CisLastU3E__2_1)); }
	inline bool get_U3CisLastU3E__2_1() const { return ___U3CisLastU3E__2_1; }
	inline bool* get_address_of_U3CisLastU3E__2_1() { return &___U3CisLastU3E__2_1; }
	inline void set_U3CisLastU3E__2_1(bool value)
	{
		___U3CisLastU3E__2_1 = value;
	}

	inline static int32_t get_offset_of_U24this_2() { return static_cast<int32_t>(offsetof(U3CPlayNextU3Ec__Iterator0_t875241714, ___U24this_2)); }
	inline MusicManager_t3024629483 * get_U24this_2() const { return ___U24this_2; }
	inline MusicManager_t3024629483 ** get_address_of_U24this_2() { return &___U24this_2; }
	inline void set_U24this_2(MusicManager_t3024629483 * value)
	{
		___U24this_2 = value;
		Il2CppCodeGenWriteBarrier((&___U24this_2), value);
	}

	inline static int32_t get_offset_of_U24current_3() { return static_cast<int32_t>(offsetof(U3CPlayNextU3Ec__Iterator0_t875241714, ___U24current_3)); }
	inline RuntimeObject * get_U24current_3() const { return ___U24current_3; }
	inline RuntimeObject ** get_address_of_U24current_3() { return &___U24current_3; }
	inline void set_U24current_3(RuntimeObject * value)
	{
		___U24current_3 = value;
		Il2CppCodeGenWriteBarrier((&___U24current_3), value);
	}

	inline static int32_t get_offset_of_U24disposing_4() { return static_cast<int32_t>(offsetof(U3CPlayNextU3Ec__Iterator0_t875241714, ___U24disposing_4)); }
	inline bool get_U24disposing_4() const { return ___U24disposing_4; }
	inline bool* get_address_of_U24disposing_4() { return &___U24disposing_4; }
	inline void set_U24disposing_4(bool value)
	{
		___U24disposing_4 = value;
	}

	inline static int32_t get_offset_of_U24PC_5() { return static_cast<int32_t>(offsetof(U3CPlayNextU3Ec__Iterator0_t875241714, ___U24PC_5)); }
	inline int32_t get_U24PC_5() const { return ___U24PC_5; }
	inline int32_t* get_address_of_U24PC_5() { return &___U24PC_5; }
	inline void set_U24PC_5(int32_t value)
	{
		___U24PC_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CPLAYNEXTU3EC__ITERATOR0_T875241714_H
#ifndef LIST_1_T2585711361_H
#define LIST_1_T2585711361_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct  List_1_t2585711361  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	GameObjectU5BU5D_t3328599146* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t2585711361, ____items_1)); }
	inline GameObjectU5BU5D_t3328599146* get__items_1() const { return ____items_1; }
	inline GameObjectU5BU5D_t3328599146** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(GameObjectU5BU5D_t3328599146* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((&____items_1), value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t2585711361, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t2585711361, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}
};

struct List_1_t2585711361_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::EmptyArray
	GameObjectU5BU5D_t3328599146* ___EmptyArray_4;

public:
	inline static int32_t get_offset_of_EmptyArray_4() { return static_cast<int32_t>(offsetof(List_1_t2585711361_StaticFields, ___EmptyArray_4)); }
	inline GameObjectU5BU5D_t3328599146* get_EmptyArray_4() const { return ___EmptyArray_4; }
	inline GameObjectU5BU5D_t3328599146** get_address_of_EmptyArray_4() { return &___EmptyArray_4; }
	inline void set_EmptyArray_4(GameObjectU5BU5D_t3328599146* value)
	{
		___EmptyArray_4 = value;
		Il2CppCodeGenWriteBarrier((&___EmptyArray_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIST_1_T2585711361_H
#ifndef U3CSHOWNEXTU3EC__ITERATOR0_T3465437423_H
#define U3CSHOWNEXTU3EC__ITERATOR0_T3465437423_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MessagePopup/<ShowNext>c__Iterator0
struct  U3CShowNextU3Ec__Iterator0_t3465437423  : public RuntimeObject
{
public:
	// Message MessagePopup/<ShowNext>c__Iterator0::<message>__0
	Message_t4258767382 * ___U3CmessageU3E__0_0;
	// MessagePopup MessagePopup/<ShowNext>c__Iterator0::$this
	MessagePopup_t1375170899 * ___U24this_1;
	// System.Object MessagePopup/<ShowNext>c__Iterator0::$current
	RuntimeObject * ___U24current_2;
	// System.Boolean MessagePopup/<ShowNext>c__Iterator0::$disposing
	bool ___U24disposing_3;
	// System.Int32 MessagePopup/<ShowNext>c__Iterator0::$PC
	int32_t ___U24PC_4;

public:
	inline static int32_t get_offset_of_U3CmessageU3E__0_0() { return static_cast<int32_t>(offsetof(U3CShowNextU3Ec__Iterator0_t3465437423, ___U3CmessageU3E__0_0)); }
	inline Message_t4258767382 * get_U3CmessageU3E__0_0() const { return ___U3CmessageU3E__0_0; }
	inline Message_t4258767382 ** get_address_of_U3CmessageU3E__0_0() { return &___U3CmessageU3E__0_0; }
	inline void set_U3CmessageU3E__0_0(Message_t4258767382 * value)
	{
		___U3CmessageU3E__0_0 = value;
		Il2CppCodeGenWriteBarrier((&___U3CmessageU3E__0_0), value);
	}

	inline static int32_t get_offset_of_U24this_1() { return static_cast<int32_t>(offsetof(U3CShowNextU3Ec__Iterator0_t3465437423, ___U24this_1)); }
	inline MessagePopup_t1375170899 * get_U24this_1() const { return ___U24this_1; }
	inline MessagePopup_t1375170899 ** get_address_of_U24this_1() { return &___U24this_1; }
	inline void set_U24this_1(MessagePopup_t1375170899 * value)
	{
		___U24this_1 = value;
		Il2CppCodeGenWriteBarrier((&___U24this_1), value);
	}

	inline static int32_t get_offset_of_U24current_2() { return static_cast<int32_t>(offsetof(U3CShowNextU3Ec__Iterator0_t3465437423, ___U24current_2)); }
	inline RuntimeObject * get_U24current_2() const { return ___U24current_2; }
	inline RuntimeObject ** get_address_of_U24current_2() { return &___U24current_2; }
	inline void set_U24current_2(RuntimeObject * value)
	{
		___U24current_2 = value;
		Il2CppCodeGenWriteBarrier((&___U24current_2), value);
	}

	inline static int32_t get_offset_of_U24disposing_3() { return static_cast<int32_t>(offsetof(U3CShowNextU3Ec__Iterator0_t3465437423, ___U24disposing_3)); }
	inline bool get_U24disposing_3() const { return ___U24disposing_3; }
	inline bool* get_address_of_U24disposing_3() { return &___U24disposing_3; }
	inline void set_U24disposing_3(bool value)
	{
		___U24disposing_3 = value;
	}

	inline static int32_t get_offset_of_U24PC_4() { return static_cast<int32_t>(offsetof(U3CShowNextU3Ec__Iterator0_t3465437423, ___U24PC_4)); }
	inline int32_t get_U24PC_4() const { return ___U24PC_4; }
	inline int32_t* get_address_of_U24PC_4() { return &___U24PC_4; }
	inline void set_U24PC_4(int32_t value)
	{
		___U24PC_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CSHOWNEXTU3EC__ITERATOR0_T3465437423_H
#ifndef QUEUE_1_T4105026876_H
#define QUEUE_1_T4105026876_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Queue`1<Message>
struct  Queue_1_t4105026876  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.Queue`1::_array
	MessageU5BU5D_t1300600019* ____array_0;
	// System.Int32 System.Collections.Generic.Queue`1::_head
	int32_t ____head_1;
	// System.Int32 System.Collections.Generic.Queue`1::_tail
	int32_t ____tail_2;
	// System.Int32 System.Collections.Generic.Queue`1::_size
	int32_t ____size_3;
	// System.Int32 System.Collections.Generic.Queue`1::_version
	int32_t ____version_4;

public:
	inline static int32_t get_offset_of__array_0() { return static_cast<int32_t>(offsetof(Queue_1_t4105026876, ____array_0)); }
	inline MessageU5BU5D_t1300600019* get__array_0() const { return ____array_0; }
	inline MessageU5BU5D_t1300600019** get_address_of__array_0() { return &____array_0; }
	inline void set__array_0(MessageU5BU5D_t1300600019* value)
	{
		____array_0 = value;
		Il2CppCodeGenWriteBarrier((&____array_0), value);
	}

	inline static int32_t get_offset_of__head_1() { return static_cast<int32_t>(offsetof(Queue_1_t4105026876, ____head_1)); }
	inline int32_t get__head_1() const { return ____head_1; }
	inline int32_t* get_address_of__head_1() { return &____head_1; }
	inline void set__head_1(int32_t value)
	{
		____head_1 = value;
	}

	inline static int32_t get_offset_of__tail_2() { return static_cast<int32_t>(offsetof(Queue_1_t4105026876, ____tail_2)); }
	inline int32_t get__tail_2() const { return ____tail_2; }
	inline int32_t* get_address_of__tail_2() { return &____tail_2; }
	inline void set__tail_2(int32_t value)
	{
		____tail_2 = value;
	}

	inline static int32_t get_offset_of__size_3() { return static_cast<int32_t>(offsetof(Queue_1_t4105026876, ____size_3)); }
	inline int32_t get__size_3() const { return ____size_3; }
	inline int32_t* get_address_of__size_3() { return &____size_3; }
	inline void set__size_3(int32_t value)
	{
		____size_3 = value;
	}

	inline static int32_t get_offset_of__version_4() { return static_cast<int32_t>(offsetof(Queue_1_t4105026876, ____version_4)); }
	inline int32_t get__version_4() const { return ____version_4; }
	inline int32_t* get_address_of__version_4() { return &____version_4; }
	inline void set__version_4(int32_t value)
	{
		____version_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // QUEUE_1_T4105026876_H
#ifndef MESSAGE_T4258767382_H
#define MESSAGE_T4258767382_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Message
struct  Message_t4258767382  : public RuntimeObject
{
public:
	// System.String Message::message
	String_t* ___message_0;
	// System.Single Message::duration
	float ___duration_1;

public:
	inline static int32_t get_offset_of_message_0() { return static_cast<int32_t>(offsetof(Message_t4258767382, ___message_0)); }
	inline String_t* get_message_0() const { return ___message_0; }
	inline String_t** get_address_of_message_0() { return &___message_0; }
	inline void set_message_0(String_t* value)
	{
		___message_0 = value;
		Il2CppCodeGenWriteBarrier((&___message_0), value);
	}

	inline static int32_t get_offset_of_duration_1() { return static_cast<int32_t>(offsetof(Message_t4258767382, ___duration_1)); }
	inline float get_duration_1() const { return ___duration_1; }
	inline float* get_address_of_duration_1() { return &___duration_1; }
	inline void set_duration_1(float value)
	{
		___duration_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MESSAGE_T4258767382_H
#ifndef U3CFADEINBACKU3EC__ITERATOR0_T2620013686_H
#define U3CFADEINBACKU3EC__ITERATOR0_T2620013686_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// DeadScreen/<FadeInBack>c__Iterator0
struct  U3CFadeInBackU3Ec__Iterator0_t2620013686  : public RuntimeObject
{
public:
	// System.Int32 DeadScreen/<FadeInBack>c__Iterator0::<steps>__0
	int32_t ___U3CstepsU3E__0_0;
	// System.Int32 DeadScreen/<FadeInBack>c__Iterator0::<i>__1
	int32_t ___U3CiU3E__1_1;
	// DeadScreen DeadScreen/<FadeInBack>c__Iterator0::$this
	DeadScreen_t3234016418 * ___U24this_2;
	// System.Object DeadScreen/<FadeInBack>c__Iterator0::$current
	RuntimeObject * ___U24current_3;
	// System.Boolean DeadScreen/<FadeInBack>c__Iterator0::$disposing
	bool ___U24disposing_4;
	// System.Int32 DeadScreen/<FadeInBack>c__Iterator0::$PC
	int32_t ___U24PC_5;

public:
	inline static int32_t get_offset_of_U3CstepsU3E__0_0() { return static_cast<int32_t>(offsetof(U3CFadeInBackU3Ec__Iterator0_t2620013686, ___U3CstepsU3E__0_0)); }
	inline int32_t get_U3CstepsU3E__0_0() const { return ___U3CstepsU3E__0_0; }
	inline int32_t* get_address_of_U3CstepsU3E__0_0() { return &___U3CstepsU3E__0_0; }
	inline void set_U3CstepsU3E__0_0(int32_t value)
	{
		___U3CstepsU3E__0_0 = value;
	}

	inline static int32_t get_offset_of_U3CiU3E__1_1() { return static_cast<int32_t>(offsetof(U3CFadeInBackU3Ec__Iterator0_t2620013686, ___U3CiU3E__1_1)); }
	inline int32_t get_U3CiU3E__1_1() const { return ___U3CiU3E__1_1; }
	inline int32_t* get_address_of_U3CiU3E__1_1() { return &___U3CiU3E__1_1; }
	inline void set_U3CiU3E__1_1(int32_t value)
	{
		___U3CiU3E__1_1 = value;
	}

	inline static int32_t get_offset_of_U24this_2() { return static_cast<int32_t>(offsetof(U3CFadeInBackU3Ec__Iterator0_t2620013686, ___U24this_2)); }
	inline DeadScreen_t3234016418 * get_U24this_2() const { return ___U24this_2; }
	inline DeadScreen_t3234016418 ** get_address_of_U24this_2() { return &___U24this_2; }
	inline void set_U24this_2(DeadScreen_t3234016418 * value)
	{
		___U24this_2 = value;
		Il2CppCodeGenWriteBarrier((&___U24this_2), value);
	}

	inline static int32_t get_offset_of_U24current_3() { return static_cast<int32_t>(offsetof(U3CFadeInBackU3Ec__Iterator0_t2620013686, ___U24current_3)); }
	inline RuntimeObject * get_U24current_3() const { return ___U24current_3; }
	inline RuntimeObject ** get_address_of_U24current_3() { return &___U24current_3; }
	inline void set_U24current_3(RuntimeObject * value)
	{
		___U24current_3 = value;
		Il2CppCodeGenWriteBarrier((&___U24current_3), value);
	}

	inline static int32_t get_offset_of_U24disposing_4() { return static_cast<int32_t>(offsetof(U3CFadeInBackU3Ec__Iterator0_t2620013686, ___U24disposing_4)); }
	inline bool get_U24disposing_4() const { return ___U24disposing_4; }
	inline bool* get_address_of_U24disposing_4() { return &___U24disposing_4; }
	inline void set_U24disposing_4(bool value)
	{
		___U24disposing_4 = value;
	}

	inline static int32_t get_offset_of_U24PC_5() { return static_cast<int32_t>(offsetof(U3CFadeInBackU3Ec__Iterator0_t2620013686, ___U24PC_5)); }
	inline int32_t get_U24PC_5() const { return ___U24PC_5; }
	inline int32_t* get_address_of_U24PC_5() { return &___U24PC_5; }
	inline void set_U24PC_5(int32_t value)
	{
		___U24PC_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CFADEINBACKU3EC__ITERATOR0_T2620013686_H
#ifndef LIST_1_T3709740258_H
#define LIST_1_T3709740258_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<Level>
struct  List_1_t3709740258  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	LevelU5BU5D_t979096037* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t3709740258, ____items_1)); }
	inline LevelU5BU5D_t979096037* get__items_1() const { return ____items_1; }
	inline LevelU5BU5D_t979096037** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(LevelU5BU5D_t979096037* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((&____items_1), value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t3709740258, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t3709740258, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}
};

struct List_1_t3709740258_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::EmptyArray
	LevelU5BU5D_t979096037* ___EmptyArray_4;

public:
	inline static int32_t get_offset_of_EmptyArray_4() { return static_cast<int32_t>(offsetof(List_1_t3709740258_StaticFields, ___EmptyArray_4)); }
	inline LevelU5BU5D_t979096037* get_EmptyArray_4() const { return ___EmptyArray_4; }
	inline LevelU5BU5D_t979096037** get_address_of_EmptyArray_4() { return &___EmptyArray_4; }
	inline void set_EmptyArray_4(LevelU5BU5D_t979096037* value)
	{
		___EmptyArray_4 = value;
		Il2CppCodeGenWriteBarrier((&___EmptyArray_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIST_1_T3709740258_H
#ifndef U3CSEQUENCEU3EC__ITERATOR0_T114495004_H
#define U3CSEQUENCEU3EC__ITERATOR0_T114495004_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// BossSequence/<Sequence>c__Iterator0
struct  U3CSequenceU3Ec__Iterator0_t114495004  : public RuntimeObject
{
public:
	// BossSequence BossSequence/<Sequence>c__Iterator0::$this
	BossSequence_t1258426188 * ___U24this_0;
	// System.Object BossSequence/<Sequence>c__Iterator0::$current
	RuntimeObject * ___U24current_1;
	// System.Boolean BossSequence/<Sequence>c__Iterator0::$disposing
	bool ___U24disposing_2;
	// System.Int32 BossSequence/<Sequence>c__Iterator0::$PC
	int32_t ___U24PC_3;

public:
	inline static int32_t get_offset_of_U24this_0() { return static_cast<int32_t>(offsetof(U3CSequenceU3Ec__Iterator0_t114495004, ___U24this_0)); }
	inline BossSequence_t1258426188 * get_U24this_0() const { return ___U24this_0; }
	inline BossSequence_t1258426188 ** get_address_of_U24this_0() { return &___U24this_0; }
	inline void set_U24this_0(BossSequence_t1258426188 * value)
	{
		___U24this_0 = value;
		Il2CppCodeGenWriteBarrier((&___U24this_0), value);
	}

	inline static int32_t get_offset_of_U24current_1() { return static_cast<int32_t>(offsetof(U3CSequenceU3Ec__Iterator0_t114495004, ___U24current_1)); }
	inline RuntimeObject * get_U24current_1() const { return ___U24current_1; }
	inline RuntimeObject ** get_address_of_U24current_1() { return &___U24current_1; }
	inline void set_U24current_1(RuntimeObject * value)
	{
		___U24current_1 = value;
		Il2CppCodeGenWriteBarrier((&___U24current_1), value);
	}

	inline static int32_t get_offset_of_U24disposing_2() { return static_cast<int32_t>(offsetof(U3CSequenceU3Ec__Iterator0_t114495004, ___U24disposing_2)); }
	inline bool get_U24disposing_2() const { return ___U24disposing_2; }
	inline bool* get_address_of_U24disposing_2() { return &___U24disposing_2; }
	inline void set_U24disposing_2(bool value)
	{
		___U24disposing_2 = value;
	}

	inline static int32_t get_offset_of_U24PC_3() { return static_cast<int32_t>(offsetof(U3CSequenceU3Ec__Iterator0_t114495004, ___U24PC_3)); }
	inline int32_t get_U24PC_3() const { return ___U24PC_3; }
	inline int32_t* get_address_of_U24PC_3() { return &___U24PC_3; }
	inline void set_U24PC_3(int32_t value)
	{
		___U24PC_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CSEQUENCEU3EC__ITERATOR0_T114495004_H
#ifndef UNITYEVENTBASE_T3960448221_H
#define UNITYEVENTBASE_T3960448221_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Events.UnityEventBase
struct  UnityEventBase_t3960448221  : public RuntimeObject
{
public:
	// UnityEngine.Events.InvokableCallList UnityEngine.Events.UnityEventBase::m_Calls
	InvokableCallList_t2498835369 * ___m_Calls_0;
	// UnityEngine.Events.PersistentCallGroup UnityEngine.Events.UnityEventBase::m_PersistentCalls
	PersistentCallGroup_t3050769227 * ___m_PersistentCalls_1;
	// System.String UnityEngine.Events.UnityEventBase::m_TypeName
	String_t* ___m_TypeName_2;
	// System.Boolean UnityEngine.Events.UnityEventBase::m_CallsDirty
	bool ___m_CallsDirty_3;

public:
	inline static int32_t get_offset_of_m_Calls_0() { return static_cast<int32_t>(offsetof(UnityEventBase_t3960448221, ___m_Calls_0)); }
	inline InvokableCallList_t2498835369 * get_m_Calls_0() const { return ___m_Calls_0; }
	inline InvokableCallList_t2498835369 ** get_address_of_m_Calls_0() { return &___m_Calls_0; }
	inline void set_m_Calls_0(InvokableCallList_t2498835369 * value)
	{
		___m_Calls_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_Calls_0), value);
	}

	inline static int32_t get_offset_of_m_PersistentCalls_1() { return static_cast<int32_t>(offsetof(UnityEventBase_t3960448221, ___m_PersistentCalls_1)); }
	inline PersistentCallGroup_t3050769227 * get_m_PersistentCalls_1() const { return ___m_PersistentCalls_1; }
	inline PersistentCallGroup_t3050769227 ** get_address_of_m_PersistentCalls_1() { return &___m_PersistentCalls_1; }
	inline void set_m_PersistentCalls_1(PersistentCallGroup_t3050769227 * value)
	{
		___m_PersistentCalls_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_PersistentCalls_1), value);
	}

	inline static int32_t get_offset_of_m_TypeName_2() { return static_cast<int32_t>(offsetof(UnityEventBase_t3960448221, ___m_TypeName_2)); }
	inline String_t* get_m_TypeName_2() const { return ___m_TypeName_2; }
	inline String_t** get_address_of_m_TypeName_2() { return &___m_TypeName_2; }
	inline void set_m_TypeName_2(String_t* value)
	{
		___m_TypeName_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_TypeName_2), value);
	}

	inline static int32_t get_offset_of_m_CallsDirty_3() { return static_cast<int32_t>(offsetof(UnityEventBase_t3960448221, ___m_CallsDirty_3)); }
	inline bool get_m_CallsDirty_3() const { return ___m_CallsDirty_3; }
	inline bool* get_address_of_m_CallsDirty_3() { return &___m_CallsDirty_3; }
	inline void set_m_CallsDirty_3(bool value)
	{
		___m_CallsDirty_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYEVENTBASE_T3960448221_H
#ifndef U3CPLAYERWALKUPU3EC__ITERATOR1_T3977936990_H
#define U3CPLAYERWALKUPU3EC__ITERATOR1_T3977936990_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// IntroSequence/<PlayerWalkUp>c__Iterator1
struct  U3CPlayerWalkUpU3Ec__Iterator1_t3977936990  : public RuntimeObject
{
public:
	// IntroSequence IntroSequence/<PlayerWalkUp>c__Iterator1::$this
	IntroSequence_t4248026603 * ___U24this_0;
	// System.Object IntroSequence/<PlayerWalkUp>c__Iterator1::$current
	RuntimeObject * ___U24current_1;
	// System.Boolean IntroSequence/<PlayerWalkUp>c__Iterator1::$disposing
	bool ___U24disposing_2;
	// System.Int32 IntroSequence/<PlayerWalkUp>c__Iterator1::$PC
	int32_t ___U24PC_3;

public:
	inline static int32_t get_offset_of_U24this_0() { return static_cast<int32_t>(offsetof(U3CPlayerWalkUpU3Ec__Iterator1_t3977936990, ___U24this_0)); }
	inline IntroSequence_t4248026603 * get_U24this_0() const { return ___U24this_0; }
	inline IntroSequence_t4248026603 ** get_address_of_U24this_0() { return &___U24this_0; }
	inline void set_U24this_0(IntroSequence_t4248026603 * value)
	{
		___U24this_0 = value;
		Il2CppCodeGenWriteBarrier((&___U24this_0), value);
	}

	inline static int32_t get_offset_of_U24current_1() { return static_cast<int32_t>(offsetof(U3CPlayerWalkUpU3Ec__Iterator1_t3977936990, ___U24current_1)); }
	inline RuntimeObject * get_U24current_1() const { return ___U24current_1; }
	inline RuntimeObject ** get_address_of_U24current_1() { return &___U24current_1; }
	inline void set_U24current_1(RuntimeObject * value)
	{
		___U24current_1 = value;
		Il2CppCodeGenWriteBarrier((&___U24current_1), value);
	}

	inline static int32_t get_offset_of_U24disposing_2() { return static_cast<int32_t>(offsetof(U3CPlayerWalkUpU3Ec__Iterator1_t3977936990, ___U24disposing_2)); }
	inline bool get_U24disposing_2() const { return ___U24disposing_2; }
	inline bool* get_address_of_U24disposing_2() { return &___U24disposing_2; }
	inline void set_U24disposing_2(bool value)
	{
		___U24disposing_2 = value;
	}

	inline static int32_t get_offset_of_U24PC_3() { return static_cast<int32_t>(offsetof(U3CPlayerWalkUpU3Ec__Iterator1_t3977936990, ___U24PC_3)); }
	inline int32_t get_U24PC_3() const { return ___U24PC_3; }
	inline int32_t* get_address_of_U24PC_3() { return &___U24PC_3; }
	inline void set_U24PC_3(int32_t value)
	{
		___U24PC_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CPLAYERWALKUPU3EC__ITERATOR1_T3977936990_H
#ifndef U3CINTROU3EC__ITERATOR0_T2006384748_H
#define U3CINTROU3EC__ITERATOR0_T2006384748_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// IntroSequence/<Intro>c__Iterator0
struct  U3CIntroU3Ec__Iterator0_t2006384748  : public RuntimeObject
{
public:
	// IntroSequence IntroSequence/<Intro>c__Iterator0::$this
	IntroSequence_t4248026603 * ___U24this_0;
	// System.Object IntroSequence/<Intro>c__Iterator0::$current
	RuntimeObject * ___U24current_1;
	// System.Boolean IntroSequence/<Intro>c__Iterator0::$disposing
	bool ___U24disposing_2;
	// System.Int32 IntroSequence/<Intro>c__Iterator0::$PC
	int32_t ___U24PC_3;

public:
	inline static int32_t get_offset_of_U24this_0() { return static_cast<int32_t>(offsetof(U3CIntroU3Ec__Iterator0_t2006384748, ___U24this_0)); }
	inline IntroSequence_t4248026603 * get_U24this_0() const { return ___U24this_0; }
	inline IntroSequence_t4248026603 ** get_address_of_U24this_0() { return &___U24this_0; }
	inline void set_U24this_0(IntroSequence_t4248026603 * value)
	{
		___U24this_0 = value;
		Il2CppCodeGenWriteBarrier((&___U24this_0), value);
	}

	inline static int32_t get_offset_of_U24current_1() { return static_cast<int32_t>(offsetof(U3CIntroU3Ec__Iterator0_t2006384748, ___U24current_1)); }
	inline RuntimeObject * get_U24current_1() const { return ___U24current_1; }
	inline RuntimeObject ** get_address_of_U24current_1() { return &___U24current_1; }
	inline void set_U24current_1(RuntimeObject * value)
	{
		___U24current_1 = value;
		Il2CppCodeGenWriteBarrier((&___U24current_1), value);
	}

	inline static int32_t get_offset_of_U24disposing_2() { return static_cast<int32_t>(offsetof(U3CIntroU3Ec__Iterator0_t2006384748, ___U24disposing_2)); }
	inline bool get_U24disposing_2() const { return ___U24disposing_2; }
	inline bool* get_address_of_U24disposing_2() { return &___U24disposing_2; }
	inline void set_U24disposing_2(bool value)
	{
		___U24disposing_2 = value;
	}

	inline static int32_t get_offset_of_U24PC_3() { return static_cast<int32_t>(offsetof(U3CIntroU3Ec__Iterator0_t2006384748, ___U24PC_3)); }
	inline int32_t get_U24PC_3() const { return ___U24PC_3; }
	inline int32_t* get_address_of_U24PC_3() { return &___U24PC_3; }
	inline void set_U24PC_3(int32_t value)
	{
		___U24PC_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CINTROU3EC__ITERATOR0_T2006384748_H
#ifndef ENEMYNODECOMPARER_T2029075025_H
#define ENEMYNODECOMPARER_T2029075025_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// EnemyNodeComparer
struct  EnemyNodeComparer_t2029075025  : public RuntimeObject
{
public:
	// SkellyAI EnemyNodeComparer::_skellyAI
	SkellyAI_t2611779661 * ____skellyAI_0;

public:
	inline static int32_t get_offset_of__skellyAI_0() { return static_cast<int32_t>(offsetof(EnemyNodeComparer_t2029075025, ____skellyAI_0)); }
	inline SkellyAI_t2611779661 * get__skellyAI_0() const { return ____skellyAI_0; }
	inline SkellyAI_t2611779661 ** get_address_of__skellyAI_0() { return &____skellyAI_0; }
	inline void set__skellyAI_0(SkellyAI_t2611779661 * value)
	{
		____skellyAI_0 = value;
		Il2CppCodeGenWriteBarrier((&____skellyAI_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENEMYNODECOMPARER_T2029075025_H
#ifndef U3CPICKNEWANGLEU3EC__ITERATOR0_T696507028_H
#define U3CPICKNEWANGLEU3EC__ITERATOR0_T696507028_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Grass/<PickNewAngle>c__Iterator0
struct  U3CPickNewAngleU3Ec__Iterator0_t696507028  : public RuntimeObject
{
public:
	// Grass Grass/<PickNewAngle>c__Iterator0::$this
	Grass_t1377767949 * ___U24this_0;
	// System.Object Grass/<PickNewAngle>c__Iterator0::$current
	RuntimeObject * ___U24current_1;
	// System.Boolean Grass/<PickNewAngle>c__Iterator0::$disposing
	bool ___U24disposing_2;
	// System.Int32 Grass/<PickNewAngle>c__Iterator0::$PC
	int32_t ___U24PC_3;

public:
	inline static int32_t get_offset_of_U24this_0() { return static_cast<int32_t>(offsetof(U3CPickNewAngleU3Ec__Iterator0_t696507028, ___U24this_0)); }
	inline Grass_t1377767949 * get_U24this_0() const { return ___U24this_0; }
	inline Grass_t1377767949 ** get_address_of_U24this_0() { return &___U24this_0; }
	inline void set_U24this_0(Grass_t1377767949 * value)
	{
		___U24this_0 = value;
		Il2CppCodeGenWriteBarrier((&___U24this_0), value);
	}

	inline static int32_t get_offset_of_U24current_1() { return static_cast<int32_t>(offsetof(U3CPickNewAngleU3Ec__Iterator0_t696507028, ___U24current_1)); }
	inline RuntimeObject * get_U24current_1() const { return ___U24current_1; }
	inline RuntimeObject ** get_address_of_U24current_1() { return &___U24current_1; }
	inline void set_U24current_1(RuntimeObject * value)
	{
		___U24current_1 = value;
		Il2CppCodeGenWriteBarrier((&___U24current_1), value);
	}

	inline static int32_t get_offset_of_U24disposing_2() { return static_cast<int32_t>(offsetof(U3CPickNewAngleU3Ec__Iterator0_t696507028, ___U24disposing_2)); }
	inline bool get_U24disposing_2() const { return ___U24disposing_2; }
	inline bool* get_address_of_U24disposing_2() { return &___U24disposing_2; }
	inline void set_U24disposing_2(bool value)
	{
		___U24disposing_2 = value;
	}

	inline static int32_t get_offset_of_U24PC_3() { return static_cast<int32_t>(offsetof(U3CPickNewAngleU3Ec__Iterator0_t696507028, ___U24PC_3)); }
	inline int32_t get_U24PC_3() const { return ___U24PC_3; }
	inline int32_t* get_address_of_U24PC_3() { return &___U24PC_3; }
	inline void set_U24PC_3(int32_t value)
	{
		___U24PC_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CPICKNEWANGLEU3EC__ITERATOR0_T696507028_H
#ifndef LIST_1_T3967944201_H
#define LIST_1_T3967944201_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<EntityStateAnimationMapping>
struct  List_1_t3967944201  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	EntityStateAnimationMappingU5BU5D_t3177061442* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t3967944201, ____items_1)); }
	inline EntityStateAnimationMappingU5BU5D_t3177061442* get__items_1() const { return ____items_1; }
	inline EntityStateAnimationMappingU5BU5D_t3177061442** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(EntityStateAnimationMappingU5BU5D_t3177061442* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((&____items_1), value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t3967944201, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t3967944201, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}
};

struct List_1_t3967944201_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::EmptyArray
	EntityStateAnimationMappingU5BU5D_t3177061442* ___EmptyArray_4;

public:
	inline static int32_t get_offset_of_EmptyArray_4() { return static_cast<int32_t>(offsetof(List_1_t3967944201_StaticFields, ___EmptyArray_4)); }
	inline EntityStateAnimationMappingU5BU5D_t3177061442* get_EmptyArray_4() const { return ___EmptyArray_4; }
	inline EntityStateAnimationMappingU5BU5D_t3177061442** get_address_of_EmptyArray_4() { return &___EmptyArray_4; }
	inline void set_EmptyArray_4(EntityStateAnimationMappingU5BU5D_t3177061442* value)
	{
		___EmptyArray_4 = value;
		Il2CppCodeGenWriteBarrier((&___EmptyArray_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIST_1_T3967944201_H
#ifndef DICTIONARY_2_T26093461_H
#define DICTIONARY_2_T26093461_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Dictionary`2<EntityState,System.String>
struct  Dictionary_2_t26093461  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::table
	Int32U5BU5D_t385246372* ___table_4;
	// System.Collections.Generic.Link[] System.Collections.Generic.Dictionary`2::linkSlots
	LinkU5BU5D_t964245573* ___linkSlots_5;
	// TKey[] System.Collections.Generic.Dictionary`2::keySlots
	EntityStateU5BU5D_t3970143109* ___keySlots_6;
	// TValue[] System.Collections.Generic.Dictionary`2::valueSlots
	StringU5BU5D_t1281789340* ___valueSlots_7;
	// System.Int32 System.Collections.Generic.Dictionary`2::touchedSlots
	int32_t ___touchedSlots_8;
	// System.Int32 System.Collections.Generic.Dictionary`2::emptySlot
	int32_t ___emptySlot_9;
	// System.Int32 System.Collections.Generic.Dictionary`2::count
	int32_t ___count_10;
	// System.Int32 System.Collections.Generic.Dictionary`2::threshold
	int32_t ___threshold_11;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::hcp
	RuntimeObject* ___hcp_12;
	// System.Runtime.Serialization.SerializationInfo System.Collections.Generic.Dictionary`2::serialization_info
	SerializationInfo_t950877179 * ___serialization_info_13;
	// System.Int32 System.Collections.Generic.Dictionary`2::generation
	int32_t ___generation_14;

public:
	inline static int32_t get_offset_of_table_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t26093461, ___table_4)); }
	inline Int32U5BU5D_t385246372* get_table_4() const { return ___table_4; }
	inline Int32U5BU5D_t385246372** get_address_of_table_4() { return &___table_4; }
	inline void set_table_4(Int32U5BU5D_t385246372* value)
	{
		___table_4 = value;
		Il2CppCodeGenWriteBarrier((&___table_4), value);
	}

	inline static int32_t get_offset_of_linkSlots_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t26093461, ___linkSlots_5)); }
	inline LinkU5BU5D_t964245573* get_linkSlots_5() const { return ___linkSlots_5; }
	inline LinkU5BU5D_t964245573** get_address_of_linkSlots_5() { return &___linkSlots_5; }
	inline void set_linkSlots_5(LinkU5BU5D_t964245573* value)
	{
		___linkSlots_5 = value;
		Il2CppCodeGenWriteBarrier((&___linkSlots_5), value);
	}

	inline static int32_t get_offset_of_keySlots_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t26093461, ___keySlots_6)); }
	inline EntityStateU5BU5D_t3970143109* get_keySlots_6() const { return ___keySlots_6; }
	inline EntityStateU5BU5D_t3970143109** get_address_of_keySlots_6() { return &___keySlots_6; }
	inline void set_keySlots_6(EntityStateU5BU5D_t3970143109* value)
	{
		___keySlots_6 = value;
		Il2CppCodeGenWriteBarrier((&___keySlots_6), value);
	}

	inline static int32_t get_offset_of_valueSlots_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t26093461, ___valueSlots_7)); }
	inline StringU5BU5D_t1281789340* get_valueSlots_7() const { return ___valueSlots_7; }
	inline StringU5BU5D_t1281789340** get_address_of_valueSlots_7() { return &___valueSlots_7; }
	inline void set_valueSlots_7(StringU5BU5D_t1281789340* value)
	{
		___valueSlots_7 = value;
		Il2CppCodeGenWriteBarrier((&___valueSlots_7), value);
	}

	inline static int32_t get_offset_of_touchedSlots_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t26093461, ___touchedSlots_8)); }
	inline int32_t get_touchedSlots_8() const { return ___touchedSlots_8; }
	inline int32_t* get_address_of_touchedSlots_8() { return &___touchedSlots_8; }
	inline void set_touchedSlots_8(int32_t value)
	{
		___touchedSlots_8 = value;
	}

	inline static int32_t get_offset_of_emptySlot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t26093461, ___emptySlot_9)); }
	inline int32_t get_emptySlot_9() const { return ___emptySlot_9; }
	inline int32_t* get_address_of_emptySlot_9() { return &___emptySlot_9; }
	inline void set_emptySlot_9(int32_t value)
	{
		___emptySlot_9 = value;
	}

	inline static int32_t get_offset_of_count_10() { return static_cast<int32_t>(offsetof(Dictionary_2_t26093461, ___count_10)); }
	inline int32_t get_count_10() const { return ___count_10; }
	inline int32_t* get_address_of_count_10() { return &___count_10; }
	inline void set_count_10(int32_t value)
	{
		___count_10 = value;
	}

	inline static int32_t get_offset_of_threshold_11() { return static_cast<int32_t>(offsetof(Dictionary_2_t26093461, ___threshold_11)); }
	inline int32_t get_threshold_11() const { return ___threshold_11; }
	inline int32_t* get_address_of_threshold_11() { return &___threshold_11; }
	inline void set_threshold_11(int32_t value)
	{
		___threshold_11 = value;
	}

	inline static int32_t get_offset_of_hcp_12() { return static_cast<int32_t>(offsetof(Dictionary_2_t26093461, ___hcp_12)); }
	inline RuntimeObject* get_hcp_12() const { return ___hcp_12; }
	inline RuntimeObject** get_address_of_hcp_12() { return &___hcp_12; }
	inline void set_hcp_12(RuntimeObject* value)
	{
		___hcp_12 = value;
		Il2CppCodeGenWriteBarrier((&___hcp_12), value);
	}

	inline static int32_t get_offset_of_serialization_info_13() { return static_cast<int32_t>(offsetof(Dictionary_2_t26093461, ___serialization_info_13)); }
	inline SerializationInfo_t950877179 * get_serialization_info_13() const { return ___serialization_info_13; }
	inline SerializationInfo_t950877179 ** get_address_of_serialization_info_13() { return &___serialization_info_13; }
	inline void set_serialization_info_13(SerializationInfo_t950877179 * value)
	{
		___serialization_info_13 = value;
		Il2CppCodeGenWriteBarrier((&___serialization_info_13), value);
	}

	inline static int32_t get_offset_of_generation_14() { return static_cast<int32_t>(offsetof(Dictionary_2_t26093461, ___generation_14)); }
	inline int32_t get_generation_14() const { return ___generation_14; }
	inline int32_t* get_address_of_generation_14() { return &___generation_14; }
	inline void set_generation_14(int32_t value)
	{
		___generation_14 = value;
	}
};

struct Dictionary_2_t26093461_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,System.Collections.DictionaryEntry> System.Collections.Generic.Dictionary`2::<>f__am$cacheB
	Transform_1_t4217158323 * ___U3CU3Ef__amU24cacheB_15;

public:
	inline static int32_t get_offset_of_U3CU3Ef__amU24cacheB_15() { return static_cast<int32_t>(offsetof(Dictionary_2_t26093461_StaticFields, ___U3CU3Ef__amU24cacheB_15)); }
	inline Transform_1_t4217158323 * get_U3CU3Ef__amU24cacheB_15() const { return ___U3CU3Ef__amU24cacheB_15; }
	inline Transform_1_t4217158323 ** get_address_of_U3CU3Ef__amU24cacheB_15() { return &___U3CU3Ef__amU24cacheB_15; }
	inline void set_U3CU3Ef__amU24cacheB_15(Transform_1_t4217158323 * value)
	{
		___U3CU3Ef__amU24cacheB_15 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__amU24cacheB_15), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DICTIONARY_2_T26093461_H
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
	// System.IntPtr[] System.Exception::trace_ips
	IntPtrU5BU5D_t4013366056* ___trace_ips_0;
	// System.Exception System.Exception::inner_exception
	Exception_t * ___inner_exception_1;
	// System.String System.Exception::message
	String_t* ___message_2;
	// System.String System.Exception::help_link
	String_t* ___help_link_3;
	// System.String System.Exception::class_name
	String_t* ___class_name_4;
	// System.String System.Exception::stack_trace
	String_t* ___stack_trace_5;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_6;
	// System.Int32 System.Exception::remote_stack_index
	int32_t ___remote_stack_index_7;
	// System.Int32 System.Exception::hresult
	int32_t ___hresult_8;
	// System.String System.Exception::source
	String_t* ___source_9;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_10;

public:
	inline static int32_t get_offset_of_trace_ips_0() { return static_cast<int32_t>(offsetof(Exception_t, ___trace_ips_0)); }
	inline IntPtrU5BU5D_t4013366056* get_trace_ips_0() const { return ___trace_ips_0; }
	inline IntPtrU5BU5D_t4013366056** get_address_of_trace_ips_0() { return &___trace_ips_0; }
	inline void set_trace_ips_0(IntPtrU5BU5D_t4013366056* value)
	{
		___trace_ips_0 = value;
		Il2CppCodeGenWriteBarrier((&___trace_ips_0), value);
	}

	inline static int32_t get_offset_of_inner_exception_1() { return static_cast<int32_t>(offsetof(Exception_t, ___inner_exception_1)); }
	inline Exception_t * get_inner_exception_1() const { return ___inner_exception_1; }
	inline Exception_t ** get_address_of_inner_exception_1() { return &___inner_exception_1; }
	inline void set_inner_exception_1(Exception_t * value)
	{
		___inner_exception_1 = value;
		Il2CppCodeGenWriteBarrier((&___inner_exception_1), value);
	}

	inline static int32_t get_offset_of_message_2() { return static_cast<int32_t>(offsetof(Exception_t, ___message_2)); }
	inline String_t* get_message_2() const { return ___message_2; }
	inline String_t** get_address_of_message_2() { return &___message_2; }
	inline void set_message_2(String_t* value)
	{
		___message_2 = value;
		Il2CppCodeGenWriteBarrier((&___message_2), value);
	}

	inline static int32_t get_offset_of_help_link_3() { return static_cast<int32_t>(offsetof(Exception_t, ___help_link_3)); }
	inline String_t* get_help_link_3() const { return ___help_link_3; }
	inline String_t** get_address_of_help_link_3() { return &___help_link_3; }
	inline void set_help_link_3(String_t* value)
	{
		___help_link_3 = value;
		Il2CppCodeGenWriteBarrier((&___help_link_3), value);
	}

	inline static int32_t get_offset_of_class_name_4() { return static_cast<int32_t>(offsetof(Exception_t, ___class_name_4)); }
	inline String_t* get_class_name_4() const { return ___class_name_4; }
	inline String_t** get_address_of_class_name_4() { return &___class_name_4; }
	inline void set_class_name_4(String_t* value)
	{
		___class_name_4 = value;
		Il2CppCodeGenWriteBarrier((&___class_name_4), value);
	}

	inline static int32_t get_offset_of_stack_trace_5() { return static_cast<int32_t>(offsetof(Exception_t, ___stack_trace_5)); }
	inline String_t* get_stack_trace_5() const { return ___stack_trace_5; }
	inline String_t** get_address_of_stack_trace_5() { return &___stack_trace_5; }
	inline void set_stack_trace_5(String_t* value)
	{
		___stack_trace_5 = value;
		Il2CppCodeGenWriteBarrier((&___stack_trace_5), value);
	}

	inline static int32_t get_offset_of__remoteStackTraceString_6() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackTraceString_6)); }
	inline String_t* get__remoteStackTraceString_6() const { return ____remoteStackTraceString_6; }
	inline String_t** get_address_of__remoteStackTraceString_6() { return &____remoteStackTraceString_6; }
	inline void set__remoteStackTraceString_6(String_t* value)
	{
		____remoteStackTraceString_6 = value;
		Il2CppCodeGenWriteBarrier((&____remoteStackTraceString_6), value);
	}

	inline static int32_t get_offset_of_remote_stack_index_7() { return static_cast<int32_t>(offsetof(Exception_t, ___remote_stack_index_7)); }
	inline int32_t get_remote_stack_index_7() const { return ___remote_stack_index_7; }
	inline int32_t* get_address_of_remote_stack_index_7() { return &___remote_stack_index_7; }
	inline void set_remote_stack_index_7(int32_t value)
	{
		___remote_stack_index_7 = value;
	}

	inline static int32_t get_offset_of_hresult_8() { return static_cast<int32_t>(offsetof(Exception_t, ___hresult_8)); }
	inline int32_t get_hresult_8() const { return ___hresult_8; }
	inline int32_t* get_address_of_hresult_8() { return &___hresult_8; }
	inline void set_hresult_8(int32_t value)
	{
		___hresult_8 = value;
	}

	inline static int32_t get_offset_of_source_9() { return static_cast<int32_t>(offsetof(Exception_t, ___source_9)); }
	inline String_t* get_source_9() const { return ___source_9; }
	inline String_t** get_address_of_source_9() { return &___source_9; }
	inline void set_source_9(String_t* value)
	{
		___source_9 = value;
		Il2CppCodeGenWriteBarrier((&___source_9), value);
	}

	inline static int32_t get_offset_of__data_10() { return static_cast<int32_t>(offsetof(Exception_t, ____data_10)); }
	inline RuntimeObject* get__data_10() const { return ____data_10; }
	inline RuntimeObject** get_address_of__data_10() { return &____data_10; }
	inline void set__data_10(RuntimeObject* value)
	{
		____data_10 = value;
		Il2CppCodeGenWriteBarrier((&____data_10), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EXCEPTION_T_H
#ifndef U3CWAITATTACKDURATIONU3EC__ITERATOR0_T664319700_H
#define U3CWAITATTACKDURATIONU3EC__ITERATOR0_T664319700_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Weapon/<WaitAttackDuration>c__Iterator0
struct  U3CWaitAttackDurationU3Ec__Iterator0_t664319700  : public RuntimeObject
{
public:
	// System.Int32 Weapon/<WaitAttackDuration>c__Iterator0::<frames>__0
	int32_t ___U3CframesU3E__0_0;
	// System.Int32 Weapon/<WaitAttackDuration>c__Iterator0::<frameDelay>__0
	int32_t ___U3CframeDelayU3E__0_1;
	// System.Int32 Weapon/<WaitAttackDuration>c__Iterator0::<i>__1
	int32_t ___U3CiU3E__1_2;
	// Weapon Weapon/<WaitAttackDuration>c__Iterator0::$this
	Weapon_t4063826929 * ___U24this_3;
	// System.Object Weapon/<WaitAttackDuration>c__Iterator0::$current
	RuntimeObject * ___U24current_4;
	// System.Boolean Weapon/<WaitAttackDuration>c__Iterator0::$disposing
	bool ___U24disposing_5;
	// System.Int32 Weapon/<WaitAttackDuration>c__Iterator0::$PC
	int32_t ___U24PC_6;

public:
	inline static int32_t get_offset_of_U3CframesU3E__0_0() { return static_cast<int32_t>(offsetof(U3CWaitAttackDurationU3Ec__Iterator0_t664319700, ___U3CframesU3E__0_0)); }
	inline int32_t get_U3CframesU3E__0_0() const { return ___U3CframesU3E__0_0; }
	inline int32_t* get_address_of_U3CframesU3E__0_0() { return &___U3CframesU3E__0_0; }
	inline void set_U3CframesU3E__0_0(int32_t value)
	{
		___U3CframesU3E__0_0 = value;
	}

	inline static int32_t get_offset_of_U3CframeDelayU3E__0_1() { return static_cast<int32_t>(offsetof(U3CWaitAttackDurationU3Ec__Iterator0_t664319700, ___U3CframeDelayU3E__0_1)); }
	inline int32_t get_U3CframeDelayU3E__0_1() const { return ___U3CframeDelayU3E__0_1; }
	inline int32_t* get_address_of_U3CframeDelayU3E__0_1() { return &___U3CframeDelayU3E__0_1; }
	inline void set_U3CframeDelayU3E__0_1(int32_t value)
	{
		___U3CframeDelayU3E__0_1 = value;
	}

	inline static int32_t get_offset_of_U3CiU3E__1_2() { return static_cast<int32_t>(offsetof(U3CWaitAttackDurationU3Ec__Iterator0_t664319700, ___U3CiU3E__1_2)); }
	inline int32_t get_U3CiU3E__1_2() const { return ___U3CiU3E__1_2; }
	inline int32_t* get_address_of_U3CiU3E__1_2() { return &___U3CiU3E__1_2; }
	inline void set_U3CiU3E__1_2(int32_t value)
	{
		___U3CiU3E__1_2 = value;
	}

	inline static int32_t get_offset_of_U24this_3() { return static_cast<int32_t>(offsetof(U3CWaitAttackDurationU3Ec__Iterator0_t664319700, ___U24this_3)); }
	inline Weapon_t4063826929 * get_U24this_3() const { return ___U24this_3; }
	inline Weapon_t4063826929 ** get_address_of_U24this_3() { return &___U24this_3; }
	inline void set_U24this_3(Weapon_t4063826929 * value)
	{
		___U24this_3 = value;
		Il2CppCodeGenWriteBarrier((&___U24this_3), value);
	}

	inline static int32_t get_offset_of_U24current_4() { return static_cast<int32_t>(offsetof(U3CWaitAttackDurationU3Ec__Iterator0_t664319700, ___U24current_4)); }
	inline RuntimeObject * get_U24current_4() const { return ___U24current_4; }
	inline RuntimeObject ** get_address_of_U24current_4() { return &___U24current_4; }
	inline void set_U24current_4(RuntimeObject * value)
	{
		___U24current_4 = value;
		Il2CppCodeGenWriteBarrier((&___U24current_4), value);
	}

	inline static int32_t get_offset_of_U24disposing_5() { return static_cast<int32_t>(offsetof(U3CWaitAttackDurationU3Ec__Iterator0_t664319700, ___U24disposing_5)); }
	inline bool get_U24disposing_5() const { return ___U24disposing_5; }
	inline bool* get_address_of_U24disposing_5() { return &___U24disposing_5; }
	inline void set_U24disposing_5(bool value)
	{
		___U24disposing_5 = value;
	}

	inline static int32_t get_offset_of_U24PC_6() { return static_cast<int32_t>(offsetof(U3CWaitAttackDurationU3Ec__Iterator0_t664319700, ___U24PC_6)); }
	inline int32_t get_U24PC_6() const { return ___U24PC_6; }
	inline int32_t* get_address_of_U24PC_6() { return &___U24PC_6; }
	inline void set_U24PC_6(int32_t value)
	{
		___U24PC_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CWAITATTACKDURATIONU3EC__ITERATOR0_T664319700_H
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
	// System.Int32 System.String::length
	int32_t ___length_0;
	// System.Char System.String::start_char
	Il2CppChar ___start_char_1;

public:
	inline static int32_t get_offset_of_length_0() { return static_cast<int32_t>(offsetof(String_t, ___length_0)); }
	inline int32_t get_length_0() const { return ___length_0; }
	inline int32_t* get_address_of_length_0() { return &___length_0; }
	inline void set_length_0(int32_t value)
	{
		___length_0 = value;
	}

	inline static int32_t get_offset_of_start_char_1() { return static_cast<int32_t>(offsetof(String_t, ___start_char_1)); }
	inline Il2CppChar get_start_char_1() const { return ___start_char_1; }
	inline Il2CppChar* get_address_of_start_char_1() { return &___start_char_1; }
	inline void set_start_char_1(Il2CppChar value)
	{
		___start_char_1 = value;
	}
};

struct String_t_StaticFields
{
public:
	// System.String System.String::Empty
	String_t* ___Empty_2;
	// System.Char[] System.String::WhiteChars
	CharU5BU5D_t3528271667* ___WhiteChars_3;

public:
	inline static int32_t get_offset_of_Empty_2() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___Empty_2)); }
	inline String_t* get_Empty_2() const { return ___Empty_2; }
	inline String_t** get_address_of_Empty_2() { return &___Empty_2; }
	inline void set_Empty_2(String_t* value)
	{
		___Empty_2 = value;
		Il2CppCodeGenWriteBarrier((&___Empty_2), value);
	}

	inline static int32_t get_offset_of_WhiteChars_3() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___WhiteChars_3)); }
	inline CharU5BU5D_t3528271667* get_WhiteChars_3() const { return ___WhiteChars_3; }
	inline CharU5BU5D_t3528271667** get_address_of_WhiteChars_3() { return &___WhiteChars_3; }
	inline void set_WhiteChars_3(CharU5BU5D_t3528271667* value)
	{
		___WhiteChars_3 = value;
		Il2CppCodeGenWriteBarrier((&___WhiteChars_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STRING_T_H
#ifndef VALUETYPE_T3640485471_H
#define VALUETYPE_T3640485471_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ValueType
struct  ValueType_t3640485471  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t3640485471_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t3640485471_marshaled_com
{
};
#endif // VALUETYPE_T3640485471_H
#ifndef YIELDINSTRUCTION_T403091072_H
#define YIELDINSTRUCTION_T403091072_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.YieldInstruction
struct  YieldInstruction_t403091072  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_t403091072_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_t403091072_marshaled_com
{
};
#endif // YIELDINSTRUCTION_T403091072_H
#ifndef U3CWAITFORPLAYCLICKU3EC__ITERATOR2_T2451926618_H
#define U3CWAITFORPLAYCLICKU3EC__ITERATOR2_T2451926618_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// IntroSequence/<WaitForPlayClick>c__Iterator2
struct  U3CWaitForPlayClickU3Ec__Iterator2_t2451926618  : public RuntimeObject
{
public:
	// IntroSequence IntroSequence/<WaitForPlayClick>c__Iterator2::$this
	IntroSequence_t4248026603 * ___U24this_0;
	// System.Object IntroSequence/<WaitForPlayClick>c__Iterator2::$current
	RuntimeObject * ___U24current_1;
	// System.Boolean IntroSequence/<WaitForPlayClick>c__Iterator2::$disposing
	bool ___U24disposing_2;
	// System.Int32 IntroSequence/<WaitForPlayClick>c__Iterator2::$PC
	int32_t ___U24PC_3;

public:
	inline static int32_t get_offset_of_U24this_0() { return static_cast<int32_t>(offsetof(U3CWaitForPlayClickU3Ec__Iterator2_t2451926618, ___U24this_0)); }
	inline IntroSequence_t4248026603 * get_U24this_0() const { return ___U24this_0; }
	inline IntroSequence_t4248026603 ** get_address_of_U24this_0() { return &___U24this_0; }
	inline void set_U24this_0(IntroSequence_t4248026603 * value)
	{
		___U24this_0 = value;
		Il2CppCodeGenWriteBarrier((&___U24this_0), value);
	}

	inline static int32_t get_offset_of_U24current_1() { return static_cast<int32_t>(offsetof(U3CWaitForPlayClickU3Ec__Iterator2_t2451926618, ___U24current_1)); }
	inline RuntimeObject * get_U24current_1() const { return ___U24current_1; }
	inline RuntimeObject ** get_address_of_U24current_1() { return &___U24current_1; }
	inline void set_U24current_1(RuntimeObject * value)
	{
		___U24current_1 = value;
		Il2CppCodeGenWriteBarrier((&___U24current_1), value);
	}

	inline static int32_t get_offset_of_U24disposing_2() { return static_cast<int32_t>(offsetof(U3CWaitForPlayClickU3Ec__Iterator2_t2451926618, ___U24disposing_2)); }
	inline bool get_U24disposing_2() const { return ___U24disposing_2; }
	inline bool* get_address_of_U24disposing_2() { return &___U24disposing_2; }
	inline void set_U24disposing_2(bool value)
	{
		___U24disposing_2 = value;
	}

	inline static int32_t get_offset_of_U24PC_3() { return static_cast<int32_t>(offsetof(U3CWaitForPlayClickU3Ec__Iterator2_t2451926618, ___U24PC_3)); }
	inline int32_t get_U24PC_3() const { return ___U24PC_3; }
	inline int32_t* get_address_of_U24PC_3() { return &___U24PC_3; }
	inline void set_U24PC_3(int32_t value)
	{
		___U24PC_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CWAITFORPLAYCLICKU3EC__ITERATOR2_T2451926618_H
#ifndef U3CFADEOUTBUTTONU3EC__ITERATOR4_T2877370097_H
#define U3CFADEOUTBUTTONU3EC__ITERATOR4_T2877370097_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// IntroSequence/<FadeOutButton>c__Iterator4
struct  U3CFadeOutButtonU3Ec__Iterator4_t2877370097  : public RuntimeObject
{
public:
	// System.Int32 IntroSequence/<FadeOutButton>c__Iterator4::<i>__1
	int32_t ___U3CiU3E__1_0;
	// IntroSequence IntroSequence/<FadeOutButton>c__Iterator4::$this
	IntroSequence_t4248026603 * ___U24this_1;
	// System.Object IntroSequence/<FadeOutButton>c__Iterator4::$current
	RuntimeObject * ___U24current_2;
	// System.Boolean IntroSequence/<FadeOutButton>c__Iterator4::$disposing
	bool ___U24disposing_3;
	// System.Int32 IntroSequence/<FadeOutButton>c__Iterator4::$PC
	int32_t ___U24PC_4;

public:
	inline static int32_t get_offset_of_U3CiU3E__1_0() { return static_cast<int32_t>(offsetof(U3CFadeOutButtonU3Ec__Iterator4_t2877370097, ___U3CiU3E__1_0)); }
	inline int32_t get_U3CiU3E__1_0() const { return ___U3CiU3E__1_0; }
	inline int32_t* get_address_of_U3CiU3E__1_0() { return &___U3CiU3E__1_0; }
	inline void set_U3CiU3E__1_0(int32_t value)
	{
		___U3CiU3E__1_0 = value;
	}

	inline static int32_t get_offset_of_U24this_1() { return static_cast<int32_t>(offsetof(U3CFadeOutButtonU3Ec__Iterator4_t2877370097, ___U24this_1)); }
	inline IntroSequence_t4248026603 * get_U24this_1() const { return ___U24this_1; }
	inline IntroSequence_t4248026603 ** get_address_of_U24this_1() { return &___U24this_1; }
	inline void set_U24this_1(IntroSequence_t4248026603 * value)
	{
		___U24this_1 = value;
		Il2CppCodeGenWriteBarrier((&___U24this_1), value);
	}

	inline static int32_t get_offset_of_U24current_2() { return static_cast<int32_t>(offsetof(U3CFadeOutButtonU3Ec__Iterator4_t2877370097, ___U24current_2)); }
	inline RuntimeObject * get_U24current_2() const { return ___U24current_2; }
	inline RuntimeObject ** get_address_of_U24current_2() { return &___U24current_2; }
	inline void set_U24current_2(RuntimeObject * value)
	{
		___U24current_2 = value;
		Il2CppCodeGenWriteBarrier((&___U24current_2), value);
	}

	inline static int32_t get_offset_of_U24disposing_3() { return static_cast<int32_t>(offsetof(U3CFadeOutButtonU3Ec__Iterator4_t2877370097, ___U24disposing_3)); }
	inline bool get_U24disposing_3() const { return ___U24disposing_3; }
	inline bool* get_address_of_U24disposing_3() { return &___U24disposing_3; }
	inline void set_U24disposing_3(bool value)
	{
		___U24disposing_3 = value;
	}

	inline static int32_t get_offset_of_U24PC_4() { return static_cast<int32_t>(offsetof(U3CFadeOutButtonU3Ec__Iterator4_t2877370097, ___U24PC_4)); }
	inline int32_t get_U24PC_4() const { return ___U24PC_4; }
	inline int32_t* get_address_of_U24PC_4() { return &___U24PC_4; }
	inline void set_U24PC_4(int32_t value)
	{
		___U24PC_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CFADEOUTBUTTONU3EC__ITERATOR4_T2877370097_H
#ifndef U3CFADEINBUTTONU3EC__ITERATOR3_T3780138571_H
#define U3CFADEINBUTTONU3EC__ITERATOR3_T3780138571_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// IntroSequence/<FadeInButton>c__Iterator3
struct  U3CFadeInButtonU3Ec__Iterator3_t3780138571  : public RuntimeObject
{
public:
	// System.Int32 IntroSequence/<FadeInButton>c__Iterator3::<i>__1
	int32_t ___U3CiU3E__1_0;
	// IntroSequence IntroSequence/<FadeInButton>c__Iterator3::$this
	IntroSequence_t4248026603 * ___U24this_1;
	// System.Object IntroSequence/<FadeInButton>c__Iterator3::$current
	RuntimeObject * ___U24current_2;
	// System.Boolean IntroSequence/<FadeInButton>c__Iterator3::$disposing
	bool ___U24disposing_3;
	// System.Int32 IntroSequence/<FadeInButton>c__Iterator3::$PC
	int32_t ___U24PC_4;

public:
	inline static int32_t get_offset_of_U3CiU3E__1_0() { return static_cast<int32_t>(offsetof(U3CFadeInButtonU3Ec__Iterator3_t3780138571, ___U3CiU3E__1_0)); }
	inline int32_t get_U3CiU3E__1_0() const { return ___U3CiU3E__1_0; }
	inline int32_t* get_address_of_U3CiU3E__1_0() { return &___U3CiU3E__1_0; }
	inline void set_U3CiU3E__1_0(int32_t value)
	{
		___U3CiU3E__1_0 = value;
	}

	inline static int32_t get_offset_of_U24this_1() { return static_cast<int32_t>(offsetof(U3CFadeInButtonU3Ec__Iterator3_t3780138571, ___U24this_1)); }
	inline IntroSequence_t4248026603 * get_U24this_1() const { return ___U24this_1; }
	inline IntroSequence_t4248026603 ** get_address_of_U24this_1() { return &___U24this_1; }
	inline void set_U24this_1(IntroSequence_t4248026603 * value)
	{
		___U24this_1 = value;
		Il2CppCodeGenWriteBarrier((&___U24this_1), value);
	}

	inline static int32_t get_offset_of_U24current_2() { return static_cast<int32_t>(offsetof(U3CFadeInButtonU3Ec__Iterator3_t3780138571, ___U24current_2)); }
	inline RuntimeObject * get_U24current_2() const { return ___U24current_2; }
	inline RuntimeObject ** get_address_of_U24current_2() { return &___U24current_2; }
	inline void set_U24current_2(RuntimeObject * value)
	{
		___U24current_2 = value;
		Il2CppCodeGenWriteBarrier((&___U24current_2), value);
	}

	inline static int32_t get_offset_of_U24disposing_3() { return static_cast<int32_t>(offsetof(U3CFadeInButtonU3Ec__Iterator3_t3780138571, ___U24disposing_3)); }
	inline bool get_U24disposing_3() const { return ___U24disposing_3; }
	inline bool* get_address_of_U24disposing_3() { return &___U24disposing_3; }
	inline void set_U24disposing_3(bool value)
	{
		___U24disposing_3 = value;
	}

	inline static int32_t get_offset_of_U24PC_4() { return static_cast<int32_t>(offsetof(U3CFadeInButtonU3Ec__Iterator3_t3780138571, ___U24PC_4)); }
	inline int32_t get_U24PC_4() const { return ___U24PC_4; }
	inline int32_t* get_address_of_U24PC_4() { return &___U24PC_4; }
	inline void set_U24PC_4(int32_t value)
	{
		___U24PC_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CFADEINBUTTONU3EC__ITERATOR3_T3780138571_H
#ifndef QUATERNION_T2301928331_H
#define QUATERNION_T2301928331_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Quaternion
struct  Quaternion_t2301928331 
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
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Quaternion_t2301928331, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Quaternion_t2301928331, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}

	inline static int32_t get_offset_of_z_2() { return static_cast<int32_t>(offsetof(Quaternion_t2301928331, ___z_2)); }
	inline float get_z_2() const { return ___z_2; }
	inline float* get_address_of_z_2() { return &___z_2; }
	inline void set_z_2(float value)
	{
		___z_2 = value;
	}

	inline static int32_t get_offset_of_w_3() { return static_cast<int32_t>(offsetof(Quaternion_t2301928331, ___w_3)); }
	inline float get_w_3() const { return ___w_3; }
	inline float* get_address_of_w_3() { return &___w_3; }
	inline void set_w_3(float value)
	{
		___w_3 = value;
	}
};

struct Quaternion_t2301928331_StaticFields
{
public:
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_t2301928331  ___identityQuaternion_4;

public:
	inline static int32_t get_offset_of_identityQuaternion_4() { return static_cast<int32_t>(offsetof(Quaternion_t2301928331_StaticFields, ___identityQuaternion_4)); }
	inline Quaternion_t2301928331  get_identityQuaternion_4() const { return ___identityQuaternion_4; }
	inline Quaternion_t2301928331 * get_address_of_identityQuaternion_4() { return &___identityQuaternion_4; }
	inline void set_identityQuaternion_4(Quaternion_t2301928331  value)
	{
		___identityQuaternion_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // QUATERNION_T2301928331_H
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
#ifndef UNITYEVENT_T2581268647_H
#define UNITYEVENT_T2581268647_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Events.UnityEvent
struct  UnityEvent_t2581268647  : public UnityEventBase_t3960448221
{
public:
	// System.Object[] UnityEngine.Events.UnityEvent::m_InvokeArray
	ObjectU5BU5D_t2843939325* ___m_InvokeArray_4;

public:
	inline static int32_t get_offset_of_m_InvokeArray_4() { return static_cast<int32_t>(offsetof(UnityEvent_t2581268647, ___m_InvokeArray_4)); }
	inline ObjectU5BU5D_t2843939325* get_m_InvokeArray_4() const { return ___m_InvokeArray_4; }
	inline ObjectU5BU5D_t2843939325** get_address_of_m_InvokeArray_4() { return &___m_InvokeArray_4; }
	inline void set_m_InvokeArray_4(ObjectU5BU5D_t2843939325* value)
	{
		___m_InvokeArray_4 = value;
		Il2CppCodeGenWriteBarrier((&___m_InvokeArray_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYEVENT_T2581268647_H
#ifndef COLOR_T2555686324_H
#define COLOR_T2555686324_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Color
struct  Color_t2555686324 
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
	inline static int32_t get_offset_of_r_0() { return static_cast<int32_t>(offsetof(Color_t2555686324, ___r_0)); }
	inline float get_r_0() const { return ___r_0; }
	inline float* get_address_of_r_0() { return &___r_0; }
	inline void set_r_0(float value)
	{
		___r_0 = value;
	}

	inline static int32_t get_offset_of_g_1() { return static_cast<int32_t>(offsetof(Color_t2555686324, ___g_1)); }
	inline float get_g_1() const { return ___g_1; }
	inline float* get_address_of_g_1() { return &___g_1; }
	inline void set_g_1(float value)
	{
		___g_1 = value;
	}

	inline static int32_t get_offset_of_b_2() { return static_cast<int32_t>(offsetof(Color_t2555686324, ___b_2)); }
	inline float get_b_2() const { return ___b_2; }
	inline float* get_address_of_b_2() { return &___b_2; }
	inline void set_b_2(float value)
	{
		___b_2 = value;
	}

	inline static int32_t get_offset_of_a_3() { return static_cast<int32_t>(offsetof(Color_t2555686324, ___a_3)); }
	inline float get_a_3() const { return ___a_3; }
	inline float* get_address_of_a_3() { return &___a_3; }
	inline void set_a_3(float value)
	{
		___a_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COLOR_T2555686324_H
#ifndef UINT32_T2560061978_H
#define UINT32_T2560061978_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.UInt32
struct  UInt32_t2560061978 
{
public:
	// System.UInt32 System.UInt32::m_value
	uint32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(UInt32_t2560061978, ___m_value_0)); }
	inline uint32_t get_m_value_0() const { return ___m_value_0; }
	inline uint32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint32_t value)
	{
		___m_value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UINT32_T2560061978_H
#ifndef VECTOR3_T3722313464_H
#define VECTOR3_T3722313464_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Vector3
struct  Vector3_t3722313464 
{
public:
	// System.Single UnityEngine.Vector3::x
	float ___x_1;
	// System.Single UnityEngine.Vector3::y
	float ___y_2;
	// System.Single UnityEngine.Vector3::z
	float ___z_3;

public:
	inline static int32_t get_offset_of_x_1() { return static_cast<int32_t>(offsetof(Vector3_t3722313464, ___x_1)); }
	inline float get_x_1() const { return ___x_1; }
	inline float* get_address_of_x_1() { return &___x_1; }
	inline void set_x_1(float value)
	{
		___x_1 = value;
	}

	inline static int32_t get_offset_of_y_2() { return static_cast<int32_t>(offsetof(Vector3_t3722313464, ___y_2)); }
	inline float get_y_2() const { return ___y_2; }
	inline float* get_address_of_y_2() { return &___y_2; }
	inline void set_y_2(float value)
	{
		___y_2 = value;
	}

	inline static int32_t get_offset_of_z_3() { return static_cast<int32_t>(offsetof(Vector3_t3722313464, ___z_3)); }
	inline float get_z_3() const { return ___z_3; }
	inline float* get_address_of_z_3() { return &___z_3; }
	inline void set_z_3(float value)
	{
		___z_3 = value;
	}
};

struct Vector3_t3722313464_StaticFields
{
public:
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t3722313464  ___zeroVector_4;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t3722313464  ___oneVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t3722313464  ___upVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t3722313464  ___downVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t3722313464  ___leftVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t3722313464  ___rightVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t3722313464  ___forwardVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t3722313464  ___backVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t3722313464  ___positiveInfinityVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t3722313464  ___negativeInfinityVector_13;

public:
	inline static int32_t get_offset_of_zeroVector_4() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___zeroVector_4)); }
	inline Vector3_t3722313464  get_zeroVector_4() const { return ___zeroVector_4; }
	inline Vector3_t3722313464 * get_address_of_zeroVector_4() { return &___zeroVector_4; }
	inline void set_zeroVector_4(Vector3_t3722313464  value)
	{
		___zeroVector_4 = value;
	}

	inline static int32_t get_offset_of_oneVector_5() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___oneVector_5)); }
	inline Vector3_t3722313464  get_oneVector_5() const { return ___oneVector_5; }
	inline Vector3_t3722313464 * get_address_of_oneVector_5() { return &___oneVector_5; }
	inline void set_oneVector_5(Vector3_t3722313464  value)
	{
		___oneVector_5 = value;
	}

	inline static int32_t get_offset_of_upVector_6() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___upVector_6)); }
	inline Vector3_t3722313464  get_upVector_6() const { return ___upVector_6; }
	inline Vector3_t3722313464 * get_address_of_upVector_6() { return &___upVector_6; }
	inline void set_upVector_6(Vector3_t3722313464  value)
	{
		___upVector_6 = value;
	}

	inline static int32_t get_offset_of_downVector_7() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___downVector_7)); }
	inline Vector3_t3722313464  get_downVector_7() const { return ___downVector_7; }
	inline Vector3_t3722313464 * get_address_of_downVector_7() { return &___downVector_7; }
	inline void set_downVector_7(Vector3_t3722313464  value)
	{
		___downVector_7 = value;
	}

	inline static int32_t get_offset_of_leftVector_8() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___leftVector_8)); }
	inline Vector3_t3722313464  get_leftVector_8() const { return ___leftVector_8; }
	inline Vector3_t3722313464 * get_address_of_leftVector_8() { return &___leftVector_8; }
	inline void set_leftVector_8(Vector3_t3722313464  value)
	{
		___leftVector_8 = value;
	}

	inline static int32_t get_offset_of_rightVector_9() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___rightVector_9)); }
	inline Vector3_t3722313464  get_rightVector_9() const { return ___rightVector_9; }
	inline Vector3_t3722313464 * get_address_of_rightVector_9() { return &___rightVector_9; }
	inline void set_rightVector_9(Vector3_t3722313464  value)
	{
		___rightVector_9 = value;
	}

	inline static int32_t get_offset_of_forwardVector_10() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___forwardVector_10)); }
	inline Vector3_t3722313464  get_forwardVector_10() const { return ___forwardVector_10; }
	inline Vector3_t3722313464 * get_address_of_forwardVector_10() { return &___forwardVector_10; }
	inline void set_forwardVector_10(Vector3_t3722313464  value)
	{
		___forwardVector_10 = value;
	}

	inline static int32_t get_offset_of_backVector_11() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___backVector_11)); }
	inline Vector3_t3722313464  get_backVector_11() const { return ___backVector_11; }
	inline Vector3_t3722313464 * get_address_of_backVector_11() { return &___backVector_11; }
	inline void set_backVector_11(Vector3_t3722313464  value)
	{
		___backVector_11 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_12() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___positiveInfinityVector_12)); }
	inline Vector3_t3722313464  get_positiveInfinityVector_12() const { return ___positiveInfinityVector_12; }
	inline Vector3_t3722313464 * get_address_of_positiveInfinityVector_12() { return &___positiveInfinityVector_12; }
	inline void set_positiveInfinityVector_12(Vector3_t3722313464  value)
	{
		___positiveInfinityVector_12 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_13() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___negativeInfinityVector_13)); }
	inline Vector3_t3722313464  get_negativeInfinityVector_13() const { return ___negativeInfinityVector_13; }
	inline Vector3_t3722313464 * get_address_of_negativeInfinityVector_13() { return &___negativeInfinityVector_13; }
	inline void set_negativeInfinityVector_13(Vector3_t3722313464  value)
	{
		___negativeInfinityVector_13 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VECTOR3_T3722313464_H
#ifndef SYSTEMEXCEPTION_T176217640_H
#define SYSTEMEXCEPTION_T176217640_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.SystemException
struct  SystemException_t176217640  : public Exception_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SYSTEMEXCEPTION_T176217640_H
#ifndef VECTOR2_T2156229523_H
#define VECTOR2_T2156229523_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Vector2
struct  Vector2_t2156229523 
{
public:
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Vector2_t2156229523, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Vector2_t2156229523, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}
};

struct Vector2_t2156229523_StaticFields
{
public:
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_t2156229523  ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_t2156229523  ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_t2156229523  ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_t2156229523  ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_t2156229523  ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_t2156229523  ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_t2156229523  ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_t2156229523  ___negativeInfinityVector_9;

public:
	inline static int32_t get_offset_of_zeroVector_2() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___zeroVector_2)); }
	inline Vector2_t2156229523  get_zeroVector_2() const { return ___zeroVector_2; }
	inline Vector2_t2156229523 * get_address_of_zeroVector_2() { return &___zeroVector_2; }
	inline void set_zeroVector_2(Vector2_t2156229523  value)
	{
		___zeroVector_2 = value;
	}

	inline static int32_t get_offset_of_oneVector_3() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___oneVector_3)); }
	inline Vector2_t2156229523  get_oneVector_3() const { return ___oneVector_3; }
	inline Vector2_t2156229523 * get_address_of_oneVector_3() { return &___oneVector_3; }
	inline void set_oneVector_3(Vector2_t2156229523  value)
	{
		___oneVector_3 = value;
	}

	inline static int32_t get_offset_of_upVector_4() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___upVector_4)); }
	inline Vector2_t2156229523  get_upVector_4() const { return ___upVector_4; }
	inline Vector2_t2156229523 * get_address_of_upVector_4() { return &___upVector_4; }
	inline void set_upVector_4(Vector2_t2156229523  value)
	{
		___upVector_4 = value;
	}

	inline static int32_t get_offset_of_downVector_5() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___downVector_5)); }
	inline Vector2_t2156229523  get_downVector_5() const { return ___downVector_5; }
	inline Vector2_t2156229523 * get_address_of_downVector_5() { return &___downVector_5; }
	inline void set_downVector_5(Vector2_t2156229523  value)
	{
		___downVector_5 = value;
	}

	inline static int32_t get_offset_of_leftVector_6() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___leftVector_6)); }
	inline Vector2_t2156229523  get_leftVector_6() const { return ___leftVector_6; }
	inline Vector2_t2156229523 * get_address_of_leftVector_6() { return &___leftVector_6; }
	inline void set_leftVector_6(Vector2_t2156229523  value)
	{
		___leftVector_6 = value;
	}

	inline static int32_t get_offset_of_rightVector_7() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___rightVector_7)); }
	inline Vector2_t2156229523  get_rightVector_7() const { return ___rightVector_7; }
	inline Vector2_t2156229523 * get_address_of_rightVector_7() { return &___rightVector_7; }
	inline void set_rightVector_7(Vector2_t2156229523  value)
	{
		___rightVector_7 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___positiveInfinityVector_8)); }
	inline Vector2_t2156229523  get_positiveInfinityVector_8() const { return ___positiveInfinityVector_8; }
	inline Vector2_t2156229523 * get_address_of_positiveInfinityVector_8() { return &___positiveInfinityVector_8; }
	inline void set_positiveInfinityVector_8(Vector2_t2156229523  value)
	{
		___positiveInfinityVector_8 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_9() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___negativeInfinityVector_9)); }
	inline Vector2_t2156229523  get_negativeInfinityVector_9() const { return ___negativeInfinityVector_9; }
	inline Vector2_t2156229523 * get_address_of_negativeInfinityVector_9() { return &___negativeInfinityVector_9; }
	inline void set_negativeInfinityVector_9(Vector2_t2156229523  value)
	{
		___negativeInfinityVector_9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VECTOR2_T2156229523_H
#ifndef ENUM_T4135868527_H
#define ENUM_T4135868527_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Enum
struct  Enum_t4135868527  : public ValueType_t3640485471
{
public:

public:
};

struct Enum_t4135868527_StaticFields
{
public:
	// System.Char[] System.Enum::split_char
	CharU5BU5D_t3528271667* ___split_char_0;

public:
	inline static int32_t get_offset_of_split_char_0() { return static_cast<int32_t>(offsetof(Enum_t4135868527_StaticFields, ___split_char_0)); }
	inline CharU5BU5D_t3528271667* get_split_char_0() const { return ___split_char_0; }
	inline CharU5BU5D_t3528271667** get_address_of_split_char_0() { return &___split_char_0; }
	inline void set_split_char_0(CharU5BU5D_t3528271667* value)
	{
		___split_char_0 = value;
		Il2CppCodeGenWriteBarrier((&___split_char_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t4135868527_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t4135868527_marshaled_com
{
};
#endif // ENUM_T4135868527_H
#ifndef BOOLEAN_T97287965_H
#define BOOLEAN_T97287965_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Boolean
struct  Boolean_t97287965 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(Boolean_t97287965, ___m_value_2)); }
	inline bool get_m_value_2() const { return ___m_value_2; }
	inline bool* get_address_of_m_value_2() { return &___m_value_2; }
	inline void set_m_value_2(bool value)
	{
		___m_value_2 = value;
	}
};

struct Boolean_t97287965_StaticFields
{
public:
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_0;
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_1;

public:
	inline static int32_t get_offset_of_FalseString_0() { return static_cast<int32_t>(offsetof(Boolean_t97287965_StaticFields, ___FalseString_0)); }
	inline String_t* get_FalseString_0() const { return ___FalseString_0; }
	inline String_t** get_address_of_FalseString_0() { return &___FalseString_0; }
	inline void set_FalseString_0(String_t* value)
	{
		___FalseString_0 = value;
		Il2CppCodeGenWriteBarrier((&___FalseString_0), value);
	}

	inline static int32_t get_offset_of_TrueString_1() { return static_cast<int32_t>(offsetof(Boolean_t97287965_StaticFields, ___TrueString_1)); }
	inline String_t* get_TrueString_1() const { return ___TrueString_1; }
	inline String_t** get_address_of_TrueString_1() { return &___TrueString_1; }
	inline void set_TrueString_1(String_t* value)
	{
		___TrueString_1 = value;
		Il2CppCodeGenWriteBarrier((&___TrueString_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BOOLEAN_T97287965_H
#ifndef INT32_T2950945753_H
#define INT32_T2950945753_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Int32
struct  Int32_t2950945753 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(Int32_t2950945753, ___m_value_2)); }
	inline int32_t get_m_value_2() const { return ___m_value_2; }
	inline int32_t* get_address_of_m_value_2() { return &___m_value_2; }
	inline void set_m_value_2(int32_t value)
	{
		___m_value_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INT32_T2950945753_H
#ifndef VOID_T1185182177_H
#define VOID_T1185182177_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Void
struct  Void_t1185182177 
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VOID_T1185182177_H
#ifndef WAITFORSECONDS_T1699091251_H
#define WAITFORSECONDS_T1699091251_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.WaitForSeconds
struct  WaitForSeconds_t1699091251  : public YieldInstruction_t403091072
{
public:
	// System.Single UnityEngine.WaitForSeconds::m_Seconds
	float ___m_Seconds_0;

public:
	inline static int32_t get_offset_of_m_Seconds_0() { return static_cast<int32_t>(offsetof(WaitForSeconds_t1699091251, ___m_Seconds_0)); }
	inline float get_m_Seconds_0() const { return ___m_Seconds_0; }
	inline float* get_address_of_m_Seconds_0() { return &___m_Seconds_0; }
	inline void set_m_Seconds_0(float value)
	{
		___m_Seconds_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_t1699091251_marshaled_pinvoke : public YieldInstruction_t403091072_marshaled_pinvoke
{
	float ___m_Seconds_0;
};
// Native definition for COM marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_t1699091251_marshaled_com : public YieldInstruction_t403091072_marshaled_com
{
	float ___m_Seconds_0;
};
#endif // WAITFORSECONDS_T1699091251_H
#ifndef ENUMERATOR_T179987942_H
#define ENUMERATOR_T179987942_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1/Enumerator<UnityEngine.GameObject>
struct  Enumerator_t179987942 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::l
	List_1_t2585711361 * ___l_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::next
	int32_t ___next_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::ver
	int32_t ___ver_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	GameObject_t1113636619 * ___current_3;

public:
	inline static int32_t get_offset_of_l_0() { return static_cast<int32_t>(offsetof(Enumerator_t179987942, ___l_0)); }
	inline List_1_t2585711361 * get_l_0() const { return ___l_0; }
	inline List_1_t2585711361 ** get_address_of_l_0() { return &___l_0; }
	inline void set_l_0(List_1_t2585711361 * value)
	{
		___l_0 = value;
		Il2CppCodeGenWriteBarrier((&___l_0), value);
	}

	inline static int32_t get_offset_of_next_1() { return static_cast<int32_t>(offsetof(Enumerator_t179987942, ___next_1)); }
	inline int32_t get_next_1() const { return ___next_1; }
	inline int32_t* get_address_of_next_1() { return &___next_1; }
	inline void set_next_1(int32_t value)
	{
		___next_1 = value;
	}

	inline static int32_t get_offset_of_ver_2() { return static_cast<int32_t>(offsetof(Enumerator_t179987942, ___ver_2)); }
	inline int32_t get_ver_2() const { return ___ver_2; }
	inline int32_t* get_address_of_ver_2() { return &___ver_2; }
	inline void set_ver_2(int32_t value)
	{
		___ver_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t179987942, ___current_3)); }
	inline GameObject_t1113636619 * get_current_3() const { return ___current_3; }
	inline GameObject_t1113636619 ** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(GameObject_t1113636619 * value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((&___current_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENUMERATOR_T179987942_H
#ifndef ENUMERATOR_T2146457487_H
#define ENUMERATOR_T2146457487_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1/Enumerator<System.Object>
struct  Enumerator_t2146457487 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::l
	List_1_t257213610 * ___l_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::next
	int32_t ___next_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::ver
	int32_t ___ver_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	RuntimeObject * ___current_3;

public:
	inline static int32_t get_offset_of_l_0() { return static_cast<int32_t>(offsetof(Enumerator_t2146457487, ___l_0)); }
	inline List_1_t257213610 * get_l_0() const { return ___l_0; }
	inline List_1_t257213610 ** get_address_of_l_0() { return &___l_0; }
	inline void set_l_0(List_1_t257213610 * value)
	{
		___l_0 = value;
		Il2CppCodeGenWriteBarrier((&___l_0), value);
	}

	inline static int32_t get_offset_of_next_1() { return static_cast<int32_t>(offsetof(Enumerator_t2146457487, ___next_1)); }
	inline int32_t get_next_1() const { return ___next_1; }
	inline int32_t* get_address_of_next_1() { return &___next_1; }
	inline void set_next_1(int32_t value)
	{
		___next_1 = value;
	}

	inline static int32_t get_offset_of_ver_2() { return static_cast<int32_t>(offsetof(Enumerator_t2146457487, ___ver_2)); }
	inline int32_t get_ver_2() const { return ___ver_2; }
	inline int32_t* get_address_of_ver_2() { return &___ver_2; }
	inline void set_ver_2(int32_t value)
	{
		___ver_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t2146457487, ___current_3)); }
	inline RuntimeObject * get_current_3() const { return ___current_3; }
	inline RuntimeObject ** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(RuntimeObject * value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((&___current_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENUMERATOR_T2146457487_H
#ifndef SPRITESTATE_T1362986479_H
#define SPRITESTATE_T1362986479_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.SpriteState
struct  SpriteState_t1362986479 
{
public:
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_HighlightedSprite
	Sprite_t280657092 * ___m_HighlightedSprite_0;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_PressedSprite
	Sprite_t280657092 * ___m_PressedSprite_1;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_DisabledSprite
	Sprite_t280657092 * ___m_DisabledSprite_2;

public:
	inline static int32_t get_offset_of_m_HighlightedSprite_0() { return static_cast<int32_t>(offsetof(SpriteState_t1362986479, ___m_HighlightedSprite_0)); }
	inline Sprite_t280657092 * get_m_HighlightedSprite_0() const { return ___m_HighlightedSprite_0; }
	inline Sprite_t280657092 ** get_address_of_m_HighlightedSprite_0() { return &___m_HighlightedSprite_0; }
	inline void set_m_HighlightedSprite_0(Sprite_t280657092 * value)
	{
		___m_HighlightedSprite_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_HighlightedSprite_0), value);
	}

	inline static int32_t get_offset_of_m_PressedSprite_1() { return static_cast<int32_t>(offsetof(SpriteState_t1362986479, ___m_PressedSprite_1)); }
	inline Sprite_t280657092 * get_m_PressedSprite_1() const { return ___m_PressedSprite_1; }
	inline Sprite_t280657092 ** get_address_of_m_PressedSprite_1() { return &___m_PressedSprite_1; }
	inline void set_m_PressedSprite_1(Sprite_t280657092 * value)
	{
		___m_PressedSprite_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_PressedSprite_1), value);
	}

	inline static int32_t get_offset_of_m_DisabledSprite_2() { return static_cast<int32_t>(offsetof(SpriteState_t1362986479, ___m_DisabledSprite_2)); }
	inline Sprite_t280657092 * get_m_DisabledSprite_2() const { return ___m_DisabledSprite_2; }
	inline Sprite_t280657092 ** get_address_of_m_DisabledSprite_2() { return &___m_DisabledSprite_2; }
	inline void set_m_DisabledSprite_2(Sprite_t280657092 * value)
	{
		___m_DisabledSprite_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_DisabledSprite_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.UI.SpriteState
struct SpriteState_t1362986479_marshaled_pinvoke
{
	Sprite_t280657092 * ___m_HighlightedSprite_0;
	Sprite_t280657092 * ___m_PressedSprite_1;
	Sprite_t280657092 * ___m_DisabledSprite_2;
};
// Native definition for COM marshalling of UnityEngine.UI.SpriteState
struct SpriteState_t1362986479_marshaled_com
{
	Sprite_t280657092 * ___m_HighlightedSprite_0;
	Sprite_t280657092 * ___m_PressedSprite_1;
	Sprite_t280657092 * ___m_DisabledSprite_2;
};
#endif // SPRITESTATE_T1362986479_H
#ifndef SINGLE_T1397266774_H
#define SINGLE_T1397266774_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Single
struct  Single_t1397266774 
{
public:
	// System.Single System.Single::m_value
	float ___m_value_7;

public:
	inline static int32_t get_offset_of_m_value_7() { return static_cast<int32_t>(offsetof(Single_t1397266774, ___m_value_7)); }
	inline float get_m_value_7() const { return ___m_value_7; }
	inline float* get_address_of_m_value_7() { return &___m_value_7; }
	inline void set_m_value_7(float value)
	{
		___m_value_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SINGLE_T1397266774_H
#ifndef BUTTONCLICKEDEVENT_T48803504_H
#define BUTTONCLICKEDEVENT_T48803504_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.Button/ButtonClickedEvent
struct  ButtonClickedEvent_t48803504  : public UnityEvent_t2581268647
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BUTTONCLICKEDEVENT_T48803504_H
#ifndef COLORBLOCK_T2139031574_H
#define COLORBLOCK_T2139031574_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.ColorBlock
struct  ColorBlock_t2139031574 
{
public:
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_NormalColor
	Color_t2555686324  ___m_NormalColor_0;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_HighlightedColor
	Color_t2555686324  ___m_HighlightedColor_1;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_PressedColor
	Color_t2555686324  ___m_PressedColor_2;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_DisabledColor
	Color_t2555686324  ___m_DisabledColor_3;
	// System.Single UnityEngine.UI.ColorBlock::m_ColorMultiplier
	float ___m_ColorMultiplier_4;
	// System.Single UnityEngine.UI.ColorBlock::m_FadeDuration
	float ___m_FadeDuration_5;

public:
	inline static int32_t get_offset_of_m_NormalColor_0() { return static_cast<int32_t>(offsetof(ColorBlock_t2139031574, ___m_NormalColor_0)); }
	inline Color_t2555686324  get_m_NormalColor_0() const { return ___m_NormalColor_0; }
	inline Color_t2555686324 * get_address_of_m_NormalColor_0() { return &___m_NormalColor_0; }
	inline void set_m_NormalColor_0(Color_t2555686324  value)
	{
		___m_NormalColor_0 = value;
	}

	inline static int32_t get_offset_of_m_HighlightedColor_1() { return static_cast<int32_t>(offsetof(ColorBlock_t2139031574, ___m_HighlightedColor_1)); }
	inline Color_t2555686324  get_m_HighlightedColor_1() const { return ___m_HighlightedColor_1; }
	inline Color_t2555686324 * get_address_of_m_HighlightedColor_1() { return &___m_HighlightedColor_1; }
	inline void set_m_HighlightedColor_1(Color_t2555686324  value)
	{
		___m_HighlightedColor_1 = value;
	}

	inline static int32_t get_offset_of_m_PressedColor_2() { return static_cast<int32_t>(offsetof(ColorBlock_t2139031574, ___m_PressedColor_2)); }
	inline Color_t2555686324  get_m_PressedColor_2() const { return ___m_PressedColor_2; }
	inline Color_t2555686324 * get_address_of_m_PressedColor_2() { return &___m_PressedColor_2; }
	inline void set_m_PressedColor_2(Color_t2555686324  value)
	{
		___m_PressedColor_2 = value;
	}

	inline static int32_t get_offset_of_m_DisabledColor_3() { return static_cast<int32_t>(offsetof(ColorBlock_t2139031574, ___m_DisabledColor_3)); }
	inline Color_t2555686324  get_m_DisabledColor_3() const { return ___m_DisabledColor_3; }
	inline Color_t2555686324 * get_address_of_m_DisabledColor_3() { return &___m_DisabledColor_3; }
	inline void set_m_DisabledColor_3(Color_t2555686324  value)
	{
		___m_DisabledColor_3 = value;
	}

	inline static int32_t get_offset_of_m_ColorMultiplier_4() { return static_cast<int32_t>(offsetof(ColorBlock_t2139031574, ___m_ColorMultiplier_4)); }
	inline float get_m_ColorMultiplier_4() const { return ___m_ColorMultiplier_4; }
	inline float* get_address_of_m_ColorMultiplier_4() { return &___m_ColorMultiplier_4; }
	inline void set_m_ColorMultiplier_4(float value)
	{
		___m_ColorMultiplier_4 = value;
	}

	inline static int32_t get_offset_of_m_FadeDuration_5() { return static_cast<int32_t>(offsetof(ColorBlock_t2139031574, ___m_FadeDuration_5)); }
	inline float get_m_FadeDuration_5() const { return ___m_FadeDuration_5; }
	inline float* get_address_of_m_FadeDuration_5() { return &___m_FadeDuration_5; }
	inline void set_m_FadeDuration_5(float value)
	{
		___m_FadeDuration_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COLORBLOCK_T2139031574_H
#ifndef SELECTIONSTATE_T2656606514_H
#define SELECTIONSTATE_T2656606514_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.Selectable/SelectionState
struct  SelectionState_t2656606514 
{
public:
	// System.Int32 UnityEngine.UI.Selectable/SelectionState::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(SelectionState_t2656606514, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SELECTIONSTATE_T2656606514_H
#ifndef DELEGATE_T1188392813_H
#define DELEGATE_T1188392813_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Delegate
struct  Delegate_t1188392813  : public RuntimeObject
{
public:
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject * ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_5;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t * ___method_info_6;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t * ___original_method_info_7;
	// System.DelegateData System.Delegate::data
	DelegateData_t1677132599 * ___data_8;

public:
	inline static int32_t get_offset_of_method_ptr_0() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___method_ptr_0)); }
	inline Il2CppMethodPointer get_method_ptr_0() const { return ___method_ptr_0; }
	inline Il2CppMethodPointer* get_address_of_method_ptr_0() { return &___method_ptr_0; }
	inline void set_method_ptr_0(Il2CppMethodPointer value)
	{
		___method_ptr_0 = value;
	}

	inline static int32_t get_offset_of_invoke_impl_1() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___invoke_impl_1)); }
	inline intptr_t get_invoke_impl_1() const { return ___invoke_impl_1; }
	inline intptr_t* get_address_of_invoke_impl_1() { return &___invoke_impl_1; }
	inline void set_invoke_impl_1(intptr_t value)
	{
		___invoke_impl_1 = value;
	}

	inline static int32_t get_offset_of_m_target_2() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___m_target_2)); }
	inline RuntimeObject * get_m_target_2() const { return ___m_target_2; }
	inline RuntimeObject ** get_address_of_m_target_2() { return &___m_target_2; }
	inline void set_m_target_2(RuntimeObject * value)
	{
		___m_target_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_target_2), value);
	}

	inline static int32_t get_offset_of_method_3() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___method_3)); }
	inline intptr_t get_method_3() const { return ___method_3; }
	inline intptr_t* get_address_of_method_3() { return &___method_3; }
	inline void set_method_3(intptr_t value)
	{
		___method_3 = value;
	}

	inline static int32_t get_offset_of_delegate_trampoline_4() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___delegate_trampoline_4)); }
	inline intptr_t get_delegate_trampoline_4() const { return ___delegate_trampoline_4; }
	inline intptr_t* get_address_of_delegate_trampoline_4() { return &___delegate_trampoline_4; }
	inline void set_delegate_trampoline_4(intptr_t value)
	{
		___delegate_trampoline_4 = value;
	}

	inline static int32_t get_offset_of_method_code_5() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___method_code_5)); }
	inline intptr_t get_method_code_5() const { return ___method_code_5; }
	inline intptr_t* get_address_of_method_code_5() { return &___method_code_5; }
	inline void set_method_code_5(intptr_t value)
	{
		___method_code_5 = value;
	}

	inline static int32_t get_offset_of_method_info_6() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___method_info_6)); }
	inline MethodInfo_t * get_method_info_6() const { return ___method_info_6; }
	inline MethodInfo_t ** get_address_of_method_info_6() { return &___method_info_6; }
	inline void set_method_info_6(MethodInfo_t * value)
	{
		___method_info_6 = value;
		Il2CppCodeGenWriteBarrier((&___method_info_6), value);
	}

	inline static int32_t get_offset_of_original_method_info_7() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___original_method_info_7)); }
	inline MethodInfo_t * get_original_method_info_7() const { return ___original_method_info_7; }
	inline MethodInfo_t ** get_address_of_original_method_info_7() { return &___original_method_info_7; }
	inline void set_original_method_info_7(MethodInfo_t * value)
	{
		___original_method_info_7 = value;
		Il2CppCodeGenWriteBarrier((&___original_method_info_7), value);
	}

	inline static int32_t get_offset_of_data_8() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___data_8)); }
	inline DelegateData_t1677132599 * get_data_8() const { return ___data_8; }
	inline DelegateData_t1677132599 ** get_address_of_data_8() { return &___data_8; }
	inline void set_data_8(DelegateData_t1677132599 * value)
	{
		___data_8 = value;
		Il2CppCodeGenWriteBarrier((&___data_8), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DELEGATE_T1188392813_H
#ifndef U3CDOSHAKEU3EC__ITERATOR0_T3406541319_H
#define U3CDOSHAKEU3EC__ITERATOR0_T3406541319_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ScreenShake/<DoShake>c__Iterator0
struct  U3CDoShakeU3Ec__Iterator0_t3406541319  : public RuntimeObject
{
public:
	// UnityEngine.Vector3 ScreenShake/<DoShake>c__Iterator0::<originalPos>__0
	Vector3_t3722313464  ___U3CoriginalPosU3E__0_0;
	// System.Int32 ScreenShake/<DoShake>c__Iterator0::<i>__1
	int32_t ___U3CiU3E__1_1;
	// System.Single ScreenShake/<DoShake>c__Iterator0::strength
	float ___strength_2;
	// ScreenShake ScreenShake/<DoShake>c__Iterator0::$this
	ScreenShake_t2214968455 * ___U24this_3;
	// System.Object ScreenShake/<DoShake>c__Iterator0::$current
	RuntimeObject * ___U24current_4;
	// System.Boolean ScreenShake/<DoShake>c__Iterator0::$disposing
	bool ___U24disposing_5;
	// System.Int32 ScreenShake/<DoShake>c__Iterator0::$PC
	int32_t ___U24PC_6;

public:
	inline static int32_t get_offset_of_U3CoriginalPosU3E__0_0() { return static_cast<int32_t>(offsetof(U3CDoShakeU3Ec__Iterator0_t3406541319, ___U3CoriginalPosU3E__0_0)); }
	inline Vector3_t3722313464  get_U3CoriginalPosU3E__0_0() const { return ___U3CoriginalPosU3E__0_0; }
	inline Vector3_t3722313464 * get_address_of_U3CoriginalPosU3E__0_0() { return &___U3CoriginalPosU3E__0_0; }
	inline void set_U3CoriginalPosU3E__0_0(Vector3_t3722313464  value)
	{
		___U3CoriginalPosU3E__0_0 = value;
	}

	inline static int32_t get_offset_of_U3CiU3E__1_1() { return static_cast<int32_t>(offsetof(U3CDoShakeU3Ec__Iterator0_t3406541319, ___U3CiU3E__1_1)); }
	inline int32_t get_U3CiU3E__1_1() const { return ___U3CiU3E__1_1; }
	inline int32_t* get_address_of_U3CiU3E__1_1() { return &___U3CiU3E__1_1; }
	inline void set_U3CiU3E__1_1(int32_t value)
	{
		___U3CiU3E__1_1 = value;
	}

	inline static int32_t get_offset_of_strength_2() { return static_cast<int32_t>(offsetof(U3CDoShakeU3Ec__Iterator0_t3406541319, ___strength_2)); }
	inline float get_strength_2() const { return ___strength_2; }
	inline float* get_address_of_strength_2() { return &___strength_2; }
	inline void set_strength_2(float value)
	{
		___strength_2 = value;
	}

	inline static int32_t get_offset_of_U24this_3() { return static_cast<int32_t>(offsetof(U3CDoShakeU3Ec__Iterator0_t3406541319, ___U24this_3)); }
	inline ScreenShake_t2214968455 * get_U24this_3() const { return ___U24this_3; }
	inline ScreenShake_t2214968455 ** get_address_of_U24this_3() { return &___U24this_3; }
	inline void set_U24this_3(ScreenShake_t2214968455 * value)
	{
		___U24this_3 = value;
		Il2CppCodeGenWriteBarrier((&___U24this_3), value);
	}

	inline static int32_t get_offset_of_U24current_4() { return static_cast<int32_t>(offsetof(U3CDoShakeU3Ec__Iterator0_t3406541319, ___U24current_4)); }
	inline RuntimeObject * get_U24current_4() const { return ___U24current_4; }
	inline RuntimeObject ** get_address_of_U24current_4() { return &___U24current_4; }
	inline void set_U24current_4(RuntimeObject * value)
	{
		___U24current_4 = value;
		Il2CppCodeGenWriteBarrier((&___U24current_4), value);
	}

	inline static int32_t get_offset_of_U24disposing_5() { return static_cast<int32_t>(offsetof(U3CDoShakeU3Ec__Iterator0_t3406541319, ___U24disposing_5)); }
	inline bool get_U24disposing_5() const { return ___U24disposing_5; }
	inline bool* get_address_of_U24disposing_5() { return &___U24disposing_5; }
	inline void set_U24disposing_5(bool value)
	{
		___U24disposing_5 = value;
	}

	inline static int32_t get_offset_of_U24PC_6() { return static_cast<int32_t>(offsetof(U3CDoShakeU3Ec__Iterator0_t3406541319, ___U24PC_6)); }
	inline int32_t get_U24PC_6() const { return ___U24PC_6; }
	inline int32_t* get_address_of_U24PC_6() { return &___U24PC_6; }
	inline void set_U24PC_6(int32_t value)
	{
		___U24PC_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CDOSHAKEU3EC__ITERATOR0_T3406541319_H
#ifndef LOADSCENEMODE_T3251202195_H
#define LOADSCENEMODE_T3251202195_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.SceneManagement.LoadSceneMode
struct  LoadSceneMode_t3251202195 
{
public:
	// System.Int32 UnityEngine.SceneManagement.LoadSceneMode::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(LoadSceneMode_t3251202195, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LOADSCENEMODE_T3251202195_H
#ifndef U3CJUMPU3EC__ITERATOR0_T230413210_H
#define U3CJUMPU3EC__ITERATOR0_T230413210_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// VoidAI/<Jump>c__Iterator0
struct  U3CJumpU3Ec__Iterator0_t230413210  : public RuntimeObject
{
public:
	// UnityEngine.Vector3 VoidAI/<Jump>c__Iterator0::<dir>__0
	Vector3_t3722313464  ___U3CdirU3E__0_0;
	// System.Single VoidAI/<Jump>c__Iterator0::<dist>__1
	float ___U3CdistU3E__1_1;
	// System.Single VoidAI/<Jump>c__Iterator0::<midDist>__1
	float ___U3CmidDistU3E__1_2;
	// UnityEngine.Vector3 VoidAI/<Jump>c__Iterator0::<scale>__1
	Vector3_t3722313464  ___U3CscaleU3E__1_3;
	// VoidAI VoidAI/<Jump>c__Iterator0::$this
	VoidAI_t4181225430 * ___U24this_4;
	// System.Object VoidAI/<Jump>c__Iterator0::$current
	RuntimeObject * ___U24current_5;
	// System.Boolean VoidAI/<Jump>c__Iterator0::$disposing
	bool ___U24disposing_6;
	// System.Int32 VoidAI/<Jump>c__Iterator0::$PC
	int32_t ___U24PC_7;

public:
	inline static int32_t get_offset_of_U3CdirU3E__0_0() { return static_cast<int32_t>(offsetof(U3CJumpU3Ec__Iterator0_t230413210, ___U3CdirU3E__0_0)); }
	inline Vector3_t3722313464  get_U3CdirU3E__0_0() const { return ___U3CdirU3E__0_0; }
	inline Vector3_t3722313464 * get_address_of_U3CdirU3E__0_0() { return &___U3CdirU3E__0_0; }
	inline void set_U3CdirU3E__0_0(Vector3_t3722313464  value)
	{
		___U3CdirU3E__0_0 = value;
	}

	inline static int32_t get_offset_of_U3CdistU3E__1_1() { return static_cast<int32_t>(offsetof(U3CJumpU3Ec__Iterator0_t230413210, ___U3CdistU3E__1_1)); }
	inline float get_U3CdistU3E__1_1() const { return ___U3CdistU3E__1_1; }
	inline float* get_address_of_U3CdistU3E__1_1() { return &___U3CdistU3E__1_1; }
	inline void set_U3CdistU3E__1_1(float value)
	{
		___U3CdistU3E__1_1 = value;
	}

	inline static int32_t get_offset_of_U3CmidDistU3E__1_2() { return static_cast<int32_t>(offsetof(U3CJumpU3Ec__Iterator0_t230413210, ___U3CmidDistU3E__1_2)); }
	inline float get_U3CmidDistU3E__1_2() const { return ___U3CmidDistU3E__1_2; }
	inline float* get_address_of_U3CmidDistU3E__1_2() { return &___U3CmidDistU3E__1_2; }
	inline void set_U3CmidDistU3E__1_2(float value)
	{
		___U3CmidDistU3E__1_2 = value;
	}

	inline static int32_t get_offset_of_U3CscaleU3E__1_3() { return static_cast<int32_t>(offsetof(U3CJumpU3Ec__Iterator0_t230413210, ___U3CscaleU3E__1_3)); }
	inline Vector3_t3722313464  get_U3CscaleU3E__1_3() const { return ___U3CscaleU3E__1_3; }
	inline Vector3_t3722313464 * get_address_of_U3CscaleU3E__1_3() { return &___U3CscaleU3E__1_3; }
	inline void set_U3CscaleU3E__1_3(Vector3_t3722313464  value)
	{
		___U3CscaleU3E__1_3 = value;
	}

	inline static int32_t get_offset_of_U24this_4() { return static_cast<int32_t>(offsetof(U3CJumpU3Ec__Iterator0_t230413210, ___U24this_4)); }
	inline VoidAI_t4181225430 * get_U24this_4() const { return ___U24this_4; }
	inline VoidAI_t4181225430 ** get_address_of_U24this_4() { return &___U24this_4; }
	inline void set_U24this_4(VoidAI_t4181225430 * value)
	{
		___U24this_4 = value;
		Il2CppCodeGenWriteBarrier((&___U24this_4), value);
	}

	inline static int32_t get_offset_of_U24current_5() { return static_cast<int32_t>(offsetof(U3CJumpU3Ec__Iterator0_t230413210, ___U24current_5)); }
	inline RuntimeObject * get_U24current_5() const { return ___U24current_5; }
	inline RuntimeObject ** get_address_of_U24current_5() { return &___U24current_5; }
	inline void set_U24current_5(RuntimeObject * value)
	{
		___U24current_5 = value;
		Il2CppCodeGenWriteBarrier((&___U24current_5), value);
	}

	inline static int32_t get_offset_of_U24disposing_6() { return static_cast<int32_t>(offsetof(U3CJumpU3Ec__Iterator0_t230413210, ___U24disposing_6)); }
	inline bool get_U24disposing_6() const { return ___U24disposing_6; }
	inline bool* get_address_of_U24disposing_6() { return &___U24disposing_6; }
	inline void set_U24disposing_6(bool value)
	{
		___U24disposing_6 = value;
	}

	inline static int32_t get_offset_of_U24PC_7() { return static_cast<int32_t>(offsetof(U3CJumpU3Ec__Iterator0_t230413210, ___U24PC_7)); }
	inline int32_t get_U24PC_7() const { return ___U24PC_7; }
	inline int32_t* get_address_of_U24PC_7() { return &___U24PC_7; }
	inline void set_U24PC_7(int32_t value)
	{
		___U24PC_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CJUMPU3EC__ITERATOR0_T230413210_H
#ifndef U3CDOATTACKSU3EC__ITERATOR1_T81260554_H
#define U3CDOATTACKSU3EC__ITERATOR1_T81260554_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// VoidAI/<DoAttacks>c__Iterator1
struct  U3CDoAttacksU3Ec__Iterator1_t81260554  : public RuntimeObject
{
public:
	// UnityEngine.Vector3 VoidAI/<DoAttacks>c__Iterator1::<pos>__1
	Vector3_t3722313464  ___U3CposU3E__1_0;
	// VoidAI VoidAI/<DoAttacks>c__Iterator1::$this
	VoidAI_t4181225430 * ___U24this_1;
	// System.Object VoidAI/<DoAttacks>c__Iterator1::$current
	RuntimeObject * ___U24current_2;
	// System.Boolean VoidAI/<DoAttacks>c__Iterator1::$disposing
	bool ___U24disposing_3;
	// System.Int32 VoidAI/<DoAttacks>c__Iterator1::$PC
	int32_t ___U24PC_4;

public:
	inline static int32_t get_offset_of_U3CposU3E__1_0() { return static_cast<int32_t>(offsetof(U3CDoAttacksU3Ec__Iterator1_t81260554, ___U3CposU3E__1_0)); }
	inline Vector3_t3722313464  get_U3CposU3E__1_0() const { return ___U3CposU3E__1_0; }
	inline Vector3_t3722313464 * get_address_of_U3CposU3E__1_0() { return &___U3CposU3E__1_0; }
	inline void set_U3CposU3E__1_0(Vector3_t3722313464  value)
	{
		___U3CposU3E__1_0 = value;
	}

	inline static int32_t get_offset_of_U24this_1() { return static_cast<int32_t>(offsetof(U3CDoAttacksU3Ec__Iterator1_t81260554, ___U24this_1)); }
	inline VoidAI_t4181225430 * get_U24this_1() const { return ___U24this_1; }
	inline VoidAI_t4181225430 ** get_address_of_U24this_1() { return &___U24this_1; }
	inline void set_U24this_1(VoidAI_t4181225430 * value)
	{
		___U24this_1 = value;
		Il2CppCodeGenWriteBarrier((&___U24this_1), value);
	}

	inline static int32_t get_offset_of_U24current_2() { return static_cast<int32_t>(offsetof(U3CDoAttacksU3Ec__Iterator1_t81260554, ___U24current_2)); }
	inline RuntimeObject * get_U24current_2() const { return ___U24current_2; }
	inline RuntimeObject ** get_address_of_U24current_2() { return &___U24current_2; }
	inline void set_U24current_2(RuntimeObject * value)
	{
		___U24current_2 = value;
		Il2CppCodeGenWriteBarrier((&___U24current_2), value);
	}

	inline static int32_t get_offset_of_U24disposing_3() { return static_cast<int32_t>(offsetof(U3CDoAttacksU3Ec__Iterator1_t81260554, ___U24disposing_3)); }
	inline bool get_U24disposing_3() const { return ___U24disposing_3; }
	inline bool* get_address_of_U24disposing_3() { return &___U24disposing_3; }
	inline void set_U24disposing_3(bool value)
	{
		___U24disposing_3 = value;
	}

	inline static int32_t get_offset_of_U24PC_4() { return static_cast<int32_t>(offsetof(U3CDoAttacksU3Ec__Iterator1_t81260554, ___U24PC_4)); }
	inline int32_t get_U24PC_4() const { return ___U24PC_4; }
	inline int32_t* get_address_of_U24PC_4() { return &___U24PC_4; }
	inline void set_U24PC_4(int32_t value)
	{
		___U24PC_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CDOATTACKSU3EC__ITERATOR1_T81260554_H
#ifndef TYPE_T1152881528_H
#define TYPE_T1152881528_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.Image/Type
struct  Type_t1152881528 
{
public:
	// System.Int32 UnityEngine.UI.Image/Type::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(Type_t1152881528, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TYPE_T1152881528_H
#ifndef FILLMETHOD_T1167457570_H
#define FILLMETHOD_T1167457570_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.Image/FillMethod
struct  FillMethod_t1167457570 
{
public:
	// System.Int32 UnityEngine.UI.Image/FillMethod::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(FillMethod_t1167457570, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FILLMETHOD_T1167457570_H
#ifndef TRANSITION_T1769908631_H
#define TRANSITION_T1769908631_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.Selectable/Transition
struct  Transition_t1769908631 
{
public:
	// System.Int32 UnityEngine.UI.Selectable/Transition::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(Transition_t1769908631, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRANSITION_T1769908631_H
#ifndef MODE_T1066900953_H
#define MODE_T1066900953_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.Navigation/Mode
struct  Mode_t1066900953 
{
public:
	// System.Int32 UnityEngine.UI.Navigation/Mode::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(Mode_t1066900953, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MODE_T1066900953_H
#ifndef COROUTINE_T3829159415_H
#define COROUTINE_T3829159415_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Coroutine
struct  Coroutine_t3829159415  : public YieldInstruction_t403091072
{
public:
	// System.IntPtr UnityEngine.Coroutine::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(Coroutine_t3829159415, ___m_Ptr_0)); }
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
// Native definition for P/Invoke marshalling of UnityEngine.Coroutine
struct Coroutine_t3829159415_marshaled_pinvoke : public YieldInstruction_t403091072_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Coroutine
struct Coroutine_t3829159415_marshaled_com : public YieldInstruction_t403091072_marshaled_com
{
	intptr_t ___m_Ptr_0;
};
#endif // COROUTINE_T3829159415_H
#ifndef U3CENTERBOSSU3EC__ITERATOR5_T1783282016_H
#define U3CENTERBOSSU3EC__ITERATOR5_T1783282016_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// BossSequence/<EnterBoss>c__Iterator5
struct  U3CEnterBossU3Ec__Iterator5_t1783282016  : public RuntimeObject
{
public:
	// System.Single BossSequence/<EnterBoss>c__Iterator5::<cameraPullBackSpeed>__0
	float ___U3CcameraPullBackSpeedU3E__0_0;
	// UnityEngine.Vector3 BossSequence/<EnterBoss>c__Iterator5::<offset>__0
	Vector3_t3722313464  ___U3CoffsetU3E__0_1;
	// BossSequence BossSequence/<EnterBoss>c__Iterator5::$this
	BossSequence_t1258426188 * ___U24this_2;
	// System.Object BossSequence/<EnterBoss>c__Iterator5::$current
	RuntimeObject * ___U24current_3;
	// System.Boolean BossSequence/<EnterBoss>c__Iterator5::$disposing
	bool ___U24disposing_4;
	// System.Int32 BossSequence/<EnterBoss>c__Iterator5::$PC
	int32_t ___U24PC_5;

public:
	inline static int32_t get_offset_of_U3CcameraPullBackSpeedU3E__0_0() { return static_cast<int32_t>(offsetof(U3CEnterBossU3Ec__Iterator5_t1783282016, ___U3CcameraPullBackSpeedU3E__0_0)); }
	inline float get_U3CcameraPullBackSpeedU3E__0_0() const { return ___U3CcameraPullBackSpeedU3E__0_0; }
	inline float* get_address_of_U3CcameraPullBackSpeedU3E__0_0() { return &___U3CcameraPullBackSpeedU3E__0_0; }
	inline void set_U3CcameraPullBackSpeedU3E__0_0(float value)
	{
		___U3CcameraPullBackSpeedU3E__0_0 = value;
	}

	inline static int32_t get_offset_of_U3CoffsetU3E__0_1() { return static_cast<int32_t>(offsetof(U3CEnterBossU3Ec__Iterator5_t1783282016, ___U3CoffsetU3E__0_1)); }
	inline Vector3_t3722313464  get_U3CoffsetU3E__0_1() const { return ___U3CoffsetU3E__0_1; }
	inline Vector3_t3722313464 * get_address_of_U3CoffsetU3E__0_1() { return &___U3CoffsetU3E__0_1; }
	inline void set_U3CoffsetU3E__0_1(Vector3_t3722313464  value)
	{
		___U3CoffsetU3E__0_1 = value;
	}

	inline static int32_t get_offset_of_U24this_2() { return static_cast<int32_t>(offsetof(U3CEnterBossU3Ec__Iterator5_t1783282016, ___U24this_2)); }
	inline BossSequence_t1258426188 * get_U24this_2() const { return ___U24this_2; }
	inline BossSequence_t1258426188 ** get_address_of_U24this_2() { return &___U24this_2; }
	inline void set_U24this_2(BossSequence_t1258426188 * value)
	{
		___U24this_2 = value;
		Il2CppCodeGenWriteBarrier((&___U24this_2), value);
	}

	inline static int32_t get_offset_of_U24current_3() { return static_cast<int32_t>(offsetof(U3CEnterBossU3Ec__Iterator5_t1783282016, ___U24current_3)); }
	inline RuntimeObject * get_U24current_3() const { return ___U24current_3; }
	inline RuntimeObject ** get_address_of_U24current_3() { return &___U24current_3; }
	inline void set_U24current_3(RuntimeObject * value)
	{
		___U24current_3 = value;
		Il2CppCodeGenWriteBarrier((&___U24current_3), value);
	}

	inline static int32_t get_offset_of_U24disposing_4() { return static_cast<int32_t>(offsetof(U3CEnterBossU3Ec__Iterator5_t1783282016, ___U24disposing_4)); }
	inline bool get_U24disposing_4() const { return ___U24disposing_4; }
	inline bool* get_address_of_U24disposing_4() { return &___U24disposing_4; }
	inline void set_U24disposing_4(bool value)
	{
		___U24disposing_4 = value;
	}

	inline static int32_t get_offset_of_U24PC_5() { return static_cast<int32_t>(offsetof(U3CEnterBossU3Ec__Iterator5_t1783282016, ___U24PC_5)); }
	inline int32_t get_U24PC_5() const { return ___U24PC_5; }
	inline int32_t* get_address_of_U24PC_5() { return &___U24PC_5; }
	inline void set_U24PC_5(int32_t value)
	{
		___U24PC_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CENTERBOSSU3EC__ITERATOR5_T1783282016_H
#ifndef NOTSUPPORTEDEXCEPTION_T1314879016_H
#define NOTSUPPORTEDEXCEPTION_T1314879016_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.NotSupportedException
struct  NotSupportedException_t1314879016  : public SystemException_t176217640
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NOTSUPPORTEDEXCEPTION_T1314879016_H
#ifndef ENTITYSTATE_T3766646732_H
#define ENTITYSTATE_T3766646732_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// EntityState
struct  EntityState_t3766646732 
{
public:
	// System.Int32 EntityState::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(EntityState_t3766646732, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENTITYSTATE_T3766646732_H
#ifndef DOORDIRECTION_T488480648_H
#define DOORDIRECTION_T488480648_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// DoorDirection
struct  DoorDirection_t488480648 
{
public:
	// System.Int32 DoorDirection::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(DoorDirection_t488480648, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DOORDIRECTION_T488480648_H
#ifndef KEYCODE_T2599294277_H
#define KEYCODE_T2599294277_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.KeyCode
struct  KeyCode_t2599294277 
{
public:
	// System.Int32 UnityEngine.KeyCode::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(KeyCode_t2599294277, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // KEYCODE_T2599294277_H
#ifndef COLLISION2D_T2842956331_H
#define COLLISION2D_T2842956331_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Collision2D
struct  Collision2D_t2842956331  : public RuntimeObject
{
public:
	// System.Int32 UnityEngine.Collision2D::m_Collider
	int32_t ___m_Collider_0;
	// System.Int32 UnityEngine.Collision2D::m_OtherCollider
	int32_t ___m_OtherCollider_1;
	// System.Int32 UnityEngine.Collision2D::m_Rigidbody
	int32_t ___m_Rigidbody_2;
	// System.Int32 UnityEngine.Collision2D::m_OtherRigidbody
	int32_t ___m_OtherRigidbody_3;
	// UnityEngine.ContactPoint2D[] UnityEngine.Collision2D::m_Contacts
	ContactPoint2DU5BU5D_t96683501* ___m_Contacts_4;
	// UnityEngine.Vector2 UnityEngine.Collision2D::m_RelativeVelocity
	Vector2_t2156229523  ___m_RelativeVelocity_5;
	// System.Int32 UnityEngine.Collision2D::m_Enabled
	int32_t ___m_Enabled_6;

public:
	inline static int32_t get_offset_of_m_Collider_0() { return static_cast<int32_t>(offsetof(Collision2D_t2842956331, ___m_Collider_0)); }
	inline int32_t get_m_Collider_0() const { return ___m_Collider_0; }
	inline int32_t* get_address_of_m_Collider_0() { return &___m_Collider_0; }
	inline void set_m_Collider_0(int32_t value)
	{
		___m_Collider_0 = value;
	}

	inline static int32_t get_offset_of_m_OtherCollider_1() { return static_cast<int32_t>(offsetof(Collision2D_t2842956331, ___m_OtherCollider_1)); }
	inline int32_t get_m_OtherCollider_1() const { return ___m_OtherCollider_1; }
	inline int32_t* get_address_of_m_OtherCollider_1() { return &___m_OtherCollider_1; }
	inline void set_m_OtherCollider_1(int32_t value)
	{
		___m_OtherCollider_1 = value;
	}

	inline static int32_t get_offset_of_m_Rigidbody_2() { return static_cast<int32_t>(offsetof(Collision2D_t2842956331, ___m_Rigidbody_2)); }
	inline int32_t get_m_Rigidbody_2() const { return ___m_Rigidbody_2; }
	inline int32_t* get_address_of_m_Rigidbody_2() { return &___m_Rigidbody_2; }
	inline void set_m_Rigidbody_2(int32_t value)
	{
		___m_Rigidbody_2 = value;
	}

	inline static int32_t get_offset_of_m_OtherRigidbody_3() { return static_cast<int32_t>(offsetof(Collision2D_t2842956331, ___m_OtherRigidbody_3)); }
	inline int32_t get_m_OtherRigidbody_3() const { return ___m_OtherRigidbody_3; }
	inline int32_t* get_address_of_m_OtherRigidbody_3() { return &___m_OtherRigidbody_3; }
	inline void set_m_OtherRigidbody_3(int32_t value)
	{
		___m_OtherRigidbody_3 = value;
	}

	inline static int32_t get_offset_of_m_Contacts_4() { return static_cast<int32_t>(offsetof(Collision2D_t2842956331, ___m_Contacts_4)); }
	inline ContactPoint2DU5BU5D_t96683501* get_m_Contacts_4() const { return ___m_Contacts_4; }
	inline ContactPoint2DU5BU5D_t96683501** get_address_of_m_Contacts_4() { return &___m_Contacts_4; }
	inline void set_m_Contacts_4(ContactPoint2DU5BU5D_t96683501* value)
	{
		___m_Contacts_4 = value;
		Il2CppCodeGenWriteBarrier((&___m_Contacts_4), value);
	}

	inline static int32_t get_offset_of_m_RelativeVelocity_5() { return static_cast<int32_t>(offsetof(Collision2D_t2842956331, ___m_RelativeVelocity_5)); }
	inline Vector2_t2156229523  get_m_RelativeVelocity_5() const { return ___m_RelativeVelocity_5; }
	inline Vector2_t2156229523 * get_address_of_m_RelativeVelocity_5() { return &___m_RelativeVelocity_5; }
	inline void set_m_RelativeVelocity_5(Vector2_t2156229523  value)
	{
		___m_RelativeVelocity_5 = value;
	}

	inline static int32_t get_offset_of_m_Enabled_6() { return static_cast<int32_t>(offsetof(Collision2D_t2842956331, ___m_Enabled_6)); }
	inline int32_t get_m_Enabled_6() const { return ___m_Enabled_6; }
	inline int32_t* get_address_of_m_Enabled_6() { return &___m_Enabled_6; }
	inline void set_m_Enabled_6(int32_t value)
	{
		___m_Enabled_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.Collision2D
struct Collision2D_t2842956331_marshaled_pinvoke
{
	int32_t ___m_Collider_0;
	int32_t ___m_OtherCollider_1;
	int32_t ___m_Rigidbody_2;
	int32_t ___m_OtherRigidbody_3;
	ContactPoint2D_t3390240644 * ___m_Contacts_4;
	Vector2_t2156229523  ___m_RelativeVelocity_5;
	int32_t ___m_Enabled_6;
};
// Native definition for COM marshalling of UnityEngine.Collision2D
struct Collision2D_t2842956331_marshaled_com
{
	int32_t ___m_Collider_0;
	int32_t ___m_OtherCollider_1;
	int32_t ___m_Rigidbody_2;
	int32_t ___m_OtherRigidbody_3;
	ContactPoint2D_t3390240644 * ___m_Contacts_4;
	Vector2_t2156229523  ___m_RelativeVelocity_5;
	int32_t ___m_Enabled_6;
};
#endif // COLLISION2D_T2842956331_H
#ifndef FORCEMODE2D_T255358695_H
#define FORCEMODE2D_T255358695_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.ForceMode2D
struct  ForceMode2D_t255358695 
{
public:
	// System.Int32 UnityEngine.ForceMode2D::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(ForceMode2D_t255358695, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FORCEMODE2D_T255358695_H
#ifndef OBJECT_T631007953_H
#define OBJECT_T631007953_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Object
struct  Object_t631007953  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_t631007953, ___m_CachedPtr_0)); }
	inline intptr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline intptr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(intptr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_t631007953_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_t631007953_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
	inline int32_t get_OffsetOfInstanceIDInCPlusPlusObject_1() const { return ___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline int32_t* get_address_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return &___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline void set_OffsetOfInstanceIDInCPlusPlusObject_1(int32_t value)
	{
		___OffsetOfInstanceIDInCPlusPlusObject_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_t631007953_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_t631007953_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};
#endif // OBJECT_T631007953_H
#ifndef GAMEOBJECT_T1113636619_H
#define GAMEOBJECT_T1113636619_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.GameObject
struct  GameObject_t1113636619  : public Object_t631007953
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GAMEOBJECT_T1113636619_H
#ifndef NAVIGATION_T3049316579_H
#define NAVIGATION_T3049316579_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.Navigation
struct  Navigation_t3049316579 
{
public:
	// UnityEngine.UI.Navigation/Mode UnityEngine.UI.Navigation::m_Mode
	int32_t ___m_Mode_0;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnUp
	Selectable_t3250028441 * ___m_SelectOnUp_1;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnDown
	Selectable_t3250028441 * ___m_SelectOnDown_2;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnLeft
	Selectable_t3250028441 * ___m_SelectOnLeft_3;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnRight
	Selectable_t3250028441 * ___m_SelectOnRight_4;

public:
	inline static int32_t get_offset_of_m_Mode_0() { return static_cast<int32_t>(offsetof(Navigation_t3049316579, ___m_Mode_0)); }
	inline int32_t get_m_Mode_0() const { return ___m_Mode_0; }
	inline int32_t* get_address_of_m_Mode_0() { return &___m_Mode_0; }
	inline void set_m_Mode_0(int32_t value)
	{
		___m_Mode_0 = value;
	}

	inline static int32_t get_offset_of_m_SelectOnUp_1() { return static_cast<int32_t>(offsetof(Navigation_t3049316579, ___m_SelectOnUp_1)); }
	inline Selectable_t3250028441 * get_m_SelectOnUp_1() const { return ___m_SelectOnUp_1; }
	inline Selectable_t3250028441 ** get_address_of_m_SelectOnUp_1() { return &___m_SelectOnUp_1; }
	inline void set_m_SelectOnUp_1(Selectable_t3250028441 * value)
	{
		___m_SelectOnUp_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_SelectOnUp_1), value);
	}

	inline static int32_t get_offset_of_m_SelectOnDown_2() { return static_cast<int32_t>(offsetof(Navigation_t3049316579, ___m_SelectOnDown_2)); }
	inline Selectable_t3250028441 * get_m_SelectOnDown_2() const { return ___m_SelectOnDown_2; }
	inline Selectable_t3250028441 ** get_address_of_m_SelectOnDown_2() { return &___m_SelectOnDown_2; }
	inline void set_m_SelectOnDown_2(Selectable_t3250028441 * value)
	{
		___m_SelectOnDown_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_SelectOnDown_2), value);
	}

	inline static int32_t get_offset_of_m_SelectOnLeft_3() { return static_cast<int32_t>(offsetof(Navigation_t3049316579, ___m_SelectOnLeft_3)); }
	inline Selectable_t3250028441 * get_m_SelectOnLeft_3() const { return ___m_SelectOnLeft_3; }
	inline Selectable_t3250028441 ** get_address_of_m_SelectOnLeft_3() { return &___m_SelectOnLeft_3; }
	inline void set_m_SelectOnLeft_3(Selectable_t3250028441 * value)
	{
		___m_SelectOnLeft_3 = value;
		Il2CppCodeGenWriteBarrier((&___m_SelectOnLeft_3), value);
	}

	inline static int32_t get_offset_of_m_SelectOnRight_4() { return static_cast<int32_t>(offsetof(Navigation_t3049316579, ___m_SelectOnRight_4)); }
	inline Selectable_t3250028441 * get_m_SelectOnRight_4() const { return ___m_SelectOnRight_4; }
	inline Selectable_t3250028441 ** get_address_of_m_SelectOnRight_4() { return &___m_SelectOnRight_4; }
	inline void set_m_SelectOnRight_4(Selectable_t3250028441 * value)
	{
		___m_SelectOnRight_4 = value;
		Il2CppCodeGenWriteBarrier((&___m_SelectOnRight_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.UI.Navigation
struct Navigation_t3049316579_marshaled_pinvoke
{
	int32_t ___m_Mode_0;
	Selectable_t3250028441 * ___m_SelectOnUp_1;
	Selectable_t3250028441 * ___m_SelectOnDown_2;
	Selectable_t3250028441 * ___m_SelectOnLeft_3;
	Selectable_t3250028441 * ___m_SelectOnRight_4;
};
// Native definition for COM marshalling of UnityEngine.UI.Navigation
struct Navigation_t3049316579_marshaled_com
{
	int32_t ___m_Mode_0;
	Selectable_t3250028441 * ___m_SelectOnUp_1;
	Selectable_t3250028441 * ___m_SelectOnDown_2;
	Selectable_t3250028441 * ___m_SelectOnLeft_3;
	Selectable_t3250028441 * ___m_SelectOnRight_4;
};
#endif // NAVIGATION_T3049316579_H
#ifndef DIRECTIONTOSTARTMAPPING_T1813080072_H
#define DIRECTIONTOSTARTMAPPING_T1813080072_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// DirectionToStartMapping
struct  DirectionToStartMapping_t1813080072 
{
public:
	// DoorDirection DirectionToStartMapping::doorDirection
	int32_t ___doorDirection_0;
	// UnityEngine.GameObject DirectionToStartMapping::position
	GameObject_t1113636619 * ___position_1;

public:
	inline static int32_t get_offset_of_doorDirection_0() { return static_cast<int32_t>(offsetof(DirectionToStartMapping_t1813080072, ___doorDirection_0)); }
	inline int32_t get_doorDirection_0() const { return ___doorDirection_0; }
	inline int32_t* get_address_of_doorDirection_0() { return &___doorDirection_0; }
	inline void set_doorDirection_0(int32_t value)
	{
		___doorDirection_0 = value;
	}

	inline static int32_t get_offset_of_position_1() { return static_cast<int32_t>(offsetof(DirectionToStartMapping_t1813080072, ___position_1)); }
	inline GameObject_t1113636619 * get_position_1() const { return ___position_1; }
	inline GameObject_t1113636619 ** get_address_of_position_1() { return &___position_1; }
	inline void set_position_1(GameObject_t1113636619 * value)
	{
		___position_1 = value;
		Il2CppCodeGenWriteBarrier((&___position_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of DirectionToStartMapping
struct DirectionToStartMapping_t1813080072_marshaled_pinvoke
{
	int32_t ___doorDirection_0;
	GameObject_t1113636619 * ___position_1;
};
// Native definition for COM marshalling of DirectionToStartMapping
struct DirectionToStartMapping_t1813080072_marshaled_com
{
	int32_t ___doorDirection_0;
	GameObject_t1113636619 * ___position_1;
};
#endif // DIRECTIONTOSTARTMAPPING_T1813080072_H
#ifndef ENTITYSTATEANIMATIONMAPPING_T2495869459_H
#define ENTITYSTATEANIMATIONMAPPING_T2495869459_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// EntityStateAnimationMapping
struct  EntityStateAnimationMapping_t2495869459 
{
public:
	// EntityState EntityStateAnimationMapping::entityState
	int32_t ___entityState_0;
	// System.String EntityStateAnimationMapping::animation
	String_t* ___animation_1;

public:
	inline static int32_t get_offset_of_entityState_0() { return static_cast<int32_t>(offsetof(EntityStateAnimationMapping_t2495869459, ___entityState_0)); }
	inline int32_t get_entityState_0() const { return ___entityState_0; }
	inline int32_t* get_address_of_entityState_0() { return &___entityState_0; }
	inline void set_entityState_0(int32_t value)
	{
		___entityState_0 = value;
	}

	inline static int32_t get_offset_of_animation_1() { return static_cast<int32_t>(offsetof(EntityStateAnimationMapping_t2495869459, ___animation_1)); }
	inline String_t* get_animation_1() const { return ___animation_1; }
	inline String_t** get_address_of_animation_1() { return &___animation_1; }
	inline void set_animation_1(String_t* value)
	{
		___animation_1 = value;
		Il2CppCodeGenWriteBarrier((&___animation_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of EntityStateAnimationMapping
struct EntityStateAnimationMapping_t2495869459_marshaled_pinvoke
{
	int32_t ___entityState_0;
	char* ___animation_1;
};
// Native definition for COM marshalling of EntityStateAnimationMapping
struct EntityStateAnimationMapping_t2495869459_marshaled_com
{
	int32_t ___entityState_0;
	Il2CppChar* ___animation_1;
};
#endif // ENTITYSTATEANIMATIONMAPPING_T2495869459_H
#ifndef MULTICASTDELEGATE_T_H
#define MULTICASTDELEGATE_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.MulticastDelegate
struct  MulticastDelegate_t  : public Delegate_t1188392813
{
public:
	// System.MulticastDelegate System.MulticastDelegate::prev
	MulticastDelegate_t * ___prev_9;
	// System.MulticastDelegate System.MulticastDelegate::kpm_next
	MulticastDelegate_t * ___kpm_next_10;

public:
	inline static int32_t get_offset_of_prev_9() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___prev_9)); }
	inline MulticastDelegate_t * get_prev_9() const { return ___prev_9; }
	inline MulticastDelegate_t ** get_address_of_prev_9() { return &___prev_9; }
	inline void set_prev_9(MulticastDelegate_t * value)
	{
		___prev_9 = value;
		Il2CppCodeGenWriteBarrier((&___prev_9), value);
	}

	inline static int32_t get_offset_of_kpm_next_10() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___kpm_next_10)); }
	inline MulticastDelegate_t * get_kpm_next_10() const { return ___kpm_next_10; }
	inline MulticastDelegate_t ** get_address_of_kpm_next_10() { return &___kpm_next_10; }
	inline void set_kpm_next_10(MulticastDelegate_t * value)
	{
		___kpm_next_10 = value;
		Il2CppCodeGenWriteBarrier((&___kpm_next_10), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MULTICASTDELEGATE_T_H
#ifndef AUDIOCLIP_T3680889665_H
#define AUDIOCLIP_T3680889665_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.AudioClip
struct  AudioClip_t3680889665  : public Object_t631007953
{
public:
	// UnityEngine.AudioClip/PCMReaderCallback UnityEngine.AudioClip::m_PCMReaderCallback
	PCMReaderCallback_t1677636661 * ___m_PCMReaderCallback_2;
	// UnityEngine.AudioClip/PCMSetPositionCallback UnityEngine.AudioClip::m_PCMSetPositionCallback
	PCMSetPositionCallback_t1059417452 * ___m_PCMSetPositionCallback_3;

public:
	inline static int32_t get_offset_of_m_PCMReaderCallback_2() { return static_cast<int32_t>(offsetof(AudioClip_t3680889665, ___m_PCMReaderCallback_2)); }
	inline PCMReaderCallback_t1677636661 * get_m_PCMReaderCallback_2() const { return ___m_PCMReaderCallback_2; }
	inline PCMReaderCallback_t1677636661 ** get_address_of_m_PCMReaderCallback_2() { return &___m_PCMReaderCallback_2; }
	inline void set_m_PCMReaderCallback_2(PCMReaderCallback_t1677636661 * value)
	{
		___m_PCMReaderCallback_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_PCMReaderCallback_2), value);
	}

	inline static int32_t get_offset_of_m_PCMSetPositionCallback_3() { return static_cast<int32_t>(offsetof(AudioClip_t3680889665, ___m_PCMSetPositionCallback_3)); }
	inline PCMSetPositionCallback_t1059417452 * get_m_PCMSetPositionCallback_3() const { return ___m_PCMSetPositionCallback_3; }
	inline PCMSetPositionCallback_t1059417452 ** get_address_of_m_PCMSetPositionCallback_3() { return &___m_PCMSetPositionCallback_3; }
	inline void set_m_PCMSetPositionCallback_3(PCMSetPositionCallback_t1059417452 * value)
	{
		___m_PCMSetPositionCallback_3 = value;
		Il2CppCodeGenWriteBarrier((&___m_PCMSetPositionCallback_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // AUDIOCLIP_T3680889665_H
#ifndef COMPONENT_T1923634451_H
#define COMPONENT_T1923634451_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Component
struct  Component_t1923634451  : public Object_t631007953
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COMPONENT_T1923634451_H
#ifndef BEHAVIOUR_T1437897464_H
#define BEHAVIOUR_T1437897464_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Behaviour
struct  Behaviour_t1437897464  : public Component_t1923634451
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BEHAVIOUR_T1437897464_H
#ifndef ONDIE_T3469385283_H
#define ONDIE_T3469385283_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Entity/OnDie
struct  OnDie_t3469385283  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ONDIE_T3469385283_H
#ifndef RENDERER_T2627027031_H
#define RENDERER_T2627027031_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Renderer
struct  Renderer_t2627027031  : public Component_t1923634451
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RENDERER_T2627027031_H
#ifndef TRANSFORM_T3600365921_H
#define TRANSFORM_T3600365921_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Transform
struct  Transform_t3600365921  : public Component_t1923634451
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRANSFORM_T3600365921_H
#ifndef UNITYACTION_T3245792599_H
#define UNITYACTION_T3245792599_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Events.UnityAction
struct  UnityAction_t3245792599  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYACTION_T3245792599_H
#ifndef RIGIDBODY2D_T939494601_H
#define RIGIDBODY2D_T939494601_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Rigidbody2D
struct  Rigidbody2D_t939494601  : public Component_t1923634451
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RIGIDBODY2D_T939494601_H
#ifndef ENUMERATOR_T1562220782_H
#define ENUMERATOR_T1562220782_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1/Enumerator<EntityStateAnimationMapping>
struct  Enumerator_t1562220782 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::l
	List_1_t3967944201 * ___l_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::next
	int32_t ___next_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::ver
	int32_t ___ver_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	EntityStateAnimationMapping_t2495869459  ___current_3;

public:
	inline static int32_t get_offset_of_l_0() { return static_cast<int32_t>(offsetof(Enumerator_t1562220782, ___l_0)); }
	inline List_1_t3967944201 * get_l_0() const { return ___l_0; }
	inline List_1_t3967944201 ** get_address_of_l_0() { return &___l_0; }
	inline void set_l_0(List_1_t3967944201 * value)
	{
		___l_0 = value;
		Il2CppCodeGenWriteBarrier((&___l_0), value);
	}

	inline static int32_t get_offset_of_next_1() { return static_cast<int32_t>(offsetof(Enumerator_t1562220782, ___next_1)); }
	inline int32_t get_next_1() const { return ___next_1; }
	inline int32_t* get_address_of_next_1() { return &___next_1; }
	inline void set_next_1(int32_t value)
	{
		___next_1 = value;
	}

	inline static int32_t get_offset_of_ver_2() { return static_cast<int32_t>(offsetof(Enumerator_t1562220782, ___ver_2)); }
	inline int32_t get_ver_2() const { return ___ver_2; }
	inline int32_t* get_address_of_ver_2() { return &___ver_2; }
	inline void set_ver_2(int32_t value)
	{
		___ver_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t1562220782, ___current_3)); }
	inline EntityStateAnimationMapping_t2495869459  get_current_3() const { return ___current_3; }
	inline EntityStateAnimationMapping_t2495869459 * get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(EntityStateAnimationMapping_t2495869459  value)
	{
		___current_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENUMERATOR_T1562220782_H
#ifndef ASYNCCALLBACK_T3962456242_H
#define ASYNCCALLBACK_T3962456242_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.AsyncCallback
struct  AsyncCallback_t3962456242  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ASYNCCALLBACK_T3962456242_H
#ifndef COLLIDER2D_T2806799626_H
#define COLLIDER2D_T2806799626_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Collider2D
struct  Collider2D_t2806799626  : public Behaviour_t1437897464
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COLLIDER2D_T2806799626_H
#ifndef CAMERA_T4157153871_H
#define CAMERA_T4157153871_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Camera
struct  Camera_t4157153871  : public Behaviour_t1437897464
{
public:

public:
};

struct Camera_t4157153871_StaticFields
{
public:
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreCull
	CameraCallback_t190067161 * ___onPreCull_2;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreRender
	CameraCallback_t190067161 * ___onPreRender_3;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPostRender
	CameraCallback_t190067161 * ___onPostRender_4;

public:
	inline static int32_t get_offset_of_onPreCull_2() { return static_cast<int32_t>(offsetof(Camera_t4157153871_StaticFields, ___onPreCull_2)); }
	inline CameraCallback_t190067161 * get_onPreCull_2() const { return ___onPreCull_2; }
	inline CameraCallback_t190067161 ** get_address_of_onPreCull_2() { return &___onPreCull_2; }
	inline void set_onPreCull_2(CameraCallback_t190067161 * value)
	{
		___onPreCull_2 = value;
		Il2CppCodeGenWriteBarrier((&___onPreCull_2), value);
	}

	inline static int32_t get_offset_of_onPreRender_3() { return static_cast<int32_t>(offsetof(Camera_t4157153871_StaticFields, ___onPreRender_3)); }
	inline CameraCallback_t190067161 * get_onPreRender_3() const { return ___onPreRender_3; }
	inline CameraCallback_t190067161 ** get_address_of_onPreRender_3() { return &___onPreRender_3; }
	inline void set_onPreRender_3(CameraCallback_t190067161 * value)
	{
		___onPreRender_3 = value;
		Il2CppCodeGenWriteBarrier((&___onPreRender_3), value);
	}

	inline static int32_t get_offset_of_onPostRender_4() { return static_cast<int32_t>(offsetof(Camera_t4157153871_StaticFields, ___onPostRender_4)); }
	inline CameraCallback_t190067161 * get_onPostRender_4() const { return ___onPostRender_4; }
	inline CameraCallback_t190067161 ** get_address_of_onPostRender_4() { return &___onPostRender_4; }
	inline void set_onPostRender_4(CameraCallback_t190067161 * value)
	{
		___onPostRender_4 = value;
		Il2CppCodeGenWriteBarrier((&___onPostRender_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CAMERA_T4157153871_H
#ifndef AUDIOSOURCE_T3935305588_H
#define AUDIOSOURCE_T3935305588_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.AudioSource
struct  AudioSource_t3935305588  : public Behaviour_t1437897464
{
public:
	// UnityEngine.AudioSourceExtension UnityEngine.AudioSource::spatializerExtension
	AudioSourceExtension_t3064908834 * ___spatializerExtension_2;
	// UnityEngine.AudioSourceExtension UnityEngine.AudioSource::ambisonicExtension
	AudioSourceExtension_t3064908834 * ___ambisonicExtension_3;

public:
	inline static int32_t get_offset_of_spatializerExtension_2() { return static_cast<int32_t>(offsetof(AudioSource_t3935305588, ___spatializerExtension_2)); }
	inline AudioSourceExtension_t3064908834 * get_spatializerExtension_2() const { return ___spatializerExtension_2; }
	inline AudioSourceExtension_t3064908834 ** get_address_of_spatializerExtension_2() { return &___spatializerExtension_2; }
	inline void set_spatializerExtension_2(AudioSourceExtension_t3064908834 * value)
	{
		___spatializerExtension_2 = value;
		Il2CppCodeGenWriteBarrier((&___spatializerExtension_2), value);
	}

	inline static int32_t get_offset_of_ambisonicExtension_3() { return static_cast<int32_t>(offsetof(AudioSource_t3935305588, ___ambisonicExtension_3)); }
	inline AudioSourceExtension_t3064908834 * get_ambisonicExtension_3() const { return ___ambisonicExtension_3; }
	inline AudioSourceExtension_t3064908834 ** get_address_of_ambisonicExtension_3() { return &___ambisonicExtension_3; }
	inline void set_ambisonicExtension_3(AudioSourceExtension_t3064908834 * value)
	{
		___ambisonicExtension_3 = value;
		Il2CppCodeGenWriteBarrier((&___ambisonicExtension_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // AUDIOSOURCE_T3935305588_H
#ifndef SPRITERENDERER_T3235626157_H
#define SPRITERENDERER_T3235626157_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.SpriteRenderer
struct  SpriteRenderer_t3235626157  : public Renderer_t2627027031
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SPRITERENDERER_T3235626157_H
#ifndef MONOBEHAVIOUR_T3962482529_H
#define MONOBEHAVIOUR_T3962482529_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.MonoBehaviour
struct  MonoBehaviour_t3962482529  : public Behaviour_t1437897464
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MONOBEHAVIOUR_T3962482529_H
#ifndef ANIMATOR_T434523843_H
#define ANIMATOR_T434523843_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Animator
struct  Animator_t434523843  : public Behaviour_t1437897464
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ANIMATOR_T434523843_H
#ifndef SKELLYAI_T2611779661_H
#define SKELLYAI_T2611779661_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SkellyAI
struct  SkellyAI_t2611779661  : public MonoBehaviour_t3962482529
{
public:
	// Player SkellyAI::_player
	Player_t3266647312 * ____player_2;
	// System.Boolean SkellyAI::_active
	bool ____active_3;
	// System.Single SkellyAI::_speed
	float ____speed_4;
	// System.Single SkellyAI::_aggroRange
	float ____aggroRange_5;
	// System.Single SkellyAI::_damage
	float ____damage_6;
	// System.Single SkellyAI::_attackCooldown
	float ____attackCooldown_7;
	// System.Single SkellyAI::_currentAttackCooldown
	float ____currentAttackCooldown_8;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> SkellyAI::_nodeHistory
	List_1_t2585711361 * ____nodeHistory_10;
	// EnemyNodeComparer SkellyAI::_enemyNodeComparer
	EnemyNodeComparer_t2029075025 * ____enemyNodeComparer_11;
	// UnityEngine.GameObject SkellyAI::_targetNode
	GameObject_t1113636619 * ____targetNode_12;

public:
	inline static int32_t get_offset_of__player_2() { return static_cast<int32_t>(offsetof(SkellyAI_t2611779661, ____player_2)); }
	inline Player_t3266647312 * get__player_2() const { return ____player_2; }
	inline Player_t3266647312 ** get_address_of__player_2() { return &____player_2; }
	inline void set__player_2(Player_t3266647312 * value)
	{
		____player_2 = value;
		Il2CppCodeGenWriteBarrier((&____player_2), value);
	}

	inline static int32_t get_offset_of__active_3() { return static_cast<int32_t>(offsetof(SkellyAI_t2611779661, ____active_3)); }
	inline bool get__active_3() const { return ____active_3; }
	inline bool* get_address_of__active_3() { return &____active_3; }
	inline void set__active_3(bool value)
	{
		____active_3 = value;
	}

	inline static int32_t get_offset_of__speed_4() { return static_cast<int32_t>(offsetof(SkellyAI_t2611779661, ____speed_4)); }
	inline float get__speed_4() const { return ____speed_4; }
	inline float* get_address_of__speed_4() { return &____speed_4; }
	inline void set__speed_4(float value)
	{
		____speed_4 = value;
	}

	inline static int32_t get_offset_of__aggroRange_5() { return static_cast<int32_t>(offsetof(SkellyAI_t2611779661, ____aggroRange_5)); }
	inline float get__aggroRange_5() const { return ____aggroRange_5; }
	inline float* get_address_of__aggroRange_5() { return &____aggroRange_5; }
	inline void set__aggroRange_5(float value)
	{
		____aggroRange_5 = value;
	}

	inline static int32_t get_offset_of__damage_6() { return static_cast<int32_t>(offsetof(SkellyAI_t2611779661, ____damage_6)); }
	inline float get__damage_6() const { return ____damage_6; }
	inline float* get_address_of__damage_6() { return &____damage_6; }
	inline void set__damage_6(float value)
	{
		____damage_6 = value;
	}

	inline static int32_t get_offset_of__attackCooldown_7() { return static_cast<int32_t>(offsetof(SkellyAI_t2611779661, ____attackCooldown_7)); }
	inline float get__attackCooldown_7() const { return ____attackCooldown_7; }
	inline float* get_address_of__attackCooldown_7() { return &____attackCooldown_7; }
	inline void set__attackCooldown_7(float value)
	{
		____attackCooldown_7 = value;
	}

	inline static int32_t get_offset_of__currentAttackCooldown_8() { return static_cast<int32_t>(offsetof(SkellyAI_t2611779661, ____currentAttackCooldown_8)); }
	inline float get__currentAttackCooldown_8() const { return ____currentAttackCooldown_8; }
	inline float* get_address_of__currentAttackCooldown_8() { return &____currentAttackCooldown_8; }
	inline void set__currentAttackCooldown_8(float value)
	{
		____currentAttackCooldown_8 = value;
	}

	inline static int32_t get_offset_of__nodeHistory_10() { return static_cast<int32_t>(offsetof(SkellyAI_t2611779661, ____nodeHistory_10)); }
	inline List_1_t2585711361 * get__nodeHistory_10() const { return ____nodeHistory_10; }
	inline List_1_t2585711361 ** get_address_of__nodeHistory_10() { return &____nodeHistory_10; }
	inline void set__nodeHistory_10(List_1_t2585711361 * value)
	{
		____nodeHistory_10 = value;
		Il2CppCodeGenWriteBarrier((&____nodeHistory_10), value);
	}

	inline static int32_t get_offset_of__enemyNodeComparer_11() { return static_cast<int32_t>(offsetof(SkellyAI_t2611779661, ____enemyNodeComparer_11)); }
	inline EnemyNodeComparer_t2029075025 * get__enemyNodeComparer_11() const { return ____enemyNodeComparer_11; }
	inline EnemyNodeComparer_t2029075025 ** get_address_of__enemyNodeComparer_11() { return &____enemyNodeComparer_11; }
	inline void set__enemyNodeComparer_11(EnemyNodeComparer_t2029075025 * value)
	{
		____enemyNodeComparer_11 = value;
		Il2CppCodeGenWriteBarrier((&____enemyNodeComparer_11), value);
	}

	inline static int32_t get_offset_of__targetNode_12() { return static_cast<int32_t>(offsetof(SkellyAI_t2611779661, ____targetNode_12)); }
	inline GameObject_t1113636619 * get__targetNode_12() const { return ____targetNode_12; }
	inline GameObject_t1113636619 ** get_address_of__targetNode_12() { return &____targetNode_12; }
	inline void set__targetNode_12(GameObject_t1113636619 * value)
	{
		____targetNode_12 = value;
		Il2CppCodeGenWriteBarrier((&____targetNode_12), value);
	}
};

struct SkellyAI_t2611779661_StaticFields
{
public:
	// System.Collections.Generic.List`1<UnityEngine.GameObject> SkellyAI::_enemyNodes
	List_1_t2585711361 * ____enemyNodes_9;

public:
	inline static int32_t get_offset_of__enemyNodes_9() { return static_cast<int32_t>(offsetof(SkellyAI_t2611779661_StaticFields, ____enemyNodes_9)); }
	inline List_1_t2585711361 * get__enemyNodes_9() const { return ____enemyNodes_9; }
	inline List_1_t2585711361 ** get_address_of__enemyNodes_9() { return &____enemyNodes_9; }
	inline void set__enemyNodes_9(List_1_t2585711361 * value)
	{
		____enemyNodes_9 = value;
		Il2CppCodeGenWriteBarrier((&____enemyNodes_9), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SKELLYAI_T2611779661_H
#ifndef VOIDAI_T4181225430_H
#define VOIDAI_T4181225430_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// VoidAI
struct  VoidAI_t4181225430  : public MonoBehaviour_t3962482529
{
public:
	// System.Single VoidAI::_speed
	float ____speed_2;
	// UnityEngine.Vector3 VoidAI::_targetPosition
	Vector3_t3722313464  ____targetPosition_3;
	// System.Single VoidAI::_distanceToTarget
	float ____distanceToTarget_4;
	// UnityEngine.AudioSource VoidAI::_warnSource
	AudioSource_t3935305588 * ____warnSource_5;
	// UnityEngine.AudioSource VoidAI::_boomSource
	AudioSource_t3935305588 * ____boomSource_6;
	// System.Boolean VoidAI::_isAttacking
	bool ____isAttacking_7;

public:
	inline static int32_t get_offset_of__speed_2() { return static_cast<int32_t>(offsetof(VoidAI_t4181225430, ____speed_2)); }
	inline float get__speed_2() const { return ____speed_2; }
	inline float* get_address_of__speed_2() { return &____speed_2; }
	inline void set__speed_2(float value)
	{
		____speed_2 = value;
	}

	inline static int32_t get_offset_of__targetPosition_3() { return static_cast<int32_t>(offsetof(VoidAI_t4181225430, ____targetPosition_3)); }
	inline Vector3_t3722313464  get__targetPosition_3() const { return ____targetPosition_3; }
	inline Vector3_t3722313464 * get_address_of__targetPosition_3() { return &____targetPosition_3; }
	inline void set__targetPosition_3(Vector3_t3722313464  value)
	{
		____targetPosition_3 = value;
	}

	inline static int32_t get_offset_of__distanceToTarget_4() { return static_cast<int32_t>(offsetof(VoidAI_t4181225430, ____distanceToTarget_4)); }
	inline float get__distanceToTarget_4() const { return ____distanceToTarget_4; }
	inline float* get_address_of__distanceToTarget_4() { return &____distanceToTarget_4; }
	inline void set__distanceToTarget_4(float value)
	{
		____distanceToTarget_4 = value;
	}

	inline static int32_t get_offset_of__warnSource_5() { return static_cast<int32_t>(offsetof(VoidAI_t4181225430, ____warnSource_5)); }
	inline AudioSource_t3935305588 * get__warnSource_5() const { return ____warnSource_5; }
	inline AudioSource_t3935305588 ** get_address_of__warnSource_5() { return &____warnSource_5; }
	inline void set__warnSource_5(AudioSource_t3935305588 * value)
	{
		____warnSource_5 = value;
		Il2CppCodeGenWriteBarrier((&____warnSource_5), value);
	}

	inline static int32_t get_offset_of__boomSource_6() { return static_cast<int32_t>(offsetof(VoidAI_t4181225430, ____boomSource_6)); }
	inline AudioSource_t3935305588 * get__boomSource_6() const { return ____boomSource_6; }
	inline AudioSource_t3935305588 ** get_address_of__boomSource_6() { return &____boomSource_6; }
	inline void set__boomSource_6(AudioSource_t3935305588 * value)
	{
		____boomSource_6 = value;
		Il2CppCodeGenWriteBarrier((&____boomSource_6), value);
	}

	inline static int32_t get_offset_of__isAttacking_7() { return static_cast<int32_t>(offsetof(VoidAI_t4181225430, ____isAttacking_7)); }
	inline bool get__isAttacking_7() const { return ____isAttacking_7; }
	inline bool* get_address_of__isAttacking_7() { return &____isAttacking_7; }
	inline void set__isAttacking_7(bool value)
	{
		____isAttacking_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VOIDAI_T4181225430_H
#ifndef BATAI_T3670615739_H
#define BATAI_T3670615739_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// BatAI
struct  BatAI_t3670615739  : public MonoBehaviour_t3962482529
{
public:
	// Player BatAI::_player
	Player_t3266647312 * ____player_2;
	// System.Boolean BatAI::_active
	bool ____active_3;
	// System.Single BatAI::_speed
	float ____speed_4;
	// System.Single BatAI::_aggroRange
	float ____aggroRange_5;
	// System.Single BatAI::_damage
	float ____damage_6;
	// System.Single BatAI::_attackCooldown
	float ____attackCooldown_7;
	// System.Single BatAI::_currentAttackCooldown
	float ____currentAttackCooldown_8;

public:
	inline static int32_t get_offset_of__player_2() { return static_cast<int32_t>(offsetof(BatAI_t3670615739, ____player_2)); }
	inline Player_t3266647312 * get__player_2() const { return ____player_2; }
	inline Player_t3266647312 ** get_address_of__player_2() { return &____player_2; }
	inline void set__player_2(Player_t3266647312 * value)
	{
		____player_2 = value;
		Il2CppCodeGenWriteBarrier((&____player_2), value);
	}

	inline static int32_t get_offset_of__active_3() { return static_cast<int32_t>(offsetof(BatAI_t3670615739, ____active_3)); }
	inline bool get__active_3() const { return ____active_3; }
	inline bool* get_address_of__active_3() { return &____active_3; }
	inline void set__active_3(bool value)
	{
		____active_3 = value;
	}

	inline static int32_t get_offset_of__speed_4() { return static_cast<int32_t>(offsetof(BatAI_t3670615739, ____speed_4)); }
	inline float get__speed_4() const { return ____speed_4; }
	inline float* get_address_of__speed_4() { return &____speed_4; }
	inline void set__speed_4(float value)
	{
		____speed_4 = value;
	}

	inline static int32_t get_offset_of__aggroRange_5() { return static_cast<int32_t>(offsetof(BatAI_t3670615739, ____aggroRange_5)); }
	inline float get__aggroRange_5() const { return ____aggroRange_5; }
	inline float* get_address_of__aggroRange_5() { return &____aggroRange_5; }
	inline void set__aggroRange_5(float value)
	{
		____aggroRange_5 = value;
	}

	inline static int32_t get_offset_of__damage_6() { return static_cast<int32_t>(offsetof(BatAI_t3670615739, ____damage_6)); }
	inline float get__damage_6() const { return ____damage_6; }
	inline float* get_address_of__damage_6() { return &____damage_6; }
	inline void set__damage_6(float value)
	{
		____damage_6 = value;
	}

	inline static int32_t get_offset_of__attackCooldown_7() { return static_cast<int32_t>(offsetof(BatAI_t3670615739, ____attackCooldown_7)); }
	inline float get__attackCooldown_7() const { return ____attackCooldown_7; }
	inline float* get_address_of__attackCooldown_7() { return &____attackCooldown_7; }
	inline void set__attackCooldown_7(float value)
	{
		____attackCooldown_7 = value;
	}

	inline static int32_t get_offset_of__currentAttackCooldown_8() { return static_cast<int32_t>(offsetof(BatAI_t3670615739, ____currentAttackCooldown_8)); }
	inline float get__currentAttackCooldown_8() const { return ____currentAttackCooldown_8; }
	inline float* get_address_of__currentAttackCooldown_8() { return &____currentAttackCooldown_8; }
	inline void set__currentAttackCooldown_8(float value)
	{
		____currentAttackCooldown_8 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BATAI_T3670615739_H
#ifndef WEAPON_T4063826929_H
#define WEAPON_T4063826929_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Weapon
struct  Weapon_t4063826929  : public MonoBehaviour_t3962482529
{
public:
	// System.String Weapon::_name
	String_t* ____name_3;
	// System.Single Weapon::_damage
	float ____damage_4;
	// System.Single Weapon::_cooldownTime
	float ____cooldownTime_5;
	// System.Int32 Weapon::_attackTime
	int32_t ____attackTime_6;
	// System.Boolean Weapon::_used
	bool ____used_7;
	// Entity Weapon::_owner
	Entity_t3391956725 * ____owner_8;

public:
	inline static int32_t get_offset_of__name_3() { return static_cast<int32_t>(offsetof(Weapon_t4063826929, ____name_3)); }
	inline String_t* get__name_3() const { return ____name_3; }
	inline String_t** get_address_of__name_3() { return &____name_3; }
	inline void set__name_3(String_t* value)
	{
		____name_3 = value;
		Il2CppCodeGenWriteBarrier((&____name_3), value);
	}

	inline static int32_t get_offset_of__damage_4() { return static_cast<int32_t>(offsetof(Weapon_t4063826929, ____damage_4)); }
	inline float get__damage_4() const { return ____damage_4; }
	inline float* get_address_of__damage_4() { return &____damage_4; }
	inline void set__damage_4(float value)
	{
		____damage_4 = value;
	}

	inline static int32_t get_offset_of__cooldownTime_5() { return static_cast<int32_t>(offsetof(Weapon_t4063826929, ____cooldownTime_5)); }
	inline float get__cooldownTime_5() const { return ____cooldownTime_5; }
	inline float* get_address_of__cooldownTime_5() { return &____cooldownTime_5; }
	inline void set__cooldownTime_5(float value)
	{
		____cooldownTime_5 = value;
	}

	inline static int32_t get_offset_of__attackTime_6() { return static_cast<int32_t>(offsetof(Weapon_t4063826929, ____attackTime_6)); }
	inline int32_t get__attackTime_6() const { return ____attackTime_6; }
	inline int32_t* get_address_of__attackTime_6() { return &____attackTime_6; }
	inline void set__attackTime_6(int32_t value)
	{
		____attackTime_6 = value;
	}

	inline static int32_t get_offset_of__used_7() { return static_cast<int32_t>(offsetof(Weapon_t4063826929, ____used_7)); }
	inline bool get__used_7() const { return ____used_7; }
	inline bool* get_address_of__used_7() { return &____used_7; }
	inline void set__used_7(bool value)
	{
		____used_7 = value;
	}

	inline static int32_t get_offset_of__owner_8() { return static_cast<int32_t>(offsetof(Weapon_t4063826929, ____owner_8)); }
	inline Entity_t3391956725 * get__owner_8() const { return ____owner_8; }
	inline Entity_t3391956725 ** get_address_of__owner_8() { return &____owner_8; }
	inline void set__owner_8(Entity_t3391956725 * value)
	{
		____owner_8 = value;
		Il2CppCodeGenWriteBarrier((&____owner_8), value);
	}
};

struct Weapon_t4063826929_StaticFields
{
public:
	// System.Boolean Weapon::_firstWeapon
	bool ____firstWeapon_2;

public:
	inline static int32_t get_offset_of__firstWeapon_2() { return static_cast<int32_t>(offsetof(Weapon_t4063826929_StaticFields, ____firstWeapon_2)); }
	inline bool get__firstWeapon_2() const { return ____firstWeapon_2; }
	inline bool* get_address_of__firstWeapon_2() { return &____firstWeapon_2; }
	inline void set__firstWeapon_2(bool value)
	{
		____firstWeapon_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WEAPON_T4063826929_H
#ifndef BOSSSEQUENCE_T1258426188_H
#define BOSSSEQUENCE_T1258426188_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// BossSequence
struct  BossSequence_t1258426188  : public MonoBehaviour_t3962482529
{
public:
	// Player BossSequence::_player
	Player_t3266647312 * ____player_2;
	// System.Boolean BossSequence::_enteredTrigger
	bool ____enteredTrigger_3;
	// VoidAI BossSequence::_voidAI
	VoidAI_t4181225430 * ____voidAI_4;
	// UnityEngine.UI.Image BossSequence::_blackOverlay
	Image_t2670269651 * ____blackOverlay_5;
	// UnityEngine.UI.Text BossSequence::_bossText
	Text_t1901882714 * ____bossText_6;
	// ParticleSpawner BossSequence::_particleSpawner
	ParticleSpawner_t2092424095 * ____particleSpawner_7;
	// UnityEngine.AudioSource BossSequence::_bossMusic
	AudioSource_t3935305588 * ____bossMusic_8;

public:
	inline static int32_t get_offset_of__player_2() { return static_cast<int32_t>(offsetof(BossSequence_t1258426188, ____player_2)); }
	inline Player_t3266647312 * get__player_2() const { return ____player_2; }
	inline Player_t3266647312 ** get_address_of__player_2() { return &____player_2; }
	inline void set__player_2(Player_t3266647312 * value)
	{
		____player_2 = value;
		Il2CppCodeGenWriteBarrier((&____player_2), value);
	}

	inline static int32_t get_offset_of__enteredTrigger_3() { return static_cast<int32_t>(offsetof(BossSequence_t1258426188, ____enteredTrigger_3)); }
	inline bool get__enteredTrigger_3() const { return ____enteredTrigger_3; }
	inline bool* get_address_of__enteredTrigger_3() { return &____enteredTrigger_3; }
	inline void set__enteredTrigger_3(bool value)
	{
		____enteredTrigger_3 = value;
	}

	inline static int32_t get_offset_of__voidAI_4() { return static_cast<int32_t>(offsetof(BossSequence_t1258426188, ____voidAI_4)); }
	inline VoidAI_t4181225430 * get__voidAI_4() const { return ____voidAI_4; }
	inline VoidAI_t4181225430 ** get_address_of__voidAI_4() { return &____voidAI_4; }
	inline void set__voidAI_4(VoidAI_t4181225430 * value)
	{
		____voidAI_4 = value;
		Il2CppCodeGenWriteBarrier((&____voidAI_4), value);
	}

	inline static int32_t get_offset_of__blackOverlay_5() { return static_cast<int32_t>(offsetof(BossSequence_t1258426188, ____blackOverlay_5)); }
	inline Image_t2670269651 * get__blackOverlay_5() const { return ____blackOverlay_5; }
	inline Image_t2670269651 ** get_address_of__blackOverlay_5() { return &____blackOverlay_5; }
	inline void set__blackOverlay_5(Image_t2670269651 * value)
	{
		____blackOverlay_5 = value;
		Il2CppCodeGenWriteBarrier((&____blackOverlay_5), value);
	}

	inline static int32_t get_offset_of__bossText_6() { return static_cast<int32_t>(offsetof(BossSequence_t1258426188, ____bossText_6)); }
	inline Text_t1901882714 * get__bossText_6() const { return ____bossText_6; }
	inline Text_t1901882714 ** get_address_of__bossText_6() { return &____bossText_6; }
	inline void set__bossText_6(Text_t1901882714 * value)
	{
		____bossText_6 = value;
		Il2CppCodeGenWriteBarrier((&____bossText_6), value);
	}

	inline static int32_t get_offset_of__particleSpawner_7() { return static_cast<int32_t>(offsetof(BossSequence_t1258426188, ____particleSpawner_7)); }
	inline ParticleSpawner_t2092424095 * get__particleSpawner_7() const { return ____particleSpawner_7; }
	inline ParticleSpawner_t2092424095 ** get_address_of__particleSpawner_7() { return &____particleSpawner_7; }
	inline void set__particleSpawner_7(ParticleSpawner_t2092424095 * value)
	{
		____particleSpawner_7 = value;
		Il2CppCodeGenWriteBarrier((&____particleSpawner_7), value);
	}

	inline static int32_t get_offset_of__bossMusic_8() { return static_cast<int32_t>(offsetof(BossSequence_t1258426188, ____bossMusic_8)); }
	inline AudioSource_t3935305588 * get__bossMusic_8() const { return ____bossMusic_8; }
	inline AudioSource_t3935305588 ** get_address_of__bossMusic_8() { return &____bossMusic_8; }
	inline void set__bossMusic_8(AudioSource_t3935305588 * value)
	{
		____bossMusic_8 = value;
		Il2CppCodeGenWriteBarrier((&____bossMusic_8), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BOSSSEQUENCE_T1258426188_H
#ifndef ENTITY_T3391956725_H
#define ENTITY_T3391956725_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Entity
struct  Entity_t3391956725  : public MonoBehaviour_t3962482529
{
public:
	// UnityEngine.AudioSource Entity::_hitSound
	AudioSource_t3935305588 * ____hitSound_6;
	// EntityState Entity::_entityState
	int32_t ____entityState_7;
	// EntityState Entity::_fallback
	int32_t ____fallback_8;
	// System.Collections.Generic.List`1<EntityStateAnimationMapping> Entity::_entityStateAnimation
	List_1_t3967944201 * ____entityStateAnimation_9;
	// System.Collections.Generic.Dictionary`2<EntityState,System.String> Entity::_quickLookup
	Dictionary_2_t26093461 * ____quickLookup_10;
	// UnityEngine.Animator Entity::_animation
	Animator_t434523843 * ____animation_11;
	// UnityEngine.SpriteRenderer Entity::_spriteRenderer
	SpriteRenderer_t3235626157 * ____spriteRenderer_12;
	// System.Boolean Entity::_flipped
	bool ____flipped_13;
	// UnityEngine.Transform[] Entity::_attackPositions
	TransformU5BU5D_t807237628* ____attackPositions_14;
	// System.Single Entity::_currentAttackDelay
	float ____currentAttackDelay_15;
	// System.Int32 Entity::_direction
	int32_t ____direction_16;
	// Weapon Entity::_currentWeapon
	Weapon_t4063826929 * ____currentWeapon_17;
	// System.Single Entity::_health
	float ____health_18;
	// Entity/OnDie Entity::_onDie
	OnDie_t3469385283 * ____onDie_19;

public:
	inline static int32_t get_offset_of__hitSound_6() { return static_cast<int32_t>(offsetof(Entity_t3391956725, ____hitSound_6)); }
	inline AudioSource_t3935305588 * get__hitSound_6() const { return ____hitSound_6; }
	inline AudioSource_t3935305588 ** get_address_of__hitSound_6() { return &____hitSound_6; }
	inline void set__hitSound_6(AudioSource_t3935305588 * value)
	{
		____hitSound_6 = value;
		Il2CppCodeGenWriteBarrier((&____hitSound_6), value);
	}

	inline static int32_t get_offset_of__entityState_7() { return static_cast<int32_t>(offsetof(Entity_t3391956725, ____entityState_7)); }
	inline int32_t get__entityState_7() const { return ____entityState_7; }
	inline int32_t* get_address_of__entityState_7() { return &____entityState_7; }
	inline void set__entityState_7(int32_t value)
	{
		____entityState_7 = value;
	}

	inline static int32_t get_offset_of__fallback_8() { return static_cast<int32_t>(offsetof(Entity_t3391956725, ____fallback_8)); }
	inline int32_t get__fallback_8() const { return ____fallback_8; }
	inline int32_t* get_address_of__fallback_8() { return &____fallback_8; }
	inline void set__fallback_8(int32_t value)
	{
		____fallback_8 = value;
	}

	inline static int32_t get_offset_of__entityStateAnimation_9() { return static_cast<int32_t>(offsetof(Entity_t3391956725, ____entityStateAnimation_9)); }
	inline List_1_t3967944201 * get__entityStateAnimation_9() const { return ____entityStateAnimation_9; }
	inline List_1_t3967944201 ** get_address_of__entityStateAnimation_9() { return &____entityStateAnimation_9; }
	inline void set__entityStateAnimation_9(List_1_t3967944201 * value)
	{
		____entityStateAnimation_9 = value;
		Il2CppCodeGenWriteBarrier((&____entityStateAnimation_9), value);
	}

	inline static int32_t get_offset_of__quickLookup_10() { return static_cast<int32_t>(offsetof(Entity_t3391956725, ____quickLookup_10)); }
	inline Dictionary_2_t26093461 * get__quickLookup_10() const { return ____quickLookup_10; }
	inline Dictionary_2_t26093461 ** get_address_of__quickLookup_10() { return &____quickLookup_10; }
	inline void set__quickLookup_10(Dictionary_2_t26093461 * value)
	{
		____quickLookup_10 = value;
		Il2CppCodeGenWriteBarrier((&____quickLookup_10), value);
	}

	inline static int32_t get_offset_of__animation_11() { return static_cast<int32_t>(offsetof(Entity_t3391956725, ____animation_11)); }
	inline Animator_t434523843 * get__animation_11() const { return ____animation_11; }
	inline Animator_t434523843 ** get_address_of__animation_11() { return &____animation_11; }
	inline void set__animation_11(Animator_t434523843 * value)
	{
		____animation_11 = value;
		Il2CppCodeGenWriteBarrier((&____animation_11), value);
	}

	inline static int32_t get_offset_of__spriteRenderer_12() { return static_cast<int32_t>(offsetof(Entity_t3391956725, ____spriteRenderer_12)); }
	inline SpriteRenderer_t3235626157 * get__spriteRenderer_12() const { return ____spriteRenderer_12; }
	inline SpriteRenderer_t3235626157 ** get_address_of__spriteRenderer_12() { return &____spriteRenderer_12; }
	inline void set__spriteRenderer_12(SpriteRenderer_t3235626157 * value)
	{
		____spriteRenderer_12 = value;
		Il2CppCodeGenWriteBarrier((&____spriteRenderer_12), value);
	}

	inline static int32_t get_offset_of__flipped_13() { return static_cast<int32_t>(offsetof(Entity_t3391956725, ____flipped_13)); }
	inline bool get__flipped_13() const { return ____flipped_13; }
	inline bool* get_address_of__flipped_13() { return &____flipped_13; }
	inline void set__flipped_13(bool value)
	{
		____flipped_13 = value;
	}

	inline static int32_t get_offset_of__attackPositions_14() { return static_cast<int32_t>(offsetof(Entity_t3391956725, ____attackPositions_14)); }
	inline TransformU5BU5D_t807237628* get__attackPositions_14() const { return ____attackPositions_14; }
	inline TransformU5BU5D_t807237628** get_address_of__attackPositions_14() { return &____attackPositions_14; }
	inline void set__attackPositions_14(TransformU5BU5D_t807237628* value)
	{
		____attackPositions_14 = value;
		Il2CppCodeGenWriteBarrier((&____attackPositions_14), value);
	}

	inline static int32_t get_offset_of__currentAttackDelay_15() { return static_cast<int32_t>(offsetof(Entity_t3391956725, ____currentAttackDelay_15)); }
	inline float get__currentAttackDelay_15() const { return ____currentAttackDelay_15; }
	inline float* get_address_of__currentAttackDelay_15() { return &____currentAttackDelay_15; }
	inline void set__currentAttackDelay_15(float value)
	{
		____currentAttackDelay_15 = value;
	}

	inline static int32_t get_offset_of__direction_16() { return static_cast<int32_t>(offsetof(Entity_t3391956725, ____direction_16)); }
	inline int32_t get__direction_16() const { return ____direction_16; }
	inline int32_t* get_address_of__direction_16() { return &____direction_16; }
	inline void set__direction_16(int32_t value)
	{
		____direction_16 = value;
	}

	inline static int32_t get_offset_of__currentWeapon_17() { return static_cast<int32_t>(offsetof(Entity_t3391956725, ____currentWeapon_17)); }
	inline Weapon_t4063826929 * get__currentWeapon_17() const { return ____currentWeapon_17; }
	inline Weapon_t4063826929 ** get_address_of__currentWeapon_17() { return &____currentWeapon_17; }
	inline void set__currentWeapon_17(Weapon_t4063826929 * value)
	{
		____currentWeapon_17 = value;
		Il2CppCodeGenWriteBarrier((&____currentWeapon_17), value);
	}

	inline static int32_t get_offset_of__health_18() { return static_cast<int32_t>(offsetof(Entity_t3391956725, ____health_18)); }
	inline float get__health_18() const { return ____health_18; }
	inline float* get_address_of__health_18() { return &____health_18; }
	inline void set__health_18(float value)
	{
		____health_18 = value;
	}

	inline static int32_t get_offset_of__onDie_19() { return static_cast<int32_t>(offsetof(Entity_t3391956725, ____onDie_19)); }
	inline OnDie_t3469385283 * get__onDie_19() const { return ____onDie_19; }
	inline OnDie_t3469385283 ** get_address_of__onDie_19() { return &____onDie_19; }
	inline void set__onDie_19(OnDie_t3469385283 * value)
	{
		____onDie_19 = value;
		Il2CppCodeGenWriteBarrier((&____onDie_19), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENTITY_T3391956725_H
#ifndef PREFABRESOURCE_T3713134029_H
#define PREFABRESOURCE_T3713134029_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PrefabResource
struct  PrefabResource_t3713134029  : public MonoBehaviour_t3962482529
{
public:
	// DeathParticle PrefabResource::deathParticle
	DeathParticle_t1563849671 * ___deathParticle_2;
	// Weapon PrefabResource::stick
	Weapon_t4063826929 * ___stick_3;
	// Weapon PrefabResource::mace
	Weapon_t4063826929 * ___mace_4;
	// Weapon PrefabResource::sword
	Weapon_t4063826929 * ___sword_5;
	// Entity PrefabResource::bat
	Entity_t3391956725 * ___bat_6;
	// Entity PrefabResource::skelly
	Entity_t3391956725 * ___skelly_7;
	// HealthPickup PrefabResource::heart
	HealthPickup_t2182775939 * ___heart_8;

public:
	inline static int32_t get_offset_of_deathParticle_2() { return static_cast<int32_t>(offsetof(PrefabResource_t3713134029, ___deathParticle_2)); }
	inline DeathParticle_t1563849671 * get_deathParticle_2() const { return ___deathParticle_2; }
	inline DeathParticle_t1563849671 ** get_address_of_deathParticle_2() { return &___deathParticle_2; }
	inline void set_deathParticle_2(DeathParticle_t1563849671 * value)
	{
		___deathParticle_2 = value;
		Il2CppCodeGenWriteBarrier((&___deathParticle_2), value);
	}

	inline static int32_t get_offset_of_stick_3() { return static_cast<int32_t>(offsetof(PrefabResource_t3713134029, ___stick_3)); }
	inline Weapon_t4063826929 * get_stick_3() const { return ___stick_3; }
	inline Weapon_t4063826929 ** get_address_of_stick_3() { return &___stick_3; }
	inline void set_stick_3(Weapon_t4063826929 * value)
	{
		___stick_3 = value;
		Il2CppCodeGenWriteBarrier((&___stick_3), value);
	}

	inline static int32_t get_offset_of_mace_4() { return static_cast<int32_t>(offsetof(PrefabResource_t3713134029, ___mace_4)); }
	inline Weapon_t4063826929 * get_mace_4() const { return ___mace_4; }
	inline Weapon_t4063826929 ** get_address_of_mace_4() { return &___mace_4; }
	inline void set_mace_4(Weapon_t4063826929 * value)
	{
		___mace_4 = value;
		Il2CppCodeGenWriteBarrier((&___mace_4), value);
	}

	inline static int32_t get_offset_of_sword_5() { return static_cast<int32_t>(offsetof(PrefabResource_t3713134029, ___sword_5)); }
	inline Weapon_t4063826929 * get_sword_5() const { return ___sword_5; }
	inline Weapon_t4063826929 ** get_address_of_sword_5() { return &___sword_5; }
	inline void set_sword_5(Weapon_t4063826929 * value)
	{
		___sword_5 = value;
		Il2CppCodeGenWriteBarrier((&___sword_5), value);
	}

	inline static int32_t get_offset_of_bat_6() { return static_cast<int32_t>(offsetof(PrefabResource_t3713134029, ___bat_6)); }
	inline Entity_t3391956725 * get_bat_6() const { return ___bat_6; }
	inline Entity_t3391956725 ** get_address_of_bat_6() { return &___bat_6; }
	inline void set_bat_6(Entity_t3391956725 * value)
	{
		___bat_6 = value;
		Il2CppCodeGenWriteBarrier((&___bat_6), value);
	}

	inline static int32_t get_offset_of_skelly_7() { return static_cast<int32_t>(offsetof(PrefabResource_t3713134029, ___skelly_7)); }
	inline Entity_t3391956725 * get_skelly_7() const { return ___skelly_7; }
	inline Entity_t3391956725 ** get_address_of_skelly_7() { return &___skelly_7; }
	inline void set_skelly_7(Entity_t3391956725 * value)
	{
		___skelly_7 = value;
		Il2CppCodeGenWriteBarrier((&___skelly_7), value);
	}

	inline static int32_t get_offset_of_heart_8() { return static_cast<int32_t>(offsetof(PrefabResource_t3713134029, ___heart_8)); }
	inline HealthPickup_t2182775939 * get_heart_8() const { return ___heart_8; }
	inline HealthPickup_t2182775939 ** get_address_of_heart_8() { return &___heart_8; }
	inline void set_heart_8(HealthPickup_t2182775939 * value)
	{
		___heart_8 = value;
		Il2CppCodeGenWriteBarrier((&___heart_8), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PREFABRESOURCE_T3713134029_H
#ifndef UIBEHAVIOUR_T3495933518_H
#define UIBEHAVIOUR_T3495933518_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.EventSystems.UIBehaviour
struct  UIBehaviour_t3495933518  : public MonoBehaviour_t3962482529
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UIBEHAVIOUR_T3495933518_H
#ifndef MUSICMANAGER_T3024629483_H
#define MUSICMANAGER_T3024629483_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MusicManager
struct  MusicManager_t3024629483  : public MonoBehaviour_t3962482529
{
public:
	// UnityEngine.AudioClip[] MusicManager::_musicSequence
	AudioClipU5BU5D_t143221404* ____musicSequence_2;
	// UnityEngine.AudioSource MusicManager::_audioSource
	AudioSource_t3935305588 * ____audioSource_3;

public:
	inline static int32_t get_offset_of__musicSequence_2() { return static_cast<int32_t>(offsetof(MusicManager_t3024629483, ____musicSequence_2)); }
	inline AudioClipU5BU5D_t143221404* get__musicSequence_2() const { return ____musicSequence_2; }
	inline AudioClipU5BU5D_t143221404** get_address_of__musicSequence_2() { return &____musicSequence_2; }
	inline void set__musicSequence_2(AudioClipU5BU5D_t143221404* value)
	{
		____musicSequence_2 = value;
		Il2CppCodeGenWriteBarrier((&____musicSequence_2), value);
	}

	inline static int32_t get_offset_of__audioSource_3() { return static_cast<int32_t>(offsetof(MusicManager_t3024629483, ____audioSource_3)); }
	inline AudioSource_t3935305588 * get__audioSource_3() const { return ____audioSource_3; }
	inline AudioSource_t3935305588 ** get_address_of__audioSource_3() { return &____audioSource_3; }
	inline void set__audioSource_3(AudioSource_t3935305588 * value)
	{
		____audioSource_3 = value;
		Il2CppCodeGenWriteBarrier((&____audioSource_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MUSICMANAGER_T3024629483_H
#ifndef DEADSCREEN_T3234016418_H
#define DEADSCREEN_T3234016418_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// DeadScreen
struct  DeadScreen_t3234016418  : public MonoBehaviour_t3962482529
{
public:
	// UnityEngine.UI.Text DeadScreen::_gameOverText
	Text_t1901882714 * ____gameOverText_2;
	// UnityEngine.UI.Text DeadScreen::_restartText
	Text_t1901882714 * ____restartText_3;
	// UnityEngine.UI.Image DeadScreen::_backing
	Image_t2670269651 * ____backing_4;
	// System.Boolean DeadScreen::_acceptInput
	bool ____acceptInput_5;

public:
	inline static int32_t get_offset_of__gameOverText_2() { return static_cast<int32_t>(offsetof(DeadScreen_t3234016418, ____gameOverText_2)); }
	inline Text_t1901882714 * get__gameOverText_2() const { return ____gameOverText_2; }
	inline Text_t1901882714 ** get_address_of__gameOverText_2() { return &____gameOverText_2; }
	inline void set__gameOverText_2(Text_t1901882714 * value)
	{
		____gameOverText_2 = value;
		Il2CppCodeGenWriteBarrier((&____gameOverText_2), value);
	}

	inline static int32_t get_offset_of__restartText_3() { return static_cast<int32_t>(offsetof(DeadScreen_t3234016418, ____restartText_3)); }
	inline Text_t1901882714 * get__restartText_3() const { return ____restartText_3; }
	inline Text_t1901882714 ** get_address_of__restartText_3() { return &____restartText_3; }
	inline void set__restartText_3(Text_t1901882714 * value)
	{
		____restartText_3 = value;
		Il2CppCodeGenWriteBarrier((&____restartText_3), value);
	}

	inline static int32_t get_offset_of__backing_4() { return static_cast<int32_t>(offsetof(DeadScreen_t3234016418, ____backing_4)); }
	inline Image_t2670269651 * get__backing_4() const { return ____backing_4; }
	inline Image_t2670269651 ** get_address_of__backing_4() { return &____backing_4; }
	inline void set__backing_4(Image_t2670269651 * value)
	{
		____backing_4 = value;
		Il2CppCodeGenWriteBarrier((&____backing_4), value);
	}

	inline static int32_t get_offset_of__acceptInput_5() { return static_cast<int32_t>(offsetof(DeadScreen_t3234016418, ____acceptInput_5)); }
	inline bool get__acceptInput_5() const { return ____acceptInput_5; }
	inline bool* get_address_of__acceptInput_5() { return &____acceptInput_5; }
	inline void set__acceptInput_5(bool value)
	{
		____acceptInput_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DEADSCREEN_T3234016418_H
#ifndef DEATHPARTICLE_T1563849671_H
#define DEATHPARTICLE_T1563849671_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// DeathParticle
struct  DeathParticle_t1563849671  : public MonoBehaviour_t3962482529
{
public:
	// UnityEngine.GameObject DeathParticle::_particle
	GameObject_t1113636619 * ____particle_2;

public:
	inline static int32_t get_offset_of__particle_2() { return static_cast<int32_t>(offsetof(DeathParticle_t1563849671, ____particle_2)); }
	inline GameObject_t1113636619 * get__particle_2() const { return ____particle_2; }
	inline GameObject_t1113636619 ** get_address_of__particle_2() { return &____particle_2; }
	inline void set__particle_2(GameObject_t1113636619 * value)
	{
		____particle_2 = value;
		Il2CppCodeGenWriteBarrier((&____particle_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DEATHPARTICLE_T1563849671_H
#ifndef LEVEL_T2237665516_H
#define LEVEL_T2237665516_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Level
struct  Level_t2237665516  : public MonoBehaviour_t3962482529
{
public:
	// DirectionToStartMapping[] Level::_startPositions
	DirectionToStartMappingU5BU5D_t4001959641* ____startPositions_2;
	// UnityEngine.GameObject[] Level::_itemSpawnLocations
	GameObjectU5BU5D_t3328599146* ____itemSpawnLocations_3;
	// System.Int32 Level::_lastItemSpawnLocationIndex
	int32_t ____lastItemSpawnLocationIndex_4;
	// UnityEngine.GameObject[] Level::_enemySpawnLocations
	GameObjectU5BU5D_t3328599146* ____enemySpawnLocations_5;
	// System.Int32 Level::_lastEnemySpawnLocationIndex
	int32_t ____lastEnemySpawnLocationIndex_6;

public:
	inline static int32_t get_offset_of__startPositions_2() { return static_cast<int32_t>(offsetof(Level_t2237665516, ____startPositions_2)); }
	inline DirectionToStartMappingU5BU5D_t4001959641* get__startPositions_2() const { return ____startPositions_2; }
	inline DirectionToStartMappingU5BU5D_t4001959641** get_address_of__startPositions_2() { return &____startPositions_2; }
	inline void set__startPositions_2(DirectionToStartMappingU5BU5D_t4001959641* value)
	{
		____startPositions_2 = value;
		Il2CppCodeGenWriteBarrier((&____startPositions_2), value);
	}

	inline static int32_t get_offset_of__itemSpawnLocations_3() { return static_cast<int32_t>(offsetof(Level_t2237665516, ____itemSpawnLocations_3)); }
	inline GameObjectU5BU5D_t3328599146* get__itemSpawnLocations_3() const { return ____itemSpawnLocations_3; }
	inline GameObjectU5BU5D_t3328599146** get_address_of__itemSpawnLocations_3() { return &____itemSpawnLocations_3; }
	inline void set__itemSpawnLocations_3(GameObjectU5BU5D_t3328599146* value)
	{
		____itemSpawnLocations_3 = value;
		Il2CppCodeGenWriteBarrier((&____itemSpawnLocations_3), value);
	}

	inline static int32_t get_offset_of__lastItemSpawnLocationIndex_4() { return static_cast<int32_t>(offsetof(Level_t2237665516, ____lastItemSpawnLocationIndex_4)); }
	inline int32_t get__lastItemSpawnLocationIndex_4() const { return ____lastItemSpawnLocationIndex_4; }
	inline int32_t* get_address_of__lastItemSpawnLocationIndex_4() { return &____lastItemSpawnLocationIndex_4; }
	inline void set__lastItemSpawnLocationIndex_4(int32_t value)
	{
		____lastItemSpawnLocationIndex_4 = value;
	}

	inline static int32_t get_offset_of__enemySpawnLocations_5() { return static_cast<int32_t>(offsetof(Level_t2237665516, ____enemySpawnLocations_5)); }
	inline GameObjectU5BU5D_t3328599146* get__enemySpawnLocations_5() const { return ____enemySpawnLocations_5; }
	inline GameObjectU5BU5D_t3328599146** get_address_of__enemySpawnLocations_5() { return &____enemySpawnLocations_5; }
	inline void set__enemySpawnLocations_5(GameObjectU5BU5D_t3328599146* value)
	{
		____enemySpawnLocations_5 = value;
		Il2CppCodeGenWriteBarrier((&____enemySpawnLocations_5), value);
	}

	inline static int32_t get_offset_of__lastEnemySpawnLocationIndex_6() { return static_cast<int32_t>(offsetof(Level_t2237665516, ____lastEnemySpawnLocationIndex_6)); }
	inline int32_t get__lastEnemySpawnLocationIndex_6() const { return ____lastEnemySpawnLocationIndex_6; }
	inline int32_t* get_address_of__lastEnemySpawnLocationIndex_6() { return &____lastEnemySpawnLocationIndex_6; }
	inline void set__lastEnemySpawnLocationIndex_6(int32_t value)
	{
		____lastEnemySpawnLocationIndex_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LEVEL_T2237665516_H
#ifndef PLAYERHEALTHBAR_T2127847235_H
#define PLAYERHEALTHBAR_T2127847235_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayerHealthBar
struct  PlayerHealthBar_t2127847235  : public MonoBehaviour_t3962482529
{
public:
	// UnityEngine.UI.Image PlayerHealthBar::_image
	Image_t2670269651 * ____image_2;
	// Player PlayerHealthBar::_player
	Player_t3266647312 * ____player_3;

public:
	inline static int32_t get_offset_of__image_2() { return static_cast<int32_t>(offsetof(PlayerHealthBar_t2127847235, ____image_2)); }
	inline Image_t2670269651 * get__image_2() const { return ____image_2; }
	inline Image_t2670269651 ** get_address_of__image_2() { return &____image_2; }
	inline void set__image_2(Image_t2670269651 * value)
	{
		____image_2 = value;
		Il2CppCodeGenWriteBarrier((&____image_2), value);
	}

	inline static int32_t get_offset_of__player_3() { return static_cast<int32_t>(offsetof(PlayerHealthBar_t2127847235, ____player_3)); }
	inline Player_t3266647312 * get__player_3() const { return ____player_3; }
	inline Player_t3266647312 ** get_address_of__player_3() { return &____player_3; }
	inline void set__player_3(Player_t3266647312 * value)
	{
		____player_3 = value;
		Il2CppCodeGenWriteBarrier((&____player_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PLAYERHEALTHBAR_T2127847235_H
#ifndef PARTICLE_T3168132017_H
#define PARTICLE_T3168132017_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Particle
struct  Particle_t3168132017  : public MonoBehaviour_t3962482529
{
public:
	// System.Single Particle::_life
	float ____life_2;
	// UnityEngine.SpriteRenderer Particle::_spriteRenderer
	SpriteRenderer_t3235626157 * ____spriteRenderer_3;

public:
	inline static int32_t get_offset_of__life_2() { return static_cast<int32_t>(offsetof(Particle_t3168132017, ____life_2)); }
	inline float get__life_2() const { return ____life_2; }
	inline float* get_address_of__life_2() { return &____life_2; }
	inline void set__life_2(float value)
	{
		____life_2 = value;
	}

	inline static int32_t get_offset_of__spriteRenderer_3() { return static_cast<int32_t>(offsetof(Particle_t3168132017, ____spriteRenderer_3)); }
	inline SpriteRenderer_t3235626157 * get__spriteRenderer_3() const { return ____spriteRenderer_3; }
	inline SpriteRenderer_t3235626157 ** get_address_of__spriteRenderer_3() { return &____spriteRenderer_3; }
	inline void set__spriteRenderer_3(SpriteRenderer_t3235626157 * value)
	{
		____spriteRenderer_3 = value;
		Il2CppCodeGenWriteBarrier((&____spriteRenderer_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PARTICLE_T3168132017_H
#ifndef INTROSEQUENCE_T4248026603_H
#define INTROSEQUENCE_T4248026603_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// IntroSequence
struct  IntroSequence_t4248026603  : public MonoBehaviour_t3962482529
{
public:
	// Player IntroSequence::_player
	Player_t3266647312 * ____player_2;
	// UnityEngine.GameObject IntroSequence::_walkInTarget
	GameObject_t1113636619 * ____walkInTarget_3;
	// UnityEngine.GameObject IntroSequence::_walkOutTarget
	GameObject_t1113636619 * ____walkOutTarget_4;
	// UnityEngine.UI.Button IntroSequence::_playButton
	Button_t4055032469 * ____playButton_5;
	// System.Boolean IntroSequence::_clickedPlay
	bool ____clickedPlay_6;
	// System.Single IntroSequence::_playButtonY
	float ____playButtonY_7;
	// UnityEngine.UI.Text IntroSequence::_title
	Text_t1901882714 * ____title_8;
	// UnityEngine.UI.Text IntroSequence::_subtitle
	Text_t1901882714 * ____subtitle_9;
	// UnityEngine.UI.Image IntroSequence::_health
	Image_t2670269651 * ____health_10;

public:
	inline static int32_t get_offset_of__player_2() { return static_cast<int32_t>(offsetof(IntroSequence_t4248026603, ____player_2)); }
	inline Player_t3266647312 * get__player_2() const { return ____player_2; }
	inline Player_t3266647312 ** get_address_of__player_2() { return &____player_2; }
	inline void set__player_2(Player_t3266647312 * value)
	{
		____player_2 = value;
		Il2CppCodeGenWriteBarrier((&____player_2), value);
	}

	inline static int32_t get_offset_of__walkInTarget_3() { return static_cast<int32_t>(offsetof(IntroSequence_t4248026603, ____walkInTarget_3)); }
	inline GameObject_t1113636619 * get__walkInTarget_3() const { return ____walkInTarget_3; }
	inline GameObject_t1113636619 ** get_address_of__walkInTarget_3() { return &____walkInTarget_3; }
	inline void set__walkInTarget_3(GameObject_t1113636619 * value)
	{
		____walkInTarget_3 = value;
		Il2CppCodeGenWriteBarrier((&____walkInTarget_3), value);
	}

	inline static int32_t get_offset_of__walkOutTarget_4() { return static_cast<int32_t>(offsetof(IntroSequence_t4248026603, ____walkOutTarget_4)); }
	inline GameObject_t1113636619 * get__walkOutTarget_4() const { return ____walkOutTarget_4; }
	inline GameObject_t1113636619 ** get_address_of__walkOutTarget_4() { return &____walkOutTarget_4; }
	inline void set__walkOutTarget_4(GameObject_t1113636619 * value)
	{
		____walkOutTarget_4 = value;
		Il2CppCodeGenWriteBarrier((&____walkOutTarget_4), value);
	}

	inline static int32_t get_offset_of__playButton_5() { return static_cast<int32_t>(offsetof(IntroSequence_t4248026603, ____playButton_5)); }
	inline Button_t4055032469 * get__playButton_5() const { return ____playButton_5; }
	inline Button_t4055032469 ** get_address_of__playButton_5() { return &____playButton_5; }
	inline void set__playButton_5(Button_t4055032469 * value)
	{
		____playButton_5 = value;
		Il2CppCodeGenWriteBarrier((&____playButton_5), value);
	}

	inline static int32_t get_offset_of__clickedPlay_6() { return static_cast<int32_t>(offsetof(IntroSequence_t4248026603, ____clickedPlay_6)); }
	inline bool get__clickedPlay_6() const { return ____clickedPlay_6; }
	inline bool* get_address_of__clickedPlay_6() { return &____clickedPlay_6; }
	inline void set__clickedPlay_6(bool value)
	{
		____clickedPlay_6 = value;
	}

	inline static int32_t get_offset_of__playButtonY_7() { return static_cast<int32_t>(offsetof(IntroSequence_t4248026603, ____playButtonY_7)); }
	inline float get__playButtonY_7() const { return ____playButtonY_7; }
	inline float* get_address_of__playButtonY_7() { return &____playButtonY_7; }
	inline void set__playButtonY_7(float value)
	{
		____playButtonY_7 = value;
	}

	inline static int32_t get_offset_of__title_8() { return static_cast<int32_t>(offsetof(IntroSequence_t4248026603, ____title_8)); }
	inline Text_t1901882714 * get__title_8() const { return ____title_8; }
	inline Text_t1901882714 ** get_address_of__title_8() { return &____title_8; }
	inline void set__title_8(Text_t1901882714 * value)
	{
		____title_8 = value;
		Il2CppCodeGenWriteBarrier((&____title_8), value);
	}

	inline static int32_t get_offset_of__subtitle_9() { return static_cast<int32_t>(offsetof(IntroSequence_t4248026603, ____subtitle_9)); }
	inline Text_t1901882714 * get__subtitle_9() const { return ____subtitle_9; }
	inline Text_t1901882714 ** get_address_of__subtitle_9() { return &____subtitle_9; }
	inline void set__subtitle_9(Text_t1901882714 * value)
	{
		____subtitle_9 = value;
		Il2CppCodeGenWriteBarrier((&____subtitle_9), value);
	}

	inline static int32_t get_offset_of__health_10() { return static_cast<int32_t>(offsetof(IntroSequence_t4248026603, ____health_10)); }
	inline Image_t2670269651 * get__health_10() const { return ____health_10; }
	inline Image_t2670269651 ** get_address_of__health_10() { return &____health_10; }
	inline void set__health_10(Image_t2670269651 * value)
	{
		____health_10 = value;
		Il2CppCodeGenWriteBarrier((&____health_10), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INTROSEQUENCE_T4248026603_H
#ifndef DOOR_T3715198229_H
#define DOOR_T3715198229_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Door
struct  Door_t3715198229  : public MonoBehaviour_t3962482529
{
public:
	// DoorDirection Door::_doorDirection
	int32_t ____doorDirection_2;
	// System.Boolean Door::_prompted
	bool ____prompted_3;

public:
	inline static int32_t get_offset_of__doorDirection_2() { return static_cast<int32_t>(offsetof(Door_t3715198229, ____doorDirection_2)); }
	inline int32_t get__doorDirection_2() const { return ____doorDirection_2; }
	inline int32_t* get_address_of__doorDirection_2() { return &____doorDirection_2; }
	inline void set__doorDirection_2(int32_t value)
	{
		____doorDirection_2 = value;
	}

	inline static int32_t get_offset_of__prompted_3() { return static_cast<int32_t>(offsetof(Door_t3715198229, ____prompted_3)); }
	inline bool get__prompted_3() const { return ____prompted_3; }
	inline bool* get_address_of__prompted_3() { return &____prompted_3; }
	inline void set__prompted_3(bool value)
	{
		____prompted_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DOOR_T3715198229_H
#ifndef MESSAGEPOPUP_T1375170899_H
#define MESSAGEPOPUP_T1375170899_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MessagePopup
struct  MessagePopup_t1375170899  : public MonoBehaviour_t3962482529
{
public:
	// UnityEngine.UI.Image MessagePopup::_textBacking
	Image_t2670269651 * ____textBacking_2;
	// UnityEngine.UI.Text MessagePopup::_message
	Text_t1901882714 * ____message_3;
	// System.Boolean MessagePopup::_ready
	bool ____ready_4;
	// System.Collections.Generic.Queue`1<Message> MessagePopup::_messages
	Queue_1_t4105026876 * ____messages_5;

public:
	inline static int32_t get_offset_of__textBacking_2() { return static_cast<int32_t>(offsetof(MessagePopup_t1375170899, ____textBacking_2)); }
	inline Image_t2670269651 * get__textBacking_2() const { return ____textBacking_2; }
	inline Image_t2670269651 ** get_address_of__textBacking_2() { return &____textBacking_2; }
	inline void set__textBacking_2(Image_t2670269651 * value)
	{
		____textBacking_2 = value;
		Il2CppCodeGenWriteBarrier((&____textBacking_2), value);
	}

	inline static int32_t get_offset_of__message_3() { return static_cast<int32_t>(offsetof(MessagePopup_t1375170899, ____message_3)); }
	inline Text_t1901882714 * get__message_3() const { return ____message_3; }
	inline Text_t1901882714 ** get_address_of__message_3() { return &____message_3; }
	inline void set__message_3(Text_t1901882714 * value)
	{
		____message_3 = value;
		Il2CppCodeGenWriteBarrier((&____message_3), value);
	}

	inline static int32_t get_offset_of__ready_4() { return static_cast<int32_t>(offsetof(MessagePopup_t1375170899, ____ready_4)); }
	inline bool get__ready_4() const { return ____ready_4; }
	inline bool* get_address_of__ready_4() { return &____ready_4; }
	inline void set__ready_4(bool value)
	{
		____ready_4 = value;
	}

	inline static int32_t get_offset_of__messages_5() { return static_cast<int32_t>(offsetof(MessagePopup_t1375170899, ____messages_5)); }
	inline Queue_1_t4105026876 * get__messages_5() const { return ____messages_5; }
	inline Queue_1_t4105026876 ** get_address_of__messages_5() { return &____messages_5; }
	inline void set__messages_5(Queue_1_t4105026876 * value)
	{
		____messages_5 = value;
		Il2CppCodeGenWriteBarrier((&____messages_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MESSAGEPOPUP_T1375170899_H
#ifndef LEVELLOADER_T3964987435_H
#define LEVELLOADER_T3964987435_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// LevelLoader
struct  LevelLoader_t3964987435  : public MonoBehaviour_t3962482529
{
public:
	// Level[] LevelLoader::_levels
	LevelU5BU5D_t979096037* ____levels_2;
	// Level LevelLoader::_bossLevel
	Level_t2237665516 * ____bossLevel_3;
	// System.Int32 LevelLoader::_levelsCompleted
	int32_t ____levelsCompleted_4;

public:
	inline static int32_t get_offset_of__levels_2() { return static_cast<int32_t>(offsetof(LevelLoader_t3964987435, ____levels_2)); }
	inline LevelU5BU5D_t979096037* get__levels_2() const { return ____levels_2; }
	inline LevelU5BU5D_t979096037** get_address_of__levels_2() { return &____levels_2; }
	inline void set__levels_2(LevelU5BU5D_t979096037* value)
	{
		____levels_2 = value;
		Il2CppCodeGenWriteBarrier((&____levels_2), value);
	}

	inline static int32_t get_offset_of__bossLevel_3() { return static_cast<int32_t>(offsetof(LevelLoader_t3964987435, ____bossLevel_3)); }
	inline Level_t2237665516 * get__bossLevel_3() const { return ____bossLevel_3; }
	inline Level_t2237665516 ** get_address_of__bossLevel_3() { return &____bossLevel_3; }
	inline void set__bossLevel_3(Level_t2237665516 * value)
	{
		____bossLevel_3 = value;
		Il2CppCodeGenWriteBarrier((&____bossLevel_3), value);
	}

	inline static int32_t get_offset_of__levelsCompleted_4() { return static_cast<int32_t>(offsetof(LevelLoader_t3964987435, ____levelsCompleted_4)); }
	inline int32_t get__levelsCompleted_4() const { return ____levelsCompleted_4; }
	inline int32_t* get_address_of__levelsCompleted_4() { return &____levelsCompleted_4; }
	inline void set__levelsCompleted_4(int32_t value)
	{
		____levelsCompleted_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LEVELLOADER_T3964987435_H
#ifndef PARTICLESPAWNER_T2092424095_H
#define PARTICLESPAWNER_T2092424095_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ParticleSpawner
struct  ParticleSpawner_t2092424095  : public MonoBehaviour_t3962482529
{
public:
	// UpParticle ParticleSpawner::_particle
	UpParticle_t1684764610 * ____particle_2;
	// System.Single ParticleSpawner::_delay
	float ____delay_3;

public:
	inline static int32_t get_offset_of__particle_2() { return static_cast<int32_t>(offsetof(ParticleSpawner_t2092424095, ____particle_2)); }
	inline UpParticle_t1684764610 * get__particle_2() const { return ____particle_2; }
	inline UpParticle_t1684764610 ** get_address_of__particle_2() { return &____particle_2; }
	inline void set__particle_2(UpParticle_t1684764610 * value)
	{
		____particle_2 = value;
		Il2CppCodeGenWriteBarrier((&____particle_2), value);
	}

	inline static int32_t get_offset_of__delay_3() { return static_cast<int32_t>(offsetof(ParticleSpawner_t2092424095, ____delay_3)); }
	inline float get__delay_3() const { return ____delay_3; }
	inline float* get_address_of__delay_3() { return &____delay_3; }
	inline void set__delay_3(float value)
	{
		____delay_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PARTICLESPAWNER_T2092424095_H
#ifndef SCREENSHAKE_T2214968455_H
#define SCREENSHAKE_T2214968455_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ScreenShake
struct  ScreenShake_t2214968455  : public MonoBehaviour_t3962482529
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SCREENSHAKE_T2214968455_H
#ifndef GAMEINIT_T412799062_H
#define GAMEINIT_T412799062_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GameInit
struct  GameInit_t412799062  : public MonoBehaviour_t3962482529
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GAMEINIT_T412799062_H
#ifndef UPPARTICLE_T1684764610_H
#define UPPARTICLE_T1684764610_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UpParticle
struct  UpParticle_t1684764610  : public MonoBehaviour_t3962482529
{
public:
	// System.Single UpParticle::_life
	float ____life_2;
	// System.Single UpParticle::_speed
	float ____speed_3;

public:
	inline static int32_t get_offset_of__life_2() { return static_cast<int32_t>(offsetof(UpParticle_t1684764610, ____life_2)); }
	inline float get__life_2() const { return ____life_2; }
	inline float* get_address_of__life_2() { return &____life_2; }
	inline void set__life_2(float value)
	{
		____life_2 = value;
	}

	inline static int32_t get_offset_of__speed_3() { return static_cast<int32_t>(offsetof(UpParticle_t1684764610, ____speed_3)); }
	inline float get__speed_3() const { return ____speed_3; }
	inline float* get_address_of__speed_3() { return &____speed_3; }
	inline void set__speed_3(float value)
	{
		____speed_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UPPARTICLE_T1684764610_H
#ifndef NODE_T2989995042_H
#define NODE_T2989995042_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Node
struct  Node_t2989995042  : public MonoBehaviour_t3962482529
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NODE_T2989995042_H
#ifndef CAMERAFOLLOW_T129522575_H
#define CAMERAFOLLOW_T129522575_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// CameraFollow
struct  CameraFollow_t129522575  : public MonoBehaviour_t3962482529
{
public:
	// UnityEngine.Transform CameraFollow::_toFollow
	Transform_t3600365921 * ____toFollow_2;
	// UnityEngine.Vector3 CameraFollow::_offset
	Vector3_t3722313464  ____offset_3;
	// System.Single CameraFollow::_speed
	float ____speed_4;

public:
	inline static int32_t get_offset_of__toFollow_2() { return static_cast<int32_t>(offsetof(CameraFollow_t129522575, ____toFollow_2)); }
	inline Transform_t3600365921 * get__toFollow_2() const { return ____toFollow_2; }
	inline Transform_t3600365921 ** get_address_of__toFollow_2() { return &____toFollow_2; }
	inline void set__toFollow_2(Transform_t3600365921 * value)
	{
		____toFollow_2 = value;
		Il2CppCodeGenWriteBarrier((&____toFollow_2), value);
	}

	inline static int32_t get_offset_of__offset_3() { return static_cast<int32_t>(offsetof(CameraFollow_t129522575, ____offset_3)); }
	inline Vector3_t3722313464  get__offset_3() const { return ____offset_3; }
	inline Vector3_t3722313464 * get_address_of__offset_3() { return &____offset_3; }
	inline void set__offset_3(Vector3_t3722313464  value)
	{
		____offset_3 = value;
	}

	inline static int32_t get_offset_of__speed_4() { return static_cast<int32_t>(offsetof(CameraFollow_t129522575, ____speed_4)); }
	inline float get__speed_4() const { return ____speed_4; }
	inline float* get_address_of__speed_4() { return &____speed_4; }
	inline void set__speed_4(float value)
	{
		____speed_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CAMERAFOLLOW_T129522575_H
#ifndef GRASS_T1377767949_H
#define GRASS_T1377767949_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Grass
struct  Grass_t1377767949  : public MonoBehaviour_t3962482529
{
public:
	// System.Single Grass::_angle
	float ____angle_2;

public:
	inline static int32_t get_offset_of__angle_2() { return static_cast<int32_t>(offsetof(Grass_t1377767949, ____angle_2)); }
	inline float get__angle_2() const { return ____angle_2; }
	inline float* get_address_of__angle_2() { return &____angle_2; }
	inline void set__angle_2(float value)
	{
		____angle_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GRASS_T1377767949_H
#ifndef HEALTHPICKUP_T2182775939_H
#define HEALTHPICKUP_T2182775939_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HealthPickup
struct  HealthPickup_t2182775939  : public MonoBehaviour_t3962482529
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // HEALTHPICKUP_T2182775939_H
#ifndef PLAYER_T3266647312_H
#define PLAYER_T3266647312_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Player
struct  Player_t3266647312  : public Entity_t3391956725
{
public:
	// UnityEngine.Rigidbody2D Player::_rigidbody2D
	Rigidbody2D_t939494601 * ____rigidbody2D_20;
	// System.Single Player::_speed
	float ____speed_21;
	// UnityEngine.Vector2 Player::_movement
	Vector2_t2156229523  ____movement_22;
	// System.Boolean Player::<InputEnabled>k__BackingField
	bool ___U3CInputEnabledU3Ek__BackingField_23;

public:
	inline static int32_t get_offset_of__rigidbody2D_20() { return static_cast<int32_t>(offsetof(Player_t3266647312, ____rigidbody2D_20)); }
	inline Rigidbody2D_t939494601 * get__rigidbody2D_20() const { return ____rigidbody2D_20; }
	inline Rigidbody2D_t939494601 ** get_address_of__rigidbody2D_20() { return &____rigidbody2D_20; }
	inline void set__rigidbody2D_20(Rigidbody2D_t939494601 * value)
	{
		____rigidbody2D_20 = value;
		Il2CppCodeGenWriteBarrier((&____rigidbody2D_20), value);
	}

	inline static int32_t get_offset_of__speed_21() { return static_cast<int32_t>(offsetof(Player_t3266647312, ____speed_21)); }
	inline float get__speed_21() const { return ____speed_21; }
	inline float* get_address_of__speed_21() { return &____speed_21; }
	inline void set__speed_21(float value)
	{
		____speed_21 = value;
	}

	inline static int32_t get_offset_of__movement_22() { return static_cast<int32_t>(offsetof(Player_t3266647312, ____movement_22)); }
	inline Vector2_t2156229523  get__movement_22() const { return ____movement_22; }
	inline Vector2_t2156229523 * get_address_of__movement_22() { return &____movement_22; }
	inline void set__movement_22(Vector2_t2156229523  value)
	{
		____movement_22 = value;
	}

	inline static int32_t get_offset_of_U3CInputEnabledU3Ek__BackingField_23() { return static_cast<int32_t>(offsetof(Player_t3266647312, ___U3CInputEnabledU3Ek__BackingField_23)); }
	inline bool get_U3CInputEnabledU3Ek__BackingField_23() const { return ___U3CInputEnabledU3Ek__BackingField_23; }
	inline bool* get_address_of_U3CInputEnabledU3Ek__BackingField_23() { return &___U3CInputEnabledU3Ek__BackingField_23; }
	inline void set_U3CInputEnabledU3Ek__BackingField_23(bool value)
	{
		___U3CInputEnabledU3Ek__BackingField_23 = value;
	}
};

struct Player_t3266647312_StaticFields
{
public:
	// Entity/OnDie Player::<>f__am$cache0
	OnDie_t3469385283 * ___U3CU3Ef__amU24cache0_24;

public:
	inline static int32_t get_offset_of_U3CU3Ef__amU24cache0_24() { return static_cast<int32_t>(offsetof(Player_t3266647312_StaticFields, ___U3CU3Ef__amU24cache0_24)); }
	inline OnDie_t3469385283 * get_U3CU3Ef__amU24cache0_24() const { return ___U3CU3Ef__amU24cache0_24; }
	inline OnDie_t3469385283 ** get_address_of_U3CU3Ef__amU24cache0_24() { return &___U3CU3Ef__amU24cache0_24; }
	inline void set_U3CU3Ef__amU24cache0_24(OnDie_t3469385283 * value)
	{
		___U3CU3Ef__amU24cache0_24 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__amU24cache0_24), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PLAYER_T3266647312_H
#ifndef GRAPHIC_T1660335611_H
#define GRAPHIC_T1660335611_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.Graphic
struct  Graphic_t1660335611  : public UIBehaviour_t3495933518
{
public:
	// UnityEngine.Material UnityEngine.UI.Graphic::m_Material
	Material_t340375123 * ___m_Material_4;
	// UnityEngine.Color UnityEngine.UI.Graphic::m_Color
	Color_t2555686324  ___m_Color_5;
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTarget
	bool ___m_RaycastTarget_6;
	// UnityEngine.RectTransform UnityEngine.UI.Graphic::m_RectTransform
	RectTransform_t3704657025 * ___m_RectTransform_7;
	// UnityEngine.CanvasRenderer UnityEngine.UI.Graphic::m_CanvasRenderer
	CanvasRenderer_t2598313366 * ___m_CanvasRenderer_8;
	// UnityEngine.Canvas UnityEngine.UI.Graphic::m_Canvas
	Canvas_t3310196443 * ___m_Canvas_9;
	// System.Boolean UnityEngine.UI.Graphic::m_VertsDirty
	bool ___m_VertsDirty_10;
	// System.Boolean UnityEngine.UI.Graphic::m_MaterialDirty
	bool ___m_MaterialDirty_11;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyLayoutCallback
	UnityAction_t3245792599 * ___m_OnDirtyLayoutCallback_12;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyVertsCallback
	UnityAction_t3245792599 * ___m_OnDirtyVertsCallback_13;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyMaterialCallback
	UnityAction_t3245792599 * ___m_OnDirtyMaterialCallback_14;
	// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween> UnityEngine.UI.Graphic::m_ColorTweenRunner
	TweenRunner_1_t3055525458 * ___m_ColorTweenRunner_17;
	// System.Boolean UnityEngine.UI.Graphic::<useLegacyMeshGeneration>k__BackingField
	bool ___U3CuseLegacyMeshGenerationU3Ek__BackingField_18;

public:
	inline static int32_t get_offset_of_m_Material_4() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___m_Material_4)); }
	inline Material_t340375123 * get_m_Material_4() const { return ___m_Material_4; }
	inline Material_t340375123 ** get_address_of_m_Material_4() { return &___m_Material_4; }
	inline void set_m_Material_4(Material_t340375123 * value)
	{
		___m_Material_4 = value;
		Il2CppCodeGenWriteBarrier((&___m_Material_4), value);
	}

	inline static int32_t get_offset_of_m_Color_5() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___m_Color_5)); }
	inline Color_t2555686324  get_m_Color_5() const { return ___m_Color_5; }
	inline Color_t2555686324 * get_address_of_m_Color_5() { return &___m_Color_5; }
	inline void set_m_Color_5(Color_t2555686324  value)
	{
		___m_Color_5 = value;
	}

	inline static int32_t get_offset_of_m_RaycastTarget_6() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___m_RaycastTarget_6)); }
	inline bool get_m_RaycastTarget_6() const { return ___m_RaycastTarget_6; }
	inline bool* get_address_of_m_RaycastTarget_6() { return &___m_RaycastTarget_6; }
	inline void set_m_RaycastTarget_6(bool value)
	{
		___m_RaycastTarget_6 = value;
	}

	inline static int32_t get_offset_of_m_RectTransform_7() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___m_RectTransform_7)); }
	inline RectTransform_t3704657025 * get_m_RectTransform_7() const { return ___m_RectTransform_7; }
	inline RectTransform_t3704657025 ** get_address_of_m_RectTransform_7() { return &___m_RectTransform_7; }
	inline void set_m_RectTransform_7(RectTransform_t3704657025 * value)
	{
		___m_RectTransform_7 = value;
		Il2CppCodeGenWriteBarrier((&___m_RectTransform_7), value);
	}

	inline static int32_t get_offset_of_m_CanvasRenderer_8() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___m_CanvasRenderer_8)); }
	inline CanvasRenderer_t2598313366 * get_m_CanvasRenderer_8() const { return ___m_CanvasRenderer_8; }
	inline CanvasRenderer_t2598313366 ** get_address_of_m_CanvasRenderer_8() { return &___m_CanvasRenderer_8; }
	inline void set_m_CanvasRenderer_8(CanvasRenderer_t2598313366 * value)
	{
		___m_CanvasRenderer_8 = value;
		Il2CppCodeGenWriteBarrier((&___m_CanvasRenderer_8), value);
	}

	inline static int32_t get_offset_of_m_Canvas_9() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___m_Canvas_9)); }
	inline Canvas_t3310196443 * get_m_Canvas_9() const { return ___m_Canvas_9; }
	inline Canvas_t3310196443 ** get_address_of_m_Canvas_9() { return &___m_Canvas_9; }
	inline void set_m_Canvas_9(Canvas_t3310196443 * value)
	{
		___m_Canvas_9 = value;
		Il2CppCodeGenWriteBarrier((&___m_Canvas_9), value);
	}

	inline static int32_t get_offset_of_m_VertsDirty_10() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___m_VertsDirty_10)); }
	inline bool get_m_VertsDirty_10() const { return ___m_VertsDirty_10; }
	inline bool* get_address_of_m_VertsDirty_10() { return &___m_VertsDirty_10; }
	inline void set_m_VertsDirty_10(bool value)
	{
		___m_VertsDirty_10 = value;
	}

	inline static int32_t get_offset_of_m_MaterialDirty_11() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___m_MaterialDirty_11)); }
	inline bool get_m_MaterialDirty_11() const { return ___m_MaterialDirty_11; }
	inline bool* get_address_of_m_MaterialDirty_11() { return &___m_MaterialDirty_11; }
	inline void set_m_MaterialDirty_11(bool value)
	{
		___m_MaterialDirty_11 = value;
	}

	inline static int32_t get_offset_of_m_OnDirtyLayoutCallback_12() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___m_OnDirtyLayoutCallback_12)); }
	inline UnityAction_t3245792599 * get_m_OnDirtyLayoutCallback_12() const { return ___m_OnDirtyLayoutCallback_12; }
	inline UnityAction_t3245792599 ** get_address_of_m_OnDirtyLayoutCallback_12() { return &___m_OnDirtyLayoutCallback_12; }
	inline void set_m_OnDirtyLayoutCallback_12(UnityAction_t3245792599 * value)
	{
		___m_OnDirtyLayoutCallback_12 = value;
		Il2CppCodeGenWriteBarrier((&___m_OnDirtyLayoutCallback_12), value);
	}

	inline static int32_t get_offset_of_m_OnDirtyVertsCallback_13() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___m_OnDirtyVertsCallback_13)); }
	inline UnityAction_t3245792599 * get_m_OnDirtyVertsCallback_13() const { return ___m_OnDirtyVertsCallback_13; }
	inline UnityAction_t3245792599 ** get_address_of_m_OnDirtyVertsCallback_13() { return &___m_OnDirtyVertsCallback_13; }
	inline void set_m_OnDirtyVertsCallback_13(UnityAction_t3245792599 * value)
	{
		___m_OnDirtyVertsCallback_13 = value;
		Il2CppCodeGenWriteBarrier((&___m_OnDirtyVertsCallback_13), value);
	}

	inline static int32_t get_offset_of_m_OnDirtyMaterialCallback_14() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___m_OnDirtyMaterialCallback_14)); }
	inline UnityAction_t3245792599 * get_m_OnDirtyMaterialCallback_14() const { return ___m_OnDirtyMaterialCallback_14; }
	inline UnityAction_t3245792599 ** get_address_of_m_OnDirtyMaterialCallback_14() { return &___m_OnDirtyMaterialCallback_14; }
	inline void set_m_OnDirtyMaterialCallback_14(UnityAction_t3245792599 * value)
	{
		___m_OnDirtyMaterialCallback_14 = value;
		Il2CppCodeGenWriteBarrier((&___m_OnDirtyMaterialCallback_14), value);
	}

	inline static int32_t get_offset_of_m_ColorTweenRunner_17() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___m_ColorTweenRunner_17)); }
	inline TweenRunner_1_t3055525458 * get_m_ColorTweenRunner_17() const { return ___m_ColorTweenRunner_17; }
	inline TweenRunner_1_t3055525458 ** get_address_of_m_ColorTweenRunner_17() { return &___m_ColorTweenRunner_17; }
	inline void set_m_ColorTweenRunner_17(TweenRunner_1_t3055525458 * value)
	{
		___m_ColorTweenRunner_17 = value;
		Il2CppCodeGenWriteBarrier((&___m_ColorTweenRunner_17), value);
	}

	inline static int32_t get_offset_of_U3CuseLegacyMeshGenerationU3Ek__BackingField_18() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___U3CuseLegacyMeshGenerationU3Ek__BackingField_18)); }
	inline bool get_U3CuseLegacyMeshGenerationU3Ek__BackingField_18() const { return ___U3CuseLegacyMeshGenerationU3Ek__BackingField_18; }
	inline bool* get_address_of_U3CuseLegacyMeshGenerationU3Ek__BackingField_18() { return &___U3CuseLegacyMeshGenerationU3Ek__BackingField_18; }
	inline void set_U3CuseLegacyMeshGenerationU3Ek__BackingField_18(bool value)
	{
		___U3CuseLegacyMeshGenerationU3Ek__BackingField_18 = value;
	}
};

struct Graphic_t1660335611_StaticFields
{
public:
	// UnityEngine.Material UnityEngine.UI.Graphic::s_DefaultUI
	Material_t340375123 * ___s_DefaultUI_2;
	// UnityEngine.Texture2D UnityEngine.UI.Graphic::s_WhiteTexture
	Texture2D_t3840446185 * ___s_WhiteTexture_3;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::s_Mesh
	Mesh_t3648964284 * ___s_Mesh_15;
	// UnityEngine.UI.VertexHelper UnityEngine.UI.Graphic::s_VertexHelper
	VertexHelper_t2453304189 * ___s_VertexHelper_16;

public:
	inline static int32_t get_offset_of_s_DefaultUI_2() { return static_cast<int32_t>(offsetof(Graphic_t1660335611_StaticFields, ___s_DefaultUI_2)); }
	inline Material_t340375123 * get_s_DefaultUI_2() const { return ___s_DefaultUI_2; }
	inline Material_t340375123 ** get_address_of_s_DefaultUI_2() { return &___s_DefaultUI_2; }
	inline void set_s_DefaultUI_2(Material_t340375123 * value)
	{
		___s_DefaultUI_2 = value;
		Il2CppCodeGenWriteBarrier((&___s_DefaultUI_2), value);
	}

	inline static int32_t get_offset_of_s_WhiteTexture_3() { return static_cast<int32_t>(offsetof(Graphic_t1660335611_StaticFields, ___s_WhiteTexture_3)); }
	inline Texture2D_t3840446185 * get_s_WhiteTexture_3() const { return ___s_WhiteTexture_3; }
	inline Texture2D_t3840446185 ** get_address_of_s_WhiteTexture_3() { return &___s_WhiteTexture_3; }
	inline void set_s_WhiteTexture_3(Texture2D_t3840446185 * value)
	{
		___s_WhiteTexture_3 = value;
		Il2CppCodeGenWriteBarrier((&___s_WhiteTexture_3), value);
	}

	inline static int32_t get_offset_of_s_Mesh_15() { return static_cast<int32_t>(offsetof(Graphic_t1660335611_StaticFields, ___s_Mesh_15)); }
	inline Mesh_t3648964284 * get_s_Mesh_15() const { return ___s_Mesh_15; }
	inline Mesh_t3648964284 ** get_address_of_s_Mesh_15() { return &___s_Mesh_15; }
	inline void set_s_Mesh_15(Mesh_t3648964284 * value)
	{
		___s_Mesh_15 = value;
		Il2CppCodeGenWriteBarrier((&___s_Mesh_15), value);
	}

	inline static int32_t get_offset_of_s_VertexHelper_16() { return static_cast<int32_t>(offsetof(Graphic_t1660335611_StaticFields, ___s_VertexHelper_16)); }
	inline VertexHelper_t2453304189 * get_s_VertexHelper_16() const { return ___s_VertexHelper_16; }
	inline VertexHelper_t2453304189 ** get_address_of_s_VertexHelper_16() { return &___s_VertexHelper_16; }
	inline void set_s_VertexHelper_16(VertexHelper_t2453304189 * value)
	{
		___s_VertexHelper_16 = value;
		Il2CppCodeGenWriteBarrier((&___s_VertexHelper_16), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GRAPHIC_T1660335611_H
#ifndef SELECTABLE_T3250028441_H
#define SELECTABLE_T3250028441_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.Selectable
struct  Selectable_t3250028441  : public UIBehaviour_t3495933518
{
public:
	// UnityEngine.UI.Navigation UnityEngine.UI.Selectable::m_Navigation
	Navigation_t3049316579  ___m_Navigation_3;
	// UnityEngine.UI.Selectable/Transition UnityEngine.UI.Selectable::m_Transition
	int32_t ___m_Transition_4;
	// UnityEngine.UI.ColorBlock UnityEngine.UI.Selectable::m_Colors
	ColorBlock_t2139031574  ___m_Colors_5;
	// UnityEngine.UI.SpriteState UnityEngine.UI.Selectable::m_SpriteState
	SpriteState_t1362986479  ___m_SpriteState_6;
	// UnityEngine.UI.AnimationTriggers UnityEngine.UI.Selectable::m_AnimationTriggers
	AnimationTriggers_t2532145056 * ___m_AnimationTriggers_7;
	// System.Boolean UnityEngine.UI.Selectable::m_Interactable
	bool ___m_Interactable_8;
	// UnityEngine.UI.Graphic UnityEngine.UI.Selectable::m_TargetGraphic
	Graphic_t1660335611 * ___m_TargetGraphic_9;
	// System.Boolean UnityEngine.UI.Selectable::m_GroupsAllowInteraction
	bool ___m_GroupsAllowInteraction_10;
	// UnityEngine.UI.Selectable/SelectionState UnityEngine.UI.Selectable::m_CurrentSelectionState
	int32_t ___m_CurrentSelectionState_11;
	// System.Boolean UnityEngine.UI.Selectable::<isPointerInside>k__BackingField
	bool ___U3CisPointerInsideU3Ek__BackingField_12;
	// System.Boolean UnityEngine.UI.Selectable::<isPointerDown>k__BackingField
	bool ___U3CisPointerDownU3Ek__BackingField_13;
	// System.Boolean UnityEngine.UI.Selectable::<hasSelection>k__BackingField
	bool ___U3ChasSelectionU3Ek__BackingField_14;
	// System.Collections.Generic.List`1<UnityEngine.CanvasGroup> UnityEngine.UI.Selectable::m_CanvasGroupCache
	List_1_t1260619206 * ___m_CanvasGroupCache_15;

public:
	inline static int32_t get_offset_of_m_Navigation_3() { return static_cast<int32_t>(offsetof(Selectable_t3250028441, ___m_Navigation_3)); }
	inline Navigation_t3049316579  get_m_Navigation_3() const { return ___m_Navigation_3; }
	inline Navigation_t3049316579 * get_address_of_m_Navigation_3() { return &___m_Navigation_3; }
	inline void set_m_Navigation_3(Navigation_t3049316579  value)
	{
		___m_Navigation_3 = value;
	}

	inline static int32_t get_offset_of_m_Transition_4() { return static_cast<int32_t>(offsetof(Selectable_t3250028441, ___m_Transition_4)); }
	inline int32_t get_m_Transition_4() const { return ___m_Transition_4; }
	inline int32_t* get_address_of_m_Transition_4() { return &___m_Transition_4; }
	inline void set_m_Transition_4(int32_t value)
	{
		___m_Transition_4 = value;
	}

	inline static int32_t get_offset_of_m_Colors_5() { return static_cast<int32_t>(offsetof(Selectable_t3250028441, ___m_Colors_5)); }
	inline ColorBlock_t2139031574  get_m_Colors_5() const { return ___m_Colors_5; }
	inline ColorBlock_t2139031574 * get_address_of_m_Colors_5() { return &___m_Colors_5; }
	inline void set_m_Colors_5(ColorBlock_t2139031574  value)
	{
		___m_Colors_5 = value;
	}

	inline static int32_t get_offset_of_m_SpriteState_6() { return static_cast<int32_t>(offsetof(Selectable_t3250028441, ___m_SpriteState_6)); }
	inline SpriteState_t1362986479  get_m_SpriteState_6() const { return ___m_SpriteState_6; }
	inline SpriteState_t1362986479 * get_address_of_m_SpriteState_6() { return &___m_SpriteState_6; }
	inline void set_m_SpriteState_6(SpriteState_t1362986479  value)
	{
		___m_SpriteState_6 = value;
	}

	inline static int32_t get_offset_of_m_AnimationTriggers_7() { return static_cast<int32_t>(offsetof(Selectable_t3250028441, ___m_AnimationTriggers_7)); }
	inline AnimationTriggers_t2532145056 * get_m_AnimationTriggers_7() const { return ___m_AnimationTriggers_7; }
	inline AnimationTriggers_t2532145056 ** get_address_of_m_AnimationTriggers_7() { return &___m_AnimationTriggers_7; }
	inline void set_m_AnimationTriggers_7(AnimationTriggers_t2532145056 * value)
	{
		___m_AnimationTriggers_7 = value;
		Il2CppCodeGenWriteBarrier((&___m_AnimationTriggers_7), value);
	}

	inline static int32_t get_offset_of_m_Interactable_8() { return static_cast<int32_t>(offsetof(Selectable_t3250028441, ___m_Interactable_8)); }
	inline bool get_m_Interactable_8() const { return ___m_Interactable_8; }
	inline bool* get_address_of_m_Interactable_8() { return &___m_Interactable_8; }
	inline void set_m_Interactable_8(bool value)
	{
		___m_Interactable_8 = value;
	}

	inline static int32_t get_offset_of_m_TargetGraphic_9() { return static_cast<int32_t>(offsetof(Selectable_t3250028441, ___m_TargetGraphic_9)); }
	inline Graphic_t1660335611 * get_m_TargetGraphic_9() const { return ___m_TargetGraphic_9; }
	inline Graphic_t1660335611 ** get_address_of_m_TargetGraphic_9() { return &___m_TargetGraphic_9; }
	inline void set_m_TargetGraphic_9(Graphic_t1660335611 * value)
	{
		___m_TargetGraphic_9 = value;
		Il2CppCodeGenWriteBarrier((&___m_TargetGraphic_9), value);
	}

	inline static int32_t get_offset_of_m_GroupsAllowInteraction_10() { return static_cast<int32_t>(offsetof(Selectable_t3250028441, ___m_GroupsAllowInteraction_10)); }
	inline bool get_m_GroupsAllowInteraction_10() const { return ___m_GroupsAllowInteraction_10; }
	inline bool* get_address_of_m_GroupsAllowInteraction_10() { return &___m_GroupsAllowInteraction_10; }
	inline void set_m_GroupsAllowInteraction_10(bool value)
	{
		___m_GroupsAllowInteraction_10 = value;
	}

	inline static int32_t get_offset_of_m_CurrentSelectionState_11() { return static_cast<int32_t>(offsetof(Selectable_t3250028441, ___m_CurrentSelectionState_11)); }
	inline int32_t get_m_CurrentSelectionState_11() const { return ___m_CurrentSelectionState_11; }
	inline int32_t* get_address_of_m_CurrentSelectionState_11() { return &___m_CurrentSelectionState_11; }
	inline void set_m_CurrentSelectionState_11(int32_t value)
	{
		___m_CurrentSelectionState_11 = value;
	}

	inline static int32_t get_offset_of_U3CisPointerInsideU3Ek__BackingField_12() { return static_cast<int32_t>(offsetof(Selectable_t3250028441, ___U3CisPointerInsideU3Ek__BackingField_12)); }
	inline bool get_U3CisPointerInsideU3Ek__BackingField_12() const { return ___U3CisPointerInsideU3Ek__BackingField_12; }
	inline bool* get_address_of_U3CisPointerInsideU3Ek__BackingField_12() { return &___U3CisPointerInsideU3Ek__BackingField_12; }
	inline void set_U3CisPointerInsideU3Ek__BackingField_12(bool value)
	{
		___U3CisPointerInsideU3Ek__BackingField_12 = value;
	}

	inline static int32_t get_offset_of_U3CisPointerDownU3Ek__BackingField_13() { return static_cast<int32_t>(offsetof(Selectable_t3250028441, ___U3CisPointerDownU3Ek__BackingField_13)); }
	inline bool get_U3CisPointerDownU3Ek__BackingField_13() const { return ___U3CisPointerDownU3Ek__BackingField_13; }
	inline bool* get_address_of_U3CisPointerDownU3Ek__BackingField_13() { return &___U3CisPointerDownU3Ek__BackingField_13; }
	inline void set_U3CisPointerDownU3Ek__BackingField_13(bool value)
	{
		___U3CisPointerDownU3Ek__BackingField_13 = value;
	}

	inline static int32_t get_offset_of_U3ChasSelectionU3Ek__BackingField_14() { return static_cast<int32_t>(offsetof(Selectable_t3250028441, ___U3ChasSelectionU3Ek__BackingField_14)); }
	inline bool get_U3ChasSelectionU3Ek__BackingField_14() const { return ___U3ChasSelectionU3Ek__BackingField_14; }
	inline bool* get_address_of_U3ChasSelectionU3Ek__BackingField_14() { return &___U3ChasSelectionU3Ek__BackingField_14; }
	inline void set_U3ChasSelectionU3Ek__BackingField_14(bool value)
	{
		___U3ChasSelectionU3Ek__BackingField_14 = value;
	}

	inline static int32_t get_offset_of_m_CanvasGroupCache_15() { return static_cast<int32_t>(offsetof(Selectable_t3250028441, ___m_CanvasGroupCache_15)); }
	inline List_1_t1260619206 * get_m_CanvasGroupCache_15() const { return ___m_CanvasGroupCache_15; }
	inline List_1_t1260619206 ** get_address_of_m_CanvasGroupCache_15() { return &___m_CanvasGroupCache_15; }
	inline void set_m_CanvasGroupCache_15(List_1_t1260619206 * value)
	{
		___m_CanvasGroupCache_15 = value;
		Il2CppCodeGenWriteBarrier((&___m_CanvasGroupCache_15), value);
	}
};

struct Selectable_t3250028441_StaticFields
{
public:
	// System.Collections.Generic.List`1<UnityEngine.UI.Selectable> UnityEngine.UI.Selectable::s_List
	List_1_t427135887 * ___s_List_2;

public:
	inline static int32_t get_offset_of_s_List_2() { return static_cast<int32_t>(offsetof(Selectable_t3250028441_StaticFields, ___s_List_2)); }
	inline List_1_t427135887 * get_s_List_2() const { return ___s_List_2; }
	inline List_1_t427135887 ** get_address_of_s_List_2() { return &___s_List_2; }
	inline void set_s_List_2(List_1_t427135887 * value)
	{
		___s_List_2 = value;
		Il2CppCodeGenWriteBarrier((&___s_List_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SELECTABLE_T3250028441_H
#ifndef MASKABLEGRAPHIC_T3839221559_H
#define MASKABLEGRAPHIC_T3839221559_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.MaskableGraphic
struct  MaskableGraphic_t3839221559  : public Graphic_t1660335611
{
public:
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculateStencil
	bool ___m_ShouldRecalculateStencil_19;
	// UnityEngine.Material UnityEngine.UI.MaskableGraphic::m_MaskMaterial
	Material_t340375123 * ___m_MaskMaterial_20;
	// UnityEngine.UI.RectMask2D UnityEngine.UI.MaskableGraphic::m_ParentMask
	RectMask2D_t3474889437 * ___m_ParentMask_21;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_Maskable
	bool ___m_Maskable_22;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IncludeForMasking
	bool ___m_IncludeForMasking_23;
	// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent UnityEngine.UI.MaskableGraphic::m_OnCullStateChanged
	CullStateChangedEvent_t3661388177 * ___m_OnCullStateChanged_24;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculate
	bool ___m_ShouldRecalculate_25;
	// System.Int32 UnityEngine.UI.MaskableGraphic::m_StencilValue
	int32_t ___m_StencilValue_26;
	// UnityEngine.Vector3[] UnityEngine.UI.MaskableGraphic::m_Corners
	Vector3U5BU5D_t1718750761* ___m_Corners_27;

public:
	inline static int32_t get_offset_of_m_ShouldRecalculateStencil_19() { return static_cast<int32_t>(offsetof(MaskableGraphic_t3839221559, ___m_ShouldRecalculateStencil_19)); }
	inline bool get_m_ShouldRecalculateStencil_19() const { return ___m_ShouldRecalculateStencil_19; }
	inline bool* get_address_of_m_ShouldRecalculateStencil_19() { return &___m_ShouldRecalculateStencil_19; }
	inline void set_m_ShouldRecalculateStencil_19(bool value)
	{
		___m_ShouldRecalculateStencil_19 = value;
	}

	inline static int32_t get_offset_of_m_MaskMaterial_20() { return static_cast<int32_t>(offsetof(MaskableGraphic_t3839221559, ___m_MaskMaterial_20)); }
	inline Material_t340375123 * get_m_MaskMaterial_20() const { return ___m_MaskMaterial_20; }
	inline Material_t340375123 ** get_address_of_m_MaskMaterial_20() { return &___m_MaskMaterial_20; }
	inline void set_m_MaskMaterial_20(Material_t340375123 * value)
	{
		___m_MaskMaterial_20 = value;
		Il2CppCodeGenWriteBarrier((&___m_MaskMaterial_20), value);
	}

	inline static int32_t get_offset_of_m_ParentMask_21() { return static_cast<int32_t>(offsetof(MaskableGraphic_t3839221559, ___m_ParentMask_21)); }
	inline RectMask2D_t3474889437 * get_m_ParentMask_21() const { return ___m_ParentMask_21; }
	inline RectMask2D_t3474889437 ** get_address_of_m_ParentMask_21() { return &___m_ParentMask_21; }
	inline void set_m_ParentMask_21(RectMask2D_t3474889437 * value)
	{
		___m_ParentMask_21 = value;
		Il2CppCodeGenWriteBarrier((&___m_ParentMask_21), value);
	}

	inline static int32_t get_offset_of_m_Maskable_22() { return static_cast<int32_t>(offsetof(MaskableGraphic_t3839221559, ___m_Maskable_22)); }
	inline bool get_m_Maskable_22() const { return ___m_Maskable_22; }
	inline bool* get_address_of_m_Maskable_22() { return &___m_Maskable_22; }
	inline void set_m_Maskable_22(bool value)
	{
		___m_Maskable_22 = value;
	}

	inline static int32_t get_offset_of_m_IncludeForMasking_23() { return static_cast<int32_t>(offsetof(MaskableGraphic_t3839221559, ___m_IncludeForMasking_23)); }
	inline bool get_m_IncludeForMasking_23() const { return ___m_IncludeForMasking_23; }
	inline bool* get_address_of_m_IncludeForMasking_23() { return &___m_IncludeForMasking_23; }
	inline void set_m_IncludeForMasking_23(bool value)
	{
		___m_IncludeForMasking_23 = value;
	}

	inline static int32_t get_offset_of_m_OnCullStateChanged_24() { return static_cast<int32_t>(offsetof(MaskableGraphic_t3839221559, ___m_OnCullStateChanged_24)); }
	inline CullStateChangedEvent_t3661388177 * get_m_OnCullStateChanged_24() const { return ___m_OnCullStateChanged_24; }
	inline CullStateChangedEvent_t3661388177 ** get_address_of_m_OnCullStateChanged_24() { return &___m_OnCullStateChanged_24; }
	inline void set_m_OnCullStateChanged_24(CullStateChangedEvent_t3661388177 * value)
	{
		___m_OnCullStateChanged_24 = value;
		Il2CppCodeGenWriteBarrier((&___m_OnCullStateChanged_24), value);
	}

	inline static int32_t get_offset_of_m_ShouldRecalculate_25() { return static_cast<int32_t>(offsetof(MaskableGraphic_t3839221559, ___m_ShouldRecalculate_25)); }
	inline bool get_m_ShouldRecalculate_25() const { return ___m_ShouldRecalculate_25; }
	inline bool* get_address_of_m_ShouldRecalculate_25() { return &___m_ShouldRecalculate_25; }
	inline void set_m_ShouldRecalculate_25(bool value)
	{
		___m_ShouldRecalculate_25 = value;
	}

	inline static int32_t get_offset_of_m_StencilValue_26() { return static_cast<int32_t>(offsetof(MaskableGraphic_t3839221559, ___m_StencilValue_26)); }
	inline int32_t get_m_StencilValue_26() const { return ___m_StencilValue_26; }
	inline int32_t* get_address_of_m_StencilValue_26() { return &___m_StencilValue_26; }
	inline void set_m_StencilValue_26(int32_t value)
	{
		___m_StencilValue_26 = value;
	}

	inline static int32_t get_offset_of_m_Corners_27() { return static_cast<int32_t>(offsetof(MaskableGraphic_t3839221559, ___m_Corners_27)); }
	inline Vector3U5BU5D_t1718750761* get_m_Corners_27() const { return ___m_Corners_27; }
	inline Vector3U5BU5D_t1718750761** get_address_of_m_Corners_27() { return &___m_Corners_27; }
	inline void set_m_Corners_27(Vector3U5BU5D_t1718750761* value)
	{
		___m_Corners_27 = value;
		Il2CppCodeGenWriteBarrier((&___m_Corners_27), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MASKABLEGRAPHIC_T3839221559_H
#ifndef BUTTON_T4055032469_H
#define BUTTON_T4055032469_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.Button
struct  Button_t4055032469  : public Selectable_t3250028441
{
public:
	// UnityEngine.UI.Button/ButtonClickedEvent UnityEngine.UI.Button::m_OnClick
	ButtonClickedEvent_t48803504 * ___m_OnClick_16;

public:
	inline static int32_t get_offset_of_m_OnClick_16() { return static_cast<int32_t>(offsetof(Button_t4055032469, ___m_OnClick_16)); }
	inline ButtonClickedEvent_t48803504 * get_m_OnClick_16() const { return ___m_OnClick_16; }
	inline ButtonClickedEvent_t48803504 ** get_address_of_m_OnClick_16() { return &___m_OnClick_16; }
	inline void set_m_OnClick_16(ButtonClickedEvent_t48803504 * value)
	{
		___m_OnClick_16 = value;
		Il2CppCodeGenWriteBarrier((&___m_OnClick_16), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BUTTON_T4055032469_H
#ifndef TEXT_T1901882714_H
#define TEXT_T1901882714_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.Text
struct  Text_t1901882714  : public MaskableGraphic_t3839221559
{
public:
	// UnityEngine.UI.FontData UnityEngine.UI.Text::m_FontData
	FontData_t746620069 * ___m_FontData_28;
	// System.String UnityEngine.UI.Text::m_Text
	String_t* ___m_Text_29;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCache
	TextGenerator_t3211863866 * ___m_TextCache_30;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCacheForLayout
	TextGenerator_t3211863866 * ___m_TextCacheForLayout_31;
	// System.Boolean UnityEngine.UI.Text::m_DisableFontTextureRebuiltCallback
	bool ___m_DisableFontTextureRebuiltCallback_33;
	// UnityEngine.UIVertex[] UnityEngine.UI.Text::m_TempVerts
	UIVertexU5BU5D_t1981460040* ___m_TempVerts_34;

public:
	inline static int32_t get_offset_of_m_FontData_28() { return static_cast<int32_t>(offsetof(Text_t1901882714, ___m_FontData_28)); }
	inline FontData_t746620069 * get_m_FontData_28() const { return ___m_FontData_28; }
	inline FontData_t746620069 ** get_address_of_m_FontData_28() { return &___m_FontData_28; }
	inline void set_m_FontData_28(FontData_t746620069 * value)
	{
		___m_FontData_28 = value;
		Il2CppCodeGenWriteBarrier((&___m_FontData_28), value);
	}

	inline static int32_t get_offset_of_m_Text_29() { return static_cast<int32_t>(offsetof(Text_t1901882714, ___m_Text_29)); }
	inline String_t* get_m_Text_29() const { return ___m_Text_29; }
	inline String_t** get_address_of_m_Text_29() { return &___m_Text_29; }
	inline void set_m_Text_29(String_t* value)
	{
		___m_Text_29 = value;
		Il2CppCodeGenWriteBarrier((&___m_Text_29), value);
	}

	inline static int32_t get_offset_of_m_TextCache_30() { return static_cast<int32_t>(offsetof(Text_t1901882714, ___m_TextCache_30)); }
	inline TextGenerator_t3211863866 * get_m_TextCache_30() const { return ___m_TextCache_30; }
	inline TextGenerator_t3211863866 ** get_address_of_m_TextCache_30() { return &___m_TextCache_30; }
	inline void set_m_TextCache_30(TextGenerator_t3211863866 * value)
	{
		___m_TextCache_30 = value;
		Il2CppCodeGenWriteBarrier((&___m_TextCache_30), value);
	}

	inline static int32_t get_offset_of_m_TextCacheForLayout_31() { return static_cast<int32_t>(offsetof(Text_t1901882714, ___m_TextCacheForLayout_31)); }
	inline TextGenerator_t3211863866 * get_m_TextCacheForLayout_31() const { return ___m_TextCacheForLayout_31; }
	inline TextGenerator_t3211863866 ** get_address_of_m_TextCacheForLayout_31() { return &___m_TextCacheForLayout_31; }
	inline void set_m_TextCacheForLayout_31(TextGenerator_t3211863866 * value)
	{
		___m_TextCacheForLayout_31 = value;
		Il2CppCodeGenWriteBarrier((&___m_TextCacheForLayout_31), value);
	}

	inline static int32_t get_offset_of_m_DisableFontTextureRebuiltCallback_33() { return static_cast<int32_t>(offsetof(Text_t1901882714, ___m_DisableFontTextureRebuiltCallback_33)); }
	inline bool get_m_DisableFontTextureRebuiltCallback_33() const { return ___m_DisableFontTextureRebuiltCallback_33; }
	inline bool* get_address_of_m_DisableFontTextureRebuiltCallback_33() { return &___m_DisableFontTextureRebuiltCallback_33; }
	inline void set_m_DisableFontTextureRebuiltCallback_33(bool value)
	{
		___m_DisableFontTextureRebuiltCallback_33 = value;
	}

	inline static int32_t get_offset_of_m_TempVerts_34() { return static_cast<int32_t>(offsetof(Text_t1901882714, ___m_TempVerts_34)); }
	inline UIVertexU5BU5D_t1981460040* get_m_TempVerts_34() const { return ___m_TempVerts_34; }
	inline UIVertexU5BU5D_t1981460040** get_address_of_m_TempVerts_34() { return &___m_TempVerts_34; }
	inline void set_m_TempVerts_34(UIVertexU5BU5D_t1981460040* value)
	{
		___m_TempVerts_34 = value;
		Il2CppCodeGenWriteBarrier((&___m_TempVerts_34), value);
	}
};

struct Text_t1901882714_StaticFields
{
public:
	// UnityEngine.Material UnityEngine.UI.Text::s_DefaultText
	Material_t340375123 * ___s_DefaultText_32;

public:
	inline static int32_t get_offset_of_s_DefaultText_32() { return static_cast<int32_t>(offsetof(Text_t1901882714_StaticFields, ___s_DefaultText_32)); }
	inline Material_t340375123 * get_s_DefaultText_32() const { return ___s_DefaultText_32; }
	inline Material_t340375123 ** get_address_of_s_DefaultText_32() { return &___s_DefaultText_32; }
	inline void set_s_DefaultText_32(Material_t340375123 * value)
	{
		___s_DefaultText_32 = value;
		Il2CppCodeGenWriteBarrier((&___s_DefaultText_32), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TEXT_T1901882714_H
#ifndef IMAGE_T2670269651_H
#define IMAGE_T2670269651_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.Image
struct  Image_t2670269651  : public MaskableGraphic_t3839221559
{
public:
	// UnityEngine.Sprite UnityEngine.UI.Image::m_Sprite
	Sprite_t280657092 * ___m_Sprite_29;
	// UnityEngine.Sprite UnityEngine.UI.Image::m_OverrideSprite
	Sprite_t280657092 * ___m_OverrideSprite_30;
	// UnityEngine.UI.Image/Type UnityEngine.UI.Image::m_Type
	int32_t ___m_Type_31;
	// System.Boolean UnityEngine.UI.Image::m_PreserveAspect
	bool ___m_PreserveAspect_32;
	// System.Boolean UnityEngine.UI.Image::m_FillCenter
	bool ___m_FillCenter_33;
	// UnityEngine.UI.Image/FillMethod UnityEngine.UI.Image::m_FillMethod
	int32_t ___m_FillMethod_34;
	// System.Single UnityEngine.UI.Image::m_FillAmount
	float ___m_FillAmount_35;
	// System.Boolean UnityEngine.UI.Image::m_FillClockwise
	bool ___m_FillClockwise_36;
	// System.Int32 UnityEngine.UI.Image::m_FillOrigin
	int32_t ___m_FillOrigin_37;
	// System.Single UnityEngine.UI.Image::m_AlphaHitTestMinimumThreshold
	float ___m_AlphaHitTestMinimumThreshold_38;
	// System.Boolean UnityEngine.UI.Image::m_Tracked
	bool ___m_Tracked_39;

public:
	inline static int32_t get_offset_of_m_Sprite_29() { return static_cast<int32_t>(offsetof(Image_t2670269651, ___m_Sprite_29)); }
	inline Sprite_t280657092 * get_m_Sprite_29() const { return ___m_Sprite_29; }
	inline Sprite_t280657092 ** get_address_of_m_Sprite_29() { return &___m_Sprite_29; }
	inline void set_m_Sprite_29(Sprite_t280657092 * value)
	{
		___m_Sprite_29 = value;
		Il2CppCodeGenWriteBarrier((&___m_Sprite_29), value);
	}

	inline static int32_t get_offset_of_m_OverrideSprite_30() { return static_cast<int32_t>(offsetof(Image_t2670269651, ___m_OverrideSprite_30)); }
	inline Sprite_t280657092 * get_m_OverrideSprite_30() const { return ___m_OverrideSprite_30; }
	inline Sprite_t280657092 ** get_address_of_m_OverrideSprite_30() { return &___m_OverrideSprite_30; }
	inline void set_m_OverrideSprite_30(Sprite_t280657092 * value)
	{
		___m_OverrideSprite_30 = value;
		Il2CppCodeGenWriteBarrier((&___m_OverrideSprite_30), value);
	}

	inline static int32_t get_offset_of_m_Type_31() { return static_cast<int32_t>(offsetof(Image_t2670269651, ___m_Type_31)); }
	inline int32_t get_m_Type_31() const { return ___m_Type_31; }
	inline int32_t* get_address_of_m_Type_31() { return &___m_Type_31; }
	inline void set_m_Type_31(int32_t value)
	{
		___m_Type_31 = value;
	}

	inline static int32_t get_offset_of_m_PreserveAspect_32() { return static_cast<int32_t>(offsetof(Image_t2670269651, ___m_PreserveAspect_32)); }
	inline bool get_m_PreserveAspect_32() const { return ___m_PreserveAspect_32; }
	inline bool* get_address_of_m_PreserveAspect_32() { return &___m_PreserveAspect_32; }
	inline void set_m_PreserveAspect_32(bool value)
	{
		___m_PreserveAspect_32 = value;
	}

	inline static int32_t get_offset_of_m_FillCenter_33() { return static_cast<int32_t>(offsetof(Image_t2670269651, ___m_FillCenter_33)); }
	inline bool get_m_FillCenter_33() const { return ___m_FillCenter_33; }
	inline bool* get_address_of_m_FillCenter_33() { return &___m_FillCenter_33; }
	inline void set_m_FillCenter_33(bool value)
	{
		___m_FillCenter_33 = value;
	}

	inline static int32_t get_offset_of_m_FillMethod_34() { return static_cast<int32_t>(offsetof(Image_t2670269651, ___m_FillMethod_34)); }
	inline int32_t get_m_FillMethod_34() const { return ___m_FillMethod_34; }
	inline int32_t* get_address_of_m_FillMethod_34() { return &___m_FillMethod_34; }
	inline void set_m_FillMethod_34(int32_t value)
	{
		___m_FillMethod_34 = value;
	}

	inline static int32_t get_offset_of_m_FillAmount_35() { return static_cast<int32_t>(offsetof(Image_t2670269651, ___m_FillAmount_35)); }
	inline float get_m_FillAmount_35() const { return ___m_FillAmount_35; }
	inline float* get_address_of_m_FillAmount_35() { return &___m_FillAmount_35; }
	inline void set_m_FillAmount_35(float value)
	{
		___m_FillAmount_35 = value;
	}

	inline static int32_t get_offset_of_m_FillClockwise_36() { return static_cast<int32_t>(offsetof(Image_t2670269651, ___m_FillClockwise_36)); }
	inline bool get_m_FillClockwise_36() const { return ___m_FillClockwise_36; }
	inline bool* get_address_of_m_FillClockwise_36() { return &___m_FillClockwise_36; }
	inline void set_m_FillClockwise_36(bool value)
	{
		___m_FillClockwise_36 = value;
	}

	inline static int32_t get_offset_of_m_FillOrigin_37() { return static_cast<int32_t>(offsetof(Image_t2670269651, ___m_FillOrigin_37)); }
	inline int32_t get_m_FillOrigin_37() const { return ___m_FillOrigin_37; }
	inline int32_t* get_address_of_m_FillOrigin_37() { return &___m_FillOrigin_37; }
	inline void set_m_FillOrigin_37(int32_t value)
	{
		___m_FillOrigin_37 = value;
	}

	inline static int32_t get_offset_of_m_AlphaHitTestMinimumThreshold_38() { return static_cast<int32_t>(offsetof(Image_t2670269651, ___m_AlphaHitTestMinimumThreshold_38)); }
	inline float get_m_AlphaHitTestMinimumThreshold_38() const { return ___m_AlphaHitTestMinimumThreshold_38; }
	inline float* get_address_of_m_AlphaHitTestMinimumThreshold_38() { return &___m_AlphaHitTestMinimumThreshold_38; }
	inline void set_m_AlphaHitTestMinimumThreshold_38(float value)
	{
		___m_AlphaHitTestMinimumThreshold_38 = value;
	}

	inline static int32_t get_offset_of_m_Tracked_39() { return static_cast<int32_t>(offsetof(Image_t2670269651, ___m_Tracked_39)); }
	inline bool get_m_Tracked_39() const { return ___m_Tracked_39; }
	inline bool* get_address_of_m_Tracked_39() { return &___m_Tracked_39; }
	inline void set_m_Tracked_39(bool value)
	{
		___m_Tracked_39 = value;
	}
};

struct Image_t2670269651_StaticFields
{
public:
	// UnityEngine.Material UnityEngine.UI.Image::s_ETC1DefaultUI
	Material_t340375123 * ___s_ETC1DefaultUI_28;
	// UnityEngine.Vector2[] UnityEngine.UI.Image::s_VertScratch
	Vector2U5BU5D_t1457185986* ___s_VertScratch_40;
	// UnityEngine.Vector2[] UnityEngine.UI.Image::s_UVScratch
	Vector2U5BU5D_t1457185986* ___s_UVScratch_41;
	// UnityEngine.Vector3[] UnityEngine.UI.Image::s_Xy
	Vector3U5BU5D_t1718750761* ___s_Xy_42;
	// UnityEngine.Vector3[] UnityEngine.UI.Image::s_Uv
	Vector3U5BU5D_t1718750761* ___s_Uv_43;
	// System.Collections.Generic.List`1<UnityEngine.UI.Image> UnityEngine.UI.Image::m_TrackedTexturelessImages
	List_1_t4142344393 * ___m_TrackedTexturelessImages_44;
	// System.Boolean UnityEngine.UI.Image::s_Initialized
	bool ___s_Initialized_45;
	// System.Action`1<UnityEngine.U2D.SpriteAtlas> UnityEngine.UI.Image::<>f__mg$cache0
	Action_1_t819399007 * ___U3CU3Ef__mgU24cache0_46;

public:
	inline static int32_t get_offset_of_s_ETC1DefaultUI_28() { return static_cast<int32_t>(offsetof(Image_t2670269651_StaticFields, ___s_ETC1DefaultUI_28)); }
	inline Material_t340375123 * get_s_ETC1DefaultUI_28() const { return ___s_ETC1DefaultUI_28; }
	inline Material_t340375123 ** get_address_of_s_ETC1DefaultUI_28() { return &___s_ETC1DefaultUI_28; }
	inline void set_s_ETC1DefaultUI_28(Material_t340375123 * value)
	{
		___s_ETC1DefaultUI_28 = value;
		Il2CppCodeGenWriteBarrier((&___s_ETC1DefaultUI_28), value);
	}

	inline static int32_t get_offset_of_s_VertScratch_40() { return static_cast<int32_t>(offsetof(Image_t2670269651_StaticFields, ___s_VertScratch_40)); }
	inline Vector2U5BU5D_t1457185986* get_s_VertScratch_40() const { return ___s_VertScratch_40; }
	inline Vector2U5BU5D_t1457185986** get_address_of_s_VertScratch_40() { return &___s_VertScratch_40; }
	inline void set_s_VertScratch_40(Vector2U5BU5D_t1457185986* value)
	{
		___s_VertScratch_40 = value;
		Il2CppCodeGenWriteBarrier((&___s_VertScratch_40), value);
	}

	inline static int32_t get_offset_of_s_UVScratch_41() { return static_cast<int32_t>(offsetof(Image_t2670269651_StaticFields, ___s_UVScratch_41)); }
	inline Vector2U5BU5D_t1457185986* get_s_UVScratch_41() const { return ___s_UVScratch_41; }
	inline Vector2U5BU5D_t1457185986** get_address_of_s_UVScratch_41() { return &___s_UVScratch_41; }
	inline void set_s_UVScratch_41(Vector2U5BU5D_t1457185986* value)
	{
		___s_UVScratch_41 = value;
		Il2CppCodeGenWriteBarrier((&___s_UVScratch_41), value);
	}

	inline static int32_t get_offset_of_s_Xy_42() { return static_cast<int32_t>(offsetof(Image_t2670269651_StaticFields, ___s_Xy_42)); }
	inline Vector3U5BU5D_t1718750761* get_s_Xy_42() const { return ___s_Xy_42; }
	inline Vector3U5BU5D_t1718750761** get_address_of_s_Xy_42() { return &___s_Xy_42; }
	inline void set_s_Xy_42(Vector3U5BU5D_t1718750761* value)
	{
		___s_Xy_42 = value;
		Il2CppCodeGenWriteBarrier((&___s_Xy_42), value);
	}

	inline static int32_t get_offset_of_s_Uv_43() { return static_cast<int32_t>(offsetof(Image_t2670269651_StaticFields, ___s_Uv_43)); }
	inline Vector3U5BU5D_t1718750761* get_s_Uv_43() const { return ___s_Uv_43; }
	inline Vector3U5BU5D_t1718750761** get_address_of_s_Uv_43() { return &___s_Uv_43; }
	inline void set_s_Uv_43(Vector3U5BU5D_t1718750761* value)
	{
		___s_Uv_43 = value;
		Il2CppCodeGenWriteBarrier((&___s_Uv_43), value);
	}

	inline static int32_t get_offset_of_m_TrackedTexturelessImages_44() { return static_cast<int32_t>(offsetof(Image_t2670269651_StaticFields, ___m_TrackedTexturelessImages_44)); }
	inline List_1_t4142344393 * get_m_TrackedTexturelessImages_44() const { return ___m_TrackedTexturelessImages_44; }
	inline List_1_t4142344393 ** get_address_of_m_TrackedTexturelessImages_44() { return &___m_TrackedTexturelessImages_44; }
	inline void set_m_TrackedTexturelessImages_44(List_1_t4142344393 * value)
	{
		___m_TrackedTexturelessImages_44 = value;
		Il2CppCodeGenWriteBarrier((&___m_TrackedTexturelessImages_44), value);
	}

	inline static int32_t get_offset_of_s_Initialized_45() { return static_cast<int32_t>(offsetof(Image_t2670269651_StaticFields, ___s_Initialized_45)); }
	inline bool get_s_Initialized_45() const { return ___s_Initialized_45; }
	inline bool* get_address_of_s_Initialized_45() { return &___s_Initialized_45; }
	inline void set_s_Initialized_45(bool value)
	{
		___s_Initialized_45 = value;
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache0_46() { return static_cast<int32_t>(offsetof(Image_t2670269651_StaticFields, ___U3CU3Ef__mgU24cache0_46)); }
	inline Action_1_t819399007 * get_U3CU3Ef__mgU24cache0_46() const { return ___U3CU3Ef__mgU24cache0_46; }
	inline Action_1_t819399007 ** get_address_of_U3CU3Ef__mgU24cache0_46() { return &___U3CU3Ef__mgU24cache0_46; }
	inline void set_U3CU3Ef__mgU24cache0_46(Action_1_t819399007 * value)
	{
		___U3CU3Ef__mgU24cache0_46 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache0_46), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // IMAGE_T2670269651_H
// Particle[]
struct ParticleU5BU5D_t3335713388  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Particle_t3168132017 * m_Items[1];

public:
	inline Particle_t3168132017 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Particle_t3168132017 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Particle_t3168132017 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline Particle_t3168132017 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Particle_t3168132017 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Particle_t3168132017 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// UnityEngine.Transform[]
struct TransformU5BU5D_t807237628  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Transform_t3600365921 * m_Items[1];

public:
	inline Transform_t3600365921 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Transform_t3600365921 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Transform_t3600365921 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline Transform_t3600365921 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Transform_t3600365921 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Transform_t3600365921 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_t3328599146  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) GameObject_t1113636619 * m_Items[1];

public:
	inline GameObject_t1113636619 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline GameObject_t1113636619 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, GameObject_t1113636619 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline GameObject_t1113636619 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline GameObject_t1113636619 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, GameObject_t1113636619 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// DirectionToStartMapping[]
struct DirectionToStartMappingU5BU5D_t4001959641  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) DirectionToStartMapping_t1813080072  m_Items[1];

public:
	inline DirectionToStartMapping_t1813080072  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline DirectionToStartMapping_t1813080072 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, DirectionToStartMapping_t1813080072  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline DirectionToStartMapping_t1813080072  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline DirectionToStartMapping_t1813080072 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, DirectionToStartMapping_t1813080072  value)
	{
		m_Items[index] = value;
	}
};
// Door[]
struct DoorU5BU5D_t160537336  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Door_t3715198229 * m_Items[1];

public:
	inline Door_t3715198229 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Door_t3715198229 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Door_t3715198229 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline Door_t3715198229 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Door_t3715198229 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Door_t3715198229 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// Level[]
struct LevelU5BU5D_t979096037  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Level_t2237665516 * m_Items[1];

public:
	inline Level_t2237665516 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Level_t2237665516 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Level_t2237665516 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline Level_t2237665516 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Level_t2237665516 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Level_t2237665516 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// Weapon[]
struct WeaponU5BU5D_t718049580  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Weapon_t4063826929 * m_Items[1];

public:
	inline Weapon_t4063826929 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Weapon_t4063826929 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Weapon_t4063826929 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline Weapon_t4063826929 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Weapon_t4063826929 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Weapon_t4063826929 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// HealthPickup[]
struct HealthPickupU5BU5D_t3497542162  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) HealthPickup_t2182775939 * m_Items[1];

public:
	inline HealthPickup_t2182775939 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline HealthPickup_t2182775939 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, HealthPickup_t2182775939 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline HealthPickup_t2182775939 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline HealthPickup_t2182775939 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, HealthPickup_t2182775939 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// Entity[]
struct EntityU5BU5D_t1586060696  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Entity_t3391956725 * m_Items[1];

public:
	inline Entity_t3391956725 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Entity_t3391956725 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Entity_t3391956725 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline Entity_t3391956725 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Entity_t3391956725 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Entity_t3391956725 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// UnityEngine.AudioClip[]
struct AudioClipU5BU5D_t143221404  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) AudioClip_t3680889665 * m_Items[1];

public:
	inline AudioClip_t3680889665 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline AudioClip_t3680889665 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, AudioClip_t3680889665 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline AudioClip_t3680889665 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline AudioClip_t3680889665 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, AudioClip_t3680889665 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};


// !!0 UnityEngine.Object::FindObjectOfType<System.Object>()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * Object_FindObjectOfType_TisRuntimeObject_m2612646359_gshared (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<System.Object>()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * Component_GetComponent_TisRuntimeObject_m2906321015_gshared (Component_t1923634451 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Object::Instantiate<System.Object>(!!0,UnityEngine.Transform,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * Object_Instantiate_TisRuntimeObject_m1858812370_gshared (RuntimeObject * __this /* static, unused */, RuntimeObject * p0, Transform_t3600365921 * p1, bool p2, const RuntimeMethod* method);
// !!0[] UnityEngine.Component::GetComponentsInChildren<System.Object>()
extern "C" IL2CPP_METHOD_ATTR ObjectU5BU5D_t2843939325* Component_GetComponentsInChildren_TisRuntimeObject_m1308288322_gshared (Component_t1923634451 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<EntityState,System.Object>::.ctor()
extern "C" IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m2363385667_gshared (Dictionary_2_t1258748936 * __this, const RuntimeMethod* method);
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<EntityStateAnimationMapping>::GetEnumerator()
extern "C" IL2CPP_METHOD_ATTR Enumerator_t1562220782  List_1_GetEnumerator_m2765381048_gshared (List_1_t3967944201 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1/Enumerator<EntityStateAnimationMapping>::get_Current()
extern "C" IL2CPP_METHOD_ATTR EntityStateAnimationMapping_t2495869459  Enumerator_get_Current_m4060103381_gshared (Enumerator_t1562220782 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<EntityState,System.Object>::Add(!0,!1)
extern "C" IL2CPP_METHOD_ATTR void Dictionary_2_Add_m1737166491_gshared (Dictionary_2_t1258748936 * __this, int32_t p0, RuntimeObject * p1, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1/Enumerator<EntityStateAnimationMapping>::MoveNext()
extern "C" IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m1755039323_gshared (Enumerator_t1562220782 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1/Enumerator<EntityStateAnimationMapping>::Dispose()
extern "C" IL2CPP_METHOD_ATTR void Enumerator_Dispose_m2046819164_gshared (Enumerator_t1562220782 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<EntityStateAnimationMapping>::Clear()
extern "C" IL2CPP_METHOD_ATTR void List_1_Clear_m3690193696_gshared (List_1_t3967944201 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<EntityState,System.Object>::ContainsKey(!0)
extern "C" IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsKey_m3356584079_gshared (Dictionary_2_t1258748936 * __this, int32_t p0, const RuntimeMethod* method);
// !1 System.Collections.Generic.Dictionary`2<EntityState,System.Object>::get_Item(!0)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * Dictionary_2_get_Item_m1002805246_gshared (Dictionary_2_t1258748936 * __this, int32_t p0, const RuntimeMethod* method);
// !!0 UnityEngine.Object::Instantiate<System.Object>(!!0,UnityEngine.Vector3,UnityEngine.Quaternion,UnityEngine.Transform)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * Object_Instantiate_TisRuntimeObject_m1193484509_gshared (RuntimeObject * __this /* static, unused */, RuntimeObject * p0, Vector3_t3722313464  p1, Quaternion_t2301928331  p2, Transform_t3600365921 * p3, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<System.Object>()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * GameObject_GetComponent_TisRuntimeObject_m2049753423_gshared (GameObject_t1113636619 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponentInChildren<System.Object>()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * Component_GetComponentInChildren_TisRuntimeObject_m1033527003_gshared (Component_t1923634451 * __this, const RuntimeMethod* method);
// !!0[] UnityEngine.Object::FindObjectsOfType<System.Object>()
extern "C" IL2CPP_METHOD_ATTR ObjectU5BU5D_t2843939325* Object_FindObjectsOfType_TisRuntimeObject_m2776316817_gshared (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
extern "C" IL2CPP_METHOD_ATTR void List_1__ctor_m2321703786_gshared (List_1_t257213610 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::Add(!0)
extern "C" IL2CPP_METHOD_ATTR void List_1_Add_m3338814081_gshared (List_1_t257213610 * __this, RuntimeObject * p0, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
extern "C" IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m2934127733_gshared (List_1_t257213610 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * List_1_get_Item_m2287542950_gshared (List_1_t257213610 * __this, int32_t p0, const RuntimeMethod* method);
// !!0 UnityEngine.Object::Instantiate<System.Object>(!!0)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * Object_Instantiate_TisRuntimeObject_m2446893047_gshared (RuntimeObject * __this /* static, unused */, RuntimeObject * p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Queue`1<System.Object>::.ctor()
extern "C" IL2CPP_METHOD_ATTR void Queue_1__ctor_m3749217910_gshared (Queue_1_t2926365658 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Queue`1<System.Object>::Enqueue(!0)
extern "C" IL2CPP_METHOD_ATTR void Queue_1_Enqueue_m1868480850_gshared (Queue_1_t2926365658 * __this, RuntimeObject * p0, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.Queue`1<System.Object>::get_Count()
extern "C" IL2CPP_METHOD_ATTR int32_t Queue_1_get_Count_m2496300460_gshared (Queue_1_t2926365658 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.Queue`1<System.Object>::Dequeue()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * Queue_1_Dequeue_m3550993416_gshared (Queue_1_t2926365658 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::AddRange(System.Collections.Generic.IEnumerable`1<!0>)
extern "C" IL2CPP_METHOD_ATTR void List_1_AddRange_m3709462088_gshared (List_1_t257213610 * __this, RuntimeObject* p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::Sort(System.Collections.Generic.IComparer`1<!0>)
extern "C" IL2CPP_METHOD_ATTR void List_1_Sort_m3841873687_gshared (List_1_t257213610 * __this, RuntimeObject* p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::Clear()
extern "C" IL2CPP_METHOD_ATTR void List_1_Clear_m3697625829_gshared (List_1_t257213610 * __this, const RuntimeMethod* method);
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
extern "C" IL2CPP_METHOD_ATTR Enumerator_t2146457487  List_1_GetEnumerator_m2930774921_gshared (List_1_t257213610 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1/Enumerator<System.Object>::get_Current()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * Enumerator_get_Current_m470245444_gshared (Enumerator_t2146457487 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1<System.Object>::Contains(!0)
extern "C" IL2CPP_METHOD_ATTR bool List_1_Contains_m2654125393_gshared (List_1_t257213610 * __this, RuntimeObject * p0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Object>::MoveNext()
extern "C" IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m2142368520_gshared (Enumerator_t2146457487 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1/Enumerator<System.Object>::Dispose()
extern "C" IL2CPP_METHOD_ATTR void Enumerator_Dispose_m3007748546_gshared (Enumerator_t2146457487 * __this, const RuntimeMethod* method);

// System.Void UnityEngine.MonoBehaviour::.ctor()
extern "C" IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m1579109191 (MonoBehaviour_t3962482529 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
extern "C" IL2CPP_METHOD_ATTR bool Object_op_Equality_m1810815630 (RuntimeObject * __this /* static, unused */, Object_t631007953 * p0, Object_t631007953 * p1, const RuntimeMethod* method);
// !!0 UnityEngine.Object::FindObjectOfType<Player>()
#define Object_FindObjectOfType_TisPlayer_t3266647312_m389548692(__this /* static, unused */, method) ((  Player_t3266647312 * (*) (RuntimeObject * /* static, unused */, const RuntimeMethod*))Object_FindObjectOfType_TisRuntimeObject_m2612646359_gshared)(__this /* static, unused */, method)
// UnityEngine.Transform UnityEngine.Component::get_transform()
extern "C" IL2CPP_METHOD_ATTR Transform_t3600365921 * Component_get_transform_m3162698980 (Component_t1923634451 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
extern "C" IL2CPP_METHOD_ATTR Vector3_t3722313464  Transform_get_position_m36019626 (Transform_t3600365921 * __this, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Vector2::op_Implicit(UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR Vector2_t2156229523  Vector2_op_Implicit_m4260192859 (RuntimeObject * __this /* static, unused */, Vector3_t3722313464  p0, const RuntimeMethod* method);
// System.Single UnityEngine.Vector2::Distance(UnityEngine.Vector2,UnityEngine.Vector2)
extern "C" IL2CPP_METHOD_ATTR float Vector2_Distance_m3048868881 (RuntimeObject * __this /* static, unused */, Vector2_t2156229523  p0, Vector2_t2156229523  p1, const RuntimeMethod* method);
// System.Single UnityEngine.Time::get_deltaTime()
extern "C" IL2CPP_METHOD_ATTR float Time_get_deltaTime_m372706562 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Vector2::Lerp(UnityEngine.Vector2,UnityEngine.Vector2,System.Single)
extern "C" IL2CPP_METHOD_ATTR Vector2_t2156229523  Vector2_Lerp_m854472224 (RuntimeObject * __this /* static, unused */, Vector2_t2156229523  p0, Vector2_t2156229523  p1, float p2, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector2::op_Implicit(UnityEngine.Vector2)
extern "C" IL2CPP_METHOD_ATTR Vector3_t3722313464  Vector2_op_Implicit_m1860157806 (RuntimeObject * __this /* static, unused */, Vector2_t2156229523  p0, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR void Transform_set_position_m3387557959 (Transform_t3600365921 * __this, Vector3_t3722313464  p0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
extern "C" IL2CPP_METHOD_ATTR bool Object_op_Inequality_m4071470834 (RuntimeObject * __this /* static, unused */, Object_t631007953 * p0, Object_t631007953 * p1, const RuntimeMethod* method);
// UnityEngine.GameObject UnityEngine.Collision2D::get_gameObject()
extern "C" IL2CPP_METHOD_ATTR GameObject_t1113636619 * Collision2D_get_gameObject_m1443495885 (Collision2D_t2842956331 * __this, const RuntimeMethod* method);
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
extern "C" IL2CPP_METHOD_ATTR GameObject_t1113636619 * Component_get_gameObject_m442555142 (Component_t1923634451 * __this, const RuntimeMethod* method);
// System.Void Entity::TakeDamage(System.Single,UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR void Entity_TakeDamage_m239986278 (Entity_t3391956725 * __this, float ___damage0, Vector3_t3722313464  ___attackerPosition1, const RuntimeMethod* method);
// System.Collections.IEnumerator BossSequence::Sequence()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* BossSequence_Sequence_m4274354410 (BossSequence_t1258426188 * __this, const RuntimeMethod* method);
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.Collections.IEnumerator)
extern "C" IL2CPP_METHOD_ATTR Coroutine_t3829159415 * MonoBehaviour_StartCoroutine_m3411253000 (MonoBehaviour_t3962482529 * __this, RuntimeObject* p0, const RuntimeMethod* method);
// System.Void BossSequence/<Sequence>c__Iterator0::.ctor()
extern "C" IL2CPP_METHOD_ATTR void U3CSequenceU3Ec__Iterator0__ctor_m1698124521 (U3CSequenceU3Ec__Iterator0_t114495004 * __this, const RuntimeMethod* method);
// System.Void BossSequence/<FallIn>c__Iterator1::.ctor()
extern "C" IL2CPP_METHOD_ATTR void U3CFallInU3Ec__Iterator1__ctor_m3522289883 (U3CFallInU3Ec__Iterator1_t4176106444 * __this, const RuntimeMethod* method);
// System.Void BossSequence/<FadeToBlack>c__Iterator2::.ctor()
extern "C" IL2CPP_METHOD_ATTR void U3CFadeToBlackU3Ec__Iterator2__ctor_m531709936 (U3CFadeToBlackU3Ec__Iterator2_t2817112667 * __this, const RuntimeMethod* method);
// System.Void BossSequence/<FadeIn>c__Iterator3::.ctor()
extern "C" IL2CPP_METHOD_ATTR void U3CFadeInU3Ec__Iterator3__ctor_m3249463183 (U3CFadeInU3Ec__Iterator3_t3083571303 * __this, const RuntimeMethod* method);
// System.Void BossSequence/<WaitForPlayerToEnterTrigger>c__Iterator4::.ctor()
extern "C" IL2CPP_METHOD_ATTR void U3CWaitForPlayerToEnterTriggerU3Ec__Iterator4__ctor_m4254653211 (U3CWaitForPlayerToEnterTriggerU3Ec__Iterator4_t2176132566 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<Player>()
#define Component_GetComponent_TisPlayer_t3266647312_m3431077271(__this, method) ((  Player_t3266647312 * (*) (Component_t1923634451 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m2906321015_gshared)(__this, method)
// System.Boolean UnityEngine.Object::op_Implicit(UnityEngine.Object)
extern "C" IL2CPP_METHOD_ATTR bool Object_op_Implicit_m3574996620 (RuntimeObject * __this /* static, unused */, Object_t631007953 * p0, const RuntimeMethod* method);
// System.Void BossSequence/<EnterBoss>c__Iterator5::.ctor()
extern "C" IL2CPP_METHOD_ATTR void U3CEnterBossU3Ec__Iterator5__ctor_m2465863346 (U3CEnterBossU3Ec__Iterator5_t1783282016 * __this, const RuntimeMethod* method);
// System.Void BossSequence/<WaitBossDead>c__Iterator6::.ctor()
extern "C" IL2CPP_METHOD_ATTR void U3CWaitBossDeadU3Ec__Iterator6__ctor_m3845333796 (U3CWaitBossDeadU3Ec__Iterator6_t3050784709 * __this, const RuntimeMethod* method);
// System.Void BossSequence/<WinScreen>c__Iterator7::.ctor()
extern "C" IL2CPP_METHOD_ATTR void U3CWinScreenU3Ec__Iterator7__ctor_m176835820 (U3CWinScreenU3Ec__Iterator7_t2096093272 * __this, const RuntimeMethod* method);
// System.Void System.Object::.ctor()
extern "C" IL2CPP_METHOD_ATTR void Object__ctor_m297566312 (RuntimeObject * __this, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Vector2::get_zero()
extern "C" IL2CPP_METHOD_ATTR Vector2_t2156229523  Vector2_get_zero_m540426400 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.Void Player::set_InputEnabled(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void Player_set_InputEnabled_m970961763 (Player_t3266647312 * __this, bool ___value0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_zero()
extern "C" IL2CPP_METHOD_ATTR Vector3_t3722313464  Vector3_get_zero_m1409827619 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// UnityEngine.Camera UnityEngine.Camera::get_main()
extern "C" IL2CPP_METHOD_ATTR Camera_t4157153871 * Camera_get_main_m3643453163 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.Single UnityEngine.Camera::get_orthographicSize()
extern "C" IL2CPP_METHOD_ATTR float Camera_get_orthographicSize_m3903216845 (Camera_t4157153871 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Camera::set_orthographicSize(System.Single)
extern "C" IL2CPP_METHOD_ATTR void Camera_set_orthographicSize_m76971700 (Camera_t4157153871 * __this, float p0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_up()
extern "C" IL2CPP_METHOD_ATTR Vector3_t3722313464  Vector3_get_up_m3584168373 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(UnityEngine.Vector3,System.Single)
extern "C" IL2CPP_METHOD_ATTR Vector3_t3722313464  Vector3_op_Multiply_m3376773913 (RuntimeObject * __this /* static, unused */, Vector3_t3722313464  p0, float p1, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Addition(UnityEngine.Vector3,UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR Vector3_t3722313464  Vector3_op_Addition_m779775034 (RuntimeObject * __this /* static, unused */, Vector3_t3722313464  p0, Vector3_t3722313464  p1, const RuntimeMethod* method);
// System.Void VoidAI::JumpTo(UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR void VoidAI_JumpTo_m2241273342 (VoidAI_t4181225430 * __this, Vector3_t3722313464  ___position0, const RuntimeMethod* method);
// System.Void UnityEngine.WaitForSeconds::.ctor(System.Single)
extern "C" IL2CPP_METHOD_ATTR void WaitForSeconds__ctor_m2199082655 (WaitForSeconds_t1699091251 * __this, float p0, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<CameraFollow>()
#define Component_GetComponent_TisCameraFollow_t129522575_m2586956313(__this, method) ((  CameraFollow_t129522575 * (*) (Component_t1923634451 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m2906321015_gshared)(__this, method)
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
extern "C" IL2CPP_METHOD_ATTR void Vector3__ctor_m3353183577 (Vector3_t3722313464 * __this, float p0, float p1, float p2, const RuntimeMethod* method);
// System.Void VoidAI::Activate()
extern "C" IL2CPP_METHOD_ATTR void VoidAI_Activate_m882747407 (VoidAI_t4181225430 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.AudioSource::Play()
extern "C" IL2CPP_METHOD_ATTR void AudioSource_Play_m48294159 (AudioSource_t3935305588 * __this, const RuntimeMethod* method);
// System.Void System.NotSupportedException::.ctor()
extern "C" IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m2730133172 (NotSupportedException_t1314879016 * __this, const RuntimeMethod* method);
// UnityEngine.Color UnityEngine.Color::get_black()
extern "C" IL2CPP_METHOD_ATTR Color_t2555686324  Color_get_black_m719512684 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.Void UnityEngine.Color::.ctor(System.Single,System.Single,System.Single,System.Single)
extern "C" IL2CPP_METHOD_ATTR void Color__ctor_m2943235014 (Color_t2555686324 * __this, float p0, float p1, float p2, float p3, const RuntimeMethod* method);
// UnityEngine.Color UnityEngine.Color::get_clear()
extern "C" IL2CPP_METHOD_ATTR Color_t2555686324  Color_get_clear_m1016382534 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.Void UnityEngine.Behaviour::set_enabled(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void Behaviour_set_enabled_m20417929 (Behaviour_t1437897464 * __this, bool p0, const RuntimeMethod* method);
// System.Collections.IEnumerator BossSequence::FadeToBlack()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* BossSequence_FadeToBlack_m833894443 (BossSequence_t1258426188 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
extern "C" IL2CPP_METHOD_ATTR void Object_Destroy_m565254235 (RuntimeObject * __this /* static, unused */, Object_t631007953 * p0, const RuntimeMethod* method);
// System.Collections.IEnumerator BossSequence::FadeIn()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* BossSequence_FadeIn_m752122934 (BossSequence_t1258426188 * __this, const RuntimeMethod* method);
// MusicManager MusicManager::get_Instance()
extern "C" IL2CPP_METHOD_ATTR MusicManager_t3024629483 * MusicManager_get_Instance_m1581818762 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.Collections.IEnumerator MusicManager::FadeOut()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* MusicManager_FadeOut_m3189210292 (MusicManager_t3024629483 * __this, const RuntimeMethod* method);
// System.Collections.IEnumerator BossSequence::FallIn()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* BossSequence_FallIn_m3389816209 (BossSequence_t1258426188 * __this, const RuntimeMethod* method);
// System.Collections.IEnumerator BossSequence::WaitForPlayerToEnterTrigger()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* BossSequence_WaitForPlayerToEnterTrigger_m1039393221 (BossSequence_t1258426188 * __this, const RuntimeMethod* method);
// System.Collections.IEnumerator BossSequence::EnterBoss()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* BossSequence_EnterBoss_m3186382248 (BossSequence_t1258426188 * __this, const RuntimeMethod* method);
// System.Collections.IEnumerator BossSequence::WaitBossDead()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* BossSequence_WaitBossDead_m3885589739 (BossSequence_t1258426188 * __this, const RuntimeMethod* method);
// System.Collections.IEnumerator BossSequence::WinScreen()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* BossSequence_WinScreen_m541912785 (BossSequence_t1258426188 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<Entity>()
#define Component_GetComponent_TisEntity_t3391956725_m1664670758(__this, method) ((  Entity_t3391956725 * (*) (Component_t1923634451 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m2906321015_gshared)(__this, method)
// System.Boolean Entity::get_Alive()
extern "C" IL2CPP_METHOD_ATTR bool Entity_get_Alive_m1193177492 (Entity_t3391956725 * __this, const RuntimeMethod* method);
// DeadScreen DeadScreen::get_Instance()
extern "C" IL2CPP_METHOD_ATTR DeadScreen_t3234016418 * DeadScreen_get_Instance_m1284687975 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.Void DeadScreen::Show(System.String)
extern "C" IL2CPP_METHOD_ATTR void DeadScreen_Show_m3338567005 (DeadScreen_t3234016418 * __this, String_t* ___message0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Input::get_anyKeyDown()
extern "C" IL2CPP_METHOD_ATTR bool Input_get_anyKeyDown_m1564765341 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.Void UnityEngine.SceneManagement.SceneManager::LoadScene(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void SceneManager_LoadScene_m3463216446 (RuntimeObject * __this /* static, unused */, int32_t p0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::MoveTowards(UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
extern "C" IL2CPP_METHOD_ATTR Vector3_t3722313464  Vector3_MoveTowards_m2786395547 (RuntimeObject * __this /* static, unused */, Vector3_t3722313464  p0, Vector3_t3722313464  p1, float p2, const RuntimeMethod* method);
// !!0 UnityEngine.Object::FindObjectOfType<DeadScreen>()
#define Object_FindObjectOfType_TisDeadScreen_t3234016418_m2550196054(__this /* static, unused */, method) ((  DeadScreen_t3234016418 * (*) (RuntimeObject * /* static, unused */, const RuntimeMethod*))Object_FindObjectOfType_TisRuntimeObject_m2612646359_gshared)(__this /* static, unused */, method)
// System.Void DeadScreen::Hide()
extern "C" IL2CPP_METHOD_ATTR void DeadScreen_Hide_m4202979524 (DeadScreen_t3234016418 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void GameObject_SetActive_m796801857 (GameObject_t1113636619 * __this, bool p0, const RuntimeMethod* method);
// System.Collections.IEnumerator DeadScreen::FadeInBack()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* DeadScreen_FadeInBack_m2646124790 (DeadScreen_t3234016418 * __this, const RuntimeMethod* method);
// System.Void DeadScreen/<FadeInBack>c__Iterator0::.ctor()
extern "C" IL2CPP_METHOD_ATTR void U3CFadeInBackU3Ec__Iterator0__ctor_m2498171351 (U3CFadeInBackU3Ec__Iterator0_t2620013686 * __this, const RuntimeMethod* method);
// UnityEngine.Color UnityEngine.Color::Lerp(UnityEngine.Color,UnityEngine.Color,System.Single)
extern "C" IL2CPP_METHOD_ATTR Color_t2555686324  Color_Lerp_m973389909 (RuntimeObject * __this /* static, unused */, Color_t2555686324  p0, Color_t2555686324  p1, float p2, const RuntimeMethod* method);
// UnityEngine.Color UnityEngine.Color::get_red()
extern "C" IL2CPP_METHOD_ATTR Color_t2555686324  Color_get_red_m3227813939 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// UnityEngine.Color UnityEngine.Color::get_white()
extern "C" IL2CPP_METHOD_ATTR Color_t2555686324  Color_get_white_m332174077 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// !!0 UnityEngine.Object::Instantiate<UnityEngine.GameObject>(!!0,UnityEngine.Transform,System.Boolean)
#define Object_Instantiate_TisGameObject_t1113636619_m4130575780(__this /* static, unused */, p0, p1, p2, method) ((  GameObject_t1113636619 * (*) (RuntimeObject * /* static, unused */, GameObject_t1113636619 *, Transform_t3600365921 *, bool, const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_m1858812370_gshared)(__this /* static, unused */, p0, p1, p2, method)
// System.Collections.IEnumerator DeathParticle::DestorySelf()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* DeathParticle_DestorySelf_m475054106 (DeathParticle_t1563849671 * __this, const RuntimeMethod* method);
// System.Void DeathParticle/<DestorySelf>c__Iterator0::.ctor()
extern "C" IL2CPP_METHOD_ATTR void U3CDestorySelfU3Ec__Iterator0__ctor_m4093584260 (U3CDestorySelfU3Ec__Iterator0_t3880288534 * __this, const RuntimeMethod* method);
// !!0[] UnityEngine.Component::GetComponentsInChildren<Particle>()
#define Component_GetComponentsInChildren_TisParticle_t3168132017_m4250776686(__this, method) ((  ParticleU5BU5D_t3335713388* (*) (Component_t1923634451 *, const RuntimeMethod*))Component_GetComponentsInChildren_TisRuntimeObject_m1308288322_gshared)(__this, method)
// System.String System.String::Concat(System.Object,System.Object)
extern "C" IL2CPP_METHOD_ATTR String_t* String_Concat_m904156431 (RuntimeObject * __this /* static, unused */, RuntimeObject * p0, RuntimeObject * p1, const RuntimeMethod* method);
// System.Void System.Exception::.ctor(System.String)
extern "C" IL2CPP_METHOD_ATTR void Exception__ctor_m1152696503 (Exception_t * __this, String_t* p0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Behaviour::get_enabled()
extern "C" IL2CPP_METHOD_ATTR bool Behaviour_get_enabled_m753527255 (Behaviour_t1437897464 * __this, const RuntimeMethod* method);
// MessagePopup MessagePopup::get_Instance()
extern "C" IL2CPP_METHOD_ATTR MessagePopup_t1375170899 * MessagePopup_get_Instance_m3005294533 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.Void MessagePopup::ShowMessage(System.String,System.Single)
extern "C" IL2CPP_METHOD_ATTR void MessagePopup_ShowMessage_m3946694855 (MessagePopup_t1375170899 * __this, String_t* ___message0, float ___duration1, const RuntimeMethod* method);
// System.Boolean UnityEngine.Input::GetKeyDown(UnityEngine.KeyCode)
extern "C" IL2CPP_METHOD_ATTR bool Input_GetKeyDown_m17791917 (RuntimeObject * __this /* static, unused */, int32_t p0, const RuntimeMethod* method);
// LevelLoader LevelLoader::get_Instance()
extern "C" IL2CPP_METHOD_ATTR LevelLoader_t3964987435 * LevelLoader_get_Instance_m1614870452 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.Void LevelLoader::LoadLevel(DoorDirection)
extern "C" IL2CPP_METHOD_ATTR void LevelLoader_LoadLevel_m2719355285 (LevelLoader_t3964987435 * __this, int32_t ___doorDirection0, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
extern "C" IL2CPP_METHOD_ATTR Transform_t3600365921 * GameObject_get_transform_m1369836730 (GameObject_t1113636619 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Vector3::Distance(UnityEngine.Vector3,UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR float Vector3_Distance_m886789632 (RuntimeObject * __this /* static, unused */, Vector3_t3722313464  p0, Vector3_t3722313464  p1, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Subtraction(UnityEngine.Vector3,UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR Vector3_t3722313464  Vector3_op_Subtraction_m3073674971 (RuntimeObject * __this /* static, unused */, Vector3_t3722313464  p0, Vector3_t3722313464  p1, const RuntimeMethod* method);
// System.Void UnityEngine.Vector3::Normalize()
extern "C" IL2CPP_METHOD_ATTR void Vector3_Normalize_m914904454 (Vector3_t3722313464 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<UnityEngine.Rigidbody2D>()
#define Component_GetComponent_TisRigidbody2D_t939494601_m1531613439(__this, method) ((  Rigidbody2D_t939494601 * (*) (Component_t1923634451 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m2906321015_gshared)(__this, method)
// System.Void UnityEngine.Rigidbody2D::AddForce(UnityEngine.Vector2,UnityEngine.ForceMode2D)
extern "C" IL2CPP_METHOD_ATTR void Rigidbody2D_AddForce_m1099013366 (Rigidbody2D_t939494601 * __this, Vector2_t2156229523  p0, int32_t p1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<EntityState,System.String>::.ctor()
#define Dictionary_2__ctor_m327346751(__this, method) ((  void (*) (Dictionary_2_t26093461 *, const RuntimeMethod*))Dictionary_2__ctor_m2363385667_gshared)(__this, method)
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<EntityStateAnimationMapping>::GetEnumerator()
#define List_1_GetEnumerator_m2765381048(__this, method) ((  Enumerator_t1562220782  (*) (List_1_t3967944201 *, const RuntimeMethod*))List_1_GetEnumerator_m2765381048_gshared)(__this, method)
// !0 System.Collections.Generic.List`1/Enumerator<EntityStateAnimationMapping>::get_Current()
#define Enumerator_get_Current_m4060103381(__this, method) ((  EntityStateAnimationMapping_t2495869459  (*) (Enumerator_t1562220782 *, const RuntimeMethod*))Enumerator_get_Current_m4060103381_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<EntityState,System.String>::Add(!0,!1)
#define Dictionary_2_Add_m3007986313(__this, p0, p1, method) ((  void (*) (Dictionary_2_t26093461 *, int32_t, String_t*, const RuntimeMethod*))Dictionary_2_Add_m1737166491_gshared)(__this, p0, p1, method)
// System.Boolean System.Collections.Generic.List`1/Enumerator<EntityStateAnimationMapping>::MoveNext()
#define Enumerator_MoveNext_m1755039323(__this, method) ((  bool (*) (Enumerator_t1562220782 *, const RuntimeMethod*))Enumerator_MoveNext_m1755039323_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1/Enumerator<EntityStateAnimationMapping>::Dispose()
#define Enumerator_Dispose_m2046819164(__this, method) ((  void (*) (Enumerator_t1562220782 *, const RuntimeMethod*))Enumerator_Dispose_m2046819164_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<EntityStateAnimationMapping>::Clear()
#define List_1_Clear_m3690193696(__this, method) ((  void (*) (List_1_t3967944201 *, const RuntimeMethod*))List_1_Clear_m3690193696_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<EntityState,System.String>::ContainsKey(!0)
#define Dictionary_2_ContainsKey_m1345678609(__this, p0, method) ((  bool (*) (Dictionary_2_t26093461 *, int32_t, const RuntimeMethod*))Dictionary_2_ContainsKey_m3356584079_gshared)(__this, p0, method)
// !1 System.Collections.Generic.Dictionary`2<EntityState,System.String>::get_Item(!0)
#define Dictionary_2_get_Item_m2654463680(__this, p0, method) ((  String_t* (*) (Dictionary_2_t26093461 *, int32_t, const RuntimeMethod*))Dictionary_2_get_Item_m1002805246_gshared)(__this, p0, method)
// System.Void UnityEngine.Animator::Play(System.String)
extern "C" IL2CPP_METHOD_ATTR void Animator_Play_m1697843332 (Animator_t434523843 * __this, String_t* p0, const RuntimeMethod* method);
// System.Void UnityEngine.SpriteRenderer::set_flipX(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void SpriteRenderer_set_flipX_m126972045 (SpriteRenderer_t3235626157 * __this, bool p0, const RuntimeMethod* method);
// System.Void Entity::Die()
extern "C" IL2CPP_METHOD_ATTR void Entity_Die_m1951964753 (Entity_t3391956725 * __this, const RuntimeMethod* method);
// PrefabResource PrefabResource::get_Instance()
extern "C" IL2CPP_METHOD_ATTR PrefabResource_t3713134029 * PrefabResource_get_Instance_m593630871 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Quaternion::Euler(System.Single,System.Single,System.Single)
extern "C" IL2CPP_METHOD_ATTR Quaternion_t2301928331  Quaternion_Euler_m3049309462 (RuntimeObject * __this /* static, unused */, float p0, float p1, float p2, const RuntimeMethod* method);
// !!0 UnityEngine.Object::Instantiate<DeathParticle>(!!0,UnityEngine.Vector3,UnityEngine.Quaternion,UnityEngine.Transform)
#define Object_Instantiate_TisDeathParticle_t1563849671_m1714186665(__this /* static, unused */, p0, p1, p2, p3, method) ((  DeathParticle_t1563849671 * (*) (RuntimeObject * /* static, unused */, DeathParticle_t1563849671 *, Vector3_t3722313464 , Quaternion_t2301928331 , Transform_t3600365921 *, const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_m1193484509_gshared)(__this /* static, unused */, p0, p1, p2, p3, method)
// System.Void DeathParticle::Spawn(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void DeathParticle_Spawn_m1747827968 (DeathParticle_t1563849671 * __this, int32_t ___size0, const RuntimeMethod* method);
// System.Void Entity/OnDie::Invoke()
extern "C" IL2CPP_METHOD_ATTR void OnDie_Invoke_m2375718485 (OnDie_t3469385283 * __this, const RuntimeMethod* method);
// System.Single Weapon::get_CooldownTime()
extern "C" IL2CPP_METHOD_ATTR float Weapon_get_CooldownTime_m1803901553 (Weapon_t4063826929 * __this, const RuntimeMethod* method);
// System.Boolean Entity::get_CanAttack()
extern "C" IL2CPP_METHOD_ATTR bool Entity_get_CanAttack_m1747367931 (Entity_t3391956725 * __this, const RuntimeMethod* method);
// System.Void Entity::ResetAttackTimer()
extern "C" IL2CPP_METHOD_ATTR void Entity_ResetAttackTimer_m2795665490 (Entity_t3391956725 * __this, const RuntimeMethod* method);
// System.Void Weapon::DoAttack(UnityEngine.Transform)
extern "C" IL2CPP_METHOD_ATTR void Weapon_DoAttack_m3684433822 (Weapon_t4063826929 * __this, Transform_t3600365921 * ___attackPosition0, const RuntimeMethod* method);
// System.Void UnityEngine.Application::set_targetFrameRate(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void Application_set_targetFrameRate_m3682352535 (RuntimeObject * __this /* static, unused */, int32_t p0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_one()
extern "C" IL2CPP_METHOD_ATTR Vector3_t3722313464  Vector3_get_one_m1629952498 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.Single UnityEngine.Random::get_value()
extern "C" IL2CPP_METHOD_ATTR float Random_get_value_m3115885645 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_localScale(UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR void Transform_set_localScale_m3053443106 (Transform_t3600365921 * __this, Vector3_t3722313464  p0, const RuntimeMethod* method);
// System.Collections.IEnumerator Grass::PickNewAngle()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* Grass_PickNewAngle_m1899737026 (Grass_t1377767949 * __this, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Transform::get_localRotation()
extern "C" IL2CPP_METHOD_ATTR Quaternion_t2301928331  Transform_get_localRotation_m3487911431 (Transform_t3600365921 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_back()
extern "C" IL2CPP_METHOD_ATTR Vector3_t3722313464  Vector3_get_back_m4077847766 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Quaternion::Euler(UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR Quaternion_t2301928331  Quaternion_Euler_m1803555822 (RuntimeObject * __this /* static, unused */, Vector3_t3722313464  p0, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Quaternion::Lerp(UnityEngine.Quaternion,UnityEngine.Quaternion,System.Single)
extern "C" IL2CPP_METHOD_ATTR Quaternion_t2301928331  Quaternion_Lerp_m1238806789 (RuntimeObject * __this /* static, unused */, Quaternion_t2301928331  p0, Quaternion_t2301928331  p1, float p2, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_localRotation(UnityEngine.Quaternion)
extern "C" IL2CPP_METHOD_ATTR void Transform_set_localRotation_m19445462 (Transform_t3600365921 * __this, Quaternion_t2301928331  p0, const RuntimeMethod* method);
// System.Void Grass/<PickNewAngle>c__Iterator0::.ctor()
extern "C" IL2CPP_METHOD_ATTR void U3CPickNewAngleU3Ec__Iterator0__ctor_m2580022657 (U3CPickNewAngleU3Ec__Iterator0_t696507028 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<Player>()
#define GameObject_GetComponent_TisPlayer_t3266647312_m4068145281(__this, method) ((  Player_t3266647312 * (*) (GameObject_t1113636619 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m2049753423_gshared)(__this, method)
// System.Void Player::AddHealth(System.Single)
extern "C" IL2CPP_METHOD_ATTR void Player_AddHealth_m416419061 (Player_t3266647312 * __this, float ___value0, const RuntimeMethod* method);
// System.Void MusicManager::On()
extern "C" IL2CPP_METHOD_ATTR void MusicManager_On_m182107513 (MusicManager_t3024629483 * __this, const RuntimeMethod* method);
// UnityEngine.UI.Button/ButtonClickedEvent UnityEngine.UI.Button::get_onClick()
extern "C" IL2CPP_METHOD_ATTR ButtonClickedEvent_t48803504 * Button_get_onClick_m2332132945 (Button_t4055032469 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityAction::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void UnityAction__ctor_m772160306 (UnityAction_t3245792599 * __this, RuntimeObject * p0, intptr_t p1, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityEvent::AddListener(UnityEngine.Events.UnityAction)
extern "C" IL2CPP_METHOD_ATTR void UnityEvent_AddListener_m2276267359 (UnityEvent_t2581268647 * __this, UnityAction_t3245792599 * p0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_localPosition()
extern "C" IL2CPP_METHOD_ATTR Vector3_t3722313464  Transform_get_localPosition_m4234289348 (Transform_t3600365921 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_localPosition(UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR void Transform_set_localPosition_m4128471975 (Transform_t3600365921 * __this, Vector3_t3722313464  p0, const RuntimeMethod* method);
// System.Collections.IEnumerator IntroSequence::Intro()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* IntroSequence_Intro_m2395395217 (IntroSequence_t4248026603 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityEvent::RemoveListener(UnityEngine.Events.UnityAction)
extern "C" IL2CPP_METHOD_ATTR void UnityEvent_RemoveListener_m2514219280 (UnityEvent_t2581268647 * __this, UnityAction_t3245792599 * p0, const RuntimeMethod* method);
// System.Void IntroSequence/<Intro>c__Iterator0::.ctor()
extern "C" IL2CPP_METHOD_ATTR void U3CIntroU3Ec__Iterator0__ctor_m317264222 (U3CIntroU3Ec__Iterator0_t2006384748 * __this, const RuntimeMethod* method);
// System.Void IntroSequence/<PlayerWalkUp>c__Iterator1::.ctor()
extern "C" IL2CPP_METHOD_ATTR void U3CPlayerWalkUpU3Ec__Iterator1__ctor_m3934709153 (U3CPlayerWalkUpU3Ec__Iterator1_t3977936990 * __this, const RuntimeMethod* method);
// System.Void IntroSequence/<WaitForPlayClick>c__Iterator2::.ctor()
extern "C" IL2CPP_METHOD_ATTR void U3CWaitForPlayClickU3Ec__Iterator2__ctor_m2435075689 (U3CWaitForPlayClickU3Ec__Iterator2_t2451926618 * __this, const RuntimeMethod* method);
// System.Void IntroSequence/<FadeInButton>c__Iterator3::.ctor()
extern "C" IL2CPP_METHOD_ATTR void U3CFadeInButtonU3Ec__Iterator3__ctor_m1758581407 (U3CFadeInButtonU3Ec__Iterator3_t3780138571 * __this, const RuntimeMethod* method);
// System.Void IntroSequence/<FadeOutButton>c__Iterator4::.ctor()
extern "C" IL2CPP_METHOD_ATTR void U3CFadeOutButtonU3Ec__Iterator4__ctor_m963961658 (U3CFadeOutButtonU3Ec__Iterator4_t2877370097 * __this, const RuntimeMethod* method);
// System.Void IntroSequence/<PlayerWalkOffscreen>c__Iterator5::.ctor()
extern "C" IL2CPP_METHOD_ATTR void U3CPlayerWalkOffscreenU3Ec__Iterator5__ctor_m4236651043 (U3CPlayerWalkOffscreenU3Ec__Iterator5_t3609804094 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<UnityEngine.UI.Image>()
#define Component_GetComponent_TisImage_t2670269651_m980647750(__this, method) ((  Image_t2670269651 * (*) (Component_t1923634451 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m2906321015_gshared)(__this, method)
// !!0 UnityEngine.Component::GetComponentInChildren<UnityEngine.UI.Text>()
#define Component_GetComponentInChildren_TisText_t1901882714_m396351542(__this, method) ((  Text_t1901882714 * (*) (Component_t1923634451 *, const RuntimeMethod*))Component_GetComponentInChildren_TisRuntimeObject_m1033527003_gshared)(__this, method)
// System.Single UnityEngine.UI.Image::get_fillAmount()
extern "C" IL2CPP_METHOD_ATTR float Image_get_fillAmount_m2193224718 (Image_t2670269651 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Mathf::Lerp(System.Single,System.Single,System.Single)
extern "C" IL2CPP_METHOD_ATTR float Mathf_Lerp_m1004423579 (RuntimeObject * __this /* static, unused */, float p0, float p1, float p2, const RuntimeMethod* method);
// System.Void UnityEngine.UI.Image::set_fillAmount(System.Single)
extern "C" IL2CPP_METHOD_ATTR void Image_set_fillAmount_m3737925590 (Image_t2670269651 * __this, float p0, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<PlayerHealthBar>()
#define GameObject_GetComponent_TisPlayerHealthBar_t2127847235_m2834258027(__this, method) ((  PlayerHealthBar_t2127847235 * (*) (GameObject_t1113636619 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m2049753423_gshared)(__this, method)
// System.Collections.IEnumerator IntroSequence::PlayerWalkUp()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* IntroSequence_PlayerWalkUp_m3501030825 (IntroSequence_t4248026603 * __this, const RuntimeMethod* method);
// System.Collections.IEnumerator IntroSequence::WaitForPlayClick()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* IntroSequence_WaitForPlayClick_m1494139642 (IntroSequence_t4248026603 * __this, const RuntimeMethod* method);
// System.Collections.IEnumerator IntroSequence::PlayerWalkOffscreen()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* IntroSequence_PlayerWalkOffscreen_m1885669268 (IntroSequence_t4248026603 * __this, const RuntimeMethod* method);
// UnityEngine.GameObject UnityEngine.GameObject::Find(System.String)
extern "C" IL2CPP_METHOD_ATTR GameObject_t1113636619 * GameObject_Find_m2032535176 (RuntimeObject * __this /* static, unused */, String_t* p0, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Vector2::get_up()
extern "C" IL2CPP_METHOD_ATTR Vector2_t2156229523  Vector2_get_up_m2647420593 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.Collections.IEnumerator IntroSequence::FadeInButton()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* IntroSequence_FadeInButton_m2572672586 (IntroSequence_t4248026603 * __this, const RuntimeMethod* method);
// System.Collections.IEnumerator IntroSequence::FadeOutButton()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* IntroSequence_FadeOutButton_m1652046706 (IntroSequence_t4248026603 * __this, const RuntimeMethod* method);
// System.Void CameraFollow::JumpTo()
extern "C" IL2CPP_METHOD_ATTR void CameraFollow_JumpTo_m933176623 (CameraFollow_t129522575 * __this, const RuntimeMethod* method);
// !!0[] UnityEngine.Component::GetComponentsInChildren<Door>()
#define Component_GetComponentsInChildren_TisDoor_t3715198229_m363290377(__this, method) ((  DoorU5BU5D_t160537336* (*) (Component_t1923634451 *, const RuntimeMethod*))Component_GetComponentsInChildren_TisRuntimeObject_m1308288322_gshared)(__this, method)
// DoorDirection Door::get_DoorDirection()
extern "C" IL2CPP_METHOD_ATTR int32_t Door_get_DoorDirection_m2149117971 (Door_t3715198229 * __this, const RuntimeMethod* method);
// DoorDirection Door::Opposite(DoorDirection)
extern "C" IL2CPP_METHOD_ATTR int32_t Door_Opposite_m4194424780 (RuntimeObject * __this /* static, unused */, int32_t ___direction0, const RuntimeMethod* method);
// !!0 UnityEngine.Object::FindObjectOfType<LevelLoader>()
#define Object_FindObjectOfType_TisLevelLoader_t3964987435_m1930945093(__this /* static, unused */, method) ((  LevelLoader_t3964987435 * (*) (RuntimeObject * /* static, unused */, const RuntimeMethod*))Object_FindObjectOfType_TisRuntimeObject_m2612646359_gshared)(__this /* static, unused */, method)
// System.Void UnityEngine.Object::DontDestroyOnLoad(UnityEngine.Object)
extern "C" IL2CPP_METHOD_ATTR void Object_DontDestroyOnLoad_m166252750 (RuntimeObject * __this /* static, unused */, Object_t631007953 * p0, const RuntimeMethod* method);
// !!0[] UnityEngine.Object::FindObjectsOfType<Level>()
#define Object_FindObjectsOfType_TisLevel_t2237665516_m4214053556(__this /* static, unused */, method) ((  LevelU5BU5D_t979096037* (*) (RuntimeObject * /* static, unused */, const RuntimeMethod*))Object_FindObjectsOfType_TisRuntimeObject_m2776316817_gshared)(__this /* static, unused */, method)
// !!0[] UnityEngine.Object::FindObjectsOfType<Weapon>()
#define Object_FindObjectsOfType_TisWeapon_t4063826929_m3634948528(__this /* static, unused */, method) ((  WeaponU5BU5D_t718049580* (*) (RuntimeObject * /* static, unused */, const RuntimeMethod*))Object_FindObjectsOfType_TisRuntimeObject_m2776316817_gshared)(__this /* static, unused */, method)
// Weapon Entity::get_CurrentWeapon()
extern "C" IL2CPP_METHOD_ATTR Weapon_t4063826929 * Entity_get_CurrentWeapon_m2943287280 (Entity_t3391956725 * __this, const RuntimeMethod* method);
// !!0[] UnityEngine.Object::FindObjectsOfType<HealthPickup>()
#define Object_FindObjectsOfType_TisHealthPickup_t2182775939_m3785758616(__this /* static, unused */, method) ((  HealthPickupU5BU5D_t3497542162* (*) (RuntimeObject * /* static, unused */, const RuntimeMethod*))Object_FindObjectsOfType_TisRuntimeObject_m2776316817_gshared)(__this /* static, unused */, method)
// !!0[] UnityEngine.Object::FindObjectsOfType<Entity>()
#define Object_FindObjectsOfType_TisEntity_t3391956725_m1410175250(__this /* static, unused */, method) ((  EntityU5BU5D_t1586060696* (*) (RuntimeObject * /* static, unused */, const RuntimeMethod*))Object_FindObjectsOfType_TisRuntimeObject_m2776316817_gshared)(__this /* static, unused */, method)
// System.Void LevelLoader::DestoryAllLevels()
extern "C" IL2CPP_METHOD_ATTR void LevelLoader_DestoryAllLevels_m950108988 (LevelLoader_t3964987435 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<Level>::.ctor()
#define List_1__ctor_m489004955(__this, method) ((  void (*) (List_1_t3709740258 *, const RuntimeMethod*))List_1__ctor_m2321703786_gshared)(__this, method)
// System.Boolean Level::ContainsEntrance(DoorDirection)
extern "C" IL2CPP_METHOD_ATTR bool Level_ContainsEntrance_m3249026668 (Level_t2237665516 * __this, int32_t ___direction0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<Level>::Add(!0)
#define List_1_Add_m270033829(__this, p0, method) ((  void (*) (List_1_t3709740258 *, Level_t2237665516 *, const RuntimeMethod*))List_1_Add_m3338814081_gshared)(__this, p0, method)
// System.Int32 System.Collections.Generic.List`1<Level>::get_Count()
#define List_1_get_Count_m157552029(__this, method) ((  int32_t (*) (List_1_t3709740258 *, const RuntimeMethod*))List_1_get_Count_m2934127733_gshared)(__this, method)
// !0 System.Collections.Generic.List`1<Level>::get_Item(System.Int32)
#define List_1_get_Item_m1639925114(__this, p0, method) ((  Level_t2237665516 * (*) (List_1_t3709740258 *, int32_t, const RuntimeMethod*))List_1_get_Item_m2287542950_gshared)(__this, p0, method)
// !!0 UnityEngine.Object::Instantiate<Level>(!!0)
#define Object_Instantiate_TisLevel_t2237665516_m21667887(__this /* static, unused */, p0, method) ((  Level_t2237665516 * (*) (RuntimeObject * /* static, unused */, Level_t2237665516 *, const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_m2446893047_gshared)(__this /* static, unused */, p0, method)
// System.Void Level::Load(DoorDirection)
extern "C" IL2CPP_METHOD_ATTR void Level_Load_m236525255 (Level_t2237665516 * __this, int32_t ___fromDirection0, const RuntimeMethod* method);
// System.Void LevelLoader::CustomSpawn(Level)
extern "C" IL2CPP_METHOD_ATTR void LevelLoader_CustomSpawn_m1377860924 (LevelLoader_t3964987435 * __this, Level_t2237665516 * ___level0, const RuntimeMethod* method);
// System.Void LevelLoader::Spawn(Level,Weapon)
extern "C" IL2CPP_METHOD_ATTR void LevelLoader_Spawn_m506406773 (LevelLoader_t3964987435 * __this, Level_t2237665516 * ___level0, Weapon_t4063826929 * ___item1, const RuntimeMethod* method);
// System.Void LevelLoader::Spawn(Level,Entity)
extern "C" IL2CPP_METHOD_ATTR void LevelLoader_Spawn_m2273037782 (LevelLoader_t3964987435 * __this, Level_t2237665516 * ___level0, Entity_t3391956725 * ___enemy1, const RuntimeMethod* method);
// System.Void LevelLoader::SpawnRandomItem(Level)
extern "C" IL2CPP_METHOD_ATTR void LevelLoader_SpawnRandomItem_m2977884513 (LevelLoader_t3964987435 * __this, Level_t2237665516 * ___level0, const RuntimeMethod* method);
// System.Void UnityEngine.SceneManagement.SceneManager::LoadScene(System.Int32,UnityEngine.SceneManagement.LoadSceneMode)
extern "C" IL2CPP_METHOD_ATTR void SceneManager_LoadScene_m3267304740 (RuntimeObject * __this /* static, unused */, int32_t p0, int32_t p1, const RuntimeMethod* method);
// Weapon LevelLoader::GetRandomWeapon()
extern "C" IL2CPP_METHOD_ATTR Weapon_t4063826929 * LevelLoader_GetRandomWeapon_m1670875745 (LevelLoader_t3964987435 * __this, const RuntimeMethod* method);
// System.Void LevelLoader::Spawn(Level,HealthPickup)
extern "C" IL2CPP_METHOD_ATTR void LevelLoader_Spawn_m3218970357 (LevelLoader_t3964987435 * __this, Level_t2237665516 * ___level0, HealthPickup_t2182775939 * ___item1, const RuntimeMethod* method);
// UnityEngine.GameObject[] Level::get_ItemSpawnLocations()
extern "C" IL2CPP_METHOD_ATTR GameObjectU5BU5D_t3328599146* Level_get_ItemSpawnLocations_m3269923615 (Level_t2237665516 * __this, const RuntimeMethod* method);
// UnityEngine.GameObject Level::GetRandomItemSpawnLocation()
extern "C" IL2CPP_METHOD_ATTR GameObject_t1113636619 * Level_GetRandomItemSpawnLocation_m2888148191 (Level_t2237665516 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Object::Instantiate<Weapon>(!!0,UnityEngine.Vector3,UnityEngine.Quaternion,UnityEngine.Transform)
#define Object_Instantiate_TisWeapon_t4063826929_m4119154349(__this /* static, unused */, p0, p1, p2, p3, method) ((  Weapon_t4063826929 * (*) (RuntimeObject * /* static, unused */, Weapon_t4063826929 *, Vector3_t3722313464 , Quaternion_t2301928331 , Transform_t3600365921 *, const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_m1193484509_gshared)(__this /* static, unused */, p0, p1, p2, p3, method)
// !!0 UnityEngine.Object::Instantiate<HealthPickup>(!!0,UnityEngine.Vector3,UnityEngine.Quaternion,UnityEngine.Transform)
#define Object_Instantiate_TisHealthPickup_t2182775939_m3135568745(__this /* static, unused */, p0, p1, p2, p3, method) ((  HealthPickup_t2182775939 * (*) (RuntimeObject * /* static, unused */, HealthPickup_t2182775939 *, Vector3_t3722313464 , Quaternion_t2301928331 , Transform_t3600365921 *, const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_m1193484509_gshared)(__this /* static, unused */, p0, p1, p2, p3, method)
// UnityEngine.GameObject Level::GetRandomEnemySpawnLocation()
extern "C" IL2CPP_METHOD_ATTR GameObject_t1113636619 * Level_GetRandomEnemySpawnLocation_m1059060116 (Level_t2237665516 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Object::Instantiate<Entity>(!!0,UnityEngine.Vector3,UnityEngine.Quaternion,UnityEngine.Transform)
#define Object_Instantiate_TisEntity_t3391956725_m3915256508(__this /* static, unused */, p0, p1, p2, p3, method) ((  Entity_t3391956725 * (*) (RuntimeObject * /* static, unused */, Entity_t3391956725 *, Vector3_t3722313464 , Quaternion_t2301928331 , Transform_t3600365921 *, const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_m1193484509_gshared)(__this /* static, unused */, p0, p1, p2, p3, method)
// !!0 UnityEngine.Object::FindObjectOfType<MessagePopup>()
#define Object_FindObjectOfType_TisMessagePopup_t1375170899_m653125726(__this /* static, unused */, method) ((  MessagePopup_t1375170899 * (*) (RuntimeObject * /* static, unused */, const RuntimeMethod*))Object_FindObjectOfType_TisRuntimeObject_m2612646359_gshared)(__this /* static, unused */, method)
// System.Void System.Collections.Generic.Queue`1<Message>::.ctor()
#define Queue_1__ctor_m1832640620(__this, method) ((  void (*) (Queue_1_t4105026876 *, const RuntimeMethod*))Queue_1__ctor_m3749217910_gshared)(__this, method)
// System.Void Message::.ctor(System.String,System.Single)
extern "C" IL2CPP_METHOD_ATTR void Message__ctor_m1021180616 (Message_t4258767382 * __this, String_t* ___m0, float ___d1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Queue`1<Message>::Enqueue(!0)
#define Queue_1_Enqueue_m2658102913(__this, p0, method) ((  void (*) (Queue_1_t4105026876 *, Message_t4258767382 *, const RuntimeMethod*))Queue_1_Enqueue_m1868480850_gshared)(__this, p0, method)
// System.Int32 System.Collections.Generic.Queue`1<Message>::get_Count()
#define Queue_1_get_Count_m816568897(__this, method) ((  int32_t (*) (Queue_1_t4105026876 *, const RuntimeMethod*))Queue_1_get_Count_m2496300460_gshared)(__this, method)
// System.Collections.IEnumerator MessagePopup::ShowNext()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* MessagePopup_ShowNext_m2695065269 (MessagePopup_t1375170899 * __this, const RuntimeMethod* method);
// System.Void MessagePopup/<ShowNext>c__Iterator0::.ctor()
extern "C" IL2CPP_METHOD_ATTR void U3CShowNextU3Ec__Iterator0__ctor_m2092935258 (U3CShowNextU3Ec__Iterator0_t3465437423 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.Queue`1<Message>::Dequeue()
#define Queue_1_Dequeue_m3764746855(__this, method) ((  Message_t4258767382 * (*) (Queue_1_t4105026876 *, const RuntimeMethod*))Queue_1_Dequeue_m3550993416_gshared)(__this, method)
// !!0 UnityEngine.Object::FindObjectOfType<MusicManager>()
#define Object_FindObjectOfType_TisMusicManager_t3024629483_m1742852711(__this /* static, unused */, method) ((  MusicManager_t3024629483 * (*) (RuntimeObject * /* static, unused */, const RuntimeMethod*))Object_FindObjectOfType_TisRuntimeObject_m2612646359_gshared)(__this /* static, unused */, method)
// System.Void MusicManager/<PlayNext>c__Iterator0::.ctor()
extern "C" IL2CPP_METHOD_ATTR void U3CPlayNextU3Ec__Iterator0__ctor_m213754553 (U3CPlayNextU3Ec__Iterator0_t875241714 * __this, const RuntimeMethod* method);
// System.Void MusicManager/<FadeOut>c__Iterator1::.ctor()
extern "C" IL2CPP_METHOD_ATTR void U3CFadeOutU3Ec__Iterator1__ctor_m3476271135 (U3CFadeOutU3Ec__Iterator1_t1868721799 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.AudioSource::Stop()
extern "C" IL2CPP_METHOD_ATTR void AudioSource_Stop_m2682712816 (AudioSource_t3935305588 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.AudioSource::set_volume(System.Single)
extern "C" IL2CPP_METHOD_ATTR void AudioSource_set_volume_m1273312851 (AudioSource_t3935305588 * __this, float p0, const RuntimeMethod* method);
// System.Collections.IEnumerator MusicManager::PlayNext()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* MusicManager_PlayNext_m590115398 (MusicManager_t3024629483 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.AudioSource::set_loop(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void AudioSource_set_loop_m3659884460 (AudioSource_t3935305588 * __this, bool p0, const RuntimeMethod* method);
// System.Void UnityEngine.AudioSource::set_clip(UnityEngine.AudioClip)
extern "C" IL2CPP_METHOD_ATTR void AudioSource_set_clip_m31653938 (AudioSource_t3935305588 * __this, AudioClip_t3680889665 * p0, const RuntimeMethod* method);
// System.Boolean UnityEngine.AudioSource::get_isPlaying()
extern "C" IL2CPP_METHOD_ATTR bool AudioSource_get_isPlaying_m1896551654 (AudioSource_t3935305588 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<UnityEngine.SpriteRenderer>()
#define Component_GetComponent_TisSpriteRenderer_t3235626157_m2253180502(__this, method) ((  SpriteRenderer_t3235626157 * (*) (Component_t1923634451 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m2906321015_gshared)(__this, method)
// System.Void UnityEngine.Rigidbody2D::AddTorque(System.Single)
extern "C" IL2CPP_METHOD_ATTR void Rigidbody2D_AddTorque_m1535770154 (Rigidbody2D_t939494601 * __this, float p0, const RuntimeMethod* method);
// UnityEngine.Color UnityEngine.SpriteRenderer::get_color()
extern "C" IL2CPP_METHOD_ATTR Color_t2555686324  SpriteRenderer_get_color_m904197748 (SpriteRenderer_t3235626157 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.SpriteRenderer::set_color(UnityEngine.Color)
extern "C" IL2CPP_METHOD_ATTR void SpriteRenderer_set_color_m3056777566 (SpriteRenderer_t3235626157 * __this, Color_t2555686324  p0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_localScale()
extern "C" IL2CPP_METHOD_ATTR Vector3_t3722313464  Transform_get_localScale_m129152068 (Transform_t3600365921 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::Lerp(UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
extern "C" IL2CPP_METHOD_ATTR Vector3_t3722313464  Vector3_Lerp_m407887542 (RuntimeObject * __this /* static, unused */, Vector3_t3722313464  p0, Vector3_t3722313464  p1, float p2, const RuntimeMethod* method);
// !!0 UnityEngine.Object::Instantiate<UpParticle>(!!0)
#define Object_Instantiate_TisUpParticle_t1684764610_m1310796528(__this /* static, unused */, p0, method) ((  UpParticle_t1684764610 * (*) (RuntimeObject * /* static, unused */, UpParticle_t1684764610 *, const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_m2446893047_gshared)(__this /* static, unused */, p0, method)
// System.Void Entity::.ctor()
extern "C" IL2CPP_METHOD_ATTR void Entity__ctor_m643651842 (Entity_t3391956725 * __this, const RuntimeMethod* method);
// System.Void Entity::Start()
extern "C" IL2CPP_METHOD_ATTR void Entity_Start_m2858852706 (Entity_t3391956725 * __this, const RuntimeMethod* method);
// System.Void Entity/OnDie::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void OnDie__ctor_m2396501215 (OnDie_t3469385283 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Delegate System.Delegate::Combine(System.Delegate,System.Delegate)
extern "C" IL2CPP_METHOD_ATTR Delegate_t1188392813 * Delegate_Combine_m1859655160 (RuntimeObject * __this /* static, unused */, Delegate_t1188392813 * p0, Delegate_t1188392813 * p1, const RuntimeMethod* method);
// System.Void Player::DoMovement()
extern "C" IL2CPP_METHOD_ATTR void Player_DoMovement_m2376241743 (Player_t3266647312 * __this, const RuntimeMethod* method);
// System.Void Player::DoAttack()
extern "C" IL2CPP_METHOD_ATTR void Player_DoAttack_m2661824046 (Player_t3266647312 * __this, const RuntimeMethod* method);
// System.Void Entity::Update()
extern "C" IL2CPP_METHOD_ATTR void Entity_Update_m1477389504 (Entity_t3391956725 * __this, const RuntimeMethod* method);
// System.Boolean Player::get_InputEnabled()
extern "C" IL2CPP_METHOD_ATTR bool Player_get_InputEnabled_m354816550 (Player_t3266647312 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Input::GetKey(UnityEngine.KeyCode)
extern "C" IL2CPP_METHOD_ATTR bool Input_GetKey_m3736388334 (RuntimeObject * __this /* static, unused */, int32_t p0, const RuntimeMethod* method);
// System.Void UnityEngine.Vector2::Normalize()
extern "C" IL2CPP_METHOD_ATTR void Vector2_Normalize_m1906922873 (Vector2_t2156229523 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Vector2::get_magnitude()
extern "C" IL2CPP_METHOD_ATTR float Vector2_get_magnitude_m2752892833 (Vector2_t2156229523 * __this, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Vector2::op_Multiply(UnityEngine.Vector2,System.Single)
extern "C" IL2CPP_METHOD_ATTR Vector2_t2156229523  Vector2_op_Multiply_m2347887432 (RuntimeObject * __this /* static, unused */, Vector2_t2156229523  p0, float p1, const RuntimeMethod* method);
// System.Void UnityEngine.Rigidbody2D::set_velocity(UnityEngine.Vector2)
extern "C" IL2CPP_METHOD_ATTR void Rigidbody2D_set_velocity_m2898400508 (Rigidbody2D_t939494601 * __this, Vector2_t2156229523  p0, const RuntimeMethod* method);
// System.Void Entity::DoWeaponAttack()
extern "C" IL2CPP_METHOD_ATTR void Entity_DoWeaponAttack_m2033153511 (Entity_t3391956725 * __this, const RuntimeMethod* method);
// System.Void LevelLoader::Reset()
extern "C" IL2CPP_METHOD_ATTR void LevelLoader_Reset_m1137860544 (LevelLoader_t3964987435 * __this, const RuntimeMethod* method);
// System.Single Player::get_HealthPerc()
extern "C" IL2CPP_METHOD_ATTR float Player_get_HealthPerc_m578431532 (Player_t3266647312 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Object::FindObjectOfType<PrefabResource>()
#define Object_FindObjectOfType_TisPrefabResource_t3713134029_m3340801862(__this /* static, unused */, method) ((  PrefabResource_t3713134029 * (*) (RuntimeObject * /* static, unused */, const RuntimeMethod*))Object_FindObjectOfType_TisRuntimeObject_m2612646359_gshared)(__this /* static, unused */, method)
// System.Collections.IEnumerator ScreenShake::DoShake(System.Single)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* ScreenShake_DoShake_m717519948 (ScreenShake_t2214968455 * __this, float ___strength0, const RuntimeMethod* method);
// System.Void ScreenShake/<DoShake>c__Iterator0::.ctor()
extern "C" IL2CPP_METHOD_ATTR void U3CDoShakeU3Ec__Iterator0__ctor_m2901161340 (U3CDoShakeU3Ec__Iterator0_t3406541319 * __this, const RuntimeMethod* method);
// System.Void EnemyNodeComparer::.ctor(SkellyAI)
extern "C" IL2CPP_METHOD_ATTR void EnemyNodeComparer__ctor_m1176330128 (EnemyNodeComparer_t2029075025 * __this, SkellyAI_t2611779661 * ___skelly0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.GameObject>::.ctor()
#define List_1__ctor_m1424466557(__this, method) ((  void (*) (List_1_t2585711361 *, const RuntimeMethod*))List_1__ctor_m2321703786_gshared)(__this, method)
// UnityEngine.GameObject[] UnityEngine.GameObject::FindGameObjectsWithTag(System.String)
extern "C" IL2CPP_METHOD_ATTR GameObjectU5BU5D_t3328599146* GameObject_FindGameObjectsWithTag_m2585173894 (RuntimeObject * __this /* static, unused */, String_t* p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.GameObject>::AddRange(System.Collections.Generic.IEnumerable`1<!0>)
#define List_1_AddRange_m2410301057(__this, p0, method) ((  void (*) (List_1_t2585711361 *, RuntimeObject*, const RuntimeMethod*))List_1_AddRange_m3709462088_gshared)(__this, p0, method)
// System.Void SkellyAI::PickNextNode()
extern "C" IL2CPP_METHOD_ATTR void SkellyAI_PickNextNode_m1968847928 (SkellyAI_t2611779661 * __this, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Vector2::MoveTowards(UnityEngine.Vector2,UnityEngine.Vector2,System.Single)
extern "C" IL2CPP_METHOD_ATTR Vector2_t2156229523  Vector2_MoveTowards_m456668783 (RuntimeObject * __this /* static, unused */, Vector2_t2156229523  p0, Vector2_t2156229523  p1, float p2, const RuntimeMethod* method);
// System.Boolean SkellyAI::At(UnityEngine.GameObject)
extern "C" IL2CPP_METHOD_ATTR bool SkellyAI_At_m3553782217 (SkellyAI_t2611779661 * __this, GameObject_t1113636619 * ___node0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.GameObject>::Sort(System.Collections.Generic.IComparer`1<!0>)
#define List_1_Sort_m4152420986(__this, p0, method) ((  void (*) (List_1_t2585711361 *, RuntimeObject*, const RuntimeMethod*))List_1_Sort_m3841873687_gshared)(__this, p0, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.GameObject>::get_Count()
#define List_1_get_Count_m2812834599(__this, method) ((  int32_t (*) (List_1_t2585711361 *, const RuntimeMethod*))List_1_get_Count_m2934127733_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.GameObject>::Clear()
#define List_1_Clear_m2500309205(__this, method) ((  void (*) (List_1_t2585711361 *, const RuntimeMethod*))List_1_Clear_m3697625829_gshared)(__this, method)
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<UnityEngine.GameObject>::GetEnumerator()
#define List_1_GetEnumerator_m1750140655(__this, method) ((  Enumerator_t179987942  (*) (List_1_t2585711361 *, const RuntimeMethod*))List_1_GetEnumerator_m2930774921_gshared)(__this, method)
// !0 System.Collections.Generic.List`1/Enumerator<UnityEngine.GameObject>::get_Current()
#define Enumerator_get_Current_m4179928398(__this, method) ((  GameObject_t1113636619 * (*) (Enumerator_t179987942 *, const RuntimeMethod*))Enumerator_get_Current_m470245444_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.GameObject>::Contains(!0)
#define List_1_Contains_m4222374550(__this, p0, method) ((  bool (*) (List_1_t2585711361 *, GameObject_t1113636619 *, const RuntimeMethod*))List_1_Contains_m2654125393_gshared)(__this, p0, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.GameObject>::Add(!0)
#define List_1_Add_m2765963565(__this, p0, method) ((  void (*) (List_1_t2585711361 *, GameObject_t1113636619 *, const RuntimeMethod*))List_1_Add_m3338814081_gshared)(__this, p0, method)
// System.Boolean System.Collections.Generic.List`1/Enumerator<UnityEngine.GameObject>::MoveNext()
#define Enumerator_MoveNext_m4286844348(__this, method) ((  bool (*) (Enumerator_t179987942 *, const RuntimeMethod*))Enumerator_MoveNext_m2142368520_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1/Enumerator<UnityEngine.GameObject>::Dispose()
#define Enumerator_Dispose_m1341201278(__this, method) ((  void (*) (Enumerator_t179987942 *, const RuntimeMethod*))Enumerator_Dispose_m3007748546_gshared)(__this, method)
// System.Collections.IEnumerator VoidAI::Jump()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* VoidAI_Jump_m4059975097 (VoidAI_t4181225430 * __this, const RuntimeMethod* method);
// System.Void VoidAI/<Jump>c__Iterator0::.ctor()
extern "C" IL2CPP_METHOD_ATTR void U3CJumpU3Ec__Iterator0__ctor_m4005889191 (U3CJumpU3Ec__Iterator0_t230413210 * __this, const RuntimeMethod* method);
// System.Collections.IEnumerator VoidAI::DoAttacks()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* VoidAI_DoAttacks_m3003784595 (VoidAI_t4181225430 * __this, const RuntimeMethod* method);
// System.Void VoidAI/<DoAttacks>c__Iterator1::.ctor()
extern "C" IL2CPP_METHOD_ATTR void U3CDoAttacksU3Ec__Iterator1__ctor_m3003744452 (U3CDoAttacksU3Ec__Iterator1_t81260554 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<ScreenShake>()
#define Component_GetComponent_TisScreenShake_t2214968455_m1410286607(__this, method) ((  ScreenShake_t2214968455 * (*) (Component_t1923634451 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m2906321015_gshared)(__this, method)
// System.Void ScreenShake::Shake(System.Single)
extern "C" IL2CPP_METHOD_ATTR void ScreenShake_Shake_m3583580630 (ScreenShake_t2214968455 * __this, float ___strength0, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Transform::get_rotation()
extern "C" IL2CPP_METHOD_ATTR Quaternion_t2301928331  Transform_get_rotation_m3502953881 (Transform_t3600365921 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_rotation(UnityEngine.Quaternion)
extern "C" IL2CPP_METHOD_ATTR void Transform_set_rotation_m3524318132 (Transform_t3600365921 * __this, Quaternion_t2301928331  p0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_forward()
extern "C" IL2CPP_METHOD_ATTR Vector3_t3722313464  Vector3_get_forward_m3100859705 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::Rotate(UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR void Transform_Rotate_m720511863 (Transform_t3600365921 * __this, Vector3_t3722313464  p0, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<UnityEngine.AudioSource>()
#define Component_GetComponent_TisAudioSource_t3935305588_m1977431131(__this, method) ((  AudioSource_t3935305588 * (*) (Component_t1923634451 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m2906321015_gshared)(__this, method)
// System.Collections.IEnumerator Weapon::WaitAttackDuration()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* Weapon_WaitAttackDuration_m2587918956 (Weapon_t4063826929 * __this, const RuntimeMethod* method);
// System.Void Weapon/<WaitAttackDuration>c__Iterator0::.ctor()
extern "C" IL2CPP_METHOD_ATTR void U3CWaitAttackDurationU3Ec__Iterator0__ctor_m2235481495 (U3CWaitAttackDurationU3Ec__Iterator0_t664319700 * __this, const RuntimeMethod* method);
// System.Void Entity::AddWeapon(Weapon)
extern "C" IL2CPP_METHOD_ATTR void Entity_AddWeapon_m1181459715 (Entity_t3391956725 * __this, Weapon_t4063826929 * ___weapon0, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String)
extern "C" IL2CPP_METHOD_ATTR String_t* String_Concat_m3937257545 (RuntimeObject * __this /* static, unused */, String_t* p0, String_t* p1, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Division(UnityEngine.Vector3,System.Single)
extern "C" IL2CPP_METHOD_ATTR Vector3_t3722313464  Vector3_op_Division_m510815599 (RuntimeObject * __this /* static, unused */, Vector3_t3722313464  p0, float p1, const RuntimeMethod* method);
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
// System.Void BatAI::.ctor()
extern "C" IL2CPP_METHOD_ATTR void BatAI__ctor_m3608288247 (BatAI_t3670615739 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void BatAI::Update()
extern "C" IL2CPP_METHOD_ATTR void BatAI_Update_m1051438735 (BatAI_t3670615739 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (BatAI_Update_m1051438735_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		Player_t3266647312 * L_0 = __this->get__player_2();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Equality_m1810815630(NULL /*static, unused*/, L_0, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0021;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		Player_t3266647312 * L_2 = Object_FindObjectOfType_TisPlayer_t3266647312_m389548692(NULL /*static, unused*/, /*hidden argument*/Object_FindObjectOfType_TisPlayer_t3266647312_m389548692_RuntimeMethod_var);
		__this->set__player_2(L_2);
		goto IL_00b0;
	}

IL_0021:
	{
		Transform_t3600365921 * L_3 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		Vector3_t3722313464  L_4 = Transform_get_position_m36019626(L_3, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_t2156229523_il2cpp_TypeInfo_var);
		Vector2_t2156229523  L_5 = Vector2_op_Implicit_m4260192859(NULL /*static, unused*/, L_4, /*hidden argument*/NULL);
		Player_t3266647312 * L_6 = __this->get__player_2();
		Transform_t3600365921 * L_7 = Component_get_transform_m3162698980(L_6, /*hidden argument*/NULL);
		Vector3_t3722313464  L_8 = Transform_get_position_m36019626(L_7, /*hidden argument*/NULL);
		Vector2_t2156229523  L_9 = Vector2_op_Implicit_m4260192859(NULL /*static, unused*/, L_8, /*hidden argument*/NULL);
		float L_10 = Vector2_Distance_m3048868881(NULL /*static, unused*/, L_5, L_9, /*hidden argument*/NULL);
		V_0 = L_10;
		float L_11 = V_0;
		float L_12 = __this->get__aggroRange_5();
		if ((!(((float)L_11) < ((float)L_12))))
		{
			goto IL_005f;
		}
	}
	{
		__this->set__active_3((bool)1);
	}

IL_005f:
	{
		bool L_13 = __this->get__active_3();
		if (!L_13)
		{
			goto IL_00b0;
		}
	}
	{
		Transform_t3600365921 * L_14 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		Transform_t3600365921 * L_15 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		Vector3_t3722313464  L_16 = Transform_get_position_m36019626(L_15, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_t2156229523_il2cpp_TypeInfo_var);
		Vector2_t2156229523  L_17 = Vector2_op_Implicit_m4260192859(NULL /*static, unused*/, L_16, /*hidden argument*/NULL);
		Player_t3266647312 * L_18 = __this->get__player_2();
		Transform_t3600365921 * L_19 = Component_get_transform_m3162698980(L_18, /*hidden argument*/NULL);
		Vector3_t3722313464  L_20 = Transform_get_position_m36019626(L_19, /*hidden argument*/NULL);
		Vector2_t2156229523  L_21 = Vector2_op_Implicit_m4260192859(NULL /*static, unused*/, L_20, /*hidden argument*/NULL);
		float L_22 = __this->get__speed_4();
		float L_23 = Time_get_deltaTime_m372706562(NULL /*static, unused*/, /*hidden argument*/NULL);
		Vector2_t2156229523  L_24 = Vector2_Lerp_m854472224(NULL /*static, unused*/, L_17, L_21, ((float)il2cpp_codegen_multiply((float)L_22, (float)L_23)), /*hidden argument*/NULL);
		Vector3_t3722313464  L_25 = Vector2_op_Implicit_m1860157806(NULL /*static, unused*/, L_24, /*hidden argument*/NULL);
		Transform_set_position_m3387557959(L_14, L_25, /*hidden argument*/NULL);
	}

IL_00b0:
	{
		float L_26 = __this->get__currentAttackCooldown_8();
		float L_27 = Time_get_deltaTime_m372706562(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->set__currentAttackCooldown_8(((float)il2cpp_codegen_subtract((float)L_26, (float)L_27)));
		return;
	}
}
// System.Void BatAI::OnCollisionStay2D(UnityEngine.Collision2D)
extern "C" IL2CPP_METHOD_ATTR void BatAI_OnCollisionStay2D_m420987972 (BatAI_t3670615739 * __this, Collision2D_t2842956331 * ___collision0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (BatAI_OnCollisionStay2D_m420987972_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		float L_0 = __this->get__currentAttackCooldown_8();
		if ((!(((float)L_0) <= ((float)(0.0f)))))
		{
			goto IL_0064;
		}
	}
	{
		Player_t3266647312 * L_1 = __this->get__player_2();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_2 = Object_op_Inequality_m4071470834(NULL /*static, unused*/, L_1, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0064;
		}
	}
	{
		Collision2D_t2842956331 * L_3 = ___collision0;
		GameObject_t1113636619 * L_4 = Collision2D_get_gameObject_m1443495885(L_3, /*hidden argument*/NULL);
		Player_t3266647312 * L_5 = __this->get__player_2();
		GameObject_t1113636619 * L_6 = Component_get_gameObject_m442555142(L_5, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_7 = Object_op_Equality_m1810815630(NULL /*static, unused*/, L_4, L_6, /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_0064;
		}
	}
	{
		Player_t3266647312 * L_8 = __this->get__player_2();
		float L_9 = __this->get__damage_6();
		Transform_t3600365921 * L_10 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		Vector3_t3722313464  L_11 = Transform_get_position_m36019626(L_10, /*hidden argument*/NULL);
		Entity_TakeDamage_m239986278(L_8, L_9, L_11, /*hidden argument*/NULL);
		float L_12 = __this->get__attackCooldown_7();
		__this->set__currentAttackCooldown_8(L_12);
	}

IL_0064:
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
// System.Void BossSequence::.ctor()
extern "C" IL2CPP_METHOD_ATTR void BossSequence__ctor_m2479683186 (BossSequence_t1258426188 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void BossSequence::Start()
extern "C" IL2CPP_METHOD_ATTR void BossSequence_Start_m2000204616 (BossSequence_t1258426188 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (BossSequence_Start_m2000204616_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		Player_t3266647312 * L_0 = Object_FindObjectOfType_TisPlayer_t3266647312_m389548692(NULL /*static, unused*/, /*hidden argument*/Object_FindObjectOfType_TisPlayer_t3266647312_m389548692_RuntimeMethod_var);
		__this->set__player_2(L_0);
		Text_t1901882714 * L_1 = __this->get__bossText_6();
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_2 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
		VirtActionInvoker1< String_t* >::Invoke(73 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_1, L_2);
		RuntimeObject* L_3 = BossSequence_Sequence_m4274354410(__this, /*hidden argument*/NULL);
		MonoBehaviour_StartCoroutine_m3411253000(__this, L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Collections.IEnumerator BossSequence::Sequence()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* BossSequence_Sequence_m4274354410 (BossSequence_t1258426188 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (BossSequence_Sequence_m4274354410_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	U3CSequenceU3Ec__Iterator0_t114495004 * V_0 = NULL;
	{
		U3CSequenceU3Ec__Iterator0_t114495004 * L_0 = (U3CSequenceU3Ec__Iterator0_t114495004 *)il2cpp_codegen_object_new(U3CSequenceU3Ec__Iterator0_t114495004_il2cpp_TypeInfo_var);
		U3CSequenceU3Ec__Iterator0__ctor_m1698124521(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CSequenceU3Ec__Iterator0_t114495004 * L_1 = V_0;
		L_1->set_U24this_0(__this);
		U3CSequenceU3Ec__Iterator0_t114495004 * L_2 = V_0;
		return L_2;
	}
}
// System.Collections.IEnumerator BossSequence::FallIn()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* BossSequence_FallIn_m3389816209 (BossSequence_t1258426188 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (BossSequence_FallIn_m3389816209_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	U3CFallInU3Ec__Iterator1_t4176106444 * V_0 = NULL;
	{
		U3CFallInU3Ec__Iterator1_t4176106444 * L_0 = (U3CFallInU3Ec__Iterator1_t4176106444 *)il2cpp_codegen_object_new(U3CFallInU3Ec__Iterator1_t4176106444_il2cpp_TypeInfo_var);
		U3CFallInU3Ec__Iterator1__ctor_m3522289883(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CFallInU3Ec__Iterator1_t4176106444 * L_1 = V_0;
		L_1->set_U24this_2(__this);
		U3CFallInU3Ec__Iterator1_t4176106444 * L_2 = V_0;
		return L_2;
	}
}
// System.Collections.IEnumerator BossSequence::FadeToBlack()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* BossSequence_FadeToBlack_m833894443 (BossSequence_t1258426188 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (BossSequence_FadeToBlack_m833894443_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	U3CFadeToBlackU3Ec__Iterator2_t2817112667 * V_0 = NULL;
	{
		U3CFadeToBlackU3Ec__Iterator2_t2817112667 * L_0 = (U3CFadeToBlackU3Ec__Iterator2_t2817112667 *)il2cpp_codegen_object_new(U3CFadeToBlackU3Ec__Iterator2_t2817112667_il2cpp_TypeInfo_var);
		U3CFadeToBlackU3Ec__Iterator2__ctor_m531709936(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CFadeToBlackU3Ec__Iterator2_t2817112667 * L_1 = V_0;
		L_1->set_U24this_1(__this);
		U3CFadeToBlackU3Ec__Iterator2_t2817112667 * L_2 = V_0;
		return L_2;
	}
}
// System.Collections.IEnumerator BossSequence::FadeIn()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* BossSequence_FadeIn_m752122934 (BossSequence_t1258426188 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (BossSequence_FadeIn_m752122934_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	U3CFadeInU3Ec__Iterator3_t3083571303 * V_0 = NULL;
	{
		U3CFadeInU3Ec__Iterator3_t3083571303 * L_0 = (U3CFadeInU3Ec__Iterator3_t3083571303 *)il2cpp_codegen_object_new(U3CFadeInU3Ec__Iterator3_t3083571303_il2cpp_TypeInfo_var);
		U3CFadeInU3Ec__Iterator3__ctor_m3249463183(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CFadeInU3Ec__Iterator3_t3083571303 * L_1 = V_0;
		L_1->set_U24this_1(__this);
		U3CFadeInU3Ec__Iterator3_t3083571303 * L_2 = V_0;
		return L_2;
	}
}
// System.Collections.IEnumerator BossSequence::WaitForPlayerToEnterTrigger()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* BossSequence_WaitForPlayerToEnterTrigger_m1039393221 (BossSequence_t1258426188 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (BossSequence_WaitForPlayerToEnterTrigger_m1039393221_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	U3CWaitForPlayerToEnterTriggerU3Ec__Iterator4_t2176132566 * V_0 = NULL;
	{
		U3CWaitForPlayerToEnterTriggerU3Ec__Iterator4_t2176132566 * L_0 = (U3CWaitForPlayerToEnterTriggerU3Ec__Iterator4_t2176132566 *)il2cpp_codegen_object_new(U3CWaitForPlayerToEnterTriggerU3Ec__Iterator4_t2176132566_il2cpp_TypeInfo_var);
		U3CWaitForPlayerToEnterTriggerU3Ec__Iterator4__ctor_m4254653211(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CWaitForPlayerToEnterTriggerU3Ec__Iterator4_t2176132566 * L_1 = V_0;
		L_1->set_U24this_0(__this);
		U3CWaitForPlayerToEnterTriggerU3Ec__Iterator4_t2176132566 * L_2 = V_0;
		return L_2;
	}
}
// System.Void BossSequence::OnTriggerEnter2D(UnityEngine.Collider2D)
extern "C" IL2CPP_METHOD_ATTR void BossSequence_OnTriggerEnter2D_m2704645033 (BossSequence_t1258426188 * __this, Collider2D_t2806799626 * ___collision0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (BossSequence_OnTriggerEnter2D_m2704645033_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Collider2D_t2806799626 * L_0 = ___collision0;
		Player_t3266647312 * L_1 = Component_GetComponent_TisPlayer_t3266647312_m3431077271(L_0, /*hidden argument*/Component_GetComponent_TisPlayer_t3266647312_m3431077271_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_2 = Object_op_Implicit_m3574996620(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		__this->set__enteredTrigger_3((bool)1);
	}

IL_0017:
	{
		return;
	}
}
// System.Collections.IEnumerator BossSequence::EnterBoss()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* BossSequence_EnterBoss_m3186382248 (BossSequence_t1258426188 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (BossSequence_EnterBoss_m3186382248_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	U3CEnterBossU3Ec__Iterator5_t1783282016 * V_0 = NULL;
	{
		U3CEnterBossU3Ec__Iterator5_t1783282016 * L_0 = (U3CEnterBossU3Ec__Iterator5_t1783282016 *)il2cpp_codegen_object_new(U3CEnterBossU3Ec__Iterator5_t1783282016_il2cpp_TypeInfo_var);
		U3CEnterBossU3Ec__Iterator5__ctor_m2465863346(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CEnterBossU3Ec__Iterator5_t1783282016 * L_1 = V_0;
		L_1->set_U24this_2(__this);
		U3CEnterBossU3Ec__Iterator5_t1783282016 * L_2 = V_0;
		return L_2;
	}
}
// System.Collections.IEnumerator BossSequence::WaitBossDead()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* BossSequence_WaitBossDead_m3885589739 (BossSequence_t1258426188 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (BossSequence_WaitBossDead_m3885589739_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	U3CWaitBossDeadU3Ec__Iterator6_t3050784709 * V_0 = NULL;
	{
		U3CWaitBossDeadU3Ec__Iterator6_t3050784709 * L_0 = (U3CWaitBossDeadU3Ec__Iterator6_t3050784709 *)il2cpp_codegen_object_new(U3CWaitBossDeadU3Ec__Iterator6_t3050784709_il2cpp_TypeInfo_var);
		U3CWaitBossDeadU3Ec__Iterator6__ctor_m3845333796(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CWaitBossDeadU3Ec__Iterator6_t3050784709 * L_1 = V_0;
		L_1->set_U24this_0(__this);
		U3CWaitBossDeadU3Ec__Iterator6_t3050784709 * L_2 = V_0;
		return L_2;
	}
}
// System.Collections.IEnumerator BossSequence::WinScreen()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* BossSequence_WinScreen_m541912785 (BossSequence_t1258426188 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (BossSequence_WinScreen_m541912785_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	U3CWinScreenU3Ec__Iterator7_t2096093272 * V_0 = NULL;
	{
		U3CWinScreenU3Ec__Iterator7_t2096093272 * L_0 = (U3CWinScreenU3Ec__Iterator7_t2096093272 *)il2cpp_codegen_object_new(U3CWinScreenU3Ec__Iterator7_t2096093272_il2cpp_TypeInfo_var);
		U3CWinScreenU3Ec__Iterator7__ctor_m176835820(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CWinScreenU3Ec__Iterator7_t2096093272 * L_1 = V_0;
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
// System.Void BossSequence/<EnterBoss>c__Iterator5::.ctor()
extern "C" IL2CPP_METHOD_ATTR void U3CEnterBossU3Ec__Iterator5__ctor_m2465863346 (U3CEnterBossU3Ec__Iterator5_t1783282016 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean BossSequence/<EnterBoss>c__Iterator5::MoveNext()
extern "C" IL2CPP_METHOD_ATTR bool U3CEnterBossU3Ec__Iterator5_MoveNext_m3458584578 (U3CEnterBossU3Ec__Iterator5_t1783282016 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CEnterBossU3Ec__Iterator5_MoveNext_m3458584578_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_U24PC_5();
		V_0 = L_0;
		__this->set_U24PC_5((-1));
		uint32_t L_1 = V_0;
		switch (L_1)
		{
			case 0:
			{
				goto IL_0029;
			}
			case 1:
			{
				goto IL_00a2;
			}
			case 2:
			{
				goto IL_0113;
			}
			case 3:
			{
				goto IL_0183;
			}
		}
	}
	{
		goto IL_0207;
	}

IL_0029:
	{
		BossSequence_t1258426188 * L_2 = __this->get_U24this_2();
		Player_t3266647312 * L_3 = L_2->get__player_2();
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_t2156229523_il2cpp_TypeInfo_var);
		Vector2_t2156229523  L_4 = Vector2_get_zero_m540426400(NULL /*static, unused*/, /*hidden argument*/NULL);
		L_3->set__movement_22(L_4);
		BossSequence_t1258426188 * L_5 = __this->get_U24this_2();
		Player_t3266647312 * L_6 = L_5->get__player_2();
		Player_set_InputEnabled_m970961763(L_6, (bool)0, /*hidden argument*/NULL);
		__this->set_U3CcameraPullBackSpeedU3E__0_0((0.5f));
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t3722313464_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_7 = Vector3_get_zero_m1409827619(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->set_U3CoffsetU3E__0_1(L_7);
		goto IL_00a2;
	}

IL_006a:
	{
		Camera_t4157153871 * L_8 = Camera_get_main_m3643453163(NULL /*static, unused*/, /*hidden argument*/NULL);
		Camera_t4157153871 * L_9 = L_8;
		float L_10 = Camera_get_orthographicSize_m3903216845(L_9, /*hidden argument*/NULL);
		float L_11 = __this->get_U3CcameraPullBackSpeedU3E__0_0();
		float L_12 = Time_get_deltaTime_m372706562(NULL /*static, unused*/, /*hidden argument*/NULL);
		Camera_set_orthographicSize_m76971700(L_9, ((float)il2cpp_codegen_add((float)L_10, (float)((float)il2cpp_codegen_multiply((float)L_11, (float)L_12)))), /*hidden argument*/NULL);
		__this->set_U24current_3(NULL);
		bool L_13 = __this->get_U24disposing_4();
		if (L_13)
		{
			goto IL_009d;
		}
	}
	{
		__this->set_U24PC_5(1);
	}

IL_009d:
	{
		goto IL_0209;
	}

IL_00a2:
	{
		Camera_t4157153871 * L_14 = Camera_get_main_m3643453163(NULL /*static, unused*/, /*hidden argument*/NULL);
		float L_15 = Camera_get_orthographicSize_m3903216845(L_14, /*hidden argument*/NULL);
		if ((((float)L_15) < ((float)(0.9f))))
		{
			goto IL_006a;
		}
	}
	{
		BossSequence_t1258426188 * L_16 = __this->get_U24this_2();
		VoidAI_t4181225430 * L_17 = L_16->get__voidAI_4();
		BossSequence_t1258426188 * L_18 = __this->get_U24this_2();
		Player_t3266647312 * L_19 = L_18->get__player_2();
		Transform_t3600365921 * L_20 = Component_get_transform_m3162698980(L_19, /*hidden argument*/NULL);
		Vector3_t3722313464  L_21 = Transform_get_position_m36019626(L_20, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t3722313464_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_22 = Vector3_get_up_m3584168373(NULL /*static, unused*/, /*hidden argument*/NULL);
		Vector3_t3722313464  L_23 = Vector3_op_Multiply_m3376773913(NULL /*static, unused*/, L_22, (0.7f), /*hidden argument*/NULL);
		Vector3_t3722313464  L_24 = Vector3_op_Addition_m779775034(NULL /*static, unused*/, L_21, L_23, /*hidden argument*/NULL);
		VoidAI_JumpTo_m2241273342(L_17, L_24, /*hidden argument*/NULL);
		WaitForSeconds_t1699091251 * L_25 = (WaitForSeconds_t1699091251 *)il2cpp_codegen_object_new(WaitForSeconds_t1699091251_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_m2199082655(L_25, (1.0f), /*hidden argument*/NULL);
		__this->set_U24current_3(L_25);
		bool L_26 = __this->get_U24disposing_4();
		if (L_26)
		{
			goto IL_010e;
		}
	}
	{
		__this->set_U24PC_5(2);
	}

IL_010e:
	{
		goto IL_0209;
	}

IL_0113:
	{
		Camera_t4157153871 * L_27 = Camera_get_main_m3643453163(NULL /*static, unused*/, /*hidden argument*/NULL);
		CameraFollow_t129522575 * L_28 = Component_GetComponent_TisCameraFollow_t129522575_m2586956313(L_27, /*hidden argument*/Component_GetComponent_TisCameraFollow_t129522575_m2586956313_RuntimeMethod_var);
		L_28->set__speed_4((1.0f));
		Camera_t4157153871 * L_29 = Camera_get_main_m3643453163(NULL /*static, unused*/, /*hidden argument*/NULL);
		CameraFollow_t129522575 * L_30 = Component_GetComponent_TisCameraFollow_t129522575_m2586956313(L_29, /*hidden argument*/Component_GetComponent_TisCameraFollow_t129522575_m2586956313_RuntimeMethod_var);
		Vector3_t3722313464  L_31;
		memset(&L_31, 0, sizeof(L_31));
		Vector3__ctor_m3353183577((&L_31), (0.0f), (0.32f), (-10.0f), /*hidden argument*/NULL);
		L_30->set__offset_3(L_31);
		BossSequence_t1258426188 * L_32 = __this->get_U24this_2();
		Text_t1901882714 * L_33 = L_32->get__bossText_6();
		VirtActionInvoker1< String_t* >::Invoke(73 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_33, _stringLiteral1751935316);
		WaitForSeconds_t1699091251 * L_34 = (WaitForSeconds_t1699091251 *)il2cpp_codegen_object_new(WaitForSeconds_t1699091251_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_m2199082655(L_34, (2.0f), /*hidden argument*/NULL);
		__this->set_U24current_3(L_34);
		bool L_35 = __this->get_U24disposing_4();
		if (L_35)
		{
			goto IL_017e;
		}
	}
	{
		__this->set_U24PC_5(3);
	}

IL_017e:
	{
		goto IL_0209;
	}

IL_0183:
	{
		BossSequence_t1258426188 * L_36 = __this->get_U24this_2();
		Text_t1901882714 * L_37 = L_36->get__bossText_6();
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_38 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
		VirtActionInvoker1< String_t* >::Invoke(73 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_37, L_38);
		Camera_t4157153871 * L_39 = Camera_get_main_m3643453163(NULL /*static, unused*/, /*hidden argument*/NULL);
		CameraFollow_t129522575 * L_40 = Component_GetComponent_TisCameraFollow_t129522575_m2586956313(L_39, /*hidden argument*/Component_GetComponent_TisCameraFollow_t129522575_m2586956313_RuntimeMethod_var);
		L_40->set__speed_4((5.0f));
		Camera_t4157153871 * L_41 = Camera_get_main_m3643453163(NULL /*static, unused*/, /*hidden argument*/NULL);
		CameraFollow_t129522575 * L_42 = Component_GetComponent_TisCameraFollow_t129522575_m2586956313(L_41, /*hidden argument*/Component_GetComponent_TisCameraFollow_t129522575_m2586956313_RuntimeMethod_var);
		Vector3_t3722313464  L_43;
		memset(&L_43, 0, sizeof(L_43));
		Vector3__ctor_m3353183577((&L_43), (0.0f), (0.0f), (-10.0f), /*hidden argument*/NULL);
		L_42->set__offset_3(L_43);
		BossSequence_t1258426188 * L_44 = __this->get_U24this_2();
		Player_t3266647312 * L_45 = L_44->get__player_2();
		Player_set_InputEnabled_m970961763(L_45, (bool)1, /*hidden argument*/NULL);
		BossSequence_t1258426188 * L_46 = __this->get_U24this_2();
		VoidAI_t4181225430 * L_47 = L_46->get__voidAI_4();
		VoidAI_Activate_m882747407(L_47, /*hidden argument*/NULL);
		BossSequence_t1258426188 * L_48 = __this->get_U24this_2();
		AudioSource_t3935305588 * L_49 = L_48->get__bossMusic_8();
		AudioSource_Play_m48294159(L_49, /*hidden argument*/NULL);
		__this->set_U24PC_5((-1));
	}

IL_0207:
	{
		return (bool)0;
	}

IL_0209:
	{
		return (bool)1;
	}
}
// System.Object BossSequence/<EnterBoss>c__Iterator5::System.Collections.Generic.IEnumerator<object>.get_Current()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * U3CEnterBossU3Ec__Iterator5_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m2288513933 (U3CEnterBossU3Ec__Iterator5_t1783282016 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U24current_3();
		return L_0;
	}
}
// System.Object BossSequence/<EnterBoss>c__Iterator5::System.Collections.IEnumerator.get_Current()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * U3CEnterBossU3Ec__Iterator5_System_Collections_IEnumerator_get_Current_m2098798460 (U3CEnterBossU3Ec__Iterator5_t1783282016 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U24current_3();
		return L_0;
	}
}
// System.Void BossSequence/<EnterBoss>c__Iterator5::Dispose()
extern "C" IL2CPP_METHOD_ATTR void U3CEnterBossU3Ec__Iterator5_Dispose_m2186822154 (U3CEnterBossU3Ec__Iterator5_t1783282016 * __this, const RuntimeMethod* method)
{
	{
		__this->set_U24disposing_4((bool)1);
		__this->set_U24PC_5((-1));
		return;
	}
}
// System.Void BossSequence/<EnterBoss>c__Iterator5::Reset()
extern "C" IL2CPP_METHOD_ATTR void U3CEnterBossU3Ec__Iterator5_Reset_m2318588171 (U3CEnterBossU3Ec__Iterator5_t1783282016 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CEnterBossU3Ec__Iterator5_Reset_m2318588171_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NotSupportedException_t1314879016 * L_0 = (NotSupportedException_t1314879016 *)il2cpp_codegen_object_new(NotSupportedException_t1314879016_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m2730133172(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0,U3CEnterBossU3Ec__Iterator5_Reset_m2318588171_RuntimeMethod_var);
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
// System.Void BossSequence/<FadeIn>c__Iterator3::.ctor()
extern "C" IL2CPP_METHOD_ATTR void U3CFadeInU3Ec__Iterator3__ctor_m3249463183 (U3CFadeInU3Ec__Iterator3_t3083571303 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean BossSequence/<FadeIn>c__Iterator3::MoveNext()
extern "C" IL2CPP_METHOD_ATTR bool U3CFadeInU3Ec__Iterator3_MoveNext_m1981987002 (U3CFadeInU3Ec__Iterator3_t3083571303 * __this, const RuntimeMethod* method)
{
	uint32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_U24PC_4();
		V_0 = L_0;
		__this->set_U24PC_4((-1));
		uint32_t L_1 = V_0;
		switch (L_1)
		{
			case 0:
			{
				goto IL_0021;
			}
			case 1:
			{
				goto IL_0091;
			}
		}
	}
	{
		goto IL_00c8;
	}

IL_0021:
	{
		BossSequence_t1258426188 * L_2 = __this->get_U24this_1();
		Image_t2670269651 * L_3 = L_2->get__blackOverlay_5();
		Color_t2555686324  L_4 = Color_get_black_m719512684(NULL /*static, unused*/, /*hidden argument*/NULL);
		VirtActionInvoker1< Color_t2555686324  >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_3, L_4);
		__this->set_U3CiU3E__1_0(0);
		goto IL_009f;
	}

IL_0042:
	{
		BossSequence_t1258426188 * L_5 = __this->get_U24this_1();
		Image_t2670269651 * L_6 = L_5->get__blackOverlay_5();
		int32_t L_7 = __this->get_U3CiU3E__1_0();
		Color_t2555686324  L_8;
		memset(&L_8, 0, sizeof(L_8));
		Color__ctor_m2943235014((&L_8), (0.0f), (0.0f), (0.0f), ((float)((float)(((float)((float)((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)100), (int32_t)L_7)))))/(float)(100.0f))), /*hidden argument*/NULL);
		VirtActionInvoker1< Color_t2555686324  >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_6, L_8);
		__this->set_U24current_2(NULL);
		bool L_9 = __this->get_U24disposing_3();
		if (L_9)
		{
			goto IL_008c;
		}
	}
	{
		__this->set_U24PC_4(1);
	}

IL_008c:
	{
		goto IL_00ca;
	}

IL_0091:
	{
		int32_t L_10 = __this->get_U3CiU3E__1_0();
		__this->set_U3CiU3E__1_0(((int32_t)il2cpp_codegen_add((int32_t)L_10, (int32_t)1)));
	}

IL_009f:
	{
		int32_t L_11 = __this->get_U3CiU3E__1_0();
		if ((((int32_t)L_11) < ((int32_t)((int32_t)100))))
		{
			goto IL_0042;
		}
	}
	{
		BossSequence_t1258426188 * L_12 = __this->get_U24this_1();
		Image_t2670269651 * L_13 = L_12->get__blackOverlay_5();
		Color_t2555686324  L_14 = Color_get_clear_m1016382534(NULL /*static, unused*/, /*hidden argument*/NULL);
		VirtActionInvoker1< Color_t2555686324  >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_13, L_14);
		__this->set_U24PC_4((-1));
	}

IL_00c8:
	{
		return (bool)0;
	}

IL_00ca:
	{
		return (bool)1;
	}
}
// System.Object BossSequence/<FadeIn>c__Iterator3::System.Collections.Generic.IEnumerator<object>.get_Current()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * U3CFadeInU3Ec__Iterator3_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m2417635557 (U3CFadeInU3Ec__Iterator3_t3083571303 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U24current_2();
		return L_0;
	}
}
// System.Object BossSequence/<FadeIn>c__Iterator3::System.Collections.IEnumerator.get_Current()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * U3CFadeInU3Ec__Iterator3_System_Collections_IEnumerator_get_Current_m2991318074 (U3CFadeInU3Ec__Iterator3_t3083571303 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U24current_2();
		return L_0;
	}
}
// System.Void BossSequence/<FadeIn>c__Iterator3::Dispose()
extern "C" IL2CPP_METHOD_ATTR void U3CFadeInU3Ec__Iterator3_Dispose_m701448700 (U3CFadeInU3Ec__Iterator3_t3083571303 * __this, const RuntimeMethod* method)
{
	{
		__this->set_U24disposing_3((bool)1);
		__this->set_U24PC_4((-1));
		return;
	}
}
// System.Void BossSequence/<FadeIn>c__Iterator3::Reset()
extern "C" IL2CPP_METHOD_ATTR void U3CFadeInU3Ec__Iterator3_Reset_m2216455399 (U3CFadeInU3Ec__Iterator3_t3083571303 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CFadeInU3Ec__Iterator3_Reset_m2216455399_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NotSupportedException_t1314879016 * L_0 = (NotSupportedException_t1314879016 *)il2cpp_codegen_object_new(NotSupportedException_t1314879016_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m2730133172(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0,U3CFadeInU3Ec__Iterator3_Reset_m2216455399_RuntimeMethod_var);
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
// System.Void BossSequence/<FadeToBlack>c__Iterator2::.ctor()
extern "C" IL2CPP_METHOD_ATTR void U3CFadeToBlackU3Ec__Iterator2__ctor_m531709936 (U3CFadeToBlackU3Ec__Iterator2_t2817112667 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean BossSequence/<FadeToBlack>c__Iterator2::MoveNext()
extern "C" IL2CPP_METHOD_ATTR bool U3CFadeToBlackU3Ec__Iterator2_MoveNext_m2508010501 (U3CFadeToBlackU3Ec__Iterator2_t2817112667 * __this, const RuntimeMethod* method)
{
	uint32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_U24PC_4();
		V_0 = L_0;
		__this->set_U24PC_4((-1));
		uint32_t L_1 = V_0;
		switch (L_1)
		{
			case 0:
			{
				goto IL_0021;
			}
			case 1:
			{
				goto IL_0079;
			}
		}
	}
	{
		goto IL_00b0;
	}

IL_0021:
	{
		__this->set_U3CiU3E__1_0(0);
		goto IL_0087;
	}

IL_002d:
	{
		BossSequence_t1258426188 * L_2 = __this->get_U24this_1();
		Image_t2670269651 * L_3 = L_2->get__blackOverlay_5();
		int32_t L_4 = __this->get_U3CiU3E__1_0();
		Color_t2555686324  L_5;
		memset(&L_5, 0, sizeof(L_5));
		Color__ctor_m2943235014((&L_5), (0.0f), (0.0f), (0.0f), ((float)((float)(((float)((float)L_4)))/(float)(100.0f))), /*hidden argument*/NULL);
		VirtActionInvoker1< Color_t2555686324  >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_3, L_5);
		__this->set_U24current_2(NULL);
		bool L_6 = __this->get_U24disposing_3();
		if (L_6)
		{
			goto IL_0074;
		}
	}
	{
		__this->set_U24PC_4(1);
	}

IL_0074:
	{
		goto IL_00b2;
	}

IL_0079:
	{
		int32_t L_7 = __this->get_U3CiU3E__1_0();
		__this->set_U3CiU3E__1_0(((int32_t)il2cpp_codegen_add((int32_t)L_7, (int32_t)1)));
	}

IL_0087:
	{
		int32_t L_8 = __this->get_U3CiU3E__1_0();
		if ((((int32_t)L_8) < ((int32_t)((int32_t)100))))
		{
			goto IL_002d;
		}
	}
	{
		BossSequence_t1258426188 * L_9 = __this->get_U24this_1();
		Image_t2670269651 * L_10 = L_9->get__blackOverlay_5();
		Color_t2555686324  L_11 = Color_get_black_m719512684(NULL /*static, unused*/, /*hidden argument*/NULL);
		VirtActionInvoker1< Color_t2555686324  >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_10, L_11);
		__this->set_U24PC_4((-1));
	}

IL_00b0:
	{
		return (bool)0;
	}

IL_00b2:
	{
		return (bool)1;
	}
}
// System.Object BossSequence/<FadeToBlack>c__Iterator2::System.Collections.Generic.IEnumerator<object>.get_Current()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * U3CFadeToBlackU3Ec__Iterator2_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m2161404935 (U3CFadeToBlackU3Ec__Iterator2_t2817112667 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U24current_2();
		return L_0;
	}
}
// System.Object BossSequence/<FadeToBlack>c__Iterator2::System.Collections.IEnumerator.get_Current()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * U3CFadeToBlackU3Ec__Iterator2_System_Collections_IEnumerator_get_Current_m2326100649 (U3CFadeToBlackU3Ec__Iterator2_t2817112667 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U24current_2();
		return L_0;
	}
}
// System.Void BossSequence/<FadeToBlack>c__Iterator2::Dispose()
extern "C" IL2CPP_METHOD_ATTR void U3CFadeToBlackU3Ec__Iterator2_Dispose_m1368382389 (U3CFadeToBlackU3Ec__Iterator2_t2817112667 * __this, const RuntimeMethod* method)
{
	{
		__this->set_U24disposing_3((bool)1);
		__this->set_U24PC_4((-1));
		return;
	}
}
// System.Void BossSequence/<FadeToBlack>c__Iterator2::Reset()
extern "C" IL2CPP_METHOD_ATTR void U3CFadeToBlackU3Ec__Iterator2_Reset_m2303301955 (U3CFadeToBlackU3Ec__Iterator2_t2817112667 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CFadeToBlackU3Ec__Iterator2_Reset_m2303301955_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NotSupportedException_t1314879016 * L_0 = (NotSupportedException_t1314879016 *)il2cpp_codegen_object_new(NotSupportedException_t1314879016_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m2730133172(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0,U3CFadeToBlackU3Ec__Iterator2_Reset_m2303301955_RuntimeMethod_var);
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
// System.Void BossSequence/<FallIn>c__Iterator1::.ctor()
extern "C" IL2CPP_METHOD_ATTR void U3CFallInU3Ec__Iterator1__ctor_m3522289883 (U3CFallInU3Ec__Iterator1_t4176106444 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean BossSequence/<FallIn>c__Iterator1::MoveNext()
extern "C" IL2CPP_METHOD_ATTR bool U3CFallInU3Ec__Iterator1_MoveNext_m115178457 (U3CFallInU3Ec__Iterator1_t4176106444 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CFallInU3Ec__Iterator1_MoveNext_m115178457_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	Vector3_t3722313464  V_1;
	memset(&V_1, 0, sizeof(V_1));
	Vector3_t3722313464  V_2;
	memset(&V_2, 0, sizeof(V_2));
	{
		int32_t L_0 = __this->get_U24PC_5();
		V_0 = L_0;
		__this->set_U24PC_5((-1));
		uint32_t L_1 = V_0;
		switch (L_1)
		{
			case 0:
			{
				goto IL_0031;
			}
			case 1:
			{
				goto IL_0128;
			}
			case 2:
			{
				goto IL_0173;
			}
			case 3:
			{
				goto IL_0201;
			}
			case 4:
			{
				goto IL_0258;
			}
			case 5:
			{
				goto IL_02db;
			}
		}
	}
	{
		goto IL_02e2;
	}

IL_0031:
	{
		__this->set_U3CintroXU3E__0_0((10.0f));
		Camera_t4157153871 * L_2 = Camera_get_main_m3643453163(NULL /*static, unused*/, /*hidden argument*/NULL);
		Transform_t3600365921 * L_3 = Component_get_transform_m3162698980(L_2, /*hidden argument*/NULL);
		float L_4 = __this->get_U3CintroXU3E__0_0();
		Vector3_t3722313464  L_5;
		memset(&L_5, 0, sizeof(L_5));
		Vector3__ctor_m3353183577((&L_5), L_4, (0.0f), (-10.0f), /*hidden argument*/NULL);
		Transform_set_position_m3387557959(L_3, L_5, /*hidden argument*/NULL);
		Camera_t4157153871 * L_6 = Camera_get_main_m3643453163(NULL /*static, unused*/, /*hidden argument*/NULL);
		CameraFollow_t129522575 * L_7 = Component_GetComponent_TisCameraFollow_t129522575_m2586956313(L_6, /*hidden argument*/Component_GetComponent_TisCameraFollow_t129522575_m2586956313_RuntimeMethod_var);
		Behaviour_set_enabled_m20417929(L_7, (bool)0, /*hidden argument*/NULL);
		BossSequence_t1258426188 * L_8 = __this->get_U24this_2();
		Player_t3266647312 * L_9 = L_8->get__player_2();
		Transform_t3600365921 * L_10 = Component_get_transform_m3162698980(L_9, /*hidden argument*/NULL);
		float L_11 = __this->get_U3CintroXU3E__0_0();
		Vector3_t3722313464  L_12;
		memset(&L_12, 0, sizeof(L_12));
		Vector3__ctor_m3353183577((&L_12), L_11, (1.0f), (0.0f), /*hidden argument*/NULL);
		Transform_set_position_m3387557959(L_10, L_12, /*hidden argument*/NULL);
		__this->set_U3CaccelerationU3E__0_1((0.0f));
		goto IL_0128;
	}

IL_00aa:
	{
		float L_13 = __this->get_U3CaccelerationU3E__0_1();
		float L_14 = Time_get_deltaTime_m372706562(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->set_U3CaccelerationU3E__0_1(((float)il2cpp_codegen_add((float)L_13, (float)((float)il2cpp_codegen_multiply((float)(2.0f), (float)L_14)))));
		BossSequence_t1258426188 * L_15 = __this->get_U24this_2();
		Player_t3266647312 * L_16 = L_15->get__player_2();
		Transform_t3600365921 * L_17 = Component_get_transform_m3162698980(L_16, /*hidden argument*/NULL);
		BossSequence_t1258426188 * L_18 = __this->get_U24this_2();
		Player_t3266647312 * L_19 = L_18->get__player_2();
		Transform_t3600365921 * L_20 = Component_get_transform_m3162698980(L_19, /*hidden argument*/NULL);
		Vector3_t3722313464  L_21 = Transform_get_position_m36019626(L_20, /*hidden argument*/NULL);
		float L_22 = __this->get_U3CaccelerationU3E__0_1();
		float L_23 = Time_get_deltaTime_m372706562(NULL /*static, unused*/, /*hidden argument*/NULL);
		Vector3_t3722313464  L_24;
		memset(&L_24, 0, sizeof(L_24));
		Vector3__ctor_m3353183577((&L_24), (0.0f), ((float)il2cpp_codegen_multiply((float)((-L_22)), (float)L_23)), (0.0f), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t3722313464_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_25 = Vector3_op_Addition_m779775034(NULL /*static, unused*/, L_21, L_24, /*hidden argument*/NULL);
		Transform_set_position_m3387557959(L_17, L_25, /*hidden argument*/NULL);
		__this->set_U24current_3(NULL);
		bool L_26 = __this->get_U24disposing_4();
		if (L_26)
		{
			goto IL_0123;
		}
	}
	{
		__this->set_U24PC_5(1);
	}

IL_0123:
	{
		goto IL_02e4;
	}

IL_0128:
	{
		BossSequence_t1258426188 * L_27 = __this->get_U24this_2();
		Player_t3266647312 * L_28 = L_27->get__player_2();
		Transform_t3600365921 * L_29 = Component_get_transform_m3162698980(L_28, /*hidden argument*/NULL);
		Vector3_t3722313464  L_30 = Transform_get_position_m36019626(L_29, /*hidden argument*/NULL);
		V_1 = L_30;
		float L_31 = (&V_1)->get_y_2();
		if ((((float)L_31) > ((float)(0.0f))))
		{
			goto IL_00aa;
		}
	}
	{
		WaitForSeconds_t1699091251 * L_32 = (WaitForSeconds_t1699091251 *)il2cpp_codegen_object_new(WaitForSeconds_t1699091251_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_m2199082655(L_32, (1.5f), /*hidden argument*/NULL);
		__this->set_U24current_3(L_32);
		bool L_33 = __this->get_U24disposing_4();
		if (L_33)
		{
			goto IL_016e;
		}
	}
	{
		__this->set_U24PC_5(2);
	}

IL_016e:
	{
		goto IL_02e4;
	}

IL_0173:
	{
		__this->set_U3CaccelerationU3E__0_1((0.0f));
		goto IL_0201;
	}

IL_0183:
	{
		float L_34 = __this->get_U3CaccelerationU3E__0_1();
		float L_35 = Time_get_deltaTime_m372706562(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->set_U3CaccelerationU3E__0_1(((float)il2cpp_codegen_add((float)L_34, (float)((float)il2cpp_codegen_multiply((float)(2.0f), (float)L_35)))));
		BossSequence_t1258426188 * L_36 = __this->get_U24this_2();
		Player_t3266647312 * L_37 = L_36->get__player_2();
		Transform_t3600365921 * L_38 = Component_get_transform_m3162698980(L_37, /*hidden argument*/NULL);
		BossSequence_t1258426188 * L_39 = __this->get_U24this_2();
		Player_t3266647312 * L_40 = L_39->get__player_2();
		Transform_t3600365921 * L_41 = Component_get_transform_m3162698980(L_40, /*hidden argument*/NULL);
		Vector3_t3722313464  L_42 = Transform_get_position_m36019626(L_41, /*hidden argument*/NULL);
		float L_43 = __this->get_U3CaccelerationU3E__0_1();
		float L_44 = Time_get_deltaTime_m372706562(NULL /*static, unused*/, /*hidden argument*/NULL);
		Vector3_t3722313464  L_45;
		memset(&L_45, 0, sizeof(L_45));
		Vector3__ctor_m3353183577((&L_45), (0.0f), ((float)il2cpp_codegen_multiply((float)((-L_43)), (float)L_44)), (0.0f), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t3722313464_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_46 = Vector3_op_Addition_m779775034(NULL /*static, unused*/, L_42, L_45, /*hidden argument*/NULL);
		Transform_set_position_m3387557959(L_38, L_46, /*hidden argument*/NULL);
		__this->set_U24current_3(NULL);
		bool L_47 = __this->get_U24disposing_4();
		if (L_47)
		{
			goto IL_01fc;
		}
	}
	{
		__this->set_U24PC_5(3);
	}

IL_01fc:
	{
		goto IL_02e4;
	}

IL_0201:
	{
		BossSequence_t1258426188 * L_48 = __this->get_U24this_2();
		Player_t3266647312 * L_49 = L_48->get__player_2();
		Transform_t3600365921 * L_50 = Component_get_transform_m3162698980(L_49, /*hidden argument*/NULL);
		Vector3_t3722313464  L_51 = Transform_get_position_m36019626(L_50, /*hidden argument*/NULL);
		V_2 = L_51;
		float L_52 = (&V_2)->get_y_2();
		if ((((float)L_52) > ((float)(-1.0f))))
		{
			goto IL_0183;
		}
	}
	{
		BossSequence_t1258426188 * L_53 = __this->get_U24this_2();
		BossSequence_t1258426188 * L_54 = __this->get_U24this_2();
		RuntimeObject* L_55 = BossSequence_FadeToBlack_m833894443(L_54, /*hidden argument*/NULL);
		Coroutine_t3829159415 * L_56 = MonoBehaviour_StartCoroutine_m3411253000(L_53, L_55, /*hidden argument*/NULL);
		__this->set_U24current_3(L_56);
		bool L_57 = __this->get_U24disposing_4();
		if (L_57)
		{
			goto IL_0253;
		}
	}
	{
		__this->set_U24PC_5(4);
	}

IL_0253:
	{
		goto IL_02e4;
	}

IL_0258:
	{
		BossSequence_t1258426188 * L_58 = __this->get_U24this_2();
		ParticleSpawner_t2092424095 * L_59 = L_58->get__particleSpawner_7();
		GameObject_t1113636619 * L_60 = Component_get_gameObject_m442555142(L_59, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		Object_Destroy_m565254235(NULL /*static, unused*/, L_60, /*hidden argument*/NULL);
		BossSequence_t1258426188 * L_61 = __this->get_U24this_2();
		Player_t3266647312 * L_62 = L_61->get__player_2();
		Transform_t3600365921 * L_63 = Component_get_transform_m3162698980(L_62, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t3722313464_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_64 = Vector3_get_zero_m1409827619(NULL /*static, unused*/, /*hidden argument*/NULL);
		Transform_set_position_m3387557959(L_63, L_64, /*hidden argument*/NULL);
		Camera_t4157153871 * L_65 = Camera_get_main_m3643453163(NULL /*static, unused*/, /*hidden argument*/NULL);
		Transform_t3600365921 * L_66 = Component_get_transform_m3162698980(L_65, /*hidden argument*/NULL);
		Vector3_t3722313464  L_67 = Vector3_get_up_m3584168373(NULL /*static, unused*/, /*hidden argument*/NULL);
		Transform_set_position_m3387557959(L_66, L_67, /*hidden argument*/NULL);
		Camera_t4157153871 * L_68 = Camera_get_main_m3643453163(NULL /*static, unused*/, /*hidden argument*/NULL);
		CameraFollow_t129522575 * L_69 = Component_GetComponent_TisCameraFollow_t129522575_m2586956313(L_68, /*hidden argument*/Component_GetComponent_TisCameraFollow_t129522575_m2586956313_RuntimeMethod_var);
		Behaviour_set_enabled_m20417929(L_69, (bool)1, /*hidden argument*/NULL);
		BossSequence_t1258426188 * L_70 = __this->get_U24this_2();
		BossSequence_t1258426188 * L_71 = __this->get_U24this_2();
		RuntimeObject* L_72 = BossSequence_FadeIn_m752122934(L_71, /*hidden argument*/NULL);
		Coroutine_t3829159415 * L_73 = MonoBehaviour_StartCoroutine_m3411253000(L_70, L_72, /*hidden argument*/NULL);
		__this->set_U24current_3(L_73);
		bool L_74 = __this->get_U24disposing_4();
		if (L_74)
		{
			goto IL_02d6;
		}
	}
	{
		__this->set_U24PC_5(5);
	}

IL_02d6:
	{
		goto IL_02e4;
	}

IL_02db:
	{
		__this->set_U24PC_5((-1));
	}

IL_02e2:
	{
		return (bool)0;
	}

IL_02e4:
	{
		return (bool)1;
	}
}
// System.Object BossSequence/<FallIn>c__Iterator1::System.Collections.Generic.IEnumerator<object>.get_Current()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * U3CFallInU3Ec__Iterator1_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m3533462073 (U3CFallInU3Ec__Iterator1_t4176106444 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U24current_3();
		return L_0;
	}
}
// System.Object BossSequence/<FallIn>c__Iterator1::System.Collections.IEnumerator.get_Current()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * U3CFallInU3Ec__Iterator1_System_Collections_IEnumerator_get_Current_m1164126782 (U3CFallInU3Ec__Iterator1_t4176106444 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U24current_3();
		return L_0;
	}
}
// System.Void BossSequence/<FallIn>c__Iterator1::Dispose()
extern "C" IL2CPP_METHOD_ATTR void U3CFallInU3Ec__Iterator1_Dispose_m948323704 (U3CFallInU3Ec__Iterator1_t4176106444 * __this, const RuntimeMethod* method)
{
	{
		__this->set_U24disposing_4((bool)1);
		__this->set_U24PC_5((-1));
		return;
	}
}
// System.Void BossSequence/<FallIn>c__Iterator1::Reset()
extern "C" IL2CPP_METHOD_ATTR void U3CFallInU3Ec__Iterator1_Reset_m2472767275 (U3CFallInU3Ec__Iterator1_t4176106444 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CFallInU3Ec__Iterator1_Reset_m2472767275_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NotSupportedException_t1314879016 * L_0 = (NotSupportedException_t1314879016 *)il2cpp_codegen_object_new(NotSupportedException_t1314879016_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m2730133172(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0,U3CFallInU3Ec__Iterator1_Reset_m2472767275_RuntimeMethod_var);
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
// System.Void BossSequence/<Sequence>c__Iterator0::.ctor()
extern "C" IL2CPP_METHOD_ATTR void U3CSequenceU3Ec__Iterator0__ctor_m1698124521 (U3CSequenceU3Ec__Iterator0_t114495004 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean BossSequence/<Sequence>c__Iterator0::MoveNext()
extern "C" IL2CPP_METHOD_ATTR bool U3CSequenceU3Ec__Iterator0_MoveNext_m1850678376 (U3CSequenceU3Ec__Iterator0_t114495004 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CSequenceU3Ec__Iterator0_MoveNext_m1850678376_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_U24PC_3();
		V_0 = L_0;
		__this->set_U24PC_3((-1));
		uint32_t L_1 = V_0;
		switch (L_1)
		{
			case 0:
			{
				goto IL_0031;
			}
			case 1:
			{
				goto IL_0086;
			}
			case 2:
			{
				goto IL_00b6;
			}
			case 3:
			{
				goto IL_00e6;
			}
			case 4:
			{
				goto IL_0116;
			}
			case 5:
			{
				goto IL_0146;
			}
		}
	}
	{
		goto IL_014d;
	}

IL_0031:
	{
		MusicManager_t3024629483 * L_2 = MusicManager_get_Instance_m1581818762(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_3 = Object_op_Implicit_m3574996620(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0056;
		}
	}
	{
		BossSequence_t1258426188 * L_4 = __this->get_U24this_0();
		MusicManager_t3024629483 * L_5 = MusicManager_get_Instance_m1581818762(NULL /*static, unused*/, /*hidden argument*/NULL);
		RuntimeObject* L_6 = MusicManager_FadeOut_m3189210292(L_5, /*hidden argument*/NULL);
		MonoBehaviour_StartCoroutine_m3411253000(L_4, L_6, /*hidden argument*/NULL);
	}

IL_0056:
	{
		BossSequence_t1258426188 * L_7 = __this->get_U24this_0();
		BossSequence_t1258426188 * L_8 = __this->get_U24this_0();
		RuntimeObject* L_9 = BossSequence_FallIn_m3389816209(L_8, /*hidden argument*/NULL);
		Coroutine_t3829159415 * L_10 = MonoBehaviour_StartCoroutine_m3411253000(L_7, L_9, /*hidden argument*/NULL);
		__this->set_U24current_1(L_10);
		bool L_11 = __this->get_U24disposing_2();
		if (L_11)
		{
			goto IL_0081;
		}
	}
	{
		__this->set_U24PC_3(1);
	}

IL_0081:
	{
		goto IL_014f;
	}

IL_0086:
	{
		BossSequence_t1258426188 * L_12 = __this->get_U24this_0();
		BossSequence_t1258426188 * L_13 = __this->get_U24this_0();
		RuntimeObject* L_14 = BossSequence_WaitForPlayerToEnterTrigger_m1039393221(L_13, /*hidden argument*/NULL);
		Coroutine_t3829159415 * L_15 = MonoBehaviour_StartCoroutine_m3411253000(L_12, L_14, /*hidden argument*/NULL);
		__this->set_U24current_1(L_15);
		bool L_16 = __this->get_U24disposing_2();
		if (L_16)
		{
			goto IL_00b1;
		}
	}
	{
		__this->set_U24PC_3(2);
	}

IL_00b1:
	{
		goto IL_014f;
	}

IL_00b6:
	{
		BossSequence_t1258426188 * L_17 = __this->get_U24this_0();
		BossSequence_t1258426188 * L_18 = __this->get_U24this_0();
		RuntimeObject* L_19 = BossSequence_EnterBoss_m3186382248(L_18, /*hidden argument*/NULL);
		Coroutine_t3829159415 * L_20 = MonoBehaviour_StartCoroutine_m3411253000(L_17, L_19, /*hidden argument*/NULL);
		__this->set_U24current_1(L_20);
		bool L_21 = __this->get_U24disposing_2();
		if (L_21)
		{
			goto IL_00e1;
		}
	}
	{
		__this->set_U24PC_3(3);
	}

IL_00e1:
	{
		goto IL_014f;
	}

IL_00e6:
	{
		BossSequence_t1258426188 * L_22 = __this->get_U24this_0();
		BossSequence_t1258426188 * L_23 = __this->get_U24this_0();
		RuntimeObject* L_24 = BossSequence_WaitBossDead_m3885589739(L_23, /*hidden argument*/NULL);
		Coroutine_t3829159415 * L_25 = MonoBehaviour_StartCoroutine_m3411253000(L_22, L_24, /*hidden argument*/NULL);
		__this->set_U24current_1(L_25);
		bool L_26 = __this->get_U24disposing_2();
		if (L_26)
		{
			goto IL_0111;
		}
	}
	{
		__this->set_U24PC_3(4);
	}

IL_0111:
	{
		goto IL_014f;
	}

IL_0116:
	{
		BossSequence_t1258426188 * L_27 = __this->get_U24this_0();
		BossSequence_t1258426188 * L_28 = __this->get_U24this_0();
		RuntimeObject* L_29 = BossSequence_WinScreen_m541912785(L_28, /*hidden argument*/NULL);
		Coroutine_t3829159415 * L_30 = MonoBehaviour_StartCoroutine_m3411253000(L_27, L_29, /*hidden argument*/NULL);
		__this->set_U24current_1(L_30);
		bool L_31 = __this->get_U24disposing_2();
		if (L_31)
		{
			goto IL_0141;
		}
	}
	{
		__this->set_U24PC_3(5);
	}

IL_0141:
	{
		goto IL_014f;
	}

IL_0146:
	{
		__this->set_U24PC_3((-1));
	}

IL_014d:
	{
		return (bool)0;
	}

IL_014f:
	{
		return (bool)1;
	}
}
// System.Object BossSequence/<Sequence>c__Iterator0::System.Collections.Generic.IEnumerator<object>.get_Current()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * U3CSequenceU3Ec__Iterator0_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m318638671 (U3CSequenceU3Ec__Iterator0_t114495004 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U24current_1();
		return L_0;
	}
}
// System.Object BossSequence/<Sequence>c__Iterator0::System.Collections.IEnumerator.get_Current()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * U3CSequenceU3Ec__Iterator0_System_Collections_IEnumerator_get_Current_m3423452141 (U3CSequenceU3Ec__Iterator0_t114495004 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U24current_1();
		return L_0;
	}
}
// System.Void BossSequence/<Sequence>c__Iterator0::Dispose()
extern "C" IL2CPP_METHOD_ATTR void U3CSequenceU3Ec__Iterator0_Dispose_m2090961430 (U3CSequenceU3Ec__Iterator0_t114495004 * __this, const RuntimeMethod* method)
{
	{
		__this->set_U24disposing_2((bool)1);
		__this->set_U24PC_3((-1));
		return;
	}
}
// System.Void BossSequence/<Sequence>c__Iterator0::Reset()
extern "C" IL2CPP_METHOD_ATTR void U3CSequenceU3Ec__Iterator0_Reset_m623534805 (U3CSequenceU3Ec__Iterator0_t114495004 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CSequenceU3Ec__Iterator0_Reset_m623534805_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NotSupportedException_t1314879016 * L_0 = (NotSupportedException_t1314879016 *)il2cpp_codegen_object_new(NotSupportedException_t1314879016_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m2730133172(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0,U3CSequenceU3Ec__Iterator0_Reset_m623534805_RuntimeMethod_var);
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
// System.Void BossSequence/<WaitBossDead>c__Iterator6::.ctor()
extern "C" IL2CPP_METHOD_ATTR void U3CWaitBossDeadU3Ec__Iterator6__ctor_m3845333796 (U3CWaitBossDeadU3Ec__Iterator6_t3050784709 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean BossSequence/<WaitBossDead>c__Iterator6::MoveNext()
extern "C" IL2CPP_METHOD_ATTR bool U3CWaitBossDeadU3Ec__Iterator6_MoveNext_m2272936345 (U3CWaitBossDeadU3Ec__Iterator6_t3050784709 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CWaitBossDeadU3Ec__Iterator6_MoveNext_m2272936345_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_U24PC_3();
		V_0 = L_0;
		__this->set_U24PC_3((-1));
		uint32_t L_1 = V_0;
		switch (L_1)
		{
			case 0:
			{
				goto IL_0021;
			}
			case 1:
			{
				goto IL_0041;
			}
		}
	}
	{
		goto IL_0062;
	}

IL_0021:
	{
		goto IL_0041;
	}

IL_0026:
	{
		__this->set_U24current_1(NULL);
		bool L_2 = __this->get_U24disposing_2();
		if (L_2)
		{
			goto IL_003c;
		}
	}
	{
		__this->set_U24PC_3(1);
	}

IL_003c:
	{
		goto IL_0064;
	}

IL_0041:
	{
		BossSequence_t1258426188 * L_3 = __this->get_U24this_0();
		VoidAI_t4181225430 * L_4 = L_3->get__voidAI_4();
		Entity_t3391956725 * L_5 = Component_GetComponent_TisEntity_t3391956725_m1664670758(L_4, /*hidden argument*/Component_GetComponent_TisEntity_t3391956725_m1664670758_RuntimeMethod_var);
		bool L_6 = Entity_get_Alive_m1193177492(L_5, /*hidden argument*/NULL);
		if (L_6)
		{
			goto IL_0026;
		}
	}
	{
		__this->set_U24PC_3((-1));
	}

IL_0062:
	{
		return (bool)0;
	}

IL_0064:
	{
		return (bool)1;
	}
}
// System.Object BossSequence/<WaitBossDead>c__Iterator6::System.Collections.Generic.IEnumerator<object>.get_Current()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * U3CWaitBossDeadU3Ec__Iterator6_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m3185314980 (U3CWaitBossDeadU3Ec__Iterator6_t3050784709 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U24current_1();
		return L_0;
	}
}
// System.Object BossSequence/<WaitBossDead>c__Iterator6::System.Collections.IEnumerator.get_Current()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * U3CWaitBossDeadU3Ec__Iterator6_System_Collections_IEnumerator_get_Current_m515244388 (U3CWaitBossDeadU3Ec__Iterator6_t3050784709 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U24current_1();
		return L_0;
	}
}
// System.Void BossSequence/<WaitBossDead>c__Iterator6::Dispose()
extern "C" IL2CPP_METHOD_ATTR void U3CWaitBossDeadU3Ec__Iterator6_Dispose_m2970406407 (U3CWaitBossDeadU3Ec__Iterator6_t3050784709 * __this, const RuntimeMethod* method)
{
	{
		__this->set_U24disposing_2((bool)1);
		__this->set_U24PC_3((-1));
		return;
	}
}
// System.Void BossSequence/<WaitBossDead>c__Iterator6::Reset()
extern "C" IL2CPP_METHOD_ATTR void U3CWaitBossDeadU3Ec__Iterator6_Reset_m1040014548 (U3CWaitBossDeadU3Ec__Iterator6_t3050784709 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CWaitBossDeadU3Ec__Iterator6_Reset_m1040014548_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NotSupportedException_t1314879016 * L_0 = (NotSupportedException_t1314879016 *)il2cpp_codegen_object_new(NotSupportedException_t1314879016_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m2730133172(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0,U3CWaitBossDeadU3Ec__Iterator6_Reset_m1040014548_RuntimeMethod_var);
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
// System.Void BossSequence/<WaitForPlayerToEnterTrigger>c__Iterator4::.ctor()
extern "C" IL2CPP_METHOD_ATTR void U3CWaitForPlayerToEnterTriggerU3Ec__Iterator4__ctor_m4254653211 (U3CWaitForPlayerToEnterTriggerU3Ec__Iterator4_t2176132566 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean BossSequence/<WaitForPlayerToEnterTrigger>c__Iterator4::MoveNext()
extern "C" IL2CPP_METHOD_ATTR bool U3CWaitForPlayerToEnterTriggerU3Ec__Iterator4_MoveNext_m336233394 (U3CWaitForPlayerToEnterTriggerU3Ec__Iterator4_t2176132566 * __this, const RuntimeMethod* method)
{
	uint32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_U24PC_3();
		V_0 = L_0;
		__this->set_U24PC_3((-1));
		uint32_t L_1 = V_0;
		switch (L_1)
		{
			case 0:
			{
				goto IL_0021;
			}
			case 1:
			{
				goto IL_0041;
			}
		}
	}
	{
		goto IL_0058;
	}

IL_0021:
	{
		goto IL_0041;
	}

IL_0026:
	{
		__this->set_U24current_1(NULL);
		bool L_2 = __this->get_U24disposing_2();
		if (L_2)
		{
			goto IL_003c;
		}
	}
	{
		__this->set_U24PC_3(1);
	}

IL_003c:
	{
		goto IL_005a;
	}

IL_0041:
	{
		BossSequence_t1258426188 * L_3 = __this->get_U24this_0();
		bool L_4 = L_3->get__enteredTrigger_3();
		if (!L_4)
		{
			goto IL_0026;
		}
	}
	{
		__this->set_U24PC_3((-1));
	}

IL_0058:
	{
		return (bool)0;
	}

IL_005a:
	{
		return (bool)1;
	}
}
// System.Object BossSequence/<WaitForPlayerToEnterTrigger>c__Iterator4::System.Collections.Generic.IEnumerator<object>.get_Current()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * U3CWaitForPlayerToEnterTriggerU3Ec__Iterator4_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m2089503589 (U3CWaitForPlayerToEnterTriggerU3Ec__Iterator4_t2176132566 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U24current_1();
		return L_0;
	}
}
// System.Object BossSequence/<WaitForPlayerToEnterTrigger>c__Iterator4::System.Collections.IEnumerator.get_Current()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * U3CWaitForPlayerToEnterTriggerU3Ec__Iterator4_System_Collections_IEnumerator_get_Current_m1130745699 (U3CWaitForPlayerToEnterTriggerU3Ec__Iterator4_t2176132566 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U24current_1();
		return L_0;
	}
}
// System.Void BossSequence/<WaitForPlayerToEnterTrigger>c__Iterator4::Dispose()
extern "C" IL2CPP_METHOD_ATTR void U3CWaitForPlayerToEnterTriggerU3Ec__Iterator4_Dispose_m469305468 (U3CWaitForPlayerToEnterTriggerU3Ec__Iterator4_t2176132566 * __this, const RuntimeMethod* method)
{
	{
		__this->set_U24disposing_2((bool)1);
		__this->set_U24PC_3((-1));
		return;
	}
}
// System.Void BossSequence/<WaitForPlayerToEnterTrigger>c__Iterator4::Reset()
extern "C" IL2CPP_METHOD_ATTR void U3CWaitForPlayerToEnterTriggerU3Ec__Iterator4_Reset_m3779369590 (U3CWaitForPlayerToEnterTriggerU3Ec__Iterator4_t2176132566 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CWaitForPlayerToEnterTriggerU3Ec__Iterator4_Reset_m3779369590_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NotSupportedException_t1314879016 * L_0 = (NotSupportedException_t1314879016 *)il2cpp_codegen_object_new(NotSupportedException_t1314879016_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m2730133172(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0,U3CWaitForPlayerToEnterTriggerU3Ec__Iterator4_Reset_m3779369590_RuntimeMethod_var);
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
// System.Void BossSequence/<WinScreen>c__Iterator7::.ctor()
extern "C" IL2CPP_METHOD_ATTR void U3CWinScreenU3Ec__Iterator7__ctor_m176835820 (U3CWinScreenU3Ec__Iterator7_t2096093272 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean BossSequence/<WinScreen>c__Iterator7::MoveNext()
extern "C" IL2CPP_METHOD_ATTR bool U3CWinScreenU3Ec__Iterator7_MoveNext_m3895457074 (U3CWinScreenU3Ec__Iterator7_t2096093272 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CWinScreenU3Ec__Iterator7_MoveNext_m3895457074_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_U24PC_2();
		V_0 = L_0;
		__this->set_U24PC_2((-1));
		uint32_t L_1 = V_0;
		switch (L_1)
		{
			case 0:
			{
				goto IL_0025;
			}
			case 1:
			{
				goto IL_0058;
			}
			case 2:
			{
				goto IL_0078;
			}
		}
	}
	{
		goto IL_008f;
	}

IL_0025:
	{
		DeadScreen_t3234016418 * L_2 = DeadScreen_get_Instance_m1284687975(NULL /*static, unused*/, /*hidden argument*/NULL);
		DeadScreen_Show_m3338567005(L_2, _stringLiteral3147613217, /*hidden argument*/NULL);
		WaitForSeconds_t1699091251 * L_3 = (WaitForSeconds_t1699091251 *)il2cpp_codegen_object_new(WaitForSeconds_t1699091251_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_m2199082655(L_3, (2.0f), /*hidden argument*/NULL);
		__this->set_U24current_0(L_3);
		bool L_4 = __this->get_U24disposing_1();
		if (L_4)
		{
			goto IL_0053;
		}
	}
	{
		__this->set_U24PC_2(1);
	}

IL_0053:
	{
		goto IL_0091;
	}

IL_0058:
	{
		goto IL_0078;
	}

IL_005d:
	{
		__this->set_U24current_0(NULL);
		bool L_5 = __this->get_U24disposing_1();
		if (L_5)
		{
			goto IL_0073;
		}
	}
	{
		__this->set_U24PC_2(2);
	}

IL_0073:
	{
		goto IL_0091;
	}

IL_0078:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1431474628_il2cpp_TypeInfo_var);
		bool L_6 = Input_get_anyKeyDown_m1564765341(NULL /*static, unused*/, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_005d;
		}
	}
	{
		SceneManager_LoadScene_m3463216446(NULL /*static, unused*/, 1, /*hidden argument*/NULL);
		__this->set_U24PC_2((-1));
	}

IL_008f:
	{
		return (bool)0;
	}

IL_0091:
	{
		return (bool)1;
	}
}
// System.Object BossSequence/<WinScreen>c__Iterator7::System.Collections.Generic.IEnumerator<object>.get_Current()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * U3CWinScreenU3Ec__Iterator7_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m2704901760 (U3CWinScreenU3Ec__Iterator7_t2096093272 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U24current_0();
		return L_0;
	}
}
// System.Object BossSequence/<WinScreen>c__Iterator7::System.Collections.IEnumerator.get_Current()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * U3CWinScreenU3Ec__Iterator7_System_Collections_IEnumerator_get_Current_m1970625645 (U3CWinScreenU3Ec__Iterator7_t2096093272 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U24current_0();
		return L_0;
	}
}
// System.Void BossSequence/<WinScreen>c__Iterator7::Dispose()
extern "C" IL2CPP_METHOD_ATTR void U3CWinScreenU3Ec__Iterator7_Dispose_m3498619897 (U3CWinScreenU3Ec__Iterator7_t2096093272 * __this, const RuntimeMethod* method)
{
	{
		__this->set_U24disposing_1((bool)1);
		__this->set_U24PC_2((-1));
		return;
	}
}
// System.Void BossSequence/<WinScreen>c__Iterator7::Reset()
extern "C" IL2CPP_METHOD_ATTR void U3CWinScreenU3Ec__Iterator7_Reset_m619298565 (U3CWinScreenU3Ec__Iterator7_t2096093272 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CWinScreenU3Ec__Iterator7_Reset_m619298565_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NotSupportedException_t1314879016 * L_0 = (NotSupportedException_t1314879016 *)il2cpp_codegen_object_new(NotSupportedException_t1314879016_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m2730133172(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0,U3CWinScreenU3Ec__Iterator7_Reset_m619298565_RuntimeMethod_var);
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
// System.Void CameraFollow::.ctor()
extern "C" IL2CPP_METHOD_ATTR void CameraFollow__ctor_m2357661391 (CameraFollow_t129522575 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void CameraFollow::Update()
extern "C" IL2CPP_METHOD_ATTR void CameraFollow_Update_m2790158597 (CameraFollow_t129522575 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CameraFollow_Update_m2790158597_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Transform_t3600365921 * L_0 = __this->get__toFollow_2();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Inequality_m4071470834(NULL /*static, unused*/, L_0, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_004e;
		}
	}
	{
		Transform_t3600365921 * L_2 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		Transform_t3600365921 * L_3 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		Vector3_t3722313464  L_4 = Transform_get_position_m36019626(L_3, /*hidden argument*/NULL);
		Transform_t3600365921 * L_5 = __this->get__toFollow_2();
		Vector3_t3722313464  L_6 = Transform_get_position_m36019626(L_5, /*hidden argument*/NULL);
		Vector3_t3722313464  L_7 = __this->get__offset_3();
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t3722313464_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_8 = Vector3_op_Addition_m779775034(NULL /*static, unused*/, L_6, L_7, /*hidden argument*/NULL);
		float L_9 = __this->get__speed_4();
		float L_10 = Time_get_deltaTime_m372706562(NULL /*static, unused*/, /*hidden argument*/NULL);
		Vector3_t3722313464  L_11 = Vector3_MoveTowards_m2786395547(NULL /*static, unused*/, L_4, L_8, ((float)il2cpp_codegen_multiply((float)L_9, (float)L_10)), /*hidden argument*/NULL);
		Transform_set_position_m3387557959(L_2, L_11, /*hidden argument*/NULL);
	}

IL_004e:
	{
		return;
	}
}
// System.Void CameraFollow::JumpTo()
extern "C" IL2CPP_METHOD_ATTR void CameraFollow_JumpTo_m933176623 (CameraFollow_t129522575 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CameraFollow_JumpTo_m933176623_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Transform_t3600365921 * L_0 = __this->get__toFollow_2();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Inequality_m4071470834(NULL /*static, unused*/, L_0, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0032;
		}
	}
	{
		Transform_t3600365921 * L_2 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		Transform_t3600365921 * L_3 = __this->get__toFollow_2();
		Vector3_t3722313464  L_4 = Transform_get_position_m36019626(L_3, /*hidden argument*/NULL);
		Vector3_t3722313464  L_5 = __this->get__offset_3();
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t3722313464_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_6 = Vector3_op_Addition_m779775034(NULL /*static, unused*/, L_4, L_5, /*hidden argument*/NULL);
		Transform_set_position_m3387557959(L_2, L_6, /*hidden argument*/NULL);
	}

IL_0032:
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
// System.Void DeadScreen::.ctor()
extern "C" IL2CPP_METHOD_ATTR void DeadScreen__ctor_m3745693946 (DeadScreen_t3234016418 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// DeadScreen DeadScreen::get_Instance()
extern "C" IL2CPP_METHOD_ATTR DeadScreen_t3234016418 * DeadScreen_get_Instance_m1284687975 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DeadScreen_get_Instance_m1284687975_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		DeadScreen_t3234016418 * L_0 = Object_FindObjectOfType_TisDeadScreen_t3234016418_m2550196054(NULL /*static, unused*/, /*hidden argument*/Object_FindObjectOfType_TisDeadScreen_t3234016418_m2550196054_RuntimeMethod_var);
		return L_0;
	}
}
// System.Void DeadScreen::Start()
extern "C" IL2CPP_METHOD_ATTR void DeadScreen_Start_m2273331392 (DeadScreen_t3234016418 * __this, const RuntimeMethod* method)
{
	{
		DeadScreen_Hide_m4202979524(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void DeadScreen::Update()
extern "C" IL2CPP_METHOD_ATTR void DeadScreen_Update_m3355167848 (DeadScreen_t3234016418 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DeadScreen_Update_m3355167848_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = __this->get__acceptInput_5();
		if (!L_0)
		{
			goto IL_002b;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1431474628_il2cpp_TypeInfo_var);
		bool L_1 = Input_get_anyKeyDown_m1564765341(NULL /*static, unused*/, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_002b;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		Player_t3266647312 * L_2 = Object_FindObjectOfType_TisPlayer_t3266647312_m389548692(NULL /*static, unused*/, /*hidden argument*/Object_FindObjectOfType_TisPlayer_t3266647312_m389548692_RuntimeMethod_var);
		bool L_3 = Object_op_Equality_m1810815630(NULL /*static, unused*/, L_2, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_002b;
		}
	}
	{
		SceneManager_LoadScene_m3463216446(NULL /*static, unused*/, 1, /*hidden argument*/NULL);
	}

IL_002b:
	{
		return;
	}
}
// System.Void DeadScreen::Show(System.String)
extern "C" IL2CPP_METHOD_ATTR void DeadScreen_Show_m3338567005 (DeadScreen_t3234016418 * __this, String_t* ___message0, const RuntimeMethod* method)
{
	{
		Text_t1901882714 * L_0 = __this->get__gameOverText_2();
		String_t* L_1 = ___message0;
		VirtActionInvoker1< String_t* >::Invoke(73 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_0, L_1);
		Text_t1901882714 * L_2 = __this->get__gameOverText_2();
		GameObject_t1113636619 * L_3 = Component_get_gameObject_m442555142(L_2, /*hidden argument*/NULL);
		GameObject_SetActive_m796801857(L_3, (bool)1, /*hidden argument*/NULL);
		Text_t1901882714 * L_4 = __this->get__restartText_3();
		GameObject_t1113636619 * L_5 = Component_get_gameObject_m442555142(L_4, /*hidden argument*/NULL);
		GameObject_SetActive_m796801857(L_5, (bool)1, /*hidden argument*/NULL);
		RuntimeObject* L_6 = DeadScreen_FadeInBack_m2646124790(__this, /*hidden argument*/NULL);
		MonoBehaviour_StartCoroutine_m3411253000(__this, L_6, /*hidden argument*/NULL);
		return;
	}
}
// System.Void DeadScreen::Hide()
extern "C" IL2CPP_METHOD_ATTR void DeadScreen_Hide_m4202979524 (DeadScreen_t3234016418 * __this, const RuntimeMethod* method)
{
	{
		Image_t2670269651 * L_0 = __this->get__backing_4();
		Color_t2555686324  L_1 = Color_get_clear_m1016382534(NULL /*static, unused*/, /*hidden argument*/NULL);
		VirtActionInvoker1< Color_t2555686324  >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_0, L_1);
		Text_t1901882714 * L_2 = __this->get__gameOverText_2();
		Color_t2555686324  L_3 = Color_get_clear_m1016382534(NULL /*static, unused*/, /*hidden argument*/NULL);
		VirtActionInvoker1< Color_t2555686324  >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_2, L_3);
		Text_t1901882714 * L_4 = __this->get__restartText_3();
		Color_t2555686324  L_5 = Color_get_clear_m1016382534(NULL /*static, unused*/, /*hidden argument*/NULL);
		VirtActionInvoker1< Color_t2555686324  >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_4, L_5);
		__this->set__acceptInput_5((bool)0);
		return;
	}
}
// System.Collections.IEnumerator DeadScreen::FadeInBack()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* DeadScreen_FadeInBack_m2646124790 (DeadScreen_t3234016418 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DeadScreen_FadeInBack_m2646124790_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	U3CFadeInBackU3Ec__Iterator0_t2620013686 * V_0 = NULL;
	{
		U3CFadeInBackU3Ec__Iterator0_t2620013686 * L_0 = (U3CFadeInBackU3Ec__Iterator0_t2620013686 *)il2cpp_codegen_object_new(U3CFadeInBackU3Ec__Iterator0_t2620013686_il2cpp_TypeInfo_var);
		U3CFadeInBackU3Ec__Iterator0__ctor_m2498171351(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CFadeInBackU3Ec__Iterator0_t2620013686 * L_1 = V_0;
		L_1->set_U24this_2(__this);
		U3CFadeInBackU3Ec__Iterator0_t2620013686 * L_2 = V_0;
		return L_2;
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
// System.Void DeadScreen/<FadeInBack>c__Iterator0::.ctor()
extern "C" IL2CPP_METHOD_ATTR void U3CFadeInBackU3Ec__Iterator0__ctor_m2498171351 (U3CFadeInBackU3Ec__Iterator0_t2620013686 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean DeadScreen/<FadeInBack>c__Iterator0::MoveNext()
extern "C" IL2CPP_METHOD_ATTR bool U3CFadeInBackU3Ec__Iterator0_MoveNext_m1940395814 (U3CFadeInBackU3Ec__Iterator0_t2620013686 * __this, const RuntimeMethod* method)
{
	uint32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_U24PC_5();
		V_0 = L_0;
		__this->set_U24PC_5((-1));
		uint32_t L_1 = V_0;
		switch (L_1)
		{
			case 0:
			{
				goto IL_0021;
			}
			case 1:
			{
				goto IL_0104;
			}
		}
	}
	{
		goto IL_014b;
	}

IL_0021:
	{
		DeadScreen_t3234016418 * L_2 = __this->get_U24this_2();
		Image_t2670269651 * L_3 = L_2->get__backing_4();
		Color_t2555686324  L_4 = Color_get_clear_m1016382534(NULL /*static, unused*/, /*hidden argument*/NULL);
		VirtActionInvoker1< Color_t2555686324  >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_3, L_4);
		__this->set_U3CstepsU3E__0_0(((int32_t)127));
		__this->set_U3CiU3E__1_1(0);
		goto IL_0112;
	}

IL_004a:
	{
		DeadScreen_t3234016418 * L_5 = __this->get_U24this_2();
		Image_t2670269651 * L_6 = L_5->get__backing_4();
		DeadScreen_t3234016418 * L_7 = __this->get_U24this_2();
		Image_t2670269651 * L_8 = L_7->get__backing_4();
		Color_t2555686324  L_9 = VirtFuncInvoker0< Color_t2555686324  >::Invoke(22 /* UnityEngine.Color UnityEngine.UI.Graphic::get_color() */, L_8);
		Color_t2555686324  L_10 = Color_get_black_m719512684(NULL /*static, unused*/, /*hidden argument*/NULL);
		float L_11 = Time_get_deltaTime_m372706562(NULL /*static, unused*/, /*hidden argument*/NULL);
		Color_t2555686324  L_12 = Color_Lerp_m973389909(NULL /*static, unused*/, L_9, L_10, ((float)il2cpp_codegen_multiply((float)(2.0f), (float)L_11)), /*hidden argument*/NULL);
		VirtActionInvoker1< Color_t2555686324  >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_6, L_12);
		DeadScreen_t3234016418 * L_13 = __this->get_U24this_2();
		Text_t1901882714 * L_14 = L_13->get__gameOverText_2();
		DeadScreen_t3234016418 * L_15 = __this->get_U24this_2();
		Text_t1901882714 * L_16 = L_15->get__gameOverText_2();
		Color_t2555686324  L_17 = VirtFuncInvoker0< Color_t2555686324  >::Invoke(22 /* UnityEngine.Color UnityEngine.UI.Graphic::get_color() */, L_16);
		Color_t2555686324  L_18 = Color_get_red_m3227813939(NULL /*static, unused*/, /*hidden argument*/NULL);
		float L_19 = Time_get_deltaTime_m372706562(NULL /*static, unused*/, /*hidden argument*/NULL);
		Color_t2555686324  L_20 = Color_Lerp_m973389909(NULL /*static, unused*/, L_17, L_18, ((float)il2cpp_codegen_multiply((float)(2.0f), (float)L_19)), /*hidden argument*/NULL);
		VirtActionInvoker1< Color_t2555686324  >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_14, L_20);
		DeadScreen_t3234016418 * L_21 = __this->get_U24this_2();
		Text_t1901882714 * L_22 = L_21->get__restartText_3();
		DeadScreen_t3234016418 * L_23 = __this->get_U24this_2();
		Text_t1901882714 * L_24 = L_23->get__restartText_3();
		Color_t2555686324  L_25 = VirtFuncInvoker0< Color_t2555686324  >::Invoke(22 /* UnityEngine.Color UnityEngine.UI.Graphic::get_color() */, L_24);
		Color_t2555686324  L_26 = Color_get_white_m332174077(NULL /*static, unused*/, /*hidden argument*/NULL);
		float L_27 = Time_get_deltaTime_m372706562(NULL /*static, unused*/, /*hidden argument*/NULL);
		Color_t2555686324  L_28 = Color_Lerp_m973389909(NULL /*static, unused*/, L_25, L_26, ((float)il2cpp_codegen_multiply((float)(2.0f), (float)L_27)), /*hidden argument*/NULL);
		VirtActionInvoker1< Color_t2555686324  >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_22, L_28);
		__this->set_U24current_3(NULL);
		bool L_29 = __this->get_U24disposing_4();
		if (L_29)
		{
			goto IL_00ff;
		}
	}
	{
		__this->set_U24PC_5(1);
	}

IL_00ff:
	{
		goto IL_014d;
	}

IL_0104:
	{
		int32_t L_30 = __this->get_U3CiU3E__1_1();
		__this->set_U3CiU3E__1_1(((int32_t)il2cpp_codegen_add((int32_t)L_30, (int32_t)1)));
	}

IL_0112:
	{
		int32_t L_31 = __this->get_U3CiU3E__1_1();
		int32_t L_32 = __this->get_U3CstepsU3E__0_0();
		if ((((int32_t)L_31) < ((int32_t)L_32)))
		{
			goto IL_004a;
		}
	}
	{
		DeadScreen_t3234016418 * L_33 = __this->get_U24this_2();
		Image_t2670269651 * L_34 = L_33->get__backing_4();
		Color_t2555686324  L_35 = Color_get_black_m719512684(NULL /*static, unused*/, /*hidden argument*/NULL);
		VirtActionInvoker1< Color_t2555686324  >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_34, L_35);
		DeadScreen_t3234016418 * L_36 = __this->get_U24this_2();
		L_36->set__acceptInput_5((bool)1);
		__this->set_U24PC_5((-1));
	}

IL_014b:
	{
		return (bool)0;
	}

IL_014d:
	{
		return (bool)1;
	}
}
// System.Object DeadScreen/<FadeInBack>c__Iterator0::System.Collections.Generic.IEnumerator<object>.get_Current()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * U3CFadeInBackU3Ec__Iterator0_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m2651157765 (U3CFadeInBackU3Ec__Iterator0_t2620013686 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U24current_3();
		return L_0;
	}
}
// System.Object DeadScreen/<FadeInBack>c__Iterator0::System.Collections.IEnumerator.get_Current()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * U3CFadeInBackU3Ec__Iterator0_System_Collections_IEnumerator_get_Current_m1144495854 (U3CFadeInBackU3Ec__Iterator0_t2620013686 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U24current_3();
		return L_0;
	}
}
// System.Void DeadScreen/<FadeInBack>c__Iterator0::Dispose()
extern "C" IL2CPP_METHOD_ATTR void U3CFadeInBackU3Ec__Iterator0_Dispose_m3126517601 (U3CFadeInBackU3Ec__Iterator0_t2620013686 * __this, const RuntimeMethod* method)
{
	{
		__this->set_U24disposing_4((bool)1);
		__this->set_U24PC_5((-1));
		return;
	}
}
// System.Void DeadScreen/<FadeInBack>c__Iterator0::Reset()
extern "C" IL2CPP_METHOD_ATTR void U3CFadeInBackU3Ec__Iterator0_Reset_m2362835419 (U3CFadeInBackU3Ec__Iterator0_t2620013686 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CFadeInBackU3Ec__Iterator0_Reset_m2362835419_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NotSupportedException_t1314879016 * L_0 = (NotSupportedException_t1314879016 *)il2cpp_codegen_object_new(NotSupportedException_t1314879016_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m2730133172(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0,U3CFadeInBackU3Ec__Iterator0_Reset_m2362835419_RuntimeMethod_var);
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
// System.Void DeathParticle::.ctor()
extern "C" IL2CPP_METHOD_ATTR void DeathParticle__ctor_m1056685277 (DeathParticle_t1563849671 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void DeathParticle::Spawn(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void DeathParticle_Spawn_m1747827968 (DeathParticle_t1563849671 * __this, int32_t ___size0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DeathParticle_Spawn_m1747827968_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		V_0 = 0;
		goto IL_001e;
	}

IL_0007:
	{
		GameObject_t1113636619 * L_0 = __this->get__particle_2();
		Transform_t3600365921 * L_1 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		Object_Instantiate_TisGameObject_t1113636619_m4130575780(NULL /*static, unused*/, L_0, L_1, (bool)0, /*hidden argument*/Object_Instantiate_TisGameObject_t1113636619_m4130575780_RuntimeMethod_var);
		int32_t L_2 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_2, (int32_t)1));
	}

IL_001e:
	{
		int32_t L_3 = V_0;
		int32_t L_4 = ___size0;
		if ((((int32_t)L_3) < ((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_4, (int32_t)1)))))
		{
			goto IL_0007;
		}
	}
	{
		RuntimeObject* L_5 = DeathParticle_DestorySelf_m475054106(__this, /*hidden argument*/NULL);
		MonoBehaviour_StartCoroutine_m3411253000(__this, L_5, /*hidden argument*/NULL);
		return;
	}
}
// System.Collections.IEnumerator DeathParticle::DestorySelf()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* DeathParticle_DestorySelf_m475054106 (DeathParticle_t1563849671 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DeathParticle_DestorySelf_m475054106_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	U3CDestorySelfU3Ec__Iterator0_t3880288534 * V_0 = NULL;
	{
		U3CDestorySelfU3Ec__Iterator0_t3880288534 * L_0 = (U3CDestorySelfU3Ec__Iterator0_t3880288534 *)il2cpp_codegen_object_new(U3CDestorySelfU3Ec__Iterator0_t3880288534_il2cpp_TypeInfo_var);
		U3CDestorySelfU3Ec__Iterator0__ctor_m4093584260(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CDestorySelfU3Ec__Iterator0_t3880288534 * L_1 = V_0;
		L_1->set_U24this_0(__this);
		U3CDestorySelfU3Ec__Iterator0_t3880288534 * L_2 = V_0;
		return L_2;
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
// System.Void DeathParticle/<DestorySelf>c__Iterator0::.ctor()
extern "C" IL2CPP_METHOD_ATTR void U3CDestorySelfU3Ec__Iterator0__ctor_m4093584260 (U3CDestorySelfU3Ec__Iterator0_t3880288534 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean DeathParticle/<DestorySelf>c__Iterator0::MoveNext()
extern "C" IL2CPP_METHOD_ATTR bool U3CDestorySelfU3Ec__Iterator0_MoveNext_m257090863 (U3CDestorySelfU3Ec__Iterator0_t3880288534 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CDestorySelfU3Ec__Iterator0_MoveNext_m257090863_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_U24PC_3();
		V_0 = L_0;
		__this->set_U24PC_3((-1));
		uint32_t L_1 = V_0;
		switch (L_1)
		{
			case 0:
			{
				goto IL_0021;
			}
			case 1:
			{
				goto IL_0041;
			}
		}
	}
	{
		goto IL_006b;
	}

IL_0021:
	{
		goto IL_0041;
	}

IL_0026:
	{
		__this->set_U24current_1(NULL);
		bool L_2 = __this->get_U24disposing_2();
		if (L_2)
		{
			goto IL_003c;
		}
	}
	{
		__this->set_U24PC_3(1);
	}

IL_003c:
	{
		goto IL_006d;
	}

IL_0041:
	{
		DeathParticle_t1563849671 * L_3 = __this->get_U24this_0();
		ParticleU5BU5D_t3335713388* L_4 = Component_GetComponentsInChildren_TisParticle_t3168132017_m4250776686(L_3, /*hidden argument*/Component_GetComponentsInChildren_TisParticle_t3168132017_m4250776686_RuntimeMethod_var);
		if ((((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_4)->max_length))))) > ((int32_t)0)))
		{
			goto IL_0026;
		}
	}
	{
		DeathParticle_t1563849671 * L_5 = __this->get_U24this_0();
		GameObject_t1113636619 * L_6 = Component_get_gameObject_m442555142(L_5, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		Object_Destroy_m565254235(NULL /*static, unused*/, L_6, /*hidden argument*/NULL);
		__this->set_U24PC_3((-1));
	}

IL_006b:
	{
		return (bool)0;
	}

IL_006d:
	{
		return (bool)1;
	}
}
// System.Object DeathParticle/<DestorySelf>c__Iterator0::System.Collections.Generic.IEnumerator<object>.get_Current()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * U3CDestorySelfU3Ec__Iterator0_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m453165105 (U3CDestorySelfU3Ec__Iterator0_t3880288534 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U24current_1();
		return L_0;
	}
}
// System.Object DeathParticle/<DestorySelf>c__Iterator0::System.Collections.IEnumerator.get_Current()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * U3CDestorySelfU3Ec__Iterator0_System_Collections_IEnumerator_get_Current_m3159028733 (U3CDestorySelfU3Ec__Iterator0_t3880288534 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U24current_1();
		return L_0;
	}
}
// System.Void DeathParticle/<DestorySelf>c__Iterator0::Dispose()
extern "C" IL2CPP_METHOD_ATTR void U3CDestorySelfU3Ec__Iterator0_Dispose_m631768742 (U3CDestorySelfU3Ec__Iterator0_t3880288534 * __this, const RuntimeMethod* method)
{
	{
		__this->set_U24disposing_2((bool)1);
		__this->set_U24PC_3((-1));
		return;
	}
}
// System.Void DeathParticle/<DestorySelf>c__Iterator0::Reset()
extern "C" IL2CPP_METHOD_ATTR void U3CDestorySelfU3Ec__Iterator0_Reset_m2923211260 (U3CDestorySelfU3Ec__Iterator0_t3880288534 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CDestorySelfU3Ec__Iterator0_Reset_m2923211260_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NotSupportedException_t1314879016 * L_0 = (NotSupportedException_t1314879016 *)il2cpp_codegen_object_new(NotSupportedException_t1314879016_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m2730133172(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0,U3CDestorySelfU3Ec__Iterator0_Reset_m2923211260_RuntimeMethod_var);
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
// Conversion methods for marshalling of: DirectionToStartMapping
extern "C" void DirectionToStartMapping_t1813080072_marshal_pinvoke(const DirectionToStartMapping_t1813080072& unmarshaled, DirectionToStartMapping_t1813080072_marshaled_pinvoke& marshaled)
{
	Exception_t* ___position_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'position' of type 'DirectionToStartMapping': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___position_1Exception,NULL);
}
extern "C" void DirectionToStartMapping_t1813080072_marshal_pinvoke_back(const DirectionToStartMapping_t1813080072_marshaled_pinvoke& marshaled, DirectionToStartMapping_t1813080072& unmarshaled)
{
	Exception_t* ___position_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'position' of type 'DirectionToStartMapping': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___position_1Exception,NULL);
}
// Conversion method for clean up from marshalling of: DirectionToStartMapping
extern "C" void DirectionToStartMapping_t1813080072_marshal_pinvoke_cleanup(DirectionToStartMapping_t1813080072_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: DirectionToStartMapping
extern "C" void DirectionToStartMapping_t1813080072_marshal_com(const DirectionToStartMapping_t1813080072& unmarshaled, DirectionToStartMapping_t1813080072_marshaled_com& marshaled)
{
	Exception_t* ___position_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'position' of type 'DirectionToStartMapping': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___position_1Exception,NULL);
}
extern "C" void DirectionToStartMapping_t1813080072_marshal_com_back(const DirectionToStartMapping_t1813080072_marshaled_com& marshaled, DirectionToStartMapping_t1813080072& unmarshaled)
{
	Exception_t* ___position_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'position' of type 'DirectionToStartMapping': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___position_1Exception,NULL);
}
// Conversion method for clean up from marshalling of: DirectionToStartMapping
extern "C" void DirectionToStartMapping_t1813080072_marshal_com_cleanup(DirectionToStartMapping_t1813080072_marshaled_com& marshaled)
{
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Door::.ctor()
extern "C" IL2CPP_METHOD_ATTR void Door__ctor_m1947840517 (Door_t3715198229 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// DoorDirection Door::Opposite(DoorDirection)
extern "C" IL2CPP_METHOD_ATTR int32_t Door_Opposite_m4194424780 (RuntimeObject * __this /* static, unused */, int32_t ___direction0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Door_Opposite_m4194424780_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___direction0;
		switch (L_0)
		{
			case 0:
			{
				goto IL_001b;
			}
			case 1:
			{
				goto IL_001d;
			}
			case 2:
			{
				goto IL_001f;
			}
			case 3:
			{
				goto IL_0021;
			}
		}
	}
	{
		goto IL_0023;
	}

IL_001b:
	{
		return (int32_t)(1);
	}

IL_001d:
	{
		return (int32_t)(0);
	}

IL_001f:
	{
		return (int32_t)(3);
	}

IL_0021:
	{
		return (int32_t)(2);
	}

IL_0023:
	{
		int32_t L_1 = ___direction0;
		int32_t L_2 = L_1;
		RuntimeObject * L_3 = Box(DoorDirection_t488480648_il2cpp_TypeInfo_var, &L_2);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_4 = String_Concat_m904156431(NULL /*static, unused*/, _stringLiteral2107521751, L_3, /*hidden argument*/NULL);
		Exception_t * L_5 = (Exception_t *)il2cpp_codegen_object_new(Exception_t_il2cpp_TypeInfo_var);
		Exception__ctor_m1152696503(L_5, L_4, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5,Door_Opposite_m4194424780_RuntimeMethod_var);
	}
}
// DoorDirection Door::get_DoorDirection()
extern "C" IL2CPP_METHOD_ATTR int32_t Door_get_DoorDirection_m2149117971 (Door_t3715198229 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get__doorDirection_2();
		return L_0;
	}
}
// System.Void Door::OnTriggerEnter2D(UnityEngine.Collider2D)
extern "C" IL2CPP_METHOD_ATTR void Door_OnTriggerEnter2D_m2782650637 (Door_t3715198229 * __this, Collider2D_t2806799626 * ___collision0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Door_OnTriggerEnter2D_m2782650637_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = Behaviour_get_enabled_m753527255(__this, /*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_000c;
		}
	}
	{
		return;
	}

IL_000c:
	{
		Collider2D_t2806799626 * L_1 = ___collision0;
		Player_t3266647312 * L_2 = Component_GetComponent_TisPlayer_t3266647312_m3431077271(L_1, /*hidden argument*/Component_GetComponent_TisPlayer_t3266647312_m3431077271_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_3 = Object_op_Implicit_m3574996620(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0042;
		}
	}
	{
		bool L_4 = __this->get__prompted_3();
		if (L_4)
		{
			goto IL_0042;
		}
	}
	{
		MessagePopup_t1375170899 * L_5 = MessagePopup_get_Instance_m3005294533(NULL /*static, unused*/, /*hidden argument*/NULL);
		MessagePopup_ShowMessage_m3946694855(L_5, _stringLiteral572433886, (1.0f), /*hidden argument*/NULL);
		__this->set__prompted_3((bool)1);
	}

IL_0042:
	{
		return;
	}
}
// System.Void Door::OnTriggerExit2D(UnityEngine.Collider2D)
extern "C" IL2CPP_METHOD_ATTR void Door_OnTriggerExit2D_m261027791 (Door_t3715198229 * __this, Collider2D_t2806799626 * ___collision0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Door_OnTriggerExit2D_m261027791_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = Behaviour_get_enabled_m753527255(__this, /*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_000c;
		}
	}
	{
		return;
	}

IL_000c:
	{
		Collider2D_t2806799626 * L_1 = ___collision0;
		Player_t3266647312 * L_2 = Component_GetComponent_TisPlayer_t3266647312_m3431077271(L_1, /*hidden argument*/Component_GetComponent_TisPlayer_t3266647312_m3431077271_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_3 = Object_op_Implicit_m3574996620(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0023;
		}
	}
	{
		__this->set__prompted_3((bool)0);
	}

IL_0023:
	{
		return;
	}
}
// System.Void Door::Update()
extern "C" IL2CPP_METHOD_ATTR void Door_Update_m1158462231 (Door_t3715198229 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Door_Update_m1158462231_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = __this->get__prompted_3();
		if (!L_0)
		{
			goto IL_0027;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1431474628_il2cpp_TypeInfo_var);
		bool L_1 = Input_GetKeyDown_m17791917(NULL /*static, unused*/, ((int32_t)101), /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0027;
		}
	}
	{
		LevelLoader_t3964987435 * L_2 = LevelLoader_get_Instance_m1614870452(NULL /*static, unused*/, /*hidden argument*/NULL);
		int32_t L_3 = __this->get__doorDirection_2();
		LevelLoader_LoadLevel_m2719355285(L_2, L_3, /*hidden argument*/NULL);
	}

IL_0027:
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void EnemyNodeComparer::.ctor(SkellyAI)
extern "C" IL2CPP_METHOD_ATTR void EnemyNodeComparer__ctor_m1176330128 (EnemyNodeComparer_t2029075025 * __this, SkellyAI_t2611779661 * ___skelly0, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		SkellyAI_t2611779661 * L_0 = ___skelly0;
		__this->set__skellyAI_0(L_0);
		return;
	}
}
// System.Int32 EnemyNodeComparer::Compare(UnityEngine.GameObject,UnityEngine.GameObject)
extern "C" IL2CPP_METHOD_ATTR int32_t EnemyNodeComparer_Compare_m917280223 (EnemyNodeComparer_t2029075025 * __this, GameObject_t1113636619 * ___x0, GameObject_t1113636619 * ___y1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (EnemyNodeComparer_Compare_m917280223_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		GameObject_t1113636619 * L_0 = ___x0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Equality_m1810815630(NULL /*static, unused*/, L_0, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_0018;
		}
	}
	{
		GameObject_t1113636619 * L_2 = ___y1;
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_3 = Object_op_Equality_m1810815630(NULL /*static, unused*/, L_2, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_001a;
		}
	}

IL_0018:
	{
		return 0;
	}

IL_001a:
	{
		SkellyAI_t2611779661 * L_4 = __this->get__skellyAI_0();
		Transform_t3600365921 * L_5 = Component_get_transform_m3162698980(L_4, /*hidden argument*/NULL);
		Vector3_t3722313464  L_6 = Transform_get_position_m36019626(L_5, /*hidden argument*/NULL);
		GameObject_t1113636619 * L_7 = ___x0;
		Transform_t3600365921 * L_8 = GameObject_get_transform_m1369836730(L_7, /*hidden argument*/NULL);
		Vector3_t3722313464  L_9 = Transform_get_position_m36019626(L_8, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t3722313464_il2cpp_TypeInfo_var);
		float L_10 = Vector3_Distance_m886789632(NULL /*static, unused*/, L_6, L_9, /*hidden argument*/NULL);
		SkellyAI_t2611779661 * L_11 = __this->get__skellyAI_0();
		Transform_t3600365921 * L_12 = Component_get_transform_m3162698980(L_11, /*hidden argument*/NULL);
		Vector3_t3722313464  L_13 = Transform_get_position_m36019626(L_12, /*hidden argument*/NULL);
		GameObject_t1113636619 * L_14 = ___y1;
		Transform_t3600365921 * L_15 = GameObject_get_transform_m1369836730(L_14, /*hidden argument*/NULL);
		Vector3_t3722313464  L_16 = Transform_get_position_m36019626(L_15, /*hidden argument*/NULL);
		float L_17 = Vector3_Distance_m886789632(NULL /*static, unused*/, L_13, L_16, /*hidden argument*/NULL);
		return (((int32_t)((int32_t)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_10, (float)L_17)), (float)(100.0f))))));
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
// System.Void Entity::.ctor()
extern "C" IL2CPP_METHOD_ATTR void Entity__ctor_m643651842 (Entity_t3391956725 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// EntityState Entity::get_EntityState()
extern "C" IL2CPP_METHOD_ATTR int32_t Entity_get_EntityState_m1649150700 (Entity_t3391956725 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get__entityState_7();
		return L_0;
	}
}
// System.Void Entity::set_EntityState(EntityState)
extern "C" IL2CPP_METHOD_ATTR void Entity_set_EntityState_m1502674663 (Entity_t3391956725 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set__entityState_7(L_0);
		return;
	}
}
// System.Boolean Entity::get_CanAttack()
extern "C" IL2CPP_METHOD_ATTR bool Entity_get_CanAttack_m1747367931 (Entity_t3391956725 * __this, const RuntimeMethod* method)
{
	{
		float L_0 = __this->get__currentAttackDelay_15();
		return (bool)((((int32_t)((!(((float)L_0) <= ((float)(0.0f))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// Weapon Entity::get_CurrentWeapon()
extern "C" IL2CPP_METHOD_ATTR Weapon_t4063826929 * Entity_get_CurrentWeapon_m2943287280 (Entity_t3391956725 * __this, const RuntimeMethod* method)
{
	{
		Weapon_t4063826929 * L_0 = __this->get__currentWeapon_17();
		return L_0;
	}
}
// System.Boolean Entity::get_Alive()
extern "C" IL2CPP_METHOD_ATTR bool Entity_get_Alive_m1193177492 (Entity_t3391956725 * __this, const RuntimeMethod* method)
{
	{
		float L_0 = __this->get__health_18();
		return (bool)((((float)L_0) > ((float)(0.0f)))? 1 : 0);
	}
}
// System.Void Entity::TakeDamage(System.Single,UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR void Entity_TakeDamage_m239986278 (Entity_t3391956725 * __this, float ___damage0, Vector3_t3722313464  ___attackerPosition1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Entity_TakeDamage_m239986278_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t3722313464  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		AudioSource_t3935305588 * L_0 = __this->get__hitSound_6();
		AudioSource_Play_m48294159(L_0, /*hidden argument*/NULL);
		float L_1 = __this->get__health_18();
		float L_2 = ___damage0;
		__this->set__health_18(((float)il2cpp_codegen_subtract((float)L_1, (float)L_2)));
		Transform_t3600365921 * L_3 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		Vector3_t3722313464  L_4 = Transform_get_position_m36019626(L_3, /*hidden argument*/NULL);
		Vector3_t3722313464  L_5 = ___attackerPosition1;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t3722313464_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_6 = Vector3_op_Subtraction_m3073674971(NULL /*static, unused*/, L_4, L_5, /*hidden argument*/NULL);
		V_0 = L_6;
		Vector3_Normalize_m914904454((&V_0), /*hidden argument*/NULL);
		Rigidbody2D_t939494601 * L_7 = Component_GetComponent_TisRigidbody2D_t939494601_m1531613439(__this, /*hidden argument*/Component_GetComponent_TisRigidbody2D_t939494601_m1531613439_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_8 = Object_op_Implicit_m3574996620(NULL /*static, unused*/, L_7, /*hidden argument*/NULL);
		if (!L_8)
		{
			goto IL_005e;
		}
	}
	{
		Rigidbody2D_t939494601 * L_9 = Component_GetComponent_TisRigidbody2D_t939494601_m1531613439(__this, /*hidden argument*/Component_GetComponent_TisRigidbody2D_t939494601_m1531613439_RuntimeMethod_var);
		Vector3_t3722313464  L_10 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t3722313464_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_11 = Vector3_op_Multiply_m3376773913(NULL /*static, unused*/, L_10, (350.0f), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_t2156229523_il2cpp_TypeInfo_var);
		Vector2_t2156229523  L_12 = Vector2_op_Implicit_m4260192859(NULL /*static, unused*/, L_11, /*hidden argument*/NULL);
		Rigidbody2D_AddForce_m1099013366(L_9, L_12, 0, /*hidden argument*/NULL);
	}

IL_005e:
	{
		return;
	}
}
// System.Void Entity::Start()
extern "C" IL2CPP_METHOD_ATTR void Entity_Start_m2858852706 (Entity_t3391956725 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Entity_Start_m2858852706_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	EntityStateAnimationMapping_t2495869459  V_0;
	memset(&V_0, 0, sizeof(V_0));
	Enumerator_t1562220782  V_1;
	memset(&V_1, 0, sizeof(V_1));
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		__this->set__flipped_13((bool)0);
		Dictionary_2_t26093461 * L_0 = (Dictionary_2_t26093461 *)il2cpp_codegen_object_new(Dictionary_2_t26093461_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m327346751(L_0, /*hidden argument*/Dictionary_2__ctor_m327346751_RuntimeMethod_var);
		__this->set__quickLookup_10(L_0);
		List_1_t3967944201 * L_1 = __this->get__entityStateAnimation_9();
		Enumerator_t1562220782  L_2 = List_1_GetEnumerator_m2765381048(L_1, /*hidden argument*/List_1_GetEnumerator_m2765381048_RuntimeMethod_var);
		V_1 = L_2;
	}

IL_001e:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0044;
		}

IL_0023:
		{
			EntityStateAnimationMapping_t2495869459  L_3 = Enumerator_get_Current_m4060103381((&V_1), /*hidden argument*/Enumerator_get_Current_m4060103381_RuntimeMethod_var);
			V_0 = L_3;
			Dictionary_2_t26093461 * L_4 = __this->get__quickLookup_10();
			int32_t L_5 = (&V_0)->get_entityState_0();
			String_t* L_6 = (&V_0)->get_animation_1();
			Dictionary_2_Add_m3007986313(L_4, L_5, L_6, /*hidden argument*/Dictionary_2_Add_m3007986313_RuntimeMethod_var);
		}

IL_0044:
		{
			bool L_7 = Enumerator_MoveNext_m1755039323((&V_1), /*hidden argument*/Enumerator_MoveNext_m1755039323_RuntimeMethod_var);
			if (L_7)
			{
				goto IL_0023;
			}
		}

IL_0050:
		{
			IL2CPP_LEAVE(0x63, FINALLY_0055);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0055;
	}

FINALLY_0055:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m2046819164((&V_1), /*hidden argument*/Enumerator_Dispose_m2046819164_RuntimeMethod_var);
		IL2CPP_END_FINALLY(85)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(85)
	{
		IL2CPP_JUMP_TBL(0x63, IL_0063)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0063:
	{
		List_1_t3967944201 * L_8 = __this->get__entityStateAnimation_9();
		List_1_Clear_m3690193696(L_8, /*hidden argument*/List_1_Clear_m3690193696_RuntimeMethod_var);
		return;
	}
}
// System.Void Entity::Update()
extern "C" IL2CPP_METHOD_ATTR void Entity_Update_m1477389504 (Entity_t3391956725 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Entity_Update_m1477389504_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	Vector3_t3722313464  V_1;
	memset(&V_1, 0, sizeof(V_1));
	Vector3_t3722313464  V_2;
	memset(&V_2, 0, sizeof(V_2));
	Vector3_t3722313464  V_3;
	memset(&V_3, 0, sizeof(V_3));
	String_t* G_B4_0 = NULL;
	{
		Animator_t434523843 * L_0 = __this->get__animation_11();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Inequality_m4071470834(NULL /*static, unused*/, L_0, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_007e;
		}
	}
	{
		Dictionary_2_t26093461 * L_2 = __this->get__quickLookup_10();
		int32_t L_3 = __this->get__entityState_7();
		bool L_4 = Dictionary_2_ContainsKey_m1345678609(L_2, L_3, /*hidden argument*/Dictionary_2_ContainsKey_m1345678609_RuntimeMethod_var);
		if (!L_4)
		{
			goto IL_003d;
		}
	}
	{
		Dictionary_2_t26093461 * L_5 = __this->get__quickLookup_10();
		int32_t L_6 = __this->get__entityState_7();
		String_t* L_7 = Dictionary_2_get_Item_m2654463680(L_5, L_6, /*hidden argument*/Dictionary_2_get_Item_m2654463680_RuntimeMethod_var);
		G_B4_0 = L_7;
		goto IL_004e;
	}

IL_003d:
	{
		Dictionary_2_t26093461 * L_8 = __this->get__quickLookup_10();
		int32_t L_9 = __this->get__fallback_8();
		String_t* L_10 = Dictionary_2_get_Item_m2654463680(L_8, L_9, /*hidden argument*/Dictionary_2_get_Item_m2654463680_RuntimeMethod_var);
		G_B4_0 = L_10;
	}

IL_004e:
	{
		V_0 = G_B4_0;
		Animator_t434523843 * L_11 = __this->get__animation_11();
		String_t* L_12 = V_0;
		Animator_Play_m1697843332(L_11, L_12, /*hidden argument*/NULL);
		SpriteRenderer_t3235626157 * L_13 = __this->get__spriteRenderer_12();
		bool L_14 = __this->get__flipped_13();
		SpriteRenderer_set_flipX_m126972045(L_13, L_14, /*hidden argument*/NULL);
		float L_15 = __this->get__currentAttackDelay_15();
		float L_16 = Time_get_deltaTime_m372706562(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->set__currentAttackDelay_15(((float)il2cpp_codegen_subtract((float)L_15, (float)L_16)));
	}

IL_007e:
	{
		Transform_t3600365921 * L_17 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		Transform_t3600365921 * L_18 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		Vector3_t3722313464  L_19 = Transform_get_position_m36019626(L_18, /*hidden argument*/NULL);
		V_1 = L_19;
		float L_20 = (&V_1)->get_x_1();
		Transform_t3600365921 * L_21 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		Vector3_t3722313464  L_22 = Transform_get_position_m36019626(L_21, /*hidden argument*/NULL);
		V_2 = L_22;
		float L_23 = (&V_2)->get_y_2();
		Transform_t3600365921 * L_24 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		Vector3_t3722313464  L_25 = Transform_get_position_m36019626(L_24, /*hidden argument*/NULL);
		V_3 = L_25;
		float L_26 = (&V_3)->get_y_2();
		Vector3_t3722313464  L_27;
		memset(&L_27, 0, sizeof(L_27));
		Vector3__ctor_m3353183577((&L_27), L_20, L_23, ((-L_26)), /*hidden argument*/NULL);
		Transform_set_position_m3387557959(L_17, L_27, /*hidden argument*/NULL);
		bool L_28 = Entity_get_Alive_m1193177492(__this, /*hidden argument*/NULL);
		if (L_28)
		{
			goto IL_00d9;
		}
	}
	{
		Entity_Die_m1951964753(__this, /*hidden argument*/NULL);
	}

IL_00d9:
	{
		return;
	}
}
// System.Void Entity::Die()
extern "C" IL2CPP_METHOD_ATTR void Entity_Die_m1951964753 (Entity_t3391956725 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Entity_Die_m1951964753_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	DeathParticle_t1563849671 * V_0 = NULL;
	{
		PrefabResource_t3713134029 * L_0 = PrefabResource_get_Instance_m593630871(NULL /*static, unused*/, /*hidden argument*/NULL);
		DeathParticle_t1563849671 * L_1 = L_0->get_deathParticle_2();
		Transform_t3600365921 * L_2 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		Vector3_t3722313464  L_3 = Transform_get_position_m36019626(L_2, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t2301928331_il2cpp_TypeInfo_var);
		Quaternion_t2301928331  L_4 = Quaternion_Euler_m3049309462(NULL /*static, unused*/, (0.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		DeathParticle_t1563849671 * L_5 = Object_Instantiate_TisDeathParticle_t1563849671_m1714186665(NULL /*static, unused*/, L_1, L_3, L_4, (Transform_t3600365921 *)NULL, /*hidden argument*/Object_Instantiate_TisDeathParticle_t1563849671_m1714186665_RuntimeMethod_var);
		V_0 = L_5;
		DeathParticle_t1563849671 * L_6 = V_0;
		DeathParticle_Spawn_m1747827968(L_6, 3, /*hidden argument*/NULL);
		GameObject_t1113636619 * L_7 = Component_get_gameObject_m442555142(__this, /*hidden argument*/NULL);
		Object_Destroy_m565254235(NULL /*static, unused*/, L_7, /*hidden argument*/NULL);
		OnDie_t3469385283 * L_8 = __this->get__onDie_19();
		if (!L_8)
		{
			goto IL_0058;
		}
	}
	{
		OnDie_t3469385283 * L_9 = __this->get__onDie_19();
		OnDie_Invoke_m2375718485(L_9, /*hidden argument*/NULL);
	}

IL_0058:
	{
		return;
	}
}
// System.Void Entity::ResetAttackTimer()
extern "C" IL2CPP_METHOD_ATTR void Entity_ResetAttackTimer_m2795665490 (Entity_t3391956725 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Entity_ResetAttackTimer_m2795665490_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Weapon_t4063826929 * L_0 = __this->get__currentWeapon_17();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Inequality_m4071470834(NULL /*static, unused*/, L_0, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0022;
		}
	}
	{
		Weapon_t4063826929 * L_2 = __this->get__currentWeapon_17();
		float L_3 = Weapon_get_CooldownTime_m1803901553(L_2, /*hidden argument*/NULL);
		__this->set__currentAttackDelay_15(L_3);
	}

IL_0022:
	{
		return;
	}
}
// System.Void Entity::DoWeaponAttack()
extern "C" IL2CPP_METHOD_ATTR void Entity_DoWeaponAttack_m2033153511 (Entity_t3391956725 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Entity_DoWeaponAttack_m2033153511_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = Entity_get_CanAttack_m1747367931(__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_003a;
		}
	}
	{
		Entity_ResetAttackTimer_m2795665490(__this, /*hidden argument*/NULL);
		Weapon_t4063826929 * L_1 = __this->get__currentWeapon_17();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_2 = Object_op_Inequality_m4071470834(NULL /*static, unused*/, L_1, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_003a;
		}
	}
	{
		Weapon_t4063826929 * L_3 = __this->get__currentWeapon_17();
		TransformU5BU5D_t807237628* L_4 = __this->get__attackPositions_14();
		int32_t L_5 = __this->get__direction_16();
		int32_t L_6 = L_5;
		Transform_t3600365921 * L_7 = (L_4)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_6));
		Weapon_DoAttack_m3684433822(L_3, L_7, /*hidden argument*/NULL);
	}

IL_003a:
	{
		return;
	}
}
// System.Void Entity::AddWeapon(Weapon)
extern "C" IL2CPP_METHOD_ATTR void Entity_AddWeapon_m1181459715 (Entity_t3391956725 * __this, Weapon_t4063826929 * ___weapon0, const RuntimeMethod* method)
{
	{
		Weapon_t4063826929 * L_0 = ___weapon0;
		__this->set__currentWeapon_17(L_0);
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
extern "C"  void DelegatePInvokeWrapper_OnDie_t3469385283 (OnDie_t3469385283 * __this, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)();
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	il2cppPInvokeFunc();

}
// System.Void Entity/OnDie::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void OnDie__ctor_m2396501215 (OnDie_t3469385283 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void Entity/OnDie::Invoke()
extern "C" IL2CPP_METHOD_ATTR void OnDie_Invoke_m2375718485 (OnDie_t3469385283 * __this, const RuntimeMethod* method)
{
	if(__this->get_prev_9() != NULL)
	{
		OnDie_Invoke_m2375718485((OnDie_t3469385283 *)__this->get_prev_9(), method);
	}
	Il2CppMethodPointer targetMethodPointer = __this->get_method_ptr_0();
	RuntimeMethod* targetMethod = (RuntimeMethod*)(__this->get_method_3());
	RuntimeObject* targetThis = __this->get_m_target_2();
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
	bool ___methodIsStatic = MethodIsStatic(targetMethod);
	if (___methodIsStatic)
	{
		if (il2cpp_codegen_method_parameter_count(targetMethod) == 0)
		{
			// open
			{
				typedef void (*FunctionPointerType) (RuntimeObject *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(NULL, targetMethod);
			}
		}
		else
		{
			// closed
			{
				typedef void (*FunctionPointerType) (RuntimeObject *, void*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(NULL, targetThis, targetMethod);
			}
		}
	}
	else
	{
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker0::Invoke(targetMethod, targetThis);
					else
						GenericVirtActionInvoker0::Invoke(targetMethod, targetThis);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis);
					else
						VirtActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, targetMethod);
			}
		}
	}
}
// System.IAsyncResult Entity/OnDie::BeginInvoke(System.AsyncCallback,System.Object)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* OnDie_BeginInvoke_m3077139466 (OnDie_t3469385283 * __this, AsyncCallback_t3962456242 * ___callback0, RuntimeObject * ___object1, const RuntimeMethod* method)
{
	void *__d_args[1] = {0};
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback0, (RuntimeObject*)___object1);
}
// System.Void Entity/OnDie::EndInvoke(System.IAsyncResult)
extern "C" IL2CPP_METHOD_ATTR void OnDie_EndInvoke_m491840708 (OnDie_t3469385283 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
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
// Conversion methods for marshalling of: EntityStateAnimationMapping
extern "C" void EntityStateAnimationMapping_t2495869459_marshal_pinvoke(const EntityStateAnimationMapping_t2495869459& unmarshaled, EntityStateAnimationMapping_t2495869459_marshaled_pinvoke& marshaled)
{
	marshaled.___entityState_0 = unmarshaled.get_entityState_0();
	marshaled.___animation_1 = il2cpp_codegen_marshal_string(unmarshaled.get_animation_1());
}
extern "C" void EntityStateAnimationMapping_t2495869459_marshal_pinvoke_back(const EntityStateAnimationMapping_t2495869459_marshaled_pinvoke& marshaled, EntityStateAnimationMapping_t2495869459& unmarshaled)
{
	int32_t unmarshaled_entityState_temp_0 = 0;
	unmarshaled_entityState_temp_0 = marshaled.___entityState_0;
	unmarshaled.set_entityState_0(unmarshaled_entityState_temp_0);
	unmarshaled.set_animation_1(il2cpp_codegen_marshal_string_result(marshaled.___animation_1));
}
// Conversion method for clean up from marshalling of: EntityStateAnimationMapping
extern "C" void EntityStateAnimationMapping_t2495869459_marshal_pinvoke_cleanup(EntityStateAnimationMapping_t2495869459_marshaled_pinvoke& marshaled)
{
	il2cpp_codegen_marshal_free(marshaled.___animation_1);
	marshaled.___animation_1 = NULL;
}
// Conversion methods for marshalling of: EntityStateAnimationMapping
extern "C" void EntityStateAnimationMapping_t2495869459_marshal_com(const EntityStateAnimationMapping_t2495869459& unmarshaled, EntityStateAnimationMapping_t2495869459_marshaled_com& marshaled)
{
	marshaled.___entityState_0 = unmarshaled.get_entityState_0();
	marshaled.___animation_1 = il2cpp_codegen_marshal_bstring(unmarshaled.get_animation_1());
}
extern "C" void EntityStateAnimationMapping_t2495869459_marshal_com_back(const EntityStateAnimationMapping_t2495869459_marshaled_com& marshaled, EntityStateAnimationMapping_t2495869459& unmarshaled)
{
	int32_t unmarshaled_entityState_temp_0 = 0;
	unmarshaled_entityState_temp_0 = marshaled.___entityState_0;
	unmarshaled.set_entityState_0(unmarshaled_entityState_temp_0);
	unmarshaled.set_animation_1(il2cpp_codegen_marshal_bstring_result(marshaled.___animation_1));
}
// Conversion method for clean up from marshalling of: EntityStateAnimationMapping
extern "C" void EntityStateAnimationMapping_t2495869459_marshal_com_cleanup(EntityStateAnimationMapping_t2495869459_marshaled_com& marshaled)
{
	il2cpp_codegen_marshal_free_bstring(marshaled.___animation_1);
	marshaled.___animation_1 = NULL;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void GameInit::.ctor()
extern "C" IL2CPP_METHOD_ATTR void GameInit__ctor_m1475895275 (GameInit_t412799062 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GameInit::Start()
extern "C" IL2CPP_METHOD_ATTR void GameInit_Start_m268970583 (GameInit_t412799062 * __this, const RuntimeMethod* method)
{
	{
		Application_set_targetFrameRate_m3682352535(NULL /*static, unused*/, ((int32_t)60), /*hidden argument*/NULL);
		SceneManager_LoadScene_m3463216446(NULL /*static, unused*/, 1, /*hidden argument*/NULL);
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
// System.Void Grass::.ctor()
extern "C" IL2CPP_METHOD_ATTR void Grass__ctor_m3905735729 (Grass_t1377767949 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Grass::Start()
extern "C" IL2CPP_METHOD_ATTR void Grass_Start_m824388593 (Grass_t1377767949 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Grass_Start_m824388593_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Transform_t3600365921 * L_0 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t3722313464_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_1 = Vector3_get_one_m1629952498(NULL /*static, unused*/, /*hidden argument*/NULL);
		float L_2 = Random_get_value_m3115885645(NULL /*static, unused*/, /*hidden argument*/NULL);
		Vector3_t3722313464  L_3 = Vector3_op_Multiply_m3376773913(NULL /*static, unused*/, L_1, ((float)il2cpp_codegen_add((float)(0.45f), (float)((float)il2cpp_codegen_multiply((float)L_2, (float)(0.5f))))), /*hidden argument*/NULL);
		Transform_set_localScale_m3053443106(L_0, L_3, /*hidden argument*/NULL);
		RuntimeObject* L_4 = Grass_PickNewAngle_m1899737026(__this, /*hidden argument*/NULL);
		MonoBehaviour_StartCoroutine_m3411253000(__this, L_4, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Grass::Update()
extern "C" IL2CPP_METHOD_ATTR void Grass_Update_m4212941726 (Grass_t1377767949 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Grass_Update_m4212941726_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Transform_t3600365921 * L_0 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		Transform_t3600365921 * L_1 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		Quaternion_t2301928331  L_2 = Transform_get_localRotation_m3487911431(L_1, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t3722313464_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_3 = Vector3_get_back_m4077847766(NULL /*static, unused*/, /*hidden argument*/NULL);
		float L_4 = __this->get__angle_2();
		Vector3_t3722313464  L_5 = Vector3_op_Multiply_m3376773913(NULL /*static, unused*/, L_3, L_4, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t2301928331_il2cpp_TypeInfo_var);
		Quaternion_t2301928331  L_6 = Quaternion_Euler_m1803555822(NULL /*static, unused*/, L_5, /*hidden argument*/NULL);
		float L_7 = Time_get_deltaTime_m372706562(NULL /*static, unused*/, /*hidden argument*/NULL);
		Quaternion_t2301928331  L_8 = Quaternion_Lerp_m1238806789(NULL /*static, unused*/, L_2, L_6, L_7, /*hidden argument*/NULL);
		Transform_set_localRotation_m19445462(L_0, L_8, /*hidden argument*/NULL);
		return;
	}
}
// System.Collections.IEnumerator Grass::PickNewAngle()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* Grass_PickNewAngle_m1899737026 (Grass_t1377767949 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Grass_PickNewAngle_m1899737026_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	U3CPickNewAngleU3Ec__Iterator0_t696507028 * V_0 = NULL;
	{
		U3CPickNewAngleU3Ec__Iterator0_t696507028 * L_0 = (U3CPickNewAngleU3Ec__Iterator0_t696507028 *)il2cpp_codegen_object_new(U3CPickNewAngleU3Ec__Iterator0_t696507028_il2cpp_TypeInfo_var);
		U3CPickNewAngleU3Ec__Iterator0__ctor_m2580022657(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CPickNewAngleU3Ec__Iterator0_t696507028 * L_1 = V_0;
		L_1->set_U24this_0(__this);
		U3CPickNewAngleU3Ec__Iterator0_t696507028 * L_2 = V_0;
		return L_2;
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
// System.Void Grass/<PickNewAngle>c__Iterator0::.ctor()
extern "C" IL2CPP_METHOD_ATTR void U3CPickNewAngleU3Ec__Iterator0__ctor_m2580022657 (U3CPickNewAngleU3Ec__Iterator0_t696507028 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean Grass/<PickNewAngle>c__Iterator0::MoveNext()
extern "C" IL2CPP_METHOD_ATTR bool U3CPickNewAngleU3Ec__Iterator0_MoveNext_m3125160906 (U3CPickNewAngleU3Ec__Iterator0_t696507028 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CPickNewAngleU3Ec__Iterator0_MoveNext_m3125160906_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_U24PC_3();
		V_0 = L_0;
		__this->set_U24PC_3((-1));
		uint32_t L_1 = V_0;
		switch (L_1)
		{
			case 0:
			{
				goto IL_0021;
			}
			case 1:
			{
				goto IL_006c;
			}
		}
	}
	{
		goto IL_0088;
	}

IL_0021:
	{
		goto IL_006c;
	}

IL_0026:
	{
		Grass_t1377767949 * L_2 = __this->get_U24this_0();
		float L_3 = Random_get_value_m3115885645(NULL /*static, unused*/, /*hidden argument*/NULL);
		L_2->set__angle_2(((float)il2cpp_codegen_add((float)(-12.5f), (float)((float)il2cpp_codegen_multiply((float)L_3, (float)(25.0f))))));
		float L_4 = Random_get_value_m3115885645(NULL /*static, unused*/, /*hidden argument*/NULL);
		WaitForSeconds_t1699091251 * L_5 = (WaitForSeconds_t1699091251 *)il2cpp_codegen_object_new(WaitForSeconds_t1699091251_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_m2199082655(L_5, ((float)il2cpp_codegen_multiply((float)L_4, (float)(1.3f))), /*hidden argument*/NULL);
		__this->set_U24current_1(L_5);
		bool L_6 = __this->get_U24disposing_2();
		if (L_6)
		{
			goto IL_0067;
		}
	}
	{
		__this->set_U24PC_3(1);
	}

IL_0067:
	{
		goto IL_008a;
	}

IL_006c:
	{
		Grass_t1377767949 * L_7 = __this->get_U24this_0();
		GameObject_t1113636619 * L_8 = Component_get_gameObject_m442555142(L_7, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_9 = Object_op_Implicit_m3574996620(NULL /*static, unused*/, L_8, /*hidden argument*/NULL);
		if (L_9)
		{
			goto IL_0026;
		}
	}
	{
		__this->set_U24PC_3((-1));
	}

IL_0088:
	{
		return (bool)0;
	}

IL_008a:
	{
		return (bool)1;
	}
}
// System.Object Grass/<PickNewAngle>c__Iterator0::System.Collections.Generic.IEnumerator<object>.get_Current()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * U3CPickNewAngleU3Ec__Iterator0_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m975618028 (U3CPickNewAngleU3Ec__Iterator0_t696507028 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U24current_1();
		return L_0;
	}
}
// System.Object Grass/<PickNewAngle>c__Iterator0::System.Collections.IEnumerator.get_Current()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * U3CPickNewAngleU3Ec__Iterator0_System_Collections_IEnumerator_get_Current_m2272032173 (U3CPickNewAngleU3Ec__Iterator0_t696507028 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U24current_1();
		return L_0;
	}
}
// System.Void Grass/<PickNewAngle>c__Iterator0::Dispose()
extern "C" IL2CPP_METHOD_ATTR void U3CPickNewAngleU3Ec__Iterator0_Dispose_m1752606961 (U3CPickNewAngleU3Ec__Iterator0_t696507028 * __this, const RuntimeMethod* method)
{
	{
		__this->set_U24disposing_2((bool)1);
		__this->set_U24PC_3((-1));
		return;
	}
}
// System.Void Grass/<PickNewAngle>c__Iterator0::Reset()
extern "C" IL2CPP_METHOD_ATTR void U3CPickNewAngleU3Ec__Iterator0_Reset_m4032911234 (U3CPickNewAngleU3Ec__Iterator0_t696507028 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CPickNewAngleU3Ec__Iterator0_Reset_m4032911234_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NotSupportedException_t1314879016 * L_0 = (NotSupportedException_t1314879016 *)il2cpp_codegen_object_new(NotSupportedException_t1314879016_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m2730133172(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0,U3CPickNewAngleU3Ec__Iterator0_Reset_m4032911234_RuntimeMethod_var);
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
// System.Void HealthPickup::.ctor()
extern "C" IL2CPP_METHOD_ATTR void HealthPickup__ctor_m1545974739 (HealthPickup_t2182775939 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void HealthPickup::OnTriggerEnter2D(UnityEngine.Collider2D)
extern "C" IL2CPP_METHOD_ATTR void HealthPickup_OnTriggerEnter2D_m2587496523 (HealthPickup_t2182775939 * __this, Collider2D_t2806799626 * ___collision0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (HealthPickup_OnTriggerEnter2D_m2587496523_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Collider2D_t2806799626 * L_0 = ___collision0;
		GameObject_t1113636619 * L_1 = Component_get_gameObject_m442555142(L_0, /*hidden argument*/NULL);
		Player_t3266647312 * L_2 = GameObject_GetComponent_TisPlayer_t3266647312_m4068145281(L_1, /*hidden argument*/GameObject_GetComponent_TisPlayer_t3266647312_m4068145281_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_3 = Object_op_Implicit_m3574996620(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0035;
		}
	}
	{
		Collider2D_t2806799626 * L_4 = ___collision0;
		GameObject_t1113636619 * L_5 = Component_get_gameObject_m442555142(L_4, /*hidden argument*/NULL);
		Player_t3266647312 * L_6 = GameObject_GetComponent_TisPlayer_t3266647312_m4068145281(L_5, /*hidden argument*/GameObject_GetComponent_TisPlayer_t3266647312_m4068145281_RuntimeMethod_var);
		Player_AddHealth_m416419061(L_6, (1.0f), /*hidden argument*/NULL);
		GameObject_t1113636619 * L_7 = Component_get_gameObject_m442555142(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		Object_Destroy_m565254235(NULL /*static, unused*/, L_7, /*hidden argument*/NULL);
	}

IL_0035:
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
// System.Void IntroSequence::.ctor()
extern "C" IL2CPP_METHOD_ATTR void IntroSequence__ctor_m3967061373 (IntroSequence_t4248026603 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void IntroSequence::Start()
extern "C" IL2CPP_METHOD_ATTR void IntroSequence_Start_m3735851395 (IntroSequence_t4248026603 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IntroSequence_Start_m3735851395_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t3722313464  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		MusicManager_t3024629483 * L_0 = MusicManager_get_Instance_m1581818762(NULL /*static, unused*/, /*hidden argument*/NULL);
		MusicManager_On_m182107513(L_0, /*hidden argument*/NULL);
		__this->set__clickedPlay_6((bool)0);
		Button_t4055032469 * L_1 = __this->get__playButton_5();
		ButtonClickedEvent_t48803504 * L_2 = Button_get_onClick_m2332132945(L_1, /*hidden argument*/NULL);
		intptr_t L_3 = (intptr_t)IntroSequence_OnClickPlay_m2706413630_RuntimeMethod_var;
		UnityAction_t3245792599 * L_4 = (UnityAction_t3245792599 *)il2cpp_codegen_object_new(UnityAction_t3245792599_il2cpp_TypeInfo_var);
		UnityAction__ctor_m772160306(L_4, __this, L_3, /*hidden argument*/NULL);
		UnityEvent_AddListener_m2276267359(L_2, L_4, /*hidden argument*/NULL);
		Button_t4055032469 * L_5 = __this->get__playButton_5();
		Transform_t3600365921 * L_6 = Component_get_transform_m3162698980(L_5, /*hidden argument*/NULL);
		Vector3_t3722313464  L_7 = Transform_get_localPosition_m4234289348(L_6, /*hidden argument*/NULL);
		V_0 = L_7;
		float L_8 = (&V_0)->get_y_2();
		__this->set__playButtonY_7(L_8);
		Button_t4055032469 * L_9 = __this->get__playButton_5();
		Transform_t3600365921 * L_10 = Component_get_transform_m3162698980(L_9, /*hidden argument*/NULL);
		Vector3_t3722313464  L_11;
		memset(&L_11, 0, sizeof(L_11));
		Vector3__ctor_m3353183577((&L_11), (0.0f), (-1000.0f), (0.0f), /*hidden argument*/NULL);
		Transform_set_localPosition_m4128471975(L_10, L_11, /*hidden argument*/NULL);
		RuntimeObject* L_12 = IntroSequence_Intro_m2395395217(__this, /*hidden argument*/NULL);
		MonoBehaviour_StartCoroutine_m3411253000(__this, L_12, /*hidden argument*/NULL);
		return;
	}
}
// System.Void IntroSequence::OnClickPlay()
extern "C" IL2CPP_METHOD_ATTR void IntroSequence_OnClickPlay_m2706413630 (IntroSequence_t4248026603 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IntroSequence_OnClickPlay_m2706413630_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->set__clickedPlay_6((bool)1);
		Button_t4055032469 * L_0 = __this->get__playButton_5();
		ButtonClickedEvent_t48803504 * L_1 = Button_get_onClick_m2332132945(L_0, /*hidden argument*/NULL);
		intptr_t L_2 = (intptr_t)IntroSequence_OnClickPlay_m2706413630_RuntimeMethod_var;
		UnityAction_t3245792599 * L_3 = (UnityAction_t3245792599 *)il2cpp_codegen_object_new(UnityAction_t3245792599_il2cpp_TypeInfo_var);
		UnityAction__ctor_m772160306(L_3, __this, L_2, /*hidden argument*/NULL);
		UnityEvent_RemoveListener_m2514219280(L_1, L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Collections.IEnumerator IntroSequence::Intro()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* IntroSequence_Intro_m2395395217 (IntroSequence_t4248026603 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IntroSequence_Intro_m2395395217_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	U3CIntroU3Ec__Iterator0_t2006384748 * V_0 = NULL;
	{
		U3CIntroU3Ec__Iterator0_t2006384748 * L_0 = (U3CIntroU3Ec__Iterator0_t2006384748 *)il2cpp_codegen_object_new(U3CIntroU3Ec__Iterator0_t2006384748_il2cpp_TypeInfo_var);
		U3CIntroU3Ec__Iterator0__ctor_m317264222(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CIntroU3Ec__Iterator0_t2006384748 * L_1 = V_0;
		L_1->set_U24this_0(__this);
		U3CIntroU3Ec__Iterator0_t2006384748 * L_2 = V_0;
		return L_2;
	}
}
// System.Collections.IEnumerator IntroSequence::PlayerWalkUp()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* IntroSequence_PlayerWalkUp_m3501030825 (IntroSequence_t4248026603 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IntroSequence_PlayerWalkUp_m3501030825_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	U3CPlayerWalkUpU3Ec__Iterator1_t3977936990 * V_0 = NULL;
	{
		U3CPlayerWalkUpU3Ec__Iterator1_t3977936990 * L_0 = (U3CPlayerWalkUpU3Ec__Iterator1_t3977936990 *)il2cpp_codegen_object_new(U3CPlayerWalkUpU3Ec__Iterator1_t3977936990_il2cpp_TypeInfo_var);
		U3CPlayerWalkUpU3Ec__Iterator1__ctor_m3934709153(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CPlayerWalkUpU3Ec__Iterator1_t3977936990 * L_1 = V_0;
		L_1->set_U24this_0(__this);
		U3CPlayerWalkUpU3Ec__Iterator1_t3977936990 * L_2 = V_0;
		return L_2;
	}
}
// System.Collections.IEnumerator IntroSequence::WaitForPlayClick()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* IntroSequence_WaitForPlayClick_m1494139642 (IntroSequence_t4248026603 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IntroSequence_WaitForPlayClick_m1494139642_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	U3CWaitForPlayClickU3Ec__Iterator2_t2451926618 * V_0 = NULL;
	{
		U3CWaitForPlayClickU3Ec__Iterator2_t2451926618 * L_0 = (U3CWaitForPlayClickU3Ec__Iterator2_t2451926618 *)il2cpp_codegen_object_new(U3CWaitForPlayClickU3Ec__Iterator2_t2451926618_il2cpp_TypeInfo_var);
		U3CWaitForPlayClickU3Ec__Iterator2__ctor_m2435075689(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CWaitForPlayClickU3Ec__Iterator2_t2451926618 * L_1 = V_0;
		L_1->set_U24this_0(__this);
		U3CWaitForPlayClickU3Ec__Iterator2_t2451926618 * L_2 = V_0;
		return L_2;
	}
}
// System.Collections.IEnumerator IntroSequence::FadeInButton()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* IntroSequence_FadeInButton_m2572672586 (IntroSequence_t4248026603 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IntroSequence_FadeInButton_m2572672586_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	U3CFadeInButtonU3Ec__Iterator3_t3780138571 * V_0 = NULL;
	{
		U3CFadeInButtonU3Ec__Iterator3_t3780138571 * L_0 = (U3CFadeInButtonU3Ec__Iterator3_t3780138571 *)il2cpp_codegen_object_new(U3CFadeInButtonU3Ec__Iterator3_t3780138571_il2cpp_TypeInfo_var);
		U3CFadeInButtonU3Ec__Iterator3__ctor_m1758581407(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CFadeInButtonU3Ec__Iterator3_t3780138571 * L_1 = V_0;
		L_1->set_U24this_1(__this);
		U3CFadeInButtonU3Ec__Iterator3_t3780138571 * L_2 = V_0;
		return L_2;
	}
}
// System.Collections.IEnumerator IntroSequence::FadeOutButton()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* IntroSequence_FadeOutButton_m1652046706 (IntroSequence_t4248026603 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IntroSequence_FadeOutButton_m1652046706_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	U3CFadeOutButtonU3Ec__Iterator4_t2877370097 * V_0 = NULL;
	{
		U3CFadeOutButtonU3Ec__Iterator4_t2877370097 * L_0 = (U3CFadeOutButtonU3Ec__Iterator4_t2877370097 *)il2cpp_codegen_object_new(U3CFadeOutButtonU3Ec__Iterator4_t2877370097_il2cpp_TypeInfo_var);
		U3CFadeOutButtonU3Ec__Iterator4__ctor_m963961658(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CFadeOutButtonU3Ec__Iterator4_t2877370097 * L_1 = V_0;
		L_1->set_U24this_1(__this);
		U3CFadeOutButtonU3Ec__Iterator4_t2877370097 * L_2 = V_0;
		return L_2;
	}
}
// System.Collections.IEnumerator IntroSequence::PlayerWalkOffscreen()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* IntroSequence_PlayerWalkOffscreen_m1885669268 (IntroSequence_t4248026603 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IntroSequence_PlayerWalkOffscreen_m1885669268_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	U3CPlayerWalkOffscreenU3Ec__Iterator5_t3609804094 * V_0 = NULL;
	{
		U3CPlayerWalkOffscreenU3Ec__Iterator5_t3609804094 * L_0 = (U3CPlayerWalkOffscreenU3Ec__Iterator5_t3609804094 *)il2cpp_codegen_object_new(U3CPlayerWalkOffscreenU3Ec__Iterator5_t3609804094_il2cpp_TypeInfo_var);
		U3CPlayerWalkOffscreenU3Ec__Iterator5__ctor_m4236651043(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CPlayerWalkOffscreenU3Ec__Iterator5_t3609804094 * L_1 = V_0;
		L_1->set_U24this_0(__this);
		U3CPlayerWalkOffscreenU3Ec__Iterator5_t3609804094 * L_2 = V_0;
		return L_2;
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
// System.Void IntroSequence/<FadeInButton>c__Iterator3::.ctor()
extern "C" IL2CPP_METHOD_ATTR void U3CFadeInButtonU3Ec__Iterator3__ctor_m1758581407 (U3CFadeInButtonU3Ec__Iterator3_t3780138571 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean IntroSequence/<FadeInButton>c__Iterator3::MoveNext()
extern "C" IL2CPP_METHOD_ATTR bool U3CFadeInButtonU3Ec__Iterator3_MoveNext_m3001906529 (U3CFadeInButtonU3Ec__Iterator3_t3780138571 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CFadeInButtonU3Ec__Iterator3_MoveNext_m3001906529_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_U24PC_4();
		V_0 = L_0;
		__this->set_U24PC_4((-1));
		uint32_t L_1 = V_0;
		switch (L_1)
		{
			case 0:
			{
				goto IL_0021;
			}
			case 1:
			{
				goto IL_00fa;
			}
		}
	}
	{
		goto IL_011c;
	}

IL_0021:
	{
		IntroSequence_t4248026603 * L_2 = __this->get_U24this_1();
		Button_t4055032469 * L_3 = L_2->get__playButton_5();
		Image_t2670269651 * L_4 = Component_GetComponent_TisImage_t2670269651_m980647750(L_3, /*hidden argument*/Component_GetComponent_TisImage_t2670269651_m980647750_RuntimeMethod_var);
		Color_t2555686324  L_5 = Color_get_clear_m1016382534(NULL /*static, unused*/, /*hidden argument*/NULL);
		VirtActionInvoker1< Color_t2555686324  >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_4, L_5);
		IntroSequence_t4248026603 * L_6 = __this->get_U24this_1();
		Button_t4055032469 * L_7 = L_6->get__playButton_5();
		Text_t1901882714 * L_8 = Component_GetComponentInChildren_TisText_t1901882714_m396351542(L_7, /*hidden argument*/Component_GetComponentInChildren_TisText_t1901882714_m396351542_RuntimeMethod_var);
		Color_t2555686324  L_9 = Color_get_clear_m1016382534(NULL /*static, unused*/, /*hidden argument*/NULL);
		VirtActionInvoker1< Color_t2555686324  >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_8, L_9);
		__this->set_U3CiU3E__1_0(0);
		goto IL_0108;
	}

IL_0061:
	{
		IntroSequence_t4248026603 * L_10 = __this->get_U24this_1();
		Button_t4055032469 * L_11 = L_10->get__playButton_5();
		Image_t2670269651 * L_12 = Component_GetComponent_TisImage_t2670269651_m980647750(L_11, /*hidden argument*/Component_GetComponent_TisImage_t2670269651_m980647750_RuntimeMethod_var);
		IntroSequence_t4248026603 * L_13 = __this->get_U24this_1();
		Button_t4055032469 * L_14 = L_13->get__playButton_5();
		Image_t2670269651 * L_15 = Component_GetComponent_TisImage_t2670269651_m980647750(L_14, /*hidden argument*/Component_GetComponent_TisImage_t2670269651_m980647750_RuntimeMethod_var);
		Color_t2555686324  L_16 = VirtFuncInvoker0< Color_t2555686324  >::Invoke(22 /* UnityEngine.Color UnityEngine.UI.Graphic::get_color() */, L_15);
		Color_t2555686324  L_17 = Color_get_white_m332174077(NULL /*static, unused*/, /*hidden argument*/NULL);
		float L_18 = Time_get_deltaTime_m372706562(NULL /*static, unused*/, /*hidden argument*/NULL);
		Color_t2555686324  L_19 = Color_Lerp_m973389909(NULL /*static, unused*/, L_16, L_17, ((float)il2cpp_codegen_multiply((float)(4.0f), (float)L_18)), /*hidden argument*/NULL);
		VirtActionInvoker1< Color_t2555686324  >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_12, L_19);
		IntroSequence_t4248026603 * L_20 = __this->get_U24this_1();
		Button_t4055032469 * L_21 = L_20->get__playButton_5();
		Text_t1901882714 * L_22 = Component_GetComponentInChildren_TisText_t1901882714_m396351542(L_21, /*hidden argument*/Component_GetComponentInChildren_TisText_t1901882714_m396351542_RuntimeMethod_var);
		IntroSequence_t4248026603 * L_23 = __this->get_U24this_1();
		Button_t4055032469 * L_24 = L_23->get__playButton_5();
		Text_t1901882714 * L_25 = Component_GetComponentInChildren_TisText_t1901882714_m396351542(L_24, /*hidden argument*/Component_GetComponentInChildren_TisText_t1901882714_m396351542_RuntimeMethod_var);
		Color_t2555686324  L_26 = VirtFuncInvoker0< Color_t2555686324  >::Invoke(22 /* UnityEngine.Color UnityEngine.UI.Graphic::get_color() */, L_25);
		Color_t2555686324  L_27 = Color_get_white_m332174077(NULL /*static, unused*/, /*hidden argument*/NULL);
		float L_28 = Time_get_deltaTime_m372706562(NULL /*static, unused*/, /*hidden argument*/NULL);
		Color_t2555686324  L_29 = Color_Lerp_m973389909(NULL /*static, unused*/, L_26, L_27, ((float)il2cpp_codegen_multiply((float)(4.0f), (float)L_28)), /*hidden argument*/NULL);
		VirtActionInvoker1< Color_t2555686324  >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_22, L_29);
		__this->set_U24current_2(NULL);
		bool L_30 = __this->get_U24disposing_3();
		if (L_30)
		{
			goto IL_00f5;
		}
	}
	{
		__this->set_U24PC_4(1);
	}

IL_00f5:
	{
		goto IL_011e;
	}

IL_00fa:
	{
		int32_t L_31 = __this->get_U3CiU3E__1_0();
		__this->set_U3CiU3E__1_0(((int32_t)il2cpp_codegen_add((int32_t)L_31, (int32_t)1)));
	}

IL_0108:
	{
		int32_t L_32 = __this->get_U3CiU3E__1_0();
		if ((((int32_t)L_32) < ((int32_t)((int32_t)63))))
		{
			goto IL_0061;
		}
	}
	{
		__this->set_U24PC_4((-1));
	}

IL_011c:
	{
		return (bool)0;
	}

IL_011e:
	{
		return (bool)1;
	}
}
// System.Object IntroSequence/<FadeInButton>c__Iterator3::System.Collections.Generic.IEnumerator<object>.get_Current()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * U3CFadeInButtonU3Ec__Iterator3_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m1559652411 (U3CFadeInButtonU3Ec__Iterator3_t3780138571 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U24current_2();
		return L_0;
	}
}
// System.Object IntroSequence/<FadeInButton>c__Iterator3::System.Collections.IEnumerator.get_Current()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * U3CFadeInButtonU3Ec__Iterator3_System_Collections_IEnumerator_get_Current_m129322897 (U3CFadeInButtonU3Ec__Iterator3_t3780138571 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U24current_2();
		return L_0;
	}
}
// System.Void IntroSequence/<FadeInButton>c__Iterator3::Dispose()
extern "C" IL2CPP_METHOD_ATTR void U3CFadeInButtonU3Ec__Iterator3_Dispose_m3801189989 (U3CFadeInButtonU3Ec__Iterator3_t3780138571 * __this, const RuntimeMethod* method)
{
	{
		__this->set_U24disposing_3((bool)1);
		__this->set_U24PC_4((-1));
		return;
	}
}
// System.Void IntroSequence/<FadeInButton>c__Iterator3::Reset()
extern "C" IL2CPP_METHOD_ATTR void U3CFadeInButtonU3Ec__Iterator3_Reset_m4086782520 (U3CFadeInButtonU3Ec__Iterator3_t3780138571 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CFadeInButtonU3Ec__Iterator3_Reset_m4086782520_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NotSupportedException_t1314879016 * L_0 = (NotSupportedException_t1314879016 *)il2cpp_codegen_object_new(NotSupportedException_t1314879016_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m2730133172(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0,U3CFadeInButtonU3Ec__Iterator3_Reset_m4086782520_RuntimeMethod_var);
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
// System.Void IntroSequence/<FadeOutButton>c__Iterator4::.ctor()
extern "C" IL2CPP_METHOD_ATTR void U3CFadeOutButtonU3Ec__Iterator4__ctor_m963961658 (U3CFadeOutButtonU3Ec__Iterator4_t2877370097 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean IntroSequence/<FadeOutButton>c__Iterator4::MoveNext()
extern "C" IL2CPP_METHOD_ATTR bool U3CFadeOutButtonU3Ec__Iterator4_MoveNext_m2572214445 (U3CFadeOutButtonU3Ec__Iterator4_t2877370097 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CFadeOutButtonU3Ec__Iterator4_MoveNext_m2572214445_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_U24PC_4();
		V_0 = L_0;
		__this->set_U24PC_4((-1));
		uint32_t L_1 = V_0;
		switch (L_1)
		{
			case 0:
			{
				goto IL_0021;
			}
			case 1:
			{
				goto IL_0140;
			}
		}
	}
	{
		goto IL_0196;
	}

IL_0021:
	{
		__this->set_U3CiU3E__1_0(0);
		goto IL_014e;
	}

IL_002d:
	{
		IntroSequence_t4248026603 * L_2 = __this->get_U24this_1();
		Button_t4055032469 * L_3 = L_2->get__playButton_5();
		Image_t2670269651 * L_4 = Component_GetComponent_TisImage_t2670269651_m980647750(L_3, /*hidden argument*/Component_GetComponent_TisImage_t2670269651_m980647750_RuntimeMethod_var);
		IntroSequence_t4248026603 * L_5 = __this->get_U24this_1();
		Button_t4055032469 * L_6 = L_5->get__playButton_5();
		Image_t2670269651 * L_7 = Component_GetComponent_TisImage_t2670269651_m980647750(L_6, /*hidden argument*/Component_GetComponent_TisImage_t2670269651_m980647750_RuntimeMethod_var);
		Color_t2555686324  L_8 = VirtFuncInvoker0< Color_t2555686324  >::Invoke(22 /* UnityEngine.Color UnityEngine.UI.Graphic::get_color() */, L_7);
		Color_t2555686324  L_9 = Color_get_clear_m1016382534(NULL /*static, unused*/, /*hidden argument*/NULL);
		float L_10 = Time_get_deltaTime_m372706562(NULL /*static, unused*/, /*hidden argument*/NULL);
		Color_t2555686324  L_11 = Color_Lerp_m973389909(NULL /*static, unused*/, L_8, L_9, ((float)il2cpp_codegen_multiply((float)(4.0f), (float)L_10)), /*hidden argument*/NULL);
		VirtActionInvoker1< Color_t2555686324  >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_4, L_11);
		IntroSequence_t4248026603 * L_12 = __this->get_U24this_1();
		Button_t4055032469 * L_13 = L_12->get__playButton_5();
		Text_t1901882714 * L_14 = Component_GetComponentInChildren_TisText_t1901882714_m396351542(L_13, /*hidden argument*/Component_GetComponentInChildren_TisText_t1901882714_m396351542_RuntimeMethod_var);
		IntroSequence_t4248026603 * L_15 = __this->get_U24this_1();
		Button_t4055032469 * L_16 = L_15->get__playButton_5();
		Text_t1901882714 * L_17 = Component_GetComponentInChildren_TisText_t1901882714_m396351542(L_16, /*hidden argument*/Component_GetComponentInChildren_TisText_t1901882714_m396351542_RuntimeMethod_var);
		Color_t2555686324  L_18 = VirtFuncInvoker0< Color_t2555686324  >::Invoke(22 /* UnityEngine.Color UnityEngine.UI.Graphic::get_color() */, L_17);
		Color_t2555686324  L_19 = Color_get_clear_m1016382534(NULL /*static, unused*/, /*hidden argument*/NULL);
		float L_20 = Time_get_deltaTime_m372706562(NULL /*static, unused*/, /*hidden argument*/NULL);
		Color_t2555686324  L_21 = Color_Lerp_m973389909(NULL /*static, unused*/, L_18, L_19, ((float)il2cpp_codegen_multiply((float)(4.0f), (float)L_20)), /*hidden argument*/NULL);
		VirtActionInvoker1< Color_t2555686324  >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_14, L_21);
		IntroSequence_t4248026603 * L_22 = __this->get_U24this_1();
		Image_t2670269651 * L_23 = L_22->get__health_10();
		IntroSequence_t4248026603 * L_24 = __this->get_U24this_1();
		Image_t2670269651 * L_25 = L_24->get__health_10();
		float L_26 = Image_get_fillAmount_m2193224718(L_25, /*hidden argument*/NULL);
		float L_27 = Time_get_deltaTime_m372706562(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t3464937446_il2cpp_TypeInfo_var);
		float L_28 = Mathf_Lerp_m1004423579(NULL /*static, unused*/, L_26, (2.0f), ((float)il2cpp_codegen_multiply((float)(4.0f), (float)L_27)), /*hidden argument*/NULL);
		Image_set_fillAmount_m3737925590(L_23, L_28, /*hidden argument*/NULL);
		IntroSequence_t4248026603 * L_29 = __this->get_U24this_1();
		Text_t1901882714 * L_30 = L_29->get__title_8();
		IntroSequence_t4248026603 * L_31 = __this->get_U24this_1();
		Button_t4055032469 * L_32 = L_31->get__playButton_5();
		Text_t1901882714 * L_33 = Component_GetComponentInChildren_TisText_t1901882714_m396351542(L_32, /*hidden argument*/Component_GetComponentInChildren_TisText_t1901882714_m396351542_RuntimeMethod_var);
		Color_t2555686324  L_34 = VirtFuncInvoker0< Color_t2555686324  >::Invoke(22 /* UnityEngine.Color UnityEngine.UI.Graphic::get_color() */, L_33);
		VirtActionInvoker1< Color_t2555686324  >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_30, L_34);
		IntroSequence_t4248026603 * L_35 = __this->get_U24this_1();
		Text_t1901882714 * L_36 = L_35->get__subtitle_9();
		IntroSequence_t4248026603 * L_37 = __this->get_U24this_1();
		Text_t1901882714 * L_38 = L_37->get__title_8();
		Color_t2555686324  L_39 = VirtFuncInvoker0< Color_t2555686324  >::Invoke(22 /* UnityEngine.Color UnityEngine.UI.Graphic::get_color() */, L_38);
		VirtActionInvoker1< Color_t2555686324  >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_36, L_39);
		__this->set_U24current_2(NULL);
		bool L_40 = __this->get_U24disposing_3();
		if (L_40)
		{
			goto IL_013b;
		}
	}
	{
		__this->set_U24PC_4(1);
	}

IL_013b:
	{
		goto IL_0198;
	}

IL_0140:
	{
		int32_t L_41 = __this->get_U3CiU3E__1_0();
		__this->set_U3CiU3E__1_0(((int32_t)il2cpp_codegen_add((int32_t)L_41, (int32_t)1)));
	}

IL_014e:
	{
		int32_t L_42 = __this->get_U3CiU3E__1_0();
		if ((((int32_t)L_42) < ((int32_t)((int32_t)63))))
		{
			goto IL_002d;
		}
	}
	{
		IntroSequence_t4248026603 * L_43 = __this->get_U24this_1();
		Button_t4055032469 * L_44 = L_43->get__playButton_5();
		Image_t2670269651 * L_45 = Component_GetComponent_TisImage_t2670269651_m980647750(L_44, /*hidden argument*/Component_GetComponent_TisImage_t2670269651_m980647750_RuntimeMethod_var);
		Color_t2555686324  L_46 = Color_get_clear_m1016382534(NULL /*static, unused*/, /*hidden argument*/NULL);
		VirtActionInvoker1< Color_t2555686324  >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_45, L_46);
		IntroSequence_t4248026603 * L_47 = __this->get_U24this_1();
		Button_t4055032469 * L_48 = L_47->get__playButton_5();
		Text_t1901882714 * L_49 = Component_GetComponentInChildren_TisText_t1901882714_m396351542(L_48, /*hidden argument*/Component_GetComponentInChildren_TisText_t1901882714_m396351542_RuntimeMethod_var);
		Color_t2555686324  L_50 = Color_get_clear_m1016382534(NULL /*static, unused*/, /*hidden argument*/NULL);
		VirtActionInvoker1< Color_t2555686324  >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_49, L_50);
		__this->set_U24PC_4((-1));
	}

IL_0196:
	{
		return (bool)0;
	}

IL_0198:
	{
		return (bool)1;
	}
}
// System.Object IntroSequence/<FadeOutButton>c__Iterator4::System.Collections.Generic.IEnumerator<object>.get_Current()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * U3CFadeOutButtonU3Ec__Iterator4_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m1842773883 (U3CFadeOutButtonU3Ec__Iterator4_t2877370097 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U24current_2();
		return L_0;
	}
}
// System.Object IntroSequence/<FadeOutButton>c__Iterator4::System.Collections.IEnumerator.get_Current()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * U3CFadeOutButtonU3Ec__Iterator4_System_Collections_IEnumerator_get_Current_m2230538724 (U3CFadeOutButtonU3Ec__Iterator4_t2877370097 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U24current_2();
		return L_0;
	}
}
// System.Void IntroSequence/<FadeOutButton>c__Iterator4::Dispose()
extern "C" IL2CPP_METHOD_ATTR void U3CFadeOutButtonU3Ec__Iterator4_Dispose_m1947633343 (U3CFadeOutButtonU3Ec__Iterator4_t2877370097 * __this, const RuntimeMethod* method)
{
	{
		__this->set_U24disposing_3((bool)1);
		__this->set_U24PC_4((-1));
		return;
	}
}
// System.Void IntroSequence/<FadeOutButton>c__Iterator4::Reset()
extern "C" IL2CPP_METHOD_ATTR void U3CFadeOutButtonU3Ec__Iterator4_Reset_m244525034 (U3CFadeOutButtonU3Ec__Iterator4_t2877370097 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CFadeOutButtonU3Ec__Iterator4_Reset_m244525034_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NotSupportedException_t1314879016 * L_0 = (NotSupportedException_t1314879016 *)il2cpp_codegen_object_new(NotSupportedException_t1314879016_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m2730133172(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0,U3CFadeOutButtonU3Ec__Iterator4_Reset_m244525034_RuntimeMethod_var);
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
// System.Void IntroSequence/<Intro>c__Iterator0::.ctor()
extern "C" IL2CPP_METHOD_ATTR void U3CIntroU3Ec__Iterator0__ctor_m317264222 (U3CIntroU3Ec__Iterator0_t2006384748 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean IntroSequence/<Intro>c__Iterator0::MoveNext()
extern "C" IL2CPP_METHOD_ATTR bool U3CIntroU3Ec__Iterator0_MoveNext_m998214404 (U3CIntroU3Ec__Iterator0_t2006384748 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CIntroU3Ec__Iterator0_MoveNext_m998214404_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_U24PC_3();
		V_0 = L_0;
		__this->set_U24PC_3((-1));
		uint32_t L_1 = V_0;
		switch (L_1)
		{
			case 0:
			{
				goto IL_002d;
			}
			case 1:
			{
				goto IL_0081;
			}
			case 2:
			{
				goto IL_00b1;
			}
			case 3:
			{
				goto IL_00e1;
			}
			case 4:
			{
				goto IL_0111;
			}
		}
	}
	{
		goto IL_0142;
	}

IL_002d:
	{
		IntroSequence_t4248026603 * L_2 = __this->get_U24this_0();
		Image_t2670269651 * L_3 = L_2->get__health_10();
		GameObject_t1113636619 * L_4 = Component_get_gameObject_m442555142(L_3, /*hidden argument*/NULL);
		PlayerHealthBar_t2127847235 * L_5 = GameObject_GetComponent_TisPlayerHealthBar_t2127847235_m2834258027(L_4, /*hidden argument*/GameObject_GetComponent_TisPlayerHealthBar_t2127847235_m2834258027_RuntimeMethod_var);
		Behaviour_set_enabled_m20417929(L_5, (bool)0, /*hidden argument*/NULL);
		IntroSequence_t4248026603 * L_6 = __this->get_U24this_0();
		Image_t2670269651 * L_7 = L_6->get__health_10();
		Image_set_fillAmount_m3737925590(L_7, (0.0f), /*hidden argument*/NULL);
		WaitForSeconds_t1699091251 * L_8 = (WaitForSeconds_t1699091251 *)il2cpp_codegen_object_new(WaitForSeconds_t1699091251_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_m2199082655(L_8, (1.0f), /*hidden argument*/NULL);
		__this->set_U24current_1(L_8);
		bool L_9 = __this->get_U24disposing_2();
		if (L_9)
		{
			goto IL_007c;
		}
	}
	{
		__this->set_U24PC_3(1);
	}

IL_007c:
	{
		goto IL_0144;
	}

IL_0081:
	{
		IntroSequence_t4248026603 * L_10 = __this->get_U24this_0();
		IntroSequence_t4248026603 * L_11 = __this->get_U24this_0();
		RuntimeObject* L_12 = IntroSequence_PlayerWalkUp_m3501030825(L_11, /*hidden argument*/NULL);
		Coroutine_t3829159415 * L_13 = MonoBehaviour_StartCoroutine_m3411253000(L_10, L_12, /*hidden argument*/NULL);
		__this->set_U24current_1(L_13);
		bool L_14 = __this->get_U24disposing_2();
		if (L_14)
		{
			goto IL_00ac;
		}
	}
	{
		__this->set_U24PC_3(2);
	}

IL_00ac:
	{
		goto IL_0144;
	}

IL_00b1:
	{
		IntroSequence_t4248026603 * L_15 = __this->get_U24this_0();
		IntroSequence_t4248026603 * L_16 = __this->get_U24this_0();
		RuntimeObject* L_17 = IntroSequence_WaitForPlayClick_m1494139642(L_16, /*hidden argument*/NULL);
		Coroutine_t3829159415 * L_18 = MonoBehaviour_StartCoroutine_m3411253000(L_15, L_17, /*hidden argument*/NULL);
		__this->set_U24current_1(L_18);
		bool L_19 = __this->get_U24disposing_2();
		if (L_19)
		{
			goto IL_00dc;
		}
	}
	{
		__this->set_U24PC_3(3);
	}

IL_00dc:
	{
		goto IL_0144;
	}

IL_00e1:
	{
		IntroSequence_t4248026603 * L_20 = __this->get_U24this_0();
		IntroSequence_t4248026603 * L_21 = __this->get_U24this_0();
		RuntimeObject* L_22 = IntroSequence_PlayerWalkOffscreen_m1885669268(L_21, /*hidden argument*/NULL);
		Coroutine_t3829159415 * L_23 = MonoBehaviour_StartCoroutine_m3411253000(L_20, L_22, /*hidden argument*/NULL);
		__this->set_U24current_1(L_23);
		bool L_24 = __this->get_U24disposing_2();
		if (L_24)
		{
			goto IL_010c;
		}
	}
	{
		__this->set_U24PC_3(4);
	}

IL_010c:
	{
		goto IL_0144;
	}

IL_0111:
	{
		IntroSequence_t4248026603 * L_25 = __this->get_U24this_0();
		Image_t2670269651 * L_26 = L_25->get__health_10();
		GameObject_t1113636619 * L_27 = Component_get_gameObject_m442555142(L_26, /*hidden argument*/NULL);
		PlayerHealthBar_t2127847235 * L_28 = GameObject_GetComponent_TisPlayerHealthBar_t2127847235_m2834258027(L_27, /*hidden argument*/GameObject_GetComponent_TisPlayerHealthBar_t2127847235_m2834258027_RuntimeMethod_var);
		Behaviour_set_enabled_m20417929(L_28, (bool)1, /*hidden argument*/NULL);
		GameObject_t1113636619 * L_29 = GameObject_Find_m2032535176(NULL /*static, unused*/, _stringLiteral2793515199, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		Object_Destroy_m565254235(NULL /*static, unused*/, L_29, /*hidden argument*/NULL);
		__this->set_U24PC_3((-1));
	}

IL_0142:
	{
		return (bool)0;
	}

IL_0144:
	{
		return (bool)1;
	}
}
// System.Object IntroSequence/<Intro>c__Iterator0::System.Collections.Generic.IEnumerator<object>.get_Current()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * U3CIntroU3Ec__Iterator0_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m3488737666 (U3CIntroU3Ec__Iterator0_t2006384748 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U24current_1();
		return L_0;
	}
}
// System.Object IntroSequence/<Intro>c__Iterator0::System.Collections.IEnumerator.get_Current()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * U3CIntroU3Ec__Iterator0_System_Collections_IEnumerator_get_Current_m731160671 (U3CIntroU3Ec__Iterator0_t2006384748 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U24current_1();
		return L_0;
	}
}
// System.Void IntroSequence/<Intro>c__Iterator0::Dispose()
extern "C" IL2CPP_METHOD_ATTR void U3CIntroU3Ec__Iterator0_Dispose_m1722403039 (U3CIntroU3Ec__Iterator0_t2006384748 * __this, const RuntimeMethod* method)
{
	{
		__this->set_U24disposing_2((bool)1);
		__this->set_U24PC_3((-1));
		return;
	}
}
// System.Void IntroSequence/<Intro>c__Iterator0::Reset()
extern "C" IL2CPP_METHOD_ATTR void U3CIntroU3Ec__Iterator0_Reset_m4052536426 (U3CIntroU3Ec__Iterator0_t2006384748 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CIntroU3Ec__Iterator0_Reset_m4052536426_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NotSupportedException_t1314879016 * L_0 = (NotSupportedException_t1314879016 *)il2cpp_codegen_object_new(NotSupportedException_t1314879016_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m2730133172(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0,U3CIntroU3Ec__Iterator0_Reset_m4052536426_RuntimeMethod_var);
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
// System.Void IntroSequence/<PlayerWalkOffscreen>c__Iterator5::.ctor()
extern "C" IL2CPP_METHOD_ATTR void U3CPlayerWalkOffscreenU3Ec__Iterator5__ctor_m4236651043 (U3CPlayerWalkOffscreenU3Ec__Iterator5_t3609804094 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean IntroSequence/<PlayerWalkOffscreen>c__Iterator5::MoveNext()
extern "C" IL2CPP_METHOD_ATTR bool U3CPlayerWalkOffscreenU3Ec__Iterator5_MoveNext_m1712240710 (U3CPlayerWalkOffscreenU3Ec__Iterator5_t3609804094 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CPlayerWalkOffscreenU3Ec__Iterator5_MoveNext_m1712240710_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	Vector3_t3722313464  V_1;
	memset(&V_1, 0, sizeof(V_1));
	Vector3_t3722313464  V_2;
	memset(&V_2, 0, sizeof(V_2));
	{
		int32_t L_0 = __this->get_U24PC_3();
		V_0 = L_0;
		__this->set_U24PC_3((-1));
		uint32_t L_1 = V_0;
		switch (L_1)
		{
			case 0:
			{
				goto IL_0021;
			}
			case 1:
			{
				goto IL_0067;
			}
		}
	}
	{
		goto IL_00e3;
	}

IL_0021:
	{
		goto IL_0067;
	}

IL_0026:
	{
		IntroSequence_t4248026603 * L_2 = __this->get_U24this_0();
		Player_t3266647312 * L_3 = L_2->get__player_2();
		Player_set_InputEnabled_m970961763(L_3, (bool)0, /*hidden argument*/NULL);
		IntroSequence_t4248026603 * L_4 = __this->get_U24this_0();
		Player_t3266647312 * L_5 = L_4->get__player_2();
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_t2156229523_il2cpp_TypeInfo_var);
		Vector2_t2156229523  L_6 = Vector2_get_up_m2647420593(NULL /*static, unused*/, /*hidden argument*/NULL);
		L_5->set__movement_22(L_6);
		__this->set_U24current_1(NULL);
		bool L_7 = __this->get_U24disposing_2();
		if (L_7)
		{
			goto IL_0062;
		}
	}
	{
		__this->set_U24PC_3(1);
	}

IL_0062:
	{
		goto IL_00e5;
	}

IL_0067:
	{
		IntroSequence_t4248026603 * L_8 = __this->get_U24this_0();
		Player_t3266647312 * L_9 = L_8->get__player_2();
		Transform_t3600365921 * L_10 = Component_get_transform_m3162698980(L_9, /*hidden argument*/NULL);
		Vector3_t3722313464  L_11 = Transform_get_position_m36019626(L_10, /*hidden argument*/NULL);
		V_1 = L_11;
		float L_12 = (&V_1)->get_y_2();
		IntroSequence_t4248026603 * L_13 = __this->get_U24this_0();
		GameObject_t1113636619 * L_14 = L_13->get__walkOutTarget_4();
		Transform_t3600365921 * L_15 = GameObject_get_transform_m1369836730(L_14, /*hidden argument*/NULL);
		Vector3_t3722313464  L_16 = Transform_get_position_m36019626(L_15, /*hidden argument*/NULL);
		V_2 = L_16;
		float L_17 = (&V_2)->get_y_2();
		if ((((float)L_12) < ((float)L_17)))
		{
			goto IL_0026;
		}
	}
	{
		IntroSequence_t4248026603 * L_18 = __this->get_U24this_0();
		Player_t3266647312 * L_19 = L_18->get__player_2();
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_t2156229523_il2cpp_TypeInfo_var);
		Vector2_t2156229523  L_20 = Vector2_get_zero_m540426400(NULL /*static, unused*/, /*hidden argument*/NULL);
		L_19->set__movement_22(L_20);
		IntroSequence_t4248026603 * L_21 = __this->get_U24this_0();
		Player_t3266647312 * L_22 = L_21->get__player_2();
		Player_set_InputEnabled_m970961763(L_22, (bool)1, /*hidden argument*/NULL);
		Camera_t4157153871 * L_23 = Camera_get_main_m3643453163(NULL /*static, unused*/, /*hidden argument*/NULL);
		CameraFollow_t129522575 * L_24 = Component_GetComponent_TisCameraFollow_t129522575_m2586956313(L_23, /*hidden argument*/Component_GetComponent_TisCameraFollow_t129522575_m2586956313_RuntimeMethod_var);
		Behaviour_set_enabled_m20417929(L_24, (bool)1, /*hidden argument*/NULL);
		__this->set_U24PC_3((-1));
	}

IL_00e3:
	{
		return (bool)0;
	}

IL_00e5:
	{
		return (bool)1;
	}
}
// System.Object IntroSequence/<PlayerWalkOffscreen>c__Iterator5::System.Collections.Generic.IEnumerator<object>.get_Current()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * U3CPlayerWalkOffscreenU3Ec__Iterator5_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m1930886407 (U3CPlayerWalkOffscreenU3Ec__Iterator5_t3609804094 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U24current_1();
		return L_0;
	}
}
// System.Object IntroSequence/<PlayerWalkOffscreen>c__Iterator5::System.Collections.IEnumerator.get_Current()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * U3CPlayerWalkOffscreenU3Ec__Iterator5_System_Collections_IEnumerator_get_Current_m1167500208 (U3CPlayerWalkOffscreenU3Ec__Iterator5_t3609804094 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U24current_1();
		return L_0;
	}
}
// System.Void IntroSequence/<PlayerWalkOffscreen>c__Iterator5::Dispose()
extern "C" IL2CPP_METHOD_ATTR void U3CPlayerWalkOffscreenU3Ec__Iterator5_Dispose_m3030456398 (U3CPlayerWalkOffscreenU3Ec__Iterator5_t3609804094 * __this, const RuntimeMethod* method)
{
	{
		__this->set_U24disposing_2((bool)1);
		__this->set_U24PC_3((-1));
		return;
	}
}
// System.Void IntroSequence/<PlayerWalkOffscreen>c__Iterator5::Reset()
extern "C" IL2CPP_METHOD_ATTR void U3CPlayerWalkOffscreenU3Ec__Iterator5_Reset_m3725662755 (U3CPlayerWalkOffscreenU3Ec__Iterator5_t3609804094 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CPlayerWalkOffscreenU3Ec__Iterator5_Reset_m3725662755_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NotSupportedException_t1314879016 * L_0 = (NotSupportedException_t1314879016 *)il2cpp_codegen_object_new(NotSupportedException_t1314879016_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m2730133172(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0,U3CPlayerWalkOffscreenU3Ec__Iterator5_Reset_m3725662755_RuntimeMethod_var);
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
// System.Void IntroSequence/<PlayerWalkUp>c__Iterator1::.ctor()
extern "C" IL2CPP_METHOD_ATTR void U3CPlayerWalkUpU3Ec__Iterator1__ctor_m3934709153 (U3CPlayerWalkUpU3Ec__Iterator1_t3977936990 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean IntroSequence/<PlayerWalkUp>c__Iterator1::MoveNext()
extern "C" IL2CPP_METHOD_ATTR bool U3CPlayerWalkUpU3Ec__Iterator1_MoveNext_m501019420 (U3CPlayerWalkUpU3Ec__Iterator1_t3977936990 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CPlayerWalkUpU3Ec__Iterator1_MoveNext_m501019420_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	Vector3_t3722313464  V_1;
	memset(&V_1, 0, sizeof(V_1));
	Vector3_t3722313464  V_2;
	memset(&V_2, 0, sizeof(V_2));
	{
		int32_t L_0 = __this->get_U24PC_3();
		V_0 = L_0;
		__this->set_U24PC_3((-1));
		uint32_t L_1 = V_0;
		switch (L_1)
		{
			case 0:
			{
				goto IL_0021;
			}
			case 1:
			{
				goto IL_0067;
			}
		}
	}
	{
		goto IL_00c2;
	}

IL_0021:
	{
		goto IL_0067;
	}

IL_0026:
	{
		IntroSequence_t4248026603 * L_2 = __this->get_U24this_0();
		Player_t3266647312 * L_3 = L_2->get__player_2();
		Player_set_InputEnabled_m970961763(L_3, (bool)0, /*hidden argument*/NULL);
		IntroSequence_t4248026603 * L_4 = __this->get_U24this_0();
		Player_t3266647312 * L_5 = L_4->get__player_2();
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_t2156229523_il2cpp_TypeInfo_var);
		Vector2_t2156229523  L_6 = Vector2_get_up_m2647420593(NULL /*static, unused*/, /*hidden argument*/NULL);
		L_5->set__movement_22(L_6);
		__this->set_U24current_1(NULL);
		bool L_7 = __this->get_U24disposing_2();
		if (L_7)
		{
			goto IL_0062;
		}
	}
	{
		__this->set_U24PC_3(1);
	}

IL_0062:
	{
		goto IL_00c4;
	}

IL_0067:
	{
		IntroSequence_t4248026603 * L_8 = __this->get_U24this_0();
		Player_t3266647312 * L_9 = L_8->get__player_2();
		Transform_t3600365921 * L_10 = Component_get_transform_m3162698980(L_9, /*hidden argument*/NULL);
		Vector3_t3722313464  L_11 = Transform_get_position_m36019626(L_10, /*hidden argument*/NULL);
		V_1 = L_11;
		float L_12 = (&V_1)->get_y_2();
		IntroSequence_t4248026603 * L_13 = __this->get_U24this_0();
		GameObject_t1113636619 * L_14 = L_13->get__walkInTarget_3();
		Transform_t3600365921 * L_15 = GameObject_get_transform_m1369836730(L_14, /*hidden argument*/NULL);
		Vector3_t3722313464  L_16 = Transform_get_position_m36019626(L_15, /*hidden argument*/NULL);
		V_2 = L_16;
		float L_17 = (&V_2)->get_y_2();
		if ((((float)L_12) < ((float)L_17)))
		{
			goto IL_0026;
		}
	}
	{
		IntroSequence_t4248026603 * L_18 = __this->get_U24this_0();
		Player_t3266647312 * L_19 = L_18->get__player_2();
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_t2156229523_il2cpp_TypeInfo_var);
		Vector2_t2156229523  L_20 = Vector2_get_zero_m540426400(NULL /*static, unused*/, /*hidden argument*/NULL);
		L_19->set__movement_22(L_20);
		__this->set_U24PC_3((-1));
	}

IL_00c2:
	{
		return (bool)0;
	}

IL_00c4:
	{
		return (bool)1;
	}
}
// System.Object IntroSequence/<PlayerWalkUp>c__Iterator1::System.Collections.Generic.IEnumerator<object>.get_Current()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * U3CPlayerWalkUpU3Ec__Iterator1_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m3463308181 (U3CPlayerWalkUpU3Ec__Iterator1_t3977936990 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U24current_1();
		return L_0;
	}
}
// System.Object IntroSequence/<PlayerWalkUp>c__Iterator1::System.Collections.IEnumerator.get_Current()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * U3CPlayerWalkUpU3Ec__Iterator1_System_Collections_IEnumerator_get_Current_m1935666646 (U3CPlayerWalkUpU3Ec__Iterator1_t3977936990 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U24current_1();
		return L_0;
	}
}
// System.Void IntroSequence/<PlayerWalkUp>c__Iterator1::Dispose()
extern "C" IL2CPP_METHOD_ATTR void U3CPlayerWalkUpU3Ec__Iterator1_Dispose_m414253315 (U3CPlayerWalkUpU3Ec__Iterator1_t3977936990 * __this, const RuntimeMethod* method)
{
	{
		__this->set_U24disposing_2((bool)1);
		__this->set_U24PC_3((-1));
		return;
	}
}
// System.Void IntroSequence/<PlayerWalkUp>c__Iterator1::Reset()
extern "C" IL2CPP_METHOD_ATTR void U3CPlayerWalkUpU3Ec__Iterator1_Reset_m3232860456 (U3CPlayerWalkUpU3Ec__Iterator1_t3977936990 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CPlayerWalkUpU3Ec__Iterator1_Reset_m3232860456_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NotSupportedException_t1314879016 * L_0 = (NotSupportedException_t1314879016 *)il2cpp_codegen_object_new(NotSupportedException_t1314879016_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m2730133172(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0,U3CPlayerWalkUpU3Ec__Iterator1_Reset_m3232860456_RuntimeMethod_var);
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
// System.Void IntroSequence/<WaitForPlayClick>c__Iterator2::.ctor()
extern "C" IL2CPP_METHOD_ATTR void U3CWaitForPlayClickU3Ec__Iterator2__ctor_m2435075689 (U3CWaitForPlayClickU3Ec__Iterator2_t2451926618 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean IntroSequence/<WaitForPlayClick>c__Iterator2::MoveNext()
extern "C" IL2CPP_METHOD_ATTR bool U3CWaitForPlayClickU3Ec__Iterator2_MoveNext_m1094578300 (U3CWaitForPlayClickU3Ec__Iterator2_t2451926618 * __this, const RuntimeMethod* method)
{
	uint32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_U24PC_3();
		V_0 = L_0;
		__this->set_U24PC_3((-1));
		uint32_t L_1 = V_0;
		switch (L_1)
		{
			case 0:
			{
				goto IL_0029;
			}
			case 1:
			{
				goto IL_0088;
			}
			case 2:
			{
				goto IL_00a8;
			}
			case 3:
			{
				goto IL_00e8;
			}
		}
	}
	{
		goto IL_00ef;
	}

IL_0029:
	{
		IntroSequence_t4248026603 * L_2 = __this->get_U24this_0();
		Button_t4055032469 * L_3 = L_2->get__playButton_5();
		Transform_t3600365921 * L_4 = Component_get_transform_m3162698980(L_3, /*hidden argument*/NULL);
		IntroSequence_t4248026603 * L_5 = __this->get_U24this_0();
		float L_6 = L_5->get__playButtonY_7();
		Vector3_t3722313464  L_7;
		memset(&L_7, 0, sizeof(L_7));
		Vector3__ctor_m3353183577((&L_7), (0.0f), L_6, (0.0f), /*hidden argument*/NULL);
		Transform_set_localPosition_m4128471975(L_4, L_7, /*hidden argument*/NULL);
		IntroSequence_t4248026603 * L_8 = __this->get_U24this_0();
		IntroSequence_t4248026603 * L_9 = __this->get_U24this_0();
		RuntimeObject* L_10 = IntroSequence_FadeInButton_m2572672586(L_9, /*hidden argument*/NULL);
		Coroutine_t3829159415 * L_11 = MonoBehaviour_StartCoroutine_m3411253000(L_8, L_10, /*hidden argument*/NULL);
		__this->set_U24current_1(L_11);
		bool L_12 = __this->get_U24disposing_2();
		if (L_12)
		{
			goto IL_0083;
		}
	}
	{
		__this->set_U24PC_3(1);
	}

IL_0083:
	{
		goto IL_00f1;
	}

IL_0088:
	{
		goto IL_00a8;
	}

IL_008d:
	{
		__this->set_U24current_1(NULL);
		bool L_13 = __this->get_U24disposing_2();
		if (L_13)
		{
			goto IL_00a3;
		}
	}
	{
		__this->set_U24PC_3(2);
	}

IL_00a3:
	{
		goto IL_00f1;
	}

IL_00a8:
	{
		IntroSequence_t4248026603 * L_14 = __this->get_U24this_0();
		bool L_15 = L_14->get__clickedPlay_6();
		if (!L_15)
		{
			goto IL_008d;
		}
	}
	{
		IntroSequence_t4248026603 * L_16 = __this->get_U24this_0();
		IntroSequence_t4248026603 * L_17 = __this->get_U24this_0();
		RuntimeObject* L_18 = IntroSequence_FadeOutButton_m1652046706(L_17, /*hidden argument*/NULL);
		Coroutine_t3829159415 * L_19 = MonoBehaviour_StartCoroutine_m3411253000(L_16, L_18, /*hidden argument*/NULL);
		__this->set_U24current_1(L_19);
		bool L_20 = __this->get_U24disposing_2();
		if (L_20)
		{
			goto IL_00e3;
		}
	}
	{
		__this->set_U24PC_3(3);
	}

IL_00e3:
	{
		goto IL_00f1;
	}

IL_00e8:
	{
		__this->set_U24PC_3((-1));
	}

IL_00ef:
	{
		return (bool)0;
	}

IL_00f1:
	{
		return (bool)1;
	}
}
// System.Object IntroSequence/<WaitForPlayClick>c__Iterator2::System.Collections.Generic.IEnumerator<object>.get_Current()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * U3CWaitForPlayClickU3Ec__Iterator2_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m2746457915 (U3CWaitForPlayClickU3Ec__Iterator2_t2451926618 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U24current_1();
		return L_0;
	}
}
// System.Object IntroSequence/<WaitForPlayClick>c__Iterator2::System.Collections.IEnumerator.get_Current()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * U3CWaitForPlayClickU3Ec__Iterator2_System_Collections_IEnumerator_get_Current_m4024515046 (U3CWaitForPlayClickU3Ec__Iterator2_t2451926618 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U24current_1();
		return L_0;
	}
}
// System.Void IntroSequence/<WaitForPlayClick>c__Iterator2::Dispose()
extern "C" IL2CPP_METHOD_ATTR void U3CWaitForPlayClickU3Ec__Iterator2_Dispose_m343786072 (U3CWaitForPlayClickU3Ec__Iterator2_t2451926618 * __this, const RuntimeMethod* method)
{
	{
		__this->set_U24disposing_2((bool)1);
		__this->set_U24PC_3((-1));
		return;
	}
}
// System.Void IntroSequence/<WaitForPlayClick>c__Iterator2::Reset()
extern "C" IL2CPP_METHOD_ATTR void U3CWaitForPlayClickU3Ec__Iterator2_Reset_m1379856562 (U3CWaitForPlayClickU3Ec__Iterator2_t2451926618 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CWaitForPlayClickU3Ec__Iterator2_Reset_m1379856562_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NotSupportedException_t1314879016 * L_0 = (NotSupportedException_t1314879016 *)il2cpp_codegen_object_new(NotSupportedException_t1314879016_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m2730133172(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0,U3CWaitForPlayClickU3Ec__Iterator2_Reset_m1379856562_RuntimeMethod_var);
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
// System.Void Level::.ctor()
extern "C" IL2CPP_METHOD_ATTR void Level__ctor_m38370482 (Level_t2237665516 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.GameObject[] Level::get_ItemSpawnLocations()
extern "C" IL2CPP_METHOD_ATTR GameObjectU5BU5D_t3328599146* Level_get_ItemSpawnLocations_m3269923615 (Level_t2237665516 * __this, const RuntimeMethod* method)
{
	{
		GameObjectU5BU5D_t3328599146* L_0 = __this->get__itemSpawnLocations_3();
		return L_0;
	}
}
// UnityEngine.GameObject Level::GetRandomItemSpawnLocation()
extern "C" IL2CPP_METHOD_ATTR GameObject_t1113636619 * Level_GetRandomItemSpawnLocation_m2888148191 (Level_t2237665516 * __this, const RuntimeMethod* method)
{
	GameObject_t1113636619 * V_0 = NULL;
	int32_t V_1 = 0;
	{
		V_0 = (GameObject_t1113636619 *)NULL;
		GameObjectU5BU5D_t3328599146* L_0 = __this->get__itemSpawnLocations_3();
		if ((((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_0)->max_length))))) <= ((int32_t)0)))
		{
			goto IL_0061;
		}
	}
	{
		float L_1 = Random_get_value_m3115885645(NULL /*static, unused*/, /*hidden argument*/NULL);
		GameObjectU5BU5D_t3328599146* L_2 = __this->get__itemSpawnLocations_3();
		V_1 = (((int32_t)((int32_t)((float)il2cpp_codegen_multiply((float)L_1, (float)(((float)((float)(((int32_t)((int32_t)(((RuntimeArray *)L_2)->max_length))))))))))));
		GameObjectU5BU5D_t3328599146* L_3 = __this->get__itemSpawnLocations_3();
		if ((((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_3)->max_length))))) <= ((int32_t)1)))
		{
			goto IL_0051;
		}
	}
	{
		goto IL_0045;
	}

IL_0034:
	{
		float L_4 = Random_get_value_m3115885645(NULL /*static, unused*/, /*hidden argument*/NULL);
		GameObjectU5BU5D_t3328599146* L_5 = __this->get__itemSpawnLocations_3();
		V_1 = (((int32_t)((int32_t)((float)il2cpp_codegen_multiply((float)L_4, (float)(((float)((float)(((int32_t)((int32_t)(((RuntimeArray *)L_5)->max_length))))))))))));
	}

IL_0045:
	{
		int32_t L_6 = V_1;
		int32_t L_7 = __this->get__lastItemSpawnLocationIndex_4();
		if ((((int32_t)L_6) == ((int32_t)L_7)))
		{
			goto IL_0034;
		}
	}

IL_0051:
	{
		GameObjectU5BU5D_t3328599146* L_8 = __this->get__itemSpawnLocations_3();
		int32_t L_9 = V_1;
		int32_t L_10 = L_9;
		GameObject_t1113636619 * L_11 = (L_8)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_10));
		V_0 = L_11;
		int32_t L_12 = V_1;
		__this->set__lastItemSpawnLocationIndex_4(L_12);
	}

IL_0061:
	{
		GameObject_t1113636619 * L_13 = V_0;
		return L_13;
	}
}
// UnityEngine.GameObject Level::GetRandomEnemySpawnLocation()
extern "C" IL2CPP_METHOD_ATTR GameObject_t1113636619 * Level_GetRandomEnemySpawnLocation_m1059060116 (Level_t2237665516 * __this, const RuntimeMethod* method)
{
	GameObject_t1113636619 * V_0 = NULL;
	int32_t V_1 = 0;
	{
		V_0 = (GameObject_t1113636619 *)NULL;
		GameObjectU5BU5D_t3328599146* L_0 = __this->get__enemySpawnLocations_5();
		if ((((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_0)->max_length))))) <= ((int32_t)0)))
		{
			goto IL_0061;
		}
	}
	{
		float L_1 = Random_get_value_m3115885645(NULL /*static, unused*/, /*hidden argument*/NULL);
		GameObjectU5BU5D_t3328599146* L_2 = __this->get__enemySpawnLocations_5();
		V_1 = (((int32_t)((int32_t)((float)il2cpp_codegen_multiply((float)L_1, (float)(((float)((float)(((int32_t)((int32_t)(((RuntimeArray *)L_2)->max_length))))))))))));
		GameObjectU5BU5D_t3328599146* L_3 = __this->get__enemySpawnLocations_5();
		if ((((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_3)->max_length))))) <= ((int32_t)1)))
		{
			goto IL_0051;
		}
	}
	{
		goto IL_0045;
	}

IL_0034:
	{
		float L_4 = Random_get_value_m3115885645(NULL /*static, unused*/, /*hidden argument*/NULL);
		GameObjectU5BU5D_t3328599146* L_5 = __this->get__enemySpawnLocations_5();
		V_1 = (((int32_t)((int32_t)((float)il2cpp_codegen_multiply((float)L_4, (float)(((float)((float)(((int32_t)((int32_t)(((RuntimeArray *)L_5)->max_length))))))))))));
	}

IL_0045:
	{
		int32_t L_6 = V_1;
		int32_t L_7 = __this->get__lastEnemySpawnLocationIndex_6();
		if ((((int32_t)L_6) == ((int32_t)L_7)))
		{
			goto IL_0034;
		}
	}

IL_0051:
	{
		GameObjectU5BU5D_t3328599146* L_8 = __this->get__enemySpawnLocations_5();
		int32_t L_9 = V_1;
		int32_t L_10 = L_9;
		GameObject_t1113636619 * L_11 = (L_8)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_10));
		V_0 = L_11;
		int32_t L_12 = V_1;
		__this->set__lastEnemySpawnLocationIndex_6(L_12);
	}

IL_0061:
	{
		GameObject_t1113636619 * L_13 = V_0;
		return L_13;
	}
}
// System.Boolean Level::ContainsEntrance(DoorDirection)
extern "C" IL2CPP_METHOD_ATTR bool Level_ContainsEntrance_m3249026668 (Level_t2237665516 * __this, int32_t ___direction0, const RuntimeMethod* method)
{
	DirectionToStartMapping_t1813080072  V_0;
	memset(&V_0, 0, sizeof(V_0));
	DirectionToStartMappingU5BU5D_t4001959641* V_1 = NULL;
	int32_t V_2 = 0;
	{
		DirectionToStartMappingU5BU5D_t4001959641* L_0 = __this->get__startPositions_2();
		V_1 = L_0;
		V_2 = 0;
		goto IL_002e;
	}

IL_000e:
	{
		DirectionToStartMappingU5BU5D_t4001959641* L_1 = V_1;
		int32_t L_2 = V_2;
		V_0 = (*(DirectionToStartMapping_t1813080072 *)((L_1)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_2))));
		int32_t L_3 = (&V_0)->get_doorDirection_0();
		int32_t L_4 = ___direction0;
		if ((!(((uint32_t)L_3) == ((uint32_t)L_4))))
		{
			goto IL_002a;
		}
	}
	{
		return (bool)1;
	}

IL_002a:
	{
		int32_t L_5 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_5, (int32_t)1));
	}

IL_002e:
	{
		int32_t L_6 = V_2;
		DirectionToStartMappingU5BU5D_t4001959641* L_7 = V_1;
		if ((((int32_t)L_6) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_7)->max_length)))))))
		{
			goto IL_000e;
		}
	}
	{
		return (bool)0;
	}
}
// System.Void Level::Load(DoorDirection)
extern "C" IL2CPP_METHOD_ATTR void Level_Load_m236525255 (Level_t2237665516 * __this, int32_t ___fromDirection0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Level_Load_m236525255_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Player_t3266647312 * V_0 = NULL;
	DirectionToStartMapping_t1813080072  V_1;
	memset(&V_1, 0, sizeof(V_1));
	DirectionToStartMappingU5BU5D_t4001959641* V_2 = NULL;
	int32_t V_3 = 0;
	Door_t3715198229 * V_4 = NULL;
	DoorU5BU5D_t160537336* V_5 = NULL;
	int32_t V_6 = 0;
	{
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		Player_t3266647312 * L_0 = Object_FindObjectOfType_TisPlayer_t3266647312_m389548692(NULL /*static, unused*/, /*hidden argument*/Object_FindObjectOfType_TisPlayer_t3266647312_m389548692_RuntimeMethod_var);
		V_0 = L_0;
		DirectionToStartMappingU5BU5D_t4001959641* L_1 = __this->get__startPositions_2();
		V_2 = L_1;
		V_3 = 0;
		goto IL_0062;
	}

IL_0014:
	{
		DirectionToStartMappingU5BU5D_t4001959641* L_2 = V_2;
		int32_t L_3 = V_3;
		V_1 = (*(DirectionToStartMapping_t1813080072 *)((L_2)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_3))));
		int32_t L_4 = (&V_1)->get_doorDirection_0();
		int32_t L_5 = ___fromDirection0;
		if ((!(((uint32_t)L_4) == ((uint32_t)L_5))))
		{
			goto IL_005e;
		}
	}
	{
		Player_t3266647312 * L_6 = V_0;
		Transform_t3600365921 * L_7 = Component_get_transform_m3162698980(L_6, /*hidden argument*/NULL);
		GameObject_t1113636619 * L_8 = (&V_1)->get_position_1();
		Transform_t3600365921 * L_9 = GameObject_get_transform_m1369836730(L_8, /*hidden argument*/NULL);
		Vector3_t3722313464  L_10 = Transform_get_position_m36019626(L_9, /*hidden argument*/NULL);
		Transform_set_position_m3387557959(L_7, L_10, /*hidden argument*/NULL);
		Camera_t4157153871 * L_11 = Camera_get_main_m3643453163(NULL /*static, unused*/, /*hidden argument*/NULL);
		CameraFollow_t129522575 * L_12 = Component_GetComponent_TisCameraFollow_t129522575_m2586956313(L_11, /*hidden argument*/Component_GetComponent_TisCameraFollow_t129522575_m2586956313_RuntimeMethod_var);
		CameraFollow_JumpTo_m933176623(L_12, /*hidden argument*/NULL);
		goto IL_006b;
	}

IL_005e:
	{
		int32_t L_13 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_13, (int32_t)1));
	}

IL_0062:
	{
		int32_t L_14 = V_3;
		DirectionToStartMappingU5BU5D_t4001959641* L_15 = V_2;
		if ((((int32_t)L_14) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_15)->max_length)))))))
		{
			goto IL_0014;
		}
	}

IL_006b:
	{
		DoorU5BU5D_t160537336* L_16 = Component_GetComponentsInChildren_TisDoor_t3715198229_m363290377(__this, /*hidden argument*/Component_GetComponentsInChildren_TisDoor_t3715198229_m363290377_RuntimeMethod_var);
		V_5 = L_16;
		V_6 = 0;
		goto IL_00a7;
	}

IL_007b:
	{
		DoorU5BU5D_t160537336* L_17 = V_5;
		int32_t L_18 = V_6;
		int32_t L_19 = L_18;
		Door_t3715198229 * L_20 = (L_17)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_19));
		V_4 = L_20;
		Door_t3715198229 * L_21 = V_4;
		int32_t L_22 = Door_get_DoorDirection_m2149117971(L_21, /*hidden argument*/NULL);
		int32_t L_23 = ___fromDirection0;
		int32_t L_24 = Door_Opposite_m4194424780(NULL /*static, unused*/, L_23, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_22) == ((uint32_t)L_24))))
		{
			goto IL_00a1;
		}
	}
	{
		Door_t3715198229 * L_25 = V_4;
		Behaviour_set_enabled_m20417929(L_25, (bool)0, /*hidden argument*/NULL);
		goto IL_00b2;
	}

IL_00a1:
	{
		int32_t L_26 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add((int32_t)L_26, (int32_t)1));
	}

IL_00a7:
	{
		int32_t L_27 = V_6;
		DoorU5BU5D_t160537336* L_28 = V_5;
		if ((((int32_t)L_27) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_28)->max_length)))))))
		{
			goto IL_007b;
		}
	}

IL_00b2:
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
// System.Void LevelLoader::.ctor()
extern "C" IL2CPP_METHOD_ATTR void LevelLoader__ctor_m2236250500 (LevelLoader_t3964987435 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// LevelLoader LevelLoader::get_Instance()
extern "C" IL2CPP_METHOD_ATTR LevelLoader_t3964987435 * LevelLoader_get_Instance_m1614870452 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (LevelLoader_get_Instance_m1614870452_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		LevelLoader_t3964987435 * L_0 = Object_FindObjectOfType_TisLevelLoader_t3964987435_m1930945093(NULL /*static, unused*/, /*hidden argument*/Object_FindObjectOfType_TisLevelLoader_t3964987435_m1930945093_RuntimeMethod_var);
		return L_0;
	}
}
// System.Void LevelLoader::Start()
extern "C" IL2CPP_METHOD_ATTR void LevelLoader_Start_m627304286 (LevelLoader_t3964987435 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (LevelLoader_Start_m627304286_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		GameObject_t1113636619 * L_0 = Component_get_gameObject_m442555142(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		Object_DontDestroyOnLoad_m166252750(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		__this->set__levelsCompleted_4(0);
		return;
	}
}
// System.Void LevelLoader::Reset()
extern "C" IL2CPP_METHOD_ATTR void LevelLoader_Reset_m1137860544 (LevelLoader_t3964987435 * __this, const RuntimeMethod* method)
{
	{
		__this->set__levelsCompleted_4(0);
		return;
	}
}
// System.Void LevelLoader::DestoryAllLevels()
extern "C" IL2CPP_METHOD_ATTR void LevelLoader_DestoryAllLevels_m950108988 (LevelLoader_t3964987435 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (LevelLoader_DestoryAllLevels_m950108988_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Level_t2237665516 * V_0 = NULL;
	LevelU5BU5D_t979096037* V_1 = NULL;
	int32_t V_2 = 0;
	Weapon_t4063826929 * V_3 = NULL;
	WeaponU5BU5D_t718049580* V_4 = NULL;
	int32_t V_5 = 0;
	HealthPickup_t2182775939 * V_6 = NULL;
	HealthPickupU5BU5D_t3497542162* V_7 = NULL;
	int32_t V_8 = 0;
	Entity_t3391956725 * V_9 = NULL;
	EntityU5BU5D_t1586060696* V_10 = NULL;
	int32_t V_11 = 0;
	{
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		LevelU5BU5D_t979096037* L_0 = Object_FindObjectsOfType_TisLevel_t2237665516_m4214053556(NULL /*static, unused*/, /*hidden argument*/Object_FindObjectsOfType_TisLevel_t2237665516_m4214053556_RuntimeMethod_var);
		V_1 = L_0;
		V_2 = 0;
		goto IL_0020;
	}

IL_000d:
	{
		LevelU5BU5D_t979096037* L_1 = V_1;
		int32_t L_2 = V_2;
		int32_t L_3 = L_2;
		Level_t2237665516 * L_4 = (L_1)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_3));
		V_0 = L_4;
		Level_t2237665516 * L_5 = V_0;
		GameObject_t1113636619 * L_6 = Component_get_gameObject_m442555142(L_5, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		Object_Destroy_m565254235(NULL /*static, unused*/, L_6, /*hidden argument*/NULL);
		int32_t L_7 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_7, (int32_t)1));
	}

IL_0020:
	{
		int32_t L_8 = V_2;
		LevelU5BU5D_t979096037* L_9 = V_1;
		if ((((int32_t)L_8) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_9)->max_length)))))))
		{
			goto IL_000d;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		WeaponU5BU5D_t718049580* L_10 = Object_FindObjectsOfType_TisWeapon_t4063826929_m3634948528(NULL /*static, unused*/, /*hidden argument*/Object_FindObjectsOfType_TisWeapon_t4063826929_m3634948528_RuntimeMethod_var);
		V_4 = L_10;
		V_5 = 0;
		goto IL_0064;
	}

IL_0038:
	{
		WeaponU5BU5D_t718049580* L_11 = V_4;
		int32_t L_12 = V_5;
		int32_t L_13 = L_12;
		Weapon_t4063826929 * L_14 = (L_11)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_13));
		V_3 = L_14;
		Weapon_t4063826929 * L_15 = V_3;
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		Player_t3266647312 * L_16 = Object_FindObjectOfType_TisPlayer_t3266647312_m389548692(NULL /*static, unused*/, /*hidden argument*/Object_FindObjectOfType_TisPlayer_t3266647312_m389548692_RuntimeMethod_var);
		Weapon_t4063826929 * L_17 = Entity_get_CurrentWeapon_m2943287280(L_16, /*hidden argument*/NULL);
		bool L_18 = Object_op_Inequality_m4071470834(NULL /*static, unused*/, L_15, L_17, /*hidden argument*/NULL);
		if (!L_18)
		{
			goto IL_005e;
		}
	}
	{
		Weapon_t4063826929 * L_19 = V_3;
		GameObject_t1113636619 * L_20 = Component_get_gameObject_m442555142(L_19, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		Object_Destroy_m565254235(NULL /*static, unused*/, L_20, /*hidden argument*/NULL);
	}

IL_005e:
	{
		int32_t L_21 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_21, (int32_t)1));
	}

IL_0064:
	{
		int32_t L_22 = V_5;
		WeaponU5BU5D_t718049580* L_23 = V_4;
		if ((((int32_t)L_22) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_23)->max_length)))))))
		{
			goto IL_0038;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		HealthPickupU5BU5D_t3497542162* L_24 = Object_FindObjectsOfType_TisHealthPickup_t2182775939_m3785758616(NULL /*static, unused*/, /*hidden argument*/Object_FindObjectsOfType_TisHealthPickup_t2182775939_m3785758616_RuntimeMethod_var);
		V_7 = L_24;
		V_8 = 0;
		goto IL_0097;
	}

IL_007e:
	{
		HealthPickupU5BU5D_t3497542162* L_25 = V_7;
		int32_t L_26 = V_8;
		int32_t L_27 = L_26;
		HealthPickup_t2182775939 * L_28 = (L_25)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_27));
		V_6 = L_28;
		HealthPickup_t2182775939 * L_29 = V_6;
		GameObject_t1113636619 * L_30 = Component_get_gameObject_m442555142(L_29, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		Object_Destroy_m565254235(NULL /*static, unused*/, L_30, /*hidden argument*/NULL);
		int32_t L_31 = V_8;
		V_8 = ((int32_t)il2cpp_codegen_add((int32_t)L_31, (int32_t)1));
	}

IL_0097:
	{
		int32_t L_32 = V_8;
		HealthPickupU5BU5D_t3497542162* L_33 = V_7;
		if ((((int32_t)L_32) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_33)->max_length)))))))
		{
			goto IL_007e;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		EntityU5BU5D_t1586060696* L_34 = Object_FindObjectsOfType_TisEntity_t3391956725_m1410175250(NULL /*static, unused*/, /*hidden argument*/Object_FindObjectsOfType_TisEntity_t3391956725_m1410175250_RuntimeMethod_var);
		V_10 = L_34;
		V_11 = 0;
		goto IL_00e5;
	}

IL_00b1:
	{
		EntityU5BU5D_t1586060696* L_35 = V_10;
		int32_t L_36 = V_11;
		int32_t L_37 = L_36;
		Entity_t3391956725 * L_38 = (L_35)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_37));
		V_9 = L_38;
		Entity_t3391956725 * L_39 = V_9;
		GameObject_t1113636619 * L_40 = Component_get_gameObject_m442555142(L_39, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		Player_t3266647312 * L_41 = Object_FindObjectOfType_TisPlayer_t3266647312_m389548692(NULL /*static, unused*/, /*hidden argument*/Object_FindObjectOfType_TisPlayer_t3266647312_m389548692_RuntimeMethod_var);
		GameObject_t1113636619 * L_42 = Component_get_gameObject_m442555142(L_41, /*hidden argument*/NULL);
		bool L_43 = Object_op_Inequality_m4071470834(NULL /*static, unused*/, L_40, L_42, /*hidden argument*/NULL);
		if (!L_43)
		{
			goto IL_00df;
		}
	}
	{
		Entity_t3391956725 * L_44 = V_9;
		GameObject_t1113636619 * L_45 = Component_get_gameObject_m442555142(L_44, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		Object_Destroy_m565254235(NULL /*static, unused*/, L_45, /*hidden argument*/NULL);
	}

IL_00df:
	{
		int32_t L_46 = V_11;
		V_11 = ((int32_t)il2cpp_codegen_add((int32_t)L_46, (int32_t)1));
	}

IL_00e5:
	{
		int32_t L_47 = V_11;
		EntityU5BU5D_t1586060696* L_48 = V_10;
		if ((((int32_t)L_47) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_48)->max_length)))))))
		{
			goto IL_00b1;
		}
	}
	{
		return;
	}
}
// System.Void LevelLoader::LoadLevel(DoorDirection)
extern "C" IL2CPP_METHOD_ATTR void LevelLoader_LoadLevel_m2719355285 (LevelLoader_t3964987435 * __this, int32_t ___doorDirection0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (LevelLoader_LoadLevel_m2719355285_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	List_1_t3709740258 * V_0 = NULL;
	Level_t2237665516 * V_1 = NULL;
	LevelU5BU5D_t979096037* V_2 = NULL;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	Level_t2237665516 * V_5 = NULL;
	{
		LevelLoader_DestoryAllLevels_m950108988(__this, /*hidden argument*/NULL);
		List_1_t3709740258 * L_0 = (List_1_t3709740258 *)il2cpp_codegen_object_new(List_1_t3709740258_il2cpp_TypeInfo_var);
		List_1__ctor_m489004955(L_0, /*hidden argument*/List_1__ctor_m489004955_RuntimeMethod_var);
		V_0 = L_0;
		LevelU5BU5D_t979096037* L_1 = __this->get__levels_2();
		V_2 = L_1;
		V_3 = 0;
		goto IL_0035;
	}

IL_001a:
	{
		LevelU5BU5D_t979096037* L_2 = V_2;
		int32_t L_3 = V_3;
		int32_t L_4 = L_3;
		Level_t2237665516 * L_5 = (L_2)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_4));
		V_1 = L_5;
		Level_t2237665516 * L_6 = V_1;
		int32_t L_7 = ___doorDirection0;
		bool L_8 = Level_ContainsEntrance_m3249026668(L_6, L_7, /*hidden argument*/NULL);
		if (!L_8)
		{
			goto IL_0031;
		}
	}
	{
		List_1_t3709740258 * L_9 = V_0;
		Level_t2237665516 * L_10 = V_1;
		List_1_Add_m270033829(L_9, L_10, /*hidden argument*/List_1_Add_m270033829_RuntimeMethod_var);
	}

IL_0031:
	{
		int32_t L_11 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_11, (int32_t)1));
	}

IL_0035:
	{
		int32_t L_12 = V_3;
		LevelU5BU5D_t979096037* L_13 = V_2;
		if ((((int32_t)L_12) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_13)->max_length)))))))
		{
			goto IL_001a;
		}
	}
	{
		float L_14 = Random_get_value_m3115885645(NULL /*static, unused*/, /*hidden argument*/NULL);
		List_1_t3709740258 * L_15 = V_0;
		int32_t L_16 = List_1_get_Count_m157552029(L_15, /*hidden argument*/List_1_get_Count_m157552029_RuntimeMethod_var);
		V_4 = (((int32_t)((int32_t)((float)il2cpp_codegen_multiply((float)L_14, (float)(((float)((float)L_16))))))));
		List_1_t3709740258 * L_17 = V_0;
		int32_t L_18 = V_4;
		Level_t2237665516 * L_19 = List_1_get_Item_m1639925114(L_17, L_18, /*hidden argument*/List_1_get_Item_m1639925114_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		Level_t2237665516 * L_20 = Object_Instantiate_TisLevel_t2237665516_m21667887(NULL /*static, unused*/, L_19, /*hidden argument*/Object_Instantiate_TisLevel_t2237665516_m21667887_RuntimeMethod_var);
		V_5 = L_20;
		Level_t2237665516 * L_21 = V_5;
		int32_t L_22 = ___doorDirection0;
		Level_Load_m236525255(L_21, L_22, /*hidden argument*/NULL);
		Level_t2237665516 * L_23 = V_5;
		LevelLoader_CustomSpawn_m1377860924(__this, L_23, /*hidden argument*/NULL);
		int32_t L_24 = __this->get__levelsCompleted_4();
		__this->set__levelsCompleted_4(((int32_t)il2cpp_codegen_add((int32_t)L_24, (int32_t)1)));
		return;
	}
}
// System.Void LevelLoader::CustomSpawn(Level)
extern "C" IL2CPP_METHOD_ATTR void LevelLoader_CustomSpawn_m1377860924 (LevelLoader_t3964987435 * __this, Level_t2237665516 * ___level0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get__levelsCompleted_4();
		if ((!(((uint32_t)L_0) == ((uint32_t)1))))
		{
			goto IL_0022;
		}
	}
	{
		Level_t2237665516 * L_1 = ___level0;
		PrefabResource_t3713134029 * L_2 = PrefabResource_get_Instance_m593630871(NULL /*static, unused*/, /*hidden argument*/NULL);
		Weapon_t4063826929 * L_3 = L_2->get_stick_3();
		LevelLoader_Spawn_m506406773(__this, L_1, L_3, /*hidden argument*/NULL);
		goto IL_01ac;
	}

IL_0022:
	{
		int32_t L_4 = __this->get__levelsCompleted_4();
		if ((((int32_t)L_4) < ((int32_t)2)))
		{
			goto IL_0057;
		}
	}
	{
		int32_t L_5 = __this->get__levelsCompleted_4();
		if ((((int32_t)L_5) >= ((int32_t)3)))
		{
			goto IL_0057;
		}
	}
	{
		Level_t2237665516 * L_6 = ___level0;
		PrefabResource_t3713134029 * L_7 = PrefabResource_get_Instance_m593630871(NULL /*static, unused*/, /*hidden argument*/NULL);
		Entity_t3391956725 * L_8 = L_7->get_bat_6();
		LevelLoader_Spawn_m2273037782(__this, L_6, L_8, /*hidden argument*/NULL);
		Level_t2237665516 * L_9 = ___level0;
		LevelLoader_SpawnRandomItem_m2977884513(__this, L_9, /*hidden argument*/NULL);
		goto IL_01ac;
	}

IL_0057:
	{
		int32_t L_10 = __this->get__levelsCompleted_4();
		if ((((int32_t)L_10) < ((int32_t)3)))
		{
			goto IL_008c;
		}
	}
	{
		int32_t L_11 = __this->get__levelsCompleted_4();
		if ((((int32_t)L_11) >= ((int32_t)5)))
		{
			goto IL_008c;
		}
	}
	{
		Level_t2237665516 * L_12 = ___level0;
		PrefabResource_t3713134029 * L_13 = PrefabResource_get_Instance_m593630871(NULL /*static, unused*/, /*hidden argument*/NULL);
		Entity_t3391956725 * L_14 = L_13->get_skelly_7();
		LevelLoader_Spawn_m2273037782(__this, L_12, L_14, /*hidden argument*/NULL);
		Level_t2237665516 * L_15 = ___level0;
		LevelLoader_SpawnRandomItem_m2977884513(__this, L_15, /*hidden argument*/NULL);
		goto IL_01ac;
	}

IL_008c:
	{
		int32_t L_16 = __this->get__levelsCompleted_4();
		if ((((int32_t)L_16) < ((int32_t)5)))
		{
			goto IL_00d2;
		}
	}
	{
		int32_t L_17 = __this->get__levelsCompleted_4();
		if ((((int32_t)L_17) >= ((int32_t)7)))
		{
			goto IL_00d2;
		}
	}
	{
		Level_t2237665516 * L_18 = ___level0;
		PrefabResource_t3713134029 * L_19 = PrefabResource_get_Instance_m593630871(NULL /*static, unused*/, /*hidden argument*/NULL);
		Entity_t3391956725 * L_20 = L_19->get_skelly_7();
		LevelLoader_Spawn_m2273037782(__this, L_18, L_20, /*hidden argument*/NULL);
		Level_t2237665516 * L_21 = ___level0;
		PrefabResource_t3713134029 * L_22 = PrefabResource_get_Instance_m593630871(NULL /*static, unused*/, /*hidden argument*/NULL);
		Entity_t3391956725 * L_23 = L_22->get_bat_6();
		LevelLoader_Spawn_m2273037782(__this, L_21, L_23, /*hidden argument*/NULL);
		Level_t2237665516 * L_24 = ___level0;
		LevelLoader_SpawnRandomItem_m2977884513(__this, L_24, /*hidden argument*/NULL);
		goto IL_01ac;
	}

IL_00d2:
	{
		int32_t L_25 = __this->get__levelsCompleted_4();
		if ((!(((uint32_t)L_25) == ((uint32_t)7))))
		{
			goto IL_010c;
		}
	}
	{
		Level_t2237665516 * L_26 = ___level0;
		PrefabResource_t3713134029 * L_27 = PrefabResource_get_Instance_m593630871(NULL /*static, unused*/, /*hidden argument*/NULL);
		Entity_t3391956725 * L_28 = L_27->get_skelly_7();
		LevelLoader_Spawn_m2273037782(__this, L_26, L_28, /*hidden argument*/NULL);
		Level_t2237665516 * L_29 = ___level0;
		PrefabResource_t3713134029 * L_30 = PrefabResource_get_Instance_m593630871(NULL /*static, unused*/, /*hidden argument*/NULL);
		Entity_t3391956725 * L_31 = L_30->get_bat_6();
		LevelLoader_Spawn_m2273037782(__this, L_29, L_31, /*hidden argument*/NULL);
		Level_t2237665516 * L_32 = ___level0;
		LevelLoader_SpawnRandomItem_m2977884513(__this, L_32, /*hidden argument*/NULL);
		goto IL_01ac;
	}

IL_010c:
	{
		int32_t L_33 = __this->get__levelsCompleted_4();
		if ((!(((uint32_t)L_33) == ((uint32_t)8))))
		{
			goto IL_0146;
		}
	}
	{
		Level_t2237665516 * L_34 = ___level0;
		PrefabResource_t3713134029 * L_35 = PrefabResource_get_Instance_m593630871(NULL /*static, unused*/, /*hidden argument*/NULL);
		Entity_t3391956725 * L_36 = L_35->get_bat_6();
		LevelLoader_Spawn_m2273037782(__this, L_34, L_36, /*hidden argument*/NULL);
		Level_t2237665516 * L_37 = ___level0;
		PrefabResource_t3713134029 * L_38 = PrefabResource_get_Instance_m593630871(NULL /*static, unused*/, /*hidden argument*/NULL);
		Entity_t3391956725 * L_39 = L_38->get_bat_6();
		LevelLoader_Spawn_m2273037782(__this, L_37, L_39, /*hidden argument*/NULL);
		Level_t2237665516 * L_40 = ___level0;
		LevelLoader_SpawnRandomItem_m2977884513(__this, L_40, /*hidden argument*/NULL);
		goto IL_01ac;
	}

IL_0146:
	{
		int32_t L_41 = __this->get__levelsCompleted_4();
		if ((!(((uint32_t)L_41) == ((uint32_t)((int32_t)9)))))
		{
			goto IL_0192;
		}
	}
	{
		Level_t2237665516 * L_42 = ___level0;
		PrefabResource_t3713134029 * L_43 = PrefabResource_get_Instance_m593630871(NULL /*static, unused*/, /*hidden argument*/NULL);
		Entity_t3391956725 * L_44 = L_43->get_skelly_7();
		LevelLoader_Spawn_m2273037782(__this, L_42, L_44, /*hidden argument*/NULL);
		Level_t2237665516 * L_45 = ___level0;
		PrefabResource_t3713134029 * L_46 = PrefabResource_get_Instance_m593630871(NULL /*static, unused*/, /*hidden argument*/NULL);
		Entity_t3391956725 * L_47 = L_46->get_bat_6();
		LevelLoader_Spawn_m2273037782(__this, L_45, L_47, /*hidden argument*/NULL);
		Level_t2237665516 * L_48 = ___level0;
		PrefabResource_t3713134029 * L_49 = PrefabResource_get_Instance_m593630871(NULL /*static, unused*/, /*hidden argument*/NULL);
		Entity_t3391956725 * L_50 = L_49->get_bat_6();
		LevelLoader_Spawn_m2273037782(__this, L_48, L_50, /*hidden argument*/NULL);
		Level_t2237665516 * L_51 = ___level0;
		LevelLoader_SpawnRandomItem_m2977884513(__this, L_51, /*hidden argument*/NULL);
		goto IL_01ac;
	}

IL_0192:
	{
		int32_t L_52 = __this->get__levelsCompleted_4();
		if ((!(((uint32_t)L_52) == ((uint32_t)((int32_t)10)))))
		{
			goto IL_01ac;
		}
	}
	{
		LevelLoader_DestoryAllLevels_m950108988(__this, /*hidden argument*/NULL);
		SceneManager_LoadScene_m3267304740(NULL /*static, unused*/, 2, 1, /*hidden argument*/NULL);
	}

IL_01ac:
	{
		return;
	}
}
// System.Void LevelLoader::SpawnRandomItem(Level)
extern "C" IL2CPP_METHOD_ATTR void LevelLoader_SpawnRandomItem_m2977884513 (LevelLoader_t3964987435 * __this, Level_t2237665516 * ___level0, const RuntimeMethod* method)
{
	{
		float L_0 = Random_get_value_m3115885645(NULL /*static, unused*/, /*hidden argument*/NULL);
		if ((!(((float)L_0) > ((float)(0.5f)))))
		{
			goto IL_0021;
		}
	}
	{
		Level_t2237665516 * L_1 = ___level0;
		Weapon_t4063826929 * L_2 = LevelLoader_GetRandomWeapon_m1670875745(__this, /*hidden argument*/NULL);
		LevelLoader_Spawn_m506406773(__this, L_1, L_2, /*hidden argument*/NULL);
		goto IL_0032;
	}

IL_0021:
	{
		Level_t2237665516 * L_3 = ___level0;
		PrefabResource_t3713134029 * L_4 = PrefabResource_get_Instance_m593630871(NULL /*static, unused*/, /*hidden argument*/NULL);
		HealthPickup_t2182775939 * L_5 = L_4->get_heart_8();
		LevelLoader_Spawn_m3218970357(__this, L_3, L_5, /*hidden argument*/NULL);
	}

IL_0032:
	{
		Level_t2237665516 * L_6 = ___level0;
		GameObjectU5BU5D_t3328599146* L_7 = Level_get_ItemSpawnLocations_m3269923615(L_6, /*hidden argument*/NULL);
		if ((((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_7)->max_length))))) <= ((int32_t)1)))
		{
			goto IL_004d;
		}
	}
	{
		Level_t2237665516 * L_8 = ___level0;
		Weapon_t4063826929 * L_9 = LevelLoader_GetRandomWeapon_m1670875745(__this, /*hidden argument*/NULL);
		LevelLoader_Spawn_m506406773(__this, L_8, L_9, /*hidden argument*/NULL);
	}

IL_004d:
	{
		return;
	}
}
// Weapon LevelLoader::GetRandomWeapon()
extern "C" IL2CPP_METHOD_ATTR Weapon_t4063826929 * LevelLoader_GetRandomWeapon_m1670875745 (LevelLoader_t3964987435 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		float L_0 = Random_get_value_m3115885645(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_0 = (((int32_t)((int32_t)((float)il2cpp_codegen_multiply((float)L_0, (float)(3.0f))))));
		int32_t L_1 = V_0;
		if (!L_1)
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_002a;
		}
	}
	{
		goto IL_0035;
	}

IL_001f:
	{
		PrefabResource_t3713134029 * L_3 = PrefabResource_get_Instance_m593630871(NULL /*static, unused*/, /*hidden argument*/NULL);
		Weapon_t4063826929 * L_4 = L_3->get_stick_3();
		return L_4;
	}

IL_002a:
	{
		PrefabResource_t3713134029 * L_5 = PrefabResource_get_Instance_m593630871(NULL /*static, unused*/, /*hidden argument*/NULL);
		Weapon_t4063826929 * L_6 = L_5->get_mace_4();
		return L_6;
	}

IL_0035:
	{
		PrefabResource_t3713134029 * L_7 = PrefabResource_get_Instance_m593630871(NULL /*static, unused*/, /*hidden argument*/NULL);
		Weapon_t4063826929 * L_8 = L_7->get_sword_5();
		return L_8;
	}
}
// System.Void LevelLoader::Spawn(Level,Weapon)
extern "C" IL2CPP_METHOD_ATTR void LevelLoader_Spawn_m506406773 (LevelLoader_t3964987435 * __this, Level_t2237665516 * ___level0, Weapon_t4063826929 * ___item1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (LevelLoader_Spawn_m506406773_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	GameObject_t1113636619 * V_0 = NULL;
	{
		Level_t2237665516 * L_0 = ___level0;
		GameObject_t1113636619 * L_1 = Level_GetRandomItemSpawnLocation_m2888148191(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		GameObject_t1113636619 * L_2 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_3 = Object_op_Inequality_m4071470834(NULL /*static, unused*/, L_2, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0030;
		}
	}
	{
		Weapon_t4063826929 * L_4 = ___item1;
		GameObject_t1113636619 * L_5 = V_0;
		Transform_t3600365921 * L_6 = GameObject_get_transform_m1369836730(L_5, /*hidden argument*/NULL);
		Vector3_t3722313464  L_7 = Transform_get_position_m36019626(L_6, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t3722313464_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_8 = Vector3_get_zero_m1409827619(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t2301928331_il2cpp_TypeInfo_var);
		Quaternion_t2301928331  L_9 = Quaternion_Euler_m1803555822(NULL /*static, unused*/, L_8, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		Object_Instantiate_TisWeapon_t4063826929_m4119154349(NULL /*static, unused*/, L_4, L_7, L_9, (Transform_t3600365921 *)NULL, /*hidden argument*/Object_Instantiate_TisWeapon_t4063826929_m4119154349_RuntimeMethod_var);
	}

IL_0030:
	{
		return;
	}
}
// System.Void LevelLoader::Spawn(Level,HealthPickup)
extern "C" IL2CPP_METHOD_ATTR void LevelLoader_Spawn_m3218970357 (LevelLoader_t3964987435 * __this, Level_t2237665516 * ___level0, HealthPickup_t2182775939 * ___item1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (LevelLoader_Spawn_m3218970357_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	GameObject_t1113636619 * V_0 = NULL;
	{
		Level_t2237665516 * L_0 = ___level0;
		GameObject_t1113636619 * L_1 = Level_GetRandomItemSpawnLocation_m2888148191(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		GameObject_t1113636619 * L_2 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_3 = Object_op_Inequality_m4071470834(NULL /*static, unused*/, L_2, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0030;
		}
	}
	{
		HealthPickup_t2182775939 * L_4 = ___item1;
		GameObject_t1113636619 * L_5 = V_0;
		Transform_t3600365921 * L_6 = GameObject_get_transform_m1369836730(L_5, /*hidden argument*/NULL);
		Vector3_t3722313464  L_7 = Transform_get_position_m36019626(L_6, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t3722313464_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_8 = Vector3_get_zero_m1409827619(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t2301928331_il2cpp_TypeInfo_var);
		Quaternion_t2301928331  L_9 = Quaternion_Euler_m1803555822(NULL /*static, unused*/, L_8, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		Object_Instantiate_TisHealthPickup_t2182775939_m3135568745(NULL /*static, unused*/, L_4, L_7, L_9, (Transform_t3600365921 *)NULL, /*hidden argument*/Object_Instantiate_TisHealthPickup_t2182775939_m3135568745_RuntimeMethod_var);
	}

IL_0030:
	{
		return;
	}
}
// System.Void LevelLoader::Spawn(Level,Entity)
extern "C" IL2CPP_METHOD_ATTR void LevelLoader_Spawn_m2273037782 (LevelLoader_t3964987435 * __this, Level_t2237665516 * ___level0, Entity_t3391956725 * ___enemy1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (LevelLoader_Spawn_m2273037782_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	GameObject_t1113636619 * V_0 = NULL;
	{
		Level_t2237665516 * L_0 = ___level0;
		GameObject_t1113636619 * L_1 = Level_GetRandomEnemySpawnLocation_m1059060116(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		GameObject_t1113636619 * L_2 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_3 = Object_op_Inequality_m4071470834(NULL /*static, unused*/, L_2, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0030;
		}
	}
	{
		Entity_t3391956725 * L_4 = ___enemy1;
		GameObject_t1113636619 * L_5 = V_0;
		Transform_t3600365921 * L_6 = GameObject_get_transform_m1369836730(L_5, /*hidden argument*/NULL);
		Vector3_t3722313464  L_7 = Transform_get_position_m36019626(L_6, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t3722313464_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_8 = Vector3_get_zero_m1409827619(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t2301928331_il2cpp_TypeInfo_var);
		Quaternion_t2301928331  L_9 = Quaternion_Euler_m1803555822(NULL /*static, unused*/, L_8, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		Object_Instantiate_TisEntity_t3391956725_m3915256508(NULL /*static, unused*/, L_4, L_7, L_9, (Transform_t3600365921 *)NULL, /*hidden argument*/Object_Instantiate_TisEntity_t3391956725_m3915256508_RuntimeMethod_var);
	}

IL_0030:
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
// System.Void Message::.ctor(System.String,System.Single)
extern "C" IL2CPP_METHOD_ATTR void Message__ctor_m1021180616 (Message_t4258767382 * __this, String_t* ___m0, float ___d1, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___m0;
		__this->set_message_0(L_0);
		float L_1 = ___d1;
		__this->set_duration_1(L_1);
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
// System.Void MessagePopup::.ctor()
extern "C" IL2CPP_METHOD_ATTR void MessagePopup__ctor_m887124985 (MessagePopup_t1375170899 * __this, const RuntimeMethod* method)
{
	{
		__this->set__ready_4((bool)1);
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// MessagePopup MessagePopup::get_Instance()
extern "C" IL2CPP_METHOD_ATTR MessagePopup_t1375170899 * MessagePopup_get_Instance_m3005294533 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MessagePopup_get_Instance_m3005294533_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		MessagePopup_t1375170899 * L_0 = Object_FindObjectOfType_TisMessagePopup_t1375170899_m653125726(NULL /*static, unused*/, /*hidden argument*/Object_FindObjectOfType_TisMessagePopup_t1375170899_m653125726_RuntimeMethod_var);
		return L_0;
	}
}
// System.Void MessagePopup::Start()
extern "C" IL2CPP_METHOD_ATTR void MessagePopup_Start_m653127965 (MessagePopup_t1375170899 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MessagePopup_Start_m653127965_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Queue_1_t4105026876 * L_0 = (Queue_1_t4105026876 *)il2cpp_codegen_object_new(Queue_1_t4105026876_il2cpp_TypeInfo_var);
		Queue_1__ctor_m1832640620(L_0, /*hidden argument*/Queue_1__ctor_m1832640620_RuntimeMethod_var);
		__this->set__messages_5(L_0);
		return;
	}
}
// System.Void MessagePopup::ShowMessage(System.String,System.Single)
extern "C" IL2CPP_METHOD_ATTR void MessagePopup_ShowMessage_m3946694855 (MessagePopup_t1375170899 * __this, String_t* ___message0, float ___duration1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MessagePopup_ShowMessage_m3946694855_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Queue_1_t4105026876 * L_0 = __this->get__messages_5();
		String_t* L_1 = ___message0;
		float L_2 = ___duration1;
		Message_t4258767382 * L_3 = (Message_t4258767382 *)il2cpp_codegen_object_new(Message_t4258767382_il2cpp_TypeInfo_var);
		Message__ctor_m1021180616(L_3, L_1, L_2, /*hidden argument*/NULL);
		Queue_1_Enqueue_m2658102913(L_0, L_3, /*hidden argument*/Queue_1_Enqueue_m2658102913_RuntimeMethod_var);
		return;
	}
}
// System.Void MessagePopup::Update()
extern "C" IL2CPP_METHOD_ATTR void MessagePopup_Update_m503939531 (MessagePopup_t1375170899 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MessagePopup_Update_m503939531_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Queue_1_t4105026876 * L_0 = __this->get__messages_5();
		int32_t L_1 = Queue_1_get_Count_m816568897(L_0, /*hidden argument*/Queue_1_get_Count_m816568897_RuntimeMethod_var);
		if ((((int32_t)L_1) <= ((int32_t)0)))
		{
			goto IL_0029;
		}
	}
	{
		bool L_2 = __this->get__ready_4();
		if (!L_2)
		{
			goto IL_0029;
		}
	}
	{
		RuntimeObject* L_3 = MessagePopup_ShowNext_m2695065269(__this, /*hidden argument*/NULL);
		MonoBehaviour_StartCoroutine_m3411253000(__this, L_3, /*hidden argument*/NULL);
	}

IL_0029:
	{
		return;
	}
}
// System.Collections.IEnumerator MessagePopup::ShowNext()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* MessagePopup_ShowNext_m2695065269 (MessagePopup_t1375170899 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MessagePopup_ShowNext_m2695065269_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	U3CShowNextU3Ec__Iterator0_t3465437423 * V_0 = NULL;
	{
		U3CShowNextU3Ec__Iterator0_t3465437423 * L_0 = (U3CShowNextU3Ec__Iterator0_t3465437423 *)il2cpp_codegen_object_new(U3CShowNextU3Ec__Iterator0_t3465437423_il2cpp_TypeInfo_var);
		U3CShowNextU3Ec__Iterator0__ctor_m2092935258(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CShowNextU3Ec__Iterator0_t3465437423 * L_1 = V_0;
		L_1->set_U24this_1(__this);
		U3CShowNextU3Ec__Iterator0_t3465437423 * L_2 = V_0;
		return L_2;
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
// System.Void MessagePopup/<ShowNext>c__Iterator0::.ctor()
extern "C" IL2CPP_METHOD_ATTR void U3CShowNextU3Ec__Iterator0__ctor_m2092935258 (U3CShowNextU3Ec__Iterator0_t3465437423 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean MessagePopup/<ShowNext>c__Iterator0::MoveNext()
extern "C" IL2CPP_METHOD_ATTR bool U3CShowNextU3Ec__Iterator0_MoveNext_m1264815460 (U3CShowNextU3Ec__Iterator0_t3465437423 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CShowNextU3Ec__Iterator0_MoveNext_m1264815460_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_U24PC_4();
		V_0 = L_0;
		__this->set_U24PC_4((-1));
		uint32_t L_1 = V_0;
		switch (L_1)
		{
			case 0:
			{
				goto IL_0021;
			}
			case 1:
			{
				goto IL_009d;
			}
		}
	}
	{
		goto IL_00da;
	}

IL_0021:
	{
		MessagePopup_t1375170899 * L_2 = __this->get_U24this_1();
		L_2->set__ready_4((bool)0);
		MessagePopup_t1375170899 * L_3 = __this->get_U24this_1();
		Image_t2670269651 * L_4 = L_3->get__textBacking_2();
		Color_t2555686324  L_5 = Color_get_black_m719512684(NULL /*static, unused*/, /*hidden argument*/NULL);
		VirtActionInvoker1< Color_t2555686324  >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_4, L_5);
		MessagePopup_t1375170899 * L_6 = __this->get_U24this_1();
		Queue_1_t4105026876 * L_7 = L_6->get__messages_5();
		Message_t4258767382 * L_8 = Queue_1_Dequeue_m3764746855(L_7, /*hidden argument*/Queue_1_Dequeue_m3764746855_RuntimeMethod_var);
		__this->set_U3CmessageU3E__0_0(L_8);
		MessagePopup_t1375170899 * L_9 = __this->get_U24this_1();
		Text_t1901882714 * L_10 = L_9->get__message_3();
		Message_t4258767382 * L_11 = __this->get_U3CmessageU3E__0_0();
		String_t* L_12 = L_11->get_message_0();
		VirtActionInvoker1< String_t* >::Invoke(73 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_10, L_12);
		Message_t4258767382 * L_13 = __this->get_U3CmessageU3E__0_0();
		float L_14 = L_13->get_duration_1();
		WaitForSeconds_t1699091251 * L_15 = (WaitForSeconds_t1699091251 *)il2cpp_codegen_object_new(WaitForSeconds_t1699091251_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_m2199082655(L_15, L_14, /*hidden argument*/NULL);
		__this->set_U24current_2(L_15);
		bool L_16 = __this->get_U24disposing_3();
		if (L_16)
		{
			goto IL_0098;
		}
	}
	{
		__this->set_U24PC_4(1);
	}

IL_0098:
	{
		goto IL_00dc;
	}

IL_009d:
	{
		MessagePopup_t1375170899 * L_17 = __this->get_U24this_1();
		Image_t2670269651 * L_18 = L_17->get__textBacking_2();
		Color_t2555686324  L_19 = Color_get_clear_m1016382534(NULL /*static, unused*/, /*hidden argument*/NULL);
		VirtActionInvoker1< Color_t2555686324  >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_18, L_19);
		MessagePopup_t1375170899 * L_20 = __this->get_U24this_1();
		Text_t1901882714 * L_21 = L_20->get__message_3();
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_22 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
		VirtActionInvoker1< String_t* >::Invoke(73 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_21, L_22);
		MessagePopup_t1375170899 * L_23 = __this->get_U24this_1();
		L_23->set__ready_4((bool)1);
		__this->set_U24PC_4((-1));
	}

IL_00da:
	{
		return (bool)0;
	}

IL_00dc:
	{
		return (bool)1;
	}
}
// System.Object MessagePopup/<ShowNext>c__Iterator0::System.Collections.Generic.IEnumerator<object>.get_Current()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * U3CShowNextU3Ec__Iterator0_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m3993308953 (U3CShowNextU3Ec__Iterator0_t3465437423 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U24current_2();
		return L_0;
	}
}
// System.Object MessagePopup/<ShowNext>c__Iterator0::System.Collections.IEnumerator.get_Current()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * U3CShowNextU3Ec__Iterator0_System_Collections_IEnumerator_get_Current_m413930828 (U3CShowNextU3Ec__Iterator0_t3465437423 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U24current_2();
		return L_0;
	}
}
// System.Void MessagePopup/<ShowNext>c__Iterator0::Dispose()
extern "C" IL2CPP_METHOD_ATTR void U3CShowNextU3Ec__Iterator0_Dispose_m725718364 (U3CShowNextU3Ec__Iterator0_t3465437423 * __this, const RuntimeMethod* method)
{
	{
		__this->set_U24disposing_3((bool)1);
		__this->set_U24PC_4((-1));
		return;
	}
}
// System.Void MessagePopup/<ShowNext>c__Iterator0::Reset()
extern "C" IL2CPP_METHOD_ATTR void U3CShowNextU3Ec__Iterator0_Reset_m2071107674 (U3CShowNextU3Ec__Iterator0_t3465437423 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CShowNextU3Ec__Iterator0_Reset_m2071107674_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NotSupportedException_t1314879016 * L_0 = (NotSupportedException_t1314879016 *)il2cpp_codegen_object_new(NotSupportedException_t1314879016_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m2730133172(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0,U3CShowNextU3Ec__Iterator0_Reset_m2071107674_RuntimeMethod_var);
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
// System.Void MusicManager::.ctor()
extern "C" IL2CPP_METHOD_ATTR void MusicManager__ctor_m1726626480 (MusicManager_t3024629483 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// MusicManager MusicManager::get_Instance()
extern "C" IL2CPP_METHOD_ATTR MusicManager_t3024629483 * MusicManager_get_Instance_m1581818762 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MusicManager_get_Instance_m1581818762_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		MusicManager_t3024629483 * L_0 = Object_FindObjectOfType_TisMusicManager_t3024629483_m1742852711(NULL /*static, unused*/, /*hidden argument*/Object_FindObjectOfType_TisMusicManager_t3024629483_m1742852711_RuntimeMethod_var);
		return L_0;
	}
}
// System.Void MusicManager::Start()
extern "C" IL2CPP_METHOD_ATTR void MusicManager_Start_m485694106 (MusicManager_t3024629483 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MusicManager_Start_m485694106_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		GameObject_t1113636619 * L_0 = Component_get_gameObject_m442555142(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		Object_DontDestroyOnLoad_m166252750(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Collections.IEnumerator MusicManager::PlayNext()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* MusicManager_PlayNext_m590115398 (MusicManager_t3024629483 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MusicManager_PlayNext_m590115398_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	U3CPlayNextU3Ec__Iterator0_t875241714 * V_0 = NULL;
	{
		U3CPlayNextU3Ec__Iterator0_t875241714 * L_0 = (U3CPlayNextU3Ec__Iterator0_t875241714 *)il2cpp_codegen_object_new(U3CPlayNextU3Ec__Iterator0_t875241714_il2cpp_TypeInfo_var);
		U3CPlayNextU3Ec__Iterator0__ctor_m213754553(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CPlayNextU3Ec__Iterator0_t875241714 * L_1 = V_0;
		L_1->set_U24this_2(__this);
		U3CPlayNextU3Ec__Iterator0_t875241714 * L_2 = V_0;
		return L_2;
	}
}
// System.Collections.IEnumerator MusicManager::FadeOut()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* MusicManager_FadeOut_m3189210292 (MusicManager_t3024629483 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MusicManager_FadeOut_m3189210292_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	U3CFadeOutU3Ec__Iterator1_t1868721799 * V_0 = NULL;
	{
		U3CFadeOutU3Ec__Iterator1_t1868721799 * L_0 = (U3CFadeOutU3Ec__Iterator1_t1868721799 *)il2cpp_codegen_object_new(U3CFadeOutU3Ec__Iterator1_t1868721799_il2cpp_TypeInfo_var);
		U3CFadeOutU3Ec__Iterator1__ctor_m3476271135(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CFadeOutU3Ec__Iterator1_t1868721799 * L_1 = V_0;
		L_1->set_U24this_1(__this);
		U3CFadeOutU3Ec__Iterator1_t1868721799 * L_2 = V_0;
		return L_2;
	}
}
// System.Void MusicManager::On()
extern "C" IL2CPP_METHOD_ATTR void MusicManager_On_m182107513 (MusicManager_t3024629483 * __this, const RuntimeMethod* method)
{
	{
		AudioSource_t3935305588 * L_0 = __this->get__audioSource_3();
		AudioSource_Stop_m2682712816(L_0, /*hidden argument*/NULL);
		AudioSource_t3935305588 * L_1 = __this->get__audioSource_3();
		AudioSource_set_volume_m1273312851(L_1, (1.0f), /*hidden argument*/NULL);
		AudioSource_t3935305588 * L_2 = __this->get__audioSource_3();
		AudioSource_Play_m48294159(L_2, /*hidden argument*/NULL);
		RuntimeObject* L_3 = MusicManager_PlayNext_m590115398(__this, /*hidden argument*/NULL);
		MonoBehaviour_StartCoroutine_m3411253000(__this, L_3, /*hidden argument*/NULL);
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
// System.Void MusicManager/<FadeOut>c__Iterator1::.ctor()
extern "C" IL2CPP_METHOD_ATTR void U3CFadeOutU3Ec__Iterator1__ctor_m3476271135 (U3CFadeOutU3Ec__Iterator1_t1868721799 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean MusicManager/<FadeOut>c__Iterator1::MoveNext()
extern "C" IL2CPP_METHOD_ATTR bool U3CFadeOutU3Ec__Iterator1_MoveNext_m234429619 (U3CFadeOutU3Ec__Iterator1_t1868721799 * __this, const RuntimeMethod* method)
{
	uint32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_U24PC_4();
		V_0 = L_0;
		__this->set_U24PC_4((-1));
		uint32_t L_1 = V_0;
		switch (L_1)
		{
			case 0:
			{
				goto IL_0021;
			}
			case 1:
			{
				goto IL_006b;
			}
		}
	}
	{
		goto IL_00a2;
	}

IL_0021:
	{
		__this->set_U3CiU3E__1_0(0);
		goto IL_0079;
	}

IL_002d:
	{
		MusicManager_t3024629483 * L_2 = __this->get_U24this_1();
		AudioSource_t3935305588 * L_3 = L_2->get__audioSource_3();
		int32_t L_4 = __this->get_U3CiU3E__1_0();
		AudioSource_set_volume_m1273312851(L_3, ((float)((float)((float)il2cpp_codegen_subtract((float)(100.0f), (float)(((float)((float)L_4)))))/(float)(100.0f))), /*hidden argument*/NULL);
		__this->set_U24current_2(NULL);
		bool L_5 = __this->get_U24disposing_3();
		if (L_5)
		{
			goto IL_0066;
		}
	}
	{
		__this->set_U24PC_4(1);
	}

IL_0066:
	{
		goto IL_00a4;
	}

IL_006b:
	{
		int32_t L_6 = __this->get_U3CiU3E__1_0();
		__this->set_U3CiU3E__1_0(((int32_t)il2cpp_codegen_add((int32_t)L_6, (int32_t)1)));
	}

IL_0079:
	{
		int32_t L_7 = __this->get_U3CiU3E__1_0();
		if ((((int32_t)L_7) < ((int32_t)((int32_t)100))))
		{
			goto IL_002d;
		}
	}
	{
		MusicManager_t3024629483 * L_8 = __this->get_U24this_1();
		AudioSource_t3935305588 * L_9 = L_8->get__audioSource_3();
		AudioSource_set_volume_m1273312851(L_9, (0.0f), /*hidden argument*/NULL);
		__this->set_U24PC_4((-1));
	}

IL_00a2:
	{
		return (bool)0;
	}

IL_00a4:
	{
		return (bool)1;
	}
}
// System.Object MusicManager/<FadeOut>c__Iterator1::System.Collections.Generic.IEnumerator<object>.get_Current()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * U3CFadeOutU3Ec__Iterator1_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m1483792354 (U3CFadeOutU3Ec__Iterator1_t1868721799 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U24current_2();
		return L_0;
	}
}
// System.Object MusicManager/<FadeOut>c__Iterator1::System.Collections.IEnumerator.get_Current()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * U3CFadeOutU3Ec__Iterator1_System_Collections_IEnumerator_get_Current_m324706269 (U3CFadeOutU3Ec__Iterator1_t1868721799 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U24current_2();
		return L_0;
	}
}
// System.Void MusicManager/<FadeOut>c__Iterator1::Dispose()
extern "C" IL2CPP_METHOD_ATTR void U3CFadeOutU3Ec__Iterator1_Dispose_m2856478661 (U3CFadeOutU3Ec__Iterator1_t1868721799 * __this, const RuntimeMethod* method)
{
	{
		__this->set_U24disposing_3((bool)1);
		__this->set_U24PC_4((-1));
		return;
	}
}
// System.Void MusicManager/<FadeOut>c__Iterator1::Reset()
extern "C" IL2CPP_METHOD_ATTR void U3CFadeOutU3Ec__Iterator1_Reset_m3852849494 (U3CFadeOutU3Ec__Iterator1_t1868721799 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CFadeOutU3Ec__Iterator1_Reset_m3852849494_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NotSupportedException_t1314879016 * L_0 = (NotSupportedException_t1314879016 *)il2cpp_codegen_object_new(NotSupportedException_t1314879016_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m2730133172(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0,U3CFadeOutU3Ec__Iterator1_Reset_m3852849494_RuntimeMethod_var);
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
// System.Void MusicManager/<PlayNext>c__Iterator0::.ctor()
extern "C" IL2CPP_METHOD_ATTR void U3CPlayNextU3Ec__Iterator0__ctor_m213754553 (U3CPlayNextU3Ec__Iterator0_t875241714 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean MusicManager/<PlayNext>c__Iterator0::MoveNext()
extern "C" IL2CPP_METHOD_ATTR bool U3CPlayNextU3Ec__Iterator0_MoveNext_m713015009 (U3CPlayNextU3Ec__Iterator0_t875241714 * __this, const RuntimeMethod* method)
{
	uint32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_U24PC_5();
		V_0 = L_0;
		__this->set_U24PC_5((-1));
		uint32_t L_1 = V_0;
		switch (L_1)
		{
			case 0:
			{
				goto IL_0021;
			}
			case 1:
			{
				goto IL_00b2;
			}
		}
	}
	{
		goto IL_00ff;
	}

IL_0021:
	{
		__this->set_U3CiU3E__1_0(0);
		goto IL_00e0;
	}

IL_002d:
	{
		int32_t L_2 = __this->get_U3CiU3E__1_0();
		MusicManager_t3024629483 * L_3 = __this->get_U24this_2();
		AudioClipU5BU5D_t143221404* L_4 = L_3->get__musicSequence_2();
		__this->set_U3CisLastU3E__2_1((bool)((((int32_t)L_2) == ((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_4)->max_length)))), (int32_t)1))))? 1 : 0));
		MusicManager_t3024629483 * L_5 = __this->get_U24this_2();
		AudioSource_t3935305588 * L_6 = L_5->get__audioSource_3();
		bool L_7 = __this->get_U3CisLastU3E__2_1();
		AudioSource_set_loop_m3659884460(L_6, L_7, /*hidden argument*/NULL);
		MusicManager_t3024629483 * L_8 = __this->get_U24this_2();
		AudioSource_t3935305588 * L_9 = L_8->get__audioSource_3();
		MusicManager_t3024629483 * L_10 = __this->get_U24this_2();
		AudioClipU5BU5D_t143221404* L_11 = L_10->get__musicSequence_2();
		int32_t L_12 = __this->get_U3CiU3E__1_0();
		int32_t L_13 = L_12;
		AudioClip_t3680889665 * L_14 = (L_11)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_13));
		AudioSource_set_clip_m31653938(L_9, L_14, /*hidden argument*/NULL);
		MusicManager_t3024629483 * L_15 = __this->get_U24this_2();
		AudioSource_t3935305588 * L_16 = L_15->get__audioSource_3();
		AudioSource_Play_m48294159(L_16, /*hidden argument*/NULL);
		goto IL_00b2;
	}

IL_0097:
	{
		__this->set_U24current_3(NULL);
		bool L_17 = __this->get_U24disposing_4();
		if (L_17)
		{
			goto IL_00ad;
		}
	}
	{
		__this->set_U24PC_5(1);
	}

IL_00ad:
	{
		goto IL_0101;
	}

IL_00b2:
	{
		bool L_18 = __this->get_U3CisLastU3E__2_1();
		if (L_18)
		{
			goto IL_00d2;
		}
	}
	{
		MusicManager_t3024629483 * L_19 = __this->get_U24this_2();
		AudioSource_t3935305588 * L_20 = L_19->get__audioSource_3();
		bool L_21 = AudioSource_get_isPlaying_m1896551654(L_20, /*hidden argument*/NULL);
		if (L_21)
		{
			goto IL_0097;
		}
	}

IL_00d2:
	{
		int32_t L_22 = __this->get_U3CiU3E__1_0();
		__this->set_U3CiU3E__1_0(((int32_t)il2cpp_codegen_add((int32_t)L_22, (int32_t)1)));
	}

IL_00e0:
	{
		int32_t L_23 = __this->get_U3CiU3E__1_0();
		MusicManager_t3024629483 * L_24 = __this->get_U24this_2();
		AudioClipU5BU5D_t143221404* L_25 = L_24->get__musicSequence_2();
		if ((((int32_t)L_23) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_25)->max_length)))))))
		{
			goto IL_002d;
		}
	}
	{
		__this->set_U24PC_5((-1));
	}

IL_00ff:
	{
		return (bool)0;
	}

IL_0101:
	{
		return (bool)1;
	}
}
// System.Object MusicManager/<PlayNext>c__Iterator0::System.Collections.Generic.IEnumerator<object>.get_Current()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * U3CPlayNextU3Ec__Iterator0_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m1219947907 (U3CPlayNextU3Ec__Iterator0_t875241714 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U24current_3();
		return L_0;
	}
}
// System.Object MusicManager/<PlayNext>c__Iterator0::System.Collections.IEnumerator.get_Current()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * U3CPlayNextU3Ec__Iterator0_System_Collections_IEnumerator_get_Current_m3012660116 (U3CPlayNextU3Ec__Iterator0_t875241714 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U24current_3();
		return L_0;
	}
}
// System.Void MusicManager/<PlayNext>c__Iterator0::Dispose()
extern "C" IL2CPP_METHOD_ATTR void U3CPlayNextU3Ec__Iterator0_Dispose_m4063594212 (U3CPlayNextU3Ec__Iterator0_t875241714 * __this, const RuntimeMethod* method)
{
	{
		__this->set_U24disposing_4((bool)1);
		__this->set_U24PC_5((-1));
		return;
	}
}
// System.Void MusicManager/<PlayNext>c__Iterator0::Reset()
extern "C" IL2CPP_METHOD_ATTR void U3CPlayNextU3Ec__Iterator0_Reset_m3877278393 (U3CPlayNextU3Ec__Iterator0_t875241714 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CPlayNextU3Ec__Iterator0_Reset_m3877278393_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NotSupportedException_t1314879016 * L_0 = (NotSupportedException_t1314879016 *)il2cpp_codegen_object_new(NotSupportedException_t1314879016_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m2730133172(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0,U3CPlayNextU3Ec__Iterator0_Reset_m3877278393_RuntimeMethod_var);
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
// System.Void Node::.ctor()
extern "C" IL2CPP_METHOD_ATTR void Node__ctor_m2374944444 (Node_t2989995042 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Node::Start()
extern "C" IL2CPP_METHOD_ATTR void Node_Start_m495890796 (Node_t2989995042 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Node_Start_m495890796_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		SpriteRenderer_t3235626157 * L_0 = Component_GetComponent_TisSpriteRenderer_t3235626157_m2253180502(__this, /*hidden argument*/Component_GetComponent_TisSpriteRenderer_t3235626157_m2253180502_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		Object_Destroy_m565254235(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
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
// System.Void Particle::.ctor()
extern "C" IL2CPP_METHOD_ATTR void Particle__ctor_m210338204 (Particle_t3168132017 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Particle::Start()
extern "C" IL2CPP_METHOD_ATTR void Particle_Start_m1265247958 (Particle_t3168132017 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Particle_Start_m1265247958_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		V_0 = (300.0f);
		float L_0 = Random_get_value_m3115885645(NULL /*static, unused*/, /*hidden argument*/NULL);
		if ((!(((float)L_0) > ((float)(0.5f)))))
		{
			goto IL_002d;
		}
	}
	{
		Rigidbody2D_t939494601 * L_1 = Component_GetComponent_TisRigidbody2D_t939494601_m1531613439(__this, /*hidden argument*/Component_GetComponent_TisRigidbody2D_t939494601_m1531613439_RuntimeMethod_var);
		float L_2 = Random_get_value_m3115885645(NULL /*static, unused*/, /*hidden argument*/NULL);
		float L_3 = V_0;
		Rigidbody2D_AddTorque_m1535770154(L_1, ((float)il2cpp_codegen_multiply((float)L_2, (float)((-L_3)))), /*hidden argument*/NULL);
		goto IL_004b;
	}

IL_002d:
	{
		Rigidbody2D_t939494601 * L_4 = Component_GetComponent_TisRigidbody2D_t939494601_m1531613439(__this, /*hidden argument*/Component_GetComponent_TisRigidbody2D_t939494601_m1531613439_RuntimeMethod_var);
		float L_5 = Random_get_value_m3115885645(NULL /*static, unused*/, /*hidden argument*/NULL);
		float L_6 = V_0;
		Rigidbody2D_AddTorque_m1535770154(L_4, ((float)il2cpp_codegen_multiply((float)L_5, (float)L_6)), /*hidden argument*/NULL);
		SpriteRenderer_t3235626157 * L_7 = __this->get__spriteRenderer_3();
		SpriteRenderer_set_flipX_m126972045(L_7, (bool)1, /*hidden argument*/NULL);
	}

IL_004b:
	{
		Transform_t3600365921 * L_8 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t3722313464_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_9 = Vector3_get_zero_m1409827619(NULL /*static, unused*/, /*hidden argument*/NULL);
		Transform_set_localScale_m3053443106(L_8, L_9, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Particle::Update()
extern "C" IL2CPP_METHOD_ATTR void Particle_Update_m4200139228 (Particle_t3168132017 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Particle_Update_m4200139228_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		float L_0 = __this->get__life_2();
		float L_1 = Time_get_deltaTime_m372706562(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->set__life_2(((float)il2cpp_codegen_subtract((float)L_0, (float)L_1)));
		SpriteRenderer_t3235626157 * L_2 = __this->get__spriteRenderer_3();
		SpriteRenderer_t3235626157 * L_3 = __this->get__spriteRenderer_3();
		Color_t2555686324  L_4 = SpriteRenderer_get_color_m904197748(L_3, /*hidden argument*/NULL);
		Color_t2555686324  L_5;
		memset(&L_5, 0, sizeof(L_5));
		Color__ctor_m2943235014((&L_5), (0.0f), (0.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		float L_6 = Time_get_deltaTime_m372706562(NULL /*static, unused*/, /*hidden argument*/NULL);
		Color_t2555686324  L_7 = Color_Lerp_m973389909(NULL /*static, unused*/, L_4, L_5, ((float)il2cpp_codegen_multiply((float)(1.25f), (float)L_6)), /*hidden argument*/NULL);
		SpriteRenderer_set_color_m3056777566(L_2, L_7, /*hidden argument*/NULL);
		Transform_t3600365921 * L_8 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		Transform_t3600365921 * L_9 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		Vector3_t3722313464  L_10 = Transform_get_localScale_m129152068(L_9, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t3722313464_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_11 = Vector3_get_one_m1629952498(NULL /*static, unused*/, /*hidden argument*/NULL);
		float L_12 = Time_get_deltaTime_m372706562(NULL /*static, unused*/, /*hidden argument*/NULL);
		Vector3_t3722313464  L_13 = Vector3_Lerp_m407887542(NULL /*static, unused*/, L_10, L_11, ((float)il2cpp_codegen_multiply((float)(2.0f), (float)L_12)), /*hidden argument*/NULL);
		Transform_set_localScale_m3053443106(L_8, L_13, /*hidden argument*/NULL);
		float L_14 = __this->get__life_2();
		if ((!(((float)L_14) <= ((float)(0.0f)))))
		{
			goto IL_0097;
		}
	}
	{
		GameObject_t1113636619 * L_15 = Component_get_gameObject_m442555142(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		Object_Destroy_m565254235(NULL /*static, unused*/, L_15, /*hidden argument*/NULL);
	}

IL_0097:
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
// System.Void ParticleSpawner::.ctor()
extern "C" IL2CPP_METHOD_ATTR void ParticleSpawner__ctor_m1689606229 (ParticleSpawner_t2092424095 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void ParticleSpawner::Update()
extern "C" IL2CPP_METHOD_ATTR void ParticleSpawner_Update_m1265012259 (ParticleSpawner_t2092424095 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ParticleSpawner_Update_m1265012259_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	UpParticle_t1684764610 * V_0 = NULL;
	Vector3_t3722313464  V_1;
	memset(&V_1, 0, sizeof(V_1));
	{
		float L_0 = __this->get__delay_3();
		if ((!(((float)L_0) < ((float)(0.0f)))))
		{
			goto IL_006c;
		}
	}
	{
		UpParticle_t1684764610 * L_1 = __this->get__particle_2();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		UpParticle_t1684764610 * L_2 = Object_Instantiate_TisUpParticle_t1684764610_m1310796528(NULL /*static, unused*/, L_1, /*hidden argument*/Object_Instantiate_TisUpParticle_t1684764610_m1310796528_RuntimeMethod_var);
		V_0 = L_2;
		UpParticle_t1684764610 * L_3 = V_0;
		Transform_t3600365921 * L_4 = Component_get_transform_m3162698980(L_3, /*hidden argument*/NULL);
		UpParticle_t1684764610 * L_5 = V_0;
		Transform_t3600365921 * L_6 = Component_get_transform_m3162698980(L_5, /*hidden argument*/NULL);
		Vector3_t3722313464  L_7 = Transform_get_position_m36019626(L_6, /*hidden argument*/NULL);
		V_1 = L_7;
		float L_8 = (&V_1)->get_x_1();
		float L_9 = Random_get_value_m3115885645(NULL /*static, unused*/, /*hidden argument*/NULL);
		Vector3_t3722313464  L_10;
		memset(&L_10, 0, sizeof(L_10));
		Vector3__ctor_m3353183577((&L_10), ((float)il2cpp_codegen_subtract((float)((float)il2cpp_codegen_add((float)L_8, (float)(1.0f))), (float)((float)il2cpp_codegen_multiply((float)(2.0f), (float)L_9)))), (-1.0f), (0.0f), /*hidden argument*/NULL);
		Transform_set_position_m3387557959(L_4, L_10, /*hidden argument*/NULL);
		float L_11 = Random_get_value_m3115885645(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->set__delay_3(((float)il2cpp_codegen_multiply((float)(0.5f), (float)L_11)));
	}

IL_006c:
	{
		float L_12 = __this->get__delay_3();
		float L_13 = Time_get_deltaTime_m372706562(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->set__delay_3(((float)il2cpp_codegen_subtract((float)L_12, (float)L_13)));
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
// System.Void Player::.ctor()
extern "C" IL2CPP_METHOD_ATTR void Player__ctor_m509448900 (Player_t3266647312 * __this, const RuntimeMethod* method)
{
	{
		Entity__ctor_m643651842(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean Player::get_InputEnabled()
extern "C" IL2CPP_METHOD_ATTR bool Player_get_InputEnabled_m354816550 (Player_t3266647312 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get_U3CInputEnabledU3Ek__BackingField_23();
		return L_0;
	}
}
// System.Void Player::set_InputEnabled(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void Player_set_InputEnabled_m970961763 (Player_t3266647312 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		bool L_0 = ___value0;
		__this->set_U3CInputEnabledU3Ek__BackingField_23(L_0);
		return;
	}
}
// System.Single Player::get_HealthPerc()
extern "C" IL2CPP_METHOD_ATTR float Player_get_HealthPerc_m578431532 (Player_t3266647312 * __this, const RuntimeMethod* method)
{
	{
		float L_0 = ((Entity_t3391956725 *)__this)->get__health_18();
		return ((float)((float)L_0/(float)(5.0f)));
	}
}
// System.Void Player::AddHealth(System.Single)
extern "C" IL2CPP_METHOD_ATTR void Player_AddHealth_m416419061 (Player_t3266647312 * __this, float ___value0, const RuntimeMethod* method)
{
	{
		float L_0 = ((Entity_t3391956725 *)__this)->get__health_18();
		float L_1 = ___value0;
		((Entity_t3391956725 *)__this)->set__health_18(((float)il2cpp_codegen_add((float)L_0, (float)L_1)));
		float L_2 = ((Entity_t3391956725 *)__this)->get__health_18();
		if ((!(((float)L_2) > ((float)(5.0f)))))
		{
			goto IL_0029;
		}
	}
	{
		((Entity_t3391956725 *)__this)->set__health_18((5.0f));
	}

IL_0029:
	{
		return;
	}
}
// System.Void Player::Start()
extern "C" IL2CPP_METHOD_ATTR void Player_Start_m250748966 (Player_t3266647312 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Player_Start_m250748966_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	OnDie_t3469385283 * G_B2_0 = NULL;
	Player_t3266647312 * G_B2_1 = NULL;
	OnDie_t3469385283 * G_B1_0 = NULL;
	Player_t3266647312 * G_B1_1 = NULL;
	{
		Entity_Start_m2858852706(__this, /*hidden argument*/NULL);
		Player_set_InputEnabled_m970961763(__this, (bool)1, /*hidden argument*/NULL);
		OnDie_t3469385283 * L_0 = ((Entity_t3391956725 *)__this)->get__onDie_19();
		OnDie_t3469385283 * L_1 = ((Player_t3266647312_StaticFields*)il2cpp_codegen_static_fields_for(Player_t3266647312_il2cpp_TypeInfo_var))->get_U3CU3Ef__amU24cache0_24();
		G_B1_0 = L_0;
		G_B1_1 = __this;
		if (L_1)
		{
			G_B2_0 = L_0;
			G_B2_1 = __this;
			goto IL_002c;
		}
	}
	{
		intptr_t L_2 = (intptr_t)Player_U3CStartU3Em__0_m1765453766_RuntimeMethod_var;
		OnDie_t3469385283 * L_3 = (OnDie_t3469385283 *)il2cpp_codegen_object_new(OnDie_t3469385283_il2cpp_TypeInfo_var);
		OnDie__ctor_m2396501215(L_3, NULL, L_2, /*hidden argument*/NULL);
		((Player_t3266647312_StaticFields*)il2cpp_codegen_static_fields_for(Player_t3266647312_il2cpp_TypeInfo_var))->set_U3CU3Ef__amU24cache0_24(L_3);
		G_B2_0 = G_B1_0;
		G_B2_1 = G_B1_1;
	}

IL_002c:
	{
		OnDie_t3469385283 * L_4 = ((Player_t3266647312_StaticFields*)il2cpp_codegen_static_fields_for(Player_t3266647312_il2cpp_TypeInfo_var))->get_U3CU3Ef__amU24cache0_24();
		Delegate_t1188392813 * L_5 = Delegate_Combine_m1859655160(NULL /*static, unused*/, G_B2_0, L_4, /*hidden argument*/NULL);
		((Entity_t3391956725 *)G_B2_1)->set__onDie_19(((OnDie_t3469385283 *)CastclassSealed((RuntimeObject*)L_5, OnDie_t3469385283_il2cpp_TypeInfo_var)));
		return;
	}
}
// System.Void Player::Update()
extern "C" IL2CPP_METHOD_ATTR void Player_Update_m2111558832 (Player_t3266647312 * __this, const RuntimeMethod* method)
{
	{
		Player_DoMovement_m2376241743(__this, /*hidden argument*/NULL);
		Player_DoAttack_m2661824046(__this, /*hidden argument*/NULL);
		Entity_Update_m1477389504(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Player::DoMovement()
extern "C" IL2CPP_METHOD_ATTR void Player_DoMovement_m2376241743 (Player_t3266647312 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Player_DoMovement_m2376241743_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = Player_get_InputEnabled_m354816550(__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_00b0;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_t2156229523_il2cpp_TypeInfo_var);
		Vector2_t2156229523  L_1 = Vector2_get_zero_m540426400(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->set__movement_22(L_1);
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1431474628_il2cpp_TypeInfo_var);
		bool L_2 = Input_GetKey_m3736388334(NULL /*static, unused*/, ((int32_t)119), /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0039;
		}
	}
	{
		Vector2_t2156229523 * L_3 = __this->get_address_of__movement_22();
		L_3->set_y_1((1.0f));
		((Entity_t3391956725 *)__this)->set__direction_16(0);
	}

IL_0039:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1431474628_il2cpp_TypeInfo_var);
		bool L_4 = Input_GetKey_m3736388334(NULL /*static, unused*/, ((int32_t)115), /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_005c;
		}
	}
	{
		Vector2_t2156229523 * L_5 = __this->get_address_of__movement_22();
		L_5->set_y_1((-1.0f));
		((Entity_t3391956725 *)__this)->set__direction_16(1);
	}

IL_005c:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1431474628_il2cpp_TypeInfo_var);
		bool L_6 = Input_GetKey_m3736388334(NULL /*static, unused*/, ((int32_t)97), /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_0086;
		}
	}
	{
		Vector2_t2156229523 * L_7 = __this->get_address_of__movement_22();
		L_7->set_x_0((-1.0f));
		((Entity_t3391956725 *)__this)->set__flipped_13((bool)0);
		((Entity_t3391956725 *)__this)->set__direction_16(2);
	}

IL_0086:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1431474628_il2cpp_TypeInfo_var);
		bool L_8 = Input_GetKey_m3736388334(NULL /*static, unused*/, ((int32_t)100), /*hidden argument*/NULL);
		if (!L_8)
		{
			goto IL_00b0;
		}
	}
	{
		Vector2_t2156229523 * L_9 = __this->get_address_of__movement_22();
		L_9->set_x_0((1.0f));
		((Entity_t3391956725 *)__this)->set__flipped_13((bool)1);
		((Entity_t3391956725 *)__this)->set__direction_16(3);
	}

IL_00b0:
	{
		Vector2_t2156229523 * L_10 = __this->get_address_of__movement_22();
		Vector2_Normalize_m1906922873(L_10, /*hidden argument*/NULL);
		Vector2_t2156229523 * L_11 = __this->get_address_of__movement_22();
		float L_12 = Vector2_get_magnitude_m2752892833(L_11, /*hidden argument*/NULL);
		if ((!(((float)L_12) > ((float)(0.0f)))))
		{
			goto IL_00dc;
		}
	}
	{
		((Entity_t3391956725 *)__this)->set__entityState_7(1);
		goto IL_00e3;
	}

IL_00dc:
	{
		((Entity_t3391956725 *)__this)->set__entityState_7(0);
	}

IL_00e3:
	{
		Rigidbody2D_t939494601 * L_13 = __this->get__rigidbody2D_20();
		Vector2_t2156229523  L_14 = __this->get__movement_22();
		float L_15 = __this->get__speed_21();
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_t2156229523_il2cpp_TypeInfo_var);
		Vector2_t2156229523  L_16 = Vector2_op_Multiply_m2347887432(NULL /*static, unused*/, L_14, L_15, /*hidden argument*/NULL);
		float L_17 = Time_get_deltaTime_m372706562(NULL /*static, unused*/, /*hidden argument*/NULL);
		Vector2_t2156229523  L_18 = Vector2_op_Multiply_m2347887432(NULL /*static, unused*/, L_16, L_17, /*hidden argument*/NULL);
		Rigidbody2D_set_velocity_m2898400508(L_13, L_18, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Player::DoAttack()
extern "C" IL2CPP_METHOD_ATTR void Player_DoAttack_m2661824046 (Player_t3266647312 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Player_DoAttack_m2661824046_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = Player_get_InputEnabled_m354816550(__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_001d;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1431474628_il2cpp_TypeInfo_var);
		bool L_1 = Input_GetKey_m3736388334(NULL /*static, unused*/, ((int32_t)32), /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_001d;
		}
	}
	{
		Entity_DoWeaponAttack_m2033153511(__this, /*hidden argument*/NULL);
	}

IL_001d:
	{
		return;
	}
}
// System.Void Player::<Start>m__0()
extern "C" IL2CPP_METHOD_ATTR void Player_U3CStartU3Em__0_m1765453766 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Player_U3CStartU3Em__0_m1765453766_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		DeadScreen_t3234016418 * L_0 = DeadScreen_get_Instance_m1284687975(NULL /*static, unused*/, /*hidden argument*/NULL);
		DeadScreen_Show_m3338567005(L_0, _stringLiteral496717860, /*hidden argument*/NULL);
		LevelLoader_t3964987435 * L_1 = LevelLoader_get_Instance_m1614870452(NULL /*static, unused*/, /*hidden argument*/NULL);
		LevelLoader_Reset_m1137860544(L_1, /*hidden argument*/NULL);
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
// System.Void PlayerHealthBar::.ctor()
extern "C" IL2CPP_METHOD_ATTR void PlayerHealthBar__ctor_m454323814 (PlayerHealthBar_t2127847235 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void PlayerHealthBar::Update()
extern "C" IL2CPP_METHOD_ATTR void PlayerHealthBar_Update_m1601163985 (PlayerHealthBar_t2127847235 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PlayerHealthBar_Update_m1601163985_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Player_t3266647312 * L_0 = __this->get__player_3();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Equality_m1810815630(NULL /*static, unused*/, L_0, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0021;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		Player_t3266647312 * L_2 = Object_FindObjectOfType_TisPlayer_t3266647312_m389548692(NULL /*static, unused*/, /*hidden argument*/Object_FindObjectOfType_TisPlayer_t3266647312_m389548692_RuntimeMethod_var);
		__this->set__player_3(L_2);
		goto IL_0037;
	}

IL_0021:
	{
		Image_t2670269651 * L_3 = __this->get__image_2();
		Player_t3266647312 * L_4 = __this->get__player_3();
		float L_5 = Player_get_HealthPerc_m578431532(L_4, /*hidden argument*/NULL);
		Image_set_fillAmount_m3737925590(L_3, L_5, /*hidden argument*/NULL);
	}

IL_0037:
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
// System.Void PrefabResource::.ctor()
extern "C" IL2CPP_METHOD_ATTR void PrefabResource__ctor_m299927963 (PrefabResource_t3713134029 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// PrefabResource PrefabResource::get_Instance()
extern "C" IL2CPP_METHOD_ATTR PrefabResource_t3713134029 * PrefabResource_get_Instance_m593630871 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PrefabResource_get_Instance_m593630871_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		PrefabResource_t3713134029 * L_0 = Object_FindObjectOfType_TisPrefabResource_t3713134029_m3340801862(NULL /*static, unused*/, /*hidden argument*/Object_FindObjectOfType_TisPrefabResource_t3713134029_m3340801862_RuntimeMethod_var);
		return L_0;
	}
}
// System.Void PrefabResource::Start()
extern "C" IL2CPP_METHOD_ATTR void PrefabResource_Start_m2026177683 (PrefabResource_t3713134029 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PrefabResource_Start_m2026177683_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		GameObject_t1113636619 * L_0 = Component_get_gameObject_m442555142(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		Object_DontDestroyOnLoad_m166252750(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
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
// System.Void ScreenShake::.ctor()
extern "C" IL2CPP_METHOD_ATTR void ScreenShake__ctor_m1157418858 (ScreenShake_t2214968455 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void ScreenShake::Shake(System.Single)
extern "C" IL2CPP_METHOD_ATTR void ScreenShake_Shake_m3583580630 (ScreenShake_t2214968455 * __this, float ___strength0, const RuntimeMethod* method)
{
	{
		float L_0 = ___strength0;
		RuntimeObject* L_1 = ScreenShake_DoShake_m717519948(__this, L_0, /*hidden argument*/NULL);
		MonoBehaviour_StartCoroutine_m3411253000(__this, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Collections.IEnumerator ScreenShake::DoShake(System.Single)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* ScreenShake_DoShake_m717519948 (ScreenShake_t2214968455 * __this, float ___strength0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ScreenShake_DoShake_m717519948_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	U3CDoShakeU3Ec__Iterator0_t3406541319 * V_0 = NULL;
	{
		U3CDoShakeU3Ec__Iterator0_t3406541319 * L_0 = (U3CDoShakeU3Ec__Iterator0_t3406541319 *)il2cpp_codegen_object_new(U3CDoShakeU3Ec__Iterator0_t3406541319_il2cpp_TypeInfo_var);
		U3CDoShakeU3Ec__Iterator0__ctor_m2901161340(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CDoShakeU3Ec__Iterator0_t3406541319 * L_1 = V_0;
		float L_2 = ___strength0;
		L_1->set_strength_2(L_2);
		U3CDoShakeU3Ec__Iterator0_t3406541319 * L_3 = V_0;
		L_3->set_U24this_3(__this);
		U3CDoShakeU3Ec__Iterator0_t3406541319 * L_4 = V_0;
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
// System.Void ScreenShake/<DoShake>c__Iterator0::.ctor()
extern "C" IL2CPP_METHOD_ATTR void U3CDoShakeU3Ec__Iterator0__ctor_m2901161340 (U3CDoShakeU3Ec__Iterator0_t3406541319 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean ScreenShake/<DoShake>c__Iterator0::MoveNext()
extern "C" IL2CPP_METHOD_ATTR bool U3CDoShakeU3Ec__Iterator0_MoveNext_m3972262521 (U3CDoShakeU3Ec__Iterator0_t3406541319 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CDoShakeU3Ec__Iterator0_MoveNext_m3972262521_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_U24PC_6();
		V_0 = L_0;
		__this->set_U24PC_6((-1));
		uint32_t L_1 = V_0;
		switch (L_1)
		{
			case 0:
			{
				goto IL_0021;
			}
			case 1:
			{
				goto IL_00bc;
			}
		}
	}
	{
		goto IL_00f4;
	}

IL_0021:
	{
		ScreenShake_t2214968455 * L_2 = __this->get_U24this_3();
		Transform_t3600365921 * L_3 = Component_get_transform_m3162698980(L_2, /*hidden argument*/NULL);
		Vector3_t3722313464  L_4 = Transform_get_position_m36019626(L_3, /*hidden argument*/NULL);
		__this->set_U3CoriginalPosU3E__0_0(L_4);
		__this->set_U3CiU3E__1_1(0);
		goto IL_00ca;
	}

IL_0043:
	{
		ScreenShake_t2214968455 * L_5 = __this->get_U24this_3();
		Transform_t3600365921 * L_6 = Component_get_transform_m3162698980(L_5, /*hidden argument*/NULL);
		Vector3_t3722313464  L_7 = __this->get_U3CoriginalPosU3E__0_0();
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t3722313464_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_8 = Vector3_get_one_m1629952498(NULL /*static, unused*/, /*hidden argument*/NULL);
		float L_9 = __this->get_strength_2();
		Vector3_t3722313464  L_10 = Vector3_op_Multiply_m3376773913(NULL /*static, unused*/, L_8, L_9, /*hidden argument*/NULL);
		Vector3_t3722313464  L_11 = Vector3_op_Multiply_m3376773913(NULL /*static, unused*/, L_10, (2.0f), /*hidden argument*/NULL);
		Vector3_t3722313464  L_12 = Vector3_get_one_m1629952498(NULL /*static, unused*/, /*hidden argument*/NULL);
		float L_13 = __this->get_strength_2();
		Vector3_t3722313464  L_14 = Vector3_op_Multiply_m3376773913(NULL /*static, unused*/, L_12, L_13, /*hidden argument*/NULL);
		float L_15 = Random_get_value_m3115885645(NULL /*static, unused*/, /*hidden argument*/NULL);
		Vector3_t3722313464  L_16 = Vector3_op_Multiply_m3376773913(NULL /*static, unused*/, L_14, L_15, /*hidden argument*/NULL);
		Vector3_t3722313464  L_17 = Vector3_op_Subtraction_m3073674971(NULL /*static, unused*/, L_11, L_16, /*hidden argument*/NULL);
		Vector3_t3722313464  L_18 = Vector3_op_Multiply_m3376773913(NULL /*static, unused*/, L_17, (0.1f), /*hidden argument*/NULL);
		Vector3_t3722313464  L_19 = Vector3_op_Addition_m779775034(NULL /*static, unused*/, L_7, L_18, /*hidden argument*/NULL);
		Transform_set_position_m3387557959(L_6, L_19, /*hidden argument*/NULL);
		__this->set_U24current_4(NULL);
		bool L_20 = __this->get_U24disposing_5();
		if (L_20)
		{
			goto IL_00b7;
		}
	}
	{
		__this->set_U24PC_6(1);
	}

IL_00b7:
	{
		goto IL_00f6;
	}

IL_00bc:
	{
		int32_t L_21 = __this->get_U3CiU3E__1_1();
		__this->set_U3CiU3E__1_1(((int32_t)il2cpp_codegen_add((int32_t)L_21, (int32_t)1)));
	}

IL_00ca:
	{
		int32_t L_22 = __this->get_U3CiU3E__1_1();
		if ((((int32_t)L_22) < ((int32_t)((int32_t)15))))
		{
			goto IL_0043;
		}
	}
	{
		ScreenShake_t2214968455 * L_23 = __this->get_U24this_3();
		Transform_t3600365921 * L_24 = Component_get_transform_m3162698980(L_23, /*hidden argument*/NULL);
		Vector3_t3722313464  L_25 = __this->get_U3CoriginalPosU3E__0_0();
		Transform_set_position_m3387557959(L_24, L_25, /*hidden argument*/NULL);
		__this->set_U24PC_6((-1));
	}

IL_00f4:
	{
		return (bool)0;
	}

IL_00f6:
	{
		return (bool)1;
	}
}
// System.Object ScreenShake/<DoShake>c__Iterator0::System.Collections.Generic.IEnumerator<object>.get_Current()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * U3CDoShakeU3Ec__Iterator0_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m1286586239 (U3CDoShakeU3Ec__Iterator0_t3406541319 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U24current_4();
		return L_0;
	}
}
// System.Object ScreenShake/<DoShake>c__Iterator0::System.Collections.IEnumerator.get_Current()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * U3CDoShakeU3Ec__Iterator0_System_Collections_IEnumerator_get_Current_m719563356 (U3CDoShakeU3Ec__Iterator0_t3406541319 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U24current_4();
		return L_0;
	}
}
// System.Void ScreenShake/<DoShake>c__Iterator0::Dispose()
extern "C" IL2CPP_METHOD_ATTR void U3CDoShakeU3Ec__Iterator0_Dispose_m3728895646 (U3CDoShakeU3Ec__Iterator0_t3406541319 * __this, const RuntimeMethod* method)
{
	{
		__this->set_U24disposing_5((bool)1);
		__this->set_U24PC_6((-1));
		return;
	}
}
// System.Void ScreenShake/<DoShake>c__Iterator0::Reset()
extern "C" IL2CPP_METHOD_ATTR void U3CDoShakeU3Ec__Iterator0_Reset_m1358545620 (U3CDoShakeU3Ec__Iterator0_t3406541319 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CDoShakeU3Ec__Iterator0_Reset_m1358545620_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NotSupportedException_t1314879016 * L_0 = (NotSupportedException_t1314879016 *)il2cpp_codegen_object_new(NotSupportedException_t1314879016_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m2730133172(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0,U3CDoShakeU3Ec__Iterator0_Reset_m1358545620_RuntimeMethod_var);
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
// System.Void SkellyAI::.ctor()
extern "C" IL2CPP_METHOD_ATTR void SkellyAI__ctor_m641837583 (SkellyAI_t2611779661 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void SkellyAI::Start()
extern "C" IL2CPP_METHOD_ATTR void SkellyAI_Start_m711450739 (SkellyAI_t2611779661 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SkellyAI_Start_m711450739_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		EnemyNodeComparer_t2029075025 * L_0 = (EnemyNodeComparer_t2029075025 *)il2cpp_codegen_object_new(EnemyNodeComparer_t2029075025_il2cpp_TypeInfo_var);
		EnemyNodeComparer__ctor_m1176330128(L_0, __this, /*hidden argument*/NULL);
		__this->set__enemyNodeComparer_11(L_0);
		List_1_t2585711361 * L_1 = ((SkellyAI_t2611779661_StaticFields*)il2cpp_codegen_static_fields_for(SkellyAI_t2611779661_il2cpp_TypeInfo_var))->get__enemyNodes_9();
		if (L_1)
		{
			goto IL_0034;
		}
	}
	{
		List_1_t2585711361 * L_2 = (List_1_t2585711361 *)il2cpp_codegen_object_new(List_1_t2585711361_il2cpp_TypeInfo_var);
		List_1__ctor_m1424466557(L_2, /*hidden argument*/List_1__ctor_m1424466557_RuntimeMethod_var);
		((SkellyAI_t2611779661_StaticFields*)il2cpp_codegen_static_fields_for(SkellyAI_t2611779661_il2cpp_TypeInfo_var))->set__enemyNodes_9(L_2);
		List_1_t2585711361 * L_3 = ((SkellyAI_t2611779661_StaticFields*)il2cpp_codegen_static_fields_for(SkellyAI_t2611779661_il2cpp_TypeInfo_var))->get__enemyNodes_9();
		GameObjectU5BU5D_t3328599146* L_4 = GameObject_FindGameObjectsWithTag_m2585173894(NULL /*static, unused*/, _stringLiteral2028599422, /*hidden argument*/NULL);
		List_1_AddRange_m2410301057(L_3, (RuntimeObject*)(RuntimeObject*)L_4, /*hidden argument*/List_1_AddRange_m2410301057_RuntimeMethod_var);
	}

IL_0034:
	{
		List_1_t2585711361 * L_5 = (List_1_t2585711361 *)il2cpp_codegen_object_new(List_1_t2585711361_il2cpp_TypeInfo_var);
		List_1__ctor_m1424466557(L_5, /*hidden argument*/List_1__ctor_m1424466557_RuntimeMethod_var);
		__this->set__nodeHistory_10(L_5);
		return;
	}
}
// System.Void SkellyAI::Update()
extern "C" IL2CPP_METHOD_ATTR void SkellyAI_Update_m1433677785 (SkellyAI_t2611779661 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SkellyAI_Update_m1433677785_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		Player_t3266647312 * L_0 = __this->get__player_2();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Equality_m1810815630(NULL /*static, unused*/, L_0, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0021;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		Player_t3266647312 * L_2 = Object_FindObjectOfType_TisPlayer_t3266647312_m389548692(NULL /*static, unused*/, /*hidden argument*/Object_FindObjectOfType_TisPlayer_t3266647312_m389548692_RuntimeMethod_var);
		__this->set__player_2(L_2);
		goto IL_0146;
	}

IL_0021:
	{
		Transform_t3600365921 * L_3 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		Vector3_t3722313464  L_4 = Transform_get_position_m36019626(L_3, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_t2156229523_il2cpp_TypeInfo_var);
		Vector2_t2156229523  L_5 = Vector2_op_Implicit_m4260192859(NULL /*static, unused*/, L_4, /*hidden argument*/NULL);
		Player_t3266647312 * L_6 = __this->get__player_2();
		Transform_t3600365921 * L_7 = Component_get_transform_m3162698980(L_6, /*hidden argument*/NULL);
		Vector3_t3722313464  L_8 = Transform_get_position_m36019626(L_7, /*hidden argument*/NULL);
		Vector2_t2156229523  L_9 = Vector2_op_Implicit_m4260192859(NULL /*static, unused*/, L_8, /*hidden argument*/NULL);
		float L_10 = Vector2_Distance_m3048868881(NULL /*static, unused*/, L_5, L_9, /*hidden argument*/NULL);
		V_0 = L_10;
		bool L_11 = __this->get__active_3();
		if (!L_11)
		{
			goto IL_0069;
		}
	}
	{
		float L_12 = V_0;
		float L_13 = __this->get__aggroRange_5();
		if ((!(((float)L_12) >= ((float)L_13))))
		{
			goto IL_0069;
		}
	}
	{
		SkellyAI_PickNextNode_m1968847928(__this, /*hidden argument*/NULL);
	}

IL_0069:
	{
		float L_14 = V_0;
		float L_15 = __this->get__aggroRange_5();
		__this->set__active_3((bool)((((float)L_14) < ((float)L_15))? 1 : 0));
		bool L_16 = __this->get__active_3();
		if (!L_16)
		{
			goto IL_00ce;
		}
	}
	{
		Transform_t3600365921 * L_17 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		Transform_t3600365921 * L_18 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		Vector3_t3722313464  L_19 = Transform_get_position_m36019626(L_18, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_t2156229523_il2cpp_TypeInfo_var);
		Vector2_t2156229523  L_20 = Vector2_op_Implicit_m4260192859(NULL /*static, unused*/, L_19, /*hidden argument*/NULL);
		Player_t3266647312 * L_21 = __this->get__player_2();
		Transform_t3600365921 * L_22 = Component_get_transform_m3162698980(L_21, /*hidden argument*/NULL);
		Vector3_t3722313464  L_23 = Transform_get_position_m36019626(L_22, /*hidden argument*/NULL);
		Vector2_t2156229523  L_24 = Vector2_op_Implicit_m4260192859(NULL /*static, unused*/, L_23, /*hidden argument*/NULL);
		float L_25 = __this->get__speed_4();
		float L_26 = Time_get_deltaTime_m372706562(NULL /*static, unused*/, /*hidden argument*/NULL);
		Vector2_t2156229523  L_27 = Vector2_MoveTowards_m456668783(NULL /*static, unused*/, L_20, L_24, ((float)il2cpp_codegen_multiply((float)L_25, (float)L_26)), /*hidden argument*/NULL);
		Vector3_t3722313464  L_28 = Vector2_op_Implicit_m1860157806(NULL /*static, unused*/, L_27, /*hidden argument*/NULL);
		Transform_set_position_m3387557959(L_17, L_28, /*hidden argument*/NULL);
		goto IL_0146;
	}

IL_00ce:
	{
		GameObject_t1113636619 * L_29 = __this->get__targetNode_12();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_30 = Object_op_Implicit_m3574996620(NULL /*static, unused*/, L_29, /*hidden argument*/NULL);
		if (!L_30)
		{
			goto IL_0140;
		}
	}
	{
		Transform_t3600365921 * L_31 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		Transform_t3600365921 * L_32 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		Vector3_t3722313464  L_33 = Transform_get_position_m36019626(L_32, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_t2156229523_il2cpp_TypeInfo_var);
		Vector2_t2156229523  L_34 = Vector2_op_Implicit_m4260192859(NULL /*static, unused*/, L_33, /*hidden argument*/NULL);
		GameObject_t1113636619 * L_35 = __this->get__targetNode_12();
		Transform_t3600365921 * L_36 = GameObject_get_transform_m1369836730(L_35, /*hidden argument*/NULL);
		Vector3_t3722313464  L_37 = Transform_get_position_m36019626(L_36, /*hidden argument*/NULL);
		Vector2_t2156229523  L_38 = Vector2_op_Implicit_m4260192859(NULL /*static, unused*/, L_37, /*hidden argument*/NULL);
		float L_39 = __this->get__speed_4();
		float L_40 = Time_get_deltaTime_m372706562(NULL /*static, unused*/, /*hidden argument*/NULL);
		Vector2_t2156229523  L_41 = Vector2_MoveTowards_m456668783(NULL /*static, unused*/, L_34, L_38, ((float)il2cpp_codegen_multiply((float)L_39, (float)L_40)), /*hidden argument*/NULL);
		Vector3_t3722313464  L_42 = Vector2_op_Implicit_m1860157806(NULL /*static, unused*/, L_41, /*hidden argument*/NULL);
		Transform_set_position_m3387557959(L_31, L_42, /*hidden argument*/NULL);
		GameObject_t1113636619 * L_43 = __this->get__targetNode_12();
		bool L_44 = SkellyAI_At_m3553782217(__this, L_43, /*hidden argument*/NULL);
		if (!L_44)
		{
			goto IL_013b;
		}
	}
	{
		SkellyAI_PickNextNode_m1968847928(__this, /*hidden argument*/NULL);
	}

IL_013b:
	{
		goto IL_0146;
	}

IL_0140:
	{
		SkellyAI_PickNextNode_m1968847928(__this, /*hidden argument*/NULL);
	}

IL_0146:
	{
		float L_45 = __this->get__currentAttackCooldown_8();
		float L_46 = Time_get_deltaTime_m372706562(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->set__currentAttackCooldown_8(((float)il2cpp_codegen_subtract((float)L_45, (float)L_46)));
		return;
	}
}
// System.Boolean SkellyAI::At(UnityEngine.GameObject)
extern "C" IL2CPP_METHOD_ATTR bool SkellyAI_At_m3553782217 (SkellyAI_t2611779661 * __this, GameObject_t1113636619 * ___node0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SkellyAI_At_m3553782217_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		GameObject_t1113636619 * L_0 = ___node0;
		Transform_t3600365921 * L_1 = GameObject_get_transform_m1369836730(L_0, /*hidden argument*/NULL);
		Vector3_t3722313464  L_2 = Transform_get_position_m36019626(L_1, /*hidden argument*/NULL);
		Transform_t3600365921 * L_3 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		Vector3_t3722313464  L_4 = Transform_get_position_m36019626(L_3, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t3722313464_il2cpp_TypeInfo_var);
		float L_5 = Vector3_Distance_m886789632(NULL /*static, unused*/, L_2, L_4, /*hidden argument*/NULL);
		V_0 = L_5;
		float L_6 = V_0;
		return (bool)((((float)L_6) < ((float)(0.1f)))? 1 : 0);
	}
}
// System.Void SkellyAI::PickNextNode()
extern "C" IL2CPP_METHOD_ATTR void SkellyAI_PickNextNode_m1968847928 (SkellyAI_t2611779661 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SkellyAI_PickNextNode_m1968847928_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	GameObject_t1113636619 * V_0 = NULL;
	Enumerator_t179987942  V_1;
	memset(&V_1, 0, sizeof(V_1));
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		List_1_t2585711361 * L_0 = ((SkellyAI_t2611779661_StaticFields*)il2cpp_codegen_static_fields_for(SkellyAI_t2611779661_il2cpp_TypeInfo_var))->get__enemyNodes_9();
		EnemyNodeComparer_t2029075025 * L_1 = __this->get__enemyNodeComparer_11();
		List_1_Sort_m4152420986(L_0, L_1, /*hidden argument*/List_1_Sort_m4152420986_RuntimeMethod_var);
		List_1_t2585711361 * L_2 = __this->get__nodeHistory_10();
		int32_t L_3 = List_1_get_Count_m2812834599(L_2, /*hidden argument*/List_1_get_Count_m2812834599_RuntimeMethod_var);
		if ((((int32_t)L_3) < ((int32_t)2)))
		{
			goto IL_002c;
		}
	}
	{
		List_1_t2585711361 * L_4 = __this->get__nodeHistory_10();
		List_1_Clear_m2500309205(L_4, /*hidden argument*/List_1_Clear_m2500309205_RuntimeMethod_var);
	}

IL_002c:
	{
		List_1_t2585711361 * L_5 = ((SkellyAI_t2611779661_StaticFields*)il2cpp_codegen_static_fields_for(SkellyAI_t2611779661_il2cpp_TypeInfo_var))->get__enemyNodes_9();
		Enumerator_t179987942  L_6 = List_1_GetEnumerator_m1750140655(L_5, /*hidden argument*/List_1_GetEnumerator_m1750140655_RuntimeMethod_var);
		V_1 = L_6;
	}

IL_0037:
	try
	{ // begin try (depth: 1)
		{
			goto IL_006d;
		}

IL_003c:
		{
			GameObject_t1113636619 * L_7 = Enumerator_get_Current_m4179928398((&V_1), /*hidden argument*/Enumerator_get_Current_m4179928398_RuntimeMethod_var);
			V_0 = L_7;
			List_1_t2585711361 * L_8 = __this->get__nodeHistory_10();
			GameObject_t1113636619 * L_9 = V_0;
			bool L_10 = List_1_Contains_m4222374550(L_8, L_9, /*hidden argument*/List_1_Contains_m4222374550_RuntimeMethod_var);
			if (L_10)
			{
				goto IL_006d;
			}
		}

IL_0055:
		{
			GameObject_t1113636619 * L_11 = V_0;
			__this->set__targetNode_12(L_11);
			List_1_t2585711361 * L_12 = __this->get__nodeHistory_10();
			GameObject_t1113636619 * L_13 = V_0;
			List_1_Add_m2765963565(L_12, L_13, /*hidden argument*/List_1_Add_m2765963565_RuntimeMethod_var);
			IL2CPP_LEAVE(0x97, FINALLY_007e);
		}

IL_006d:
		{
			bool L_14 = Enumerator_MoveNext_m4286844348((&V_1), /*hidden argument*/Enumerator_MoveNext_m4286844348_RuntimeMethod_var);
			if (L_14)
			{
				goto IL_003c;
			}
		}

IL_0079:
		{
			IL2CPP_LEAVE(0x8C, FINALLY_007e);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_007e;
	}

FINALLY_007e:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m1341201278((&V_1), /*hidden argument*/Enumerator_Dispose_m1341201278_RuntimeMethod_var);
		IL2CPP_END_FINALLY(126)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(126)
	{
		IL2CPP_JUMP_TBL(0x97, IL_0097)
		IL2CPP_JUMP_TBL(0x8C, IL_008c)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_008c:
	{
		List_1_t2585711361 * L_15 = __this->get__nodeHistory_10();
		List_1_Clear_m2500309205(L_15, /*hidden argument*/List_1_Clear_m2500309205_RuntimeMethod_var);
	}

IL_0097:
	{
		return;
	}
}
// System.Void SkellyAI::OnCollisionStay2D(UnityEngine.Collision2D)
extern "C" IL2CPP_METHOD_ATTR void SkellyAI_OnCollisionStay2D_m1787522204 (SkellyAI_t2611779661 * __this, Collision2D_t2842956331 * ___collision0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SkellyAI_OnCollisionStay2D_m1787522204_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		float L_0 = __this->get__currentAttackCooldown_8();
		if ((!(((float)L_0) <= ((float)(0.0f)))))
		{
			goto IL_0064;
		}
	}
	{
		Player_t3266647312 * L_1 = __this->get__player_2();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_2 = Object_op_Inequality_m4071470834(NULL /*static, unused*/, L_1, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0064;
		}
	}
	{
		Collision2D_t2842956331 * L_3 = ___collision0;
		GameObject_t1113636619 * L_4 = Collision2D_get_gameObject_m1443495885(L_3, /*hidden argument*/NULL);
		Player_t3266647312 * L_5 = __this->get__player_2();
		GameObject_t1113636619 * L_6 = Component_get_gameObject_m442555142(L_5, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_7 = Object_op_Equality_m1810815630(NULL /*static, unused*/, L_4, L_6, /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_0064;
		}
	}
	{
		Player_t3266647312 * L_8 = __this->get__player_2();
		float L_9 = __this->get__damage_6();
		Transform_t3600365921 * L_10 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		Vector3_t3722313464  L_11 = Transform_get_position_m36019626(L_10, /*hidden argument*/NULL);
		Entity_TakeDamage_m239986278(L_8, L_9, L_11, /*hidden argument*/NULL);
		float L_12 = __this->get__attackCooldown_7();
		__this->set__currentAttackCooldown_8(L_12);
	}

IL_0064:
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
// System.Void UpParticle::.ctor()
extern "C" IL2CPP_METHOD_ATTR void UpParticle__ctor_m1855462313 (UpParticle_t1684764610 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UpParticle::Start()
extern "C" IL2CPP_METHOD_ATTR void UpParticle_Start_m312703977 (UpParticle_t1684764610 * __this, const RuntimeMethod* method)
{
	{
		float L_0 = __this->get__speed_3();
		float L_1 = Random_get_value_m3115885645(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->set__speed_3(((float)il2cpp_codegen_add((float)L_0, (float)L_1)));
		return;
	}
}
// System.Void UpParticle::Update()
extern "C" IL2CPP_METHOD_ATTR void UpParticle_Update_m816190679 (UpParticle_t1684764610 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UpParticle_Update_m816190679_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		float L_0 = __this->get__life_2();
		float L_1 = Time_get_deltaTime_m372706562(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->set__life_2(((float)il2cpp_codegen_subtract((float)L_0, (float)L_1)));
		float L_2 = __this->get__life_2();
		if ((!(((float)L_2) < ((float)(0.0f)))))
		{
			goto IL_002d;
		}
	}
	{
		GameObject_t1113636619 * L_3 = Component_get_gameObject_m442555142(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		Object_Destroy_m565254235(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
	}

IL_002d:
	{
		Transform_t3600365921 * L_4 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		Transform_t3600365921 * L_5 = L_4;
		Vector3_t3722313464  L_6 = Transform_get_position_m36019626(L_5, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t3722313464_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_7 = Vector3_get_up_m3584168373(NULL /*static, unused*/, /*hidden argument*/NULL);
		float L_8 = __this->get__speed_3();
		Vector3_t3722313464  L_9 = Vector3_op_Multiply_m3376773913(NULL /*static, unused*/, L_7, L_8, /*hidden argument*/NULL);
		float L_10 = Time_get_deltaTime_m372706562(NULL /*static, unused*/, /*hidden argument*/NULL);
		Vector3_t3722313464  L_11 = Vector3_op_Multiply_m3376773913(NULL /*static, unused*/, L_9, L_10, /*hidden argument*/NULL);
		Vector3_t3722313464  L_12 = Vector3_op_Addition_m779775034(NULL /*static, unused*/, L_6, L_11, /*hidden argument*/NULL);
		Transform_set_position_m3387557959(L_5, L_12, /*hidden argument*/NULL);
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
// System.Void VoidAI::.ctor()
extern "C" IL2CPP_METHOD_ATTR void VoidAI__ctor_m1102862405 (VoidAI_t4181225430 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void VoidAI::JumpTo(UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR void VoidAI_JumpTo_m2241273342 (VoidAI_t4181225430 * __this, Vector3_t3722313464  ___position0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (VoidAI_JumpTo_m2241273342_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Vector3_t3722313464  L_0 = ___position0;
		__this->set__targetPosition_3(L_0);
		Transform_t3600365921 * L_1 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		Vector3_t3722313464  L_2 = Transform_get_position_m36019626(L_1, /*hidden argument*/NULL);
		Vector3_t3722313464  L_3 = __this->get__targetPosition_3();
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t3722313464_il2cpp_TypeInfo_var);
		float L_4 = Vector3_Distance_m886789632(NULL /*static, unused*/, L_2, L_3, /*hidden argument*/NULL);
		__this->set__distanceToTarget_4(L_4);
		RuntimeObject* L_5 = VoidAI_Jump_m4059975097(__this, /*hidden argument*/NULL);
		MonoBehaviour_StartCoroutine_m3411253000(__this, L_5, /*hidden argument*/NULL);
		return;
	}
}
// System.Collections.IEnumerator VoidAI::Jump()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* VoidAI_Jump_m4059975097 (VoidAI_t4181225430 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (VoidAI_Jump_m4059975097_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	U3CJumpU3Ec__Iterator0_t230413210 * V_0 = NULL;
	{
		U3CJumpU3Ec__Iterator0_t230413210 * L_0 = (U3CJumpU3Ec__Iterator0_t230413210 *)il2cpp_codegen_object_new(U3CJumpU3Ec__Iterator0_t230413210_il2cpp_TypeInfo_var);
		U3CJumpU3Ec__Iterator0__ctor_m4005889191(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CJumpU3Ec__Iterator0_t230413210 * L_1 = V_0;
		L_1->set_U24this_4(__this);
		U3CJumpU3Ec__Iterator0_t230413210 * L_2 = V_0;
		return L_2;
	}
}
// System.Void VoidAI::Activate()
extern "C" IL2CPP_METHOD_ATTR void VoidAI_Activate_m882747407 (VoidAI_t4181225430 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = VoidAI_DoAttacks_m3003784595(__this, /*hidden argument*/NULL);
		MonoBehaviour_StartCoroutine_m3411253000(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Collections.IEnumerator VoidAI::DoAttacks()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* VoidAI_DoAttacks_m3003784595 (VoidAI_t4181225430 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (VoidAI_DoAttacks_m3003784595_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	U3CDoAttacksU3Ec__Iterator1_t81260554 * V_0 = NULL;
	{
		U3CDoAttacksU3Ec__Iterator1_t81260554 * L_0 = (U3CDoAttacksU3Ec__Iterator1_t81260554 *)il2cpp_codegen_object_new(U3CDoAttacksU3Ec__Iterator1_t81260554_il2cpp_TypeInfo_var);
		U3CDoAttacksU3Ec__Iterator1__ctor_m3003744452(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CDoAttacksU3Ec__Iterator1_t81260554 * L_1 = V_0;
		L_1->set_U24this_1(__this);
		U3CDoAttacksU3Ec__Iterator1_t81260554 * L_2 = V_0;
		return L_2;
	}
}
// System.Void VoidAI::OnCollisionEnter2D(UnityEngine.Collision2D)
extern "C" IL2CPP_METHOD_ATTR void VoidAI_OnCollisionEnter2D_m2848975947 (VoidAI_t4181225430 * __this, Collision2D_t2842956331 * ___collision0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (VoidAI_OnCollisionEnter2D_m2848975947_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = __this->get__isAttacking_7();
		if (!L_0)
		{
			goto IL_0040;
		}
	}
	{
		Collision2D_t2842956331 * L_1 = ___collision0;
		GameObject_t1113636619 * L_2 = Collision2D_get_gameObject_m1443495885(L_1, /*hidden argument*/NULL);
		Player_t3266647312 * L_3 = GameObject_GetComponent_TisPlayer_t3266647312_m4068145281(L_2, /*hidden argument*/GameObject_GetComponent_TisPlayer_t3266647312_m4068145281_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_4 = Object_op_Implicit_m3574996620(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_0040;
		}
	}
	{
		Collision2D_t2842956331 * L_5 = ___collision0;
		GameObject_t1113636619 * L_6 = Collision2D_get_gameObject_m1443495885(L_5, /*hidden argument*/NULL);
		Player_t3266647312 * L_7 = GameObject_GetComponent_TisPlayer_t3266647312_m4068145281(L_6, /*hidden argument*/GameObject_GetComponent_TisPlayer_t3266647312_m4068145281_RuntimeMethod_var);
		Transform_t3600365921 * L_8 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		Vector3_t3722313464  L_9 = Transform_get_position_m36019626(L_8, /*hidden argument*/NULL);
		Entity_TakeDamage_m239986278(L_7, (2.0f), L_9, /*hidden argument*/NULL);
	}

IL_0040:
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
// System.Void VoidAI/<DoAttacks>c__Iterator1::.ctor()
extern "C" IL2CPP_METHOD_ATTR void U3CDoAttacksU3Ec__Iterator1__ctor_m3003744452 (U3CDoAttacksU3Ec__Iterator1_t81260554 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean VoidAI/<DoAttacks>c__Iterator1::MoveNext()
extern "C" IL2CPP_METHOD_ATTR bool U3CDoAttacksU3Ec__Iterator1_MoveNext_m3034661601 (U3CDoAttacksU3Ec__Iterator1_t81260554 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CDoAttacksU3Ec__Iterator1_MoveNext_m3034661601_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_U24PC_4();
		V_0 = L_0;
		__this->set_U24PC_4((-1));
		uint32_t L_1 = V_0;
		switch (L_1)
		{
			case 0:
			{
				goto IL_0029;
			}
			case 1:
			{
				goto IL_0052;
			}
			case 2:
			{
				goto IL_009b;
			}
			case 3:
			{
				goto IL_00dc;
			}
		}
	}
	{
		goto IL_0104;
	}

IL_0029:
	{
		goto IL_00e8;
	}

IL_002e:
	{
		WaitForSeconds_t1699091251 * L_2 = (WaitForSeconds_t1699091251 *)il2cpp_codegen_object_new(WaitForSeconds_t1699091251_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_m2199082655(L_2, (2.5f), /*hidden argument*/NULL);
		__this->set_U24current_2(L_2);
		bool L_3 = __this->get_U24disposing_3();
		if (L_3)
		{
			goto IL_004d;
		}
	}
	{
		__this->set_U24PC_4(1);
	}

IL_004d:
	{
		goto IL_0106;
	}

IL_0052:
	{
		VoidAI_t4181225430 * L_4 = __this->get_U24this_1();
		AudioSource_t3935305588 * L_5 = L_4->get__warnSource_5();
		AudioSource_Play_m48294159(L_5, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		Player_t3266647312 * L_6 = Object_FindObjectOfType_TisPlayer_t3266647312_m389548692(NULL /*static, unused*/, /*hidden argument*/Object_FindObjectOfType_TisPlayer_t3266647312_m389548692_RuntimeMethod_var);
		Transform_t3600365921 * L_7 = Component_get_transform_m3162698980(L_6, /*hidden argument*/NULL);
		Vector3_t3722313464  L_8 = Transform_get_position_m36019626(L_7, /*hidden argument*/NULL);
		__this->set_U3CposU3E__1_0(L_8);
		WaitForSeconds_t1699091251 * L_9 = (WaitForSeconds_t1699091251 *)il2cpp_codegen_object_new(WaitForSeconds_t1699091251_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_m2199082655(L_9, (0.65f), /*hidden argument*/NULL);
		__this->set_U24current_2(L_9);
		bool L_10 = __this->get_U24disposing_3();
		if (L_10)
		{
			goto IL_0096;
		}
	}
	{
		__this->set_U24PC_4(2);
	}

IL_0096:
	{
		goto IL_0106;
	}

IL_009b:
	{
		VoidAI_t4181225430 * L_11 = __this->get_U24this_1();
		L_11->set__isAttacking_7((bool)1);
		VoidAI_t4181225430 * L_12 = __this->get_U24this_1();
		Vector3_t3722313464  L_13 = __this->get_U3CposU3E__1_0();
		VoidAI_JumpTo_m2241273342(L_12, L_13, /*hidden argument*/NULL);
		WaitForSeconds_t1699091251 * L_14 = (WaitForSeconds_t1699091251 *)il2cpp_codegen_object_new(WaitForSeconds_t1699091251_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_m2199082655(L_14, (0.2f), /*hidden argument*/NULL);
		__this->set_U24current_2(L_14);
		bool L_15 = __this->get_U24disposing_3();
		if (L_15)
		{
			goto IL_00d7;
		}
	}
	{
		__this->set_U24PC_4(3);
	}

IL_00d7:
	{
		goto IL_0106;
	}

IL_00dc:
	{
		VoidAI_t4181225430 * L_16 = __this->get_U24this_1();
		L_16->set__isAttacking_7((bool)0);
	}

IL_00e8:
	{
		VoidAI_t4181225430 * L_17 = __this->get_U24this_1();
		GameObject_t1113636619 * L_18 = Component_get_gameObject_m442555142(L_17, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_19 = Object_op_Implicit_m3574996620(NULL /*static, unused*/, L_18, /*hidden argument*/NULL);
		if (L_19)
		{
			goto IL_002e;
		}
	}
	{
		__this->set_U24PC_4((-1));
	}

IL_0104:
	{
		return (bool)0;
	}

IL_0106:
	{
		return (bool)1;
	}
}
// System.Object VoidAI/<DoAttacks>c__Iterator1::System.Collections.Generic.IEnumerator<object>.get_Current()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * U3CDoAttacksU3Ec__Iterator1_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m1150380011 (U3CDoAttacksU3Ec__Iterator1_t81260554 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U24current_2();
		return L_0;
	}
}
// System.Object VoidAI/<DoAttacks>c__Iterator1::System.Collections.IEnumerator.get_Current()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * U3CDoAttacksU3Ec__Iterator1_System_Collections_IEnumerator_get_Current_m2881773758 (U3CDoAttacksU3Ec__Iterator1_t81260554 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U24current_2();
		return L_0;
	}
}
// System.Void VoidAI/<DoAttacks>c__Iterator1::Dispose()
extern "C" IL2CPP_METHOD_ATTR void U3CDoAttacksU3Ec__Iterator1_Dispose_m2403343527 (U3CDoAttacksU3Ec__Iterator1_t81260554 * __this, const RuntimeMethod* method)
{
	{
		__this->set_U24disposing_3((bool)1);
		__this->set_U24PC_4((-1));
		return;
	}
}
// System.Void VoidAI/<DoAttacks>c__Iterator1::Reset()
extern "C" IL2CPP_METHOD_ATTR void U3CDoAttacksU3Ec__Iterator1_Reset_m4226249969 (U3CDoAttacksU3Ec__Iterator1_t81260554 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CDoAttacksU3Ec__Iterator1_Reset_m4226249969_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NotSupportedException_t1314879016 * L_0 = (NotSupportedException_t1314879016 *)il2cpp_codegen_object_new(NotSupportedException_t1314879016_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m2730133172(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0,U3CDoAttacksU3Ec__Iterator1_Reset_m4226249969_RuntimeMethod_var);
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
// System.Void VoidAI/<Jump>c__Iterator0::.ctor()
extern "C" IL2CPP_METHOD_ATTR void U3CJumpU3Ec__Iterator0__ctor_m4005889191 (U3CJumpU3Ec__Iterator0_t230413210 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean VoidAI/<Jump>c__Iterator0::MoveNext()
extern "C" IL2CPP_METHOD_ATTR bool U3CJumpU3Ec__Iterator0_MoveNext_m1426929735 (U3CJumpU3Ec__Iterator0_t230413210 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CJumpU3Ec__Iterator0_MoveNext_m1426929735_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_U24PC_7();
		V_0 = L_0;
		__this->set_U24PC_7((-1));
		uint32_t L_1 = V_0;
		switch (L_1)
		{
			case 0:
			{
				goto IL_0021;
			}
			case 1:
			{
				goto IL_014a;
			}
		}
	}
	{
		goto IL_01aa;
	}

IL_0021:
	{
		VoidAI_t4181225430 * L_2 = __this->get_U24this_4();
		Transform_t3600365921 * L_3 = Component_get_transform_m3162698980(L_2, /*hidden argument*/NULL);
		Vector3_t3722313464  L_4 = Transform_get_position_m36019626(L_3, /*hidden argument*/NULL);
		VoidAI_t4181225430 * L_5 = __this->get_U24this_4();
		Vector3_t3722313464  L_6 = L_5->get__targetPosition_3();
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t3722313464_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_7 = Vector3_op_Subtraction_m3073674971(NULL /*static, unused*/, L_4, L_6, /*hidden argument*/NULL);
		__this->set_U3CdirU3E__0_0(L_7);
		Vector3_t3722313464 * L_8 = __this->get_address_of_U3CdirU3E__0_0();
		Vector3_Normalize_m914904454(L_8, /*hidden argument*/NULL);
	}

IL_0052:
	{
		VoidAI_t4181225430 * L_9 = __this->get_U24this_4();
		Transform_t3600365921 * L_10 = Component_get_transform_m3162698980(L_9, /*hidden argument*/NULL);
		Transform_t3600365921 * L_11 = L_10;
		Vector3_t3722313464  L_12 = Transform_get_position_m36019626(L_11, /*hidden argument*/NULL);
		Vector3_t3722313464  L_13 = __this->get_U3CdirU3E__0_0();
		VoidAI_t4181225430 * L_14 = __this->get_U24this_4();
		float L_15 = L_14->get__speed_2();
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t3722313464_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_16 = Vector3_op_Multiply_m3376773913(NULL /*static, unused*/, L_13, L_15, /*hidden argument*/NULL);
		float L_17 = Time_get_deltaTime_m372706562(NULL /*static, unused*/, /*hidden argument*/NULL);
		Vector3_t3722313464  L_18 = Vector3_op_Multiply_m3376773913(NULL /*static, unused*/, L_16, L_17, /*hidden argument*/NULL);
		Vector3_t3722313464  L_19 = Vector3_op_Subtraction_m3073674971(NULL /*static, unused*/, L_12, L_18, /*hidden argument*/NULL);
		Transform_set_position_m3387557959(L_11, L_19, /*hidden argument*/NULL);
		VoidAI_t4181225430 * L_20 = __this->get_U24this_4();
		Transform_t3600365921 * L_21 = Component_get_transform_m3162698980(L_20, /*hidden argument*/NULL);
		Vector3_t3722313464  L_22 = Transform_get_position_m36019626(L_21, /*hidden argument*/NULL);
		VoidAI_t4181225430 * L_23 = __this->get_U24this_4();
		Vector3_t3722313464  L_24 = L_23->get__targetPosition_3();
		float L_25 = Vector3_Distance_m886789632(NULL /*static, unused*/, L_22, L_24, /*hidden argument*/NULL);
		__this->set_U3CdistU3E__1_1(L_25);
		VoidAI_t4181225430 * L_26 = __this->get_U24this_4();
		float L_27 = L_26->get__distanceToTarget_4();
		__this->set_U3CmidDistU3E__1_2(((float)((float)L_27/(float)(2.0f))));
		Vector3_t3722313464  L_28 = Vector3_get_one_m1629952498(NULL /*static, unused*/, /*hidden argument*/NULL);
		float L_29 = __this->get_U3CmidDistU3E__1_2();
		float L_30 = __this->get_U3CdistU3E__1_1();
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t3464937446_il2cpp_TypeInfo_var);
		float L_31 = fabsf(((float)il2cpp_codegen_subtract((float)L_29, (float)L_30)));
		float L_32 = __this->get_U3CmidDistU3E__1_2();
		Vector3_t3722313464  L_33 = Vector3_op_Multiply_m3376773913(NULL /*static, unused*/, L_28, ((float)il2cpp_codegen_subtract((float)(1.0f), (float)((float)((float)L_31/(float)L_32)))), /*hidden argument*/NULL);
		__this->set_U3CscaleU3E__1_3(L_33);
		VoidAI_t4181225430 * L_34 = __this->get_U24this_4();
		Transform_t3600365921 * L_35 = Component_get_transform_m3162698980(L_34, /*hidden argument*/NULL);
		Vector3_t3722313464  L_36 = Vector3_get_one_m1629952498(NULL /*static, unused*/, /*hidden argument*/NULL);
		Vector3_t3722313464  L_37 = __this->get_U3CscaleU3E__1_3();
		Vector3_t3722313464  L_38 = Vector3_op_Addition_m779775034(NULL /*static, unused*/, L_36, L_37, /*hidden argument*/NULL);
		Transform_set_localScale_m3053443106(L_35, L_38, /*hidden argument*/NULL);
		float L_39 = __this->get_U3CdistU3E__1_1();
		float L_40 = fabsf(L_39);
		if ((((int32_t)((int32_t)L_40))))
		{
			goto IL_012f;
		}
	}
	{
		goto IL_014f;
	}

IL_012f:
	{
		__this->set_U24current_5(NULL);
		bool L_41 = __this->get_U24disposing_6();
		if (L_41)
		{
			goto IL_0145;
		}
	}
	{
		__this->set_U24PC_7(1);
	}

IL_0145:
	{
		goto IL_01ac;
	}

IL_014a:
	{
		goto IL_0052;
	}

IL_014f:
	{
		VoidAI_t4181225430 * L_42 = __this->get_U24this_4();
		Transform_t3600365921 * L_43 = Component_get_transform_m3162698980(L_42, /*hidden argument*/NULL);
		VoidAI_t4181225430 * L_44 = __this->get_U24this_4();
		Vector3_t3722313464  L_45 = L_44->get__targetPosition_3();
		Transform_set_position_m3387557959(L_43, L_45, /*hidden argument*/NULL);
		VoidAI_t4181225430 * L_46 = __this->get_U24this_4();
		Transform_t3600365921 * L_47 = Component_get_transform_m3162698980(L_46, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t3722313464_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_48 = Vector3_get_one_m1629952498(NULL /*static, unused*/, /*hidden argument*/NULL);
		Transform_set_localScale_m3053443106(L_47, L_48, /*hidden argument*/NULL);
		VoidAI_t4181225430 * L_49 = __this->get_U24this_4();
		AudioSource_t3935305588 * L_50 = L_49->get__boomSource_6();
		AudioSource_Play_m48294159(L_50, /*hidden argument*/NULL);
		Camera_t4157153871 * L_51 = Camera_get_main_m3643453163(NULL /*static, unused*/, /*hidden argument*/NULL);
		ScreenShake_t2214968455 * L_52 = Component_GetComponent_TisScreenShake_t2214968455_m1410286607(L_51, /*hidden argument*/Component_GetComponent_TisScreenShake_t2214968455_m1410286607_RuntimeMethod_var);
		ScreenShake_Shake_m3583580630(L_52, (0.5f), /*hidden argument*/NULL);
		__this->set_U24PC_7((-1));
	}

IL_01aa:
	{
		return (bool)0;
	}

IL_01ac:
	{
		return (bool)1;
	}
}
// System.Object VoidAI/<Jump>c__Iterator0::System.Collections.Generic.IEnumerator<object>.get_Current()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * U3CJumpU3Ec__Iterator0_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m3180509090 (U3CJumpU3Ec__Iterator0_t230413210 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U24current_5();
		return L_0;
	}
}
// System.Object VoidAI/<Jump>c__Iterator0::System.Collections.IEnumerator.get_Current()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * U3CJumpU3Ec__Iterator0_System_Collections_IEnumerator_get_Current_m1175340236 (U3CJumpU3Ec__Iterator0_t230413210 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U24current_5();
		return L_0;
	}
}
// System.Void VoidAI/<Jump>c__Iterator0::Dispose()
extern "C" IL2CPP_METHOD_ATTR void U3CJumpU3Ec__Iterator0_Dispose_m4151316923 (U3CJumpU3Ec__Iterator0_t230413210 * __this, const RuntimeMethod* method)
{
	{
		__this->set_U24disposing_6((bool)1);
		__this->set_U24PC_7((-1));
		return;
	}
}
// System.Void VoidAI/<Jump>c__Iterator0::Reset()
extern "C" IL2CPP_METHOD_ATTR void U3CJumpU3Ec__Iterator0_Reset_m1603441515 (U3CJumpU3Ec__Iterator0_t230413210 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CJumpU3Ec__Iterator0_Reset_m1603441515_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NotSupportedException_t1314879016 * L_0 = (NotSupportedException_t1314879016 *)il2cpp_codegen_object_new(NotSupportedException_t1314879016_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m2730133172(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0,U3CJumpU3Ec__Iterator0_Reset_m1603441515_RuntimeMethod_var);
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
// System.Void Weapon::.ctor()
extern "C" IL2CPP_METHOD_ATTR void Weapon__ctor_m3095181171 (Weapon_t4063826929 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Single Weapon::get_Damage()
extern "C" IL2CPP_METHOD_ATTR float Weapon_get_Damage_m2271951185 (Weapon_t4063826929 * __this, const RuntimeMethod* method)
{
	{
		float L_0 = __this->get__damage_4();
		return L_0;
	}
}
// System.Single Weapon::get_CooldownTime()
extern "C" IL2CPP_METHOD_ATTR float Weapon_get_CooldownTime_m1803901553 (Weapon_t4063826929 * __this, const RuntimeMethod* method)
{
	{
		float L_0 = __this->get__cooldownTime_5();
		return L_0;
	}
}
// Entity Weapon::get_Owner()
extern "C" IL2CPP_METHOD_ATTR Entity_t3391956725 * Weapon_get_Owner_m3235821573 (Weapon_t4063826929 * __this, const RuntimeMethod* method)
{
	{
		Entity_t3391956725 * L_0 = __this->get__owner_8();
		return L_0;
	}
}
// System.Void Weapon::DoAttack(UnityEngine.Transform)
extern "C" IL2CPP_METHOD_ATTR void Weapon_DoAttack_m3684433822 (Weapon_t4063826929 * __this, Transform_t3600365921 * ___attackPosition0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Weapon_DoAttack_m3684433822_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Transform_t3600365921 * L_0 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		Transform_t3600365921 * L_1 = ___attackPosition0;
		Vector3_t3722313464  L_2 = Transform_get_position_m36019626(L_1, /*hidden argument*/NULL);
		Transform_set_position_m3387557959(L_0, L_2, /*hidden argument*/NULL);
		Transform_t3600365921 * L_3 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		Transform_t3600365921 * L_4 = ___attackPosition0;
		Quaternion_t2301928331  L_5 = Transform_get_rotation_m3502953881(L_4, /*hidden argument*/NULL);
		Transform_set_rotation_m3524318132(L_3, L_5, /*hidden argument*/NULL);
		Transform_t3600365921 * L_6 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t3722313464_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_7 = Vector3_get_forward_m3100859705(NULL /*static, unused*/, /*hidden argument*/NULL);
		Vector3_t3722313464  L_8 = Vector3_op_Multiply_m3376773913(NULL /*static, unused*/, L_7, (45.0f), /*hidden argument*/NULL);
		Transform_Rotate_m720511863(L_6, L_8, /*hidden argument*/NULL);
		AudioSource_t3935305588 * L_9 = Component_GetComponent_TisAudioSource_t3935305588_m1977431131(__this, /*hidden argument*/Component_GetComponent_TisAudioSource_t3935305588_m1977431131_RuntimeMethod_var);
		AudioSource_Play_m48294159(L_9, /*hidden argument*/NULL);
		RuntimeObject* L_10 = Weapon_WaitAttackDuration_m2587918956(__this, /*hidden argument*/NULL);
		MonoBehaviour_StartCoroutine_m3411253000(__this, L_10, /*hidden argument*/NULL);
		return;
	}
}
// System.Collections.IEnumerator Weapon::WaitAttackDuration()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* Weapon_WaitAttackDuration_m2587918956 (Weapon_t4063826929 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Weapon_WaitAttackDuration_m2587918956_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	U3CWaitAttackDurationU3Ec__Iterator0_t664319700 * V_0 = NULL;
	{
		U3CWaitAttackDurationU3Ec__Iterator0_t664319700 * L_0 = (U3CWaitAttackDurationU3Ec__Iterator0_t664319700 *)il2cpp_codegen_object_new(U3CWaitAttackDurationU3Ec__Iterator0_t664319700_il2cpp_TypeInfo_var);
		U3CWaitAttackDurationU3Ec__Iterator0__ctor_m2235481495(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CWaitAttackDurationU3Ec__Iterator0_t664319700 * L_1 = V_0;
		L_1->set_U24this_3(__this);
		U3CWaitAttackDurationU3Ec__Iterator0_t664319700 * L_2 = V_0;
		return L_2;
	}
}
// System.Void Weapon::OnTriggerEnter2D(UnityEngine.Collider2D)
extern "C" IL2CPP_METHOD_ATTR void Weapon_OnTriggerEnter2D_m2489463344 (Weapon_t4063826929 * __this, Collider2D_t2806799626 * ___collision0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Weapon_OnTriggerEnter2D_m2489463344_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Entity_t3391956725 * V_0 = NULL;
	{
		Collider2D_t2806799626 * L_0 = ___collision0;
		Entity_t3391956725 * L_1 = Component_GetComponent_TisEntity_t3391956725_m1664670758(L_0, /*hidden argument*/Component_GetComponent_TisEntity_t3391956725_m1664670758_RuntimeMethod_var);
		V_0 = L_1;
		Entity_t3391956725 * L_2 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_3 = Object_op_Implicit_m3574996620(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_00d2;
		}
	}
	{
		Entity_t3391956725 * L_4 = __this->get__owner_8();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_5 = Object_op_Equality_m1810815630(NULL /*static, unused*/, L_4, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_0093;
		}
	}
	{
		Entity_t3391956725 * L_6 = V_0;
		__this->set__owner_8(L_6);
		Entity_t3391956725 * L_7 = V_0;
		Entity_AddWeapon_m1181459715(L_7, __this, /*hidden argument*/NULL);
		Transform_t3600365921 * L_8 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t3722313464_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_9 = Vector3_get_one_m1629952498(NULL /*static, unused*/, /*hidden argument*/NULL);
		Vector3_t3722313464  L_10 = Vector3_op_Multiply_m3376773913(NULL /*static, unused*/, L_9, (10000.0f), /*hidden argument*/NULL);
		Transform_set_position_m3387557959(L_8, L_10, /*hidden argument*/NULL);
		MessagePopup_t1375170899 * L_11 = MessagePopup_get_Instance_m3005294533(NULL /*static, unused*/, /*hidden argument*/NULL);
		String_t* L_12 = __this->get__name_3();
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_13 = String_Concat_m3937257545(NULL /*static, unused*/, _stringLiteral2901200384, L_12, /*hidden argument*/NULL);
		MessagePopup_ShowMessage_m3946694855(L_11, L_13, (1.0f), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Weapon_t4063826929_il2cpp_TypeInfo_var);
		bool L_14 = ((Weapon_t4063826929_StaticFields*)il2cpp_codegen_static_fields_for(Weapon_t4063826929_il2cpp_TypeInfo_var))->get__firstWeapon_2();
		if (!L_14)
		{
			goto IL_008e;
		}
	}
	{
		MessagePopup_t1375170899 * L_15 = MessagePopup_get_Instance_m3005294533(NULL /*static, unused*/, /*hidden argument*/NULL);
		MessagePopup_ShowMessage_m3946694855(L_15, _stringLiteral4039432527, (2.0f), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Weapon_t4063826929_il2cpp_TypeInfo_var);
		((Weapon_t4063826929_StaticFields*)il2cpp_codegen_static_fields_for(Weapon_t4063826929_il2cpp_TypeInfo_var))->set__firstWeapon_2((bool)0);
	}

IL_008e:
	{
		goto IL_00d2;
	}

IL_0093:
	{
		Entity_t3391956725 * L_16 = __this->get__owner_8();
		Entity_t3391956725 * L_17 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_18 = Object_op_Inequality_m4071470834(NULL /*static, unused*/, L_16, L_17, /*hidden argument*/NULL);
		if (!L_18)
		{
			goto IL_00d2;
		}
	}
	{
		bool L_19 = __this->get__used_7();
		if (L_19)
		{
			goto IL_00d2;
		}
	}
	{
		__this->set__used_7((bool)1);
		Entity_t3391956725 * L_20 = V_0;
		float L_21 = __this->get__damage_4();
		Entity_t3391956725 * L_22 = __this->get__owner_8();
		Transform_t3600365921 * L_23 = Component_get_transform_m3162698980(L_22, /*hidden argument*/NULL);
		Vector3_t3722313464  L_24 = Transform_get_position_m36019626(L_23, /*hidden argument*/NULL);
		Entity_TakeDamage_m239986278(L_20, L_21, L_24, /*hidden argument*/NULL);
	}

IL_00d2:
	{
		return;
	}
}
// System.Void Weapon::.cctor()
extern "C" IL2CPP_METHOD_ATTR void Weapon__cctor_m3337310628 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Weapon__cctor_m3337310628_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		((Weapon_t4063826929_StaticFields*)il2cpp_codegen_static_fields_for(Weapon_t4063826929_il2cpp_TypeInfo_var))->set__firstWeapon_2((bool)1);
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
// System.Void Weapon/<WaitAttackDuration>c__Iterator0::.ctor()
extern "C" IL2CPP_METHOD_ATTR void U3CWaitAttackDurationU3Ec__Iterator0__ctor_m2235481495 (U3CWaitAttackDurationU3Ec__Iterator0_t664319700 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean Weapon/<WaitAttackDuration>c__Iterator0::MoveNext()
extern "C" IL2CPP_METHOD_ATTR bool U3CWaitAttackDurationU3Ec__Iterator0_MoveNext_m4132934264 (U3CWaitAttackDurationU3Ec__Iterator0_t664319700 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CWaitAttackDurationU3Ec__Iterator0_MoveNext_m4132934264_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_U24PC_6();
		V_0 = L_0;
		__this->set_U24PC_6((-1));
		uint32_t L_1 = V_0;
		switch (L_1)
		{
			case 0:
			{
				goto IL_0021;
			}
			case 1:
			{
				goto IL_00a4;
			}
		}
	}
	{
		goto IL_00f5;
	}

IL_0021:
	{
		__this->set_U3CframesU3E__0_0(((int32_t)10));
		Weapon_t4063826929 * L_2 = __this->get_U24this_3();
		int32_t L_3 = L_2->get__attackTime_6();
		int32_t L_4 = __this->get_U3CframesU3E__0_0();
		__this->set_U3CframeDelayU3E__0_1(((int32_t)((int32_t)L_3/(int32_t)L_4)));
		__this->set_U3CiU3E__1_2(0);
		goto IL_00b2;
	}

IL_004d:
	{
		Weapon_t4063826929 * L_5 = __this->get_U24this_3();
		Transform_t3600365921 * L_6 = Component_get_transform_m3162698980(L_5, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t3722313464_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_7 = Vector3_get_back_m4077847766(NULL /*static, unused*/, /*hidden argument*/NULL);
		Vector3_t3722313464  L_8 = Vector3_op_Multiply_m3376773913(NULL /*static, unused*/, L_7, (90.0f), /*hidden argument*/NULL);
		int32_t L_9 = __this->get_U3CframesU3E__0_0();
		Vector3_t3722313464  L_10 = Vector3_op_Division_m510815599(NULL /*static, unused*/, L_8, (((float)((float)L_9))), /*hidden argument*/NULL);
		Transform_Rotate_m720511863(L_6, L_10, /*hidden argument*/NULL);
		int32_t L_11 = __this->get_U3CframeDelayU3E__0_1();
		WaitForSeconds_t1699091251 * L_12 = (WaitForSeconds_t1699091251 *)il2cpp_codegen_object_new(WaitForSeconds_t1699091251_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_m2199082655(L_12, ((float)((float)(((float)((float)L_11)))/(float)(1000.0f))), /*hidden argument*/NULL);
		__this->set_U24current_4(L_12);
		bool L_13 = __this->get_U24disposing_5();
		if (L_13)
		{
			goto IL_009f;
		}
	}
	{
		__this->set_U24PC_6(1);
	}

IL_009f:
	{
		goto IL_00f7;
	}

IL_00a4:
	{
		int32_t L_14 = __this->get_U3CiU3E__1_2();
		__this->set_U3CiU3E__1_2(((int32_t)il2cpp_codegen_add((int32_t)L_14, (int32_t)1)));
	}

IL_00b2:
	{
		int32_t L_15 = __this->get_U3CiU3E__1_2();
		int32_t L_16 = __this->get_U3CframesU3E__0_0();
		if ((((int32_t)L_15) < ((int32_t)L_16)))
		{
			goto IL_004d;
		}
	}
	{
		Weapon_t4063826929 * L_17 = __this->get_U24this_3();
		Transform_t3600365921 * L_18 = Component_get_transform_m3162698980(L_17, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t3722313464_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_19 = Vector3_get_one_m1629952498(NULL /*static, unused*/, /*hidden argument*/NULL);
		Vector3_t3722313464  L_20 = Vector3_op_Multiply_m3376773913(NULL /*static, unused*/, L_19, (10000.0f), /*hidden argument*/NULL);
		Transform_set_position_m3387557959(L_18, L_20, /*hidden argument*/NULL);
		Weapon_t4063826929 * L_21 = __this->get_U24this_3();
		L_21->set__used_7((bool)0);
		__this->set_U24PC_6((-1));
	}

IL_00f5:
	{
		return (bool)0;
	}

IL_00f7:
	{
		return (bool)1;
	}
}
// System.Object Weapon/<WaitAttackDuration>c__Iterator0::System.Collections.Generic.IEnumerator<object>.get_Current()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * U3CWaitAttackDurationU3Ec__Iterator0_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m1487183677 (U3CWaitAttackDurationU3Ec__Iterator0_t664319700 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U24current_4();
		return L_0;
	}
}
// System.Object Weapon/<WaitAttackDuration>c__Iterator0::System.Collections.IEnumerator.get_Current()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * U3CWaitAttackDurationU3Ec__Iterator0_System_Collections_IEnumerator_get_Current_m3473887510 (U3CWaitAttackDurationU3Ec__Iterator0_t664319700 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U24current_4();
		return L_0;
	}
}
// System.Void Weapon/<WaitAttackDuration>c__Iterator0::Dispose()
extern "C" IL2CPP_METHOD_ATTR void U3CWaitAttackDurationU3Ec__Iterator0_Dispose_m1069508341 (U3CWaitAttackDurationU3Ec__Iterator0_t664319700 * __this, const RuntimeMethod* method)
{
	{
		__this->set_U24disposing_5((bool)1);
		__this->set_U24PC_6((-1));
		return;
	}
}
// System.Void Weapon/<WaitAttackDuration>c__Iterator0::Reset()
extern "C" IL2CPP_METHOD_ATTR void U3CWaitAttackDurationU3Ec__Iterator0_Reset_m1227214215 (U3CWaitAttackDurationU3Ec__Iterator0_t664319700 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CWaitAttackDurationU3Ec__Iterator0_Reset_m1227214215_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NotSupportedException_t1314879016 * L_0 = (NotSupportedException_t1314879016 *)il2cpp_codegen_object_new(NotSupportedException_t1314879016_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m2730133172(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0,U3CWaitAttackDurationU3Ec__Iterator0_Reset_m1227214215_RuntimeMethod_var);
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
