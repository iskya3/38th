class CfgPatches
{
	class 38th_Custom_Turrets
	{
		requiredAddons[]=
		{
			"A3_Characters_F",
			"38th_Core"
		};
		requiredVersion=0.1;
		skipWhenMissingDependencies =1;
		units[]=
		{
		};
		weapons[]=
		{
		};
		magazines[]=
		{
		};
		ammo[]=
		{
		};
	};
};
class CfgLights
{
	class Napalm_ExplosionLighting
	{
		color[] = {1,0.15,0.1,1};
		ambient[] = {1,0.15,0.1,1};
		brightness = 50;
		diffuse[] = {1,0.15,0.1,1};
		position[] = {0,0,0};
		dayLight = 1;			// boolean (0/1). Is light shown during daylight.
		useFlare = 1;			// boolean (0/1). Is light having a flare effect
		flareSize = 25;			// Default is 1
		flareMaxDistance = 2000;	// Default is 600
	};
};
class 38th_BarrelRefract
{
	class 38th_HeatHaze
	{
		simulation="particles";
		type="38th_HeatHaze";
		position[]={0,0,0};
		intensity=53;
		interval=1;
		lifeTime=10;
		qualityLevel=-1;
	};
};

class WPExplosion4 {
	class Explosion1 {
		intensity = 1;
		interval = 1;
		lifeTime = 55;
		position[] = {0, 0, 0};
		qualityLevel = -1;
		simulation = "particles";
		type = "WP_EX4";
	};
	
	class LightExp {
		intensity = 0.001;
		interval = 1;
		lifeTime = 1;
		position[] = {0, 0, 0};
		simulation = "light";
		type = "ExploLight";
	};
	
	class Trails {
		intensity = 1;
		interval = 1;
		lifeTime = 1;
		position[] = {0, 0, 0};
		simulation = "particles";
		type = "WPTrails_2";
	};
	
	class flame_Light {
		simulation = "light";
		type = "FiredLightMed";
		position = "destructionEffect1";
		intensity = 1;
		interval = 1;
		lifeTime = 340;
	};
	
	class flame_sound {
		simulation = "sound";
		type = "Fire";
		position[] = {0, 0, 0};
		intensity = 1;
		interval = 1;
		lifeTime = 100;
	};
	
	class Napalm_Explosion_Lighting
	{
		position[] = {0,0,0};
		simulation = "light";
		type = "Napalm_ExplosionLighting";
		intensity = 10;
		interval = 0;
		lifeTime = 1;
		particleFSLoop = 0;
	};
	class Napalm_ImpactExplosionFX
	{
		position[] = {0,0,0};
		simulation = "particles";
		type = "Explosion_FX";
		intensity = 1;
		interval = 1;
		lifeTime = 1;
		particleFSLoop = 0;
		
	};
	class Napalm_Firelight
	{
		position[] = {0,0,0};
		simulation = "particles";
		type = "Fire_Lighting";
		intensity = 1;
		interval = 0;
		lifeTime = 1;
		particleFSLoop = 0;
	};
	class Napalm_Fire_Visual
	{
		position[] = {0,0,0};
		simulation = "particles";
		type = "Fire_Visuals_2";
		intensity = 1;
		interval = 1;
		lifeTime = 1;
		particleFSLoop = 0;
	};
	class Napalm_Damage
	{
		position[] = {0,0,0};
		simulation = "particles";
		type = "Napalm_FireDamage_2";
		intensity = 1;
		interval = 0;
		lifeTime = 1;
		particleFSLoop = 0;
	};
	class ExplosionSound
	{
		position[] = {0,0,0};
		simulation = "particles";
		type = "Napalm_ExplosionSound";
		intensity = 1;
		interval = 0;
		lifeTime = 0.05;
		particleFSLoop = 0;
	};
};
class CfgFunctions
{
	class SHRP37
	{
		class functions
		{
			file = "38th\38th_Custom_Turrets\functions";
			
