class CfgPatches
{
	class 38th_Armor
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 1.0;
		requiredAddons[] = {"A3_characters_f","A3_data_f","38th_Core"};
		skipWhenMissingDependencies =1;
		authors[] = {"38thS5Team"};
		version = 1.0;
		versionStr = "1.0.0.0";
		versionAr[] = {1,0,0,0};
	};
};
class XtdGearModels
{
	class cfgweapons
	{
		class 38th_Recruit_Armor
		{
			label = "38th Recruit";
			options[] = {"type"};
			class type
			{
				alwaysSelectable = 1;
				label = "Wear";
				values[] = {"clean","dirty","custom"};
				class clean
				{
					label = "Clean";
				};
				class dirty
				{
					label = "Dirty";
				};
				class custom
				{
					label = "Custom";
				};
			};
		};
		class 38th_Recruit_Helmets:38th_Recruit_Armor
		{
			label = "38th Recruit";
			options[] = {"type"};
		};
		class 38th_ARC_Armor:38th_Recruit_Armor
		{
			label = "38th ARC Armor";
			options[] = {"type","custom"};
			class custom
			{
				alwaysSelectable = 1;
				label = "Custom";
				values[] = {"no","senate"};
				class no
				{
					label = "No";
				};
				class senate
				{
					label = "Senate"; 
				};
			};
		};
		class 38th_ARC_Helmets:38th_Recruit_Armor
		{
			label = "38th ARC Helmets";
			options[] = {"visor","type","custom"};
			class visor
			{
				alwaysSelectable = 1;
				label = "Visor";
				values[] = {"red","base","custom"};
				class red
				{
					label = "Red";
				};
				class base
				{
					label = "Base";
				};
				class custom
				{
					label = "Custom";
				};
			};
			class custom
			{
				label = "Custom";
				values[] = {"boult","stowaway","senate"};
				alwaysSelectable = 1;
				class boult
				{
					label = "Boult"; 
				};
				class stowaway
				{
					label = "Stowaway"; 
				};
				class senate
				{
					label = "Senate"; 
				};
			};
		};
		class 38th_Phoenix_Armor:38th_Recruit_Armor
		{
			label = "38th Phoenix Armor";
			options[] = {"type","custom","squad"};
			class custom
			{
				alwaysSelectable = 1;
				label = "Custom";
				values[] = {"no","comm"};
				class no
				{
					label = "No";
				};
				class comm
				{
					label = "Comm";
				};
			};
			class squad
			{
				alwaysSelectable = 1;
				label = "Squad";
				values[] = {"Harpy","Centaur","Cadet","Command"};
				class Harpy
				{
					label = "Harpy";
				};
				class Centaur
				{
					label = "Centaur";
				};
				class Cadet
				{
					label = "Cadet";
				};
				class Command
				{
					label = "Command";
				};
			};
		};
		class 38th_Phoenix_Helmets:38th_ARC_Helmets
		{
			label = "38th Phoenix Helmets";
			options[] = {"visor","type","custom","squad"};
			class squad
			{
				alwaysSelectable = 1;
				label = "Squad";
				values[] = {"Harpy","Centaur","Cadet","Command"};
				class Harpy
				{
					label = "Harpy";
				};
				class Centaur
				{
					label = "Centaur";
				};
				class Cadet
				{
					label = "Cadet";
				};
				class Command
				{
					label = "Command";
				};
			};
			class custom
			{
				alwaysSelectable = 1;
				label = "Custom";
				values[] = {"raxmus","reiver","drip","comm","Killjoy","birdie"};
				class raxmus
				{
					label = "Raxmus";
				};
				class drip
				{
					label = "Drip";
				};
				class birdie
				{
					label = "Birdie";
				};
				class reiver
				{
					label = "Reiver";
				};
				class comm
				{
					label = "Comm";
				};
				class killjoy
				{
					label = "Killjoy";
				};
			};
		};
		class 38th_King_Armor:38th_Recruit_Armor
		{
			label = "38th King Armor";
			options[] = {"type","custom","squad"};
			class custom
			{
				label = "Custom";
				values[] = {"no"};
				class no
				{
					label = "No";
				};
			};
			class squad
			{
				label = "Squad";
				values[] = {"Base","Queen","Knight","Bishop","Command","Zeus"};
				class Base
				{
					label = "Base";
				};
				class Queen
				{
					label = "Queen";
				};
				class Knight
				{
					label = "Knight";
				};
				class Bishop
				{
					label = "Bishop";
				};
				class Command
				{
					label = "Command";
				};
				class Zeus
				{
					label = "Zeus";
				};
			};
		};
		class 38th_King_Helmets:38th_ARC_Helmets
		{
			label = "38th King Helmets";
			options[] = {"type","custom","squad","helmet"};
			class squad
			{
				label = "Squad";
				values[] = {"Base","Queen","Knight","Bishop","Command","Zeus"};
				alwaysSelectable = 1;
				class Base
				{
					label = "Base";
				};
				class Queen
				{
					label = "Queen";
				};
				class Knight
				{
					label = "Knight";
				};
				class Bishop
				{
					label = "Bishop";
				}; 
				class Command
				{
					label = "Command";
				};
				class Zeus
				{
					label = "Zeus";
				};
			};
			class helmet
			{
				alwaysSelectable = 1;
				label = "Role";
				values[] = {"eng","base"};
				class eng
				{
					label = "Engineer"; 
				};
				class base
				{
					label = "P2"; 
				};
			};
			class custom
			{
				alwaysSelectable = 1;
				label = "Custom";
				values[] = {"obelisk","fire","repeater","isky"};
				class obelisk
				{
					label = "Obelisk"; 
				};
				class fire
				{
					label = "Fire"; 
				};
				class repeater
				{
					label = "Repeater"; 
				};
				class isky
				{
					label = "icky"; 
				};
			};
		};
		class 38th_Rook_Armor:38th_Recruit_Armor
		{
			label = "38th Rook Armor";
			options[] = {"type","custom"};
			class custom
			{
				label = "Custom";
				values[] = {"no"};
				class no
				{
					label = "No";
				};
			};
		};
		class 38th_Rook_Helmets:38th_ARC_Helmets
		{
			label = "38th Rook Helmets";
			options[] = {"type","custom","squad"};
			class squad
			{
				label = "Team";
				alwaysSelectable = 1;
				values[] = {"Base","BARC"};
				class Base
				{
					label = "ARF";
				};
				class BARC
				{
					label = "BARC";
				};
			};
			class custom
			{
				label = "Custom";
				values[] = {"stranger"};
				alwaysSelectable = 1;
				class stranger
				{
					label = "Stranger";
				};
			};
		};
		class 38th_Lancer_Armor:38th_King_Armor
		{
			label = "38th Lancer Armor";
			options[] = {"type","custom","squad"};
			class squad
			{
				label = "Squad";
				values[] = {"Base","Demon","Command"};
				class Base
				{
					label = "Banshee";
				};
				class Demon
				{
					label = "Demon";
				};
				class Command
				{
					label = "Command";
				};
			};
		};
		class 38th_Lancer_Helmets:38th_Lancer_Armor
		{
			label = "38th Lancer Helmets";
			options[] = {"type","custom","squad"};
		};
	};
};
class CfgWeapons
{
	class UniformItem;
	class U_I_CombatUniform;
	class Uniform_Base;
	class HeadgearItem;
	class JLTS_CloneHelmetP2;
	class JLTS_CloneArmor;
	class JLTS_CloneHelmetBARC;
	class JLTS_CloneHelmetARC;
	class JLTS_CloneHelmetARC_illum;
	class JLTS_CloneVestARCCadet;
	class JLTS_CloneVestARC;
	class JLTS_CloneVestOfficer;
	class JLTS_CloneNVG;
	class JLTS_CloneVestHolster;
	class JLTS_CloneHelmetAB;
	class ItemCore;
	class InventoryItem_Base_F;
	class VestItem;
	class JLTS_CloneVestReconNCO_ARC_Fordo;
	class JLTS_CloneVestRecon;
	class JLTS_CloneVestReconOfficer_DC;
	class SWLB_clone_pilot_P2_helmet;
	class JLTS_CloneNVGMC;
	class ls_gar_engineer_helmet;
	class JLTS_CloneVestAirborne;
	class JLTS_CloneVestAirborneNCO;
	#include "helmets.hpp"
	#include "custom_helmets.hpp"
	class 38th_Jungle_Armor: JLTS_CloneArmor
	{
		displayName = "[38th] Jungle Armor";
		author="MrClock & 38thS5";
		scope=1;
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="38th_Jungle_Clean";
			containerClass="Supply150";
			mass=40;
		};
	};
	class 38th_TacoBell_Armor: JLTS_CloneArmor
	{
		displayName = "[38th] Taco Bell Armor";
		author="MrClock & 38thS5";
		scope=1;
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="38th_TacoBell_Dirty";
			containerClass="Supply150";
			mass=40;
		};
	};
	///Armor
	class 38th_ARC_Armor_Base: JLTS_CloneArmor
	{
		displayName = "[38th] ARC Trooper";
		author="MrClock & 38thS5";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="38th_ARC_Clean";
			containerClass="Supply150";
			mass=40;
		};
		class XtdGearInfo
		{
			model = "38th_ARC_Armor";
			type = "clean";
			custom = "no";
		};
	};
	class 38th_ARC_Armor_Dirty: JLTS_CloneArmor
	{
		displayName = "[38th] ARC Trooper(Dirty)";
		author="MrClock & 38thS5";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="38th_ARC_Dirty";
			containerClass="Supply150";
			mass=40;
		};
		class XtdGearInfo
		{
			model = "38th_ARC_Armor";
			type = "dirty";
			custom = "no";
		};
	};
	///
	class 38th_Senate_Armor: JLTS_CloneArmor
	{
		displayName = "[38th] Senate Armor";
		author="MrClock & 38thS5";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="38th_Senate_Base";
			containerClass="Supply150";
			mass=40;
		};
		class XtdGearInfo
		{
			model = "38th_ARC_Armor";
			type = "clean";
			custom = "senate";
		};
	};
	///Vest
	class 38th_ARC_Vest: JLTS_CloneVestARC
	{
		author="MrClock & 38thS5";
		displayName="[38th] ARC Vest";
		hiddenSelections[] = {"camo1"};
		hiddenSelectionsTextures[]={"38th\38th_Armor\data\arc\Vest_ARC_co.paa"};
		class ItemInfo: VestItem
		{
			uniformModel = "\MRC\JLTS\characters\CloneArmor\CloneVestARC.p3d";
			vestType="Rebreather";
			containerClass="Supply100";
			mass=80;
			hiddenSelections[] = {"camo1"};
			hiddenSelectionsTextures[]={"38th\38th_Armor\data\arc\Vest_ARC_co.paa"};
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName="HitChest";
					armor=16;
					PassThrough=0.2;
				};
				class Diaphragm
				{
					HitpointName="HitDiaphragm";
					armor=16;
					PassThrough=0.2;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=16;
					passThrough=0.2;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough=0.2;
				};
			};
		};
	};
	class 38th_Airborne_Vest: JLTS_CloneVestAirborne
	{
		displayName="[38th] Airborne Trooper Vest";
		model="\MRC\JLTS\characters\CloneArmor\CloneVestAirborne.p3d";
		picture="\MRC\JLTS\characters\CloneArmor\data\ui\CloneVestHeavy_ui_ca.paa";
		hiddenSelections[]=
		{
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"MRC\JLTS\characters\CloneArmor\data\Clone_vest_officer_co.paa",
			"38th\38th_Armor\data\airborne\vest\airborne_vest_base_co.paa"
		};
		class ItemInfo: VestItem
		{
			uniformModel="\MRC\JLTS\characters\CloneArmor\CloneVestAirborne.p3d";
			containerClass="Supply100";
			hiddenSelections[]=
			{
				"camo1",
				"camo2"
			};
			mass=80;
			class HitpointsProtectionInfo
			{
				class Legs
				{
					hitpointName="HitLegs";
					armor=6;
					passThrough=0.30000001;
				};
			};
		};
	};
	class 38th_Airborne_Vest_Medic: 38th_Airborne_Vest
	{
		displayName="[38th] Airborne Trooper Vest(Medic)";
		model="\MRC\JLTS\characters\CloneArmor\CloneVestAirborne.p3d";
		picture="\MRC\JLTS\characters\CloneArmor\data\ui\CloneVestHeavy_ui_ca.paa";
		hiddenSelections[]=
		{
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"MRC\JLTS\characters\CloneArmor\data\Clone_vest_officer_co.paa",
			"38th\38th_Armor\data\airborne\vest\airborne_vest_medic_co.paa"
		};
		class ItemInfo: VestItem
		{
			uniformModel="\MRC\JLTS\characters\CloneArmor\CloneVestAirborne.p3d";
			containerClass="Supply100";
			hiddenSelections[]=
			{
				"camo1",
				"camo2"
			};
			mass=80;
			class HitpointsProtectionInfo
			{
				class Legs
				{
					hitpointName="HitLegs";
					armor=6;
					passThrough=0.30000001;
				};
			};
		};
	};
	class 38th_Airborne_Vest_NCO: JLTS_CloneVestAirborneNCO
	{
		displayName="[38th] Airborne Trooper Vest(NCO)";
		model="\MRC\JLTS\characters\CloneArmor\CloneVestAirborneNCO.p3d";
		picture="\MRC\JLTS\characters\CloneArmor\data\ui\CloneVestHeavy_ui_ca.paa";
		hiddenSelections[]=
		{
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"MRC\JLTS\characters\CloneArmor\data\Clone_vest_officer_co.paa",
			"38th\38th_Armor\data\airborne\vest\airborne_vest_base_co.paa"
		};
		class ItemInfo: VestItem
		{
			uniformModel="\MRC\JLTS\characters\CloneArmor\CloneVestAirborneNCO.p3d";
			containerClass="Supply100";
			hiddenSelections[]=
			{
				"camo1",
				"camo2"
			};
			mass=80;
			class HitpointsProtectionInfo
			{
				class Legs
				{
					hitpointName="HitLegs";
					armor=6;
					passThrough=0.30000001;
				};
			};
		};
	};
	class 38th_Regent_Vest: JLTS_CloneVestARCCadet
	{
		author="MrClock & 38thS5";
		displayName="[38th] Regent's Vest";
		model="\MRC\JLTS\characters\CloneArmor\CloneVestARCCadet.p3d";
		class ItemInfo: VestItem
		{
			uniformModel="\MRC\JLTS\characters\CloneArmor\CloneVestARCCadet.p3d";
			vestType="Rebreather";
			containerClass="Supply100";
			hiddenSelections[]=
			{
				"camo1"
			};
			mass=80;
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName="HitChest";
					armor=16;
					PassThrough=0.30000001;
				};
				class Diaphragm
				{
					HitpointName="HitDiaphragm";
					armor=16;
					PassThrough=0.30000001;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=16;
					passThrough=0.30000001;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough=0.30000001;
				};
			};
		};
	};
	class 38th_commander_vest: JLTS_CloneVestOfficer
	{
		author="MrClock+38thS5";
		scope=2;
		displayName="[38th] Commander Vest";
		picture="\MRC\JLTS\characters\CloneArmor\data\ui\CloneVestPauldron_ui_ca.paa";
		model="\MRC\JLTS\characters\CloneArmor\CloneVestOfficer.p3d";
		class ItemInfo: VestItem
		{
			uniformModel="\MRC\JLTS\characters\CloneArmor\CloneVestOfficer.p3d";
			vestType="Rebreather";
			containerClass="Supply100";
			hiddenSelections[]=
			{
				"camo1"
			};
			mass=80;
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName="HitChest";
					armor=16;
					PassThrough=0.30000001;
				};
				class Diaphragm
				{
					HitpointName="HitDiaphragm";
					armor=16;
					PassThrough=0.30000001;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=16;
					passThrough=0.30000001;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough=0.30000001;
				};
			};
		};
	};
	class 38th_Senate_vest: JLTS_CloneVestOfficer
	{
		author="MrClock+38thS5";
		scope=2;
		displayName="[38th] Senate's Vest";
		picture="\MRC\JLTS\characters\CloneArmor\data\ui\CloneVestPauldron_ui_ca.paa";
		model="\MRC\JLTS\characters\CloneArmor\CloneVestOfficer.p3d";
		hiddenSelections[]=
		{
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"\38th\38th_Armor\data\custom\arc\Senate_Officer_co.paa"
		};
		class ItemInfo: VestItem
		{
			uniformModel="\MRC\JLTS\characters\CloneArmor\CloneVestOfficer.p3d";
			vestType="Rebreather";
			containerClass="Supply100";
			hiddenSelections[]=
			{
				"camo1"
			};
			mass=80;
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName="HitChest";
					armor=16;
					PassThrough=0.30000001;
				};
				class Diaphragm
				{
					HitpointName="HitDiaphragm";
					armor=16;
					PassThrough=0.30000001;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=16;
					passThrough=0.30000001;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough=0.30000001;
				};
			};
		};
	};
		class 38th_Phoenix_Officer_Vest: JLTS_CloneVestOfficer
	{
		author="MrClock+38thS5";
		scope=2;
		displayName="[38th] Phoenix Officer Vest";
		picture="\MRC\JLTS\characters\CloneArmor\data\ui\CloneVestPauldron_ui_ca.paa";
		model="\MRC\JLTS\characters\CloneArmor\CloneVestOfficer.p3d";
		hiddenSelections[]=
		{
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"\38th\38th_Armor\data\custom\airborne\Phoenix_Officer_Vest_CO.paa"
		};
		class ItemInfo: VestItem
		{
			uniformModel="\MRC\JLTS\characters\CloneArmor\CloneVestOfficer.p3d";
			vestType="Rebreather";
			containerClass="Supply100";
			hiddenSelections[]=
			{
				"camo1"
			};
			mass=80;
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName="HitChest";
					armor=16;
					PassThrough=0.30000001;
				};
				class Diaphragm
				{
					HitpointName="HitDiaphragm";
					armor=16;
					PassThrough=0.30000001;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=16;
					passThrough=0.30000001;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough=0.30000001;
				};
			};
		};
	};
		class 38th_Comm_Vest: JLTS_CloneVestOfficer
	{
		author="MrClock+38thS5";
		scope=2;
		displayName="[38th] Comm's Vest";
		picture="\MRC\JLTS\characters\CloneArmor\data\ui\CloneVestPauldron_ui_ca.paa";
		model="\MRC\JLTS\characters\CloneArmor\CloneVestOfficer.p3d";
		hiddenSelections[]=
		{
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"\38th\38th_Armor\data\custom\airborne\Comm_Vest_CO.paa"
		};
		class ItemInfo: VestItem
		{
			uniformModel="\MRC\JLTS\characters\CloneArmor\CloneVestOfficer.p3d";
			vestType="Rebreather";
			containerClass="Supply100";
			hiddenSelections[]=
			{
				"camo1"
			};
			mass=80;
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName="HitChest";
					armor=16;
					PassThrough=0.30000001;
				};
				class Diaphragm
				{
					HitpointName="HitDiaphragm";
					armor=16;
					PassThrough=0.30000001;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=16;
					passThrough=0.30000001;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough=0.30000001;
				};
			};
		};
	};
	/// NIGHT VISION
	class 38th_ARC_Chip: JLTS_CloneNVG
	{
		displayName="[38th] ARC";
		hiddenSelectionsTextures[]={"38th\38th_Armor\data\arc\Arc_Night_vision_co.paa"};
		thermalMode[]={0};
		visionMode[]=
		{
			"Normal",
			"NVG",
			"TI"
		};
	};
	class 38th_Regent_Visor: JLTS_CloneNVGMC
	{
		displayName="[38th] Regent's Visor";
		hiddenSelectionsTextures[]={"38th\38th_Armor\data\custom\command\Regent_Visor_commander_co.paa"};
		thermalMode[]={0};
		visionMode[]=
		{
			"Normal",
			"NVG",
			"TI"
		};
	};
	class 38th_Commander_Visor: JLTS_CloneNVGMC
	{
		displayName="[38th] Commander Visor";
		thermalMode[]={0};
		visionMode[]=
		{
			"Normal",
			"NVG",
			"TI"
		};
	};
	class 38th_Clone_Chip: JLTS_CloneNVG
	{
		displayName="[38th] Base Trooper";
		//hiddenSelectionsTextures[]={"38th\38th_Armor\data\arc\Arc_Night_vision_co.paa"};
		thermalMode[]={0};
		visionMode[]=
		{
			"Normal",
			"NVG"
		};
	};
	class 38th_Queen_Chip: JLTS_CloneNVG
	{
		displayName="[38th] Queen Trooper";
		hiddenSelectionsTextures[]={"38th\38th_Armor\data\king\queen\Night_vision_co.paa"};
		thermalMode[]={0};
		visionMode[]=
		{
			"Normal",
			"NVG"
		};
	};
