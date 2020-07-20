// Hâyard-Günnes PMC
class HiredGoonsPMC {
    class BaseUnit {
        allowPlayerGoggles = 0;
        ace_medic = 1;
        assignedItems[] = {"ItemMap","ItemCompass","ItemWatch","CUP_NVG_GPNVG_black"};

        uniform[] = {"rhs_uniform_g3_blk"};
        vest[] = {"V_PlateCarrier2_blk"};
        backpack[] = {"B_ViperLightHarness_blk_F"};
        headGear[] = {"rhsusf_hgu56p_visor_black","rhsusf_hgu56p_visor_mask_black","rhsusf_hgu56p_visor_mask_Empire_black"};
        goggles[] = {"G_Balaclava_TI_blk_F"};

        uniformContents[] = {
            {"ACRE_PRC343",1},
            {"ACE_microDAGR",1},
            {"ACE_fieldDressing",4},
            {"ACE_elasticBandage",4},
            {"ACE_tourniquet",2},
            {"ACE_morphine",2},
            {"ACE_splint",2},
            {"ACE_salineIV_500",1},
            {"ACE_MapTools",1},
            {"ACE_Flashlight_XL50",1},
        };

        #define DEFAULT_WEAPONS {{"CUP_arifle_ACRC_blk_556", {"rhs_mag_30Rnd_556x45_M855A1_PMAG",{"rhsusf_acc_compm4","rhsusf_acc_eotech_552","rhsusf_acc_rx01","rhsusf_acc_t1_high","rhsusf_acc_eotech_xps3"},"rhsusf_acc_anpeq15side_bk","rhsusf_acc_nt4_black"}},\
        {"CUP_arifle_ACRC_blk_556", {"rhs_mag_30Rnd_556x45_M855A1_PMAG",{"rhsusf_acc_compm4","rhsusf_acc_eotech_552","rhsusf_acc_rx01","rhsusf_acc_t1_high","rhsusf_acc_eotech_xps3"},"rhsusf_acc_anpeq15side_bk","rhsusf_acc_nt4_black"}},\
        {"CUP_CZ_BREN2_556_8", {"rhs_mag_30Rnd_556x45_M855A1_PMAG",{"rhsusf_acc_compm4","rhsusf_acc_eotech_552","rhsusf_acc_rx01","rhsusf_acc_t1_high","rhsusf_acc_eotech_xps3"},"rhsusf_acc_anpeq15side_bk","rhsusf_acc_nt4_black"}},\
        {"CUP_CZ_BREN2_556_8", {"rhs_mag_30Rnd_556x45_M855A1_PMAG",{"rhsusf_acc_compm4","rhsusf_acc_eotech_552","rhsusf_acc_rx01","rhsusf_acc_t1_high","rhsusf_acc_eotech_xps3"},"rhsusf_acc_anpeq15side_bk","rhsusf_acc_nt4_black"}},\
        {"CUP_arifle_HK416_CQB_Black", {"rhs_mag_30Rnd_556x45_M855A1_PMAG",{"rhsusf_acc_compm4","rhsusf_acc_eotech_552","rhsusf_acc_rx01","rhsusf_acc_t1_high","rhsusf_acc_eotech_xps3"},"rhsusf_acc_anpeq15side_bk","rhsusf_acc_nt4_black"}},\
        {"CUP_arifle_HK416_CQB_Black", {"rhs_mag_30Rnd_556x45_M855A1_PMAG",{"rhsusf_acc_compm4","rhsusf_acc_eotech_552","rhsusf_acc_rx01","rhsusf_acc_t1_high","rhsusf_acc_eotech_xps3"},"rhsusf_acc_anpeq15side_bk","rhsusf_acc_nt4_black"}},\
        {"CUP_arifle_Mk16_CQC_AFG_black", {"rhs_mag_30Rnd_556x45_M855A1_PMAG",{"rhsusf_acc_compm4","rhsusf_acc_eotech_552","rhsusf_acc_rx01","rhsusf_acc_t1_high","rhsusf_acc_eotech_xps3"},"rhsusf_acc_anpeq15side_bk","rhsusf_acc_nt4_black"}},\
        {"CUP_arifle_Mk16_CQC_black", {"rhs_mag_30Rnd_556x45_M855A1_PMAG",{"rhsusf_acc_compm4","rhsusf_acc_eotech_552","rhsusf_acc_rx01","rhsusf_acc_t1_high","rhsusf_acc_eotech_xps3"},"rhsusf_acc_anpeq15side_bk","rhsusf_acc_nt4_black"}},\
        {"CUP_arifle_Mk16_CQC_FG_black", {"rhs_mag_30Rnd_556x45_M855A1_PMAG",{"rhsusf_acc_compm4","rhsusf_acc_eotech_552","rhsusf_acc_rx01","rhsusf_acc_t1_high","rhsusf_acc_eotech_xps3"},"rhsusf_acc_anpeq15side_bk","rhsusf_acc_nt4_black"}}}

        weapons[] = {
            DEFAULT_WEAPONS,
            {"CUP_hgun_Phantom", {"CUP_18Rnd_9x19_Phantom","cup_acc_cz_m3x"}}
        };
        vestContents[] = {
            {"rhs_mag_30Rnd_556x45_M855A1_PMAG",8},
            {"rhs_mag_30Rnd_556x45_M855A1_PMAG_Tracer_Red",2},
            {"rhs_mag_m67",2},
            {"SmokeShell",2},
            {"ACE_CTS9",2},
            {"CUP_18Rnd_9x19_Phantom",1}
        };

