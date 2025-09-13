class CfgPatches
{
	class 38th_Medical
	{
		author = "isky";
		requiredAddons[] = 
		{			
			"kat_main",
			"ace_medical",
			"ace_medical_ai",
			"ace_medical_blood",
			"ace_medical_damage",
			"ace_medical_engine",
			"ace_medical_feedback",
			"ace_medical_gui",
			"ace_medical_statemachine",
			"ace_medical_status",
			"ace_medical_treatment",
			"ace_medical_vitals",
			"ace_dogtags",
			"cba_settings"
		};
		requiredVersion = 0.1;
		units[] = {};
		weapons[] = {};
	};
};
class CfgWeapons
{
	class ACE_ItemCore;
	class CBA_MiscItem_ItemInfo;
	class ACE_packingBandage;
	class Bacta_Bandage_38: ACE_packingBandage
	{
		displayName = "[38th] Bacta Bandage";
        class ItemInfo: CBA_MiscItem_ItemInfo
		{
			mass = 1.5;
		};
	};
};
class CfgMagazines 
{
    class CA_Magazine;
    class ACE_painkillers;
    class Fentanyl_38th: CA_Magazine 
	{
        scope = 2;
        author = "isky";
		dlc="38th";
        displayName = "[38th] Fentanyl Lollipop(800MCG)";
       	//model = "\A3\weapons_F\ammo\mag_univ.p3d";
		Uipicture="\38th\38th_Medical\data\fentanyl.paa";
      	picture = "\38th\38th_Medical\data\fentanyl.paa";
        descriptionShort = "Medicinal Fentanyl Lollipop(800 MCG)";
        descriptionUse = "Medicinal Fentanyl Lollipop(800 MCG)";
        ACE_isMedicalItem = 1;
        ACE_asItem = 1;
        count = 6;
        mass = 0.1;
        ammo = "";
        initSpeed = 0;
        tracersEvery = 0;
        lastRoundsTracer = 0;
    };
    class Fentanyl_600mcg: CA_Magazine 
	{
        scope = 2;
        author = "isky";
		dlc="38th";
        displayName = "[38th] Fentanyl Lollipop(600MCG)";
       	//model = "\A3\weapons_F\ammo\mag_univ.p3d";
		Uipicture="\38th\38th_Medical\data\fentanyl.paa";
      	picture = "\38th\38th_Medical\data\fentanyl.paa";
        descriptionShort = "Medicinal Fentanyl Lollipop(600 MCG)";
        descriptionUse = "Medicinal Fentanyl Lollipop(600 MCG)";
        ACE_isMedicalItem = 1;
        ACE_asItem = 1;
        count = 6;
        mass = 0.1;
        ammo = "";
        initSpeed = 0;
        tracersEvery = 0;
        lastRoundsTracer = 0;
    };
    class Fentanyl_1600MCG: CA_Magazine 
	{
        scope = 2;
        author = "isky";
		dlc="38th";
        displayName = "[38th] Fentanyl Lollipop(1600MCG)";
       	//model = "\A3\weapons_F\ammo\mag_univ.p3d";
		Uipicture="\38th\38th_Medical\data\fentanyl.paa";
      	picture = "\38th\38th_Medical\data\fentanyl.paa";
        descriptionShort = "Medicinal Fentanyl Lollipop(1600MCG)";
        descriptionUse = "Medicinal Fentanyl Lollipop(1600MCG)";
        ACE_isMedicalItem = 1;
        ACE_asItem = 1;
        count = 6;
        mass = 0.1;
        ammo = "";
        initSpeed = 0;
        tracersEvery = 0;
        lastRoundsTracer = 0;
    };
};
class ACE_Medical_Treatment
{
	class Bandaging
	{
        class FieldDressing;
		class PackingBandage;
		class QuikClot;
		class ElasticBandage;
		class Bacta_Bandage_38 : FieldDressing
		{
			class Abrasion 
			{
                effectiveness = 6;
                reopeningChance = 0.5;
                reopeningMinDelay = 600;
               	reopeningMaxDelay = 2000;
            };
            class AbrasionMinor: Abrasion {
                effectiveness = 12;
                reopeningChance = 0.5;
                reopeningMinDelay = 600;
               reopeningMaxDelay = 2000;
            };
            class AbrasionMedium: Abrasion {
                effectiveness = 8;
                reopeningChance = 0.5;
                reopeningMinDelay = 600;
             	reopeningMaxDelay = 2000;
            };
            class AbrasionLarge: Abrasion {
                effectiveness = 6;
                reopeningChance = 0.5;
                reopeningMinDelay = 600;
               	reopeningMaxDelay = 2000;
            };

