class CfgPatches
{
	class 38th_Weapons_Compat
	{
		author="isky";
		weapons[]={};
		units[]={};
		requiredAddons[]=
		{
			"38th_core"
		};
	};
};
#include "CfgAmmo.hpp"
#include "CfgMagazines.hpp"
#include "CfgWeapons.hpp"
class CBA_DisposableLaunchers
{
	38th_RPS6_Base[]=
	{
		"38th_RPS6_F",
		"38th_RPS6_Used"
	};
	38th_RPS6_Guided_Base[]=
	{
		"38th_RPS6_Guided",
		"38th_RPS6_Guided_Used"
	};
}; 