        backpackContents[] = {
            {"rhs_mag_30Rnd_556x45_M855A1_PMAG",8},
            {"rhs_mag_30Rnd_556x45_M855A1_PMAG_Tracer_Red",2},
            {"rhs_mag_m67",4},
            {"SmokeShell",2},
            {"ACE_CTS9",2},
            {"ACE_IR_Strobe_Item",1},
            {"ACE_salineIV",1},
            {"SLAMDirectionalMine_Wire_Mag",1},
            {"ACE_M26_Clacker",1},
            {"CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M",1}
        };
    };

    class PL: BaseUnit {
        weapons[] = {
            DEFAULT_WEAPONS,
            {"CUP_hgun_Phantom", {"CUP_18Rnd_9x19_Phantom","cup_acc_cz_m3x"}},
            "ACE_Vector"
        };

        // moreWeapons[] = {"ace_vector"};

        vestContents[] = {
            {"ACRE_PRC152",1},
            {"rhs_mag_30Rnd_556x45_M855A1_PMAG",8},
            {"rhs_mag_30Rnd_556x45_M855A1_PMAG_Tracer_Red",2},
            {"rhs_mag_m67",2},
            {"SmokeShell",2},
            {"CUP_18Rnd_9x19_Phantom",1},
            {"ACE_CTS9",1}
        };

        backpackContents[] = {
            {"rhs_mag_30Rnd_556x45_M855A1_PMAG",8},
            {"rhs_mag_30Rnd_556x45_M855A1_PMAG_Tracer_Red",2},
            {"rhs_mag_m67",4},
            {"SmokeShell",2},
            {"ACE_CTS9",2},
            {"ACE_IR_Strobe_Item",1},
            {"ACE_salineIV",1},
            {"ACE_MX2A",1},
            {"SLAMDirectionalMine_Wire_Mag",1},
            {"ACE_M26_Clacker",1}
        };
    };

    class ZEUS: PL {
        headGear[] = {"rhsusf_hgu56p_visor_mask_black_skull"};
    };

    class TL: BaseUnit {
        weapons[] = {
            DEFAULT_WEAPONS,
            {"CUP_hgun_Phantom", {"CUP_18Rnd_9x19_Phantom","cup_acc_cz_m3x"}},
            "ACE_Vector"
        };
        
        // moreWeapons[] = {"ace_vector"};

        vestContents[] = {
            {"ACRE_PRC152",1},
            {"rhs_mag_30Rnd_556x45_M855A1_PMAG",8},
            {"rhs_mag_30Rnd_556x45_M855A1_PMAG_Tracer_Red",2},
            {"rhs_mag_m67",2},
            {"SmokeShell",2},
            {"CUP_18Rnd_9x19_Phantom",1},
            {"ACE_CTS9",1}
        };
    };

    class FSO: BaseUnit {
        weapons[] = {
            DEFAULT_WEAPONS,
            {"CUP_hgun_Phantom", {"CUP_18Rnd_9x19_Phantom","cup_acc_cz_m3x"}},
            "ACE_Vector"
        };

        // moreWeapons[] = {"ace_vector"};

        vestContents[] = {
            {"ACRE_PRC152",2},
            {"rhs_mag_30Rnd_556x45_M855A1_PMAG",7},
            {"rhs_mag_30Rnd_556x45_M855A1_PMAG_Tracer_Red",2},
            {"rhs_mag_m67",2},
            {"SmokeShell",2},
            {"CUP_18Rnd_9x19_Phantom",1},
            {"ACE_CTS9",1}
        };

        backpackContents[] = {
            {"rhs_mag_30Rnd_556x45_M855A1_PMAG",8},
            {"rhs_mag_30Rnd_556x45_M855A1_PMAG_Tracer_Red",2},
            {"rhs_mag_m67",4},
            {"SmokeShell",2},
            {"ACE_CTS9",2},
            {"ACE_IR_Strobe_Item",1},
            {"ACE_salineIV",1},
            {"Laserdesignator_01_khk_F",1},
            {"Laserbatteries",1},
            {"SLAMDirectionalMine_Wire_Mag",1},
            {"ACE_M26_Clacker",1}
        };
    };

    class MED: BaseUnit {
        vest[] = {"V_PlateCarrier1_blk"};
        ace_medic = 2;
        backpackContents[] = {
            {"rhs_mag_30Rnd_556x45_M855A1_PMAG",4},
            {"SmokeShell",2},
            {"ACE_IR_Strobe_Item",1},
            {"ACE_fieldDressing",20},
            {"ACE_packingBandage",20},
            {"ACE_quikclot",10},
            {"ACE_elasticBandage",15},
            {"ACE_morphine",10},
            {"ACE_epinephrine",10},
            {"ACE_adenosine",4},
            {"ACE_salineIV_500",3},
            {"ACE_salineIV",3},
            {"ACE_personalAidKit",1},
            {"ACE_surgicalKit",1},
            {"ACE_splint",8},
            {"ACE_tourniquet",5}
        };
    };

    class RF: BaseUnit {};

    class UGL: BaseUnit {
        weapons[] = {
            {
                {"CUP_arifle_ACRC_EGLM_blk_556", {"rhs_mag_30Rnd_556x45_M855A1_PMAG","CUP_1Rnd_HEDP_M203",{"rhsusf_acc_compm4","rhsusf_acc_eotech_552","rhsusf_acc_rx01","rhsusf_acc_t1_high","rhsusf_acc_eotech_xps3"},"rhsusf_acc_anpeq15side_bk","rhsusf_acc_nt4_black"}},
                {"CUP_arifle_ACRC_EGLM_blk_556", {"rhs_mag_30Rnd_556x45_M855A1_PMAG","CUP_1Rnd_HEDP_M203",{"rhsusf_acc_compm4","rhsusf_acc_eotech_552","rhsusf_acc_rx01","rhsusf_acc_t1_high","rhsusf_acc_eotech_xps3"},"rhsusf_acc_anpeq15side_bk","rhsusf_acc_nt4_black"}},
                {"CUP_arifle_HK416_CQB_M203_Black", {"rhs_mag_30Rnd_556x45_M855A1_PMAG","CUP_1Rnd_HEDP_M203",{"rhsusf_acc_compm4","rhsusf_acc_eotech_552","rhsusf_acc_rx01","rhsusf_acc_t1_high","rhsusf_acc_eotech_xps3"},"rhsusf_acc_anpeq15side_bk","rhsusf_acc_nt4_black"}},
                {"CUP_arifle_HK416_CQB_AG36", {"rhs_mag_30Rnd_556x45_M855A1_PMAG","CUP_1Rnd_HEDP_M203",{"rhsusf_acc_compm4","rhsusf_acc_eotech_552","rhsusf_acc_rx01","rhsusf_acc_t1_high","rhsusf_acc_eotech_xps3"},"rhsusf_acc_anpeq15side_bk","rhsusf_acc_nt4_black"}},
                {"CUP_arifle_Mk16_CQC_EGLM_black", {"rhs_mag_30Rnd_556x45_M855A1_PMAG","CUP_1Rnd_HEDP_M203",{"rhsusf_acc_compm4","rhsusf_acc_eotech_552","rhsusf_acc_rx01","rhsusf_acc_t1_high","rhsusf_acc_eotech_xps3"},"rhsusf_acc_anpeq15side_bk","rhsusf_acc_nt4_black"}},
                {"CUP_arifle_Mk16_CQC_EGLM_black", {"rhs_mag_30Rnd_556x45_M855A1_PMAG","CUP_1Rnd_HEDP_M203",{"rhsusf_acc_compm4","rhsusf_acc_eotech_552","rhsusf_acc_rx01","rhsusf_acc_t1_high","rhsusf_acc_eotech_xps3"},"rhsusf_acc_anpeq15side_bk","rhsusf_acc_nt4_black"}}
            },
            {"CUP_hgun_Phantom", {"CUP_18Rnd_9x19_Phantom","cup_acc_cz_m3x"}}
        };

        vestContents[] = {
            {"rhs_mag_30Rnd_556x45_M855A1_PMAG",6},
            {"CUP_1Rnd_HEDP_M203",6},
            {"rhs_mag_30Rnd_556x45_M855A1_PMAG_Tracer_Red",1},
            {"rhs_mag_m67",2},
            {"SmokeShell",2},
            {"ACE_CTS9",2},
            {"CUP_18Rnd_9x19_Phantom",1}
        };

        backpackContents[] = {
            {"rhs_mag_30Rnd_556x45_M855A1_PMAG",8},
            {"CUP_1Rnd_HEDP_M203",12},
            {"rhs_mag_30Rnd_556x45_M855A1_PMAG_Tracer_Red",2},
            {"rhs_mag_m67",4},
            {"SmokeShell",2},
            {"ACE_CTS9",2},
            {"ACE_IR_Strobe_Item",1},
            {"ACE_salineIV",1},
            {"SLAMDirectionalMine_Wire_Mag",1},
            {"ACE_M26_Clacker",1}
        };
    };

    class LMG: BaseUnit {
        weapons[] = {
            {
                {"CUP_arifle_HK_M27", {"rhs_mag_100Rnd_556x45_M855A1_cmag",{"rhsusf_acc_compm4","rhsusf_acc_eotech_552","rhsusf_acc_rx01","rhsusf_acc_t1_high","rhsusf_acc_eotech_xps3"},"cup_bipod_harris_1a2_l_blk","rhsusf_acc_anpeq15side_bk","rhsusf_acc_nt4_black"}},
                {"CUP_arifle_HK_M27_VFG", {"rhs_mag_100Rnd_556x45_M855A1_cmag",{"rhsusf_acc_compm4","rhsusf_acc_eotech_552","rhsusf_acc_rx01","rhsusf_acc_t1_high","rhsusf_acc_eotech_xps3"},"cup_bipod_harris_1a2_l_blk","rhsusf_acc_anpeq15side_bk","rhsusf_acc_nt4_black"}}
            },
            {"CUP_hgun_Phantom", {"CUP_18Rnd_9x19_Phantom","cup_acc_cz_m3x"}}
        };

        vestContents[] = {
            {"rhs_mag_100Rnd_556x45_M855A1_cmag",3},
            {"rhs_mag_m67",2},
            {"SmokeShell",1},
            {"ACE_CTS9",1},
            {"CUP_18Rnd_9x19_Phantom",1}
        };

        backpackContents[] = {
            {"rhs_mag_100Rnd_556x45_M855A1_cmag",3},
            {"rhs_mag_100Rnd_556x45_M855A1_cmag_mixed",1},
            {"rhs_mag_m67",2},
            {"SmokeShell",2},
            {"ACE_CTS9",2},
            {"ACE_IR_Strobe_Item",1},
            {"ACE_salineIV",1},
            {"SLAMDirectionalMine_Wire_Mag",1},
            {"ACE_M26_Clacker",1}
        };
    };

    class GPMG: BaseUnit {
        vest[] = {"V_PlateCarrier1_blk"};
        weapons[] = {
            {"CUP_lmg_Mk48", {"CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M",{"rhsusf_acc_compm4","rhsusf_acc_eotech_552","rhsusf_acc_rx01","rhsusf_acc_t1_high","rhsusf_acc_eotech_xps3"},"rhsusf_acc_anpeq15side_bk","muzzle_snds_h_mg_blk_f"}},
            {"CUP_hgun_Phantom", {"CUP_18Rnd_9x19_Phantom","cup_acc_cz_m3x"}}
        };

        vestContents[] = {
            {"CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M",1},
            {"rhs_mag_m67",2},
            {"SmokeShell",2},
            {"ACE_CTS9",2},
            {"CUP_18Rnd_9x19_Phantom",2}
        };

        backpackContents[] = {
            {"CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M",3},
            {"rhs_mag_m67",2},
            {"SmokeShell",2},
            {"ACE_IR_Strobe_Item",1},
            {"ACE_salineIV",1}
        };
    };

    class DMR: BaseUnit {
        weapons[] = {
            {
                {"CUP_arifle_Mk17_STD_black", {"CUP_20Rnd_762x51_B_SCAR_bkl","rhsusf_acc_su230a","rhsusf_acc_anpeq15side_bk","rhsusf_acc_aac_762sdn6_silencer","cup_bipod_harris_1a2_l_blk"}},
                {"CUP_arifle_Mk17_STD_FG_black", {"CUP_20Rnd_762x51_B_SCAR_bkl","rhsusf_acc_su230a","rhsusf_acc_anpeq15side_bk","rhsusf_acc_aac_762sdn6_silencer","cup_bipod_harris_1a2_l_blk"}}
            },
            {"CUP_hgun_Phantom", {"CUP_18Rnd_9x19_Phantom","cup_acc_cz_m3x"}},
            "ACE_Vector"
        };

        vestContents[] = {
            {"CUP_20Rnd_762x51_B_SCAR_bkl",5},
            {"CUP_20Rnd_TE1_Red_Tracer_762x51_SCAR_bkl",2},
            {"rhs_mag_m67",2},
            {"SmokeShell",2},
            {"CUP_18Rnd_9x19_Phantom",2}
        };

        backpackContents[] = {
            {"CUP_20Rnd_762x51_B_SCAR_bkl",6},
            {"CUP_20Rnd_TE1_Red_Tracer_762x51_SCAR_bkl",2},
            {"rhs_mag_m67",4},
            {"SmokeShell",2},
            {"ACE_CTS9",2},
            {"ACE_IR_Strobe_Item",1},
            {"ACE_salineIV",1},
            {"SLAMDirectionalMine_Wire_Mag",1},
            {"ACE_M26_Clacker",1}
        };
    };

    class MAT: BaseUnit {
        vest[] = {"V_PlateCarrier1_blk"};
        weapons[] = {
            DEFAULT_WEAPONS,
            {"CUP_launch_Mk153Mod0_blk", {"CUP_SMAW_HEDP_M","CUP_SMAW_Spotting","cup_optic_smaw_scope","cup_acc_anpeq_15_black"}}
        };

        vestContents[] = {
            {"rhs_mag_30Rnd_556x45_M855A1_PMAG",8},
            {"rhs_mag_30Rnd_556x45_M855A1_PMAG_Tracer_Red",2},
            {"rhs_mag_m67",2},
            {"SmokeShell",2}
        };

        backpackContents[] = {
            {"ACE_IR_Strobe_Item",1},
            {"ACE_salineIV",1},
            {"CUP_SMAW_HEDP_M",1},
            {"CUP_SMAW_HEAA_M",1},
            {"CUP_SMAW_Spotting",2}
        };
    };

    class MATA: BaseUnit {
        vest[] = {"V_PlateCarrier1_blk"};
        weapons[] = {
            DEFAULT_WEAPONS,
            "ACE_Vector"
        };

        vestContents[] = {
            {"rhs_mag_30Rnd_556x45_M855A1_PMAG",10},
            {"rhs_mag_30Rnd_556x45_M855A1_PMAG_Tracer_Red",2},
            {"rhs_mag_m67",2},
            {"SmokeShell",2}
        };

        backpackContents[] = {
            {"rhs_mag_30Rnd_556x45_M855A1_PMAG",2},
            {"ACE_IR_Strobe_Item",1},
            {"ACE_salineIV",1},
            {"CUP_SMAW_HEDP_M",1},
            {"CUP_SMAW_NE_M",1}
        };
    };

    class PILOT: BaseUnit {
        vest[] = {"V_PlateCarrier1_blk"};
        backpack[] = {};

        weapons[] = {
            {"rhsusf_weap_MP7A2", {"rhsusf_mag_40Rnd_46x30_AP",{"rhsusf_acc_rm05","rhsusf_acc_mrds","rhsusf_acc_rx01","rhsusf_acc_t1_low","rhsusf_acc_eotech_xps3"},"rhsusf_acc_anpeq15side_bk","rhsusf_acc_rotex_mp7","rhsusf_acc_tdstubby_blk"}},
            {"CUP_hgun_Phantom", {"CUP_18Rnd_9x19_Phantom","cup_acc_cz_m3x"}}
        };

        vestContents[] = {
            {"ACRE_PRC152",1},
            {"rhsusf_mag_40Rnd_46x30_AP",8},
            {"rhs_mag_m67",2},
            {"SmokeShell",2},
            {"CUP_18Rnd_9x19_Phantom",2}
        };

        backpackContents[] = {};
    };

    class SNIPER: BaseUnit {
        vest[] = {"V_PlateCarrier1_blk"};
        backpack[] = {"ace_gunbag_Tan"};

        weapons[] = {
            {"rhsusf_weap_MP7A2", {"rhsusf_mag_40Rnd_46x30_AP",{"rhsusf_acc_rm05","rhsusf_acc_mrds","rhsusf_acc_rx01","rhsusf_acc_t1_low","rhsusf_acc_eotech_xps3"},"rhsusf_acc_anpeq15side_bk","rhsusf_acc_rotex_mp7","rhsusf_acc_tdstubby_blk"}},
            {"CUP_hgun_Phantom", {"CUP_18Rnd_9x19_Phantom","cup_acc_cz_m3x"}},
            "ACE_Vector"
        };

        vestContents[] = {
            {"ACRE_PRC152",1},
            {"rhs_5Rnd_338lapua_t5000",10},
            {"rhsusf_mag_40Rnd_46x30_AP",7},
            {"ACE_RangeCard",1},
            {"ACE_ATragMX",1},
            {"ACE_Kestrel4500",1},
            {"rhs_mag_m67",2},
            {"SmokeShell",2},
            {"CUP_18Rnd_9x19_Phantom",3}
        };

        backpackContents[] = {
            {"rhs_5Rnd_338lapua_t5000",15},
            {"rhsusf_mag_40Rnd_46x30_AP",1},
            {"ACE_salineIV",1},
            {"ACE_M26_Clacker",1},
            {"ClaymoreDirectionalMine_Remote_Mag",1},
            {"SmokeShell",2}
        };

        ace_gunbagWeapon[] = {"rhs_weap_t5000",{"rhsusf_acc_m8541_low","cup_bipod_harris_1a2_l_blk","rhs_5Rnd_338lapua_t5000"}};
    };

    class LauncherCrate {
        
    };

    class LargeGearCrate {
        
    };
};

