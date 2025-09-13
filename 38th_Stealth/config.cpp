class CfgPatches
{
	class 38th_Stealth
	{
		name = "Stealth Ghillie";
		author = "tr3b";
		units[] = {};
		weapons[] = {};
		version = "1.0";
		versionStr = "1.0";
		
		requiredAddons[] = 
		{
			"A3_UI_F",
            "cba_main",
            "cba_xeh"
        };
	};
};
class CfgFunctions
{
	class SG
	{
		class MyCategory
		{
			class MyInit
			{
				postInit = 1;
				file = "38th\38th_Stealth\init.sqf";
				description = "script run after mission started and object initialization is complete";
			};
		};
	};
};


class Extended_PreInit_EventHandlers
{
    class SGdevelop
    {
        init = "call compile preProcessFileLineNumbers '38th\38th_Stealth\XEH_preInit.sqf'";
    };
};