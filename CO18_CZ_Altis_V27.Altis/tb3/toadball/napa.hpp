//"rhs_weap_rpg75"

class NAPA {
  class BaseUnit {
    allowPlayerGoggles = 1;
    ace_medic = 1;
    weapons[] = {
      {
        {"rhs_weap_savz58p",
          {"rhs_30Rnd_762x39mm_Savz58"}
        },
        {"rhs_weap_savz58p_black",
          {"rhs_30Rnd_762x39mm_Savz58"}
        },
        {"rhs_weap_savz58v",
          {"rhs_30Rnd_762x39mm_Savz58"}
        },
        {"rhs_weap_savz58v_black",
          {"rhs_30Rnd_762x39mm_Savz58"}
        }
      }
    };
    priKit[] = {};
    secKit[] = {};
    pisKit[] = {};

    assignedItems[] = {"ItemMap","ItemCompass","ItemWatch"};

    headgear[] = {
      "rhs_beanie_green",
      "H_Booniehat_oli",
      "H_Watchcap_khk",
      "H_Cap_oli",
      "H_Bandanna_sgg",
      "H_Bandanna_khk"
    };
    goggles[] = {
      "G_Bandanna_oli",
      "G_Bandanna_khk",
      "rhs_scarf",
      "rhsusf_shemagh2_grn",
      "rhsusf_shemagh_grn",
      "rhsusf_shemagh_od",
      "rhsusf_shemagh2_od"
    };

    uniform[] = {
      "rhsgref_uniform_dpm_olive",
      "rhsgref_uniform_dpm",
      "rhsgref_uniform_flecktarn",
      "rhsgref_uniform_flecktarn_full",
      "rhsgref_uniform_woodland",
      "rhsgref_uniform_woodland_olive"
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
      "V_TacVest_oli",
      "V_Chestrig_oli",
      "V_Chestrig_rgr",
      "V_TacChestrig_grn_F",
      "V_TacChestrig_oli_F",
      "rhsgref_chicom_m88"
    };

    vestContents[] = {
      {"rhs_30Rnd_762x39mm_Savz58",4},
      {"rhs_30Rnd_762x39mm_Savz58_tracer",2},
      {"HandGrenade",2},
      {"SmokeShell",2},
      {"ACE_MapTools",1}
    };

    backpack[] = {
      "B_FieldPack_oli",
      "B_FieldPack_khk"
    };
    backpackContents[] = {
      {"rhs_30Rnd_762x39mm_Savz58",4},
      {"rhs_30Rnd_762x39mm_Savz58_tracer",2},
      {"HandGrenade",2},
      {"SmokeShell",2},
      {"rhs_100Rnd_762x54mmR_green",1}
    };

    magazines[] = {}; items[] = {};
  };
  class PL: BaseUnit {
    weapons[] = {
      {
        {"rhs_weap_savz58p",
          {"rhs_30Rnd_762x39mm_Savz58"}
        },
        {"rhs_weap_savz58p_black",
          {"rhs_30Rnd_762x39mm_Savz58"}
        },
        {"rhs_weap_savz58v",
          {"rhs_30Rnd_762x39mm_Savz58"}
        },
        {"rhs_weap_savz58v_black",
          {"rhs_30Rnd_762x39mm_Savz58"}
        }
      },
      "Binocular"
    };

    vest[] = {
      "V_Chestrig_oli",
      "V_Chestrig_rgr",
      "V_TacChestrig_grn_F",
      "V_TacChestrig_oli_F"
    };
    vestContents[] = {
      {"rhs_30Rnd_762x39mm_Savz58",4},
      {"rhs_30Rnd_762x39mm_Savz58_tracer",2},
      {"HandGrenade",2},
      {"SmokeShell",2},
      {"ACRE_PRC148",1},
      {"ACRE_PRC343",1},
      {"ACE_MapTools",1}
    };

  };
  class ZEUS: PL {};
  class TL: PL {};
  class RF: BaseUnit {};
  class UGL: BaseUnit {};
  class MAT: BaseUnit {
    weapons[] = {
      {
        {"rhs_weap_savz58p",
          {"rhs_30Rnd_762x39mm_Savz58"}
        },
        {"rhs_weap_savz58p_black",
          {"rhs_30Rnd_762x39mm_Savz58"}
        },
        {"rhs_weap_savz58v",
          {"rhs_30Rnd_762x39mm_Savz58"}
        },
        {"rhs_weap_savz58v_black",
          {"rhs_30Rnd_762x39mm_Savz58"}
        }
      },
      "launch_RPG7_F"
    };
    backpack[] = {"rhs_rpg_empty"};
    backpackContents[] = {
      {"RPG7_F",2},
      {"rhs_rpg7_OG7V_mag",1}
    };
  };
  class MATA: BaseUnit {
    backpack[] = {"rhs_rpg_empty"};
    backpackContents[] = {
      {"RPG7_F",1},
      {"rhs_rpg7_OG7V_mag",2}
    };
  };
  class UAV: BaseUnit {};
	class FSO: UAV {};
  class MED: BaseUnit {
    ace_medic = 2;