            class Avulsion: Abrasion {
                effectiveness = 6;
                reopeningChance = 0.5;
                reopeningMinDelay = 600;
               	reopeningMaxDelay = 2000;
            };
            class AvulsionMinor: Avulsion {
                effectiveness = 12;
                reopeningChance = 0.5;
                reopeningMinDelay = 600;
               	reopeningMaxDelay = 2000;
            };
            class AvulsionMedium: Avulsion {
				effectiveness = 8;
                reopeningChance = 0.5;
				reopeningMinDelay = 600;
               reopeningMaxDelay = 2000;
            };
            class AvulsionLarge: Avulsion {
                effectiveness = 6;
                reopeningChance = 0.5;
                reopeningMinDelay = 600;
               reopeningMaxDelay = 2000;
            };

            class Contusion: Abrasion {
				effectiveness = 6;
                reopeningChance = 0.5;
                reopeningMinDelay = 600;
               reopeningMaxDelay = 2000;
            };
            class ContusionMinor: Contusion {};
            class ContusionMedium: Contusion {};
            class ContusionLarge: Contusion {};

            class Crush: Abrasion {
                effectiveness = 20;
                reopeningChance = 0.5;
                reopeningMinDelay = 600;
               reopeningMaxDelay = 2000;
            };
            class CrushMinor: Crush {
                effectiveness = 20;
                reopeningChance = 0.5;
                reopeningMinDelay = 600;
               reopeningMaxDelay = 2000;
            };
            class CrushMedium: Crush {
                effectiveness = 20;
                reopeningChance = 0.5;
                reopeningMinDelay = 600;
               reopeningMaxDelay = 2000;
            };
            class CrushLarge: Crush {
                effectiveness = 20;
                reopeningChance = 0.5;
                reopeningMinDelay = 600;
               reopeningMaxDelay = 2000;
            };

            class Cut: Abrasion {
				effectiveness = 6;
                reopeningChance = 0.5;
				reopeningMinDelay = 600;
               reopeningMaxDelay = 2000;
            };
            class CutMinor: Cut {
                effectiveness = 12;
                reopeningChance = 0.5;
                reopeningMinDelay = 600;
               reopeningMaxDelay = 2000;
            };
            class CutMedium: Cut {
                effectiveness = 8;
                reopeningChance = 0.5;
                reopeningMinDelay = 600;
               reopeningMaxDelay = 2000;
            };
            class CutLarge: Cut {
                effectiveness = 6;
                reopeningChance = 0.5;
                reopeningMinDelay = 600;
               reopeningMaxDelay = 2000;
            };

            class Laceration: Abrasion {
                effectiveness = 6;
                reopeningChance = 0.5;
                reopeningMinDelay = 600;
               reopeningMaxDelay = 2000;
            };
            class LacerationMinor: Laceration {
                effectiveness = 12;
                reopeningChance = 0.5;
                reopeningMinDelay = 600;
               reopeningMaxDelay = 2000;
            };
            class LacerationMedium: Laceration {
                effectiveness = 8;
                reopeningChance = 0.5;
                reopeningMinDelay = 600;
               reopeningMaxDelay = 2000;
            };
            class LacerationLarge: Laceration {
                effectiveness = 6;
                reopeningChance = 0.5;
                reopeningMinDelay = 600;
               reopeningMaxDelay = 2000;
            };

            class VelocityWound: Abrasion {
                effectiveness = 6;
                reopeningChance = 0.5;
                reopeningMinDelay = 600;
               reopeningMaxDelay = 2000;
            };
            class VelocityWoundMinor: VelocityWound {
                effectiveness = 12;
                reopeningChance = 0.5;
				reopeningMinDelay = 600;
               reopeningMaxDelay = 2000;
            };
            class VelocityWoundMedium: VelocityWound {
                effectiveness = 8;
                reopeningChance = 0.5;
                reopeningMinDelay = 600;
               reopeningMaxDelay = 2000;
            };
            class VelocityWoundLarge: VelocityWound {
				effectiveness = 6;
                reopeningChance = 0.5;
                reopeningMinDelay = 600;
               reopeningMaxDelay = 2000;
            };

