class BLUFOR_AOR2CN {
  class BaseUnit {
    allowPlayerGoggles = 0;
    ace_medic = 1;
    weapons[] = {
      {"arifle_CTAR_blk_F",
        {"rhsusf_acc_su230","30Rnd_580x42_Mag_F"}
      },
      {"hgun_Rook40_F",{"16Rnd_9x21_Mag"}}
    };
    priKit[] = {};
    secKit[] = {};
    pisKit[] = {};

    assignedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemGPS","rhsusf_ANPVS_15"};

    headgear[] = {
      "rhsusf_opscore_aor2_pelt"
    };
    goggles[] = {
      "G_Combat",
      "G_Combat_Goggles_tna_F",
      "G_Tactical_Clear"
    };
    uniform[] = {"rhs_uniform_g3_aor2"};

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
        {"30Rnd_580x42_Mag_F",4},
        {"30Rnd_580x42_Mag_Tracer_F",2},
        {"16Rnd_9x21_Mag",2},
        {"HandGrenade",2},
        {"SmokeShell",2},
        {"Chemlight_green",2},
        {"B_IR_Grenade",1},
        {"muzzle_snds_58_blk_f",1},
        {"ACE_MapTools",1}
      };

    backpack[] = {"rhs_assault_umbts"};
      backpackContents[] = {
        {"30Rnd_580x42_Mag_F",4},
        {"30Rnd_580x42_Mag_Tracer_F",2},
        {"16Rnd_9x21_Mag",2},
        {"HandGrenade",2},
        {"SmokeShell",2},
        {"Chemlight_green",2},
        {"B_IR_Grenade",1},
        {"100Rnd_580x42_Mag_F",2}
      };