class HiredGoonsPMC_OPFOR {
    // Same loadout but with slightly worse ammo
    class BaseUnit {
        allowPlayerGoggles = 0;
        ace_medic = 1;
        assignedItems[] = {"ItemMap","ItemCompass","ItemWatch","CUP_NVG_GPNVG_black"};

        uniform[] = {"rhs_uniform_g3_blk"};
        vest[] = {"V_PlateCarrier2_blk"};
        backpack[] = {"B_ViperLightHarness_blk_F"};
        headGear[] = {"rhsusf_hgu56p_visor_black","rhsusf_hgu56p_visor_mask_black","rhsusf_hgu56p_visor_mask_Empire_black"};
        goggles[] = {"G_Balaclava_TI_blk_F"};

        uniformContents[] = {
            {"ACRE_PRC343",1},
            {"ACE_microDAGR",1},
            {"ACE_fieldDressing",4},
            {"ACE_elasticBandage",4},
            {"ACE_tourniquet",2},
            {"ACE_morphine",2},
            {"ACE_splint",2},
            {"ACE_salineIV_500",1},
            {"ACE_MapTools",1},
            {"ACE_Flashlight_XL50",1},
        };

        weapons[] = {
            {
                {"CUP_arifle_ACRC_blk_556", {"rhs_mag_30Rnd_556x45_M855_PMAG",{"rhsusf_acc_compm4","rhsusf_acc_eotech_552","rhsusf_acc_rx01","rhsusf_acc_t1_high","rhsusf_acc_eotech_xps3"},"rhsusf_acc_anpeq15side_bk","rhsusf_acc_nt4_black"}},
                {"CUP_arifle_ACRC_blk_556", {"rhs_mag_30Rnd_556x45_M855_PMAG",{"rhsusf_acc_compm4","rhsusf_acc_eotech_552","rhsusf_acc_rx01","rhsusf_acc_t1_high","rhsusf_acc_eotech_xps3"},"rhsusf_acc_anpeq15side_bk","rhsusf_acc_nt4_black"}},
                {"CUP_CZ_BREN2_556_8", {"rhs_mag_30Rnd_556x45_M855_PMAG",{"rhsusf_acc_compm4","rhsusf_acc_eotech_552","rhsusf_acc_rx01","rhsusf_acc_t1_high","rhsusf_acc_eotech_xps3"},"rhsusf_acc_anpeq15side_bk","rhsusf_acc_nt4_black"}},
                {"CUP_CZ_BREN2_556_8", {"rhs_mag_30Rnd_556x45_M855_PMAG",{"rhsusf_acc_compm4","rhsusf_acc_eotech_552","rhsusf_acc_rx01","rhsusf_acc_t1_high","rhsusf_acc_eotech_xps3"},"rhsusf_acc_anpeq15side_bk","rhsusf_acc_nt4_black"}},
                {"CUP_arifle_HK416_CQB_Black", {"rhs_mag_30Rnd_556x45_M855_PMAG",{"rhsusf_acc_compm4","rhsusf_acc_eotech_552","rhsusf_acc_rx01","rhsusf_acc_t1_high","rhsusf_acc_eotech_xps3"},"rhsusf_acc_anpeq15side_bk","rhsusf_acc_nt4_black"}},
                {"CUP_arifle_HK416_CQB_Black", {"rhs_mag_30Rnd_556x45_M855_PMAG",{"rhsusf_acc_compm4","rhsusf_acc_eotech_552","rhsusf_acc_rx01","rhsusf_acc_t1_high","rhsusf_acc_eotech_xps3"},"rhsusf_acc_anpeq15side_bk","rhsusf_acc_nt4_black"}},
                {"CUP_arifle_Mk16_CQC_AFG_black", {"rhs_mag_30Rnd_556x45_M855_PMAG",{"rhsusf_acc_compm4","rhsusf_acc_eotech_552","rhsusf_acc_rx01","rhsusf_acc_t1_high","rhsusf_acc_eotech_xps3"},"rhsusf_acc_anpeq15side_bk","rhsusf_acc_nt4_black"}},
                {"CUP_arifle_Mk16_CQC_black", {"rhs_mag_30Rnd_556x45_M855_PMAG",{"rhsusf_acc_compm4","rhsusf_acc_eotech_552","rhsusf_acc_rx01","rhsusf_acc_t1_high","rhsusf_acc_eotech_xps3"},"rhsusf_acc_anpeq15side_bk","rhsusf_acc_nt4_black"}},
                {"CUP_arifle_Mk16_CQC_FG_black", {"rhs_mag_30Rnd_556x45_M855_PMAG",{"rhsusf_acc_compm4","rhsusf_acc_eotech_552","rhsusf_acc_rx01","rhsusf_acc_t1_high","rhsusf_acc_eotech_xps3"},"rhsusf_acc_anpeq15side_bk","rhsusf_acc_nt4_black"}}
            },
            {"CUP_hgun_Phantom", {"CUP_18Rnd_9x19_Phantom","cup_acc_cz_m3x"}}
        };
        vestContents[] = {
            {"rhs_mag_30Rnd_556x45_M855_PMAG",8},
            {"rhs_mag_30Rnd_556x45_M855_PMAG_Tracer_Red",2},
            {"rhs_mag_m67",2},
            {"SmokeShell",2},
            {"ACE_CTS9",2},
            {"CUP_18Rnd_9x19_Phantom",1}
        };