            class PunctureWound: Abrasion {
				effectiveness = 6;
                reopeningChance = 0.5;
                reopeningMinDelay = 600;
               reopeningMaxDelay = 2000;
            };
            class PunctureWoundMinor: PunctureWound {
                effectiveness = 12;
                reopeningChance = 0.5;
                reopeningMinDelay = 600;
               reopeningMaxDelay = 2000;
            };
            class PunctureWoundMedium: PunctureWound {
                effectiveness = 8;
                reopeningChance = 0.5;
                reopeningMinDelay = 600;
               reopeningMaxDelay = 2000;
            };
            class PunctureWoundLarge: PunctureWound {
                effectiveness = 6;
                reopeningChance = 0.5;
                reopeningMinDelay = 600;
               reopeningMaxDelay = 2000;
            };
		};
	};
    
	class Medication
	{
		class Morphine;
		class PainKillers;
		class Fentanyl;
		class BubbleWrap;
		class FieldDressing;
		class Fentanyl_Lollipop_600mcg: BubbleWrap
		{
			maxDose = 8;
			painReduce = 0.5;
			timeInSystem = 900;
			timeTillMaxEffect = 5;
			viscosityChange = -1;
			//opioidRelief = 0.2;
			hrIncreaseLow[] = {-3, -2};
            hrIncreaseNormal[] = {-5, -3};
            hrIncreaseHigh[] = {-6, -3};
			//maxRelief = 0.7;
		};
		class Fentanyl_Lollipop_800mcg: BubbleWrap 
		{
			maxDose = 4;
			maxDoseDeviation = 2;
			painReduce = 0.6;
			timeInSystem = 900;
			timeTillMaxEffect = 5;
			viscosityChange = -1;
			//opioidRelief = 0.5;
			hrIncreaseLow[] = {-7, -4};
            hrIncreaseNormal[] = {-11, -7};
            hrIncreaseHigh[] = {-14, -7};
			//maxRelief = 0.7;
		};
		class Fentanyl_Lollipop_1600mcg: BubbleWrap 
		{
			maxDose = 3;
			//maxDoseDeviation = 2;
			painReduce = 1;
			timeInSystem = 900;
			timeTillMaxEffect = 5;
			viscosityChange = -1;
			//opioidRelief = 0.7;
			hrIncreaseLow[] = {-21, -12};
            hrIncreaseNormal[] = {-33, -21};
            hrIncreaseHigh[] = {-42, -21};
			//maxRelief = 0.7;
		};
	};
};
class ACE_Medical_Treatment_Actions
{
	class Morphine;
	class Painkillers;
	class Fentanyl;
	class CWMP;
	class BasicBandage;
	class Fentanyl_Lollipop_600mcg: Painkillers
	{
		displayName = "Lick Fentanyl Lollipop(600MCG)";
		displayNameProgress = "Licking Fentanyl Lollipop...";
		items[] = {"Fentanyl_600mcg"};
		allowedSelections[] = {"Head"};
		allowSelfTreatment = 1;
		treatmentTime = 2;
		medicRequired = 0;
		sounds[] = {};
		condition = "[_patient] call ace_common_fnc_isAwake";
	};
	class Fentanyl_Lollipop_800mcg: Painkillers
	{
		displayName = "Lick Fentanyl Lollipop(800MCG)";
		displayNameProgress = "Licking Fentanyl Lollipop...";
		items[] = {"Fentanyl_38th"};
		allowedSelections[] = {"Head"};
		allowSelfTreatment = 1;
		treatmentTime = 2;
		medicRequired = 0;
		sounds[] = {};
		condition = "[_patient] call ace_common_fnc_isAwake";
	};
	class Fentanyl_Lollipop_1600mcg: Painkillers
	{
		displayName = "Lick Fentanyl Lollipop(1600MCG)";
		displayNameProgress = "Licking Fentanyl Lollipop...";
		items[] = {"Fentanyl_1600MCG"};
		allowedSelections[] = {"Head"};
		allowSelfTreatment = 1;
		treatmentTime = 2;
		medicRequired = 1;
		sounds[] = {};
		condition = "[_patient] call ace_common_fnc_isAwake";
	};
	class Bacta_Bandage_38 : BasicBandage
	{
		displayName = "Apply Bacta Bandage";
		displayNameProgress = "Applying Bacta to Wounds...";
		items[] = { "Bacta_Bandage_38" };
		treatmentTime = 10;
       // condition = "[_patient] call ace_common_fnc_canBandage";
	};
};