///PHOENIX
	class 38th_Phoenix_Command_Armor_Clean: JLTS_CloneArmor
	{
		displayName = "[38th] Phoenix Command Trooper";
		author="MrClock & 38thS5";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="38th_Phoenix_Command_Clean";
			containerClass="Supply150";
			mass=40;
		};
		class XtdGearInfo
		{
			model = "38th_Phoenix_Armor";
			type = "clean";
			custom = "no";
			squad = "Command";
		};
	};
	class 38th_Phoenix_Command_Armor_Dirty: JLTS_CloneArmor
	{
		displayName = "[38th] Phoenix Command Trooper(Dirty)";
		author="MrClock & 38thS5";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="38th_Phoenix_Command_Dirty";
			containerClass="Supply150";
			mass=40;
		};
		class XtdGearInfo
		{
			model = "38th_Phoenix_Armor";
			type = "dirty";
			custom = "no";
			squad = "Command";
		};
	};
	class 38th_Phoenix_Harpy_Armor: JLTS_CloneArmor
	{
		displayName = "[38th] Phoenix Harpy Trooper";
		author="MrClock & 38thS5";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="38th_Phoenix_Harpy_Clean";
			containerClass="Supply150";
			mass=40;
		};
		class XtdGearInfo
		{
			model = "38th_Phoenix_Armor";
			type = "clean";
			custom = "no";
			squad = "Harpy";
		};
	};
	class 38th_Phoenix_Harpy_Armor_Dirty: JLTS_CloneArmor
	{
		displayName = "[38th] Phoenix Harpy Trooper(Dirty)";
		author="MrClock & 38thS5";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="38th_Phoenix_Harpy_Dirty";
			containerClass="Supply150";
			mass=40;
		};
		class XtdGearInfo
		{
			model = "38th_Phoenix_Armor";
			type = "dirty";
			custom = "no";
			squad = "Harpy";
		};
	};
	class 38th_Phoenix_Cadet_Armor: JLTS_CloneArmor
	{
		displayName = "[38th] Phoenix Cadet Trooper";
		author="MrClock & 38thS5";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="38th_Phoenix_Cadet_Clean";
			containerClass="Supply150";
			mass=40;
		};
		class XtdGearInfo
		{
			model = "38th_Phoenix_Armor";
			type = "clean";
			custom = "no";
			squad = "Cadet";
		};
	};
	class 38th_Phoenix_Cadet_Armor_Dirty: JLTS_CloneArmor
	{
		displayName = "[38th] Phoenix Cadet Trooper(Dirty)";
		author="MrClock & 38thS5";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="38th_Phoenix_Cadet_Dirty";
			containerClass="Supply150";
			mass=40;
		};
		class XtdGearInfo
		{
			model = "38th_Phoenix_Armor";
			type = "dirty";
			custom = "no";
			squad = "Cadet";
		};
	};
	class 38th_Phoenix_Centaur_Armor_Dirty: JLTS_CloneArmor
	{
		displayName = "[38th] Phoenix Centaur Trooper(Dirty)";
		author="MrClock & 38thS5";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="38th_Phoenix_Centaur_Dirty";
			containerClass="Supply150";
			mass=40;
		};
		class XtdGearInfo
		{
			model = "38th_Phoenix_Armor";
			type = "dirty";
			custom = "no";
			squad = "Centaur";
		};
	};
	class 38th_Phoenix_Centaur_Armor: JLTS_CloneArmor
	{
		displayName = "[38th] Phoenix Centaur Trooper";
		author="MrClock & 38thS5";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="38th_Phoenix_Centaur_Clean";
			containerClass="Supply150";
			mass=40;
		};
		class XtdGearInfo
		{
			model = "38th_Phoenix_Armor";
			type = "clean";
			custom = "no";
			squad = "Centaur";
		};
	};
	///King 
	class 38th_King_Armor: JLTS_CloneArmor
	{
		displayName = "[38th] King Base Trooper";
		author="MrClock & 38thS5";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="38th_King_Clean";
			containerClass="Supply150";
			mass=40;
		};
		class XtdGearInfo
		{
			model = "38th_King_Armor";
			type = "clean";
			custom = "no";
			squad = "Base";
		};
	};
	class 38th_King_Armor_Dirty: JLTS_CloneArmor
	{
		displayName = "[38th] King Base Trooper(Dirty)";
		author="MrClock & 38thS5";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="38th_King_Dirty";
			containerClass="Supply150";
			mass=40;
		};
		class XtdGearInfo
		{
			model = "38th_King_Armor";
			type = "dirty";
			custom = "no";
			squad = "Base";
		};
	};