    backpack[] = { "B_Carryall_oli" };
    backpackContents[] = {
      {"ACE_fieldDressing",20},
      {"ACE_packingBandage",20},
      {"ACE_quikclot",10},
      {"ACE_elasticBandage",10},
      {"ACE_morphine",10},
      {"ACE_epinephrine",10},
      {"ACE_adenosine",10},
      {"ACE_salineIV_250",8},
      {"ACE_salineIV_500",4},
      {"ACE_bloodIV",1},
      {"ACE_personalAidKit",1},
      {"ACE_surgicalKit",1},
      {"ACE_splint",8},
      {"ACE_tourniquet",5}
    };
  };

  class LMG: BaseUnit {
    weapons[] = {"rhs_weap_pkm", {"rhs_100Rnd_762x54mmR"}};
    vest[] = {
      "V_TacVest_oli",
      "V_Chestrig_oli",
      "V_Chestrig_rgr"
    };
    vestContents[] = {
      {"rhs_100Rnd_762x54mmR",1},
      {"rhs_100Rnd_762x54mmR_green",1},
      {"HandGrenade",2},
      {"SmokeShell",2},
      {"ACE_MapTools",1}
    };
    backpackContents[] = {
      {"rhs_100Rnd_762x54mmR",1},
      {"rhs_100Rnd_762x54mmR_green",1}
    };
  };
  class GPMG: LMG { };

  class DMR: BaseUnit {
    weapons[] = {
      {"rhs_weap_svdp",
        {"rhs_acc_pso1m2","rhs_10Rnd_762x54mmR_7N14"}
      }
    };
    vestContents[] = {
      {"rhs_10Rnd_762x54mmR_7N1",4},
      {"rhs_10Rnd_762x54mmR_7N14",4},
      {"HandGrenade",2},
      {"SmokeShell",2},
      {"ACE_MapTools",1}
    };
  };
  class PILOT: baseUnit {

    vestContents[] = {
      {"rhs_30Rnd_762x39mm_Savz58",2},
      {"rhs_30Rnd_762x39mm_Savz58_tracer",2},
      {"SmokeShellGreen",2},
      {"HandGrenade",1},
      {"SmokeShellRed",1},
      {"ACRE_PRC148",1},
      {"ACE_MapTools",1}
    };
		backpack[] = {
			"B_FieldPack_oli","B_FieldPack_khk"
		};
		backpackContents[] = {
			{"ToolKit",1}
		};
	};

  class LauncherCrate {
    vehCargoWeapons[] = {
      {"rhs_weap_rpg75",10},
      {"rhs_weap_rpg7",2},
      {"Binocular",2}
    };
    vehCargoMagazines[] = {
      {"rhs_rpg7_OG7V_mag",12},
      {"rhs_rpg7_PG7V_mag",12}
    };
    vehCargoRucks[] = {
      {"rhs_rpg_empty",2},
      {"rhsgref_ttsko_alicepack",2}
    };
    vehCargoItems[] = {
      {"rhs_acc_pgo7v",1}
    };
  };
  class LargeGearCrate {
    vehCargoWeapons[] = {
      {"rhs_weap_rpg75",10},
      {"Binocular",2}
    };
    vehCargoMagazines[] = {
      {"rhs_30Rnd_762x39mm_Savz58",32},
      {"rhs_30Rnd_762x39mm_Savz58_Tracer",16},
      {"rhs_100Rnd_762x54mmR",8},
      {"rhs_100Rnd_762x54mmR_green",8},
      {"rhs_10Rnd_762x54mmR_7N1",8},
      {"rhs_10Rnd_762x54mmR_7N14",8},
      {"HandGrenade",24},
      {"SmokeShell",24},
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
      {"rhsgref_ttsko_alicepack",4},
      {"B_FieldPack_oli",4}
    };
  };
};
