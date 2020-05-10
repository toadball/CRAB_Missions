class BLUFOR_MTP {
  class BaseUnit {
    allowPlayerGoggles = 1;
    ace_medic = 1;
    weapons[] = {
      {
        {"rhs_weap_hk416d145",
          {"rhsusf_acc_anpeq15_bk_light","rhsusf_acc_su230","rhs_mag_30Rnd_556x45_M855A1_PMAG"}
        },
        {"rhs_weap_hk416d10",
          {"rhsusf_acc_anpeq15_bk_light","rhsusf_acc_su230","rhs_mag_30Rnd_556x45_M855A1_PMAG"}
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

    vest[] = {"rhsusf_plateframe_rifleman"};

      vestContents[] = {
        {"rhs_mag_30Rnd_556x45_M855A1_PMAG",4},
        {"rhs_mag_30Rnd_556x45_M855A1_PMAG_Tracer_Red",2},
        {"rhsusf_mag_17Rnd_9x19_JHP",2},
        {"HandGrenade",2},
        {"SmokeShell",2},
        {"Chemlight_green",2},
        {"B_IR_Grenade",1},
        {"rhsusf_acc_nt4_black",1}
      };

    backpack[] = {"rhsusf_assault_eagleaiii_coy"};
      backpackContents[] = {
        {"rhs_mag_30Rnd_556x45_M855A1_PMAG",6},
        {"rhs_mag_30Rnd_556x45_M855A1_PMAG_Tracer_Red",2},
        {"rhsusf_mag_17Rnd_9x19_JHP",2},
        {"HandGrenade",2},
        {"SmokeShell",2},
        {"Chemlight_green",2},
        {"B_IR_Grenade",1}
      };

    magazines[] = {}; items[] = {};
  };
  class PL: BaseUnit {
    vest[] = {"rhsusf_plateframe_teamleader"};
    weapons[] = {
      {
          {"rhs_weap_hk416d145",
              {"rhsusf_acc_anpeq15_bk_light","rhsusf_acc_su230","rhs_mag_30Rnd_556x45_M855A1_PMAG"}
          },
          {"rhs_weap_hk416d10",
              {"rhsusf_acc_anpeq15_bk_light","rhsusf_acc_su230","rhs_mag_30Rnd_556x45_M855A1_PMAG"}
          }
      },
      {"rhsusf_weap_glock17g4",{"rhsusf_mag_17Rnd_9x19_JHP"}},
      "RangeFinder"
    };
    assignedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemGPS","rhsusf_ANPVS_15"};

    vestContents[] = {
      {"rhs_mag_30Rnd_556x45_M855A1_PMAG",4},
      {"rhs_mag_30Rnd_556x45_M855A1_PMAG_Tracer_Red",2},
      {"rhsusf_mag_17Rnd_9x19_JHP",2},
      {"HandGrenade",2},
      {"SmokeShell",2},
      {"Chemlight_green",2},
      {"B_IR_Grenade",1},
      {"ace_IR_strobe_item",1},
      {"ACRE_PRC148",1},
      {"rhsusf_acc_nt4_black",1},
      {"itc_land_tablet_rover",1}
    };
  };
  class ZEUS: PL {
    assignedItems[] = {"ItemMap","ItemCompass","ItemWatch","B_UavTerminal","rhsusf_ANPVS_15"};
  };
  class TL: PL {};
  class RF: BaseUnit {};
  class UGL: BaseUnit {
    weapons[] = {
      {
        {"rhs_weap_hk416d145_m320",
          {"rhsusf_acc_anpeq15_bk_light","rhsusf_acc_su230","rhs_mag_30Rnd_556x45_M855A1_PMAG","1Rnd_HE_Grenade_shell"}
        },
        {"rhs_weap_hk416d10_m320",
          {"rhsusf_acc_anpeq15_bk_light","rhsusf_acc_su230","rhs_mag_30Rnd_556x45_M855A1_PMAG","1Rnd_HE_Grenade_shell"}
        }
      },
      {"rhsusf_weap_glock17g4",{"rhsusf_mag_17Rnd_9x19_JHP"}}
    };
    vest[] = {"rhsusf_plateframe_grenadier"};
      vestContents[] = {
        {"rhs_mag_30Rnd_556x45_M855A1_PMAG",2},
        {"rhs_mag_30Rnd_556x45_M855A1_PMAG_Tracer_Red",2},
        {"rhsusf_mag_17Rnd_9x19_JHP",2},
        {"HandGrenade",2},
        {"SmokeShell",2},
        {"Chemlight_green",2},
        {"B_IR_Grenade",1},
        {"rhsusf_acc_nt4_black",1},
        {"1Rnd_HE_Grenade_shell",10},
        {"1Rnd_Smoke_Grenade_Shell",2}
      };
      backpackContents[] = {
        {"rhs_mag_30Rnd_556x45_M855A1_PMAG",4},
        {"rhs_mag_30Rnd_556x45_M855A1_PMAG_Tracer_Red",2},
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
      {"rhs_mag_30Rnd_556x45_M855A1_PMAG",4},
      {"rhs_mag_30Rnd_556x45_M855A1_PMAG_Tracer_Red",2},
      {"rhsusf_mag_17Rnd_9x19_JHP",2},
      {"HandGrenade",2},
      {"SmokeShell",2},
      {"Chemlight_green",2},
      {"B_IR_Grenade",1},
      {"ace_IR_strobe_item",1},
      {"ACRE_PRC148",1},
      {"rhsusf_acc_nt4_black",1}
    };
    backpack[] = {"itc_land_b_uav_backpack"};
    assignedItems[] = {"ItemMap","ItemCompass","ItemWatch","B_UavTerminal","rhsusf_ANPVS_15"};
      backpackContents[] = {
        {"rhs_mag_30Rnd_556x45_M855A1_PMAG",4},
        {"rhs_mag_30Rnd_556x45_M855A1_PMAG_Tracer_Red",2},
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
    vest[] = {"rhsusf_plateframe_medic"};
    backpack[] = {"B_Carryall_cbr"};
      backpackContents[] = {
        {"rhs_mag_30Rnd_556x45_M855A1_PMAG",4},
        {"rhs_mag_30Rnd_556x45_M855A1_PMAG_Tracer_Red",2},
        {"HandGrenade",2},
        {"SmokeShell",2},
        {"Chemlight_green",2},
        {"B_IR_Grenade",1},
        {"ACE_fieldDressing",20},
        {"ACE_packingBandage",20},
        {"ACE_quikclot",20},
        {"ACE_elasticBandage",20},
        {"ACE_morphine",20},
        {"ACE_epinephrine",20},
        {"ACE_adenosine",20},
        {"ACE_salineIV_250",4},
        {"ACE_bloodIV",4},
        {"ACE_personalAidKit",1},
        {"ACE_splint",8},
        {"ACE_tourniquet",5}
      };
  };

  class LMG: BaseUnit {
    weapons[] = {
      {"rhs_weap_m249_pip_L",
          {"rhsusf_acc_su230","rhsusf_acc_anpeq15_bk_light","rhsusf_200Rnd_556x45_mixed_soft_pouch_coyote"}
      },
      {"rhsusf_weap_glock17g4",{"rhsusf_mag_17Rnd_9x19_JHP"}}
    };
    vest[] = {"rhsusf_plateframe_machinegunner"};
      vestContents[] = {
        {"rhsusf_200Rnd_556x45_mixed_soft_pouch_coyote",2},
        {"rhsusf_mag_17Rnd_9x19_JHP",2},
        {"HandGrenade",2},
        {"SmokeShell",2},
        {"Chemlight_green",2},
        {"B_IR_Grenade",1},
        {"rhsusf_acc_nt4_black",1}
      };
      backpackContents[] = {
        {"rhsusf_200Rnd_556x45_mixed_soft_pouch_coyote",2},
        {"HandGrenade",2},
        {"SmokeShell",2},
        {"Chemlight_green",2},
        {"B_IR_Grenade",1}
      };
  };
  class DMR: BaseUnit {
    weapons[] = {
      {"rhs_weap_sr25_ec",
        {"rhsusf_acc_su230a_mrds_3d","rhsusf_acc_anpeq15side_bk","rhsusf_20Rnd_762x51_SR25_m62_Mag"}
      },
      {"rhsusf_weap_glock17g4",{"rhsusf_mag_17Rnd_9x19_JHP"}},
      "RangeFinder"
    };
    vest[] = {"rhsusf_plateframe_marksman"};
      vestContents[] = {
        {"rhsusf_20Rnd_762x51_SR25_m118_special_Mag",2},
        {"rhsusf_20Rnd_762x51_SR25_m62_Mag",2},
        {"rhsusf_mag_17Rnd_9x19_JHP",2},
        {"HandGrenade",2},
        {"SmokeShell",2},
        {"Chemlight_green",2},
        {"B_IR_Grenade",1},
        {"rhsusf_acc_aac_762sdn6_silencer",1}
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
		uniform[] = {
			"rhs_uniform_g3_tan",
		};
		vest[] = {
			"rhsusf_mbav_light",
		};
		vestContents[] = {
			{"rhsusf_mag_40Rnd_46x30_FMJ",6},
			{"SmokeShellRed",2},
			{"ACRE_PRC152",1}
		};
		backpack[] = {
			"rhsusf_falconii_coy","rhsusf_falconii_mc"
		};
		backpackContents[] = {
			{"ToolKit",1}
		};
	};

};
