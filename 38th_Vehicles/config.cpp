class CfgPatches
{
	class 38th_vehicles
	{
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"38th_core",
			"38th_weapons_compat"
		};
		units[]=
		{
		};
	};
};
class Optics_Armored;
class Optics_Gunner_APC_01: Optics_Armored
{
	class Wide;
	class Medium;
	class Narrow;
};
class Optics_Gunner_MBT_03: Optics_Armored
{
	class Wide;
	class Medium;
	class Narrow;
};
class SensorTemplatePassiveRadar;
class SensorTemplateAntiRadiation;
class SensorTemplateActiveRadar;
class SensorTemplateIR;
class SensorTemplateVisual;
class SensorTemplateMan;
class SensorTemplateLaser;
class SensorTemplateNV;
class SensorTemplateDataLink;
class DefaultVehicleSystemsDisplayManagerLeft
{
	class Components;
};
class DefaultVehicleSystemsDisplayManagerRight
{
	class Components;
};
class VehicleSystemsTemplateLeftPilot: DefaultVehicleSystemsDisplayManagerLeft
{
	class Components;
};
class VehicleSystemsTemplateRightPilot: DefaultVehicleSystemsDisplayManagerRight
{
	class Components;
};
class Optics_Commander_02: Optics_Armored
{
	class Wide;
	class Medium;
	class Narrow;
};
class CfgVehicles
{
	class Turrets;
	class MainTurret;
	class FrontTurret;
	class RearTurret;
	class GunnerTurret;
	class HitPoints;
	class HitBody;
	class HitEngine;
	class HitFuel;
	class HitHull;
	class HitLFWheel;
	class HitLBWheel;
	class HitLMWheel;
	class HitLF2Wheel;
	class HitRFWheel;
	class HitRBWheel;
	class HitRMWheel;
	class HitRF2Wheel;
	class HitGlass1;
	class HitGlass2;
	class HitGlass3;
	class HitGlass4;
	class HitGlass5;
	class HitGlass6;
	class Air;
	class Helicopter: Air{};
	class Helicopter_Base_F: Helicopter
	{
		class Turrets;
		class HitPoints;
	};
	class Heli_Attack_01_base_F: Helicopter_Base_F
	{
		class CargoTurret;
		class Turrets: Turrets
		{
			class CopilotTurret;
			class MainTurret;
		};
		class HitPoints: HitPoints
		{
			class HitHull;
			class HitFuel;
			class HitEngine;
			class HitAvionics;
			class HitVRotor;
			class HitHRotor;
			class HitGlass1;
			class HitGlass2;
			class HitGlass3;
			class HitGlass4;
			class HitGlass5;
		};
		class AnimationSources;
		class ViewPilot;
		class ViewOptics;
		class Components;
		class RotorLibHelicopterProperties;
	};
	class B_Heli_Attack_01_base_F: Heli_Attack_01_base_F
	{
		class UserActions;
		class CargoTurret;
	};
	class LandVehicle;
	class Car: LandVehicle
	{
		class NewTurret;
	};
	class Car_F: Car
	{
		class Eventhandlers;
		class ViewPilot;
		class AnimationSources;
		class Turrets
		{
			class MainTurret: NewTurret
			{
			};
		};
		class HitPoints
		{
			class HitLFWheel;
			class HitLF2Wheel;
			class HitRFWheel;
			class HitRF2Wheel;
			class HitGlass1;
			class HitBody;
			class HitGlass2;
			class HitGlass3;
			class HitGlass4;
			class HitGlass5;
			class HitGlass6;
		};
	};
	class 3as_laat_Base: B_Heli_Attack_01_base_F
	{
		class ACE_SelfActions;
		class UserActions: UserActions
		{
			class rampOpen;
			class rampClose;
		};
		class Components: Components
		{
		};
		class Turrets: Turrets
		{
			class Copilot;
			class LeftDoorgun;
			class RightDoorGun;
			class CargoTurret_01;
			class CargoTurret_02;
			class CargoTurret_03;
			class CargoTurret_04;
			class CargoTurret_05;
			class CargoTurret_06;
		};
	};
	class 3as_LAAT_Mk1: 3as_laat_Base
	{
	};
	class 3AS_Patrol_LAAT_Base: Heli_Attack_01_base_F
	{
		class UserActions;
		class ACE_SelfActions;
		class Turrets;
	};
	class 3AS_Patrol_LAAT_Republic: 3AS_Patrol_LAAT_Base
	{
		class Turrets: Turrets
		{
			class Copilot;
		};
	};
	class Plane: Air
	{
		class NewTurret;
	};
	class Plane_Base_F: Plane
	{
		class AnimationSources;
		class Components;
		class ViewPilot;
	};
	class VTOL_Base_F: Plane_Base_F
	{
		class AnimationSources;
		class Components;
		class ViewPilot;
	};
	class 3AS_Z95_VTOL_Base_F: VTOL_Base_F
	{
		class ACE_SelfActions;
	};
	class Plane_Fighter_03_base_F: Plane_Base_F
	{
		class Turrets
		{
		};
		class AnimationSources: AnimationSources
		{
		};
		class Components: Components
		{
		};
	};
	class Plane_Fighter_03_dynamicLoadout_base_F: Plane_Fighter_03_base_F
	{
	};
	class 3AS_ARC_170_Base: Plane_Fighter_03_dynamicLoadout_base_F
	{
		class ACE_SelfActions;
	};
	class BTL_Base: Plane_Fighter_03_dynamicLoadout_base_F
	{
		class ACE_SelfActions;
	};
	class 3AS_BTLB_Bomber: BTL_Base
	{
	};
	class 3as_LAAT_Mk2;
	class 3as_LAATC;
	class O_T_VTOL_02_infantry_grey_F;
	class B_T_VTOL_01_infantry_olive_F;
	class 3AS_ARC_170_blue;
	class 38th_Arc170: 3AS_ARC_170_blue
	{
		author = "38thS5";
		displayName = "[38th] ARC-170";
        faction = "38th_main";
		scopeCurator=2;
		scope=2;
	};
	class 38th_laati_standard: 3as_LAAT_Mk1
	{
		displayName="LAAT/I(CAS)";
		//editorPreview="\38th_vehicles\ui\38th_laati_standard.jpg";
		faction="38th_main";
		scopeCurator=2;
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"38th\38th_Vehicles\textures\air\laati\base\Hull_co.paa",
			"38th\38th_Vehicles\textures\air\laati\base\Wings_co.paa",
			"38th\38th_Vehicles\textures\air\laati\base\Weapons_co.paa",
			"38th\38th_Vehicles\textures\air\laati\base\Weapon_Details_co.paa",
			"38th\38th_Vehicles\textures\air\laati\base\Interior_co.paa"
		};
		/*hiddenSelectionsMaterials[]={};*/
		weapons[]=
		{
			"38th_vehicle_autocannon_he_50",
			"38th_vehicle_autocannon_apfsd_50",
			"missiles_DAR",
			"CMFlareLauncher"
		};
		magazines[]=
		{
			"38th_mag_50mm_he_blue",
			"38th_mag_50mm_he_blue",
			"38th_mag_50mm_apfsd_blue",
			"38th_mag_50mm_apfsd_blue",
			"12rnd_missiles",
			"12rnd_missiles",
			"12rnd_missiles",
			"240Rnd_CMFlare_Chaff_Magazine",
			"240Rnd_CMFlare_Chaff_Magazine",
			"240Rnd_CMFlare_Chaff_Magazine"
		};
		class Turrets: Turrets
		{
			class Copilot: MainTurret
			{
				memoryPointGun="rear_chamber";
				gunBeg="rear_chamber";
				gunEnd="rear_muzzle";
				caneject=0;
				castgunnershadow=1;
				commanding=-1;
				discretedistance[]={100,200,300,400,500,600,700,800,1000,1200,1500,1800,2100};
				discretedistanceinitindex=5;
				gunneraction="LAAT_Pilot";
				gunnerforceoptics=0;
				gunnername="Co-Pilot";
				usePiP=1;
				gunnergetinaction="Heli_Attack_01_Gunner_Enter";
				gunnergetoutaction="Heli_Attack_01_Gunner_Exit";
				gunnerinaction="";
				gunnerlefthandanimname="lever_copilot";
				gunneropticseffect[]=
				{
					"TankCommanderOptics1",
					"BWTV"
				};
				gunneropticsmodel="";
				gunnerrighthandanimname="stick_copilot";
				initelev=-5;
				initturn=-180;
				iscopilot=1;
				maxelev=20;
				maxturn=-170;
				memorypointgunneroptics="backview";
				memorypointsgetingunner="pos_driver";
				memorypointsgetingunnerdir="pos_driver_dir";
				minelev=-20;
				minturn=-190;
				outgunnermayfire=1;
				precisegetinout=1;
				primarygunner=0;
				selectionfireanim="zasleh3";
				soundServo[]=
				{
					"A3\Sounds_F\vehicles\armor\noises\servo_armor_gunner",
					0.36234099,
					1,
					20
				};
				soundServoVertical[]=
				{
					"A3\Sounds_F\vehicles\armor\noises\servo_armor_gunner_vertical",
					0.36234099,
					1,
					30
				};
				startengine=0;
				animationSourceBody="mainTurret5";
				animationsourcegun="Maingun5";
				animationsourcehatch="";
				body="mainTurret5";
				gun="Maingun5";
				memorypointlmissile="Rocket_1";
				memorypointrmissile="Rocket_2";
				memoryPointLRocket="Rocket_1";
				memoryPointRRocket="Rocket_2";
				turretinfotype="RscOptics_Heli_Attack_01_gunner";
				weapons[]=
				{
					"38th_LAAT_BallGun"
				};
				magazines[]=
				{
					"38th_EWEB_200rnd_HE_mag",
					"38th_EWEB_200rnd_HE_mag",
					"38th_EWEB_200rnd_HE_mag",
					"38th_EWEB_200rnd_HE_mag"
				};
				class OpticsIn
				{
					class Wide
					{
						gunneropticsmodel="\A3\weapons_F_Beta\Reticle\Heli_Attack_01_Optics_Gunner_wide_F";
						initanglex=0;
						initangley=0;
						initfov=0.46599999;
						maxanglex=30;
						maxangley=100;
						maxfov=0.46599999;
						minanglex=-30;
						minangley=-100;
						minfov=0.46599999;
						opticsdisplayname="W";
						thermalmode[]={0,1};
						visionmode[]=
						{
							"Normal",
							"NVG",
							"Ti"
						};
					};
					class Medium: Wide
					{
						gunneropticsmodel="\A3\weapons_F_Beta\Reticle\Heli_Attack_01_Optics_Gunner_medium_F";
						initfov=0.093000002;
						maxfov=0.093000002;
						minfov=0.093000002;
						opticsdisplayname="M";
					};
					class Narrow: Wide
					{
						gunneropticsmodel="\A3\weapons_F_Beta\Reticle\Heli_Attack_01_Optics_Gunner_narrow_F";
						initfov=0.028999999;
						maxfov=0.028999999;
						minfov=0.028999999;
						opticsdisplayname="N";
					};
				};
				class OpticsOut
				{
					class Monocular
					{
						gunneropticseffect[]={};
						gunneropticsmodel="";
						initanglex=0;
						initangley=0;
						initfov=1.1;
						maxanglex=30;
						maxangley=100;
						maxfov=1.1;
						minanglex=-30;
						minangley=-100;
						minfov=0.133;
						visionmode[]=
						{
							"Normal",
							"NVG"
						};
					};
				};
				class HitTurret
				{
				};
				class HitGun
				{
				};
				class Components: Components
				{
					class VehicleSystemsDisplayManagerComponentLeft: VehicleSystemsTemplateLeftPilot
					{
						class Components: Components
						{
							class EmptyDisplay
							{
								componentType="EmptyDisplayComponent";
							};
							class MinimapDisplay
							{
								componentType="MinimapDisplayComponent";
								resource="RscCustomInfoAirborneMiniMap";
							};
							class CrewDisplay
							{
								componentType="CrewDisplayComponent";
								resource="RscCustomInfoCrew";
							};
							class UAVDisplay
							{
								componentType="UAVFeedDisplayComponent";
							};
							class VehiclePrimaryGunnerDisplay
							{
								componentType="TransportFeedDisplayComponent";
								source="PrimaryGunner";
							};
							class VehicleMissileDisplay
							{
								componentType="TransportFeedDisplayComponent";
								source="Missile";
							};
							class SensorDisplay
							{
								componentType="SensorsDisplayComponent";
								range[]={4000,8000,16000};
								resource="RscCustomInfoSensors";
							};
						};
					};
					class VehicleSystemsDisplayManagerComponentRight: VehicleSystemsTemplateRightPilot
					{
						defaultDisplay="SensorDisplay";
						class Components: Components
						{
							class EmptyDisplay
							{
								componentType="EmptyDisplayComponent";
							};
							class MinimapDisplay
							{
								componentType="MinimapDisplayComponent";
								resource="RscCustomInfoAirborneMiniMap";
							};
							class CrewDisplay
							{
								componentType="CrewDisplayComponent";
								resource="RscCustomInfoCrew";
							};
							class UAVDisplay
							{
								componentType="UAVFeedDisplayComponent";
							};
							class VehiclePrimaryGunnerDisplay
							{
								componentType="TransportFeedDisplayComponent";
								source="PrimaryGunner";
							};
							class VehicleMissileDisplay
							{
								componentType="TransportFeedDisplayComponent";
								source="Missile";
							};
							class SensorDisplay
							{
								componentType="SensorsDisplayComponent";
								range[]={4000,8000,16000};
								resource="RscCustomInfoSensors";
							};
						};
					};
					class SensorsManagerComponent
					{
						class Components
						{
							class IRSensorComponent: SensorTemplateIR
							{
								class AirTarget
								{
									minRange=0;
									maxRange=16000;
									objectDistanceLimitCoef=-1;
									viewDistanceLimitCoef=1;
								};
								class GroundTarget
								{
									minRange=0;
									maxRange=16000;
									objectDistanceLimitCoef=-1;
									viewDistanceLimitCoef=1;
								};
								componentType="IRSensorComponent";
								typeRecognitionDistance=12000;
								angleRangeHorizontal=360;
								angleRangeVertical=180;
								maxFogSeeThrough=0.85000002;
								groundNoiseDistanceCoef=-1;
								maxGroundNoiseDistance=0;
								minSpeedThreshold=0;
								maxSpeedThreshold=1000;
								minTrackableSpeed=-1e+010;
								maxTrackableSpeed=1e+010;
								minTrackableATL=-1e+010;
								maxTrackableATL=1e+010;
								allowsMarking=1;
								aimDown=0;
								color[]={1,0,0,1};
							};
							class ActiveRadarSensorComponent: SensorTemplateActiveRadar
							{
								class AirTarget
								{
									minRange=0;
									maxRange=16000;
									objectDistanceLimitCoef=-1;
									viewDistanceLimitCoef=-1;
								};
								class GroundTarget
								{
									minRange=0;
									maxRange=16000;
									objectDistanceLimitCoef=-1;
									viewDistanceLimitCoef=-1;
								};
								componentType="ActiveRadarSensorComponent";
								typeRecognitionDistance=12000;
								angleRangeHorizontal=360;
								angleRangeVertical=180;
								maxFogSeeThrough=-1;
								groundNoiseDistanceCoef=-1;
								maxGroundNoiseDistance=0;
								minSpeedThreshold=0;
								maxSpeedThreshold=1000;
								minTrackableSpeed=-1e+010;
								maxTrackableSpeed=1e+010;
								minTrackableATL=-1e+010;
								maxTrackableATL=1e+010;
								allowsMarking=1;
								aimDown=20;
								animDirection="";
								color[]={0,1,1,1};
							};
							class AntiRadiationSensorComponent: SensorTemplateAntiRadiation
							{
								componentType="PassiveRadarSensorComponent";
								class AirTarget
								{
									maxRange=0;
									minRange=16000;
									objectDistanceLimitCoef=-1;
									viewDistanceLimitCoef=-1;
								};
								class GroundTarget
								{
									maxRange=0;
									minRange=16000;
									objectDistanceLimitCoef=-1;
									viewDistanceLimitCoef=-1;
								};
								typeRecognitionDistance=12000;
								angleRangeHorizontal=360;
								angleRangeVertical=180;
								maxFogSeeThrough=0.85000002;
								groundNoiseDistanceCoef=-1;
								maxGroundNoiseDistance=0;
								minSpeedThreshold=0;
								maxSpeedThreshold=1000;
								minTrackableSpeed=-1e+010;
								maxTrackableSpeed=1e+010;
								minTrackableATL=-1e+010;
								maxTrackableATL=1e+010;
								allowsMarking=1;
								aimDown=45;
								animDirection="";
								color[]={0,1,1,1};
							};
							class VisualRadarSensorComponent: SensorTemplateVisual
							{
								class AirTarget
								{
									minRange=0;
									maxRange=4000;
									objectDistanceLimitCoef=-1;
									viewDistanceLimitCoef=-1;
								};
								class GroundTarget
								{
									minRange=0;
									maxRange=4000;
									objectDistanceLimitCoef=-1;
									viewDistanceLimitCoef=-1;
								};
								componentType="VisualSensorComponent";
								typeRecognitionDistance=1000;
								angleRangeHorizontal=360;
								angleRangeVertical=180;
								maxFogSeeThrough=-1;
								groundNoiseDistanceCoef=-1;
								maxGroundNoiseDistance=0;
								minSpeedThreshold=0;
								maxSpeedThreshold=1000;
								minTrackableSpeed=-1e+010;
								maxTrackableSpeed=1e+010;
								minTrackableATL=-1e+010;
								maxTrackableATL=1e+010;
								allowsMarking=1;
								aimDown=0;
								color[]={1,1,0.5,0.80000001};
							};
							class LaserSensorComponent: SensorTemplateLaser
							{
								class AirTarget
								{
									minRange=0;
									maxRange=16000;
									objectDistanceLimitCoef=-1;
									viewDistanceLimitCoef=-1;
								};
								class GroundTarget
								{
									minRange=0;
									maxRange=16000;
									objectDistanceLimitCoef=-1;
									viewDistanceLimitCoef=-1;
								};
								componentType="LaserSensorComponent";
								angleRangeHorizontal=360;
								angleRangeVertical=180;
								aimDown=0;
								maxFogSeeThrough=0.85000002;
							};
							class NVSensorComponent: SensorTemplateNV
							{
								class AirTarget
								{
									minRange=0;
									maxRange=16000;
									objectDistanceLimitCoef=-1;
									viewDistanceLimitCoef=-1;
								};
								class GroundTarget
								{
									minRange=0;
									maxRange=16000;
									objectDistanceLimitCoef=-1;
									viewDistanceLimitCoef=-1;
								};
								componentType="NVSensorComponent";
								angleRangeHorizontal=360;
								angleRangeVertical=180;
								aimDown=0;
								maxFogSeeThrough=0.85000002;
							};
							class DataLinkSensorComponent: SensorTemplateDataLink
							{
								class AirTarget
								{
									minRange=0;
									maxRange=16000;
									objectDistanceLimitCoef=-1;
									viewDistanceLimitCoef=-1;
								};
								class GroundTarget
								{
									minRange=0;
									maxRange=16000;
									objectDistanceLimitCoef=-1;
									viewDistanceLimitCoef=-1;
								};
								componentType="DataLinkSensorComponent";
								allowsMarking=1;
								typeRecognitionDistance=0;
								color[]={1,1,1,0};
							};
						};
					};
				};
			};
			class LeftDoorgun: MainTurret
			{
				weapons[]=
				{
					"38th_LAAT_BallGun"
				};
				magazines[]=
				{
					"38th_EWEB_200rnd_HE_mag",
					"38th_EWEB_200rnd_HE_mag",
					"38th_EWEB_200rnd_HE_mag",
					"38th_EWEB_200rnd_HE_mag"
				};
				animationsourcebody="mainTurret";
				animationsourcegun="mainGun";
				animationsourcehatch="";
				body="mainTurret";
				gun="mainGun";
				castgunnershadow=1;
				commanding=-2;
				memoryPointGun="laser_l_muzzle";
				gunBeg="laser_l_muzzle";
				gunEnd="laser_l_chamber";
				gunneraction="LAAT_Gunner";
				gunnercompartments="Compartment8";
				gunnerdoor="";
				gunnerforceoptics=0;
				gunnerinaction="gunner_Heli_Transport_01";
				gunnerlefthandanimname="";
				gunnername="Ball Turret (Left)";
				gunnerOpticsModel="\A3\weapons_f\reticle\Optics_Commander_02_F";
				gunneropticsshowcursor=1;
				class OpticsIn: Optics_Gunner_APC_01
				{
					class Wide: Wide
					{
					};
					class Medium: Medium
					{
					};
					class Narrow: Narrow
					{
					};
				};
				gunneroutopticsshowcursor=1;
				gunnerrighthandanimname="";
				iscopilot=0;
				lodturnedin=1000;
				lodturnedout=1000;
				minElev=-90;
				maxElev=90;
				initElev=0;
				minTurn=0;
				maxTurn=130;
				initTurn=0;
				selectionfireanim="";
				memoryPointGunnerOptics="laser_l_gunnerview";
				memorypointsgetingunner="pos_cargo_dir";
				memorypointsgetingunnerdir="pos_cargo";
				primarygunner=0;
				proxyindex=3;
				soundServo[]=
				{
					"A3\Sounds_F\vehicles\armor\noises\servo_armor_gunner",
					0.36234099,
					1,
					20
				};
				soundServoVertical[]=
				{
					"A3\Sounds_F\vehicles\armor\noises\servo_armor_gunner_vertical",
					0.36234099,
					1,
					30
				};
				stabilizedinaxes=0;
				viewgunnershadow=1;
				class ViewOptics
				{
					initanglex=0;
					initangley=0;
					initfov=0.60000002;
					maxanglex=30;
					maxangley=100;
					maxfov=0.75;
					minanglex=-30;
					minangley=-100;
					minfov=0.30000001;
				};
				class Reflectors
				{
				};
				class Components: Components
				{
					class VehicleSystemsDisplayManagerComponentLeft: VehicleSystemsTemplateLeftPilot
					{
						class Components: Components
						{
							class EmptyDisplay
							{
								componentType="EmptyDisplayComponent";
							};
							class MinimapDisplay
							{
								componentType="MinimapDisplayComponent";
								resource="RscCustomInfoAirborneMiniMap";
							};
							class CrewDisplay
							{
								componentType="CrewDisplayComponent";
								resource="RscCustomInfoCrew";
							};
							class UAVDisplay
							{
								componentType="UAVFeedDisplayComponent";
							};
							class VehiclePrimaryGunnerDisplay
							{
								componentType="TransportFeedDisplayComponent";
								source="PrimaryGunner";
							};
							class VehicleMissileDisplay
							{
								componentType="TransportFeedDisplayComponent";
								source="Missile";
							};
							class SensorDisplay
							{
								componentType="SensorsDisplayComponent";
								range[]={4000,8000,16000};
								resource="RscCustomInfoSensors";
							};
						};
					};
					class VehicleSystemsDisplayManagerComponentRight: VehicleSystemsTemplateRightPilot
					{
						defaultDisplay="SensorDisplay";
						class Components: Components
						{
							class EmptyDisplay
							{
								componentType="EmptyDisplayComponent";
							};
							class MinimapDisplay
							{
								componentType="MinimapDisplayComponent";
								resource="RscCustomInfoAirborneMiniMap";
							};
							class CrewDisplay
							{
								componentType="CrewDisplayComponent";
								resource="RscCustomInfoCrew";
							};
							class UAVDisplay
							{
								componentType="UAVFeedDisplayComponent";
							};
							class VehiclePrimaryGunnerDisplay
							{
								componentType="TransportFeedDisplayComponent";
								source="PrimaryGunner";
							};
							class VehicleMissileDisplay
							{
								componentType="TransportFeedDisplayComponent";
								source="Missile";
							};
							class SensorDisplay
							{
								componentType="SensorsDisplayComponent";
								range[]={4000,8000,16000};
								resource="RscCustomInfoSensors";
							};
						};
					};
					class SensorsManagerComponent
					{
						class Components
						{
							class IRSensorComponent: SensorTemplateIR
							{
								class AirTarget
								{
									minRange=0;
									maxRange=16000;
									objectDistanceLimitCoef=-1;
									viewDistanceLimitCoef=1;
								};
								class GroundTarget
								{
									minRange=0;
									maxRange=16000;
									objectDistanceLimitCoef=-1;
									viewDistanceLimitCoef=1;
								};
								componentType="IRSensorComponent";
								typeRecognitionDistance=12000;
								angleRangeHorizontal=360;
								angleRangeVertical=180;
								maxFogSeeThrough=0.85000002;
								groundNoiseDistanceCoef=-1;
								maxGroundNoiseDistance=0;
								minSpeedThreshold=0;
								maxSpeedThreshold=1000;
								minTrackableSpeed=-1e+010;
								maxTrackableSpeed=1e+010;
								minTrackableATL=-1e+010;
								maxTrackableATL=1e+010;
								allowsMarking=1;
								aimDown=0;
								color[]={1,0,0,1};
							};
							class ActiveRadarSensorComponent: SensorTemplateActiveRadar
							{
								class AirTarget
								{
									minRange=0;
									maxRange=16000;
									objectDistanceLimitCoef=-1;
									viewDistanceLimitCoef=-1;
								};
								class GroundTarget
								{
									minRange=0;
									maxRange=16000;
									objectDistanceLimitCoef=-1;
									viewDistanceLimitCoef=-1;
								};
								componentType="ActiveRadarSensorComponent";
								typeRecognitionDistance=12000;
								angleRangeHorizontal=360;
								angleRangeVertical=180;
								maxFogSeeThrough=-1;
								groundNoiseDistanceCoef=-1;
								maxGroundNoiseDistance=0;
								minSpeedThreshold=0;
								maxSpeedThreshold=1000;
								minTrackableSpeed=-1e+010;
								maxTrackableSpeed=1e+010;
								minTrackableATL=-1e+010;
								maxTrackableATL=1e+010;
								allowsMarking=1;
								aimDown=20;
								animDirection="";
								color[]={0,1,1,1};
							};
							class AntiRadiationSensorComponent: SensorTemplateAntiRadiation
							{
								componentType="PassiveRadarSensorComponent";
								class AirTarget
								{
									maxRange=0;
									minRange=16000;
									objectDistanceLimitCoef=-1;
									viewDistanceLimitCoef=-1;
								};
								class GroundTarget
								{
									maxRange=0;
									minRange=16000;
									objectDistanceLimitCoef=-1;
									viewDistanceLimitCoef=-1;
								};
								typeRecognitionDistance=12000;
								angleRangeHorizontal=360;
								angleRangeVertical=180;
								maxFogSeeThrough=0.85000002;
								groundNoiseDistanceCoef=-1;
								maxGroundNoiseDistance=0;
								minSpeedThreshold=0;
								maxSpeedThreshold=1000;
								minTrackableSpeed=-1e+010;
								maxTrackableSpeed=1e+010;
								minTrackableATL=-1e+010;
								maxTrackableATL=1e+010;
								allowsMarking=1;
								aimDown=45;
								animDirection="";
								color[]={0,1,1,1};
							};
							class VisualRadarSensorComponent: SensorTemplateVisual
							{
								class AirTarget
								{
									minRange=0;
									maxRange=4000;
									objectDistanceLimitCoef=-1;
									viewDistanceLimitCoef=-1;
								};
								class GroundTarget
								{
									minRange=0;
									maxRange=4000;
									objectDistanceLimitCoef=-1;
									viewDistanceLimitCoef=-1;
								};
								componentType="VisualSensorComponent";
								typeRecognitionDistance=1000;
								angleRangeHorizontal=360;
								angleRangeVertical=180;
								maxFogSeeThrough=-1;
								groundNoiseDistanceCoef=-1;
								maxGroundNoiseDistance=0;
								minSpeedThreshold=0;
								maxSpeedThreshold=1000;
								minTrackableSpeed=-1e+010;
								maxTrackableSpeed=1e+010;
								minTrackableATL=-1e+010;
								maxTrackableATL=1e+010;
								allowsMarking=1;
								aimDown=0;
								color[]={1,1,0.5,0.80000001};
							};
							class LaserSensorComponent: SensorTemplateLaser
							{
								class AirTarget
								{
									minRange=0;
									maxRange=16000;
									objectDistanceLimitCoef=-1;
									viewDistanceLimitCoef=-1;
								};
								class GroundTarget
								{
									minRange=0;
									maxRange=16000;
									objectDistanceLimitCoef=-1;
									viewDistanceLimitCoef=-1;
								};
								componentType="LaserSensorComponent";
								angleRangeHorizontal=360;
								angleRangeVertical=180;
								aimDown=0;
								maxFogSeeThrough=0.85000002;
							};
							class NVSensorComponent: SensorTemplateNV
							{
								class AirTarget
								{
									minRange=0;
									maxRange=16000;
									objectDistanceLimitCoef=-1;
									viewDistanceLimitCoef=-1;
								};
								class GroundTarget
								{
									minRange=0;
									maxRange=16000;
									objectDistanceLimitCoef=-1;
									viewDistanceLimitCoef=-1;
								};
								componentType="NVSensorComponent";
								angleRangeHorizontal=360;
								angleRangeVertical=180;
								aimDown=0;
								maxFogSeeThrough=0.85000002;
							};
							class DataLinkSensorComponent: SensorTemplateDataLink
							{
								class AirTarget
								{
									minRange=0;
									maxRange=16000;
									objectDistanceLimitCoef=-1;
									viewDistanceLimitCoef=-1;
								};
								class GroundTarget
								{
									minRange=0;
									maxRange=16000;
									objectDistanceLimitCoef=-1;
									viewDistanceLimitCoef=-1;
								};
								componentType="DataLinkSensorComponent";
								allowsMarking=1;
								typeRecognitionDistance=0;
								color[]={1,1,1,0};
							};
						};
					};
				};
			};
			class RightDoorGun: LeftDoorgun
			{
				isCopilot=0;
				body="mainTurret2";
				gun="mainGun2";
				inGunnerMayFire=1;
				gunnerFireAlsoInInternalCamera=1;
				outGunnerMayFire=1;
				animationSourceBody="MainTurret2";
				animationSourceGun="MainGun2";
				memoryPointGun="laser_r_muzzle";
				gunBeg="laser_R_muzzle";
				gunEnd="lazer_R_chamber";
				minElev=-90;
				maxElev=90;
				initElev=0;
				minTurn=-130;
				maxTurn=0;
				initTurn=0;
				gunnerlefthandanimname="";
				gunnerrighthandanimname="";
				gunnerLeftLegAnimName="";
				gunnerRightLegAnimName="";
				stabilizedInAxes=3;
				selectionFireAnim="";
				proxyIndex=2;
				commanding=-5;
				primaryObserver=0;
				primaryGunner=0;
				turretFollowFreeLook=0;
				isPersonTurret=0;
				soundServo[]=
				{
					"A3\Sounds_F\vehicles\armor\noises\servo_armor_gunner",
					0.36234099,
					1,
					20
				};
				soundServoVertical[]=
				{
					"A3\Sounds_F\vehicles\armor\noises\servo_armor_gunner_vertical",
					0.36234099,
					1,
					30
				};
				gunneropticsmodel="\A3\weapons_F_Beta\Reticle\Heli_Transport_01_Optics_Gunner_F";
				gunnerOutOpticsShowCursor=1;
				gunnerOpticsShowCursor=1;
				gunnerName="Ball Turret (Right)";
				memoryPointGunnerOptics="laser_r_gunnerview";
				gunnerCompartments="Compartment9";
				memorypointsgetingunner="pos_cargo_dir";
				memorypointsgetingunnerdir="pos_cargo";
				weapons[]=
				{
					"38th_LAAT_BallGun"
				};
				magazines[]=
				{
					"38th_EWEB_200rnd_HE_mag",
					"38th_EWEB_200rnd_HE_mag",
					"38th_EWEB_200rnd_HE_mag",
					"38th_EWEB_200rnd_HE_mag"
				};
				class Reflectors
				{
				};
			};
			class CargoTurret_01: CargoTurret
			{
				gunnerAction="passenger_inside_5";
				canHideGunner=0;
				gunnerCompartments="Compartment2";
				getOutAction="GetOutLow";
				memoryPointsGetInCargo[]=
				{
					"pos_cargo"
				};
				memoryPointsGetInCargoDir[]=
				{
					"pos_cargo_dir"
				};
				proxyType="CPCargo";
				viewGunnerInExternal=1;
				showAsCargo=1;
				gunnerName="Ramp Gunner (Left)";
				proxyIndex=15;
				soundAttenuationTurret="HeliAttenuationGunner";
				isPersonTurret=1;
				ejectDeadGunner=1;
				class dynamicViewLimits
				{
					CargoTurret_02[]={-65,95};
				};
				playerPosition=4;
				gunnerGetInAction="GetInHeli_Light_01bench";
			};
			class CargoTurret_02: CargoTurret_01
			{
				gunnerCompartments="Compartment2";
				getOutAction="GetOutLow";
				memoryPointsGetInCargo[]=
				{
					"pos_cargo"
				};
				memoryPointsGetInCargoDir[]=
				{
					"pos_cargo_dir"
				};
				gunnerName="Ramp Gunner (Right)";
				proxyIndex=14;
				class dynamicViewLimits
				{
					CargoTurret_01[]={-65,95};
				};
			};
			class CargoTurret_03: CargoTurret
			{
				gunnerAction="passenger_bench_1";
				gunnerCompartments="Compartment2";
				memoryPointsGetInGunner="pos_cargo";
				memoryPointsGetInGunnerDir="pos_cargo_dir";
				gunnerName="$STR_A3_TURRETS_BENCH_R1";
				proxyIndex=17;
				proxyType="CPCargo";
				viewGunnerInExternal=1;
				showAsCargo=1;
				isPersonTurret=1;
				ejectDeadGunner=0;
				class TurnOut
				{
					limitsArrayTop[]=
					{
						{9.4394999,-94.855698},
						{12.5849,-34.384102},
						{14.0365,60.875801},
						{14.1021,95}
					};
					limitsArrayBottom[]=
					{
						{-32.2276,-94.901703},
						{-32.7616,-79.195801},
						{-45,-75.648804},
						{-44.965302,95}
					};
				};
				class TurnIn: TurnOut
				{
				};
				class dynamicViewLimits
				{
					CargoTurret_06[]={-65,95};
				};
				playerPosition=4;
				soundAttenuationTurret="";
				disableSoundAttenuation=1;
				gunnerGetInAction="GetInHeli_Light_01bench";
			};
			class CargoTurret_04: CargoTurret_03
			{
				gunnerCompartments="Compartment2";
				memoryPointsGetInGunner="pos_cargo";
				memoryPointsGetInGunnerDir="pos_cargo_dir";
				gunnerName="$STR_A3_TURRETS_BENCH_L2";
				proxyIndex=18;
				class dynamicViewLimits
				{
					CargoTurret_05[]={-65,95};
				};
				class TurnOut
				{
					limitsArrayTop[]=
					{
						{10.6196,-94.8601},
						{11.1364,-69.195396},
						{14.0333,15.3744},
						{11.6789,94.968201}
					};
					limitsArrayBottom[]=
					{
						{-32.208099,-94.038101},
						{-32.368198,-78.541496},
						{-45,-72.854202},
						{-44.918598,94.886497}
					};
				};
				class TurnIn: TurnOut
				{
				};
			};
			class CargoTurret_05: CargoTurret_04
			{
				gunnerCompartments="Compartment2";
				gunnerName="$STR_A3_TURRETS_BENCH_L1";
				memoryPointsGetInGunner="pos_cargo";
				memoryPointsGetInGunnerDir="pos_cargo_dir";
				proxyIndex=19;
				class dynamicViewLimits
				{
					CargoTurret_04[]={-95,65};
				};
				class TurnOut
				{
					limitsArrayTop[]=
					{
						{14.705,-95},
						{14.1224,-62.859001},
						{12.3049,32.941399},
						{9.0861998,94.947998}
					};
					limitsArrayBottom[]=
					{
						{-45,-94.965599},
						{-45,80.990402},
						{-31.903299,82.846497},
						{-31.793501,95}
					};
				};
				class TurnIn: TurnOut
				{
				};
			};
			class CargoTurret_06: CargoTurret_03
			{
				gunnerCompartments="Compartment2";
				gunnerName="$STR_A3_TURRETS_BENCH_R2";
				proxyIndex=16;
				class dynamicViewLimits
				{
					CargoTurret_03[]={-95,65};
				};
				class TurnOut
				{
					limitsArrayTop[]=
					{
						{12.1826,-95},
						{14.4163,-16.698299},
						{11.5046,68.829201},
						{11.8156,94.980904}
					};
					limitsArrayBottom[]=
					{
						{-44.897598,-94.999397},
						{-44.973999,81.190598},
						{-32.447899,83.791603},
						{-32.740501,95}
					};
				};
				class TurnIn: TurnOut
				{
				};
			};
		};
		class pilotCamera
		{
			class OpticsIn
			{
				class Wide
				{
					opticsDisplayName="WFOV";
					initAngleX=0;
					minAngleX=-10;
					maxAngleX=90;
					initAngleY=0;
					minAngleY=-90;
					maxAngleY=90;
					initFov=0.42500001;
					minFov=0.42500001;
					maxFov=0.42500001;
					directionStabilized=1;
					thermalMode[]={0,1};
					visionMode[]=
					{
						"Normal",
						"NVG",
						"Ti"
					};
					gunnerOpticsModel="\A3\Drones_F\Weapons_F_Gamma\Reticle\UAV_Optics_Gunner_wide_F.p3d";
					opticsPPEffects[]=
					{
						"OpticsCHAbera2",
						"OpticsBlur2"
					};
				};
				class zoomx4: Wide
				{
					opticsDisplayName="NFOV";
					initFov="(0.425/4)";
					minFov="(0.425/4)";
					maxFov="(0.425/4)";
					gunnerOpticsModel="\A3\Drones_F\Weapons_F_Gamma\Reticle\UAV_Optics_Gunner_narrow_F.p3d";
				};
				class zoomX8: Wide
				{
					opticsDisplayName="NFOV";
					initFov="(0.42/8)";
					minFov="(0.42/8)";
					maxFov="(0.42/8)";
					gunnerOpticsModel="\A3\Drones_F\Weapons_F_Gamma\Reticle\UAV_Optics_Gunner_narrow_F.p3d";
				};
				class zoomX20: Wide
				{
					opticsDisplayName="NFOV";
					initFov="(0.42/20)";
					minFov="(0.42/20)";
					maxFov="(0.42/20)";
					gunnerOpticsModel="\A3\Drones_F\Weapons_F_Gamma\Reticle\UAV_Optics_Gunner_narrow_F.p3d";
				};
				class zoomX50: Wide
				{
					opticsDisplayName="NFOV";
					initFov="(0.42/50)";
					minFov="(0.42/50)";
					maxFov="(0.42/50)";
					gunnerOpticsModel="\A3\Drones_F\Weapons_F_Gamma\Reticle\UAV_Optics_Gunner_narrow_F.p3d";
				};
				class zoomX70: Wide
				{
					opticsDisplayName="NFOV";
					initFov="(0.42/70)";
					minFov="(0.42/70)";
					maxFov="(0.42/70)";
					gunnerOpticsModel="\A3\Drones_F\Weapons_F_Gamma\Reticle\UAV_Optics_Gunner_narrow_F.p3d";
				};
				showMiniMapInOptics=1;
				showUAVViewInOptics=0;
				showSlingLoadManagerInOptics=1;
			};
			minTurn=-180;
			maxTurn=180;
			initTurn=0;
			minElev=-10;
			maxElev=90;
			initElev=-10;
			maxXRotSpeed=0.30000001;
			maxYRotSpeed=0.30000001;
			pilotOpticsShowCursor=1;
			controllable=1;
		};
		class ViewPilot
		{
			initAngleX=0;
			minAngleX=-55;
			maxAngleX=85;
			initAngleY=0;
			minAngleY=-150;
			maxAngleY=150;
			minFov=0.25;
			maxFov=1.25;
			initFov=0.75;
			minMoveX=-100;
			maxMoveX=100;
			minMoveY=0;
			maxMoveY=0;
			minMoveZ=0;
			maxMoveZ=0;
		};
		class Components: Components
		{
			class VehicleSystemsDisplayManagerComponentLeft: VehicleSystemsTemplateLeftPilot
			{
				class Components: Components
				{
					class EmptyDisplay
					{
						componentType="EmptyDisplayComponent";
					};
					class MinimapDisplay
					{
						componentType="MinimapDisplayComponent";
						resource="RscCustomInfoAirborneMiniMap";
					};
					class CrewDisplay
					{
						componentType="CrewDisplayComponent";
						resource="RscCustomInfoCrew";
					};
					class UAVDisplay
					{
						componentType="UAVFeedDisplayComponent";
					};
					class VehiclePrimaryGunnerDisplay
					{
						componentType="TransportFeedDisplayComponent";
						source="PrimaryGunner";
					};
					class VehicleMissileDisplay
					{
						componentType="TransportFeedDisplayComponent";
						source="Missile";
					};
					class SensorDisplay
					{
						componentType="SensorsDisplayComponent";
						range[]={4000,8000,16000};
						resource="RscCustomInfoSensors";
					};
				};
			};
			class VehicleSystemsDisplayManagerComponentRight: VehicleSystemsTemplateRightPilot
			{
				defaultDisplay="SensorDisplay";
				class Components: Components
				{
					class EmptyDisplay
					{
						componentType="EmptyDisplayComponent";
					};
					class MinimapDisplay
					{
						componentType="MinimapDisplayComponent";
						resource="RscCustomInfoAirborneMiniMap";
					};
					class CrewDisplay
					{
						componentType="CrewDisplayComponent";
						resource="RscCustomInfoCrew";
					};
					class UAVDisplay
					{
						componentType="UAVFeedDisplayComponent";
					};
					class VehiclePrimaryGunnerDisplay
					{
						componentType="TransportFeedDisplayComponent";
						source="PrimaryGunner";
					};
					class VehicleMissileDisplay
					{
						componentType="TransportFeedDisplayComponent";
						source="Missile";
					};
					class SensorDisplay
					{
						componentType="SensorsDisplayComponent";
						range[]={4000,8000,16000};
						resource="RscCustomInfoSensors";
					};
				};
			};
			class SensorsManagerComponent
			{
				class Components
				{
					class IRSensorComponent: SensorTemplateIR
					{
						class AirTarget
						{
							minRange=0;
							maxRange=16000;
							objectDistanceLimitCoef=-1;
							viewDistanceLimitCoef=1;
						};
						class GroundTarget
						{
							minRange=0;
							maxRange=16000;
							objectDistanceLimitCoef=-1;
							viewDistanceLimitCoef=1;
						};
						componentType="IRSensorComponent";
						typeRecognitionDistance=12000;
						angleRangeHorizontal=360;
						angleRangeVertical=180;
						maxFogSeeThrough=0.85000002;
						groundNoiseDistanceCoef=-1;
						maxGroundNoiseDistance=0;
						minSpeedThreshold=0;
						maxSpeedThreshold=1000;
						minTrackableSpeed=-1e+010;
						maxTrackableSpeed=1e+010;
						minTrackableATL=-1e+010;
						maxTrackableATL=1e+010;
						allowsMarking=1;
						aimDown=0;
						color[]={1,0,0,1};
					};
					class ActiveRadarSensorComponent: SensorTemplateActiveRadar
					{
						class AirTarget
						{
							minRange=0;
							maxRange=16000;
							objectDistanceLimitCoef=-1;
							viewDistanceLimitCoef=-1;
						};
						class GroundTarget
						{
							minRange=0;
							maxRange=16000;
							objectDistanceLimitCoef=-1;
							viewDistanceLimitCoef=-1;
						};
						componentType="ActiveRadarSensorComponent";
						typeRecognitionDistance=12000;
						angleRangeHorizontal=360;
						angleRangeVertical=180;
						maxFogSeeThrough=-1;
						groundNoiseDistanceCoef=-1;
						maxGroundNoiseDistance=0;
						minSpeedThreshold=0;
						maxSpeedThreshold=1000;
						minTrackableSpeed=-1e+010;
						maxTrackableSpeed=1e+010;
						minTrackableATL=-1e+010;
						maxTrackableATL=1e+010;
						allowsMarking=1;
						aimDown=20;
						animDirection="";
						color[]={0,1,1,1};
					};
					class AntiRadiationSensorComponent: SensorTemplateAntiRadiation
					{
						componentType="PassiveRadarSensorComponent";
						class AirTarget
						{
							maxRange=0;
							minRange=16000;
							objectDistanceLimitCoef=-1;
							viewDistanceLimitCoef=-1;
						};
						class GroundTarget
						{
							maxRange=0;
							minRange=16000;
							objectDistanceLimitCoef=-1;
							viewDistanceLimitCoef=-1;
						};
						typeRecognitionDistance=12000;
						angleRangeHorizontal=360;
						angleRangeVertical=180;
						maxFogSeeThrough=0.85000002;
						groundNoiseDistanceCoef=-1;
						maxGroundNoiseDistance=0;
						minSpeedThreshold=0;
						maxSpeedThreshold=1000;
						minTrackableSpeed=-1e+010;
						maxTrackableSpeed=1e+010;
						minTrackableATL=-1e+010;
						maxTrackableATL=1e+010;
						allowsMarking=1;
						aimDown=45;
						animDirection="";
						color[]={0,1,1,1};
					};
					class VisualRadarSensorComponent: SensorTemplateVisual
					{
						class AirTarget
						{
							minRange=0;
							maxRange=4000;
							objectDistanceLimitCoef=-1;
							viewDistanceLimitCoef=-1;
						};
						class GroundTarget
						{
							minRange=0;
							maxRange=4000;
							objectDistanceLimitCoef=-1;
							viewDistanceLimitCoef=-1;
						};
						componentType="VisualSensorComponent";
						typeRecognitionDistance=1000;
						angleRangeHorizontal=360;
						angleRangeVertical=180;
						maxFogSeeThrough=-1;
						groundNoiseDistanceCoef=-1;
						maxGroundNoiseDistance=0;
						minSpeedThreshold=0;
						maxSpeedThreshold=1000;
						minTrackableSpeed=-1e+010;
						maxTrackableSpeed=1e+010;
						minTrackableATL=-1e+010;
						maxTrackableATL=1e+010;
						allowsMarking=1;
						aimDown=0;
						color[]={1,1,0.5,0.80000001};
					};
					class LaserSensorComponent: SensorTemplateLaser
					{
						class AirTarget
						{
							minRange=0;
							maxRange=16000;
							objectDistanceLimitCoef=-1;
							viewDistanceLimitCoef=-1;
						};
						class GroundTarget
						{
							minRange=0;
							maxRange=16000;
							objectDistanceLimitCoef=-1;
							viewDistanceLimitCoef=-1;
						};
						componentType="LaserSensorComponent";
						angleRangeHorizontal=360;
						angleRangeVertical=180;
						aimDown=0;
						maxFogSeeThrough=0.85000002;
					};
					class NVSensorComponent: SensorTemplateNV
					{
						class AirTarget
						{
							minRange=0;
							maxRange=16000;
							objectDistanceLimitCoef=-1;
							viewDistanceLimitCoef=-1;
						};
						class GroundTarget
						{
							minRange=0;
							maxRange=16000;
							objectDistanceLimitCoef=-1;
							viewDistanceLimitCoef=-1;
						};
						componentType="NVSensorComponent";
						angleRangeHorizontal=360;
						angleRangeVertical=180;
						aimDown=0;
						maxFogSeeThrough=0.85000002;
					};
					class DataLinkSensorComponent: SensorTemplateDataLink
					{
						class AirTarget
						{
							minRange=0;
							maxRange=16000;
							objectDistanceLimitCoef=-1;
							viewDistanceLimitCoef=-1;
						};
						class GroundTarget
						{
							minRange=0;
							maxRange=16000;
							objectDistanceLimitCoef=-1;
							viewDistanceLimitCoef=-1;
						};
						componentType="DataLinkSensorComponent";
						allowsMarking=1;
						typeRecognitionDistance=0;
						color[]={1,1,1,0};
					};
				};
			};
		};
	};
	class 38th_laati_transport_standard: 3as_LAAT_Mk2
	{
		displayName="LAAT/I(Transport)";
		//editorPreview="\38th_vehicles\ui\38th_laati_transport_standard.jpg";
		faction="38th_main";
		scopeCurator=2;
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"38th\38th_Vehicles\textures\air\laati\base\Hull_co.paa",
			"38th\38th_Vehicles\textures\air\laati\base\Wings_co.paa",
			"38th\38th_Vehicles\textures\air\laati\base\Weapons_co.paa",
			"38th\38th_Vehicles\textures\air\laati\base\Weapon_Details_co.paa",
			"38th\38th_Vehicles\textures\air\laati\base\Interior_co.paa"
		};
	};
	class 38th_laatc_standard: 3as_LAATC
	{
		displayName="LAAT/C";
		//editorPreview="\38th_vehicles\ui\38th_laati_transport_standard.jpg";
		faction="38th_main";
		scopeCurator=2;
		scope=2;
	};
	class 38th_laatle_standard: 3AS_Patrol_LAAT_Republic
	{
		displayName="LAAT/LE";
		//editorPreview="\38th_vehicles\ui\38th_laati_transport_standard.jpg";
		faction="38th_main";
		scopeCurator=2;
		scope=2;
		class Turrets: Turrets
		{
			class Gunner: Copilot
			{
				caneject=0;
				castgunnershadow=1;
				commanding=-1;
				discretedistance[]={100,200,300,400,500,600,700,800,1000,1200,1500,1800,2100};
				discretedistanceinitindex=5;
				gunneraction="LE_Pilot";
				gunnerforceoptics=0;
				displayname="Co-Pilot";
				gunnergetinaction="Heli_Attack_01_Gunner_Enter";
				gunnergetoutaction="Heli_Attack_01_Gunner_Exit";
				gunnerinaction="";
				gunnerlefthandanimname="lever_copilot";
				gunneropticseffect[]=
				{
					"TankCommanderOptics1",
					"BWTV"
				};
				gunneropticsmodel="";
				gunnerrighthandanimname="stick_copilot";
				initelev=0;
				initturn=0;
				iscopilot=1;
				maxelev=20;
				maxturn=75;
				memorypointgunneroptics="GunnerView";
				memorypointsgetingunner="pos_driver";
				memorypointsgetingunnerdir="pos_driver_dir";
				minelev=-65;
				minturn=-75;
				outgunnermayfire=1;
				precisegetinout=1;
				primarygunner=0;
				selectionfireanim="zasleh";
				soundservo[]=
				{
					"",
					0.0099999998,
					1
				};
				startengine=0;
				animationSourceBody="mainTurret";
				animationsourcegun="Maingun";
				animationsourcehatch="";
				body="mainTurret";
				gun="Maingun";
				turretinfotype="RscOptics_Heli_Attack_01_gunner";
				weapons[]=
				{
					"38th_LAAT_BallGun"
				};
				magazines[]=
				{
					"38th_EWEB_200rnd_HE_mag",
					"38th_EWEB_200rnd_HE_mag",
					"38th_EWEB_200rnd_HE_mag",
					"38th_EWEB_200rnd_HE_mag"
				};
				memoryPointGun[]=
				{
					"z_gunL_muzzle",
					"z_gunR_muzzle"
				};
				class Reflectors
				{
					class Right
					{
						color[]={7000,7500,10000};
						ambient[]={70,75,100};
						intensity=50;
						size=5;
						innerAngle=15;
						outerAngle=65;
						coneFadeCoef=10;
						position="SpotLight";
						direction="SpotLight_Dir";
						hitpoint="Light_b_hitpoint";
						selection="Spotlight";
						useFlare=1;
						flareSize=15;
						flareMaxDistance=250;
						dayLight=0;
						class Attenuation
						{
							start=0;
							constant=0;
							linear=1;
							quadratic=1;
							hardLimitStart=100;
							hardLimitEnd=200;
						};
					};
				};
				class OpticsIn
				{
					class Wide
					{
						gunneropticsmodel="\A3\Weapons_F_Beta\Reticle\Heli_Attack_01_Optics_Gunner_wide_F";
						initanglex=0;
						initangley=0;
						initfov=0.46599999;
						maxanglex=30;
						maxangley=100;
						maxfov=0.46599999;
						minanglex=-30;
						minangley=-100;
						minfov=0.46599999;
						opticsdisplayname="W";
						thermalmode[]={0,1};
						visionmode[]=
						{
							"Normal",
							"NVG",
							"Ti"
						};
					};
					class Medium: Wide
					{
						gunneropticsmodel="\A3\Weapons_F_Beta\Reticle\Heli_Attack_01_Optics_Gunner_medium_F";
						initfov=0.093000002;
						maxfov=0.093000002;
						minfov=0.093000002;
						opticsdisplayname="M";
					};
					class Narrow: Wide
					{
						gunneropticsmodel="\A3\Weapons_F_Beta\Reticle\Heli_Attack_01_Optics_Gunner_narrow_F";
						initfov=0.028999999;
						maxfov=0.028999999;
						minfov=0.028999999;
						opticsdisplayname="N";
					};
				};
				class OpticsOut
				{
					class Monocular
					{
						gunneropticseffect[]={};
						gunneropticsmodel="";
						initanglex=0;
						initangley=0;
						initfov=1.1;
						maxanglex=30;
						maxangley=100;
						maxfov=1.1;
						minanglex=-30;
						minangley=-100;
						minfov=0.133;
						visionmode[]=
						{
							"Normal",
							"NVG"
						};
					};
				};
				class HitTurret
				{
					armor=0.80000001;
					material=-1;
					name="gun1";
					passthrough=0.5;
					visual="gun1";
				};
				class HitGun
				{
					armor=0.40000001;
					material=-1;
					name="gun2";
					passthrough=0.2;
					visual="gun2";
				};
			};
		};
		class pilotCamera
		{
			class OpticsIn
			{
				class Wide
				{
					opticsDisplayName="WFOV";
					initAngleX=0;
					minAngleX=-10;
					maxAngleX=90;
					initAngleY=0;
					minAngleY=-90;
					maxAngleY=90;
					initFov=0.42500001;
					minFov=0.42500001;
					maxFov=0.42500001;
					directionStabilized=1;
					thermalMode[]={0,1};
					visionMode[]=
					{
						"Normal",
						"NVG",
						"Ti"
					};
					gunnerOpticsModel="\A3\Drones_F\Weapons_F_Gamma\Reticle\UAV_Optics_Gunner_wide_F.p3d";
					opticsPPEffects[]=
					{
						"OpticsCHAbera2",
						"OpticsBlur2"
					};
				};
				class zoomx4: Wide
				{
					opticsDisplayName="NFOV";
					initFov="(0.425/4)";
					minFov="(0.425/4)";
					maxFov="(0.425/4)";
					gunnerOpticsModel="\A3\Drones_F\Weapons_F_Gamma\Reticle\UAV_Optics_Gunner_narrow_F.p3d";
				};
				class zoomX8: Wide
				{
					opticsDisplayName="NFOV";
					initFov="(0.42/8)";
					minFov="(0.42/8)";
					maxFov="(0.42/8)";
					gunnerOpticsModel="\A3\Drones_F\Weapons_F_Gamma\Reticle\UAV_Optics_Gunner_narrow_F.p3d";
				};
				class zoomX20: Wide
				{
					opticsDisplayName="NFOV";
					initFov="(0.42/20)";
					minFov="(0.42/20)";
					maxFov="(0.42/20)";
					gunnerOpticsModel="\A3\Drones_F\Weapons_F_Gamma\Reticle\UAV_Optics_Gunner_narrow_F.p3d";
				};
				class zoomX50: Wide
				{
					opticsDisplayName="NFOV";
					initFov="(0.42/50)";
					minFov="(0.42/50)";
					maxFov="(0.42/50)";
					gunnerOpticsModel="\A3\Drones_F\Weapons_F_Gamma\Reticle\UAV_Optics_Gunner_narrow_F.p3d";
				};
				class zoomX70: Wide
				{
					opticsDisplayName="NFOV";
					initFov="(0.42/70)";
					minFov="(0.42/70)";
					maxFov="(0.42/70)";
					gunnerOpticsModel="\A3\Drones_F\Weapons_F_Gamma\Reticle\UAV_Optics_Gunner_narrow_F.p3d";
				};
				showMiniMapInOptics=1;
				showUAVViewInOptics=0;
				showSlingLoadManagerInOptics=1;
			};
			minTurn=-180;
			maxTurn=180;
			initTurn=0;
			minElev=-10;
			maxElev=90;
			initElev=-10;
			maxXRotSpeed=0.30000001;
			maxYRotSpeed=0.30000001;
			pilotOpticsShowCursor=1;
			controllable=1;
		};
		class ViewPilot
		{
			initAngleX=0;
			minAngleX=-55;
			maxAngleX=85;
			initAngleY=0;
			minAngleY=-150;
			maxAngleY=150;
			minFov=0.25;
			maxFov=1.25;
			initFov=0.75;
			minMoveX=-100;
			maxMoveX=100;
			minMoveY=0;
			maxMoveY=0;
			minMoveZ=0;
			maxMoveZ=0;
		};
		class Components: Components
		{
			class VehicleSystemsDisplayManagerComponentLeft: VehicleSystemsTemplateLeftPilot
			{
				class Components: Components
				{
					class EmptyDisplay
					{
						componentType="EmptyDisplayComponent";
					};
					class MinimapDisplay
					{
						componentType="MinimapDisplayComponent";
						resource="RscCustomInfoAirborneMiniMap";
					};
					class CrewDisplay
					{
						componentType="CrewDisplayComponent";
						resource="RscCustomInfoCrew";
					};
					class UAVDisplay
					{
						componentType="UAVFeedDisplayComponent";
					};
					class VehiclePrimaryGunnerDisplay
					{
						componentType="TransportFeedDisplayComponent";
						source="PrimaryGunner";
					};
					class VehicleMissileDisplay
					{
						componentType="TransportFeedDisplayComponent";
						source="Missile";
					};
					class SensorDisplay
					{
						componentType="SensorsDisplayComponent";
						range[]={4000,8000,16000};
						resource="RscCustomInfoSensors";
					};
				};
			};
			class VehicleSystemsDisplayManagerComponentRight: VehicleSystemsTemplateRightPilot
			{
				defaultDisplay="SensorDisplay";
				class Components: Components
				{
					class EmptyDisplay
					{
						componentType="EmptyDisplayComponent";
					};
					class MinimapDisplay
					{
						componentType="MinimapDisplayComponent";
						resource="RscCustomInfoAirborneMiniMap";
					};
					class CrewDisplay
					{
						componentType="CrewDisplayComponent";
						resource="RscCustomInfoCrew";
					};
					class UAVDisplay
					{
						componentType="UAVFeedDisplayComponent";
					};
					class VehiclePrimaryGunnerDisplay
					{
						componentType="TransportFeedDisplayComponent";
						source="PrimaryGunner";
					};
					class VehicleMissileDisplay
					{
						componentType="TransportFeedDisplayComponent";
						source="Missile";
					};
					class SensorDisplay
					{
						componentType="SensorsDisplayComponent";
						range[]={4000,8000,16000};
						resource="RscCustomInfoSensors";
					};
				};
			};
			class SensorsManagerComponent
			{
				class Components
				{
					class IRSensorComponent: SensorTemplateIR
					{
						class AirTarget
						{
							minRange=0;
							maxRange=16000;
							objectDistanceLimitCoef=-1;
							viewDistanceLimitCoef=1;
						};
						class GroundTarget
						{
							minRange=0;
							maxRange=16000;
							objectDistanceLimitCoef=-1;
							viewDistanceLimitCoef=1;
						};
						componentType="IRSensorComponent";
						typeRecognitionDistance=12000;
						angleRangeHorizontal=360;
						angleRangeVertical=180;
						maxFogSeeThrough=0.85000002;
						groundNoiseDistanceCoef=-1;
						maxGroundNoiseDistance=0;
						minSpeedThreshold=0;
						maxSpeedThreshold=1000;
						minTrackableSpeed=-1e+010;
						maxTrackableSpeed=1e+010;
						minTrackableATL=-1e+010;
						maxTrackableATL=1e+010;
						allowsMarking=1;
						aimDown=0;
						color[]={1,0,0,1};
					};
					class ActiveRadarSensorComponent: SensorTemplateActiveRadar
					{
						class AirTarget
						{
							minRange=0;
							maxRange=16000;
							objectDistanceLimitCoef=-1;
							viewDistanceLimitCoef=-1;
						};
						class GroundTarget
						{
							minRange=0;
							maxRange=16000;
							objectDistanceLimitCoef=-1;
							viewDistanceLimitCoef=-1;
						};
						componentType="ActiveRadarSensorComponent";
						typeRecognitionDistance=12000;
						angleRangeHorizontal=360;
						angleRangeVertical=180;
						maxFogSeeThrough=-1;
						groundNoiseDistanceCoef=-1;
						maxGroundNoiseDistance=0;
						minSpeedThreshold=0;
						maxSpeedThreshold=1000;
						minTrackableSpeed=-1e+010;
						maxTrackableSpeed=1e+010;
						minTrackableATL=-1e+010;
						maxTrackableATL=1e+010;
						allowsMarking=1;
						aimDown=20;
						animDirection="";
						color[]={0,1,1,1};
					};
					class AntiRadiationSensorComponent: SensorTemplateAntiRadiation
					{
						componentType="PassiveRadarSensorComponent";
						class AirTarget
						{
							maxRange=0;
							minRange=16000;
							objectDistanceLimitCoef=-1;
							viewDistanceLimitCoef=-1;
						};
						class GroundTarget
						{
							maxRange=0;
							minRange=16000;
							objectDistanceLimitCoef=-1;
							viewDistanceLimitCoef=-1;
						};
						typeRecognitionDistance=12000;
						angleRangeHorizontal=360;
						angleRangeVertical=180;
						maxFogSeeThrough=0.85000002;
						groundNoiseDistanceCoef=-1;
						maxGroundNoiseDistance=0;
						minSpeedThreshold=0;
						maxSpeedThreshold=1000;
						minTrackableSpeed=-1e+010;
						maxTrackableSpeed=1e+010;
						minTrackableATL=-1e+010;
						maxTrackableATL=1e+010;
						allowsMarking=1;
						aimDown=45;
						animDirection="";
						color[]={0,1,1,1};
					};
					class VisualRadarSensorComponent: SensorTemplateVisual
					{
						class AirTarget
						{
							minRange=0;
							maxRange=4000;
							objectDistanceLimitCoef=-1;
							viewDistanceLimitCoef=-1;
						};
						class GroundTarget
						{
							minRange=0;
							maxRange=4000;
							objectDistanceLimitCoef=-1;
							viewDistanceLimitCoef=-1;
						};
						componentType="VisualSensorComponent";
						typeRecognitionDistance=1000;
						angleRangeHorizontal=360;
						angleRangeVertical=180;
						maxFogSeeThrough=-1;
						groundNoiseDistanceCoef=-1;
						maxGroundNoiseDistance=0;
						minSpeedThreshold=0;
						maxSpeedThreshold=1000;
						minTrackableSpeed=-1e+010;
						maxTrackableSpeed=1e+010;
						minTrackableATL=-1e+010;
						maxTrackableATL=1e+010;
						allowsMarking=1;
						aimDown=0;
						color[]={1,1,0.5,0.80000001};
					};
					class LaserSensorComponent: SensorTemplateLaser
					{
						class AirTarget
						{
							minRange=0;
							maxRange=16000;
							objectDistanceLimitCoef=-1;
							viewDistanceLimitCoef=-1;
						};
						class GroundTarget
						{
							minRange=0;
							maxRange=16000;
							objectDistanceLimitCoef=-1;
							viewDistanceLimitCoef=-1;
						};
						componentType="LaserSensorComponent";
						angleRangeHorizontal=360;
						angleRangeVertical=180;
						aimDown=0;
						maxFogSeeThrough=0.85000002;
					};
					class NVSensorComponent: SensorTemplateNV
					{
						class AirTarget
						{
							minRange=0;
							maxRange=16000;
							objectDistanceLimitCoef=-1;
							viewDistanceLimitCoef=-1;
						};
						class GroundTarget
						{
							minRange=0;
							maxRange=16000;
							objectDistanceLimitCoef=-1;
							viewDistanceLimitCoef=-1;
						};
						componentType="NVSensorComponent";
						angleRangeHorizontal=360;
						angleRangeVertical=180;
						aimDown=0;
						maxFogSeeThrough=0.85000002;
					};
					class DataLinkSensorComponent: SensorTemplateDataLink
					{
						class AirTarget
						{
							minRange=0;
							maxRange=16000;
							objectDistanceLimitCoef=-1;
							viewDistanceLimitCoef=-1;
						};
						class GroundTarget
						{
							minRange=0;
							maxRange=16000;
							objectDistanceLimitCoef=-1;
							viewDistanceLimitCoef=-1;
						};
						componentType="DataLinkSensorComponent";
						allowsMarking=1;
						typeRecognitionDistance=0;
						color[]={1,1,1,0};
					};
				};
			};
		};
		receiveRemoteTargets=1;
		reportRemoteTargets=1;
		reportOwnPosition=1;
	};
	class 3AS_Z95_Republic;
	class 38th_Z95: 3AS_Z95_Republic
	{
		displayname="[38th] Z-95";
		faction="38th_main";
		vehicleClass="38th_Z95";
		scope=2;
		side=1;
		scopeCurator=2;
		forceInGarage=1;
		armor=500;
		ace_cargo_space=0;
		ace_cargo_hasCargo=0;
		maxSpeed=1200;
		crewCrashProtection=0.050000001;
		crewExplosionProtection=0.050000001;
		receiveRemoteTargets=1;
		reportRemoteTargets=1;
		reportOwnPosition=1;
		class TransportMagazines
		{
		};
		class TransportWeapons
		{
		};
		class TransportItems
		{
		};
		class TransportBackpacks
		{
			class _xx_B_Parachute
			{
				backpack="B_Parachute";
				count=1;
			};
		};
	};
	class 38th_YWing: 3AS_BTLB_Bomber
	{
		displayname="[38th] Y-Wing";
		faction="38th_main";
		scope=2;
		side=1;
		scopeCurator=2;
		forceInGarage=1;
		armor=600;
		ace_cargo_space=0;
		ace_cargo_hasCargo=0;
		maxSpeed=800;
		crewCrashProtection=0.050000001;
		crewExplosionProtection=0.050000001;
		class Turrets
		{
			class BubbleGun: NewTurret
			{
				isCopilot=0;
				canEject=1;
				startEngine=0;
				minElev=-5;
				maxElev=80;
				initElev=0;
				minTurn=-180;
				maxTurn=180;
				initTurn=0;
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
						initFov=0.46599999;
						minFov=0.46599999;
						maxFov=0.46599999;
						opticsDisplayName="W";
						visionMode[]=
						{
							"Normal",
							"NVG",
							"Ti"
						};
						thermalMode[]={0,1};
						gunnerOpticsModel="\A3\Weapons_F_Beta\Reticle\Heli_Attack_01_Optics_Gunner_wide_F";
					};
					class Medium: Wide
					{
						initFov=0.093000002;
						minFov=0.093000002;
						maxFov=0.093000002;
						opticsDisplayName="M";
						gunnerOpticsModel="\A3\Weapons_F_Beta\Reticle\Heli_Attack_01_Optics_Gunner_medium_F";
					};
					class Narrow: Wide
					{
						initFov=0.028999999;
						minFov=0.028999999;
						maxFov=0.028999999;
						opticsDisplayName="N";
						gunnerOpticsModel="\A3\Weapons_F_Beta\Reticle\Heli_Attack_01_Optics_Gunner_narrow_F";
					};
				};
				class OpticsOut
				{
					class Monocular
					{
						initAngleX=0;
						minAngleX=-30;
						maxAngleX=30;
						initAngleY=0;
						minAngleY=-100;
						maxAngleY=100;
						minFov=0.25;
						maxFov=1.25;
						initFov=0.75;
						visionMode[]=
						{
							"Normal",
							"NVG"
						};
						gunnerOpticsModel="";
						gunnerOpticsEffect[]={};
					};
				};
				soundServo[]=
				{
					"",
					0.0099999998,
					1
				};
				outGunnerMayFire=1;
				commanding=-1;
				primaryGunner=1;
				gunnerGetInAction="GetInLow";
				gunnerGetOutAction="GetOutLow";
				gunnerinaction="gunner_apctracked1aa_in";
				gunneropticseffect[]=
				{
					"TankCommanderOptics1",
					"BWTV"
				};
				gunneropticsmodel="A3\drones_f\Weapons_F_Gamma\Reticle\UGV_01_Optics_Gunner_F.p3d";
				memorypointgunneroptics="gunnerview";
				memorypointsgetingunner="pos gunner";
				memorypointsgetingunnerdir="pos gunner dir";
				stabilizedInAxes=3;
				gunnerforceoptics=0;
				gunnerName="Ball Gunner";
				proxytype="CPGunner";
				proxyIndex=1;
				gunnerLeftHandAnimName="lever_copilot";
				gunnerRightHandAnimName="stick_copilot";
				gunnerLeftLegAnimName="";
				gunnerRightLegAnimName="";
				animationsourcebody="MainTurret";
				animationsourcegun="Maingun";
				animationsourcehatch="";
				body="MainTurret";
				gun="Maingun";
				memoryPointGun[]=
				{
					"Konec hlavne C1",
					"Konec hlavne C2"
				};
				selectionFireAnim="zaslehTurret";
				castGunnerShadow=1;
				viewGunnerShadow=1;
				precisegetinout=0;
				turretInfoType="RscOptics_Heli_Attack_01_gunner";
				discreteDistance[]={100,200,300,400,500,600,700,800,1000,1200,1500,1800,2100};
				discreteDistanceInitIndex=5;
				weapons[]=
				{
					"38th_LAAT_BallGun"
				};
				magazines[]=
				{
					"38th_EWEB_200rnd_HE_mag",
					"38th_EWEB_200rnd_HE_mag",
					"38th_EWEB_200rnd_HE_mag",
					"38th_EWEB_200rnd_HE_mag"
				};
				class Components
				{
					class VehicleSystemsDisplayManagerComponentLeft: VehicleSystemsTemplateLeftPilot
					{
						class Components: Components
						{
							class EmptyDisplay
							{
								componentType="EmptyDisplayComponent";
							};
							class MinimapDisplay
							{
								componentType="MinimapDisplayComponent";
								resource="RscCustomInfoAirborneMiniMap";
							};
							class CrewDisplay
							{
								componentType="CrewDisplayComponent";
								resource="RscCustomInfoCrew";
							};
							class UAVDisplay
							{
								componentType="UAVFeedDisplayComponent";
							};
							class VehiclePrimaryGunnerDisplay
							{
								componentType="TransportFeedDisplayComponent";
								source="PrimaryGunner";
							};
							class VehicleMissileDisplay
							{
								componentType="TransportFeedDisplayComponent";
								source="Missile";
							};
							class SensorDisplay
							{
								componentType="SensorsDisplayComponent";
								range[]={4000,8000,16000,24000};
								resource="RscCustomInfoSensors";
							};
						};
					};
					class VehicleSystemsDisplayManagerComponentRight: VehicleSystemsTemplateRightPilot
					{
						defaultDisplay="SensorDisplay";
						class Components: Components
						{
							class EmptyDisplay
							{
								componentType="EmptyDisplayComponent";
							};
							class MinimapDisplay
							{
								componentType="MinimapDisplayComponent";
								resource="RscCustomInfoAirborneMiniMap";
							};
							class CrewDisplay
							{
								componentType="CrewDisplayComponent";
								resource="RscCustomInfoCrew";
							};
							class UAVDisplay
							{
								componentType="UAVFeedDisplayComponent";
							};
							class VehiclePrimaryGunnerDisplay
							{
								componentType="TransportFeedDisplayComponent";
								source="PrimaryGunner";
							};
							class VehicleMissileDisplay
							{
								componentType="TransportFeedDisplayComponent";
								source="Missile";
							};
							class SensorDisplay
							{
								componentType="SensorsDisplayComponent";
								range[]={4000,8000,16000,24000};
								resource="RscCustomInfoSensors";
							};
						};
					};
				};
			};
		};
		class AnimationSources: AnimationSources
		{
			class Muzzle_Flash
			{
				source="ammorandom";
				weapon="38th_LAAT_BallGun";
			};
			class Muzzle_Flash2
			{
				source="ammorandom";
				weapon="38th_LAAT_BallGun";
			};
		};
		class pilotCamera
		{
			class OpticsIn
			{
				class Wide
				{
					opticsDisplayName="WFOV";
					initAngleX=0;
					minAngleX=-10;
					maxAngleX=90;
					initAngleY=0;
					minAngleY=-90;
					maxAngleY=90;
					initFov=0.42500001;
					minFov=0.42500001;
					maxFov=0.42500001;
					directionStabilized=1;
					thermalMode[]={0,1};
					visionMode[]=
					{
						"Normal",
						"NVG",
						"Ti"
					};
					gunnerOpticsModel="\A3\Drones_F\Weapons_F_Gamma\Reticle\UAV_Optics_Gunner_wide_F.p3d";
					opticsPPEffects[]=
					{
						"OpticsCHAbera2",
						"OpticsBlur2"
					};
				};
				class zoomx4: Wide
				{
					opticsDisplayName="NFOV";
					initFov="(0.425/4)";
					minFov="(0.425/4)";
					maxFov="(0.425/4)";
					gunnerOpticsModel="\A3\Drones_F\Weapons_F_Gamma\Reticle\UAV_Optics_Gunner_narrow_F.p3d";
				};
				class zoomX8: Wide
				{
					opticsDisplayName="NFOV";
					initFov="(0.42/8)";
					minFov="(0.42/8)";
					maxFov="(0.42/8)";
					gunnerOpticsModel="\A3\Drones_F\Weapons_F_Gamma\Reticle\UAV_Optics_Gunner_narrow_F.p3d";
				};
				class zoomX20: Wide
				{
					opticsDisplayName="NFOV";
					initFov="(0.42/20)";
					minFov="(0.42/20)";
					maxFov="(0.42/20)";
					gunnerOpticsModel="\A3\Drones_F\Weapons_F_Gamma\Reticle\UAV_Optics_Gunner_narrow_F.p3d";
				};
				class zoomX50: Wide
				{
					opticsDisplayName="NFOV";
					initFov="(0.42/50)";
					minFov="(0.42/50)";
					maxFov="(0.42/50)";
					gunnerOpticsModel="\A3\Drones_F\Weapons_F_Gamma\Reticle\UAV_Optics_Gunner_narrow_F.p3d";
				};
				class zoomX70: Wide
				{
					opticsDisplayName="NFOV";
					initFov="(0.42/70)";
					minFov="(0.42/70)";
					maxFov="(0.42/70)";
					gunnerOpticsModel="\A3\Drones_F\Weapons_F_Gamma\Reticle\UAV_Optics_Gunner_narrow_F.p3d";
				};
				showMiniMapInOptics=1;
				showUAVViewInOptics=0;
				showSlingLoadManagerInOptics=1;
			};
			minTurn=-180;
			maxTurn=180;
			initTurn=0;
			minElev=-10;
			maxElev=90;
			initElev=-10;
			maxXRotSpeed=0.30000001;
			maxYRotSpeed=0.30000001;
			pilotOpticsShowCursor=1;
			controllable=1;
		};
		class ViewPilot
		{
			initAngleX=0;
			minAngleX=-55;
			maxAngleX=85;
			initAngleY=0;
			minAngleY=-150;
			maxAngleY=150;
			minFov=0.25;
			maxFov=1.25;
			initFov=0.75;
			minMoveX=-100;
			maxMoveX=100;
			minMoveY=0;
			maxMoveY=0;
			minMoveZ=0;
			maxMoveZ=0;
		};
		class Components: Components
		{
			class VehicleSystemsDisplayManagerComponentLeft: VehicleSystemsTemplateLeftPilot
			{
				class Components: Components
				{
					class EmptyDisplay
					{
						componentType="EmptyDisplayComponent";
					};
					class MinimapDisplay
					{
						componentType="MinimapDisplayComponent";
						resource="RscCustomInfoAirborneMiniMap";
					};
					class CrewDisplay
					{
						componentType="CrewDisplayComponent";
						resource="RscCustomInfoCrew";
					};
					class UAVDisplay
					{
						componentType="UAVFeedDisplayComponent";
					};
					class VehiclePrimaryGunnerDisplay
					{
						componentType="TransportFeedDisplayComponent";
						source="PrimaryGunner";
					};
					class VehicleMissileDisplay
					{
						componentType="TransportFeedDisplayComponent";
						source="Missile";
					};
					class SensorDisplay
					{
						componentType="SensorsDisplayComponent";
						range[]={4000,8000,16000,24000};
						resource="RscCustomInfoSensors";
					};
				};
			};
			class VehicleSystemsDisplayManagerComponentRight: VehicleSystemsTemplateRightPilot
			{
				defaultDisplay="SensorDisplay";
				class Components: Components
				{
					class EmptyDisplay
					{
						componentType="EmptyDisplayComponent";
					};
					class MinimapDisplay
					{
						componentType="MinimapDisplayComponent";
						resource="RscCustomInfoAirborneMiniMap";
					};
					class CrewDisplay
					{
						componentType="CrewDisplayComponent";
						resource="RscCustomInfoCrew";
					};
					class UAVDisplay
					{
						componentType="UAVFeedDisplayComponent";
					};
					class VehiclePrimaryGunnerDisplay
					{
						componentType="TransportFeedDisplayComponent";
						source="PrimaryGunner";
					};
					class VehicleMissileDisplay
					{
						componentType="TransportFeedDisplayComponent";
						source="Missile";
					};
					class SensorDisplay
					{
						componentType="SensorsDisplayComponent";
						range[]={4000,8000,16000,24000};
						resource="RscCustomInfoSensors";
					};
				};
			};
			class SensorsManagerComponent
			{
				class Components
				{
					class IRSensorComponent: SensorTemplateIR
					{
						class AirTarget
						{
							minRange=0;
							maxRange=24000;
							objectDistanceLimitCoef=-1;
							viewDistanceLimitCoef=1;
						};
						class GroundTarget
						{
							minRange=0;
							maxRange=24000;
							objectDistanceLimitCoef=-1;
							viewDistanceLimitCoef=1;
						};
						componentType="IRSensorComponent";
						typeRecognitionDistance=20000;
						angleRangeHorizontal=360;
						angleRangeVertical=180;
						maxFogSeeThrough=0.85000002;
						groundNoiseDistanceCoef=-1;
						maxGroundNoiseDistance=0;
						minSpeedThreshold=0;
						maxSpeedThreshold=1000;
						minTrackableSpeed=-1e+010;
						maxTrackableSpeed=1e+010;
						minTrackableATL=-1e+010;
						maxTrackableATL=1e+010;
						allowsMarking=1;
						aimDown=0;
						color[]={1,0,0,1};
					};
					class ActiveRadarSensorComponent: SensorTemplateActiveRadar
					{
						class AirTarget
						{
							minRange=0;
							maxRange=24000;
							objectDistanceLimitCoef=-1;
							viewDistanceLimitCoef=-1;
						};
						class GroundTarget
						{
							minRange=0;
							maxRange=24000;
							objectDistanceLimitCoef=-1;
							viewDistanceLimitCoef=-1;
						};
						componentType="ActiveRadarSensorComponent";
						typeRecognitionDistance=20000;
						angleRangeHorizontal=360;
						angleRangeVertical=180;
						maxFogSeeThrough=-1;
						groundNoiseDistanceCoef=-1;
						maxGroundNoiseDistance=0;
						minSpeedThreshold=0;
						maxSpeedThreshold=1000;
						minTrackableSpeed=-1e+010;
						maxTrackableSpeed=1e+010;
						minTrackableATL=-1e+010;
						maxTrackableATL=1e+010;
						allowsMarking=1;
						aimDown=20;
						animDirection="";
						color[]={0,1,1,1};
					};
					class AntiRadiationSensorComponent: SensorTemplateAntiRadiation
					{
						componentType="PassiveRadarSensorComponent";
						class AirTarget
						{
							maxRange=0;
							minRange=24000;
							objectDistanceLimitCoef=-1;
							viewDistanceLimitCoef=-1;
						};
						class GroundTarget
						{
							maxRange=0;
							minRange=24000;
							objectDistanceLimitCoef=-1;
							viewDistanceLimitCoef=-1;
						};
						typeRecognitionDistance=20000;
						angleRangeHorizontal=360;
						angleRangeVertical=180;
						maxFogSeeThrough=0.85000002;
						groundNoiseDistanceCoef=-1;
						maxGroundNoiseDistance=0;
						minSpeedThreshold=0;
						maxSpeedThreshold=1000;
						minTrackableSpeed=-1e+010;
						maxTrackableSpeed=1e+010;
						minTrackableATL=-1e+010;
						maxTrackableATL=1e+010;
						allowsMarking=1;
						aimDown=45;
						animDirection="";
						color[]={0,1,1,1};
					};
					class VisualRadarSensorComponent: SensorTemplateVisual
					{
						class AirTarget
						{
							minRange=0;
							maxRange=8000;
							objectDistanceLimitCoef=-1;
							viewDistanceLimitCoef=-1;
						};
						class GroundTarget
						{
							minRange=0;
							maxRange=8000;
							objectDistanceLimitCoef=-1;
							viewDistanceLimitCoef=-1;
						};
						componentType="VisualSensorComponent";
						typeRecognitionDistance=6000;
						angleRangeHorizontal=360;
						angleRangeVertical=180;
						maxFogSeeThrough=-1;
						groundNoiseDistanceCoef=-1;
						maxGroundNoiseDistance=0;
						minSpeedThreshold=0;
						maxSpeedThreshold=1000;
						minTrackableSpeed=-1e+010;
						maxTrackableSpeed=1e+010;
						minTrackableATL=-1e+010;
						maxTrackableATL=1e+010;
						allowsMarking=1;
						aimDown=0;
						color[]={1,1,0.5,0.80000001};
					};
					class LaserSensorComponent: SensorTemplateLaser
					{
						class AirTarget
						{
							minRange=0;
							maxRange=24000;
							objectDistanceLimitCoef=-1;
							viewDistanceLimitCoef=-1;
						};
						class GroundTarget
						{
							minRange=0;
							maxRange=24000;
							objectDistanceLimitCoef=-1;
							viewDistanceLimitCoef=-1;
						};
						componentType="LaserSensorComponent";
						angleRangeHorizontal=360;
						angleRangeVertical=180;
						aimDown=0;
						maxFogSeeThrough=0.85000002;
					};
					class NVSensorComponent: SensorTemplateNV
					{
						class AirTarget
						{
							minRange=0;
							maxRange=24000;
							objectDistanceLimitCoef=-1;
							viewDistanceLimitCoef=-1;
						};
						class GroundTarget
						{
							minRange=0;
							maxRange=24000;
							objectDistanceLimitCoef=-1;
							viewDistanceLimitCoef=-1;
						};
						componentType="NVSensorComponent";
						angleRangeHorizontal=360;
						angleRangeVertical=180;
						aimDown=0;
						maxFogSeeThrough=0.85000002;
					};
					class DataLinkSensorComponent: SensorTemplateDataLink
					{
						class AirTarget
						{
							minRange=0;
							maxRange=24000;
							objectDistanceLimitCoef=-1;
							viewDistanceLimitCoef=-1;
						};
						class GroundTarget
						{
							minRange=0;
							maxRange=24000;
							objectDistanceLimitCoef=-1;
							viewDistanceLimitCoef=-1;
						};
						componentType="DataLinkSensorComponent";
						allowsMarking=1;
						typeRecognitionDistance=0;
						color[]={1,1,1,0};
					};
				};
			};
			class TransportPylonsComponent
			{
				UIPicture="3as\3AS_arc170\data\plane_arc_pylon_ca.paa";
				class pylons
				{
					class pylons1
					{
						hardpoints[]={};
						attachment="";
						priority=10;
						maxweight=2500;
						UIposition[]={0.5,0.25};
					};
					class pylons2: pylons1
					{
						UIposition[]={0.15000001,0.25};
						mirroredMissilePos=1;
					};
					class pylons3: pylons1
					{
						attachment="";
						priority=9;
						maxweight=2500;
						UIposition[]={0.55000001,0.34999999};
					};
					class pylons4: pylons3
					{
						UIposition[]={0.1,0.34999999};
						mirroredMissilePos=3;
					};
					class pylons5: pylons1
					{
						hardpoints[]={};
						attachment="";
						priority=7;
						maxweight=5000;
						UIposition[]={0.60000002,0.44999999};
					};
					class pylons6: pylons5
					{
						UIposition[]={0.050000001,0.44999999};
						mirroredMissilePos=5;
					};
					class pylons7: pylons1
					{
						attachment="";
						priority=9;
						maxweight=2500;
						UIposition[]={0.44999999,0.40000001};
					};
					class pylons8: pylons3
					{
						UIposition[]={0.2,0.40000001};
						mirroredMissilePos=7;
					};
				};
			};
		};
		receiveRemoteTargets=1;
		reportRemoteTargets=1;
		reportOwnPosition=1;
		class TransportMagazines
		{
		};
		class TransportWeapons
		{
		};
		class TransportItems
		{
		};
		class TransportBackpacks
		{
			class _xx_B_Parachute
			{
				backpack="B_Parachute";
				count=1;
			};
		};
	};
	class 38th_cis_buzzard_gunship: O_T_VTOL_02_infantry_grey_F
	{
		side=0;
		scope=2;
		scopeCurator=2;
		displayName="Buzzard Gunship";
		//editorPreview="\38th_vehicles\ui\38th_cis_buzzard_gunship.jpg";
		faction="38th_cis_main";
		hiddenSelectionsTextures[]=
		{
			"38th\38th_Vehicles\textures\air\xi'an\cis_buzzard_ext_01_CO.paa",
			"38th\38th_Vehicles\textures\air\xi'an\cis_buzzard_ext_02_CO.paa",
			"38th\38th_Vehicles\textures\air\xi'an\cis_buzzard_ext_03_l_CO.paa",
			"38th\38th_Vehicles\textures\air\xi'an\cis_buzzard_ext_03_r_CO.paa"
		};
		textureList[]=
		{
			"base",
			1
		};
		class TransportMagazines
		{
		};
		class TransportWeapons
		{
		};
		class Turrets: Turrets
		{
			class GunnerTurret: GunnerTurret
			{
				weapons[]=
				{
					"38th_vehicle_autocannon_he_50",
					"38th_vehicle_autocannon_apfsd_50",
					"missiles_DAR",
					"Laserdesignator_mounted"
				};
				magazines[]=
				{
					"38th_mag_50mm_he_red",
					"38th_mag_50mm_apfsd_red",
					"12rnd_missiles",
					"12rnd_missiles",
					"Laserbatteries"
				};
			};
		};
	};
	class 38th_merc_karador: B_T_VTOL_01_infantry_olive_F
	{
		side=2;
		scope=2;
		scopeCurator=2;
		displayName="Karador Transport Craft";
		//editorPreview="\38th_vehicles\ui\38th_merc_karador.jpg";
		faction="38th_indep_main";
		hiddenSelectionsTextures[]=
		{
			"38th\38th_Vehicles\textures\air\karador\merc_karador_ext01_CO.paa",
			"38th\38th_Vehicles\textures\air\karador\merc_karador_ext02_CO.paa",
			"38th\38th_Vehicles\textures\air\karador\merc_karador_ext03_CO.paa",
			"38th\38th_Vehicles\textures\air\karador\merc_karador_ext04_CO.paa"
		};
		textureList[]=
		{
			"base",
			1
		};
		class TransportMagazines
		{
		};
		class TransportWeapons
		{
		};
	};
	class I_Boat_Armed_01_minigun_F;
	class 38th_gar_gunboat: I_Boat_Armed_01_minigun_F
	{
		side=1;
		scope=2;
		scopeCurator=2;
		displayName="[38th] Gunboat";
		//editorPreview="\38th_vehicles\ui\38th_gar_gunboat.jpg";
		faction="38th_main";
		hiddenSelectionsTextures[]=
		{
			"38th\38th_Vehicles\textures\water\gunboat\gar_boat_ext_CO.paa",
			"38th\38th_Vehicles\textures\water\gunboat\gar_boat_int_CO.paa",
			"38th\38th_Vehicles\textures\water\gunboat\gar_boat_crow_CO.paa"
		};
		textureList[]=
		{
			"base",
			1
		};
		class TransportMagazines
		{
		};
		class TransportWeapons
		{
		};
		class Turrets: Turrets
		{
			class FrontTurret: FrontTurret
			{
				weapons[]=
				{
					"38th_vehicle_gmg"
				};
				magazines[]=
				{
					"38th_mag_40mm_blue",
					"38th_mag_40mm_blue"
				};
			};
			class RearTurret: RearTurret
			{
				weapons[]=
				{
					"38th_vehicle_hmg"
				};
				magazines[]=
				{
					"38th_EWEB_200rnd_HE_mag",
					"38th_EWEB_200rnd_HE_mag",
					"38th_EWEB_200rnd_HE_mag",
					"38th_EWEB_200rnd_HE_mag"
				};
			};
		};
	};
	class 38th_cis_gunboat: I_Boat_Armed_01_minigun_F
	{
		crew="38th_B1_standard";
		side=0;
		scope=2;
		scopeCurator=2;
		displayName="[CIS] Gunboat";
		//editorPreview="\38th_vehicles\ui\38th_cis_gunboat.jpg";
		faction="38th_cis_main";
		hiddenSelectionsTextures[]=
		{
			"38th\38th_Vehicles\textures\water\gunboat\cis_boat_ext_CO.paa",
			"38th\38th_Vehicles\textures\water\gunboat\cis_boat_int_CO.paa",
			"38th\38th_Vehicles\textures\water\gunboat\cis_boat_crow_CO.paa"
		};
		textureList[]=
		{
			"base",
			1
		};
		class Turrets: Turrets
		{
			class FrontTurret
			{
				weapons[]=
				{
					"38th_vehicle_gmg"
				};
				magazines[]=
				{
					"38th_mag_40mm_red",
					"38th_mag_40mm_red"
				};
			};
			class RearTurret
			{
				weapons[]=
				{
					"38th_vehicle_hmg"
				};
				magazines[]=
				{
					"38th_EWEB_200rnd_AP_mag",
					"38th_EWEB_200rnd_AP_mag",
					"38th_EWEB_200rnd_AP_mag",
					"38th_EWEB_200rnd_AP_mag"
				};
			};
		};
	};
	class O_MRAP_02_F;
	class O_MRAP_02_hmg_F;
	class O_MRAP_02_gmg_F;
	class I_MRAP_03_F;
	class I_MRAP_03_hmg_F;
	class I_MRAP_03_gmg_F;
	class 38th_gar_hmg_fennek: I_MRAP_03_F
	{
		side=1;
		scope=2;
		scopeCurator=2;
		displayName="Strider(Unarmed)";
		faction="38th_main";
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"\a3\soft_f_beta\MRAP_03\Data\mrap_03_ext_co.paa",
			"\a3\data_f\vehicles\turret_co.paa"
		};
		class TransportMagazines
		{
		};
		class TransportWeapons
		{
		};
	};
	class 38th_gar_ifrit: O_MRAP_02_F
	{
		side=1;
		scope=2;
		scopeCurator=2;
		displayName="Ifrit (Unarmed)";
		//editorPreview="\38th_vehicles\ui\38th_gar_ifrit.jpg";
		faction="38th_main";
		hiddenSelectionstextures[]=
		{
			"38th\38th_Vehicles\textures\ground\ifrit\gar_ifrit_ext_01_CO.paa",
			"38th\38th_Vehicles\textures\ground\ifrit\gar_ifrit_ext_02_CO.paa",
			""
		};
		textureList[]=
		{
			"base",
			1
		};
		class TransportMagazines
		{
		};
		class TransportWeapons
		{
		};
	};
	class 38th_gar_hmg_ifrit: O_MRAP_02_hmg_F
	{
		side=1;
		scope=2;
		scopeCurator=2;
		displayName="Ifrit (HMG)";
		//editorPreview="\38th_vehicles\ui\38th_gar_hmg_ifrit.jpg";
		faction="38th_main";
		hiddenSelectionstextures[]=
		{
			"38th\38th_Vehicles\textures\ground\ifrit\gar_ifrit_ext_01_CO.paa",
			"38th\38th_Vehicles\textures\ground\ifrit\gar_ifrit_ext_02_CO.paa",
			"38th\38th_Vehicles\textures\ground\ifrit\gar_ifrit_turret_CO.paa"
		};
		textureList[]=
		{
			"base",
			1
		};
		class TransportMagazines
		{
		};
		class TransportWeapons
		{
		};
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				weapons[]=
				{
					"38th_vehicle_hmg"
				};
				magazines[]=
				{
					"38th_EWEB_200rnd_AP_mag",
					"38th_EWEB_200rnd_AP_mag",
					"38th_EWEB_200rnd_AP_mag",
					"38th_EWEB_200rnd_AP_mag",
					"38th_EWEB_200rnd_AP_mag",
					"38th_EWEB_200rnd_AP_mag"
				};
			};
		};
	};
	class 38th_gar_gmg_ifrit: O_MRAP_02_gmg_F
	{
		side=1;
		scope=2;
		scopeCurator=2;
		displayName="Ifrit (GMG)";
		//editorPreview="\38th_vehicles\ui\38th_gar_gmg_ifrit.jpg";
		faction="38th_main";
		hiddenSelectionstextures[]=
		{
			"38th\38th_Vehicles\textures\ground\ifrit\gar_ifrit_ext_01_CO.paa",
			"38th\38th_Vehicles\textures\ground\ifrit\gar_ifrit_ext_02_CO.paa",
			"38th\38th_Vehicles\textures\ground\ifrit\gar_ifrit_turret_CO.paa"
		};
		textureList[]=
		{
			"base",
			1
		};
		class TransportMagazines
		{
		};
		class TransportWeapons
		{
		};
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				weapons[]=
				{
					"38th_vehicle_gmg"
				};
				magazines[]=
				{
					"38th_mag_40mm_blue",
					"38th_mag_40mm_blue",
					"38th_mag_40mm_blue",
					"38th_mag_40mm_blue",
					"38th_mag_40mm_blue",
					"38th_mag_40mm_blue"
				};
			};
		};
	};
	class 38th_cis_ifrit: O_MRAP_02_F
	{
		crew="38th_B1_standard";
		side=0;
		scope=2;
		scopeCurator=2;
		displayName="Ifrit (Unarmed)";
		//editorPreview="\38th_vehicles\ui\38th_cis_ifrit.jpg";
		faction="38th_cis_main";
		hiddenSelectionstextures[]=
		{
			"38th\38th_Vehicles\textures\ground\ifrit\cis_ifrit_ext_01_CO.paa",
			"38th\38th_Vehicles\textures\ground\ifrit\cis_ifrit_ext_02_CO.paa",
			""
		};
		textureList[]=
		{
			"base",
			1
		};
		class TransportMagazines
		{
		};
		class TransportWeapons
		{
		};
	};
	class 38th_cis_hmg_ifrit: O_MRAP_02_hmg_F
	{
		crew="38th_B1_standard";
		side=0;
		scope=2;
		scopeCurator=2;
		displayName="Ifrit (HMG)";
		//editorPreview="\38th_vehicles\ui\38th_cis_hmg_ifrit.jpg";
		faction="38th_cis_main";
		hiddenSelectionstextures[]=
		{
			"38th\38th_Vehicles\textures\ground\ifrit\cis_ifrit_ext_01_CO.paa",
			"38th\38th_Vehicles\textures\ground\ifrit\cis_ifrit_ext_02_CO.paa",
			"38th\38th_Vehicles\textures\ground\ifrit\cis_ifrit_turret_CO.paa"
		};
		textureList[]=
		{
			"base",
			1
		};
		class TransportMagazines
		{
		};
		class TransportWeapons
		{
		};
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				weapons[]=
				{
					"38th_vehicle_hmg"
				};
				magazines[]=
				{
					"38th_HMG_200rnd_AP_mag_red",
					"38th_HMG_200rnd_AP_mag_red",
					"38th_HMG_200rnd_AP_mag_red"
				};
			};
		};
	};
	class 38th_cis_gmg_ifrit: O_MRAP_02_gmg_F
	{
		crew="38th_B1_standard";
		side=0;
		scope=2;
		scopeCurator=2;
		displayName="Ifrit (GMG)";
		//editorPreview="\38th_vehicles\ui\38th_cis_gmg_ifrit.jpg";
		faction="38th_cis_main";
		hiddenSelectionstextures[]=
		{
			"38th\38th_Vehicles\textures\ground\ifrit\cis_ifrit_ext_01_CO.paa",
			"38th\38th_Vehicles\textures\ground\ifrit\cis_ifrit_ext_02_CO.paa",
			"38th\38th_Vehicles\textures\ground\ifrit\cis_ifrit_turret_CO.paa"
		};
		textureList[]=
		{
			"base",
			1
		};
		class TransportMagazines
		{
		};
		class TransportWeapons
		{
		};
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				weapons[]=
				{
					"38th_vehicle_gmg"
				};
				magazines[]=
				{
					"38th_mag_40mm_red",
					"38th_mag_40mm_red",
					"38th_mag_40mm_red"
				};
			};
		};
	};
	class O_Truck_03_transport_F;
	class O_Truck_03_covered_F;
	class O_Truck_03_device_F;
	class O_Truck_03_repair_F;
	class O_Truck_03_ammo_F;
	class O_Truck_03_fuel_F;
	class 38th_cis_truck_transport: O_Truck_03_transport_F
	{
		crew="38th_B1_standard";
		side=0;
		scope=2;
		scopeCurator=2;
		displayName="Transport Truck";
		//editorPreview="\38th_vehicles\ui\38th_cis_truck_transport.jpg";
		faction="38th_cis_main";
		hiddenSelectionsTextures[]=
		{
			"38th\38th_Vehicles\textures\ground\tempest\cis_truck_ext01_CO.paa",
			"38th\38th_Vehicles\textures\ground\tempest\cis_truck_ext02_CO.paa",
			"38th\38th_Vehicles\textures\ground\tempest\cis_truck_cargo_CO.paa"
		};
		textureList[]=
		{
			"base",
			1
		};
		class TransportMagazines
		{
		};
		class TransportWeapons
		{
		};
	};
	class 38th_cis_truck_covered: O_Truck_03_covered_F
	{
		crew="38th_B1_standard";
		side=0;
		scope=2;
		scopeCurator=2;
		displayName="Transport Truck (Covered)";
		//editorPreview="\38th_vehicles\ui\38th_cis_truck_covered.jpg";
		faction="38th_cis_main";
		hiddenSelectionsTextures[]=
		{
			"38th\38th_Vehicles\textures\ground\tempest\cis_truck_ext01_CO.paa",
			"38th\38th_Vehicles\textures\ground\tempest\cis_truck_ext02_CO.paa",
			"38th\38th_Vehicles\textures\ground\tempest\cis_truck_cargo_CO.paa",
			"38th\38th_Vehicles\textures\ground\tempest\cis_truck_cover_CO.paa"
		};
		textureList[]=
		{
			"base",
			1
		};
		class TransportMagazines
		{
		};
		class TransportWeapons
		{
		};
	};
	class 38th_cis_truck_device: O_Truck_03_device_F
	{
		crew="38th_B1_standard";
		side=0;
		scope=2;
		scopeCurator=2;
		displayName="Transport Truck (Device)";
		//editorPreview="\38th_vehicles\ui\38th_cis_truck_device.jpg";
		faction="38th_cis_main";
		hiddenSelectionsTextures[]=
		{
			"38th\38th_Vehicles\textures\ground\tempest\cis_truck_ext01_CO.paa",
			"38th\38th_Vehicles\textures\ground\tempest\cis_truck_ext02_CO.paa",
			"38th\38th_Vehicles\textures\ground\tempest\cis_truck_cargo_CO.paa",
			"\A3\Structures_F_EPC\Items\Electronics\Data\The_Device_02_CO.paa",
			"\A3\Structures_F_EPC\Items\Electronics\Data\The_Device_03_CO.paa"
		};
		textureList[]=
		{
			"base",
			1
		};
		class TransportMagazines
		{
		};
		class TransportWeapons
		{
		};
	};
	class 38th_cis_truck_repair: O_Truck_03_repair_F
	{
		crew="38th_B1_standard";
		side=0;
		scope=2;
		scopeCurator=2;
		displayName="Transport Truck (Repair)";
		//editorPreview="\38th_vehicles\ui\38th_cis_truck_repair.jpg";
		faction="38th_cis_main";
		hiddenSelectionsTextures[]=
		{
			"38th\38th_Vehicles\textures\ground\tempest\cis_truck_ext01_CO.paa",
			"38th\38th_Vehicles\textures\ground\tempest\cis_truck_ext02_CO.paa",
			"38th\38th_Vehicles\textures\ground\tempest\cis_truck_ammo_CO.paa"
		};
		textureList[]=
		{
			"base",
			1
		};
		class TransportMagazines
		{
		};
		class TransportWeapons
		{
		};
	};
	class 38th_cis_truck_ammo: O_Truck_03_ammo_F
	{
		crew="38th_B1_standard";
		side=0;
		scope=2;
		scopeCurator=2;
		displayName="Transport Truck (Ammo)";
		//editorPreview="\38th_vehicles\ui\38th_cis_truck_ammo.jpg";
		faction="38th_cis_main";
		hiddenSelectionsTextures[]=
		{
			"38th\38th_Vehicles\textures\ground\tempest\cis_truck_ext01_CO.paa",
			"38th\38th_Vehicles\textures\ground\tempest\cis_truck_ext02_CO.paa",
			"38th\38th_Vehicles\textures\ground\tempest\cis_truck_cargo_CO.paa",
			"\A3\Structures_F\Data\Metal\Containers\Containers_02_set_CO.paa"
		};
		textureList[]=
		{
			"base",
			1
		};
		class TransportMagazines
		{
		};
		class TransportWeapons
		{
		};
	};
	class 38th_cis_truck_fuel: O_Truck_03_fuel_F
	{
		crew="38th_B1_standard";
		side=0;
		scope=2;
		scopeCurator=2;
		displayName="Transport Truck (Fuel)";
		//editorPreview="\38th_vehicles\ui\38th_cis_truck_fuel.jpg";
		faction="38th_cis_main";
		hiddenSelectionsTextures[]=
		{
			"38th\38th_Vehicles\textures\ground\tempest\cis_truck_ext01_CO.paa",
			"38th\38th_Vehicles\textures\ground\tempest\cis_truck_ext02_CO.paa",
			"38th\38th_Vehicles\textures\ground\tempest\cis_truck_fuel_CO.paa"
		};
		textureList[]=
		{
			"base",
			1
		};
		class TransportMagazines
		{
		};
		class TransportWeapons
		{
		};
	};
	class 38th_gar_truck_transport: O_Truck_03_transport_F
	{
		side=1;
		displayName="Transport Truck";
		//editorPreview="\38th_vehicles\ui\38th_gar_truck_transport.jpg";
		faction="38th_main";
		hiddenSelectionsTextures[]=
		{
			"38th\38th_Vehicles\textures\ground\tempest\gar_truck_ext01_CO.paa",
			"38th\38th_Vehicles\textures\ground\tempest\gar_truck_ext02_CO.paa",
			"38th\38th_Vehicles\textures\ground\tempest\gar_truck_cargo_CO.paa"
		};
		textureList[]=
		{
			"base",
			1
		};
		class TransportMagazines
		{
		};
		class TransportWeapons
		{
		};
	};
	class 38th_gar_truck_covered: O_Truck_03_covered_F
	{
		side=1;
		scope=2;
		scopeCurator=2;
		displayName="Transport Truck (Covered)";
		//editorPreview="\38th_vehicles\ui\38th_gar_truck_covered.jpg";
		faction="38th_main";

		hiddenSelectionsTextures[]=
		{
			"38th\38th_Vehicles\textures\ground\tempest\gar_truck_ext01_CO.paa",
			"38th\38th_Vehicles\textures\ground\tempest\gar_truck_ext02_CO.paa",
			"38th\38th_Vehicles\textures\ground\tempest\gar_truck_cargo_CO.paa",
			"38th\38th_Vehicles\textures\ground\tempest\gar_truck_cover_CO.paa"
		};
		textureList[]=
		{
			"base",
			1
		};
		class TransportMagazines
		{
		};
		class TransportWeapons
		{
		};
	};
	class 38th_gar_truck_device: O_Truck_03_device_F
	{
		side=1;
		scope=2;
		scopeCurator=2;
		displayName="Transport Truck (Device)";
		//editorPreview="\38th_vehicles\ui\38th_gar_truck_device.jpg";
		faction="38th_main";
		hiddenSelectionsTextures[]=
		{
			"38th\38th_Vehicles\textures\ground\tempest\gar_truck_ext01_CO.paa",
			"38th\38th_Vehicles\textures\ground\tempest\gar_truck_ext02_CO.paa",
			"38th\38th_Vehicles\textures\ground\tempest\gar_truck_cargo_CO.paa",
			"\A3\Structures_F_EPC\Items\Electronics\Data\The_Device_02_CO.paa",
			"\A3\Structures_F_EPC\Items\Electronics\Data\The_Device_03_CO.paa"
		};
		textureList[]=
		{
			"base",
			1
		};
		class TransportMagazines
		{
		};
		class TransportWeapons
		{
		};
	};
	class 38th_gar_truck_repair: O_Truck_03_repair_F
	{
		side=1;
		displayName="Transport Truck (Repair)";
		//editorPreview="\38th_vehicles\ui\38th_gar_truck_repair.jpg";
		faction="38th_main";
		hiddenSelectionsTextures[]=
		{
			"38th\38th_Vehicles\textures\ground\tempest\gar_truck_ext01_CO.paa",
			"38th\38th_Vehicles\textures\ground\tempest\gar_truck_ext02_CO.paa",
			"38th\38th_Vehicles\textures\ground\tempest\gar_truck_ammo_CO.paa"
		};
		textureList[]=
		{
			"base",
			1
		};
		class TransportMagazines
		{
		};
		class TransportWeapons
		{
		};
	};
	class 38th_gar_truck_ammo: O_Truck_03_ammo_F
	{
		side=1;
		scope=2;
		scopeCurator=2;
		displayName="Transport Truck (Ammo)";
		//editorPreview="\38th_vehicles\ui\38th_gar_truck_ammo.jpg";
		faction="38th_main";
		hiddenSelectionsTextures[]=
		{
			"38th\38th_Vehicles\textures\ground\tempest\gar_truck_ext01_CO.paa",
			"38th\38th_Vehicles\textures\ground\tempest\gar_truck_ext02_CO.paa",
			"38th\38th_Vehicles\textures\ground\tempest\gar_truck_cargo_CO.paa",
			"\A3\Structures_F\Data\Metal\Containers\Containers_02_set_CO.paa"
		};
		textureList[]=
		{
			"base",
			1
		};
		class TransportMagazines
		{
		};
		class TransportWeapons
		{
		};
	};
	class 38th_gar_truck_fuel: O_Truck_03_fuel_F
	{
		side=1;
		scope=2;
		scopeCurator=2;
		displayName="Transport Truck (Fuel)";
		//editorPreview="\38th_vehicles\ui\38th_gar_truck_fuel.jpg";
		faction="38th_main";
		hiddenSelectionsTextures[]=
		{
			"38th\38th_Vehicles\textures\ground\tempest\gar_truck_ext01_CO.paa",
			"38th\38th_Vehicles\textures\ground\tempest\gar_truck_ext02_CO.paa",
			"38th\38th_Vehicles\textures\ground\tempest\gar_truck_fuel_CO.paa"
		};
		textureList[]=
		{
			"base",
			1
		};
		class TransportMagazines
		{
		};
		class TransportWeapons
		{
		};
	};
	class B_APC_Wheeled_03_cannon_F;
	class 38th_cis_pandur: B_APC_Wheeled_03_cannon_F
	{
		crew="38th_B1_standard";
		side=0;
		displayName="Pandur APC";
		//editorPreview="\38th_vehicles\ui\38th_cis_pandur.jpg";
		scope=2;
		scopeCurator=2;
		faction="38th_cis_main";
		hiddenSelectionsTextures[]=
		{
			"38th\38th_Vehicles\textures\ground\pandur\cis_pandur_ext_01_CO.paa",
			"38th\38th_Vehicles\textures\ground\pandur\cis_pandur_ext_02_CO.paa",
			"38th\38th_Vehicles\textures\ground\pandur\cis_pandur_rcws_CO.paa",
			"",
			"",
			"38th\38th_Vehicles\textures\ground\pandur\gar_pandur_cage_co.paa"
		};
		textureList[]=
		{
			"base",
			1
		};
		class TransportMagazines
		{
		};
		class TransportWeapons
		{
		};
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				weapons[]=
				{
					"38th_vehicle_autocannon_he_50",
					"38th_vehicle_autocannon_apfsd_50",
					"38th_vehicle_hmg",
					"missiles_titan"
				};
				magazines[]=
				{
					"38th_mag_50mm_he_red",
					"38th_mag_50mm_he_red",
					"38th_Mag_50mm_apfsd_red",
					"38th_Mag_50mm_apfsd_red",
					"38th_Mag_50mm_apfsd_red",
					"38th_HMG_200rnd_AP_mag_red",
					"38th_HMG_200rnd_AP_mag_red",
					"38th_HMG_200rnd_AP_mag_red",
					"38th_HMG_200rnd_AP_mag_red",
					"38th_HMG_200rnd_AP_mag_red",
					"38th_HMG_200rnd_AP_mag_red",
					"38th_HMG_200rnd_AP_mag_red",
					"38th_HMG_200rnd_AP_mag_red",
					"2Rnd_GAT_missiles",
					"2Rnd_GAT_missiles"
				};
			};
		};
	};
	class 38th_cis_hmg_pandur: 38th_cis_pandur
	{
		crew="38th_B1_standard";
		displayName="Pandur APC (HMG)";
		class TransportMagazines
		{
		};
		class TransportWeapons
		{
		};
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				weapons[]=
				{
					"38th_vehicle_hmg",
					"missiles_titan"
				};
				magazines[]=
				{
					"38th_HMG_200rnd_AP_mag_red",
					"38th_HMG_200rnd_AP_mag_red",
					"38th_HMG_200rnd_AP_mag_red",
					"38th_HMG_200rnd_AP_mag_red",
					"38th_HMG_200rnd_AP_mag_red",
					"38th_HMG_200rnd_AP_mag_red",
					"38th_HMG_200rnd_AP_mag_red",
					"2Rnd_GAT_missiles",
					"2Rnd_GAT_missiles"
				};
			};
		};
	};
	class 38th_gar_pandur: B_APC_Wheeled_03_cannon_F
	{
		side=1;
		displayName="Pandur APC";
		scope=2;
		scopeCurator=2;
		faction="38th_main";
		armor = 500;
		armorStructural = 6;
		crew="B_crew_F";
		hiddenSelectionsTextures[]=
		{
			"38th\38th_Vehicles\textures\ground\pandur\gar_pandur_ext_01_CO.paa",
			"38th\38th_Vehicles\textures\ground\pandur\gar_pandur_ext_02_CO.paa",
			"38th\38th_Vehicles\textures\ground\pandur\gar_pandur_rcws_CO.paa",
			"",
			"",
			"38th\38th_Vehicles\textures\ground\pandur\gar_pandur_cage_co.paa"
		};
		textureList[]=
		{
			"base",
			1
		};
		class TransportMagazines
		{
		};
		class TransportWeapons
		{
		};
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				weapons[]=
				{
					"38th_vehicle_autocannon_he_50",
					"38th_vehicle_autocannon_apfsd_50",
					"38th_vehicle_hmg",
					"missiles_titan"
				};
				magazines[]=
				{
					"38th_mag_50mm_he_blue",
					"38th_mag_50mm_he_blue",
					"38th_mag_50mm_apfsd_blue",
					"38th_EWEB_200rnd_AP_mag",
					"38th_EWEB_200rnd_AP_mag",
					"38th_EWEB_200rnd_AP_mag",
					"38th_EWEB_200rnd_AP_mag",
					"38th_EWEB_200rnd_AP_mag",
					"38th_EWEB_200rnd_AP_mag",
					"38th_EWEB_200rnd_AP_mag",
					"38th_EWEB_200rnd_AP_mag",
					"2Rnd_GAT_missiles",
					"2Rnd_GAT_missiles"
				};
			};
			class HitPoints: HitPoints
			{
				class HitHull: HitHull
				{
					armor=0.8;
					material=-1;
					armorComponent="hit_hull";
					name="hit_hull_point";
					visual="zbytek";
					passThrough=1;
					minimalHit=0.1;
					explosionShielding=0.2;
					radius=0.2;
				};
				class HitEngine: HitEngine
				{
					armor=1;
					material=-1;
					armorComponent="hit_engine";
					name="hit_engine_point";
					visual="-";
					passThrough=0.1;
					minimalHit=0.1;
					explosionShielding=0.5;
					radius=0.2;
				};
				class HitFuel: HitFuel
				{
					armor=0.2;
					material=-1;
					armorComponent="hit_fuel";
					name="hit_fuel_point";
					visual="-";
					passThrough=0.5;
					minimalHit=0.1;
					explosionShielding=0.60000002;
					radius=0.2;
				};
				class HitSLAT_Left_1
				{
					simulation="Armor_SLAT";
					armorComponent="cage_left_1_geo";
					name="cage_left_1_point";
					armor=-200;
					minimalHit=0.30000001;
					passThrough=0;
					visual="-";
					explosionShielding=3;
					radius=0.25;
				};
				class HitSLAT_Left_2: HitSLAT_Left_1
				{
					armorComponent="cage_left_2_geo";
					name="cage_left_2_point";
				};
				class HitSLAT_Left_3: HitSLAT_Left_1
				{
					armorComponent="cage_left_3_geo";
					name="cage_left_3_point";
				};
				class HitSLAT_Right_1: HitSLAT_Left_1
				{
					armorComponent="cage_right_1_geo";
					name="cage_right_1_point";
				};
				class HitSLAT_Right_2: HitSLAT_Left_1
				{
					armorComponent="cage_right_2_geo";
					name="cage_right_2_point";
				};
				class HitSLAT_Right_3: HitSLAT_Left_1
				{
					armorComponent="cage_right_3_geo";
					name="cage_right_3_point";
				};
				class HitSLAT_back: HitSLAT_Left_1
				{
					armorComponent="cage_back_geo";
					name="cage_back_point";
				};
				class HitSLAT_front: HitSLAT_Left_1
				{
					armorComponent="cage_front_geo";
					name="cage_front_point";
				};
				class HitLFWheel: HitLFWheel
				{
					radius=0.33000001;
					visual="wheel_1_1_hide";
					armorComponent="wheel_1_1_hide";
					armor=-10;
					minimalHit=-0.016000001;
					explosionShielding=4;
					passThrough=0;
				};
				class HitLF2Wheel: HitLF2Wheel
				{
					radius=0.33000001;
					visual="wheel_1_2_hide";
					armorComponent="wheel_1_2_hide";
					armor=-10;
					minimalHit=-0.016000001;
					explosionShielding=4;
					passThrough=0;
				};
				class HitLMWheel: HitLMWheel
				{
					radius=0.33000001;
					visual="wheel_1_3_hide";
					armorComponent="wheel_1_3_hide";
					armor=-10;
					minimalHit=-0.016000001;
					explosionShielding=4;
					passThrough=0;
				};
				class HitLBWheel: HitLBWheel
				{
					radius=0.33000001;
					visual="wheel_1_4_hide";
					armorComponent="wheel_1_4_hide";
					armor=-10;
					minimalHit=-0.016000001;
					explosionShielding=4;
					passThrough=0;
				};
				class HitRFWheel: HitRFWheel
				{
					radius=0.33000001;
					visual="wheel_2_1_hide";
					armorComponent="wheel_2_1_hide";
					armor=-10;
					minimalHit=-0.016000001;
					explosionShielding=4;
					passThrough=0;
				};
				class HitRF2Wheel: HitRF2Wheel
				{
					radius=0.33000001;
					visual="wheel_2_2_hide";
					armorComponent="wheel_2_2_hide";
					armor=-10;
					minimalHit=-0.016000001;
					explosionShielding=4;
					passThrough=0;
				};
				class HitRMWheel: HitRMWheel
				{
					radius=0.33000001;
					visual="wheel_2_3_hide";
					armorComponent="wheel_2_3_hide";
					armor=-10;
					minimalHit=-0.016000001;
					explosionShielding=4;
					passThrough=0;
				};
				class HitRBWheel: HitRBWheel
				{
					radius=0.33000001;
					visual="wheel_2_4_hide";
					armorComponent="wheel_2_4_hide";
					armor=-10;
					minimalHit=-0.016000001;
					explosionShielding=4;
					passThrough=0;
				};
			};
		};
	};
	class Components;
	class SensorsManagerComponent;
	class SensorTemplatePassiveRadar;
	class SensorTemplateAntiRadiation;
	class SensorTemplateActiveRadar;	
	class SensorTemplateIR;
	class SensorTemplateVisual;
	class SensorTemplateMan;
	class SensorTemplateLaser;
	class SensorTemplateNV;
	class SensorTemplateDataLink;
	class DefaultVehicleSystemsDisplayManagerLeft {
		class components;
	};
	class DefaultVehicleSystemsDisplayManagerRight {
		class components;
	};
	class VehicleSystemsTemplateLeftPilot: DefaultVehicleSystemsDisplayManagerLeft {
		class components;
	};
	class VehicleSystemsTemplateRightPilot: DefaultVehicleSystemsDisplayManagerRight {
		class components;
	};
	class Optics_Armored;
	class Optics_Commander_01: Optics_Armored {
		class Wide;
		class Medium;
		class Narrow;
	};
	class Optics_Gunner_MBT_01: Optics_Armored {
		class Wide;
		class Medium;
		class Narrow;
	};
	class AnimationSources;
	class Eventhandlers;
	class VehicleSystemsTemplateLeftGunner: DefaultVehicleSystemsDisplayManagerLeft 
	{
		class components;
	};
	class VehicleSystemsTemplateRightGunner: VehicleSystemsTemplateLeftGunner{};
	class VehicleSystemsTemplateLeftCommander: DefaultVehicleSystemsDisplayManagerLeft 
	{
		class components;
	};
	class VehicleSystemsTemplateRightCommander: VehicleSystemsTemplateLeftCommander{};
	class CommanderOptics;
	class 38th_gar_pandur_AA: B_APC_Wheeled_03_cannon_F
	{
		side=1;
		displayName="Pandur APC(AA)";
		scope=2;
		scopeCurator=2;
		faction="38th_main";
		irScanRangeMax=10000;
		irScanRangeMin=2000;
		radarType=2;
		reportRemoteTargets=1;
		reportOwnPosition=1;
		receiveRemoteTargets=1;
		crew="B_crew_F";
		hiddenSelectionsTextures[]=
		{
			"38th\38th_Vehicles\textures\ground\pandur\gar_pandur_ext_01_CO.paa",
			"38th\38th_Vehicles\textures\ground\pandur\gar_pandur_ext_02_CO.paa",
			"38th\38th_Vehicles\textures\ground\pandur\gar_pandur_rcws_CO.paa",
			"",
			"",
			"38th\38th_Vehicles\textures\ground\pandur\gar_pandur_cage_co.paa"
		};
		textureList[]=
		{
			"base",
			1
		};
		class TransportMagazines
		{
		};
		class TransportWeapons
		{
		};
		class Components: Components
		{
			class SensorsManagerComponent
			{
				class Components
				{
					class ActiveRadarSensorComponent: SensorTemplateActiveRadar
					{
						class AirTarget
						{
							minRange=16000;
							maxRange=16000;
							objectDistanceLimitCoef=-1;
							viewDistanceLimitCoef=-1;
						};
						class GroundTarget
						{
							minRange=6000;
							maxRange=6000;
							objectDistanceLimitCoef=-1;
							viewDistanceLimitCoef=-1;
						};
						typeRecognitionDistance=6000;
						angleRangeHorizontal=360;
						angleRangeVertical=100;
						aimDown=-45;
						maxTrackableSpeed=1000.44397;
					};
					class DataLinkSensorComponent: SensorTemplateDataLink
					{
					};
				};
			};
		};
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				weapons[]=
				{
					"38th_vehicle_autocannon_he_50",
					"missiles_SAAMI"
				};
				magazines[]=
				{
					"38th_mag_50mm_he_blue",
					"38th_mag_50mm_he_blue",
					"38th_mag_50mm_he_blue",
					"38th_mag_50mm_he_blue",
					"38th_mag_50mm_he_blue",
					"4Rnd_70mm_SAAMI_missiles"
				};
				class Components
				{
					class VehicleSystemsDisplayManagerComponentLeft: VehicleSystemsTemplateLeftGunner
					{
						class Components: Components
						{
							class SensorDisplay
							{
								componentType="SensorsDisplayComponent";
								range[]={16000,8000,4000,2000};
								resource="RscCustomInfoSensors";
							};
						};
					};
					class VehicleSystemsDisplayManagerComponentRight: VehicleSystemsTemplateRightGunner
					{
						defaultDisplay="SensorDisplay";
						class Components: Components
						{
							class SensorDisplay
							{
								componentType="SensorsDisplayComponent";
								range[]={16000,8000,4000,2000};
								resource="RscCustomInfoSensors";
							};
						};
					};
					class DataLinkSensorComponent: SensorTemplateDataLink
					{
					};
				};
			};
		};
	};
	class I_LT_01_AA_F;
	class 38th_cis_nyx_aa: I_LT_01_AA_F
	{
		crew="38th_B1_standard";
		side=0;
		scope=2;
		scopeCurator=2;
		displayName="Nyx (AA)";
		//editorPreview="\38th_vehicles\ui\38th_cis_nyx_aa.jpg";
		faction="38th_cis_main";
		hiddenSelectionsTextures[]=
		{
			"38th\38th_Vehicles\textures\ground\nyx\cis_nyx_main_CO.paa",
			"38th\38th_Vehicles\textures\ground\nyx\cis_nyx_at_CO.paa",
			"",
			""
		};
		textureList[]=
		{
			"base",
			1
		};
		class TransportMagazines
		{
		};
		class TransportWeapons
		{
		};
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				weapons[]=
				{
					"SmokeLauncher",
					"missiles_SAAMI",
					"38th_vehicle_hmg"
				};
				magazines[]=
				{
					"SmokeLauncherMag",
					"4Rnd_70mm_SAAMI_missiles",
					"38th_EWEB_200rnd_AP_mag",
					"38th_EWEB_200rnd_AP_mag",
					"38th_EWEB_200rnd_AP_mag",
					"38th_EWEB_200rnd_AP_mag"
				};
			};
		};
	};
	class 38th_gar_nyx_aa: I_LT_01_AA_F
	{
		side=1;
		scope=2;
		scopeCurator=2;
		displayName="Nyx (AA)";
		faction="38th_main";
		hiddenSelectionsTextures[]=
		{
			"38th\38th_Vehicles\textures\ground\nyx\gar_nyx_main_CO.paa",
			"38th\38th_Vehicles\textures\ground\nyx\gar_nyx_at_CO.paa",
			"",
			""
		};
		textureList[]=
		{
			"base",
			1
		};
		//editorPreview="\38th_vehicles\ui\38th_gar_nyx_aa.jpg";
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				weapons[]=
				{
					"SmokeLauncher",
					"missiles_SAAMI",
					"38th_vehicle_hmg"
				};
				magazines[]=
				{
					"SmokeLauncherMag",
					"4Rnd_70mm_SAAMI_missiles",
					"38th_EWEB_200rnd_AP_mag",
					"38th_EWEB_200rnd_AP_mag",
					"38th_EWEB_200rnd_AP_mag",
					"38th_EWEB_200rnd_AP_mag"
				};
			};
		};
	};
	class ls_ground_aat;
	class ls_ground_aat_red;
	class ls_ground_aat_black;
	class ls_ground_aat_blue;
	class ls_ground_aat_winter;
	class ls_ground_aat_green;
	class 38th_aat: ls_ground_aat
	{
		scope=2;
		scopeCurator=2;
		crew="38th_B1_standard";
		armor=480;
		armorStructural=4;
		faction="38th_cis_main";
		//editorPreview="\38th_vehicles\ui\38th_aat.jpg";
	};
	class 38th_aat_red: ls_ground_aat_red
	{
		scope=2;
		scopeCurator=2;
		crew="38th_B1_standard";
		armor=480;
		armorStructural=4;
		faction="38th_cis_main";
		//editorPreview="\38th_vehicles\ui\38th_aat_red.jpg";
	};
	class 38th_aat_black: ls_ground_aat_black
	{
		scope=2;
		scopeCurator=2;
		crew="38th_B1_standard";
		armor=480;
		armorStructural=4;
		faction="38th_cis_main";
		//editorPreview="\38th_vehicles\ui\38th_aat_black.jpg";
	};
	class 38th_aat_blue: ls_ground_aat_blue
	{
		scope=2;
		scopeCurator=2;
		crew="38th_B1_standard";
		armor=480;
		armorStructural=4;
		faction="38th_cis_main";
		//editorPreview="\38th_vehicles\ui\38th_aat_blue.jpg";
	};
	class 38th_aat_winter: ls_ground_aat_winter
	{
		scope=2;
		scopeCurator=2;
		crew="38th_B1_standard";
		armor=480;
		armorStructural=4;
		faction="38th_cis_main";
		//editorPreview="\38th_vehicles\ui\38th_aat_winter.jpg";
	};
	class 38th_aat_green: ls_ground_aat_green
	{
		scope=2;
		scopeCurator=2;
		crew="38th_B1_standard";
		armor=480;
		armorStructural=4;
		faction="38th_cis_main";
		//editorPreview="\38th_vehicles\ui\38th_aat_green.jpg";
	};
	class 3AS_Barc;
	class 38th_barc_speeder: 3AS_Barc
	{
		model="3AS\3AS_LightVics\3AS_BARC\model\Barc_Speeder.p3d";
		icon="3AS\3AS_LightVics\3AS_BARC\data\ui\BARC_top_ca.paa";
		picture="3as\3AS_LightVics\3AS_BARC\data\ui\BARC_side_ca.paa";
		scope=2;
		scopeCurator=2;
		hasdriver=1;
		displayName="[38th] BARC Speeder";
		hiddenSelections[]=
		{
			"camo1"
		};
		terrainCoef=0;
		turnCoef=2.5;
		precision=10;
		brakeDistance=1;
		acceleration=10;
		fireResistance=5;
		armor=22;
		cost=50000;
		transportMaxBackpacks=3;
		transportSoldier=0;
		wheelDamageRadiusCoef=0.89999998;
		wheelDestroyRadiusCoef=0.40000001;
		maxFordingDepth=1;
		waterResistance=0;
		crewCrashProtection=0;
		driverLeftHandAnimName="";
		driverRightHandAnimName="";
		driverLeftLegAnimName="";
		driverRightLegAnimName="";
		ejectDeadDriver=1;
		brakeTorque=9000;
		crewExplosionProtection=0;
		fuelExplosionPower=0.0049999999;
		longStiff=15000;
		latStiffX=2000;
		latStiffY=18000;
		steerAheadSimul=0.5;
		steerAheadPlan=0.34999999;
		predictTurnPlan=8;
		predictTurnSimul=6;
		waterDamageEngine=10;
		waterPPInVehicle=0;
		canFloat=0;
		maxSpeed=250;
		WaterLeakiness=10;
		faction="38th_main";
		class Turrets
		{
		};
		class TransportItems
		{
			class _xx_FirstAidKit
			{
				name="FirstAidKit";
				count=4;
			};
		};
		class HitPoints: HitPoints
		{
			class HitLFWheel: HitLFWheel
			{
				armor=1000.125;
				passThrough=0;
			};
			class HitLF2Wheel: HitLF2Wheel
			{
				armor=1000.125;
				passThrough=0;
			};
			class HitRFWheel: HitRFWheel
			{
				armor=1000.125;
				passThrough=0;
			};
			class HitRF2Wheel: HitRF2Wheel
			{
				armor=1000.125;
				passThrough=0;
			};
			class HitFuel
			{
				armor=0.5;
				material=-1;
				name="fueltank";
				visual="";
				passThrough=0.2;
			};
			class HitEngine
			{
				armor=5.5;
				material=-1;
				name="engine";
				visual="";
				passThrough=0.2;
			};
			class HitBody: HitBody
			{
				name="body";
				visual="body";
				passThrough=1;
			};
		};
		driverAction="BARC_Driver";
		cargoAction[]=
		{
			"passenger_low01",
			"passenger_generic01_leanleft",
			"passenger_generic01_foldhands"
		};
		getInAction="GetInLow";
		weapons[]=
		{
			"3AS_BARC_repeater"
		};
		magazines[]=
		{
			"3AS_BARC_Mag"
		};
		memoryPointGun[]=
		{
			"usti hlavne",
			"usti hlavne2"
		};
		getOutAction="GetOutLow";
		cargoGetInAction[]=
		{
			"GetInLow"
		};
		cargoGetOutAction[]=
		{
			"GetOutLow"
		};
		memoryPointTrackFLL="TrackFLL";
		memoryPointTrackFLR="TrackFLR";
		memoryPointTrackBLL="TrackBLL";
		memoryPointTrackBLR="TrackBLR";
		memoryPointTrackFRL="TrackFRL";
		memoryPointTrackFRR="TrackFRR";
		memoryPointTrackBRL="TrackBRL";
		memoryPointTrackBRR="TrackBRR";
		tas_canBlift=2;
		tas_liftVars="[[[[0,-3.7,-6]],[[-1,-3.7,-6],[1,-3.7,-6]]], [0.5,0.25], [-0.1,0.05]]";
		class UserActions
		{
			class PressXToFlipTheThing
			{
				displayNameDefault="Flip Speeder";
				displayName="Flip Speeder";
				position="";
				radius=2.7;
				onlyForPlayer=1;
				condition="alive this AND not canmove this AND (count crew this == 0 || isAutonomous this)";
				statement="this setpos [getpos this select 0,getpos this select 1,(getpos this select 2)+1]";
			};
		};
		class Damage
		{
			tex[]={};
			mat[]=
			{
				"3AS\3AS_LightVics\3AS_BARC\data\barc.rvmat",
				"3AS\3AS_LightVics\3AS_BARC\data\barc.rvmat",
				"3AS\3AS_LightVics\3AS_BARC\data\wreck.rvmat"
			};
		};
		destrType="DestructWreck";
		class DestructionEffects
		{
			class Light1
			{
				simulation="light";
				type="ObjectDestructionLightSmall";
				position="destructionEffect1";
				intensity=0.001;
				interval=1;
				lifeTime=3;
				enabled="distToWater";
			};
			class Sound
			{
				simulation="sound";
				position="destructionEffect1";
				intensity=0.5;
				interval=1;
				lifeTime=1;
				type="Fire";
			};
			class Fire1
			{
				simulation="particles";
				type="ObjectDestructionFire1Tiny";
				position="destructionEffect1";
				intensity=0.25;
				interval=1;
				lifeTime=3;
			};
			class Refract1
			{
				simulation="particles";
				type="SmallFireFRefract";
				position="destructionEffect1";
				intensity=0.5;
				interval=1;
				lifeTime=3;
			};
		};
		class Exhausts
		{
			class Exhaust1
			{
				position="exhaust";
				direction="exhaust_dir";
				effect="ExhaustEffectHeli";
			};
			class Exhaust2
			{
				position="exhaust2";
				direction="exhaust2_dir";
				effect="ExhaustEffectHeli";
			};
		};
		class Reflectors
		{
			class LightCarHeadL01
			{
				color[]={1900,1800,1700};
				ambient[]={5,5,5};
				position="LightCarHeadL01";
				direction="LightCarHeadL01_end";
				hitpoint="Light_L";
				selection="Light_L";
				size=1;
				innerAngle=100;
				outerAngle=179;
				coneFadeCoef=10;
				intensity=1;
				useFlare=1;
				dayLight=0;
				flareSize=1;
				class Attenuation
				{
					start=1;
					constant=0;
					linear=0;
					quadratic=0.25;
					hardLimitStart=30;
					hardLimitEnd=60;
				};
			};
		};
		aggregateReflectors[]=
		{
			
			{
				"LightCarHeadL01"
			},
			{}
		};
	};
	class 38th_BarcSideCar: 38th_barc_speeder
	{
		author="$STR_3AS_Studio";
		mapSize=6.71;
		displayname="[38th] BARC Speeder (Sidecar)";
		model="3as\3AS_LightVics\3AS_BARC\model\barc_speeder_sidecar.p3d";
		editorPreview="";
		_generalMacro="B_MRAP_01_F";
		scope=2;
		scopeCurator=2;
		crew="3AS_Clone_ARF";
		typicalCargo[]=
		{
			"3AS_Clone_ARF"
		};
		side=1;
		proxytype="CPDriver";
		icon="3AS\3AS_LightVics\3AS_BARC\data\ui\BARC_Sidecar_top_ca.paa";
		picture="3as\3AS_LightVics\3AS_BARC\data\ui\BARC_sidecar_side_ca.paa";
		hasdriver=1;
		faction="38th_main";
		hiddenSelections[]=
		{
			"camo",
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"3AS\3AS_LightVics\3AS_BARC\data\barc_rep_co.paa",
			"3AS\3AS_LightVics\3AS_BARC\data\sidecar\GUNNER_co.paa"
		};
		class TextureSources
		{
			class Republic
			{
				displayName="Republic";
				author="$STR_3AS_Studio";
				textures[]=
				{
					"3AS\3AS_LightVics\3AS_BARC\data\barc_rep_co.paa",
					"3AS\3AS_LightVics\3AS_BARC\data\sidecar\GUNNER_co.paa"
				};
				factions[]=
				{
					"38th_main"
				};
			};
		};
		class Damage
		{
			tex[]={};
			mat[]=
			{
				"3AS\3AS_LightVics\3AS_BARC\data\sidecar\barc.rvmat",
				"3AS\3AS_LightVics\3AS_BARC\data\sidecar\barc.rvmat",
				"3AS\3AS_LightVics\3AS_BARC\data\sidecar\wreck.rvmat"
			};
		};
	};
	class C_Offroad_01_F;
	class I_G_Offroad_01_armed_F;
	class I_G_Offroad_01_AT_F;
	class 38th_merc_pickup: C_Offroad_01_F
	{
		side=2;
		scope=2;
		scopeCurator=2;
		displayName="Pickup Truck (Unarmed)";
		//editorPreview="\38th_vehicles\ui\38th_merc_pickup.jpg";
		faction="38th_indep_main";
		hiddenSelectionsTextures[]=
		{
			"38th\38th_Vehicles\textures\ground\pickup\merc_pickup_CO.paa",
			"38th\38th_Vehicles\textures\ground\pickup\merc_pickup_CO.paa"
		};
		textureList[]=
		{
			"base",
			1
		};
		class TransportMagazines
		{
		};
		class TransportWeapons
		{
		};
	};
	class 38th_merc_pickup_hmg: I_G_Offroad_01_armed_F
	{
		side=2;
		scope=2;
		scopeCurator=2;
		displayName="Pickup Truck (HMG)";
		//editorPreview="\38th_vehicles\ui\38th_merc_pickup_hmg.jpg";
		faction="38th_indep_main";
		hiddenSelectionsTextures[]=
		{
			"38th\38th_Vehicles\textures\ground\pickup\merc_pickup_CO.paa",
			"38th\38th_Vehicles\textures\ground\pickup\merc_pickup_CO.paa"
		};
		textureList[]=
		{
			"base",
			1
		};
		class TransportMagazines
		{
		};
		class TransportWeapons
		{
		};
		class Turrets: Turrets
		{
			class M2_Turret;
			class 38th_M2_Turret: M2_Turret
			{
				weapons[]=
				{
					"38th_vehicle_hmg"
				};
				magazines[]=
				{
					"38th_mag_hmg_green",
					"38th_mag_hmg_green"
				};
			};
		};
	};
	class 38th_merc_pickup_at: I_G_Offroad_01_AT_F
	{
		side=2;
		scope=2;
		scopeCurator=2;
		displayName="Pickup Truck (AT)";
		//editorPreview="\38th_vehicles\ui\38th_merc_pickup_at.jpg";
		faction="38th_indep_main";
		hiddenSelectionsTextures[]=
		{
			"38th\38th_Vehicles\textures\ground\pickup\merc_pickup_CO.paa",
			"38th\38th_Vehicles\textures\ground\pickup\merc_pickup_CO.paa"
		};
		textureList[]=
		{
			"base",
			1
		};
		class TransportMagazines
		{
		};
		class TransportWeapons
		{
		};
	};
	class I_C_Offroad_02_unarmed_F;
	class I_C_Offroad_02_LMG_F;
	class I_C_Offroad_02_AT_F;
	class 38th_merc_jeep: I_C_Offroad_02_unarmed_F
	{
		side=2;
		scope=2;
		scopeCurator=2;
		displayName="Jeep (Unarmed)";
		//editorPreview="\38th_vehicles\ui\38th_merc_jeep.jpg";
		faction="38th_indep_main";
		hiddenSelectionsTextures[]=
		{
			"38th\38th_Vehicles\textures\ground\jeep\merc_jeep_CO.paa",
			"38th\38th_Vehicles\textures\ground\jeep\merc_jeep_CO.paa",
			"\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_int_black_co.paa",
			"\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_int_black_co.paa"
		};
		textureList[]=
		{
			"base",
			1
		};
		class TransportMagazines
		{
		};
		class TransportWeapons
		{
		};
	};
	class 38th_merc_jeep_lmg: I_C_Offroad_02_LMG_F
	{
		side=2;
		scope=2;
		scopeCurator=2;
		displayName="Jeep (LMG)";
		//editorPreview="\38th_vehicles\ui\38th_merc_jeep_lmg.jpg";
		faction="38th_indep_main";
		hiddenSelectionsTextures[]=
		{
			"38th\38th_Vehicles\textures\ground\jeep\merc_jeep_CO.paa",
			"38th\38th_Vehicles\textures\ground\jeep\merc_jeep_CO.paa",
			"\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_int_black_co.paa",
			"\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_int_black_co.paa"
		};
		textureList[]=
		{
			"base",
			1
		};
		class TransportMagazines
		{
		};
		class TransportWeapons
		{
		};
		class Turrets: Turrets
		{
			class LMG_Turret;
			class 38th_LMG_Turret: LMG_Turret
			{
				weapons[]=
				{
					"38th_vehicle_hmg"
				};
				magazines[]=
				{
					"38th_EWEB_200rnd_AP_mag",
					"38th_EWEB_200rnd_AP_mag",
					"38th_EWEB_200rnd_AP_mag",
					"38th_EWEB_200rnd_HE_mag",
					"38th_EWEB_200rnd_HE_mag",
					"38th_EWEB_200rnd_HE_mag",
					"38th_HMG_200rnd_AP_mag_red",
					"38th_HMG_200rnd_AP_mag_red",
					"38th_HMG_200rnd_AP_mag_red",
					"38th_HMG_200rnd_AP_mag_red",
					"38th_HMG_200rnd_AP_mag_red"
				};
			};
		};
	};
	class 38th_merc_jeep_at: I_C_Offroad_02_AT_F
	{
		side=2;
		scope=2;
		scopeCurator=2;
		displayName="Jeep (AT)";
		//editorPreview="\38th_vehicles\ui\38th_merc_jeep_at.jpg";
		faction="38th_indep_main";
		hiddenSelectionsTextures[]=
		{
			"38th\38th_Vehicles\textures\ground\jeep\merc_jeep_CO.paa",
			"38th\38th_Vehicles\textures\ground\jeep\merc_jeep_CO.paa",
			"\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_int_black_co.paa",
			"\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_int_black_co.paa"
		};
		textureList[]=
		{
			"base",
			1
		};
		class TransportMagazines
		{
		};
		class TransportWeapons
		{
		};
	};
	class B_SAM_System_01_F;
	class 38th_cis_mk21: B_SAM_System_01_F
	{
		crew="O_UAV_AI";
		side=0;
		scope=2;
		scopeCurator=2;
		faction="38th_cis_main";
		displayName="Mk21";
		//editorPreview="\38th_vehicles\ui\38th_cis_mk21.jpg";
		hiddenSelections[]=
		{
			"Camo1"
		};
		hiddenSelectionstextures[]=
		{
			"38th\38th_Vehicles\textures\turret\mk21\sam_system_CO.paa"
		};
	};
	class O_Radar_System_02_F;
	class 38th_cis_r750: O_Radar_System_02_F
	{
		crew="O_UAV_AI";
		side=0;
		scope=2;
		scopeCurator=2;
		faction="38th_cis_main";
		displayName="R-750";
		//editorPreview="\38th_vehicles\ui\38th_cis_r750.jpg";
		hiddenSelections[]=
		{
			"camo1",
			"camo2"
		};
		hiddenSelectionstextures[]=
		{
			"38th\38th_Vehicles\textures\turret\r750\Radar_system_02_mat_01_CO.paa",
			"38th\38th_Vehicles\textures\turret\r750\Radar_system_02_mat_02_CO.paa"
		};
	};
	class B_AAA_System_01_F;
	class b_1c: B_AAA_System_01_F
	{
		class Turrets;
		class MainTurret;
		scope=1;
		scopeCurator=0;
	};
	class 38th_cis_1c_he: b_1c
	{
		crew="O_UAV_AI";
		side=0;
		scope=2;
		scopeCurator=2;
		faction="38th_cis_main";
		displayName="Praetorian 1C";
		//editorPreview="\38th_vehicles\ui\38th_cis_1c_he.jpg";
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2"
		};
		hiddenSelectionstextures[]=
		{
			"38th\38th_Vehicles\textures\turret\1c\aaa_system_01_CO.paa",
			"38th\38th_Vehicles\textures\turret\1c\aaa_system_02_CO.paa"
		};
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				weapons[]=
				{
					"38th_vehicle_autocannon_he_50"
				};
				magazines[]=
				{
					"38th_mag_50mm_he_red",
					"38th_mag_50mm_he_red",
					"38th_mag_50mm_he_red",
					"38th_mag_50mm_he_red",
					"38th_mag_50mm_he_red",
					"38th_mag_50mm_he_red",
					"38th_mag_50mm_he_red",
					"38th_mag_50mm_he_red"
				};
			};
		};
	};
	class 38th_cis_1c_hmg: b_1c
	{
		crew="O_UAV_AI";
		side=0;
		scope=2;
		scopeCurator=2;
		faction="38th_cis_main";
		displayName="Praetorian 1C (HMG)";
		//editorPreview="\38th_vehicles\ui\38th_cis_1c_hmg.jpg";
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2"
		};
		hiddenSelectionstextures[]=
		{
			"38th\38th_Vehicles\textures\turret\1c\aaa_system_01_CO.paa",
			"38th\38th_Vehicles\textures\turret\1c\aaa_system_02_CO.paa"
		};
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				weapons[]=
				{
					"38th_vehicle_hmg"
				};
				magazines[]=
				{
					"38th_EWEB_200rnd_AP_mag",
					"38th_EWEB_200rnd_AP_mag",
					"38th_EWEB_200rnd_AP_mag",
					"38th_EWEB_200rnd_AP_mag",
					"38th_EWEB_200rnd_AP_mag",
					"38th_EWEB_200rnd_AP_mag",
					"38th_EWEB_200rnd_AP_mag",
					"38th_EWEB_200rnd_AP_mag",
					"38th_EWEB_200rnd_AP_mag",
					"38th_EWEB_200rnd_AP_mag"
				};
			};
		};
	};
	class UGV_01_base_F: Car_F
	{
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
			};
		};
	};
	class UGV_01_rcws_base_F: UGV_01_base_F
	{
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
			};
		};
	};
	class I_UGV_01_rcws_F: UGV_01_rcws_base_F
	{
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
			};
		};
	};
	class 38th_cis_ugv_rcws: I_UGV_01_rcws_F
	{
		side=0;
		scope=2;
		scopeCurator=2;
		displayName="UGV RCWS";
		//editorPreview="\38th_vehicles\ui\38th_cis_ugv_rcws.jpg";
		faction="38th_cis_main";
		hiddenSelectionsTextures[]=
		{
			"38th\38th_Vehicles\textures\drone\ugv\cis_ugv_ext_CO.paa",
			"\A3\Drones_F\soft_f_gamma\UGV_01\data\UGV_01_int_co.paa",
			"38th\38th_Vehicles\textures\ground\ifrit\cis_ifrit_turret_CO.paa"
		};
		textureList[]=
		{
			"base",
			1
		};
		class TransportMagazines
		{
		};
		class TransportWeapons
		{
		};
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				weapons[]=
				{
					"38th_vehicle_hmg",
					"38th_vehicle_gmg"
				};
				magazines[]=
				{
					"38th_mag_40mm_red",
					"38th_EWEB_200rnd_AP_mag",
					"38th_EWEB_200rnd_AP_mag"
				};
			};
		};
	};
	class 38th_cis_hmg_ugv_rcws: I_UGV_01_rcws_F
	{
		side=0;
		scope=2;
		scopeCurator=2;
		displayName="UGV RCWS (HMG)";
		//editorPreview="\38th_vehicles\ui\38th_cis_ugv_rcws.jpg";
		faction="38th_cis_main";
		hiddenSelectionsTextures[]=
		{
			"38th\38th_Vehicles\textures\drone\ugv\cis_ugv_ext_CO.paa",
			"\A3\Drones_F\soft_f_gamma\UGV_01\data\UGV_01_int_co.paa",
			"38th\38th_Vehicles\textures\ground\ifrit\cis_ifrit_turret_CO.paa"
		};
		textureList[]=
		{
			"base",
			1
		};
		class TransportMagazines
		{
		};
		class TransportWeapons
		{
		};
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				weapons[]=
				{
					"38th_vehicle_hmg"
				};
				magazines[]=
				{
					"38th_EWEB_200rnd_AP_mag",
					"38th_EWEB_200rnd_AP_mag"
				};
			};
		};
	};
	class 38th_gar_ugv_rcws: I_UGV_01_rcws_F
	{
		side=1;
		scope=2;
		scopeCurator=2;
		displayName="UGV RCWS";
		//editorPreview="\38th_vehicles\ui\38th_gar_ugv_rcws.jpg";
		faction="38th_main";
		hiddenSelectionsTextures[]=
		{
			"38th\38th_Vehicles\textures\drone\ugv\gar_ugv_ext_CO.paa",
			"\A3\Drones_F\soft_f_gamma\UGV_01\data\UGV_01_int_co.paa",
			"38th\38th_Vehicles\textures\ground\ifrit\gar_ifrit_turret_CO.paa"
		};
		textureList[]=
		{
			"base",
			1
		};
	};
	class 38th_gar_hmg_ugv_rcws: I_UGV_01_rcws_F
	{
		side=1;
		scope=2;
		scopeCurator=2;
		displayName="UGV RCWS (HMG)";
		//editorPreview="\38th_vehicles\ui\38th_gar_hmg_ugv_rcws.jpg";
		faction="38th_main";
		hiddenSelectionsTextures[]=
		{
			"38th\38th_Vehicles\textures\drone\ugv\gar_ugv_ext_CO.paa",
			"\A3\Drones_F\soft_f_gamma\UGV_01\data\UGV_01_int_co.paa",
			"38th\38th_Vehicles\textures\ground\ifrit\gar_ifrit_turret_CO.paa"
		};
		textureList[]=
		{
			"base",
			1
		};
	};
	class I_UAV_02_F;
	class 38th_gar_obama_drone: I_UAV_02_F
	{
		side=1;
		scope=2;
		scopeCurator=2;
		displayName="Obama Drone";
		//editorPreview="\38th_vehicles\ui\38th_gar_obama_drone.jpg";
		faction="38th_main";
		hiddenSelectionsTextures[]=
		{
			"38th\38th_Vehicles\textures\drone\obama\gar_obama_drone_CO.paa"
		};
		textureList[]=
		{
			"base",
			1
		};
	};
	class 38th_cis_obama_drone: 38th_gar_obama_drone
	{
		side=0;
		scope=2;
		scopeCurator=2;
		displayName="Obama Drone";
		//editorPreview="\38th_vehicles\ui\38th_cis_obama_drone.jpg";
		faction="38th_cis_main";
		hiddenSelectionsTextures[]=
		{
			"38th\38th_Vehicles\textures\drone\obama\cis_obama_drone_CO.paa"
		};
		textureList[]=
		{
			"base",
			1
		};
	};
};