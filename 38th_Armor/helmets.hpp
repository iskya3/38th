	class 38th_Recruit_Helmet: JLTS_CloneHelmetP2
	{
		displayName = "[38th] Recruit Trooper";
		author="MrClock & 38thS5";
		hiddenSelectionsTextures[] = {"38th\38th_Armor\data\recruit\HelmetP2_clean_co.paa"};
		hiddenSelectionsMaterials[]={"38th\38th_Armor\data\shared\Clone_helmet_P2.rvmat"};
		class XtdGearInfo
		{
			model = "38th_Recruit_Helmets";
			type = "clean";
		};
	};
	class 38th_Recruit_Helmet_dirty: JLTS_CloneHelmetP2
	{
		displayName = "[38th] Recruit Trooper(Dirty)";
		author="MrClock & 38thS5";
		hiddenSelectionsTextures[] = {"38th\38th_Armor\data\recruit\HelmetP2_2_co.paa"};
		hiddenSelectionsMaterials[]={"38th\38th_Armor\data\shared\Clone_helmet_P2.rvmat"};
		class XtdGearInfo
		{
			model = "38th_Recruit_Helmets";
			type = "dirty";
		};
	};
	///ARC
	class 38th_ARC_Helmet_Black: JLTS_CloneHelmetARC
	{
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		displayName = "[38th] ARC Trooper(Black)";
		author="MrClock & 38thS5";
		subItems[]=
		{
			"G_B_Diving"
		};
		hiddenSelectionsTextures[] = {"38th\38th_Armor\data\arc\Helmet_ARC_Black_visor_co.paa"};
		hiddenSelectionsMaterials[]={"38th\38th_Armor\data\shared\Clone_helmet_ARC.rvmat"};
		optreHUDStyle="ODST_1";
		optreVarietys[]=
		{
			"_broken"
		};
		class XtdGearInfo
		{
			model = "38th_ARC_Helmets";
			type = "clean";
			visor = "base";
			custom = "no";
		};
	};
	class 38th_ARC_Helmet_Red: JLTS_CloneHelmetARC
	{
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		displayName = "[38th] ARC Trooper(Red)";
		author="MrClock & 38thS5";
		subItems[]=
		{
			"G_B_Diving"
		};
		hiddenSelectionsTextures[] = {"38th\38th_Armor\data\arc\Helmet_ARC_Red_visor_co.paa"};
		hiddenSelectionsMaterials[]={"38th\38th_Armor\data\shared\Clone_helmet_ARC.rvmat"};
		optreHUDStyle="ODST_1";
		optreVarietys[]=
		{
			"_broken"
		};
		class XtdGearInfo
		{
			model = "38th_ARC_Helmets";
			visor = "red";
			type = "clean";
			custom = "no";
		};
	};
	///dirty
	class 38th_ARC_Helmet_Black_Worn: JLTS_CloneHelmetARC
	{
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		displayName = "[38th] ARC Trooper Dirty(Black)";
		author="MrClock & 38thS5";
		subItems[]=
		{
			"G_B_Diving"
		};
		hiddenSelectionsTextures[] = {"38th\38th_Armor\data\arc\Helmet_ARC_Black_visor_worn_co.paa"};
		hiddenSelectionsMaterials[]={"38th\38th_Armor\data\shared\Clone_helmet_ARC.rvmat"};
		optreHUDStyle="ODST_1";
		optreVarietys[]=
		{
			"_broken"
		};
		class XtdGearInfo
		{
			model = "38th_ARC_Helmets";
			type = "dirty";
			visor = "base";
			custom = "no";
		};
	};
	class 38th_ARC_Helmet_Red_worn: JLTS_CloneHelmetARC
	{
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		displayName = "[38th] ARC Trooper Dirty (Red)";
		author="MrClock & 38thS5";
		subItems[]=
		{
			"G_B_Diving"
		};
		hiddenSelectionsTextures[] = {"38th\38th_Armor\data\arc\Helmet_ARC_Red_visor_worn_co.paa"};
		hiddenSelectionsMaterials[]={"38th\38th_Armor\data\shared\Clone_helmet_ARC.rvmat"};
		optreHUDStyle="ODST_1";
		optreVarietys[]=
		{
			"_broken"
		};
		class XtdGearInfo
		{
			model = "38th_ARC_Helmets";
			visor = "red";
			type = "dirty";
			custom = "no";
		};
	};
	///QUEEN
	class 38th_Queen_Helmet: JLTS_CloneHelmetP2
	{
		displayName = "[38th] Queen Trooper";
		author="MrClock & 38thS5";
		hiddenSelectionsTextures[] = {"38th\38th_Armor\data\king\queen\HelmetP2_co.paa"};
		hiddenSelectionsMaterials[]={"38th\38th_Armor\data\shared\Clone_helmet_P2.rvmat"};
		class XtdGearInfo
		{
			model = "38th_King_Helmets";
			type = "clean";
			custom = "no";
			helmet = "base";
			squad = "Queen";
		};
	};
	class 38th_Queen_Helmet_dirty: JLTS_CloneHelmetP2
	{
		displayName = "[38th] Queen Trooper(Dirty)";
		author="MrClock & 38thS5";
		hiddenSelectionsTextures[] = {"38th\38th_Armor\data\king\queen\HelmetP2_co.paa"};
		hiddenSelectionsMaterials[]={"38th\38th_Armor\data\shared\Clone_helmet_P2.rvmat"};
		class XtdGearInfo
		{
			model = "38th_King_Helmets";
			type = "dirty";
			custom = "no";
			helmet = "base";
			squad = "Queen";
		};
	};
	/// Knight
	class 38th_Knight_Helmet: JLTS_CloneHelmetP2
	{
		displayName = "[38th] Knight Trooper";
		author="MrClock & 38thS5";
		hiddenSelectionsTextures[] = {"38th\38th_Armor\data\king\knight\Helmet_Knight_Clean_co.paa"};
		hiddenSelectionsMaterials[]={"38th\38th_Armor\data\shared\Clone_helmet_P2.rvmat"};
		class XtdGearInfo
		{
			model = "38th_King_Helmets";
			type = "clean";
			custom = "no";
			squad = "Knight";
			helmet = "base";
		};
	};
	class 38th_Knight_Helmet_dirty: JLTS_CloneHelmetP2
	{
		displayName = "[38th] Knight Trooper(Dirty)";
		author="MrClock & 38thS5";
		hiddenSelectionsTextures[] = {"38th\38th_Armor\data\king\knight\Helmet_Knight_Dirty_co.paa"};
		hiddenSelectionsMaterials[]={"38th\38th_Armor\data\shared\Clone_helmet_P2.rvmat"};
		class XtdGearInfo
		{
			model = "38th_King_Helmets";
			type = "dirty";
			custom = "no";
			squad = "Knight";
			helmet = "base";
		};
	};
	///King
	class 38th_King_Helmet: JLTS_CloneHelmetP2
	{
		displayName = "[38th] King Trooper";
		author="MrClock & 38thS5";
		hiddenSelectionsTextures[] = {"38th\38th_Armor\data\king\base\HelmetP2_co.paa"};
		hiddenSelectionsMaterials[]={"38th\38th_Armor\data\shared\Clone_helmet_P2.rvmat"};
		class XtdGearInfo
		{
			model = "38th_King_Helmets";
			type = "clean";
			custom = "no";
			squad = "Base";
			helmet = "base";
		};
	};
	class 38th_King_Helmet_dirty: JLTS_CloneHelmetP2
	{
		displayName = "[38th] King Trooper(Dirty)";
		author="MrClock & 38thS5";
		hiddenSelectionsTextures[] = {"38th\38th_Armor\data\king\base\HelmetP2_2_co.paa"};
		hiddenSelectionsMaterials[]={"38th\38th_Armor\data\shared\Clone_helmet_P2.rvmat"};
		class XtdGearInfo
		{
			model = "38th_King_Helmets";
			type = "dirty";
			custom = "no";
			squad = "Base";
			helmet = "base";
		};
	};
	class 38th_King_Command_Helmet: JLTS_CloneHelmetP2
	{
		displayName = "[38th] King Command Trooper";
		author="MrClock & 38thS5";
		hiddenSelectionsTextures[] = {"38th\38th_Armor\data\king\command\KCommand_Helmet_co.paa"};
		hiddenSelectionsMaterials[]={"38th\38th_Armor\data\shared\Clone_helmet_P2.rvmat"};
		class XtdGearInfo
		{
			model = "38th_King_Helmets";
			type = "clean";
			custom = "no";
			squad = "Command";
			helmet = "base";
		};
	};
	class 38th_King_Command_Helmet_dirty: JLTS_CloneHelmetP2
	{
		displayName = "[38th] King Command Trooper(Dirty)";
		author="MrClock & 38thS5";
		hiddenSelectionsTextures[] = {"38th\38th_Armor\data\king\command\KCommand_Helmet_Worn_co.paa"};
		hiddenSelectionsMaterials[]={"38th\38th_Armor\data\shared\Clone_helmet_P2.rvmat"};
		class XtdGearInfo
		{
			model = "38th_King_Helmets";
			type = "dirty";
			custom = "no";
			squad = "Command";
			helmet = "base";
		};
	};
	/// Bishop
	class 38th_Bishop_Helmet: JLTS_CloneHelmetP2
	{
		displayName = "[38th] Bishop Trooper";
		author="MrClock & 38thS5";
		hiddenSelectionsTextures[] = {"38th\38th_Armor\data\king\bishop\HelmetP2_co.paa"};
		hiddenSelectionsMaterials[]={"38th\38th_Armor\data\shared\Clone_helmet_P2.rvmat"};
		class XtdGearInfo
		{
			model = "38th_King_Helmets";
			type = "clean";
			custom = "no";
			squad = "Bishop";
			helmet = "base";
		};
	};
	class 38th_Bishop_Helmet_dirty: JLTS_CloneHelmetP2
	{
		displayName = "[38th] Bishop Trooper(Dirty)";
		author="MrClock & 38thS5";
		hiddenSelectionsTextures[] = {"38th\38th_Armor\data\king\bishop\HelmetP2_dirty_co.paa"};
		hiddenSelectionsMaterials[]={"38th\38th_Armor\data\shared\Clone_helmet_P2.rvmat"};
		class XtdGearInfo
		{
			model = "38th_King_Helmets";
			type = "dirty";
			custom = "no";
			squad = "Bishop";
			helmet = "base";
		};
	};
	///ROOK
	class 38th_Rook_Helmet: ItemCore
	{
		scope=2;
		author="38thS5";
		weaponPoolAvailable=1;
		displayName="[38th] ARF Trooper";
		picture="";
		ace_hearing_protection=0.94999999;
		ace_hearing_lowerVolume=0.5;
		model="38th\38th_Armor\ARF.p3d";
		hiddenSelections[]=
		{
			"helmet"
		};
		hiddenSelectionsTextures[]=
		{
			"38th\38th_armor\data\rook\arf_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=30;
			uniformmodel="38th\38th_Armor\ARF.p3d";
			modelSides[]={3,1};
			armor=30;
			passThrough=0.555;
			hiddenSelections[]=
			{
				"helmet"
			};
			hiddenSelectionsTextures[]=
			{
				"38th\38th_armor\data\rook\arf_co.paa"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=15;
					passThrough=0.755;
				};
				class Face
				{
					hitpointName="HitFace";
					armor=15;
					passThrough=0.855;
				};
				class Neck
				{
					hitpointName="HitNeck";
					armor=15;
					passThrough=0.855;
				};
			};
		};
		class XtdGearInfo
		{
			model = "38th_Rook_Helmets";
			type = "clean";
			custom = "no";
			squad="Base";
		};
	};
	class 38th_Rook_Helmet_dirty: 38th_Rook_Helmet
	{
		displayName = "[38th] ARF Trooper(Dirty)";
		author="MrClock & 38thS5";
		hiddenSelections[]={"helmet"};
		hiddenSelectionsTextures[] = {"38th\38th_armor\data\rook\arf_dirty_co.paa"};
		class XtdGearInfo
		{
			model = "38th_Rook_Helmets";
			type = "dirty";
			custom = "no";
			squad="Base";
		};
	};
	class 38th_BARC_Helmet: JLTS_CloneHelmetBARC
	{
		displayName = "[38th] BARC Trooper";
		author="MrClock & 38thS5";
		hiddenSelectionsTextures[] = {"38th\38th_armor\data\rook\bark\HelmetBARC_co.paa"};
		hiddenSelectionsMaterials[]={"38th\38th_Armor\data\shared\Clone_helmet_BARC.rvmat"};
		class XtdGearInfo
		{
			model = "38th_Rook_Helmets";
			type = "clean";
			custom = "no";
			squad="BARC";
		};
	};
	class 38th_BARC_Helmet_dirty: JLTS_CloneHelmetBARC
	{
		displayName = "[38th] BARC Trooper(Dirty)";
		author="MrClock & 38thS5";
		hiddenSelectionsTextures[] = {"38th\38th_armor\data\rook\bark\HelmetBARC_dirty_co.paa"};
		hiddenSelectionsMaterials[]={"38th\38th_Armor\data\shared\Clone_helmet_BARC.rvmat"};
		class XtdGearInfo
		{
			model = "38th_Rook_Helmets";
			type = "dirty";
			custom = "no";
			squad="BARC";
		};
	};
	///Lancer 
	class 38th_Demon_clean_Helmet: SWLB_clone_pilot_P2_helmet
	{
		displayName = "[38th] Demon Pilot Trooper";
		author="MrClock & 38thS5";
		hiddenSelectionsTextures[] = {"38th\38th_Armor\data\lancer\demon\demon_clean_co.paa"};
		ace_hearing_protection=0.94999999;
		ace_hearing_lowerVolume=0.5;
		class XtdGearInfo
		{
			model = "38th_Lancer_Helmets";
			type = "clean";
			custom = "no";
			squad = "Demon";
		};
	};
	class 38th_Demon_dirty_Helmet: SWLB_clone_pilot_P2_helmet
	{
		displayName = "[38th] Demon Pilot Trooper(Dirty)";
		author="MrClock & 38thS5";
		hiddenSelectionsTextures[] = {"38th\38th_Armor\data\lancer\demon\demon_dirty_co.paa"};
		ace_hearing_protection=0.94999999;
		ace_hearing_lowerVolume=0.5;
		class XtdGearInfo
		{
			model = "38th_Lancer_Helmets";
			type = "dirty";
			custom = "no";
			squad = "Demon";
		};
	};
	//B
	class 38th_Banshee_clean_Helmet: SWLB_clone_pilot_P2_helmet
	{
		displayName = "[38th] Banshee Pilot Trooper";
		author="MrClock & 38thS5";
		hiddenSelectionsTextures[] = {"38th\38th_Armor\data\lancer\banshee\banshee_clean_co.paa"};
		ace_hearing_protection=0.94999999;
		ace_hearing_lowerVolume=0.5;
		class XtdGearInfo
		{
			model = "38th_Lancer_Helmets";
			type = "clean";
			custom = "no";
			squad = "Base";
		};
	};
	class 38th_Banshee_dirty_Helmet: SWLB_clone_pilot_P2_helmet
	{
		displayName = "[38th] Banshee Pilot Trooper(Dirty)";
		author="MrClock & 38thS5";
		hiddenSelectionsTextures[] = {"38th\38th_Armor\data\lancer\banshee\banshee_dirty_co.paa"};
		ace_hearing_protection=0.94999999;
		ace_hearing_lowerVolume=0.5;
		class XtdGearInfo
		{
			model = "38th_Lancer_Helmets";
			type = "dirty";
			custom = "no";
			squad = "Base";
		};
	};
	//C
	class 38th_Lancer_Command_clean_Helmet: SWLB_clone_pilot_P2_helmet
	{
		displayName = "[38th] Lancer Command Pilot Trooper";
		author="MrClock & 38thS5";
		hiddenSelectionsTextures[] = {"38th\38th_Armor\data\lancer\command\command_clean_co.paa"};
		ace_hearing_protection=0.94999999;
		ace_hearing_lowerVolume=0.5;
		class XtdGearInfo
		{
			model = "38th_Lancer_Helmets";
			type = "clean";
			custom = "no";
			squad = "Command";
		};
	};
	class 38th_Lancer_Command_dirty_Helmet: SWLB_clone_pilot_P2_helmet
	{
		displayName = "[38th] Lancer Command Pilot Trooper(Dirty)";
		author="MrClock & 38thS5";
		hiddenSelectionsTextures[] = {"38th\38th_Armor\data\lancer\command\command_dirty_co.paa"};
		ace_hearing_protection=0.94999999;
		ace_hearing_lowerVolume=0.5;
		class XtdGearInfo
		{
			model = "38th_Lancer_Helmets";
			type = "dirty";
			custom = "no";
			squad = "Command";
		};
	};
	///Zeus
	class 38th_Zeus_Helmet: JLTS_CloneHelmetP2
	{
		displayName = "[38th] Zeus Armor";
		author="MrClock & 38thS5";
		hiddenSelectionsTextures[] = {"38th\38th_Armor\data\zeus\Zeus_Helmet_P2_co.paa"};
		hiddenSelectionsMaterials[]={"38th\38th_Armor\data\shared\Clone_helmet_P2.rvmat"};
		class XtdGearInfo
		{
			model = "38th_King_Helmets";
			type = "clean";
			custom = "no";
			squad = "Zeus";
			helmet = "base";
		};
	};
	///Phoenix
	class 38th_Phoenix_Command_Helmet_Clean: JLTS_CloneHelmetAB
	{
		displayName = "[38th] Phoenix Trooper";
		author="MrClock & 38thS5";
		hiddenSelectionsTextures[] = {"38th\38th_Armor\data\airborne\command\Phoenix_CMDHelmetHelmet_CO.paa"};
		hiddenSelectionsMaterials[]={"38th\38th_Armor\data\shared\Clone_helmet_AB.rvmat"};
		class XtdGearInfo
		{
			model = "38th_Phoenix_Helmets";
			type = "clean";
			custom = "no";
			squad = "Command";
		};
	};
	class 38th_Phoenix_Command_Helmet_Dirty: JLTS_CloneHelmetAB
	{
		displayName = "[38th] Phoenix Trooper(Dirty)";
		author="MrClock & 38thS5";
		hiddenSelectionsTextures[] = {"38th\38th_Armor\data\airborne\command\Phoenix_CMDHelmetWorn_CO.paa"};
		hiddenSelectionsMaterials[]={"38th\38th_Armor\data\shared\Clone_helmet_AB.rvmat"};
		class XtdGearInfo
		{
			model = "38th_Phoenix_Helmets";
			type = "dirty";
			custom = "no";
			squad = "Command";
		};
	};
