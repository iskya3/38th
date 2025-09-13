class CfgPatches
{
	class 38th_Ragdolls
	{
		weapons[]={};
		requiredVersion=2.02;
		requiredAddons[]=
		{
			"A3_Data_F_aow_Loadorder"
		};
		author="0-0";
		authorUrl="";
		units[]={};
	};
};
class PhysXParams
{
	epeImpulseDamageCoef=30;
	impulseForceRagdollCoef=200;
	impulseTorqueRagdollCoef=50;
	impulseSpeedRagdollCoef=160;
	maxRagdollImpulseForceMagnitude=100;
	maxRagdollImpulseTorqueMagnitude=60;
	ragdollUnderwaterForceCoef=9.6000004;
	ragdollUnderwaterInitImpulseCoef=0.98000002;
	ragdollOnCollideSpeedLimit=4;
	ragdollOnCollideMassLimit=100;
	ragdollOnCollideForceCoef=0.1;
	ragdollOnCollideMaxForce=1;
	ragdollOnCollideMaxOffset=10;
	ragdollOnCollideMaxOffsetSpeed=100;
	ragdollHitTime=0.0089999996;
	ragdollHitForceCoef=30.299999;
	ragdollHitDmgLimit=0.1;
	wheelPointRejectLimitSpeed=5;
	wheelPointRejectAngle="Pi/4.0";
	wheelPointRejectAngleFast="Pi/3.0";
	wheelNormalRejectAngle="Pi/4.0";
	wheelNormalRejectAngleFast="Pi/2.4";
};
class RagDollDefaultLimit
{
	value=30;
	restitution=0.25;
	hardness=1;
};
class RagDollDefaultSpring
{
	enabled=1;
	value=1;
	damper=1;
	targetValue=0;
};
class RagDollSphericalJoint
{
	class TwistLimitLow: RagDollDefaultLimit
	{
	};
	class TwistLimitHigh: RagDollDefaultLimit
	{
	};
	class SwingLimit: RagDollDefaultLimit
	{
	};
	class TwistSpring: RagDollDefaultSpring
	{
		enabled=1;
	};
	class SwingSpring: RagDollDefaultSpring
	{
		enabled=1;
		damper=2;
	};
	class JointSpring: RagDollDefaultSpring
	{
		enabled=1;
	};
	type="spherical";
	enableCollision=0;
	projectionDistance=0.050000001;
	projectionMode="point";
};
class RagDollRevoluteJoint
{
	class LimitLow: RagDollDefaultLimit
	{
	};
	class LimitHigh: RagDollDefaultLimit
	{
	};
	class Spring: RagDollDefaultSpring
	{
		enabled=1;
	};
	type="revolute";
	enableCollision=0;
	projectionDistance=0.050000001;
	projectionMode="point";
};
class RagDollD6Joint_PX3
{
	type="D6";
	enableCollision=0;
	projectionDistance=0.050000001;
	projectionMode="point";
	swingLimitY=0;
	swingLimitZ=0;
	swingSpring=0;
	swingDamping=0;
	swingRestitution=0.30000001;
	swingContactDistance=0.050000001;
	twistLimitLower=0;
	twistLimitUpper=0;
	twistSpring=0;
	twistDamping=0;
	twistRestitution=0.40000001;
	twistContactDistance=0.050000001;
	driveSpring=550;
	driveDamping=100;
	driveMaxForce=100;
	driveUseAcceleration=1;
	driveLinearVelocity[]={0,0,0};
	driveAngularVelocity[]={0,0,0};
};
class CfgRagDollSkeletons
{
	class BaseRagdoll
	{
		primaryWeaponBone="";
		secondaryWeaponBone="";
		weaponSleepLinearVelocity=0.1;
		weaponSleepAngularVelocity=0.1;
		weaponDropMinTime=1;
		weaponDropMaxTime=3;
		weaponDistanceLimit=0.1;
		weaponDistanceLimitTime=5;
		sleepLinearVelocity=0.1;
		sleepAngularVelocity=0.1;
		simulateMinTime=2.5;
		simulateMaxTime=10;
		simulateDistanceLimit=0.5;
		simulateDistanceLimitTime=5;
		recoveryBlendTime=0.0099999998;
		recoveryCosLimit=-1;
		recoveryDistLimit=100;
		animBlendTime=0;
	};
	class Soldier: BaseRagdoll
	{
		primaryWeaponBone="weapon";
		secondaryWeaponBone="launcher";
		draggingMask="dragging";
		hitMask="hit";
		class WeaponLinkBones
		{
			class LinkBone1
			{
				bone="leftHand";
				canBeDropped=1;
				prefference=1;
			};
			class LinkBone2
			{
				bone="rightHand";
				canBeDropped=1;
				prefference=1;
			};
			class LinkBone3
			{
				bone="chest";
				canBeDropped=1;
				prefference=2;
			};
		};
		class Masks
		{
			class DraggingMask
			{
				name="dragging";
				mask[]=
				{
					
					{
						"pelvis",
						0,
						1
					},
					
					{
						"chest",
						0,
						1
					},
					
					{
						"head",
						1,
						0
					},
					
					{
						"leftArm",
						1,
						0
					},
					
					{
						"leftForeArm",
						1,
						0
					},
					
					{
						"leftHand",
						1,
						0
					},
					
					{
						"rightArm",
						1,
						0
					},
					
					{
						"rightForeArm",
						1,
						0
					},
					
					{
						"rightHand",
						1,
						0
					},
					
					{
						"leftUpLeg",
						1,
						0
					},
					
					{
						"leftLeg",
						1,
						0
					},
					
					{
						"leftFoot",
						1,
						0
					},
					
					{
						"rightUpLeg",
						1,
						0
					},
					
					{
						"rightLeg",
						1,
						0
					},
					
					{
						"rightFoot",
						1,
						0
					},
					
					{
						"weapon",
						0.2,
						1
					},
					
					{
						"launcher",
						0,
						1
					}
				};
			};
			class HitMask
			{
				name="hit";
				mask[]=
				{
					
					{
						"pelvis",
						0.30000001,
						0
					},
					
					{
						"chest",
						0.5,
						0
					},
					
					{
						"head",
						0.60000002,
						0
					},
					
					{
						"leftArm",
						0.40000001,
						0
					},
					
					{
						"leftForeArm",
						0.40000001,
						0
					},
					
					{
						"leftHand",
						0.40000001,
						0
					},
					
					{
						"rightArm",
						0.40000001,
						0
					},
					
					{
						"rightForeArm",
						0.40000001,
						0
					},
					
					{
						"rightHand",
						0.40000001,
						0
					},
					
					{
						"leftUpLeg",
						0,
						1
					},
					
					{
						"leftLeg",
						0,
						1
					},
					
					{
						"leftFoot",
						0,
						1
					},
					
					{
						"rightUpLeg",
						0,
						1
					},
					
					{
						"rightLeg",
						0,
						1
					},
					
					{
						"rightFoot",
						0,
						1
					},
					
					{
						"weapon",
						0.2,
						1
					},
					
					{
						"launcher",
						0,
						1
					}
				};
			};
		};
		class BaseRagdollBone
		{
			material="Ragdoll";
			childrenUseStartTrans=1;
		};
		class Bones
		{
			class Pelvis: BaseRagdollBone
			{
				name="pelvis";
				type="box";
				size[]={0.11,0.12,0.20999999};
				startBone="pelvis";
				endBone="spine2";
				mass=60;
			};
			class Chest: BaseRagdollBone
			{
				name="chest";
				startBone="spine2";
				endBone="head";
				type="box";
				size[]={0.11,0.14,0.19};
				mass=34;
			};
			class Head: BaseRagdollBone
			{
				name="head";
				type="sphere";
				startBone="head";
				mass=16;
				radius=0.12;
			};
			class LeftArm: BaseRagdollBone
			{
				name="leftArm";
				type="capsule";
				startBone="leftArm";
				endBone="leftForeArm";
				mass=11;
			};
			class LeftForeArm: BaseRagdollBone
			{
				name="leftForeArm";
				type="capsule";
				startBone="leftForeArm";
				endBone="leftHand";
				mass=9;
			};
			class LeftHand: BaseRagdollBone
			{
				name="leftHand";
				type="sphere";
				startBone="leftHand";
				mass=8;
				radius=0.079999998;
				childrenUseStartTrans=0;
			};
			class RightArm: BaseRagdollBone
			{
				name="rightArm";
				type="capsule";
				startBone="rightArm";
				endBone="rightForeArm";
				mass=11;
			};
			class RightForeArm: BaseRagdollBone
			{
				name="rightForeArm";
				type="capsule";
				startBone="rightForeArm";
				endBone="rightHand";
				mass=9;
			};
			class RightHand: BaseRagdollBone
			{
				name="rightHand";
				type="sphere";
				startBone="rightHand";
				mass=8;
				radius=0.079999998;
				childrenUseStartTrans=0;
			};
			class LeftUpLeg: BaseRagdollBone
			{
				name="leftUpLeg";
				type="capsule";
				startBone="leftUpLeg";
				endBone="leftLeg";
				mass=13;
			};
			class LeftLeg: BaseRagdollBone
			{
				name="leftLeg";
				type="capsule";
				startBone="leftLeg";
				endBone="leftFoot";
				mass=10;
			};
			class LeftFoot: BaseRagdollBone
			{
				name="leftFoot";
				type="box";
				startBone="leftFoot";
				size[]={0.15000001,0.050000001,0.07};
				mass=7;
			};
			class RightUpLeg: BaseRagdollBone
			{
				name="rightUpLeg";
				type="capsule";
				startBone="rightUpLeg";
				endBone="rightLeg";
				mass=13;
			};
			class RightLeg: BaseRagdollBone
			{
				name="rightLeg";
				type="capsule";
				startBone="rightLeg";
				endBone="rightFoot";
				mass=10;
			};
			class RightFoot: BaseRagdollBone
			{
				name="rightFoot";
				type="box";
				startBone="rightFoot";
				size[]={0.15000001,0.050000001,0.07};
				mass=7;
			};
			class Weapon: BaseRagdollBone
			{
				name="weapon";
				type="weapon";
				startBone="weapon";
				endPosRelToStart[]={0,0,0.40000001};
				mass=8;
			};
			class Launcher: BaseRagdollBone
			{
				name="launcher";
				type="weapon";
				startBone="launcher";
				endPosRelToStart[]={0,0,0.40000001};
				mass=12;
			};
		};
		class JointsPX3
		{
			class Chest_LeftArm_PX3: RagDollD6Joint_PX3
			{
				name="chest_leftArm";
				bone1="chest";
				bone2="leftArm";
				enableCollision=1;
				swingLimitY=92;
				swingLimitZ=91;
				twistLimitLower=-60;
				twistLimitUpper=20;
				swingSpring=214;
				swingDamping=160;
				twistSpring=220;
				twistDamping=240;
				driveSpring=163;
				driveDamping=686;
				driveSpringWater=3;
				driveDampingWater=3;
				driveAngularVelocity[]={-2,0.5,2};
			};
			class Chest_RightArm_PX3: RagDollD6Joint_PX3
			{
				name="chest_rightArm";
				bone1="chest";
				bone2="rightArm";
				enableCollision=1;
				swingLimitY=92;
				swingLimitZ=91;
				twistLimitLower=-20;
				twistLimitUpper=60;
				swingSpring=214;
				swingDamping=160;
				twistSpring=220;
				twistDamping=240;
				driveSpring=163;
				driveDamping=686;
				driveSpringWater=3;
				driveDampingWater=3;
				driveAngularVelocity[]={2,-0.5,2};
			};
			class Pelvis_LeftUpLeg_PX3: RagDollD6Joint_PX3
			{
				name="pelvis_leftUpLeg";
				bone1="pelvis";
				bone2="leftUpLeg";
				enableCollision=1;
				swingLimitY=25;
				swingLimitZ=115;
				twistLimitLower=-25;
				twistLimitUpper=35;
				swingSpring=530;
				swingDamping=340;
				twistSpring=668;
				twistDamping=160;
				driveSpring=296;
				driveDamping=169;
				driveSpringWater=3;
				driveDampingWater=3;
				driveAngularVelocity[]={0,0,2};
			};
			class Pelvis_RightUpLeg_PX3: RagDollD6Joint_PX3
			{
				name="pelvis_rightUpLeg";
				bone1="pelvis";
				bone2="rightUpLeg";
				enableCollision=1;
				swingLimitY=25;
				swingLimitZ=115;
				twistLimitLower=-35;
				twistLimitUpper=25;
				swingSpring=530;
				swingDamping=340;
				twistSpring=668;
				twistDamping=160;
				driveSpring=296;
				driveDamping=169;
				driveSpringWater=3;
				driveDampingWater=3;
				driveAngularVelocity[]={0,0,2};
			};
			class LeftArm_LeftForeArm_PX3: RagDollD6Joint_PX3
			{
				name="leftArm_leftForeArm";
				bone1="leftArm";
				bone2="leftForeArm";
				axis[]={-1,1,-0.2};
				swingLimitY=0.0099999998;
				swingLimitZ=22;
				twistLimitLower=5;
				twistLimitUpper=125;
				driveSpring=61;
				driveDamping=675;
				driveSpringWater=1;
				driveDampingWater=1;
				driveAngularVelocity[]={0.5,0,0};
			};
			class LeftForeArm_LeftHand_PX3: RagDollD6Joint_PX3
			{
				name="leftForeArm_leftHand";
				bone1="leftForeArm";
				bone2="leftHand";
				swingLimitY=40;
				swingLimitZ=9;
				twistLimitLower=-45;
				twistLimitUpper=45;
				driveSpring=164;
				driveDamping=98;
				driveSpringWater=1;
				driveDampingWater=1;
			};
			class RightArm_RightForeArm_PX3: RagDollD6Joint_PX3
			{
				name="rightArm_rightForeArm";
				bone1="rightArm";
				bone2="rightForeArm";
				axis[]={-1,-1,0.2};
				swingLimitY=0.0099999998;
				swingLimitZ=22;
				twistLimitLower=5;
				twistLimitUpper=125;
				driveSpring=61;
				driveDamping=675;
				driveSpringWater=1;
				driveDampingWater=1;
				driveAngularVelocity[]={0.5,0,0};
			};
			class RightForeArm_RightHand_PX3: RagDollD6Joint_PX3
			{
				name="rightForeArm_rightHand";
				bone1="rightForeArm";
				bone2="rightHand";
				swingLimitY=40;
				swingLimitZ=9;
				twistLimitLower=-45;
				twistLimitUpper=45;
				driveSpring=164;
				driveDamping=98;
				driveSpringWater=1;
				driveDampingWater=1;
			};
			class LeftUpLeg_LeftLeg_PX3: RagDollD6Joint_PX3
			{
				name="leftUpLeg_leftLeg";
				bone1="leftUpLeg";
				bone2="leftLeg";
				axis[]={1,0,0};
				swingLimitY=0;
				swingLimitZ=0.0099999998;
				twistLimitLower=5;
				twistLimitUpper=80;
				twistSpring=206;
				twistDamping=466;
				driveSpring=186;
				driveDamping=226;
				driveSpringWater=2;
				driveDampingWater=2;
			};
			class LeftLeg_LeftFoot_PX3: RagDollD6Joint_PX3
			{
				name="leftLeg_leftFoot";
				bone1="leftLeg";
				bone2="leftFoot";
				axis[]={1,0,0};
				enableCollision=1;
				swingLimitY=5;
				swingLimitZ=5;
				twistLimitLower=-75;
				twistLimitUpper=85;
				driveSpring=40;
				driveDamping=46;
				driveSpringWater=2;
				driveDampingWater=2;
			};
			class RightUpLeg_RightLeg_PX3: RagDollD6Joint_PX3
			{
				name="rightUpLeg_rightLeg";
				bone1="rightUpLeg";
				bone2="rightLeg";
				axis[]={1,0,0};
				swingLimitY=0;
				swingLimitZ=0.0099999998;
				twistLimitLower=5;
				twistLimitUpper=80;
				twistSpring=206;
				twistDamping=466;
				driveSpring=186;
				driveDamping=226;
				driveSpringWater=2;
				driveDampingWater=2;
			};
			class RightLeg_RightFoot_PX3: RagDollD6Joint_PX3
			{
				name="rightLeg_rightFoot";
				bone1="rightLeg";
				bone2="rightFoot";
				axis[]={1,0,0};
				enableCollision=1;
				swingLimitY=5;
				swingLimitZ=5;
				twistLimitLower=-75;
				twistLimitUpper=85;
				driveSpring=40;
				driveDamping=46;
				driveSpringWater=2;
				driveDampingWater=2;
			};
		};
	};
};