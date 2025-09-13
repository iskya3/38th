class CfgPatches
{
	class 38th_weapons_garc_compat
	{
		author="isky";
		weapons[]={};
		units[]={};
		skipWhenMissingDependencies =1;
		requiredAddons[]=
		{
			"38th_core",
			"9th_Weapons"
		};
	};
};
class CfgWeapons
{
	class 3AS_DC15A_F;
	class 3AS_DC15A_GL;
	class EGLM;
	class UGL_F;
	class 3AS_DC15C_F;
	class 3AS_DC15C_GL;
	class 3AS_DC15S_F;
	class SWLW_DC15X;
	class 3AS_DC17M_F;
	class 3AS_WestarM5_F;
	class 3AS_WestarM5_GL;
	class 3AS_Z6_F;
	class 3AS_DC15L_F;
	class JLTS_Z6;
	
	class 9th_3AS_DC15A: 3AS_DC15A_F
	{
		magazines[]=
		{
			"38th_mag_dc15a_blue",
			"9th_3AS_DC15A_Mag"
		};
	};
	class 9th_3AS_DC15AGL: 3AS_DC15A_GL
	{
		magazines[]=
		{
			"38th_mag_dc15a_blue",
			"9th_3AS_DC15A_Mag"
		};
	};
	class 9th_3AS_DC15S: 3AS_DC15S_F
	{
		magazines[]=
		{
			"38th_mag_dc15s_blue",
			"9th_3AS_DC15S_Mag"
		};
	};
	class 9th_3AS_DC15L: 3AS_DC15L_F
	{
		magazines[]=
		{
			"SWLW_DC15SAW_Mag",
			"9th_3AS_DC15L_Mag"
		};
	};
	class 9th_3AS_DC15C: 3AS_DC15C_F
	{
		magazines[]=
		{
			"38th_mag_dc15c_blue",
			"9th_3AS_DC15C_Mag"
		};
	};
	class 9th_3AS_DC15CGL: 3AS_DC15C_GL
	{
		magazines[]=
		{
			"38th_mag_dc15c_blue",
			"9th_3AS_DC15C_Mag"
		};
	};
	class 9th_JLTS_Z6: JLTS_Z6
	{
		magazines[]=
		{
			"9th_3AS_Z6_Mag",
			"SWLW_Z6_mag"
		};
	};
};

