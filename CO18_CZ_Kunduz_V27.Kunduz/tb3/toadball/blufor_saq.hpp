class BLUFOR_SAQ {
  class BaseUnit {
    allowPlayerGoggles = 0;
    ace_medic = 1;
    weapons[] = {
      {"rhs_weap_hk416d10",
        {"rhsusf_acc_anpeq15_bk_light","rhsusf_acc_rvg_blk","rhsusf_acc_rotex5_grey","rhsusf_acc_su230","rhs_mag_30Rnd_556x45_M855A1_PMAG"}
      },
      {"rhsusf_weap_glock17g4",{"rhsusf_mag_17Rnd_9x19_JHP"}}
    };
    priKit[] = {};
    secKit[] = {};
    pisKit[] = {};

    assignedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemGPS","NVGoggles_INDEP"};

    headgear[] = {"rhsusf_opscore_fg_pelt"};
    goggles[] = {"G_B_Diving"};
    uniform[] = {"U_I_Wetsuit"};
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
      {"rhsusf_mag_17Rnd_9x19_JHP",4},
      {"ACE_Flashlight_MX991",1},
      {"ACRE_PRC343",1}
    };

    vest[] = {"V_RebreatherIA"};
    vestContents[] = { };

    backpack[] = {"B_ViperHarness_blk_F"};
    backpackContents[] = {
      {"rhs_mag_30Rnd_556x45_M855A1_PMAG",8},
      {"rhs_mag_30Rnd_556x45_M855A1_PMAG_Tracer_Red",4},
      {"HandGrenade",4},
      {"SmokeShell",2},
      {"Chemlight_green",2},
      {"B_IR_Grenade",1},
      {"ACE_MapTools",1},
      {"rhs_mag_100Rnd_556x45_M855A1_cmag_mixed",1}
    };

    magazines[] = {}; items[] = {};
  };
  class PL: BaseUnit {
    weapons[] = {
      {"rhs_weap_hk416d10",
        {"rhsusf_acc_anpeq15_bk_light","rhsusf_acc_rvg_blk","rhsusf_acc_rotex5_grey","rhsusf_acc_su230","rhs_mag_30Rnd_556x45_M855A1_PMAG"}
      },
      {"rhsusf_weap_glock17g4",{"rhsusf_mag_17Rnd_9x19_JHP"}},
      "ACE_Vector"
    };
    backpackContents[] = {
      {"rhs_mag_30Rnd_556x45_M855A1_PMAG",8},
      {"rhs_mag_30Rnd_556x45_M855A1_PMAG_Tracer_Red",4},
      {"HandGrenade",4},
      {"SmokeShell",2},
      {"Chemlight_green",2},
      {"ace_IR_strobe_item",1},
      {"ACRE_PRC148",1},
      {"itc_land_tablet_rover",1},
      {"ACE_MapTools",1},
      {"ACE_MicroDagr",1},
      {"rhs_mag_100Rnd_556x45_M855A1_cmag_mixed",1}
    };
  };
  class ZEUS: PL {
    assignedItems[] = {"ItemMap","ItemCompass","ItemWatch","B_UavTerminal","NVGoggles_INDEP"};
  };
  class TL: PL {};
  class FSO: PL {
    backpackContents[] = {
      {"rhs_mag_30Rnd_556x45_M855A1_PMAG",8},
      {"rhs_mag_30Rnd_556x45_M855A1_PMAG_Tracer_Red",4},
      {"HandGrenade",4},
      {"SmokeShell",2},
      {"Chemlight_green",2},
      {"ace_IR_strobe_item",1},
      {"ACRE_PRC148",2},
      {"itc_land_tablet_rover",1},
      {"ACE_MapTools",1},
      {"ACE_MicroDagr",1}
    };
    assignedItems[] = {"ItemMap","ItemCompass","ItemWatch","B_UavTerminal","NVGoggles_INDEP"};
  };
  class MED: BaseUnit {
    ace_medic = 2;
    backpackContents[] = {
      {"rhs_mag_30Rnd_556x45_M855A1_PMAG",4},
      {"rhs_mag_30Rnd_556x45_M855A1_PMAG_Tracer_Red",2},
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
  class RF: BaseUnit {};
  class UGL: BaseUnit {
    weapons[] = {
      {"rhs_weap_hk416d10_m320",
        {"rhsusf_acc_anpeq15_bk_light","rhsusf_acc_rotex5_grey","rhsusf_acc_su230","rhs_mag_30Rnd_556x45_M855A1_PMAG","1Rnd_HE_Grenade_shell"}
      },
      {"rhsusf_weap_glock17g4",{"rhsusf_mag_17Rnd_9x19_JHP"}}
    };
    backpackContents[] = {
      {"rhs_mag_30Rnd_556x45_M855A1_PMAG",6},
      {"rhs_mag_30Rnd_556x45_M855A1_PMAG_Tracer_Red",3},
      {"1Rnd_HE_Grenade_shell",14},
      {"1Rnd_Smoke_Grenade_Shell",4},
      {"HandGrenade",4},
      {"SmokeShell",2},
      {"Chemlight_green",2},
      {"B_IR_Grenade",1},
      {"ACE_MapTools",1}
    };
  };
  class LMG: BaseUnit {
    weapons[] = {
      {"rhs_weap_m27iar",
        {"rhsusf_acc_rotex5_grey","rhsusf_acc_su230","rhsusf_acc_anpeq15_bk_light_h","rhs_mag_100Rnd_556x45_M855A1_cmag_mixed","rhsusf_acc_grip1"}
      },
      {"rhsusf_weap_glock17g4",{"rhsusf_mag_17Rnd_9x19_JHP"}}
    };
    backpackContents[] = {
      {"rhs_mag_100Rnd_556x45_M855A1_cmag_mixed",6},
      {"HandGrenade",4},
      {"SmokeShell",2},
      {"Chemlight_green",2},
      {"B_IR_Grenade",1},
      {"ACE_MapTools",1}
    };
  };
  class GPMG: LMG {};
  class DMR: BaseUnit {};
  class MAT: UGL {};
  class MATA: BaseUnit {};
  class PILOT: baseUnit {
    weapons[] = {
      {"rhsusf_weap_MP7A2",{"rhsusf_mag_40Rnd_46x30_FMJ","rhsusf_acc_eotech_552_d","rhsusf_acc_anpeq15side_bk"}},
      {"rhsusf_weap_glock17g4",{"rhsusf_mag_17Rnd_9x19_JHP"}}
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
    uniform[] = {"rhs_uniform_g3_rgr"};
    vest[] = {"V_CarrierRigKBT_01_light_Olive_F"};

    vestContents[] = {
      {"rhsusf_mag_40Rnd_46x30_FMJ",6},
      {"SmokeShellRed",2},
      {"ACRE_PRC148",1},
      {"ACE_MapTools",1},
      {"ACE_MicroDagr",1}
    };
    backpack[] = {
      "rhsusf_falconii_coy"
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
      {"rhs_mag_30Rnd_556x45_M855A1_PMAG",32},
      {"rhs_mag_30Rnd_556x45_M855A1_PMAG_Tracer_Red",16},
      {"rhs_mag_100Rnd_556x45_M855A1_cmag_mixed",8},
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