////Queen
	class 38th_Queen_Armor: JLTS_CloneArmor
	{
		displayName = "[38th] Queen Base Trooper";
		author="MrClock & 38thS5";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="38th_Queen_Clean";
			containerClass="Supply150";
			mass=40;
		};
		class XtdGearInfo
		{
			model = "38th_King_Armor";
			type = "clean";
			custom = "no";
			squad = "Queen";
		};
	};
	class 38th_Queen_Armor_Dirty: JLTS_CloneArmor
	{
		displayName = "[38th] Queen Base Trooper(Dirty)";
		author="MrClock & 38thS5";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="38th_Queen_Dirty";
			containerClass="Supply150";
			mass=40;
		};
		class XtdGearInfo
		{
			model = "38th_King_Armor";
			type = "dirty";
			custom = "no";
			squad = "Queen";
		};
	};
	class 38th_King_Engineer_Helmet: ls_gar_engineer_helmet
	{
		displayName = "[38th] Engineer Helmet";
		author="MrClock & 38thS5";
		hiddenSelections[]={"camo1","illum","visor"};
		hiddenSelectionsTextures[] = {"38th\38th_Armor\data\king\base\Engineer_Helmet_Base_co.paa","ls\core\addons\characters_clone_legacy\helmets\engineer\data\light_co.paa","ls\core\addons\characters_clone_legacy\helmets\engineer\data\visor_co.paa"};
		ls_lighting_hasLight=1;
		ls_lighting_offset[]={-0.057500001,0.086999997,0.2};
		ls_lighting_attachedBone="head";
		ls_lighting_itemType="headgear";
		class XtdGearInfo
		{
			model = "38th_King_Helmets";
			type = "clean";
			custom = "no";
			helmet = "eng";
			squad = "Base";
		};
	};
	class 38th_King_Engineer_Helmet_Dirty: ls_gar_engineer_helmet
	{
		displayName = "[38th] Engineer Helmet";
		author="MrClock & 38thS5";
		hiddenSelections[]={"camo1","illum","visor"};
		hiddenSelectionsTextures[] = {"38th\38th_Armor\data\king\base\Engineer_Helmet_Base_Dirty_co.paa","ls\core\addons\characters_clone_legacy\helmets\engineer\data\light_co.paa","ls\core\addons\characters_clone_legacy\helmets\engineer\data\visor_co.paa"};
		ls_lighting_hasLight=1;
		ls_lighting_offset[]={-0.057500001,0.086999997,0.2};
		ls_lighting_attachedBone="head";
		ls_lighting_itemType="headgear";
		class XtdGearInfo
		{
			model = "38th_King_Helmets";
			type = "dirty";
			custom = "no";
			helmet = "eng";
			squad = "Base";
		};
	};
	//knight
	class 38th_Knight_Armor: JLTS_CloneArmor
	{
		displayName = "[38th] Knight Base Trooper";
		author="MrClock & 38thS5";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="38th_Knight_Clean";
			containerClass="Supply150";
			mass=40;
		};
		class XtdGearInfo
		{
			model = "38th_King_Armor";
			type = "clean";
			custom = "no";
			squad = "Knight";
		};
	};
	class 38th_Knight_Armor_Dirty: JLTS_CloneArmor
	{
		displayName = "[38th] Knight Base Trooper(Dirty)";
		author="MrClock & 38thS5";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="38th_Knight_Dirty";
			containerClass="Supply150";
			mass=40;
		};
		class XtdGearInfo
		{
			model = "38th_King_Armor";
			type = "dirty";
			custom = "no";
			squad = "Knight";
		};
	};

	class 38th_Bishop_Armor: JLTS_CloneArmor
	{
		displayName = "[38th] Bishop Trooper";
		author="MrClock & 38thS5";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="38th_Bishop_Clean";
			containerClass="Supply150";
			mass=40;
		};
		class XtdGearInfo
		{
			model = "38th_King_Armor";
			type = "clean";
			custom = "no";
			squad = "Bishop";
		};
	};
	class 38th_Bishop_Armor_Dirty: JLTS_CloneArmor
	{
		displayName = "[38th] Bishop Trooper(Dirty)";
		author="MrClock & 38thS5";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="38th_Bishop_Dirty";
			containerClass="Supply150";
			mass=40;
		};
		class XtdGearInfo
		{
			model = "38th_King_Armor";
			type = "dirty";
			custom = "no";
			squad = "Bishop";
		};
	};
	///ROOK
	class 38th_Rook_Armor: JLTS_CloneArmor
	{
		displayName = "[38th] Rook Trooper";
		author="MrClock & 38thS5";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="38th_Rook_Clean";
			containerClass="Supply150";
			mass=40;
		};
		class XtdGearInfo
		{
			model = "38th_Rook_Armor";
			type = "clean";
			custom = "no";
		};
	};
	class 38th_Rook_Armor_Dirty: JLTS_CloneArmor
	{
		displayName = "[38th] Rook Trooper(Dirty)";
		author="MrClock & 38thS5";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="38th_Rook_Dirty";
			containerClass="Supply150";
			mass=40;
		};
		class XtdGearInfo
		{
			model = "38th_Rook_Armor";
			type = "dirty";
			custom = "no";
		};
	};
	///King COmmand
	class 38th_King_Command_Armor: JLTS_CloneArmor
	{
		displayName = "[38th] King Command Trooper";
		author="MrClock & 38thS5";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="38th_King_Command_Clean";
			containerClass="Supply150";
			mass=40;
		};
		class XtdGearInfo
		{
			model = "38th_King_Armor";
			type = "clean";
			custom = "no";
			squad = "Command";
		};
	};
	class 38th_King_Command_Dirty: JLTS_CloneArmor
	{
		displayName = "[38th] King Command Trooper(Dirty)";
		author="MrClock & 38thS5";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="38th_King_Command_Dirty";
			containerClass="Supply150";
			mass=40;
		};
		class XtdGearInfo
		{
			model = "38th_King_Armor";
			type = "dirty";
			custom = "no";
			squad = "Command";
		};
	};