        backpackContents[] = {
            {"rhs_mag_30Rnd_556x45_M855_PMAG",8},
            {"rhs_mag_30Rnd_556x45_M855_PMAG_Tracer_Red",2},
            {"rhs_mag_m67",4},
            {"SmokeShell",2},
            {"ACE_CTS9",2},
            {"ACE_IR_Strobe_Item",1},
            {"ACE_salineIV",1},
            {"SLAMDirectionalMine_Wire_Mag",1},
            {"ACE_M26_Clacker",1},
            {"CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M",1}
        };
    };

    class PL: BaseUnit {
        weapons[] = {
            {
                {"CUP_arifle_ACRC_blk_556", {"rhs_mag_30Rnd_556x45_M855_PMAG",{"rhsusf_acc_compm4","rhsusf_acc_eotech_552","rhsusf_acc_rx01","rhsusf_acc_t1_high","rhsusf_acc_eotech_xps3"},"rhsusf_acc_anpeq15side_bk","rhsusf_acc_nt4_black"}},
                {"CUP_arifle_ACRC_blk_556", {"rhs_mag_30Rnd_556x45_M855_PMAG",{"rhsusf_acc_compm4","rhsusf_acc_eotech_552","rhsusf_acc_rx01","rhsusf_acc_t1_high","rhsusf_acc_eotech_xps3"},"rhsusf_acc_anpeq15side_bk","rhsusf_acc_nt4_black"}},
                {"CUP_CZ_BREN2_556_8", {"rhs_mag_30Rnd_556x45_M855_PMAG",{"rhsusf_acc_compm4","rhsusf_acc_eotech_552","rhsusf_acc_rx01","rhsusf_acc_t1_high","rhsusf_acc_eotech_xps3"},"rhsusf_acc_anpeq15side_bk","rhsusf_acc_nt4_black"}},
                {"CUP_CZ_BREN2_556_8", {"rhs_mag_30Rnd_556x45_M855_PMAG",{"rhsusf_acc_compm4","rhsusf_acc_eotech_552","rhsusf_acc_rx01","rhsusf_acc_t1_high","rhsusf_acc_eotech_xps3"},"rhsusf_acc_anpeq15side_bk","rhsusf_acc_nt4_black"}},
                {"CUP_arifle_HK416_CQB_Black", {"rhs_mag_30Rnd_556x45_M855_PMAG",{"rhsusf_acc_compm4","rhsusf_acc_eotech_552","rhsusf_acc_rx01","rhsusf_acc_t1_high","rhsusf_acc_eotech_xps3"},"rhsusf_acc_anpeq15side_bk","rhsusf_acc_nt4_black"}},
                {"CUP_arifle_HK416_CQB_Black", {"rhs_mag_30Rnd_556x45_M855_PMAG",{"rhsusf_acc_compm4","rhsusf_acc_eotech_552","rhsusf_acc_rx01","rhsusf_acc_t1_high","rhsusf_acc_eotech_xps3"},"rhsusf_acc_anpeq15side_bk","rhsusf_acc_nt4_black"}},
                {"CUP_arifle_Mk16_CQC_AFG_black", {"rhs_mag_30Rnd_556x45_M855_PMAG",{"rhsusf_acc_compm4","rhsusf_acc_eotech_552","rhsusf_acc_rx01","rhsusf_acc_t1_high","rhsusf_acc_eotech_xps3"},"rhsusf_acc_anpeq15side_bk","rhsusf_acc_nt4_black"}},
                {"CUP_arifle_Mk16_CQC_black", {"rhs_mag_30Rnd_556x45_M855_PMAG",{"rhsusf_acc_compm4","rhsusf_acc_eotech_552","rhsusf_acc_rx01","rhsusf_acc_t1_high","rhsusf_acc_eotech_xps3"},"rhsusf_acc_anpeq15side_bk","rhsusf_acc_nt4_black"}},
                {"CUP_arifle_Mk16_CQC_FG_black", {"rhs_mag_30Rnd_556x45_M855_PMAG",{"rhsusf_acc_compm4","rhsusf_acc_eotech_552","rhsusf_acc_rx01","rhsusf_acc_t1_high","rhsusf_acc_eotech_xps3"},"rhsusf_acc_anpeq15side_bk","rhsusf_acc_nt4_black"}}
            },
            {"CUP_hgun_Phantom", {"CUP_18Rnd_9x19_Phantom","cup_acc_cz_m3x"}},
            "ACE_Vector"
        };