    magazines[] = {}; items[] = {};
  };
  class PL: BaseUnit {
    weapons[] = {
      {"arifle_CTAR_blk_F",
        {"rhsusf_acc_su230","30Rnd_580x42_Mag_F"}
      },
      {"hgun_Rook40_F",{"16Rnd_9x21_Mag"}},
      "ACE_Vector"
    };
    assignedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemGPS","rhsusf_ANPVS_15"};

    vestContents[] = {
      {"30Rnd_580x42_Mag_F",4},
      {"30Rnd_580x42_Mag_Tracer_F",2},
      {"16Rnd_9x21_Mag",2},
      {"HandGrenade",2},
      {"SmokeShell",2},
      {"Chemlight_green",2},
      {"B_IR_Grenade",1},
      {"ace_IR_strobe_item",1},
      {"ACRE_PRC148",1},
      {"muzzle_snds_58_blk_f",1},
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
      {"30Rnd_580x42_Mag_F",4},
      {"30Rnd_580x42_Mag_Tracer_F",2},
      {"16Rnd_9x21_Mag",2},
      {"HandGrenade",2},
      {"SmokeShell",2},
      {"Chemlight_green",2},
      {"B_IR_Grenade",1},
      {"ace_IR_strobe_item",1},
      {"ACRE_PRC148",1},
      {"muzzle_snds_58_blk_f",1},
      {"ACE_MapTools",1},
      {"ACE_MicroDagr",1}
    };
    backpack[] = {"ITC_Land_b_uav_backpack"};
    assignedItems[] = {"ItemMap","ItemCompass","ItemWatch","B_UavTerminal","rhsusf_ANPVS_15"};
      backpackContents[] = {
        {"30Rnd_580x42_Mag_F",4},
        {"30Rnd_580x42_Mag_Tracer_F",2},
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
        {"rhsusf_acc_su230","30Rnd_580x42_Mag_F","1Rnd_HE_Grenade_shell"}
      },
      {"hgun_Rook40_F",{"16Rnd_9x21_Mag"}}
    };
      vestContents[] = {
        {"30Rnd_580x42_Mag_F",2},
        {"30Rnd_580x42_Mag_Tracer_F",2},
        {"16Rnd_9x21_Mag",2},
        {"HandGrenade",2},
        {"SmokeShell",2},
        {"Chemlight_green",2},
        {"B_IR_Grenade",1},
        {"muzzle_snds_58_blk_f",1},
        {"1Rnd_HE_Grenade_shell",6},
        {"1Rnd_Smoke_Grenade_Shell",2},
        {"ACE_MapTools",1}
      };
      backpackContents[] = {
        {"30Rnd_580x42_Mag_F",4},
        {"30Rnd_580x42_Mag_Tracer_F",2},
        {"HandGrenade",2},
        {"SmokeShell",2},
        {"Chemlight_green",2},
        {"B_IR_Grenade",1},
        {"1Rnd_HE_Grenade_shell",16},
        {"1Rnd_Smoke_Grenade_Shell",4}
      };
  };
  class LMG: BaseUnit {
    weapons[] = {
      {"arifle_CTARS_blk_F",
          {"rhsusf_acc_su230","100Rnd_580x42_Mag_F"}
      },
      {"hgun_Rook40_F",{"16Rnd_9x21_Mag"}}
    };
      vestContents[] = {
        {"100Rnd_580x42_Mag_F",2},
        {"100Rnd_580x42_Mag_Tracer_F",2},
        {"16Rnd_9x21_Mag",2},
        {"HandGrenade",2},
        {"SmokeShell",2},
        {"Chemlight_green",2},
        {"B_IR_Grenade",1},
        {"muzzle_snds_58_blk_f",1},
        {"ACE_MapTools",1}
      };
      backpackContents[] = {
        {"100Rnd_580x42_Mag_F",2},
        {"100Rnd_580x42_Mag_Tracer_F",2},
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
      {"hgun_Rook40_F",{"16Rnd_9x21_Mag"}}
    };
    vest[] = {"rhsusf_plateframe_machinegunner"};
      vestContents[] = {
        {"rhsusf_100Rnd_762x51",1},
        {"rhsusf_100Rnd_762x51_m62_tracer",1},
        {"16Rnd_9x21_Mag",2},
        {"HandGrenade",2},
        {"SmokeShell",2},
        {"Chemlight_green",2},
        {"B_IR_Grenade",1},
        {"ACE_MapTools",1}
      };
      backpack[]={"rhsusf_falconii_coy"};
      backpackContents[] = {
        {"HandGrenade",2},
        {"SmokeShell",2},
        {"Chemlight_green",2},
        {"B_IR_Grenade",1}
      };
  };
  class DMR: BaseUnit {
    weapons[] = {
      {"srifle_DMR_07_blk_F",
        {"rhsusf_acc_su230a","20Rnd_650x39_Cased_Mag_F"}
      },
      {"hgun_Rook40_F",{"16Rnd_9x21_Mag"}},
      "RangeFinder"
    };
      vestContents[] = {
        {"20Rnd_650x39_Cased_Mag_F",5},
        {"16Rnd_9x21_Mag",2},
        {"HandGrenade",2},
        {"SmokeShell",2},
        {"Chemlight_green",2},
        {"B_IR_Grenade",1},
        {"muzzle_snds_65_ti_blk_f",1},
        {"ACE_MapTools",1}
      };
      backpackContents[] = {
        {"20Rnd_650x39_Cased_Mag_F",5},
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
          {"rhsusf_acc_anpeq15_bk_light","rhsusf_acc_su230","30Rnd_580x42_Mag_F"}
        },
        {"rhs_weap_hk416d10",
          {"rhsusf_acc_anpeq15_bk_light","rhsusf_acc_su230","30Rnd_580x42_Mag_F"}
        }
      },
      {"hgun_Rook40_F",{"16Rnd_9x21_Mag"}},
      {"launch_MRAWS_green_rail_F",{"MRAWS_HEAT55_F"}}
    };

    backpackContents[] = {
      {"30Rnd_580x42_Mag_F",4},
      {"30Rnd_580x42_Mag_Tracer_F",2},
      {"16Rnd_9x21_Mag",2},
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
      {"30Rnd_580x42_Mag_F",4},
      {"30Rnd_580x42_Mag_Tracer_F",2},
      {"16Rnd_9x21_Mag",2},
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
      "rhs_uniform_g3_tan",
    };
    vest[] = {
      "rhsusf_mbav_light",
    };
    vestContents[] = {
      {"rhsusf_mag_40Rnd_46x30_FMJ",6},
      {"SmokeShellRed",2},
      {"ACRE_PRC148",1},
      {"ACE_MapTools",1},
      {"ACE_MicroDagr",1}
    };
    backpack[] = {
      "rhsusf_falconii_coy","rhsusf_falconii_mc"
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
      {"30Rnd_580x42_Mag_F",20},
      {"30Rnd_580x42_Mag_Tracer_F",20},
      {"rhsusf_200Rnd_556x45_mixed_soft_pouch_coyote",12},
      {"rhsusf_20Rnd_762x51_SR25_m118_special_Mag",3},
      {"rhsusf_20Rnd_762x51_SR25_m62_Mag",3},
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
        }
      },
      {"B_Carryall_green_F",2,{
          {"30Rnd_580x42_Mag_F",6},
          {"30Rnd_580x42_Mag_Tracer_F",2},
          {"HandGrenade",2},
          {"SmokeShell",2},
          {"rhsusf_200Rnd_556x45_mixed_soft_pouch_coyote",2}
        }
      },
      {"rhs_assault_umbts",4}
    };
  };
};
