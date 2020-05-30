class RHSCON_WDL {
  class BaseUnit {
    allowPlayerGoggles = 1;
    ace_medic = 1;
    weapons[] = {
      {
        {"rhs_weap_m21s",
            {"rhsgref_30rnd_556x45_m21"}
        },
        {"rhs_weap_m21a",
            {"rhsgref_30rnd_556x45_m21"}
        }
      },
      {"hgun_Rook40_F",{"16Rnd_9x21_Mag"}}
    };
    priKit[] = {};
    secKit[] = {};
    pisKit[] = {};

    assignedItems[] = {"ItemMap","ItemCompass","ItemWatch","rhsusf_ANPVS_15"};

    headgear[] = {
      "rhsusf_opscore_fg_pelt"
    };
    goggles[] = {
      "G_Combat",
      "G_Combat_Goggles_tna_F",
      "G_Tactical_Clear"
    };
    uniform[] = {"rhs_uniform_g3_m81"};

      uniformContents[] = {
        {"ACE_fieldDressing",5},
				{"ACE_packingBandage",5},
				{"ACE_quikclot",5},
				{"ACE_Tourniquet",2},
				{"ACE_splint",1},
				{"ACE_morphine",1},
        {"ACE_epinephrine",1},
        {"ACE_adenosine",1},
				{"ACE_salineIV_500",1},
        {"ACE_Flashlight_MX991",1},
        {"ACRE_PRC343",1}
      };

    vest[] = {"V_CarrierRigKBT_01_light_Olive_F"};

      vestContents[] = {
        {"rhsgref_30rnd_556x45_m21",4},
        {"rhsgref_30rnd_556x45_m21_t",2},
        {"16Rnd_9x21_Mag",2},
        {"HandGrenade",2},
        {"SmokeShell",2},
        {"Chemlight_green",2},
        {"ACE_MapTools",1},
        {"ACE_microDAGR",1}
      };

    backpack[] = {"rhs_assault_umbts"};
      backpackContents[] = {
        {"rhsgref_30rnd_556x45_m21",4},
        {"rhsgref_30rnd_556x45_m21_t",2},
        {"16Rnd_9x21_Mag",2},
        {"HandGrenade",2},
        {"SmokeShell",2},
        {"Chemlight_green",2},
        {"B_IR_Grenade",1},
        {"rhsusf_200Rnd_556x45_mixed_soft_pouch_coyote",1}
      };

    magazines[] = {}; items[] = {};
  };
  class PL: BaseUnit {
    weapons[] = {
      {
          {"rhs_weap_m21s",
              {"rhsgref_30rnd_556x45_m21"}
          },
          {"rhs_weap_m21a",
              {"rhsgref_30rnd_556x45_m21"}
          }
      },
      {"hgun_Rook40_F",{"16Rnd_9x21_Mag"}},
      "ACE_Vector"
    };
    assignedItems[] = {"ItemMap","ItemCompass","ItemWatch","rhsusf_ANPVS_15"};

    vestContents[] = {
      {"rhsgref_30rnd_556x45_m21",4},
      {"rhsgref_30rnd_556x45_m21_t",2},
      {"16Rnd_9x21_Mag",2},
      {"HandGrenade",2},
      {"SmokeShell",2},
      {"Chemlight_green",2},
      {"ACE_MapTools",1},
      {"ace_IR_strobe_item",1},
      {"ACRE_PRC148",1},
      {"ACE_microDAGR",1}
    };
    backpackContents[] = {
      {"rhsgref_30rnd_556x45_m21",4},
      {"rhsgref_30rnd_556x45_m21_t",2},
      {"16Rnd_9x21_Mag",2},
      {"HandGrenade",2},
      {"SmokeShell",2},
      {"Chemlight_green",2},
      {"B_IR_Grenade",1},
      {"rhsusf_200Rnd_556x45_mixed_soft_pouch_coyote",1},
      {"itc_land_tablet_rover",1}
    };
  };
  class ZEUS: PL {
    assignedItems[] = {"ItemMap","ItemCompass","ItemWatch","B_UavTerminal","ACE_Vector","rhsusf_ANPVS_15"};
  };
  class TL: PL {};
  class RF: BaseUnit {};
  class UGL: RF {};
  class DMR: RF {
    weapons[] = {
      {"rhs_weap_svds",
        {"rhs_10Rnd_762x54mmR_7N1","rhs_acc_pso1m21"}
      },
      {"hgun_Rook40_F",{"16Rnd_9x21_Mag"}},
      "ACE_Vector"
    };
    vestContents[] = {
      {"rhs_10Rnd_762x54mmR_7N1",4},
      {"rhs_10Rnd_762x54mmR_7N14",2},
      {"16Rnd_9x21_Mag",2},
      {"HandGrenade",2},
      {"SmokeShell",2},
      {"Chemlight_green",2},
      {"ACE_MapTools",1},
      {"ACE_microDAGR",1}
    };
    backpackContents[] = {
      {"rhs_10Rnd_762x54mmR_7N1",4},
      {"rhs_10Rnd_762x54mmR_7N14",2},
      {"16Rnd_9x21_Mag",2},
      {"HandGrenade",2},
      {"SmokeShell",2},
      {"Chemlight_green",2},
      {"B_IR_Grenade",1},
      {"rhsusf_200Rnd_556x45_mixed_soft_pouch_coyote",1}
    };
  };
  class FSO: PL {
    vestContents[] = {
      {"rhsgref_30rnd_556x45_m21",4},
      {"rhsgref_30rnd_556x45_m21_t",2},
      {"HandGrenade",2},
      {"SmokeShell",2},
      {"Chemlight_green",2},
      {"B_IR_Grenade",1},
      {"ace_IR_strobe_item",1},
      {"ACRE_PRC148",2},
      {"rhsusf_acc_nt4_black",1},
      {"ACE_MapTools",1},
      {"ACE_MicroDagr",1}
    };
    backpack[] = {"itc_land_b_uav_backpack"};
    assignedItems[] = {"ItemMap","ItemCompass","ItemWatch","B_UavTerminal","rhsusf_ANPVS_15"};
      backpackContents[] = {
        {"rhsgref_30rnd_556x45_m21",4},
        {"rhsgref_30rnd_556x45_m21_t",2},
        {"HandGrenade",2},
        {"SmokeShell",2},
        {"Chemlight_green",2},
        {"ace_IR_strobe_item",1},
        {"itc_land_b_ar2i_packed",1},
        {"ace_uavbattery",2},
        {"Laserdesignator_01_khk_F",1},
        {"Laserbatteries",3},
        {"itc_land_tablet_rover",1}
      };
  };
  class MED: BaseUnit {
    ace_medic = 2;
    backpack[] = {"B_Carryall_green_F"};
      backpackContents[] = {
        {"rhsgref_30rnd_556x45_m21",4},
        {"rhsgref_30rnd_556x45_m21_t",2},
        {"HandGrenade",2},
        {"SmokeShell",2},
        {"Chemlight_green",2},
        {"B_IR_Grenade",1},
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
    weapons[] = {
      {"rhs_weap_m249",
          {"rhsusf_200Rnd_556x45_mixed_soft_pouch_coyote"}
      },
      {"hgun_Rook40_F",{"16Rnd_9x21_Mag"}}
    };
      vestContents[] = {
        {"rhsusf_200Rnd_556x45_mixed_soft_pouch_coyote",2},
        {"16Rnd_9x21_Mag",2},
        {"HandGrenade",2},
        {"SmokeShell",2},
        {"Chemlight_green",2},
        {"ACE_MapTools",1}
      };
      backpackContents[] = {
        {"rhsusf_200Rnd_556x45_mixed_soft_pouch_coyote",2},
        {"HandGrenade",2},
        {"SmokeShell",2},
        {"Chemlight_green",2},
        {"B_IR_Grenade",1}
      };
  };
	class PILOT: baseUnit {
		weapons[] = {
      {"rhsusf_weap_MP7A2",{"rhsusf_mag_40Rnd_46x30_FMJ","rhsusf_acc_eotech_552_d","rhsusf_acc_anpeq15side_bk"}},
      {"hgun_Rook40_F",{"16Rnd_9x21_Mag"}}
    };
		headgear[] = {
      "rhsusf_hgu56p_black",
      "rhsusf_hgu56p_visor_black",
      "rhsusf_hgu56p_mask_black",
      "rhsusf_hgu56p_visor_mask_Empire_black",
      "rhsusf_hgu56p_visor_black","rhsusf_hgu56p_green",
      "rhsusf_hgu56p_mask_green_mo",
      "rhsusf_hgu56p_visor_green",
      "rhsusf_hgu56p_visor_mask_green_mo",
      "rhsusf_hgu56p",
      "rhsusf_hgu56p_mask",
      "rhsusf_hgu56p_mask_mo",
      "rhsusf_hgu56p_mask_skull",
      "rhsusf_hgu56p_visor",
      "rhsusf_hgu56p_visor_mask",
      "rhsusf_hgu56p_visor_mask_mo",
      "rhsusf_hgu56p_visor_mask_skull",
      "rhsusf_hgu56p_pink",
      "rhsusf_hgu56p_visor_pink",
      "rhsusf_hgu56p_mask_smiley",
      "rhsusf_hgu56p_visor_mask_smiley"
		};
		uniform[] = {
			"U_B_HeliPilotCoveralls",
		};
		vestContents[] = {
			{"rhsusf_mag_40Rnd_46x30_FMJ",6},
			{"SmokeShellRed",1},
      {"HandGrenade",1},
			{"ACRE_PRC148",1}
		};
		backpack[] = {
			"B_AssaultPack_khk"
		};
		backpackContents[] = {
			{"ToolKit",1}
		};
	};
  class LauncherCrate {
    vehCargoWeapons[] = {
      {"rhs_weap_m72a7",10},
      {"launch_MRAWS_green_F",2},
      {"ACE_Vector",2}
    };
    vehCargoMagazines[] = {
      {"MRAWS_HE_F",12},
      {"MRAWS_HEAT55_F",12},
      {"MRAWS_HEAT_F",6}
    };
    vehCargoRucks[] = {
      {"rhs_assault_umbts",2},
      {"B_Carryall_green_F",2}
    };
  };

  class LargeGearCrate {
    vehCargoWeapons[] = {
      {"rhs_weap_m72a7",10},
      {"ACE_Vector",2}
    };
    vehCargoMagazines[] = {
      {"rhsgref_30rnd_556x45_m21",20},
      {"rhsgref_30rnd_556x45_m21_t",20},
      {"rhsusf_200Rnd_556x45_mixed_soft_pouch_coyote",12},
      {"rhs_10Rnd_762x54mmR_7N1",4},
      {"rhs_10Rnd_762x54mmR_7N14",4},
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
      {"B_Carryall_green_F",2,{
          {"rhsusf_200Rnd_556x45_mixed_soft_pouch_coyote",4},
          {"HandGrenade",2},
          {"SmokeShell",2}
        }
      },
      {"B_Carryall_green_F",1,{
          {"rhsgref_30rnd_556x45_m21",4},
          {"rhsgref_30rnd_556x45_m21_t",2},
          {"HandGrenade",2},
          {"SmokeShell",2},
          {"Chemlight_green",2},
          {"B_IR_Grenade",1},
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
        }
      },
      {"B_Carryall_green_F",2,{
          {"rhsgref_30rnd_556x45_m21",6},
          {"rhsgref_30rnd_556x45_m21_t",2},
          {"HandGrenade",2},
          {"SmokeShell",2},
          {"rhsusf_200Rnd_556x45_mixed_soft_pouch_coyote",2}
        }
      },
      {"rhs_assault_umbts",4}
    };
  };
};