/////Lancer
	class 38th_Banshee_Armor: JLTS_CloneArmor
	{
		displayName = "[38th] Banshee Pilot Trooper";
		author="MrClock & 38thS5";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="38th_Banshee_Clean";
			containerClass="Supply150";
			mass=40;
		};
		class XtdGearInfo
		{
			model = "38th_Lancer_Armor";
			type = "clean";
			custom = "no";
			squad = "Base";
		};
	};
	class 38th_Banshee_Dirty: JLTS_CloneArmor
	{
		displayName = "[38th] Banshee Pilot Trooper(Dirty)";
		author="MrClock & 38thS5";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="38th_Banshee_Dirty";
			containerClass="Supply150";
			mass=40;
		};
		class XtdGearInfo
		{
			model = "38th_Lancer_Armor";
			type = "dirty";
			custom = "no";
			squad = "Base";
		};
	};
	class 38th_Lancer_Command_Armor: JLTS_CloneArmor
	{
		displayName = "[38th] Lancer Command Pilot Trooper";
		author="MrClock & 38thS5";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="38th_Lancer_Command_Clean";
			containerClass="Supply150";
			mass=40;
		};
		class XtdGearInfo
		{
			model = "38th_Lancer_Armor";
			type = "clean";
			custom = "no";
			squad = "Command";
		};
	};
	class 38th_Lancer_Command_Dirty: JLTS_CloneArmor
	{
		displayName = "[38th] Lancer Command Pilot Trooper(Dirty)";
		author="MrClock & 38thS5";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="38th_Lancer_Command_Dirty";
			containerClass="Supply150";
			mass=40;
		};
		class XtdGearInfo
		{
			model = "38th_Lancer_Armor";
			type = "dirty";
			custom = "no";
			squad = "Command";
		};
	};
	class 38th_Demon_Armor: JLTS_CloneArmor
	{
		displayName = "[38th] Demon Pilot Trooper";
		author="MrClock & 38thS5";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="38th_Demon_Clean";
			containerClass="Supply150";
			mass=40;
		};
		class XtdGearInfo
		{
			model = "38th_Lancer_Armor";
			type = "clean";
			custom = "no";
			squad = "Demon";
		};
	};
	class 38th_Demon_Dirty: JLTS_CloneArmor
	{
		displayName = "[38th] Demon Pilot Trooper(Dirty)";
		author="MrClock & 38thS5";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="38th_Demon_Dirty";
			containerClass="Supply150";
			mass=40;
		};
		class XtdGearInfo
		{
			model = "38th_Lancer_Armor";
			type = "dirty";
			custom = "no";
			squad = "Demon";
		};
	};
	class 38th_Zeus_Armor: JLTS_CloneArmor
	{
		displayName = "[38th] Zeus Armor";
		author="MrClock & 38thS5";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="38th_Zeus_Clean";
			containerClass="Supply150";
			mass=40;
		};
		class XtdGearInfo
		{
			model = "38th_King_Armor";
			type = "clean";
			custom = "no";
			squad = "Zeus";
		};
	};
	class 38th_Zeus_Dirty: JLTS_CloneArmor
	{
		displayName = "[38th] Zeus Armor(Dirty)";
		author="MrClock & 38thS5";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="38th_Zeus_Dirty";
			containerClass="Supply150";
			mass=40;
		};
		class XtdGearInfo
		{
			model = "38th_King_Armor";
			type = "dirty";
			custom = "no";
			squad = "Zeus";
		};
	};
	//Recruit Armor Classes
	class 38th_Recruit_Armor_Base: JLTS_CloneArmor
	{
		displayName = "[38th] Recruit Trooper";
		author="MrClock & 38thS5";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="38th_Recruit_Base";
			containerClass="Supply150";
			mass=40;
		};
		class XtdGearInfo
		{
			model = "38th_Recruit_Armor";
			type = "clean";
		};
	};
	class 38th_Recruit_Armor_Dirty: JLTS_CloneArmor
	{
		displayName = "[38th] Recruit Trooper(Dirty)";
		author="MrClock & 38thS5";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="38th_Recruit_Dirty";
			containerClass="Supply150";
			mass=40;
		};
		class XtdGearInfo
		{
			model = "38th_Recruit_Armor";
			type = "dirty";
		};
	};
