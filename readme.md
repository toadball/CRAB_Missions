Usefull snippets for ZEUS using tb3 gear and ZEN

The snippets below can be done in ZEN debug replacing player with _this
Assigning some one a new loadout with debug console using target exec
```sqf
[player,"SideClass","LoadoutClass"] call tb3_gear_fnc_Loadout;
```

Refreshing gear: Can be done per player with target debug, or globally with global exec
```sqf
(player getVariable "tb3_loadout") call tb3_gear_fnc_Loadout;
```

Changing SideClass but keep the same role, again either per player or globally
```sqf
[player,"SideClass",(player getVariable "tb3_loadout") #2] call tb3_gear_fnc_Loadout;
```

Full heal with ACE - can take less time than searching for the module
```sqf
[player, player] call ace_medical_treatment_fnc_fullHeal
```
