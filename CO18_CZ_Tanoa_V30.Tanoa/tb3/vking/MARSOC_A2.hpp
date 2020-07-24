class MARSOC_A2_Wdl {
    class BaseUnit {
        allowPlayerGoggles = 0;
        ace_medic = 1;
        assignedItems[] = {"ItemMap","ItemCompass","ItemWatch"};

        uniform[] = {"rhs_uniform_FROG01_wd","rhs_uniform_FROG01_wd","rhs_uniform_g3_m81"};
        vest[] = {"rhsusf_mbav_rifleman"};
        backpack[] = {"rhsusf_assault_eagleaiii_coy"}; // "B_Kitbag_cbr","B_Kitbag_rgr"
        headGear[] = {"rhs_booniehat2_marpatwd","rhs_Booniehat_m81","H_Bandanna_khk","H_Booniehat_khk_hs",
                      "H_Cap_oli",};
        goggles[] = {"rhs_googles_black","rhs_googles_clear","rhs_googles_orange","rhsusf_shemagh_od","rhsusf_shemagh_tan","G_Aviator","G_Shades_Black"};

        #define UNIFORM_CONTENTS \
                {"ACRE_PRC343",1},\
                {"ACE_IR_Strobe_Item",1},\
                {"ACE_microDAGR",1},\
                {"ACE_fieldDressing",4},\
                {"ACE_elasticBandage",4},\
                {"ACE_tourniquet",2},\
                {"ACE_morphine",2},\
                {"ACE_splint",2},\
                {"ACE_salineIV_500",1},\
                {"ACE_MapTools",1},\
                {"ACE_Flashlight_XL50",1}

        uniformContents[] = {
            UNIFORM_CONTENTS
        };

        #define OPTICS_WDL_1x "rhsusf_acc_eotech_552_wd"
        #define OPTICS_WDL_4x "rhsusf_acc_acog_wd"
        #define ATTACHMENTS_RIFLE_WDL "rhs_mag_30Rnd_556x45_Mk318_Stanag","rhsusf_acc_anpeq15side_bk","cup_muzzle_snds_m16_camo",{"","rhsusf_acc_grip2_wd","rhsusf_acc_kac_grip","rhsusf_acc_rvg_de","rhsusf_acc_grip3"}
        #define RIFLES_WDL(OPTICS,ATTACHMENTS) \
                {"rhs_weap_m4a1_wd", {{OPTICS},ATTACHMENTS}},\
                {"rhs_weap_m4a1_wd_mstock", {{OPTICS},ATTACHMENTS}},\
                {"rhs_weap_mk18_wd", {{OPTICS},ATTACHMENTS}},\
                {"rhs_weap_mk18_KAC_wd", {{OPTICS},ATTACHMENTS}},\
                {"rhs_weap_m4a1_blockII_wd", {{OPTICS},ATTACHMENTS}},\
                {"rhs_weap_m4a1_blockII_KAC_wd", {{OPTICS},ATTACHMENTS}},\
                {"rhs_weap_hk416d145_wd", {{OPTICS},ATTACHMENTS}}
        #define RIFLES_WDL_UGL(OPTICS,ATTACHMENTS) \
                {"rhs_weap_m4a1_m203s_wd",{{OPTICS},ATTACHMENTS,"rhs_mag_M433_HEDP"}},\
                {"rhs_weap_m4a1_blockII_M203_wd",{{OPTICS},ATTACHMENTS,"rhs_mag_M433_HEDP"}}

        #define OPTICS_BLK_1x "rhsusf_acc_eotech_552","rhsusf_acc_compm4"
        #define OPTICS_BLK_4x "rhsusf_acc_acog_usmc","rhsusf_acc_acog2_usmc","rhsusf_acc_acog3_usmc"
        #define ATTACHMENTS_RIFLE_BLK "rhs_mag_30Rnd_556x45_Mk318_Stanag","rhsusf_acc_anpeq15side_bk","cup_muzzle_snds_m16",{"","rhsusf_acc_grip2","rhsusf_acc_kac_grip","rhsusf_acc_rvg_blk","rhsusf_acc_grip3"}
        #define RIFLES_BLK(OPTICS,ATTACHMENTS) \
                {"rhs_weap_m4a1",{{OPTICS},ATTACHMENTS}},\
                {"rhs_weap_m4a1_mstock", {{OPTICS},ATTACHMENTS}},\
                {"rhs_weap_mk18", {{OPTICS},ATTACHMENTS}},\
                {"rhs_weap_mk18_KAC", {{OPTICS},ATTACHMENTS}},\
                {"rhs_weap_m4a1_blockII", {{OPTICS},ATTACHMENTS}},\
                {"rhs_weap_m4a1_blockII_KAC", {{OPTICS},ATTACHMENTS}},\
                {"rhs_weap_hk416d145", {{OPTICS},ATTACHMENTS}}
        #define RIFLES_BLK_UGL(OPTICS,ATTACHMENTS) \
                {"rhs_weap_m4a1_m203",{{OPTICS},ATTACHMENTS,"rhs_mag_M433_HEDP"}},\
                {"rhs_weap_m4a1_m203s",{{OPTICS},ATTACHMENTS,"rhs_mag_M433_HEDP"}},\
                {"rhs_weap_m4a1_m320",{{OPTICS},ATTACHMENTS,"rhs_mag_M433_HEDP"}},\
                {"rhs_weap_m4a1_blockII_M203",{{OPTICS},ATTACHMENTS,"rhs_mag_M433_HEDP"}},\
                {"rhs_weap_mk18_m320",{{OPTICS},ATTACHMENTS,"rhs_mag_M433_HEDP"}},\
                {"rhs_weap_hk416d145_m320",{{OPTICS},ATTACHMENTS,"rhs_mag_M433_HEDP"}}

        #define RIFLES_1x RIFLES_WDL(OPTICS_WDL_1x,ATTACHMENTS_RIFLE_WDL), RIFLES_BLK(OPTICS_BLK_1x,ATTACHMENTS_RIFLE_BLK)
        #define RIFLES_4x RIFLES_WDL(OPTICS_WDL_4x,ATTACHMENTS_RIFLE_WDL), RIFLES_BLK(OPTICS_BLK_4x,ATTACHMENTS_RIFLE_BLK)
        #define RIFLES_1x_UGL RIFLES_WDL_UGL(OPTICS_WDL_1x,ATTACHMENTS_RIFLE_WDL), RIFLES_BLK_UGL(OPTICS_BLK_1x,ATTACHMENTS_RIFLE_BLK)
        #define RIFLES_4x_UGL RIFLES_WDL_UGL(OPTICS_WDL_4x,ATTACHMENTS_RIFLE_WDL), RIFLES_BLK_UGL(OPTICS_BLK_4x,ATTACHMENTS_RIFLE_BLK)

        #define PISTOL {"CUP_hgun_M9", {"CUP_15Rnd_9x19_M9"}}
        #define PISTOL_S {"CUP_hgun_M9", {"CUP_15Rnd_9x19_M9","cup_muzzle_snds_m9"}}

        weapons[] = {
            {RIFLES_4x},
            PISTOL_S
        };

        vestContents[] = {
            {"rhs_mag_30Rnd_556x45_Mk318_Stanag",8},
            {"CUP_15Rnd_9x19_M9",2},
            {"rhs_mag_m67",4},
            {"SmokeShell",2}
        };

        backpackContents[] = {
            {"NVGoggles_OPFOR",1},
            {"ACE_salineIV",1},
            {"rhs_mag_30Rnd_556x45_Mk318_Stanag",8},
            {"CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M",1},
            {"DemoCharge_Remote_Mag",1},
            {"rhs_mag_m67",3},
            {"SmokeShell",2},
            {"rhs_mag_an_m14_th3",1}
        };
    };


    class PL: BaseUnit {
        weapons[] = {
            {RIFLES_1x},
            PISTOL_S,
            "ace_vector"
        };

        vestContents[] = {
            {"acre_prc148",1},
            {"rhs_mag_30Rnd_556x45_Mk318_Stanag",6},
            {"rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red",2},
            {"CUP_15Rnd_9x19_M9",2},
            {"rhs_mag_m67",4},
            {"SmokeShell",2}
        };

        backpackContents[] = {
            {"NVGoggles_OPFOR",1},
            {"ACE_salineIV",1},
            {"itc_land_tablet_rover",1},
            {"rhs_mag_30Rnd_556x45_Mk318_Stanag",7},
            {"rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red",3},
            {"DemoCharge_Remote_Mag",1},
            {"rhs_mag_m67",2},
            {"SmokeShell",2},
            {"SmokeShellPurple",2},
            {"SmokeShellGreen",2},
            {"SmokeShellYellow",2},
            {"rhs_mag_an_m14_th3",2}
        };
    };

    class FSO: BaseUnit {
        uniformContents[] = {
            UNIFORM_CONTENTS,
            {"ACE_IR_Strobe_Item",1}
        };

        assignedItems[] = {"ItemMap","ItemCompass","ItemWatch","B_UavTerminal"};

        weapons[] = {
            {RIFLES_1x},
            PISTOL_S,
            "ace_vector"
        };

        vestContents[] = {
            {"acre_prc148",2},
            {"rhs_mag_30Rnd_556x45_Mk318_Stanag",7},
            {"rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red",2},
            {"CUP_15Rnd_9x19_M9",2},
            {"rhs_mag_m67",2},
            {"SmokeShell",2}
        };

        backpackContents[] = {
            {"NVGoggles_OPFOR",1},
            {"ACE_salineIV",1},
            {"Laserdesignator_01_khk_F",1},
            {"ITC_Land_B_AR2i_Packed",1},
            {"ACE_UAVBattery",2},
            {"itc_land_tablet_fdc",1},
            {"itc_land_tablet_rover",1},
            {"ACE_HandFlare_Green",2},
            {"SmokeShellPurple",2},
            {"SmokeShellGreen",2},
            {"SmokeShellYellow",2}
        };
    };

    class ZEUS: PL {

    };

    class MED: BaseUnit {
        weapons[] = {
            {RIFLES_1x},
            PISTOL_S
        };
        vest[] = {"rhsusf_mbav_medic"};

        ace_medic = 2;
        backpackContents[] = {
            {"NVGoggles_OPFOR",1},
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

    class TL: BaseUnit {
        weapons[] = {
            {RIFLES_4x},
            PISTOL_S,
            "ace_vector",
            "rhs_weap_m72a7"
        };

        vestContents[] = {
            {"acre_prc148",1},
            {"rhs_mag_30Rnd_556x45_Mk318_Stanag",6},
            {"rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red",2},
            {"CUP_15Rnd_9x19_M9",2},
            {"rhs_mag_m67",4},
            {"SmokeShell",2}
        };
    };

    class RF: BaseUnit {
        weapons[] = {
            {RIFLES_4x},
            PISTOL_S,
            "rhs_weap_m72a7"
        };
    };

    class UGL: BaseUnit {
        vest[] = {"rhsusf_mbav_grenadier"};

        weapons[] = {
            {RIFLES_1x_UGL},
            PISTOL_S
        };

        vestContents[] = {
            {"rhs_mag_30Rnd_556x45_Mk318_Stanag",7},
            {"rhs_mag_M433_HEDP",4},
            {"rhs_mag_M397_HET",4},
            {"CUP_15Rnd_9x19_M9",2},
            {"rhs_mag_m67",2},
            {"SmokeShell",2}
        };

        backpackContents[] = {
            {"NVGoggles_OPFOR",1},
            {"ACE_salineIV",1},
            {"rhs_mag_30Rnd_556x45_Mk318_Stanag",8},
            {"rhs_mag_M433_HEDP",8},
            {"rhs_mag_M397_HET",8},
            {"rhsusf_100Rnd_556x45_soft_pouch_coyote",1},
            {"rhs_mag_m67",2},
            {"SmokeShell",2}
        };
    };

    class LMG: BaseUnit {
        vest[] = {"rhsusf_mbav_mg"};

        #define LMG_ATTACHMENTS_BLK "rhsusf_100Rnd_556x45_soft_pouch_coyote",{OPTICS_BLK_1x},"rhsusf_acc_anpeq15side_bk","rhsusf_acc_rotex5_grey","rhsusf_acc_grip4_bipod"
        weapons[] = {
            {
                {"rhs_weap_m249_pip_S_para", {LMG_ATTACHMENTS_BLK}},
                {"rhs_weap_m249_pip_S", {LMG_ATTACHMENTS_BLK}}
            },
            PISTOL_S
        };

        vestContents[] = {
            {"rhsusf_100Rnd_556x45_soft_pouch_coyote",4},
            {"CUP_15Rnd_9x19_M9",2},
            {"rhs_mag_m67",3},
            {"SmokeShell",2}
        };

        backpackContents[] = {
            {"NVGoggles_OPFOR",1},
            {"ACE_salineIV",1},
            {"rhsusf_100Rnd_556x45_soft_pouch_coyote",6},
            {"CUP_15Rnd_9x19_M9",2},
            {"rhs_mag_m67",2},
            {"SmokeShell",2}
        };
    };

    class DMR: BaseUnit {
        uniformContents[] = {
            UNIFORM_CONTENTS,
            {"ACE_RangeCard",1}
        };

        #define DMR_ATTACHMENTS "rhsusf_20Rnd_762x51_SR25_m118_special_Mag","rhsusf_acc_m8541_mrds","rhsusf_acc_anpeq15side_bk","rhsusf_acc_harris_bipod"
        weapons[] = {
            {
                {"rhs_weap_sr25", {DMR_ATTACHMENTS,"rhsusf_acc_sr25s"}},
                {"rhs_weap_sr25_ec", {DMR_ATTACHMENTS,"rhsusf_acc_aac_762sd_silencer"}},
                {"rhs_weap_sr25_wd", {DMR_ATTACHMENTS,"rhsusf_acc_sr25s_wd"}},
                {"rhs_weap_sr25_ec_wd", {DMR_ATTACHMENTS,"rhsgref_sdn6_suppressor"}}
            },
            PISTOL_S
        };

        vestContents[] = {
            {"rhsusf_20Rnd_762x51_SR25_m118_special_Mag",6},
            {"CUP_15Rnd_9x19_M9",2},
            {"rhs_mag_m67",2},
            {"SmokeShell",2}
        };

        backpackContents[] = {
            {"NVGoggles_OPFOR",1},
            {"ACE_salineIV",1},
            {"rhsusf_20Rnd_762x51_SR25_m118_special_Mag",8},
            {"CUP_15Rnd_9x19_M9",2},
            {"ACE_Clacker",1},
            {"ClaymoreDirectionalMine_Remote_Mag",1},
            {"rhs_mag_m67",2},
            {"rhs_mag_an_m14_th3",1},
            {"SmokeShell",2}
        };
    };

    class GPMG: BaseUnit {
        vest[] = {"rhsusf_mbav_mg"};

        #define GPMG_ATTACHMENTS_BLK "CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M",rhsusf_acc_acog_mdo,"rhsusf_acc_anpeq15side_bk","muzzle_snds_h_mg_blk_f"
        #define GPMG_ATTACHMENTS_WDL "CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M",rhsusf_acc_acog_mdo,"rhsusf_acc_anpeq15side_bk","muzzle_snds_h_mg_khk_f"
        weapons[] = {
            {
                {"CUP_lmg_Mk48", {GPMG_ATTACHMENTS_BLK}},
                {"CUP_lmg_Mk48_nohg", {GPMG_ATTACHMENTS_BLK}},
                {"CUP_lmg_Mk48_wdl", {GPMG_ATTACHMENTS_WDL}},
                {"CUP_lmg_Mk48_nohg_wdl", {GPMG_ATTACHMENTS_WDL}}
            },
            PISTOL_S
        };

        vestContents[] = {
            {"CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M",2},
            {"CUP_15Rnd_9x19_M9",2},
            {"SmokeShell",2}
        };

        backpackContents[] = {
            {"NVGoggles_OPFOR",1},
            {"ACE_salineIV",1},
            {"CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M",2},
            {"rhs_mag_m67",2},
            {"SmokeShell",2}
        };
    };

    class GPMGA: BaseUnit {
        vest[] = {"rhsusf_mbav_mg"};

        weapons[] = {
            {RIFLES_1x},
            "ace_vector"
        };

        vestContents[] = {
            {"rhs_mag_30Rnd_556x45_Mk318_Stanag",7},
            {"CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M",1},
            {"rhs_mag_m67",2},
            {"SmokeShell",2}
        };

        backpackContents[] = {
            {"NVGoggles_OPFOR",1},
            {"ACE_salineIV",1},
            {"ACE_SpareBarrel",1},
            {"CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M",2}
        };
    };

    class MAT: BaseUnit {
        weapons[] = {
            {RIFLES_1x},
            {"CUP_launch_Mk153Mod0",{"CUP_SMAW_NE_M","CUP_SMAW_Spotting","cup_optic_smaw_scope"}},
            PISTOL_S
        };

        vestContents[] = {
            {"rhs_mag_30Rnd_556x45_Mk318_Stanag",8},
            {"CUP_15Rnd_9x19_M9",2},
            {"rhs_mag_m67",2},
            {"SmokeShell",2}
        };

        backpackContents[] = {
            {"NVGoggles_OPFOR",1},
            {"ACE_salineIV",1},
            {"CUP_SMAW_HEDP_M",2},
            {"CUP_SMAW_Spotting",2}
        };
    };

    class MATA: BaseUnit {
        weapons[] = {
            {RIFLES_1x},
            PISTOL_S
        };

        vestContents[] = {
            {"rhs_mag_30Rnd_556x45_Mk318_Stanag",8},
            {"CUP_15Rnd_9x19_M9",2},
            {"rhs_mag_m67",2},
            {"SmokeShell",2}
        };

        backpackContents[] = {
            {"NVGoggles_OPFOR",1},
            {"ACE_salineIV",1},
            {"CUP_SMAW_HEAA_M",1},
            {"CUP_SMAW_HEDP_M",1},
            {"CUP_SMAW_Spotting",2}
        };
    };

    class HAT: BaseUnit {
        backpack[] = {};
        backpackContents[] = {};

        weapons[] = {
            {RIFLES_1x},
            {"rhs_weap_fgm148",{"rhs_fgm148_magazine_AT"}}
        };

        vestContents[] = {
            {"NVGoggles_OPFOR",1},
            {"ACE_salineIV",1},
            {"rhs_mag_30Rnd_556x45_Mk318_Stanag",9},
            {"rhs_mag_m67",2},
            {"SmokeShell",2}
        };
    };

    class PILOT: BaseUnit {
        backpack[] = {};
        backpackContents[] = {};
        headGear[] = {"rhsusf_hgu56p_green","rhsusf_hgu56p_visor_green","rhsusf_hgu56p","rhsusf_hgu56p_visor","rhsusf_hgu56p_tan","rhsusf_hgu56p_visor_tan"};
        goggles[] = {};
        vest[] = {"rhsusf_mbav_light"};

        weapons[] = {
            {
                {"CUP_smg_MP5A5",{"CUP_30Rnd_9x19_MP5"}},
                {"CUP_smg_MP5A5_flashlight",{"CUP_30Rnd_9x19_MP5"}}
            },
            PISTOL
        };

        vestContents[] = {
            {"NVGoggles_OPFOR",1},
            {"ACRE_PRC148",1},
            {"CUP_30Rnd_9x19_MP5",5},
            {"CUP_15Rnd_9x19_M9",2},
            {"SmokeShell",2}
        };
    };

    class LauncherCrate {
        
    };

    class LargeGearCrate {
        
    };
};