            class initializeShell {};
            class createShrapnel {};
            class ShrapnelAtPos {};
            class handleShrapnel {};
		};
	};
};
class Mode_SemiAuto;
class Mode_Burst;
class ACE_CSW_Groups
{
	class 38th_60mm_HE_csw_mag
	{
		38th_60mm_HE_Mag=1;
	};
	class 38th_60mm_SMK_csw_mag
	{
		38th_60mm_SMK_Mag=1;
	};
	class 38th_60mm_ILLUM_csw_mag
	{
		38th_60mm_ILLUM_Mag=1;
	};
	class 38th_60mm_WP_csw_mag
	{
		38th_60mm_WP_Mag=1;
	};
	class 38th_60mm_HE_Guided_csw_mag
	{
		38th_60mm_HE_Guided_Mag=1;
	};
	/// 120
	class 38th_120mm_HE_csw_mag
	{
		38th_120mm_HE_Mag=1;
	};
	class 38th_120mm_SMK_csw_mag
	{
		38th_120mm_SMK_Mag=1;
	};
	class 38th_120mm_ILLUM_csw_mag
	{
		38th_120mm_ILLUM_Mag=1;
	};
	class 38th_120mm_WP_csw_mag
	{
		38th_120mm_WP_Mag=1;
	};
	class 38th_120mm_Airburst_csw_mag
	{
		38th_120mm_Airburst_Mag=1;
	};
	class 38th_120mm_HE_Guided_csw_mag
	{
		38th_120mm_HE_Guided_Mag=1;
	};
	class 38th_EWEB_200rnd_AP_CSW_mag
	{
		38th_EWEB_200rnd_AP_mag=1;
	};
	class 38th_EWEB_200rnd_HE_CSW_mag
	{
		38th_EWEB_200rnd_HE_mag=1;
	};
};
class CfgVehicles
{
	class StaticMGWeapon;
	class Turrets;
	class MainTurret;
	class ViewOptics;
	class LandVehicle;
	class B_Mortar_01_F;
	class 38th_60mm_Mortar: B_Mortar_01_F
	{
		displayname="[38th] 60mm Light Mortar";
		model="3AS\3as_static\Mortar\model\republicmortar.p3d";
		editorPreview="\3as\3as_static\images\3AS_Republic_Mortar.jpg";
		crew="";
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				initelev=0;
				maxelev=40;
				minelev=-15;
				initturn=0;
				maxturn=360;
				minturn=-360;
				animationSourceBody="Mainturret";
				animationSourceGun="MainGun";
				body="Mainturret";
				gun="MainGun";
				weapons[]=
				{
					"38th_60mm"
				};
				magazines[]={};
				memoryPointGunnerOptics="gunnerview";
				cameraDir="look";
				discreteDistanceCameraPoint[]=
				{
					"eye"
				};
				gunnerOutOpticsModel="\A3\weapons_f\reticle\Optics_Gunner_AAA_01_w_F";
				elevationMode=0;
				gunnerforceoptics=1;
				class OpticsIn
				{
					class Wide
					{
						initAngleX=0;
						minAngleX=-30;
						maxAngleX=30;
						initAngleY=0;
						minAngleY=-100;
						maxAngleY=100;
						initFov=0.155;
						minFov=0.155;
						maxFov=0.155;
						visionMode[]=
						{
							"Normal",
							"NVG",
							"Ti"
						};
						thermalMode[]={0,1};
						gunnerOpticsModel="A3\drones_f\Weapons_F_Gamma\Reticle\UGV_01_Optics_Gunner_F";
						gunnerOpticsEffect[]={};
					};
					class Narrow: Wide
					{
						gunnerOpticsModel="A3\drones_f\Weapons_F_Gamma\Reticle\UGV_01_Optics_Gunner_F";
						initFov=0.046999998;
						minFov=0.046999998;
						maxFov=0.046999998;
					};
				};
				class ViewOptics;
			};
		};
		class Damage
		{
			tex[]={};
			mat[]=
			{
				"3as\3as_static\mortar\data\base.rvmat",
				"A3\Static_F_Gamma\data\StaticTurret_01_damage.rvmat",
				"A3\Static_F_Gamma\data\StaticTurret_01_destruct.rvmat",
				"3as\3as_static\mortar\data\tube.rvmat",
				"A3\Static_F_Gamma\data\StaticTurret_02_damage.rvmat",
				"A3\Static_F_Gamma\data\StaticTurret_02_destruct.rvmat"
			};
		};
		hiddenSelections[]=
		{
			"Camo_1",
			"Camo_2"
		};
		hiddenSelectionsTextures[]=
		{
			"\3as\3as_static\Mortar\data\base_co.paa",
			"\3as\3as_static\Mortar\data\tube_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"\3as\3as_static\Mortar\data\base.rvmat",
			"\3as\3as_static\Mortar\data\tube.rvmat"
		};
		faction="B_38th_Republic_F";
		scope=1;
		scopeCurator=1;
		class ace_csw
		{
			enabled=1;
			disassembleWeapon="38th_60mm_carry";
			disassembleTurret="";
			desiredAmmo=3;
			ammoLoadTime=0.3;
			ammoUnloadTime=0.3;
			proxyWeapon="ace_mk6mortar_fnc_csw_getProxyWeapon";
			magazineLocation="_target selectionPosition 'usti hlavne'";
		};
	};
	class 38th_120mm_Mortar: 38th_60mm_Mortar
	{
		displayname="[38th] 120mm Heavy Mortar";
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				weapons[]=
				{
					"38th_120mm"
				};
			};
		};
		class ace_csw
		{
			enabled=1;
			disassembleWeapon="38th_120mm_carry";
			disassembleTurret="";
			desiredAmmo=3;
			ammoLoadTime=0.3;
			ammoUnloadTime=0.3;
			proxyWeapon="ace_mk6mortar_fnc_csw_getProxyWeapon";
			magazineLocation="_target selectionPosition 'usti hlavne'";
		};
	};
	class 38th_EWEB_Base_F: StaticMGWeapon
	{
		author="isky";
		scope=0;
		scopeCurator=0;
		side=1;
		faction="38th_main";
		displayName="[38th] E-WEB";
		model="3AS\3AS_Static\HeavyRepeater\3AS_HeavyRepeaterShieldStatic.p3d";
		editorSubcategory="EdSubcat_Turrets";
		picture="\A3\Static_f_gamma\data\ui\gear_StaticTurret_MG_CA.paa";
		UiPicture="\A3\Static_f_gamma\data\ui\gear_StaticTurret_MG_CA.paa";
		cost=150000;
		getInAction="";
		getOutAction="";
		epeImpulseDamageCoef=0;
		antiRollbarForceCoef=65;
		antiRollbarForceLimit=100;
		antiRollbarSpeedMin=0;
		antiRollbarSpeedMax=300;
		armor = 300;
		armorStructural = 6;
		class Damage
		{
			tex[]={};
			mat[]=
			{
				"3as\3as_static\HeavyRepeater\data\Textures\base.rvmat",
				"3as\3as_static\HeavyRepeater\data\Textures\base.rvmat",
				"A3\Static_F_Gamma\data\StaticTurret_01_destruct.rvmat"
			};
		};
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				optics=1;
				discreteDistance[]={100,200,300,400,600,800,1000,1200,1500,1600,1700,1800,1900,2000};
				discreteDistanceInitIndex=2;
				turretInfoType="RscOptics_crows";
				gunnerOpticsModel="\a3\weapons_f_gamma\reticle\HMG_01_Optics_Gunner_F";
				minElev=-18;
				maxElev=60;
				minTurn=-180;
				maxTurn=180;
				magazines[]={};
				gunnerAction="RepeaterGunner";
				gunnergetInAction="";
				gunnergetOutAction="";
				displayName="";
				disableSoundAttenuation=1;
				class ViewOptics: ViewOptics
				{
					initAngleX=0;
					minAngleX=-30;
					maxAngleX=30;
					initAngleY=0;
					minAngleY=-100;
					maxAngleY=100;
					initFov=0.1;
					minFov=0.0625;
					maxFov=1.25;
					visionMode[]=
					{
						"Normal",
						"NVG",
						"Ti"
					};
					thermalMode[]={0,1};
				};
				gunnerRightHandAnimName="Heavygun";
				gunnerLeftHandAnimName="Heavygun";
				ejectDeadGunner=1;
			};
		};
		soundGetOut[]=
		{
			"A3\sounds_f\dummysound",
			0.00099999993,
			1,
			5
		};
		soundGetIn[]=
		{
			"A3\sounds_f\dummysound",
			0.00031622773,
			1,
			5
		};
	};
	class 38th_EWEB_Base_B: 38th_EWEB_Base_F
	{
		displayName="[38th] E-WEB";
		scope=2;
		scopeCurator=2;
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				weapons[]=
				{
					"38th_EWEB_HMG"
				};
				magazines[]={};
			};
		};
		class AnimationSources
		{
			class muzzle_source
			{
				source="reload";
				weapon="38th_EWEB_HMG";
			};
			class muzzle_source_rot
			{
				source="ammorandom";
				weapon="38th_EWEB_HMG";
			};
			class minigun
			{
				source="revolving";
				weapon="38th_EWEB_HMG";
			};
		};
		class ace_csw
		{
			enabled=1;
			disassembleWeapon="38th_EWEB_CSW";
			disassembleTurret="";
			desiredAmmo=200;
			ammoLoadTime=3;
			ammoUnloadTime=3;
			proxyWeapon="38th_EWEB_Proxy";
			magazineLocation="_target selectionPosition 'usti hlavne'";
		};
	};
};

