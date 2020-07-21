  class CDF_rus {
    class BaseUnit {
      ace_earplugs = 1;
      allowPlayerGoggles = 0;
      ace_medic = 1;

    weapons[] = {
      {
        {"CUP_arifle_AK107_railed",
          {"ace_acc_pointer_green","optic_Holosight_blk_F","rhs_30Rnd_545x39_7N22_AK","rhs_acc_dtk2"}
        },
        {"CUP_arifle_AK105_railed",
          {"ace_acc_pointer_green","optic_Holosight_blk_F","rhs_30Rnd_545x39_7N22_AK","rhs_acc_dtk2"}
        }
      },	
        {"hgun_rook40_f",
          {"16rnd_9x21_mag"}
        }
      };

      assignedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio"};

      headgear[] = {
        "H_HelmetAggressor_cover_F",
        "H_HelmetAggressor_F"
      };

      goggles[] = {
        "rhsusf_shemagh_gogg_grn",
        "rhsusf_shemagh2_gogg_grn",
        "rhsusf_shemagh_gogg_od",
        "rhsusf_shemagh2_gogg_od",
        "rhsusf_shemagh_gogg_tan",		
        "rhsusf_shemagh2_gogg_tan"
      };

      uniform[] = {"U_O_R_Gorka_01_F"};
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

      vest[] = {V_CarrierRigKBT_01_light_Olive_F};
      vestContents[] = {
        {"rhs_30Rnd_545x39_7N22_AK",6},
        {"handgrenade",2},
        {"SmokeShell",2},
        {"16rnd_9x21_mag",2},
        {"ace_maptools",1}
      };

      backpack[] = {"b_kitbag_rgr"};
      backpackContents[] = {
        {"o_nvgoggles_grn_f",1},
        {"rhs_acc_dtk4short", 1},
        {"rhs_30Rnd_545x39_7N22_AK",4},
        {"SmokeShell",2},
        {"handgrenade",2}
      };
    };

  class SL: baseUnit {

    weapons[] = {
      {
        {"CUP_arifle_AK107_railed",
          {"ace_acc_pointer_green","rhsusf_acc_su230","rhs_30Rnd_545x39_7N22_AK","rhs_acc_dtk2"}
        },
        {"CUP_arifle_AK105_railed",
          {"ace_acc_pointer_green","rhsusf_acc_su230","rhs_30Rnd_545x39_7N22_AK","rhs_acc_dtk2"}
        }
      },	
        {"hgun_rook40_f",
          {"16rnd_9x21_mag"}
      },
      "ace_vector"
    };
    vest[] = {"V_CarrierRigKBT_01_heavy_Olive_F"};
    vestContents[] = {
      {"rhs_30Rnd_545x39_7N22_AK",6},
      {"handgrenade", 2},
      {"acre_prc148",1},
      {"16rnd_9x21_mag",2},
      {"itc_land_tablet_rover",1},
      {"ace_maptools",1}
    };

    backpackContents[] = {
      {"o_nvgoggles_grn_f",1},
      {"rhs_acc_dtk4short", 1},
      {"handgrenade", 2},
      {"rhs_30Rnd_545x39_7N22_AK",6},
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
        {"CUP_arifle_AK107_railed",
          {"ace_acc_pointer_green","optic_Holosight_blk_F","rhs_30Rnd_545x39_7N22_AK","rhs_acc_dtk2"}
        },
        {"CUP_arifle_AK105_railed",
          {"ace_acc_pointer_green","optic_Holosight_blk_F","rhs_30Rnd_545x39_7N22_AK","rhs_acc_dtk2"}
        }
      },	
        {"hgun_rook40_f",
          {"16rnd_9x21_mag"}
        },
        "ace_vector"
      };
    vest[] = {"V_CarrierRigKBT_01_light_Olive_F"};
    vestContents[] = {
      {"rhs_30Rnd_545x39_7N22_AK",6},
      {"handgrenade", 2},
      {"acre_prc148",1},
      {"16rnd_9x21_mag",2},
      {"ace_maptools",1}
    };

    backpackContents[] = {
      {"o_nvgoggles_grn_f",1},
      {"rhs_acc_dtk4short", 1},
      {"handgrenade", 2},
      {"ace_ir_strobe_item",1},
      {"rhs_30Rnd_545x39_7N22_AK",6},
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
        {"CUP_arifle_AK107_railed",
          {"ace_acc_pointer_green","optic_Holosight_blk_F","rhs_30Rnd_545x39_7N22_AK","rhs_acc_dtk2"}
        },
        {"CUP_arifle_AK105_railed",
          {"ace_acc_pointer_green","optic_Holosight_blk_F","rhs_30Rnd_545x39_7N22_AK","rhs_acc_dtk2"}
        }
      },	
        {"hgun_rook40_f",
          {"16rnd_9x21_mag"}
        },
        "ace_vector"
      };
    vest[] = {"V_CarrierRigKBT_01_heavy_Olive_F"};
    vestContents[] = {
      {"acre_prc148",2},
      {"rhs_30Rnd_545x39_7N22_AK",6},
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
      {"rhs_acc_dtk4short", 1},
      {"rhs_30Rnd_545x39_7N22_AK",6},
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
        {"CUP_arifle_AK107_railed",
          {"ace_acc_pointer_green","optic_Holosight_blk_F","rhs_30Rnd_545x39_7N22_AK","rhs_acc_dtk2"}
        },
        {"CUP_arifle_AK105_railed",
          {"ace_acc_pointer_green","optic_Holosight_blk_F","rhs_30Rnd_545x39_7N22_AK","rhs_acc_dtk2"}
        }
      },	
        {"hgun_rook40_f",
        {"16rnd_9x21_mag"}
      },
      "Laserdesignator_03"
    };
    vest[] = {"V_CarrierRigKBT_01_light_Olive_F"};
    vestContents[] = {
      {"acre_prc148",1},
      {"rhs_30Rnd_545x39_7N22_AK",6},
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
      {"rhs_acc_dtk4short", 1},
      {"handgrenade", 2},
      {"rhs_30Rnd_545x39_7N22_AK",6},
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
      {"rhs_acc_dtk4short", 1},
      {"handgrenade", 2},
      {"rhs_30Rnd_545x39_7N22_AK",6},
      {"SmokeShell",2},
      {"ACRE_PRC117F",1}
    };
  };

  class DM: baseUnit {

    weapons[] = {
      {"srifle_DMR_05_blk_F",
        {"10Rnd_93x64_DMR_05_Mag","ace_acc_pointer_green","optic_ams","rhs_acc_harris_swivel"}
      },
      {"hgun_rook40_f",
        {"16rnd_9x21_mag"}
      },
      "ace_vector"
    };

    vest[] = {"V_CarrierRigKBT_01_heavy_Olive_F"};
    vestContents[] = {
      {"10Rnd_93x64_DMR_05_Mag",5},
      {"handgrenade",2},
      {"SmokeShell",2},
      {"16rnd_9x21_mag",2},
      {"ace_maptools",1}
    };

    backpackContents[] = {
      {"o_nvgoggles_grn_f",1},
      {"optic_tws_mg",1},
      {"muzzle_snds_93mmg",1},
      {"10Rnd_93x64_DMR_05_Mag",5},
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

    vest[] = {"V_CarrierRigKBT_01_light_Olive_F"};
    vestContents[] = {
      {"CUP_6Rnd_HE_GP25_M",2},
      {"handgrenade",2},
      {"SmokeShell",2},
      {"16rnd_9x21_mag",2},
      {"ace_maptools",1}
    };

    backpack[]={"b_carryall_green_f"};
    backpackContents[] = {
      {"o_nvgoggles_grn_f",1},
      {"CUP_6Rnd_HE_GP25_M",4},
      {"16rnd_9x21_mag",4},
      {"handgrenade",2},
      {"SmokeShell",2}
    };
  };

  class GN: baseUnit {

    weapons[] = {
      {
        {"CUP_arifle_AK107_GL_railed",
          {"ace_acc_pointer_green","optic_Holosight_blk_F","rhs_30Rnd_545x39_7N22_AK","rhs_vog25","rhs_acc_dtk2"}
        },
        {"CUP_arifle_AK74M_GL_railed",
          {"ace_acc_pointer_green","optic_Holosight_blk_F","rhs_30Rnd_545x39_7N22_AK","rhs_vog25","rhs_acc_dtk2"}
        }
      },	
        {"hgun_rook40_f",
          {"16rnd_9x21_mag"}
        }
      };

    vest[] = {"V_CarrierRigKBT_01_light_Olive_F"};
    vestContents[] = {
      {"rhs_30Rnd_545x39_7N22_AK",8},
      {"handgrenade", 2},
      {"16rnd_9x21_mag",2},
      {"ace_maptools",1}
    };

    backpackContents[] = {
      {"o_nvgoggles_grn_f",1},
      {"rhs_acc_dtk4short", 1},
      {"rhs_30Rnd_545x39_7N22_AK",4},
      {"SmokeShell",2},
      {"handgrenade",2},
      {"rhs_vog25",12},
      {"rhs_vog25p",8},
      {"rhs_vg25tb",4},
      {"rhs_vg40md", 4}
    };
  };
  class UGL: GN {};

  class MAT: baseUnit {

    weapons[] = {
      {"CUP_arifle_AK105_railed",
        {"rhs_30Rnd_545x39_7N22_AK","ace_acc_pointer_green","optic_Holosight_blk_F","rhs_acc_dtk2"},
      },
      {"hgun_rook40_f",
        {"16rnd_9x21_mag"}
      },
      {"launch_RPG32_green_F",
        {"RPG32_F", "ace_acc_pointer_green"}
      }
    };
    backpack[]={"b_kitbag_rgr"};
    backpackContents[] = {
      {"o_nvgoggles_grn_f",1},
      {"rhs_acc_dtk4short",1},
      {"rhs_30Rnd_545x39_7N22_AK", 4},
      {"RPG32_F", 1},
      {"RPG32_HE_F", 2}
    };
  };

  class MATA: baseUnit {

    weapons[] = {
      {
        {"CUP_arifle_AK107_railed",
          {"ace_acc_pointer_green","optic_Holosight_blk_F","rhs_30Rnd_545x39_7N22_AK","rhs_acc_dtk2"}
        },
        {"CUP_arifle_AK105_railed",
          {"ace_acc_pointer_green","optic_Holosight_blk_F","rhs_30Rnd_545x39_7N22_AK","rhs_acc_dtk2"}
        }
      },	
        {"hgun_rook40_f",
          {"16rnd_9x21_mag"}
        },
        "ace_vector"
      };
    
    backpack[]={"b_carryall_green_f"};
    backpackContents[] = {
      {"o_nvgoggles_grn_f",1},
      {"rhs_acc_dtk4short",1},
      {"rhs_30Rnd_545x39_7N22_AK", 4},
      {"RPG32_F", 2},
      {"RPG32_HE_F", 2}
    };
  };

  class HAT: baseUnit {

    weapons[] = {
      {"CUP_arifle_AK105_railed",
        {"rhs_30Rnd_545x39_7N22_AK","ace_acc_pointer_green","optic_Holosight_blk_F","rhs_acc_dtk2"},
      },
      {"hgun_rook40_f",
        {"16rnd_9x21_mag"}
      },
      {"launch_I_titan_short_f",
        {"Titan_AT", "ace_acc_pointer_green"}
      }
    };
    backpackContents[] = {
      {"o_nvgoggles_grn_f",1},
      {"rhs_acc_dtk4short",1},
      {"rhs_30Rnd_545x39_7N22_AK", 4},
      {"Titan_AT", 1}
    };
  };

  class HATA: baseUnit {

    weapons[] = {
      {
        {"CUP_arifle_AK107_railed",
          {"ace_acc_pointer_green","optic_Holosight_blk_F","rhs_30Rnd_545x39_7N22_AK","rhs_acc_dtk2"}
        },
        {"CUP_arifle_AK105_railed",
          {"ace_acc_pointer_green","optic_Holosight_blk_F","rhs_30Rnd_545x39_7N22_AK","rhs_acc_dtk2"}
        }
      },	
        {"hgun_rook40_f",
        {"16rnd_9x21_mag"}
      },
      "ace_mx2a"
    };
    
    backpack[]={"b_carryall_green_f"};
    backpackContents[] = {
      {"o_nvgoggles_grn_f",1},
      {"rhs_acc_dtk4short",1},
      {"rhs_30Rnd_545x39_7N22_AK", 4},
      {"Titan_AT", 1},
      {"Titan_AP", 2}
    };
  };

  class ME: baseUnit {
    ace_medic = 2;
    vest[] = {"V_CarrierRigKBT_01_light_Olive_F"};
    backpack[]={"b_carryall_green_f"};
    backpackContents[] = {
      {"o_nvgoggles_grn_f",1},
      {"rhs_acc_dtk4short", 1},
      {"rhs_30Rnd_545x39_7N22_AK",6},
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
      {"rhs_acc_dtk4short",1},
      {"rhs_30Rnd_545x39_7N22_AK", 6},
      {"handgrenade",4},
      {"SmokeShell",2},
      {"150rnd_762x54_box",1},      
      {"ACE_salineIV_500",1}
    };
  };
  class RF: RM {};

  class GPMG: baseUnit {
    weapons[] = {
      {"CUP_lmg_Pecheneg",
        {"150rnd_762x54_box","ace_acc_pointer_green","rhs_acc_ekp8_02d"},
      },
      {"hgun_rook40_f",
          {"16rnd_9x21_mag"}
      }
    };
    vest[] = {"V_CarrierRigKBT_01_light_Olive_F"};
    vestContents[] = {
      {"o_nvgoggles_grn_f",1},
      {"150rnd_762x54_box",1},
      {"16rnd_9x21_mag",3},
      {"ace_maptools",1}
    };

    backpack[]={"b_kitbag_rgr"};
    backpackContents[] = {
      {"o_nvgoggles_grn_f",1},
      {"CUP_muzzle_snds_KZRZP_PK",1},
      {"150rnd_762x54_box",3},
      {"SmokeShell",2},
      {"handgrenade",2}
    };
  };
  class MG: GPMG {};

  class LMG: baseUnit {
 
    weapons[] = {
      {"CUP_arifle_RPK74M_railed",
        {"CUP_60Rnd_545x39_AK74M_M","ace_acc_pointer_green","optic_Holosight_blk_F","rhs_acc_dtk2"},
      },
      {"hgun_rook40_f",
          {"16rnd_9x21_mag"}
      }
    };
    vestContents[] = {
      {"CUP_60Rnd_545x39_AK74M_M",4},
      {"SmokeShell",2},
      {"16rnd_9x21_mag",2},
      {"ace_maptools",1}
    };

    backpackContents[] = {
      {"o_nvgoggles_grn_f",1},
      {"rhs_acc_dtk4short",1},
      {"CUP_60Rnd_545x39_AK74M_M",8},
      {"SmokeShell",2},
      {"handgrenade",2}
    };   
  };

  class GPMGA: baseUnit {

    weapons[] = {
      {"CUP_arifle_AK107_railed",
        {"rhs_30Rnd_545x39_7N22_AK","ace_acc_pointer_green","optic_Holosight_blk_F","rhs_acc_dtk2"},
      },
      {"hgun_rook40_f",
        {"16rnd_9x21_mag"}
      },
      "binocular"
    };

    backpack[]={"b_carryall_green_f"};
    backpackContents[] = {
      {"o_nvgoggles_grn_f",1},
      {"rhs_acc_dtk4short",1},
      {"rhs_30Rnd_545x39_7N22_AK",4},
      {"rhs_30Rnd_545x39_AK_green",2},
      {"SmokeShell",2},
      {"handgrenade",2},
      {"150rnd_762x54_box",2},	  
      {"150rnd_762x54_box_tracer",1}
    };
  };

  class PT: baseUnit {

    weapons[] = {
      {"CUP_arifle_AKS74U_railed",
        {"rhs_30Rnd_545x39_7N22_AK","ace_acc_pointer_green","optic_Holosight_blk_F","rhs_acc_dtk2"}
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
      {"rhs_30Rnd_545x39_7N22_AK",3},
      {"16rnd_9x21_mag",2},
      {"ace_maptools",1}
    };

    backpack[] = {"b_fieldpack_green_f"};
    backpackContents[] = {
      {"o_nvgoggles_grn_f",1},
      {"SmokeShell",2},
      {"rhs_30Rnd_545x39_7N22_AK",3},
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
      {"rhs_30Rnd_545x39_7N22_AK",40},
      {"rhs_30Rnd_545x39_AK_green",10},
      {"CUP_60Rnd_545x39_AK74M_M",20},
      {"10Rnd_93x64_DMR_05_Mag",10},
      {"150rnd_762x54_box",8},
      {"150rnd_762x54_box_tracer",2},
      {"handgrenade",20},
      {"SmokeShell",10},
      {"rhs_vog25",20},
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