class brit_95 { 
	class BaseUnit {
    allowPlayerGoggles = 0;
    ace_medic = 1;
    weapons[] = {
        {"CUP_arifle_L85A2",
          {"rhs_mag_30Rnd_556x45_M855A1_Stanag"}
        }
    };
    priKit[] = {};
    secKit[] = {};
    pisKit[] = {};

    assignedItems[] = {"ItemMap","ItemCompass","ItemWatch"};

    headgear[] = {
      "H_Booniehat_mgrn",
	  "H_Booniehat_khk",
	  "H_Booniehat_oli",
	  "rhs_Booniehat_m81"
    };
    goggles[] = {
    };

    uniform[] = {"rhsgref_uniform_dpm","rhsgref_uniform_dpm_olive"};
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

    vest[] = {"rhsgref_alice_webbing"};

      vestContents[] = {
        {"rhs_mag_30Rnd_556x45_M855A1_Stanag",6},
		{"ACE_salineIV_500",1},
        {"HandGrenade",2},
        {"SmokeShell",2},
      };

    backpack[] = {"CUP_B_Bergen_BAF"};
      backpackContents[] = {
      };

    magazines[] = {}; items[] = {};
  };
  class PL: BaseUnit {
    weapons[] = {
        {"CUP_arifle_L85A2",
          {"rhs_mag_30Rnd_556x45_M855A1_Stanag"}
        },"Binocular"
    };
      vestContents[] = {
        {"rhs_mag_30Rnd_556x45_M855A1_Stanag",5},
		{"ACE_salineIV_500",1},
        {"HandGrenade",2},
        {"SmokeShell",2},
        {"ACRE_PRC148",1}
      };
      backpackContents[] = {
        {"rhs_mag_30Rnd_556x45_M855A1_Stanag",5},
        {"HandGrenade",2},
        {"SmokeShell",2},
        {"SmokeShellRed",3},
        {"SmokeShellBlue",3}
      };
  };
  class ZEUS: PL {};
  class TL: baseUnit {
      backpackContents[] = {
        {"rhs_mag_30Rnd_556x45_M855A1_Stanag",10},
        {"HandGrenade",2},
        {"SmokeShell",2},
        {"CUP_200Rnd_TE4_Green_Tracer_556x45_L110A1",1},
        {"rhsusf_100Rnd_762x51",1}
      };
  };
  class RF: BaseUnit {
      backpackContents[] = {
        {"rhs_mag_30Rnd_556x45_M855A1_Stanag",5},
        {"HandGrenade",2},
        {"SmokeShell",2},
        {"CUP_200Rnd_TE4_Green_Tracer_556x45_L110A1",1},
        {"rhsusf_100Rnd_762x51",1}
      };
  };
  class UGL: BaseUnit {
    weapons[] = {
        {"CUP_arifle_L85A2_GL",
          {"rhs_mag_30Rnd_556x45_M855A1_Stanag","1Rnd_HE_Grenade_shell"}
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
    assignedItems[] = {"ItemMap","ItemCompass","ItemWatch","B_UavTerminal"};
	};
   
  class MED: BaseUnit {
    ace_medic = 2;
    backpack[] = {"CUP_B_ACRPara_dpm"};
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
        {"CUP_lmg_L110A1",
          {"CUP_200Rnd_TE4_Red_Tracer_556x45_L110A1"}
        }
    };
      vestContents[] = {
        {"CUP_200Rnd_TE4_Red_Tracer_556x45_L110A1",1},
		{"ACE_salineIV_500",1},
        {"HandGrenade",2},
        {"SmokeShell",2},
      };
      backpackContents[] = {
        {"CUP_200Rnd_TE4_Red_Tracer_556x45_L110A1",3},
        {"HandGrenade",2},
        {"SmokeShell",2}
      };
  };
  class DMR: BaseUnit {
    weapons[] = {
        {"CUP_srifle_AWM_wdl",
          {"CUP_5Rnd_86x70_L115A1","rhsusf_acc_harris_bipod","optic_lrps"}
        },"Binocular"
    };
      vestContents[] = {
        {"CUP_5Rnd_86x70_L115A1",6},
		{"ACE_salineIV_500",1},
        {"HandGrenade",2},
        {"SmokeShell",2},
      };
      backpackContents[] = {
        {"CUP_5Rnd_86x70_L115A1",6},
        {"HandGrenade",2},
        {"SmokeShell",2},
      };
  };
  class PILOT: baseUnit {
    weapons[] = {
        {"CUP_arifle_L85A2",
          {"rhs_mag_30Rnd_556x45_M855A1_Stanag"}
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
      vestContents[] = {
        {"rhs_mag_30Rnd_556x45_M855A1_Stanag",5},
		{"ACE_salineIV_500",1},
        {"HandGrenade",2},
        {"SmokeShell",2},
        {"ACRE_PRC148",1}
      };
	};
  class MAT: BaseUnit {
    weapons[] = {
        {"CUP_arifle_L85A2",
          {"rhs_mag_30Rnd_556x45_M855A1_Stanag"}
        },{"launch_MRAWS_green_rail_F",{"MRAWS_HEAT_F"}}
    };
    backpack[] = {"B_Carryall_cbr"};
      backpackContents[] = {
        {"MRAWS_HEAT_F",2},
        {"MRAWS_HE_F",2}
      };
  };
  class MATA: BaseUnit {
    backpack[] = {"B_Carryall_cbr"};
      backpackContents[] = {
        {"MRAWS_HEAT_F",2},
        {"MRAWS_HE_F",2}
      };
  };

  class GPMG: BaseUnit {
    weapons[] = {
        {"CUP_lmg_L7A2_Flat",
          {"rhsusf_100Rnd_762x51"}
        }
    };
      vestContents[] = {
        {"rhsusf_100Rnd_762x51",3},
		{"ACE_salineIV_500",1},
        {"HandGrenade",2},
        {"SmokeShell",2},
      };
      backpackContents[] = {
        {"rhsusf_100Rnd_762x51",4},
        {"HandGrenade",2},
        {"SmokeShell",2},
      };
  };
	
};