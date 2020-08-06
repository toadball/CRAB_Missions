  class CDF_wdl {
    class BaseUnit {
      ace_earplugs = 1;
      allowPlayerGoggles = 0;
      ace_medic = 1;

    weapons[] = {
      {
        {"CUP_arifle_Mk16_STD_FG_woodland",
          {"ace_acc_pointer_green","optic_Holosight_khk_F","CUP_30Rnd_556x45_Emag"}
        },
        {"CUP_arifle_Mk16_CQC_AFG_woodland",
          {"ace_acc_pointer_green","optic_Holosight_khk_F","CUP_30Rnd_556x45_Emag"}
        }
      },	
        {"CUP_hgun_Duty",
          {"16rnd_9x21_mag"}
        }
      };

      assignedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio"};

      headgear[] = {
        "rhsusf_opscore_fg_pelt_cam",
        "rhsusf_mich_bare_norotos_arc_alt",
        "rhsusf_mich_bare_norotos_arc_headset",
        "rhsusf_opscore_fg_pelt",
        "rhsusf_opscore_bk_pelt"
      };

      goggles[] = {
        "rhsusf_shemagh_gogg_grn",
        "rhsusf_shemagh2_gogg_grn",
        "rhsusf_shemagh_gogg_od",
        "rhsusf_shemagh2_gogg_od",
        "rhsusf_shemagh_gogg_tan",		
        "rhsusf_shemagh2_gogg_tan"
      };

      uniform[] = {"rhs_uniform_emr_patchless"};
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

      vest[] = {V_SmershVest_01_F};
      vestContents[] = {
        {"CUP_30Rnd_556x45_Emag",6},
        {"handgrenade",2},
        {"SmokeShell",2},
        {"16rnd_9x21_mag",2},
        {"ace_maptools",1}
      };

      backpack[] = {"b_kitbag_sgg"};
      backpackContents[] = {
        {"o_nvgoggles_grn_f",1},
        {"rhsusf_acc_rotex5_grey", 1},
        {"CUP_30Rnd_556x45_Emag",4},
        {"SmokeShell",2},
        {"handgrenade",2}
      };
    };

  class SL: baseUnit {

    weapons[] = {
      {
        {"CUP_arifle_Mk16_STD_FG_woodland",
          {"ace_acc_pointer_green","Optic_ERCO_khk_f","CUP_30Rnd_556x45_Emag"}
        },
        {"CUP_arifle_Mk16_CQC_AFG_woodland",
          {"ace_acc_pointer_green","Optic_ERCO_khk_f","CUP_30Rnd_556x45_Emag"}
        }
      },	
        {"CUP_hgun_Duty",
          {"16rnd_9x21_mag"}
      },
      "ace_vector"
    };
    vest[] = {"V_SmershVest_01_radio_F"};
    vestContents[] = {
      {"CUP_30Rnd_556x45_Emag",6},
      {"handgrenade", 2},
      {"acre_prc148",1},
      {"16rnd_9x21_mag",2},
      {"itc_land_tablet_rover",1},
      {"ace_maptools",1}
    };

    backpackContents[] = {
      {"o_nvgoggles_grn_f",1},
      {"rhsusf_acc_rotex5_grey", 1},
      {"handgrenade", 2},
      {"CUP_30Rnd_556x45_Emag",6},
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
        {"CUP_arifle_Mk16_STD_FG_woodland",
          {"ace_acc_pointer_green","optic_Holosight_khk_F","CUP_30Rnd_556x45_Emag"}
        },
        {"CUP_arifle_Mk16_CQC_AFG_woodland",
          {"ace_acc_pointer_green","optic_Holosight_khk_F","CUP_30Rnd_556x45_Emag"}
        }
      },	
        {"CUP_hgun_Duty",
          {"16rnd_9x21_mag"}
        },
        "ace_vector"
      };
    vest[] = {"V_SmershVest_01_F"};
    vestContents[] = {
      {"CUP_30Rnd_556x45_Emag",6},
      {"handgrenade", 2},
      {"acre_prc148",1},
      {"16rnd_9x21_mag",2},
      {"ace_maptools",1}
    };

    backpackContents[] = {
      {"o_nvgoggles_grn_f",1},
      {"rhsusf_acc_rotex5_grey", 1},
      {"handgrenade", 2},
      {"ace_ir_strobe_item",1},
      {"CUP_30Rnd_556x45_Emag",6},
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
        {"CUP_arifle_Mk16_STD_FG_woodland",
          {"ace_acc_pointer_green","optic_Holosight_khk_F","CUP_30Rnd_556x45_Emag"}
        },
        {"CUP_arifle_Mk16_CQC_AFG_woodland",
          {"ace_acc_pointer_green","optic_Holosight_khk_F","CUP_30Rnd_556x45_Emag"}
        }
      },	
        {"CUP_hgun_Duty",
          {"16rnd_9x21_mag"}
        },
        "ace_vector"
      };
    vest[] = {"V_SmershVest_01_radio_F"};
    vestContents[] = {
      {"acre_prc148",2},
      {"CUP_30Rnd_556x45_Emag",6},
      {"handgrenade", 2},
      {"SmokeShell",2},
      {"SmokeshellRed", 2},
      {"SmokeShellGreen", 2},
      {"16rnd_9x21_mag",2},
      {"ace_maptools",1}
    };

    backpack[]={"b_carryall_green_f"};
    backpackContents[] = {
      {"o_nvgoggles_grn_f",1},
      {"rhsusf_acc_rotex5_grey", 1},
      {"CUP_30Rnd_556x45_Emag",6},
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
        {"CUP_arifle_Mk16_STD_FG_woodland",
          {"ace_acc_pointer_green","optic_Holosight_khk_F","CUP_30Rnd_556x45_Emag"}
        },
        {"CUP_arifle_Mk16_CQC_AFG_woodland",
          {"ace_acc_pointer_green","optic_Holosight_khk_F","CUP_30Rnd_556x45_Emag"}
        }
      },	
        {"CUP_hgun_Duty",
        {"16rnd_9x21_mag"}
      },
      "Laserdesignator_03"
    };
    vest[] = {"V_SmershVest_01_F"};
    vestContents[] = {
      {"acre_prc148",1},
      {"CUP_30Rnd_556x45_Emag",6},
      {"handgrenade", 2},
      {"SmokeShell",2},
      {"SmokeshellRed", 2},
      {"SmokeShellGreen", 2},
      {"16rnd_9x21_mag",2},
      {"ace_maptools",1}
    };

    backpack[]={"b_carryall_green_f"};
    backpackContents[] = {
      {"o_nvgoggles_grn_f",1},
      {"rhsusf_acc_rotex5_grey", 1},
      {"handgrenade", 2},
      {"CUP_30Rnd_556x45_Emag",6},
      {"SmokeShell",2},
      {"SmokeshellRed", 2},
      {"SmokeShellGreen", 2},
      {"laserbatteries",2},
      {"ace_microdagr",1}
    };
  };

  class RTO: baseUnit {
    backpack[]={"crab_radiobag_01_wdl_f"};
    backpackContents[] = {
      {"o_nvgoggles_grn_f",1},
      {"rhsusf_acc_rotex5_grey", 1},
      {"handgrenade", 2},
      {"CUP_30Rnd_556x45_Emag",6},
      {"SmokeShell",2},
      {"ACRE_PRC117F",1}
    };
  };

  class HRF: baseUnit {

    weapons[] = {
      {"CUP_arifle_Mk17_CQC_SFG_woodland",
        {"rhs_mag_20Rnd_SCAR_762x51_m80a1_epr","ace_acc_pointer_green","optic_tws_mg"}
      },
      {"CUP_hgun_Duty",
        {"16rnd_9x21_mag"}
      },
    };

    vest[] = {"V_SmershVest_01_radio_F"};
    vestContents[] = {
      {"rhs_mag_20Rnd_SCAR_762x51_m80a1_epr",6},
      {"handgrenade",2},
      {"SmokeShell",2},
      {"16rnd_9x21_mag",2},
      {"ace_maptools",1}
    };

    backpackContents[] = {
      {"o_nvgoggles_grn_f",1},
      {"optic_tws_mg",1},
      {"rhsgref_sdn6_silencer",1},
      {"rhs_mag_20Rnd_SCAR_762x51_m80a1_epr",4},
      {"rhs_mag_20Rnd_SCAR_762x51_m62_tracer",2},
      {"ACE_salineIV_500",1},
      {"SmokeShell",2},
      {"handgrenade",2}
    };
  };

  class DM: baseUnit {

    weapons[] = {
      {"cup_arifle_mk20_woodland",
        {"rhs_mag_20Rnd_SCAR_762x51_m80a1_epr","ace_acc_pointer_green","optic_ams_khk","bipod_02_f_lush"}
      },
      {"CUP_hgun_Duty",
        {"16rnd_9x21_mag"}
      },
      "ace_vector"
    };

    vest[] = {"V_SmershVest_01_radio_F"};
    vestContents[] = {
      {"rhs_mag_20Rnd_SCAR_762x51_m80a1_epr",6},
      {"handgrenade",2},
      {"SmokeShell",2},
      {"16rnd_9x21_mag",2},
      {"ace_maptools",1}
    };

    backpackContents[] = {
      {"o_nvgoggles_grn_f",1},
      {"optic_tws_mg",1},
      {"rhsgref_sdn6_silencer",1},
      {"rhs_mag_20Rnd_SCAR_762x51_m80a1_epr",4},
      {"rhs_mag_20Rnd_SCAR_762x51_m62_tracer",2},
      {"ACE_salineIV_500",1},
      {"SmokeShell",2},
      {"handgrenade",2}
    };
  };
  class DMR: DM {};

  class MGL: baseUnit {

    weapons[] = {
      {"rhs_weap_m32",
        {"rhsusf_mag_6rnd_m433_hedp","ace_acc_pointer_green"}
      },
        {"CUP_hgun_Duty",
        {"16rnd_9x21_mag"}
      },
      "ace_yardage450"
    };

    vest[] = {"V_SmershVest_01_F"};
    vestContents[] = {
      {"rhsusf_mag_6rnd_m433_hedp",2},
      {"rhsusf_mag_6rnd_m441_he",1},
      {"handgrenade",2},
      {"SmokeShell",2},
      {"16rnd_9x21_mag",2},
      {"ace_maptools",1}
    };

    backpack[]={"b_carryall_green_f"};
    backpackContents[] = {
      {"o_nvgoggles_grn_f",1},
      {"rhsusf_mag_6rnd_m433_hedp",2},
      {"rhsusf_mag_6rnd_m441_he",1},
      {"rhsusf_mag_6rnd_m714_white",2},
      {"16rnd_9x21_mag",4},
      {"handgrenade",2},
      {"SmokeShell",2}
    };
  };

  class GN: baseUnit {

    weapons[] = {
      {
        {"CUP_arifle_Mk16_STD_EGLM_woodland",
          {"ace_acc_pointer_green","optic_Holosight_khk_F","CUP_30Rnd_556x45_Emag","cup_1rnd_hedp_m203"}
        },
        {"CUP_arifle_Mk16_CQC_EGLM_woodland",
          {"ace_acc_pointer_green","optic_Holosight_khk_F","CUP_30Rnd_556x45_Emag","cup_1rnd_hedp_m203"}
        }
      },	
        {"CUP_hgun_Duty",
          {"16rnd_9x21_mag"}
        }
      };

    vest[] = {"V_SmershVest_01_F"};
    vestContents[] = {
      {"CUP_30Rnd_556x45_Emag",8},
      {"handgrenade", 2},
      {"16rnd_9x21_mag",2},
      {"ace_maptools",1}
    };

    backpackContents[] = {
      {"o_nvgoggles_grn_f",1},
      {"rhsusf_acc_rotex5_grey", 1},
      {"CUP_30Rnd_556x45_Emag",4},
      {"SmokeShell",2},
      {"handgrenade",2},
      {"cup_1rnd_hedp_m203",12},
      {"cup_1rnd_he_m203",12},
      {"rhs_mag_m714_white", 4}
    };
  };
  class UGL: GN {};

  class MAT: baseUnit {

    weapons[] = {
      {"CUP_arifle_Mk16_CQC_FG_woodland",
        {"CUP_30Rnd_556x45_Emag","ace_acc_pointer_green","optic_Holosight_khk_F"},
      },
      {"CUP_hgun_Duty",
        {"16rnd_9x21_mag"}
      },
      {"launch_MRAWS_green_rail_F",
        {"MRAWS_HEAT55_F", "ace_acc_pointer_green"}
      }
    };
    backpack[]={"b_kitbag_sgg"};
    backpackContents[] = {
      {"o_nvgoggles_grn_f",1},
      {"rhsusf_acc_rotex5_grey",1},
      {"CUP_30Rnd_556x45_Emag", 4},
      {"MRAWS_HEAT55_F", 1},
      {"MRAWS_HE_F", 2}
    };
  };

  class MATA: baseUnit {

    weapons[] = {
      {
        {"CUP_arifle_Mk16_STD_FG_woodland",
          {"ace_acc_pointer_green","optic_Holosight_khk_F","CUP_30Rnd_556x45_Emag"}
        },
        {"CUP_arifle_Mk16_CQC_AFG_woodland",
          {"ace_acc_pointer_green","optic_Holosight_khk_F","CUP_30Rnd_556x45_Emag"}
        }
      },	
        {"CUP_hgun_Duty",
          {"16rnd_9x21_mag"}
        },
        "ace_vector"
      };
    
    backpack[]={"b_carryall_green_f"};
    backpackContents[] = {
      {"o_nvgoggles_grn_f",1},
      {"rhsusf_acc_rotex5_grey",1},
      {"CUP_30Rnd_556x45_Emag", 4},
      {"MRAWS_HEAT55_F", 2},
      {"MRAWS_HE_F", 2}
    };
  };

  class HAT: baseUnit {

    weapons[] = {
      {"CUP_arifle_Mk16_CQC_FG_woodland",
        {"CUP_30Rnd_556x45_Emag","ace_acc_pointer_green","optic_Holosight_khk_F"},
      },
      {"CUP_hgun_Duty",
        {"16rnd_9x21_mag"}
      },
      {"launch_o_titan_short_f",
        {"Titan_AT", "ace_acc_pointer_green"}
      }
    };
    backpackContents[] = {
      {"o_nvgoggles_grn_f",1},
      {"rhsusf_acc_rotex5_grey",1},
      {"CUP_30Rnd_556x45_Emag", 4},
      {"Titan_AT", 1}
    };
  };

  class HATA: baseUnit {

    weapons[] = {
      {
        {"CUP_arifle_Mk16_STD_FG_woodland",
          {"ace_acc_pointer_green","optic_Holosight_khk_F","CUP_30Rnd_556x45_Emag"}
        },
        {"CUP_arifle_Mk16_CQC_AFG_woodland",
          {"ace_acc_pointer_green","optic_Holosight_khk_F","CUP_30Rnd_556x45_Emag"}
        }
      },	
        {"CUP_hgun_Duty",
        {"16rnd_9x21_mag"}
      },
      "ace_mx2a"
    };
    
    backpack[]={"b_carryall_green_f"};
    backpackContents[] = {
      {"o_nvgoggles_grn_f",1},
      {"rhsusf_acc_rotex5_grey",1},
      {"CUP_30Rnd_556x45_Emag", 4},
      {"Titan_AT", 1},
      {"Titan_AP", 2}
    };
  };

  class ME: baseUnit {
    ace_medic = 2;
    vest[] = {"V_SmershVest_01_F"};
    backpack[]={"b_carryall_green_f"};
    backpackContents[] = {
      {"o_nvgoggles_grn_f",1},
      {"rhsusf_acc_rotex5_grey", 1},
      {"CUP_30Rnd_556x45_Emag",4},
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
    backpackContents[] = {
      {"o_nvgoggles_grn_f",1},
      {"rhsusf_acc_rotex5_grey",1},
      {"CUP_30Rnd_556x45_Emag", 6},
      {"handgrenade",4},
      {"SmokeShell",2},
      {"150Rnd_556x45_Drum_Green_Mag_f",1},
      {"ACE_salineIV_500",1}
    };
  };
  class RF: RM {};

  class GPMG: baseUnit {
    weapons[] = {
      {"cup_lmg_m60e4",
        {"rhsusf_100Rnd_762x51_m61_ap","ace_acc_pointer_green","Optic_ERCO_blk_f"},
      },
      {"CUP_hgun_Duty",
          {"16rnd_9x21_mag"}
      }
    };
    vest[] = {"V_SmershVest_01_F"};
    vestContents[] = {
      {"o_nvgoggles_grn_f",1},
      {"rhsusf_100Rnd_762x51_m61_ap",3},
      {"16rnd_9x21_mag",3},
      {"ace_maptools",1}
    };

    backpack[]={"b_kitbag_sgg"};
    backpackContents[] = {
      {"o_nvgoggles_grn_f",1},
      {"muzzle_snds_h_mg_blk_f",1},
      {"rhsusf_100Rnd_762x51_m61_ap",3},
      {"SmokeShell",2},
      {"handgrenade",2}
    };
  };
  class MG: GPMG {};

  class LMG: baseUnit {
 
    weapons[] = {
      {"CUP_arifle_Mk16_SV_woodland",
        {"150Rnd_556x45_Drum_Green_Mag_F","ace_acc_pointer_green","optic_Holosight_khk_F","bipod_02_F_lush"},
      },
      {"CUP_hgun_Duty",
          {"16rnd_9x21_mag"}
      }
    };
    vestContents[] = {
      {"150Rnd_556x45_Drum_Green_Mag_F",2},
      {"SmokeShell",2},
      {"16rnd_9x21_mag",2},
      {"handgrenade",2},
      {"ace_maptools",1}
    };

    backpackContents[] = {
      {"o_nvgoggles_grn_f",1},
      {"rhsusf_acc_rotex5_grey",1},
      {"150Rnd_556x45_Drum_Green_Mag_F",6},
      {"SmokeShell",2},
      {"handgrenade",2}
    };   
  };

  class GPMGA: baseUnit {

    weapons[] = {
      {"CUP_arifle_Mk16_SV_woodland",
        {"CUP_30Rnd_556x45_Emag","ace_acc_pointer_green","optic_Holosight_khk_F","bipod_02_F_lush"},
      },
      {"CUP_hgun_Duty",
        {"16rnd_9x21_mag"}
      },
      "binocular"
    };

    backpack[]={"b_carryall_green_f"};
    backpackContents[] = {
      {"o_nvgoggles_grn_f",1},
      {"rhsusf_acc_rotex5_grey",1},
      {"CUP_30Rnd_556x45_Emag",4},
      {"rhs_mag_30Rnd_556x45_M855A1_PMAG_Tracer_Red",2},
      {"SmokeShell",2},
      {"handgrenade",2},
      {"rhsusf_100Rnd_762x51_m61_ap",4},	  
      {"rhsusf_100Rnd_762x51_m62_tracer",2}
    };
  };

  class PT: baseUnit {

    weapons[] = {
      {"cup_smg_mac10_rail",
        {"CUP_30Rnd_45ACP_MAC10_M","ace_acc_pointer_green","optic_Holosight_smg_blk_F","rhs_acc_grip_rk2"}
      },
      {"CUP_hgun_Duty",
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
      {"CUP_30Rnd_45ACP_MAC10_M",3},
      {"16rnd_9x21_mag",2},
      {"ace_maptools",1}
    };

    backpack[] = {"b_fieldpack_green_f"};
    backpackContents[] = {
      {"o_nvgoggles_grn_f",1},
      {"SmokeShell",2},
      {"CUP_30Rnd_45ACP_MAC10_M",3},
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
      {"rhs_weap_m72a7",10},
      {"launch_MRAWS_green_rail_F",2},
      {"ACE_Vector",2}
    };
    vehCargoMagazines[] = {
      {"MRAWS_HE_F",10},
      {"MRAWS_HEAT55_F",10},
      {"MRAWS_HEAT_F",10}
    };
    vehCargoRucks[] = {
      {"b_carryall_green_f",2}
    };
  };
  class LargeGearCrate {
    vehCargoWeapons[] = {
      {"rhs_weap_m72a7",6},
      {"ACE_Vector",2}
    };
    vehCargoMagazines[] = {
      {"CUP_30Rnd_556x45_Emag",40},
      {"rhs_mag_30Rnd_556x45_M855A1_PMAG_Tracer_Red",10},
      {"150Rnd_556x45_Drum_Green_Mag_F",10},
      {"rhs_mag_20Rnd_SCAR_762x51_m80a1_epr",10},
      {"rhs_mag_20Rnd_SCAR_762x51_m62_tracer",4},
      {"rhsusf_100Rnd_762x51_m61_ap",8},
      {"handgrenade",20},
      {"SmokeShell",10},
      {"cup_1rnd_hedp_m203",20},
      {"ClaymoreDirectionalMine_Remote_Mag",4},
      {"SLAMDirectionalMine_Wire_Mag",6},
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
      {"b_carryall_green_f",4}
    };
  };
};