        vestContents[] = {
            {"ACRE_PRC152",1},
            {"rhs_mag_30Rnd_556x45_M855_PMAG",8},
            {"rhs_mag_30Rnd_556x45_M855_PMAG_Tracer_Red",2},
            {"rhs_mag_m67",2},
            {"SmokeShell",2},
            {"CUP_18Rnd_9x19_Phantom",1},
            {"ACE_CTS9",1}
        };

        backpackContents[] = {
            {"rhs_mag_30Rnd_556x45_M855_PMAG",8},
            {"rhs_mag_30Rnd_556x45_M855_PMAG_Tracer_Red",2},
            {"rhs_mag_m67",4},
            {"SmokeShell",2},
            {"ACE_CTS9",2},
            {"ACE_IR_Strobe_Item",1},
            {"ACE_salineIV",1},
            {"ACE_MX2A",1},
            {"SLAMDirectionalMine_Wire_Mag",1},
            {"ACE_M26_Clacker",1}
        };
    };

    class ZEUS: PL {
        headGear[] = {"rhsusf_hgu56p_visor_mask_black_skull"};
    };

    class TL: BaseUnit {
        weapons[] = {
            {
                {"CUP_arifle_ACRC_blk_556", {"rhs_mag_30Rnd_556x45_M855_PMAG",{"rhsusf_acc_compm4","rhsusf_acc_eotech_552","rhsusf_acc_rx01","rhsusf_acc_t1_high","rhsusf_acc_eotech_xps3"},"rhsusf_acc_anpeq15side_bk","rhsusf_acc_nt4_black"}},
                {"CUP_arifle_ACRC_blk_556", {"rhs_mag_30Rnd_556x45_M855_PMAG",{"rhsusf_acc_compm4","rhsusf_acc_eotech_552","rhsusf_acc_rx01","rhsusf_acc_t1_high","rhsusf_acc_eotech_xps3"},"rhsusf_acc_anpeq15side_bk","rhsusf_acc_nt4_black"}},
                {"CUP_CZ_BREN2_556_8", {"rhs_mag_30Rnd_556x45_M855_PMAG",{"rhsusf_acc_compm4","rhsusf_acc_eotech_552","rhsusf_acc_rx01","rhsusf_acc_t1_high","rhsusf_acc_eotech_xps3"},"rhsusf_acc_anpeq15side_bk","rhsusf_acc_nt4_black"}},
                {"CUP_CZ_BREN2_556_8", {"rhs_mag_30Rnd_556x45_M855_PMAG",{"rhsusf_acc_compm4","rhsusf_acc_eotech_552","rhsusf_acc_rx01","rhsusf_acc_t1_high","rhsusf_acc_eotech_xps3"},"rhsusf_acc_anpeq15side_bk","rhsusf_acc_nt4_black"}},
                {"CUP_arifle_HK416_CQB_Black", {"rhs_mag_30Rnd_556x45_M855_PMAG",{"rhsusf_acc_compm4","rhsusf_acc_eotech_552","rhsusf_acc_rx01","rhsusf_acc_t1_high","rhsusf_acc_eotech_xps3"},"rhsusf_acc_anpeq15side_bk","rhsusf_acc_nt4_black"}},
                {"CUP_arifle_HK416_CQB_Black", {"rhs_mag_30Rnd_556x45_M855_PMAG",{"rhsusf_acc_compm4","rhsusf_acc_eotech_552","rhsusf_acc_rx01","rhsusf_acc_t1_high","rhsusf_acc_eotech_xps3"},"rhsusf_acc_anpeq15side_bk","rhsusf_acc_nt4_black"}},
                {"CUP_arifle_Mk16_CQC_AFG_black", {"rhs_mag_30Rnd_556x45_M855_PMAG",{"rhsusf_acc_compm4","rhsusf_acc_eotech_552","rhsusf_acc_rx01","rhsusf_acc_t1_high","rhsusf_acc_eotech_xps3"},"rhsusf_acc_anpeq15side_bk","rhsusf_acc_nt4_black"}},
                {"CUP_arifle_Mk16_CQC_black", {"rhs_mag_30Rnd_556x45_M855_PMAG",{"rhsusf_acc_compm4","rhsusf_acc_eotech_552","rhsusf_acc_rx01","rhsusf_acc_t1_high","rhsusf_acc_eotech_xps3"},"rhsusf_acc_anpeq15side_bk","rhsusf_acc_nt4_black"}},
                {"CUP_arifle_Mk16_CQC_FG_black", {"rhs_mag_30Rnd_556x45_M855_PMAG",{"rhsusf_acc_compm4","rhsusf_acc_eotech_552","rhsusf_acc_rx01","rhsusf_acc_t1_high","rhsusf_acc_eotech_xps3"},"rhsusf_acc_anpeq15side_bk","rhsusf_acc_nt4_black"}}
            },
            {"CUP_hgun_Phantom", {"CUP_18Rnd_9x19_Phantom","cup_acc_cz_m3x"}},
            "ACE_Vector"
        };

        vestContents[] = {
            {"ACRE_PRC152",1},
            {"rhs_mag_30Rnd_556x45_M855_PMAG",8},
            {"rhs_mag_30Rnd_556x45_M855_PMAG_Tracer_Red",2},
            {"rhs_mag_m67",2},
            {"SmokeShell",2},
            {"CUP_18Rnd_9x19_Phantom",1},
            {"ACE_CTS9",1}
        };
    };

