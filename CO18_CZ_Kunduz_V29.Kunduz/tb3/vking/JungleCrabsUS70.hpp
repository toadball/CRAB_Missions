class JungleCrabsUS70 {
    class BaseUnit {
        allowPlayerGoggles = 0;
        ace_medic = 1;
        assignedItems[] = {"ItemMap","ItemCompass","ItemWatch"};

        uniform[] = {"rhsgref_uniform_ERDL","rhsgref_uniform_og107_erdl"};
        vest[] = {"rhsgref_alice_webbing"};
        backpack[] = {"CUP_B_AlicePack_Bedroll","CUP_B_AlicePack_Khaki","CUP_B_AlicePack_OD"};
        headGear[] = {"rhsgref_helmet_M1_erdl","rhsgref_helmet_M1_erdl","rhsgref_helmet_M1_bare","rhsgref_helmet_M1_painted"};
        goggles[] = {};

        weapons[] = {
            {
                {"CUP_arifle_M16A1",  {"rhs_mag_20Rnd_556x45_M193_2MAG_Stanag"}},
                {"CUP_arifle_M16A1",  {"rhs_mag_20Rnd_556x45_M193_2MAG_Stanag"}},
                {"CUP_arifle_M16A1",  {"rhs_mag_20Rnd_556x45_M193_2MAG_Stanag"}},
                {"CUP_arifle_XM16E1", {"rhs_mag_20Rnd_556x45_M193_2MAG_Stanag"}}
            },
            {"rhsusf_weap_m1911a1",   {"rhsusf_mag_7x45acp_MHP"}}
        };

        uniformContents[] = {
            {"ACE_fieldDressing",4},
            {"ACE_elasticBandage",4},
            {"ACE_tourniquet",2},
            {"ACE_morphine",2},
            {"ACE_splint",2},
            {"ACE_salineIV_500",1},
            {"ACE_MapTools",1},
            {"ACE_Flashlight_MX991",1},
            {"rhsusf_mag_7x45acp_MHP",2}
        };

        vestContents[] = {
            {"rhs_mag_20Rnd_556x45_M193_2MAG_Stanag",1},
            {"rhs_mag_20Rnd_556x45_M193_Stanag",8},
            {"rhs_mag_20Rnd_556x45_M196_Stanag_Tracer_Red",1},
            {"rhs_grenade_mkii_mag",2},
            {"rhs_grenade_anm8_mag",2}
        };

        backpackContents[] = {
            {"rhs_mag_20Rnd_556x45_M193_Stanag",8},
            {"rhs_mag_20Rnd_556x45_M196_Stanag_Tracer_Red",2},
            {"rhs_grenade_anm8_mag",2},
            {"rhs_grenade_mkii_mag",2},
            {"rhs_grenade_m15_mag",2},
            {"rhsusf_100Rnd_762x51",2},
            {"ACE_FlareTripMine_Mag",2}
        };
    };

    class PL: BaseUnit {
        weapons[] = {
            {
                {"CUP_arifle_M16A1",  {"rhs_mag_20Rnd_556x45_M193_2MAG_Stanag"}},
                {"CUP_arifle_M16A1",  {"rhs_mag_20Rnd_556x45_M193_2MAG_Stanag"}},
                {"CUP_arifle_M16A1",  {"rhs_mag_20Rnd_556x45_M193_2MAG_Stanag"}},
                {"CUP_arifle_XM16E1", {"rhs_mag_20Rnd_556x45_M193_2MAG_Stanag"}}
            },
            {"rhsusf_weap_m1911a1",   {"rhsusf_mag_7x45acp_MHP"}},
            "Binocular"
        };
        backpackContents[] = {
            {"ACRE_PRC77",1},
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
        assignedItems[] = {"ItemMap","ItemCompass","ItemWatch","B_UavTerminal","rhsusf_ANPVS_15"};
        backpackContents[] = {
            {"ACRE_PRC77",1},
            {"ACRE_PRC152",1}
        };
    };

    class TL: PL {};

    class FSO: PL {};

    class MED: BaseUnit {
        ace_medic = 2;
        backpackContents[] = {
            {"rhs_mag_20Rnd_556x45_M193_Stanag",4},
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
            {
                {"CUP_arifle_M16A1",  {"rhs_mag_20Rnd_556x45_M193_2MAG_Stanag"}},
                {"CUP_arifle_M16A1",  {"rhs_mag_20Rnd_556x45_M193_2MAG_Stanag"}},
                {"CUP_arifle_M16A1",  {"rhs_mag_20Rnd_556x45_M193_2MAG_Stanag"}},
                {"CUP_arifle_XM16E1", {"rhs_mag_20Rnd_556x45_M193_2MAG_Stanag"}}
            },
            {"rhsusf_weap_m1911a1",   {"rhsusf_mag_7x45acp_MHP"}},
            "rhs_weap_m72a7"
        };
    };

    class UGL: BaseUnit {
        weapons[] = {
            {"CUP_arifle_M16A1GL",  {"rhs_mag_20Rnd_556x45_M193_2MAG_Stanag"}},
            {"rhsusf_weap_m1911a1", {"rhsusf_mag_7x45acp_MHP"}}
        };

        vestContents[] = {
            {"rhs_mag_20Rnd_556x45_M193_Stanag",6},
            {"1Rnd_HE_Grenade_shell",6},
            {"rhs_mag_20Rnd_556x45_M196_Stanag_Tracer_Red",1},
            {"rhs_grenade_mkii_mag",2},
            {"rhs_grenade_anm8_mag",2}
        };

        backpackContents[] = {
            {"rhs_mag_20Rnd_556x45_M193_Stanag",8},
            {"1Rnd_HE_Grenade_shell",20},
            {"ACE_40mm_Flare_white",8},
            {"CUP_1Rnd_StarCluster_Red_M203",2},
            {"CUP_1Rnd_StarCluster_Green_M203",2},
            {"rhs_mag_20Rnd_556x45_M196_Stanag_Tracer_Red",2},
            {"rhs_grenade_anm8_mag",2},
            {"rhs_grenade_mkii_mag",2},
            {"ACE_FlareTripMine_Mag",2}
        };
    };

    class LMG: BaseUnit {
        weapons[] = {
            {"CUP_lmg_M60", {"rhsusf_100Rnd_762x51"}},
            {"rhsusf_weap_m1911a1", {"rhsusf_mag_7x45acp_MHP"}}
        };

        vestContents[] = {
            {"rhsusf_100Rnd_762x51",2},
            {"rhs_grenade_mkii_mag",2},
            {"rhs_grenade_anm8_mag",2}
        };

        backpackContents[] = {
            {"rhsusf_100Rnd_762x51",3},
            {"ACE_SpareBarrel",1},
            {"rhs_grenade_anm8_mag",2},
            {"rhs_grenade_mkii_mag",2},
            {"ACE_FlareTripMine_Mag",2}
        };
    };

    class GPMG: LMG {};

    class DMR: BaseUnit {
        weapons[] = {
            {"rhs_weap_m14_rail", {"rhsusf_20Rnd_762x51_m80_Mag","optic_khs_old", "rhsusf_acc_m14_bipod"}},
            {"rhsusf_weap_m1911a1", {"rhsusf_mag_7x45acp_MHP"}}
        };

        vestContents[] = {
            {"ACE_RangeCard",1},
            {"rhsusf_20Rnd_762x51_m80_Mag",4},
            {"rhs_grenade_mkii_mag",2},
            {"rhs_grenade_anm8_mag",2}
        };

        backpackContents[] = {
            {"rhsusf_20Rnd_762x51_m80_Mag",8},
            {"rhsusf_20Rnd_762x51_m62_Mag",2},
            {"rhs_grenade_anm8_mag",2},
            {"rhs_grenade_mkii_mag",2},
            {"rhs_grenade_m15_mag",2},
            {"ACE_FlareTripMine_Mag",2}
        };
    };

    class MAT: BaseUnit {
        weapons[] = {
            {
                {"CUP_arifle_M16A1",  {"rhs_mag_20Rnd_556x45_M193_2MAG_Stanag"}},
                {"CUP_arifle_M16A1",  {"rhs_mag_20Rnd_556x45_M193_2MAG_Stanag"}},
                {"CUP_arifle_M16A1",  {"rhs_mag_20Rnd_556x45_M193_2MAG_Stanag"}},
                {"CUP_arifle_XM16E1", {"rhs_mag_20Rnd_556x45_M193_2MAG_Stanag"}}
            },
            {"rhsusf_weap_m1911a1",   {"rhsusf_mag_7x45acp_MHP"}},
            "rhs_weap_maaws"
        };

        backpackContents[] = {
            {"rhs_mag_maaws_HEDP",2},
            {"rhs_mag_20Rnd_556x45_M193_Stanag",4},
            {"rhs_mag_20Rnd_556x45_M196_Stanag_Tracer_Red",1},
            {"rhs_grenade_anm8_mag",2},
            {"rhs_grenade_mkii_mag",2},
            {"ACE_FlareTripMine_Mag",2}
        };
    };

    class MATA: BaseUnit {
        weapons[] = {
            {
                {"CUP_arifle_M16A1",  {"rhs_mag_20Rnd_556x45_M193_2MAG_Stanag"}},
                {"CUP_arifle_M16A1",  {"rhs_mag_20Rnd_556x45_M193_2MAG_Stanag"}},
                {"CUP_arifle_M16A1",  {"rhs_mag_20Rnd_556x45_M193_2MAG_Stanag"}},
                {"CUP_arifle_XM16E1", {"rhs_mag_20Rnd_556x45_M193_2MAG_Stanag"}}
            },
            {"rhsusf_weap_m1911a1",   {"rhsusf_mag_7x45acp_MHP"}},
            "Binocular"
        };
        backpackContents[] = {
            {"rhs_mag_maaws_HEDP",2},
            {"rhs_mag_maaws_HE",2},
            {"rhs_mag_20Rnd_556x45_M193_Stanag",2}
        };
    };

    class PILOT: BaseUnit {
        uniform[] = {"U_B_HeliPilotCoveralls"};
        vest[] = {"V_BandollierB_rgr"};
        backpack[] = {};
        headGear[] = {"H_PilotHelmetHeli_O"};

        weapons[] = {
            {"CUP_smg_Mac10", {"CUP_30Rnd_45ACP_MAC10_M"}},
            {"rhsusf_weap_m1911a1", {"rhsusf_mag_7x45acp_MHP"}}
        };

        vestContents[] = {
            {"CUP_30Rnd_45ACP_MAC10_M",4},
            {"rhs_weap_rsp30_green",1},
            {"SmokeShellGreen",2},
            {"SmokeShellYellow",2}
        };

        backpackContents[] = {};
    };

    class LauncherCrate {
        vehCargoWeapons[] = {
            {"rhs_weap_m72a7",10},
            {"rhs_weap_maaws",2}
        };

        vehCargoMagazines[] = {
            {"rhs_mag_maaws_HEDP",10},
            {"rhs_mag_maaws_HE",10}
        };

        vehCargoRucks[] = {
            {"CUP_B_AlicePack_OD",4}
        };
    };

    class LargeGearCrate {
        vehCargoWeapons[] = {
            {"rhs_weap_m72a7",10}
        };

        vehCargoMagazines[] = {
            {"rhs_mag_20Rnd_556x45_M193_Stanag",80},
            {"rhs_mag_20Rnd_556x45_M196_Stanag_Tracer_Red",20},
            {"rhsusf_100Rnd_762x51",20},
            {"1Rnd_HE_Grenade_shell",40},
            {"rhs_grenade_anm8_mag",20},
            {"rhs_grenade_mkii_mag",20},
            {"DemoCharge_Remote_Mag",10}
        };

        vehCargoRucks[] = {
            {"CUP_B_AlicePack_OD",4}
        };
    };
};