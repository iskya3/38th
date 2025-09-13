[ 
    "WBK_Droid_b1_damage", 
    "EDITBOX", 
    "Amount of hits B1 can take",
    "38th Droids",
    "7",
    1,
    {   
        params ["_value"];  
        _number = parseNumber _value;
		WBK_B1_AmountOfDamage = _number;
    }
] call CBA_fnc_addSetting;


[ 
    "WBK_Droid_b2_damage", 
    "EDITBOX", 
    "Amount of hits B2 can take",
    "38th Droids",
    "20",
    1,
    {   
        params ["_value"];  
        _number = parseNumber _value;
		WBK_B2_AmountOfDamage = _number;
    }
] call CBA_fnc_addSetting;