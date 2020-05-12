//"rhs_weap_rpg75"

class RHS_FIA_Altis {
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
      {"SmokeShell",2}
    };

    backpack[] = {};
    backpackContents[] = {};

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
    backpack[] = {
      "B_Carryall_oli",
      "B_FieldPack_oli",
      "B_FieldPack_khk"
    };
    vestContents[] = {
      {"rhs_30Rnd_762x39mm_Savz58",4},
      {"rhs_30Rnd_762x39mm_Savz58_tracer",2},
      {"HandGrenade",2},
      {"SmokeShell",2},
      {"ACRE_PRC148"}
    };

  };
  class ZEUS: PL {};
  class TL: PL {};
  class RF: BaseUnit {};
  class UGL: BaseUnit {
    weapons[] = {
      {"rhs_weap_m79",
        {"1Rnd_HE_Grenade_shell"}
      }
    };
    vestContents[] = {
      {"HandGrenade",2},
      {"SmokeShell",2},
      {"1Rnd_HE_Grenade_shell",14},
      {"1Rnd_Smoke_Grenade_Shell",6}
    };
  };
  class UAV: BaseUnit {};
	class FSO: UAV {};
  class MED: BaseUnit {
    ace_medic = 2;
    backpack[] = {
      "B_Carryall_oli",
      "B_FieldPack_oli",
      "B_FieldPack_khk",
      "rhs_medic_bag"
    };
    backpackContents[] = {
      {"ACE_fieldDressing",20},
      {"ACE_packingBandage",20},
      {"ACE_quikclot",20},
      {"ACE_morphine",20},
      {"ACE_epinephrine",20},
      {"ACE_adenosine",20},
      {"ACE_salineIV_250",4},
      {"ACE_bloodIV",4},
      {"ACE_personalAidKit",1},
      {"ACE_splint",4},
      {"ACE_tourniquet",4}
    };
  };

  class LMG: BaseUnit {
    weapons[] = {
      {"rhs_weap_pkm",
          {"rhs_100Rnd_762x54mmR"}
      }
    };

    vest[] = {
      "V_TacVest_oli",
      "V_Chestrig_oli",
      "V_Chestrig_rgr"
    };
    vestContents[] = {
      {"rhs_100Rnd_762x54mmR",1},
      {"rhs_100Rnd_762x54mmR_green",1},
      {"HandGrenade",2},
      {"SmokeShell",2}
    };
    backpack[] = { "B_Carryall_oli" };
    backpackContents[] = {
      {"rhs_100Rnd_762x54mmR",1},
      {"rhs_100Rnd_762x54mmR_green",1}
    };
  };
  class DMR: BaseUnit {
    weapons[] = {
      {"rhs_weap_svdp",
        {"rhs_acc_pso1m21","rhs_10Rnd_762x54mmR_7N14"}
      }
    };
    vestContents[] = {
      {"rhs_10Rnd_762x54mmR_7N1",4},
      {"rhs_10Rnd_762x54mmR_7N14",4},
      {"HandGrenade",2},
      {"SmokeShell",2}
    };
  };
  class PILOT: baseUnit {

    vestContents[] = {
      {"rhs_30Rnd_762x39mm_Savz58",2},
      {"rhs_30Rnd_762x39mm_Savz58_tracer",2},
      {"SmokeShellGreen",2},
      {"HandGrenade",1},
      {"SmokeShellRed",1},
      {"ACRE_PRC148",1}
    };
		backpack[] = {
			"B_FieldPack_oli","B_FieldPack_khk"
		};
		backpackContents[] = {
			{"ToolKit",1}
		};
	};
  class LargeGearCrate {
    vehCargoWeapons[] = {
      {"rhs_weap_rpg75",5},
      {"Binocular",2}
    };
    vehCargoMagazines[] = {
      {"rhs_30Rnd_762x39mm_Savz58",20},
      {"rhs_30Rnd_762x39mm_Savz58_Tracer",20},
      {"rhs_100Rnd_762x54mmR",6},
      {"rhs_100Rnd_762x54mmR_green",6},
      {"HandGrenade",16},
      {"SmokeShell",16},
      {"1Rnd_HE_Grenade_shell",20},
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
          {"rhs_10Rnd_762x54mmR_7N1",2},
          {"rhs_10Rnd_762x54mmR_7N14",2},
          {"HandGrenade",2},
          {"SmokeShell",2}
        }
      },
      {"rhs_medic_bag",1,{
          {"ACE_fieldDressing",20},
          {"ACE_packingBandage",20},
          {"ACE_quikclot",20},
          {"ACE_morphine",10},
          {"ACE_epinephrine",10},
          {"ACE_adenosine",10},
          {"ACE_salineIV_250",4},
          {"ACE_bloodIV",4},
          {"ACE_personalAidKit",1},
          {"ACE_splint",4},
          {"ACE_tourniquet",4}
        }
      },
      {"rhsgref_ttsko_alicepack",2,{
          {"rhs_30Rnd_762x39mm_Savz58",6},
          {"rhs_30Rnd_762x39mm_Savz58_tracer",2},
          {"HandGrenade",2},
          {"SmokeShell",2},
          {"rhs_10Rnd_762x54mmR_7N1",2},
          {"rhs_10Rnd_762x54mmR_7N14",2}
        }
      },
      {"B_FieldPack_oli",4}
    };
  };
};
