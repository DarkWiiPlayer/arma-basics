private _unit = param [0, objNull, [objNull]];
_unit setUnitTrait ["engineer", "ToolKit" in items _unit];
_unit setUnitTrait ["explosiveSpecialist", "MineDetector" in items _unit];
_unit setUnitTrait ["medic", ("Medkit" in items _unit) or ("ACE_salineIV_250" in items _unit)];
_unit setUnitTrait ["UAVHacker", "B_UavTerminal" in assignedItems _unit];
