_nap_bomb1 = "Land_HelipadEmpty_F" createVehicleLocal _this;	//create an object for the effects to spawn on




_sparksfx = "#particlesource" createVehicleLocal (getPosATL _nap_bomb1);
_sparksfx setParticleCircle [20,[40,40,50]];
_sparksfx setParticleRandom [3,[5,5,5],[30,30,35],0,0.5,[1,1,0,0.1],1,0];
_sparksfx setParticleParams [["\A3\data_f\cl_exp",1,0,1],"","Billboard",1,3,[0,0,5],[1,1,5],0,300,10,15,[0.5,0.25],[[1,1,1,1],[1,1,1,1]],[1],1,0,"","",_nap_bomb1,0,false,-1,[[1,0.1,0,1]]];
_sparksfx setDropInterval 0.0025;	
[_sparksfx] spawn {
	_removeFX = _this select 0;
	sleep 0.75;
	deleteVehicle _removeFX;
};

_explosionLight1 = "#lightpoint" createVehicle (getPosATL _nap_bomb1);
_explosionLight1 lightAttachObject [_nap_bomb1, [0,0,1]];
_explosionLight1 setLightAttenuation [0,0,0,0,40,600];  
_explosionLight1 setLightIntensity 500;
_explosionLight1 setLightBrightness 10;
_explosionLight1 setLightDayLight true;	
_explosionLight1 setLightUseFlare true;
_explosionLight1 setLightFlareSize 100;
_explosionLight1 setLightFlareMaxDistance 2000;	
_explosionLight1 setLightAmbient[1,0.2,0.1];
_explosionLight1 setLightColor[1,0.2,0.1];
[_explosionLight1] spawn {
	_removeFX = _this select 0;
	sleep 0.25;
	deleteVehicle _removeFX;
};





_ripple = "#particlesource" createVehicleLocal (getposatl _nap_bomb1);
_ripple setParticleCircle [0,[0,0,0]];
_ripple setParticleRandom [0,[0.25,0.25,0],[0.175,0.175,0],0,0.25,[0,0,0,0.1],0,0];
_ripple setParticleParams [["\A3\data_f\ParticleEffects\Universal\Refract.p3d",1,0,1], "", "Billboard", 1, 0.5, [0, 0, 0], [0, 0, 0],0,10,7.9,0, [0,60], [[1, 1, 1, 1], [1, 1, 1, 1]], [0.08], 1, 0, "", "", _nap_bomb1];
_ripple setDropInterval 0.5;
[_ripple] spawn {
	_removeFX = _this select 0;
	sleep 0.5;
	deleteVehicle _removeFX;
};




{
	_x hideObjectGlobal true
} forEach (nearestTerrainObjects [_nap_bomb1, ["tree","bush"], 40]); 



sleep 5;
deleteVehicle _nap_bomb1;


