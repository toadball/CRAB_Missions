  class brh {
    class BaseUnit {
      ace_earplugs = 1;
      allowPlayerGoggles = 0;
      ace_medic = 1;

      weapons[] = {
		  {
			{"rhs_weap_aks74",
			  {"rhs_30Rnd_545x39_7N6M_AK"}
			},
			{"rhs_weap_ak74n",
			  {"rhs_30Rnd_545x39_7N6M_AK"}
			},
			{"rhs_weap_ak74n_2",
			  {"rhs_30Rnd_545x39_7N6M_AK"}
			},
			{"rhs_weap_aks74_2",
			  {"rhs_30Rnd_545x39_7N6M_AK"}
			}
		  }
      };

      assignedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio"};

      headgear[] = {
		"rhsgref_M56",
		"rhsgref_helmet_M1_liner",
		"rhs_ssh68",
      };

      goggles[] = {
		  "G_Balaclava_blk",
		  "G_Balaclava_oli"
	  };

      uniform[] = {
		"rhsgref_uniform_altis_lizard",
		"rhsgref_uniform_altis_lizard_olive"
	  };
	  
      uniformContents[] = {
        {"ACE_fieldDressing",4},
        {"ACE_elasticBandage",3},
        {"ACE_quikclot",3},
        {"ACE_morphine",2},
        {"ACE_tourniquet",1},
        {"ACE_Splint",1},
        {"ACE_salineIV_500",1},
      };

      vest[] = {
		  "rhsgref_chicom",
		  "rhsgref_chicom_m88"
		  };
		  
      vestContents[] = {
        {"rhs_30Rnd_545x39_7N6M_AK",6},
        {"rhs_mag_rgd5",2},
        {"SmokeShell",2},
        {"ace_maptools",1}
      };

      backpack[] = {
		  "B_TacticalPack_rgr",
		  "B_TacticalPack_oli"
	  };
	  
      backpackContents[] = {
        {"rhs_30Rnd_545x39_7N6M_AK",5},
        {"SmokeShell",2},
        {"rhs_mag_rgd5",2}
      };
    };

  class SL: baseUnit {


	weapons[] = {
		  {
			{"rhs_weap_ak74n",
			  {"rhs_30Rnd_545x39_7N6M_AK", "rhs_acc_1p78"}
			},
			{"rhs_weap_ak74n_2",
			  {"rhs_30Rnd_545x39_7N6M_AK", "rhs_acc_1p78"}
			},
		  },
		  {"rhsusf_weap_m1911a1",{"rhsusf_mag_7x45acp_MHP"}},
			"Binocular"
		};

    vestContents[] = {
      {"rhs_30Rnd_545x39_7N6M_AK",5},
      {"rhs_mag_rgd5",2},
      {"SmokeShell",2},
      {"ace_maptools",1}
    };

   backpackContents[] = {
      {"rhs_30Rnd_545x39_7N6M_AK",5},
	  {"rhsusf_mag_7x45acp_MHP",3},
      {"SmokeShell",2},
      {"smokeshellgreen", 2},
      {"SmokeShellRed", 2},
	  {"rhs_mag_rgd5",2}
    };
	
  };
  
  class PL: SL {};
  class ZEUS: baseUnit {
	  
	  vest[] = {};
	  backpack[] = {};
	  weapons[] = {
					{"hgun_Pistol_heavy_02_F",
					{"6Rnd_45ACP_Cylinder"}}
			      };
	  
	  
	  headgear[] = {"H_Beret_CSAT_01_F"};
	  uniform[] = {"rhs_uniform_mflora_patchless"};
	  goggles[] = {"G_Aviator"};
	  
  };
  class TL: baseUnit {


	weapons[] = {
		  {
			{"rhs_weap_ak74n",
			  {"rhs_30Rnd_545x39_7N6M_AK", "rhs_acc_pkas"}
			},
			{"rhs_weap_ak74n_2",
			  {"rhs_30Rnd_545x39_7N6M_AK", "rhs_acc_pkas"}
			},
		  },
			"Binocular"
		};
  };

  class DFO: baseUnit {};
  class FSO: DFO {};
  class FO: DFO {};

  class RTO: baseUnit {
    backpack[]={"rhsgref_hidf_alicepack"};
    backpackContents[] = {
       {"rhs_30Rnd_545x39_7N6M_AK",5},
       {"SmokeShell",2},
       {"rhs_mag_rgd5",2},
      {"ACRE_PRC117F",1}
    };
  };

  class DM: baseUnit {

    weapons[] = {
      {"rhs_weap_m76",
        {"rhsgref_10Rnd_792x57_m76","rhs_acc_pso1m2"}
      },
	  {"rhsusf_weap_m1911a1",
		{"rhsusf_mag_7x45acp_MHP"}
	  },
		"Binocular"
	};

      vestContents[] = {
        {"rhsgref_10Rnd_792x57_m76",10},
        {"rhs_mag_rgd5",2},
        {"SmokeShell",2},
        {"ace_maptools",1}
      };

      backpackContents[] = {
        {"rhsgref_10Rnd_792x57_m76",6},
		{"rhsusf_mag_7x45acp_MHP",3},
        {"SmokeShell",2},
        {"rhs_mag_rgd5",2}
      };
  };
  class DMR: DM {};
  
  class GN: baseUnit {

    weapons[] = {
      {"rhs_weap_aks74u",
        {"rhs_30Rnd_545x39_7N6M_AK"},
      },
	  {"launch_RPG7_F",
		  {"rhs_rpg7_OG7V_mag"}
      }
    };

      vestContents[] = {
        {"rhs_30Rnd_545x39_7N6M_AK",8},
        {"rhs_mag_rgd5",2},
        {"SmokeShell",2},
        {"ace_maptools",1}
      };

      backpackContents[] = {
		{"rhs_rpg7_OG7V_mag",3},
		{"rhs_rpg7_TBG7V_mag",2},
        {"SmokeShell",2},
        {"rhs_mag_rgd5",2}
      };
  };
  
  class UGL: GN {};

  class GNA: baseUnit {
	  
	  backpackContents[] = {
      {"rhs_30Rnd_545x39_7N6M_AK",5},
      {"SmokeShell",2},
      {"rhs_mag_rgd5",2},
      {"rhs_rpg7_OG7V_mag", 3},
      {"rhs_rpg7_PG7V_mag", 2}
    };
	  
  };
  class UGLA: GNA {};
  

  class AT: baseUnit {
    weapons[] = {
      {"rhs_weap_aks74u",
        {"rhs_30Rnd_545x39_7N6M_AK"},
      },
	  {"launch_RPG7_F",
		  {"rhs_rpg7_PG7V_mag"}
      }
    };

      vestContents[] = {
        {"rhs_30Rnd_545x39_7N6M_AK",8},
        {"rhs_mag_rgd5",2},
        {"SmokeShell",2},
        {"ace_maptools",1}
      };

      backpackContents[] = {
		{"rhs_rpg7_PG7V_mag",2},
		{"rhs_rpg7_PG7VL_mag",2},
		{"rhs_rpg7_PG7VR_mag",1},
        {"SmokeShell",2},
        {"rhs_mag_rgd5",2}
      };
  };

  class ATA: baseUnit {
    backpackContents[] = {
      {"rhs_30Rnd_545x39_7N6M_AK",5},
      {"SmokeShell",2},
      {"rhs_mag_rgd5",2},
      {"rhs_rpg7_PG7V_mag", 1},
      {"rhs_rpg7_PG7VL_mag", 2},
	  {"rhs_rpg7_PG7VR_mag",1},
    };
  };
  
  class RPG: AT {};
  class RPGA: ATA {};

  class ME: baseUnit {
    ace_medic = 2;

    backpack[]={"rhsgref_hidf_alicepack"};
    backpackContents[] = {
      {"rhs_30Rnd_545x39_7N6M_AK",5},
      {"SmokeShell",2},
      {"ACE_fieldDressing",15},
      {"ACE_packingBandage",10},
      {"ACE_quikclot",15},
      {"ACE_elasticBandage",15},
      {"ACE_morphine",10},
      {"ACE_epinephrine",10},
      {"ACE_adenosine",10},
      {"ACE_salineIV_250",5},
      {"ACE_bloodIV_500",4},
      {"ACE_salineiv_500",4},
      {"ACE_personalAidKit",1},
      {"ACE_surgicalKit",1},
      {"ACE_splint",8},
      {"ACE_tourniquet",5}
    };
  };
  class MED: ME {};

  class RM: baseUnit {
	  
	    backpackContents[] = {
        {"rhs_30Rnd_545x39_7N6M_AK",10},
        {"SmokeShell",4},
        {"rhs_mag_rgd5",4}
      };
	  
  };
  class RF: RM {};

  class MG: baseUnit {

    weapons[] = {
      {"rhs_weap_akm_zenitco01_b33",
        {"rhs_75Rnd_762x39mm_tracer", "rhs_acc_dtkakm", "rhs_acc_ekp8_18", "rhs_acc_grip_ffg2"},
      },
    };
    vestContents[] = {
      {"rhsgref_296Rnd_792x57_SmK_belt",1},
      {"SmokeShell",2},
      {"rhsusf_mag_17Rnd_9x19_JHP",2},
      {"rhs_mag_rgd5",2},
      {"ace_maptools",1}
    };

    backpackContents[] = {
      {"rhsgref_296Rnd_792x57_SmK_belt",1},
      {"SmokeShell",2},
      {"rhs_mag_rgd5",2}
    };
  };
  class LMG: MG {};
  class MGA: baseUnit {

    weapons[] = {
      {"rhs_weap_ak74mr",
        {"rhs_30rnd_545x39_7n22_ak","rhs_acc_dtk2","rhs_acc_perst1ik_ris_2dp_light_h","rhs_acc_1p87",rhsusf_acc_grip1"},
      },
      {"rhsusf_weap_glock17g4",
        {"rhsusf_mag_17Rnd_9x19_JHP"}
      },
      "Binocular"
    };

    backpack[]={"rhsgref_hidf_alicepack"};
    backpackContents[] = {
      {"rhs_acc_dtk4short",1},
      {"rhs_30rnd_545x39_7n22_ak",4},
      {"SmokeShell",2},
      {"rhs_mag_rgd5",2},
      {"rhsgref_296Rnd_792x57_SmK_belt",2}
    };
  };

  class PT: baseUnit {};
  class PILOT: PT {};
};
