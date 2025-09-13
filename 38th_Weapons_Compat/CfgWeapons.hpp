class WeaponSlotsInfo;
class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;
class MuzzleSlot;
class CowsSlot;
class PointerSlot;
class UnderBarrelSlot;
class 3AS_MuzzleSlot_DC15S;
class 3AS_CowsSlot_DC15S;
class CfgWeapons
{
	class 3AS_DC15A_Base_F;
	class EGLM;
	class UGL_F;
	class 3AS_DC15C_F;
	class 3AS_DC15S_F;
	class 3AS_DC15X_F;
	class 3AS_WestarM5_F;
	class 3AS_WestarM5_GL;
	class 3AS_Z6_F;
	class Rifle_Long_Base_F;
	class Rifle;
	class Rifle_Base_F: Rifle
	{
		class WeaponSlotsInfo;
		class GunParticles;
	};
	class 3AS_DC17M_Base_F;
	class 3AS_DC17M_F;
	class 3AS_DC15C_GL;
	class 3AS_DC15A_F;
	class 3AS_DC15A_GL;
	class 3AS_DC15S_GL;
	class 3AS_DLT19;
	class 3AS_DC15L_F;
	class 3AS_Valken38X_F;
	class 3AS_Flamer_Base;
	class 3AS_DC15S_Base_F: Rifle_Base_F
	{
		author="$STR_3as_Studio";
		magazines[]=
		{
			"3AS_60Rnd_EC30_Mag"
		};
		magazineWell[]=
		{
			"3AS_DC15S_MagWell"
		};
		magazineReloadSwitchPhase=0.5;
		class Library
		{
			libTextDesc="$STR_3AS_Weapons_Republic_DC15S_Library";
		};
		reloadAction="GestureReloadMX";
		recoil="3AS_recoil_DC15S";
		maxZeroing=1400;
		discreteDistanceInitIndex=0;
		maxRecoilSway=0.0125;
		swayDecaySpeed=1.25;
		inertia=0.40000001;
		aimTransitionSpeed=0.80000001;
		dexterity=1.6;
		initSpeed=-1;
		class GunParticles: GunParticles
		{
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=50;
			class MuzzleSlot: 3AS_MuzzleSlot_DC15S
			{
				iconPosition[]={0,0.44999999};
				iconScale=0.2;
			};
			class CowsSlot: 3AS_CowsSlot_DC15S
			{
				iconPosition[]={0.5,0.34999999};
				iconScale=0.2;
			};
		};
		distanceZoomMin=300;
		distanceZoomMax=300;
		descriptionShort="$STR_3AS_Weapons_Republic_DC15S_DesShort";
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"3as\3AS_Weapons\Republic\DC15S\Data\Anim\New_DC15S_Handanim.rtm"
		};
		modes[]=
		{
			"FullAuto",
			"Single",
			"single_medium_optics1",
			"single_far_optics2"
		};
		class FullAuto: Mode_FullAuto
		{
			sounds[]=
			{
				"StandardSound",
				"SilencedSound"
			};
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[]=
				{
					"3AS_DC15S_Shot_SoundSet"
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundSetShot[]=
				{
					"3AS_DC15S_Shot_SoundSet"
				};
			};
			reloadTime=0.085000001;
			dispersion=0.00092999998;
			minRange=0;
			minRangeProbab=0.89999998;
			midRange=15;
			midRangeProbab=0.69999999;
			maxRange=50;
			maxRangeProbab=0.050000001;
			aiRateOfFire=1e-006;
		};
		class Single: Mode_SemiAuto
		{
			reloadTime=0.1;
			dispersion=0.00066000002;
			minRange=2;
			minRangeProbab=0.5;
			midRange=150;
			midRangeProbab=0.69999999;
			maxRange=350;
			maxRangeProbab=0.30000001;
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
				soundSetShot[]=
				{
					"3AS_DC15S_Shot_SoundSet"
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundSetShot[]=
				{
					"3AS_DC15S_Shot_SoundSet"
				};
			};
		};
		class single_medium_optics1: Single
		{
			requiredOpticType=1;
			showToPlayer=0;
			minRange=5;
			minRangeProbab=0.2;
			midRange=300;
			midRangeProbab=0.69999999;
			maxRange=450;
			maxRangeProbab=0.2;
			aiRateOfFire=6;
			aiRateOfFireDistance=500;
		};
		class single_far_optics2: Single
		{
			requiredOpticType=2;
			showToPlayer=0;
			minRange=100;
			minRangeProbab=0.2;
			midRange=400;
			midRangeProbab=0.69999999;
			maxRange=600;
			maxRangeProbab=0.050000001;
			aiRateOfFire=8;
			aiRateOfFireDistance=800;
		};
		class GL_1GL_F: UGL_F
		{
			displayName="$STR_A3_cfgweapons_3gl0";
			descriptionShort="$STR_A3_cfgweapons_3gl1";
			useModelOptics=0;
			useExternalOptic=0;
			magazines[]=
			{
				"3AS_3UGL_MK54_HE_shell"
			};
			magazineWell[]=
			{
				"UGL_40x36",
				"3UGL_40x36",
				"3AS_3UGL_Magwell"
			};
			cameraDir="OP_look";
			discreteDistance[]={50,75,100,150,200,250,300,350,400};
			discreteDistanceCameraPoint[]=
			{
				"OP_eye_50",
				"OP_eye_75",
				"OP_eye_100",
				"OP_eye_150",
				"OP_eye_200",
				"OP_eye_250",
				"OP_eye_300",
				"OP_eye_350",
				"OP_eye_400"
			};
			discreteDistanceInitIndex=1;
			reloadAction="GestureReloadMXUGL";
			reloadMagazineSound[]=
			{
				"A3\Sounds_F\arsenal\weapons\Rifles\MX\Mx_UGL_reload",
				1,
				1,
				10
			};
		};
		aiDispersionCoefY=6;
		aiDispersionCoefX=4;
		class OpticsModes
		{
			class Ironsights
			{
				opticsID=1;
				useModelOptics=0;
				opticsFlare=0;
				opticsPPEffects[]=
				{
					"Default"
				};
				opticsDisablePeripherialVision=0;
				opticsZoomMin=0.25;
				opticsZoomMax=1.25;
				opticsZoomInit=0.75;
				memoryPointCamera="eye";
				visionMode[]={};
				distanceZoomMin=100;
				distanceZoomMax=100;
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
			"\3AS\3AS_Main\Sounds\Blaster_empty",
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
		ace_overheating_mrbs=3000;
		ace_overheating_slowdownFactor=1;
		ace_overheating_allowSwapBarrel=0;
		ace_overheating_dispersion=0.75;
	};
	class 38th_dc15c: 3AS_DC15C_F
	{
		displayName="[38th] DC-15C";
		recoil="recoil_sdar";
		scope = 2;
		baseWeapon="38th_dc15c";
		magazines[]=
		{
			"38th_mag_dc15c_blue"
		};
	};
	class 38th_dc15c_ugl: 3AS_DC15C_GL
	{
		displayName="[38th] DC-15C UGL";
		recoil="recoil_sdar";
		scope = 2;
		baseWeapon="38th_dc15c_ugl";
		magazines[]=
		{
			"38th_mag_dc15c_blue"
		};
	};
	class 38th_dc15a: 3AS_DC15A_F
	{
		displayName="[38th] DC-15A";
		recoil="recoil_sdar";
		scope=2;
		baseWeapon="38th_dc15a";
		modes[] = {"Single","Burst"};
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
				soundSetShot[] = {"3AS_DC15A_Shot_SoundSet"};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundSetShot[] = {"3AS_DC15A_Shot_SoundSet"};
			};
		};
		magazines[]=
		{
			"38th_mag_dc15a_blue"
		};
	};
	class 38th_dc15a_ugl: 3AS_DC15A_GL
	{
		displayName="[38th] DC-15A UGL";
		scope=2;
		recoil="recoil_sdar";
		baseWeapon="38th_dc15a_ugl";
		modes[] = {"Single","Burst"};
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
				soundSetShot[] = {"3AS_DC15A_Shot_SoundSet"};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundSetShot[] = {"3AS_DC15A_Shot_SoundSet"};
			};
		};
		magazines[]=
		{
			"38th_mag_dc15a_blue"
		};
	};
	class 38th_BTX: 3AS_Flamer_Base
	{
		displayName="[38th] BTX-42 Flamethrower";
		scope = 2;
		baseWeapon="38th_BTX";
		magazines[]=
		{
			"38th_BTX42_Fuel"
		};
	};
	class 38th_dc15s: 3AS_DC15S_F
	{
		displayName="[38th] DC-15S";
		scope = 2;
		baseWeapon="38th_dc15s";
		magazines[]=
		{
			"38th_mag_dc15s_blue"
		};
	};
	class 38th_dc15l: 3AS_DC15L_F
	{
		displayName="[38th] DC-15L";
		scope = 2;
		baseWeapon="38th_dc15l";
		magazines[]=
		{
			"38th_mag_dc15l_blue"
		};
	};
	class 38th_dc15s_gl: 3AS_DC15S_GL
	{
		baseWeapon="38th_dc15s_gl";
		scope=2;
		displayName="[38th] DC-15S GL";
		magazines[]=
		{
			"38th_mag_dc15s_blue"
		};
	};
	class 38th_dc15x: 3AS_DC15X_F
	{
		displayName="[38th] DC-15X";
		scope = 2;
		baseWeapon="38th_dc15x";
		magazines[]=
		{
			"38th_mag_dc15x_blue",
			"38th_mag_dc15x_50cal_blue"
		};
	};
	class 38th_valken38x: 3AS_Valken38X_F
	{
		displayName="[38th] Valken38-X";
		scope = 2;
		baseWeapon="38th_valken38x";
		magazines[]=
		{
			"38th_Mag_valken38_blue",
			"38th_Mag_valken38_overcharged_blue"
		};
	};
	class 38th_dc17m: 3AS_DC17M_F
	{
		displayName="[38th] DC-17M";
		scope = 2;
		baseWeapon="38th_dc17m";
		magazines[]=
		{
            "38th_mag_dc17_blue"
		};
		modes[]=
		{
			"Single",
			"FullAuto",
			"single_medium_optics1",
			"single_medium_optics2",
			"fullauto_medium"
		};
		class Single: Mode_SemiAuto
		{
			reloadTime=0.07;
			dispersion=0.00073000003;
			minRange=2;
			minRangeProbab=0.5;
			midRange=150;
			midRangeProbab=0.69999999;
			maxRange=250;
			maxRangeProbab=0.2;
			sounds[]=
			{
				"StandardSound",
				"SilencedSound"
			};
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[]=
				{
					"38th_DC17M_shot_soundset"
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundSetShot[]=
				{
					""
				};
			};
		};
		class FullAuto: Mode_FullAuto
		{
			reloadTime=0.07;
			dispersion=0.00073000003;
			minRange=2;
			minRangeProbab=0.89999998;
			midRange=15;
			midRangeProbab=0.69999999;
			maxRange=30;
			maxRangeProbab=0.050000001;
			aiRateOfFire=1e-006;
			sounds[]=
			{
				"StandardSound",
				"SilencedSound"
			};
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[]=
				{
					"38th_DC17M_shot_soundset"
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundSetShot[]=
				{
					""
				};
			};
		};
		class fullauto_medium: FullAuto
		{
			showToPlayer=0;
			burst=3;
			minRange=2;
			minRangeProbab=0.5;
			midRange=75;
			midRangeProbab=0.69999999;
			maxRange=100;
			maxRangeProbab=0.050000001;
			aiRateOfFire=2;
		};
		class single_medium_optics1: Single
		{
			requiredOpticType=1;
			showToPlayer=0;
			minRange=5;
			minRangeProbab=0.2;
			midRange=300;
			midRangeProbab=0.69999999;
			maxRange=450;
			maxRangeProbab=0.30000001;
			aiRateOfFire=5;
			aiRateOfFireDistance=500;
		};
		class single_medium_optics2: single_medium_optics1
		{
			requiredOpticType=2;
			minRange=100;
			minRangeProbab=0.1;
			midRange=400;
			midRangeProbab=0.69999999;
			maxRange=600;
			maxRangeProbab=0.050000001;
			aiRateOfFire=6;
			aiRateOfFireDistance=600;
		};
	};
	class 38th_DLT19: 3AS_DLT19
	{
		scope=2;
		displayName="[38th] DLT-19";
		baseWeapon="38th_DLT19";
	};
	class 38th_westarm5: 3AS_WestarM5_F
	{
		displayName="[38th] WestarM5";
		recoil="recoil_spar";
		magazines[]=
		{
			"38th_mag_westarm5_blue"
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
		};
	};
	class 38th_westarm5_ugl: 3AS_WestarM5_GL
	{
		displayName = "[38th] Westar-M5 UGL";
		recoil = "recoil_spar";
		magazines[] = {"38th_mag_westarm5_blue"};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class CowsSlot: CowsSlot
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\TOP";
				compatibleItems[] = {"Optre_Evo_Sight","3AS_Optic_Scope_WestarM5","Optre_Recon_Sight"};
			};
		};
		class 3AS_WestarM5_GL_F: UGL_F
		{
			displayName = "WestarM5-GL";
			descriptionShort = "GL for the WestarM5 Platform";
			useModelOptics = 0;
			useExternalOptic = 0;
			magazines[] = {"SWLW_DC15A_UGL_Mag","SWLW_DC15A_UGL_huntir_Mag","SWLW_DC15A_UGL_flare_white_Mag","SWLW_DC15A_UGL_flare_red_Mag","SWLW_DC15A_UGL_flare_gree_Mag","SWLW_DC15A_UGL_smoke_white_Mag","SWLW_DC15A_UGL_smoke_red_Mag","SWLW_DC15A_UGL_smoke_purple_Mag","SWLW_DC15A_UGL_smoke_blue_Mag","SWLW_DC15A_UGL_smoke_green_Mag","38th_Westar_GL_Mag"};
			magazineWell[] = {"UGL_40x36","3UGL_40x36"};
			cameraDir = "OP_look";
			discreteDistance[] = {50,75,100,150,200,250,300,350,400};
			discreteDistanceCameraPoint[] = {"OP_eye_50","OP_eye_75","OP_eye_100","OP_eye_150","OP_eye_200","OP_eye_250","OP_eye_300","OP_eye_350","OP_eye_400"};
			discreteDistanceInitIndex = 1;
			reloadAction = "GestureReloadMXUGL";
			reloadMagazineSound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\MX\Mx_UGL_reload",1,1,10};
		};
	};
	class 38th_z6: 3AS_Z6_F
	{
		displayName="[38th] Z6 Rotary Blaster";
		baseWeapon="38th_z6";
		magazines[]=
		{
			"38th_mag_z6_blue"
		};
	};
