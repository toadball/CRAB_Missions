class GothicShrimpDelta {
    class BaseUnit {
        ace_medic = 1;
        assignedItems[] = {"ItemMap","ItemCompass","ItemWatch"};

        uniform[] = {"rhsgref_uniform_3color_desert"};
        vest[] = {"V_TacVestIR_blk"};
        backpack[] = {"B_AssaultPack_blk"};
        headGear[] = {"rhsusf_protech_helmet_ess","rhsusf_protech_helmet_rhino_ess"};
        goggles[] = {};

        uniformContents[] = {
            {"ACRE_PRC343",1},
            {"ACE_fieldDressing",4},
            {"ACE_elasticBandage",4},
            {"ACE_tourniquet",2},
            {"ACE_morphine",2},
            {"ACE_splint",2},
            {"ACE_salineIV",1},
            {"ACE_MapTools",1},
            {"ACE_Flashlight_XL50",1},
        };

        weapons[] = {
            {"CUP_arifle_Colt727", {"rhs_mag_30Rnd_556x45_M193_Stanag",{"cup_optic_zddot","cup_optic_zddot",""},"acc_flashlight"}},
            {"rhsusf_weap_m1911a1", {"rhsusf_mag_7x45acp_MHP"}}
        };

        vestContents[] = {
            {"CUP_NVG_PVS7",1},
            {"rhs_mag_30Rnd_556x45_M193_Stanag",8},
            {"rhsusf_mag_7x45acp_MHP",3},
            {"rhs_mag_mk3a2",2},
            {"rhs_mag_mk84",2},
            {"rhs_mag_m67",1}
        };

        backpackContents[] = {
            {"rhs_mag_30Rnd_556x45_M193_Stanag",6},
            {"rhs_mag_30Rnd_556x45_M196_Stanag_Tracer_Red",2},
            {"rhsusf_100Rnd_762x51",1},
            {"SmokeShell",2},
            {"SmokeShellGreen",1},
            {"ACE_HandFlare_Green",2},
            {"rhs_mag_mk3a2",1},
            {"rhs_mag_mk84",2},
            {"rhs_mag_m67",1}
        };
    };

    class PL: BaseUnit {
        vestContents[] = {
            {"acre_prc148",1},
            {"CUP_NVG_PVS7",1},
            {"rhs_mag_30Rnd_556x45_M193_Stanag",7},
            {"rhsusf_mag_7x45acp_MHP",3},
            {"rhs_mag_mk3a2",2},
            {"rhs_mag_mk84",2},
            {"rhs_mag_m67",1}
        };
    };

    class ZEUS: PL {
        
    };

    class TL: BaseUnit {
        vestContents[] = {
            {"acre_prc148",1},
            {"CUP_NVG_PVS7",1},
            {"rhs_mag_30Rnd_556x45_M193_Stanag",7},
            {"rhsusf_mag_7x45acp_MHP",3},
            {"rhs_mag_mk3a2",2},
            {"rhs_mag_mk84",2},
            {"rhs_mag_m67",1}
        };

        backpackContents[] = {
            {"rhs_mag_30Rnd_556x45_M193_Stanag",6},
            {"rhs_mag_30Rnd_556x45_M196_Stanag_Tracer_Red",2},
            {"rhsusf_200Rnd_556x45_M855_mixed_soft_pouch_coyote",1},
            {"SmokeShell",2},
            {"SmokeShellGreen",2},
            {"ACE_HandFlare_Green",2},
            {"rhs_mag_mk84",2}
        };
    };

    class FSO: BaseUnit {
        vestContents[] = {
            {"acre_prc148",2},
            {"CUP_NVG_PVS7",1},
            {"rhs_mag_30Rnd_556x45_M193_Stanag",7},
            {"rhsusf_mag_7x45acp_MHP",3},
            {"rhs_mag_mk3a2",2},
            {"rhs_mag_mk84",2},
            {"rhs_mag_m67",1}
        };
    };

    class MED: BaseUnit {
        ace_medic = 2;
        backpackContents[] = {
            {"SmokeShellGreen",2},
            {"ACE_fieldDressing",15},
            {"ACE_packingBandage",20},
            {"ACE_elasticBandage",15},
            {"ACE_morphine",10},
            {"ACE_epinephrine",5},
            {"ACE_adenosine",4},
            {"ACE_salineIV_500",3},
            {"ACE_salineIV",3},
            {"ACE_personalAidKit",1},
            {"ACE_surgicalKit",1},
            {"ACE_splint",4},
            {"ACE_tourniquet",3}
        };
    };

    class RF: BaseUnit {

    };

    class UGL: BaseUnit {
        weapons[] = {
            {"CUP_arifle_Colt727_M203", {"rhs_mag_30Rnd_556x45_M193_Stanag","CUP_1Rnd_HE_M203",{"cup_optic_zddot","cup_optic_zddot",""}}},
            {"rhsusf_weap_m1911a1", {"rhsusf_mag_7x45acp_MHP"}}
        };

        vestContents[] = {
            {"CUP_NVG_PVS7",1},
            {"rhs_mag_30Rnd_556x45_M193_Stanag",7},
            {"CUP_1Rnd_HE_M203",6},
            {"rhsusf_mag_7x45acp_MHP",3},
            {"rhs_mag_mk3a2",2},
            {"rhs_mag_mk84",2}
        };

        backpackContents[] = {
            {"rhs_mag_30Rnd_556x45_M193_Stanag",5},
            {"rhs_mag_30Rnd_556x45_M196_Stanag_Tracer_Red",2},
            {"CUP_1Rnd_HE_M203",10},
            {"SmokeShell",2},
            {"SmokeShellGreen",1},
            {"ACE_HandFlare_Green",2},
            {"rhs_mag_mk3a2",2},
            {"rhs_mag_mk84",2}
        };
    };

    class LMG: BaseUnit {
        weapons[] = {
            {"rhs_weap_m249", {"rhsusf_200Rnd_556x45_M855_mixed_soft_pouch_coyote","rhsusf_acc_saw_bipod"}},
            {"rhsusf_weap_m1911a1", {"rhsusf_mag_7x45acp_MHP"}}
        };
        
        vestContents[] = {
            {"CUP_NVG_PVS7",1},
            {"rhsusf_200Rnd_556x45_M855_mixed_soft_pouch_coyote",2},
            {"rhsusf_mag_7x45acp_MHP",3},
            {"rhs_mag_mk84",2},
            {"rhs_mag_m67",2}
        };

        backpackContents[] = {
            {"rhsusf_200Rnd_556x45_M855_mixed_soft_pouch_coyote",3},
            {"SmokeShell",2},
            {"SmokeShellGreen",1},
            {"ACE_HandFlare_Green",2}
        };
    };

    class GPMG: BaseUnit {
        weapons[] = {
            {"CUP_lmg_M60", {"rhsusf_100Rnd_762x51"}},
            {"rhsusf_weap_m1911a1", {"rhsusf_mag_7x45acp_MHP"}}
        };
        
        vestContents[] = {
            {"CUP_NVG_PVS7",1},
            {"rhsusf_100Rnd_762x51",2},
            {"rhsusf_mag_7x45acp_MHP",3},
            {"rhs_mag_mk84",2},
            {"rhs_mag_m67",2}
        };

        backpackContents[] = {
            {"rhsusf_100Rnd_762x51",4},
            {"SmokeShell",2},
            {"SmokeShellGreen",1},
            {"ACE_HandFlare_Green",2}
        };
    };

    class DMR: BaseUnit {
        weapons[] = {
            {"rhs_weap_m14_rail_d", {"rhsusf_20Rnd_762x51_m80_Mag","optic_khs_old", "rhsusf_acc_m14_bipod","rhsusf_acc_aac_m14dcqd_silencer"}},
            {"rhsusf_weap_m1911a1", {"rhsusf_mag_7x45acp_MHP"}}
        };

        vestContents[] = {
            {"CUP_NVG_PVS7",1},
            {"ACE_RangeCard",1},
            {"rhsusf_20Rnd_762x51_m80_Mag",6},
            {"rhsusf_mag_7x45acp_MHP",3},
            {"rhs_mag_mk3a2",1},
            {"rhs_mag_mk84",2}
        };

        backpackContents[] = {
            {"rhsusf_20Rnd_762x51_m80_Mag",6},
            {"rhsusf_20Rnd_762x51_m62_Mag",2},
            {"SmokeShell",2},
            {"SmokeShellGreen",1},
            {"ACE_HandFlare_Green",2}
        };
    };

    class MAT: BaseUnit {
        weapons[] = {
            {"CUP_arifle_Colt727", {"rhs_mag_30Rnd_556x45_M193_Stanag",{"cup_optic_zddot","cup_optic_zddot",""},"acc_flashlight"}},
            {"rhsusf_weap_m1911a1", {"rhsusf_mag_7x45acp_MHP"}},
            "rhs_weap_m72a7"
        };

        backpackContents[] = {
            {"rhs_weap_m72a7",1},
            {"rhs_mag_30Rnd_556x45_M193_Stanag",6},
            {"rhs_mag_30Rnd_556x45_M196_Stanag_Tracer_Red",1},
            {"SmokeShell",2},
            {"ACE_HandFlare_Green",2}
        };
    };

    class MATA: MAT {
        
    };

    class PILOT: BaseUnit {
        uniform[] = {"rhs_uniform_g3_tan"};
        backpack[] = {};
        headGear[] = {"rhsusf_hgu56p_black","rhsusf_hgu56p_visor_black"};

        weapons[] = {
            {"CUP_smg_MP5A5",{"CUP_30Rnd_9x19_MP5"}},
            {"rhsusf_weap_m1911a1", {"rhsusf_mag_7x45acp_MHP"}}
        };

        vestContents[] = {
            {"rhsusf_ANPVS_15",1},
            {"CUP_30Rnd_9x19_MP5",6},
            {"rhsusf_mag_7x45acp_MHP",3},
            {"SmokeShell",2},
            {"SmokeShellGreen",2},
            {"ACE_HandFlare_Green",2},
            {"rhs_mag_m67",2}
        };

        backpackContents[] = {};
    };

    class LauncherCrate {
        
    };

    class LargeGearCrate {
        
    };
};