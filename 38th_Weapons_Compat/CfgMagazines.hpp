class CfgMagazineWells
{
	class RegentsAKMagwell
	{
		regent_Magazines[]=
		{
			"38th_Mag_AKM_50cal_blue"
		};
	};
	class 38th_Westar_GL_Magwell
	{
		Westar_GL_Mags[]=
		{
			"38th_Westar_GL_Mag","38th_Westar_GL40_Mag"
		};
	};
};
class CfgMagazines
{
	class 3AS_40Rnd_EC40_Mag;
	class 3AS_300Rnd_EC60_Mag;
	class 3AS_100Rnd_EC40_mag;
	class ls_magazine_50mm_200Rnd_HE_green;
	class 3AS_40Rnd_EM40_Mag;
	class CA_Magazine;
	class VehicleMagazine;
	class 38th_HMG_200rnd_AP_mag_red: VehicleMagazine
	{
		displayname="[38th] 200Rnd HMG Box Red (Ball)";
		ammo="38th_ammo_338_red";
		displaynamemagazine="Ball";
		shortnamemagazine="Ball";
		displayNameMFDFormat="Ball";
		displayNameShort="Ball";
		count=200;
		initspeed=790;
		muzzleImpulseFactor[]={0,0};
		tracersevery=1;
	};
	class 38th_BTX42_Fuel: CA_Magazine
	{
		scope=2;
		displayName="[38th] 60Rnd Flamer Fuel";
		picture="\3AS\3AS_Weapons\Data\UI\3as_ammo_flamer.paa";
		ammo="FlameRound";
		count=60;
		initSpeed=50;
		tracersEvery=1;
		lastRoundsTracer=999;
		descriptionShort="BTX-42 Fuel";
	};
	class 38th_Mag_M16_blue: 3AS_40Rnd_EC40_Mag
	{
		displayname="[38th] DCM-16 Cells Blue (50rnd)";
		ammo="38th_ammo_762_blue";
		count=50;
		initspeed=860;
	};
	class 38th_Mag_dc15l_blue: 3AS_40Rnd_EC40_Mag
	{
		displayname="[38th] DC-15L Cells Blue (300rnd)";
		ammo="38th_ammo_762_blue";
		count=300;
		initspeed=860;
	};
	class 38th_Mag_dc15c_blue: 3AS_40Rnd_EC40_Mag
	{
		displayname="[38th] DC-15C Cells Blue (60rnd)";
		ammo="38th_ammo_762_blue";
		count=60;
		initspeed=860;
	};
	class 38th_Mag_dc15c_red: 3AS_40Rnd_EM40_Mag
	{
		displayname="[38th] DC-15C Cells Red (60rnd)";
		count=60;
		ammo="38th_ammo_762_red";
	};
	class 38th_Mag_dc15a_blue: 38th_Mag_dc15c_blue
	{
		displayname="[38th] DC-15A Cells Blue (60rnd)";
		ammo="38th_ammo_762_blue";
		count=60;
		initspeed=860;
	};
	class 38th_Mag_dc15a_green: 38th_Mag_dc15a_blue
	{
		displayname="[38th] DC-15A Cells Green (60rnd)";
		ammo="38th_ammo_762_green";
	};
	class 38th_Mag_dc15s_blue: 38th_Mag_dc15c_blue
	{
		displayname="[38th] DC-15S Plasma Cell Blue (60rnd)";
		ammo="38th_ammo_556_blue";
	};
	class 38th_Mag_valken38_blue: 38th_Mag_dc15c_blue
	{
		displayname="[38th] Valken38-X Plasma Cell Blue (15rnd)";
		ammo="38th_ammo_338_blue";
		initspeed=920;
		count=15;
	};
	class 38th_Mag_valken38_overcharged_blue: 38th_Mag_valken38_blue
	{
		displayname="[38th] Valken38-X Overcharged Blue Cell (1Rnd)";
		ammo="38th_ammo_overcharged_blue";
		count=1;
	};
	///15 x
	class 38th_Mag_dc15x_blue: 38th_Mag_dc15c_blue
	{
		displayname="[38th] DC-15X Plasma Cell Blue (15rnd)";
		ammo="38th_ammo_338_blue";
		initspeed=920;
		count=15;
	};
	class 38th_Mag_dc15x_50cal_blue: 38th_Mag_dc15x_blue
	{
		displayname="[38th] DC-15X Anti-Material Mag Blue (1rnd)";
		ammo="38th_ammo_50_blue";
		count=1;
	};
	class 38th_Mag_dc17_blue: 3AS_100Rnd_EC40_mag
	{
		displayName="[38th] DC17 Cells Blue (80rnd)";
		ammo="38th_ammo_9_blue";
		mass=10;
		count=80;
	};
	class 38th_Mag_westarm5_blue: 38th_Mag_dc15c_blue
	{
		displayname="[38th] Westar Cells Blue (60rnd)";
		initspeed=920;
		ammo="38th_ammo_762_blue";
		count=60;
	};
	class 38th_Mag_z6_blue: 3AS_300Rnd_EC60_Mag
	{
		displayname="[38th] Z-6 Cells Blue (500rnd)";
		ammo="38th_ammo_762_blue";
		initspeed=860;
	};
	class ls_magazine_2Rnd_40mw_G77_HEAB;
	class 38th_Westar_GL_Mag: ls_magazine_2Rnd_40mw_G77_HEAB
	{
		displayName="[38th] Westar M5 3Rnd HEAT Cell";
		initSpeed=700;
		type=16;
		count=3;
		mass=60;
		ammo="38th_Westar_GL_HEAT";
	};
	class 38th_Westar_GL40_Mag: ls_magazine_2Rnd_40mw_G77_HEAB
	{
		displayName="[38th] Westar M5 3Rnd GL Cell";
		initSpeed=700;
		type=16;
		count=3;
		mass=60;
		ammo="38th_Westar_GL_Ammo";
	};
/// MEME SHIT 
	class 38th_Mag_AKM_50cal_blue: 38th_Mag_dc15x_blue
	{
		displayname="[38th] 60Rnd Antimatter";
		picture="\A3\Weapons_F_Exp\Data\UI\icon_30Rnd_762x39_Mag_F_ca.paa";
		modelSpecial="\a3\Weapons_F_Exp\MagazineProxies\mag_762x39_akm_30rnd.p3d";
		modelSpecialIsProxy=1;
		scope=2;
		initSpeed=10000;
		mass=10;
		ammo="38th_ammo_Antimatter_blue";
		count=60;
	};
	////LAUNCHER
	class CA_LauncherMagazine;
	class 3AS_MK41_AT;
	class 3AS_MK42_HE;
	class ls_mag_base;
	class 38th_Mag_RPS6_WP: 3AS_MK42_HE
	{
		displayName="[38th] XMK43 White Phosphorus Rocket";
		ammo="38th_RPS6_XMK43_WP";
	};
	class 38th_Mag_RPS6_FRAG: 3AS_MK42_HE
	{
		displayName="[38th] XMK44 FRAG Rocket";
		ammo="38th_RPS6_XMK44_FRAG";
	};
	class 38th_Mag_PLX_AT: ls_mag_base
	{
		scope=2;
		displayName="3Rnd PLX AT";
		count=3;
		ammo="38th_PLX_AT";
		picture="\3AS\3AS_Weapons\Data\UI\3as_rocket_at.paa";
		initSpeed=70; //was 40
		maxLeadSpeed=27.7778;
		type=256;
		mass=50;
	};
	class 38th_Mag_RPC2_HEAT: CA_LauncherMagazine
	{
		scope=2;
		count=3;
		displayName="[38th] 3Rnd HEAT";
		model="\A3\weapons_f\launchers\RPG32\pg32v_rocket_item.p3d";
		picture="\3AS\3AS_Weapons\Data\UI\3as_rocket_at.paa";
		initSpeed=300;
		descriptionShort="RPC2 HEAT";
		displaynameshort="RPC2 HEAT";
		ammo="38_RPC2_HEAT_F";
		type="2*  256";
		mass=30;
	};
	class 38th_Mag_Heavy_HEAT: 3AS_MK42_HE
	{
		scope=2;
		count=1;
		displayName="[38th] 1Rnd XMK40";
		model="\A3\weapons_f\launchers\RPG32\pg32v_rocket_item.p3d";
		picture="\3AS\3AS_Weapons\Data\UI\3as_rocket_at.paa";
		descriptionShort="Heavy RPS-6 Tandem Rocket";
		displaynameshort="TANDEM";
		ammo="38th_R_XMk40_AT";
		mass=30;
	};
	class 38th_Mag_PLX_FRAG: ls_mag_base
	{
		scope=2;
		displayName="3Rnd PLX FRAG";
		count=3;
		ammo="38th_PLX_Frag";
		picture="\3AS\3AS_Weapons\Data\UI\3as_rocket_at.paa";
		initSpeed=40;
		maxLeadSpeed=27.7778;
		type=256;
		mass=50;
	};
	class 38th_XMK40_AT: CA_LauncherMagazine
	{
		scope=2;
		displayName="[38th] XMK40 AT Rocket";
		model="\A3\weapons_f\launchers\RPG32\pg32v_rocket_item.p3d";
		picture="\3AS\3AS_Weapons\Data\UI\3as_rocket_at.paa";
		initSpeed=140;
		descriptionShort="$STR_A3_CfgMagazines_LAW1";
		displaynameshort="$STR_A3_CFGMAGAZINES_TITAN_AT_DNS";
		ammo="38th_R_XMk40_AT";
		type="2*  256";
		mass=40;
	};
	class 38th_XMK40_AT_Guided: CA_LauncherMagazine
	{
		scope=2;
		displayName="[38th] XMK40 AT Missile";
		model="\A3\weapons_f\launchers\RPG32\pg32v_rocket_item.p3d";
		picture="\3AS\3AS_Weapons\Data\UI\3as_rocket_at.paa";
		initSpeed=140;
		descriptionShort="$STR_A3_CfgMagazines_LAW1";
		displaynameshort="$STR_A3_CFGMAGAZINES_TITAN_AT_DNS";
		ammo="38th_M_XMk40_AT";
		type="2*  256";
		mass=40;
	};
	///// VEHICLES
	class 38th_Mag_lmg_blue: 3AS_300Rnd_EC60_Mag
	{
		scope=2;
		displayname="[38th] LMG Mag Blue (250rnd)";
		ammo="38th_ammo_762_blue";
		count=250;
	};
	class 38th_Mag_hmg_blue: 3AS_300Rnd_EC60_Mag
	{
		scope=2;
		displayname="[38th] HMG Mag Blue (500rnd)";
		ammo="38th_ammo_338_blue";
		count=500;
	};
	class 38th_Mag_hmg_red: 3AS_300Rnd_EC60_Mag
	{
		scope=2;
		displayname="[38th] HMG Mag Red (500rnd)";
		ammo="38th_ammo_338_red";
		count=500;
	};
	class 38th_Mag_40mm_blue: ls_magazine_2Rnd_40mw_G77_HEAB
	{
		scope=2;
		displayname="[38th] 40mm Mag Blue (100rnd)";
		ammo="38th_ammo_40mm_blue";
		count="100";
	};
	class 38th_Mag_40mm_red: 38th_Mag_40mm_blue
	{
		scope=2;
		displayname="[38th] 40mm Mag Red (100rnd)";
		ammo="38th_ammo_40mm_red";
		count="100";
	};
	class 38th_Mag_50mm_he_blue: ls_magazine_50mm_200Rnd_HE_green
	{
		ammo="38th_ammo_50mm_he_blue";
		displayNameShort="50mm HE";
		displayname="[38th] 50mm HE Blue";
	};
	class 38th_Mag_50mm_apfsd_blue: ls_magazine_50mm_200Rnd_HE_green
	{
		ammo="38th_ammo_50mm_apfsd_blue";
		displayNameShort="50mm APFSD";
		displayname="[38th] 50mm APFSD Blue";
		displaynameMagazine="50mm Cannons APFSDS";
		shortNameMagazine="50mm Cannons APFSDS";
	};
	class 38th_Mag_50mm_he_red: ls_magazine_50mm_200Rnd_HE_green
	{
		ammo="38th_ammo_50mm_he_red";
		displayNameShort="50mm HE";
		displayname="[38th] 50mm HE Red";
	};
	class 38th_Mag_50mm_apfsd_red: ls_magazine_50mm_200Rnd_HE_green
	{
		ammo="38th_ammo_50mm_apfsd_red";
		displayNameShort="50mm APFSD";
		displayname="[38th] 50mm APFSD Red";
		displaynameMagazine="50mm Cannons APFSDS";
		shortNameMagazine="50mm Cannons APFSDS";
	};
};