///KING VEST
	class 38th_Base_Holster: JLTS_CloneVestHolster
	{
		author="MrClock & 38thS5";
		displayName="[38th] Holster";
		model="\MRC\JLTS\characters\CloneArmor2\CloneVestHolster.p3d";
		class ItemInfo: VestItem
		{
			uniformModel="\MRC\JLTS\characters\CloneArmor2\CloneVestHolster.p3d";
			mass=20;
			containerClass="Supply100";
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName="HitChest";
					armor=16;
					PassThrough=0.30000001;
				};
				class Diaphragm
				{
					HitpointName="HitDiaphragm";
					armor=16;
					PassThrough=0.30000001;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=16;
					passThrough=0.30000001;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough=0.30000001;
				};
			};
		};
	};
	class 38th_Rook_NCO_Vest: JLTS_CloneVestReconNCO_ARC_Fordo
	{
		displayName = "[38th] Rook NCO Vest";
		hiddenSelections[]=
		{
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"\MRC\JLTS\characters\CloneLegions\data\Clone_ARCFordo_vest_co.paa"
		};
		class ItemInfo: VestItem
		{
			uniformModel="\MRC\JLTS\characters\CloneArmor\CloneVestReconNCO.p3d";
			containerClass="Supply100";
			mass=40;
			hiddenSelections[]=
			{
				"camo2"
			};
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName="HitChest";
					armor=16;
					PassThrough=0.30000001;
				};
				class Diaphragm
				{
					HitpointName="HitDiaphragm";
					armor=16;
					PassThrough=0.30000001;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=16;
					passThrough=0.30000001;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough=0.30000001;
				};
			};
		};
	};
	class 38th_Rook_Vest: JLTS_CloneVestRecon
	{
		displayName = "[38th] Rook Trooper Vest";
		hiddenSelections[]=
		{
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"MRC\JLTS\characters\CloneArmor\data\Clone_vest_heavy_co.paa"
		};
		class ItemInfo: VestItem
		{
			uniformModel="\MRC\JLTS\characters\CloneArmor\CloneVestRecon.p3d";
			containerClass="Supply100";
			mass=40;
			hiddenSelections[]=
			{
				"camo2"
			};
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName="HitChest";
					armor=16;
					PassThrough=0.30000001;
				};
				class Diaphragm
				{
					HitpointName="HitDiaphragm";
					armor=16;
					PassThrough=0.30000001;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=16;
					passThrough=0.30000001;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough=0.30000001;
				};
			};
		};
	};
	class 38th_Officer_Vest: JLTS_CloneVestReconOfficer_DC
	{
		displayName = "[38th] Officer Vest";
		class ItemInfo: VestItem
		{
			uniformModel="\MRC\JLTS\characters\CloneArmor\CloneVestReconOfficer.p3d";
			containerClass="Supply100";
			mass=40;
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName="HitChest";
					armor=16;
					PassThrough=0.30000001;
				};
				class Diaphragm
				{
					HitpointName="HitDiaphragm";
					armor=16;
					PassThrough=0.30000001;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=16;
					passThrough=0.30000001;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough=0.30000001;
				};
			};
		};
	};
	class 38th_Regent_Armor: JLTS_CloneArmor
	{
		displayName = "[38th] Regent's Uniform";
		author="MrClock & 38thS5";
		
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="38th_Regent_Clean";
			containerClass="Supply150";
			mass=40;
		};
	};
	class 38th_Comm_Armor: JLTS_CloneArmor
	{
		displayName = "[38th] Comm's Uniform";
		author="MrClock & 38thS5";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="38th_Comm_Clean";
			containerClass="Supply150";
			mass=40;
		};
		class XtdGearInfo
		{
			model = "38th_Phoenix_Armor";
			type = "custom";
			custom = "comm";
			squad = "Command";
		};
	};
};
class CfgVehicles
{
	class UniformItem;
	class Uniform_Base;
	class B_Soldier_f;
	class JLTS_Clone_P2_DC15A: B_Soldier_f{};
	#include "backpacks.hpp"
	class 38th_Recruit_Base: B_Soldier_f
	{
		author="MrClock & 38thS5";
		scope=2;
		displayName="[38th] Recruit Trooper";
		identityTypes[]=
		{
			"LanguageENG_F",
			"Head_NATO"
		};
		uniformClass="38th_Recruit_Armor_Base";
		backpack="";
		hiddenSelections[]={"camo1","camo2","insignia"};
		hiddenSelectionsTextures[] = {"38th\38th_Armor\data\recruit\Armor_Upper_clean_co.paa","38th\38th_Armor\data\recruit\Armor_Lower_clean_co.paa"};
		hiddenSelectionsMaterials[]={"38th\38th_Armor\data\shared\Clone_armor1_clean.rvmat","38th\38th_Armor\data\shared\Clone_armor2_clean.rvmat"};
		model="\MRC\JLTS\characters\CloneArmor\CloneArmor.p3d";
		linkedItems[]=
		{
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};
		respawnLinkedItems[]=
		{
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};
		weapons[]=
		{
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"Throw",
			"Put"
		};
		magazines[]={};
		respawnMagazines[]={};
		items[]=
		{
			"FirstAidKit"
		};
		respawnItems[]=
		{
			"FirstAidKit"
		};
		armor=2;
		armorStructural=6;
		explosionShielding=0.60000002;
		minTotalDamageThreshold=0.001;
		impactDamageMultiplier=0.5;
	};
	class 38th_Marshal_Base: B_Soldier_f
	{
		author="MrClock & 38thS5";
		scope=2;
		displayName="[38th] Recruit Trooper";
		identityTypes[]=
		{
			"LanguageENG_F",
			"Head_NATO"
		};
		uniformClass="38th_Recruit_Armor_Base";
		backpack="";
		model = "\MRC\JLTS\characters\CloneArmor\CloneArmorMC.p3d";	
		hiddenSelections[] = {"camo1","camo2","camo3"};
		hiddenSelectionsTextures[] = {"\MRC\JLTS\characters\CloneArmor\data\Clone_armor1_mc_co.paa","\MRC\JLTS\characters\CloneArmor\data\Clone_armor2_co.paa","\MRC\JLTS\characters\CloneArmor\data\Clone_rank_co.paa"};
		linkedItems[]=
		{
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};
		respawnLinkedItems[]=
		{
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};
		weapons[]=
		{
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"Throw",
			"Put"
		};
		magazines[]={};
		respawnMagazines[]={};
		items[]=
		{
			"FirstAidKit"
		};
		respawnItems[]=
		{
			"FirstAidKit"
		};
		armor=2;
		armorStructural=6;
		explosionShielding=0.60000002;
		minTotalDamageThreshold=0.001;
		impactDamageMultiplier=0.5;
	};
	class 38th_Recruit_Dirty: 38th_Recruit_Base
	{
		displayName = "[38th] Recruit Trooper(Dirty)";
		author="MrClock & 38thS5";
		hiddenSelections[]={"camo1","camo2","insignia"};
		hiddenSelectionsTextures[] = {"38th\38th_Armor\data\recruit\Armor_Upper_2_co.paa","38th\38th_Armor\data\recruit\Armor_Lower_2_co.paa"};
		hiddenSelectionsMaterials[]={"38th\38th_Armor\data\shared\Clone_armor1.rvmat","38th\38th_Armor\data\shared\Clone_armor2.rvmat"};
		uniformClass="38th_Recruit_Armor_Dirty";
	};
	///ARC
	class 38th_ARC_Dirty: 38th_Recruit_Base
	{
		displayName = "[38th] ARC Trooper(Dirty)";
		author="MrClock & 38thS5";
		hiddenSelections[]={"camo1","camo2","insignia"};
		hiddenSelectionsTextures[] = {"38th\38th_Armor\data\arc\Armor_Upper_2_co.paa","38th\38th_Armor\data\arc\Armor_Lower_2_co.paa"};
		hiddenSelectionsMaterials[]={"38th\38th_Armor\data\shared\Clone_armor1.rvmat","38th\38th_Armor\data\shared\Clone_armor2.rvmat"};
		uniformClass="38th_ARC_Armor_Dirty";
	};
	class 38th_ARC_Clean: 38th_Recruit_Base
	{
		displayName = "[38th] ARC Trooper(Dirty)";
		author="MrClock & 38thS5";
		hiddenSelections[]={"camo1","camo2","insignia"};
		hiddenSelectionsTextures[] = {"38th\38th_Armor\data\arc\Armor_Upper_co.paa","38th\38th_Armor\data\arc\Armor_Lower_co.paa"};
		uniformClass="38th_ARC_Armor_Base";
	};
	class 38th_Senate_Base: 38th_Recruit_Base
	{
		displayName = "[38th] ARC Trooper(Dirty)";
		author="MrClock & 38thS5";
		hiddenSelections[]={"camo1","camo2","insignia"};
		hiddenSelectionsTextures[] = {"38th\38th_Armor\data\custom\arc\Senate_Upper_co.paa","38th\38th_Armor\data\custom\arc\Senate_Lower_co.paa"};
		uniformClass="38th_Senate_Armor";
	};
///Phoenix
	class 38th_Phoenix_Command_Clean: 38th_Recruit_Base
	{
		displayName = "[38th] Phoenix Command";
		author="MrClock & 38thS5";
		hiddenSelections[]={"camo1","camo2","insignia"};
		hiddenSelectionsTextures[] = {"38th\38th_Armor\data\airborne\command\Phoenix_CMDArmor_Upper_CO.paa","38th\38th_Armor\data\airborne\command\Phoenix_CMDArmor_Lower_CO.paa"};
		uniformClass="38th_Phoenix_Command_Armor_Clean";
	};
	class 38th_Phoenix_Command_Dirty: 38th_Recruit_Base
	{
		displayName = "[38th] Phoenix Command(Dirty)";
		author="MrClock & 38thS5";
		hiddenSelections[]={"camo1","camo2","insignia"};
		hiddenSelectionsTextures[] = {"38th\38th_Armor\data\airborne\command\Phoenix_CMDArmorWorn_Upper_CO.paa","38th\38th_Armor\data\airborne\command\Phoenix_CMDArmorWorn_Lower_CO.paa"};
		hiddenSelectionsMaterials[]={"38th\38th_Armor\data\shared\Clone_armor1.rvmat","38th\38th_Armor\data\shared\Clone_armor2.rvmat"};
		uniformClass="38th_Phoenix_Command_Armor_Dirty";
	};
////Harpy
	class 38th_Phoenix_Harpy_Dirty: 38th_Recruit_Base
	{
		displayName = "[38th] Phoenix Harpy(Dirty)";
		author="MrClock & 38thS5";
		hiddenSelections[]={"camo1","camo2","insignia"};
		hiddenSelectionsTextures[] = {"38th\38th_Armor\data\airborne\harpy\HarpyArmorWorn_Upper_CO.paa","38th\38th_Armor\data\airborne\harpy\HarpyArmorWorn_Lower_CO.paa"};
		hiddenSelectionsMaterials[]={"38th\38th_Armor\data\shared\Clone_armor1.rvmat","38th\38th_Armor\data\shared\Clone_armor2.rvmat"};
		uniformClass="38th_Phoenix_Harpy_Armor_Dirty";
	};
	class 38th_Phoenix_Harpy_Clean: 38th_Recruit_Base
	{
		displayName = "[38th] Phoenix Harpy";
		author="MrClock & 38thS5";
		hiddenSelections[]={"camo1","camo2","insignia"};
		hiddenSelectionsTextures[] = {"38th\38th_Armor\data\airborne\harpy\HarpyArmor_Upper_CO.paa","38th\38th_Armor\data\airborne\harpy\HarpyArmor_Lower_CO.paa"};
		uniformClass="38th_Phoenix_Harpy_Armor";
	};
	///
	class 38th_TacoBell_Dirty: 38th_Recruit_Base
	{
		displayName = "[38th] Taco Bell Armour";
		author="MrClock & 38thS5";
		hiddenSelections[]={"camo1","camo2","insignia"};
		hiddenSelectionsTextures[] = {"38th\38th_Armor\data\campaign\Armor_Upper_TB_co.paa","38th\38th_Armor\data\campaign\Armor_Lower_TB_co.paa"};
		hiddenSelectionsMaterials[]={"38th\38th_Armor\data\shared\Clone_armor1.rvmat","38th\38th_Armor\data\shared\Clone_armor2.rvmat"};
		uniformClass="38th_TacoBell_Armor";
	};
	///Cadet
	class 38th_Phoenix_Cadet_Dirty: 38th_Recruit_Base
	{
		displayName = "[38th] Phoenix Cadet(Dirty)";
		author="MrClock & 38thS5";
		hiddenSelections[]={"camo1","camo2","insignia"};
		hiddenSelectionsTextures[] = {"38th\38th_Armor\data\airborne\cadet\PhoenixTrooper_ArmorWorn_Upper_CO.paa","38th\38th_Armor\data\airborne\cadet\PhoenixTrooper_ArmorWorn_Lower_CO.paa"};
		hiddenSelectionsMaterials[]={"38th\38th_Armor\data\shared\Clone_armor1.rvmat","38th\38th_Armor\data\shared\Clone_armor2.rvmat"};
		uniformClass="38th_Phoenix_Cadet_Armor_Dirty";
	};
	class 38th_Phoenix_Cadet_Clean: 38th_Recruit_Base
	{
		displayName = "[38th] Phoenix Cadet";
		author="MrClock & 38thS5";
		hiddenSelections[]={"camo1","camo2","insignia"};
		hiddenSelectionsTextures[] = {"38th\38th_Armor\data\airborne\cadet\PhoenixTrooper_Armor_Upper_CO.paa","38th\38th_Armor\data\airborne\cadet\PhoenixTrooper_Armor_Lower_CO.paa"};
		uniformClass="38th_Phoenix_Cadet_Armor";
	};
	////Centaur
	class 38th_Phoenix_Centaur_Dirty: 38th_Recruit_Base
	{
		displayName = "[38th] Phoenix Centaur(Dirty)";
		author="MrClock & 38thS5";
		hiddenSelections[]={"camo1","camo2","insignia"};
		hiddenSelectionsTextures[] = {"38th\38th_Armor\data\airborne\centaur\CentaurArmorWorn_Upper_CO.paa","38th\38th_Armor\data\airborne\centaur\CentaurArmorWorn_Lower_CO.paa"};
		hiddenSelectionsMaterials[]={"38th\38th_Armor\data\shared\Clone_armor1.rvmat","38th\38th_Armor\data\shared\Clone_armor2.rvmat"};
		uniformClass="38th_Phoenix_Centaur_Armor_Dirty";
	};
	class 38th_Phoenix_Centaur_Clean: 38th_Recruit_Base
	{
		displayName = "[38th] Phoenix Centaur";
		author="MrClock & 38thS5";
		hiddenSelections[]={"camo1","camo2","insignia"};
		hiddenSelectionsTextures[] = {"38th\38th_Armor\data\airborne\centaur\CentaurArmor_Upper_CO.paa","38th\38th_Armor\data\airborne\centaur\CentaurArmor_Lower_CO.paa"};
		uniformClass="38th_Phoenix_Centaur_Armor";
	};
	/// KING
	class 38th_King_Dirty: 38th_Recruit_Base
	{
		displayName = "[38th] King (Dirty)";
		author="MrClock & 38thS5";
		hiddenSelections[]={"camo1","camo2","insignia"};
		hiddenSelectionsTextures[] = {"38th\38th_Armor\data\king\base\Armor_Upper_2_co.paa","38th\38th_Armor\data\king\base\Armor_Lower_2_co.paa"};
		hiddenSelectionsMaterials[]={"38th\38th_Armor\data\shared\Clone_armor1.rvmat","38th\38th_Armor\data\shared\Clone_armor2.rvmat"};
		uniformClass="38th_King_Armor_Dirty";
	};
	class 38th_King_Clean: 38th_Recruit_Base
	{
		displayName = "[38th] King";
		author="MrClock & 38thS5";
		hiddenSelections[]={"camo1","camo2","insignia"};
		hiddenSelectionsTextures[] = {"38th\38th_Armor\data\king\base\Armor_Upper_co.paa","38th\38th_Armor\data\king\base\Armor_Lower_co.paa"};
		uniformClass="38th_King_Armor";
	};
	///BISHOP
	class 38th_Bishop_Dirty: 38th_Recruit_Base
	{
		displayName = "[38th] Bishop (Dirty)";
		author="MrClock & 38thS5";
		hiddenSelections[]={"camo1","camo2","insignia"};
		hiddenSelectionsTextures[] = {"38th\38th_Armor\data\king\Bishop\Armor_Upper_dirty_co.paa","38th\38th_Armor\data\king\Bishop\Armor_Lower_dirty_co.paa"};
		hiddenSelectionsMaterials[]={"38th\38th_Armor\data\shared\Clone_armor1.rvmat","38th\38th_Armor\data\shared\Clone_armor2.rvmat"};
		uniformClass="38th_Bishop_Armor_Dirty";
	};
	class 38th_Bishop_Clean: 38th_Recruit_Base
	{
		displayName = "[38th] Bishop";
		author="MrClock & 38thS5";
		hiddenSelections[]={"camo1","camo2","insignia"};
		hiddenSelectionsTextures[] = {"38th\38th_Armor\data\king\Bishop\Armor_Upper_co.paa","38th\38th_Armor\data\king\Bishop\Armor_Lower_co.paa"};
		uniformClass="38th_Bishop_Armor";
	};
	///Knight
	class 38th_Knight_Dirty: 38th_Recruit_Base
	{
		displayName = "[38th] Knight (Dirty)";
		author="MrClock & 38thS5";
		hiddenSelections[]={"camo1","camo2","insignia"};
		hiddenSelectionsTextures[] = {"38th\38th_Armor\data\king\knight\Armor_Upper_Knight_Dirty_co.paa","38th\38th_Armor\data\king\knight\Armor_Lower_Knight_Dirty_co.paa"};
		hiddenSelectionsMaterials[]={"38th\38th_Armor\data\shared\Clone_armor1.rvmat","38th\38th_Armor\data\shared\Clone_armor2.rvmat"};
		uniformClass="38th_Knight_Armor_Dirty";
	};
	class 38th_Knight_Clean: 38th_Recruit_Base
	{
		displayName = "[38th] Knight";
		author="MrClock & 38thS5";
		hiddenSelections[]={"camo1","camo2","insignia"};
		hiddenSelectionsTextures[] = {"38th\38th_Armor\data\king\knight\Armor_Upper_Knight_Clean_co.paa","38th\38th_Armor\data\king\knight\Armor_Lower_Knight_Clean_co.paa"};
		uniformClass="38th_Knight_Armor";
	};
	///Queen
	class 38th_Queen_Dirty: 38th_Recruit_Base
	{
		displayName = "[38th] Queen (Dirty)";
		author="MrClock & 38thS5";
		hiddenSelections[]={"camo1","camo2","insignia"};
		hiddenSelectionsTextures[] = {"38th\38th_Armor\data\king\queen\Armor_Upper_co.paa","38th\38th_Armor\data\king\queen\Armor_Lower_co.paa"};
		hiddenSelectionsMaterials[]={"38th\38th_Armor\data\shared\Clone_armor1.rvmat","38th\38th_Armor\data\shared\Clone_armor2.rvmat"};
		uniformClass="38th_Queen_Armor_Dirty";
	};
	class 38th_Queen_Clean: 38th_Recruit_Base
	{
		displayName = "[38th] Queen";
		author="MrClock & 38thS5";
		hiddenSelections[]={"camo1","camo2","insignia"};
		hiddenSelectionsTextures[] = {"38th\38th_Armor\data\king\queen\Armor_Upper_co.paa","38th\38th_Armor\data\king\queen\Armor_Lower_co.paa"};
		uniformClass="38th_Queen_Armor";
	};
	//// ROOK
	class 38th_Rook_Dirty: 38th_Recruit_Base
	{
		displayName = "[38th] Rook (Dirty)";
		author="MrClock & 38thS5";
		hiddenSelections[]={"camo1","camo2","insignia"};
		hiddenSelectionsTextures[] = {"38th\38th_Armor\data\rook\Armor_Upper_2_co.paa","38th\38th_Armor\data\rook\Armor_Lower_2_co.paa"};
		hiddenSelectionsMaterials[]={"38th\38th_Armor\data\shared\Clone_armor1.rvmat","38th\38th_Armor\data\shared\Clone_armor2.rvmat"};
		uniformClass="38th_Rook_Armor_Dirty";
	};
	class 38th_Rook_Clean: 38th_Recruit_Base
	{
		displayName = "[38th] Rook";
		author="MrClock & 38thS5";
		hiddenSelections[]={"camo1","camo2","insignia"};
		hiddenSelectionsTextures[] = {"38th\38th_Armor\data\rook\Armor_Upper_co.paa","38th\38th_Armor\data\rook\Armor_Lower_co.paa"};
		uniformClass="38th_Rook_Armor";
	};
	///KING COMMAND
	class 38th_King_Command_Dirty: 38th_Recruit_Base
	{
		displayName = "[38th] King Command(Dirty)";
		author="MrClock & 38thS5";
		hiddenSelections[]={"camo1","camo2","insignia"};
		hiddenSelectionsTextures[] = {"38th\38th_Armor\data\king\command\KCommand_Upper_Worn_co.paa","38th\38th_Armor\data\king\command\KCommand_Lower_Worn_co.paa"};
		hiddenSelectionsMaterials[]={"38th\38th_Armor\data\shared\Clone_armor1.rvmat","38th\38th_Armor\data\shared\Clone_armor2.rvmat"};
		uniformClass="38th_King_Command_Dirty";
	};
	class 38th_King_Command_Clean: 38th_Recruit_Base
	{
		displayName = "[38th] King Command";
		author="MrClock & 38thS5";
		hiddenSelections[]={"camo1","camo2","insignia"};
		hiddenSelectionsTextures[] = {"38th\38th_Armor\data\king\command\KCommand_Upper_co.paa","38th\38th_Armor\data\king\command\KCommand_Lower_co.paa"};
		uniformClass="38th_King_Command_Armor";
	};
	class 38th_Zeus_Dirty: 38th_Recruit_Base
	{
		displayName = "[38th] Zeus(Dirty)";
		author="MrClock & 38thS5";
		hiddenSelections[]={"camo1","camo2","insignia"};
		hiddenSelectionsTextures[] = {"38th\38th_Armor\data\zeus\Zeus_Upper_co.paa","38th\38th_Armor\data\zeus\Zeus_Lower_co.paa"};
		hiddenSelectionsMaterials[]={"38th\38th_Armor\data\shared\Clone_armor1.rvmat","38th\38th_Armor\data\shared\Clone_armor2.rvmat"};
		uniformClass="38th_Zeus_Dirty";
	};
	class 38th_Zeus_Clean: 38th_Recruit_Base
	{
		displayName = "[38th] Zeus";
		author="MrClock & 38thS5";
		hiddenSelections[]={"camo1","camo2","insignia"};
		hiddenSelectionsTextures[] = {"38th\38th_Armor\data\zeus\Zeus_Upper_co.paa","38th\38th_Armor\data\zeus\Zeus_Lower_co.paa"};
		uniformClass="38th_Zeus_Armor";
	};
	/////Lancer
	class 38th_Banshee_Dirty: 38th_Recruit_Base
	{
		displayName = "[38th] BBanshee Pilot Trooper (Dirty)";
		author="MrClock & 38thS5";
		hiddenSelections[]={"camo1","camo2","insignia"};
		hiddenSelectionsTextures[] = {"38th\38th_Armor\data\lancer\banshee\Armor_Upper_co.paa","38th\38th_Armor\data\lancer\banshee\Armor_Lower_co.paa"};
		hiddenSelectionsMaterials[]={"38th\38th_Armor\data\shared\Clone_armor1.rvmat","38th\38th_Armor\data\shared\Clone_armor2.rvmat"};
		uniformClass="38th_Banshee_Dirty";
	};
	class 38th_Banshee_Clean: 38th_Recruit_Base
	{
		displayName = "[38th] Banshee Pilot Trooper";
		author="MrClock & 38thS5";
		hiddenSelections[]={"camo1","camo2","insignia"};
		hiddenSelectionsTextures[] = {"38th\38th_Armor\data\lancer\banshee\Armor_Upper_co.paa","38th\38th_Armor\data\lancer\banshee\Armor_Lower_co.paa"};
		uniformClass="38th_Banshee_Armor";
	};
	class 38th_Lancer_Command_Dirty: 38th_Recruit_Base
	{
		displayName = "[38th] Lancer Command Pilot Trooper (Dirty)";
		author="MrClock & 38thS5";
		hiddenSelections[]={"camo1","camo2","insignia"};
		hiddenSelectionsTextures[] = {"38th\38th_Armor\data\lancer\command\LancerCMDArmorDirty_Upper_CO.paa","38th\38th_Armor\data\lancer\command\LancerCMDArmorDirty_Lower_CO.paa"};
		hiddenSelectionsMaterials[]={"38th\38th_Armor\data\shared\Clone_armor1.rvmat","38th\38th_Armor\data\shared\Clone_armor2.rvmat"};
		uniformClass="38th_Lancer_Command_Dirty";
	};
	class 38th_Lancer_Command_Clean: 38th_Recruit_Base
	{
		displayName = "[38th] Lancer Command Trooper";
		author="MrClock & 38thS5";
		hiddenSelections[]={"camo1","camo2","insignia"};
		hiddenSelectionsTextures[] = {"38th\38th_Armor\data\lancer\command\LancerCMDArmor_Upper_CO.paa","38th\38th_Armor\data\lancer\command\LancerCMDArmor_Lower_CO.paa"};
		uniformClass="38th_Lancer_Command_Armor";
	};
	class 38th_Demon_Dirty: 38th_Recruit_Base
	{
		displayName = "[38th] Lancer Command Pilot Trooper (Dirty)";
		author="MrClock & 38thS5";
		hiddenSelections[]={"camo1","camo2","insignia"};
		hiddenSelectionsTextures[] = {"38th\38th_Armor\data\lancer\demon\Demon_Upper_co.paa","38th\38th_Armor\data\lancer\demon\Demon_Lower_co.paa"};
		hiddenSelectionsMaterials[]={"38th\38th_Armor\data\shared\Clone_armor1.rvmat","38th\38th_Armor\data\shared\Clone_armor2.rvmat"};
		uniformClass="38th_Demon_Dirty";
	};
	class 38th_Demon_Clean: 38th_Recruit_Base
	{
		displayName = "[38th] Demon Trooper";
		author="MrClock & 38thS5";
		hiddenSelections[]={"camo1","camo2","insignia"};
		hiddenSelectionsTextures[] = {"38th\38th_Armor\data\lancer\demon\Demon_Upper_co.paa","38th\38th_Armor\data\lancer\demon\Demon_Lower_co.paa"};
		uniformClass="38th_Demon_Armor";
	};
	class 38th_Comm_Clean: 38th_Recruit_Base
	{
		displayName = "[38th] Comm's Uniform";
		author="MrClock & 38thS5";
		hiddenSelections[]={"camo1","camo2","insignia"};
		hiddenSelectionsTextures[] = {"38th\38th_Armor\data\custom\command\Comm_Armor_Upper_CO.paa","38th\38th_Armor\data\custom\command\Comm_Armor_Lower_CO.paa"};
		uniformClass="38th_Comm_Armor";
	};
	class 38th_Regent_Clean: 38th_Marshal_Base
	{
		displayName = "[38th] Regent's Uniform";
		author="MrClock & 38thS5";
		hiddenSelectionsTextures[] = {"38th\38th_Armor\data\custom\command\Regent_Upper_Dirty_co.paa","38th\38th_Armor\data\custom\command\Regent_Lower_Clean_co.paa","38th\38th_Armor\data\custom\command\Regent_Rank_co.paa"};
		uniformClass="38th_Regent_Armor";
	};
};