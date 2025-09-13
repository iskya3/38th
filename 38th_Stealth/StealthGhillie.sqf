// tr3b's Stealth Ghillie
// 1.1
// ALL CREDIT TO tr3b!

// PLEASE NOTE:  This is a modification for the 38th Starsim, that modifies very little of the actual code
// with the exception of adding the correct armor names and changing some of the coeffecients.  It also adds a small
// initialization statement, just so you know it's working.
// To add your own armor, make sure that you add the proper name, which is the inherited name at the block identifier - 
// hence:  "class USE_THIS_NAME inherited_from_something_else"
// Also make sure you add any special custom coefficient modifiers and custom armor modifiers in the commented section down below
// GhillieSuit = ['38th_Rook_Armor','38th_Rook_Armor_Dirty','38th_ARC_Armor_Base']

GhillieSuit = ['38th_Rook_Armor','38th_Rook_Armor_Dirty','38th_ARC_Armor_Base','38th_ARC_Armor_Dirty','ac38_apollo_uniform','ac38_ares_uniform','ac38_atlas_command_uniform','ac38_athena_uniform','ac38_odin_command_uniform','38th_Senate_Armor','ac38_hat_uniform','ac38_mav_uniform','ac38_yox_uniform','ac38_rain_uniform','ac38_ratnik_uniform','ac38_wilko_uniform','ac38_whatever_uniform','ac38_ameru_uniform','ac38_ritter_uniform'];

Stand = 3;  // orig 5
Crouch = 0.4; // orig .4
Prone = 0.15; // orig .1

Forest = 0.2; // orig .2
Tree = 0.3; // orig .3
Meadow = .8; // orig 1

ARF_Coef = 0.5;
ARC_Coef = 0.5;

NIGHT = 0.8; // orig .5

CoeffCalc = false;
develop = false;

