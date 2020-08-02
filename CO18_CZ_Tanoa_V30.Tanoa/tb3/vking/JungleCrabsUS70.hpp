class JungleCrabsUS70 {
    class BaseUnit {
        allowPlayerGoggles = 0;
        ace_medic = 1;
        assignedItems[] = {"ItemMap","ItemCompass","ItemWatch"};

        uniform[] = {"rhsgref_uniform_ERDL","rhsgref_uniform_og107_erdl"};
        vest[] = {"rhsgref_alice_webbing"};
        backpack[] = {"CUP_B_AlicePack_Bedroll","CUP_B_AlicePack_Khaki","CUP_B_AlicePack_OD"};
        #define MEDIC_PACK "CUP_B_AlicePack_OD"
        headGear[] = {"rhsgref_helmet_M1_erdl","rhsgref_helmet_M1_erdl","rhsgref_helmet_M1_bare","rhsgref_helmet_M1_painted"};
        goggles[] = {};

        #define UNIFORM_CONTENTS \
                {"ACE_fieldDressing",4},\
                {"ACE_elasticBandage",4},\
                {"ACE_tourniquet",2},\
                {"ACE_morphine",2},\
                {"ACE_splint",2},\
                {"ACE_salineIV_500",1},\
                {"ACE_MapTools",1},\
                {"ACE_Flashlight_MX991",1}

        uniformContents[] = {
            UNIFORM_CONTENTS
        };

        #define RIFLES \
                {"CUP_arifle_M16A1", {{"rhs_mag_20Rnd_556x45_M193_2MAG_Stanag","rhs_mag_20Rnd_556x45_M193_Stanag"}}},\
                {"CUP_arifle_M16A1", {{"rhs_mag_20Rnd_556x45_M193_2MAG_Stanag","rhs_mag_20Rnd_556x45_M193_Stanag"}}},\
                {"CUP_arifle_M16A1", {{"rhs_mag_20Rnd_556x45_M193_2MAG_Stanag","rhs_mag_20Rnd_556x45_M193_Stanag"}}},\
                {"CUP_arifle_XM16E1", {{"rhs_mag_20Rnd_556x45_M193_2MAG_Stanag","rhs_mag_20Rnd_556x45_M193_Stanag"}}}

        #define PISTOL {"rhsusf_weap_m1911a1", {"rhsusf_mag_7x45acp_MHP"}}

        weapons[] = {
            {RIFLES}
        };

        vestContents[] = {
            {"rhs_mag_20Rnd_556x45_M193_Stanag",8},
            {"rhs_mag_20Rnd_556x45_M196_Stanag_Tracer_Red",1},
            {"rhs_grenade_mkii_mag",3},
            {"rhs_grenade_anm8_mag",2}
        };

        backpackContents[] = {
            {"ACE_salineIV",1},
            {"rhs_mag_20Rnd_556x45_M193_Stanag",8},
            {"rhs_mag_20Rnd_556x45_M196_Stanag_Tracer_Red",2},
            {"rhs_grenade_anm8_mag",2},
            {"rhs_grenade_mkii_mag",2},
            {"rhs_grenade_m15_mag",2},
            {"rhsusf_100Rnd_762x51_m62_tracer",2},
            {"rhsusf_mine_m49a1_6m_mag",2}
        };
    };

    class PL: BaseUnit {
        weapons[] = {
            {RIFLES},
            PISTOL,
            "Binocular"
        };

        uniformContents[] = {
            UNIFORM_CONTENTS,
            {"rhsusf_mag_7x45acp_MHP",2}
        };

        backpackContents[] = {
            {"ACRE_PRC77",1},
            {"ACE_salineIV",1},
            {"rhs_mag_20Rnd_556x45_M193_Stanag",6},
            {"rhs_mag_20Rnd_556x45_M196_Stanag_Tracer_Red",4},
            {"rhs_grenade_anm8_mag",2},
            {"rhs_grenade_mkii_mag",2},
            {"rhs_grenade_m15_mag",2},
            {"SmokeShellYellow",2},
            {"SmokeShellGreen",2}
        };
    };

    class ZEUS: PL {
        assignedItems[] = {"ItemMap","ItemCompass","ItemWatch","B_UavTerminal"};
        backpackContents[] = {
            {"ACRE_PRC77",1},
            {"ACRE_PRC152",1}
        };
    };

    class TL: PL {};

    class FSO: PL {};

    class MED: BaseUnit {
        ace_medic = 2;

        #define MEDIC_PACK_CONTENTS \
                {"SmokeShellGreen",2},\
                {"ACE_fieldDressing",20},\
                {"ACE_packingBandage",20},\
                {"ACE_quikclot",10},\
                {"ACE_elasticBandage",15},\
                {"ACE_morphine",10},\
                {"ACE_epinephrine",10},\
                {"ACE_adenosine",4},\
                {"ACE_salineIV_500",3},\
                {"ACE_salineIV",3},\
                {"ACE_personalAidKit",1},\
                {"ACE_surgicalKit",1},\
                {"ACE_splint",8},\
                {"ACE_tourniquet",5}

        backpackContents[] = {
            {"rhs_mag_20Rnd_556x45_M193_Stanag",4},
            MEDIC_PACK_CONTENTS
        };
    };

    class RF: BaseUnit {
        weapons[] = {
            {RIFLES},
            "rhs_weap_m72a7"
        };
    };

    class UGL: BaseUnit {
        weapons[] = {
            {"CUP_arifle_M16A1GL", {{"rhs_mag_20Rnd_556x45_M193_2MAG_Stanag","rhs_mag_20Rnd_556x45_M193_Stanag"},"1Rnd_HE_Grenade_shell"}}
        };

        vestContents[] = {
            {"rhs_mag_20Rnd_556x45_M193_Stanag",6},
            {"1Rnd_HE_Grenade_shell",6},
            {"rhs_mag_20Rnd_556x45_M196_Stanag_Tracer_Red",1},
            {"rhs_grenade_mkii_mag",2},
            {"rhs_grenade_anm8_mag",2}
        };

        backpackContents[] = {
            {"ACE_salineIV",1},
            {"rhs_mag_20Rnd_556x45_M193_Stanag",8},
            {"1Rnd_HE_Grenade_shell",20},
            {"ACE_40mm_Flare_white",8},
            {"CUP_1Rnd_StarCluster_Red_M203",2},
            {"CUP_1Rnd_StarCluster_Green_M203",2},
            {"rhs_mag_20Rnd_556x45_M196_Stanag_Tracer_Red",2},
            {"rhs_grenade_anm8_mag",2},
            {"rhs_grenade_mkii_mag",2},
            {"rhsusf_mine_m49a1_6m_mag",2}
        };
    };

    class LMG: BaseUnit {
        weapons[] = {
            {"CUP_lmg_M60", {"rhsusf_100Rnd_762x51_m62_tracer"}},
            PISTOL
        };

        uniformContents[] = {
            UNIFORM_CONTENTS,
            {"rhsusf_mag_7x45acp_MHP",2}
        };

        vestContents[] = {
            {"rhsusf_100Rnd_762x51_m62_tracer",2},
            {"rhs_grenade_mkii_mag",2},
            {"rhs_grenade_anm8_mag",2}
        };

        backpackContents[] = {
            {"ACE_salineIV",1},
            {"rhsusf_100Rnd_762x51_m62_tracer",3},
            {"ACE_SpareBarrel",1},
            {"rhs_grenade_anm8_mag",2},
            {"rhs_grenade_mkii_mag",2},
            {"rhsusf_mine_m49a1_6m_mag",2}
        };
    };

    class GPMG: LMG {};

    class DMR: BaseUnit {
        weapons[] = {
            {"rhs_weap_m14_rail", {"rhsusf_20Rnd_762x51_m80_Mag","cup_optic_susat"}},
            PISTOL
        };

        uniformContents[] = {
            UNIFORM_CONTENTS,
            {"rhsusf_mag_7x45acp_MHP",2}
        };

        vestContents[] = {
            {"ACE_RangeCard",1},
            {"rhsusf_20Rnd_762x51_m80_Mag",4},
            {"rhs_grenade_mkii_mag",2},
            {"rhs_grenade_anm8_mag",2}
        };

        backpackContents[] = {
            {"ACE_salineIV",1},
            {"rhsusf_20Rnd_762x51_m80_Mag",8},
            {"rhsusf_20Rnd_762x51_m62_Mag",2},
            {"rhs_grenade_anm8_mag",2},
            {"rhs_grenade_mkii_mag",2},
            {"rhs_grenade_m15_mag",2},
            {"rhsusf_mine_m49a1_6m_mag",1}
        };
    };

    class MAT: BaseUnit {
        weapons[] = {
            {RIFLES},
            "rhs_weap_m72a7"
        };

        backpackContents[] = {
            {"ACE_salineIV",1},
            {"rhs_weap_m72a7",2},
            {"rhs_mag_20Rnd_556x45_M193_Stanag",4},
            {"rhs_mag_20Rnd_556x45_M196_Stanag_Tracer_Red",1},
            {"rhs_grenade_anm8_mag",2},
            {"rhs_grenade_mkii_mag",2},
            {"rhsusf_mine_m49a1_6m_mag",2}
        };
    };

    class MATA: MAT {
        
    };

    class SNIPER: DMR {
        headgear[] = {"H_Booniehat_oli"};
        weapons[] = {
            {"rhs_weap_m14_rail", {"rhsusf_20Rnd_762x51_m80_Mag","optic_khs_old","rhsusf_acc_m14_bipod"}},
            PISTOL
        };

        uniformContents[] = {
            UNIFORM_CONTENTS,
            {"rhsusf_mag_7x45acp_MHP",2}
        };
    };

    class SPOTTER: BaseUnit {
        headgear[] = {"H_Booniehat_oli"};
        weapons[] = {
            {RIFLES},
            PISTOL,
            "Binocular",
            "rhs_weap_m72a7"
        };

        uniformContents[] = {
            UNIFORM_CONTENTS,
            {"rhsusf_mag_7x45acp_MHP",2}
        };

        vestContents[] = {
            {"rhs_mag_20Rnd_556x45_M193_Stanag",9},
            {"rhs_mag_20Rnd_556x45_M196_Stanag_Tracer_Red",2},
            {"rhs_grenade_anm8_mag",2},
            {"rhs_grenade_mkii_mag",2}
        };

        backpackContents[] = {
            {"ACRE_PRC77",1},
            {"ACE_salineIV",1},
            {"rhsusf_mine_m49a1_6m_mag",1},
            {"rhsusf_20Rnd_762x51_m80_Mag",2},
            {"rhs_mag_20Rnd_556x45_M193_Stanag",4},
            {"rhs_mag_20Rnd_556x45_M196_Stanag_Tracer_Red",2},
            {"rhs_grenade_anm8_mag",2},
            {"rhs_grenade_mkii_mag",2}
        };
    };

    class PILOT: BaseUnit {
        uniform[] = {"U_B_HeliPilotCoveralls"};
        vest[] = {"V_BandollierB_rgr"};
        backpack[] = {};
        headGear[] = {"H_PilotHelmetHeli_O"};

        weapons[] = {
            {"CUP_smg_Mac10", {"CUP_30Rnd_45ACP_MAC10_M"}},
            PISTOL
        };

        uniformContents[] = {
            UNIFORM_CONTENTS,
            {"rhsusf_mag_7x45acp_MHP",2}
        };

        vestContents[] = {
            {"CUP_30Rnd_45ACP_MAC10_M",4},
            {"rhs_weap_rsp30_green",1},
            {"SmokeShellGreen",2},
            {"SmokeShellYellow",2}
        };

        backpackContents[] = {};
    };

    class SupplyCrate {
        vehCargoWeapons[] = {
            {"CUP_arifle_M16A1",4},
            {"rhs_weap_m72a7",8}
        };
        vehCargoMagazines[] = {
            {"rhs_mag_20Rnd_556x45_M193_Stanag",64},
            {"rhs_mag_20Rnd_556x45_M196_Stanag_Tracer_Red",16},
            {"rhsusf_100Rnd_762x51_m62_tracer",16},
            {"rhsusf_20Rnd_762x51_m80_Mag",16},
            {"rhs_grenade_mkii_mag",24},
            {"rhs_grenade_anm8_mag",16},
            {"1Rnd_HE_Grenade_shell",32},
            {"ACE_40mm_Flare_white",16},
            {"CUP_1Rnd_StarCluster_Red_M203",8},
            {"CUP_1Rnd_StarCluster_Green_M203",8}
        };
        vehCargoItems[] = {};
        vehCargoRucks[] = {
            {MEDIC_PACK, 1, {MEDIC_PACK_CONTENTS}}
        };
    };
};
