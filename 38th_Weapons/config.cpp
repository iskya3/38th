class CfgPatches
{
	class 38th_Weapons
	{
		units[]={};
		weapons[]=
		{
		};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"38th_Core"
		};
	};
};
class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;
class SlotInfo;
class MuzzleSlot;
class CowsSlot;
class PointerSlot;
class UnderBarrelSlot;
class asdg_OpticRail;
class asdg_FrontSideRail;
class asdg_OpticRail1913;
class asdg_MuzzleSlot_556;
class asdg_OpticRail1913_short;
class asdg_UnderSlot;
class CfgWeapons
{
	class Rifle;
	class Rifle_Base_F: Rifle
	{
		class WeaponSlotsInfo;
		class GunParticles;
	};
	class 38th_Rifle_Base_F: Rifle_Base_F
	{
		author="38thS5";
		magazines[]=
		{
			"38th_Mag_M16_blue",
			"38th_Mag_M16_green"
		};
		magazineWell[]=
		{
		};
		magazineReloadSwitchPhase=0.40000001;
		discreteDistanceInitIndex=0;
		recoil="recoil_spar";
		maxRecoilSway=0.0125;
		swayDecaySpeed=1.25;
		inertia=0.40000001;
		dexterity=1.6;
		initSpeed=-1;
		maxZeroing=100;
		scope=0;
		displayName="[38th] DCM-16";
		model="38th\38th_Weapons\M16.p3d";
		picture="\38th\38th_Weapons\UI\38th_M16.paa";
		class GunParticles: GunParticles
		{
			class SecondEffect
			{
				positionName="Nabojnicestart";
				directionName="Nabojniceend";
				effectName="CaselessAmmoCloud";
			};
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class CowsSlot: CowsSlot
			{
				linkProxy="\A3\data_f\proxies\weapon_slots\TOP";
				compatibleItems[]=
				{
					"Optre_Evo_Sight",
					"3AS_Optic_Scope_WestarM5",
					"Optre_Recon_Sight"
				};
			};
			class PointerSlot: PointerSlot
			{
				linkProxy="\A3\data_f\proxies\weapon_slots\SIDE";
				compatibleItems[]=
				{
				};
			};
			class UnderBarrelSlot: UnderBarrelSlot
			{
				linkProxy="\A3\data_f_mark\proxies\weapon_slots\UNDERBARREL";
				compatibleItems[]={};
			};
			class MuzzleSlot: asdg_MuzzleSlot_556
			{
				compatibleItems[]={};
			};
		};
		descriptionShort="DCM-16";
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"38th\38th_Weapons\anim\m16.rtm"
		};
		reloadAction="GestureReloadSPAR_01";
		selectionFireAnim="zasleh";
		modes[] = {"Single","Burst","FullAuto"};
		class Burst: Mode_Burst
		{
			reloadTime = 0.09;
			dispersion = 0.00079;
			minRange = 0;
			minRangeProbab = 0.9;
			midRange = 50;
			midRangeProbab = 0.7;
			maxRange = 100;
			maxRangeProbab = 0.1;
			soundContinuous = 0;
			soundBurst = 0;
			sounds[] = {"StandardSound","SilencedSound"};
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] = {"38th_DCM16_shot_soundset"/*"3AS_Arkanian_SoundSet"*/};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundSetShot[] = {"38th_DCM16_shot_soundset"};
			};
		};
	};
	class 38th_DCM: 38th_Rifle_Base_F
	{
		displayName="[38th] DCM-16";
		baseWeapon="38th_DCM";
		scope=2;
		scopeArsenal=2;
		canShootInWater=1;
		class FullAuto: Mode_FullAuto
		{
			reloadTime=0.12;
			dispersion=0.00106;
			minRange=0;
			minRangeProbab=0.89999998;
			midRange=15;
			midRangeProbab=0.69999999;
			maxRange=30;
			maxRangeProbab=0.1;
			soundContinuous=0;
			soundBurst=0;
			sounds[]=
			{
				"StandardSound",
				"SilencedSound"
			};
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] = {"38th_DCM16_shot_soundset"/*"3AS_Arkanian_SoundSet"*/};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundSetShot[] = {"38th_DCM16_shot_soundset"};
			};
		};
		class Single: Mode_SemiAuto
		{
			reloadTime=0.12;
			dispersion=0.00106;
			minRange=2;
			minRangeProbab=0.30000001;
			midRange=150;
			midRangeProbab=0.69999999;
			maxRange=350;
			maxRangeProbab=0.1;
			soundContinuous=0;
			soundBurst=0;
			sounds[]=
			{
				"StandardSound",
				"SilencedSound"
			};
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] = {"38th_DCM16_shot_soundset"/*"3AS_Arkanian_SoundSet"*/};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundSetShot[] = {"38th_DCM16_shot_soundset"};
			};
		};
		caseless[]=
		{
			"",
			1,
			1,
			1
		};
		soundBullet[]=
		{
			"caseless",
			1
		};
		drySound[]=
		{
			"38th\38th_Weapons\sound\sci_Fi_gunEmpty.ogg",
			2,
			1,
			20
		};
		reloadMagazineSound[]=
		{
			"\3AS\3AS_Main\Sounds\Old\Blaster_reload.wss",
			1,
			1,
			30
		};
		magazineWell[]=
		{
		};
		magazines[]=
		{
			"38th_Mag_M16_blue",
			"38th_Mag_M16_green"
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class CowsSlot: CowsSlot
			{
				linkProxy="\A3\data_f\proxies\weapon_slots\TOP";
				compatibleItems[]=
				{
					"Optre_Evo_Sight",
					"Optre_Recon_Sight",
					"3as_optic_reflex_dc15c",
					"3AS_Optic_Scope_WestarM5"
				};
			};
			class PointerSlot: PointerSlot
			{
				linkProxy="\A3\data_f\proxies\weapon_slots\SIDE";
				compatibleItems[]=
				{
				};
			};
		};
	};
};
