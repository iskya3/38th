class JLTS_Clone_backpack;
class JLTS_Clone_RTO_pack;
class JLTS_Clone_backpack_RTO;
class JLTS_Clone_backpack_medic;
class JLTS_Clone_ARC_backpack;
class JLTS_Clone_jumppack_JT12;
class JLTS_Clone_jumppack_mc;
class DBA_Jumppack_Standard;
class JLTS_portable_shield_gar_backpack;
	class Bag_Base;
	class Weapon_Bag_Base: Bag_Base
	{
		class assembleInfo;
	};
class 38th_RTO_Mini: JLTS_Clone_RTO_Pack
{
    author = "isky";
    displayName = "[38th] Trooper RTO (Mini)";
    maximumLoad = 500;
    mass = 12;
	hiddenSelectionsTextures[] = {"38th\38th_Armor\data\backpack\mini_rto_base_co.paa"};
};
class 38th_RTO_Mini_Rook: JLTS_Clone_RTO_Pack
{
    author = "isky";
    displayName = "[38th] Rook Trooper RTO (Mini)";
    maximumLoad = 500;
    mass = 12;
	hiddenSelectionsTextures[] = {"38th\38th_Armor\data\backpack\mini_rto_arf_base_co.paa"};
};
class 38th_RTO_Mini_black: JLTS_Clone_RTO_Pack
{
    author = "isky";
    displayName = "[38th] Trooper RTO Black (Mini)";
    maximumLoad = 500;
    mass = 12;
	hiddenSelectionsTextures[] = {"38th\38th_Armor\data\backpack\mini_rto_command_co.paa"};
};
    class 38th_Shield_Generator: Weapon_Bag_Base
    {
		author="MrClock + 38thS5";
		mapSize=0.60000002;
		_generalMacro="38th_Shield_Generator";
		scope=2;
		scopeCurator=2;
		displayName="[38th] Portable Shield Generator";
		model="\MRC\JLTS\characters\CloneArmor\CloneBackpack.p3d";
		editorCategory="EdCat_Equipment";
		editorSubcategory="EdSubcat_Backpacks";
		faction="JLTS_GAR";
		picture="\MRC\JLTS\characters\CloneArmor\data\ui\Clone_backpack_ui_ca.paa";
		hiddenSelections[]=
		{
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"\MRC\JLTS\weapons\Statics\data\generator_gar_backpack_co.paa"
		};
		maximumLoad=0;
		mass=10;
        class assembleInfo: assembleInfo
        {
            base="";
            displayName="$STR_JLTS_names_PortableShieldGAR";
            assembleTo="38th_portable_shield";
        };
    };
