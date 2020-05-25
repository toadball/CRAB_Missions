  class CDF_WDL {
    class BaseUnit {
      ace_earplugs = 1;
      allowPlayerGoggles = 1;
      ace_medic = 1;

      weapons[] = {
        {"rhs_weap_m16a4_imod_grip",
          {"rhs_mag_30Rnd_556x45_Mk262_PMAG","rhsusf_acc_anpeq15side_bk","optic_Holosight_blk_F",rhsusf_acc_grip1"}
        },
        {"rhs_weap_6p53",
          {"rhs_18rnd_9x21mm_7n29"}
        }
      };

      assignedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio"};

      headgear[] = {
        "H_HelmetHBK_F",
        "rhsusf_opscore_fg_pelt_cam",
        "rhsusf_mich_bare_norotos_arc_alt",
        "rhsusf_mich_bare_norotos_arc_headset",
        "rhsusf_opscore_fg_pelt",
        "rhsusf_opscore_bk_pelt"
      };

      goggles[] = {};

      uniform[] = {
        "rhsgref_uniform_woodland",
        "rhsgref_uniform_woodland_olive",
        "rhs_uniform_bdu_erdl"
        };
      uniformContents[] = {
        {"ACE_fieldDressing",4},
        {"ACE_elasticBandage",4},
        {"ACE_quikclot",4},
        {"ACE_morphine",2},
        {"ACE_tourniquet",2},
        {"ACE_Splint",2},
        {"ACE_salineIV_500",1},
        {"ACE_Flashlight_XL50",1}
      };

      vest[] = {"V_SmershVest_01_F"};
      vestContents[] = {
        {"rhs_mag_30Rnd_556x45_Mk262_PMAG",6},
        {"rhs_mag_rgd5",2},
        {"SmokeShell",2},
        {"rhs_18rnd_9x21mm_7n29",2},
        {"ace_maptools",1}
      };

      backpack[] = {"B_Kitbag_sgg"};
      backpackContents[] = {
        {"rhsusf_ANPVS_15",1},
        {"rhsusf_acc_rotex5_grey", 1},
        {"rhs_mag_30Rnd_556x45_Mk262_PMAG",4},
        {"SmokeShell",2},
        {"rhs_mag_rgd5",2}
      };
    };

  class SL: baseUnit {

    weapons[] = {
      {"rhs_weap_m16a4_imod_M203",
        {"rhs_mag_30Rnd_556x45_Mk262_PMAG","rhs_mag_m714_white","rhsusf_acc_anpeq15_bk", "optic_Holosight_blk_F"},
      },
      {"rhs_weap_6p53",
        {"rhs_18rnd_9x21mm_7n29"}
      },
      "ace_vector"
    };
    vest[] = {"V_SmershVest_01_radio_F"};
    vestContents[] = {
      {"rhs_mag_30Rnd_556x45_Mk262_PMAG",6},
      {"rhs_mag_rgd5", 2},
      {"acre_prc148",1},
      {"rhs_18rnd_9x21mm_7n29",2},
      {"ace_maptools",1}
    };

    backpackContents[] = {
      {"rhsusf_ANPVS_15",1},
      {"rhsusf_acc_rotex5_grey", 1},
      {"rhs_mag_30Rnd_556x45_Mk262_PMAG",4},
      {"rhs_mag_M715_green",4},
      {"rhs_mag_m713_red",4},
      {"rhs_mag_m714_white",4},
      {"ace_microdagr",1},
      {"rhs_mag_rgd5",2},
      {"SmokeShell",2},
      {"smokeshellgreen", 2},
      {"SmokeShellRed", 2}
    };
  };
  class PL: SL {};
  class ZEUS: SL {};
  class TL: SL {
    weapons[] = {
      {"rhs_weap_m16a4_imod_grip",
        {"rhs_mag_30Rnd_556x45_Mk262_PMAG","rhsusf_acc_anpeq15_bk", "optic_Holosight_blk_F", "rhsusf_acc_grip1"},
      },
      {"rhs_weap_6p53",
        {"rhs_18rnd_9x21mm_7n29"}
      },
      "ace_vector"
    };
    vestContents[] = {
      {"rhs_mag_30Rnd_556x45_Mk262_PMAG",6},
      {"rhs_mag_rgd5", 2},
      {"acre_prc148",1},
      {"rhs_18rnd_9x21mm_7n29",2},
      {"ace_maptools",1}
    };

    backpackContents[] = {
      {"rhsusf_ANPVS_15",1},
      {"rhsusf_acc_rotex5_grey", 1},
      {"rhs_mag_30Rnd_556x45_Mk262_PMAG",4},
      {"ace_microdagr",1},
      {"rhs_mag_rgd5",2},
      {"SmokeShell",2}
    };
  };

  class DFO: SL {
    assignedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","B_UAV_Terminal"};

    weapons[] = {
      {"rhs_weap_m16a4_imod_M203",
        {"rhs_mag_30Rnd_556x45_Mk262_PMAG","rhs_mag_m714_white","rhsusf_acc_anpeq15_bk", "optic_Holosight_blk_F",},
      },
      {"rhs_weap_6p53",
        {"rhs_18rnd_9x21mm_7n29"}
      },
      "ace_vector"
    };

    vestContents[] = {
      {"acre_prc148",2},
      {"rhs_mag_30Rnd_556x45_Mk262_PMAG",6},
      {"rhs_mag_rgd5", 4},
      {"rhs_mag_M715_green", 2},
      {"rhs_mag_m713_red", 2},
      {"rhs_mag_m714_white", 2},
      {"rhs_18rnd_9x21mm_7n29",2},
      {"ace_maptools",1}
    };

    backpack[]={"rhsgref_hidf_alicepack"};
    backpackContents[] = {
      {"rhsusf_ANPVS_15",1},
      {"rhsusf_acc_rotex5_grey", 1},
      {"rhs_mag_30Rnd_556x45_Mk262_PMAG",4},
      {"rhs_mag_M715_green",2},
      {"rhs_mag_m713_red",2},
      {"rhs_mag_m714_white",2},
      {"ace_microdagr",1},
      {"ITC_Land_B_AR2i_Packed",2},
      {"ACE_UAVBattery",2}
    };
  };
  class FSO: DFO {};
  class FO: DFO {
    assignedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio"};

    weapons[] = {
      {"rhs_weap_m16a4_imod_M203",
        {"rhs_mag_30Rnd_556x45_Mk262_PMAG","rhs_mag_m714_white","rhsusf_acc_anpeq15_bk", "optic_Holosight_blk_F",},
      },
      {"rhs_weap_6p53",
        {"rhs_18rnd_9x21mm_7n29"}
      },
      "Laserdesignator_03"
    };

    vestContents[] = {
      {"acre_prc148",1},
      {"rhs_mag_30Rnd_556x45_Mk262_PMAG",6},
      {"rhs_mag_rgd5", 2},
      {"SmokeShell",2},
      {"rhs_mag_M715_green", 2},
      {"rhs_mag_m713_red", 2},
      {"rhs_mag_m714_white", 2},
      {"rhs_18rnd_9x21mm_7n29",2},
      {"ace_maptools",1}
    };

    backpack[]={"B_Kitbag_sgg"};
    backpackContents[] = {
      {"rhsusf_ANPVS_15",1},
      {"rhsusf_acc_rotex5_grey", 1},
      {"rhs_mag_rgd5", 2},
      {"rhs_mag_30Rnd_556x45_Mk262_PMAG",4},
      {"rhs_mag_M715_green",2},
      {"rhs_mag_m713_red",2},
      {"SmokeShell",2},
      {"rhs_mag_m714_white",4},
      {"ace_microdagr",1}
    };
  };

  class RTO: baseUnit {
    vest[] = {"V_SmershVest_01_radio_F"};
    backpack[]={"rhsgref_hidf_alicepack"};
    backpackContents[] = {
      {"rhsusf_ANPVS_15",1},
      {"rhsusf_acc_rotex5_grey", 1},
      {"rhs_mag_rgd5", 2},
      {"rhs_mag_30Rnd_556x45_Mk262_PMAG",4},
      {"SmokeShell",2},
      {"ACRE_PRC117F",1}
    };
  };


  class DM: baseUnit {

    weapons[] = {
      {"arifle_SPAR_03_blk_F",
        {"ACE_20Rnd_762x51_Mk316_Mod_0_Mag","rhsusf_acc_anpeq15side_bk","rhsusf_acc_su230a","rhsusf_acc_harris_bipod"}
      },
      {"rhs_weap_6p53",
        {"rhs_18rnd_9x21mm_7n29"}
      },
      "ace_vector"
    };

    vest[] = {"V_SmershVest_01_radio_F"};
    vestContents[] = {
      {"ACE_20Rnd_762x51_Mk316_Mod_0_Mag",6},
      {"rhs_mag_rgd5",2},
      {"SmokeShell",2},
      {"rhs_18rnd_9x21mm_7n29",2},
      {"ace_maptools",1}
    };

    backpackContents[] = {
      {"rhsusf_ANPVS_15",1},
      {"rhsusf_acc_aac_762sdn6_silencer",1},
      {"ACE_20Rnd_762x51_Mk316_Mod_0_Mag",4},
      {"ACE_20Rnd_762x51_Mag_Tracer",4},
      {"SmokeShell",2},
      {"rhs_mag_rgd5",2}
    };
  };
  class DMR: DM {};

  class MGL: baseUnit {

    weapons[] = {
      {"rhs_weap_m32",
        {"rhsusf_mag_6rnd_m433_hedp","rhsusf_acc_anpeq15side_bk"}
      },
      {"rhs_weap_pp2000_folded",
        {"rhs_mag_9x19mm_7n31_44","optic_Holosight_smg_blk_F"}
      },
      "ace_yardage450"
    };

    vest[] = {"V_SmershVest_01_F"};
    vestContents[] = {
      {"rhsusf_mag_6rnd_m433_hedp",2},
      {"rhsusf_mag_6rnd_m441_he",1},
      {"rhs_mag_rgd5",2},
      {"SmokeShell",2},
      {"rhs_mag_9x19mm_7n31_44",2},
      {"ace_maptools",1}
    };

    backpack[]={"B_Kitbag_sgg"};
    backpackContents[] = {
      {"rhsusf_ANPVS_15",1},
      {"rhsusf_mag_6rnd_m433_hedp",2},
      {"rhsusf_mag_6rnd_m441_he",1},
      {"rhsusf_mag_6rnd_m714_white",2},
      {"rhs_mag_9x19mm_7n31_44",4},
      {"rhs_mag_rgd5",2},
      {"SmokeShell",2}
    };
  };

  class GN: baseUnit {

    weapons[] = {
      {"rhs_weap_m16a4_imod_M203",
        {"rhs_mag_30Rnd_556x45_Mk262_PMAG", "rhs_mag_m397_het", "rhsusf_acc_anpeq15_bk", "optic_Holosight_blk_F", "rhsusf_acc_grip1"},
      },
      {"rhs_weap_6p53",
        {"rhs_18rnd_9x21mm_7n29"}
      }
    };

    vestContents[] = {
      {"rhs_mag_30Rnd_556x45_Mk262_PMAG",6},
      {"rhs_mag_rgd5", 2},
      {"rhs_mag_m433_hedp", 6},
      {"rhs_mag_m441_he", 4},
      {"rhs_18rnd_9x21mm_7n29",2},
      {"ace_maptools",1}
    };

    backpackContents[] = {
      {"rhsusf_ANPVS_15",1},
      {"rhsusf_acc_rotex5_grey", 1},
      {"rhs_mag_30Rnd_556x45_Mk262_PMAG",6},
      {"SmokeShell",2},
      {"rhs_mag_rgd5",2},
      {"rhs_mag_m433_hedp",12},
      {"rhs_mag_m441_he",6},
      {"rhs_mag_m397_het", 6},
      {"rhs_mag_m714_white", 6}
    };
  };
  class UGL: GN {};

  class RPG: baseUnit {

    weapons[] = {
      {"rhs_weap_m16a4_imod_grip",
        {"rhs_mag_30Rnd_556x45_Mk262_PMAG","rhsusf_acc_anpeq15side_bk","optic_Holosight_blk_F",rhsusf_acc_grip1"},
      },
      {"rhs_weap_6p53",
        {"rhs_18rnd_9x21mm_7n29"}
      },
      {"launch_MRAWS_green_rail_F",
        {"MRAWS_HEAT55_F", "rhsusf_acc_anpeq15side_bk"}
      }
    };
    backpackContents[] = {
      {"rhsusf_ANPVS_15",1},
      {"rhsusf_acc_rotex5_grey",1},
      {"rhs_mag_30Rnd_556x45_Mk262_PMAG", 4},
      {"MRAWS_HEAT55_F", 1},
      {"MRAWS_HE_F", 2}
    };
  };

  class RPGA: baseUnit {

    weapons[] = {
      {"rhs_weap_m16a4_imod_grip",
        {"rhs_mag_30Rnd_556x45_Mk262_PMAG","rhsusf_acc_anpeq15side_bk","optic_Holosight_blk_F",rhsusf_acc_grip1"},
      },
      {"rhs_weap_6p53",
        {"rhs_18rnd_9x21mm_7n29"}
      },
      "ace_vector"
    };
    
    backpack[]={"rhsgref_hidf_alicepack"};
    backpackContents[] = {
      {"rhsusf_ANPVS_15",1},
      {"rhsusf_acc_rotex5_grey",1},
      {"rhs_mag_30Rnd_556x45_Mk262_PMAG", 4},
      {"MRAWS_HEAT55_F", 2},
      {"MRAWS_HE_F", 2}
    };
  };

  class ME: baseUnit {
    ace_medic = 2;

    backpack[]={"rhsgref_hidf_alicepack"};
    backpackContents[] = {
      {"rhsusf_ANPVS_15",1},
      {"rhsusf_acc_rotex5_grey", 1},
      {"rhs_mag_30Rnd_556x45_Mk262_PMAG",6},
      {"SmokeShell",2},
      {"ACE_fieldDressing",20},
      {"ACE_packingBandage",10},
      {"ACE_quikclot",15},
      {"ACE_elasticBandage",15},
      {"ACE_morphine",10},
      {"ACE_epinephrine",10},
      {"ACE_adenosine",10},
      {"ACE_salineIV_250",5},
      {"ACE_bloodIV_500",4},
      {"ACE_salineiv_500",4},
      {"ACE_personalAidKit",1},
      {"ACE_surgicalKit",1},
      {"ACE_splint",8},
      {"ACE_tourniquet",5}
    };
  };
  class MED: ME {};

  class RM: baseUnit {
    backpackContents[] = {
      {"rhsusf_ANPVS_15",1},
      {"rhsusf_acc_rotex5_grey",1},
      {"rhs_mag_30Rnd_556x45_Mk262_PMAG", 6},
      {"rhs_mag_rgd5",4},
      {"SmokeShell",2},
      {"ACE_salineIV_250",2},
    };
  };
  class RF: RM {};

  class MG: baseUnit {

    weapons[] = {
      {"rhs_weap_mg42",
        {"rhsgref_50Rnd_792x57_SmK_alltracers_drum"},
      },
      {"rhs_weap_6p53",
          {"rhs_18rnd_9x21mm_7n29"}
      }
    };
    vestContents[] = {
      {"rhsgref_296Rnd_792x57_SmK_belt",1},
      {"SmokeShell",2},
      {"rhs_18rnd_9x21mm_7n29",2},
      {"rhs_mag_rgd5",2},
      {"ace_maptools",1}
    };

    backpackContents[] = {
      {"rhsgref_296Rnd_792x57_SmK_belt",1},
      {"SmokeShell",2},
      {"rhs_mag_rgd5",2}
    };
  };

  class LMG: baseUnit {
 
    weapons[] = {
      {"rhs_weap_m249_light_S_vfg2",
        {"rhsusf_100Rnd_556x45_mixed_soft_pouch_coyote","rhsusf_acc_anpeq15side_bk","optic_Holosight_blk_F",rhsusf_acc_grip4_bipod"},
      },
      {"rhs_weap_6p53",
          {"rhs_18rnd_9x21mm_7n29"}
      }
    };
    vestContents[] = {
      {"rhsusf_200Rnd_556x45_mixed_soft_pouch_coyote",2},
      {"SmokeShell",2},
      {"rhs_18rnd_9x21mm_7n29",2},
      {"rhs_mag_rgd5",2},
      {"ace_maptools",1}
    };

    backpackContents[] = {
      {"rhsusf_acc_rotex5_grey",1},
      {"rhsusf_200Rnd_556x45_mixed_soft_pouch_coyote",3},
      {"SmokeShell",2},
      {"rhs_mag_rgd5",2}
    };   
  };

  class MGA: baseUnit {

    weapons[] = {
      {"rhs_weap_m16a4_imod_grip",
        {"rhs_mag_30Rnd_556x45_Mk262_PMAG","rhsusf_acc_anpeq15side_bk","optic_Holosight_blk_F",rhsusf_acc_grip1"},
      },
      {"rhs_weap_6p53",
        {"rhs_18rnd_9x21mm_7n29"}
      },
      "Binocular"
    };

    backpack[]={"rhsgref_hidf_alicepack"};
    backpackContents[] = {
      {"rhsusf_acc_rotex5_grey",1},
      {"rhs_mag_30Rnd_556x45_Mk262_PMAG",4},
      {"SmokeShell",2},
      {"rhs_mag_rgd5",2},
      {"rhsgref_296Rnd_792x57_SmK_belt",2}
    };
  };

  class PT: baseUnit {

    weapons[] = {
      {"rhs_weap_pp2000",
        {"rhs_mag_9x19mm_7n31_44","optic_Holosight_smg_blk_F"},
      },
      {"rhs_weap_6p53",
          {"rhs_18rnd_9x21mm_7n29"}
      }
    };

    headgear[] = {
      "rhsusf_hgu56p_visor_mask_mo",
      "rhsusf_hgu56p_visor_white",
      "rhsusf_hgu56p_black",
      "rhsusf_hgu56p_visor_mask_pink"
    };

    vest[] = {"V_Pocketed_olive_F"};
    vestContents[] = {
      {"acre_prc148",1},
      {"rhs_mag_9x19mm_7n31_44",4},
      {"rhs_18rnd_9x21mm_7n29",2},
      {"ace_maptools",1}
    };

    backpack[] = {"B_LegStrapBag_olive_F"};
    backpackContents[] = {
      {"SmokeShell",2},
      {"SmokeShellgreen",2},
      {"rhs_mag_rgd5",1}
    };
  };
  class PILOT: PT {};
};
