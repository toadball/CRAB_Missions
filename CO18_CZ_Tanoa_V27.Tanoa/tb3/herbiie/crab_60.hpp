class CRAB60 { 
	class BaseUnit {
    allowPlayerGoggles = 0;
    ace_medic = 1;
    weapons[] = {
        {"rhs_weap_m1garand_sa43",
          {"rhsgref_8Rnd_762x63_M2B_M1rifle"}
        },"ACE_Flashlight_Maglite_ML300L"
    };
    priKit[] = {};
    secKit[] = {};
    pisKit[] = {};

    assignedItems[] = {"ItemMap","ItemCompass","ItemWatch"};

    headgear[] = {
      "rhsgref_helmet_M1_mit",
	  "rhsgref_helmet_M1_liner",
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
        {"rhsgref_8Rnd_762x63_M2B_M1rifle",10},
		{"ACE_salineIV_500",1},
        {"rhs_grenade_mkii_mag",2},
        {"rhs_grenade_mki_mag",2},
        {"SmokeShell",2}
      };

    backpack[] = {"rhsgref_hidf_alicepack"};
      backpackContents[] = {
        {"rhsgref_8Rnd_762x63_M2B_M1rifle",15},
        {"rhsgref_296Rnd_792x57_SmK_belt",2}
      };

    magazines[] = {}; items[] = {};
  };
  class PL: BaseUnit {
    weapons[] = {
        {"rhs_weap_m3a1",
          {"rhsgref_30rnd_1143x23_M1911B_SMG"}
        },"Binocular","ACE_Flashlight_Maglite_ML300L"
    };
    vestContents[] = {
      {"rhsgref_30rnd_1143x23_M1911B_SMG",4},
      {"rhs_grenade_mkii_mag",2},
      {"SmokeShell",2}
    };
    backpack[] = {"rhsgref_hidf_alicepack"};
      backpackContents[] = {
        {"rhsgref_30rnd_1143x23_M1911B_SMG",8},
        {"SmokeShell",2},
        {"ACRE_PRC77",1}
      };
  };
  class ZEUS: PL {};
  class TL: baseUnit {
    backpack[] = {"rhsgref_hidf_alicepack"};
      backpackContents[] = {
        {"rhsgref_8Rnd_762x63_M2B_M1rifle",25},
        {"rhs_grenade_mkii_mag",2},
        {"rhs_grenade_mki_mag",2},
        {"SmokeShell",2},
        {"rhsgref_296Rnd_792x57_SmK_belt",1}
      };
  };
  class RF: BaseUnit {};
  class UGL: BaseUnit {
	  weapons[] = {
        {"rhs_weap_m79",
          {"1Rnd_HE_Grenade_shell"}
        },
        {"rhsusf_weap_m1911a1",
          {"rhsusf_mag_7x45acp_MHP"}
        }
    };	  
      vestContents[] = {
        {"rhsusf_mag_7x45acp_MHP",2},
        {"1Rnd_HE_Grenade_shell",10},
        {"ACE_40mm_Flare_red",5},
		{"ACE_salineIV_500",1},
        {"rhs_grenade_mkii_mag",2},
        {"rhs_grenade_mki_mag",2},
        {"SmokeShell",2}
      };
    backpack[] = {"rhsgref_hidf_alicepack"};
      backpackContents[] = {
        {"rhsusf_mag_7x45acp_MHP",5},
        {"1Rnd_HE_Grenade_shell",30},
        {"ACE_40mm_Flare_red",15},
        {"SmokeShell",2}
      };
  };
  class FSO: BaseUnit {};
   
  class MED: BaseUnit {
    ace_medic = 2;
      backpackContents[] = {
        {"rhsgref_8Rnd_762x63_M2B_M1rifle",4},
        {"rhs_grenade_mkii_mag",2},
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
      {"rhs_weap_mg42",
          {"rhsgref_296Rnd_792x57_SmK_belt"}
      }
    };
      vestContents[] = {
        {"rhsgref_296Rnd_792x57_SmK_belt",1},
        {"rhs_grenade_mkii_mag",1},
      };
      backpackContents[] = {
        {"rhsgref_296Rnd_792x57_SmK_belt",2},
        {"rhs_grenade_mkii_mag",2},
        {"rhs_grenade_mki_mag",2},
        {"SmokeShell",2},
      };
  };
  class DMR: BaseUnit {
    weapons[] = {
      {"rhs_weap_m1garand_sa43_rail",
        {"rhsusf_acc_m8541_low","rhsgref_8Rnd_762x63_M2B_M1rifle"}
      },
      "Binocular"
    };
  };class PILOT: baseUnit {
		weapons[] = {
      {"rhsusf_weap_m1911a1",{"rhsusf_mag_7x45acp_MHP"}}
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
			"rhsgref_uniform_olive",
		};
		vest[] = {
			"rhsgref_chicom",
		};
		vestContents[] = {
			{"rhsusf_mag_7x45acp_MHP",6},
			{"SmokeShellRed",2},
      {"ACE_MapTools",1}
		};
		backpack[] = {
			"rhs_sidor"
		};
		backpackContents[] = {
			{"ACRE_PRC77",1}
		};
	};
	
};