////MEME SHIT

	class arifle_AKM_base_F;
	class Regents_AKM: arifle_AKM_base_F
	{
		_generalMacro="Regents_AKM";
		baseWeapon="Regents_AKM";
		scope=2;
		displayName="[38th] Regents Meme Gun";
		reloadAction="GestureReloadAKM";
		picture="\A3\Weapons_F_Exp\Rifles\AKM\Data\UI\arifle_AKM_F_X_CA.paa";
		ace_overheating_barrelMass = 10.5895;
		magazines[]=
		{
			"38th_Mag_AKM_50cal_blue"
		};
		magazineWell[]=
		{
			"RegentsAKMagwell"
		};
		hiddenSelectionsTextures[]=
		{
			"A3\Weapons_F_Exp\Rifles\AKM\Data\akm_co.paa",
			"\A3\Weapons_F_Exp\Rifles\AKM\Data\akm_wood_co.paa",
			"\A3\Weapons_F_Exp\Rifles\AKM\Data\akm_steel_mag_co.paa"
		};
	};
///// Launchers
	class 3AS_RPS6_Base;
	class 3AS_RPS6_G;
	class 3AS_RPS6_HP;
	class ls_weapon_plx1_at;
	class 3AS_PLX1_base;
	class 3AS_PLX1_F;
	class ls_weapon_plx1_base;
	class 3AS_RPS6_F;
	class 38th_launcher_base: 3AS_RPS6_F{};
	class 38th_RPS6_Base: 38th_launcher_base
	{
		scope=2;
		displayName="[38th] RPS-6 Disposable";
		baseWeapon="38th_RPS6_F";
		magazines[]=
		{
			"38th_XMK40_AT"
		};
	};
	class 3AS_RPS6_Guided;
	class 38th_RPS6_Guided_Base: 3AS_RPS6_Guided
	{
		displayName="[38th] RPS6 Disposible Guided Launcher";
		baseWeapon="38th_RPS6_Guided";
		magazines[]=
		{
			"38th_XMK40_AT_Guided"
		};
		modes[]=
		{
			"Single"
		};
	};
	class 38th_RPS6_F: 38th_RPS6_Base
	{
		scope=2;
		scopeArsenal=2;
		baseWeapon="38th_RPS6_F";
		magazines[]=
		{
			"CBA_FakeLauncherMagazine"
		};
	};
	class 38th_RPS6_Guided: 38th_RPS6_Guided_Base
	{
		scope=2;
		scopeArsenal=2;
		baseWeapon="38th_RPS6_Guided";
		magazines[]=
		{
			"CBA_FakeLauncherMagazine"
		};
	};
	class 38th_RPS6_Used: 38th_RPS6_Base
	{
		scope=1;
		displayName="[38th] Used RPS6 Disposible Rocket Launcher";
		baseWeapon="38th_RPS6_Used";
		magazines[]=
		{
			"CBA_FakeLauncherMagazine"
		};
	};
	class 38th_RPS6_Guided_Used: 38th_RPS6_Guided_Base
	{
		scope=1;
		displayName="[38th] Used RPS6 Disposible Missile Launcher";
		baseWeapon="38th_RPS6_Guided_Used";
		magazines[]=
		{
			"CBA_FakeLauncherMagazine"
		};
	};
	class 38th_RPS6_Heavy: 3AS_RPS6_HP
	{
		displayName="[38th] Heavy RPS6";
		scope=2;
		scopeArsenal=2;
		magazines[]=
		{
			"38th_mag_RPS6_WP",
			"38th_Mag_RPS6_FRAG",
			"38th_Mag_Heavy_HEAT",
			"3AS_MK42_HE"
		};
	};
	class launch_B_Titan_Short_F;
	class 38th_PLXAT_base: launch_B_Titan_Short_F
	{
		class WeaponSlotsInfo;
		class Single;
		class TopDown;
		scope = 1;
		author = "38th S-5 Team";
	};
	class 38th_PLX1_Base: 38th_PLXAT_base
	{
		scope = 2;
		displayName = "[38th] PLX-1";
		picture = "ls\core\addons\weapons_plx\data\ui\plx1_ui_ca.paa";
		model = "ls\core\addons\weapons_plx\ls_weapon_plx1";
		modelOptics = "\A3\Weapons_F_Beta\acc\reticle_titan.p3d";
		inertia = 1.2;
		initSpeed = 40;
		descriptionshort = "PLX1 [AT]";
		handAnim[] = {"OFP2_ManSkeleton","\ls\core\addons\weapons_plx\anims\plx1_handanim.rtm"};
		cameraDir = "look";
		canLock = 0;
		magazineWell[] = {};
		magazines[] = {"38th_Mag_PLX_AT","38th_Mag_PLX_FRAG"};
		ace_overpressure_angle = 45;
		ace_overpressure_damage = 0.7;
		ace_overpresssure_priority = 1;
		ace_overpressure_range = 10;
		ace_reloadlaunchers_enabled = 1;
		ace_javelin_enabled = 1;
		class Single: Single
		{
			class BaseSoundModeType{};
			class StandardSound: BaseSoundModeType
			{
				begin1[] = {"ls\core\addons\sounds\weapons\launcher\plx1_shot.wss",10,1,2000};
				soundBegin[] = {"begin1",1};
			};
		};
		class TopDown: TopDown
		{
			class BaseSoundModeType{};
			class StandardSound: BaseSoundModeType
			{
				begin1[] = {"ls\core\addons\sounds\weapons\launcher\plx1_shot.wss",10,1,2000};
				soundBegin[] = {"begin1",1};
			};
		};
		class Library
		{
			libtextdesc = "";
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 200;
		};
	};
	///// VEHICLES
	class SWLW_Z6_base;
	class GMG_40mm;
	class ls_weapon_laati_turret_50mm_he;
	class Mgun;
	class 38th_EWEB_HMG;
	class 38th_vehicle_hmg: 38th_EWEB_HMG
	{
		displayName="[38th] Heavy Mounted MG";
		magazineReloadTime=4;
		showAimCursorInternal=0;
		ballisticsComputer="2 + 16";
		FCSMaxLeadSpeed=60;
		FCSZeroingDelay=0.5;
		maxZeroing=2500;
		shotFromTurret=1;
		magazines[]=
		{
			"38th_EWEB_200rnd_AP_mag",
			"38th_EWEB_200rnd_HE_mag"
		};
		magazineWell[]={};
		class GunParticles
		{
			class 38th_BarrelRefract
			{
				positionName="usti hlavne";
				directionName="usti hlavne up";
				effectName="38th_BarrelRefract";
			};
		};
		modes[]=
		{
			"FullAutoFast",
			"FullAutoSlow",
			"close",
			"short",
			"medium",
			"far_optic1",
			"far_optic2"
		};
		class FullAutoSlow: Mgun
		{
			//reloadTime=0.15000001;
			dispersion=0.00073000003;
			sounds[]=
			{
				"StandardSound"
			};
			soundContinuous=0;
			soundBurst=0;
			minRange=0;
			minRangeProbab=0.30000001;
			midRange=5;
			midRangeProbab=0.69999999;
			maxRange=10;
			maxRangeProbab=0.039999999;
			showToPlayer=1;
			class StandardSound
			{
				soundSetShot[]=
				{
					"38th_VehicleMG_shot_soundset"
				};
			};
		};
		class FullAutoFast: FullAutoSlow
		{
			reloadTime=0.075000003;
			textureType="fastAuto";
			class StandardSound
			{
				soundSetShot[]=
				{
					"38th_VehicleMG_shot_soundset"
				};
			};
		};
		class close: FullAutoFast
		{
			burst=10;
			aiRateOfFire=0.5;
			aiRateOfFireDistance=50;
			minRange=10;
			minRangeProbab=0.050000001;
			midRange=20;
			midRangeProbab=0.69999999;
			maxRange=50;
			maxRangeProbab=0.039999999;
			showToPlayer=0;
			class StandardSound
			{
				soundSetShot[]=
				{
					"38th_VehicleMG_shot_soundset"
				};
			};
		};
		class short: close
		{
			burst=8;
			aiRateOfFire=2;
			aiRateOfFireDistance=300;
			minRange=50;
			minRangeProbab=0.050000001;
			midRange=150;
			midRangeProbab=0.69999999;
			maxRange=300;
			maxRangeProbab=0.039999999;
			class StandardSound
			{
				soundSetShot[]=
				{
					"38th_VehicleMG_shot_soundset"
				};
			};
		};
		class medium: FullAutoSlow
		{
			burst=7;
			aiRateOfFire=4;
			aiRateOfFireDistance=600;
			minRange=200;
			minRangeProbab=0.050000001;
			midRange=300;
			midRangeProbab=0.69999999;
			maxRange=500;
			maxRangeProbab=0.1;
			showToPlayer=0;
			class StandardSound
			{
				soundSetShot[]=
				{
					"38th_VehicleMG_shot_soundset"
				};
			};
		};
		class far_optic1: medium
		{
			requiredOpticType=1;
			showToPlayer=0;
			burst=3;
			aiRateOfFire=10;
			aiRateOfFireDistance=1000;
			minRange=300;
			minRangeProbab=0.050000001;
			midRange=500;
			midRangeProbab=0.40000001;
			maxRange=650;
			maxRangeProbab=0.0099999998;
			class StandardSound
			{
				soundSetShot[]=
				{
					"38th_VehicleMG_shot_soundset"
				};
			};
		};
		class far_optic2: far_optic1
		{
			burst=3;
			requiredOpticType=2;
			minRange=400;
			minRangeProbab=0.050000001;
			midRange=750;
			midRangeProbab=0.69999999;
			maxRange=900;
			maxRangeProbab=0.0099999998;
			aiRateOfFire=10;
			aiRateOfFireDistance=900;
			class StandardSound
			{
				soundSetShot[]=
				{
					"38th_VehicleMG_shot_soundset"
				};
			};
		};
		aiDispersionCoefY=24;
		aiDispersionCoefX=21;
	};
	class 38th_LAAT_BallGun: 38th_EWEB_HMG
	{
		scope=1;
		displayName="[38th] Heavy Repeating Gun";
		magazines[]=
		{
			"38th_EWEB_200rnd_AP_mag",
			"38th_EWEB_200rnd_AP_mag",
			"38th_EWEB_200rnd_AP_mag",
			"38th_EWEB_200rnd_HE_mag",
			"38th_EWEB_200rnd_HE_mag",
			"38th_EWEB_200rnd_HE_mag"
		};
		modes[]=
		{
			"FullAutoFast",
			"FullAutoSlow",
			"close",
			"short",
			"medium",
			"far_optic1",
			"far_optic2"
		};
		class FullAutoSlow: Mgun
		{
			//reloadTime=0.15000001;
			dispersion=0.00073000003;
			sounds[]=
			{
				"StandardSound"
			};
			soundContinuous=0;
			soundBurst=0;
			minRange=0;
			minRangeProbab=0.30000001;
			midRange=5;
			midRangeProbab=0.69999999;
			maxRange=10;
			maxRangeProbab=0.039999999;
			showToPlayer=1;
			class StandardSound
			{
				soundSetShot[]=
				{
					"38th_DoorGun_shot_soundset"
				};
			};
		};
		class FullAutoFast: FullAutoSlow
		{
			reloadTime=0.075000003;
			textureType="fastAuto";
			class StandardSound
			{
				soundSetShot[]=
				{
					"38th_DoorGun_shot_soundset"
				};
			};
		};
		class close: FullAutoFast
		{
			burst=10;
			aiRateOfFire=0.5;
			aiRateOfFireDistance=50;
			minRange=10;
			minRangeProbab=0.050000001;
			midRange=20;
			midRangeProbab=0.69999999;
			maxRange=50;
			maxRangeProbab=0.039999999;
			showToPlayer=0;
			class StandardSound
			{
				soundSetShot[]=
				{
					"38th_DoorGun_shot_soundset"
				};
			};
		};
		class short: close
		{
			burst=8;
			aiRateOfFire=2;
			aiRateOfFireDistance=300;
			minRange=50;
			minRangeProbab=0.050000001;
			midRange=150;
			midRangeProbab=0.69999999;
			maxRange=300;
			maxRangeProbab=0.039999999;
			class StandardSound
			{
				soundSetShot[]=
				{
					"38th_DoorGun_shot_soundset"
				};
			};
		};
		class medium: FullAutoSlow
		{
			burst=7;
			aiRateOfFire=4;
			aiRateOfFireDistance=600;
			minRange=200;
			minRangeProbab=0.050000001;
			midRange=300;
			midRangeProbab=0.69999999;
			maxRange=500;
			maxRangeProbab=0.1;
			showToPlayer=0;
			class StandardSound
			{
				soundSetShot[]=
				{
					"38th_DoorGun_shot_soundset"
				};
			};
		};
		class far_optic1: medium
		{
			requiredOpticType=1;
			showToPlayer=0;
			burst=3;
			aiRateOfFire=10;
			aiRateOfFireDistance=1000;
			minRange=300;
			minRangeProbab=0.050000001;
			midRange=500;
			midRangeProbab=0.40000001;
			maxRange=650;
			maxRangeProbab=0.0099999998;
			class StandardSound
			{
				soundSetShot[]=
				{
					"38th_DoorGun_shot_soundset"
				};
			};
		};
		class far_optic2: far_optic1
		{
			burst=3;
			requiredOpticType=2;
			minRange=400;
			minRangeProbab=0.050000001;
			midRange=750;
			midRangeProbab=0.69999999;
			maxRange=900;
			maxRangeProbab=0.0099999998;
			aiRateOfFire=10;
			aiRateOfFireDistance=900;
			class StandardSound
			{
				soundSetShot[]=
				{
					"38th_EWEB_Shot_SoundSet"
				};
			};
		};
		aiDispersionCoefY=24;
		aiDispersionCoefX=21;
	};
	class 38th_vehicle_gmg: GMG_40mm
	{
		scope=1;
		displayName="[38th] 40mm GMG";
		magazines[]=
		{
			"38th_mag_40mm_blue",
			"38th_mag_40mm_red"
		};
	};
	class 38th_vehicle_autocannon_he_50: ls_weapon_laati_turret_50mm_he
	{
		scope=1;
		displayName="[38th] 50mm AutoCannon HE";
		displaynameshort="50mm HE";
		magazines[]=
		{
			"38th_mag_50mm_he_blue",
			"38th_mag_50mm_he_red"
		};
	};
	class 38th_vehicle_autocannon_apfsd_50: ls_weapon_laati_turret_50mm_he
	{
		scope=1;
		displayName="[38th] 50mm AutoCannon APFSDS";
		displaynameshort="50mm APFSD";
		magazines[]=
		{
			"38th_mag_50mm_apfsd_blue",
			"38th_mag_50mm_apfsd_red"
		};
	};
};