class BLUFOR_SAQCN {
  class BaseUnit {
    allowPlayerGoggles = 0;
    ace_medic = 1;
    weapons[] = {
      {"arifle_CTAR_blk_F",
        {"rhsusf_acc_su230","30Rnd_580x42_Mag_F","muzzle_snds_58_blk_f"}
      },
      {"hgun_Rook40_F",{"16Rnd_9x21_Mag"}}
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
      {"16Rnd_9x21_Mag",4},
      {"ACE_Flashlight_MX991",1},
      {"ACRE_PRC343",1}
    };

    vest[] = {"V_RebreatherIA"};
    vestContents[] = { };

    backpack[] = {"B_ViperHarness_blk_F"};
    backpackContents[] = {
      {"30Rnd_580x42_Mag_F",8},
      {"30Rnd_580x42_Mag_Tracer_F",4},
      {"HandGrenade",4},
      {"SmokeShell",2},
      {"Chemlight_green",2},
      {"B_IR_Grenade",1},
      {"ACE_MapTools",1},
      {"100Rnd_580x42_Mag_Tracer_F",2}
    };

    magazines[] = {}; items[] = {};
  };
  class PL: BaseUnit {
    weapons[] = {
      {"arifle_CTAR_blk_F",
        {"rhsusf_acc_su230","30Rnd_580x42_Mag_F","muzzle_snds_58_blk_f","ace_acc_pointer_green_ir"}
      },
      {"hgun_Rook40_F",{"16Rnd_9x21_Mag"}},
      "ACE_Vector"
    };
    backpackContents[] = {
      {"30Rnd_580x42_Mag_F",8},
      {"30Rnd_580x42_Mag_Tracer_F",4},
      {"HandGrenade",4},
      {"SmokeShell",2},
      {"Chemlight_green",2},
      {"ace_IR_strobe_item",1},
      {"ACRE_PRC148",1},
      {"itc_land_tablet_rover",1},
      {"ACE_MapTools",1},
      {"ACE_MicroDagr",1},
      {"100Rnd_580x42_Mag_Tracer_F",2}
    };
  };
  class ZEUS: PL {
    assignedItems[] = {"ItemMap","ItemCompass","ItemWatch","B_UavTerminal","NVGoggles_INDEP"};
  };
  class TL: PL {};
  class FSO: PL {
    backpackContents[] = {
      {"30Rnd_580x42_Mag_F",8},
      {"30Rnd_580x42_Mag_Tracer_F",4},
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
      {"30Rnd_580x42_Mag_F",4},
      {"30Rnd_580x42_Mag_Tracer_F",2},
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
      {"arifle_CTAR_GL_blk_F",
        {"rhsusf_acc_su230","30Rnd_580x42_Mag_F","1Rnd_HE_Grenade_shell","muzzle_snds_58_blk_f","ace_acc_pointer_green_ir"}
      },
      {"hgun_Rook40_F",{"16Rnd_9x21_Mag"}}
    };
    backpackContents[] = {
      {"30Rnd_580x42_Mag_F",6},
      {"30Rnd_580x42_Mag_Tracer_F",3},
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
      {"arifle_CTARS_blk_F",
          {"rhsusf_acc_su230","100Rnd_580x42_Mag_F","muzzle_snds_58_blk_f","ace_acc_pointer_green_ir"}
      },
      {"hgun_Rook40_F",{"16Rnd_9x21_Mag"}}
    };
    backpackContents[] = {
      {"100Rnd_580x42_Mag_F",4},
      {"100Rnd_580x42_Mag_Tracer_F",2},
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
      {"B_Carryall_green_F",4},
      {"rhs_assault_umbts",4}
    };
  };
  class LargeGearCrate {
    vehCargoWeapons[] = {
      {"rhs_weap_m72a7",10},
      {"ACE_Vector",2}
    };
    vehCargoMagazines[] = {
      {"30Rnd_580x42_Mag_F",32},
      {"30Rnd_580x42_Mag_Tracer_F",16},
      {"100Rnd_580x42_Mag_F",8},
      {"100Rnd_580x42_Mag_Tracer_F",8},
      {"20Rnd_650x39_Cased_Mag_F",12},
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
      {"B_Carryall_green_F",4},
      {"rhs_assault_umbts",4}
    };
  };
};
