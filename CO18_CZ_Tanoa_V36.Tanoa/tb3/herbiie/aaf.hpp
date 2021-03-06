class AAF { 
	class BaseUnit {
    allowPlayerGoggles = 1;
    ace_medic = 1;
    weapons[] = {
        {"arifle_Mk20_F",
          {"rhs_mag_30Rnd_556x45_M855A1_Stanag","optic_aco_grn"}
        }
    };
    priKit[] = {};
    secKit[] = {};
    pisKit[] = {};

    assignedItems[] = {"ItemMap","ItemCompass","ItemWatch","rhsusf_ANPVS_14"};

    headgear[] = {
      "H_HelmetIA"
    };
    goggles[] = {
    };

    uniform[] = {"U_I_CombatUniform","U_I_CombatUniform_shortsleeve"};
      uniformContents[] = {
        {"ACE_fieldDressing",5},
		{"ACE_packingBandage",5},
		{"ACE_quikclot",5},
		{"ACE_Tourniquet",2},
		{"ACE_splint",1},
		{"ACE_morphine",2},
        {"ACE_epinephrine",1},
        {"ACE_adenosine",1},
		{"ACE_salineIV_500",1},
        {"ACE_Flashlight_MX991",1},
        {"ACE_Maptools",1}
      };

    vest[] = {"V_PlateCarrierIA1_dgtl","V_PlateCarrierIA2_dgtl"};

      vestContents[] = {
        {"rhs_mag_30Rnd_556x45_M855A1_Stanag",6},
		{"ACE_salineIV_500",1},
        {"HandGrenade",2},
        {"SmokeShell",2},
        {"Chemlight_red",1},
        {"ACRE_PRC343",1}
      };

    backpack[] = {"B_AssaultPack_dgtl"};
      backpackContents[] = {
        {"rhs_mag_30Rnd_556x45_M855A1_Stanag",8},
        {"HandGrenade",2},
        {"SmokeShell",2},
        {"Chemlight_red",1},
        {"200Rnd_65x39_cased_Box",1}
      };

    magazines[] = {}; items[] = {};
  };
  class PL: BaseUnit {
    weapons[] = {
        {"arifle_Mk20_F",
          {"rhs_mag_30Rnd_556x45_M855A1_Stanag","optic_aco_grn"}
        },"binocular"
    };
      vestContents[] = {
        {"rhs_mag_30Rnd_556x45_M855A1_Stanag",6},
		{"ACE_salineIV_500",1},
        {"HandGrenade",2},
        {"SmokeShell",2},
        {"Chemlight_red",1},
        {"ACRE_PRC343",1},
        {"ACRE_PRC148",1}
      };
  };
  class ZEUS: PL {};
  class TL: baseUnit {
    backpack[] = {"B_TacticalPack_oli"};
      backpackContents[] = {
        {"rhs_mag_30Rnd_556x45_M855A1_Stanag",10},
        {"HandGrenade",2},
        {"SmokeShell",2},
        {"Chemlight_red",3},
        {"200Rnd_65x39_cased_Box",2}
      };
  };
  class RF: BaseUnit {};
  class UGL: BaseUnit {
	  weapons[] = {
        {"arifle_Mk20_GL_F",
          {"1Rnd_HE_Grenade_shell","rhs_mag_30Rnd_556x45_M855A1_Stanag","optic_aco_grn"}
        }
    };	  
      vestContents[] = {
        {"rhs_mag_30Rnd_556x45_M855A1_Stanag",3},
        {"1Rnd_HE_Grenade_shell",10},
        {"1Rnd_SmokeRed_Grenade_shell",5},
		{"ACE_salineIV_500",1},
        {"HandGrenade",2},
        {"SmokeShell",2},
        {"Chemlight_red",1}
      };
    backpack[] = {"B_TacticalPack_oli"};
      backpackContents[] = {
        {"rhs_mag_30Rnd_556x45_M855A1_Stanag",10},
        {"1Rnd_HE_Grenade_shell",30},
        {"1Rnd_SmokeRed_Grenade_shell",5},
        {"SmokeShell",2},
        {"Chemlight_red",1}
      };
  };
  class FSO: BaseUnit {
	  weapons[] = {
        {"arifle_Mk20_F",
          {"rhs_mag_30Rnd_556x45_M855A1_Stanag","optic_aco_grn"}
        },"binocular"
    };
      vestContents[] = {
        {"rhs_mag_30Rnd_556x45_M855A1_Stanag",6},
		{"ACE_salineIV_500",1},
        {"HandGrenade",2},
        {"SmokeShell",2},
        {"Chemlight_red",1},
        {"ACRE_PRC343",1},
        {"ACRE_PRC148",1},
        {"ACE_DAGR",1}
      };
	  };
   
  class MED: BaseUnit {
    ace_medic = 2;
    backpack[] = {"B_Carryall_oli"};
      backpackContents[] = {
        {"rhs_mag_30Rnd_556x45_M855A1_Stanag",4},
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
      {"LMG_Mk200_F",
          {"200Rnd_65x39_cased_Box","optic_holosight_blk_f"}
      }
    };
      vestContents[] = {
        {"200Rnd_65x39_cased_Box",2},
        {"HandGrenade",2},
        {"SmokeShell",2},
		{"ACE_salineIV_500",1}
      };
      backpackContents[] = {
        {"200Rnd_65x39_cased_Box",2},
        {"HandGrenade",2},
        {"SmokeShell",2}
      };
  };
  class PILOT: baseUnit {
    weapons[] = {
        {"hgun_PDW2000_F",
          {"30Rnd_9x21_Yellow_Mag"}
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
			"U_I_HeliPilotCoveralls",
		};
		
    vest[] = {"V_TacVest_oli"};
      vestContents[] = {
        {"rhs_mag_20Rnd_762x51_m80_fnfal",5},
		{"ACE_salineIV_500",1},
        {"HandGrenade",2},
        {"SmokeShell",2},
        {"ACRE_PRC343",1},
        {"ACRE_PRC148",1}
      };
	};
  class MAT: BaseUnit {
    weapons[] = {
        {"arifle_Mk20_F",
          {"rhs_mag_30Rnd_556x45_M855A1_Stanag","optic_aco_grn"}
        },{"launch_I_Titan_short_F",{"Titan_AT"}}
    };
    backpack[] = {"B_Carryall_cbr"};
      backpackContents[] = {
        {"Titan_AP",2},
        {"Titan_AT",2}
      };
  };
  class MATA: BaseUnit {
    backpack[] = {"B_Carryall_cbr"};
      backpackContents[] = {
        {"Titan_AP",2},
        {"Titan_AT",2}
      };
  };

  class GPMG: BaseUnit {
    weapons[] = {
        {"MMG_01_tan_F",
          {"150Rnd_93x64_Mag","optic_aco_grn"}
        }
    };
      vestContents[] = {
        {"150Rnd_93x64_Mag",3},
		{"ACE_salineIV_500",1},
        {"HandGrenade",2},
        {"SmokeShell",2}
      };
      backpackContents[] = {
        {"150Rnd_93x64_Mag",4},
        {"HandGrenade",2},
        {"SmokeShell",2},
      };
  };
	
};