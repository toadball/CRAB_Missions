//"rhs_weap_rpg75"

class RHS_TNLA {
  class BaseUnit {
    allowPlayerGoggles = 1;
    ace_medic = 1;
    weapons[] = {
      {
        {"rhs_weap_akm",
          {"30Rnd_762x39_Mag_Green_F","rhs_acc_dtkakm"}
        },
        {"rhs_weap_akms",
          {"30Rnd_762x39_Mag_Green_F","rhs_acc_dtkakm"}
        },
        {"rhs_weap_pm63",
          {"30Rnd_762x39_Mag_Green_F","rhs_acc_dtkakm"}
        }
      }
    };
    priKit[] = {};
    secKit[] = {};
    pisKit[] = {};

    assignedItems[] = {"ItemMap","ItemCompass","ItemWatch"};

    headgear[] = {
      "H_Bandanna_cbr",
      "H_Bandanna_sgg",
      "H_Bandanna_sand",
      "H_Bandanna_gry",
      "H_Bandanna_khk",
      "H_Booniehat_oli",
      "H_Booniehat_tan",
      "H_Booniehat_khk",
      "H_Cap_oli",
      "H_Cap_grn",
      "H_Cap_tan",
      "rhs_ssh68"
    };
    goggles[] = {};

    uniform[] = {
      "rhsgref_uniform_TLA_1",
      "rhsgref_uniform_TLA_2"
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
      "rhsgref_chicom"
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
      {"rhs_100Rnd_762x54mmR_green",1}
    };

    magazines[] = {}; items[] = {};
  };
  class PL: BaseUnit {
    weapons[] = {
      {
        {"rhs_weap_akm",
          {"30Rnd_762x39_Mag_Green_F","rhs_acc_dtkakm"}
        },
        {"rhs_weap_akms",
          {"30Rnd_762x39_Mag_Green_F","rhs_acc_dtkakm"}
        },
        {"rhs_weap_pm63",
          {"30Rnd_762x39_Mag_Green_F","rhs_acc_dtkakm"}
        }
      },
      "Binocular"
    };
    vestContents[] = {
      {"30Rnd_762x39_Mag_Green_F",4},
      {"30Rnd_762x39_Mag_Tracer_Green_F",2},
      {"HandGrenade",2},
      {"SmokeShell",2},
      {"ACRE_PRC148",1},
      {"ACE_MapTools",1}
    };
  };
  class ZEUS: PL {};
  class TL: PL {};
  class RF: BaseUnit {};
  class UGL: BaseUnit {
    weapons[] = {
      {
        {"rhs_weap_akms_gp25",
          {"30Rnd_762x39_Mag_Green_F","rhs_VOG25","rhs_acc_dtkakm"}
        },
        {"rhs_weap_akm_gp25",
          {"30Rnd_762x39_Mag_Green_F","rhs_VOG25","rhs_acc_dtkakm"}
        }
      }
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
      {"ACE_personalAidKit",1},
      {"ACE_surgicalKit",1},
      {"ACE_splint",8},
      {"ACE_tourniquet",5}
    };
  };

  class LMG: BaseUnit {
    weapons[] = {
      {"rhs_weap_pkm",
          {"rhs_100Rnd_762x54mmR"}
      }
    };
    vestContents[] = {
      {"rhs_100Rnd_762x54mmR",1},
      {"HandGrenade",2},
      {"SmokeShell",2},
      {"ACE_MapTools",1}
    };
    backpack[] = { "rhs_sidor" };
    backpackContents[] = {
      {"rhs_100Rnd_762x54mmR_green",2}
    };
  };
  class DMR: BaseUnit {
    weapons[] = {"rhs_weap_Izh18"};
    vestContents[] = {
      {"rhsgref_1Rnd_00Buck",15},
      {"rhsgref_1Rnd_Slug",5},
      {"HandGrenade",2},
      {"SmokeShell",2},
      {"ACE_MapTools",1}
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
      {"RPG7_F",2},
      {"Binocular",2}
    };
    vehCargoMagazines[] = {
      {"rhs_rpg7_OG7V_mag",12},
      {"RPG7_F",12},
      {"rhs_rpg7_PG7VR_mag",6}
    };
    vehCargoRucks[] = {
      {"rhs_rpg_empty",2},
      {"rhsgref_ttsko_alicepack",1}
    };
  };
  class LargeGearCrate {
    vehCargoWeapons[] = {
      {"rhs_weap_rpg75",5},
      {"Binocular",2}
    };
    vehCargoMagazines[] = {
      {"30Rnd_762x39_Mag_Green_F",20},
      {"30Rnd_762x39_Mag_Tracer_Green_F",20},
      {"rhs_100Rnd_762x54mmR",6},
      {"rhs_100Rnd_762x54mmR_green",6},
      {"rhs_10Rnd_762x54mmR_7N1",4},
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
      {"ACE_DefusalKit",2}
    };
    vehCargoRucks[] = {
      {"B_Carryall_oli",1,{
        {"rhs_10Rnd_762x54mmR_7N1",2},
        {"rhs_10Rnd_762x54mmR_7N14",2},
        {"HandGrenade",2},
        {"SmokeShell",2}
        }
      },
      {"B_Carryall_oli",1,{
          {"30Rnd_762x39_Mag_Green_F",6},
          {"30Rnd_762x39_Mag_Tracer_Green_F",2},
          {"HandGrenade",2},
          {"SmokeShell",2},
          {"rhs_100Rnd_762x54mmR",1},
          {"rhs_100Rnd_762x54mmR_green",1}
        }
      },
      {"rhsgref_ttsko_alicepack",1,{
          {"30Rnd_762x39_Mag_Green_F",6},
          {"30Rnd_762x39_Mag_Tracer_Green_F",2},
          {"HandGrenade",2},
          {"SmokeShell",2},
          {"rhs_100Rnd_762x54mmR",1},
          {"rhs_100Rnd_762x54mmR_green",1}
        }
      },
      {"rhs_medic_bag",1,{
          {"ACE_fieldDressing",20},
          {"ACE_packingBandage",20},
          {"ACE_quikclot",10},
          {"ACE_elasticBandage",10},
          {"ACE_morphine",10},
          {"ACE_epinephrine",10},
          {"ACE_adenosine",10},
          {"ACE_salineIV_250",4},
          {"ACE_salineIV_500",2},
          {"ACE_personalAidKit",1},
          {"ACE_surgicalKit",1},
          {"ACE_splint",8},
          {"ACE_tourniquet",5}
        }
      },
      {"B_FieldPack_oli",4}
    };
  };
};
