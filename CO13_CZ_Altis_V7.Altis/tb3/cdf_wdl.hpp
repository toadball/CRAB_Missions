  class CDF_WDL {
    class BaseUnit {
      ace_earplugs = 1;
      allowPlayerGoggles = 1;
      ace_medic = 1;

      weapons[] = {
        {"rhs_weap_ak74mr",
          {"rhs_30rnd_545x39_7n22_ak","rhs_acc_dtk2","rhs_acc_perst1ik_ris_2dp_light_h","rhs_acc_1p87",rhsusf_acc_grip1"}
        },
        {"rhsusf_weap_glock17g4",
          {"rhsusf_mag_17Rnd_9x19_JHP"}
        }
      };

      assignedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio"};

      headgear[] = {
        "H_HelmetHBK_F",
        "rhsgref_6b27m_ttsko_urban"
      };

      goggles[] = {};

      uniform[] = {"rhsgref_uniform_para_ttsko_urban"};
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
        {"rhs_30rnd_545x39_7n22_ak",6},
        {"rhs_mag_rgd5",2},
        {"SmokeShell",2},
        {"rhsusf_mag_17Rnd_9x19_JHP",2},
        {"ace_maptools",1}
      };

      backpack[] = {"B_Kitbag_sgg"};
      backpackContents[] = {
        {"rhsusf_ANPVS_15",1},
        {"rhs_acc_dtk4short", 1},
        {"rhs_30rnd_545x39_7n22_ak",4},
        {"SmokeShell",2},
        {"rhs_mag_rgd5",2}
      };
    };

  class SL: baseUnit {

    weapons[] = {
      {"rhs_weap_ak74mr_gp25",
        {"rhs_30rnd_545x39_7n22_ak","rhs_VG40MD","rhs_acc_perst1ik_ris", "rhs_acc_1p87"},
      },
      {"rhsusf_weap_glock17g4",
        {"rhsusf_mag_17Rnd_9x19_JHP"}
      },
      "Rangefinder"
    };
    vest[] = {"V_SmershVest_01_radio_F"};
    vestContents[] = {
      {"rhs_30rnd_545x39_7n22_ak",6},
      {"rhs_mag_rgd5", 2},
      {"acre_prc148",1},
      {"rhsusf_mag_17Rnd_9x19_JHP",2},
      {"ace_maptools",1}
    };

    backpackContents[] = {
      {"rhsusf_ANPVS_15",1},
      {"rhs_acc_dtk4short", 1},
      {"rhs_30rnd_545x39_7n22_ak",4},
      {"rhs_GRD40_red",4},
      {"rhs_GRD40_green",4},
      {"rhs_VG40MD",4},
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
      {"rhs_weap_ak74mr",
        {"rhs_30rnd_545x39_7n22_ak","rhs_acc_perst1ik_ris", "rhs_acc_1p87", "rhsusf_acc_grip1"},
      },
      {"rhsusf_weap_glock17g4",
        {"rhsusf_mag_17Rnd_9x19_JHP"}
      },
      "Rangefinder"
    };
    vestContents[] = {
      {"rhs_30rnd_545x39_7n22_ak",6},
      {"rhs_mag_rgd5", 2},
      {"acre_prc148",1},
      {"rhsusf_mag_17Rnd_9x19_JHP",2},
      {"ace_maptools",1}
    };

    backpackContents[] = {
      {"rhsusf_ANPVS_15",1},
      {"rhs_acc_dtk4short", 1},
      {"rhs_30rnd_545x39_7n22_ak",4},
      {"ace_microdagr",1},
      {"rhs_mag_rgd5",2},
      {"SmokeShell",2}
    };
  };

  class DFO: SL {
    assignedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","B_UAV_Terminal"};

    weapons[] = {
      {"rhs_weap_ak74mr_gp25",
        {"rhs_30rnd_545x39_7n22_ak","rhs_VG40MD","rhs_acc_perst1ik_ris", "rhs_acc_1p87",},
      },
      {"rhsusf_weap_glock17g4",
        {"rhsusf_mag_17Rnd_9x19_JHP"}
      },
      "ace_vector"
    };

    vestContents[] = {
      {"acre_prc148",2},
      {"rhs_30rnd_545x39_7n22_ak",6},
      {"rhs_mag_rgd5", 4},
      {"rhs_GRD40_Red", 2},
      {"rhs_GRD40_Green", 2},
      {"rhs_VG40MD", 2},
      {"rhsusf_mag_17Rnd_9x19_JHP",2},
      {"ace_maptools",1}
    };

    backpack[]={"rhsgref_hidf_alicepack"};
    backpackContents[] = {
      {"rhsusf_ANPVS_15",1},
      {"rhs_acc_dtk4short", 1},
      {"rhs_30rnd_545x39_7n22_ak",4},
      {"rhs_GRD40_red",2},
      {"rhs_GRD40_green",2},
      {"rhs_VG40MD",2},
      {"ace_microdagr",1},
      {"ITC_Land_B_AR2i_Packed",2},
      {"ACE_UAVBattery",2}
    };
  };
  class FSO: DFO {};
  class FO: DFO {
    assignedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio"};

    weapons[] = {
      {"rhs_weap_ak74mr_gp25",
        {"rhs_30rnd_545x39_7n22_ak","rhs_VG40MD","rhs_acc_perst1ik_ris", "rhs_acc_1p87",},
      },
      {"rhsusf_weap_glock17g4",
        {"rhsusf_mag_17Rnd_9x19_JHP"}
      },
      "Laserdesignator_03"
    };

    vestContents[] = {
      {"acre_prc148",1},
      {"rhs_30rnd_545x39_7n22_ak",6},
      {"rhs_mag_rgd5", 2},
      {"SmokeShell",2},
      {"rhs_GRD40_Red", 2},
      {"rhs_GRD40_Green", 2},
      {"rhs_VG40MD", 2},
      {"rhsusf_mag_17Rnd_9x19_JHP",2},
      {"ace_maptools",1}
    };

    backpack[]={"B_Kitbag_sgg"};
    backpackContents[] = {
      {"rhsusf_ANPVS_15",1},
      {"rhs_acc_dtk4short", 1},
      {"rhs_mag_rgd5", 2},
      {"rhs_30rnd_545x39_7n22_ak",4},
      {"rhs_GRD40_red",2},
      {"rhs_GRD40_green",2},
      {"SmokeShell",2},
      {"rhs_VG40MD",4},
      {"ace_microdagr",1}
    };
  };

  class RTO: baseUnit {
    vest[] = {"V_SmershVest_01_radio_F"};
    backpack[]={"rhsgref_hidf_alicepack"};
    backpackContents[] = {
      {"rhsusf_ANPVS_15",1},
      {"rhs_acc_dtk4short", 1},
      {"rhs_mag_rgd5", 2},
      {"rhs_30rnd_545x39_7n22_ak",4},
      {"SmokeShell",2},
      {"ACRE_PRC117F",1}
    };
  };


  class DM: baseUnit {

    weapons[] = {
      {"rhs_weap_m14_rail_fiberglass",
        {"ACE_20Rnd_762x51_Mk319_Mod_0_Mag","rhsusf_acc_su230a","rhsusf_acc_harris_swivel"}
      },
      {"rhsusf_weap_glock17g4",
        {"rhsusf_mag_17Rnd_9x19_JHP"}
      }
    };

    vest[] = {"V_SmershVest_01_radio_F"};
    vestContents[] = {
      {"ACE_20Rnd_762x51_Mk319_Mod_0_Mag",6},
      {"rhs_mag_rgd5",2},
      {"SmokeShell",2},
      {"rhsusf_mag_17Rnd_9x19_JHP",2},
      {"ace_maptools",1}
    };

    backpackContents[] = {
      {"rhsusf_ANPVS_15",1},
      {"rhsusf_acc_aac_m14dcqd_silencer",1},
      {"ACE_20Rnd_762x51_Mk319_Mod_0_Mag",4},
      {"SmokeShell",2},
      {"rhs_mag_rgd5",2}
    };
  };
  class DMR: DM {};
  class VSS: baseUnit {

    weapons[] = {
      {"rhs_weap_vss_grip1",
        {"rhs_20rnd_9x39mm_sp6","rhs_acc_perst1ik_ris","rhs_acc_pso1m21","rhsusf_acc_grip1"}
      },
      {"rhsusf_weap_glock17g4",
        {"rhsusf_mag_17Rnd_9x19_JHP"}
      }
    };

    vest[] = {"V_SmershVest_01_radio_F"};
    vestContents[] = {
      {"rhs_20rnd_9x39mm_sp6",6},
      {"rhs_mag_rgd5",2},
      {"SmokeShell",2},
      {"rhsusf_mag_17Rnd_9x19_JHP",2},
      {"ace_maptools",1}
    };

    backpackContents[] = {
      {"rhsusf_ANPVS_15",1},
      {"rhs_acc_1pn93_1",1},
      {"rhs_20rnd_9x39mm_sp6",4},
      {"rhs_mag_rgd5",2},
      {"SmokeShell",2}
    };
  };

  class GN: baseUnit {

    weapons[] = {
      {"rhs_weap_ak74mr_gp25",
        {"rhs_30rnd_545x39_7n22_ak", "rhs_vog25", "rhs_acc_perst1ik_ris", "rhs_acc_1p87", "rhsusf_acc_grip1"},
      },
      {"rhsusf_weap_glock17g4",
        {"rhsusf_mag_17Rnd_9x19_JHP"}
      }
    };

    vestContents[] = {
      {"rhs_30rnd_545x39_7n22_ak",6},
      {"rhs_mag_rgd5", 2},
      {"rhs_vog25", 6},
      {"rhs_vg40tb", 4},
      {"rhsusf_mag_17Rnd_9x19_JHP",2},
      {"ace_maptools",1}
    };

    backpackContents[] = {
      {"rhsusf_ANPVS_15",1},
      {"rhs_acc_dtk4short", 1},
      {"rhs_30rnd_545x39_7n22_ak",6},
      {"SmokeShell",2},
      {"rhs_mag_rgd5",2},
      {"rhs_vog25",18},
      {"rhs_vog25tb", 6},
      {"rhs_vg40md", 6}
    };
  };
  class UGL: GN {};

  class RPG: baseUnit {
    weapons[] = {
      {"rhs_weap_ak74mr",
        {"rhs_30rnd_545x39_7n22_ak","rhs_acc_dtk2","rhs_acc_perst1ik_ris_2dp_light_h","rhs_acc_1p87",rhsusf_acc_grip1"},
      },
      {"rhsusf_weap_glock17g4",
        {"rhsusf_mag_17Rnd_9x19_JHP"}
      },
      {"rhs_weap_rpg7",
        {"rhs_rpg7_pg7v_mag", "rhs_acc_pgo7v3"}
      }
    };
    backpackContents[] = {
      {"rhs_acc_dtk4short",1},
      {"rhs_30rnd_545x39_7n22_ak", 4},
      {"rhs_rpg7_PG7V_mag", 1},
      {"rhs_rpg7_OG7V_mag", 2}
    };
  };

  class RPGA: baseUnit {
    backpackContents[] = {
      {"rhsusf_ANPVS_15",1},
      {"rhs_acc_dtk4short",1},
      {"rhs_30rnd_545x39_7n22_ak", 4},
      {"rhs_rpg7_pg7vl_mag", 2},
      {"rhs_rpg7_tbg7v_mag", 2}
    };
  };

  class ME: baseUnit {
    ace_medic = 2;

    backpack[]={"rhsgref_hidf_alicepack"};
    backpackContents[] = {
      {"rhsusf_ANPVS_15",1},
      {"rhs_acc_dtk4short", 1},
      {"rhs_30rnd_545x39_7n22_ak",4},
      {"SmokeShell",2},
      {"ACE_fieldDressing",15},
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
      {"rhs_acc_dtk4short",1},
      {"rhs_30rnd_545x39_7n22_ak", 6},
      {"rhs_mag_rgd5",2},
      {"SmokeShell",2},
      {"ACE_salineIV_500",2},
      {"rhs_rpg7_PG7V_mag", 1},
      {"rhsgref_296Rnd_792x57_SmK_belt",1}
    };
  };
  class RF: RM {};

  class MG: baseUnit {

    weapons[] = {
      {"rhs_weap_mg42",
        {"rhsgref_50Rnd_792x57_SmK_alltracers_drum"},
      },
      {"rhsusf_weap_glock17g4",
          {"rhsusf_mag_17Rnd_9x19_JHP"}
      }
    };
    vestContents[] = {
      {"rhsgref_296Rnd_792x57_SmK_belt",1},
      {"SmokeShell",2},
      {"rhsusf_mag_17Rnd_9x19_JHP",2},
      {"rhs_mag_rgd5",2},
      {"ace_maptools",1}
    };

    backpackContents[] = {
      {"rhsgref_296Rnd_792x57_SmK_belt",1},
      {"SmokeShell",2},
      {"rhs_mag_rgd5",2}
    };
  };
  class LMG: MG {};
  class MGA: baseUnit {

    weapons[] = {
      {"rhs_weap_ak74mr",
        {"rhs_30rnd_545x39_7n22_ak","rhs_acc_dtk2","rhs_acc_perst1ik_ris_2dp_light_h","rhs_acc_1p87",rhsusf_acc_grip1"},
      },
      {"rhsusf_weap_glock17g4",
        {"rhsusf_mag_17Rnd_9x19_JHP"}
      },
      "Binocular"
    };

    backpack[]={"rhsgref_hidf_alicepack"};
    backpackContents[] = {
      {"rhs_acc_dtk4short",1},
      {"rhs_30rnd_545x39_7n22_ak",4},
      {"SmokeShell",2},
      {"rhs_mag_rgd5",2},
      {"rhsgref_296Rnd_792x57_SmK_belt",2}
    };
  };

  class PT: baseUnit {

    weapons[] = {
      {"SMG_03C_TR_black",
        {"rhs_30rnd_545x39_7n22_ak","rhs_acc_perst1ik_ris","rhs_acc_1p87"},
      },
      {"rhsusf_weap_glock17g4",
        {"rhsusf_mag_17Rnd_9x19_JHP"}
      },
      "Binocular"
    };

    headgear[] = {
      "rhsusf_hgu56p_visor_mask_mo",
      "rhsusf_hgu56p_black",
      "rhsusf_hgu56p_visor_mask_pink"
    };

    vest[] = {"V_Pocketed_olive_F"};
    vestContents[] = {
      {"acre_prc148",1},
      {"50Rnd_570x28_SMG_03",4},
      {"ace_maptools",1}
    };

    backpack[] = {"B_LegStrapBag_olive_F"};
    backpackContents[] = {
      {"SmokeShell",2},
      {"rhs_mag_rgd5",1}
    };
  };
  class PILOT: PT {};
};
