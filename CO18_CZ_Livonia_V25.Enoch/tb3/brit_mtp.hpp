class BRIT_MTP {
  class BaseUnit {
    allowPlayerGoggles = 1;
    ace_medic = 1;
    weapons[] = {
        {"arifle_SA80_snd_F",
          {"acc_pointer_ir","optic_arco","30Rnd_65x39_caseless_mag"}
        },
      {"hgun_G17_F",{"17Rnd_9x21_Mag"}}
    };
    priKit[] = {};
    secKit[] = {};
    pisKit[] = {};

    assignedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemGPS","NVGoggles"};

    headgear[] = {
      "H_HelmetB_ubacs_mtp_F",
	  "H_HelmetB_Enh_ubacs_mtp_F",
	  "H_HelmetB_Heavy_ubacs_mtp_F",
	  "H_HelmetB_Camo_ubacs_mtp_F",
	  "H_HelmetB_Camo_ubacs_mtp_F",
	  "H_HelmetB_Camo_ubacs_mtp_F"
    };
    goggles[] = {
      "G_Combat",
      "G_Combat_Goggles_tna_F",
      "G_Tactical_Clear"
    };

    uniform[] = {"U_B_UBACS_mtp_f","U_B_UBACS_vest_mtp_f"};
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

    vest[] = {"V_CarrierRigKBT_01_light_Coyote_F"};

      vestContents[] = {
        {"30Rnd_65x39_caseless_mag",4},
        {"30Rnd_65x39_caseless_mag_Tracer",2},
        {"17Rnd_9x21_Mag",2},
        {"HandGrenade",2},
        {"SmokeShell",2},
        {"Chemlight_green",2},
        {"ACE_MapTools",1}
      };

    backpack[] = {"B_AssaultPack_cbr"};
      backpackContents[] = {
        {"30Rnd_65x39_caseless_mag",6},
        {"30Rnd_65x39_caseless_mag_Tracer",2},
        {"17Rnd_9x21_Mag",2},
        {"HandGrenade",2},
        {"SmokeShell",2},
        {"Chemlight_green",2}
      };

    magazines[] = {}; items[] = {};
  };
  class PL: BaseUnit {
    weapons[] = {
        {"arifle_SA80_snd_F",
          {"acc_pointer_ir","optic_arco","30Rnd_65x39_caseless_mag"}
        },
      {"rhsusf_weap_glock17g4",{"17Rnd_9x21_Mag"}},
      "RangeFinder"
    };
    assignedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemGPS","NVGoggles"};

    vestContents[] = {
      {"30Rnd_65x39_caseless_mag",4},
      {"30Rnd_65x39_caseless_mag_Tracer",2},
      {"17Rnd_9x21_Mag",2},
      {"HandGrenade",2},
      {"SmokeShell",2},
      {"Chemlight_green",2},
      {"ace_IR_strobe_item",1},
      {"ACRE_PRC148",1},
      {"itc_land_tablet_rover",1},
      {"ACE_MapTools",1}
    };
  };
  class ZEUS: PL {
    assignedItems[] = {"ItemMap","ItemCompass","ItemWatch","B_UavTerminal","NVGoggles"};
  };
  class TL: PL {};
  class RF: BaseUnit {};
  class UGL: BaseUnit {
    weapons[] = {
        {"arifle_SA80_GL_snd_F",
          {"acc_pointer_ir","optic_arco","30Rnd_65x39_caseless_mag","1Rnd_HE_Grenade_shell"}
        },
      {"rhsusf_weap_glock17g4",{"17Rnd_9x21_Mag"}}
    };
      vestContents[] = {
        {"30Rnd_65x39_caseless_mag",2},
        {"30Rnd_65x39_caseless_mag_Tracer",2},
        {"17Rnd_9x21_Mag",2},
        {"HandGrenade",2},
        {"SmokeShell",2},
        {"Chemlight_green",2},
        {"1Rnd_HE_Grenade_shell",10},
        {"1Rnd_Smoke_Grenade_Shell",2},
        {"ACE_MapTools",1}
      };
      backpackContents[] = {
        {"30Rnd_65x39_caseless_mag",4},
        {"30Rnd_65x39_caseless_mag_Tracer",2},
        {"HandGrenade",2},
        {"SmokeShell",2},
        {"Chemlight_green",2},
        {"B_IR_Grenade",1},
        {"1Rnd_HE_Grenade_shell",8},
        {"1Rnd_Smoke_Grenade_Shell",2}
      };
  };
  class UAV: BaseUnit {
    vestContents[] = {
      {"30Rnd_65x39_caseless_mag",4},
      {"30Rnd_65x39_caseless_mag_Tracer",2},
      {"17Rnd_9x21_Mag",2},
      {"HandGrenade",2},
      {"SmokeShell",2},
      {"Chemlight_green",2},
      {"ace_IR_strobe_item",1},
      {"ACRE_PRC148",1},
      {"ACE_MapTools",1}
    };
    backpack[] = {"itc_land_b_uav_backpack"};
    assignedItems[] = {"ItemMap","ItemCompass","ItemWatch","B_UavTerminal","NVGoggles"};
      backpackContents[] = {
        {"30Rnd_65x39_caseless_mag",4},
        {"30Rnd_65x39_caseless_mag_Tracer",2},
        {"HandGrenade",2},
        {"SmokeShell",2},
        {"Chemlight_green",2},
        {"ace_IR_strobe_item",1},
        {"itc_land_b_ar2i_packed",2},
        {"ace_uavbattery",2}
      };
  };
	class FSO: UAV {};
  class MED: BaseUnit {
    ace_medic = 2;
    backpack[] = {"B_Carryall_cbr"};
      backpackContents[] = {
        {"30Rnd_65x39_caseless_mag",4},
        {"30Rnd_65x39_caseless_mag_Tracer",2},
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
        {"ACE_personalAidKit",1},
        {"ACE_surgicalKit",1},
        {"ACE_splint",8},
        {"ACE_tourniquet",5}
      };
  };

  class LMG: BaseUnit {
    weapons[] = {
      {"LMG_Mk200_plain_F",
          {"optic_arco","acc_pointer_ir","200Rnd_65x39_cased_Box_Red"}
      },
      {"rhsusf_weap_glock17g4",{"17Rnd_9x21_Mag"}}
    };
      vestContents[] = {
        {"200Rnd_65x39_cased_Box_Red",2},
        {"17Rnd_9x21_Mag",2},
        {"HandGrenade",2},
        {"SmokeShell",2},
        {"Chemlight_green",2},
        {"ACE_MapTools",1}
      };
      backpackContents[] = {
        {"200Rnd_65x39_cased_Box_Red",2},
        {"HandGrenade",2},
        {"SmokeShell",2},
        {"Chemlight_green",2}
      };
  };
  class DMR: BaseUnit {
    weapons[] = {
      {"arifle_SPAR_03_snd_F",
        {"optic_sos","acc_pointer_ir","bipod_01_f_snd","20Rnd_762x51_Mag"}
      },
      {"rhsusf_weap_glock17g4",{"17Rnd_9x21_Mag"}},
      "RangeFinder"
    };
      vestContents[] = {
        {"20Rnd_762x51_Mag",4},
        {"17Rnd_9x21_Mag",2},
        {"HandGrenade",2},
        {"SmokeShell",2},
        {"Chemlight_green",2},
        {"ACE_MapTools",1}
      };
      backpackContents[] = {
        {"20Rnd_762x51_Mag",6},
        {"HandGrenade",2},
        {"SmokeShell",2},
        {"Chemlight_green",2}
      };
  };

	class PILOT: baseUnit {
		weapons[] = {
      {"rhsusf_weap_MP7A2",{"rhsusf_mag_40Rnd_46x30_FMJ","rhsusf_acc_eotech_552_d","rhsusf_acc_anpeq15side_bk"}},
      {"rhsusf_weap_glock17g4",{"17Rnd_9x21_Mag"}}
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
      {"ACE_MapTools",1}
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
      {"B_AssaultPack_cbr",2},
      {"B_Carryall_cbr",2}
    };
  };

  class LargeGearCrate {
    vehCargoWeapons[] = {
      {"rhs_weap_m72a7",10},
      {"ACE_Vector",2}
    };
    vehCargoMagazines[] = {
      {"30Rnd_65x39_caseless_mag",20},
      {"30Rnd_65x39_caseless_mag_Tracer",20},
      {"200Rnd_65x39_cased_Box_Red",12},
      {"rhsusf_20Rnd_762x51_SR25_m118_special_Mag",3},
      {"20Rnd_762x51_Mag",3},
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
      {"B_Carryall_cbr",2,{
          {"200Rnd_65x39_cased_Box_Red",4},
          {"HandGrenade",2},
          {"SmokeShell",2}
        }
      },
      {"B_Carryall_cbr",1,{
          {"30Rnd_65x39_caseless_mag",4},
          {"30Rnd_65x39_caseless_mag_Tracer",2},
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
          {"ACE_personalAidKit",1},
          {"ACE_surgicalKit",1},
          {"ACE_splint",8},
          {"ACE_tourniquet",5}
        }
      },
      {"B_Carryall_cbr",2,{
          {"30Rnd_65x39_caseless_mag",6},
          {"30Rnd_65x39_caseless_mag_Tracer",2},
          {"HandGrenade",2},
          {"SmokeShell",2},
          {"200Rnd_65x39_cased_Box_Red",2}
        }
      },
      {"B_AssaultPack_cbr",4}
    };
  };
};