class 38th_RTO_Large: JLTS_Clone_backpack_RTO
{
    author = "isky";
    displayName = "[38th] Trooper RTO Pack (Large)";
    maximumLoad = 700;
    mass = 20;
};
class 38th_Pack_Base: JLTS_Clone_backpack
{
    author = "isky";
    displayName = "[38th] Trooper Pack(Base)";
    maximumLoad = 500;
    mass = 20;
    hiddenSelectionsTextures[] = {"38th\38th_Armor\data\backpack\Backpack_base_co.paa"};
};
class 38th_Rook_Pack_Base: JLTS_Clone_backpack
{
    author = "isky";
    displayName = "[38th] Rook Trooper Pack(Base)";
    maximumLoad = 500;
    mass = 20;
    hiddenSelectionsTextures[] = {"38th\38th_Armor\data\backpack\Backpack_arf_base_co.paa"};
};
class 38th_Rook_Pack_Medic: JLTS_Clone_backpack_medic
{
    author = "isky";
    displayName = "[38th] Rook Trooper Pack(Medic)";
    maximumLoad = 700;
    mass = 20;
    hiddenSelectionsTextures[] = {"38th\38th_Armor\data\backpack\Backpack_arf_medic_co.paa"};
};
class 38th_Rook_Pack_Heavy: JLTS_Clone_backpack
{
    author = "isky";
    displayName = "[38th] Rook Trooper Pack(Heavy)";
    maximumLoad = 900;
    mass = 20;
    hiddenSelectionsTextures[] = {"38th\38th_Armor\data\backpack\Backpack_arf_base_co.paa"};
};
class 38th_Pack_Heavy: JLTS_Clone_backpack
{
    author = "isky";
    displayName = "[38th] Trooper Pack(Heavy)";
    maximumLoad = 900;
    mass = 20;
    hiddenSelectionsTextures[] = {"38th\38th_Armor\data\backpack\Backpack_heavy_co.paa"};
};
class 38th_Pack_Medic: JLTS_Clone_backpack_medic
{
    author = "isky";
    displayName = "[38th] Trooper Pack(Medic)";
    maximumLoad = 700;
    mass = 20;
    hiddenSelectionsTextures[] = {"38th\38th_Armor\data\backpack\Backpack_base_medic_co.paa"};
};
class 38th_Pack_Medic_Radio: JLTS_Clone_backpack_medic
{
    author = "isky";
    displayName = "[38th] Trooper Pack LR(Medic)";
    maximumLoad = 700;
    mass = 20;
    isbackpack=1;
    hiddenSelectionsTextures[] = {"38th\38th_Armor\data\backpack\Backpack_base_medic_co.paa"};
    tf_dialog="JLTS_clone_rto_radio_dialog";
    tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
    tf_encryptionCode="tf_west_radio_code";
    tf_hasLRradio=1;
    tf_range=27000;
    tf_subtype="digital_lr";
};
class B_Kitbag_rgr;
class 38th_ARC_Pack: B_Kitbag_rgr
{
    scope = 2;
    scopeCurator = 2;
    scopeArsenal = 2;
    author = "isky";
    displayName = "[38th] ARC Trooper Pack";
    hiddenSelectionsTextures[] = {"38th\38th_Armor\data\arc\ARCBackpack_co.paa"};
    model="38th\38th_Armor\ARC_Backpack.p3d";
    maximumLoad = 900;
    mass = 40;
    isbackpack=1;
    tf_dialog="JLTS_clone_rto_radio_dialog";
    tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
    tf_encryptionCode="tf_west_radio_code";
    tf_hasLRradio=1;
    tf_range=35000;
    tf_subtype="digital_lr";
};
class 38th_JumpPack: DBA_Jumppack_Standard
{
    author = "isky";
    displayName = "[38th] JumpPack";
    hiddenSelectionsTextures[] = {"38th\38th_Armor\data\airborne\packs\Phoenix_Jump_pack_Classic_CO.paa"};
    maximumLoad = 700;
    mass = 20;
    tf_dialog="JLTS_clone_rto_radio_dialog";
    tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
    tf_encryptionCode="tf_west_radio_code";
    tf_hasLRradio=1;
    tf_range=27000;
    tf_subtype="digital_lr";
};
class 38th_JumpPack_Medic: DBA_Jumppack_Standard
{
    author = "isky";
    displayName = "[38th] JumpPack (Medic)";
    hiddenSelectionsTextures[] = {"38th\38th_Armor\data\airborne\packs\Phoenix_Jump_pack_Medic_CO.paa"};
    maximumLoad = 700;
    mass = 20;
    tf_dialog="JLTS_clone_rto_radio_dialog";
    tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
    tf_encryptionCode="tf_west_radio_code";
    tf_hasLRradio=1;
    tf_range=27000;
    tf_subtype="digital_lr";
};
class 38th_JumpPack_Mando: JLTS_Clone_jumppack_JT12
{
    author = "isky";
    displayName = "[38th] Mandalorian JumpPack";
    hiddenSelectionsTextures[] = {"38th\38th_Armor\data\airborne\packs\Phoenix_Jump_pack_Mandalorian_CO.paa"};
    maximumLoad = 700;
    mass = 20;
    tf_dialog="JLTS_clone_rto_radio_dialog";
    tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
    tf_encryptionCode="tf_west_radio_code";
    tf_hasLRradio=1;
    tf_range=27000;
    tf_subtype="digital_lr";
};
    class Land_HBarrier_1_F;
	class 38th_portable_shield: Land_HBarrier_1_F
	{
		author="MrClock";
		scope=2;
		displayName="$STR_JLTS_names_PortableShieldGAR";
		model="\MRC\JLTS\weapons\Statics\generator\generator_shield.p3d";
		hiddenSelections[]=
		{
			"camo1",
			"glow"
		};
		hiddenSelectionsTextures[]=
		{
			"\MRC\JLTS\weapons\Statics\generator\data\generator_co.paa",
			"\MRC\JLTS\weapons\Statics\generator\data\generator_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"",
			"\a3\characters_f_bootcamp\common\data\vrarmoremmisive.rvmat"
		};
		editorPreview="\MRC\JLTS\weapons\Statics\generator\data\ui\editorPreviews\JLTS_portable_shield.jpg";
		editorCategory="JLTS_objects";
		editorSubcategory="EdSubcat_Military";
		class AnimationSources
		{
			class shield_source
			{
				AnimPeriod=0.1;
				source="user";
				InitPhase=1;
			};
		};
		class UserActions
		{
			class shield_on
			{
				displayName="$STR_JLTS_names_UAActivateShield";
				displayNameDefault="<img image='\MRC\JLTS\weapons\Statics\generator\data\ui\activate_shield_ca.paa' size='3' shadow='false' />";
				priority=0;
				radius=1.5;
				position="camera";
				showWindow=1;
				hideOnUse=1;
				onlyForPlayer=1;
				shortcut="";
				condition="((this animationSourcePhase 'shield_source') < 0.5) && (cameraOn isKindOf 'CAManBase')";
				statement="this animateSource ['shield_source',1]";
			};
			class shield_off
			{
				displayName="$STR_JLTS_names_UADeactivateShield";
				displayNameDefault="<img image='\MRC\JLTS\weapons\Statics\generator\data\ui\deactivate_shield_ca.paa' size='3' shadow='false' />";
				priority=0;
				radius=1.5;
				position="camera";
				showWindow=1;
				hideOnUse=1;
				onlyForPlayer=1;
				shortcut="";
				condition="((this animationSourcePhase 'shield_source') > 0.5) && (cameraOn isKindOf 'CAManBase')";
				statement="this animateSource ['shield_source',0]";
			};
		};
		class assembleInfo
		{
			primary=1;
			base="";
			assembleTo="";
			displayName="";
			dissasembleTo[]=
			{
				"38th_Shield_Generator"
			};
		};
		class Attributes
		{
			class Shield_on
			{
				displayName="$STR_JLTS_names_UAActivateShield";
				tooltip="";
				property="JLTS_portable_shield_gar_shieldOn";
				control="CheckboxNumber";
				expression="_this animateSource ['shield_source',_value]";
				defaultValue=0;
			};
		};
	};
