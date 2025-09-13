class cfgPatches
{
	class 38th_Smoke
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"A3_Data_F", "A3_Weapons_F"};
		author[] = {"isky"};
	};
};

class cfgCloudlets
{
	class Default;
	class SmokeShellWhite : Default
	{
		moveVelocity[]={0.2,0.50000001,0.1};//{0.2,0.1,0.1}
		size[]={0.36,3.5,12};//{0.1,2,6}
		MoveVelocityVar[]={0.7,0.4,0.7};//{0.25,0.25,0.25}
	};
};