    class FSO: BaseUnit {
        weapons[] = {
            {
                {"CUP_arifle_ACRC_blk_556", {"rhs_mag_30Rnd_556x45_M855_PMAG",{"rhsusf_acc_compm4","rhsusf_acc_eotech_552","rhsusf_acc_rx01","rhsusf_acc_t1_high","rhsusf_acc_eotech_xps3"},"rhsusf_acc_anpeq15side_bk","rhsusf_acc_nt4_black"}},
                {"CUP_arifle_ACRC_blk_556", {"rhs_mag_30Rnd_556x45_M855_PMAG",{"rhsusf_acc_compm4","rhsusf_acc_eotech_552","rhsusf_acc_rx01","rhsusf_acc_t1_high","rhsusf_acc_eotech_xps3"},"rhsusf_acc_anpeq15side_bk","rhsusf_acc_nt4_black"}},
                {"CUP_CZ_BREN2_556_8", {"rhs_mag_30Rnd_556x45_M855_PMAG",{"rhsusf_acc_compm4","rhsusf_acc_eotech_552","rhsusf_acc_rx01","rhsusf_acc_t1_high","rhsusf_acc_eotech_xps3"},"rhsusf_acc_anpeq15side_bk","rhsusf_acc_nt4_black"}},
                {"CUP_CZ_BREN2_556_8", {"rhs_mag_30Rnd_556x45_M855_PMAG",{"rhsusf_acc_compm4","rhsusf_acc_eotech_552","rhsusf_acc_rx01","rhsusf_acc_t1_high","rhsusf_acc_eotech_xps3"},"rhsusf_acc_anpeq15side_bk","rhsusf_acc_nt4_black"}},
                {"CUP_arifle_HK416_CQB_Black", {"rhs_mag_30Rnd_556x45_M855_PMAG",{"rhsusf_acc_compm4","rhsusf_acc_eotech_552","rhsusf_acc_rx01","rhsusf_acc_t1_high","rhsusf_acc_eotech_xps3"},"rhsusf_acc_anpeq15side_bk","rhsusf_acc_nt4_black"}},
                {"CUP_arifle_HK416_CQB_Black", {"rhs_mag_30Rnd_556x45_M855_PMAG",{"rhsusf_acc_compm4","rhsusf_acc_eotech_552","rhsusf_acc_rx01","rhsusf_acc_t1_high","rhsusf_acc_eotech_xps3"},"rhsusf_acc_anpeq15side_bk","rhsusf_acc_nt4_black"}},
                {"CUP_arifle_Mk16_CQC_AFG_black", {"rhs_mag_30Rnd_556x45_M855_PMAG",{"rhsusf_acc_compm4","rhsusf_acc_eotech_552","rhsusf_acc_rx01","rhsusf_acc_t1_high","rhsusf_acc_eotech_xps3"},"rhsusf_acc_anpeq15side_bk","rhsusf_acc_nt4_black"}},
                {"CUP_arifle_Mk16_CQC_black", {"rhs_mag_30Rnd_556x45_M855_PMAG",{"rhsusf_acc_compm4","rhsusf_acc_eotech_552","rhsusf_acc_rx01","rhsusf_acc_t1_high","rhsusf_acc_eotech_xps3"},"rhsusf_acc_anpeq15side_bk","rhsusf_acc_nt4_black"}},
                {"CUP_arifle_Mk16_CQC_FG_black", {"rhs_mag_30Rnd_556x45_M855_PMAG",{"rhsusf_acc_compm4","rhsusf_acc_eotech_552","rhsusf_acc_rx01","rhsusf_acc_t1_high","rhsusf_acc_eotech_xps3"},"rhsusf_acc_anpeq15side_bk","rhsusf_acc_nt4_black"}}
            },
            {"CUP_hgun_Phantom", {"CUP_18Rnd_9x19_Phantom","cup_acc_cz_m3x"}},
            "ACE_Vector"
        };

        vestContents[] = {
            {"ACRE_PRC152",2},
            {"rhs_mag_30Rnd_556x45_M855_PMAG",7},
            {"rhs_mag_30Rnd_556x45_M855_PMAG_Tracer_Red",2},
            {"rhs_mag_m67",2},
            {"SmokeShell",2},
            {"CUP_18Rnd_9x19_Phantom",1},
            {"ACE_CTS9",1}
        };

        backpackContents[] = {
            {"rhs_mag_30Rnd_556x45_M855_PMAG",8},
            {"rhs_mag_30Rnd_556x45_M855_PMAG_Tracer_Red",2},
            {"rhs_mag_m67",4},
            {"SmokeShell",2},
            {"ACE_CTS9",2},
            {"ACE_IR_Strobe_Item",1},
            {"ACE_salineIV",1},
            {"Laserdesignator_01_khk_F",1},
            {"Laserbatteries",1},
            {"SLAMDirectionalMine_Wire_Mag",1},
            {"ACE_M26_Clacker",1}
        };
    };

    class MED: BaseUnit {
        vest[] = {"V_PlateCarrier1_blk"};
        ace_medic = 2;
        backpackContents[] = {
            {"rhs_mag_30Rnd_556x45_M855_PMAG",4},
            {"SmokeShell",2},
            {"ACE_IR_Strobe_Item",1},
            {"ACE_fieldDressing",20},
            {"ACE_packingBandage",20},
            {"ACE_quikclot",10},
            {"ACE_elasticBandage",15},
            {"ACE_morphine",10},
            {"ACE_epinephrine",10},
            {"ACE_adenosine",4},
            {"ACE_salineIV_500",3},
            {"ACE_salineIV",3},
            {"ACE_personalAidKit",1},
            {"ACE_surgicalKit",1},
            {"ACE_splint",8},
            {"ACE_tourniquet",5}
        };
    };

    class RF: BaseUnit {};

    class UGL: BaseUnit {
        weapons[] = {
            {
                {"CUP_arifle_ACRC_EGLM_blk_556", {"rhs_mag_30Rnd_556x45_M855_PMAG","CUP_1Rnd_HEDP_M203",{"rhsusf_acc_compm4","rhsusf_acc_eotech_552","rhsusf_acc_rx01","rhsusf_acc_t1_high","rhsusf_acc_eotech_xps3"},"rhsusf_acc_anpeq15side_bk","rhsusf_acc_nt4_black"}},
                {"CUP_arifle_ACRC_EGLM_blk_556", {"rhs_mag_30Rnd_556x45_M855_PMAG","CUP_1Rnd_HEDP_M203",{"rhsusf_acc_compm4","rhsusf_acc_eotech_552","rhsusf_acc_rx01","rhsusf_acc_t1_high","rhsusf_acc_eotech_xps3"},"rhsusf_acc_anpeq15side_bk","rhsusf_acc_nt4_black"}},
                {"CUP_arifle_HK416_CQB_M203_Black", {"rhs_mag_30Rnd_556x45_M855_PMAG","CUP_1Rnd_HEDP_M203",{"rhsusf_acc_compm4","rhsusf_acc_eotech_552","rhsusf_acc_rx01","rhsusf_acc_t1_high","rhsusf_acc_eotech_xps3"},"rhsusf_acc_anpeq15side_bk","rhsusf_acc_nt4_black"}},
                {"CUP_arifle_HK416_CQB_AG36", {"rhs_mag_30Rnd_556x45_M855_PMAG","CUP_1Rnd_HEDP_M203",{"rhsusf_acc_compm4","rhsusf_acc_eotech_552","rhsusf_acc_rx01","rhsusf_acc_t1_high","rhsusf_acc_eotech_xps3"},"rhsusf_acc_anpeq15side_bk","rhsusf_acc_nt4_black"}},
                {"CUP_arifle_Mk16_CQC_EGLM_black", {"rhs_mag_30Rnd_556x45_M855_PMAG","CUP_1Rnd_HEDP_M203",{"rhsusf_acc_compm4","rhsusf_acc_eotech_552","rhsusf_acc_rx01","rhsusf_acc_t1_high","rhsusf_acc_eotech_xps3"},"rhsusf_acc_anpeq15side_bk","rhsusf_acc_nt4_black"}},
                {"CUP_arifle_Mk16_CQC_EGLM_black", {"rhs_mag_30Rnd_556x45_M855_PMAG","CUP_1Rnd_HEDP_M203",{"rhsusf_acc_compm4","rhsusf_acc_eotech_552","rhsusf_acc_rx01","rhsusf_acc_t1_high","rhsusf_acc_eotech_xps3"},"rhsusf_acc_anpeq15side_bk","rhsusf_acc_nt4_black"}}
            },
            {"CUP_hgun_Phantom", {"CUP_18Rnd_9x19_Phantom","cup_acc_cz_m3x"}}
        };

