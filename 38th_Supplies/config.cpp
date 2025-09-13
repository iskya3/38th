class CfgPatches
{
	class 38thAssaultCorps_Resupply
	{
		author="isky";
		requiredaddons[]=
		{
			"38th_Core",
			"ACE_common"
		};
		requiredversion=0.1;
		units[]=
		{
			"38th_SupplyBox_F",
			"38th_AmmoBox_Medical_F",
			"38th_AmmoBox_Explosive_F"
		};
		weapons[]={};
	};
};
class CBA_Extended_EventHandlers_base;
class cfgVehicles
{
	class ACE_Box_Misc;
	class 38th_SupplyBox_F: ACE_Box_Misc
	{
		scope=2;
		scopeCurator=2;
		displayName="38th Resupply Box (All Equipment)";
		editorCategory="ac38_props";
		editorSubcategory="38th_resupply_boxes";
		transportMaxWeapons=99999999;
		transportMaxMagazines=99999999;
		transportMaxItems=99999999;
		maximumload=99999999;
		class TransportWeapons
		{
			class 38th_dc15a
			{
				weapon="38th_dc15a";
				count=15;
			};
			class 38th_dc15x
			{
				weapon="38th_dc15x";
				count=15;
			};
			class 38th_z6
			{
				weapon="38th_z6";
				count=15;
			};
			class 3AS_Valken38X_F
			{
				weapon="3AS_Valken38X_F";
				count=15;
			};
			class 38th_RPS6_F
			{
				weapon="38th_RPS6_F";
				count=15;
			};
			class 3AS_RPS6_HP
			{
				weapon="3AS_RPS6_HP";
				count=15;
			};
			class 38th_RPS6_Heavy
			{
				weapon="38th_RPS6_Heavy";
				count=15;
			};
			class 38th_RPS6_Guided
			{
				weapon="38th_RPS6_Guided";
				count=15;
			};
			class 3AS_pistol_DC15SA_F
			{
				weapon="3AS_pistol_DC15SA_F";
				count=15;
			};
			class 38th_dc17
			{
				weapon="38th_dc17";
				count=15;
			};
			class 38th_dc15s
			{
				weapon="38th_dc15s";
				count=15;
			};
			class 38th_dc15a_ugl
			{
				weapon="38th_dc15a_ugl";
				count=15;
			};
			class 38th_dc15c
			{
				weapon="38th_dc15c";
				count=15;
			};
		};
		class TransportMagazines
		{
			class 38th_mag_dc15c_blue
			{
				magazine="38th_mag_dc15c_blue";
				count=15;
			};
			class 38th_mag_dc15c_red
			{
				magazine="38th_mag_dc15c_red";
				count=15;
			};
			class 38th_mag_dc15c_green
			{
				magazine="38th_mag_dc15c_green";
				count=15;
			};
			class 38th_mag_dc15a_blue
			{
				magazine="38th_mag_dc15a_blue";
				count=15;
			};
			class 38th_mag_dc15a_red
			{
				magazine="38th_mag_dc15a_red";
				count=15;
			};
			class 38th_mag_z6_blue
			{
				magazine="38th_mag_z6_blue";
				count=15;
			};
			class 1Rnd_SmokeBlue_Grenade_shell
			{
				magazine="1Rnd_SmokeBlue_Grenade_shell";
				count=15;
			};
			class 3AS_16Rnd_EC20_Mag
			{
				magazine="3AS_16Rnd_EC20_Mag";
				count=15;
			};
			class 3AS_60Rnd_EM30_mag
			{
				magazine="3AS_60Rnd_EM30_mag";
				count=15;
			};
			class 3AS_200Rnd_EM40_Mag
			{
				magazine="3AS_200Rnd_EM40_Mag";
				count=15;
			};
			class JLTS_stun_mag_short
			{
				magazine="JLTS_stun_mag_short";
				count=15;
			};
			class 3AS_40Rnd_EM40_Mag
			{
				magazine="3AS_40Rnd_EM40_Mag";
				count=15;
			};
			class 3AS_10Rnd_EC80_Mag
			{
				magazine="3AS_10Rnd_EC80_Mag";
				count=15;
			};
			class 3AS_15Rnd_EC30_mag
			{
				magazine="3AS_15Rnd_EC30_mag";
				count=15;
			};
			class 3AS_15Rnd_EM30_mag
			{
				magazine="3AS_15Rnd_EM30_mag";
				count=15;
			};
			class JLTS_RPS6_HE_mag
			{
				magazine="JLTS_RPS6_HE_mag";
				count=15;
			};
			class JLTS_stun_mag_long
			{
				magazine="JLTS_stun_mag_long";
				count=15;
			};
			class 3AS_40Rnd_EC40_Mag
			{
				magazine="3AS_40Rnd_EC40_Mag";
				count=15;
			};
			class JLTS_DC15X_mag
			{
				magazine="JLTS_DC15X_mag";
				count=15;
			};
			class 1Rnd_SmokeYellow_Grenade_shell
			{
				magazine="1Rnd_SmokeYellow_Grenade_shell";
				count=15;
			};
			class SWLW_DC17_Mag
			{
				magazine="SWLW_DC17_Mag";
				count=15;
			};
			class 3AS_200Rnd_EC40_Mag
			{
				magazine="3AS_200Rnd_EC40_Mag";
				count=15;
			};
			class 1Rnd_SmokePurple_Grenade_shell
			{
				magazine="1Rnd_SmokePurple_Grenade_shell";
				count=15;
			};
			class 1Rnd_SmokeOrange_Grenade_shell
			{
				magazine="1Rnd_SmokeOrange_Grenade_shell";
				count=15;
			};
			class 3AS_16Rnd_EM20_Mag
			{
				magazine="3AS_16Rnd_EM20_Mag";
				count=15;
			};
			class 3AS_MK42_HE
			{
				magazine="3AS_MK42_HE";
				count=15;
			};
			class ls_mag_rpg_1rnd
			{
				magazine="ls_mag_rpg_1rnd";
				count=15;
			};
			class 3AS_60Rnd_EC30_mag
			{
				magazine="3AS_60Rnd_EC30_mag";
				count=15;
			};
			class 3AS_10Rnd_EM80_Mag
			{
				magazine="3AS_10Rnd_EM80_Mag";
				count=15;
			};
			class SWLW_flareRed_mag
			{
				magazine="SWLW_flareRed_mag";
				count=15;
			};
			class JLTS_DC17SA_mag
			{
				magazine="JLTS_DC17SA_mag";
				count=15;
			};
			class 3AS_MK41_AT
			{
				magazine="3AS_MK41_AT";
				count=15;
			};
			class JLTS_RPS6_mag
			{
				magazine="JLTS_RPS6_mag";
				count=15;
			};
			class 1Rnd_smoke_grenade_shell
			{
				magazine="1Rnd_smoke_grenade_shell";
				count=15;
			};
			class 1Rnd_SmokeGreen_Grenade_shell
			{
				magazine="1Rnd_SmokeGreen_Grenade_shell";
				count=15;
			};
			class SWLW_smokeRed_mag
			{
				magazine="SWLW_smokeRed_mag";
				count=15;
			};
			class ACE_HuntIR_M203
			{
				magazine="ACE_HuntIR_M203";
				count=10;
			};
			class 3Rnd_SmokeYellow_Grenade_shell
			{
				magazine="3Rnd_SmokeYellow_Grenade_shell";
				count=15;
			};
			class 3Rnd_SmokeWhite_Grenade_shell
			{
				magazine="3Rnd_SmokeWhite_Grenade_shell";
				count=15;
			};
			class 3Rnd_SmokeRed_Grenade_shell
			{
				magazine="3Rnd_SmokeRed_Grenade_shell";
				count=15;
			};
			class 3Rnd_SmokePurple_Grenade_shell
			{
				magazine="3Rnd_SmokePurple_Grenade_shell";
				count=15;
			};
			class 3Rnd_SmokeOrange_Grenade_shell
			{
				magazine="3Rnd_SmokeOrange_Grenade_shell";
				count=15;
			};
			class 3Rnd_SmokeGreen_Grenade_shell
			{
				magazine="3Rnd_SmokeGreen_Grenade_shell";
				count=15;
			};
			class 3Rnd_SmokeBlue_Grenade_shell
			{
				magazine="3Rnd_SmokeBlue_Grenade_shell";
				count=15;
			};
		};
		class TransportItems
		{
			class TFAR_anprc152
			{
				name="TFAR_anprc152";
				count=15;
			};
			class 3AS_SmokeBlue
			{
				name="3AS_SmokeBlue";
				count=15;
			};
			class 3AS_SmokeYellow
			{
				name="3AS_SmokeYellow";
				count=15;
			};
			class 442_SmokeShellYellow_belt_5
			{
				name="442_SmokeShellYellow_belt_5";
				count=15;
			};
			class 442_thermal_det_mag
			{
				name="442_thermal_det_mag";
				count=15;
			};
			class 442_thermal_det_belt_5_mag
			{
				name="442_thermal_det_belt_5_mag";
				count=15;
			};
			class 442_thermal_det_belt_10_mag
			{
				name="442_thermal_det_belt_10_mag";
				count=15;
			};
			class Chemlight_blue
			{
				name="Chemlight_blue";
				count=15;
			};
			class Chemlight_green
			{
				name="Chemlight_green";
				count=15;
			};
			class ACE_Chemlight_HiBlue
			{
				name="ACE_Chemlight_HiBlue";
				count=15;
			};
			class ACE_Chemlight_HiGreen
			{
				name="ACE_Chemlight_HiGreen";
				count=15;
			};
			class ACE_Chemlight_HiRed
			{
				name="ACE_Chemlight_HiRed";
				count=15;
			};
			class ACE_Chemlight_HiWhite
			{
				name="ACE_Chemlight_HiWhite";
				count=15;
			};
			class ACE_Chemlight_HiYellow
			{
				name="ACE_Chemlight_HiYellow";
				count=15;
			};
			class ACE_Chemlight_IR
			{
				name="ACE_Chemlight_IR";
				count=15;
			};
			class ACE_Chemlight_Orange
			{
				name="ACE_Chemlight_Orange";
				count=15;
			};
			class Chemlight_red
			{
				name="Chemlight_red";
				count=15;
			};
			class ACE_Chemlight_UltraHiOrange
			{
				name="ACE_Chemlight_UltraHiOrange";
				count=15;
			};
			class ACE_Chemlight_White
			{
				name="ACE_Chemlight_White";
				count=15;
			};
			class Chemlight_yellow
			{
				name="Chemlight_yellow";
				count=15;
			};
			class ls_mag_classC_thermalDet
			{
				name="ls_mag_classC_thermalDet";
				count=15;
			};
			class Bacta_Bandage_38
			{
				name="Bacta_Bandage_38";
				count=250;
			};
			class ACE_elasticBandage
			{
				name="ACE_elasticBandage";
				count=250;
			};
			class ACE_bloodIV
			{
				name="ACE_bloodIV";
				count=250;
			};
			class ACE_CableTie
			{
				name="ACE_CableTie";
				count=250;
			};
			class ACE_epinephrine
			{
				name="ACE_epinephrine";
				count=250;
			};
			class kat_IO_FAST
			{
				name="kat_IO_FAST";
				count=250;
			};
			class Fentanyl_38th
			{
				name="Fentanyl_38th";
				count=250;
			};
			class Fentanyl_600MCG
			{
				name="Fentanyl_600MCG";
				count=250;
			};
			class Fentanyl_1600MCG
			{
				name="Fentanyl_1600MCG";
				count=250;
			};
			class ACE_tourniquet
			{
				name="ACE_tourniquet";
				count=250;
			};
			class ACE_splint
			{
				name="ACE_splint";
				count=250;
			};
			class kat_larynx
			{
				name="kat_larynx";
				count=250;
			};
			class kat_chestSeal
			{
				name="kat_larynx";
				count=250;
			};
			class _xx_SmokeShellPurple
			{
				name="SmokeShellPurple";
				count=25;
			};
		};
		class TransportBackpacks
		{
		};
	};
	class 38th_AmmoBox_Medical_F: 38th_SupplyBox_F
	{
		scope=2;
		scopeCurator=2;
		displayName="38th Resupply Box (Medical)";
		editorCategory="ac38_props";
		editorSubcategory="38th_resupply_boxes";
		class TransportMagazines
		{
		};
		class TransportWeapons
		{
		};
		class TransportItems
		{
			class Bacta_Bandage_38
			{
				name="Bacta_Bandage_38";
				count=250;
			};
			class ACE_elasticBandage
			{
				name="ACE_elasticBandage";
				count=250;
			};
			class ACE_bloodIV
			{
				name="ACE_bloodIV";
				count=250;
			};
			class ACE_CableTie
			{
				name="ACE_CableTie";
				count=250;
			};
			class ACE_epinephrine
			{
				name="ACE_epinephrine";
				count=250;
			};
			class kat_IO_FAST
			{
				name="kat_IO_FAST";
				count=250;
			};
			class Fentanyl_38th
			{
				name="Fentanyl_38th";
				count=250;
			};
			class Fentanyl_600MCG
			{
				name="Fentanyl_600MCG";
				count=250;
			};
			class Fentanyl_1600MCG
			{
				name="Fentanyl_1600MCG";
				count=250;
			};
			class ACE_tourniquet
			{
				name="ACE_tourniquet";
				count=250;
			};
			class ACE_splint
			{
				name="ACE_splint";
				count=250;
			};
			class kat_larynx
			{
				name="kat_larynx";
				count=250;
			};
			class kat_chestSeal
			{
				name="kat_larynx";
				count=250;
			};
		};
		class TransportBackpacks
		{
		};
	};
	class 38th_AmmoBox_Explosive_F: 38th_SupplyBox_F
	{
		scope=2;
		scopeCurator=2;
		displayName="38th Resupply Box (Explosive)";
		editorCategory="ac38_props";
		editorSubcategory="38th_resupply_boxes";
		class TransportMagazines
		{
		};
		class TransportWeapons
		{
		};
		class TransportItems
		{
			class _xx_SmokeShell
			{
				name="SmokeShell";
				count=15;
			};
			class _xx_SmokeShellOrange
			{
				name="SmokeShellOrange";
				count=15;
			};
			class _xx_SmokeShellGreen
			{
				name="SmokeShellGreen";
				count=15;
			};
			class _xx_SmokeShellBlue
			{
				name="SmokeShellBlue";
				count=15;
			};
			class _xx_SmokeShellPurple
			{
				name="SmokeShellPurple";
				count=15;
			};
			class SmokeShellRed
			{
				name="SmokeShellRed";
				count=15;
			};
			class SmokeShellYellow
			{
				name="SmokeShellYellow";
				count=15;
			};
			class 442_SmokeShellYellow_belt_5
			{
				name="442_SmokeShellYellow_belt_5";
				count=15;
			};
			class 442_thermal_det_mag
			{
				name="442_thermal_det_mag";
				count=15;
			};
			class 442_thermal_det_belt_5_mag
			{
				name="442_thermal_det_belt_5_mag";
				count=15;
			};
			class 442_thermal_det_belt_10_mag
			{
				name="442_thermal_det_belt_10_mag";
				count=15;
			};
			class ls_mag_classC_thermalDet
			{
				name="ls_mag_classC_thermalDet";
				count=15;
			};
			class DBA_HandFlare_Purple
			{
				name="DBA_HandFlare_Purple";
				count=15;
			};
			class _xx_C12_Remote_Mag
			{
				name="C12_Remote_Mag";
				count=15;
			};
			class _xx_DemoCharge_Remote_Mag
			{
				name="DemoCharge_Remote_Mag";
				count=15;
			};
			class _xx_APERSMineDispenser_Mag
			{
				name="APERSMineDispenser_Mag";
				count=15;
			};
			class _xx_TermMineC_Mag
			{
				name="TermMineC_Mag";
				count=15;
			};
			class _xx_TermMineB_Mag
			{
				name="TermMineB_Mag";
				count=15;
			};
			class OPTRE_M8_Flare_Blue
			{
				name="OPTRE_M8_Flare_Blue";
				count=15;
			};
			class OPTRE_M8_Flare_Green
			{
				name="OPTRE_M8_Flare_Green";
				count=15;
			};
			class OPTRE_M8_Flare
			{
				name="OPTRE_M8_Flare";
				count=15;
			};
			class DBA_ThermalBlock_Mag
			{
				name="DBA_ThermalBlock_Mag";
				count=15;
			};
			class DBA_ImploderBlock_Mag
			{
				name="DBA_ImploderBlock_Mag";
				count=15;
			};
			class OPTRE_M8_Flare_White
			{
				name="OPTRE_M8_Flare_White";
				count=15;
			};
			class OPTRE_M8_Flare_Yellow
			{
				name="OPTRE_M8_Flare_Yellow";
				count=15;
			};
		};
		class TransportBackpacks
		{
		};
	};
	class 38th_SupplyBox_60mm_F: ACE_Box_Misc
	{
		scope=2;
		scopeCurator=2;
		displayName="38th Resupply Box (60mm Mortar)";
		editorCategory="ac38_props";
		editorSubcategory="38th_resupply_boxes";
		transportMaxWeapons=99999999;
		transportMaxMagazines=99999999;
		transportMaxItems=99999999;
		maximumload=99999999;
		class TransportWeapons
		{
		};
		class TransportMagazines
		{
			class 38th_60mm_HE_csw_mag
			{
				magazine="38th_60mm_HE_csw_mag";
				count=15;
			};
			class 38th_60mm_SMK_csw_mag
			{
				magazine="38th_60mm_SMK_csw_mag";
				count=15;
			};
			class 38th_60mm_ILLUM_csw_mag
			{
				magazine="38th_60mm_ILLUM_csw_mag";
				count=15;
			};
			class 38th_60mm_WP_csw_mag
			{
				magazine="38th_60mm_WP_csw_mag";
				count=15;
			};
			class 38th_60mm_HE_Guided_csw_mag
			{
				magazine="38th_60mm_HE_Guided_csw_mag";
				count=15;
			};
		};
		class TransportItems{};
		class TransportBackpacks
		{
		};
	};
	class 38th_SupplyBox_120mm_F: ACE_Box_Misc
	{
		scope=2;
		scopeCurator=2;
		displayName="38th Resupply Box (120mm Mortar)";
		editorCategory="ac38_props";
		editorSubcategory="38th_resupply_boxes";
		transportMaxWeapons=99999999;
		transportMaxMagazines=99999999;
		transportMaxItems=99999999;
		maximumload=99999999;
		class TransportWeapons
		{
		};
		class TransportMagazines
		{
			class 38th_120mm_HE_csw_mag
			{
				magazine="38th_120mm_HE_csw_mag";
				count=15;
			};
			class 38th_120mm_SMK_csw_mag
			{
				magazine="38th_120mm_SMK_csw_mag";
				count=15;
			};
			class 38th_120mm_ILLUM_csw_mag
			{
				magazine="38th_120mm_ILLUM_csw_mag";
				count=15;
			};
			class 38th_120mm_WP_csw_mag
			{
				magazine="38th_120mm_WP_csw_mag";
				count=15;
			};
			class 38th_120mm_Airburst_csw_mag
			{
				magazine="38th_120mm_Airburst_csw_mag";
				count=15;
			};
			class 38th_120mm_HE_Guided_csw_mag
			{
				magazine="38th_120mm_HE_Guided_csw_mag";
				count=15;
			};
		};
		class TransportItems{};
		class TransportBackpacks
		{
		};
	};
};
