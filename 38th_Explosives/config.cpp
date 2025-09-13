class CfgPatches
{
	class 38th_Explosives
	{
		author="isky";
		weapons[]={};
		units[]={};
		requiredAddons[]=
		{
            "38th_Core",
            "CBA_Extended_EventHandlers",
            "ACE_Explosives"
		};
        skipWhenMissingDependencies =1;
	};
};
#include "effects.hpp"
class CfgAmmo
{
    class PipeBombBase;
    class 38th_Portable_Bomb_Ammo : PipeBombBase
    {
       displayName = "BOOM";
       model = "\A3\Weapons_F\explosives\satchel.p3d";
       proxyShape = "\A3\Weapons_F\explosives\satchel.p3d";

        // Damage balance
        hit = 2000;                // Direct impact
        indirectHit = 1200;        // Max splash damage at center
        indirectHitRange = 30;    // Blast radius

        explosive = 1;
        craterEffects = "HeavyBombCrater";
        explosionEffects = "inferno_HE_Explosion";
       // explosionEffects = "HeavyBombExplosion";

        soundSetExplosion[]=
		{
			"BombsHeavy_Exp_SoundSet",
			"BombsHeavy_Tail_SoundSet",
			"Explosion_Debris_SoundSet"
		};
        explosionSoundEffect = "DefaultExplosion";

        cost = 5000;
        dangerRadiusHit = 200;
        suppressionRadiusHit = 180;
        scope = 2;

        // ACE fuse
        ace_explosives_fuseTime = 0.1;
        triggerWhenDestroyed = 1;
    };
};

class CfgMagazines
{
    class CA_Magazine;
    class ATMine_Range_Mag;
    class 38th_Portable_Bomb_Mag : ATMine_Range_Mag
    {
        displayName = "[38th] XM-1200 Inferno";
        scope = 2;
        ammo = "38th_Portable_Bomb_Ammo";
        count = 1;
        initSpeed = 0;
        mass = 300;
        picture = "\A3\Weapons_F\Data\UI\gear_satchel_CA.paa"; 
        model = "\A3\Weapons_F\explosives\satchel.p3d";
        ACE_Explosives_Placeable = 1;
        descriptionShort = "Massive bomb with 120m blast radius";
        ACE_Explosives_SetupObject = "38th_Portable_Bomb_Placed"; 
        class ACE_Triggers 
        {
            SupportedTriggers[] = {"DeadmanSwitch","Timer"};
            class Command 
            {
                fuseTime = 0.5;
            };
            class Timer 
			{
                FuseTime = 0.5; 
            };
			class DeadmanSwitch: Command {};
		};
    };
};

class CfgWeapons
{
    class Default;
    class Put : Default
    {
        muzzles[] += {"38th_Portable_Bomb_Muzzle"};
        class PutMuzzle;
        class 38th_Portable_Bomb_Muzzle : PutMuzzle
        {
            magazines[] = {"38th_Portable_Bomb_Mag"};
        };
    };
};

class CfgVehicles
{
    class ACE_Explosives_Place;
    class 38th_Portable_Bomb_Placed : ACE_Explosives_Place
    {
        displayName = "XM-1200 Inferno (Placed)";
        model = "\A3\Weapons_F\explosives\satchel.p3d";
        ammo = "38th_Portable_Bomb_Ammo";
        mineInconspicuousness = 20;
        mineTrigger = "RemoteTrigger";
        class EventHandlers
        {
            init = "_this addEventHandler ['ACE_Explosives_Detonate',{_this execVM '\38th\38th_Explosives\scripts\BombExplosionEffects.sqf'}];";
        };
    };
};

class ACE_Explosives
{
    class 38th_Portable_Bomb_Mag
    {
        DisplayName = "XM-1200 Inferno";
        PlacedObject = "38th_Portable_Bomb_Placed";
        SetupObject = "ACE_Explosives_Place";
        TriggerDistance = 0;
        TriggerTime = 0;
    };
};
