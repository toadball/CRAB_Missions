  class CDF_des {
    class BaseUnit {
      ace_earplugs = 1;
      allowPlayerGoggles = 0;
      ace_medic = 1;

    weapons[] = {
      {
        {"rhs_weap_mk18_kac_d",
          {"ace_acc_pointer_green","optic_Holosight_blk_F","rhs_mag_30Rnd_556x45_Mk262_PMAG","rhsusf_acc_grip1"}
        },
        {"rhs_weap_m4a1_blockii_kac_d",
          {"ace_acc_pointer_green","optic_Holosight_blk_F","rhs_mag_30Rnd_556x45_Mk262_PMAG","rhsusf_acc_grip1"}
        }
      },	
        {"hgun_p07_f",
          {"16rnd_9x21_mag"}
        }
      };

      assignedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio"};

      headgear[] = {"rhsusf_protech_helmet_rhino"};

      goggles[] = {
        "rhsusf_shemagh_gogg_tan",		
        "rhsusf_shemagh2_gogg_tan"
      };

      uniform[] = {"rhs_uniform_emr_des_patchless"};
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

      vest[] = {V_platecarrier1_blk};
      vestContents[] = {
        {"rhs_mag_30Rnd_556x45_Mk262_PMAG",6},
        {"handgrenade",2},
        {"SmokeShell",2},
        {"16rnd_9x21_mag",2},
        {"ace_maptools",1}
      };

      backpack[] = {"b_viperlightharness_blk_f"};
      backpackContents[] = {
        {"o_nvgoggles_grn_f",1},
        {"rhsusf_acc_rotex5_grey", 1},
        {"rhs_mag_30Rnd_556x45_Mk262_PMAG",4},
        {"SmokeShell",2},
        {"handgrenade",2}
      };
    };

  class SL: baseUnit {

    weapons[] = {
      {
        {"rhs_weap_mk18_kac_d",
          {"ace_acc_pointer_green","optic_Holosight_blk_F","rhs_mag_30Rnd_556x45_Mk262_PMAG","rhsusf_acc_grip1"}
        },
        {"rhs_weap_m4a1_blockii_kac_d",
          {"ace_acc_pointer_green","optic_Holosight_blk_F","rhs_mag_30Rnd_556x45_Mk262_PMAG","rhsusf_acc_grip1"}
        }
      },	
        {"hgun_p07_f",
          {"16rnd_9x21_mag"}
      },
      "ace_vector"
    };
    vest[] = {"V_platecarrier1_blk"};
    vestContents[] = {
      {"rhs_mag_30Rnd_556x45_Mk262_PMAG",6},
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
      {"rhs_mag_30Rnd_556x45_Mk262_PMAG",6},
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
        {"rhs_weap_mk18_kac_d",
          {"ace_acc_pointer_green","optic_Holosight_blk_F","rhs_mag_30Rnd_556x45_Mk262_PMAG","rhsusf_acc_grip1"}
        },
        {"rhs_weap_m4a1_blockii_kac_d",
          {"ace_acc_pointer_green","optic_Holosight_blk_F","rhs_mag_30Rnd_556x45_Mk262_PMAG","rhsusf_acc_grip1"}
        }
      },	
        {"hgun_p07_f",
          {"16rnd_9x21_mag"}
      },
      "ace_vector"
    };
    vest[] = {"V_platecarrier1_blk"};
    vestContents[] = {
      {"rhs_mag_30Rnd_556x45_Mk262_PMAG",6},
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
      {"rhs_mag_30Rnd_556x45_Mk262_PMAG",6},
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
        {"rhs_weap_mk18_kac_d",
          {"ace_acc_pointer_green","optic_Holosight_blk_F","rhs_mag_30Rnd_556x45_Mk262_PMAG","rhsusf_acc_grip1"}
        },
        {"rhs_weap_m4a1_blockii_kac_d",
          {"ace_acc_pointer_green","optic_Holosight_blk_F","rhs_mag_30Rnd_556x45_Mk262_PMAG","rhsusf_acc_grip1"}
        }
      },	
        {"hgun_p07_f",
          {"16rnd_9x21_mag"}
      },
      "ace_vector"
    };
    vest[] = {"V_platecarrier1_blk"};
    vestContents[] = {
      {"acre_prc148",2},
      {"rhs_mag_30Rnd_556x45_Mk262_PMAG",6},
      {"handgrenade", 2},
      {"SmokeShell",2},
      {"SmokeshellRed", 2},
      {"SmokeShellGreen", 2},
      {"16rnd_9x21_mag",2},
      {"ace_maptools",1}
    };

    backpack[]={"b_viperharness_blk_f"};
    backpackContents[] = {
      {"o_nvgoggles_grn_f",1},
      {"rhsusf_acc_rotex5_grey", 1},
      {"rhs_mag_30Rnd_556x45_Mk262_PMAG",6},
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
        {"rhs_weap_m4a1_d",
          {"ace_acc_pointer_green","optic_Holosight_blk_F","rhs_mag_30Rnd_556x45_Mk262_PMAG","rhsusf_acc_grip1"}
        },
        {"rhs_weap_m4a1_blockii_kac_d",
          {"ace_acc_pointer_green","optic_Holosight_blk_F","rhs_mag_30Rnd_556x45_Mk262_PMAG","rhsusf_acc_grip1"}
        }
      },	
        {"hgun_p07_f",
          {"16rnd_9x21_mag"}
      },
      "Laserdesignator_03"
    };
    vest[] = {"V_platecarrier1_blk"};
    vestContents[] = {
      {"acre_prc148",1},
      {"rhs_mag_30Rnd_556x45_Mk262_PMAG",6},
      {"handgrenade", 2},
      {"SmokeShell",2},
      {"SmokeshellRed", 2},
      {"SmokeShellGreen", 2},
      {"16rnd_9x21_mag",2},
      {"ace_maptools",1}
    };

    backpack[]={"b_viperharness_blk_f"};
    backpackContents[] = {
      {"o_nvgoggles_grn_f",1},
      {"rhsusf_acc_rotex5_grey", 1},
      {"handgrenade", 2},
      {"rhs_mag_30Rnd_556x45_Mk262_PMAG",6},
      {"SmokeShell",2},
      {"SmokeshellRed", 2},
      {"SmokeShellGreen", 2},
      {"laserbatteries",2},
      {"ace_microdagr",1}
    };
  };

  class RTO: baseUnit {
    backpack[]={"b_viperharness_blk_f"};
    backpackContents[] = {
      {"o_nvgoggles_grn_f",1},
      {"rhsusf_acc_rotex5_grey", 1},
      {"handgrenade", 2},
      {"rhs_mag_30Rnd_556x45_Mk262_PMAG",6},
      {"SmokeShell",2},
      {"ACRE_PRC117F",1}
    };
  };

  class DM: baseUnit {

    weapons[] = {
      {"rhs_weap_sr25_ec_d",
        {"rhsusf_20Rnd_762x51_sr25_Mk316_special_Mag","rhsusf_acc_anpeq15side_bk","rhsusf_acc_su230a","rhsusf_acc_harris_bipod"}
      },
      {"hgun_p07_f",
        {"16rnd_9x21_mag"}
      },
      "ace_vector"
    };

    vest[] = {"V_platecarrier1_blk"};
    vestContents[] = {
      {"rhsusf_20Rnd_762x51_sr25_Mk316_special_Mag",6},
      {"handgrenade",2},
      {"SmokeShell",2},
      {"16rnd_9x21_mag",2},
      {"ace_maptools",1}
    };

    backpackContents[] = {
      {"o_nvgoggles_grn_f",1},
      {"rhsgref_sdn6_silencer",1},
      {"rhsusf_20Rnd_762x51_sr25_Mk316_special_Mag",4},
      {"rhsusf_20Rnd_762x51_sr25_M62_Mag",2},
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
      {"hgun_p07_f",
        {"16rnd_9x21_mag"}
      },
      "ace_yardage450"
    };

    vest[] = {"V_platecarrier1_blk"};
    vestContents[] = {
      {"rhsusf_mag_6rnd_m433_hedp",2},
      {"rhsusf_mag_6rnd_m441_he",1},
      {"handgrenade",2},
      {"SmokeShell",2},
      {"16rnd_9x21_mag",2},
      {"ace_maptools",1}
    };

    backpack[]={"b_viperharness_blk_f"};
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
      {"rhs_weap_m4a1_M203s_d",
        {"rhs_mag_30Rnd_556x45_Mk262_PMAG", "rhs_mag_m441_he", "ace_acc_pointer_green", "optic_Holosight_blk_F"},
      },
      {"hgun_p07_f",
        {"16rnd_9x21_mag"}
      }
    };

    vest[] = {"V_platecarrier1_blk"};
    vestContents[] = {
      {"rhs_mag_30Rnd_556x45_Mk262_PMAG",8},
      {"handgrenade", 2},
      {"16rnd_9x21_mag",2},
      {"ace_maptools",1}
    };

    backpackContents[] = {
      {"o_nvgoggles_grn_f",1},
      {"rhsusf_acc_rotex5_grey", 1},
      {"rhs_mag_30Rnd_556x45_Mk262_PMAG",4},
      {"SmokeShell",2},
      {"handgrenade",2},
      {"rhs_mag_m433_hedp",12},
      {"rhs_mag_m441_he",12},
      {"rhs_mag_m714_white", 4}
    };
  };
  class UGL: GN {};

  class MAT: baseUnit {

    weapons[] = {
      {
        {"rhs_weap_mk18_kac_d",
          {"ace_acc_pointer_green","optic_Holosight_blk_F","rhs_mag_30Rnd_556x45_Mk262_PMAG","rhsusf_acc_grip1"}
        },
        {"rhs_weap_m4a1_blockii_kac_d",
          {"ace_acc_pointer_green","optic_Holosight_blk_F","rhs_mag_30Rnd_556x45_Mk262_PMAG","rhsusf_acc_grip1"}
        }
      },	
        {"hgun_p07_f",
          {"16rnd_9x21_mag"}
      },
      {"launch_MRAWS_green_rail_F",
        {"MRAWS_HEAT55_F", "ace_acc_pointer_green"}
      }
    };
    backpack[]={"b_viperlightharness_blk_f"};
    backpackContents[] = {
      {"o_nvgoggles_grn_f",1},
      {"rhsusf_acc_rotex5_grey",1},
      {"rhs_mag_30Rnd_556x45_Mk262_PMAG", 4},
      {"MRAWS_HEAT55_F", 1},
      {"MRAWS_HE_F", 2}
    };
  };

  class MATA: baseUnit {

    weapons[] = {
      {
        {"rhs_weap_mk18_kac_d",
          {"ace_acc_pointer_green","optic_Holosight_blk_F","rhs_mag_30Rnd_556x45_Mk262_PMAG","rhsusf_acc_grip1"}
        },
        {"rhs_weap_m4a1_blockii_kac_d",
          {"ace_acc_pointer_green","optic_Holosight_blk_F","rhs_mag_30Rnd_556x45_Mk262_PMAG","rhsusf_acc_grip1"}
        }
      },	
        {"hgun_p07_f",
          {"16rnd_9x21_mag"}
      },
      "ace_vector"
    };
    
    backpack[]={"b_viperharness_blk_f"};
    backpackContents[] = {
      {"o_nvgoggles_grn_f",1},
      {"rhsusf_acc_rotex5_grey",1},
      {"rhs_mag_30Rnd_556x45_Mk262_PMAG", 4},
      {"MRAWS_HEAT55_F", 2},
      {"MRAWS_HE_F", 2}
    };
  };

  class HAT: baseUnit {

    weapons[] = {
      {
        {"rhs_weap_m4a1_d",
          {"ace_acc_pointer_green","optic_Holosight_blk_F","rhs_mag_30Rnd_556x45_Mk262_PMAG","rhsusf_acc_grip1"}
        },
        {"rhs_weap_m4a1_blockii_kac_d",
          {"ace_acc_pointer_green","optic_Holosight_blk_F","rhs_mag_30Rnd_556x45_Mk262_PMAG","rhsusf_acc_grip1"}
        }
      },	
        {"hgun_p07_f",
          {"16rnd_9x21_mag"}
      },
      {"launch_o_titan_short_f",
        {"Titan_AT", "ace_acc_pointer_green"}
      }
    };
    backpackContents[] = {
      {"o_nvgoggles_grn_f",1},
      {"rhsusf_acc_rotex5_grey",1},
      {"rhs_mag_30Rnd_556x45_Mk262_PMAG", 4},
      {"Titan_AT", 1}
    };
  };

  class HATA: baseUnit {

    weapons[] = {
      {
        {"rhs_weap_m4a1_d",
          {"ace_acc_pointer_green","optic_Holosight_blk_F","rhs_mag_30Rnd_556x45_Mk262_PMAG","rhsusf_acc_grip1"}
        },
        {"rhs_weap_m4a1_blockii_kac_d",
          {"ace_acc_pointer_green","optic_Holosight_blk_F","rhs_mag_30Rnd_556x45_Mk262_PMAG","rhsusf_acc_grip1"}
        }
      },	
        {"hgun_p07_f",
          {"16rnd_9x21_mag"}
      },
      "ace_vector"
    };
    
    backpack[]={"b_viperharness_blk_f"};
    backpackContents[] = {
      {"o_nvgoggles_grn_f",1},
      {"rhsusf_acc_rotex5_grey",1},
      {"rhs_mag_30Rnd_556x45_Mk262_PMAG", 4},
      {"Titan_AT", 1},
      {"Titan_AP", 2}
    };
  };

  class ME: baseUnit {
    ace_medic = 2;
    vest[] = {"V_tacvestir_blk"};
    backpack[]={"b_viperharness_blk_f"};
    backpackContents[] = {
      {"o_nvgoggles_grn_f",1},
      {"rhsusf_acc_rotex5_grey", 1},
      {"rhs_mag_30Rnd_556x45_Mk262_PMAG",6},
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
      {"rhs_mag_30Rnd_556x45_Mk262_PMAG", 6},
      {"handgrenade",4},
      {"SmokeShell",2},
      {"rhsusf_100Rnd_556x45_mixed_soft_pouch_coyote",1},
      {"ACE_salineIV_500",1}
    };
  };
  class RF: RM {};

  class GPMG: baseUnit {
    weapons[] = {
      {"rhs_weap_m240b",
        {"rhsusf_100Rnd_762x51_m80a1epr","rhsusf_acc_anpeq15side_bk","rhsusf_acc_su230a"},
      },
      {"hgun_p07_f",
          {"16rnd_9x21_mag"}
      }
    };
    vest[] = {"V_tacvestir_blk"};
    vestContents[] = {
      {"rhsusf_100Rnd_762x51_m80a1epr",3},
      {"16rnd_9x21_mag",3},
      {"handgrenade",2},
      {"ace_maptools",1}
    };

    backpack[]={"b_viperlightharness_blk_f"};
    backpackContents[] = {
      {"muzzle_snds_h_mg_blk_f",1},
      {"rhsusf_100Rnd_762x51_m80a1epr",3},
      {"SmokeShell",2},
      {"handgrenade",2}
    };
  };
  class MG: GPMG {};

  class LMG: baseUnit {
 
    weapons[] = {
      {"rhs_weap_m249_light_S_vfg2",
        {"rhsusf_100Rnd_556x45_mixed_soft_pouch_coyote","rhsusf_acc_anpeq15side_bk","optic_Holosight_blk_F","rhsusf_acc_grip4_bipod"},
      },
      {"hgun_p07_f",
          {"16rnd_9x21_mag"}
      }
    };
    vestContents[] = {
      {"rhsusf_200Rnd_556x45_mixed_soft_pouch_coyote",2},
      {"SmokeShell",2},
      {"16rnd_9x21_mag",2},
      {"handgrenade",2},
      {"ace_maptools",1}
    };

    backpackContents[] = {
      {"rhsusf_acc_rotex5_grey",1},
      {"rhsusf_200Rnd_556x45_mixed_soft_pouch_coyote",4},
      {"SmokeShell",2},
      {"handgrenade",2}
    };   
  };

  class GPMGA: baseUnit {

    weapons[] = {
      {"rhs_weap_m16a4_imod_grip",
        {"rhs_mag_30Rnd_556x45_Mk262_PMAG","ace_acc_pointer_green","optic_Holosight_blk_F"},
      },
      {"hgun_p07_f",
        {"16rnd_9x21_mag"}
      },
      "binocular"
    };

    backpack[]={"b_viperharness_blk_f"};
    backpackContents[] = {
      {"rhsusf_acc_rotex5_grey",1},
      {"rhs_mag_30Rnd_556x45_Mk262_PMAG",4},
      {"rhs_mag_30Rnd_556x45_M855A1_PMAG_Tracer_Red",2},
      {"SmokeShell",2},
      {"handgrenade",2},
      {"rhsusf_100Rnd_762x51_m80a1epr",4},	  
      {"rhsusf_100Rnd_762x51_m62_tracer",2}
    };
  };

  class PT: baseUnit {

    weapons[] = {
      {"smg_03c_tr_black",
        {"50rnd_570x28_smg_03","ace_acc_pointer_green","optic_Holosight_smg_blk_F"},
      },
      {"hgun_p07_f",
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
      {"50rnd_570x28_smg_03",2},
      {"16rnd_9x21_mag",2},
      {"ace_maptools",1}
    };

    backpack[] = {"b_tacticalpack_oli"};
    backpackContents[] = {
      {"SmokeShell",2},
      {"50rnd_570x28_smg_03",4},
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
      {"b_fieldpack_green_f",2}
    };
  };
  class LargeGearCrate {
    vehCargoWeapons[] = {
      {"rhs_weap_m72a7",6},
      {"ACE_Vector",2}
    };
    vehCargoMagazines[] = {
      {"rhs_mag_30Rnd_556x45_Mk262_PMAG",40},
      {"rhs_mag_30Rnd_556x45_M855A1_PMAG_Tracer_Red",10},
      {"rhsusf_200Rnd_556x45_mixed_soft_pouch_coyote",10},
      {"rhsusf_20Rnd_762x51_sr25_Mk316_special_Mag",10},
      {"rhsusf_20Rnd_762x51_SR25_m62_Mag",4},
      {"rhsusf_100Rnd_762x51_m80a1epr",8},
      {"handgrenade",20},
      {"SmokeShell",10},
      {"rhs_mag_m433_hedp",20},
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
      {"b_viperharness_blk_f",4}
    };
  };
};