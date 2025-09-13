_nap_bomb = "Land_HelipadEmpty_F" createVehicleLocal _this;


_fireLight = "#lightpoint" createVehicle (getPosATL _nap_bomb);
_fireLight lightAttachObject [_nap_bomb, [0,0,0]];
_fireLight setLightAttenuation [0,0,0,0,0,100];  
_fireLight setLightIntensity 10;
_fireLight setLightBrightness 10;
_fireLight setLightDayLight true;	
_fireLight setLightUseFlare false;
_fireLight setLightFlareSize 0;
_fireLight setLightFlareMaxDistance 0;	
_fireLight setLightAmbient[1,0.2,0];
_fireLight setLightColor[1,0.2,0.1];

_flames_Tiny = "#particlesource" createVehicleLocal (getPosATL _nap_bomb);
_flames_Tiny setParticleCircle [20,[0,0,0]];
_flames_Tiny setParticleRandom [2,[5,5,0],[0,0,0],0.1,0.1,[0,0,0,0.2],1,0];
_flames_Tiny setParticleParams [["\A3\data_f\ParticleEffects\Universal\Universal",16,10,32,1],"","Billboard",1,1,[0,0,0],[0,0,0],0,10.07,7.9,0,[2,2,3],[[1,1,1,0],[1,1,1,1],[1,1,1,0]],[1.5],0, 0, "", "", _nap_bomb,0,true];
_flames_Tiny setDropInterval 0.05;
[_flames_Tiny] spawn {
	_removeFX = _this select 0;
	sleep 190;
	{if (typeOf _x == "#particlesource") then {deleteVehicle _x}} forEach (_removeFX nearObjects 20);
	deleteVehicle _removeFX;
};

[_fireLight] spawn 
{
	private ["_removeLight1"];
	_removeLight1 = _this select 0;
	sleep 1;
	_Light1Br=10;
	while {_Light1Br>0} do 
	{
		_removeLight1 setLightBrightness _Light1Br;
		_Light1Br=_Light1Br-0.1;
		
		sleep 1.8;
	};
	sleep 180;
	{if (typeOf _x == "#lightpoint") then {deleteVehicle _x}} forEach (_removeLight1 nearObjects 10);
	deleteVehicle _removeLight1;
};


