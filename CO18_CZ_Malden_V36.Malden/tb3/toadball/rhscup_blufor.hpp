class RHSCUP_BLUFOR_MTP {
  class BaseUnit {
    allowPlayerGoggles = 0;
    ace_medic = 1;
    weapons[] = {
      {
        {"CUP_arifle_Mk16_STD",
          {"ace_acc_pointer_green","rhsusf_acc_su230","CUP_30Rnd_556x45_PMAG_QP"}
        },
        {"CUP_arifle_Mk16_STD_AFG",
          {"ace_acc_pointer_green","rhsusf_acc_su230","CUP_30Rnd_556x45_PMAG_QP"}
        },
        {"CUP_arifle_Mk16_STD_FG",
          {"ace_acc_pointer_green","rhsusf_acc_su230","CUP_30Rnd_556x45_PMAG_QP"}
        },
        {"CUP_arifle_Mk16_CQC",
          {"ace_acc_pointer_green","rhsusf_acc_su230","CUP_30Rnd_556x45_PMAG_QP"}
        },
        {"CUP_arifle_Mk16_CQC_AFG",
          {"ace_acc_pointer_green","rhsusf_acc_su230","CUP_30Rnd_556x45_PMAG_QP"}
        },
        {"CUP_arifle_Mk16_CQC_FG",
          {"ace_acc_pointer_green","rhsusf_acc_su230","CUP_30Rnd_556x45_PMAG_QP"}
        }
      },
      {"rhsusf_weap_glock17g4",{"rhsusf_mag_17Rnd_9x19_JHP"}}
    };
    priKit[] = {};
    secKit[] = {};
    pisKit[] = {};

    assignedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemGPS","rhsusf_ANPVS_15"};

    headgear[] = {
      "rhsusf_opscore_mc_cover_pelt"
    };
    goggles[] = {
      "G_Combat",
      "G_Combat_Goggles_tna_F",
      "G_Tactical_Clear"
    };
    uniform[] = {"rhs_uniform_g3_mc"};

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

    vest[] = {"rhsusf_mbav_rifleman"};

      vestContents[] = {
        {"CUP_30Rnd_556x45_PMAG_QP",4},
        {"CUP_30Rnd_556x45_PMAG_QP_Tracer_Red",2},
        {"rhsusf_mag_17Rnd_9x19_JHP",2},
        {"HandGrenade",2},
        {"SmokeShell",2},
        {"Chemlight_green",2},
        {"B_IR_Grenade",1},
        {"cup_muzzle_snds_m16",1},
        {"ACE_MapTools",1}
      };

    backpack[] = {"rhsusf_assault_eagleaiii_coy"};
      backpackContents[] = {
        {"CUP_30Rnd_556x45_PMAG_QP",4},
        {"CUP_30Rnd_556x45_PMAG_QP_Tracer_Red",2},
        {"rhsusf_mag_17Rnd_9x19_JHP",2},
        {"HandGrenade",2},
        {"SmokeShell",2},
        {"Chemlight_green",2},
        {"B_IR_Grenade",1},
        {"rhsusf_100Rnd_762x51_m62_tracer",1}
      };

    magazines[] = {}; items[] = {};
  };
  class PL: BaseUnit {
    weapons[] = {
      {
        {"CUP_arifle_Mk16_STD",
          {"ace_acc_pointer_green","rhsusf_acc_su230","CUP_30Rnd_556x45_PMAG_QP"}
        },
        {"CUP_arifle_Mk16_STD_AFG",
          {"ace_acc_pointer_green","rhsusf_acc_su230","CUP_30Rnd_556x45_PMAG_QP"}
        },
        {"CUP_arifle_Mk16_STD_FG",
          {"ace_acc_pointer_green","rhsusf_acc_su230","CUP_30Rnd_556x45_PMAG_QP"}
        },
        {"CUP_arifle_Mk16_CQC",
          {"ace_acc_pointer_green","rhsusf_acc_su230","CUP_30Rnd_556x45_PMAG_QP"}
        },
        {"CUP_arifle_Mk16_CQC_AFG",
          {"ace_acc_pointer_green","rhsusf_acc_su230","CUP_30Rnd_556x45_PMAG_QP"}
        },
        {"CUP_arifle_Mk16_CQC_FG",
          {"ace_acc_pointer_green","rhsusf_acc_su230","CUP_30Rnd_556x45_PMAG_QP"}
        }
      },
      {"rhsusf_weap_glock17g4",{"rhsusf_mag_17Rnd_9x19_JHP"}},
      "ACE_Vector"
    };
    assignedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemGPS","rhsusf_ANPVS_15"};

    vestContents[] = {
      {"CUP_30Rnd_556x45_PMAG_QP",4},
      {"CUP_30Rnd_556x45_PMAG_QP_Tracer_Red",2},
      {"rhsusf_mag_17Rnd_9x19_JHP",2},
      {"HandGrenade",2},
      {"SmokeShell",2},
      {"Chemlight_green",2},
      {"B_IR_Grenade",1},
      {"ace_IR_strobe_item",1},
      {"ACRE_PRC148",1},
      {"cup_muzzle_snds_m16",1},
      {"itc_land_tablet_rover",1},
      {"ACE_MapTools",1},
      {"ACE_MicroDagr",1}
    };
  };
  class ZEUS: PL {
    assignedItems[] = {"ItemMap","ItemCompass","ItemWatch","B_UavTerminal","rhsusf_ANPVS_15"};
  };
  class TL: PL {};
  class FSO: PL {
    vestContents[] = {
      {"CUP_30Rnd_556x45_PMAG_QP",4},
      {"CUP_30Rnd_556x45_PMAG_QP_Tracer_Red",2},
      {"rhsusf_mag_17Rnd_9x19_JHP",2},
      {"HandGrenade",2},
      {"SmokeShell",2},
      {"Chemlight_green",2},
      {"B_IR_Grenade",1},
      {"ace_IR_strobe_item",1},
      {"ACRE_PRC148",1},
      {"cup_muzzle_snds_m16",1},
      {"ACE_MapTools",1},
      {"ACE_MicroDagr",1}
    };
    backpack[] = {"ITC_Land_o_uav_backpack"};
    assignedItems[] = {"ItemMap","ItemCompass","ItemWatch","B_UavTerminal","rhsusf_ANPVS_15"};
      backpackContents[] = {
        {"CUP_30Rnd_556x45_PMAG_QP",4},
        {"CUP_30Rnd_556x45_PMAG_QP_Tracer_Red",2},
        {"HandGrenade",2},
        {"SmokeShell",2},
        {"Chemlight_green",2},
        {"ace_IR_strobe_item",1},
        {"itc_land_b_ar2i_packed",1},
        {"ace_uavbattery",2},
        {"Laserdesignator_01_khk_F",1},
        {"Laserbatteries",3},
        {"ACRE_PRC148",1},
        {"itc_land_tablet_rover",1}
      };

  };
  class MED: BaseUnit {
    ace_medic = 2;
    vest[] = {"rhsusf_mbav_medic"};
    backpack[] = {"B_Carryall_cbr"};
      backpackContents[] = {
        {"CUP_30Rnd_556x45_PMAG_QP",4},
        {"CUP_30Rnd_556x45_PMAG_QP_Tracer_Red",2},
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
        {"ACE_salineIV_250",4},
        {"ACE_salineIV_500",4},
        {"ACE_bloodIV",2},
        {"ACE_personalAidKit",1},
        {"ACE_surgicalKit",1},
        {"ACE_splint",8},
        {"ACE_tourniquet",5}
      };
  };
  class RF: BaseUnit {};
  class UGL: BaseUnit {
    weapons[] = {
      {
        {"CUP_arifle_Mk16_STD_EGLM",
          {"ace_acc_pointer_green","rhsusf_acc_su230","CUP_30Rnd_556x45_PMAG_QP","1Rnd_HE_Grenade_shell"}
        },
        {"CUP_arifle_Mk16_CQC_EGLM",
          {"ace_acc_pointer_green","rhsusf_acc_su230","CUP_30Rnd_556x45_PMAG_QP","1Rnd_HE_Grenade_shell"}
        }
      },
      {"rhsusf_weap_glock17g4",{"rhsusf_mag_17Rnd_9x19_JHP"}}
    };
    vest[] = {"rhsusf_mbav_grenadier"};
      vestContents[] = {
        {"CUP_30Rnd_556x45_PMAG_QP",2},
        {"CUP_30Rnd_556x45_PMAG_QP_Tracer_Red",2},
        {"rhsusf_mag_17Rnd_9x19_JHP",2},
        {"HandGrenade",2},
        {"SmokeShell",2},
        {"Chemlight_green",2},
        {"B_IR_Grenade",1},
        {"cup_muzzle_snds_m16",1},
        {"1Rnd_HE_Grenade_shell",10},
        {"1Rnd_Smoke_Grenade_Shell",2},
        {"ACE_MapTools",1}
      };
      backpackContents[] = {
        {"CUP_30Rnd_556x45_PMAG_QP",4},
        {"CUP_30Rnd_556x45_PMAG_QP_Tracer_Red",2},
        {"HandGrenade",2},
        {"SmokeShell",2},
        {"Chemlight_green",2},
        {"B_IR_Grenade",1},
        {"1Rnd_HE_Grenade_shell",8},
        {"1Rnd_Smoke_Grenade_Shell",2}
      };
  };
  class MGL: BaseUnit {
    weapons[] = {
      {"CUP_glaunch_M32",{"ACE_acc_pointer_green","CUP_6Rnd_HE_M203"}
      },
      {"CUP_hgun_MP7",{"CUP_optic_MicroT1_low","CUP_40Rnd_46x30_MP7"}}
    };
    vest[] = {"rhsusf_mbav_grenadier"};
    vestContents[] = {
      {"CUP_6Rnd_HE_M203",3},
      {"CUP_40Rnd_46x30_MP7",3},
      {"HandGrenade",2},
      {"SmokeShell",2},
      {"Chemlight_green",2},
      {"B_IR_Grenade",1},
      {"ACE_MapTools",1}
    };
    backpackContents[] = {
      {"CUP_6Rnd_HE_M203",5},
      {"CUP_6Rnd_Smoke_M203",2},
      {"CUP_40Rnd_46x30_MP7",3},
      {"HandGrenade",2},
      {"SmokeShell",2},
      {"Chemlight_green",2},
      {"B_IR_Grenade",1}
    };
  };
  class LMG: BaseUnit {
    weapons[] = {
      {
        {"rhs_weap_m249_light_L",
          {"rhsusf_acc_su230","ace_acc_pointer_green","rhsusf_200Rnd_556x45_mixed_soft_pouch_coyote","rhsusf_acc_grip4_bipod"}
        },
        {"rhs_weap_m249_light_S",
            {"rhsusf_acc_su230","ace_acc_pointer_green","rhsusf_200Rnd_556x45_mixed_soft_pouch_coyote","rhsusf_acc_grip4_bipod"}
        }
      },
      {"rhsusf_weap_glock17g4",{"rhsusf_mag_17Rnd_9x19_JHP"}}
    };
    vest[] = {"rhsusf_mbav_mg"};
      vestContents[] = {
        {"rhsusf_200Rnd_556x45_mixed_soft_pouch_coyote",2},
        {"rhsusf_mag_17Rnd_9x19_JHP",2},
        {"HandGrenade",2},
        {"SmokeShell",2},
        {"Chemlight_green",2},
        {"B_IR_Grenade",1},
        {"cup_muzzle_snds_m16",1},
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
  class GPMG: BaseUnit {
    weapons[] = {
      {"rhs_weap_m240G",
          {"rhsusf_acc_su230a","rhsusf_100Rnd_762x51"}
      },
      {"rhsusf_weap_glock17g4",{"rhsusf_mag_17Rnd_9x19_JHP"}}
    };
      vest[] = {"rhsusf_mbav_mg"};
      vestContents[] = {
        {"rhsusf_100Rnd_762x51",1},
        {"rhsusf_100Rnd_762x51_m62_tracer",1},
        {"rhsusf_mag_17Rnd_9x19_JHP",2},
        {"HandGrenade",2},
        {"SmokeShell",2},
        {"Chemlight_green",2},
        {"B_IR_Grenade",1},
        {"ACE_MapTools",1}
      };
      //backpack[]={"rhsusf_falconii_coy"};
      backpackContents[] = {
        {"rhsusf_100Rnd_762x51",1},
        {"rhsusf_100Rnd_762x51_m62_tracer",1},
        {"HandGrenade",2},
        {"SmokeShell",2},
        {"Chemlight_green",2},
        {"B_IR_Grenade",1}
      };
  };
  class DMR: BaseUnit {
    weapons[] = {
      {"rhs_weap_sr25_ec",
        {"rhsusf_acc_su230a","ace_acc_pointer_green","rhsusf_20Rnd_762x51_SR25_m62_Mag"}
      },
      {"rhsusf_weap_glock17g4",{"rhsusf_mag_17Rnd_9x19_JHP"}},
      "RangeFinder"
    };
      vestContents[] = {
        {"rhsusf_20Rnd_762x51_SR25_m118_special_Mag",2},
        {"rhsusf_20Rnd_762x51_SR25_m62_Mag",2},
        {"rhsusf_mag_17Rnd_9x19_JHP",2},
        {"HandGrenade",2},
        {"SmokeShell",2},
        {"Chemlight_green",2},
        {"B_IR_Grenade",1},
        {"rhsusf_acc_aac_762sdn6_silencer",1},
        {"ACE_MapTools",1}
      };
      backpackContents[] = {
        {"rhsusf_20Rnd_762x51_SR25_m118_special_Mag",3},
        {"rhsusf_20Rnd_762x51_SR25_m62_Mag",1},
        {"HandGrenade",2},
        {"SmokeShell",2},
        {"Chemlight_green",2},
        {"B_IR_Grenade",1}
      };
  };
  class MAT: BaseUnit {
    weapons[] = {
      {
        {"rhs_weap_hk416d145",
          {"ace_acc_pointer_green","rhsusf_acc_su230","CUP_30Rnd_556x45_PMAG_QP"}
        },
        {"rhs_weap_hk416d10",
          {"ace_acc_pointer_green","rhsusf_acc_su230","CUP_30Rnd_556x45_PMAG_QP"}
        }
      },
      {"rhsusf_weap_glock17g4",{"rhsusf_mag_17Rnd_9x19_JHP"}},
      {"launch_MRAWS_green_rail_F",{"MRAWS_HEAT55_F"}}
    };

    backpackContents[] = {
      {"CUP_30Rnd_556x45_PMAG_QP",4},
      {"CUP_30Rnd_556x45_PMAG_QP_Tracer_Red",2},
      {"rhsusf_mag_17Rnd_9x19_JHP",2},
      {"HandGrenade",2},
      {"SmokeShell",2},
      {"Chemlight_green",2},
      {"B_IR_Grenade",1},
      {"MRAWS_HEAT55_F",1},
      {"MRAWS_HE_F",1}
    };
  };
  class MATA: BaseUnit {
    backpackContents[] = {
      {"CUP_30Rnd_556x45_PMAG_QP",4},
      {"CUP_30Rnd_556x45_PMAG_QP_Tracer_Red",2},
      {"rhsusf_mag_17Rnd_9x19_JHP",2},
      {"HandGrenade",2},
      {"SmokeShell",2},
      {"Chemlight_green",2},
      {"B_IR_Grenade",1},
      {"MRAWS_HEAT55_F",1},
      {"MRAWS_HE_F",1}
    };
  };
  class PILOT: baseUnit {
    weapons[] = {
      {"rhsusf_weap_MP7A2",
        {"rhsusf_mag_40Rnd_46x30_FMJ","rhsusf_acc_eotech_552","ace_acc_pointer_green"}
      },
      {"rhsusf_weap_glock17g4",
        {"rhsusf_mag_17Rnd_9x19_JHP"}
      }
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
    uniform[] = {"rhs_uniform_g3_tan"};

    vest[] = {"rhsusf_mbav_light"};
    vestContents[] = {
      {"rhsusf_mag_40Rnd_46x30_FMJ",6},
      {"SmokeShellRed",2},
      {"ACRE_PRC148",1},
      {"ACE_MapTools",1},
      {"ACE_MicroDagr",1}
    };
    backpack[] = {"rhsusf_falconii_coy"};
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
      {"rhsusf_assault_eagleaiii_coy",2},
      {"B_Carryall_cbr",2}
    };
  };
  class LargeGearCrate {
    vehCargoWeapons[] = {
      {"rhs_weap_m72a7",10},
      {"ACE_Vector",2}
    };
    vehCargoMagazines[] = {
      {"CUP_30Rnd_556x45_PMAG_QP",32},
      {"CUP_30Rnd_556x45_PMAG_QP_Tracer_Red",16},
      {"rhsusf_200Rnd_556x45_mixed_soft_pouch_coyote",8},
      {"rhsusf_20Rnd_762x51_SR25_m118_special_Mag",8},
      {"rhsusf_20Rnd_762x51_SR25_m62_Mag",4},
      {"rhsusf_100Rnd_762x51_m62_tracer",8},
      {"HandGrenade",16},
      {"SmokeShell",16},
      {"1Rnd_HE_Grenade_shell",20},
      {"DemoCharge_Remote_Mag",16}
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
      {"ACE_salineIV_500",4},
      {"ACE_Flashlight_MX991",4},
      {"ACE_MapTools",4}
    };
    vehCargoRucks[] = {
      {"B_Carryall_cbr",4},
      {"rhsusf_assault_eagleaiii_coy",4}
    };
  };
};
class RHSCUP_BLUFOR_WDL: RHSCUP_BLUFOR_MTP {

  class PL: PL {
    headgear[] = { "rhsusf_opscore_fg_pelt" };
    uniform[] = {"rhs_uniform_g3_m81"};
  };
  class ZEUS: ZEUS {
    headgear[] = { "rhsusf_opscore_fg_pelt" };
    uniform[] = {"rhs_uniform_g3_m81"};
  };
  class TL: TL {
    headgear[] = { "rhsusf_opscore_fg_pelt" };
    uniform[] = {"rhs_uniform_g3_m81"};
  };
  class FSO: FSO {
    headgear[] = { "rhsusf_opscore_fg_pelt" };
    uniform[] = {"rhs_uniform_g3_m81"};
  };
  class MED: MED {
    headgear[] = { "rhsusf_opscore_fg_pelt" };
    uniform[] = {"rhs_uniform_g3_m81"};
  };
  class RF: RF {
    headgear[] = { "rhsusf_opscore_fg_pelt" };
    uniform[] = {"rhs_uniform_g3_m81"};
  };
  class UGL: UGL {
    headgear[] = { "rhsusf_opscore_fg_pelt" };
    uniform[] = {"rhs_uniform_g3_m81"};
  };
  class MGL: MGL {
    headgear[] = { "rhsusf_opscore_fg_pelt" };
    uniform[] = {"rhs_uniform_g3_m81"};
  };
  class LMG: LMG {
    headgear[] = { "rhsusf_opscore_fg_pelt" };
    uniform[] = {"rhs_uniform_g3_m81"};
  };
  class GPMG: GPMG {
    headgear[] = { "rhsusf_opscore_fg_pelt" };
    uniform[] = {"rhs_uniform_g3_m81"};
  };
  class DMR: DMR {
    headgear[] = { "rhsusf_opscore_fg_pelt" };
    uniform[] = {"rhs_uniform_g3_m81"};
  };
  class MAT: MAT {
    headgear[] = { "rhsusf_opscore_fg_pelt" };
    uniform[] = {"rhs_uniform_g3_m81"};
  };
  class MATA: MATA {
    headgear[] = { "rhsusf_opscore_fg_pelt" };
    uniform[] = {"rhs_uniform_g3_m81"};
  };
  class PILOT: PILOT {
    uniform[] = {"rhs_uniform_g3_rgr"};
  };

};
