class CfgPatches
{
	class 38th_TFAR
	{
		author="MrClock+38th S5";
		requiredAddons[]=
		{
			"tfar_core",
			"JLTS_radios",
			"JLTS_characters_CloneArmor",
			"JLTS_characters_DroidArmor"
		};
		skipWhenMissingDependencies =1;
		weapons[]={};
		units[]={};
		version=1;
		versionStr="1.0.0";
		versionAr[]={1,0,0};
	};
};
class RscBackPicture;
class RscEditLCD;
class HiddenButton;
class HiddenRotator;
class JLTS_clone_comlink_dialog
{
	onUnload="['OnRadioOpen', [player, TF_sw_dialog_radio, false, 'JLTS_clone_comlink_dialog', false]] call TFAR_fnc_fireEventHandlers;";
	onLoad="if(sunOrMoon < 0.2)then{((_this select 0) displayCtrl 67676) ctrlSetText '\MRC\JLTS\radios\data\ui\clone_comlink_night_ui_ca.paa';};";
	class edit: RscEditLCD
	{
		tooltip="$STR_tfar_core_current_freq";
		onKeyUp="if (_this select 1 in [28,156]) then { [((ctrlParent (_this select 0))) displayCtrl 1400] call TFAR_handhelds_fnc_onButtonClick_Enter; };";
	};
	class channel_edit: RscEditLCD
	{
		tooltip="$STR_tfar_core_current_channel";
	};
	class enter: HiddenButton
	{
		tooltip="$STR_tfar_core_set_frequency";
		onButtonClick="[((ctrlParent (_this select 0))) displayCtrl 1400] call TFAR_handhelds_fnc_onButtonClick_Enter;";
		action="";
	};
	class clear: HiddenButton
	{
		tooltip="$STR_tfar_core_clear_frequency";
		action="ctrlSetText [1400,'']; ctrlSetFocus ((findDisplay 1333) displayCtrl 1400);";
	};
	class additional: HiddenButton
	{
		tooltip="$STR_tfar_core_set_additional";
		action="[TF_sw_dialog_radio, TF_sw_dialog_radio call TFAR_fnc_getSwChannel] call TFAR_fnc_setAdditionalSwChannel; call TFAR_fnc_updateSWDialogToChannel; [TF_sw_dialog_radio, false] call TFAR_fnc_showRadioInfo;";
	};
	class speakers: HiddenButton
	{
		tooltip="$STR_tfar_core_speakers_settings_true";
		action="[TF_sw_dialog_radio] call TFAR_fnc_setSwSpeakers;[TF_sw_dialog_radio] call TFAR_fnc_showRadioSpeakers;";
	};
	class next_channel: HiddenButton
	{
		tooltip="$STR_tfar_core_next_channel";
		action="[1, false] call TFAR_fnc_setChannelViaDialog;";
	};
	class prev_channel: HiddenButton
	{
		tooltip="$STR_tfar_core_previous_channel";
		action="[0, false] call TFAR_fnc_setChannelViaDialog;";
	};
	class stereo: HiddenButton
	{
		action="[TF_sw_dialog_radio,((TF_sw_dialog_radio call TFAR_fnc_getCurrentSwStereo) + 1) mod 3] call TFAR_fnc_setSwStereo; [TF_sw_dialog_radio] call TFAR_fnc_showRadioVolume;";
		tooltip="$STR_tfar_core_stereo_settings";
	};
	class volume_Switch: HiddenRotator
	{
		idc=-1;
		tooltip="$STR_tfar_core_rotator_volume";
		onMouseButtonDown="[_this select 1, false] call TFAR_fnc_setVolumeViaDialog;";
	};
};
class JLTS_clone_lr_programmer_radio_dialog
{
	onUnload="['OnRadioOpen', [player, TF_lr_dialog_radio, true, 'JLTS_clone_lr_programmer_radio_dialog', false]] call TFAR_fnc_fireEventHandlers;";
	onLoad="if(sunOrMoon < 0.2)then{((_this select 0) displayCtrl 67676) ctrlSetText '\MRC\JLTS\radios\data\ui\clone_programmer_night_ui_ca.paa';};";
	class background;
	class edit: RscEditLCD
	{
		tooltip="$STR_tfar_core_current_freq";
		onKeyUp="if (_this select 1 in [28,156]) then { [((ctrlParent (_this select 0))) displayCtrl 1410] call TFAR_backpacks_fnc_onButtonClick_Enter; };";
	};
	class channel_edit: RscEditLCD
	{
		tooltip="$STR_tfar_core_current_channel";
	};
	class clear: HiddenButton
	{
		tooltip="$STR_tfar_core_clear_frequency";
		action="ctrlSetText [1410,'']; ctrlSetFocus ((findDisplay 1666) displayCtrl 1410);";
	};
	class enter: HiddenButton
	{
		tooltip="$STR_tfar_core_set_frequency";
		onButtonClick="[((ctrlParent (_this select 0))) displayCtrl 1410] call TFAR_backpacks_fnc_onButtonClick_Enter;";
		action="";
	};
	class channel01: HiddenButton
	{
		action="[TF_lr_dialog_radio, 0] call TFAR_fnc_setLrChannel;call TFAR_fnc_updateLRDialogToChannel;[TF_lr_dialog_radio, true] call TFAR_fnc_showRadioInfo;";
		tooltip="$STR_tfar_core_radio_channel_1";
	};
	class channel02: HiddenButton
	{
		action="[TF_lr_dialog_radio, 1] call TFAR_fnc_setLrChannel;call TFAR_fnc_updateLRDialogToChannel;[TF_lr_dialog_radio, true] call TFAR_fnc_showRadioInfo;";
		tooltip="$STR_tfar_core_radio_channel_2";
	};
	class channel03: HiddenButton
	{
		action="[TF_lr_dialog_radio, 2] call TFAR_fnc_setLrChannel;call TFAR_fnc_updateLRDialogToChannel;[TF_lr_dialog_radio, true] call TFAR_fnc_showRadioInfo;";
		tooltip="$STR_tfar_core_radio_channel_3";
	};
	class channel04: HiddenButton
	{
		action="[TF_lr_dialog_radio, 3] call TFAR_fnc_setLrChannel;call TFAR_fnc_updateLRDialogToChannel;[TF_lr_dialog_radio, true] call TFAR_fnc_showRadioInfo;";
		tooltip="$STR_tfar_core_radio_channel_4";
	};
	class channel05: HiddenButton
	{
		action="[TF_lr_dialog_radio, 4] call TFAR_fnc_setLrChannel;call TFAR_fnc_updateLRDialogToChannel;[TF_lr_dialog_radio, true] call TFAR_fnc_showRadioInfo;";
		tooltip="$STR_tfar_core_radio_channel_5";
	};
	class channel06: HiddenButton
	{
		action="[TF_lr_dialog_radio, 5] call TFAR_fnc_setLrChannel;call TFAR_fnc_updateLRDialogToChannel;[TF_lr_dialog_radio, true] call TFAR_fnc_showRadioInfo;";
		tooltip="$STR_tfar_core_radio_channel_6";
	};
	class channel07: HiddenButton
	{
		action="[TF_lr_dialog_radio, 6] call TFAR_fnc_setLrChannel;call TFAR_fnc_updateLRDialogToChannel;[TF_lr_dialog_radio, true] call TFAR_fnc_showRadioInfo;";
		tooltip="$STR_tfar_core_radio_channel_7";
	};
	class channel08: HiddenButton
	{
		action="[TF_lr_dialog_radio, 7] call TFAR_fnc_setLrChannel;call TFAR_fnc_updateLRDialogToChannel;[TF_lr_dialog_radio, true] call TFAR_fnc_showRadioInfo;";
		tooltip="$STR_tfar_core_radio_channel_8";
	};
	class channel09: HiddenButton
	{
		action="[TF_lr_dialog_radio, 8] call TFAR_fnc_setLrChannel;call TFAR_fnc_updateLRDialogToChannel;[TF_lr_dialog_radio, true] call TFAR_fnc_showRadioInfo;";
		tooltip="$STR_tfar_core_radio_channel_9";
	};
	class increase_volume: HiddenButton
	{
		action="[1, true] call TFAR_fnc_setVolumeViaDialog;";
		tooltip="$STR_tfar_core_increase_volume";
	};
	class decrease_volume: HiddenButton
	{
		action="[0, true] call TFAR_fnc_setVolumeViaDialog;";
		tooltip="$STR_tfar_core_decrease_volume";
	};
	class stereo: HiddenButton
	{
		action="[TF_lr_dialog_radio,((TF_lr_dialog_radio call TFAR_fnc_getCurrentLrStereo) + 1) mod 3] call TFAR_fnc_setLrStereo; [TF_lr_dialog_radio] call TFAR_fnc_showRadioVolume;";
		tooltip="$STR_tfar_core_stereo_settings";
	};
	class additional: HiddenButton
	{
		tooltip="$STR_tfar_core_set_additional";
		action="[TF_lr_dialog_radio,TF_lr_dialog_radio call TFAR_fnc_getLrChannel] call TFAR_fnc_setAdditionalLrChannel; call TFAR_fnc_updateLRDialogToChannel; [TF_lr_dialog_radio, true] call TFAR_fnc_showRadioInfo;";
	};
	class speakers: HiddenButton
	{
		tooltip="$STR_tfar_core_speakers_settings_true";
		action="TF_lr_dialog_radio call TFAR_fnc_setLrSpeakers;[TF_lr_dialog_radio] call TFAR_fnc_showRadioSpeakers;";
	};
};
class JLTS_clone_rto_radio_dialog
{
	onUnload="['OnRadioOpen', [player, TF_lr_dialog_radio, true, 'JLTS_clone_rto_radio_dialog', false]] call TFAR_fnc_fireEventHandlers;";
	onLoad="if(sunOrMoon < 0.2)then{((_this select 0) displayCtrl 67676) ctrlSetText '\MRC\JLTS\radios\data\ui\clone_rto_night_ui_ca.paa';};";
	class background;
	class edit: RscEditLCD
	{
		tooltip="$STR_tfar_core_current_freq";
		onKeyUp="if (_this select 1 in [28,156]) then { [((ctrlParent (_this select 0))) displayCtrl 1410] call TFAR_backpacks_fnc_onButtonClick_Enter; };";
	};
	class channel_edit: RscEditLCD
	{
		tooltip="$STR_tfar_core_current_channel";
	};
	class clear: HiddenButton
	{
		tooltip="$STR_tfar_core_clear_frequency";
		action="ctrlSetText [1410,'']; ctrlSetFocus ((findDisplay 1666) displayCtrl 1410);";
	};
	class enter: HiddenButton
	{
		tooltip="$STR_tfar_core_set_frequency";
		onButtonClick="[((ctrlParent (_this select 0))) displayCtrl 1410] call TFAR_backpacks_fnc_onButtonClick_Enter;";
		action="";
	};
	class channel01: HiddenButton
	{
		action="[TF_lr_dialog_radio, 0] call TFAR_fnc_setLrChannel;call TFAR_fnc_updateLRDialogToChannel;[TF_lr_dialog_radio, true] call TFAR_fnc_showRadioInfo;";
		tooltip="$STR_tfar_core_radio_channel_1";
	};
	class channel02: HiddenButton
	{
		action="[TF_lr_dialog_radio, 1] call TFAR_fnc_setLrChannel;call TFAR_fnc_updateLRDialogToChannel;[TF_lr_dialog_radio, true] call TFAR_fnc_showRadioInfo;";
		tooltip="$STR_tfar_core_radio_channel_2";
	};
	class channel03: HiddenButton
	{
		action="[TF_lr_dialog_radio, 2] call TFAR_fnc_setLrChannel;call TFAR_fnc_updateLRDialogToChannel;[TF_lr_dialog_radio, true] call TFAR_fnc_showRadioInfo;";
		tooltip="$STR_tfar_core_radio_channel_3";
	};
	class channel04: HiddenButton
	{
		action="[TF_lr_dialog_radio, 3] call TFAR_fnc_setLrChannel;call TFAR_fnc_updateLRDialogToChannel;[TF_lr_dialog_radio, true] call TFAR_fnc_showRadioInfo;";
		tooltip="$STR_tfar_core_radio_channel_4";
	};
	class channel05: HiddenButton
	{
		action="[TF_lr_dialog_radio, 4] call TFAR_fnc_setLrChannel;call TFAR_fnc_updateLRDialogToChannel;[TF_lr_dialog_radio, true] call TFAR_fnc_showRadioInfo;";
		tooltip="$STR_tfar_core_radio_channel_5";
	};
	class channel06: HiddenButton
	{
		action="[TF_lr_dialog_radio, 5] call TFAR_fnc_setLrChannel;call TFAR_fnc_updateLRDialogToChannel;[TF_lr_dialog_radio, true] call TFAR_fnc_showRadioInfo;";
		tooltip="$STR_tfar_core_radio_channel_6";
	};
	class channel07: HiddenButton
	{
		action="[TF_lr_dialog_radio, 6] call TFAR_fnc_setLrChannel;call TFAR_fnc_updateLRDialogToChannel;[TF_lr_dialog_radio, true] call TFAR_fnc_showRadioInfo;";
		tooltip="$STR_tfar_core_radio_channel_7";
	};
	class channel08: HiddenButton
	{
		action="[TF_lr_dialog_radio, 7] call TFAR_fnc_setLrChannel;call TFAR_fnc_updateLRDialogToChannel;[TF_lr_dialog_radio, true] call TFAR_fnc_showRadioInfo;";
		tooltip="$STR_tfar_core_radio_channel_8";
	};
	class channel09: HiddenButton
	{
		action="[TF_lr_dialog_radio, 8] call TFAR_fnc_setLrChannel;call TFAR_fnc_updateLRDialogToChannel;[TF_lr_dialog_radio, true] call TFAR_fnc_showRadioInfo;";
		tooltip="$STR_tfar_core_radio_channel_9";
	};
	class increase_volume: HiddenButton
	{
		action="[1, true] call TFAR_fnc_setVolumeViaDialog;";
		tooltip="$STR_tfar_core_increase_volume";
	};
	class decrease_volume: HiddenButton
	{
		action="[0, true] call TFAR_fnc_setVolumeViaDialog;";
		tooltip="$STR_tfar_core_decrease_volume";
	};
	class stereo: HiddenButton
	{
		action="[TF_lr_dialog_radio,((TF_lr_dialog_radio call TFAR_fnc_getCurrentLrStereo) + 1) mod 3] call TFAR_fnc_setLrStereo; [TF_lr_dialog_radio] call TFAR_fnc_showRadioVolume;";
		tooltip="$STR_tfar_core_stereo_settings";
	};
	class additional: HiddenButton
	{
		tooltip="$STR_tfar_core_set_additional";
		action="[TF_lr_dialog_radio,TF_lr_dialog_radio call TFAR_fnc_getLrChannel] call TFAR_fnc_setAdditionalLrChannel; call TFAR_fnc_updateLRDialogToChannel; [TF_lr_dialog_radio, true] call TFAR_fnc_showRadioInfo;";
	};
	class speakers: HiddenButton
	{
		tooltip="$STR_tfar_core_speakers_settings_true";
		action="TF_lr_dialog_radio call TFAR_fnc_setLrSpeakers;[TF_lr_dialog_radio] call TFAR_fnc_showRadioSpeakers;";
	};
};
class JLTS_droid_comlink_dialog
{
	onUnload="['OnRadioOpen', [player, TF_sw_dialog_radio, false, 'JLTS_droid_comlink_dialog', false]] call TFAR_fnc_fireEventHandlers;";
	onLoad="if(sunOrMoon < 0.2)then{((_this select 0) displayCtrl 67676) ctrlSetText '\MRC\JLTS\radios\data\ui\droid_comlink_ui_ca.paa';};";
	class edit: RscEditLCD
	{
		tooltip="$STR_tfar_core_current_freq";
		onKeyUp="if (_this select 1 in [28,156]) then { [((ctrlParent (_this select 0))) displayCtrl 1400] call TFAR_handhelds_fnc_onButtonClick_Enter; };";
	};
	class channel_edit: RscEditLCD
	{
		tooltip="$STR_tfar_core_current_channel";
	};
	class enter: HiddenButton
	{
		tooltip="$STR_tfar_core_set_frequency";
		onButtonClick="[((ctrlParent (_this select 0))) displayCtrl 1400] call TFAR_handhelds_fnc_onButtonClick_Enter;";
		action="";
	};
	class clear: HiddenButton
	{
		tooltip="$STR_tfar_core_clear_frequency";
		action="ctrlSetText [1400,'']; ctrlSetFocus ((findDisplay 1333) displayCtrl 1400);";
	};
	class additional: HiddenButton
	{
		tooltip="$STR_tfar_core_set_additional";
		action="[TF_sw_dialog_radio, TF_sw_dialog_radio call TFAR_fnc_getSwChannel] call TFAR_fnc_setAdditionalSwChannel; call TFAR_fnc_updateSWDialogToChannel; [TF_sw_dialog_radio, false] call TFAR_fnc_showRadioInfo;";
	};
	class speakers: HiddenButton
	{
		tooltip="$STR_tfar_core_speakers_settings_true";
		action="[TF_sw_dialog_radio] call TFAR_fnc_setSwSpeakers;[TF_sw_dialog_radio] call TFAR_fnc_showRadioSpeakers;";
	};
	class next_channel: HiddenButton
	{
		tooltip="$STR_tfar_core_next_channel";
		action="[1, false] call TFAR_fnc_setChannelViaDialog;";
	};
	class prev_channel: HiddenButton
	{
		tooltip="$STR_tfar_core_previous_channel";
		action="[0, false] call TFAR_fnc_setChannelViaDialog;";
	};
	class stereo: HiddenButton
	{
		action="[TF_sw_dialog_radio,((TF_sw_dialog_radio call TFAR_fnc_getCurrentSwStereo) + 1) mod 3] call TFAR_fnc_setSwStereo; [TF_sw_dialog_radio] call TFAR_fnc_showRadioVolume;";
		tooltip="$STR_tfar_core_stereo_settings";
	};
	class volume_Switch: HiddenRotator
	{
		idc=-1;
		tooltip="$STR_tfar_core_rotator_volume";
		onMouseButtonDown="[_this select 1, false] call TFAR_fnc_setVolumeViaDialog;";
	};
};
class JLTS_droid_lr_radio_dialog: JLTS_clone_rto_radio_dialog
{
	onUnload="['OnRadioOpen', [player, TF_lr_dialog_radio, true, 'JLTS_droid_lr_radio_dialog', false]] call TFAR_fnc_fireEventHandlers;";
	onLoad="if(sunOrMoon < 0.2)then{((_this select 0) displayCtrl 67676) ctrlSetText '\MRC\JLTS\radios\data\ui\droid_lr_ui_ca.paa';};";
};
class CfgWeapons
{
	class JLTS_clone_comlink;
	class JLTS_droid_comlink;
	class JLTS_clone_comlink_1: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_2: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_3: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_4: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_5: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_6: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_7: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_8: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_9: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_10: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_11: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_12: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_13: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_14: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_15: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_16: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_17: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_18: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_19: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_20: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_21: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_22: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_23: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_24: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_25: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_26: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_27: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_28: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_29: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_30: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_31: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_32: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_33: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_34: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_35: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_36: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_37: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_38: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_39: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_40: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_41: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_42: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_43: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_44: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_45: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_46: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_47: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_48: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_49: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_50: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_51: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_52: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_53: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_54: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_55: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_56: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_57: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_58: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_59: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_60: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_61: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_62: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_63: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_64: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_65: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_66: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_67: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_68: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_69: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_70: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_71: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_72: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_73: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_74: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_75: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_76: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_77: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_78: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_79: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_80: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_81: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_82: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_83: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_84: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_85: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_86: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_87: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_88: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_89: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_90: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_91: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_92: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_93: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_94: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_95: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_96: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_97: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_98: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_99: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_100: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_101: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_102: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_103: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_104: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_105: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_106: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_107: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_108: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_109: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_110: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_111: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_112: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_113: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_114: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_115: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_116: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_117: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_118: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_119: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_120: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_121: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_122: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_123: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_124: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_125: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_126: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_127: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_128: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_129: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_130: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_131: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_132: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_133: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_134: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_135: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_136: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_137: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_138: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_139: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_140: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_141: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_142: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_143: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_144: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_145: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_146: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_147: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_148: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_149: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_150: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_151: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_152: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_153: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_154: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_155: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_156: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_157: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_158: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_159: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_160: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_161: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_162: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_163: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_164: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_165: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_166: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_167: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_168: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_169: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_170: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_171: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_172: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_173: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_174: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_175: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_176: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_177: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_178: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_179: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_180: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_181: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_182: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_183: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_184: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_185: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_186: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_187: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_188: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_189: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_190: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_191: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_192: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_193: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_194: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_195: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_196: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_197: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_198: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_199: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_200: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_201: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_202: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_203: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_204: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_205: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_206: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_207: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_208: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_209: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_210: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_211: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_212: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_213: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_214: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_215: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_216: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_217: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_218: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_219: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_220: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_221: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_222: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_223: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_224: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_225: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_226: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_227: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_228: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_229: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_230: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_231: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_232: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_233: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_234: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_235: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_236: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_237: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_238: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_239: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_240: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_241: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_242: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_243: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_244: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_245: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_246: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_247: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_248: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_249: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_250: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_251: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_252: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_253: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_254: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_255: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_256: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_257: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_258: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_259: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_260: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_261: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_262: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_263: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_264: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_265: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_266: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_267: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_268: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_269: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_270: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_271: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_272: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_273: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_274: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_275: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_276: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_277: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_278: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_279: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_280: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_281: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_282: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_283: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_284: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_285: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_286: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_287: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_288: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_289: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_290: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_291: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_292: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_293: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_294: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_295: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_296: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_297: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_298: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_299: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_300: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_301: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_302: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_303: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_304: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_305: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_306: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_307: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_308: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_309: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_310: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_311: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_312: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_313: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_314: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_315: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_316: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_317: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_318: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_319: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_320: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_321: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_322: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_323: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_324: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_325: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_326: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_327: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_328: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_329: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_330: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_331: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_332: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_333: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_334: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_335: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_336: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_337: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_338: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_339: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_340: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_341: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_342: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_343: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_344: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_345: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_346: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_347: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_348: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_349: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_350: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_351: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_352: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_353: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_354: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_355: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_356: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_357: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_358: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_359: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_360: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_361: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_362: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_363: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_364: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_365: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_366: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_367: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_368: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_369: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_370: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_371: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_372: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_373: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_374: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_375: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_376: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_377: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_378: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_379: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_380: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_381: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_382: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_383: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_384: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_385: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_386: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_387: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_388: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_389: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_390: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_391: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_392: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_393: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_394: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_395: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_396: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_397: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_398: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_399: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_400: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_401: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_402: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_403: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_404: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_405: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_406: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_407: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_408: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_409: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_410: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_411: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_412: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_413: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_414: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_415: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_416: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_417: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_418: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_419: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_420: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_421: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_422: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_423: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_424: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_425: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_426: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_427: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_428: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_429: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_430: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_431: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_432: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_433: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_434: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_435: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_436: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_437: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_438: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_439: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_440: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_441: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_442: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_443: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_444: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_445: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_446: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_447: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_448: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_449: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_450: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_451: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_452: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_453: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_454: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_455: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_456: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_457: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_458: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_459: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_460: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_461: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_462: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_463: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_464: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_465: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_466: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_467: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_468: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_469: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_470: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_471: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_472: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_473: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_474: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_475: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_476: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_477: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_478: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_479: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_480: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_481: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_482: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_483: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_484: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_485: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_486: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_487: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_488: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_489: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_490: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_491: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_492: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_493: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_494: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_495: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_496: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_497: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_498: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_499: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_500: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_501: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_502: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_503: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_504: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_505: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_506: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_507: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_508: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_509: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_510: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_511: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_512: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_513: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_514: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_515: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_516: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_517: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_518: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_519: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_520: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_521: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_522: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_523: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_524: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_525: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_526: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_527: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_528: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_529: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_530: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_531: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_532: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_533: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_534: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_535: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_536: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_537: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_538: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_539: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_540: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_541: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_542: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_543: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_544: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_545: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_546: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_547: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_548: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_549: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_550: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_551: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_552: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_553: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_554: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_555: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_556: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_557: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_558: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_559: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_560: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_561: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_562: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_563: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_564: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_565: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_566: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_567: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_568: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_569: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_570: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_571: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_572: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_573: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_574: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_575: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_576: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_577: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_578: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_579: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_580: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_581: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_582: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_583: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_584: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_585: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_586: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_587: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_588: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_589: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_590: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_591: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_592: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_593: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_594: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_595: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_596: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_597: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_598: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_599: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_600: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_601: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_602: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_603: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_604: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_605: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_606: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_607: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_608: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_609: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_610: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_611: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_612: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_613: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_614: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_615: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_616: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_617: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_618: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_619: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_620: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_621: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_622: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_623: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_624: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_625: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_626: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_627: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_628: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_629: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_630: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_631: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_632: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_633: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_634: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_635: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_636: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_637: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_638: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_639: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_640: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_641: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_642: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_643: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_644: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_645: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_646: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_647: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_648: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_649: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_650: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_651: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_652: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_653: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_654: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_655: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_656: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_657: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_658: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_659: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_660: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_661: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_662: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_663: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_664: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_665: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_666: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_667: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_668: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_669: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_670: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_671: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_672: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_673: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_674: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_675: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_676: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_677: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_678: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_679: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_680: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_681: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_682: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_683: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_684: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_685: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_686: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_687: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_688: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_689: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_690: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_691: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_692: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_693: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_694: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_695: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_696: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_697: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_698: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_699: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_700: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_701: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_702: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_703: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_704: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_705: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_706: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_707: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_708: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_709: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_710: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_711: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_712: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_713: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_714: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_715: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_716: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_717: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_718: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_719: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_720: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_721: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_722: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_723: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_724: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_725: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_726: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_727: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_728: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_729: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_730: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_731: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_732: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_733: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_734: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_735: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_736: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_737: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_738: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_739: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_740: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_741: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_742: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_743: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_744: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_745: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_746: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_747: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_748: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_749: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_750: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_751: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_752: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_753: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_754: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_755: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_756: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_757: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_758: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_759: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_760: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_761: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_762: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_763: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_764: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_765: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_766: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_767: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_768: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_769: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_770: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_771: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_772: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_773: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_774: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_775: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_776: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_777: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_778: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_779: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_780: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_781: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_782: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_783: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_784: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_785: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_786: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_787: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_788: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_789: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_790: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_791: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_792: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_793: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_794: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_795: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_796: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_797: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_798: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_799: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_800: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_801: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_802: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_803: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_804: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_805: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_806: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_807: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_808: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_809: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_810: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_811: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_812: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_813: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_814: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_815: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_816: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_817: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_818: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_819: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_820: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_821: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_822: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_823: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_824: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_825: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_826: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_827: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_828: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_829: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_830: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_831: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_832: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_833: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_834: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_835: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_836: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_837: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_838: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_839: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_840: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_841: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_842: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_843: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_844: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_845: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_846: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_847: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_848: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_849: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_850: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_851: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_852: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_853: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_854: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_855: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_856: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_857: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_858: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_859: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_860: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_861: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_862: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_863: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_864: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_865: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_866: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_867: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_868: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_869: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_870: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_871: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_872: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_873: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_874: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_875: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_876: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_877: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_878: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_879: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_880: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_881: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_882: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_883: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_884: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_885: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_886: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_887: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_888: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_889: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_890: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_891: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_892: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_893: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_894: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_895: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_896: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_897: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_898: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_899: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_900: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_901: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_902: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_903: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_904: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_905: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_906: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_907: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_908: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_909: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_910: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_911: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_912: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_913: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_914: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_915: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_916: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_917: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_918: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_919: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_920: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_921: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_922: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_923: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_924: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_925: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_926: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_927: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_928: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_929: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_930: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_931: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_932: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_933: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_934: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_935: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_936: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_937: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_938: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_939: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_940: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_941: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_942: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_943: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_944: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_945: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_946: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_947: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_948: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_949: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_950: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_951: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_952: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_953: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_954: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_955: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_956: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_957: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_958: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_959: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_960: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_961: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_962: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_963: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_964: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_965: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_966: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_967: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_968: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_969: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_970: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_971: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_972: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_973: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_974: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_975: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_976: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_977: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_978: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_979: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_980: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_981: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_982: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_983: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_984: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_985: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_986: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_987: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_988: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_989: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_990: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_991: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_992: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_993: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_994: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_995: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_996: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_997: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_998: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_999: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_clone_comlink_1000: JLTS_clone_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_clone_comlink";
	};
	class JLTS_droid_comlink_1: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_2: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_3: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_4: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_5: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_6: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_7: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_8: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_9: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_10: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_11: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_12: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_13: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_14: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_15: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_16: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_17: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_18: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_19: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_20: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_21: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_22: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_23: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_24: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_25: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_26: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_27: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_28: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_29: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_30: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_31: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_32: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_33: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_34: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_35: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_36: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_37: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_38: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_39: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_40: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_41: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_42: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_43: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_44: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_45: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_46: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_47: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_48: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_49: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_50: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_51: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_52: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_53: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_54: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_55: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_56: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_57: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_58: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_59: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_60: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_61: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_62: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_63: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_64: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_65: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_66: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_67: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_68: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_69: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_70: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_71: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_72: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_73: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_74: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_75: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_76: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_77: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_78: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_79: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_80: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_81: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_82: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_83: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_84: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_85: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_86: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_87: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_88: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_89: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_90: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_91: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_92: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_93: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_94: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_95: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_96: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_97: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_98: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_99: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_100: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_101: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_102: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_103: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_104: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_105: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_106: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_107: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_108: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_109: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_110: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_111: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_112: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_113: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_114: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_115: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_116: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_117: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_118: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_119: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_120: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_121: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_122: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_123: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_124: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_125: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_126: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_127: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_128: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_129: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_130: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_131: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_132: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_133: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_134: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_135: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_136: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_137: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_138: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_139: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_140: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_141: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_142: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_143: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_144: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_145: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_146: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_147: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_148: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_149: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_150: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_151: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_152: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_153: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_154: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_155: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_156: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_157: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_158: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_159: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_160: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_161: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_162: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_163: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_164: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_165: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_166: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_167: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_168: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_169: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_170: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_171: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_172: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_173: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_174: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_175: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_176: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_177: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_178: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_179: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_180: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_181: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_182: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_183: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_184: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_185: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_186: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_187: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_188: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_189: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_190: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_191: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_192: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_193: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_194: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_195: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_196: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_197: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_198: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_199: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_200: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_201: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_202: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_203: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_204: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_205: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_206: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_207: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_208: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_209: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_210: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_211: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_212: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_213: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_214: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_215: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_216: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_217: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_218: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_219: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_220: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_221: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_222: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_223: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_224: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_225: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_226: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_227: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_228: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_229: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_230: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_231: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_232: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_233: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_234: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_235: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_236: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_237: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_238: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_239: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_240: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_241: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_242: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_243: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_244: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_245: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_246: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_247: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_248: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_249: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_250: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_251: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_252: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_253: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_254: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_255: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_256: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_257: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_258: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_259: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_260: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_261: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_262: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_263: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_264: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_265: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_266: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_267: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_268: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_269: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_270: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_271: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_272: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_273: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_274: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_275: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_276: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_277: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_278: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_279: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_280: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_281: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_282: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_283: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_284: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_285: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_286: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_287: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_288: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_289: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_290: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_291: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_292: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_293: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_294: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_295: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_296: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_297: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_298: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_299: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_300: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_301: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_302: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_303: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_304: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_305: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_306: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_307: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_308: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_309: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_310: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_311: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_312: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_313: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_314: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_315: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_316: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_317: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_318: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_319: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_320: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_321: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_322: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_323: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_324: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_325: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_326: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_327: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_328: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_329: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_330: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_331: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_332: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_333: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_334: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_335: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_336: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_337: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_338: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_339: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_340: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_341: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_342: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_343: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_344: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_345: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_346: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_347: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_348: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_349: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_350: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_351: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_352: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_353: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_354: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_355: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_356: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_357: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_358: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_359: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_360: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_361: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_362: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_363: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_364: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_365: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_366: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_367: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_368: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_369: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_370: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_371: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_372: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_373: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_374: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_375: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_376: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_377: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_378: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_379: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_380: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_381: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_382: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_383: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_384: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_385: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_386: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_387: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_388: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_389: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_390: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_391: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_392: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_393: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_394: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_395: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_396: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_397: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_398: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_399: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_400: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_401: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_402: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_403: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_404: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_405: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_406: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_407: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_408: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_409: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_410: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_411: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_412: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_413: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_414: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_415: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_416: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_417: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_418: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_419: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_420: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_421: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_422: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_423: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_424: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_425: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_426: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_427: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_428: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_429: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_430: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_431: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_432: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_433: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_434: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_435: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_436: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_437: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_438: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_439: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_440: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_441: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_442: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_443: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_444: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_445: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_446: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_447: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_448: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_449: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_450: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_451: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_452: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_453: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_454: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_455: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_456: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_457: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_458: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_459: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_460: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_461: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_462: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_463: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_464: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_465: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_466: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_467: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_468: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_469: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_470: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_471: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_472: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_473: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_474: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_475: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_476: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_477: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_478: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_479: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_480: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_481: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_482: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_483: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_484: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_485: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_486: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_487: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_488: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_489: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_490: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_491: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_492: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_493: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_494: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_495: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_496: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_497: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_498: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_499: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_500: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_501: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_502: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_503: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_504: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_505: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_506: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_507: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_508: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_509: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_510: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_511: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_512: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_513: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_514: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_515: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_516: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_517: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_518: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_519: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_520: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_521: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_522: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_523: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_524: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_525: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_526: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_527: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_528: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_529: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_530: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_531: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_532: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_533: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_534: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_535: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_536: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_537: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_538: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_539: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_540: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_541: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_542: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_543: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_544: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_545: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_546: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_547: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_548: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_549: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_550: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_551: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_552: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_553: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_554: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_555: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_556: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_557: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_558: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_559: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_560: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_561: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_562: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_563: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_564: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_565: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_566: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_567: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_568: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_569: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_570: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_571: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_572: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_573: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_574: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_575: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_576: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_577: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_578: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_579: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_580: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_581: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_582: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_583: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_584: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_585: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_586: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_587: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_588: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_589: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_590: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_591: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_592: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_593: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_594: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_595: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_596: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_597: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_598: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_599: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_600: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_601: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_602: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_603: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_604: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_605: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_606: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_607: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_608: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_609: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_610: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_611: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_612: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_613: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_614: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_615: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_616: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_617: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_618: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_619: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_620: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_621: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_622: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_623: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_624: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_625: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_626: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_627: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_628: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_629: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_630: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_631: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_632: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_633: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_634: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_635: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_636: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_637: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_638: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_639: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_640: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_641: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_642: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_643: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_644: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_645: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_646: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_647: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_648: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_649: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_650: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_651: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_652: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_653: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_654: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_655: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_656: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_657: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_658: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_659: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_660: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_661: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_662: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_663: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_664: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_665: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_666: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_667: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_668: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_669: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_670: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_671: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_672: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_673: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_674: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_675: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_676: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_677: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_678: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_679: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_680: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_681: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_682: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_683: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_684: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_685: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_686: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_687: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_688: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_689: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_690: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_691: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_692: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_693: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_694: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_695: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_696: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_697: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_698: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_699: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_700: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_701: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_702: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_703: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_704: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_705: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_706: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_707: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_708: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_709: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_710: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_711: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_712: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_713: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_714: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_715: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_716: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_717: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_718: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_719: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_720: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_721: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_722: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_723: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_724: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_725: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_726: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_727: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_728: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_729: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_730: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_731: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_732: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_733: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_734: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_735: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_736: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_737: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_738: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_739: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_740: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_741: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_742: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_743: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_744: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_745: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_746: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_747: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_748: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_749: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_750: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_751: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_752: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_753: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_754: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_755: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_756: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_757: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_758: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_759: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_760: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_761: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_762: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_763: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_764: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_765: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_766: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_767: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_768: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_769: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_770: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_771: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_772: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_773: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_774: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_775: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_776: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_777: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_778: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_779: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_780: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_781: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_782: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_783: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_784: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_785: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_786: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_787: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_788: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_789: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_790: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_791: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_792: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_793: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_794: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_795: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_796: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_797: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_798: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_799: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_800: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_801: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_802: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_803: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_804: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_805: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_806: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_807: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_808: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_809: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_810: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_811: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_812: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_813: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_814: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_815: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_816: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_817: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_818: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_819: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_820: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_821: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_822: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_823: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_824: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_825: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_826: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_827: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_828: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_829: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_830: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_831: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_832: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_833: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_834: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_835: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_836: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_837: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_838: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_839: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_840: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_841: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_842: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_843: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_844: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_845: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_846: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_847: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_848: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_849: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_850: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_851: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_852: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_853: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_854: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_855: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_856: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_857: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_858: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_859: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_860: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_861: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_862: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_863: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_864: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_865: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_866: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_867: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_868: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_869: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_870: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_871: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_872: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_873: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_874: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_875: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_876: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_877: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_878: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_879: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_880: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_881: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_882: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_883: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_884: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_885: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_886: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_887: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_888: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_889: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_890: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_891: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_892: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_893: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_894: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_895: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_896: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_897: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_898: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_899: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_900: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_901: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_902: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_903: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_904: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_905: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_906: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_907: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_908: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_909: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_910: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_911: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_912: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_913: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_914: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_915: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_916: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_917: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_918: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_919: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_920: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_921: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_922: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_923: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_924: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_925: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_926: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_927: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_928: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_929: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_930: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_931: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_932: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_933: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_934: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_935: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_936: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_937: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_938: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_939: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_940: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_941: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_942: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_943: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_944: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_945: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_946: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_947: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_948: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_949: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_950: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_951: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_952: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_953: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_954: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_955: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_956: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_957: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_958: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_959: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_960: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_961: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_962: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_963: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_964: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_965: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_966: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_967: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_968: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_969: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_970: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_971: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_972: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_973: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_974: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_975: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_976: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_977: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_978: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_979: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_980: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_981: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_982: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_983: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_984: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_985: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_986: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_987: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_988: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_989: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_990: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_991: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_992: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_993: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_994: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_995: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_996: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_997: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_998: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_999: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
	class JLTS_droid_comlink_1000: JLTS_droid_comlink
	{
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="JLTS_droid_comlink";
	};
};
class CfgVehicles
{
	class JLTS_Clone_backpack;
	class B_Kitbag_rgr;
	class B_AssaultPack_blk;
	class JLTS_Clone_backpack_RTO: JLTS_Clone_backpack
	{
		class Attributes
		{
			class staticRadioFrequency
			{
				displayName="$STR_tfar_static_radios_moduleStaticRadio_FreqTitle";
				tooltip="$STR_tfar_static_radios_moduleStaticRadio_ATT_Frequency_tooltip";
				property="staticRadioFrequency";
				control="Edit";
				expression="if (isMultiplayer) then {[_this,call compile _value] call TFAR_static_radios_fnc_setFrequencies}";
				defaultValue="str (_this call TFAR_static_radios_fnc_generateFrequencies)";
				validate="none";
				condition="objectHasInventoryCargo";
				typeName="STRING";
			};
			class staticRadioChannel
			{
				displayName="$STR_tfar_static_radios_moduleStaticRadio_ChannelTitle";
				tooltip="$STR_tfar_static_radios_moduleStaticRadio_ATT_Channel_tooltip";
				property="staticRadioChannel";
				control="Edit";
				expression="if (isMultiplayer) then {[_this,_value] call TFAR_static_radios_fnc_setActiveChannel}";
				defaultValue="'1'";
				validate="none";
				condition="objectHasInventoryCargo";
				typeName="NUMBER";
			};
			class staticRadioSpeaker
			{
				displayName="$STR_tfar_static_radios_moduleStaticRadio_ATT_SpeakerEnabled";
				tooltip="$STR_tfar_static_radios_moduleStaticRadio_ATT_SpeakerEnabled_tooltip";
				property="staticRadioSpeaker";
				control="Checkbox";
				expression="if (isMultiplayer) then {[_this,_value] call TFAR_static_radios_fnc_setSpeakers}";
				defaultValue="false";
				validate="none";
				condition="objectHasInventoryCargo";
				typeName="NUMBER";
			};
			class staticRadioVolume
			{
				displayName="$STR_tfar_static_radios_moduleStaticRadio_ATT_RadioVolume";
				tooltip="$STR_tfar_static_radios_moduleStaticRadio_ATT_RadioVolume_tooltip";
				property="staticRadioVolume";
				control="tfar_static_radios_volumeSlider";
				expression="if (isMultiplayer) then {[_this,_value] call TFAR_static_radios_fnc_setVolume}";
				defaultValue=7;
				validate="none";
				condition="objectHasInventoryCargo";
				typeName="NUMBER";
			};
		};
	};
	class JLTS_Clone_jumppack_mc: B_Kitbag_rgr
	{
		class Attributes
		{
			class staticRadioFrequency
			{
				displayName="$STR_tfar_static_radios_moduleStaticRadio_FreqTitle";
				tooltip="$STR_tfar_static_radios_moduleStaticRadio_ATT_Frequency_tooltip";
				property="staticRadioFrequency";
				control="Edit";
				expression="if (isMultiplayer) then {[_this,call compile _value] call TFAR_static_radios_fnc_setFrequencies}";
				defaultValue="str (_this call TFAR_static_radios_fnc_generateFrequencies)";
				validate="none";
				condition="objectHasInventoryCargo";
				typeName="STRING";
			};
			class staticRadioChannel
			{
				displayName="$STR_tfar_static_radios_moduleStaticRadio_ChannelTitle";
				tooltip="$STR_tfar_static_radios_moduleStaticRadio_ATT_Channel_tooltip";
				property="staticRadioChannel";
				control="Edit";
				expression="if (isMultiplayer) then {[_this,_value] call TFAR_static_radios_fnc_setActiveChannel}";
				defaultValue="'1'";
				validate="none";
				condition="objectHasInventoryCargo";
				typeName="NUMBER";
			};
			class staticRadioSpeaker
			{
				displayName="$STR_tfar_static_radios_moduleStaticRadio_ATT_SpeakerEnabled";
				tooltip="$STR_tfar_static_radios_moduleStaticRadio_ATT_SpeakerEnabled_tooltip";
				property="staticRadioSpeaker";
				control="Checkbox";
				expression="if (isMultiplayer) then {[_this,_value] call TFAR_static_radios_fnc_setSpeakers}";
				defaultValue="false";
				validate="none";
				condition="objectHasInventoryCargo";
				typeName="NUMBER";
			};
			class staticRadioVolume
			{
				displayName="$STR_tfar_static_radios_moduleStaticRadio_ATT_RadioVolume";
				tooltip="$STR_tfar_static_radios_moduleStaticRadio_ATT_RadioVolume_tooltip";
				property="staticRadioVolume";
				control="tfar_static_radios_volumeSlider";
				expression="if (isMultiplayer) then {[_this,_value] call TFAR_static_radios_fnc_setVolume}";
				defaultValue=7;
				validate="none";
				condition="objectHasInventoryCargo";
				typeName="NUMBER";
			};
		};
	};
	class JLTS_Clone_RTO_pack: B_AssaultPack_blk
	{
		class Attributes
		{
			class staticRadioFrequency
			{
				displayName="$STR_tfar_static_radios_moduleStaticRadio_FreqTitle";
				tooltip="$STR_tfar_static_radios_moduleStaticRadio_ATT_Frequency_tooltip";
				property="staticRadioFrequency";
				control="Edit";
				expression="if (isMultiplayer) then {[_this,call compile _value] call TFAR_static_radios_fnc_setFrequencies}";
				defaultValue="str (_this call TFAR_static_radios_fnc_generateFrequencies)";
				validate="none";
				condition="objectHasInventoryCargo";
				typeName="STRING";
			};
			class staticRadioChannel
			{
				displayName="$STR_tfar_static_radios_moduleStaticRadio_ChannelTitle";
				tooltip="$STR_tfar_static_radios_moduleStaticRadio_ATT_Channel_tooltip";
				property="staticRadioChannel";
				control="Edit";
				expression="if (isMultiplayer) then {[_this,_value] call TFAR_static_radios_fnc_setActiveChannel}";
				defaultValue="'1'";
				validate="none";
				condition="objectHasInventoryCargo";
				typeName="NUMBER";
			};
			class staticRadioSpeaker
			{
				displayName="$STR_tfar_static_radios_moduleStaticRadio_ATT_SpeakerEnabled";
				tooltip="$STR_tfar_static_radios_moduleStaticRadio_ATT_SpeakerEnabled_tooltip";
				property="staticRadioSpeaker";
				control="Checkbox";
				expression="if (isMultiplayer) then {[_this,_value] call TFAR_static_radios_fnc_setSpeakers}";
				defaultValue="false";
				validate="none";
				condition="objectHasInventoryCargo";
				typeName="NUMBER";
			};
			class staticRadioVolume
			{
				displayName="$STR_tfar_static_radios_moduleStaticRadio_ATT_RadioVolume";
				tooltip="$STR_tfar_static_radios_moduleStaticRadio_ATT_RadioVolume_tooltip";
				property="staticRadioVolume";
				control="tfar_static_radios_volumeSlider";
				expression="if (isMultiplayer) then {[_this,_value] call TFAR_static_radios_fnc_setVolume}";
				defaultValue=7;
				validate="none";
				condition="objectHasInventoryCargo";
				typeName="NUMBER";
			};
		};
	};
	class JLTS_Clone_LR_attachment: B_AssaultPack_blk
	{
		class Attributes
		{
			class staticRadioFrequency
			{
				displayName="$STR_tfar_static_radios_moduleStaticRadio_FreqTitle";
				tooltip="$STR_tfar_static_radios_moduleStaticRadio_ATT_Frequency_tooltip";
				property="staticRadioFrequency";
				control="Edit";
				expression="if (isMultiplayer) then {[_this,call compile _value] call TFAR_static_radios_fnc_setFrequencies}";
				defaultValue="str (_this call TFAR_static_radios_fnc_generateFrequencies)";
				validate="none";
				condition="objectHasInventoryCargo";
				typeName="STRING";
			};
			class staticRadioChannel
			{
				displayName="$STR_tfar_static_radios_moduleStaticRadio_ChannelTitle";
				tooltip="$STR_tfar_static_radios_moduleStaticRadio_ATT_Channel_tooltip";
				property="staticRadioChannel";
				control="Edit";
				expression="if (isMultiplayer) then {[_this,_value] call TFAR_static_radios_fnc_setActiveChannel}";
				defaultValue="'1'";
				validate="none";
				condition="objectHasInventoryCargo";
				typeName="NUMBER";
			};
			class staticRadioSpeaker
			{
				displayName="$STR_tfar_static_radios_moduleStaticRadio_ATT_SpeakerEnabled";
				tooltip="$STR_tfar_static_radios_moduleStaticRadio_ATT_SpeakerEnabled_tooltip";
				property="staticRadioSpeaker";
				control="Checkbox";
				expression="if (isMultiplayer) then {[_this,_value] call TFAR_static_radios_fnc_setSpeakers}";
				defaultValue="false";
				validate="none";
				condition="objectHasInventoryCargo";
				typeName="NUMBER";
			};
			class staticRadioVolume
			{
				displayName="$STR_tfar_static_radios_moduleStaticRadio_ATT_RadioVolume";
				tooltip="$STR_tfar_static_radios_moduleStaticRadio_ATT_RadioVolume_tooltip";
				property="staticRadioVolume";
				control="tfar_static_radios_volumeSlider";
				expression="if (isMultiplayer) then {[_this,_value] call TFAR_static_radios_fnc_setVolume}";
				defaultValue=7;
				validate="none";
				condition="objectHasInventoryCargo";
				typeName="NUMBER";
			};
		};
	};
	class JLTS_Clone_ARC_backpack: B_Kitbag_rgr
	{
		class Attributes
		{
			class staticRadioFrequency
			{
				displayName="$STR_tfar_static_radios_moduleStaticRadio_FreqTitle";
				tooltip="$STR_tfar_static_radios_moduleStaticRadio_ATT_Frequency_tooltip";
				property="staticRadioFrequency";
				control="Edit";
				expression="if (isMultiplayer) then {[_this,call compile _value] call TFAR_static_radios_fnc_setFrequencies}";
				defaultValue="str (_this call TFAR_static_radios_fnc_generateFrequencies)";
				validate="none";
				condition="objectHasInventoryCargo";
				typeName="STRING";
			};
			class staticRadioChannel
			{
				displayName="$STR_tfar_static_radios_moduleStaticRadio_ChannelTitle";
				tooltip="$STR_tfar_static_radios_moduleStaticRadio_ATT_Channel_tooltip";
				property="staticRadioChannel";
				control="Edit";
				expression="if (isMultiplayer) then {[_this,_value] call TFAR_static_radios_fnc_setActiveChannel}";
				defaultValue="'1'";
				validate="none";
				condition="objectHasInventoryCargo";
				typeName="NUMBER";
			};
			class staticRadioSpeaker
			{
				displayName="$STR_tfar_static_radios_moduleStaticRadio_ATT_SpeakerEnabled";
				tooltip="$STR_tfar_static_radios_moduleStaticRadio_ATT_SpeakerEnabled_tooltip";
				property="staticRadioSpeaker";
				control="Checkbox";
				expression="if (isMultiplayer) then {[_this,_value] call TFAR_static_radios_fnc_setSpeakers}";
				defaultValue="false";
				validate="none";
				condition="objectHasInventoryCargo";
				typeName="NUMBER";
			};
			class staticRadioVolume
			{
				displayName="$STR_tfar_static_radios_moduleStaticRadio_ATT_RadioVolume";
				tooltip="$STR_tfar_static_radios_moduleStaticRadio_ATT_RadioVolume_tooltip";
				property="staticRadioVolume";
				control="tfar_static_radios_volumeSlider";
				expression="if (isMultiplayer) then {[_this,_value] call TFAR_static_radios_fnc_setVolume}";
				defaultValue=7;
				validate="none";
				condition="objectHasInventoryCargo";
				typeName="NUMBER";
			};
		};
	};
	class JLTS_B1_backpack: B_Kitbag_rgr
	{
		class Attributes
		{
			class staticRadioFrequency
			{
				displayName="$STR_tfar_static_radios_moduleStaticRadio_FreqTitle";
				tooltip="$STR_tfar_static_radios_moduleStaticRadio_ATT_Frequency_tooltip";
				property="staticRadioFrequency";
				control="Edit";
				expression="if (isMultiplayer) then {[_this,call compile _value] call TFAR_static_radios_fnc_setFrequencies}";
				defaultValue="str (_this call TFAR_static_radios_fnc_generateFrequencies)";
				validate="none";
				condition="objectHasInventoryCargo";
				typeName="STRING";
			};
			class staticRadioChannel
			{
				displayName="$STR_tfar_static_radios_moduleStaticRadio_ChannelTitle";
				tooltip="$STR_tfar_static_radios_moduleStaticRadio_ATT_Channel_tooltip";
				property="staticRadioChannel";
				control="Edit";
				expression="if (isMultiplayer) then {[_this,_value] call TFAR_static_radios_fnc_setActiveChannel}";
				defaultValue="'1'";
				validate="none";
				condition="objectHasInventoryCargo";
				typeName="NUMBER";
			};
			class staticRadioSpeaker
			{
				displayName="$STR_tfar_static_radios_moduleStaticRadio_ATT_SpeakerEnabled";
				tooltip="$STR_tfar_static_radios_moduleStaticRadio_ATT_SpeakerEnabled_tooltip";
				property="staticRadioSpeaker";
				control="Checkbox";
				expression="if (isMultiplayer) then {[_this,_value] call TFAR_static_radios_fnc_setSpeakers}";
				defaultValue="false";
				validate="none";
				condition="objectHasInventoryCargo";
				typeName="NUMBER";
			};
			class staticRadioVolume
			{
				displayName="$STR_tfar_static_radios_moduleStaticRadio_ATT_RadioVolume";
				tooltip="$STR_tfar_static_radios_moduleStaticRadio_ATT_RadioVolume_tooltip";
				property="staticRadioVolume";
				control="tfar_static_radios_volumeSlider";
				expression="if (isMultiplayer) then {[_this,_value] call TFAR_static_radios_fnc_setVolume}";
				defaultValue=7;
				validate="none";
				condition="objectHasInventoryCargo";
				typeName="NUMBER";
			};
		};
	};
	class JLTS_B1_antenna: B_Kitbag_rgr
	{
		class Attributes
		{
			class staticRadioFrequency
			{
				displayName="$STR_tfar_static_radios_moduleStaticRadio_FreqTitle";
				tooltip="$STR_tfar_static_radios_moduleStaticRadio_ATT_Frequency_tooltip";
				property="staticRadioFrequency";
				control="Edit";
				expression="if (isMultiplayer) then {[_this,call compile _value] call TFAR_static_radios_fnc_setFrequencies}";
				defaultValue="str (_this call TFAR_static_radios_fnc_generateFrequencies)";
				validate="none";
				condition="objectHasInventoryCargo";
				typeName="STRING";
			};
			class staticRadioChannel
			{
				displayName="$STR_tfar_static_radios_moduleStaticRadio_ChannelTitle";
				tooltip="$STR_tfar_static_radios_moduleStaticRadio_ATT_Channel_tooltip";
				property="staticRadioChannel";
				control="Edit";
				expression="if (isMultiplayer) then {[_this,_value] call TFAR_static_radios_fnc_setActiveChannel}";
				defaultValue="'1'";
				validate="none";
				condition="objectHasInventoryCargo";
				typeName="NUMBER";
			};
			class staticRadioSpeaker
			{
				displayName="$STR_tfar_static_radios_moduleStaticRadio_ATT_SpeakerEnabled";
				tooltip="$STR_tfar_static_radios_moduleStaticRadio_ATT_SpeakerEnabled_tooltip";
				property="staticRadioSpeaker";
				control="Checkbox";
				expression="if (isMultiplayer) then {[_this,_value] call TFAR_static_radios_fnc_setSpeakers}";
				defaultValue="false";
				validate="none";
				condition="objectHasInventoryCargo";
				typeName="NUMBER";
			};
			class staticRadioVolume
			{
				displayName="$STR_tfar_static_radios_moduleStaticRadio_ATT_RadioVolume";
				tooltip="$STR_tfar_static_radios_moduleStaticRadio_ATT_RadioVolume_tooltip";
				property="staticRadioVolume";
				control="tfar_static_radios_volumeSlider";
				expression="if (isMultiplayer) then {[_this,_value] call TFAR_static_radios_fnc_setVolume}";
				defaultValue=7;
				validate="none";
				condition="objectHasInventoryCargo";
				typeName="NUMBER";
			};
		};
	};
};