////HARPY
	class 38th_Phoenix_Harpy_Helmet_Clean: JLTS_CloneHelmetAB
	{
		displayName = "[38th] Phoenix Harpy Trooper";
		author="MrClock & 38thS5";
		hiddenSelectionsTextures[] = {"38th\38th_Armor\data\airborne\harpy\HarpyHelmet_CO.paa"};
		hiddenSelectionsMaterials[]={"38th\38th_Armor\data\shared\Clone_helmet_AB.rvmat"};
		class XtdGearInfo
		{
			model = "38th_Phoenix_Helmets";
			type = "clean";
			custom = "no";
			squad = "Harpy";
		};
	};
	class 38th_Phoenix_Harpy_Helmet_Dirty: JLTS_CloneHelmetAB
	{
		displayName = "[38th] Phoenix Harpy Trooper(Dirty)";
		author="MrClock & 38thS5";
		hiddenSelectionsTextures[] = {"38th\38th_Armor\data\airborne\harpy\HarpyHelmetWorn_CO.paa"};
		hiddenSelectionsMaterials[]={"38th\38th_Armor\data\shared\Clone_helmet_AB.rvmat"};
		class XtdGearInfo
		{
			model = "38th_Phoenix_Helmets";
			type = "dirty";
			custom = "no";
			squad = "Harpy";
		};
	};
	///Cadet
	class 38th_Phoenix_Cadet_Helmet_Clean: JLTS_CloneHelmetAB
	{
		displayName = "[38th] Phoenix Cadet Trooper";
		author="MrClock & 38thS5";
		hiddenSelectionsTextures[] = {"38th\38th_Armor\data\airborne\cadet\PhoenixTrooperHelmet_CO.paa"};
		hiddenSelectionsMaterials[]={"38th\38th_Armor\data\shared\Clone_helmet_AB.rvmat"};
		class XtdGearInfo
		{
			model = "38th_Phoenix_Helmets";
			type = "clean";
			custom = "no";
			squad = "Cadet";
		};
	};
	class 38th_Phoenix_Cadet_Helmet_Dirty: JLTS_CloneHelmetAB
	{
		displayName = "[38th] Phoenix Cadet Trooper(Dirty)";
		author="MrClock & 38thS5";
		hiddenSelectionsTextures[] = {"38th\38th_Armor\data\airborne\cadet\PhoenixTrooperHelmetWorn_CO.paa"};
		hiddenSelectionsMaterials[]={"38th\38th_Armor\data\shared\Clone_helmet_AB.rvmat"};
		class XtdGearInfo
		{
			model = "38th_Phoenix_Helmets";
			type = "dirty";
			custom = "no";
			squad = "Cadet";
		};
	};
	///Centaur
	class 38th_Phoenix_Centaur_Helmet_Clean: JLTS_CloneHelmetAB
	{
		displayName = "[38th] Phoenix Centaur Trooper";
		author="MrClock & 38thS5";
		hiddenSelectionsTextures[] = {"38th\38th_Armor\data\airborne\centaur\CentaurHelmet_CO.paa"};
		class XtdGearInfo
		{
			model = "38th_Phoenix_Helmets";
			type = "clean";
			custom = "no";
			squad = "Centaur";
		};
	};
	class 38th_Phoenix_Centaur_Helmet_Dirty: JLTS_CloneHelmetAB
	{
		displayName = "[38th] Phoenix Centaur Trooper";
		author="MrClock & 38thS5";
		hiddenSelectionsTextures[] = {"38th\38th_Armor\data\airborne\centaur\CentaurHelmetWorn_CO.paa"};
		hiddenSelectionsMaterials[]={"38th\38th_Armor\data\shared\Clone_helmet_AB.rvmat"};
		class XtdGearInfo
		{
			model = "38th_Phoenix_Helmets";
			type = "dirty";
			custom = "no";
			squad = "Centaur";
		};
	};
	///campaign related shit
	class 38th_Jungle_Helmet: JLTS_CloneHelmetP2
	{
		displayName = "[38th] Jungle Helmet(P2)";
		scope=1;
		author="MrClock & 38thS5";
		hiddenSelectionsTextures[] = {"38th\38th_Armor\data\campaign\Jungle_HelmetP2_CO.paa"};
		hiddenSelectionsMaterials[]={"38th\38th_Armor\data\shared\Clone_helmet_P2.rvmat"}; 
	};
	class 38th_Jungle_Helmet_AB: JLTS_CloneHelmetAB
	{
		displayName = "[38th] Jungle Helmet(AB)";
		scope=1;
		author="MrClock & 38thS5";
		hiddenSelectionsTextures[] = {"38th\38th_Armor\data\campaign\Jungle_AirborneHelmet_co.paa"};
		hiddenSelectionsMaterials[]={"38th\38th_Armor\data\shared\Clone_helmet_AB.rvmat"};
	};
	class 38th_TacoBell_Helmet: JLTS_CloneHelmetP2
	{
		displayName = "[38th] Taco Bell Helmet(P2)";
		scope=2;
		author="MrClock & 38thS5";
		hiddenSelectionsTextures[] = {"38th\38th_Armor\data\campaign\HelmetP2_TB_co.paa"};
		hiddenSelectionsMaterials[]={"38th\38th_Armor\data\shared\Clone_helmet_P2.rvmat"}; 
	};
	