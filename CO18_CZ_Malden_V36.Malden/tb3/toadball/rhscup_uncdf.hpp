class RHSCUP_UNCDF {
  class BaseUnit {
    allowPlayerGoggles = 0;
    ace_medic = 1;
    weapons[] = {
      {"CUP_arifle_AK74_Early", {"CUP_30Rnd_545x39_AK74M_M" }}
    };
    priKit[] = {};
    secKit[] = {};
    pisKit[] = {};

    assignedItems[] = {"ItemMap","ItemCompass","ItemWatch"};

    headgear[] = {
      "rhsgref_6b27m_ttsko_forest",
      "rhsgref_6b27m_ttsko_mountain"
    };
    goggles[] = {};

    uniform[] = {
      "rhsgref_uniform_ttsko_forest",
      "rhsgref_uniform_ttsko_mountain"
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

    vest[] = { "rhs_6b5_rifleman_ttsko" };

    vestContents[] = {
      {"CUP_30Rnd_545x39_AK74M_M",4},
      {"CUP_30Rnd_TE1_Green_Tracer_545x39_AK74M_M",2},
      {"HandGrenade",2},
      {"SmokeShell",2},
      {"ACE_MapTools",1}
    };

    backpack[] = {
      "B_FieldPack_oli",
      "B_FieldPack_khk"
    };
    backpackContents[] = {
      {"CUP_30Rnd_545x39_AK74M_M",4},
      {"CUP_30Rnd_TE1_Green_Tracer_545x39_AK74M_M",2},
      {"HandGrenade",2},
      {"SmokeShell",2},
      {"rhs_75Rnd_762x39mm_tracer",1},
      {"rhs_100Rnd_762x54mmR_green",1}
    };

    magazines[] = {}; items[] = {};
  };
  class PL: BaseUnit {
    weapons[] = {
      {"CUP_arifle_AK74_Early", {"CUP_30Rnd_545x39_AK74M_M" }},
      "Binocular"
    };

    vest[] = { "rhs_6b5_officer_ttsko" };

    vestContents[] = {
      {"CUP_30Rnd_545x39_AK74M_M",4},
      {"CUP_30Rnd_TE1_Green_Tracer_545x39_AK74M_M",2},
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
      {"CUP_30Rnd_545x39_AK74M_M",4},
      {"CUP_30Rnd_TE1_Green_Tracer_545x39_AK74M_M",2},
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
        {"CUP_arifle_AK74_GL_Early", {"CUP_30Rnd_545x39_AK74M_M","rhs_VOG25"}}
      }
    };
    backpackContents[] = {
      {"CUP_30Rnd_545x39_AK74M_M",2},
      {"CUP_30Rnd_TE1_Green_Tracer_545x39_AK74M_M",2},
      {"HandGrenade",2},
      {"SmokeShell",2},
      {"rhs_VOG25",20},
      {"rhs_GRD40_White",5},
      {"ACE_MapTools",1}
    };
  };
  class MAT: BaseUnit {
    weapons[] = {
      {"CUP_arifle_AK74_Early", {"CUP_30Rnd_545x39_AK74M_M" }},
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

    vest[] = { "rhs_6b5_medic_ttsko" };
    backpack[] = { "B_Carryall_oli" };
    backpackContents[] = {
      {"CUP_30Rnd_545x39_AK74M_M",4},
      {"CUP_30Rnd_TE1_Green_Tracer_545x39_AK74M_M",2},
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
    vest[] = { "rhs_6b5_sniper_ttsko" };
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
      {"CUP_30Rnd_545x39_AK74M_M",2},
      {"CUP_30Rnd_TE1_Green_Tracer_545x39_AK74M_M",2},
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
      {"CUP_30Rnd_545x39_AK74M_M",32},
      {"CUP_30Rnd_TE1_Green_Tracer_545x39_AK74M_M",16},
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