class cfgWeapons
{
	class LMG_03_base_F;
	class Mgun;
	class CannonCore;
	class 38th_60mm: CannonCore
	{
		scope=1;
		displayname="[38th] 60mm";
		cursor="mortar";
		cursorAim="EmptyCursor";
		sounds[]=
		{
			"StandardSound"
		};
		class StandardSound
		{
			begin1[]=
			{
				"A3\Sounds_F\arsenal\weapons_static\Mortar\mortar_01",
				1.25893,
				1.35,
				250
			};
			begin2[]=
			{
				"A3\Sounds_F\arsenal\weapons_static\Mortar\mortar_02",
				1.25893,
				1.4,
				250
			};
			soundBegin[]=
			{
				"begin1",
				0.5,
				"begin2",
				0.5
			};
			SoundSetShot[]=
			{
				"Mortar82mm_Shot_SoundSet",
				"Mortar82mm_Tail_SoundSet"
			};
		};
		reloadSound[]=
		{
			"A3\Sounds_F\arsenal\weapons_static\Mortar\reload_mortar",
			1,
			1.35,
			20
		};
		reloadMagazineSound[]=
		{
			"A3\Sounds_F\arsenal\weapons_static\Mortar\reload_magazine_Mortar",
			1,
			1.35,
			20
		};
		soundServo[]=
		{
			"",
			9.9999997e-005,
			1
		};
		reloadTime=1.8;
		magazineReloadTime=0.15000001;
		autoReload=1;
		canLock=0;
		magazines[]=
		{
			"38th_60mm_HE_Mag",
			"38th_60mm_SMK_Mag",
			"38th_60mm_ILLUM_Mag",
			"38th_60mm_HE_Guided_Mag",
			"38th_60mm_WP_Mag"
		};
		ballisticsComputer=2;
		class GunParticles
		{
			class FirstEffect
			{
				effectName="MortarFired";
				positionName="Usti Hlavne";
				directionName="Konec Hlavne";
			};
			class 38th_BarrelRefract
			{
				positionName="usti hlavne";
				directionName="usti hlavne up";
				effectName="38th_BarrelRefract";
			};
		};
		modes[]=
		{
			"Single1",
			"Single2",
			"Single3",
			"Single4",
			"Burst1",
			"Burst2",
			"Burst3"
		};
		class Single1: Mode_SemiAuto
		{
			displayName="Charge 0";
			sounds[]=
			{
				"StandardSound"
			};
			class StandardSound
			{
				begin1[]=
				{
					"A3\Sounds_F\arsenal\weapons_static\Mortar\mortar_01",
					1.25893,
					1.35,
					250
				};
				begin2[]=
				{
					"A3\Sounds_F\arsenal\weapons_static\Mortar\mortar_02",
					1.25893,
					1.4,
					250
				};
				soundBegin[]=
				{
					"begin1",
					0.5,
					"begin2",
					0.5
				};
				SoundSetShot[]=
				{
					"Mortar82mm_Shot_SoundSet",
					"Mortar82mm_Tail_SoundSet"
				};
			};
			reloadSound[]=
			{
				"A3\Sounds_F\arsenal\weapons_static\Mortar\reload_mortar",
				1,
				1.35,
				20
			};
			reloadTime=2.25;
			artilleryDispersion=5;
			artilleryCharge=0.34999999;
			aiRateOfFire=1;
			aiRateOfFireDistance=8;
			minRange=0;
			minRangeProbab=0.0099999998;
			midRange=1;
			midRangeProbab=0.0099999998;
			maxRange=2;
			maxRangeProbab=0.0099999998;
		};
		class Single2: Single1
		{
			displayName="Charge 1";
			artilleryCharge=0.69999999;
			artilleryDispersion=5.5;
		};
		class Single3: Single1
		{
			displayName="Charge 2";
			artilleryCharge=0.875;
			artilleryDispersion=6.5;
		};
		class Single4: Single1
		{
			displayName="Charge 3";
			artilleryCharge=1.05;
			artilleryDispersion=8;
		};
		class Burst1: Mode_Burst
		{
			showToPlayer=0;
			displayName="$STR_A3_mortar_82mm_Burst10";
			burst=4;
			aiBurstTerminable=1;
			sounds[]=
			{
				"StandardSound"
			};
			class StandardSound
			{
				begin1[]=
				{
					"A3\Sounds_F\arsenal\weapons_static\Mortar\mortar_01",
					1.258925,
					1.35,
					250
				};
				begin2[]=
				{
					"A3\Sounds_F\arsenal\weapons_static\Mortar\mortar_02",
					1.258925,
					1.45,
					250
				};
				soundBegin[]=
				{
					"begin1",
					0.5,
					"begin2",
					0.5
				};
			};
			reloadSound[]=
			{
				"A3\Sounds_F\arsenal\weapons_static\Mortar\reload_mortar",
				1,
				1.35,
				20
			};
			soundServo[]=
			{
				"",
				9.9999997e-005,
				1
			};
			soundBurst=0;
			reloadTime=1.8;
			artilleryDispersion=2.2;
			artilleryCharge=0.34999999;
			minRange=60;
			minRangeProbab=0.5;
			midRange=290;
			midRangeProbab=0.69999999;
			maxRange=665;
			maxRangeProbab=0.5;
		};
		class Burst2: Burst1
		{
			showToPlayer=0;
			displayName="$STR_A3_mortar_82mm_Burst20";
			artilleryCharge=0.69999999;
			minRange=230;
			minRangeProbab=0.40000001;
			midRange=1175;
			midRangeProbab=0.60000002;
			maxRange=2660;
			maxRangeProbab=0.40000001;
		};
		class Burst3: Burst1
		{
			showToPlayer=0;
			displayName="$STR_A3_mortar_82mm_Burst30";
			artilleryCharge=1;
			minRange=540;
			minRangeProbab=0.30000001;
			midRange=2355;
			midRangeProbab=0.40000001;
			maxRange=5500;
			maxRangeProbab=0.30000001;
		};
	};
	class 38th_120mm: 38th_60mm
	{
		scope=1;
		displayname="[38th] 120mm";
		cursor="mortar";
		cursorAim="EmptyCursor";
		magazines[]=
		{
			"38th_120mm_HE_Mag",
			"38th_120mm_SMK_Mag",
			"38th_120mm_ILLUM_Mag",
			"38th_120mm_HE_Guided_Mag",
			"38th_120mm_WP_Mag",
			"38th_120mm_Airburst_Mag"
		};
		class GunParticles
		{
			class Effect1
			{
				effectName="ArtilleryFired1";
				positionName="Usti hlavne3";
				directionName="Konec hlavne3";
			};
			class 38th_BarrelRefract
			{
				positionName="usti hlavne";
				directionName="usti hlavne up";
				effectName="38th_BarrelRefract";
			};
		};
		modes[]=
		{
			"Single1",
			"Single2",
			"Single3",
			"Burst1",
			"Burst2",
			"Burst3"
		};
		class Single1: Single1
		{
			displayName="Charge 0";
			sounds[]=
			{
				"StandardSound"
			};
			class StandardSound
			{
				begin1[]=
				{
					"38th\38th_Custom_Turrets\sound\120mm_shot",
					2.5118899,
					1,
					1500
				};
				soundBegin[]=
				{
					"begin1",
					1
				};
			};
			reloadTime=6;
			minRange=0;
			midRange=0;
			maxRange=0;
			artilleryDispersion=0.5;
			artilleryCharge=0.140055;
		};
		class Single2: Single1
		{
			displayName="Charge 1";
			artilleryDispersion=0.8;
			artilleryCharge=0.245022;
		};
		class Single3: Single1
		{
			displayName="Charge 2";
			artilleryDispersion=1;
			artilleryCharge=0.34555;
		};
		class Burst1: Burst1
		{
			showToPlayer=0;
			displayName="Charge 0";
			burst=6;
			sounds[]=
			{
				"StandardSound"
			};
			class StandardSound
			{
				begin1[]=
				{
					"38th\38th_Custom_Turrets\sound\120mm_shot",
					2.5118899,
					1,
					1500
				};
				soundBegin[]=
				{
					"begin1",
					1
				};
			};
			soundBurst=0;
			reloadTime=10;
			minRange=300;
			minRangeProbab=0.5;
			midRange=1500;
			midRangeProbab=0.69999999;
			maxRange=2400;
			maxRangeProbab=0.5;
			artilleryDispersion=0.5;
			artilleryCharge=0.140055;
		};
		class Burst2: Burst1
		{
			showToPlayer=0;
			displayName="Charge 1";
			minRange=2000;
			minRangeProbab=0.40000001;
			midRange=3000;
			midRangeProbab=0.60000002;
			maxRange=6200;
			maxRangeProbab=0.40000001;
			artilleryDispersion=0.8;
			artilleryCharge=0.245022;
		};
		class Burst3: Burst1
		{
			showToPlayer=0;
			displayName="Charge 2";
			minRange=5200;
			minRangeProbab=0.30000001;
			midRange=8000;
			midRangeProbab=0.40000001;
			maxRange=13000;
			maxRangeProbab=0.30000001;
			artilleryDispersion=1;
			artilleryCharge=0.34555;
		};
	};
	class 38th_EWEB_HMG: LMG_03_base_F
	{
		displayName="[38th] E-Web Heavy";
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
					"38th_EWEB_Shot_SoundSet"
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
					"38th_EWEB_Shot_SoundSet"
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
					"38th_EWEB_Shot_SoundSet"
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
					"38th_EWEB_Shot_SoundSet"
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
					"38th_EWEB_Shot_SoundSet"
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
					"38th_EWEB_Shot_SoundSet"
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
	class 38th_60mm_proxy: 38th_60mm
	{
		magazineReloadTime=1;
	};
	class 38th_EWEB_Proxy: 38th_EWEB_HMG
	{
		magazineReloadTime=1;
	};
	class Launcher_Base_F;
	class WeaponSlotsInfo;
	class 38th_60mm_carry: Launcher_Base_F
	{
		scope=2;
		modes[]={};
		displayname="[38th] 60mm Mortar";
		model="\z\ace\addons\apl\ACE_CSW_Bag.p3d";
		class ACE_CSW
		{
			type="mount";
			deployTime=3;
			pickupTime=2;
			deploy="38th_60mm_Mortar";
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class MuzzleSlot
			{
				iconScale=0.1;
			};
			mass=100;
		};
	};
	class 38th_120mm_carry: Launcher_Base_F
	{
		scope=2;
		modes[]={};
		displayname="[38th] 120mm Mortar";
		model="\z\ace\addons\apl\ACE_CSW_Bag.p3d";
		class ACE_CSW
		{
			type="mount";
			deployTime=3;
			pickupTime=2;
			deploy="38th_120mm_Mortar";
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class MuzzleSlot
			{
				iconScale=0.1;
			};
			mass=200;
		};
	};
	class 38th_EWEB_CSW: Launcher_Base_F
	{
		scope=2;
		modes[]={};
		displayname="[38th] E-WEB HMG";
		model="\z\ace\addons\apl\ACE_CSW_Bag.p3d";
		picture="\z\ace\addons\dragon\data\m47_dragon_item_ca.paa";
		class ACE_CSW
		{
			type="mount";
			deployTime=3;
			pickupTime=2;
			deploy="38th_EWEB_Base_B";
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class MuzzleSlot
			{
				iconScale=0.1;
			};
			mass=100;
		};
	};
};
class CfgMagazines
{
	class VehicleMagazine;
	class 38th_60mm_HE_Mag: VehicleMagazine
	{
		displayname="[38th] 3rnd 60mm High Explosive";
		ammo="38th_60mm_HE";
		displaynamemagazine="60mm HE";
		shortnamemagazine="60mm HE";
		displayNameMFDFormat="HE";
		displayNameShort="HE";
		count=3;
		initspeed=200;
		muzzleImpulseFactor[]={0,0};
		tracersevery=1;
	};
	class 38th_60mm_HE_Guided_Mag: 38th_60mm_HE_Mag
	{
		displayname="[38th] 3rnd 60mm Laser Guided";
		ammo="38th_60mm_LaserGuided";
		displaynamemagazine="60mm Laser Guided";
		shortnamemagazine="60mm Laser Guided";
		displayNameMFDFormat="Laser Guided";
		displayNameShort="Laser Guided";
		count=3;
		initspeed=300;
		muzzleImpulseFactor[]={0,0};
		tracersevery=1;
	};
	class 38th_60mm_SMK_Mag: 38th_60mm_HE_Mag
	{
		displayname="[38th] 3rnd 60mm Smoke Shells";
		ammo="38th_60mm_SMK";
		count=3;
		displaynamemagazine="[38th]60mm Smoke";
		shortnamemagazine="[38th]60mm Smoke Shells";
		displayNameMFDFormat="Smoke";
		displayNameShort="Smoke";
	};
	class 38th_60mm_ILLUM_Mag: 38th_60mm_HE_Mag
	{
		displayname="[38th] 3rnd 60mm Illumination Shells";
		ammo="38th_60mm_ILLUM";
		count=3;
		displaynamemagazine="60mm  Illumination";
		shortnamemagazine="[38th]60mm Illumination Shells";
		displayNameMFDFormat="Star Shells";
		displayNameShort="Star Shells";
	};
	class 38th_60mm_WP_Mag: 38th_60mm_HE_Mag
	{
		displayname="[38th] 3rnd 60mm White Phosphorous Shells";
		ammo="38th_60mm_M722_WP";
		count=3;
		displaynamemagazine="60mm White Phosphorous";
		shortnamemagazine="[38th] 60mm White Phosphorous Shells";
		displayNameMFDFormat="White Phosphor";
		displayNameShort="White Phosphor";
	};
	class 38th_60mm_HE_csw_mag: 38th_60mm_HE_Mag
	{
		scope=2;
		type=256;
		count=3;
		mass=25;
		model="\A3\Weapons_F\Ammo\shell.p3d";
		picture="\z\ace\addons\mk6mortar\UI\w_l16_ammo_he_ca.paa";
		ACE_isBelt=1;
	};
	class 38th_60mm_SMK_csw_mag: 38th_60mm_SMK_Mag
	{
		scope=2;
		type=256;
		count=3;
		mass=20;
		model="\A3\Weapons_F\Ammo\shell.p3d";
		picture="\z\ace\addons\mk6mortar\UI\w_l16_ammo_he_ca.paa";
		ACE_isBelt=1;
	};
	class 38th_60mm_ILLUM_csw_mag: 38th_60mm_ILLUM_Mag
	{
		scope=2;
		type=256;
		count=3;
		mass=10;
		model="\A3\Weapons_F\Ammo\shell.p3d";
		picture="\z\ace\addons\mk6mortar\UI\w_l16_ammo_he_ca.paa";
		ACE_isBelt=1;
	};
/// EXPERIMENTAL 
	class 38th_60mm_WP_csw_mag: 38th_60mm_WP_Mag
	{
		scope=2;
		type=256;
		count=3;
		mass=10;
		model="\A3\Weapons_F\Ammo\shell.p3d";
		picture="\z\ace\addons\mk6mortar\UI\w_l16_ammo_he_ca.paa";
		ACE_isBelt=1;
	};
	class 38th_60mm_HE_Guided_csw_mag: 38th_60mm_HE_Guided_Mag
	{
		scope=2;
		type=256;
		count=3;
		mass=25;
		model="\A3\Weapons_F\Ammo\shell.p3d";
		picture="\z\ace\addons\mk6mortar\UI\w_l16_ammo_he_ca.paa";
		ACE_isBelt=1;
	};
//// 120mm mortar
	class 38th_120mm_HE_Mag: VehicleMagazine
	{
		displayname="[38th] 3rnd 120mm High Explosive";
		ammo="38th_120mm_HE";
		displaynamemagazine="120mm HE";
		shortnamemagazine="120mm HE";
		displayNameMFDFormat="HE";
		displayNameShort="HE";
		count=3;
		initspeed=1000;
		muzzleImpulseFactor[]={0,0};
		tracersevery=1;
	};
	class 38th_120mm_HE_Guided_Mag: 38th_120mm_HE_Mag
	{
		displayname="[38th] 3rnd 120mm Laser Guided";
		ammo="38th_120mm_LaserGuided";
		displaynamemagazine="120mm Laser Guided";
		shortnamemagazine="120mm Laser Guided";
		displayNameMFDFormat="Laser Guided";
		displayNameShort="Laser Guided";
		count=3;
		initspeed=1000;
		muzzleImpulseFactor[]={0,0};
		tracersevery=1;
	};
	class 38th_120mm_SMK_Mag: 38th_120mm_HE_Mag
	{
		displayname="[38th] 3rnd 120mm Smoke Shells";
		ammo="38th_120mm_SMK";
		count=3;
		displaynamemagazine="[38th] 120mm Smoke";
		shortnamemagazine="[38th] 120mm Smoke Shells";
		displayNameMFDFormat="Smoke";
		displayNameShort="Smoke";
	};
	class 38th_120mm_ILLUM_Mag: 38th_120mm_HE_Mag
	{
		displayname="[38th] 3rnd 120mm Illumination Shells";
		ammo="38th_120mm_ILLUM";
		count=3;
		displaynamemagazine="120mm Illumination";
		shortnamemagazine="[38th] 120mm Illumination Shells";
		displayNameMFDFormat="Illumination Shells";
		displayNameShort="Illumination Shells";
	};
	class 38th_120mm_WP_Mag: 38th_120mm_HE_Mag
	{
		displayname="[38th] 3rnd 120mm White Phosphorous Shells";
		ammo="38th_120mm_M722_WP";
		count=3;
		displaynamemagazine="120mm White Phosphorous";
		shortnamemagazine="[38th] 120mm White Phosphorous Shells";
		displayNameMFDFormat="White Phosphor";
		displayNameShort="White Phosphor";
	};
	class 38th_120mm_Airburst_Mag: 38th_120mm_HE_Mag
	{
		displayname="[38th] 3rnd 120mm Airburst Shells";
		ammo="38th_120mm_Airburst";
		count=3;
		displaynamemagazine="120mm Airburst";
		shortnamemagazine="[38th] 120mm Airburst";
		displayNameMFDFormat="Airburst";
		displayNameShort="Airburst";
	};
	class 38th_120mm_HE_csw_mag: 38th_120mm_HE_Mag
	{
		scope=2;
		type=256;
		count=3;
		mass=35;
		model="\A3\Weapons_F\Ammo\shell.p3d";
		picture="\z\ace\addons\mk6mortar\UI\w_l16_ammo_he_ca.paa";
		ACE_isBelt=1;
	};
	class 38th_120mm_SMK_csw_mag: 38th_120mm_SMK_Mag
	{
		scope=2;
		type=256;
		count=3;
		mass=40;
		model="\A3\Weapons_F\Ammo\shell.p3d";
		picture="\z\ace\addons\mk6mortar\UI\w_l16_ammo_he_ca.paa";
		ACE_isBelt=1;
	};
	class 38th_120mm_ILLUM_csw_mag: 38th_120mm_ILLUM_Mag
	{
		scope=2;
		type=256;
		count=3;
		mass=30;
		model="\A3\Weapons_F\Ammo\shell.p3d";
		picture="\z\ace\addons\mk6mortar\UI\w_l16_ammo_he_ca.paa";
		ACE_isBelt=1;
	};
/// EXPERIMENTAL 
	class 38th_120mm_WP_csw_mag: 38th_120mm_WP_Mag
	{
		scope=2;
		type=256;
		count=3;
		mass=40;
		model="\A3\Weapons_F\Ammo\shell.p3d";
		picture="\z\ace\addons\mk6mortar\UI\w_l16_ammo_he_ca.paa";
		ACE_isBelt=1;
	};
	class 38th_120mm_Airburst_csw_mag: 38th_120mm_Airburst_Mag
	{
		scope=2;
		type=256;
		count=3;
		mass=40;
		model="\A3\Weapons_F\Ammo\shell.p3d";
		picture="\z\ace\addons\mk6mortar\UI\w_l16_ammo_he_ca.paa";
		ACE_isBelt=1;
	};
	class 38th_120mm_HE_Guided_csw_mag: 38th_120mm_HE_Guided_Mag
	{
		scope=2;
		type=256;
		count=3;
		mass=35;
		model="\A3\Weapons_F\Ammo\shell.p3d";
		picture="\z\ace\addons\mk6mortar\UI\w_l16_ammo_he_ca.paa";
		ACE_isBelt=1;
	};

//// EWEB 
	class 38th_EWEB_200rnd_AP_mag: VehicleMagazine
	{
		displayname="[38th] 200Rnd E-WEB Box (Ball)";
		ammo="38th_ammo_50_blue";
		displaynamemagazine="Ball";
		shortnamemagazine="Ball";
		displayNameMFDFormat="Ball";
		displayNameShort="Ball";
		count=200;
		initspeed=790;
		muzzleImpulseFactor[]={0,0};
		tracersevery=1;
	};
	class 38th_EWEB_200rnd_HE_mag: VehicleMagazine
	{
		displayname="[38th] 200Rnd E-WEB Box (HE)";
		ammo="38th_ammo_50mm_he_blue";
		displaynamemagazine="HE";
		shortnamemagazine="HE";
		displayNameMFDFormat="HE";
		displayNameShort="HE";
		count=200;
		initspeed=790;
		muzzleImpulseFactor[]={0,0};
		tracersevery=1;
	};
	class 38th_EWEB_200rnd_AP_CSW_mag: 38th_EWEB_200rnd_AP_mag
	{
		scope=2;
		type=256;
		count=200;
		mass=60;
		picture="\z\ace\addons\csw\UI\ammoBox_50bmg_ca.paa";
		model="\A3\Structures_F_EPB\Items\Military\Ammobox_rounds_F.p3d";
		ACE_isBelt=1;
	};
	class 38th_EWEB_200rnd_HE_CSW_mag: 38th_EWEB_200rnd_HE_mag
	{
		scope=2;
		type=256;
		count=200;
		mass=100;
		picture="\z\ace\addons\csw\UI\ammoBox_50bmg_ca.paa";
		model="\A3\Structures_F_EPB\Items\Military\Ammobox_rounds_F.p3d";
		ACE_isBelt=1;
	};
};
class CfgAmmo
{
	class Sh_82mm_AMOS;
	class FlareCore;
	class ShotDeployBase;
	class Components;
	class SensorTemplateIR;
	class SensorTemplatePassiveRadar;
	class SensorTemplateLaser;
	class SensorTemplateActiveRadar;
	class SensorTemplateVisual;
	class 38th_60mm_HE: Sh_82mm_AMOS
	{
		ace_frag_enabled=1;
		ace_frag_metal=897.9024;
		ace_frag_charge=112;
		ace_frag_gurney_c=2440;
		ace_frag_gurney_k="1/2";
		ace_frag_classes[]=
		{
			"ACE_frag_tiny",
			"ACE_frag_medium_HD"
		};
		ace_frag_skip=0;
		ace_frag_force=1;
		hit=125;
		indirectHit=52;
		indirectHitRange=12.5;
		warheadName="HE";
		dangerRadiusHit=750;
		suppressionRadiusHit=75;
		typicalSpeed=700;
		caliber=5;
		deflecting=0;
		explosive=0.80000001;
		cost=50;
		model="3as\3AS_Weapons\Data\tracer_shell_Blue.p3d";
		effectFly="3AS_PlasmaBolt_Medium_Blue_Fly";
		CraterEffects="ArtyShellCrater";
		ExplosionEffects="MortarExplosion";
		whistleDist=60;
		artilleryLock=1;
		thrust=0;
		timeToLive=180;
		airFriction=0;
		sideairFriction=0;
		SoundSetExplosion[]=
		{
			"Mortar_Exp_SoundSet",
			"Mortar_Tail_SoundSet",
			"Explosion_Debris_SoundSet"
		};
		soundHit1[]=
		{
			"A3\Sounds_F\arsenal\explosives\Grenades\Explosion_gng_grenades_01",
			5.1622777,
			0.5,
			1500
		};
		soundHit2[]=
		{
			"A3\Sounds_F\arsenal\explosives\Grenades\Explosion_gng_grenades_02",
			5.1622777,
			0.60000002,
			1500
		};
		soundHit3[]=
		{
			"A3\Sounds_F\arsenal\explosives\Grenades\Explosion_gng_grenades_03",
			5.1622777,
			0.40000001,
			1500
		};
		soundHit4[]=
		{
			"A3\Sounds_F\arsenal\explosives\Grenades\Explosion_gng_grenades_04",
			5.1622777,
			0.69999999,
			1500
		};
		multiSoundHit[]=
		{
			"soundHit1",
			0.25,
			"soundHit2",
			0.25,
			"soundHit3",
			0.25,
			"soundHit4",
			0.25
		};
		class CamShakeExplode
		{
			power=15;
			duration=2.4000001;
			frequency=10;
			distance=100.599;
		};
		class CamShakeHit
		{
			power=155;
			duration=0.80000001;
			frequency=20;
			distance=1;
		};
		class CamShakeFire
		{
			power=1.52844;
			duration=1.4;
			frequency=10;
			distance=15;
		};
		class CamShakePlayerFire
		{
			power=0.0099999998;
			duration=0.1;
			frequency=20;
			distance=1;
		};
	};
	class 38th_60mm_SMK: ShotDeployBase
	{
		submunitionAmmo="SmokeShellArty";
		effectFly="3AS_PlasmaBolt_Medium_Blue_Fly";
		submunitionConeType[]=
		{
			"poissondisc",
			5
		};
		submunitionConeAngle=5;
		triggerDistance=100;
		cost=200;
		airFriction=0;
		muzzleEffect="";
		hit=300;
		class CamShakeFire
		{
			power=3.3097501;
			duration=2.2;
			frequency=20;
			distance=87.635597;
		};
		class CamShakePlayerFire
		{
			power=0.02;
			duration=0.1;
			frequency=20;
			distance=1;
		};
	};
	class 38th_60mm_ILLUM: FlareCore
	{
		timeToLive=90;
		model="3as\3AS_Weapons\Data\tracer_shell_blue.p3d";
		effectFly="3AS_PlasmaBolt_Medium_Blue_Fly";
		effectFlare="FlareShells";
		aimAboveTarget[]={30,60,120,180,240,300,360};
		aimAboveDefault=4;
		brightness=10000;
		flareSize=6;
		size=1;
		triggerTime=-1;
		triggerSpeedCoef=1;
		lightColor[]={0.94999999,0.94999999,1,0.5};
		smokeColor[]={1,1,1,0.5};
		intensity=1250000;
	};
///EXPERIMENTAL STUFF
	class Sh_82mm_AMOS_LG;
	class M_Mo_82mm_AT_LG;
	class 38th_60mm_M722_WP : Sh_82mm_AMOS 
	{
		hit = 110;
		effectFly="3AS_PlasmaBolt_Medium_Blue_Fly";
		indirectHit = 110;
		indirectHitRange = 15;
		ace_frag_classes[] = 
		{			
			"ACE_frag_tiny",
			"ACE_frag_small",
			"ACE_frag_medium"
		};
		ace_frag_enable = 1;
		ace_frag_metal = 1200;
		ace_frag_charge = 450;
		class CamShakeExplode 
		{
			distance = 55;
			duration = 3;
			frequency = 20;
			power = 20;
		};
		SH = 500;
		ExplosionEffects = "WPExplosion4";
	};
	class 38th_60mm_LaserGuided : Sh_82mm_AMOS_LG {
		submunitionAmmo = "38th_60mm_LaserGuided_Deploy";
		triggerDistance = 900;
		
