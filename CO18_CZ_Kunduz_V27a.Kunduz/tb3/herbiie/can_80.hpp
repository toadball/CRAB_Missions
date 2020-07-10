class can_80 { 
	class BaseUnit {
    allowPlayerGoggles = 0;
    ace_medic = 1;
    weapons[] = {
        {"rhs_weap_l1a1_wood",
          {"rhs_mag_20Rnd_762x51_m80_fnfal"}
        }
    };
    priKit[] = {};
    secKit[] = {};
    pisKit[] = {};

    assignedItems[] = {"ItemMap","ItemCompass","ItemWatch"};

    headgear[] = {
      "rhsgref_helmet_M1_liner",
	  "rhsgref_helmet_M1_mit",
	  "rhsgref_helmet_M1_bare",
	  "rhsgref_helmet_M1_bare_alt01",
	  "rhsgref_helmet_M1_painted",
	  "rhsgref_helmet_M1_painted_alt01"
    };
    goggles[] = {
    };

    uniform[] = {"rhsgref_uniform_og107"};
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
        {"rhs_mag_20Rnd_762x51_m80_fnfal",5},
		{"ACE_salineIV_500",1},
        {"HandGrenade",2},
        {"SmokeShell",2}
      };

    backpack[] = {"B_FieldPack_oli"};
      backpackContents[] = {
      };

    magazines[] = {}; items[] = {};
  };
  class PL: BaseUnit {
    weapons[] = {
        {"rhs_weap_l1a1_wood",
          {"rhs_mag_20Rnd_762x51_m80_fnfal"}
        },"Binocular"
    };
      backpackContents[] = {
        {"ACRE_PRC77",1},
        {"rhs_mag_20Rnd_762x51_m80_fnfal",3},
        {"HandGrenade",2},
        {"SmokeShell",2}
      };
  };
  class ZEUS: PL {};
  class TL: baseUnit {
      backpackContents[] = {
        {"rhs_mag_20Rnd_762x51_m80_fnfal",10},
        {"HandGrenade",2},
        {"SmokeShell",2},
        {"rhsusf_100Rnd_762x51",1}
      };
  };
  class RF: BaseUnit {
      backpackContents[] = {
        {"rhs_mag_20Rnd_762x51_m80_fnfal",5},
        {"HandGrenade",2},
        {"SmokeShell",2},
        {"rhsusf_200Rnd_556x45_M855_mixed_soft_pouch",2},
        {"rhsusf_100Rnd_762x51",1}
      };
  };
  class UGL: RF {	  
  };
  
  class FSO: PL {
	};
   
  class MED: BaseUnit {
    ace_medic = 2;
    backpack[] = {"B_Carryall_oli"};
      backpackContents[] = {
        {"rhs_mag_20Rnd_762x51_m80_fnfal",2},
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
        {"rhs_weap_m249",
          {"rhsusf_200Rnd_556x45_M855_mixed_soft_pouch"}
        }
    };
      vestContents[] = {
        {"rhsusf_200Rnd_556x45_M855_mixed_soft_pouch",2},
		{"ACE_salineIV_500",1},
        {"HandGrenade",2},
        {"SmokeShell",2},
        {"ACRE_PRC343",1}
      };
      backpackContents[] = {
        {"rhsusf_200Rnd_556x45_M855_mixed_soft_pouch",2}
      };
  };
  class DMR: RF {
    weapons[] = {
        {"rhs_weap_l1a1_wood",
          {"rhs_mag_20Rnd_762x51_m80_fnfal","rhsgref_acc_l1a1_l2a2"}
        },"Binocular"
    };
  };
  class PILOT: baseUnit {
    weapons[] = {
        {"rhs_weap_l1a1_wood",
          {"rhs_mag_20Rnd_762x51_m80_fnfal"}
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
		
    vest[] = {"rhsusf_iotv_ucp"};
      vestContents[] = {
        {"rhs_mag_20Rnd_762x51_m80_fnfal",5},
		{"ACE_salineIV_500",1},
        {"HandGrenade",2},
        {"SmokeShell",2},
      };
      backpackContents[] = {
        {"ACRE_PRC77",1}
      };
	};
  class MAT: BaseUnit {
    weapons[] = {
        {"rhs_weap_l1a1_wood",
          {"rhs_mag_20Rnd_762x51_m80_fnfal"}
        },{"rhs_weap_maaws",{"rhs_mag_maaws_HEAT"}}
    };
    backpack[] = {"B_Carryall_cbr"};
      backpackContents[] = {
        {"rhs_mag_maaws_HE",2},
        {"rhs_mag_maaws_HEAT",2}
      };
  };
  class MATA: BaseUnit {
    backpack[] = {"B_Carryall_cbr"};
      backpackContents[] = {
        {"rhs_mag_maaws_HE",2},
        {"rhs_mag_maaws_HEAT",2}
      };
  };

  class GPMG: BaseUnit {
    weapons[] = {
        {"rhs_weap_m240G",
          {"rhsusf_100Rnd_762x51"}
        }
    };
      vestContents[] = {
        {"rhsusf_100Rnd_762x51",3},
		{"ACE_salineIV_500",1},
        {"HandGrenade",2},
        {"SmokeShell",2}
      };
      backpackContents[] = {
        {"rhsusf_100Rnd_762x51",4},
        {"HandGrenade",2},
        {"SmokeShell",2},
      };
  };
	
};