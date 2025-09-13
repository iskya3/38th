params ["_bomb"];

_pos = position _bomb;

// --- Explosion Sound ---
_explosionSound = "A3\Sounds_F\weapons\Explosion\expl_big_1";
[_pos, _explosionSound, 1.5, 1] remoteExec ["say3D", 0];

// --- Screen Shake ---
{
    if ((player distance _pos) < 120) then {
        player cameraEffect ["Explosion", 1];
    };
} forEach allPlayers;

// --- Dynamic Light ---
_light = "#lightpoint" createVehicleLocal _pos;
_light setLightColor [1,0.9,0.7];
_light setLightIntensity 500;
_light setLightRange 200;
_light setLightBrightness 3;

_light spawn {
    params ["_l"];
    sleep 1.2;
    deleteVehicle _l;
};

// --- Environment-aware particle effects ---
_bomb execVM "scripts\bomb_environment.sqf";
