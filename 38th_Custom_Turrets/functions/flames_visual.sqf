_nap_bomb5 = "Land_HelipadEmpty_F" createVehicleLocal _this;




_refraction_heat = "#particlesource" createVehicleLocal (getPosATL _nap_bomb5);
_refraction_heat setParticleCircle [0,[0,0,0]];
_refraction_heat setParticleRandom [0,[10,10,0],[0.175,0.175,0],0,0.25,[0,0,0,0.1],0,0];
_refraction_heat setParticleParams [["\A3\data_f\ParticleEffects\Universal\Refract.p3d", 1, 0, 1],"","Billboard",1,10,[0,0,0],[0,0,0.75],30,10.2,7.9,0.1,[2,2,2],[[1,1,1,0],[1,1,1,0.5],[1,1,1,0]],[0.08],1,0,"","",_nap_bomb5];
_refraction_heat setDropInterval 0.05;
_refraction_heat setParticleFire [0,50,10];
[_refraction_heat] spawn {
	_removeFX = _this select 0;
	sleep 180;
	{if (typeOf _x == "#particlesource") then {deleteVehicle _x}} forEach (_removeFX nearObjects 20);
	deleteVehicle _removeFX;
};




_a = 0;
for "_i" from 0 to 7 do {
	_randomPos = [[[position _nap_bomb5, 1]],[]] call BIS_fnc_randomPos;
	_fire2 = "#particlesource" createVehicleLocal _randomPos;
	_fire2 setParticleClass "ObjectDestructionFire1Smallx";										//add smaller random fires
	_a = _a + 1;
	if (_a >= 7) exitwith {
			[_fire2] spawn {
			_removeFX = _this select 0;
			sleep 180;
			{if (typeOf _x == "#particlesource") then {deleteVehicle _x}} forEach (_removeFX nearObjects 25);
			deleteVehicle _removeFX;
		};
	};
	_fire2 = _this execVM "\UAS_Vehicle\scripts\fire2lighting.sqf";
};


_b = 0;
for "_i" from 0 to 11 do {
	_randomPos = [[[position _nap_bomb5, 2]],[]] call BIS_fnc_randomPos;
	_flames_Medium = "#particlesource" createVehicleLocal _randomPos;
	_flames_Medium setParticleCircle [5,[0,0,0]];
	_flames_Medium setParticleRandom [0.5,[0.3,0.3,0],[0,0,0],2,1,[0,0,0,0.5],0,0];
	_flames_Medium setParticleParams [["\A3\data_f\ParticleEffects\Universal\Universal.p3d",16,1,16,0],"","Billboard",1,3,[0,0,0],[1,1,1],15,7.5,7.9,0.5,[4,4,4],[[1,1,1,1],[1,1,1,1],[1,1,1,1]],[2],0,0,"","",_randomPos];
	_flames_Medium setDropInterval 0.25;
	_b = _b + 1;
	if (_b >= 11) exitwith {
		[_flames_Medium] spawn {
			_removeFX = _this select 0;
			sleep 180;
			{if (typeOf _x == "#particlesource") then {deleteVehicle _x}} forEach (_removeFX nearObjects 25);
			deleteVehicle _removeFX;
		};
	};
};









sleep 120;
{if (typeOf _x == "ObjectDestructionFire1Smallx") then {deleteVehicle _x}} forEach (_nap_bomb5 nearObjects 20);
sleep 60;

[_refraction_heat] spawn {
	_removeFX = _this select 0;
	sleep 180;
	{if (typeOf _x == "#particlesource") then {deleteVehicle _x}} forEach (_removeFX nearObjects 20);
	deleteVehicle _removeFX;
};







{if (typeOf _x == "#particlesource") then {deleteVehicle _x}} forEach (_nap_bomb5 nearObjects 20);
deleteVehicle _nap_bomb5;