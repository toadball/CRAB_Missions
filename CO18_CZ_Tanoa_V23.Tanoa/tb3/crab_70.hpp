class CRAB70 { 
	class BaseUnit {
    allowPlayerGoggles = 0;
    ace_medic = 1;
    weapons[] = {
        {"rhs_weap_l1a1_wood",
          {"rhs_mag_20Rnd_762x51_m80_fnfal"}
        },"ACE_Flashlight_Maglite_ML300L"
    };
    priKit[] = {};
    secKit[] = {};
    pisKit[] = {};

    assignedItems[] = {"ItemMap","ItemCompass","ItemWatch"};

    headgear[] = {
      "rhsgref_helmet_pasgt_woodland"
    };
    goggles[] = {
    };

    uniform[] = {"rhsgref_uniform_dpm_olive"};
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
        {"rhs_mag_20Rnd_762x51_m80_fnfal",6},
		{"ACE_salineIV_500",1},
        {"rhs_grenade_mkii_mag",2},
        {"rhs_grenade_mki_mag",2},
        {"SmokeShell",2},
        {"Chemlight_red",1}
      };

    backpack[] = {"rhsgref_hidf_alicepack"};
      backpackContents[] = {
        {"rhs_mag_20Rnd_762x51_m80_fnfal",8},
        {"rhs_grenade_mkii_mag",2},
        {"rhs_grenade_mki_mag",2},
        {"SmokeShell",2},
        {"Chemlight_red",1},
        {"rhsusf_100Rnd_762x51",3}
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
      {"rhs_mag_20Rnd_762x51_m80_fnfal",6},
      {"rhs_grenade_mkii_mag",2},
      {"SmokeShell",2},
      {"Chemlight_red",2}
    };
    backpack[] = {"rhsgref_hidf_alicepack"};
      backpackContents[] = {
        {"rhs_mag_20Rnd_762x51_m80_fnfal",8},
        {"SmokeShell",2},
        {"Chemlight_red",1},
        {"ACRE_PRC77",1}
      };
  };
  class ZEUS: PL {};
  class TL: baseUnit {
    backpack[] = {"rhsgref_hidf_alicepack"};
      backpackContents[] = {
        {"rhs_mag_20Rnd_762x51_m80_fnfal",15},
        {"rhs_grenade_mkii_mag",2},
        {"rhs_grenade_mki_mag",2},
        {"SmokeShell",2},
        {"Chemlight_red",3},
        {"rhsusf_100Rnd_762x51",2}
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
        {"SmokeShell",2},
        {"Chemlight_red",1}
      };
    backpack[] = {"rhsgref_hidf_alicepack"};
      backpackContents[] = {
        {"rhsusf_mag_7x45acp_MHP",5},
        {"1Rnd_HE_Grenade_shell",30},
        {"ACE_40mm_Flare_red",15},
        {"SmokeShell",2},
        {"Chemlight_red",1}
      };
  };
  class FSO: BaseUnit {};
   
  class MED: BaseUnit {
    ace_medic = 2;
      backpackContents[] = {
        {"rhs_mag_20Rnd_762x51_m80_fnfal",4},
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
      {"rhs_weap_m240G",
          {"rhsusf_100Rnd_762x51"}
      }
    };
      vestContents[] = {
        {"rhsusf_100Rnd_762x51",2},
        {"rhs_grenade_mkii_mag",2},
        {"rhs_grenade_mki_mag",2},
        {"SmokeShell",2},
		{"ACE_salineIV_500",1}
      };
      backpackContents[] = {
        {"rhsusf_100Rnd_762x51",6},
        {"rhs_grenade_mkii_mag",2},
        {"SmokeShell",2}
      };
  };
  class DMR: BaseUnit {
    weapons[] = {
        {"rhs_weap_l1a1_wood",
		{"rhs_mag_20Rnd_762x51_m80_fnfal","rhsgref_acc_l1a1_l2a2"}},
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