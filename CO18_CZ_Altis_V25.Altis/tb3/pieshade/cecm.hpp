  class cecm{
    class BaseUnit {
      ace_earplugs = 1;
      allowPlayerGoggles = 0;
      ace_medic = 1;

		weapons[] = 
		{
			{
				{
					"arifle_MSBS65_black_F",
					{
						"30Rnd_65x39_caseless_msbs_mag", "ace_muzzle_mzls_h", "optic_ico_01_black_f"
					}
				},
			},
			{
			  "hgun_P07_blk_F",
				{
					"16Rnd_9x21_Mag"
				}
			}
		};

      assignedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio"};

      headgear[] = {
		"H_HelmetB_light_snakeskin",
		"H_HelmetSpecB_light_snakeskin"
      };

    goggles[] = {
      "G_Combat",
      "G_Combat_Goggles_tna_F",
      "G_Tactical_Clear"
    };

      uniform[] = {
		"rhsgref_uniform_ttsko_mountain"
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
		  "rhsgref_6b23_ttsko_mountain",
		  "rhs_6b23_ML_engineer",
		  "rhs_6b23_ML_sniper",
		  "rhsgref_6b23_khaki_sniper",
		  "rhsgref_6b23_khaki"
		  };
		  
	  backpack[] = {
		  "B_TacticalPack_rgr"
	  };
	  
		  
      vestContents[] = {
        {"rhs_grenade_m1939l_f_mag",2},
        {"rhs_grenade_nbhgr39B_mag",2},
        {"ace_maptools",1}
      };


      backpackContents[] = {
        {"30Rnd_65x39_caseless_msbs_mag",10},
	    {"30Rnd_65x39_caseless_msbs_mag_tracer",2},
		{"16Rnd_9x21_Mag", 2},
        {"rhs_grenade_nbhgr39B_mag",2},
        {"rhs_grenade_m1939l_f_mag",2}
      };
    };

  class SL: baseUnit {


	weapons[] = {
		  {
			{"arifle_MSBS65_GL_black_F",
			  {"30Rnd_65x39_caseless_msbs_mag", "ace_muzzle_mzls_h", "optic_ico_01_black_f", "1Rnd_SmokeBlue_Grenade_shell"}
			},
		  },
		  {"hgun_P07_blk_F",{"16Rnd_9x21_Mag"}},
			"Binocular"
		};
		
		assignedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemGPS"};
		
		vest[] = {"rhsgref_6b23_khaki_officer"};

      vestContents[] = {
        {"rhs_grenade_m1939l_f_mag",2},
        {"rhs_grenade_nbhgr39B_mag",2},
        {"ace_maptools",1},
		{"ACRE_PRC148",1}
      };

   backpackContents[] = {
      {"30Rnd_65x39_caseless_msbs_mag",10},
	  {"30Rnd_65x39_caseless_msbs_mag_tracer",2},
	  {"16Rnd_9x21_Mag", 2},
      {"1Rnd_SmokeBlue_Grenade_shell", 2},
      {"1Rnd_SmokeGreen_Grenade_shell", 2},
	  {"1Rnd_SmokeRed_Grenade_shell", 2},
      {"rhs_grenade_nbhgr39B_mag",2},
	  {"rhs_grenade_m1939l_f_mag",2}
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
			{"arifle_MSBS65_black_F",
			  {"30Rnd_65x39_caseless_msbs_mag", "ace_muzzle_mzls_h", "optic_ico_01_black_f"}
			},
		  },
		  {"hgun_P07_blk_F",{"16Rnd_9x21_Mag"}},
			"Binocular"
		};
		
		assignedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemGPS"};
		vest[] = {"rhsgref_6b23_khaki_nco"};

      vestContents[] = {
        {"rhs_grenade_m1939l_f_mag",2},
        {"rhs_grenade_nbhgr39B_mag",2},
        {"ace_maptools",1},
		{"ACRE_PRC148",1}
      };

   backpackContents[] = {
      {"30Rnd_65x39_caseless_msbs_mag",10},
	  {"30Rnd_65x39_caseless_msbs_mag_tracer",2},
	  {"16Rnd_9x21_Mag", 2},
      {"rhs_grenade_nbhgr39B_mag",2},
	  {"rhs_grenade_m1939l_f_mag",2}
    };
  };

  class DFO: baseUnit {};
  class FSO: DFO {};
  class FO: DFO {};

  class RTO: baseUnit {
	  
   backpack[]={"rhsgref_ttsko_alicepack"};
	
   backpackContents[] = {
      {"30Rnd_65x39_caseless_msbs_mag",10},
	  {"30Rnd_65x39_caseless_msbs_mag_tracer",2},
	  {"16Rnd_9x21_Mag", 2},
      {"rhs_grenade_nbhgr39B_mag",2},
	  {"rhs_grenade_m1939l_f_mag",2},
      {"ACRE_PRC117F",1}
    };
  };

  class DM: baseUnit {

    weapons[] = {
      {"srifle_DMR_05_blk_F",
        {"10Rnd_93x64_DMR_05_Mag","optic_ams", "bipod_01_f_blk"}
      },
	  {"hgun_P07_blk_F",
		{"16Rnd_9x21_Mag"}
	  },
		"Binocular"
	};

      vestContents[] = {
        {"rhs_grenade_m1939l_f_mag",2},
		{"10Rnd_93x64_DMR_05_Mag",3},
        {"rhs_grenade_nbhgr39B_mag",1},
        {"ace_maptools",1},
      };
	  
     backpackContents[] = {
        {"10Rnd_93x64_DMR_05_Mag",10},
		{"muzzle_snds_93mmg", 1},
		{"16Rnd_9x21_Mag", 4},
        {"rhs_grenade_nbhgr39B_mag",2},
        {"rhs_grenade_m1939l_f_mag",2}

      };
  };
  class DMR: DM {};
  
  class GN: baseUnit {

	weapons[] = {
		  {
			{"arifle_MSBS65_GL_black_F",
			  {"30Rnd_65x39_caseless_msbs_mag", "ace_muzzle_mzls_h", "optic_ico_01_black_f", "rhs_mag_M433_HEDP"}
			},
		  },
		  {"hgun_P07_blk_F",{"16Rnd_9x21_Mag"}}
		};

      vestContents[] = {
        {"rhs_grenade_m1939l_f_mag",2},
        {"rhs_grenade_nbhgr39B_mag",2},
		{"rhs_mag_M433_HEDP", 6},
        {"ace_maptools",1}
      };

      backpackContents[] = {
        {"30Rnd_65x39_caseless_msbs_mag",10},
	    {"30Rnd_65x39_caseless_msbs_mag_tracer",2},
		{"16Rnd_9x21_Mag", 2},
        {"rhs_grenade_nbhgr39B_mag",2},
        {"rhs_grenade_m1939l_f_mag",2},
		{"rhs_mag_M433_HEDP", 10}
      };
  };
  
  class UGL: GN {};


  class AT: baseUnit {
    weapons[] = {
		{"arifle_MSBS65_black_F",
			  {"30Rnd_65x39_caseless_msbs_mag", "ace_muzzle_mzls_h", "optic_ico_01_black_f"}
		},
		{"launch_RPG7_F",
		  {"rhs_rpg7_PG7V_mag"}
		},
		{"hgun_P07_blk_F",{"16Rnd_9x21_Mag"}}
    };

      uniformContents[] = {
        {"ACE_fieldDressing",4},
        {"ACE_elasticBandage",3},
        {"ACE_quikclot",3},
        {"ACE_morphine",2},
        {"ACE_tourniquet",1},
        {"ACE_Splint",1},
        {"ACE_salineIV_500",1},
		{"16Rnd_9x21_Mag", 2}
      };

      vestContents[] = {
        {"30Rnd_65x39_caseless_msbs_mag",8},


      };

      backpackContents[] = {
		{"rhs_rpg7_PG7V_mag",2},
		{"rhs_rpg7_PG7VL_mag",2},
		{"rhs_rpg7_PG7VR_mag",1},
        {"rhs_grenade_nbhgr39B_mag",2},
		{"rhs_grenade_m1939l_f_mag",2},
		{"ace_maptools",1}
      };
  };

  class ATA: baseUnit {
	  
	  vestContents[] = {
        {"30Rnd_65x39_caseless_msbs_mag",6},
        {"rhs_grenade_m1939l_f_mag",2},
        {"ace_maptools",1}
      };
	     backpack[]={"rhsgref_ttsko_alicepack"};
		 
    backpackContents[] = {
      {"30Rnd_65x39_caseless_msbs_mag",10},
      {"rhs_grenade_nbhgr39B_mag",2},
      {"rhs_grenade_m1939l_f_mag",2},
      {"rhs_rpg7_PG7V_mag", 1},
      {"rhs_rpg7_PG7VL_mag", 2},
	  {"rhs_rpg7_PG7VR_mag",1},
    };
  };
  
  class RPG: AT {};
  class RPGA: ATA {};

  class ME: baseUnit {
    ace_medic = 2;

	vest[] = {"rhsgref_6b23_khaki_medic"};

      vestContents[] = {
		{"30Rnd_65x39_caseless_msbs_mag",5},
        {"rhs_grenade_m1939l_f_mag",2},
        {"rhs_grenade_nbhgr39B_mag",2},
        {"ace_maptools",1}
      };

    backpack[]={"rhsgref_hidf_alicepack"};
    backpackContents[] = {
      {"30Rnd_65x39_caseless_msbs_mag",5},
      {"rhs_grenade_nbhgr39B_mag",2},
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
	  
	      vestContents[] = {
        {"30Rnd_65x39_caseless_msbs_mag",4},
        {"rhs_grenade_m1939l_f_mag",2},
        {"rhs_grenade_nbhgr39B_mag",2},
        {"ace_maptools",1}
      };
	  
	    backpackContents[] = {
        {"30Rnd_65x39_caseless_msbs_mag",10},
		{"150Rnd_93x64_Mag",1},
        {"rhs_grenade_nbhgr39B_mag",2},
        {"rhs_grenade_m1939l_f_mag",6}
      };
	  
  };
  class RF: RM {};

  class MG: baseUnit {

    weapons[] = {
      {"MMG_01_black_F",
        {"150Rnd_93x64_Mag", "rhsusf_acc_acog_mdo"},
      },
	  {"hgun_P07_blk_F",{"16Rnd_9x21_Mag"}}
    };
      vestContents[] = {
        {"150Rnd_93x64_Mag",1},
        {"rhs_grenade_m1939l_f_mag",2},
        {"rhs_grenade_nbhgr39B_mag",2},
        {"ace_maptools",1}
      };
	  
      backpackContents[] = {
        {"150Rnd_93x64_Mag",3},
	    {"16Rnd_9x21_Mag",3},
        {"rhs_grenade_nbhgr39B_mag",2},
        {"rhs_grenade_m1939l_f_mag",2}
      };
  };
  class LMG: MG {};
  class MGA: baseUnit {

      vestContents[] = {
        {"30Rnd_65x39_caseless_msbs_mag",4},
        {"rhs_grenade_m1939l_f_mag",2},
        {"rhs_grenade_nbhgr39B_mag",2},
        {"ace_maptools",1}
      };

    backpack[]={"rhsgref_hidf_alicepack"};
     backpackContents[] = {
        {"150Rnd_93x64_Mag",4},
		{"30Rnd_65x39_caseless_msbs_mag",6},
        {"rhs_grenade_nbhgr39B_mag",2},
        {"rhs_grenade_m1939l_f_mag",2}
      };
  };

  class PILOT: baseUnit {
    weapons[] = {
      {"hgun_Rook40_F",{"16Rnd_9x21_Mag"}}
    };
	
	uniform[] = {"U_B_PilotCoveralls"};
    headgear[] = {"H_PilotHelmetFighter_I_E"};
    vest[] = {
      "V_CarrierRigKBT_01_Olive_F",
    };
    vestContents[] = {
      {"16Rnd_9x21_Mag",4},
      {"SmokeShellRed",2},
      {"ACRE_PRC148",1},
      {"ACE_MapTools",1},
      {"ACE_MicroDagr",1}
    };
    backpack[] = {
      "rhsusf_falconii_coy","rhsusf_falconii_mc"
    };
    backpackContents[] = {
      {"ToolKit",1}
    };
  };
  class PT: PILOT {};
  
  class ATCr {
    vehCargoWeapons[] = {
      {"rhs_weap_rpg75",10},
    };
  };
};