		simulation = "shotSubmunitions";
		submunitionCount = 1;
		submunitionConeAngle = 0.33;
	};
	class 38th_60mm_LaserGuided_Deploy : M_Mo_82mm_AT_LG {
		hit = 500;
		effectFly="3AS_PlasmaBolt_Medium_Blue_Fly";
		indirectHit = 100;
		indirectHitRange = 14;
		maneuvrability = 14;
		ace_frag_skip = 1;
		laserLock = 1;
		autoSeekTarget = 1;
		maxControlRange = 6000;
		sideAirFriction = 0.1;
		lockSeekRadius = 400;
		weaponLockSystem=4;
		class Components: Components
		{
			class SensorsManagerComponent
			{
				class Components
				{
					class LaserSensorComponent: SensorTemplateLaser
					{
						class AirTarget
						{
							minRange=800;
							maxRange=800;
							objectDistanceLimitCoef=-1;
							viewDistanceLimitCoef=-1;
						};
						class GroundTarget
						{
							minRange=800;
							maxRange=800;
							objectDistanceLimitCoef=-1;
							viewDistanceLimitCoef=-1;
						};
						angleRangeHorizontal=40;
						angleRangeVertical=40;
					};
				};
			};
		};	
	};
	/// 120MM
	class Sh_155mm_AMOS;
	class 38th_120mm_HE: Sh_155mm_AMOS
	{
		ace_frag_metal=1100;
		ace_frag_charge=935.534263125;
		ace_frag_gurney_c=2970;
		ace_frag_gurney_k="1/2";
		ace_frag_classes[]=
		{
			"ACE_frag_small",
			"ACE_frag_medium",
			"ACE_frag_large"

		};
		ace_frag_skip=0;
		ace_frag_force=1;
		hit=200;
		indirectHit=100;
		indirectHitRange=15;
		warheadName="HE";
		dangerRadiusHit=70;
		suppressionRadiusHit=75;
		typicalSpeed=1000;
		caliber=5;
		deflecting=0;
		explosive=0.80000001;
		cost=50;
		model="3as\3AS_Weapons\Data\tracer_shell_Blue.p3d";
		effectFly="3AS_PlasmaBolt_Medium_Blue_Fly";
		CraterEffects="ArtyShellCrater";
		ExplosionEffects="MortarExplosion";
		whistleDist=120;
		artilleryLock=1;
		thrust=0;
		timeToLive=180;
		airFriction=0;
		sideairFriction=0;
		SoundSetExplosion[]=
		{
			"Mortar_Exp_SoundSet",
			"Mortar_Tail_SoundSet",
			"Explosion_Debris_SoundSet"
		};
		soundHit1[]=
		{
			"A3\Sounds_F\arsenal\explosives\Grenades\Explosion_gng_grenades_01",
			5.1622777,
			0.5,
			1500
		};
		soundHit2[]=
		{
			"A3\Sounds_F\arsenal\explosives\Grenades\Explosion_gng_grenades_02",
			5.1622777,
			0.120000002,
			1500
		};
		soundHit3[]=
		{
			"A3\Sounds_F\arsenal\explosives\Grenades\Explosion_gng_grenades_03",
			5.1622777,
			0.40000001,
			1500
		};
		soundHit4[]=
		{
			"A3\Sounds_F\arsenal\explosives\Grenades\Explosion_gng_grenades_04",
			5.1622777,
			0.69999999,
			1500
		};
		multiSoundHit[]=
		{
			"soundHit1",
			0.25,
			"soundHit2",
			0.25,
			"soundHit3",
			0.25,
			"soundHit4",
			0.25
		};
		class CamShakeExplode
		{
			power=15;
			duration=2.4000001;
			frequency=10;
			distance=100.599;
		};
		class CamShakeHit
		{
			power=155;
			duration=0.80000001;
			frequency=20;
			distance=1;
		};
		class CamShakeFire
		{
			power=1.52844;
			duration=1.4;
			frequency=10;
			distance=15;
		};
		class CamShakePlayerFire
		{
			power=0.0099999998;
			duration=0.1;
			frequency=20;
			distance=1;
		};
	};
	class SubmunitionBase;
	class 38th_120mm_SMK: SubmunitionBase
	{
		submunitionAmmo="SmokeShellArty";
		effectFly="3AS_PlasmaBolt_Medium_Blue_Fly";
		submunitionConeType[]=
		{
			"poissondisc",
			5
		};
		submunitionConeAngle=5;
		triggerDistance=100;
		cost=200;
		airFriction=0;
		muzzleEffect="";
		hit=300;
		typicalSpeed=1000;
		artilleryLock=1;
		class CamShakeFire
		{
			power=3.3097501;
			duration=2.2;
			frequency=20;
			distance=87.635597;
		};
		class CamShakePlayerFire
		{
			power=0.02;
			duration=0.1;
			frequency=20;
			distance=1;
		};
	};
	class 38th_120mm_ILLUM: FlareCore
	{
		timeToLive=90;
		model="3as\3AS_Weapons\Data\tracer_shell_blue.p3d";
		effectFly="3AS_PlasmaBolt_Medium_Blue_Fly";
		effectFlare="FlareShells";
		aimAboveTarget[]={30,120,120,180,240,300,3120};
		aimAboveDefault=4;
		brightness=40000;
		flareSize=6;
		size=1;
		triggerTime=-1;
		triggerSpeedCoef=1;
		lightColor[]={0.94999999,0.94999999,1,0.5};
		smokeColor[]={1,1,1,0.5};
		intensity=1250000;

	};
	///EXPERIMENTAL STUFF
    class 38th_120mm_Airburst: 38th_120mm_HE {
		indirectHit = 0;
		explosionEffects = "";
		craterEffects = "";
		explosionType = "";

