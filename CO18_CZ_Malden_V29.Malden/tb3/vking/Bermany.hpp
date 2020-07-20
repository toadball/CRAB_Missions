class Bermany {
    class BaseUnit {
        allowPlayerGoggles = 1;
        ace_medic = 1;
        assignedItems[] = {"ItemMap","ItemCompass","ItemWatch"};

        uniform[] = {"rhsgref_uniform_ttsko_mountain"};
        vest[] = {"rhsusf_iotv_ocp_Rifleman"};
        backpack[] = {"B_Kitbag_rgr"};
        headGear[] = {
            "rhsusf_ach_helmet_ocp",
            "rhsusf_ach_helmet_ocp_alt",
            "rhsusf_ach_helmet_ESS_ocp",
            "rhsusf_ach_helmet_ESS_ocp_alt",
            "rhsusf_ach_helmet_headset_ocp",
            "rhsusf_ach_helmet_headset_ocp_alt",
            "rhsusf_ach_helmet_headset_ess_ocp",
            "rhsusf_ach_helmet_headset_ess_ocp_alt",
            "rhsusf_ach_helmet_ocp_norotos"
        };
        goggles[] = {};

        #define DEFAULT_RIFLES {\
                {"CUP_arifle_G36K_KSK", {"rhsgref_30rnd_556x45_vhs2","cup_optic_hensoldtzo_low_rds_coyote","cup_acc_anpeq_15_tan_top"}},\
                {"CUP_arifle_G36K_KSK_VFG", {"rhsgref_30rnd_556x45_vhs2","cup_optic_hensoldtzo_low_rds_coyote","cup_acc_anpeq_15_tan_top"}},\
                {"CUP_arifle_G36K_RIS", {"rhsgref_30rnd_556x45_vhs2","cup_optic_hensoldtzo_low_rds_coyote","cup_acc_anpeq_15"}},\
                {"CUP_arifle_G36A_RIS", {"rhsgref_30rnd_556x45_vhs2","cup_optic_hensoldtzo_low_rds_coyote","cup_acc_anpeq_15"}}\
            }

        weapons[] = {
            DEFAULT_RIFLES
        };

        uniformContents[] = {
            {"ACRE_PRC343",1},
            {"ACE_fieldDressing",4},
            {"ACE_elasticBandage",4},
            {"ACE_tourniquet",2},
            {"ACE_morphine",2},
            {"ACE_splint",2},
            {"ACE_salineIV_500",1},
            {"ACE_MapTools",1},
            {"ACE_Flashlight_XL50",1},
        };

        vestContents[] = {
            {"rhsgref_30rnd_556x45_vhs2",8},
            {"rhsgref_30rnd_556x45_vhs2_t",2},
            {"rhs_mag_rgd5",3},
            {"rhs_mag_rgn",2},
            {"SmokeShell",2}
        };

        backpackContents[] = {
            {"CRAB_NVGogglesB_grn_F",1},
            {"ACE_salineIV",1},
            {"rhsgref_30rnd_556x45_vhs2",8},
            {"rhsgref_30rnd_556x45_vhs2_t",2},
            {"rhsusf_200rnd_556x45_mixed_box",1},
            {"rhs_mag_rgd5",3},
            {"rhs_mag_rgn",2},
            {"SmokeShell",2}
        };
    };

    class PL: BaseUnit {
        vest[] = {"rhsusf_iotv_ocp_Squadleader"};

        weapons[] = {
            DEFAULT_RIFLES,
            "ace_vectorDay"
        };
        
        vestContents[] = {
            {"acre_sem52sl",1},
            {"ACE_DAGR",1},
            {"rhsgref_30rnd_556x45_vhs2",8},
            {"rhsgref_30rnd_556x45_vhs2_t",2},
            {"rhs_mag_rgd5",3},
            {"rhs_mag_rgn",2},
            {"SmokeShell",2}
        };

        // moreWeapons[] = {"ace_vectorDay"};

        // moreVestContents[] = {
        //     {"acre_sem52sl",1},
        //     {"ACE_DAGR",1}
        // };
    };

    class ZEUS: PL {
        assignedItems[] = {"ItemMap","ItemCompass","ItemWatch","CRAB_NVGogglesB_grn_F"};
        backpack[] = {};
        backpackContents[] = {};
    };

    class TL: BaseUnit {
        vest[] = {"rhsusf_iotv_ocp_Teamleader"};

        weapons[] = {
            DEFAULT_RIFLES,
            "ACE_Yardage450"
        };
        
        vestContents[] = {
            {"acre_sem52sl",1},
            {"rhsgref_30rnd_556x45_vhs2",8},
            {"rhsgref_30rnd_556x45_vhs2_t",2},
            {"rhs_mag_rgd5",3},
            {"rhs_mag_rgn",2},
            {"SmokeShell",2}
        };

        // moreWeapons[] = {"ACE_Yardage450"};

        // moreVestContents[] = {
        //     {"acre_sem52sl",1}
        // };
    };

    class FSO: BaseUnit {
        vest[] = {"rhsusf_iotv_ocp_Teamleader"};
        
        weapons[] = {
            DEFAULT_RIFLES,
            "ace_vector"
        };
        
        vestContents[] = {
            {"acre_sem52sl",1},
            {"acre_prc152",1},
            {"ACE_DAGR",1},
            {"rhsgref_30rnd_556x45_vhs2",8},
            {"rhsgref_30rnd_556x45_vhs2_t",2},
            {"rhs_mag_rgd5",3},
            {"SmokeShell",2}
        };

        // moreWeapons[] = {"ace_vector"};

        // moreVestContents[] = {
        //     {"acre_sem52sl",1},
        //     {"ACE_DAGR",1}
        // };
    };

    class MED: BaseUnit {
        ace_medic = 2;

        vest[] = {"rhsusf_iotv_ocp_Medic"};

        backpackContents[] = {
            {"CRAB_NVGogglesB_grn_F",1},
            {"SmokeShellGreen",2},
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

    class RF: BaseUnit {
        weapons[] = {
            DEFAULT_RIFLES,
            "rhs_weap_M136_hedp"
        };

        // moreWeapons[] = {"rhs_weap_M136_hedp"};
    };

    class UGL: BaseUnit {
        weapons[] = {
            {
                {"CUP_arifle_G36A_AG36_RIS",{"rhsgref_30rnd_556x45_vhs2","CUP_1Rnd_HEDP_M203","cup_optic_hensoldtzo_low_rds_coyote","cup_acc_anpeq_15"}},
                {"CUP_arifle_G36K_RIS_AG36",{"rhsgref_30rnd_556x45_vhs2","CUP_1Rnd_HEDP_M203","cup_optic_hensoldtzo_low_rds_coyote","cup_acc_anpeq_15"}}
            }
        };
        
        vest[] = {"rhsusf_iotv_ocp_Grenadier"};

        vestContents[] = {
            {"rhsgref_30rnd_556x45_vhs2",8},
            {"rhsgref_30rnd_556x45_vhs2_t",2},
            {"CUP_1Rnd_HEDP_M203",10},
            {"rhs_mag_rgd5",2},
            {"SmokeShell",2}
        };

        backpackContents[] = {
            {"CRAB_NVGogglesB_grn_F",1},
            {"ACE_salineIV",1},
            {"CUP_1Rnd_HEDP_M203",20},
            {"rhsgref_30rnd_556x45_vhs2",6},
            {"rhsgref_30rnd_556x45_vhs2_t",2},
            {"ACE_40mm_Flare_white",4},
            {"rhsusf_200rnd_556x45_mixed_box",1},
            {"rhs_mag_rgd5",2},
            {"SmokeShell",2}
        };
    };

    class LMG: BaseUnit {
        weapons[] = {{"CUP_arifle_MG36",{"CUP_100Rnd_556x45_BetaCMag","cup_optic_hensoldtzo_low_rds_coyote","cup_acc_anpeq_15"}}};

        vestContents[] = {
            {"CUP_100Rnd_556x45_BetaCMag",2},
            {"rhs_mag_rgd5",2},
            {"SmokeShell",2}
        };

        backpackContents[] = {
            {"CRAB_NVGogglesB_grn_F",1},
            {"ACE_salineIV",1},
            {"CUP_100Rnd_556x45_BetaCMag",4},
            {"rhs_mag_rgd5",2},
            {"SmokeShell",2}
        };
    };

    class GPMG: BaseUnit {
        weapons[] = {{"rhs_weap_m249_light_L",{"rhsusf_200rnd_556x45_mixed_box","cup_optic_hensoldtzo_low_rds_coyote","rhsusf_acc_grip4_bipod","cup_acc_anpeq_15"}}};

        vest[] = {"rhsusf_iotv_ocp_SAW"};

        vestContents[] = {
            {"rhsusf_200rnd_556x45_mixed_box",2},
            {"rhs_mag_rgd5",2},
            {"SmokeShell",2}
        };

        backpackContents[] = {
            {"CRAB_NVGogglesB_grn_F",1},
            {"ACE_salineIV",1},
            {"rhsusf_200rnd_556x45_mixed_box",2},
            {"ACE_SpareBarrel",1},
            {"rhs_mag_rgd5",2},
            {"SmokeShell",2}
        };
    };

    class DMR: BaseUnit {
        weapons[] = {
            {"CUP_arifle_HK417_20",{"ACE_20Rnd_762x51_Mk316_Mod_0_Mag","rhsusf_acc_m8541_mrds","cup_acc_anpeq_15","cup_bipod_harris_1a2_l_blk"}},
            {"CUP_hgun_Phantom",{"CUP_18Rnd_9x19_Phantom"}},
            "ACE_Yardage450"
        };

        vestContents[] = {
            {"ACE_20Rnd_762x51_Mk316_Mod_0_Mag",8},
            {"CUP_18Rnd_9x19_Phantom",2},
            {"ACE_RangeCard",1},
            {"rhs_mag_rgd5",2},
            {"SmokeShell",2}
        };

        backpackContents[] = {
            {"CRAB_NVGogglesB_grn_F",1},
            {"ACE_salineIV",1},
            {"ACE_20Rnd_762x51_Mk316_Mod_0_Mag",8},
            {"CUP_18Rnd_9x19_Phantom",2},
            {"rhsusf_200rnd_556x45_mixed_box",1},
            {"rhs_mag_rgd5",2},
            {"SmokeShell",2}
        };
    };

    class MAT: BaseUnit {
        weapons[] = {
            DEFAULT_RIFLES,
            "rhs_weap_M136_hp"
        };
        
        // moreWeapons[] = {"rhs_weap_M136_hp"};

        backpackContents[] = {
            {"CRAB_NVGogglesB_grn_F",1},
            {"ACE_salineIV",1},
            {"rhs_weap_M136_hp",1},
            {"rhs_weap_m72a7",1},
            {"SmokeShell",2}
        };
    };

    class MATA: BaseUnit {
        weapons[] = {
            DEFAULT_RIFLES,
            "rhs_weap_M136_hp"
        };

        // moreWeapons[] = {"rhs_weap_M136_hp"};
        
        backpackContents[] = {
            {"CRAB_NVGogglesB_grn_F",1},
            {"ACE_salineIV",1},
            {"rhs_weap_m72a7",1},
            {"rhsgref_30rnd_556x45_vhs2",8},
            {"rhsgref_30rnd_556x45_vhs2_t",2},
            {"rhs_mag_rgd5",3},
            {"SmokeShell",2}
        };
    };

    class PILOT: BaseUnit {
        vest[] = {"rhsusf_iotv_ocp_Repair"};
        headGear[] = {"rhsusf_hgu56p_tan","rhsusf_hgu56p_visor_tan"};
        backpack[] = {};
        backpackContents[] = {};

        weapons[] = {
            {
                {"CUP_arifle_G36C",{"rhsgref_30rnd_556x45_vhs2",{"cup_optic_microt1_low","cup_optic_holoblack","cup_optic_mrad","cup_optic_zeisszpoint"}}},
                {"CUP_arifle_G36C_VFG",{"rhsgref_30rnd_556x45_vhs2",{"cup_optic_microt1_low","cup_optic_holoblack","cup_optic_mrad","cup_optic_zeisszpoint"}}}
            },
            {"CUP_hgun_Compact",{"CUP_18Rnd_9x19_Phantom"}}
        };

        vestContents[] = {
            {"CRAB_NVGogglesB_grn_F",1},
            {"rhsgref_30rnd_556x45_vhs2",6},
            {"CUP_18Rnd_9x19_Phantom",2},
            {"rhs_mag_rgd5",2},
            {"SmokeShellGreen",2}
        };
    };

    class SNIPER: BaseUnit {
        weapons[] = {
            {
                {"CUP_arifle_G36C",{"rhsgref_30rnd_556x45_vhs2","cup_optic_hensoldtzo_low_rds_coyote"}},
                {"CUP_arifle_G36C_VFG",{"rhsgref_30rnd_556x45_vhs2","cup_optic_hensoldtzo_low_rds_coyote"}}
            },
            {"CUP_hgun_Phantom",{"CUP_18Rnd_9x19_Phantom"}},
            "ace_vectorDay"
        };

        uniformContents[] = {
            {"ACE_RangeCard",1},
            {"ACE_Kestrel4500",1},
            {"ACRE_PRC343",1},
            {"ACE_fieldDressing",4},
            {"ACE_elasticBandage",4},
            {"ACE_tourniquet",2},
            {"ACE_morphine",2},
            {"ACE_splint",2},
            {"ACE_salineIV_500",1},
            {"ACE_MapTools",1},
            {"ACE_Flashlight_XL50",1},
        };
        
        // moreUniformContents[] = {
        //     {"ACE_RangeCard",1},
        //     {"ACE_Kestrel4500",1}
        // };

        vestContents[] = {
            {"acre_sem52sl",1},
            {"CUP_5Rnd_762x67_G22",7},
            {"rhsgref_30rnd_556x45_vhs2",5},
            {"CUP_18Rnd_9x19_Phantom",1},
            {"rhs_mag_rgo",2},
            {"SmokeShell",2}
        };

        backpack[] = {"ace_gunbag_Tan"};
        backpackContents[] = {
            {"CRAB_NVGogglesB_grn_F",1},
            {"CUP_5Rnd_762x67_G22",4},
            {"rhsgref_30rnd_556x45_vhs2",1}
        };
        ace_gunbagWeapon[] = {"CUP_srifle_G22_des",{"CUP_5Rnd_762x67_G22","rhsusf_acc_premier_low","cup_bipod_harris_1a2_l_blk"}};
    };

    class LauncherCrate {
        
    };

    class LargeGearCrate {
        
    };
};