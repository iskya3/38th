class CfgPatches
{
	class 38th_RPC2
	{
		author="38th S5";
		units[]={};
		requiredVersion=1;
		requiredAddons[]=
		{
			"3AS_Weapons"
		};
		weapons[]=
		{
		};
	};
};
class WeaponSlotsInfo;
class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;
class MuzzleSlot;
class CowsSlot;
class PointerSlot;
class UnderBarrelSlot;
class CfgWeapons
{
	class Launcher;
	class Launcher_Base_F: Launcher
	{
		class WeaponSlotsInfo;
	};
	class 38th_RPC2: Launcher_Base_F
	{
		author="38th S5";
		//_generalMacro="launch_RPG32_F";
		scope=2;
		displayName="[38th] RPC-2";
		model="38th\38th_RPC2\RPC2.p3d";
		initSpeed=-1;
		picture="\38th\38th_RPC2\UI\38th_RPC2.paa";
		dispersion = 0.0006; /// A bit less than 3 MOA
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\A3\Weapons_F_Exp\Launchers\RPG7\Data\Anim\RPG7V.rtm"
		};
		reloadAction="GestureReloadRPG7";
		recoil="recoil_empty";
		maxZeroing=600;
		modelOptics="\a3\Weapons_F_Tank\acc\reticle_MRAWSNew.p3d";
		weaponInfoType="RscOpticsRangeFinderMRAWS";
		cameraDir="look";
		cursor="missile";
		class GunParticles
		{
			class effect1
			{
				positionName="konec hlavne";
				directionName="usti hlavne";
				effectName="RocketBackEffectsNLAWNT";
			};
		};
		class OpticsModes
		{
			class optic
			{
				opticsID=1;
				useModelOptics=1;
				opticsZoomMin=0.087499999;
				opticsZoomMax=0.087499999;
				opticsZoomInit=0.087499999;
				distanceZoomMin=300;
				distanceZoomMax=300;
				memoryPointCamera="eye";
				opticsFlare=1;
				opticsDisablePeripherialVision=1;
				cameraDir="look";
				visionMode[]=
				{
					"Normal",
					"NVG"
				};
				opticsPPEffects[]=
				{
					"OpticsCHAbera1",
					"OpticsBlur1"
				};
			};
		};
		magazineWell[]={};
		magazines[]={"38th_Mag_RPC2_HEAT"};
		modes[]=
		{
			"Single"
		};
		class Single: Mode_SemiAuto
		{
			sounds[]=
			{
				"StandardSound"
			};
			class BaseSoundModeType
			{
			};
			class StandardSound: BaseSoundModeType
			{
				begin1[]=
				{
					"A3\Sounds_F\arsenal\weapons\Launchers\RPG32\rpg32",
					1.9952624,
					1,
					1500
				};
				soundBegin[]=
				{
					"begin1",
					1
				};
			};
			recoil="recoil_empty";
			aiRateOfFire=5;
			aiRateOfFireDistance=500;
			aiRateOfFireDispersion=2;
			minRange=10;
			minRangeProbab=0.30000001;
			midRange=40;
			midRangeProbab=0.85000002;
			maxRange=600;
			maxRangeProbab=0.85000002;
		};
		ace_overpressure_angle=0;
		ace_overpressure_range=0;
		ace_overpressure_damage=0;
	};
};