        SHRP_burstHeight = 25;
        SHRP_shellParam[] = {70, 12, 5, 2200, "B_127x108_Ball", 5, "APERSMine",0};
	};
	class 38th_120mm_M722_WP : 38th_60mm_M722_WP 
	{
		hit = 110;
		artilleryLock=1;
		typicalSpeed=1000;
		effectFly="3AS_PlasmaBolt_Medium_Blue_Fly";
		indirectHit = 110;
		indirectHitRange = 14;
		ace_frag_metal=2000;
		ace_frag_charge=935.534263125;
		ace_frag_gurney_c=2970;
		ace_frag_gurney_k="1/2";
		ace_frag_classes[]=
		{
			"ACE_frag_small",
			"ACE_frag_medium",
			"ACE_frag_large"

		};
		ace_frag_skip=0;
		ace_frag_force=1;
		class CamShakeExplode 
		{
			distance = 55;
			duration = 3;
			frequency = 20;
			power = 20;
		};
		ExplosionEffects = "WPExplosion4";
	};
	class Sh_155mm_AMOS_LG;
	class 38th_120mm_LaserGuided : Sh_82mm_AMOS_LG {
		submunitionAmmo = "38th_120mm_LaserGuided_Deploy";
		triggerDistance = 900;
		
		simulation = "shotSubmunitions";
		submunitionCount = 1;
		submunitionConeAngle = 0.33;
		typicalSpeed=1000;
	};
	class Sh_155mm_AMOS_guided;
	class 38th_120mm_LaserGuided_Deploy : M_Mo_82mm_AT_LG {
		hit = 700;
		effectFly="3AS_PlasmaBolt_Medium_Blue_Fly";
		indirectHit = 300;
		indirectHitRange = 20;
		maneuvrability = 14;
		ace_frag_skip = 1;
		laserLock = 1;
		autoSeekTarget = 1;
		maxControlRange = 12000;
		sideAirFriction = 0.1;
		lockSeekRadius = 400;
		weaponLockSystem=4;
		class Components: Components
		{
			class SensorsManagerComponent
			{
				class Components
				{
					class LaserSensorComponent: SensorTemplateLaser
					{
						class AirTarget
						{
							minRange=800;
							maxRange=800;
							objectDistanceLimitCoef=-1;
							viewDistanceLimitCoef=-1;
						};
						class GroundTarget
						{
							minRange=800;
							maxRange=800;
							objectDistanceLimitCoef=-1;
							viewDistanceLimitCoef=-1;
						};
						angleRangeHorizontal=40;
						angleRangeVertical=40;
					};
				};
			};
		};	
	};
};
class CfgCloudlets
{
	class Default;
	class Napalm_FireDamage_2 : Default
	{
		beforeDestroyScript = "\38th\38th_Custom_Turrets\functions\damageunits_2.sqf";
	};
	class Napalm_ExplosionSound: Default
	{
		beforeDestroyScript = "\38th\38th_Custom_Turrets\functions\explosionsound.sqf";
	};
	class Fire_Visuals_2 : Default {
		beforeDestroyScript = "\38th\38th_Custom_Turrets\functions\flames_visual_2.sqf";
	};
	class Fire_Lighting: Default
	{
		beforeDestroyScript = "38th\38th_Custom_Turrets\functions\firelight.sqf";
	};
	class Explosion_FX: Default
	{
		beforeDestroyScript = "38th\38th_Custom_Turrets\functions\explosionfx.sqf";
	};
	class Napalm_FireDamage : Default
	{
		beforeDestroyScript = "38th\38th_Custom_Turrets\functions\damageunits.sqf";
	};
	class WPTrails;
	class WPTrails_2 : WPTrails {
		size[] = {3};
		moveVelocity[] = {0,11,0};
		lifeTime = 16;
		MoveVelocityVar[] = {12,7,12};
		weight = 15;
		
