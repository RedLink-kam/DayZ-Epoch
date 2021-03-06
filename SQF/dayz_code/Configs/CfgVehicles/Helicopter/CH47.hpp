class CH_47F_EP1;
class CH_47F_EP1_DZ : CH_47F_EP1 { 
	accuracy = 1000; 
	vehicleClass = "Air";
	model = "\ca\air_E\CH47\CH_47F"; 
	scope = public; 
	displayName = $STR_VEH_NAME_CH47;
	crew = ""; 
	typicalCargo[] = {};
	class TransportMagazines {};
	class TransportWeapons {};
	commanderCanSee = 2+16+32;
	gunnerCanSee = 2+16+32;
	driverCanSee = 2+16+32;
	transportMaxWeapons = 10;
	transportMaxMagazines = 200;
	transportmaxbackpacks = 5;
	class Turrets;
	class MainTurret;
	class RightDoorGun;
	class BackDoorGun;
	maxSpeed = 293;
	fuelCapacity = 4043;
};

class CH_47F_EP1_DZE: CH_47F_EP1_DZ
{
	class Turrets: Turrets
	{
		class MainTurret: MainTurret
		{
			body = "mainTurret";
			gun = "mainGun";
			minElev = -50;
			maxElev = 30;
			initElev = -30;
			minTurn = -3;
			maxTurn = 173;
			initTurn = 0;
			soundServo[] = {"",0.01,1};
			animationSourceHatch = "";
			stabilizedInAxes = "StabilizedInAxesNone";
			gunBeg = "muzzle_1";
			gunEnd = "chamber_1";
			weapons[] = {"M134"};
			magazines[] = {};
			gunnerName = $STR_POSITION_CREWCHIEF;
			gunnerOpticsModel = "\ca\weapons\optika_empty";
			gunnerOutOpticsShowCursor = 1;
			gunnerOpticsShowCursor = 1;
			gunnerAction = "CH47_Gunner_EP1";
			gunnerInAction = "CH47_Gunner_EP1";
			commanding = -2;
			primaryGunner = 0;
			class ViewOptics
			{
				initAngleX = 0;
				minAngleX = -30;
				maxAngleX = 30;
				initAngleY = 0;
				minAngleY = -100;
				maxAngleY = 100;
				initFov = 0.7;
				minFov = 0.25;
				maxFov = 1.1;
			};
			gunnerCompartments = "Compartment2";
			memoryPointsGetInGunner = "pos gunner";
			memoryPointsGetInGunnerDir = "pos gunner dir";
		};
		class RightDoorGun: MainTurret
		{
			body = "Turret2";
			gun = "Gun_2";
			minElev = -60;
			maxElev = 30;
			initElev = -30;
			minTurn = -173;
			maxTurn = 3;
			initTurn = 0;
			animationSourceBody = "Turret_2";
			animationSourceGun = "Gun_2";
			stabilizedInAxes = "StabilizedInAxesNone";
			selectionFireAnim = "zasleh_1";
			proxyIndex = 2;
			gunnerName = $STR_POSITION_DOORGUNNER;
			commanding = -3;
			weapons[] = {"M134_2"};
			gunBeg = "muzzle_2";
			gunEnd = "chamber_2";
			primaryGunner = 0;
			memoryPointGun = "machinegun_2";
			memoryPointGunnerOptics = "gunnerview_2";
		};
		class BackDoorGun: MainTurret
		{
			body = "Turret3";
			gun = "Gun_3";
			minTurn = 130;
			maxTurn = 230;
			initTurn = 180;
			minElev = -50;
			maxElev = 50;
			initElev = 0;
			animationSourceBody = "Turret_3";
			animationSourceGun = "Gun_3";
			stabilizedInAxes = "StabilizedInAxesNone";
			selectionFireAnim = "zasleh_3";
			proxyIndex = 3;
			gunnerName = $STR_POSITION_REARGUNNER;
			gunnerOpticsShowCursor = 0;
			commanding = -1;
			gunnerAction = "CH47_Gunner01_EP1";
			gunnerInAction = "CH47_Gunner01_EP1";
			weapons[] = {"M240_veh"};
			magazines[] = {};
			gunBeg = "muzzle_3";
			gunEnd = "chamber_3";
			primaryGunner = 1;
			memoryPointGun = "machinegun_3";
			memoryPointGunnerOptics = "gunnerview_3";
		};
	};
};
