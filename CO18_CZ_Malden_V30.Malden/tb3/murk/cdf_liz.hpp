  class CDF_liz {
    class BaseUnit {
      ace_earplugs = 1;
      allowPlayerGoggles = 0;
      ace_medic = 1;

    weapons[] = {
      {
        {"CUP_arifle_AKM",
          {"ace_acc_pointer_green","rhs_30Rnd_762x39mm_89"}
        },
        {"CUP_arifle_AKMS",
          {"ace_acc_pointer_green","rhs_30Rnd_762x39mm_89"}
        }
      },	
        {"hgun_rook40_f",
          {"16rnd_9x21_mag"}
        }
      };

      assignedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio"};

      headgear[] = {
        "h_bandanna_khk_hs",
		"rhsusf_bowman_cap",
		"h_cap_headphones",
		"h_cap_oli_hs",
        "H_Booniehat_khk",
        "H_MilCap_grn"
      };

      goggles[] = {
		"g_bandanna_oli",
		"rhs_googles_clear",
        "rhsusf_shemagh_grn",
        "rhsusf_shemagh2_grn",
        "rhsusf_shemagh_od",
        "rhsusf_shemagh2_od",
        "rhsusf_shemagh_tan",		
        "rhsusf_shemagh2_tan"
      };

      uniform[] = {
        "rhsgref_uniform_altis_lizard",
        "rhsgref_uniform_altis_lizard_olive"
      };
      uniformContents[] = {
        {"ACE_fieldDressing",4},
        {"ACE_elasticBandage",4},
        {"ACE_quikclot",4},
        {"ACE_morphine",2},
        {"ACE_adenosine",1},
        {"ACE_tourniquet",2},
        {"ACE_Splint",2},
        {"ACE_salineIV_500",1},
        {"ACE_Flashlight_XL50",1}
      };

      vest[] = {V_HarnessO_ghex_F};
      vestContents[] = {
        {"rhs_30Rnd_762x39mm_89",6},
        {"handgrenade",2},
        {"SmokeShell",2},
        {"16rnd_9x21_mag",2},
        {"ace_maptools",1}
      };

      backpack[] = {"b_viperlightharness_ghex_f"};
      backpackContents[] = {
        {"CUP_nvg_pvs7",1},
        {"rhs_acc_pbs1", 1},
        {"rhs_30Rnd_762x39mm_89",4},
        {"SmokeShell",2},
        {"handgrenade",2}
      };
    };

  class SL: baseUnit {

    weapons[] = {
      {
        {"CUP_arifle_AKM",
          {"ace_acc_pointer_green","rhs_30Rnd_762x39mm_89","rhs_acc_pso1m21"}
        },
        {"CUP_arifle_AKMS",
          {"ace_acc_pointer_green","rhs_30Rnd_762x39mm_89","rhs_acc_pso1m21"}
        }
      },	
        {"hgun_rook40_f",
          {"16rnd_9x21_mag"}
      },
      "ace_yardage450"
    };
    vest[] = {"V_HarnessO_ghex_F"};
    vestContents[] = {
      {"rhs_30Rnd_762x39mm_89",6},
      {"handgrenade", 2},
      {"acre_prc148",1},
      {"16rnd_9x21_mag",2},
      {"itc_land_tablet_rover",1},
      {"ace_maptools",1}
    };

    backpackContents[] = {
      {"CUP_nvg_pvs7",1},
      {"rhs_acc_pbs1", 1},
      {"handgrenade", 2},
      {"rhs_30Rnd_762x39mm_89",6},
      {"ace_ir_strobe_item",1},
      {"SmokeShell",2},
      {"SmokeshellRed", 4},
      {"SmokeShellGreen", 4},
      {"ace_microdagr",1}
    };
  };
  class PL: SL {};
  class ZEUS: SL {};
  class TL: SL {
    weapons[] = {
      {
        {"CUP_arifle_AKM",
          {"ace_acc_pointer_green","rhs_30Rnd_762x39mm_89"}
        },
        {"CUP_arifle_AKMS",
          {"ace_acc_pointer_green","rhs_30Rnd_762x39mm_89"}
        }
      },	
        {"hgun_rook40_f",
          {"16rnd_9x21_mag"}
        },
        "ace_yardage450"
      };
    vest[] = {"V_HarnessO_ghex_F"};
    vestContents[] = {
      {"rhs_30Rnd_762x39mm_89",6},
      {"handgrenade", 2},
      {"acre_prc148",1},
      {"16rnd_9x21_mag",2},
      {"ace_maptools",1}
    };

    backpackContents[] = {
      {"CUP_nvg_pvs7",1},
      {"rhs_acc_pbs1", 1},
      {"handgrenade", 2},
      {"ace_ir_strobe_item",1},
      {"rhs_30Rnd_762x39mm_89",6},
      {"SmokeShell",2},
      {"SmokeshellRed", 4},
      {"SmokeShellGreen", 4},
      {"ace_microdagr",1}
    };
  };

  class DFO: SL {
    assignedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","B_UavTerminal"};

    weapons[] = {
      {
        {"CUP_arifle_AKM",
          {"ace_acc_pointer_green","rhs_30Rnd_762x39mm_89"}
        },
        {"CUP_arifle_AKMS",
          {"ace_acc_pointer_green","rhs_30Rnd_762x39mm_89"}
        }
      },	
        {"hgun_rook40_f",
          {"16rnd_9x21_mag"}
        },
        "binocular"
      };
    vest[] = {"V_HarnessO_ghex_F"};
    vestContents[] = {
      {"acre_prc148",2},
      {"rhs_30Rnd_762x39mm_89",6},
      {"handgrenade", 2},
      {"SmokeShell",2},
      {"SmokeshellRed", 2},
      {"SmokeShellGreen", 2},
      {"16rnd_9x21_mag",2},
      {"ace_maptools",1}
    };

    backpack[]={"b_carryall_ghex_f"};
    backpackContents[] = {
      {"CUP_nvg_pvs7",1},
      {"rhs_acc_pbs1", 1},
      {"rhs_30Rnd_762x39mm_89",6},
      {"SmokeShell",2},
      {"SmokeshellRed", 2},
      {"SmokeShellGreen", 2},
      {"ace_microdagr",1},
      {"ITC_Land_B_AR2i_Packed",2},
      {"ACE_UAVBattery",2}
    };
  };

  class FSO: DFO {};
  class FO: DFO {
    assignedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio"};

    weapons[] = {
      {
        {"CUP_arifle_AKM",
          {"ace_acc_pointer_green","rhs_30Rnd_762x39mm_89"}
        },
        {"CUP_arifle_AKMS",
          {"ace_acc_pointer_green","rhs_30Rnd_762x39mm_89"}
        }
      },	
        {"hgun_rook40_f",
        {"16rnd_9x21_mag"}
      },
      "Laserdesignator_03"
    };
    vest[] = {"V_HarnessO_ghex_F"};
    vestContents[] = {
      {"acre_prc148",1},
      {"rhs_30Rnd_762x39mm_89",6},
      {"handgrenade", 2},
      {"SmokeShell",2},
      {"SmokeshellRed", 2},
      {"SmokeShellGreen", 2},
      {"16rnd_9x21_mag",2},
      {"ace_maptools",1}
    };

    backpack[]={"b_carryall_ghex_f"};
    backpackContents[] = {
      {"CUP_nvg_pvs7",1},
      {"rhs_acc_pbs1", 1},
      {"handgrenade", 2},
      {"rhs_30Rnd_762x39mm_89",6},
      {"SmokeShell",2},
      {"SmokeshellRed", 2},
      {"SmokeShellGreen", 2},
      {"laserbatteries",2},
      {"ace_microdagr",1}
    };
  };

  class RTO: baseUnit {
    backpack[]={"crab_radiobag_01_ghex_f"};
    backpackContents[] = {
      {"CUP_nvg_pvs7",1},
      {"rhs_acc_pbs1", 1},
      {"handgrenade", 2},
      {"rhs_30Rnd_762x39mm_89",6},
      {"SmokeShell",2},
      {"ACRE_PRC117F",1}
    };
  };

  class DM: baseUnit {

    weapons[] = {
      {"cup_srifle_svd",
        {"rhs_10Rnd_762x54mmR_7N14","rhs_acc_pso1m2","cup_svd_camo_g"}
      },
      {"hgun_rook40_f",
        {"16rnd_9x21_mag"}
      },
      "ace_yardage450"
    };

    vest[] = {"V_HarnessO_ghex_F"};
    vestContents[] = {
      {"rhs_10Rnd_762x54mmR_7N14",6},
      {"handgrenade",2},
      {"SmokeShell",2},
      {"16rnd_9x21_mag",2},
      {"ace_maptools",1}
    };

    backpackContents[] = {
      {"CUP_nvg_pvs7",1},
      {"CUP_muzzle_snds_KZRZP_SVD",1},
      {"rhs_10Rnd_762x54mmR_7N14",6},
	  {"ACE_10Rnd_762x54_Tracer_mag",4},
      {"ACE_salineIV_500",1},
      {"SmokeShell",2},
      {"handgrenade",2}
    };
  };
  class DMR: DM {};

  class MGL: baseUnit {

    weapons[] = {
      {"CUP_glaunch_6G30",
        {"CUP_6Rnd_HE_GP25_M"}
      },
        {"hgun_rook40_f",
        {"16rnd_9x21_mag"}
      },
      "ace_yardage450"
    };

    vest[] = {"V_HarnessO_ghex_F"};
    vestContents[] = {
      {"CUP_6Rnd_HE_GP25_M",2},
      {"handgrenade",2},
      {"SmokeShell",2},
      {"16rnd_9x21_mag",2},
      {"ace_maptools",1}
    };

    backpack[]={"b_carryall_ghex_f"};
    backpackContents[] = {
      {"CUP_nvg_pvs7",1},
      {"CUP_6Rnd_HE_GP25_M",4},
      {"16rnd_9x21_mag",4},
      {"handgrenade",2},
      {"SmokeShell",2}
    };
  };

  class GN: baseUnit {

    weapons[] = {
      {
        {"CUP_arifle_AKM_gl",
          {"ace_acc_pointer_green","rhs_30Rnd_762x39mm_89","rhs_vog25"}
        },
        {"CUP_arifle_AKMS_gl",
          {"ace_acc_pointer_green","rhs_30Rnd_762x39mm_89","rhs_vog25"}
        }
      },	
        {"hgun_rook40_f",
          {"16rnd_9x21_mag"}
        }
      };

    vest[] = {"V_HarnessO_ghex_F"};
    vestContents[] = {
      {"rhs_30Rnd_762x39mm_89",8},
      {"handgrenade", 2},
      {"16rnd_9x21_mag",2},
      {"ace_maptools",1}
    };

    backpack[]={"b_carryall_ghex_f"};
    backpackContents[] = {
      {"CUP_nvg_pvs7",1},
      {"rhs_acc_pbs1", 1},
      {"rhs_30Rnd_762x39mm_89",4},
      {"SmokeShell",2},
      {"handgrenade",2},
      {"rhs_vog25",12},
      {"rhs_vog25p",8},
	  {"rhs_vg40tb",4},
      {"1_rnd_smoke_grenade_shell", 4}
    };
  };
  class UGL: GN {};

  class MAT: baseUnit {

    weapons[] = {
      {"CUP_arifle_AKMS",
        {"rhs_30Rnd_762x39mm_89","ace_acc_pointer_green"},
      },
      {"hgun_rook40_f",
        {"16rnd_9x21_mag"}
      },
      {"rhs_weap_rpg7",
        {"rhs_rpg7_pg7v_mag"}
      }
    };
    backpack[]={"b_viperlightharness_ghex_f"};
    backpackContents[] = {
      {"CUP_nvg_pvs7",1},
      {"rhs_acc_pbs1",1},
      {"rhs_30Rnd_762x39mm_89", 6},
      {"rhs_rpg7_pg7v_mag", 1},
      {"rhs_rpg7_og7v_mag", 2}
    };
  };

  class MATA: baseUnit {

    weapons[] = {
      {
        {"CUP_arifle_AKM",
          {"ace_acc_pointer_green","rhs_30Rnd_762x39mm_89"}
        },
        {"CUP_arifle_AKMS",
          {"ace_acc_pointer_green","rhs_30Rnd_762x39mm_89"}
        }
      },	
        {"hgun_rook40_f",
          {"16rnd_9x21_mag"}
        },
        "ace_yardage450"
      };
    
    backpack[]={"b_carryall_ghex_f"};
    backpackContents[] = {
      {"CUP_nvg_pvs7",1},
      {"rhs_acc_pbs1",1},
      {"rhs_30Rnd_762x39mm_89", 6},
      {"rhs_rpg7_pg7v_mag", 2},
      {"rhs_rpg7_og7v_mag", 2}
    };
  };

  class HAT: baseUnit {

    weapons[] = {
      {"CUP_arifle_AKMS",
        {"rhs_30Rnd_762x39mm_89","ace_acc_pointer_green"},
      },
      {"hgun_rook40_f",
        {"16rnd_9x21_mag"}
      },
      {"rhs_weap_rpg7",
        {"rhs_rpg7_og7v_mag"}
      }
    };
    backpack[]={"b_viperlightharness_ghex_f"};
    backpackContents[] = {
      {"CUP_nvg_pvs7",1},
      {"rhs_acc_pbs1",1},
      {"rhs_30Rnd_762x39mm_89", 6},
      {"rhs_rpg7_pg7vr_mag", 2},
      {"rhs_rpg7_og7v_mag", 1}
    };
  };

  class HATA: baseUnit {

    weapons[] = {
      {
        {"CUP_arifle_AKM",
          {"ace_acc_pointer_green","rhs_30Rnd_762x39mm_89"}
        },
        {"CUP_arifle_AKMS",
          {"ace_acc_pointer_green","rhs_30Rnd_762x39mm_89"}
        }
      },	
        {"hgun_rook40_f",
          {"16rnd_9x21_mag"}
        },
        "ace_yardage450"
      };
    
    backpack[]={"b_carryall_ghex_f"};
    backpackContents[] = {
      {"CUP_nvg_pvs7",1},
      {"rhs_acc_pbs1",1},
      {"rhs_30Rnd_762x39mm_89", 6},
      {"rhs_rpg7_pg7vr_mag", 2},
	  {"rhs_rpg7_og7v_mag",1},
      {"rhs_rpg7_tbg7v_mag", 1}
    };
  };

  class ME: baseUnit {
    ace_medic = 2;
    vest[] = {"V_HarnessO_ghex_F"};
    backpack[]={"b_viperlightharness_ghex_f"};
    backpackContents[] = {
      {"CUP_nvg_pvs7",1},
      {"rhs_acc_pbs1", 1},
      {"rhs_30Rnd_762x39mm_89",6},
      {"ACE_fieldDressing",15},
      {"ACE_packingBandage",10},
      {"ACE_quikclot",15},
      {"ACE_elasticBandage",15},
      {"ACE_morphine",8},
      {"ACE_epinephrine",8},
      {"ACE_adenosine",8},
      {"ACE_salineIV_250",4},
      {"ACE_salineiv_500",4},
      {"ACE_salineiv",2},
      {"ACE_bloodIV",4},
      {"ACE_personalAidKit",1},
      {"ACE_surgicalKit",1},
      {"ACE_splint",8},
      {"ACE_tourniquet",5}
    };
  };
  class MED: ME {};

  class RM: baseUnit {
    backpack[]={"b_carryall_ghex_f"};
    backpackContents[] = {
      {"CUP_nvg_pvs7",1},
      {"rhs_acc_pbs1",1},
      {"rhs_30Rnd_762x39mm_89", 6},
      {"handgrenade",4},
      {"SmokeShell",2},
	  {"rhs_75Rnd_762x39mm_89",1},	  
      {"150rnd_762x54_box",1},      
      {"ACE_salineIV_500",1}
    };
  };
  class RF: RM {};

  class GPMG: baseUnit {
    weapons[] = {
      {"CUP_lmg_PKMN",
        {"150rnd_762x54_box","ace_acc_pointer_green"},
      },
      {"hgun_rook40_f",
          {"16rnd_9x21_mag"}
      }
    };
    vest[] = {"V_HarnessO_ghex_F"};
    vestContents[] = {
      {"CUP_nvg_pvs7",1},
      {"150rnd_762x54_box",1},
      {"16rnd_9x21_mag",3},
      {"ace_maptools",1}
    };

    backpack[]={"b_viperlightharness_ghex_f"};
    backpackContents[] = {
      {"CUP_nvg_pvs7",1},
	  {"CUP_muzzle_snds_KZRZP_PK",1},
      {"150rnd_762x54_box",3},
      {"SmokeShell",2},
      {"handgrenade",2}
    };
  };
  class MG: GPMG {};

  class LMG: baseUnit {
 
    weapons[] = {
      {"CUP_arifle_rpk74",
        {"rhs_75Rnd_762x39mm_89","ace_acc_pointer_green"},
      },
      {"hgun_rook40_f",
          {"16rnd_9x21_mag"}
      }
    };
    vestContents[] = {
      {"rhs_75Rnd_762x39mm_89",4},
      {"SmokeShell",2},
      {"16rnd_9x21_mag",2},
      {"ace_maptools",1}
    };

    backpackContents[] = {
      {"CUP_nvg_pvs7",1},
      {"rhs_acc_pbs1",1},
      {"rhs_75Rnd_762x39mm_89",4},
      {"SmokeShell",2},
      {"handgrenade",2}
    };   
  };

  class GPMGA: baseUnit {

    weapons[] = {
      {"CUP_arifle_AKM",
        {"rhs_30Rnd_762x39mm_89","ace_acc_pointer_green"},
      },
      {"hgun_rook40_f",
        {"16rnd_9x21_mag"}
      },
      "binocular"
    };

    backpack[]={"b_carryall_ghex_f"};
    backpackContents[] = {
      {"CUP_nvg_pvs7",1},
      {"rhs_acc_pbs1",1},
      {"rhs_30Rnd_762x39mm_89",4},
      {"rhs_30Rnd_762x39mm_tracer",2},
      {"SmokeShell",2},
      {"handgrenade",2},
      {"150rnd_762x54_box",2},	  
      {"150rnd_762x54_box_tracer",2}
    };
  };

  class PT: baseUnit {

    weapons[] = {
      {"CUP_smg_Bizon",
        {"CUP_64Rnd_9x19_Bizon_M","ace_acc_pointer_green"}
      },
      {"hgun_rook40_f",
        {"16rnd_9x21_mag"}
      }
    };

    headgear[] = {
      "rhsusf_hgu56p_visor_white",
      "rhsusf_hgu56p_black",
      "rhsusf_hgu56p_visor_mask_pink"
      };

    goggles[] = {rhs_balaclava1_olive};

    vest[] = {"v_tacChestrig_oli_f"};
    vestContents[] = {
      {"acre_prc148",1},
      {"CUP_64Rnd_9x19_Bizon_M",3},
      {"16rnd_9x21_mag",2},
      {"ace_maptools",1}
    };

    backpack[] = {"b_fieldpack_ghex_f"};
    backpackContents[] = {
      {"CUP_nvg_pvs7",1},
      {"SmokeShell",2},
      {"CUP_64Rnd_9x19_Bizon_M",3},
      {"16rnd_9x21_mag",2},	  
      {"SmokeShellgreen",2},
      {"handgrenade",2},
      {"Chemlight_green",2},
      {"ace_ir_strobe_item",1},
      {"Toolkit",1},
      {"ace_microdagr",1}
    };
  };

  class PILOT: PT {};

  class LauncherCrate {
    vehCargoWeapons[] = {
      {"rhs_weap_rpg26",10},
	  {"rhs_weap_rshg2",4},
      {"rhs_weap_rpg7",2},
      {"ACE_Vector",2}
    };
    vehCargoMagazines[] = {
      {"rhs_rpg7_og7v_mag",6},
      {"rhs_rpg7_pg7v_mag",6},
	  {"rhs_rpg7_tbg7v_mag",6},
      {"rhs_rpg7_pg7vr_mag",6}
    };
    vehCargoRucks[] = {
      {"b_carryall_ghex_f",2}
    };
  };
  class LargeGearCrate {
    vehCargoWeapons[] = {
      {"rhs_weap_rpg26",6},
      {"ACE_Vector",2}
    };
    vehCargoMagazines[] = {
      {"rhs_30Rnd_762x39mm_89",40},
      {"rhs_30Rnd_762x39mm_tracer",10},
      {"rhs_75Rnd_762x39mm_89",20},
      {"rhs_10Rnd_762x54mmR_7N14",10},
      {"150rnd_762x54_box",8},
      {"150rnd_762x54_box_tracer",2},
      {"handgrenade",20},
      {"SmokeShell",10},
      {"rhs_vog25",15},
	  {"rhs_vog25p",15},
	  {"rhs_vg40tb",10},
      {"DemoCharge_Remote_Mag",8}
    };
    vehCargoItems[] = {
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
      {"ACE_salineIV",4},      
      {"ACE_salineIV_500",4},
      {"ACE_Flashlight_MX991",4},
      {"ACE_MapTools",4}
    };
    vehCargoRucks[] = {
      {"b_carryall_ghex_f",4}
    };
  };
};