<<<<<<< HEAD
  class CDF_Rus {
	class BaseUnit {
=======
<<<<<<<< HEAD:CO18_CZ_Kunduz_V29.Kunduz/tb3/murk/cdf_des.hpp
  class CDF_Des {
========
  class CDF_rus {
>>>>>>>> master:CO18_CZ_Kunduz_V30.Kunduz/tb3/murk/cdf_rus.hpp
    class BaseUnit {
>>>>>>> master
		ace_earplugs = 1;
		allowPlayerGoggles = 0;
		ace_medic = 1;

<<<<<<< HEAD
	weapons[] = {
			{
		{"CUP_arifle_AKMS_Early",
			{"RHS_30Rnd_762x39mm_89"},
	},
		{"RHS_Weap_PM63",
			{"RHS_30Rnd_762x39mm_89"},
	},
		{"CUP_arifle_AKM_Early",
			{"RHS_30Rnd_762x39mm_89"},
	}
		},	
	 	{"RHS_Weap_TT33",
			{"RHS_mag_762x25_8"}
=======
    weapons[] = {
<<<<<<<< HEAD:CO18_CZ_Kunduz_V29.Kunduz/tb3/murk/cdf_des.hpp
			{
		{"CUP_arifle_Mk16_CQC_AFG",
			{"CUP_30Rnd_556x45_EMAG_Tan","ace_acc_pointer_green","RHSUSF_acc_SU230_c"},
	},
		{"CUP_arifle_Mk16_CQC_FG",
			{"CUP_30Rnd_556x45_EMAG_Tan","ace_acc_pointer_green","RHSUSF_acc_SU230_c"},
	},
		{"CUP_arifle_Mk16_STD_AFG",
			{"CUP_30Rnd_556x45_EMAG_Tan","ace_acc_pointer_green","RHSUSF_acc_SU230_c"},
	},
		{"CUP_arifle_Mk16_STD_FG",
			{"CUP_30Rnd_556x45_EMAG_Tan","ace_acc_pointer_green","RHSUSF_acc_SU230_c"},
	}
		},	
	 	{"CUP_hgun_Phantom",
			{"CUP_18Rnd_9x19_Phantom"}
>>>>>>> master
	}
		};

		assignedItems[] = {"ItemMap","ItemCompass","ItemWatch"};

<<<<<<< HEAD
	headgear[] = {
		"RHS_6b27m_green",
		"RHS_6b27m_green_bala",
		"RHS_6b27m_ml",
		"RHS_6b27m_ml_bala",
		};

	goggles[] = {"RHS_googles_clear"};

	uniform[] = {"RHS_uniform_flora_patchless_alt"};
	uniformContents[] = {
		{"ACRE_SEM52SL",1},
		{"ACE_maptools",1},
=======
    headgear[] = {"RHSUSF_opscore_mar_ut_pelt"};

    goggles[] = {
		"RHS_googles_clear",
		"RHSUSF_oakley_goggles_clr"
		};

    uniform[] = {"RHS_uniform_g3_Tan"};
    uniformContents[] = {
		{"ACRE_SEM52SL",1},
>>>>>>> master
		{"ACE_fieldDressing",4},
		{"ACE_elasticBandage",4},
		{"ACE_quikclot",4},
		{"ACE_morphine",2},
		{"ACE_adenosine",1},
		{"ACE_tourniquet",2},
		{"ACE_Splint",2},
		{"ACE_salineIV_250",1},
		{"ACE_Flashlight_XL50",1}
		};

<<<<<<< HEAD
	vest[] = {"RHS_6b23_ML_6Sh92"};
	vestContents[] = {
		{"RHS_30Rnd_762x39mm_89",4},
		{"RHS_mag_rdg2_black",2},
		{"RHS_mag_rgd5",2},
		{"RHS_mag_762x25_8",2}
		};

	backpack[] = {"CUP_B_AlicePack_Bedroll"};
	backpackContents[] = {
		{"RHS_1PN138",1},
		{"ACE_entrenchingtool",1},
		{"RHS_30Rnd_762x39mm_89",6},
		{"ACE_salineIV_500",1},
		{"RHS_mag_rdg2_black",2},
		{"RHS_mag_rgd5",2}
		};
	};

class SL: BaseUnit {
	weapons[] = {
			{
		{"CUP_arifle_AKMS_Early",
			{"RHS_30Rnd_762x39mm_89"},
	},
		{"RHS_Weap_PM63",
			{"RHS_30Rnd_762x39mm_89"},
	},
		{"CUP_arifle_AKM_Early",
			{"RHS_30Rnd_762x39mm_89"},
	}
		},	
	 	{"RHS_Weap_TT33",
			{"RHS_mag_762x25_8"}
		},
		"ACE_Yardage450"
	};

	vest[] = {"RHS_6b23_ML_6Sh92_Headset_Mapcase"};

	backpackContents[] = {
		{"RHS_1PN138",1},
		{"ACRE_PRC152",1},
		{"ACE_DAGR",1},
		{"ACE_IR_strobe_item",1},
		{"ACE_entrenchingtool",1},
		{"RHS_30Rnd_762x39mm_89",6},
		{"ACE_salineIV_500",1},
		{"RHS_mag_rdg2_black",2},
		{"RHS_mag_rgd5",2}	
		};
	};

class TL: SL {
	weapons[] = {
			{
		{"CUP_arifle_AKMS_Early",
			{"RHS_30Rnd_762x39mm_89"},
	},
		{"RHS_Weap_PM63",
			{"RHS_30Rnd_762x39mm_89"},
	},
		{"CUP_arifle_AKM_Early",
			{"RHS_30Rnd_762x39mm_89"},
	}
		},	
	 	{"RHS_Weap_TT33",
			{"RHS_mag_762x25_8"}
		},
	};

	vest[] = {"RHS_6b23_ML_6Sh92_Headset"};

	backpackContents[] = {
		{"RHS_1PN138",1},
		{"ACE_DAGR",1},
		{"ACE_IR_strobe_item",1},
		{"ACE_entrenchingtool",1},
		{"RHS_30Rnd_762x39mm_89",6},
		{"ACE_salineIV_500",1},
		{"RHS_mag_rdg2_black",2},
		{"RHS_mag_rgd5",2}	
		};
	};
=======
    vest[] = {"RHSUSF_MBAV_Rifleman"};
    vestContents[] = {
		{"RHSUSF_acc_rotex5_grey",1},
		{"CUP_30Rnd_556x45_EMAG_Tan",4},
		{"RHS_mag_nspd",2},
		{"RHS_mag_rgd5",2},
		{"CUP_18Rnd_9x19_Phantom",2},
		{"ace_maptools",1}
		};

    backpack[] = {"B_Kitbag_cbr"};
    backpackContents[] = {
		{"O_NVGoggles_grn_f",1},
		{"ACE_entrenchingtool",1},
		{"CUP_30Rnd_556x45_EMAG_Tan",6},
		{"ACE_salineIV_500",1},
		{"RHS_mag_nspd",2},
		{"RHS_mag_rgd5",2}
		};
========
      {
        {"CUP_arifle_AK107_railed",
          {"ace_acc_pointer_green","optic_Holosight_blk_F","rhs_30Rnd_545x39_7N22_AK","rhs_acc_dtk2"}
        },
        {"CUP_arifle_AK105_railed",
          {"ace_acc_pointer_green","optic_Holosight_blk_F","rhs_30Rnd_545x39_7N22_AK","rhs_acc_dtk2"}
        }
      },	
        {"hgun_rook40_f",
          {"16rnd_9x21_mag"}
        }
      };

      assignedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio"};

      headgear[] = {
        "H_HelmetAggressor_cover_F",
        "H_HelmetAggressor_F"
      };

      goggles[] = {
        "rhsusf_shemagh_gogg_grn",
        "rhsusf_shemagh2_gogg_grn",
        "rhsusf_shemagh_gogg_od",
        "rhsusf_shemagh2_gogg_od",
        "rhsusf_shemagh_gogg_tan",		
        "rhsusf_shemagh2_gogg_tan"
      };

      uniform[] = {"U_O_R_Gorka_01_F"};
      uniformContents[] = {
        {"ACE_fieldDressing",4},
        {"ACE_elasticBandage",4},
        {"ACE_quikclot",4},
        {"ACE_morphine",2},
        {"ACE_adenosine",1},
        {"ACE_tourniquet",2},
        {"ACE_Splint",2},
        {"ACE_salineIV_500",1},
        {"ACE_Flashlight_XL50",1}
      };

      vest[] = {V_CarrierRigKBT_01_light_Olive_F};
      vestContents[] = {
        {"rhs_30Rnd_545x39_7N22_AK",6},
        {"handgrenade",2},
        {"SmokeShell",2},
        {"16rnd_9x21_mag",2},
        {"ace_maptools",1}
      };

      backpack[] = {"b_kitbag_rgr"};
      backpackContents[] = {
        {"o_nvgoggles_grn_f",1},
        {"rhs_acc_dtk4short", 1},
        {"rhs_30Rnd_545x39_7N22_AK",4},
        {"SmokeShell",2},
        {"handgrenade",2}
      };
>>>>>>>> master:CO18_CZ_Kunduz_V30.Kunduz/tb3/murk/cdf_rus.hpp
    };

class SL: BaseUnit {
    weapons[] = {
<<<<<<<< HEAD:CO18_CZ_Kunduz_V29.Kunduz/tb3/murk/cdf_des.hpp
			{
		{"CUP_arifle_Mk16_CQC_AFG",
			{"CUP_30Rnd_556x45_EMAG_Tan","ace_acc_pointer_green","RHSUSF_acc_SU230_c"},
	},
		{"CUP_arifle_Mk16_CQC_FG",
			{"CUP_30Rnd_556x45_EMAG_Tan","ace_acc_pointer_green","RHSUSF_acc_SU230_c"},
	},
		{"CUP_arifle_Mk16_STD_AFG",
			{"CUP_30Rnd_556x45_EMAG_Tan","ace_acc_pointer_green","RHSUSF_acc_SU230_c"},
	},
		{"CUP_arifle_Mk16_STD_FG",
			{"CUP_30Rnd_556x45_EMAG_Tan","ace_acc_pointer_green","RHSUSF_acc_SU230_c"},
	}
		},	
	 	{"CUP_hgun_Phantom",
			{"CUP_18Rnd_9x19_Phantom"}
		},
		"ace_vector"
    };

	headgear[] = {"RHSUSF_opscore_mar_ut_pelt"};

	vest[] = {"RHSUSF_PlateFrame_Teamleader"};

    backpackContents[] = {
		{"O_NVGoggles_grn_f",1},
		{"ACRE_PRC152",1},
		{"ACE_MicroDAGR",1},
		{"ACE_IR_strobe_item",1},
		{"ITC_land_tablet_rover",1},
		{"ACE_entrenchingtool",1},
		{"CUP_30Rnd_556x45_EMAG_Tan",6},
		{"ACE_salineIV_500",1},
		{"RHS_mag_nspd",2},
		{"RHS_mag_rgd5",2}	
		};
    };

class TL: SL {
    weapons[] = {
			{
		{"CUP_arifle_Mk16_CQC_AFG",
			{"CUP_30Rnd_556x45_EMAG_Tan","ace_acc_pointer_green","RHSUSF_acc_SU230_c"},
	},
		{"CUP_arifle_Mk16_CQC_FG",
			{"CUP_30Rnd_556x45_EMAG_Tan","ace_acc_pointer_green","RHSUSF_acc_SU230_c"},
	},
		{"CUP_arifle_Mk16_STD_AFG",
			{"CUP_30Rnd_556x45_EMAG_Tan","ace_acc_pointer_green","RHSUSF_acc_SU230_c"},
	},
		{"CUP_arifle_Mk16_STD_FG",
			{"CUP_30Rnd_556x45_EMAG_Tan","ace_acc_pointer_green","RHSUSF_acc_SU230_c"},
	}
		},	
	 	{"CUP_hgun_Phantom",
			{"CUP_18Rnd_9x19_Phantom"}
		},
    };

    backpackContents[] = {
		{"O_NVGoggles_grn_f",1},
		{"ACE_MicroDAGR",1},
		{"ACE_IR_strobe_item",1},
		{"ACE_entrenchingtool",1},
		{"CUP_30Rnd_556x45_EMAG_Tan",6},
		{"ACE_salineIV_500",1},
		{"RHS_mag_nspd",2},
		{"RHS_mag_rgd5",2}	
		};
========
      {
        {"CUP_arifle_AK107_railed",
          {"ace_acc_pointer_green","rhsusf_acc_su230","rhs_30Rnd_545x39_7N22_AK","rhs_acc_dtk2"}
        },
        {"CUP_arifle_AK105_railed",
          {"ace_acc_pointer_green","rhsusf_acc_su230","rhs_30Rnd_545x39_7N22_AK","rhs_acc_dtk2"}
        }
      },	
        {"hgun_rook40_f",
          {"16rnd_9x21_mag"}
      },
      "ace_vector"
    };
    vest[] = {"V_CarrierRigKBT_01_heavy_Olive_F"};
    vestContents[] = {
      {"rhs_30Rnd_545x39_7N22_AK",6},
      {"handgrenade", 2},
      {"acre_prc148",1},
      {"16rnd_9x21_mag",2},
      {"itc_land_tablet_rover",1},
      {"ace_maptools",1}
    };

    backpackContents[] = {
      {"o_nvgoggles_grn_f",1},
      {"rhs_acc_dtk4short", 1},
      {"handgrenade", 2},
      {"rhs_30Rnd_545x39_7N22_AK",6},
      {"ace_ir_strobe_item",1},
      {"SmokeShell",2},
      {"SmokeshellRed", 4},
      {"SmokeShellGreen", 4},
      {"ace_microdagr",1}
    };
  };
  class PL: SL {};
  class ZEUS: SL {};
  class TL: SL {
    weapons[] = {
      {
        {"CUP_arifle_AK107_railed",
          {"ace_acc_pointer_green","optic_Holosight_blk_F","rhs_30Rnd_545x39_7N22_AK","rhs_acc_dtk2"}
        },
        {"CUP_arifle_AK105_railed",
          {"ace_acc_pointer_green","optic_Holosight_blk_F","rhs_30Rnd_545x39_7N22_AK","rhs_acc_dtk2"}
        }
      },	
        {"hgun_rook40_f",
          {"16rnd_9x21_mag"}
        },
        "ace_vector"
      };
    vest[] = {"V_CarrierRigKBT_01_light_Olive_F"};
    vestContents[] = {
      {"rhs_30Rnd_545x39_7N22_AK",6},
      {"handgrenade", 2},
      {"acre_prc148",1},
      {"16rnd_9x21_mag",2},
      {"ace_maptools",1}
    };

    backpackContents[] = {
      {"o_nvgoggles_grn_f",1},
      {"rhs_acc_dtk4short", 1},
      {"handgrenade", 2},
      {"ace_ir_strobe_item",1},
      {"rhs_30Rnd_545x39_7N22_AK",6},
      {"SmokeShell",2},
      {"SmokeshellRed", 4},
      {"SmokeShellGreen", 4},
      {"ace_microdagr",1}
>>>>>>>> master:CO18_CZ_Kunduz_V30.Kunduz/tb3/murk/cdf_rus.hpp
    };
>>>>>>> master

class PL: SL {};
class ZEUS: SL {};

<<<<<<< HEAD
class FO: SL {
	assignedItems[] = {"ItemMap","ItemCompass","ItemWatch"};

	weapons[] = {
			{
		{"CUP_arifle_AKMS_Early",
			{"RHS_30Rnd_762x39mm_89"},
	},
		{"RHS_Weap_PM63",
			{"RHS_30Rnd_762x39mm_89"},
	},
		{"CUP_arifle_AKM_Early",
			{"RHS_30Rnd_762x39mm_89"},
	}
		},	
	 	{"RHS_Weap_TT33",
			{"RHS_mag_762x25_8"}
		},
		"LaserDesignator_03"
	};

	backpack[] = {"CUP_B_AlicePack_Bedroll"};
	backpackContents[] = {
		{"RHS_1PN138",1},
		{"ACRE_PRC152",1},
		{"ACE_DAGR",1},
		{"RHS_Mag_NSPD",6},
	 	{"LaserBatteries",2},
		{"ACE_entrenchingtool",1},
		{"ACE_salineIV_500",1},
		{"RHS_30Rnd_762x39mm_89",6}
		};
	};

class RF: BaseUnit {
	backpackContents[] = {
		{"RHS_1PN138",1},
		{"ACE_entrenchingtool",1},
		{"RHS_30Rnd_762x39mm_89",6},
		{"RHS_100Rnd_762x54mmR_7BZ3",1},
		{"ACE_salineIV_500",1},
		{"RHS_mag_rdg2_black",2},
		{"RHS_mag_rgd5",4}
		};
	};

class FSO: FO {};

class DEMO: BaseUnit {
	backpack[] = {"RHSGREF_ttsko_alicepack"};	
	backpackContents[] = {
		{"RHS_1PN138",1},
		{"ACE_entrenchingtool",1},
		{"RHS_30Rnd_762x39mm_89",6},
		{"SatchelCharge_Remote_Mag",2},
		{"ACE_M26_clacker",1},
		{"ACE_salineIV_500",1},
		{"RHS_mag_rdg2_black",2},
		{"RHS_mag_rgd5",2}
		};
	};

class RTO: BaseUnit {
	backpack[] = {"CRAB_RadioBag_01_eaf_F"};	
	backpackContents[] = {
		{"RHS_1PN138",1},
		{"ACE_entrenchingtool",1},
		{"RHS_30Rnd_762x39mm_89",4},
		{"ACRE_PRC117F",1},
		{"ACE_salineIV_500",1},
		{"RHS_mag_rdg2_black",2},
		{"RHS_mag_rgd5",2}
		};
	};	

class UGL: BaseUnit {
	weapons[] = {
			{
		{"CUP_arifle_AKMS_GL_Early",
			{"RHS_30Rnd_762x39mm_89","RHS_VOG25"},
	},
		{"CUP_arifle_AKM_GL_Early",
			{"RHS_30Rnd_762x39mm_89","RHS_VOG25"},
	}
		},	
	 	{"RHS_Weap_TT33",
			{"RHS_mag_762x25_8"}
		},
	};

	vest[] = {"RHS_6b23_ML_6Sh92_Vog"};

	backpack[] = {"CUP_B_AlicePack_Bedroll"};	
	backpackContents[] = {
		{"RHS_1PN138",1},
		{"ACE_entrenchingtool",1},
		{"RHS_30Rnd_762x39mm_89",6},
		{"RHS_VOG25P",8},
		{"RHS_VOG25",12},
		{"RHS_VG40TB",4},
		{"RHS_VG40MD",4},
		{"ACE_salineIV_500",1},	
		{"RHS_mag_rdg2_black",2},
		{"RHS_mag_rgd5",2}
		};
	};
	
class MGL: BaseUnit {
	weapons[] = {
		{"CUP_glaunch_6G30",
			{"CUP_6Rnd_HE_GP25_M"}
		},
	 	{"RHS_Weap_TT33",
			{"RHS_mag_762x25_8"}
		},
	};

	vest[] = {"RHS_6b23_ML_Engineer"};
	vestContents[] = {
		{"RHS_mag_762x25_8",6}
		};

	backpack[] = {"RHSGREF_ttsko_alicepack"};
	backpackContents[] = {
		{"RHS_1PN138",1},
		{"CUP_6Rnd_HE_GP25_M",8},
		{"RHS_VG40TB",6},
		{"RHS_VG40MD",6},
		{"RHS_mag_rdg2_black",2},
		{"RHS_mag_rgd5",4}
		};
	};		

class DM: BaseUnit {
	weapons[] = {
		{"CUP_srifle_SVD",
			{"RHS_10Rnd_762x54mmR_7N14","RHS_acc_pso1m2"}
		},
	 	{"RHS_Weap_TT33",
			{"RHS_mag_762x25_8"}
		},
		"binocular"
	};

	vest[] = {"RHS_6B23_ML_Sniper"};
	vestContents[] = {
		{"RHS_10Rnd_762x54mmR_7N14",8},
		{"ACE_10Rnd_762x54_Tracer_mag",2},
		{"RHS_mag_762x25_8",2}
		};

	backpack[] = {"CUP_B_AlicePack_Bedroll"};
	backpackContents[] = {
		{"RHS_1PN138",1},
		{"CUP_Optic_Goshawk",1},
		{"ACE_entrenchingtool",1},
		{"RHS_10Rnd_762x54mmR_7N14",4},
		{"ACE_salineIV_500",1},
		{"RHS_mag_rdg2_black",2},
		{"RHS_mag_rgd5",2}
		};
	};

class LMG: BaseUnit {
	weapons[] = {
		{"CUP_arifle_RPK74",
			{"RHS_75Rnd_762x39mm_89","RHS_acc_pso1m21"}
		},
	 	{"RHS_Weap_TT33",
			{"RHS_mag_762x25_8"}
		},
	};

	vest[] = {"RHS_6b23_ML_Vydra_3m"};
	vestContents[] = {
		{"RHS_mag_rdg2_black",2},
		{"RHS_mag_rgd5",2},
		{"RHS_mag_762x25_8",2}
		};

	backpack[] = {"CUP_B_AlicePack_Bedroll"};
	backpackContents[] = {
		{"RHS_1PN138",1},
		{"ACE_entrenchingtool",1},
		{"RHS_75Rnd_762x39mm_89",8},
		{"ACE_salineIV_500",1},
		};
	};

class GPMG: BaseUnit {
	weapons[] = {
		{"RHS_Weap_PKM",
			{"RHS_100Rnd_762x54mmR_7BZ3"}
		},
	 	{"RHS_Weap_TT33",
		{"RHS_mag_762x25_8"}
		},
	};

	vest[] = {"RHS_6Sh92_VSR"};
	vestContents[] = {
		{"RHS_mag_762x25_8",2},
		{"ACE_salineIV_500",1},
		{"RHS_mag_rdg2_black",2},
		{"RHS_mag_rgd5",2}
		};

	backpack[] = {"CUP_B_AlicePack_Bedroll"};
	backpackContents[] = {
		{"RHS_1PN138",1},
		{"ACE_entrenchingtool",1},
		{"RHS_100Rnd_762x54mmR_7BZ3",3},
		{"RHS_100Rnd_762x54mmR_green",1}
		};
	};

class GPMGA: BaseUnit {
	weapons[] = {
		{"CUP_arifle_AKMS",
			{"RHS_30Rnd_762x39mm_89","RHS_acc_pso1m21"}
		},
	 	{"RHS_Weap_TT33",
			{"RHS_mag_762x25_8"}
		},
	  "binocular"
	};

	vest[] = {"RHS_6Sh92_VSR"};

	backpack[] = {"RHSGREF_ttsko_alicepack"};
	backpackContents[] = {
		{"RHS_1PN138",1},
		{"RHS_30Rnd_762x39mm_89",6},
		{"RHS_100Rnd_762x54mmR_7BZ3",3},
		{"ACE_salineIV_500",1}
		};
	};	

class MAT: BaseUnit {
	weapons[] = {
			{
		{"CUP_arifle_AKMS_Early",
			{"RHS_30Rnd_762x39mm_89"},
	},
		{"RHS_Weap_PM63",
			{"RHS_30Rnd_762x39mm_89"},
	},
		{"CUP_arifle_AKM_Early",
			{"RHS_30Rnd_762x39mm_89"},
	}
		},	
	 	{"RHS_Weap_TT33",
			{"RHS_mag_762x25_8"}
		},
		{"RHS_Weap_RPG7",
			{"RHS_RPG7_PG7V_Mag", "RHS_Acc_PGO7V3"}
		}
	};

	vest[] = {"RHS_6b23_ML_6Sh92"};

	backpack[] = {"CUP_B_AlicePack_Bedroll"};
	backpackContents[] = {
		{"RHS_1PN138",1},
		{"ACE_entrenchingtool",1},
		{"RHS_30Rnd_762x39mm_89",6},
		{"RHS_RPG7_PG7V_Mag",1},
		{"RHS_RPG7_OG7V_Mag",1},
		{"ACE_salineIV_500",1}
		};
	};	
	
class MATA: BaseUnit {
	weapons[] = {
			{
		{"CUP_arifle_AKMS_Early",
			{"RHS_30Rnd_762x39mm_89"},
	},
		{"RHS_Weap_PM63",
			{"RHS_30Rnd_762x39mm_89"},
	},
		{"CUP_arifle_AKM_Early",
			{"RHS_30Rnd_762x39mm_89"},
	}
		},	
	 	{"RHS_Weap_TT33",
			{"RHS_mag_762x25_8"}
		},
	  "ACE_Yardage450"
	};

	backpack[] = {"RHSGREF_ttsko_alicepack"};
	backpackContents[] = {
		{"RHS_1PN138",1},
		{"ACE_entrenchingtool",1},
		{"RHS_30Rnd_762x39mm_89",6},
		{"RHS_RPG7_PG7V_Mag",2},
		{"RHS_RPG7_OG7V_Mag",3},
		{"ACE_salineIV_500",1}
		};
	};

class HAT: BaseUnit {
	weapons[] = {
			{
		{"CUP_arifle_AKMS_Early",
			{"RHS_30Rnd_762x39mm_89"},
	},
		{"RHS_Weap_PM63",
			{"RHS_30Rnd_762x39mm_89"},
	},
		{"CUP_arifle_AKM_Early",
			{"RHS_30Rnd_762x39mm_89"},
	}
		},	
	 	{"RHS_Weap_TT33",
			{"RHS_mag_762x25_8"}
		},
		{"RHS_Weap_RPG7",
			{"RHS_RPG7_PG7VL_Mag", "RHS_Acc_PGO7V3"}
		}
	};

	vest[] = {"RHS_6b23_ML_Engineer"};
	vestContents[] = {
		{"RHS_mag_762x25_8",2},
		{"RHS_30Rnd_762x39mm_89",2}
		};

	backpack[] = {"CUP_B_AlicePack_Bedroll"};
	backpackContents[] = {
		{"RHS_1PN138",1},
		{"ACE_entrenchingtool",1},
		{"RHS_30Rnd_762x39mm_89",8},
		{"RHS_mag_rgd5",2},
		{"RHS_mag_rdg2_black",2},
		{"RHS_RPG7_TBG7V_Mag"},
		{"RHS_RPG7_PG7VR_Mag",1}
		};
	};	
	
class HATA: BaseUnit {
	weapons[] = {
			{
		{"CUP_arifle_AKMS_Early",
			{"RHS_30Rnd_762x39mm_89"},
	},
		{"RHS_Weap_PM63",
			{"RHS_30Rnd_762x39mm_89"},
	},
		{"CUP_arifle_AKM_Early",
			{"RHS_30Rnd_762x39mm_89"},
	}
		},	
	 	{"RHS_Weap_TT33",
			{"RHS_mag_762x25_8"}
		},
	  "ACE_Yardage450"
	};

	backpack[] = {"RHSGREF_ttsko_alicepack"};
	backpackContents[] = {
	{"RHS_1PN138",1},
	{"ACE_entrenchingtool",1},
	{"RHS_30Rnd_762x39mm_89",4},
	{"RHS_RPG7_PG7VR_Mag",1},
	{"RHS_RPG7_TBG7V_Mag",2}
		};
	};
=======
class FSO: SL {
	assignedItems[] = {"ItemMap","ItemCompass","ItemWatch","B_UavTerminal"};

    weapons[] = {
<<<<<<<< HEAD:CO18_CZ_Kunduz_V29.Kunduz/tb3/murk/cdf_des.hpp
			{
		{"CUP_arifle_Mk16_CQC_AFG",
			{"CUP_30Rnd_556x45_EMAG_Tan","ace_acc_pointer_green","RHSUSF_acc_SU230_c"},
	},
		{"CUP_arifle_Mk16_CQC_FG",
			{"CUP_30Rnd_556x45_EMAG_Tan","ace_acc_pointer_green","RHSUSF_acc_SU230_c"},
	},
		{"CUP_arifle_Mk16_STD_AFG",
			{"CUP_30Rnd_556x45_EMAG_Tan","ace_acc_pointer_green","RHSUSF_acc_SU230_c"},
	},
		{"CUP_arifle_Mk16_STD_FG",
			{"CUP_30Rnd_556x45_EMAG_Tan","ace_acc_pointer_green","RHSUSF_acc_SU230_c"},
	}
		},	
	 	{"CUP_hgun_Phantom",
			{"CUP_18Rnd_9x19_Phantom"}
		},
		"ace_vector"
    };

    vest[] = {"RHSUSF_PlateFrame_Teamleader"};
    vestContents[] = {
		{"RHSUSF_acc_rotex5_grey",1},
		{"CUP_30Rnd_556x45_EMAG_Tan",4},
		{"RHS_mag_nspd",2},
		{"RHS_mag_rgd5",2},
		{"CUP_18Rnd_9x19_Phantom",2},
		{"ace_maptools",1}
		};

	backpack[] = {"ITC_Land_o_uav_backpack"};
    backpackContents[] = {
		{"O_NVGoggles_grn_f",1},
		{"ACRE_PRC152",1},
		{"ACE_MicroDAGR",1},
		{"ITC_Land_B_AR2i_Packed",2},
		{"ACE_UAVBattery",2},
		{"O_R_IR_grenade",2},
		{"CUP_30Rnd_556x45_EMAG_Tan",4}
		};
    };

class FO: SL {
	assignedItems[] = {"ItemMap","ItemCompass","ItemWatch"};

    weapons[] = {
			{
		{"CUP_arifle_Mk16_CQC_AFG",
	  		{"CUP_30Rnd_556x45_EMAG_Tan","ace_acc_pointer_green","RHSUSF_acc_SU230_c"},
	},
		{"CUP_arifle_Mk16_CQC_FG",
			{"CUP_30Rnd_556x45_EMAG_Tan","ace_acc_pointer_green","RHSUSF_acc_SU230_c"},
	},
		{"CUP_arifle_Mk16_STD_AFG",
			{"CUP_30Rnd_556x45_EMAG_Tan","ace_acc_pointer_green","RHSUSF_acc_SU230_c"},
	},
		{"CUP_arifle_Mk16_STD_FG",
			{"CUP_30Rnd_556x45_EMAG_Tan","ace_acc_pointer_green","RHSUSF_acc_SU230_c"},
	}
		},	
	 	{"CUP_hgun_Phantom",
			{"CUP_18Rnd_9x19_Phantom"}
		},
		"LaserDesignator_03"
    };

	backpack[] = {"B_Kitbag_cbr"};
    backpackContents[] = {
		{"O_NVGoggles_grn_f",1},
		{"ACRE_PRC152",1},
		{"ACE_MicroDAGR",1},
	 	{"LaserBatteries",2},
		{"ITC_land_tablet_rover",1},
		{"ACE_entrenchingtool",1},
		{"ACE_salineIV_500",1},
		{"CUP_30Rnd_556x45_EMAG_Tan",6}
		};
========
      {
        {"CUP_arifle_AK107_railed",
          {"ace_acc_pointer_green","optic_Holosight_blk_F","rhs_30Rnd_545x39_7N22_AK","rhs_acc_dtk2"}
        },
        {"CUP_arifle_AK105_railed",
          {"ace_acc_pointer_green","optic_Holosight_blk_F","rhs_30Rnd_545x39_7N22_AK","rhs_acc_dtk2"}
        }
      },	
        {"hgun_rook40_f",
          {"16rnd_9x21_mag"}
        },
        "ace_vector"
      };
    vest[] = {"V_CarrierRigKBT_01_heavy_Olive_F"};
    vestContents[] = {
      {"acre_prc148",2},
      {"rhs_30Rnd_545x39_7N22_AK",6},
      {"handgrenade", 2},
      {"SmokeShell",2},
      {"SmokeshellRed", 2},
      {"SmokeShellGreen", 2},
      {"16rnd_9x21_mag",2},
      {"ace_maptools",1}
    };

    backpack[]={"b_carryall_green_f"};
    backpackContents[] = {
      {"o_nvgoggles_grn_f",1},
      {"rhs_acc_dtk4short", 1},
      {"rhs_30Rnd_545x39_7N22_AK",6},
      {"SmokeShell",2},
      {"SmokeshellRed", 2},
      {"SmokeShellGreen", 2},
      {"ace_microdagr",1},
      {"ITC_Land_B_AR2i_Packed",2},
      {"ACE_UAVBattery",2}
    };
  };

  class FSO: DFO {};
  class FO: DFO {
    assignedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio"};

    weapons[] = {
      {
        {"CUP_arifle_AK107_railed",
          {"ace_acc_pointer_green","optic_Holosight_blk_F","rhs_30Rnd_545x39_7N22_AK","rhs_acc_dtk2"}
        },
        {"CUP_arifle_AK105_railed",
          {"ace_acc_pointer_green","optic_Holosight_blk_F","rhs_30Rnd_545x39_7N22_AK","rhs_acc_dtk2"}
        }
      },	
        {"hgun_rook40_f",
        {"16rnd_9x21_mag"}
      },
      "Laserdesignator_03"
    };
    vest[] = {"V_CarrierRigKBT_01_light_Olive_F"};
    vestContents[] = {
      {"acre_prc148",1},
      {"rhs_30Rnd_545x39_7N22_AK",6},
      {"handgrenade", 2},
      {"SmokeShell",2},
      {"SmokeshellRed", 2},
      {"SmokeShellGreen", 2},
      {"16rnd_9x21_mag",2},
      {"ace_maptools",1}
    };

    backpack[]={"b_carryall_green_f"};
    backpackContents[] = {
      {"o_nvgoggles_grn_f",1},
      {"rhs_acc_dtk4short", 1},
      {"handgrenade", 2},
      {"rhs_30Rnd_545x39_7N22_AK",6},
      {"SmokeShell",2},
      {"SmokeshellRed", 2},
      {"SmokeShellGreen", 2},
      {"laserbatteries",2},
      {"ace_microdagr",1}
>>>>>>>> master:CO18_CZ_Kunduz_V30.Kunduz/tb3/murk/cdf_rus.hpp
    };

<<<<<<<< HEAD:CO18_CZ_Kunduz_V29.Kunduz/tb3/murk/cdf_des.hpp
class RF: BaseUnit {
========
  class RTO: baseUnit {
    backpack[]={"crab_radiobag_01_wdl_f"};
    backpackContents[] = {
      {"o_nvgoggles_grn_f",1},
      {"rhs_acc_dtk4short", 1},
      {"handgrenade", 2},
      {"rhs_30Rnd_545x39_7N22_AK",6},
      {"SmokeShell",2},
      {"ACRE_PRC117F",1}
    };
  };
>>>>>>>> master:CO18_CZ_Kunduz_V30.Kunduz/tb3/murk/cdf_rus.hpp

    vest[] = {
		"RHSUSF_MBAV_Rifleman",
		"RHSUSF_PlateFrame_Rifleman"
		};

    backpackContents[] = {
		{"O_NVGoggles_grn_f",1},
		{"ACE_entrenchingtool",1},
		{"CUP_30Rnd_556x45_EMAG_Tan",6},
		{"150Rnd_556x45_Drum_Sand_Mag_F",1},
		{"ACE_salineIV_500",1},
		{"RHS_mag_nspd",2},
		{"RHS_mag_rgd5",4}
		};
    };

class DEMO: BaseUnit {
	backpack[] = {"B_Carryall_CBR"};	
    backpackContents[] = {
		{"O_NVGoggles_grn_f",1},
		{"ACE_entrenchingtool",1},
		{"CUP_30Rnd_556x45_EMAG_Tan",6},
		{"SatchelCharge_Remote_Mag",2},
		{"ACE_M26_clacker",1},
		{"ACE_salineIV_500",1},
		{"RHS_mag_nspd",2},
		{"RHS_mag_rgd5",2}
		};
    };

class RTO: BaseUnit {
	backpack[] = {"CRAB_RadioBag_01_black_F"};	
	backpackContents[] = {
		{"O_NVGoggles_grn_f",1},
		{"ACE_entrenchingtool",1},
		{"CUP_30Rnd_556x45_EMAG_Tan",4},
		{"ACRE_PRC117F",1},
		{"ACE_salineIV_500",1},
		{"RHS_mag_nspd",2},
		{"RHS_mag_rgd5",2}
		};
	};

class UGL: BaseUnit {
    weapons[] = {
<<<<<<<< HEAD:CO18_CZ_Kunduz_V29.Kunduz/tb3/murk/cdf_des.hpp
			{
		{"CUP_arifle_Mk16_CQC_EGLM",
	  		{"CUP_30Rnd_556x45_EMAG_Tan","CUP_1rnd_HE_m203","ace_acc_pointer_green","RHSUSF_acc_SU230_c"},
	},
		{"CUP_arifle_Mk16_STD_EGLM",
		 	 {"CUP_30Rnd_556x45_EMAG_Tan","CUP_1rnd_HE_m203","ace_acc_pointer_green","RHSUSF_acc_SU230_c"},
	}
		},	
		{"CUP_hgun_Phantom",
			{"CUP_18Rnd_9x19_Phantom"}
		},
    };

    vest[] = {"RHSUSF_PlateFrame_Grenadier"};

	backpack[] = {"B_Kitbag_cbr"};	
    backpackContents[] = {
		{"O_NVGoggles_grn_f",1},
		{"ACE_entrenchingtool",1},
		{"CUP_30Rnd_556x45_EMAG_Tan",6},
		{"CUP_1rnd_HE_m203",12},
		{"CUP_1rnd_HEDP_m203",8},
		{"1Rnd_SmokeOrange_Grenade_shell",4},
		{"ACE_salineIV_500",1},	
		{"RHS_mag_nspd",2},
		{"RHS_mag_rgd5",2}
		};
    };
	
class MGL: BaseUnit {
    weapons[] = {
		{"CUP_glaunch_6G30",
			{"CUP_6Rnd_HE_GP25_M"}
		},
	 	{"CUP_hgun_Phantom",
			{"CUP_18Rnd_9x19_Phantom"}
		},
		"ace_yardage450"
    };

    vest[] = {"RHSUSF_MBAV_MG"};
    vestContents[] = {
		{"CUP_18Rnd_9x19_Phantom",6},
		{"CUP_6Rnd_HE_GP25_M",4},
		{"ace_maptools",1}
		};

    backpack[] = {"B_Kitbag_cbr"};
    backpackContents[] = {
		{"O_NVGoggles_grn_f",1},
		{"CUP_6Rnd_HE_GP25_M",4},
		{"RHS_VG40TB",6},
		{"RHS_VG40MD",6},
		{"RHS_mag_nspd",2},
		{"RHS_mag_rgd5",4}
		};
    };		

class DM: BaseUnit {
    weapons[] = {
		{"CUP_arifle_mk20",
			{"RHS_mag_20Rnd_SCAR_762x51_m80a1_EPR","ACE_acc_pointer_green","RHSUSF_Acc_M8541_MRDS","bipod_02_f_hex"}
		},
	 	{"CUP_hgun_Phantom",
			{"CUP_18Rnd_9x19_Phantom"}
		},
		"ace_vector"
========
      {"srifle_DMR_05_blk_F",
        {"10Rnd_93x64_DMR_05_Mag","ace_acc_pointer_green","optic_ams","rhs_acc_harris_swivel"}
      },
      {"hgun_rook40_f",
        {"16rnd_9x21_mag"}
      },
      "ace_vector"
    };

    vest[] = {"V_CarrierRigKBT_01_heavy_Olive_F"};
    vestContents[] = {
      {"10Rnd_93x64_DMR_05_Mag",5},
      {"handgrenade",2},
      {"SmokeShell",2},
      {"16rnd_9x21_mag",2},
      {"ace_maptools",1}
    };

    backpackContents[] = {
      {"o_nvgoggles_grn_f",1},
      {"optic_tws_mg",1},
      {"muzzle_snds_93mmg",1},
      {"10Rnd_93x64_DMR_05_Mag",5},
      {"ACE_salineIV_500",1},
      {"SmokeShell",2},
      {"handgrenade",2}
    };
  };
  class DMR: DM {};

  class MGL: baseUnit {

    weapons[] = {
      {"CUP_glaunch_6G30",
        {"CUP_6Rnd_HE_GP25_M"}
      },
        {"hgun_rook40_f",
        {"16rnd_9x21_mag"}
      },
      "ace_yardage450"
    };

    vest[] = {"V_CarrierRigKBT_01_light_Olive_F"};
    vestContents[] = {
      {"CUP_6Rnd_HE_GP25_M",2},
      {"handgrenade",2},
      {"SmokeShell",2},
      {"16rnd_9x21_mag",2},
      {"ace_maptools",1}
    };

    backpack[]={"b_carryall_green_f"};
    backpackContents[] = {
      {"o_nvgoggles_grn_f",1},
      {"CUP_6Rnd_HE_GP25_M",4},
      {"16rnd_9x21_mag",4},
      {"handgrenade",2},
      {"SmokeShell",2}
>>>>>>>> master:CO18_CZ_Kunduz_V30.Kunduz/tb3/murk/cdf_rus.hpp
    };

	headgear[] = {"RHSUSF_opscore_mar_ut_pelt"};

    vest[] = {"RHSUSF_PlateFrame_Marksman"};
    vestContents[] = {
		{"RHSGREF_sdn6_silencer",1},
		{"RHS_mag_20Rnd_SCAR_762x51_m80a1_EPR",4},		
		{"RHS_mag_nspd",2},
		{"RHS_mag_rgd5",2},
		{"CUP_18Rnd_9x19_Phantom",2},
		{"ace_maptools",1}
		};

    backpack[] = {"B_Kitbag_cbr"};
    backpackContents[] = {
		{"O_NVGoggles_grn_f",1},
		{"optic_TWS_mg",1},
		{"ACE_entrenchingtool",1},
		{"RHS_mag_20Rnd_SCAR_762x51_m80a1_EPR",6},
		{"RHS_mag_20Rnd_SCAR_762x51_m62_TRACER",2},
		{"ACE_salineIV_500",1},
		{"ACE_RangeCard",1},
		{"RHS_mag_nspd",2},
		{"RHS_mag_rgd5",2}
		};
    };

class LMG: BaseUnit {
    weapons[] = {
<<<<<<<< HEAD:CO18_CZ_Kunduz_V29.Kunduz/tb3/murk/cdf_des.hpp
		{"CUP_arifle_Mk16_SV",
			{"150Rnd_556x45_Drum_Sand_Mag_F","ace_acc_pointer_green","RHSUSF_acc_SU230_c","bipod_02_f_hex"}
		},
	 	{"CUP_hgun_Phantom",
			{"CUP_18Rnd_9x19_Phantom"}
		},
    };

    vest[] = {"RHSUSF_PlateFrame_MachineGunner"};
    vestContents[] = {
		{"RHSUSF_acc_rotex5_grey",1},
		{"150Rnd_556x45_Drum_Sand_Mag_F",2},
		{"RHS_mag_nspd",2},
		{"RHS_mag_rgd5",2},
		{"CUP_18Rnd_9x19_Phantom",2},
		{"ace_maptools",1}
		};

    backpack[] = {"B_Kitbag_cbr"};
    backpackContents[] = {
		{"O_NVGoggles_grn_f",1},
		{"ACE_entrenchingtool",1},
		{"150Rnd_556x45_Drum_Sand_Mag_F",4},
		{"ACE_salineIV_500",1},
		{"RHS_mag_nspd",2},
		{"RHS_mag_rgd5",2}
		};
========
      {
        {"CUP_arifle_AK107_GL_railed",
          {"ace_acc_pointer_green","optic_Holosight_blk_F","rhs_30Rnd_545x39_7N22_AK","rhs_vog25","rhs_acc_dtk2"}
        },
        {"CUP_arifle_AK74M_GL_railed",
          {"ace_acc_pointer_green","optic_Holosight_blk_F","rhs_30Rnd_545x39_7N22_AK","rhs_vog25","rhs_acc_dtk2"}
        }
      },	
        {"hgun_rook40_f",
          {"16rnd_9x21_mag"}
        }
      };

    vest[] = {"V_CarrierRigKBT_01_light_Olive_F"};
    vestContents[] = {
      {"rhs_30Rnd_545x39_7N22_AK",8},
      {"handgrenade", 2},
      {"16rnd_9x21_mag",2},
      {"ace_maptools",1}
    };

    backpackContents[] = {
      {"o_nvgoggles_grn_f",1},
      {"rhs_acc_dtk4short", 1},
      {"rhs_30Rnd_545x39_7N22_AK",4},
      {"SmokeShell",2},
      {"handgrenade",2},
      {"rhs_vog25",12},
      {"rhs_vog25p",8},
      {"rhs_vg25tb",4},
      {"rhs_vg40md", 4}
>>>>>>>> master:CO18_CZ_Kunduz_V30.Kunduz/tb3/murk/cdf_rus.hpp
    };

class GPMG: BaseUnit {
    weapons[] = {
<<<<<<<< HEAD:CO18_CZ_Kunduz_V29.Kunduz/tb3/murk/cdf_des.hpp
		{"CUP_lmg_M60E4",
			{"RHSUSF_100Rnd_762x51_m61_ap","ace_acc_pointer_green","RHSUSF_acc_SU230A"}
		},
	 	{"CUP_hgun_Phantom",
		{"CUP_18Rnd_9x19_Phantom"}
		},
    };
========
      {"CUP_arifle_AK105_railed",
        {"rhs_30Rnd_545x39_7N22_AK","ace_acc_pointer_green","optic_Holosight_blk_F","rhs_acc_dtk2"},
      },
      {"hgun_rook40_f",
        {"16rnd_9x21_mag"}
      },
      {"launch_RPG32_green_F",
        {"RPG32_F", "ace_acc_pointer_green"}
      }
    };
    backpack[]={"b_kitbag_rgr"};
    backpackContents[] = {
      {"o_nvgoggles_grn_f",1},
      {"rhs_acc_dtk4short",1},
      {"rhs_30Rnd_545x39_7N22_AK", 4},
      {"RPG32_F", 1},
      {"RPG32_HE_F", 2}
    };
  };
>>>>>>>> master:CO18_CZ_Kunduz_V30.Kunduz/tb3/murk/cdf_rus.hpp

    vest[] = {"RHSUSF_MBAV_MG"};
    vestContents[] = {
		{"CUP_18Rnd_9x19_Phantom",2},
		{"RHSUSF_100Rnd_762x51_m61_ap",2},		
		{"ace_maptools",1}
		};

<<<<<<<< HEAD:CO18_CZ_Kunduz_V29.Kunduz/tb3/murk/cdf_des.hpp
    backpack[] = {"B_Kitbag_cbr"};
    backpackContents[] = {
		{"O_NVGoggles_grn_f",1},
		{"ACE_entrenchingtool",1},
		{"RHSUSF_100Rnd_762x51_m61_ap",3},
		{"ACE_salineIV_500",1},
		{"RHS_mag_nspd",2},
		{"RHS_mag_rgd5",2}
		};
========
    weapons[] = {
      {
        {"CUP_arifle_AK107_railed",
          {"ace_acc_pointer_green","optic_Holosight_blk_F","rhs_30Rnd_545x39_7N22_AK","rhs_acc_dtk2"}
        },
        {"CUP_arifle_AK105_railed",
          {"ace_acc_pointer_green","optic_Holosight_blk_F","rhs_30Rnd_545x39_7N22_AK","rhs_acc_dtk2"}
        }
      },	
        {"hgun_rook40_f",
          {"16rnd_9x21_mag"}
        },
        "ace_vector"
      };
    
    backpack[]={"b_carryall_green_f"};
    backpackContents[] = {
      {"o_nvgoggles_grn_f",1},
      {"rhs_acc_dtk4short",1},
      {"rhs_30Rnd_545x39_7N22_AK", 4},
      {"RPG32_F", 2},
      {"RPG32_HE_F", 2}
>>>>>>>> master:CO18_CZ_Kunduz_V30.Kunduz/tb3/murk/cdf_rus.hpp
    };

class GPMGA: BaseUnit {
    weapons[] = {
<<<<<<<< HEAD:CO18_CZ_Kunduz_V29.Kunduz/tb3/murk/cdf_des.hpp
		{"CUP_arifle_Mk16_SV",
			{"CUP_30Rnd_556x45_EMAG_Tan","ace_acc_pointer_green","RHSUSF_acc_SU230_c","bipod_02_f_hex"}
		},
	 	{"CUP_hgun_Phantom",
			{"CUP_18Rnd_9x19_Phantom"}
		},
	  "binocular"
========
      {"CUP_arifle_AK105_railed",
        {"rhs_30Rnd_545x39_7N22_AK","ace_acc_pointer_green","optic_Holosight_blk_F","rhs_acc_dtk2"},
      },
      {"hgun_rook40_f",
        {"16rnd_9x21_mag"}
      },
      {"launch_I_titan_short_f",
        {"Titan_AT", "ace_acc_pointer_green"}
      }
    };
    backpackContents[] = {
      {"o_nvgoggles_grn_f",1},
      {"rhs_acc_dtk4short",1},
      {"rhs_30Rnd_545x39_7N22_AK", 4},
      {"Titan_AT", 1}
>>>>>>>> master:CO18_CZ_Kunduz_V30.Kunduz/tb3/murk/cdf_rus.hpp
    };

<<<<<<<< HEAD:CO18_CZ_Kunduz_V29.Kunduz/tb3/murk/cdf_des.hpp
    vestContents[] = {
		{"RHSUSF_acc_rotex5_grey",1},
		{"CUP_30Rnd_556x45_EMAG_Tan",8},
		{"CUP_18Rnd_9x19_Phantom",2},
		{"ace_maptools",1}
		};

    backpack[] = {"B_Carryall_CBR"};
    backpackContents[] = {
		{"O_NVGoggles_grn_f",1},
		{"ACE_entrenchingtool",1},
		{"150Rnd_556x45_Drum_Sand_Mag_Tracer_F",2},
		{"RHSUSF_100Rnd_762x51_m61_ap",3},
		{"RHSUSF_100Rnd_762x51_m62_tracer",2},
		{"ACE_salineIV_500",1},
		{"RHS_mag_nspd",2},
		{"RHS_mag_rgd5",2}
		};
    };	

class MAT: BaseUnit {
    weapons[] = {
			{
		{"CUP_arifle_Mk16_CQC_AFG",
			{"CUP_30Rnd_556x45_EMAG_Tan","ace_acc_pointer_green","RHSUSF_acc_SU230_c"},
	},
		{"CUP_arifle_Mk16_CQC_FG",
			{"CUP_30Rnd_556x45_EMAG_Tan","ace_acc_pointer_green","RHSUSF_acc_SU230_c"},
	},
		{"CUP_arifle_Mk16_STD_AFG",
			{"CUP_30Rnd_556x45_EMAG_Tan","ace_acc_pointer_green","RHSUSF_acc_SU230_c"},
	},
		{"CUP_arifle_Mk16_STD_FG",
			{"CUP_30Rnd_556x45_EMAG_Tan","ace_acc_pointer_green","RHSUSF_acc_SU230_c"},
	}
		},	
	 	{"CUP_hgun_Phantom",
			{"CUP_18Rnd_9x19_Phantom"}
		},
		{"launch_MRAWS_sand_rail_F",
			{"MRAWS_HEAT55_F", "ace_acc_pointer_green"}
		}
    };

    backpack[] = {"B_Kitbag_cbr"};
    backpackContents[] = {
		{"O_NVGoggles_grn_f",1},
		{"ACE_entrenchingtool",1},
		{"CUP_30Rnd_556x45_EMAG_Tan",6},
		{"MRAWS_HEAT55_F",1},
		{"MRAWS_HE_F",1},
		{"ACE_salineIV_500",1}
		};
    };	
	
class MATA: BaseUnit {
    weapons[] = {
			{
		{"CUP_arifle_Mk16_CQC_AFG",
			{"CUP_30Rnd_556x45_EMAG_Tan","ace_acc_pointer_green","RHSUSF_acc_SU230_c"},
	},
		{"CUP_arifle_Mk16_CQC_FG",
			{"CUP_30Rnd_556x45_EMAG_Tan","ace_acc_pointer_green","RHSUSF_acc_SU230_c"},
	},
		{"CUP_arifle_Mk16_STD_AFG",
			{"CUP_30Rnd_556x45_EMAG_Tan","ace_acc_pointer_green","RHSUSF_acc_SU230_c"},
	},
		{"CUP_arifle_Mk16_STD_FG",
			{"CUP_30Rnd_556x45_EMAG_Tan","ace_acc_pointer_green","RHSUSF_acc_SU230_c"},
	}
		},	
	 	{"CUP_hgun_Phantom",
			{"CUP_18Rnd_9x19_Phantom"}
		},
	  "ace_vector"
    };

    backpack[] = {"B_Carryall_CBR"};
    backpackContents[] = {
		{"O_NVGoggles_grn_f",1},
		{"ACE_entrenchingtool",1},
		{"CUP_30Rnd_556x45_EMAG_Tan",6},
		{"MRAWS_HEAT55_F",2},
		{"MRAWS_HE_F",2},
		{"ACE_salineIV_500",1}
		};
========
  class HATA: baseUnit {

    weapons[] = {
      {
        {"CUP_arifle_AK107_railed",
          {"ace_acc_pointer_green","optic_Holosight_blk_F","rhs_30Rnd_545x39_7N22_AK","rhs_acc_dtk2"}
        },
        {"CUP_arifle_AK105_railed",
          {"ace_acc_pointer_green","optic_Holosight_blk_F","rhs_30Rnd_545x39_7N22_AK","rhs_acc_dtk2"}
        }
      },	
        {"hgun_rook40_f",
        {"16rnd_9x21_mag"}
      },
      "ace_mx2a"
    };
    
    backpack[]={"b_carryall_green_f"};
    backpackContents[] = {
      {"o_nvgoggles_grn_f",1},
      {"rhs_acc_dtk4short",1},
      {"rhs_30Rnd_545x39_7N22_AK", 4},
      {"Titan_AT", 1},
      {"Titan_AP", 2}
    };
  };

  class ME: baseUnit {
    ace_medic = 2;
    vest[] = {"V_CarrierRigKBT_01_light_Olive_F"};
    backpack[]={"b_carryall_green_f"};
    backpackContents[] = {
      {"o_nvgoggles_grn_f",1},
      {"rhs_acc_dtk4short", 1},
      {"rhs_30Rnd_545x39_7N22_AK",6},
      {"ACE_fieldDressing",15},
      {"ACE_packingBandage",10},
      {"ACE_quikclot",15},
      {"ACE_elasticBandage",15},
      {"ACE_morphine",8},
      {"ACE_epinephrine",8},
      {"ACE_adenosine",8},
      {"ACE_salineIV_250",4},
      {"ACE_salineiv_500",4},
      {"ACE_salineiv",2},
      {"ACE_bloodIV",4},
      {"ACE_personalAidKit",1},
      {"ACE_surgicalKit",1},
      {"ACE_splint",8},
      {"ACE_tourniquet",5}
    };
  };
  class MED: ME {};

  class RM: baseUnit {
    backpackContents[] = {
      {"o_nvgoggles_grn_f",1},
      {"rhs_acc_dtk4short",1},
      {"rhs_30Rnd_545x39_7N22_AK", 6},
      {"handgrenade",4},
      {"SmokeShell",2},
      {"150rnd_762x54_box",1},      
      {"ACE_salineIV_500",1}
    };
  };
  class RF: RM {};

  class GPMG: baseUnit {
    weapons[] = {
      {"CUP_lmg_Pecheneg",
        {"150rnd_762x54_box","ace_acc_pointer_green","rhs_acc_ekp8_02d"},
      },
      {"hgun_rook40_f",
          {"16rnd_9x21_mag"}
      }
    };
    vest[] = {"V_CarrierRigKBT_01_light_Olive_F"};
    vestContents[] = {
      {"o_nvgoggles_grn_f",1},
      {"150rnd_762x54_box",1},
      {"16rnd_9x21_mag",3},
      {"ace_maptools",1}
    };

    backpack[]={"b_kitbag_rgr"};
    backpackContents[] = {
      {"o_nvgoggles_grn_f",1},
      {"CUP_muzzle_snds_KZRZP_PK",1},
      {"150rnd_762x54_box",3},
      {"SmokeShell",2},
      {"handgrenade",2}
>>>>>>>> master:CO18_CZ_Kunduz_V30.Kunduz/tb3/murk/cdf_rus.hpp
    };

class HAT: BaseUnit {
    weapons[] = {
<<<<<<<< HEAD:CO18_CZ_Kunduz_V29.Kunduz/tb3/murk/cdf_des.hpp
			{
		{"CUP_arifle_Mk16_CQC_AFG",
	  		{"CUP_30Rnd_556x45_EMAG_Tan","ace_acc_pointer_green","RHSUSF_acc_SU230_c"},
	},
		{"CUP_arifle_Mk16_CQC_FG",
			{"CUP_30Rnd_556x45_EMAG_Tan","ace_acc_pointer_green","RHSUSF_acc_SU230_c"},
	},
		{"CUP_arifle_Mk16_STD_AFG",
			{"CUP_30Rnd_556x45_EMAG_Tan","ace_acc_pointer_green","RHSUSF_acc_SU230_c"},
	},
		{"CUP_arifle_Mk16_STD_FG",
			{"CUP_30Rnd_556x45_EMAG_Tan","ace_acc_pointer_green","RHSUSF_acc_SU230_c"},
	}
		},	
	 	{"CUP_hgun_Phantom",
			{"CUP_18Rnd_9x19_Phantom"}
		},
		{"launch_o_titan_short_f",
			{"Titan_AT", "ace_acc_pointer_green"}
		}
    };

	vest[] = {"RHSUSF_PlateFrame_SAPI"};
	vestContents[] = {
		{"RHSUSF_acc_rotex5_grey",1},
		{"CUP_18Rnd_9x19_Phantom",2},
		{"ace_maptools",1}
		};

    backpack[] = {"B_Kitbag_cbr"};
    backpackContents[] = {
		{"O_NVGoggles_grn_f",1},
		{"ACE_entrenchingtool",1},
		{"CUP_30Rnd_556x45_EMAG_Tan",8},
		{"RHS_mag_rgd5",2},
		{"RHS_mag_nspd",2},
		{"Titan_AT",1}
		};
    };	
	
class HATA: BaseUnit {
    weapons[] = {
			{
		{"CUP_arifle_Mk16_CQC_AFG",
			{"CUP_30Rnd_556x45_EMAG_Tan","ace_acc_pointer_green","RHSUSF_acc_SU230_c"},
	},
		{"CUP_arifle_Mk16_CQC_FG",
			{"CUP_30Rnd_556x45_EMAG_Tan","ace_acc_pointer_green","RHSUSF_acc_SU230_c"},
	},
		{"CUP_arifle_Mk16_STD_AFG",
			{"CUP_30Rnd_556x45_EMAG_Tan","ace_acc_pointer_green","RHSUSF_acc_SU230_c"},
	},
		{"CUP_arifle_Mk16_STD_FG",
			{"CUP_30Rnd_556x45_EMAG_Tan","ace_acc_pointer_green","RHSUSF_acc_SU230_c"},
	}
		},	
	 	{"CUP_hgun_Phantom",
			{"CUP_18Rnd_9x19_Phantom"}
		},
	  "ace_mx2a"
    };

    backpack[] = {"B_Carryall_CBR"};
    backpackContents[] = {
	{"O_NVGoggles_grn_f",1},
	{"ACE_entrenchingtool",1},
	{"CUP_30Rnd_556x45_EMAG_Tan",4},
	{"Titan_AT",1},
	{"Titan_AP",2}
		};
========
      {"CUP_arifle_RPK74M_railed",
        {"CUP_60Rnd_545x39_AK74M_M","ace_acc_pointer_green","optic_Holosight_blk_F","rhs_acc_dtk2"},
      },
      {"hgun_rook40_f",
          {"16rnd_9x21_mag"}
      }
    };
    vestContents[] = {
      {"CUP_60Rnd_545x39_AK74M_M",4},
      {"SmokeShell",2},
      {"16rnd_9x21_mag",2},
      {"ace_maptools",1}
    };

    backpackContents[] = {
      {"o_nvgoggles_grn_f",1},
      {"rhs_acc_dtk4short",1},
      {"CUP_60Rnd_545x39_AK74M_M",8},
      {"SmokeShell",2},
      {"handgrenade",2}
    };   
  };

  class GPMGA: baseUnit {

    weapons[] = {
      {"CUP_arifle_AK107_railed",
        {"rhs_30Rnd_545x39_7N22_AK","ace_acc_pointer_green","optic_Holosight_blk_F","rhs_acc_dtk2"},
      },
      {"hgun_rook40_f",
        {"16rnd_9x21_mag"}
      },
      "binocular"
    };

    backpack[]={"b_carryall_green_f"};
    backpackContents[] = {
      {"o_nvgoggles_grn_f",1},
      {"rhs_acc_dtk4short",1},
      {"rhs_30Rnd_545x39_7N22_AK",4},
      {"rhs_30Rnd_545x39_AK_green",2},
      {"SmokeShell",2},
      {"handgrenade",2},
      {"150rnd_762x54_box",2},	  
      {"150rnd_762x54_box_tracer",1}
>>>>>>>> master:CO18_CZ_Kunduz_V30.Kunduz/tb3/murk/cdf_rus.hpp
    };
>>>>>>> master

class MED: BaseUnit {
	ace_medic = 2;
	
<<<<<<< HEAD
	vest[] = {"RHS_6B23_ML_Medic"};

	backpack[] = {"RHSGREF_ttsko_alicepack"};
	backpackContents[] = {
		{"RHS_1PN138",1},
		{"ACE_entrenchingtool",1},
		{"RHS_30Rnd_762x39mm_89",6},
=======
	vest[] = {"RHSUSF_MBAV_Medic"};

    backpack[] = {"B_Carryall_CBR"};
    backpackContents[] = {
		{"O_NVGoggles_grn_f",1},
		{"ACE_entrenchingtool",1},
		{"CUP_30Rnd_556x45_EMAG_Tan",6},
>>>>>>> master
		{"ACE_elasticBandage",15},
		{"ACE_packingBandage",15},
		{"ACE_quikclot",15},
		{"ACE_fieldDressing",15},
	  	{"ACE_morphine",8},
		{"ACE_adenosine",8},
	  	{"ACE_epinephrine",8},
	  	{"ACE_salineIV_250",4},
		{"ACE_salineIV_500",4},
	  	{"ACE_salineiv",2},
	  	{"ACE_bloodIV",4},
		{"ACE_Splint",8},
		{"ACE_tourniquet",4},
	  	{"ACE_personalAidKit",1},
		{"ACE_surgicalKit",1}
		};
<<<<<<< HEAD
	};

class Pilot: BaseUnit {
	weapons[] = {
		{"CUP_smg_bizon",
			{"CUP_64Rnd_9x19_Bizon_M"}
		},
		{	"RHS_Weap_TT33",
			{"RHS_mag_762x25_8"}
		},
	};

	headgear[] = {"rhs_gssh18"};

	goggles[] = {"G_Aviator"};

	uniform[] = {"rhs_uniform_m88_patchless"};

	vest[] = {"RHS_6B5_Rifleman_khak"};
	vestContents[] = {
		{"RHS_mag_762x25_8",2},
		{"CUP_64Rnd_9x19_Bizon_M",2},
		{"RHS_mag_rgd5",2},
		{"RHS_mag_rdg2_black",2}
		};

	backpack[] = {"CUP_B_RPGPack_Khaki"};
	backpackContents[] = {
		{"RHS_1PN138",1},
		{"CUP_64Rnd_9x19_Bizon_M",2},
		{"ACE_IR_strobe_item",1},
		{"RHS_Mag_NSPD,2"},
		{"Toolkit",1},
		{"ACE_salineIV_500",1}
		};
	};	

class LargeGearCrate {
	vehCargoWeapons[] = {
		{"RHS_weap_RPG26",6},
		{"RHS_weap_RSHG2",4},
		{"binocular",2}
	};
	vehCargoMagazines[] = {
		{"RHS_30Rnd_762x39mm_89",40},
		{"RHS_75Rnd_762x39mm_89",10},
		{"RHS_100Rnd_762x54mmR_7BZ3",10},
		{"RHS_100Rnd_762x54mmR_green",5},
		{"RHS_10Rnd_762x54mmR_7N14",20},
		{"ACE_10Rnd_762x54_Tracer_mag",10},
		{"RHS_VOG25",20},
		{"RHS_VG40TB",10},
		{"RHS_VG40MD",10},
		{"RHS_mag_rdg2_black",10},
		{"RHS_Mag_NSPD",10},
		{"RHS_mag_rgd5",20},
		{"DemoCharge_Remote_Mag",8}
=======
    };

class Pilot: BaseUnit {
    weapons[] = {
<<<<<<<< HEAD:CO18_CZ_Kunduz_V29.Kunduz/tb3/murk/cdf_des.hpp
		{"RHSUSF_weap_MP7A2_grip1",
			{"RHSUSF_mag_40Rnd_46x30_JHP","ACE_acc_pointer_green","RHSUSF_acc_SU230_c_smg_blk_F","rhs_acc_grip_rk2"}
		},
		{	"CUP_hgun_Phantom",
			{"CUP_18Rnd_9x19_Phantom"}
		},
========
      {"CUP_arifle_AKS74U_railed",
        {"rhs_30Rnd_545x39_7N22_AK","ace_acc_pointer_green","optic_Holosight_blk_F","rhs_acc_dtk2"}
      },
      {"hgun_rook40_f",
        {"16rnd_9x21_mag"}
      }
>>>>>>>> master:CO18_CZ_Kunduz_V30.Kunduz/tb3/murk/cdf_rus.hpp
    };

    headgear[] = {
		"RHSUSF_hgu56p_visor_white",
		"RHSUSF_hgu56p_visor_black",
		"RHSUSF_hgu56p_visor_pink"
		};

    goggles[] = {"G_Bandanna_khk"};

    uniform[] = {"RHS_uniform_g3_Tan"};

    vest[] = {"V_TacVest_BRN"};
    vestContents[] = {
<<<<<<<< HEAD:CO18_CZ_Kunduz_V29.Kunduz/tb3/murk/cdf_des.hpp
		{"RHSUSF_acc_rotex_mp7",1},
		{"CUP_18Rnd_9x19_Phantom",2},
		{"ace_maptools",1}
		};

    backpack[] = {"b_fieldpack_cbr"};
    backpackContents[] = {
		{"O_NVGoggles_grn_f",1},
		{"RHSUSF_mag_40Rnd_46x30_JHP",8},
		{"ACE_IR_strobe_item",1},
		{"RHS_mag_nspd",2},
		{"RHS_mag_rgd5",2},		
		{"Toolkit",1},
		{"ACE_salineIV_500",1}
		};
    };	

class LargeGearCrate {
	vehCargoWeapons[] = {
		{"RHS_weap_M72A7",6},
		{"ace_vector",2}
	};
	vehCargoMagazines[] = {
		{"CUP_30Rnd_556x45_EMAG_Tan",40},
		{"150Rnd_556x45_Drum_Sand_Mag_F",10},
		{"RHSUSF_100Rnd_762x51_m61_ap",10},
		{"RHS_mag_20Rnd_SCAR_762x51_m80a1_EPR",10},
		{"CUP_1rnd_HEDP_m203",20},
		{"RHS_mag_nspd",10},
		{"RHS_mag_rgd5",20},
		{"ClaymoreDirectionalMine_Remote_Mag",4},
		{"SLAMDirectionalMine_Wire_Mag",4},
		{"DemoCharge_Remote_Mag",4}
>>>>>>> master
	};
	vehCargoItems[] = {
		{"ACE_fieldDressing",20},
		{"ACE_quikclot",20},
		{"ACE_elasticBandage",20},
		{"ACE_packingBandage",20},
		{"ACE_Splint",10},
		{"ACE_tourniquet",10},
		{"ACE_morphine",10},
		{"ACE_adenosine",10},
		{"ACE_epinephrine",10},
		{"ACE_salineiv",4},
		{"ACE_salineIV_500",4},
		{"ACE_salineIV_250",4},
		{"ACE_M26_clacker",4},
		{"Toolkit",4},
		{"ACE_DefusalKit",4}
	};
	vehCargoRucks[] = {
<<<<<<< HEAD
		{"RHSGREF_ttsko_alicepack",4}
		};
	};

class LauncherCrate {
	vehCargoWeapons[] = {
		{"RHS_weap_RPG26",6},
		{"RHS_weap_RSHG2",4},
		{"RHS_Weap_RPG7",2},
		{"ACE_Yardage450",2}
	};
	vehCargoMagazines[] = {
		{"RHS_RPG7_PG7VL_Mag",6},
		{"RHS_RPG7_PG7VR_Mag",4},
		{"RHS_RPG7_OG7V_Mag",6},
		{"RHS_RPG7_TBG7V_Mag",4}
	};
	vehCargoItems[] = {
		{"RHS_Acc_PGO7V3",2}
	};
	vehCargoRucks[] = {
		{"RHSGREF_ttsko_alicepack",4}
		};
	};
=======
		{"B_Carryall_CBR",4}
		};
    };

class LauncherCrate {
	vehCargoWeapons[] = {
		{"RHS_weap_M72A7",8},
		{"launch_MRAWS_green_rail_F",2},
		{"ace_vector",2}
	};
	vehCargoMagazines[] = {
		{"MRAWS_HEAT_F",10},
		{"MRAWS_HEAT55_F",10},
		{"MRAWS_HE_F",10}
	};
	vehCargoRucks[] = {
		{"B_Carryall_CBR",4}
		};
    };
>>>>>>> master

class DemoCrate {
	vehCargoMagazines[] = {
		{"DemoCharge_Remote_Mag",10},
		{"SatchelCharge_Remote_Mag",10},
<<<<<<< HEAD
		{"RHS_Mine_OZM72_c_mag",10}
=======
		{"APERSMineDispenser_Mag",10}
>>>>>>> master
	};
	vehCargoItems[] = {
		{"ACE_M26_clacker",4},
		{"ACE_DefusalKit",4}
		};
<<<<<<< HEAD
	};	
=======
    };	
========
      {"acre_prc148",1},
      {"rhs_30Rnd_545x39_7N22_AK",3},
      {"16rnd_9x21_mag",2},
      {"ace_maptools",1}
    };

    backpack[] = {"b_fieldpack_green_f"};
    backpackContents[] = {
      {"o_nvgoggles_grn_f",1},
      {"SmokeShell",2},
      {"rhs_30Rnd_545x39_7N22_AK",3},
      {"16rnd_9x21_mag",2},	  
      {"SmokeShellgreen",2},
      {"handgrenade",2},
      {"Chemlight_green",2},
      {"ace_ir_strobe_item",1},
      {"Toolkit",1},
      {"ace_microdagr",1}
    };
  };

  class PILOT: PT {};

  class LauncherCrate {
    vehCargoWeapons[] = {
      {"rhs_weap_m72a7",10},
      {"launch_MRAWS_green_rail_F",2},
      {"ACE_Vector",2}
    };
    vehCargoMagazines[] = {
      {"MRAWS_HE_F",10},
      {"MRAWS_HEAT55_F",10},
      {"MRAWS_HEAT_F",10}
    };
    vehCargoRucks[] = {
      {"b_carryall_green_f",2}
    };
  };
  class LargeGearCrate {
    vehCargoWeapons[] = {
      {"rhs_weap_m72a7",6},
      {"ACE_Vector",2}
    };
    vehCargoMagazines[] = {
      {"rhs_30Rnd_545x39_7N22_AK",40},
      {"rhs_30Rnd_545x39_AK_green",10},
      {"CUP_60Rnd_545x39_AK74M_M",20},
      {"10Rnd_93x64_DMR_05_Mag",10},
      {"150rnd_762x54_box",8},
      {"150rnd_762x54_box_tracer",2},
      {"handgrenade",20},
      {"SmokeShell",10},
      {"rhs_vog25",20},
      {"ClaymoreDirectionalMine_Remote_Mag",4},
      {"SLAMDirectionalMine_Wire_Mag",6},
      {"DemoCharge_Remote_Mag",8}
    };
    vehCargoItems[] = {
      {"ToolKit",1},
      {"ACE_M26_Clacker",4},
      {"ACE_DefusalKit",2},
      {"ACE_fieldDressing",20},
      {"ACE_packingBandage",20},
      {"ACE_quikclot",20},
      {"ACE_Tourniquet",8},
      {"ACE_splint",4},
      {"ACE_morphine",4},
      {"ACE_epinephrine",4},
      {"ACE_adenosine",4},
      {"ACE_salineIV",4},      
      {"ACE_salineIV_500",4},
      {"ACE_Flashlight_MX991",4},
      {"ACE_MapTools",4}
    };
    vehCargoRucks[] = {
      {"b_carryall_green_f",4}
    };
  };
>>>>>>>> master:CO18_CZ_Kunduz_V30.Kunduz/tb3/murk/cdf_rus.hpp
>>>>>>> master
};