        vestContents[] = {
            {"rhs_mag_30Rnd_556x45_M855_PMAG",6},
            {"CUP_1Rnd_HEDP_M203",6},
            {"rhs_mag_30Rnd_556x45_M855_PMAG_Tracer_Red",1},
            {"rhs_mag_m67",2},
            {"SmokeShell",2},
            {"ACE_CTS9",2},
            {"CUP_18Rnd_9x19_Phantom",1}
        };

        backpackContents[] = {
            {"rhs_mag_30Rnd_556x45_M855_PMAG",8},
            {"CUP_1Rnd_HEDP_M203",12},
            {"rhs_mag_30Rnd_556x45_M855_PMAG_Tracer_Red",2},
            {"rhs_mag_m67",4},
            {"SmokeShell",2},
            {"ACE_CTS9",2},
            {"ACE_IR_Strobe_Item",1},
            {"ACE_salineIV",1},
            {"SLAMDirectionalMine_Wire_Mag",1},
            {"ACE_M26_Clacker",1}
        };
    };

    class LMG: BaseUnit {
        weapons[] = {
            {
                {"CUP_arifle_HK_M27", {"rhs_mag_100Rnd_556x45_M855A1_cmag",{"rhsusf_acc_compm4","rhsusf_acc_eotech_552","rhsusf_acc_rx01","rhsusf_acc_t1_high","rhsusf_acc_eotech_xps3"},"cup_bipod_harris_1a2_l_blk","rhsusf_acc_anpeq15side_bk","rhsusf_acc_nt4_black"}},
                {"CUP_arifle_HK_M27_VFG", {"rhs_mag_100Rnd_556x45_M855A1_cmag",{"rhsusf_acc_compm4","rhsusf_acc_eotech_552","rhsusf_acc_rx01","rhsusf_acc_t1_high","rhsusf_acc_eotech_xps3"},"cup_bipod_harris_1a2_l_blk","rhsusf_acc_anpeq15side_bk","rhsusf_acc_nt4_black"}}
            },
            {"CUP_hgun_Phantom", {"CUP_18Rnd_9x19_Phantom","cup_acc_cz_m3x"}}
        };

        vestContents[] = {
            {"rhs_mag_100Rnd_556x45_M855A1_cmag",3},
            {"rhs_mag_m67",2},
            {"SmokeShell",1},
            {"ACE_CTS9",1},
            {"CUP_18Rnd_9x19_Phantom",1}
        };

        backpackContents[] = {
            {"rhs_mag_100Rnd_556x45_M855A1_cmag",3},
            {"rhs_mag_100Rnd_556x45_M855A1_cmag_mixed",1},
            {"rhs_mag_m67",2},
            {"SmokeShell",2},
            {"ACE_CTS9",2},
            {"ACE_IR_Strobe_Item",1},
            {"ACE_salineIV",1},
            {"SLAMDirectionalMine_Wire_Mag",1},
            {"ACE_M26_Clacker",1}
        };
    };

    class GPMG: LMG {
        vest[] = {"V_PlateCarrier1_blk"};
        weapons[] = {
            {"CUP_lmg_Mk48", {"CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M",{"rhsusf_acc_compm4","rhsusf_acc_eotech_552","rhsusf_acc_rx01","rhsusf_acc_t1_high","rhsusf_acc_eotech_xps3"},"rhsusf_acc_anpeq15side_bk","muzzle_snds_h_mg_blk_f"}},
            {"CUP_hgun_Phantom", {"CUP_18Rnd_9x19_Phantom","cup_acc_cz_m3x"}}
        };

        vestContents[] = {
            {"CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M",1},
            {"rhs_mag_m67",2},
            {"SmokeShell",2},
            {"ACE_CTS9",2},
            {"CUP_18Rnd_9x19_Phantom",2}
        };

        backpackContents[] = {
            {"CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M",3},
            {"rhs_mag_m67",2},
            {"SmokeShell",2},
            {"ACE_IR_Strobe_Item",1},
            {"ACE_salineIV",1}
        };
    };

    class DMR: BaseUnit {
        weapons[] = {
            {
                {"CUP_arifle_Mk17_STD_black", {"CUP_20Rnd_762x51_B_SCAR_bkl","rhsusf_acc_su230a","rhsusf_acc_anpeq15side_bk","rhsusf_acc_aac_762sdn6_silencer","cup_bipod_harris_1a2_l_blk"}},
                {"CUP_arifle_Mk17_STD_FG_black", {"CUP_20Rnd_762x51_B_SCAR_bkl","rhsusf_acc_su230a","rhsusf_acc_anpeq15side_bk","rhsusf_acc_aac_762sdn6_silencer","cup_bipod_harris_1a2_l_blk"}}
            },
            {"CUP_hgun_Phantom", {"CUP_18Rnd_9x19_Phantom","cup_acc_cz_m3x"}},
            "ACE_Vector"
        };

        vestContents[] = {
            {"CUP_20Rnd_762x51_B_SCAR_bkl",5},
            {"CUP_20Rnd_TE1_Red_Tracer_762x51_SCAR_bkl",2},
            {"rhs_mag_m67",2},
            {"SmokeShell",2},
            {"CUP_18Rnd_9x19_Phantom",2}
        };

        backpackContents[] = {
            {"CUP_20Rnd_762x51_B_SCAR_bkl",6},
            {"CUP_20Rnd_TE1_Red_Tracer_762x51_SCAR_bkl",2},
            {"rhs_mag_m67",4},
            {"SmokeShell",2},
            {"ACE_CTS9",2},
            {"ACE_IR_Strobe_Item",1},
            {"ACE_salineIV",1},
            {"SLAMDirectionalMine_Wire_Mag",1},
            {"ACE_M26_Clacker",1}
        };
    };

    class MAT: BaseUnit {
        vest[] = {"V_PlateCarrier1_blk"};
        weapons[] = {
            {
                {"CUP_arifle_ACRC_blk_556", {"rhs_mag_30Rnd_556x45_M855_PMAG",{"rhsusf_acc_compm4","rhsusf_acc_eotech_552","rhsusf_acc_rx01","rhsusf_acc_t1_high","rhsusf_acc_eotech_xps3"},"rhsusf_acc_anpeq15side_bk","rhsusf_acc_nt4_black"}},
                {"CUP_arifle_ACRC_blk_556", {"rhs_mag_30Rnd_556x45_M855_PMAG",{"rhsusf_acc_compm4","rhsusf_acc_eotech_552","rhsusf_acc_rx01","rhsusf_acc_t1_high","rhsusf_acc_eotech_xps3"},"rhsusf_acc_anpeq15side_bk","rhsusf_acc_nt4_black"}},
                {"CUP_CZ_BREN2_556_8", {"rhs_mag_30Rnd_556x45_M855_PMAG",{"rhsusf_acc_compm4","rhsusf_acc_eotech_552","rhsusf_acc_rx01","rhsusf_acc_t1_high","rhsusf_acc_eotech_xps3"},"rhsusf_acc_anpeq15side_bk","rhsusf_acc_nt4_black"}},
                {"CUP_CZ_BREN2_556_8", {"rhs_mag_30Rnd_556x45_M855_PMAG",{"rhsusf_acc_compm4","rhsusf_acc_eotech_552","rhsusf_acc_rx01","rhsusf_acc_t1_high","rhsusf_acc_eotech_xps3"},"rhsusf_acc_anpeq15side_bk","rhsusf_acc_nt4_black"}},
                {"CUP_arifle_HK416_CQB_Black", {"rhs_mag_30Rnd_556x45_M855_PMAG",{"rhsusf_acc_compm4","rhsusf_acc_eotech_552","rhsusf_acc_rx01","rhsusf_acc_t1_high","rhsusf_acc_eotech_xps3"},"rhsusf_acc_anpeq15side_bk","rhsusf_acc_nt4_black"}},
                {"CUP_arifle_HK416_CQB_Black", {"rhs_mag_30Rnd_556x45_M855_PMAG",{"rhsusf_acc_compm4","rhsusf_acc_eotech_552","rhsusf_acc_rx01","rhsusf_acc_t1_high","rhsusf_acc_eotech_xps3"},"rhsusf_acc_anpeq15side_bk","rhsusf_acc_nt4_black"}},
                {"CUP_arifle_Mk16_CQC_AFG_black", {"rhs_mag_30Rnd_556x45_M855_PMAG",{"rhsusf_acc_compm4","rhsusf_acc_eotech_552","rhsusf_acc_rx01","rhsusf_acc_t1_high","rhsusf_acc_eotech_xps3"},"rhsusf_acc_anpeq15side_bk","rhsusf_acc_nt4_black"}},
                {"CUP_arifle_Mk16_CQC_black", {"rhs_mag_30Rnd_556x45_M855_PMAG",{"rhsusf_acc_compm4","rhsusf_acc_eotech_552","rhsusf_acc_rx01","rhsusf_acc_t1_high","rhsusf_acc_eotech_xps3"},"rhsusf_acc_anpeq15side_bk","rhsusf_acc_nt4_black"}},
                {"CUP_arifle_Mk16_CQC_FG_black", {"rhs_mag_30Rnd_556x45_M855_PMAG",{"rhsusf_acc_compm4","rhsusf_acc_eotech_552","rhsusf_acc_rx01","rhsusf_acc_t1_high","rhsusf_acc_eotech_xps3"},"rhsusf_acc_anpeq15side_bk","rhsusf_acc_nt4_black"}}
            },
            {"CUP_launch_Mk153Mod0_blk", {"CUP_SMAW_HEDP_M","CUP_SMAW_Spotting","cup_optic_smaw_scope","cup_acc_anpeq_15_black"}}
        };

