private _ace = "CODE" == typeName ace_arsenal_fnc_initBox;

if (not _ace) exitwith { true };

private _unit = param [0, objNull, [objNull]];

_unit addItem "ACE_EarPlugs";

if ("MineDetector" in items _unit) then {
	_unit addItem "ACE_DefusalKit";
};

if (("Medkit" in items _unit) or ("ACE_salineIV_250" in items _unit)) then {
	_unit addItem "ACE_surgicalKit";
};

if (magazines player findIf { (_x call BIS_fnc_itemType) # 0 == "Mine" } >= 0) then {
	_unit addItem "ACE_Clacker";
};

if (primaryWeapon player call BIS_fnc_itemType select 1 == "SniperRifle") then {
	_unit addItem "ACE_RangeCard";
	_unit addItem "ACE_MapTools";
};
