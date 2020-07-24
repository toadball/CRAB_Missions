class us_ucp { 
	class BaseUnit {
    allowPlayerGoggles = 0;
    ace_medic = 1;
    weapons[] = {
        {"rhs_weap_m4a1",
          {"rhs_mag_30Rnd_556x45_M855A1_Stanag","rhsusf_acc_anpeq15side","rhsusf_acc_acog"}
        }
    };
    priKit[] = {};
    secKit[] = {};
    pisKit[] = {};

    assignedItems[] = {"ItemMap","ItemCompass","ItemWatch","rhsusf_ANPVS_14"};

    headgear[] = {
      "rhsusf_ach_helmet_ucp",
	  "rhsusf_ach_helmet_ucp_alt",
	  "rhsusf_ach_helmet_ESS_ucp",
	  "rhsusf_ach_helmet_ESS_ucp_alt",
	  "rhsusf_ach_helmet_headset_ucp",
	  "rhsusf_ach_helmet_headset_ucp_alt",
	  "rhsusf_ach_helmet_headset_ess_ucp",
	  "rhsusf_ach_helmet_headset_ess_ucp_alt",
	  "rhsusf_ach_helmet_ucp_norotos"
    };
    goggles[] = {
    };

    uniform[] = {"rhs_uniform_cu_ucp"};
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

    vest[] = {"rhsusf_spcs_ucp_rifleman","rhsusf_spcs_ucp_rifleman_alt"};

      vestContents[] = {
        {"rhs_mag_30Rnd_556x45_M855A1_Stanag",6},
		{"ACE_salineIV_500",1},
        {"HandGrenade",2},
        {"SmokeShell",2},
        {"ACRE_PRC343",1}
      };

    backpack[] = {"rhsusf_assault_eagleaiii_ucp"};
      backpackContents[] = {
      };

    magazines[] = {}; items[] = {};
  };
  class PL: BaseUnit {
    weapons[] = {
        {"rhs_weap_m4a1",
          {"rhs_mag_30Rnd_556x45_M855A1_Stanag","rhsusf_acc_anpeq15side","rhsusf_acc_acog"}
        },"Binocular"
    };
      vestContents[] = {
        {"rhs_mag_30Rnd_556x45_M855A1_Stanag",5},
		{"ACE_salineIV_500",1},
        {"HandGrenade",2},
        {"SmokeShell",2},
        {"ACRE_PRC343",1},
        {"ACRE_PRC148",1},
        {"ACE_microDAGR",1},
        {"itc_land_tablet_rover",1}
      };
      backpackContents[] = {
        {"rhs_mag_30Rnd_556x45_M855A1_Stanag",5},
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
        {"rhs_mag_30Rnd_556x45_M855A1_Stanag",10},
        {"HandGrenade",2},
        {"SmokeShell",2},
        {"rhsusf_100Rnd_762x51",1}
      };
  };
  class RF: BaseUnit {
      backpackContents[] = {
        {"rhs_mag_30Rnd_556x45_M855A1_Stanag",5},
        {"HandGrenade",2},
        {"SmokeShell",2},
        {"rhsusf_200Rnd_556x45_M855_mixed_soft_pouch_ucp",2},
        {"rhsusf_100Rnd_762x51",1}
      };
  };
  class UGL: BaseUnit {
    weapons[] = {
        {"rhs_weap_m4a1_m203",
          {"rhs_mag_30Rnd_556x45_M855A1_Stanag","rhsusf_acc_anpeq15side","rhsusf_acc_acog","1Rnd_HE_Grenade_shell"}
        }
    };
      backpackContents[] = {
        {"rhs_mag_30Rnd_556x45_M855A1_Stanag",5},
        {"1Rnd_HE_Grenade_shell",20},
        {"rhs_mag_m713_Red",5},
        {"rhs_mag_m714_White",5}
      };	  
  };
  class FSO: PL {
    assignedItems[] = {"ItemMap","ItemCompass","ItemWatch","rhsusf_ANPVS_14","B_UavTerminal"};
	};
   
  class MED: BaseUnit {
    ace_medic = 2;
      backpackContents[] = {
        {"rhs_mag_30Rnd_556x45_M855A1_Stanag",2},
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
        {"rhs_weap_m249_pip",
          {"rhsusf_200Rnd_556x45_M855_mixed_soft_pouch_ucp","rhsusf_acc_anpeq15side","rhsusf_acc_acog"}
        }
    };
      vestContents[] = {
        {"rhsusf_200Rnd_556x45_M855_mixed_soft_pouch_ucp",2},
		{"ACE_salineIV_500",1},
        {"HandGrenade",2},
        {"SmokeShell",2},
        {"ACRE_PRC343",1}
      };
      backpackContents[] = {
        {"rhsusf_200Rnd_556x45_M855_mixed_soft_pouch_ucp",2}
      };
  };
  class DMR: BaseUnit {
    weapons[] = {
        {"srifle_EBR_F",
          {"20Rnd_762x51_Mag","rhsusf_acc_anpeq15side","rhsusf_acc_m8541"}
        },"Binocular"
    };
      vestContents[] = {
        {"20Rnd_762x51_Mag",6},
		{"ACE_salineIV_500",1},
        {"HandGrenade",2},
        {"SmokeShell",2},
        {"ACRE_PRC343",1}
      };
      backpackContents[] = {
        {"20Rnd_762x51_Mag",6},
        {"HandGrenade",2},
        {"SmokeShell",2},
      };
  };
  class PILOT: baseUnit {
    weapons[] = {
        {"rhs_weap_m4a1",
          {"rhs_mag_30Rnd_556x45_M855A1_Stanag","rhsusf_acc_anpeq15side","rhsusf_acc_acog"}
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
		uniform[] = {
			"rhs_uniform_cu_ucp",
		};
		
    vest[] = {"rhsusf_iotv_ucp"};
      vestContents[] = {
        {"rhs_mag_30Rnd_556x45_M855A1_Stanag",5},
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
        {"rhs_weap_m4a1",
          {"rhs_mag_30Rnd_556x45_M855A1_Stanag","rhsusf_acc_anpeq15side","rhsusf_acc_acog"}
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
        {"rhs_weap_m240B",
          {"rhsusf_100Rnd_762x51","rhsusf_acc_anpeq15side","rhsusf_acc_acog"}
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