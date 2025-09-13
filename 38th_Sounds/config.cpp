class CfgPatches
{
	class 38th_Sounds
	{
		author = "38th S5";
		requiredAddons[] = {"A3_Data_F","A3_Weapons_F","38th_Core"};
		requiredVersion = 0.1;
		units[] = {};
		weapons[] = {};
	};
};
class CfgSounds
{
	class Shield
	{
		sound[]=
		{
			"\38th\38th_Sounds\Sounds\Equipment\squad_shield_loop_01.ogg",
			40,
			1,
			50
		};
		titles[]={};
	};
};
class CfgSoundShaders
{
    class 38th_basic_tail_soundshader
	{
		range=1500;
		limitation=1;
		rangeCurve[]=
		{
			{0,1},
			{1500,0.30000001}
		};
	};
    class 38th_E5_reflect_interior_soundshader: 38th_basic_tail_soundshader
	{
		samples[]=
		{
			
			{
				"\38th\38th_Sounds\Sounds\Shared\reflection\indoor\blaster_reflection_indoor_1.wav",
				1
			},
			
			{
				"\38th\38th_Sounds\Sounds\Shared\reflection\indoor\blaster_reflection_indoor_2.wav",
				1
			},
			
			{
				"\38th\38th_Sounds\Sounds\Shared\reflection\indoor\blaster_reflection_indoor_3.wav",
				1
			},
			
			{
				"\38th\38th_Sounds\Sounds\Shared\reflection\indoor\blaster_reflection_indoor_4.wav",
				1
			},
			{
				"\38th\38th_Sounds\Sounds\Shared\reflection\indoor\blaster_reflection_indoor_5.wav",
				1
			},
			{
				"\38th\38th_Sounds\Sounds\Shared\reflection\indoor\blaster_reflection_indoor_6.wav",
				1
			}
		};
		volume=" 1.35 * interior";
	};
    class 38th_E5_reflect_Houses_soundshader: 38th_basic_tail_soundshader
	{
		samples[]=
		{
			
			{
				"\38th\38th_Sounds\Sounds\Shared\reflection\outdoor\blaster_reflection_1.wav",
				1
			},
			
			{
				"\38th\38th_Sounds\Sounds\Shared\reflection\outdoor\blaster_reflection_2.wav",
				1
			},
			
			{
				"\38th\38th_Sounds\Sounds\Shared\reflection\outdoor\blaster_reflection_3.wav",
				1
			},
			
			{
				"\38th\38th_Sounds\Sounds\Shared\reflection\outdoor\blaster_reflection_4.wav",
				1
			},
			{
				"\38th\38th_Sounds\Sounds\Shared\reflection\outdoor\blaster_reflection_5.wav",
				1
			},
			{
				"\38th\38th_Sounds\Sounds\Shared\reflection\outdoor\blaster_reflection_6.wav",
				1
			}
		};
		volume="(1-interior/1.4)*houses";
	};
    class 38th_E5_reflect_meadow_soundshader: 38th_basic_tail_soundshader
	{
		samples[]=
		{
			
			{
				"\38th\38th_Sounds\Sounds\Shared\reflection\field\blaster_reflection_field_1.wav",
				1
			},
			
			{
				"\38th\38th_Sounds\Sounds\Shared\reflection\field\blaster_reflection_field_2.wav",
				1
			},
			
			{
				"\38th\38th_Sounds\Sounds\Shared\reflection\field\blaster_reflection_field_3.wav",
				1
			},
			
			{
				"\38th\38th_Sounds\Sounds\Shared\reflection\field\blaster_reflection_field_4.wav",
				1
			},
			{
				"\38th\38th_Sounds\Sounds\Shared\reflection\field\blaster_reflection_field_5.wav",
				1
			},
			{
				"\38th\38th_Sounds\Sounds\Shared\reflection\field\blaster_reflection_field_6.wav",
				1
			}
		};
		volume="(1-interior/1.4)*(meadows/2 max sea)";
	};
    class 38th_E5_reflect_trees_soundshader: 38th_basic_tail_soundshader
	{
		samples[]=
		{
			
			{
				"\38th\38th_Sounds\Sounds\Shared\reflection\forest\blaster_reflection_forest_1.wav",
				1
			},
			
			{
				"\38th\38th_Sounds\Sounds\Shared\reflection\forest\blaster_reflection_forest_2.wav",
				1
			},
			
			{
				"\38th\38th_Sounds\Sounds\Shared\reflection\forest\blaster_reflection_forest_3.wav",
				1
			},
			
			{
				"\38th\38th_Sounds\Sounds\Shared\reflection\forest\blaster_reflection_forest_4.wav",
				1
			},
			{
				"\38th\38th_Sounds\Sounds\Shared\reflection\forest\blaster_reflection_forest_5.wav",
				1
			},
			{
				"\38th\38th_Sounds\Sounds\Shared\reflection\forest\blaster_reflection_forest_6.wav",
				1
			}
		};
		volume="(1-interior/1.4)*trees/2";
	};
    class 38th_E5_reflect_forest_soundshader: 38th_basic_tail_soundshader
	{
		samples[]=
		{
			
			{
				"\38th\38th_Sounds\Sounds\Shared\reflection\forest\blaster_reflection_forest_1.wav",
				1
			},
			
			{
				"\38th\38th_Sounds\Sounds\Shared\reflection\forest\blaster_reflection_forest_2.wav",
				1
			},
			
			{
				"\38th\38th_Sounds\Sounds\Shared\reflection\forest\blaster_reflection_forest_3.wav",
				1
			},
			
			{
				"\38th\38th_Sounds\Sounds\Shared\reflection\forest\blaster_reflection_forest_4.wav",
				1
			},
			{
				"\38th\38th_Sounds\Sounds\Shared\reflection\forest\blaster_reflection_forest_5.wav",
				1
			},
			{
				"\38th\38th_Sounds\Sounds\Shared\reflection\forest\blaster_reflection_forest_6.wav",
				1
			}
		};
		volume="(1-interior/1.4)*forest";
	};
///GARC
	class 38th_close_DCM16_soundshader
	{
		samples[]=
		{
			
			{
				"\38th\38th_Sounds\Sounds\DCM16\Close\close_1.ogg",
				1
			}
		};
		volume="1 *(1 - interior)";
		range=120;
		rangecurve[]=
		{
			{0,1},
			{75,0}
		};
	};
	class 38th_Distant_DCM16_SoundShader
	{
		samples[]=
		{
			{
				"\38th\38th_Sounds\Sounds\DCM16\distant\distant_1.ogg",
				1
			}
		};
		volume=1;
		range=1900;
		rangeCurve[]=
		{
			{90,1},
			{1650,0},
			{1900,0}
		};
	};
	class 38th_Far_DCM16_SoundShader
	{
		samples[]=
		{
			{
				"\38th\38th_Sounds\Sounds\DCM16\distant\distant_1.ogg",
				1
			}
		};
		volume=1;
		range=3000;
		rangeCurve[]=
		{
			{350,1},
			{2800,0},
			{3000,0}
		};
	};
	///17M
	class 38th_close_DC17M_soundshader
	{
		samples[]=
		{
			
			{
				"\38th\38th_Sounds\Sounds\DC17M\Close\DC17M_Close_1.ogg",
				1
			},
			
			{
				"\38th\38th_Sounds\Sounds\DC17M\Close\DC17M_Close_2.ogg",
				1
			},
			
			{
				"\38th\38th_Sounds\Sounds\DC17M\Close\DC17M_Close_3.ogg",
				1
			},
			
			{
				"\38th\38th_Sounds\Sounds\DC17M\Close\DC17M_Close_4.ogg",
				1
			},
			
			{
				"\38th\38th_Sounds\Sounds\DC17M\Close\DC17M_Close_5.ogg",
				1
			},
			
			{
				"\38th\38th_Sounds\Sounds\DC17M\Close\DC17M_Close_6.ogg",
				1
			}
		};
		volume="1 *(1 - interior)";
		range=120;
		rangecurve[]=
		{
			{0,1},
			{75,0}
		};
	};
	class 38th_Distant_DC17M_SoundShader
	{
		samples[]=
		{
			{
				"\38th\38th_Sounds\Sounds\DC17M\Distant\DC17M_Distant_1.ogg",
				1
			},
			
			{
				"\38th\38th_Sounds\Sounds\DC17M\Distant\DC17M_Distant_2.ogg",
				1
			},
			
			{
				"\38th\38th_Sounds\Sounds\DC17M\Distant\DC17M_Distant_3.ogg",
				1
			},
			
			{
				"\38th\38th_Sounds\Sounds\DC17M\Distant\DC17M_Distant_4.ogg",
				1
			},
			
			{
				"\38th\38th_Sounds\Sounds\DC17M\Distant\DC17M_Distant_5.ogg",
				1
			},
			
			{
				"\38th\38th_Sounds\Sounds\DC17M\Distant\DC17M_Distant_6.ogg",
				1
			}
		};
		range=300;
		rangeCurve[]=
		{
			{0,0},
			{100,0},
			{150,1},
			{700,0.69999999},
			{300,0}
		};
	};
	class 38th_Far_DC17M_SoundShader
	{
		samples[]=
		{
			{
				"\38th\38th_Sounds\Sounds\DC17M\Distant\DC17M_Distant_1.ogg",
				1
			},
			
			{
				"\38th\38th_Sounds\Sounds\DC17M\Distant\DC17M_Distant_2.ogg",
				1
			},
			
			{
				"\38th\38th_Sounds\Sounds\DC17M\Distant\DC17M_Distant_3.ogg",
				1
			},
			
			{
				"\38th\38th_Sounds\Sounds\DC17M\Distant\DC17M_Distant_4.ogg",
				1
			},
			
			{
				"\38th\38th_Sounds\Sounds\DC17M\Distant\DC17M_Distant_5.ogg",
				1
			},
			
			{
				"\38th\38th_Sounds\Sounds\DC17M\Distant\DC17M_Distant_6.ogg",
				1
			}
		};
		volume=1;
		range=1900;
		rangeCurve[]=
		{
			{90,1},
			{1650,0},
			{1900,0}
		};
	};
//EWEB
 	class 38th_close_EWEB_soundshader
	{
		samples[]=
		{
			
			{
				"\38th\38th_Sounds\Sounds\EWEB\Close\eweb_close_1.ogg",
				1
			},
			
			{
				"\38th\38th_Sounds\Sounds\EWEB\Close\eweb_close_2.ogg",
				1
			},
			
			{
				"\38th\38th_Sounds\Sounds\EWEB\Close\eweb_close_3.ogg",
				1
			},
			
			{
				"\38th\38th_Sounds\Sounds\EWEB\Close\eweb_close_4.ogg",
				1
			},
			
			{
				"\38th\38th_Sounds\Sounds\EWEB\Close\eweb_close_5.ogg",
				1
			},
			
			{
				"\38th\38th_Sounds\Sounds\EWEB\Close\eweb_close_6.ogg",
				1
			}
		};
		volume="1 *(1 - interior)";
		range=120;
		rangecurve[]=
		{
			{0,1},
			{75,0}
		};
	};
    class 38th_Distance_EWEB_soundshader
	{
		samples[]=
		{
			
			{
				"\38th\38th_Sounds\Sounds\EWEB\Distant\eweb_distant_1.ogg",
				1
			},
			
			{
				"\38th\38th_Sounds\Sounds\EWEB\Distant\eweb_distant_2.ogg",
				1
			},
			
			{
				"\38th\38th_Sounds\Sounds\EWEB\Distant\eweb_distant_3.ogg",
				1
			},
			
			{
				"\38th\38th_Sounds\Sounds\EWEB\Distant\eweb_distant_4.ogg",
				1
			},
			
			{
				"\38th\38th_Sounds\Sounds\EWEB\Distant\eweb_distant_5.ogg",
				1
			},
			
			{
				"\38th\38th_Sounds\Sounds\EWEB\Distant\eweb_distant_6.ogg",
				1
			}
		};
		volume=1;
		range=1900;
		rangeCurve[]=
		{
			{90,1},
			{1650,0},
			{1900,0}
		};
	};
 	 class 38th_Far_Distance_EWEB_soundshader
	{
		samples[]=
		{
			
			{
				"\38th\38th_Sounds\Sounds\EWEB\Distant\eweb_distant_1.ogg",
				1
			},
			
			{
				"\38th\38th_Sounds\Sounds\EWEB\Distant\eweb_distant_2.ogg",
				1
			},
			
			{
				"\38th\38th_Sounds\Sounds\EWEB\Distant\eweb_distant_3.ogg",
				1
			},
			
			{
				"\38th\38th_Sounds\Sounds\EWEB\Distant\eweb_distant_4.ogg",
				1
			},
			
			{
				"\38th\38th_Sounds\Sounds\EWEB\Distant\eweb_distant_5.ogg",
				1
			},
			
			{
				"\38th\38th_Sounds\Sounds\EWEB\Distant\eweb_distant_6.ogg",
				1
			}
		};
		volume=1;
		range=3000;
		rangeCurve[]=
		{
			{350,1},
			{2800,0},
			{3000,0}
		};
	};
//// Vehicle MG
	class 38th_close_Vehicle_MG_soundshader
	{
		samples[]=
		{
			
			{
				"\38th\38th_Sounds\Sounds\mounted\close\heavy_mg_close_1.ogg",
				1
			}
		};
		volume="1 *(1 - interior)";
		range=120;
		rangecurve[]=
		{
			{0,1},
			{75,0}
		};
	};
	class 38th_Distant_Vehicle_MG_SoundShader
	{
		samples[]=
		{
			{
				"\38th\38th_Sounds\Sounds\mounted\distant\heavy_mg_distant_1.ogg",
				1
			}
		};
		volume=1;
		range=1900;
		rangeCurve[]=
		{
			{90,1},
			{1650,0},
			{1900,0}
		};
	};
	class 38th_Far_Vehicle_MG_SoundShader
	{
		samples[]=
		{
			{
				"\38th\38th_Sounds\Sounds\mounted\distant\heavy_mg_distant_3.ogg",
				1
			}
		};
		volume=1;
		range=3000;
		rangeCurve[]=
		{
			{350,1},
			{2800,0},
			{3000,0}
		};
	};
///LAAT GUNS
	class 38th_close_DoorGun_soundshader
	{
		samples[]=
		{
			
			{
				"\38th\38th_Sounds\Sounds\DoorGun\Close\DG_Close_1.ogg",
				1
			},
			
			{
				"\38th\38th_Sounds\Sounds\DoorGun\Close\DG_Close_2.ogg",
				1
			},
			
			{
				"\38th\38th_Sounds\Sounds\DoorGun\Close\DG_Close_3.ogg",
				1
			},
			
			{
				"\38th\38th_Sounds\Sounds\DoorGun\Close\DG_Close_4.ogg",
				1
			},
			
			{
				"\38th\38th_Sounds\Sounds\DoorGun\Close\DG_Close_5.ogg",
				1
			},
			
			{
				"\38th\38th_Sounds\Sounds\DoorGun\Close\DG_Close_6.ogg",
				1
			}
		};
		volume=1;
		range=50;
		rangeCurve[]=
		{
			{0,1},
			{25,0.69999999},
			{50,0}
		};
	};
	class 38th_Distant_DoorGun_SoundShader
	{
		samples[]=
		{
			{
				"\38th\38th_Sounds\Sounds\DoorGun\Distant\DG_Distant_1.ogg",
				1
			},
			
			{
				"\38th\38th_Sounds\Sounds\DoorGun\Distant\DG_Distant_2.ogg",
				1
			},
			
			{
				"\38th\38th_Sounds\Sounds\DoorGun\Distant\DG_Distant_3.ogg",
				1
			},
			
			{
				"\38th\38th_Sounds\Sounds\DoorGun\Distant\DG_Distant_4.ogg",
				1
			},
			
			{
				"\38th\38th_Sounds\Sounds\DoorGun\Distant\DG_Distant_5.ogg",
				1
			},
			
			{
				"\38th\38th_Sounds\Sounds\DoorGun\Distant\DG_Distant_6.ogg",
				1
			}
		};
		volume=1;
		range=200;
		rangeCurve[]=
		{
			{0,0},
			{25,0.5},
			{50,1},
			{200,0}
		};
	};
	class 38th_Far_DoorGun_SoundShader
	{
		samples[]=
		{
			{
				"\38th\38th_Sounds\Sounds\DoorGun\Distant\DG_Distant_1.ogg",
				1
			},
			
			{
				"\38th\38th_Sounds\Sounds\DoorGun\Distant\DG_Distant_2.ogg",
				1
			},
			
			{
				"\38th\38th_Sounds\Sounds\DoorGun\Distant\DG_Distant_3.ogg",
				1
			},
			
			{
				"\38th\38th_Sounds\Sounds\DoorGun\Distant\DG_Distant_4.ogg",
				1
			},
			
			{
				"\38th\38th_Sounds\Sounds\DoorGun\Distant\DG_Distant_5.ogg",
				1
			},
			
			{
				"\38th\38th_Sounds\Sounds\DoorGun\Distant\DG_Distant_6.ogg",
				1
			}
		};
		volume=1;
		range=1600;
		rangeCurve[]=
		{
			{0,0},
			{100,0},
			{150,1},
			{700,0.69999999},
			{1600,0}
		};
	};
};
class cfgsound3dprocessors
{
	class 38th_weapons_3dprocessor
	{
		type="panner";
		innerrange=5;
		range=500;
		rangecurve="38th_weapons_processorcurve";
	};
	class 38th_weapons_tails_3dprocessor
	{
		type="panner";
		innerrange=0;
		range=100;
		rangecurve="38th_basic_processorcurve";
	};
};
class cfgsoundcurves
{
	class 38th_weapons_basic_volumecurve
	{
		points[]=
		{
			{0,1},
			{0.1,0.75},
			{0.2,0.5},
			{0.30000001,0.2},
			{0.40000001,0.1},
			{0.5,0.050000001},
			{0.60000002,0.0099999998},
			{0.69999999,0.0074999998},
			{0.80000001,0.0024999999},
			{0.89999998,0.001},
			{1,0}
		};
	};
    class 38th_weapons_processorcurve
	{
		points[]=
		{
			{0,1},
			{0.0049999999,0.75},
			{0.0099999998,0.025},
			{1,0.0099999998}
		};
	};
	class 38th_blaster_vl_sin
	{
		points[]=
		{
			{0,1},
			{0.1,0.5},
			{0.2,0.32499999},
			{0.30000001,0.25},
			{0.40000001,0.2},
			{0.5,0.175},
			{0.60000002,0.15000001},
			{0.69999999,0.125},
			{0.80000001,0.1},
			{0.89999998,0.050000001},
			{1,0}
		};
	};
	class 38th_basic_processorcurve
	{
		points[]=
		{
			{0,1},
			{0.1,0.97000003},
			{0.2,0.94999999},
			{0.30000001,0.85000002},
			{0.40000001,0.70999998},
			{0.5,0.51999998},
			{0.60000002,0.31999999},
			{0.69999999,0.18000001},
			{0.80000001,0.1},
			{0.89999998,0.029999999},
			{1,0}
		};
	};
};
class cfgdistancefilters
{
	class 38th_weapons_lowpass_filter
	{
		type="lowpassfilter";
		mincutofffrequency=750;
		qfactor=1;
		innerrange=0;
		range=900;
		powerfactor=55;
	};
	class 38th_blaster_echo_lp_dia
	{
		type="lowpassfilter";
		mincutofffrequency=2500;
		qfactor=1;
		innerrange=30;
		range=300;
		powerfactor=75;
	};
};
class CfgSoundsets
{
    class 38th_basic_tail_soundset
	{
		volumeFactor=1;
		volumecurve="38th_blaster_vl_sin";
		frequencyrandomizer=2;
		sound3dprocessingtype="38th_weapons_tails_3dprocessor";
		distancefilter="38th_blaster_echo_lp_dia";
		occlusionFactor=0.30000001;
		obstructionFactor=0;
		spatial=1;
		doppler=0;
		loop=0;
		soundShadersLimit=2;
	};
    class 38th_generic_blaster_shot_soundset
	{
		volumeFactor=1;
		volumecurve="38th_weapons_basic_volumecurve";
		sound3dprocessingtype="38th_weapons_3dprocessor";
		distancefilter="38th_weapons_lowpass_filter";
		occlusionFactor=0.25;
		obstructionFactor=0.30000001;
		spatial=1;
		doppler=0;
		loop=0;
		frequencyrandomizer=0.5;
	};
	class 38th_E5_reverb_soundset: 38th_basic_tail_soundset
	{
		volumeFactor=1;
		soundshaders[]=
		{
			"38th_E5_reflect_forest_soundshader",
			"38th_E5_reflect_houses_soundshader",
			"38th_E5_reflect_meadow_soundshader",
			"38th_E5_reflect_trees_soundshader"
		};
	}; 
    class 38th_E5_shot_soundset: 38th_generic_blaster_shot_soundset
	{
		soundshaders[]=
		{
			"38th_close_E5_soundshader",
			"38th_Distance_E5_soundshader",
			"38th_Far_Distance_E5_soundshader"
		};
	};
////Garc
    class 38th_EWEB_shot_soundset: 38th_generic_blaster_shot_soundset
	{
		soundshaders[]=
		{
			"38th_close_EWEB_soundshader",
			"38th_Distance_EWEB_soundshader",
			"38th_Far_Distance_EWEB_soundshader"
		};
		volumeFactor=1;
		volumeCurve="38th_weapons_basic_volumecurve";
		sound3DProcessingType="38th_weapons_3dprocessor";
		distanceFilter="38th_weapons_lowpass_filter";
		occlusionFactor=0.15000001;
		obstructionFactor=0.15000001;
		spatial=1;
		doppler=0;
		loop=0;
	};
	class 38th_DC17M_shot_soundset: 38th_generic_blaster_shot_soundset
	{
		soundShaders[]=
		{
			"38th_close_DC17M_soundshader",
			"38th_Distant_DC17M_soundshader",
			"38th_Far_DC17M_soundshader"
		};
		volumeFactor=1;
		volumeCurve="38th_weapons_basic_volumecurve";
		sound3DProcessingType="38th_weapons_3dprocessor";
		distanceFilter="38th_weapons_lowpass_filter";
		occlusionFactor=0.15000001;
		obstructionFactor=0.15000001;
		spatial=1;
		doppler=0;
		loop=0;
	};
	class 38th_DCM16_shot_soundset: 38th_generic_blaster_shot_soundset
	{
		soundShaders[]=
		{
			"38th_close_DCM16_soundshader",
			"38th_Distant_DCM16_soundshader",
			"38th_Far_DCM16_SoundShader"
		};
		volumeFactor=0.8;
		volumeCurve="38th_weapons_basic_volumecurve";
		sound3DProcessingType="38th_weapons_3dprocessor";
		distanceFilter="38th_weapons_lowpass_filter";
		occlusionFactor=0.15000001;
		obstructionFactor=0.15000001;
		spatial=1;
		doppler=0;
		loop=0;
	};
	class 38th_VehicleMG_shot_soundset: 38th_generic_blaster_shot_soundset
	{
		soundShaders[]=
		{
			"38th_close_Vehicle_MG_soundshader",
			"38th_Distant_Vehicle_MG_soundshader",
			"38th_Far_Vehicle_MG_SoundShader"
		};
		volumeFactor=1;
		volumeCurve="38th_weapons_basic_volumecurve";
		sound3DProcessingType="38th_weapons_3dprocessor";
		distanceFilter="38th_weapons_lowpass_filter";
		occlusionFactor=0.15000001;
		obstructionFactor=0.15000001;
		spatial=1;
		doppler=0;
		loop=0;
	};
	class 38th_DoorGun_shot_soundset: 38th_generic_blaster_shot_soundset
	{
		soundShaders[]=
		{
			"38th_close_DoorGun_soundshader",
			"38th_Distant_DoorGun_soundshader",
			"38th_Far_DoorGun_soundshader"
		};
		volumeFactor=1;
	};
};
