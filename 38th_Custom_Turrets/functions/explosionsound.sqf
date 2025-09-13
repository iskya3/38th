_nap_bomb9 = "Land_HelipadEmpty_F" createVehicleLocal _this;	//create an object for the effects to spawn on

if (player distance _nap_bomb9 < 2000) then {
	_nap_bomb9 say3D ["napalm",2000];
};
if (player distance _nap_bomb9 < 1500) then {
	_nap_bomb9 say3D ["explosionfall",2000];
};

if (player distance _nap_bomb9 < 4000) then {
	sleep 3.5;
	_echosound = selectRandom ["echo1","echo2","echo3"];
	playSound _echosound;
};

_flamesSound = 0;
for "_i" from 0 to 32 do {
	_nap_bomb9 say3d ["flames",450];
	sleep 5.5;
	_flamesSound = _flamesSound + 1;
	if (_flamesSound >= 32) exitwith {};
};




//16/ sleep11