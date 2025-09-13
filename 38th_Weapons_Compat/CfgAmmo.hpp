class CfgAmmo
{
	class ls_50mm_he_blue;
	class ls_50mm_laat_apfsds;
	class BulletBase;
	class ls_bullet_base;
	class 38th_ammo_65_blue: ls_bullet_base
	{
		timetolive=6;
		hit=10;
		ACE_bulletMass=0;
		coefgravity=0;
		airfriction=0;
	};
	class 38th_ammo_45_blue: ls_bullet_base
	{
		timetolive=6;
		hit=6;
		ACE_bulletMass=0;
		coefgravity=0;
		airfriction=0;
	};
	class 38th_ammo_127x33_blue: ls_bullet_base
	{
		timetolive=6;
		hit=7.5;
		ACE_bulletMass=0;
		coefgravity=0;
		airfriction=0;
	};
	class 38th_ammo_127x108_blue: ls_bullet_base
	{
		timetolive=6;
		hit=35;
		ACE_bulletMass=0;
		coefgravity=0;
		airfriction=0;
	};
	class 38th_ammo_408_blue: ls_bullet_base
	{
		timetolive=6;
		hit=24;
		ACE_bulletMass=0;
		coefgravity=0;
		airfriction=0;
	};
	class 38th_ammo_e5: ls_bullet_base
	{
		timetolive=0.54000002;
	};
	class 38th_ammo_sniper_blue: ls_bullet_base
	{
		timetolive=6.25;
		hit=60;
		ACE_bulletMass=0;
		coefgravity=0;
		airfriction=0;
	};
	class ls_40mm_G77_HEAB;
	class 38th_ammo_40mm_blue: ls_40mm_G77_HEAB
	{
		hit=120;
	};
	class 38th_ammo_40mm_red: 38th_ammo_40mm_blue
	{
		hit=120;
		model="\ls\core\addons\data\effects\ls_laser_red.p3d";
		effectFly="ls_plasma_red";
	};
	class 38th_ammo_9_blue: ls_bullet_base
	{
		typicalspeed=760;
		caliber=1;
		ACE_bulletMass=0;
		coefgravity=0;
		airfriction=0;
		timetolive=6;
	};
	class 38th_ammo_556_blue: ls_bullet_base
	{
		hit = 32;
		ACE_bulletMass=0;
		coefgravity=0;
		airfriction=0;
		timetolive=6;
	};
	class 38th_ammo_westar_blue: 38th_ammo_65_blue
	{
		ACE_bulletMass=0;
		coefgravity=0;
		airfriction=0;
		cartridge="";
		timetolive=6;
	};
	class 38th_ammo_762_blue: ls_bullet_base
	{
		hit = 42;
		typicalspeed=860;
		ACE_bulletMass=0;
		coefgravity=0;
		airfriction=0;
		cartridge="";
		timetolive=6;
		waterFriction=-0;
	};
	class 38th_ammo_338_blue: ls_bullet_base
	{
		hit = 52;
		ACE_bulletMass=0;
		coefgravity=0;
		airfriction=0;
		timetolive=6;
	};
	class 38th_ammo_338_red: 38th_ammo_338_blue
	{
		model="\ls\core\addons\data\effects\ls_laser_red.p3d";
		effectFly="ls_plasma_red";
	};
	class 38th_ammo_50_blue: 38th_ammo_338_blue
	{
		hit=60;
		typicalspeed=920;
		caliber=3;
		tracerScale=1.3;
		timetolive=6;
	};
	class 38th_ammo_Antimatter_blue: 38th_ammo_338_blue
	{

		ACE_muzzleVelocities[] = {10000};
		hit=300;
		typicalspeed=10000;
		caliber=7;
		tracerScale=1.3;
		timetolive=6;
	};
	class 38th_ammo_overcharged_blue: 38th_ammo_338_blue
	{
		hit=150;
		typicalspeed=1275;
		caliber=7;
		tracerScale=1.5;
		timetolive=4;
	};
	class ls_50mm_apfsds_blue;
	class 38th_ammo_50mm_he_blue: ls_50mm_he_blue
	{
		model="\ls\core\addons\data\effects\ls_laser_blue.p3d";
		airLock=1;
		effectfly="ls_plasma_blue";
		airFriction=-3.6e-007;
	};
	class 38th_ammo_50mm_apfsd_blue: ls_50mm_apfsds_blue
	{
		model="\ls\core\addons\data\effects\ls_laser_blue.p3d";
		effectfly="ls_plasma_blue";
		airFriction=-3.6e-007;
	};
	class 38th_ammo_50mm_he_red: ls_50mm_he_blue
	{
		model="\ls\core\addons\data\effects\ls_laser_red.p3d";
		airLock=1;
		effectfly="ls_plasma_red";
		airFriction=-3.6e-007;
	};
	class 38th_ammo_50mm_apfsd_red: ls_50mm_apfsds_blue
	{
		model="\ls\core\addons\data\effects\ls_laser_red.p3d";
		effectfly="ls_plasma_red";
		airFriction=-3.6e-007;
	};
	class 38th_Westar_GL_HEAT: BulletBase
	{
		hit=1000;
		caliber=100;
		dangerRadiusBulletClose=16;
		dangerRadiusHit=40;
		explosionAngle=60;
		explosive=0.80000001;
		effectFlare="FlareShell";
		effectsFire="CannonFire";
		explosionDir="explosionDir";
		explosionEffects="ATMissileExplosion";
		explosionEffectsDir="explosionDir";
		explosionPos="explosionPos";
		explosionType="explosive";
		indirectHit=5;
		indirectHitRange=3;
		model="\A3\Weapons_f\Data\bullettracer\tracer_red";
		effectFly="Railgun_Fly";
		muzzleEffect="BIS_fnc_effectFiredRocket";
		nameSound="missiles";
		simulation="shotBullet";
		soundFly[]=
		{
			"OPTRE_Weapons\Rockets\data\sounds\rocket_1.wss",
			6,
			1.5,
			700
		};
		soundSetBulletFly[]=
		{
			"bulletFlyBy_SoundSet"
		};
		soundSetSonicCrack[]=
		{
			"bulletSonicCrack_SoundSet",
			"bulletSonicCrackTail_SoundSet"
		};
		supersonicCrackFar[]=
		{
			"A3\sounds_f\arsenal\sfx\supersonic_crack\scrack_middle",
			3.1622801,
			1,
			500
		};
		supersonicCrackNear[]=
		{
			"A3\sounds_f\arsenal\sfx\supersonic_crack\scrack_close",
			3.1622801,
			1,
			500
		};
		soundHit[]=
		{
			"",
			100,
			1
		};
		soundHit1[]=
		{
			"A3\Sounds_F\arsenal\weapons\Launchers\Titan\Explosion_titan_missile_01",
			2.5118899,
			1,
			2000
		};
		soundHit2[]=
		{
			"A3\Sounds_F\arsenal\weapons\Launchers\Titan\Explosion_titan_missile_02",
			2.5118899,
			1,
			2000
		};
		soundHit3[]=
		{
			"A3\Sounds_F\arsenal\weapons\Launchers\Titan\Explosion_titan_missile_03",
			2.5118899,
			1,
			2000
		};
		SoundSetExplosion[]=
		{
			"RocketsHeavy_Exp_SoundSet",
			"RocketsHeavy_Tail_SoundSet",
			"Explosion_Debris_SoundSet"
		};
		thrust=210;
		thrustTime=1.5;
		timeToLive=6;
		tracerColor[]={0.69999999,0.69999999,0.5,0.039999999};
		tracerColorR[]={0.69999999,0.69999999,0.5,0.039999999};
		tracerScale=1;
		tracerStartTime=0;
		tracerEndTime=10;
		typicalSpeed=30;
	};
	class 38th_Westar_GL_Ammo: 38th_Westar_GL_HEAT
	{
		hit=200;
		caliber=100;
		dangerRadiusBulletClose=16;
		dangerRadiusHit=40;
		explosionAngle=60;
		explosive=0.80000001;
		effectFlare="FlareShell";
		effectsFire="CannonFire";
		explosionDir="explosionDir";
		explosionEffects="ATMissileExplosion";
		explosionEffectsDir="explosionDir";
		explosionPos="explosionPos";
		explosionType="explosive";
		indirectHit=5;
		indirectHitRange=3;
		model="\A3\Weapons_f\Data\bullettracer\tracer_red";
		muzzleEffect="BIS_fnc_effectFiredRocket";
		nameSound="missiles";
		simulation="shotBullet";
		soundFly[]=
		{
			"OPTRE_Weapons\Rockets\data\sounds\rocket_1.wss",
			6,
			1.5,
			700
		};
		soundSetBulletFly[]=
		{
			"bulletFlyBy_SoundSet"
		};
		soundSetSonicCrack[]=
		{
			"bulletSonicCrack_SoundSet",
			"bulletSonicCrackTail_SoundSet"
		};
		supersonicCrackFar[]=
		{
			"A3\sounds_f\arsenal\sfx\supersonic_crack\scrack_middle",
			3.1622801,
			1,
			500
		};
		supersonicCrackNear[]=
		{
			"A3\sounds_f\arsenal\sfx\supersonic_crack\scrack_close",
			3.1622801,
			1,
			500
		};
		soundHit[]=
		{
			"",
			100,
			1
		};
		soundHit1[]=
		{
			"A3\Sounds_F\arsenal\weapons\Launchers\Titan\Explosion_titan_missile_01",
			2.5118899,
			1,
			2000
		};
		soundHit2[]=
		{
			"A3\Sounds_F\arsenal\weapons\Launchers\Titan\Explosion_titan_missile_02",
			2.5118899,
			1,
			2000
		};
		soundHit3[]=
		{
			"A3\Sounds_F\arsenal\weapons\Launchers\Titan\Explosion_titan_missile_03",
			2.5118899,
			1,
			2000
		};
		SoundSetExplosion[]=
		{
			"RocketsHeavy_Exp_SoundSet",
			"RocketsHeavy_Tail_SoundSet",
			"Explosion_Debris_SoundSet"
		};
		thrust=210;
		thrustTime=1.5;
		timeToLive=6;
		tracerColor[]={0.69999999,0.69999999,0.5,0.039999999};
		tracerColorR[]={0.69999999,0.69999999,0.5,0.039999999};
		tracerScale=1;
		tracerStartTime=0;
		tracerEndTime=10;
		typicalSpeed=30;
	};
///Launcher Ammo
	class 3AS_R_MK42_HE;
	class RocketBase;
	class 38th_RPS6_XMK43_WP : 3AS_R_MK42_HE 
	{
		hit = 110;
		explosive=1;
		warheadName="Willy Pete";
		effectsMissile="3AS_Rocket_effect_Blue_fly";
		indirectHit = 110;
		indirectHitRange = 8;
		ace_frag_classes[] = 
		{			
			"ACE_frag_tiny",
			"ACE_frag_medium_HD"
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
		explosionEffects = "WPExplosion4";
	};
	class 3AS_ammo_Penetrator_Base;
	class 38th_ammo_Penetrator_XMK40: 3AS_ammo_Penetrator_Base
	{
		caliber=43.333302;
		warheadName="TandemHEAT";
		hit=1000;
	};
	class 38th_ammo_Penetrator_HEAT: 3AS_ammo_Penetrator_Base
	{
		caliber=38.333302;
		warheadName="TandemHEAT";
		hit=600;
	};
	class 38th_ammo_Penetrator_XMK41: 3AS_ammo_Penetrator_Base
	{
		caliber=43.333302;
		warheadName="TandemHEAT";
		hit=600;
	};
	class MissileBase;
	class 38th_M_XMk40_AT: MissileBase
	{
		model="\A3\Weapons_F_beta\Launchers\titan\titan_missile_at_fly";
		hit=150;
		indirectHit=28;
		indirectHitRange=3;
		warheadName="TandemHEAT";
		submunitionAmmo="38th_ammo_Penetrator_XMK41";
		submunitionDirectionType="SubmunitionModelDirection";
		submunitionInitSpeed=1000;
		submunitionParentSpeedCoef=0;
		submunitionInitialOffset[]={0,0,-0.2};
		triggerOnImpact=1;
		deleteParentWhenTriggered=0;
		explosive=0.80000001;
		cost=200;
		aiAmmoUsageFlags="128 + 512";
		lockType=1;
		manualControl=1;
		missileManualControlCone=80;
		maxControlRange=2000;
		weaponLockSystem=0;
		explosionSoundEffect="DefaultExplosion";
		effectsMissileInit="RocketBackEffectsRPG";
		initTime=0.050000001;
		trackOversteer=0.5;
		trackLead=0.85000002;
		timeToLive=30;
		maneuvrability=6;
		simulationStep=0.0020000001;
		airFriction=0.059999999;
		sideAirFriction=0.090000004;
		maxSpeed=200;
		thrustTime=1;
		thrust=70;
		fuseDistance=50;
		effectsMissile="3AS_Rocket_effect_Yellow_fly";
		whistleDist=4;
		class CamShakeExplode
		{
			power=11;
			duration=1.4;
			frequency=20;
			distance=91.329597;
		};
		class CamShakeHit
		{
			power=110;
			duration=0.60000002;
			frequency=20;
			distance=1;
		};
		class CamShakeFire
		{
			power=0;
			duration=0.2;
			frequency=20;
			distance=0;
		};
		class CamShakePlayerFire
		{
			power=0;
			duration=0.1;
			frequency=20;
			distance=1;
		};
	};
	class 38th_R_XMk40_AT: RocketBase
	{
		model="\A3\weapons_f\launchers\RPG32\pg32v_rocket.p3d";
		hit=500;
		indirectHit=28;
		indirectHitRange=5;
		warheadName="TandemHEAT";
		submunitionAmmo="38th_ammo_Penetrator_XMK40";
		submunitionDirectionType="SubmunitionModelDirection";
		submunitionInitSpeed=1000;
		submunitionParentSpeedCoef=0;
		submunitionInitialOffset[]={0,0,-0.2};
		triggerOnImpact=1;
		deleteParentWhenTriggered=0;
		explosive=1;
		cost=100;
		airFriction=0.075000003;
		sideAirFriction=0.075000003;
		maxSpeed=140;
		initTime=0;
		thrustTime=0.1;
		thrust=500;
		fuseDistance=10;
		CraterEffects="ATMissileCrater";
		explosionEffects="ATMissileExplosion";
		effectsMissileInit="";
		effectsMissile="3AS_Rocket_effect_Blue_fly";
		simulationStep=0.02;
		airLock=0;
		aiAmmoUsageFlags="128 + 512";
		irLock=0;
		timeToLive=5;
		maneuvrability=0;
		allowAgainstInfantry=0;
		soundHit1[]=
		{
			"A3\Sounds_F\arsenal\weapons\Launchers\Titan\Explosion_titan_missile_01",
			2.5118864,
			1,
			1800
		};
		soundHit2[]=
		{
			"A3\Sounds_F\arsenal\weapons\Launchers\Titan\Explosion_titan_missile_02",
			2.5118864,
			1,
			1800
		};
		soundHit3[]=
		{
			"A3\Sounds_F\arsenal\weapons\Launchers\Titan\Explosion_titan_missile_03",
			2.5118864,
			1,
			1800
		};
		multiSoundHit[]=
		{
			"soundHit1",
			0.34,
			"soundHit2",
			0.33000001,
			"soundHit3",
			0.33000001
		};
		soundFly[]=
		{
			"A3\Sounds_F\arsenal\weapons\Launchers\RPG32\Fly_RPG32",
			0.31622776,
			1.5,
			900
		};
		class CamShakeExplode
		{
			power=11;
			duration=1.4;
			frequency=20;
			distance=99.329597;
		};
		class CamShakeHit
		{
			power=110;
			duration=0.60000002;
			frequency=20;
			distance=1;
		};
		class CamShakeFire
		{
			power=2.1147399;
			duration=0.80000001;
			frequency=20;
			distance=35.7771;
		};
		class CamShakePlayerFire
		{
			power=1;
			duration=0.1;
			frequency=20;
			distance=1;
		};
	};
	class 38_RPC2_HEAT_F: RocketBase
	{
		model="\A3\Weapons_F_Tank\Launchers\MRAWS\rocket_MRAWS_HEAT_F.p3d";
		warheadName="TandemHEAT";
		submunitionAmmo="38th_ammo_Penetrator_HEAT";
		submunitionDirectionType="SubmunitionModelDirection";
		submunitionInitSpeed=1000;
		submunitionParentSpeedCoef=0;
		submunitionInitialOffset[]={0,0,-0.2};
		triggerOnImpact=1;
		deleteParentWhenTriggered=0;
		hit=250;
		indirectHit=14;
		indirectHitRange=3;
		explosive=0.80000001;
		cost=100;
		airFriction=0.050000001;
		sideAirFriction=0;
		maxSpeed=350;
		initTime=0;
		thrustTime=0.1;
		thrust=0.1;
		fuseDistance=15;
		CraterEffects="ATMissileCrater";
		explosionEffects="ATMissileExplosion";
		effectsMissileInit="";
		effectsMissile="EmptyEffect";
		simulationStep=0.02;
		airLock=0;
		aiAmmoUsageFlags="128 + 512";
		irLock=0;
		timeToLive=25;
		maneuvrability=0;
		allowAgainstInfantry=1;
		soundHit1[]=
		{
			"A3\Sounds_F\arsenal\weapons\Launchers\Titan\Explosion_titan_missile_01",
			2.5118864,
			1,
			1800
		};
		soundHit2[]=
		{
			"A3\Sounds_F\arsenal\weapons\Launchers\Titan\Explosion_titan_missile_02",
			2.5118864,
			1,
			1800
		};
		soundHit3[]=
		{
			"A3\Sounds_F\arsenal\weapons\Launchers\Titan\Explosion_titan_missile_03",
			2.5118864,
			1,
			1800
		};
		multiSoundHit[]=
		{
			"soundHit1",
			0.34,
			"soundHit2",
			0.33000001,
			"soundHit3",
			0.33000001
		};
		class CamShakeExplode
		{
			power=11;
			duration=1.4;
			frequency=20;
			distance=99.329597;
		};
		class CamShakeHit
		{
			power=110;
			duration=0.60000002;
			frequency=20;
			distance=1;
		};
		class CamShakeFire
		{
			power=2.1147399;
			duration=0.80000001;
			frequency=20;
			distance=35.7771;
		};
		class CamShakePlayerFire
		{
			power=1;
			duration=0.1;
			frequency=20;
			distance=1;
		};
	};
	class 38th_RPS6_XMK44_FRAG : 38th_R_XMk40_AT 
	{
		hit = 300;
		explosive=1;
		warheadName="FRAG";
		effectsMissile="3AS_Rocket_effect_Blue_fly";
		indirectHit = 200;
		indirectHitRange = 12;
		ace_frag_classes[] = 
		{			
			"ACE_frag_tiny",
			"ACE_frag_small",
			"ACE_frag_medium",
			"ACE_frag_large"
		};
		ace_frag_skip = 0;
		ace_frag_enable = 1;
		ace_frag_force = 1;
		ace_frag_metal = 5000;
		ace_frag_charge = 450;
		class CamShakeExplode 
		{
			distance = 55;
			duration = 3;
			frequency = 20;
			power = 20;
		};
	};
	class M_Titan_AT;
	class M_Titan_AP;
	class 38th_PLX_AT: M_Titan_AT
	{
		irLock=1;
		laserLock=0;
		airLock=0;
		manualControl=0;
		hit=1400;
		indirectHit=20;
		indirectHitRange=2;
		initTime=2;
		soundFly[]=
		{
			"ls\core\addons\sounds\weapons\launcher\plx1_fly.wss",
			6,
			1.5,
			700
		};
		class ace_missileguidance
		{
			enabled=1;
			minDeflection=4.9999999e-005;
			maxDeflection=0.025;
			incDeflection=4.9999999e-005;
			canVanillaLock=0;
			defaultSeekerType="Optic";
			seekerTypes[]=
			{
				"Optic"
			};
			defaultSeekerLockMode="LOBL";
			seekerLockModes[]=
			{
				"LOBL"
			};
			seekerAngle=180;
			seekerAccuracy=1;
			seekerMinRange=0;
			seekerMaxRange=2500;
			seekLastTargetPos=1;
			defaultAttackProfile="JAV_TOP";
			attackProfiles[]=
			{
				"JAV_TOP",
				"JAV_DIR"
			};
			useModeForAttackProfile=1;
		};
	};
	class 38th_PLX_Frag: M_Titan_AP
	{
		soundFly[]=
		{
			"ls\core\addons\sounds\weapons\launcher\plx1_fly.wss",
			6,
			1.5,
			700
		};
		hit=125;
		indirectHit=52;
		indirectHitRange=18;
		ace_frag_enabled=1;
		ace_frag_metal=897.9024;
		ace_frag_charge=112;
		ace_frag_gurney_c=2440;
		ace_frag_gurney_k="1/2";
		ace_frag_skip=0;
		ace_frag_force=1;
	};
};