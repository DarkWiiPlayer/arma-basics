private _doubleDigits = {
	if (_x < 10) then {
		[ "0", _x ] joinString ""
	} else {
		_x
	}
};

private _music = missionConfigFile / "introMusic";

if (isText _music) then {
	playMusic getText _music;
};

private _dramatic = missionConfigFile / "dramaticIntro";

if (isText _dramatic and "true" == getText _dramatic) then {
	cutText ["", "BLACK FADED", 10, true];
	sleep 1;
	cutText ["", "BLACK IN", 10, true];
};

sleep 2;

private _location = missionConfigFile / "missionLocation";
if (isText _location) then {
	getText _location splitString ";" select [0, 2] call BIS_fnc_infoText;
} else {
	[player call BIS_fnc_locationDescription, worldName] call BIS_fnc_infoText;
};
sleep 1;

private _time = date select [3, 2] apply _doubleDigits joinString ":";
private _date = date select [0, 3] apply _doubleDigits joinString "-";

0 = [_date, _time] call BIS_fnc_infoText;

sleep 2;

private _title = missionConfigFile / "missionTitle";
if (isText _title) then {
	{
		0 = [_x, -1, -1, 3, 1] call BIS_fnc_dynamicText;
	} forEach (getText _title splitString ";");
} else {
	0 = [getText (missionConfigFile / "onLoadName"), -1, -1, 3, 1] call BIS_fnc_dynamicText;
}
