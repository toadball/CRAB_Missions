class RHSCUP_ALPEN {
  class BaseUnit {
    allowPlayerGoggles = 0;
    ace_medic = 1;
    weapons[] = {
      {"CUP_arifle_Steyr_Stg58", {"rhs_mag_20Rnd_762x51_m80a1_fnfal","CUP_bipod_FNFAL"}}
    };
    priKit[] = {};
    secKit[] = {};
    pisKit[] = {};

    assignedItems[] = {"ItemMap","ItemCompass","ItemWatch"};

    headgear[] = {
      "rhsgref_Booniehat_alpen"
    };
    goggles[] = { };

    uniform[] = {
      "rhsgref_uniform_alpenflage"
    };
      uniformContents[] = {
        {"ACE_fieldDressing",5},
				{"ACE_packingBandage",5},
				{"ACE_quikclot",5},
				{"ACE_Tourniquet",2},
				{"ACE_splint",1},
				{"ACE_morphine",2},
        {"ACE_epinephrine",2},
				{"ACE_salineIV_500",1},
        {"ACE_Flashlight_MX991",1}
      };

    vest[] = {
      "rhsgref_alice_webbing"
    };

    vestContents[] = {
      {"rhs_mag_20Rnd_762x51_m80a1_fnfal",3},
      {"rhs_mag_20Rnd_762x51_m62_fnfal",2},
      {"rhs_grenade_mkii_mag",2},
      {"rhs_mag_an_m8hc",1},
      {"ACE_MapTools",1}
    };

    backpack[] = {
      "rhsgref_hidf_alicepack"
    };
    backpackContents[] = {
      {"rhs_mag_20Rnd_762x51_m80a1_fnfal",3},
      {"rhs_mag_20Rnd_762x51_m62_fnfal",2},
      {"rhs_grenade_mkii_mag",2},
      {"rhs_mag_an_m8hc",1},
      {"rhsusf_100Rnd_762x51_m62_tracer",2}
    };

    magazines[] = {}; items[] = {};
  };
  class PL: BaseUnit {
    weapons[] = {
      {"CUP_arifle_Steyr_Stg58", {"rhs_mag_20Rnd_762x51_m80a1_fnfal","CUP_bipod_FNFAL"}},
      "Binocular"
    };
    backpackContents[] = {
      {"rhs_mag_20Rnd_762x51_m80a1_fnfal",3},
      {"rhs_mag_20Rnd_762x51_m62_fnfal",2},
      {"rhs_grenade_mkii_mag",2},
      {"rhs_mag_an_m8hc",1},
      {"rhsusf_100Rnd_762x51_m62_tracer",2},
      {"ACRE_PRC77",1}
    };
  };
  class ZEUS: PL {};
  class TL: PL {};
  class RF: BaseUnit {};
  class UGL: BaseUnit {
    weapons[] = {
      {"rhs_weap_savz61_folded", {"rhsgref_20rnd_765x17_vz61"}},
      {"CUP_glaunch_6G30", {"CUP_6Rnd_HE_GP25_M"}}
    };
    vestContents[] = {
      {"CUP_6Rnd_HE_GP25_M",3},
      {"CUP_50Rnd_B_765x17_Ball_M",2},
      {"rhsgref_20rnd_765x17_vz61",2},
      {"ACE_MapTools",1}
    };
    backpackContents[] = {
      {"CUP_6Rnd_HE_GP25_M",5},
      {"CUP_6Rnd_Smoke_GP25",2},
      {"rhs_grenade_mkii_mag",4},
      {"rhs_mag_an_m8hc",2},
      {"rhsusf_100Rnd_762x51_m62_tracer",1}
    };

  };
  class MAT: BaseUnit {
    weapons[] = {
      {"CUP_arifle_Steyr_Stg58", {"rhs_mag_20Rnd_762x51_m80a1_fnfal","CUP_bipod_FNFAL"}},
      "rhs_weap_maaws"
    };
    backpackContents[] = {
      {"rhs_mag_20Rnd_762x51_m80a1_fnfal",3},
      {"rhs_mag_20Rnd_762x51_m62_fnfal",2},
      {"rhs_grenade_mkii_mag",2},
      {"rhs_mag_an_m8hc",1},
      {"MRAWS_HEAT_F",2},
      {"MRAWS_HE_F",2}
    };
  };
  class MATA: BaseUnit {
    backpackContents[] = {
      {"rhs_mag_20Rnd_762x51_m80a1_fnfal",3},
      {"rhs_mag_20Rnd_762x51_m62_fnfal",2},
      {"rhs_grenade_mkii_mag",2},
      {"rhs_mag_an_m8hc",1},
      {"MRAWS_HEAT_F",2},
      {"MRAWS_HE_F",2}
    };
  };
  class UAV: BaseUnit {};
	class FSO: UAV {};
  class MED: BaseUnit {
    ace_medic = 2;

    backpackContents[] = {
      {"rhs_mag_20Rnd_762x51_m80a1_fnfal",3},
      {"rhs_mag_20Rnd_762x51_m62_fnfal",2},
      {"rhs_grenade_mkii_mag",2},
      {"rhs_mag_an_m8hc",1},
      {"ACE_fieldDressing",20},
      {"ACE_packingBandage",20},
      {"ACE_quikclot",10},
      {"ACE_elasticBandage",10},
      {"ACE_morphine",10},
      {"ACE_epinephrine",10},
      {"ACE_adenosine",10},
      {"ACE_salineIV_250",4},
      {"ACE_salineIV_500",4},
      {"ACE_bloodIV",2},
      {"ACE_personalAidKit",1},
      {"ACE_surgicalKit",1},
      {"ACE_splint",8},
      {"ACE_tourniquet",5}
    };
  };

  class LMG: BaseUnit {
    weapons[] = {{"CUP_lmg_M60", {"rhsusf_100Rnd_762x51_m80a1epr"}}};
    vestContents[] = {
      {"rhsusf_100Rnd_762x51_m80a1epr",1},
      {"rhsusf_100Rnd_762x51_m62_tracer",1},
      {"rhs_grenade_mkii_mag",2},
      {"rhs_mag_an_m8hc",1},
      {"ACE_MapTools",1}
    };
    backpackContents[] = {
      {"rhs_grenade_mkii_mag",2},
      {"rhs_mag_an_m8hc",1},
      {"rhsusf_100Rnd_762x51_m80a1epr",2},
      {"rhsusf_100Rnd_762x51_m62_tracer",2}
    };
  };
  class GPMG: LMG { };

  class DMR: BaseUnit {};
  class PILOT: baseUnit {

    vestContents[] = {
      {"rhs_mag_20Rnd_762x51_m80a1_fnfal",2},
      {"rhs_mag_20Rnd_762x51_m62_fnfal",2},
      {"rhs_grenade_mkii_mag",1},
      {"rhs_mag_an_m8hcRed",1},
      {"ACRE_PRC148",1},
      {"ACE_MapTools",1}
    };
		backpack[] = {
			"B_FieldPack_oli"
		};
		backpackContents[] = {
			{"ToolKit",1}
		};
	};

  class LauncherCrate {
    vehCargoWeapons[] = {
      {"rhs_weap_rpg75",10},
      {"rhs_weap_maaws",2},
      {"Binocular",2}
    };
    vehCargoMagazines[] = {
      {"MRAWS_HEAT_F",12},
      {"MRAWS_HE_F",12}
    };
    vehCargoRucks[] = {
      {"rhsgref_hidf_alicepack",2}
    };
  };
  class LargeGearCrate {
    vehCargoWeapons[] = {
      {"rhs_weap_rpg75",10},
      {"Binocular",2}
    };
    vehCargoMagazines[] = {
      {"rhs_mag_20Rnd_762x51_m80a1_fnfal",40},
      {"rhs_mag_20Rnd_762x51_m62_fnfal",24},
      {"rhsusf_100Rnd_762x51_m80a1epr",8},
      {"rhsusf_100Rnd_762x51_m62_tracer",8},
      {"CUP_6Rnd_HE_GP25_M",10},
      {"CUP_6Rnd_Smoke_GP25",4},
      {"rhs_grenade_mkii_mag",24},
      {"rhs_mag_an_m8hc",24},
      {"DemoCharge_Remote_Mag",16}
    };
    vehCargoItems[] = {
      {"ToolKit",1},
      {"ACE_M26_Clacker",4},
      {"ACE_DefusalKit",2},
      {"ToolKit",1},
      {"ACE_M26_Clacker",4},
      {"ACE_DefusalKit",2},
      {"ACE_fieldDressing",20},
      {"ACE_packingBandage",20},
      {"ACE_quikclot",20},
      {"ACE_Tourniquet",8},
      {"ACE_splint",4},
      {"ACE_morphine",4},
      {"ACE_epinephrine",4},
      {"ACE_adenosine",4},
      {"ACE_salineIV_500",4},
      {"ACE_Flashlight_MX991",4},
      {"ACE_MapTools",4}
    };
    vehCargoRucks[] = {
      {"rhsgref_hidf_alicepack",4}
    };
  };
};
