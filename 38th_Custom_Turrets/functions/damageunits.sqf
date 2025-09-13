
_c = 0;
for "_i" from 0 to 180 do {
_damagecenterpos = "Land_HelipadEmpty_F" createVehicleLocal _this;
{
_x setDamage (damage _x) +0.2;
} forEach (nearestObjects [_damagecenterpos, 
[
	"Civilian",
	"SoldierGB",
	"SoldierEB",
	"SoldierWB"
	], 27]);
	

{
_x setDamage (damage _x) +0.005;
} forEach (nearestObjects [_damagecenterpos, [
"Car",
"Motorcycle",
"UAV",
"Tank",
"Air",
"Ship",
"Autonomous",
"Armored",
"B_static_AA_F", 
"B_static_AT_F",
"B_T_Static_AA_F",
"B_T_Static_AT_F",
"B_T_GMG_01_F",
"B_T_HMG_01_F",
"B_T_Mortar_01_F",
"B_HMG_01_high_F",
"B_HMG_01_A_F",
"B_GMG_01_F",
"B_GMG_01_high_F",
"B_GMG_01_A_F",
"B_Mortar_01_F",
"B_G_Mortar_01_F",
"B_Static_Designator_01_F",
"B_AAA_System_01_F",
"B_SAM_System_01_F",
"B_SAM_System_02_F",
"O_HMG_01_F",
"O_HMG_01_high_F",
"O_HMG_01_A_F",
"O_GMG_01_F",
"O_GMG_01_high_F",
"O_GMG_01_A_F",
"O_Mortar_01_F",
"O_G_Mortar_01_F",
"O_static_AA_F",
"O_static_AT_F",
"O_Static_Designator_02_F",
"I_HMG_01_F",
"I_HMG_01_high_F",
"I_HMG_01_A_F",
"I_GMG_01_F",
"I_GMG_01_high_F",
"I_GMG_01_A_F",
"I_Mortar_01_F",
"I_G_Mortar_01_F",
"I_static_AA_F",
"I_static_AT_F"
], 27]); 
sleep 1;
_c = _c + 1;
if (_c >= 180) exitwith {};
};