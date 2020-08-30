class RHSCUP_CZDK {
  class BaseUnit {
    allowPlayerGoggles = 0;
    ace_medic = 1;
    weapons[] = {
      {
        {"CUP_arifle_AKM_Early",
          {"30Rnd_762x39_Mag_Green_F" }
        },
        {"CUP_arifle_AK47_Early",
          {"30Rnd_762x39_Mag_Green_F" }
        },
        {"CUP_arifle_AKS",
          {"30Rnd_762x39_Mag_Green_F" }
        },
        {"CUP_arifle_AKMS_Early",
          {"30Rnd_762x39_Mag_Green_F" }
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
      "rhsgref_uniform_vsr",
      "rhsgref_uniform_reed",
      "rhsgref_uniform_specter"
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
      "rhs_6sh92",
      "rhs_6sh92_digi"
    };

    vestContents[] = {
      {"30Rnd_762x39_Mag_Green_F",4},
      {"30Rnd_762x39_Mag_Tracer_Green_F",2},
      {"HandGrenade",2},
      {"SmokeShell",2},
      {"ACE_MapTools",1}
    };

    backpack[] = {
      "B_FieldPack_oli",
      "B_FieldPack_khk"
    };
    backpackContents[] = {
      {"30Rnd_762x39_Mag_Green_F",4},
      {"30Rnd_762x39_Mag_Tracer_Green_F",2},
      {"HandGrenade",2},
      {"SmokeShell",2},
      {"rhs_75Rnd_762x39mm_tracer",1},
      {"rhs_100Rnd_762x54mmR_green",1}
    };

    magazines[] = {}; items[] = {};
  };
  class PL: BaseUnit {
    weapons[] = {
      {"CUP_arifle_AKM_Early",
        {"30Rnd_762x39_Mag_Green_F" }
      },
      {"CUP_arifle_AK47_Early",
        {"30Rnd_762x39_Mag_Green_F" }
      },
      {"CUP_arifle_AKS",
        {"30Rnd_762x39_Mag_Green_F" }
      },
      {"CUP_arifle_AKMS_Early",
        {"30Rnd_762x39_Mag_Green_F" }
      },
      "Binocular"
    };

    vest[] = {
      "rhs_6sh92_digi_radio",
      "rhs_6sh92_radio"
    };
    vestContents[] = {
      {"30Rnd_762x39_Mag_Green_F",4},
      {"30Rnd_762x39_Mag_Tracer_Green_F",2},
      {"HandGrenade",2},
      {"SmokeShell",2},
      {"ACRE_PRC148",1},
      {"ACRE_PRC343",1},
      {"ACE_MapTools",1}
    };

  };
  class ZEUS: PL {};
  class TL: PL {
    vestContents[] = {
      {"30Rnd_762x39_Mag_Green_F",4},
      {"30Rnd_762x39_Mag_Tracer_Green_F",2},
      {"HandGrenade",2},
      {"SmokeShell",2},
      {"ACRE_PRC343",1},
      {"ACE_MapTools",1}
    };
  };
  class RF: BaseUnit {};
  class UGL: BaseUnit {
    weapons[] = {
      {
        {"CUP_arifle_AKM_GL_Early",
          {"30Rnd_762x39_Mag_Green_F","rhs_VOG25" }
        },
        {"CUP_arifle_AK47_GL_Early",
          {"30Rnd_762x39_Mag_Green_F","rhs_VOG25" }
        },
        {"CUP_arifle_AKMS_GL_Early",
          {"30Rnd_762x39_Mag_Green_F","rhs_VOG25" }
        }
      }
    };
    vest[] = {
      "rhs_6sh92_digi_vog",
      "rhs_6sh92_vog"
    };
    backpackContents[] = {
      {"30Rnd_762x39_Mag_Green_F",2},
      {"30Rnd_762x39_Mag_Tracer_Green_F",2},
      {"HandGrenade",2},
      {"SmokeShell",2},
      {"rhs_VOG25",20},
      {"rhs_GRD40_White",5},
      {"ACE_MapTools",1}
    };
  };
  class MAT: BaseUnit {
    weapons[] = {
      {"CUP_arifle_AKM_Early",
        {"30Rnd_762x39_Mag_Green_F" }
      },
      {"CUP_arifle_AK47_Early",
        {"30Rnd_762x39_Mag_Green_F" }
      },
      {"CUP_arifle_AKS",
        {"30Rnd_762x39_Mag_Green_F" }
      },
      {"CUP_arifle_AKMS_Early",
        {"30Rnd_762x39_Mag_Green_F" }
      },
      "launch_RPG7_F"
    };
    backpack[] = {"rhs_rpg_empty"};
    backpackContents[] = {
      {"RPG7_F",2},
      {"rhs_rpg7_OG7V_mag",2}
    };
  };
  class MATA: BaseUnit {
    backpack[] = {"rhs_rpg_empty"};
    backpackContents[] = {
      {"RPG7_F",2},
      {"rhs_rpg7_OG7V_mag",2}
    };
  };
  class UAV: BaseUnit {};
	class FSO: UAV {};
  class MED: BaseUnit {
    ace_medic = 2;

    backpack[] = { "B_Carryall_oli" };
    backpackContents[] = {
      {"30Rnd_762x39_Mag_Green_F",4},
      {"30Rnd_762x39_Mag_Tracer_Green_F",2},
      {"HandGrenade",2},
      {"SmokeShell",2},
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
    weapons[] = {
      {"CUP_arifle_RPK74",
          {"rhs_75Rnd_762x39mm_89"}
      }
    };
    vest[] = {
      "V_Chestrig_oli",
      "V_Chestrig_rgr"
    };
    vestContents[] = {
      {"rhs_75Rnd_762x39mm_89",3},
      {"HandGrenade",2},
      {"SmokeShell",2},
      {"ACE_MapTools",1}
    };
    backpackContents[] = {
      {"rhs_75Rnd_762x39mm_tracer",3},
      {"HandGrenade",2},
      {"SmokeShell",2},
    };
  };
  class GPMG: BaseUnit {
    weapons[] = {
      {"CUP_lmg_PKM", {"rhs_100Rnd_762x54mmR"}}
    };
    vest[] = {
      "V_Chestrig_oli",
      "V_Chestrig_rgr"
    };
    vestContents[] = {
      {"rhs_100Rnd_762x54mmR",1},
      {"rhs_100Rnd_762x54mmR_green",1},
      {"ACE_MapTools",1}
    };
    backpackContents[] = {
      {"rhs_100Rnd_762x54mmR",1},
      {"rhs_100Rnd_762x54mmR_green",1},
      {"HandGrenade",2},
      {"SmokeShell",2}
    };
  };

  class DMR: BaseUnit {
    weapons[] = {
      {"CUP_srifle_SVD",
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
    backpackContents[] = {
      {"rhs_10Rnd_762x54mmR_7N1",4},
      {"rhs_10Rnd_762x54mmR_7N14",4},
      {"HandGrenade",2},
      {"SmokeShell",2}
		};
  };


  class PILOT: baseUnit {

    vestContents[] = {
      {"30Rnd_762x39_Mag_Green_F",2},
      {"30Rnd_762x39_Mag_Tracer_Green_F",2},
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
      {"rhs_weap_rpg75",5},
      {"Binocular",2}
    };
    vehCargoMagazines[] = {
      {"30Rnd_762x39_Mag_Green_F",32},
      {"30Rnd_762x39_Mag_Tracer_Green_F",16},
      {"rhs_75Rnd_762x39mm_89",12},
      {"rhs_75Rnd_762x39mm_Tracer",12},
      {"rhs_100Rnd_762x54mmR",12},
      {"rhs_100Rnd_762x54mmR_green",4},
      {"rhs_10Rnd_762x54mmR_7N1",8},
      {"rhs_10Rnd_762x54mmR_7N14",4},
      {"HandGrenade",16},
      {"SmokeShell",16},
      {"rhs_VOG25",40},
      {"rhs_GRD40_White",20},
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
