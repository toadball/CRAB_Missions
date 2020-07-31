class CSAT_NG { 
	class BaseUnit {
    allowPlayerGoggles = 1;
    ace_medic = 1;
    weapons[] = {
        {"arifle_Katiba_C_F",
          {"30Rnd_65x39_caseless_green","optic_aco"}
        }
    };
    priKit[] = {};
    secKit[] = {};
    pisKit[] = {};

    assignedItems[] = {"ItemMap","ItemCompass","ItemWatch"};

    headgear[] = {
      "rhsgref_helmet_pasgt_3color_desert"
    };
    goggles[] = {
    };

    uniform[] = {"rhsgref_uniform_3color_desert"};
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

    vest[] = {"rhsgref_6b23_khaki_rifleman","rhsgref_6b23_khaki_nco"};

      vestContents[] = {
        {"30Rnd_65x39_caseless_green",6},
		{"ACE_salineIV_500",1},
        {"HandGrenade",2},
        {"SmokeShell",2},
        {"Chemlight_red",1},
        {"ACRE_PRC343",1}
      };

    backpack[] = {"B_TacticalPack_oli"};
      backpackContents[] = {
        {"30Rnd_65x39_caseless_green",8},
        {"HandGrenade",2},
        {"SmokeShell",2},
        {"Chemlight_red",1},
        {"75rnd_762x39_AK12_Arid_Mag_F",1}
      };

    magazines[] = {}; items[] = {};
  };
  class PL: BaseUnit {
    weapons[] = {
        {"arifle_Katiba_C_F",
          {"30Rnd_65x39_caseless_green","optic_aco"}
        },"binocular"
    };
      vestContents[] = {
        {"30Rnd_65x39_caseless_green",6},
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
      backpackContents[] = {
        {"30Rnd_65x39_caseless_green",10},
        {"HandGrenade",2},
        {"SmokeShell",2},
        {"Chemlight_red",3},
        {"75rnd_762x39_AK12_Arid_Mag_F",2}
      };
  };
  class RF: BaseUnit {};
  class UGL: BaseUnit {
	  weapons[] = {
        {"arifle_Katiba_GL_F",
          {"1Rnd_HE_Grenade_shell","30Rnd_65x39_caseless_green","optic_aco"}
        }
    };	  
      vestContents[] = {
        {"30Rnd_65x39_caseless_green",3},
        {"1Rnd_HE_Grenade_shell",10},
        {"1Rnd_SmokeRed_Grenade_shell",5},
		{"ACE_salineIV_500",1},
        {"HandGrenade",2},
        {"SmokeShell",2},
        {"Chemlight_red",1}
      };
      backpackContents[] = {
        {"30Rnd_65x39_caseless_green",10},
        {"1Rnd_HE_Grenade_shell",30},
        {"1Rnd_SmokeRed_Grenade_shell",5},
        {"SmokeShell",2},
        {"Chemlight_red",1}
      };
  };
  class FSO: BaseUnit {
    assignedItems[] = {"ItemMap","ItemCompass","ItemWatch","B_UavTerminal"};
	  weapons[] = {
        {"arifle_Katiba_C_F",
          {"30Rnd_65x39_caseless_green","optic_aco"}
        },"binocular"
    };
      vestContents[] = {
        {"30Rnd_65x39_caseless_green",6},
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
        {"30Rnd_65x39_caseless_green",4},
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
      {"arifle_RPK12_arid_F",
          {"75rnd_762x39_AK12_Arid_Mag_F","optic_holosight_arid_f"}
      }
    };
      vestContents[] = {
        {"75rnd_762x39_AK12_Arid_Mag_F",2},
        {"HandGrenade",2},
        {"SmokeShell",2},
		{"ACE_salineIV_500",1}
      };
      backpackContents[] = {
        {"75rnd_762x39_AK12_Arid_Mag_F",2},
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
		
    vest[] = {"V_TacVest_oli"};
      vestContents[] = {
        {"30Rnd_9x21_Yellow_Mag",5},
		{"ACE_salineIV_500",1},
        {"HandGrenade",2},
        {"SmokeShell",2},
        {"ACRE_PRC343",1},
        {"ACRE_PRC148",1}
      };
	};
  class MAT: BaseUnit {
    weapons[] = {
        {"arifle_Katiba_C_F",
          {"30Rnd_65x39_caseless_green","optic_aco"}
        },{"launch_O_Vorona_brown_F",{"Vorona_HEAT"}}
    };
    backpack[] = {"B_Carryall_oli"};
      backpackContents[] = {
        {"Vorona_HE",2},
        {"Vorona_HEAT",2}
      };
  };
  class MATA: BaseUnit {
    backpack[] = {"B_Carryall_oli"};
      backpackContents[] = {
        {"Vorona_HE",2},
        {"Vorona_HEAT",2}
      };
  };

  class GPMG: BaseUnit {
    weapons[] = {
        {"MMG_01_tan_F",
          {"150Rnd_93x64_Mag","optic_aco"}
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