        vestContents[] = {
            {"rhs_mag_30Rnd_556x45_M855_PMAG",8},
            {"rhs_mag_30Rnd_556x45_M855_PMAG_Tracer_Red",2},
            {"rhs_mag_m67",2},
            {"SmokeShell",2}
        };

        backpackContents[] = {
            {"ACE_IR_Strobe_Item",1},
            {"ACE_salineIV",1},
            {"CUP_SMAW_HEDP_M",1},
            {"CUP_SMAW_HEAA_M",1}
        };
    };

    class MATA: BaseUnit {
        vest[] = {"V_PlateCarrier1_blk"};
        weapons[] = {
            {
                {"CUP_arifle_ACRC_blk_556", {"rhs_mag_30Rnd_556x45_M855_PMAG",{"rhsusf_acc_compm4","rhsusf_acc_eotech_552","rhsusf_acc_rx01","rhsusf_acc_t1_high","rhsusf_acc_eotech_xps3"},"rhsusf_acc_anpeq15side_bk","rhsusf_acc_nt4_black"}},
                {"CUP_arifle_ACRC_blk_556", {"rhs_mag_30Rnd_556x45_M855_PMAG",{"rhsusf_acc_compm4","rhsusf_acc_eotech_552","rhsusf_acc_rx01","rhsusf_acc_t1_high","rhsusf_acc_eotech_xps3"},"rhsusf_acc_anpeq15side_bk","rhsusf_acc_nt4_black"}},
                {"CUP_CZ_BREN2_556_8", {"rhs_mag_30Rnd_556x45_M855_PMAG",{"rhsusf_acc_compm4","rhsusf_acc_eotech_552","rhsusf_acc_rx01","rhsusf_acc_t1_high","rhsusf_acc_eotech_xps3"},"rhsusf_acc_anpeq15side_bk","rhsusf_acc_nt4_black"}},
                {"CUP_CZ_BREN2_556_8", {"rhs_mag_30Rnd_556x45_M855_PMAG",{"rhsusf_acc_compm4","rhsusf_acc_eotech_552","rhsusf_acc_rx01","rhsusf_acc_t1_high","rhsusf_acc_eotech_xps3"},"rhsusf_acc_anpeq15side_bk","rhsusf_acc_nt4_black"}},
                {"CUP_arifle_HK416_CQB_Black", {"rhs_mag_30Rnd_556x45_M855_PMAG",{"rhsusf_acc_compm4","rhsusf_acc_eotech_552","rhsusf_acc_rx01","rhsusf_acc_t1_high","rhsusf_acc_eotech_xps3"},"rhsusf_acc_anpeq15side_bk","rhsusf_acc_nt4_black"}},
                {"CUP_arifle_HK416_CQB_Black", {"rhs_mag_30Rnd_556x45_M855_PMAG",{"rhsusf_acc_compm4","rhsusf_acc_eotech_552","rhsusf_acc_rx01","rhsusf_acc_t1_high","rhsusf_acc_eotech_xps3"},"rhsusf_acc_anpeq15side_bk","rhsusf_acc_nt4_black"}},
                {"CUP_arifle_Mk16_CQC_AFG_black", {"rhs_mag_30Rnd_556x45_M855_PMAG",{"rhsusf_acc_compm4","rhsusf_acc_eotech_552","rhsusf_acc_rx01","rhsusf_acc_t1_high","rhsusf_acc_eotech_xps3"},"rhsusf_acc_anpeq15side_bk","rhsusf_acc_nt4_black"}},
                {"CUP_arifle_Mk16_CQC_black", {"rhs_mag_30Rnd_556x45_M855_PMAG",{"rhsusf_acc_compm4","rhsusf_acc_eotech_552","rhsusf_acc_rx01","rhsusf_acc_t1_high","rhsusf_acc_eotech_xps3"},"rhsusf_acc_anpeq15side_bk","rhsusf_acc_nt4_black"}},
                {"CUP_arifle_Mk16_CQC_FG_black", {"rhs_mag_30Rnd_556x45_M855_PMAG",{"rhsusf_acc_compm4","rhsusf_acc_eotech_552","rhsusf_acc_rx01","rhsusf_acc_t1_high","rhsusf_acc_eotech_xps3"},"rhsusf_acc_anpeq15side_bk","rhsusf_acc_nt4_black"}}
            },
            "ACE_Vector"
        };

        vestContents[] = {
            {"rhs_mag_30Rnd_556x45_M855_PMAG",10},
            {"rhs_mag_30Rnd_556x45_M855_PMAG_Tracer_Red",2},
            {"rhs_mag_m67",2},
            {"SmokeShell",2}
        };

        backpackContents[] = {
            {"rhs_mag_30Rnd_556x45_M855_PMAG",2},
            {"ACE_IR_Strobe_Item",1},
            {"ACE_salineIV",1},
            {"CUP_SMAW_HEDP_M",1},
            {"CUP_SMAW_NE_M",1}
        };
    };

    class PILOT: BaseUnit {
        vest[] = {"V_PlateCarrier1_blk"};
        backpack[] = {};

        weapons[] = {
            {"rhsusf_weap_MP7A2", {"rhsusf_mag_40Rnd_46x30_AP",{"rhsusf_acc_rm05","rhsusf_acc_mrds","rhsusf_acc_rx01","rhsusf_acc_t1_low","rhsusf_acc_eotech_xps3"},"rhsusf_acc_anpeq15side_bk","rhsusf_acc_rotex_mp7","rhsusf_acc_tdstubby_blk"}},
            {"CUP_hgun_Phantom", {"CUP_18Rnd_9x19_Phantom","cup_acc_cz_m3x"}}
        };

        vestContents[] = {
            {"ACRE_PRC152",1},
            {"rhsusf_mag_40Rnd_46x30_AP",8},
            {"rhs_mag_m67",2},
            {"SmokeShell",2},
            {"CUP_18Rnd_9x19_Phantom",2}
        };

        backpackContents[] = {};
    };

    class LauncherCrate {
        
    };

    class LargeGearCrate {
        
    };
};