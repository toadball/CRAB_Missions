class RHS_FIA {
  class BaseUnit {
    allowPlayerGoggles = 1;
    ace_medic = 1;
    weapons[] = {
      {
        {"rhs_weap_ak74_2",{"rhs_30Rnd_545x39_7N10_plum_AK","rhs_acc_dtk1983"}},
        {"rhs_weap_aks74_2",{"rhs_30Rnd_545x39_7N10_plum_AK","rhs_acc_dtk1983"}}
      }
    };
    priKit[] = {};
    secKit[] = {};
    pisKit[] = {};

    assignedItems[] = {"ItemMap","ItemCompass","ItemWatch"};

    headgear[] = {
      "H_Booniehat_oli",
      "H_Booniehat_khk",
      "H_Booniehat_mgrn",
      "H_Bandanna_khk",
      "H_Bandanna_sgg",
      "H_Bandanna_sand",
      "H_Bandanna_cbr",
      "H_Watchcap_cbr",
      "H_Watchcap_camo",
      "H_Watchcap_khk"
    };
    goggles[] = {};

    uniform[] = {
      "rhsgref_uniform_altis_lizard_olive",
      "rhsgref_uniform_altis_lizard"
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
      "V_Chestrig_oli",
      "V_Chestrig_khk",
      "V_Chestrig_rgr"
    };
    vestContents[] = {
      {"rhs_30Rnd_545x39_7N10_plum_AK",4},
      {"rhs_30Rnd_545x39_AK_plum_green",2},
      {"rhs_mag_rgd5",2},
      {"rhs_mag_rdg2_white",2},
      {"ACE_MapTools",1}
    };

    backpack[] = {
      "B_FieldPack_khk",
      "B_FieldPack_oli",
      "B_FieldPack_green_F"
    };
    backpackContents[] = {
      {"rhs_30Rnd_545x39_7N10_plum_AK",4},
      {"rhs_30Rnd_545x39_AK_plum_green",2},
      {"rhs_mag_rgd5",2},
      {"rhs_mag_rdg2_white",2},
      {"rhs_100Rnd_762x54mmR_green",1}
    };

    magazines[] = {}; items[] = {};
  };
  class PL: BaseUnit {
    weapons[] = {
      {
        {"rhs_weap_ak74_2",{"rhs_30Rnd_545x39_7N10_plum_AK","rhs_acc_dtk1983"}},
        {"rhs_weap_aks74_2",{"rhs_30Rnd_545x39_7N10_plum_AK","rhs_acc_dtk1983"}}
      },
      "Binocular"
    };
    vestContents[] = {
      {"rhs_30Rnd_545x39_7N10_plum_AK",4},
      {"rhs_30Rnd_545x39_AK_plum_green",2},
      {"rhs_mag_rgd5",2},
      {"rhs_mag_rdg2_white",2},
      {"ACRE_PRC148",1},
      {"ACE_MapTools",1}
    };
  };
  class ZEUS: PL {};
  class TL: PL {};
  class RF: BaseUnit {};
  class UGL: BaseUnit {
    weapons[] = {
      {"rhs_weap_ak74n_2_gp25",{"rhs_30Rnd_545x39_7N10_plum_AK","rhs_VOG25","rhs_acc_dtk1983"}}
    };
    backpackContents[] = {
      {"rhs_30Rnd_545x39_7N10_plum_AK",2},
      {"rhs_30Rnd_545x39_AK_plum_green",2},
      {"rhs_mag_rgd5",2},
      {"rhs_mag_rdg2_white",2},
      {"rhs_VOG25",20},
      {"rhs_GRD40_White",5},
      {"ACE_MapTools",1}
    };
  };
	class FSO: TL {};
  class MED: BaseUnit {
    ace_medic = 2;
    backpack[] = {
      "B_Carryall_oli",
      "B_Carryall_green_F",
      "B_Carryall_khk"
    };
    backpackContents[] = {
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
      {"rhs_weap_pkm", {"rhs_100Rnd_762x54mmR"}}
    };
    vestContents[] = {
      {"rhs_100Rnd_762x54mmR",1},
      {"rhs_mag_rgd5",2},
      {"rhs_mag_rdg2_white",2},
      {"ACE_MapTools",1}
    };
    backpackContents[] = {
      {"rhs_100Rnd_762x54mmR_green",2}
    };
  };
  class GPMG: LMG { };

  class MAT: BaseUnit {
    weapons[] = {
      {"rhs_weap_aks74un",{"rhs_30Rnd_545x39_7N10_plum_AK","rhs_acc_pgs64_74un"}},
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
  class DMR: BaseUnit {
    weapons[] = {
      {"rhs_weap_svdp",{"rhs_10Rnd_762x54mmR_7N1","rhs_acc_pso1m2"}},
      "Binocular"
    };
    vestContents[] = {
      {"rhs_10Rnd_762x54mmR_7N1",4},
      {"rhs_10Rnd_762x54mmR_7N14",2},
      {"rhs_mag_rgd5",2},
      {"rhs_mag_rdg2_white",2},
      {"ACE_MapTools",1}
    };
    backpackContents[] = {
      {"rhs_10Rnd_762x54mmR_7N1",4},
      {"rhs_10Rnd_762x54mmR_7N14",2},
      {"rhs_mag_rgd5",2},
      {"rhs_mag_rdg2_white",2},
      {"rhs_100Rnd_762x54mmR_green",1}
    };
  };
  class PILOT: baseUnit {
    headgear[]={"H_Cap_headphones"};
    weapons[] = {
      {"rhs_weap_aks74un", {"rhs_30Rnd_545x39_7N10_plum_AK","rhs_acc_pgs64_74un"}}
    };
    vestContents[] = {
      {"rhs_30Rnd_545x39_7N10_plum_AK",2},
      {"rhs_30Rnd_545x39_AK_plum_green",2},
      {"SmokeShellGreen",2},
      {"rhs_mag_rgd5",1},
      {"SmokeShellRed",1},
      {"ACRE_PRC148",1},
      {"ACE_MapTools",1}
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
      {"rhs_30Rnd_545x39_7N10_plum_AK",32},
      {"rhs_30Rnd_545x39_AK_plum_green",16},
      {"rhs_100Rnd_762x54mmR",12},
      {"rhs_100Rnd_762x54mmR_green",4},
      {"rhs_10Rnd_762x54mmR_7N1",8},
      {"rhs_10Rnd_762x54mmR_7N14",4},
      {"rhs_mag_rgd5",16},
      {"rhs_mag_rdg2_white",16},
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
class RHS_FIA_Bandits: RHS_FIA {
  class BaseUnit {
    allowPlayerGoggles = 1;
    ace_medic = 1;
    weapons[] = {
      {
        {"rhs_weap_ak74",{"rhs_30Rnd_545x39_7N6M_AK","rhs_acc_dtk1983"}},
        {"rhs_weap_aks74",{"rhs_30Rnd_545x39_7N6M_AK","rhs_acc_dtk1983"}},
        {"rhs_weap_aks74u", {"rhs_30Rnd_545x39_7N6M_AK","rhs_acc_pgs64_74u"}}
      }
    };
    priKit[] = {};
    secKit[] = {};
    pisKit[] = {};

    assignedItems[] = {"ItemMap","ItemCompass","ItemWatch"};

    headgear[] = {
      "H_Booniehat_oli",
      "H_Booniehat_khk",
      "H_Booniehat_mgrn",
      "H_Bandanna_khk",
      "H_Bandanna_sgg",
      "H_Bandanna_sand",
      "H_Bandanna_cbr",
      "H_Watchcap_cbr",
      "H_Watchcap_camo",
      "H_Watchcap_khk"
    };
    goggles[] = {};

    uniform[] = {
      "U_I_C_Soldier_Para_5_F",
      "U_I_C_Soldier_Bandit_3_F",
      "U_I_C_Soldier_Bandit_1_F",
      "U_I_C_Soldier_Bandit_5_F",
      "U_BG_Guerilla2_1"
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
      "V_Chestrig_oli",
      "V_Chestrig_khk",
      "V_Chestrig_rgr"
    };
    vestContents[] = {
      {"rhs_30Rnd_545x39_7N6M_AK",4},
      {"rhs_30Rnd_545x39_AK_green",2},
      {"rhs_mag_rgd5",2},
      {"rhs_mag_rdg2_white",2},
      {"ACE_MapTools",1}
    };

    backpack[] = {
      "B_FieldPack_khk",
      "B_FieldPack_oli",
      "B_FieldPack_green_F"
    };
    backpackContents[] = {
      {"rhs_30Rnd_545x39_7N6M_AK",4},
      {"rhs_30Rnd_545x39_AK_green",2},
      {"rhs_mag_rgd5",2},
      {"rhs_mag_rdg2_white",2},
      {"rhs_100Rnd_762x54mmR_green",1}
    };

    magazines[] = {}; items[] = {};
  };
  class PL: BaseUnit {
    weapons[] = {
      {
        {"rhs_weap_ak74",{"rhs_30Rnd_545x39_7N6M_AK","rhs_acc_dtk1983"}},
        {"rhs_weap_aks74",{"rhs_30Rnd_545x39_7N6M_AK","rhs_acc_dtk1983"}},
        {"rhs_weap_aks74u", {"rhs_30Rnd_545x39_7N6M_AK","rhs_acc_pgs64_74u"}}
      },
      "Binocular"
    };
    vestContents[] = {
      {"rhs_30Rnd_545x39_7N6M_AK",4},
      {"rhs_30Rnd_545x39_AK_green",2},
      {"rhs_mag_rgd5",2},
      {"rhs_mag_rdg2_white",2},
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
        {"rhs_weap_ak74n_2_gp25",{"rhs_30Rnd_545x39_7N6M_AK","rhs_VOG25","rhs_acc_dtk1983"}},
        {"rhs_weap_aks74_gp25",{"rhs_30Rnd_545x39_7N6M_AK","rhs_VOG25","rhs_acc_dtk1983"}}
      }
    };
    backpackContents[] = {
      {"rhs_30Rnd_545x39_7N6M_AK",2},
      {"rhs_30Rnd_545x39_AK_green",2},
      {"rhs_mag_rgd5",2},
      {"rhs_mag_rdg2_white",2},
      {"rhs_VOG25",20},
      {"rhs_GRD40_White",5},
      {"ACE_MapTools",1}
    };
  };
	class FSO: TL {};
  class MED: BaseUnit {
    ace_medic = 2;
    backpack[] = {
      "B_Carryall_oli",
      "B_Carryall_green_F",
      "B_Carryall_khk"
    };
    backpackContents[] = {
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
      {"rhs_weap_pkm", {"rhs_100Rnd_762x54mmR"}}
    };
    vestContents[] = {
      {"rhs_100Rnd_762x54mmR",1},
      {"rhs_mag_rgd5",2},
      {"rhs_mag_rdg2_white",2},
      {"ACE_MapTools",1}
    };
    backpackContents[] = {
      {"rhs_100Rnd_762x54mmR_green",2}
    };
  };
  class GPMG: LMG { };

  class MAT: BaseUnit {
    weapons[] = {
      {"rhs_weap_aks74u", {"rhs_30Rnd_545x39_7N6M_AK","rhs_acc_pgs64_74u"}},
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
  class DMR: BaseUnit {
    weapons[] = {
      {"rhs_weap_svdp",{"rhs_10Rnd_762x54mmR_7N1","rhs_acc_pso1m2"}},
      "Binocular"
    };
    vestContents[] = {
      {"rhs_10Rnd_762x54mmR_7N1",4},
      {"rhs_10Rnd_762x54mmR_7N14",2},
      {"rhs_mag_rgd5",2},
      {"rhs_mag_rdg2_white",2},
      {"ACE_MapTools",1}
    };
    backpackContents[] = {
      {"rhs_10Rnd_762x54mmR_7N1",4},
      {"rhs_10Rnd_762x54mmR_7N14",2},
      {"rhs_mag_rgd5",2},
      {"rhs_mag_rdg2_white",2},
      {"rhs_100Rnd_762x54mmR_green",1}
    };
  };
  class PILOT: baseUnit {
    headgear[]={"H_Cap_headphones"};
    weapons[] = {
      {"rhs_weap_aks74u", {"rhs_30Rnd_545x39_7N6M_AK","rhs_acc_pgs64_74u"}}
    };
    vestContents[] = {
      {"rhs_30Rnd_545x39_7N6M_AK",2},
      {"rhs_30Rnd_545x39_AK_green",2},
      {"SmokeShellGreen",2},
      {"rhs_mag_rgd5",1},
      {"SmokeShellRed",1},
      {"ACRE_PRC148",1},
      {"ACE_MapTools",1}
    };
		backpackContents[] = {
			{"ToolKit",1}
		};
	};
};
