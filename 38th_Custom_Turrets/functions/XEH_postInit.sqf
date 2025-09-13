AltMun_Nap_Damage = {  
    _center_napalm = "Land_HelipadEmpty_F" createVehicleLocal _this;
    _center_napalm allowDamage false;

    {
        _x hideObjectGlobal true
    } forEach (nearestTerrainObjects [_center_napalm, ["tree","bush"], 40]);


    while {alive _center_napalm} do 
    {

        if (isClass(configFile >> "CfgPatches" >> "ace_main")) then 
        {	

            {
                private _RandomBodyPart = ["Body", "Head", "LeftArm","RightARm", "LeftLeg", "RightLeg"] call BIS_fnc_selectRandom;
                [_x, 4] call ace_fire_fnc_burn;
            //	[_x, (0.25+random 0.8), _RandomBodyPart, "burn"] remoteExec ["ace_medical_fnc_addDamageToUnit", _x];
                [_x, 0.75] call ace_medical_status_fnc_adjustPainLevel;
            } forEach (nearestObjects [_center_napalm, [
            "Man",
            "Civilian",
            "SoldierGB",
            "SoldierEB",
            "SoldierWB"], 27]);
        }  else 
        {
            {
            _x setDamage ((damage _x) + 0.2);
            _x setStamina 0;
            } forEach (nearestObjects [_center_napalm, [
            "Man",
            "Civilian",
            "SoldierGB",
            "SoldierEB",
            "SoldierWB"], 27]);
        };
            
        {
        _x setDamage (damage _x) +0.04;
        [_x, 4] call ace_fire_fnc_burn;
        } forEach (nearestObjects [_center_napalm, [
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

        {
        _x setDamage (damage _x) +0.06;
        } forEach (nearestObjects [_center_napalm, [
        "Building"
        ], 27]); 
        _center_napalm setDamage 0;
        sleep 2;
    };
};

AltMun_Nap_FireLight = {
    _nap_fireCentre = "Land_HelipadEmpty_F" createVehicleLocal _this;
    _nap_fireCentre allowDamage false;
    while {alive _nap_fireCentre} do
    {
        _fireLight = "#lightpoint" createVehicle (getPosATL _nap_fireCentre);
        _fireLight lightAttachObject [_nap_fireCentre, [0,0,0.25]];
        _fireLight setLightAttenuation [0,1,1,0.4,0,50];  
        _fireLight setLightIntensity 1;
        _fireLight setLightBrightness 6;
        _fireLight setLightDayLight true;	
        _fireLight setLightUseFlare false;
        _fireLight setLightFlareSize 0;
        _fireLight setLightFlareMaxDistance 0;	
        _fireLight setLightAmbient[0.7,0.35,0.1];
        _fireLight setLightColor[0.7,0.4,0.15];

        [_fireLight] spawn 
        {
            private ["_dimLight"];
            _dimLight = _this select 0;
            sleep 15;
            _LightBr=6;
            while {_LightBr>1} do 
            {
                _dimLight setLightBrightness _LightBr;
                _LightBr=_LightBr-0.05;
                
                sleep 1.15;
            };
        };
        
        [_fireLight] spawn 
        {
            private ["_remove_fireLight"];
            _remove_fireLight = _this select 0;
            sleep 87;
            deleteVehicle _remove_fireLight;
        };


        sleep 120;
    };
};

/*AltMun_Nap_FireSound = {
    private ["_nap_fireSound_centre","_flamesSound"];
    _nap_fireSound_centre = "Land_HelipadEmpty_F" createVehicleLocal _this;
    _nap_fireSound_centre allowDamage false;	//create an object for the effects to spawn on
    playSound3D ["\Alt_Munitions\Napalm\sounds\flames.wss", _nap_fireSound_centre, false, getPosASL _nap_fireSound_centre, 5, 1, 300];

    [_nap_fireSound_centre] spawn 
        {
            private ["_removeFireSound"];
            _removeFireSound = _this select 0;
            sleep 85;
            deleteVehicle _removeFireSound;
        };
};*/

AltMun_Nap_FireVisual = {
    _nap_fireVisual_centre = "Land_HelipadEmpty_F" createVehicleLocal _this;
    _nap_fireVisual_centre allowDamage false;

    //particleSource setParticleParams [[particleShape, particleFSNtieth,particleFSIndex,particleFSFrameCount, particleFSLoop, animationName,
    //particleType, timerPeriod, lifeTime, position, moveVelocity, rotationVelocity, weight, volume, rubbing, size, color, 
    //animationSpeed, randomDirectionPeriod, randomDirectionIntensity, onTimerScript, beforeDestroyScript, this, angle,onSurface,bounceOnSurface,emissiveColor, vectorDir];

    while {alive _nap_fireVisual_centre} do
    {	
        //heat haze
        _refraction_heat = "#particlesource" createVehicleLocal (getPosATL _nap_fireVisual_centre);
        _refraction_heat setParticleCircle [8,[0,0,0]];
        _refraction_heat setParticleRandom [3,[10,10,5],[0.175,0.175,2],0,0.5,[0,0,0,0.1],0,0];
        _refraction_heat setParticleParams [["\A3\data_f\ParticleEffects\Universal\Refract.p3d", 1, 0, 1],"","Billboard",1,5,[0,0,0],[0,0,5],30,10.2,7.9,0.1,[2,5,2],[[1,1,1,0],[1,1,1,0.5],[1,1,1,0]],[0.15],1,0,"","",_nap_fireVisual_centre];
        _refraction_heat setDropInterval 0.075;
        [_refraction_heat] spawn 
        {
            private ["_remove_refraction_heat"];
            _remove_refraction_heat = _this select 0;
            sleep 86;
            deleteVehicle _remove_refraction_heat;
        };



        //fire fx
        _flames_Tiny = "#particlesource" createVehicleLocal (getPosATL _nap_fireVisual_centre);
        _flames_Tiny setParticleCircle [18,[0,0,0]];
        _flames_Tiny setParticleRandom [1.5,[5,5,0],[0,0,0],0.1,0.85,[0.15,0.15,0,0.2],1,0];
        _flames_Tiny setParticleParams [["\A3\data_f\ParticleEffects\Universal\Universal",16,10,32,1],"","Billboard",1,1.25,[0,0,0],[0,0,0],0,10.07,7.9,0,[1.5,1.5,2.25],[[1,1,1,1],[1,1,1,1],[1,1,1,1]],[1.25],0, 0, "", "", _nap_fireVisual_centre];
        _flames_Tiny setDropInterval 0.0075;
        [_flames_Tiny] spawn 
        {
            private ["_remove_flames_Tiny"];
            _remove_flames_Tiny = _this select 0;
            sleep 86;
            deleteVehicle _remove_flames_Tiny;
        };




        _big_flames_center = "#particlesource" createVehicleLocal (getPosATL _nap_fireVisual_centre);
        _big_flames_center setParticleCircle [6,[0,0,0]];
        _big_flames_center setParticleRandom [3,[5,5,0],[0,0,0],0.1,2.35,[0.15,0.15,0,0],1,0];
        _big_flames_center setParticleParams [["\A3\data_f\ParticleEffects\Universal\Universal",16,10,32,1],"","Billboard",1,1.75,[0,0,0],[0,0,0],0,10.07,7.9,0,[1.5,1.5,2,2.3,0.5],[[1,1,1,1],[1,1,1,1],[1,1,1,1]],[0.9],0, 0, "", "", _nap_fireVisual_centre,0,true];
        _big_flames_center setDropInterval 0.03;
        [_big_flames_center] spawn 
        {
            private ["_removeFire1"];
            _removeFire1 = _this select 0;
            sleep 85;
            deleteVehicle _removeFire1;
        };
        [_big_flames_center] spawn 
        {
            private ["_big_flames_reduceDrop"];
            _big_flames_reduceDrop = _this select 0;
            _dropInterval = 0;
            while {_dropInterval < 0.85} do
            {
                sleep 1;
                _dropInterval = _dropInterval + 0.01;
                if (_dropInterval > 0.6 && _dropInterval < 0.75) then
                {
                    _big_flames_reduceDrop setParticleRandom [3,[5,5,0],[0,0,0],0.1,2.15,[0.15,0.15,0,0],1,0];
                    //hintSilent "0.6";
                };
                if (_dropInterval > 0.75) then
                {
                    _big_flames_reduceDrop setParticleRandom [3,[6,6,0],[0,0,0],0.1,1.85,[0.15,0.15,0,0],1,0];
                   // hintSilent "0.75";
                };
            };
        };

 
        //fireSparks
        _fireSparks = "#particlesource" createVehicleLocal (getPosATL _nap_fireVisual_centre);
        _fireSparks setParticleCircle [6,[0,0,0]];
        _fireSparks setParticleRandom [0.75,[8,8,1],[1,1,1],0.5,1.75,[0.25,0.25,0.25,0],0,0];
        _fireSparks setParticleParams [["\A3\data_f\ParticleEffects\Universal\Universal.p3d",16,1,16,0],"","Billboard",1,3.5,[0,0,0],[1,1,1],20,7.5,7.9,0.5,[0,2],[[1,1,1,1],[1,1,1,1],[1,1,1,1]],[1.25],0,0,"","",_nap_fireVisual_centre,0,true,-1,[[2000,1000,50,1]]];
        _fireSparks setDropInterval 0.2;
        [_fireSparks] spawn 
        {
            private ["_remove_fireSparks"];
            _remove_fireSparks = _this select 0;
            sleep 85;
            deleteVehicle _remove_fireSparks;
        };


        //smoke
        _big_smoke = "#particlesource" createVehicleLocal (getPosATL _nap_fireVisual_centre);
        _big_smoke setParticleCircle [0,[0,0,0]];
        _big_smoke setParticleRandom [17,[5,5,0],[-2,-2,0],5,0.5,[0,0,0,0.1],1,0];
        _big_smoke setParticleParams [["\A3\data_f\ParticleEffects\Universal\Universal_02.p3d",8,0,40,1],"","Billboard",1,20,[0,0,-5],[1,1,4],13,10,7.9,0.1,[10,15,30,40,60],[[0,0,0,0.1],[0.1,0.1,0.1,0.65],[0.1,0.1,0.1,0.5],[0.2,0.2,0.2,0.3],[0.5,0.5,0.5,0.15],[0.5,0.5,0.5,0]],[0.3],1, 0, "", "", _nap_fireVisual_centre];
        _big_smoke setDropInterval 0.35;
        [_big_smoke] spawn 
        {
            private ["_removeSmoke"];
            _removeSmoke = _this select 0;
            sleep 85;
            deleteVehicle _removeSmoke;
        };

        sleep 120;
    };
};

AltMun_Nap_EndFX = {
    sleep 90;
    {
        deleteVehicle _x
    } forEach (nearestObjects [_this,["Land_HelipadEmpty_F","#lightpoint","#particlesource"], 25]);
};




AltMun_WP_DamageUnits = {
    _Center_WP_DamageUnits = "Land_HelipadEmpty_F" createVehicleLocal _this;
    _Center_WP_DamageUnits allowDamage false;
    while {alive _Center_WP_DamageUnits} do 
    {        
        {
            if (isClass(configFile >> "CfgPatches" >> "ace_main")) then 
            {
                //private _RandomBodyPart = ["Body", "Head", "LeftArm","RightARm", "LeftLeg", "RightLeg"] call BIS_fnc_selectRandom;
            //	[_x, (0.25+random 0.8), _RandomBodyPart, "burn"] remoteExec ["ace_medical_fnc_addDamageToUnit", _x];
                [_x, 4] call ace_fire_fnc_burn;
                [_x, 0.75] call ace_medical_status_fnc_adjustPainLevel;						//set on fire if close to burn point
            } else 
            {
                _x setDamage ((damage _x) + 0.15);
                _x setStamina 0;
            };
        } forEach (nearestObjects [_Center_WP_DamageUnits, [
        "Man",
        "Civilian",
        "SoldierGB",
        "SoldierEB",
        "SoldierWB"
        ], 3]);

        if (isClass(configFile >> "CfgPatches" >> "ace_main")) then 
        {
            {
                //private _RandomBodyPart = ["Body", "Head", "LeftArm","RightARm", "LeftLeg", "RightLeg"] call BIS_fnc_selectRandom;
                [_x, (0.15+random 0.15), "Body", "burn"] remoteExec ["ace_medical_fnc_addDamageToUnit", _x];									//lung damage
            } forEach (nearestObjects [_Center_WP_DamageUnits, [
            "Man",
            "Civilian",
            "SoldierGB",
            "SoldierEB",
            "SoldierWB"
            ], 8]);
        };

        {
        _x setDamage ((damage _x) + 0.08);
        } forEach (nearestObjects [_Center_WP_DamageUnits, [
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
        ], 6]); 


        {
        _x setDamage ((damage _x) +0.002);
        } forEach (nearestObjects [_Center_WP_DamageUnits, [
        "Building"
        ], 4]); 

        _Center_WP_DamageUnits setDamage 0;
        sleep 2;
        _Center_WP_DamageUnits setDamage 0;
    };


};

AltMun_WP_Smokefx = {
    _wp_sparkfx = "Land_HelipadEmpty_F" createVehicleLocal _this;
    _wp_sparkfx allowDamage false;
    _smokeShellWP = "WNZ_INC_Submunition2" createVehicleLocal _this;
    _smokeShellWP attachTo [_wp_sparkfx, [0,0,0]];
    
    _sparks = "#particlesource" createVehicleLocal getPosATL _wp_sparkfx;
    _sparks setParticleCircle [0,[0,0,0]];
    _sparks setParticleRandom [4.5,[0,0,0],[10,10,10],0,0.05,[0,0,0,0.1],1,0];
    _sparks setParticleParams [["\A3\data_f\kouleSvetlo",1,0,1],"","Billboard",0.05,2,[0,0,0],[0,0,5],0,300,10,15,[0.2,0.05],[[1,1,1,1],[1,1,1,1]],[1],1,0,"38th\38th_Custom_Turrets\trail.sqf","",_wp_sparkfx,0,false,-1,[[1000,1000,1000,1]]];
    _sparks setDropInterval 0.45;
    [_sparks] spawn 
    {
        private ["_removeWPsparks"];
        _removeWPsparks = _this select 0;
        sleep 60;
        deleteVehicle _removeWPsparks;
    };

    
    _wp_light = "#lightpoint" createVehicle (getPosATL _wp_sparkfx);
    _wp_light lightAttachObject [_wp_sparkfx, [0,0,0]];
    _wp_light setLightAttenuation [0,0,0,4,0,25];  
    _wp_light setLightIntensity 1;
    _wp_light setLightBrightness 1;
    _wp_light setLightDayLight true;	
    _wp_light setLightUseFlare true;
    _wp_light setLightFlareSize 1;
    _wp_light setLightFlareMaxDistance 1600;	
    _wp_light setLightAmbient[1,1,1];
    _wp_light setLightColor[1,1,1];
    [_wp_light] spawn 
    {
        private ["_remove_wp_lighting"];
        _remove_wp_lighting = _this select 0;
        sleep 60;
        deleteVehicle _remove_wp_lighting;
    };

    while {alive _smokeShellWP} do
    {
        _smokeShellWP say3D ["wpsmokeburn",25,1];
        sleep 4;
    };








};

AltMun_WP_EndFX = {
    sleep 58;
    {
        deleteVehicle _x
    } forEach (nearestObjects [_this, ["#lightpoint","#particlesource"], 15]);
    sleep 0.1;
    {
        deleteVehicle _x
    } forEach (nearestObjects [_this, ["Land_HelipadEmpty_F","#lightpoint","#particlesource"], 15]);
};