SG_fn_Coeff = {


  	hint parseText format ['Hello, %1.  Loading stealth subroutines.  %2 ready in 25 seconds.',(name player),(uniform player)]; 
	sleep 20;
	hint parseText format ['Enhanced stealth subroutines loaded.  System ready.'];
	sleep 5;
	hintsilent "";


	while {CoeffCalc} do {
		ForestCoeff = position player getEnvSoundController "forest";
		TreeCoeff = position player getEnvSoundController "trees";
		MeadowCoeff = position player getEnvSoundController "meadows";
		NightCoeff = position player getEnvSoundController "night";
		
		PlayerSpeed = speed player;
		PlayerStance = stance player;
		
		if (PlayerStance == 'STAND') then { COEFF = Stand; };
		if (PlayerStance == 'CROUCH') then { COEFF = Crouch; };
		if (PlayerStance == 'PRONE') then { COEFF = Prone; };
		
		if (PlayerSpeed > 0) then { COEFF = COEFF * (PlayerSpeed/15); };
		if (PlayerSpeed == 0) then { COEFF = COEFF * 0.1; };

	//	if (ForestCoeff >= 0.1) then { COEFF = COEFF * (Forest/ForestCoeff); };
	//	if (TreeCoeff >= 0.1) then { COEFF = COEFF * (Tree/TreeCoeff); };
	//	if (MeadowCoeff >= 0.1) then { COEFF = COEFF * (Meadow/MeadowCoeff); };

		if (ForestCoeff >= 0.5) then { COEFF = COEFF * (Forest); }
			else { if (TreeCoeff >= 0.3) then { COEFF = COEFF * (Tree); }
				else { if (Meadow >= .1) then { COEFF = COEFF * (Meadow); }
			}
		};

		if (NightCoeff == 1) then { COEFF = COEFF * NIGHT; };

// ADD CUSTOM ARMOR COEFFICIENTS IN THIS LOCATION (and remove the custom 38th ones below the template line)
// if ((uniform player) isEqualTo "insert_armor_classname") then { COEFF = COEFF * Variable_or_absolute_value; };

// Added ARF armor bonus stealth, 50% stealthier
		if ((uniform player) isEqualTo ("38th_ARC_Armor_Base")) then { COEFF = COEFF * ARF_Coef; };
	if ((uniform player) isEqualTo ("38th_Senate_Armor")) then { COEFF = COEFF * ARF_Coef; };
	if ((uniform player) isEqualTo ("38th_ARC_Armor_Dirty")) then { COEFF = COEFF * ARF_Coef; };
	if ((uniform player) isEqualTo ("ac38_wilko_uniform")) then { COEFF = COEFF * ARF_Coef; };							
// Made Hat a FUCKING GHOST
		if ((uniform player)isEqualTo "38th_hat_uniform") then { COEFF = COEFF * 0.01; };
// Atlas/Odin player specific armor, same as ARF
	if ((uniform player) isEqualTo ("38th_Rook_Armor")) then { COEFF = COEFF * ARC_Coef; };
	if ((uniform player) isEqualTo ("ac38_mav_uniform")) then { COEFF = COEFF * ARC_Coef; };
	if ((uniform player) isEqualTo ("ac38_ratnik_uniform")) then { COEFF = COEFF * ARC_Coef; };
	if ((uniform player) isEqualTo ("ac38_yox_uniform")) then { COEFF = COEFF * ARC_Coef; };
	if ((uniform player) isEqualTo ("ac38_rain_uniform")) then { COEFF = COEFF * ARC_Coef; };
	if ((uniform player) isEqualTo ("ac38_ares_uniform")) then { COEFF = COEFF * ARC_Coef; };
	if ((uniform player) isEqualTo ("ac38_apollo_uniform")) then { COEFF = COEFF * ARC_Coef; };
	if ((uniform player) isEqualTo ("ac38_athena_uniform")) then { COEFF = COEFF * ARC_Coef; };
	if ((uniform player) isEqualTo ("ac38_atlas_command_uniform")) then { COEFF = COEFF * ARC_Coef; };
	if ((uniform player) isEqualTo ("38th_Rook_Armor_Dirty")) then { COEFF = COEFF * ARC_Coef; };
	if ((uniform player) isEqualTo ("ac38_odin_command_uniform")) then { COEFF = COEFF * ARC_Coef; };
	if ((uniform player) isEqualTo ("ac38_ameru_uniform")) then { COEFF = COEFF * ARC_Coef; };
	if ((uniform player) isEqualTo ("ac38_ritter_uniform")) then { COEFF = COEFF * ARC_Coef; };

		player setUnitTrait ['camouflageCoef',COEFF];
		
		if(develop) then {
		hintSilent parseText format ['Stealth Ghillie: Uniform: %1%10 Coeff:%2%10 Stance: %3%10 Speed: %4%10 Forest: %5%10 Tree: %6%10 Meadow: %7%10 Night: %8%10 SG VALUE: %9', (uniform player), CoeffCalc, PlayerStance, PlayerSpeed, ForestCoeff, TreeCoeff, MeadowCoeff, NightCoeff, COEFF, '<br />'];
		 }
	};
};

//  if((uniform player) in GhillieSuit) then { 
//	hint parseText format ['Loading enhanced stealth subroutines for uniform %1!', (uniform player)]; 
//	sleep 20;
//	hint parseText format ['Enhanced stealth subroutines loaded.  System ready.'];
//	sleep 5;
//	hintsilent "";
//};
// player globalChat format ['Uniform: %1',(uniform player)];


_StealthGhillie = createTrigger ["EmptyDetector", [0,0,0]];
_StealthGhillie setTriggerActivation ["ANY","PRESENT",true];
_StealthGhillie setTriggerStatements ["((uniform player) in GhillieSuit)",
"
CoeffCalc = true;
_0 = [] spawn SG_fn_Coeff;
"
,""];


_StealthGhillie = createTrigger ["EmptyDetector", [0,0,0]];
_StealthGhillie setTriggerActivation ["ANY","PRESENT",true];
_StealthGhillie setTriggerStatements ["(!((uniform player) in GhillieSuit))",
"
CoeffCalc = false;
"
,""];

