class CTRG { 
	class BaseUnit {
    allowPlayerGoggles = 1;
    ace_medic = 1;
    weapons[] = {
        {"arifle_SPAR_01_blk_F",
          {"30Rnd_556x45_Stanag_red","optic_erco_blk_f","muzzle_snds_m","acc_pointer_ir"}
        }
    };
    priKit[] = {};
    secKit[] = {};
    pisKit[] = {};

    assignedItems[] = {"ItemMap","ItemCompass","ItemWatch","O_NVGoggles_grn_F"};

    headgear[] = {
      "H_HelmetSpecB_blk",
	  "H_HelmetSpecB_paint2",
	  "H_HelmetSpecB_paint1",
	  "H_HelmetSpecB_sand",
	  "H_HelmetSpecB_snakeskin",
	  "H_HelmetB_Enh_tna_F",
	  "H_HelmetSpecB_wdl"
    };
    goggles[] = {
    };

    uniform[] = {"U_B_CTRG_1","U_B_CTRG_3"};
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

    vest[] = {"V_PlateCarrierL_CTRG","V_PlateCarrierH_CTRG"};

      vestContents[] = {
        {"30Rnd_556x45_Stanag_red",6},
		{"ACE_salineIV_500",1},
        {"HandGrenade",2},
        {"SmokeShell",2},
        {"Chemlight_red",1},
        {"ACRE_PRC343",1}
      };

    backpack[] = {"B_AssaultPack_cbr"};
      backpackContents[] = {
        {"30Rnd_556x45_Stanag_red",8},
        {"HandGrenade",2},
        {"SmokeShell",2},
        {"Chemlight_red",1},
        {"150Rnd_556x45_Drum_Mag_Tracer_F",1}
      };

    magazines[] = {}; items[] = {};
  };
  class PL: BaseUnit {
    weapons[] = {
        {"arifle_SPAR_01_blk_F",
          {"30Rnd_556x45_Stanag_red","optic_erco_blk_f","muzzle_snds_m","acc_pointer_ir"}
        },"binocular"
    };
      vestContents[] = {
        {"30Rnd_556x45_Stanag_red",6},
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
    backpack[] = {"B_TacticalPack_blk"};
      backpackContents[] = {
        {"30Rnd_556x45_Stanag_red",10},
        {"HandGrenade",2},
        {"SmokeShell",2},
        {"Chemlight_red",3},
        {"150Rnd_556x45_Drum_Mag_Tracer_F",2}
      };
  };
  class RF: BaseUnit {};
  class UGL: BaseUnit {
	  weapons[] = {
        {"arifle_SPAR_01_GL_blk_F",
          {"1Rnd_HE_Grenade_shell","30Rnd_556x45_Stanag_red","optic_erco_blk_f","muzzle_snds_m","acc_pointer_ir"}
        }
    };	  
      vestContents[] = {
        {"30Rnd_556x45_Stanag_red",3},
        {"1Rnd_HE_Grenade_shell",10},
        {"1Rnd_SmokeRed_Grenade_shell",5},
		{"ACE_salineIV_500",1},
        {"HandGrenade",2},
        {"SmokeShell",2},
        {"Chemlight_red",1}
      };
      backpackContents[] = {
        {"30Rnd_556x45_Stanag_red",10},
        {"1Rnd_HE_Grenade_shell",30},
        {"1Rnd_SmokeRed_Grenade_shell",5},
        {"SmokeShell",2},
        {"Chemlight_red",1}
      };
  };
  class FSO: BaseUnit {
    assignedItems[] = {"ItemMap","ItemCompass","ItemWatch","B_UavTerminal","O_NVGoggles_grn_F"};
	  weapons[] = {
        {"arifle_SPAR_01_blk_F",
          {"30Rnd_556x45_Stanag_red","optic_erco_blk_f","muzzle_snds_m","acc_pointer_ir"}
        },"binocular"
    };
      vestContents[] = {
        {"30Rnd_556x45_Stanag_red",6},
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
    backpack[] = {"B_Carryall_cbr"};
      backpackContents[] = {
        {"30Rnd_556x45_Stanag_red",4},
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
      {"arifle_SPAR_02_blk_F",
          {"150Rnd_556x45_Drum_Mag_Tracer_F","optic_holosight_arid_f","bipod_01_f_blk","muzzle_snds_m","acc_pointer_ir"}
      }
    };
      vestContents[] = {
        {"150Rnd_556x45_Drum_Mag_Tracer_F",2},
        {"HandGrenade",2},
        {"SmokeShell",2},
		{"ACE_salineIV_500",1}
      };
      backpackContents[] = {
        {"150Rnd_556x45_Drum_Mag_Tracer_F",2},
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
        {"arifle_SPAR_01_blk_F",
          {"30Rnd_556x45_Stanag_red","optic_erco_blk_f","muzzle_snds_m","acc_pointer_ir"}
        },{"launch_MRAWS_olive_F",{"MRAWS_HEAT_F"}}
    };
    backpack[] = {"B_Carryall_cbr"};
      backpackContents[] = {
        {"MRAWS_HE_F",2},
        {"MRAWS_HEAT_F",2}
      };
  };
  class MATA: BaseUnit {
    backpack[] = {"B_Carryall_cbr"};
      backpackContents[] = {
        {"MRAWS_HE_F",2},
        {"MRAWS_HEAT_F",2}
      };
  };

  class GPMG: BaseUnit {
    weapons[] = {
        {"MMG_02_black_F",
          {"130Rnd_338_Mag","optic_erco_blk_f","muzzle_snds_338_black"}
        }
    };
      vestContents[] = {
        {"130Rnd_338_Mag",3},
		{"ACE_salineIV_500",1},
        {"HandGrenade",2},
        {"SmokeShell",2}
      };
    backpack[] = {"B_Carryall_cbr"};
      backpackContents[] = {
        {"130Rnd_338_Mag",4},
        {"HandGrenade",2},
        {"SmokeShell",2},
      };
  };
	
};