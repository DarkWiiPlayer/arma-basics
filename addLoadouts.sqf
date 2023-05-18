private _side = param [0, WEST, [WEST]];
private _roles = param [1, "all", [[]]];

{
	if (not (_roles isEqualType []) or getText (_x >> "role") in _roles) then {
		if (isNumber (_x >> "limit")) then {
			[_side, [configName _x, getNumber (_x >> "limit")]] call BIS_fnc_addRespawnInventory;
		} else {
			[_side, configName _x] call BIS_fnc_addRespawnInventory;
		}
	}
} forEach ("true" configClasses (missionConfigFile >> "CfgRespawnInventory"));
