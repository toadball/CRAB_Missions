class brit_35 { 
	class BaseUnit {
    allowPlayerGoggles = 0;
    ace_medic = 1;
    weapons[] = {
        {"CUP_arifle_L85A2_G",
          {"rhs_mag_30Rnd_556x45_Mk262_PMAG","cup_acc_llm_od","optic_hamr"}
        }
    };
    priKit[] = {};
    secKit[] = {};
    pisKit[] = {};

    assignedItems[] = {"ItemMap","ItemCompass","ItemWatch","NVGoggles_INDEP"};

    headgear[] = {
      "H_HelmetSpecB",
	  "H_HelmetSpecB_blk",
	  "H_HelmetSpecB_paint2",
	  "H_HelmetSpecB_paint1",
	  "H_HelmetSpecB_sand",
	  "H_HelmetSpecB_snakeskin"
    };
    goggles[] = {
    };

    uniform[] = {"U_B_CTRG_3","U_B_CTRG_1"};
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
        {"ACE_Maptools",1}
      };

    vest[] = {"V_PlateCarrierL_CTRG","V_PlateCarrierH_CTRG"};

      vestContents[] = {
        {"rhs_mag_30Rnd_556x45_Mk262_PMAG",6},
		{"ACE_salineIV_500",1},
        {"HandGrenade",2},
        {"SmokeShell",2},
        {"ACRE_PRC343",1}
      };

    backpack[] = {"B_AssaultPack_rgr"};
      backpackContents[] = {
      };

    magazines[] = {}; items[] = {};
  };
  class PL: BaseUnit {
    weapons[] = {
        {"CUP_arifle_L85A2_G",
          {"rhs_mag_30Rnd_556x45_Mk262_PMAG","cup_acc_llm_od","optic_hamr"}
        },"Rangefinder"
    };
      vestContents[] = {
        {"rhs_mag_30Rnd_556x45_Mk262_PMAG",5},
		{"ACE_salineIV_500",1},
        {"HandGrenade",2},
        {"SmokeShell",2},
        {"ACRE_PRC343",1},
        {"ACRE_PRC148",1},
        {"ACE_microDAGR",1},
        {"itc_land_tablet_rover",1}
      };
      backpackContents[] = {
        {"rhs_mag_30Rnd_556x45_Mk262_PMAG",5},
        {"HandGrenade",2},
        {"SmokeShell",2},
        {"SmokeShellRed",3},
        {"SmokeShellBlue",3},
        {"ACE_IR_Strobe_Item",2}
      };
  };
  class ZEUS: PL {};
  class TL: baseUnit {
      backpackContents[] = {
        {"rhs_mag_30Rnd_556x45_Mk262_PMAG",10},
        {"HandGrenade",2},
        {"SmokeShell",2},
        {"rhsusf_100Rnd_762x51",1}
      };
  };
  class RF: BaseUnit {
      backpackContents[] = {
        {"rhs_mag_30Rnd_556x45_Mk262_PMAG",9},
        {"HandGrenade",2},
        {"SmokeShell",2},
        {"rhsusf_100Rnd_762x51",1}
      };
  };
  class UGL: BaseUnit {
    weapons[] = {
        {"CUP_arifle_L85A2_GL",
          {"rhs_mag_30Rnd_556x45_Mk262_PMAG","cup_acc_llm_od","optic_hamr","1Rnd_HE_Grenade_shell"}
        }
    };
      backpackContents[] = {
        {"rhs_mag_30Rnd_556x45_Mk262_PMAG",5},
        {"1Rnd_HE_Grenade_shell",20},
        {"rhs_mag_m713_Red",3},
        {"rhs_mag_m714_White",3}
      };	  
  };
  class FSO: PL {
    weapons[] = {
        {"CUP_arifle_L85A2_G",
          {"rhs_mag_30Rnd_556x45_Mk262_PMAG","cup_acc_llm_od","optic_hamr"}
        },"ACE_Vector"
    };
    assignedItems[] = {"ItemMap","ItemCompass","ItemWatch","NVGoggles_INDEP","B_UavTerminal"};
	};
   
  class MED: BaseUnit {
    ace_medic = 2;
    backpack[] = {"B_Carryall_rgr"};
      backpackContents[] = {
        {"rhs_mag_30Rnd_556x45_Mk262_PMAG",2},
        {"HandGrenade",2},
        {"SmokeShell",2},
        {"ACE_fieldDressing",20},
        {"ACE_packingBandage",20},
        {"ACE_quikclot",20},
        {"ACE_elasticBandage",20},
        {"ACE_morphine",20},
        {"ACE_epinephrine",10},
        {"ACE_adenosine",5},
        {"ACE_salineIV_250",8},
        {"ACE_bloodIV",6},
        {"ACE_personalAidKit",1},
        {"ACE_surgicalKit",1},
        {"ACE_splint",8},
        {"ACE_tourniquet",5}
      };
  };

  class LMG: BaseUnit {
    weapons[] = {
        {"arifle_SPAR_03_blk_F",
          {"ACE_20Rnd_762x51_M118LR_Mag","cup_acc_llm_od","optic_dms"}
        }
    };
      vestContents[] = {
        {"ACE_20Rnd_762x51_M118LR_Mag",8},
		{"ACE_salineIV_500",1},
        {"HandGrenade",2},
        {"SmokeShell",2},
        {"ACRE_PRC343",1}
      };
      backpackContents[] = {
        {"ACE_20Rnd_762x51_M118LR_Mag",10},
        {"HandGrenade",2},
        {"SmokeShell",2}
      };
  };
  class DMR: BaseUnit {
    weapons[] = {
        {"CUP_srifle_AWM_wdl",
          {"CUP_5Rnd_86x70_L115A1","rhsusf_acc_harris_bipod","optic_lrps","cup_muzzle_snds_awm"}
        },"Binocular"
    };
      vestContents[] = {
        {"CUP_5Rnd_86x70_L115A1",6},
		{"ACE_salineIV_500",1},
        {"HandGrenade",2},
        {"SmokeShell",2},
        {"ACRE_PRC343",1}
      };
      backpackContents[] = {
        {"CUP_5Rnd_86x70_L115A1",6},
        {"HandGrenade",2},
        {"SmokeShell",2},
      };
  };
  class PILOT: baseUnit {
    weapons[] = {
        {"rhs_weap_hk416d10",
          {"rhs_mag_30Rnd_556x45_Mk262_PMAG","cup_acc_llm_od","optic_holosight_blk_f"}
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
    vest[] = {"V_PlateCarrierL_CTRG"};
      vestContents[] = {
        {"rhs_mag_30Rnd_556x45_Mk262_PMAG",5},
		{"ACE_salineIV_500",1},
        {"HandGrenade",2},
        {"SmokeShell",2},
        {"ACRE_PRC343",1},
        {"ACRE_PRC148",1},
        {"ACE_microDAGR",1}
      };
	};
  class MAT: BaseUnit {
    weapons[] = {
        {"CUP_arifle_L85A2_G",
          {"rhs_mag_30Rnd_556x45_Mk262_PMAG","cup_acc_llm_od","optic_hamr"}
        },{"rhs_weap_fgm148",{"rhs_fgm148_magazine_AT"}}
    };
    backpack[] = {"B_Carryall_cbr"};
      backpackContents[] = {
        {"rhs_fgm148_magazine_AT",1}
      };
  };
  class MATA: BaseUnit {
    backpack[] = {"B_Carryall_cbr"};
      backpackContents[] = {
        {"rhs_fgm148_magazine_AT",1}
      };
  };

  class GPMG: BaseUnit {
    weapons[] = {
        {"CUP_lmg_L7A2",
          {"rhsusf_100Rnd_762x51","optic_hamr"}
        }
    };
      vestContents[] = {
        {"rhsusf_100Rnd_762x51",3},
		{"ACE_salineIV_500",1},
        {"HandGrenade",2},
        {"SmokeShell",2},
        {"ACRE_PRC343",1}
      };
      backpackContents[] = {
        {"rhsusf_100Rnd_762x51",4},
        {"HandGrenade",2},
        {"SmokeShell",2},
      };
  };
	
};