		damageTime = 0.4;
		coreIntensity = 8;
		constantDistance = 3;
		damageType = "Fire";
		
		coreDistance = 1;
	};
	class WPCloud;
	class WP_EX4 : WPCloud {
		lifeTime = 150;
		lifeTimeVar = 1;
		coreDistance = 23;
		damageTime = 0.1;
		coreIntensity = 28;
		constantDistance = 1;
		damageType = "Fire";
		blockAIVisibility = 1;
		rubbing = 0.02;
		weight = 1.2;
		volume = 0.5;
		color[] = {{1,1,1,1},{1,1,1,1},{1,1,1,1},{1,1,1,1}};
		size[] = {27,28.2,29.6,30.3,31,32,33,34};
	};
	class WP_Sparks1: Default
	{
		angle = 360;	
		angleVar = 360;
		animationName = "";
		animationSpeed[] = {1};
		circleRadius = 0;
		circleVelocity[] = {0,0,0};
		onTimerScript = "38th\38th_Custom_Turrets\functions\trail.sqf";
		beforeDestroyScript = "";
		colorVar[] = {0,0,0,0};
		color[] = {{1,1,1,1}};
		interval = 0.005;
		lifeTime = 1;
		lifeTimeVar = 0.25;
		MoveVelocityVar[] = {8,8,8};
		moveVelocity[] = {0,8,0};
		particleFSFrameCount = 1;
		particleFSIndex = 0;
		particleFSLoop = 1;
		particleFSNtieth = 1;
		particleShape ="\A3\data_f\kouleSvetlo";
		particleType = "Billboard";
		positionVar[] = {0,0,0};
		randomDirectionIntensity = 10;
		randomDirectionIntensityVar = 0;
		randomDirectionPeriod = 0;
		randomDirectionPeriodVar = 0;
		rotationVelocity = 10;
		rotationVelocityVar = 50;
		bounceOnSurface = -1;	
		rubbing = 1;
		sizeVar = 0;
		Size[] = {0.5,0.1};
		timerPeriod = 0.05;
		volume = 12;
		weight = 100;
		emissiveColor[] = {{10000,10000,9500,1},{10000,4500,500,0.5}};	
		destroyOnWaterSurface = 1;
	};
	class WP_Sparks2: Default
	{
		angle = 360;	
		angleVar = 360;
		animationName = "";
		animationSpeed[] = {1};
		circleRadius = 0;
		circleVelocity[] = {0,0,0};
		onTimerScript = "";
		beforeDestroyScript = "";
		colorVar[] = {0,0,0,0};
		color[] = {{1,1,1,1}};
		interval = 0.005;
		lifeTime = 1.5;
		lifeTimeVar = 0.25;
		MoveVelocityVar[] = {6,6,6};
		moveVelocity[] = {0,6,0};
		particleFSFrameCount = 1;
		particleFSIndex = 0;
		particleFSLoop = 1;
		particleFSNtieth = 1;
		particleShape ="\A3\data_f\kouleSvetlo";
		particleType = "Billboard";
		positionVar[] = {0,0,0};
		randomDirectionIntensity = 10;
		randomDirectionIntensityVar = 0;
		randomDirectionPeriod = 0;
		randomDirectionPeriodVar = 0;
		rotationVelocity = 10;
		rotationVelocityVar = 50;
		bounceOnSurface = -1;	
		rubbing = 1;
		sizeVar = 0;
		Size[] = {0.25,0.05};
		timerPeriod = 0.075;
		volume = 12;
		weight = 20;
		emissiveColor[] = {{10000,10000,9500,1},{10000,4500,500,1}};	
		destroyOnWaterSurface = 1;
	};
	class WPSmokeShellWhiteSmall: Default
	{
		animationSpeedCoef = 0.00001;
		colorCoef[] = {"colorR","colorG","colorB",1.8};
		sizeCoef = 1;
		position[] = {0,0,0};
		interval = 0.25;
		circleRadius = 0;
		circleVelocity[] = {0,0,0};
		particleShape = "\A3\data_f\ParticleEffects\Universal\smoke.p3d";
		particleFSNtieth = 1;
		particleFSIndex = 0;
		particleFSFrameCount = 1;
		particleFSLoop = 1;
		angleVar = 0;
		animationName = "";
		particleType = "Billboard";
		timerPeriod = 1;
		lifeTime = 15;
		moveVelocity[] = {0,0.3,0};
		rotationVelocity = 6;
		weight = 1.2777;
		volume = 1;
		rubbing = 0.05;
		size[] = {0,8,10};
		color[] = {{0.9,0.9,0.9,0.5},{0.7,0.7,0.7,0}};
		animationSpeed[] = {1.5,0.5};
		randomDirectionPeriod = 1;
		randomDirectionIntensity = 0.04;
		onTimerScript = "";
		beforeDestroyScript = "";
		destroyOnWaterSurface = 1;
		destroyOnWaterSurfaceOffset = -0.6;
		lifeTimeVar = 5;
		positionVar[] = {0,0,0};
		MoveVelocityVar[] = {1.2,0.35,1.2};
		rotationVelocityVar = 5;
		sizeVar = 1;
		colorVar[] = {0,0,0,0};
		randomDirectionPeriodVar = 0;
		randomDirectionIntensityVar = 0;
		blockAIVisibility = 1;
	};
	class WPSmokeShellWhiteSmall2: Default
	{
		animationSpeedCoef = 0.00001;
		colorCoef[] = {1,1,1,1};
		sizeCoef = 1;
		position[] = {0,0,0};
		interval = 0.1;
		circleRadius = 0;
		circleVelocity[] = {0,0,0};
		particleShape = "\A3\data_f\ParticleEffects\Universal\smoke.p3d";
		particleFSNtieth = 1;
		particleFSIndex = 0;
		particleFSFrameCount = 1;
		particleFSLoop = 1;
		angleVar = 0;
		animationName = "";
		particleType = "Billboard";
		timerPeriod = 1;
		lifeTime = 15;
		moveVelocity[] = {0,0.3,0};
		rotationVelocity = 6;
		weight = 1.2777;
		volume = 1;
		rubbing = 0.05;
		size[] = {1,8,10,10,10,10,10,12};
		color[] = {{0.9,0.9,0.9,0.5},{0.7,0.7,0.7,0}};
		animationSpeed[] = {1.25,0.25};
		randomDirectionPeriod = 1;
		randomDirectionIntensity = 0.04;
		onTimerScript = "";
		beforeDestroyScript = "";
		destroyOnWaterSurface = 1;
		destroyOnWaterSurfaceOffset = -0.6;
		lifeTimeVar = 2.5;
		positionVar[] = {0,0,0};
		MoveVelocityVar[] = {1.2,0.35,1.2};
		rotationVelocityVar = 5;
		sizeVar = 1;
		colorVar[] = {0,0,0,0};
		randomDirectionPeriodVar = 0;
		randomDirectionIntensityVar = 0;
		blockAIVisibility = 1;
	};
	class 38th_HeatHaze: Default
	{
		interval=0.0060000001;
		circleRadius=0;
		circleVelocity[]={0,0,0};
		particleShape="\A3\data_f\ParticleEffects\Universal\Refract";
		particleFSNtieth=1;
		particleFSIndex=0;
		particleFSFrameCount=1;
		particleFSLoop=0;
		angleVar=1;
		animationName="";
		particleType="Billboard";
		timerPeriod=1.5;
		lifeTime=4;
		moveVelocity[]=
		{
			"-0.002*directionX",
			"-0.002*directionY",
			"-0.002*directionZ"
		};
		rotationVelocity=1;
		weight=1.255;
		volume=1;
		rubbing=0.07;
		size[]={0.075000003,0.18000001};
		color[]=
		{
			{0.059999999,0.059999999,0.059999999,0.23},
			{0.30000001,0.30000001,0.30000001,0.2},
			{0.30000001,0.30000001,0.30000001,0.17},
			{0.30000001,0.30000001,0.30000001,0.14},
			{0.30000001,0.30000001,0.30000001,0.050000001}
		};
		colorCoef[]={1,1,1,1};
		animationSpeed[]={2,1};
		randomDirectionPeriod=0.1;
		randomDirectionIntensity=0.029999999;
		onTimerScript="";
		beforeDestroyScript="";
		destroyOnWaterSurface=1;
		blockAIVisibility=0;
		sizeCoef=0.5;
		animationSpeedCoef=1;
		position[]=
		{
			"positionX",
			"positionY",
			"positionZ"
		};
		lifeTimeVar=0.5;
		positionVar[]={0,0,0};
		MoveVelocityVar[]={0,0,0};
		rotationVelocityVar=5;
		sizeVar=0.2;
		colorVar[]={0,0,0,0};
		randomDirectionPeriodVar=0;
		randomDirectionIntensityVar=0;
	};
};


class WP_Explosion_FX
{
	class Light1
	{
		simulation = "light";
		type = "CmeasuresLight";
		position[] = {0,0,0};
		intensity = 1;
		interval = 1;
		lifeTime = 5;
	};

	class WP_SparksFX1
	{
		position[] = {0,0,0};
		simulation = "particles";
		type = "WP_Sparks1";
		intensity = 100;
		interval = 0.1;
		lifeTime = 0.3;
		particleFSLoop = 0;
	};
	class WP_SparksFX2
	{
		position[] = {0,0,0};
		simulation = "particles";
		type = "WP_Sparks2";
		intensity = 100;
		interval = 0.1;
		lifeTime = 0.3;
		particleFSLoop = 0;
	};
	class WPSmokeShellWhite2
	{
		simulation = "particles";
		type = "WPSmokeShellWhiteSmall2";
		position[] = {0,0,0};
		intensity = 1;
		interval = 1;
		lifeTime = 5;
		particleFSLoop = 1;
	};
	class WP_Init_fx
	{
		position[] = {0,0,0};
		simulation = "particles";
		type = "WP_InitFx";
		intensity = 1;
		interval = 0;
		lifeTime = 1;
		particleFSLoop = 0;
	};
};