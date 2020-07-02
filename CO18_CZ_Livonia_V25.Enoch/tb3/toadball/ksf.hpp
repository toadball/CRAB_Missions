//"rhs_weap_rpg75"

class KSF {
  class BaseUnit {
    allowPlayerGoggles = 0;
    ace_medic = 1;
    weapons[] = {
      {
        {"rhs_weap_ak104",
          {"30Rnd_762x39_Mag_Green_F","rhs_acc_pgs64"}
        },
        {"rhs_weap_ak103",
          {"30Rnd_762x39_Mag_Green_F","rhs_acc_dtk"}
        }
      }
    };
    priKit[] = {};
    secKit[] = {};
    pisKit[] = {};

    assignedItems[] = {"ItemMap","ItemCompass","ItemWatch"};

    headgear[] = {"rhs_6b26_green"};
    goggles[] = {"rhs_ess_black"};

    uniform[] = {"rhs_uniform_emr_des_patchless"};
    uniformContents[] = {
      {"ACE_fieldDressing",5},
			{"ACE_packingBandage",5},
			{"ACE_quikclot",5},
			{"ACE_Tourniquet",2},
			{"ACE_splint",1},
			{"ACE_morphine",2},
      {"ACE_epinephrine",2},
			{"ACE_salineIV_500",1},
      {"ACE_Flashlight_MX991",1},
      {"ACRE_PRC343"}
    };

    vest[] = { "rhsgref_6b23_khaki_rifleman" };

    vestContents[] = {
      {"30Rnd_762x39_Mag_Green_F",4},
      {"30Rnd_762x39_Mag_Tracer_Green_F",2},
      {"rhs_mag_rgd5",2},
      {"rhs_mag_rdg2_white",2},
      {"ACE_MapTools",1}
    };

    backpack[] = {"rhs_assault_umbts"};
    backpackContents[] = {
      {"30Rnd_762x39_Mag_Green_F",4},
      {"30Rnd_762x39_Mag_Tracer_Green_F",2},
      {"rhs_mag_rgd5",2},
      {"rhs_mag_rdg2_white",2},
      {"rhs_100Rnd_762x54mmR_green",1}
    };

    magazines[] = {}; items[] = {};
  };
  class PL: BaseUnit {
    weapons[] = {
      {
        {"rhs_weap_ak104",
          {"30Rnd_762x39_Mag_Green_F","rhs_acc_pgs64"}
        },
        {"rhs_weap_ak103",
          {"30Rnd_762x39_Mag_Green_F","rhs_acc_dtk"}
        }
      },
      "Binocular"
    };

    vestContents[] = {
      {"30Rnd_762x39_Mag_Green_F",4},
      {"30Rnd_762x39_Mag_Tracer_Green_F",2},
      {"rhs_mag_rgd5",2},
      {"rhs_mag_rdg2_white",2},
      {"ACRE_PRC148",1},
      {"ACRE_PRC343",1},
      {"ACE_MapTools",1}
    };

  };
  class ZEUS: PL {};
  class TL: PL {};
  class RF: BaseUnit {};
  class UGL: BaseUnit {
    weapons[] = {
      {"rhs_weap_ak103_gp25", {"30Rnd_762x39_Mag_Green_F","rhs_VOG25","rhs_acc_dtk"}}
    };
    backpack[] = {"B_Carryall_oli"};
    backpackContents[] = {
      {"30Rnd_762x39_Mag_Green_F",4},
      {"30Rnd_762x39_Mag_Tracer_Green_F",2},
      {"rhs_mag_rgd5",2},
      {"rhs_mag_rdg2_white",2},
      {"rhs_100Rnd_762x54mmR_green",1},
      {"rhs_VOG25",16},
      {"rhs_VG40TB",4},
      {"rhs_VG40MD",4}
    };
  };
  class MAT: BaseUnit {
    weapons[] = {
      {
        {"rhs_weap_ak104",
          {"30Rnd_762x39_Mag_Green_F","rhs_acc_pgs64"}
        },
        {"rhs_weap_ak103",
          {"30Rnd_762x39_Mag_Green_F","rhs_acc_dtk"}
        }
      },
      {"launch_RPG32_green_F",{"RPG32_F"}}
    };
    backpack[] = {"B_Carryall_oli"};
    backpackContents[] = {
      {"30Rnd_762x39_Mag_Green_F",4},
      {"30Rnd_762x39_Mag_Tracer_Green_F",2},
      {"rhs_mag_rgd5",2},
      {"rhs_mag_rdg2_white",2},
      {"RPG32_F",2},
      {"RPG32_HE_F",2}
    };
  };
  class MATA: BaseUnit {
    backpack[] = {"B_Carryall_oli"};
    backpackContents[] = {
      {"30Rnd_762x39_Mag_Green_F",4},
      {"30Rnd_762x39_Mag_Tracer_Green_F",2},
      {"rhs_mag_rgd5",2},
      {"rhs_mag_rdg2_white",2},
      {"RPG32_F",2},
      {"RPG32_HE_F",2}
    };
  };
	class FSO: PL {};
  class MED: BaseUnit {
    ace_medic = 2;
    vest[] = { "rhsgref_6b23_khaki_medic" };
    backpack[] = {"B_Carryall_oli"};
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
    weapons[] = {"rhs_weap_pkp", {"rhs_100Rnd_762x54mmR"}};
    vestContents[] = {
      {"rhs_100Rnd_762x54mmR",1},
      {"rhs_100Rnd_762x54mmR_green",1},
      {"rhs_mag_rgd5",2},
      {"rhs_mag_rdg2_white",2},
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
    vest[] = { "rhsgref_6b23_khaki_sniper" };
    vestContents[] = {
      {"rhs_10Rnd_762x54mmR_7N1",4},
      {"rhs_10Rnd_762x54mmR_7N14",4},
      {"rhs_mag_rgd5",2},
      {"rhs_mag_rdg2_white",2},
      {"ACE_MapTools",1}
    };
  };
  class PILOT: baseUnit {
    headgear[] = {
      "rhs_zsh7a_mike_green",
      "rhs_zsh7a_mike_green_alt"
    };

    vest[] = {"rhsgref_6b23_khaki"};
    vestContents[] = {
      {"30Rnd_762x39_Mag_Green_F",2},
      {"30Rnd_762x39_Mag_Tracer_Green_F",2},
      {"rhs_mag_rdg2_whiteGreen",2},
      {"rhs_mag_rgd5",1},
      {"rhs_mag_rdg2_whiteRed",1},
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
      {"launch_RPG32_green_F",2},
      {"Binocular",2}
    };
    vehCargoMagazines[] = {
      {"RPG32_F",12},
      {"RPG32_HE_F",12}
    };
    vehCargoRucks[] = {
      {"B_Carryall_oli",2}
    };
  };
  class LargeGearCrate {
    vehCargoWeapons[] = {
      {"rhs_weap_rpg75",10},
      {"Binocular",2}
    };
    vehCargoMagazines[] = {
      {"30Rnd_762x39_Mag_Green_F",32},
      {"30Rnd_762x39_Mag_Tracer_Green_F",16},
      {"rhs_100Rnd_762x54mmR",8},
      {"rhs_100Rnd_762x54mmR_green",8},
      {"rhs_10Rnd_762x54mmR_7N1",8},
      {"rhs_10Rnd_762x54mmR_7N14",8},
      {"rhs_mag_rgd5",24},
      {"rhs_mag_rdg2_white",24},
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
      {"B_Carryall_oli",8}
    };
  };
};
