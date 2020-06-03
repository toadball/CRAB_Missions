    class LDF { 
        class baseUnit {
            ace_earplugs = 1;
            allowPlayerGoggles = 1;
            ace_medic = 1;  
            
            weapons[] = {
                            {"arifle_MSBS65_camo_F", 
                                {"30Rnd_65x39_caseless_msbs_mag", "acc_pointer_ir", "optic_ico_01_camo_f"},
                            },
                            {"hgun_Pistol_heavy_01_green_F",
                                {"11Rnd_45ACP_Mag"}
                            }
            };
            
            assignedItems[] = {"ItemMap","ItemCompass","ItemWatch", "ItemRadio", "O_NVGoggles_grn_F"};
            
            headgear[] = {
                "H_HelmetHBK_headset_F",
                "H_HelmetHBK_ear_F"
            };
           
            goggles[] = {};
            
            uniform[] = {
                "U_I_E_Uniform_01_shortsleeve_F",
                "U_I_E_Uniform_01_sweater_F",
                "U_I_E_Uniform_01_tanktop_F"
            };
            uniformContents[] = {
                {"ACE_fieldDressing", 5},
                {"ACE_morphine", 2},
                {"ACE_tourniquet", 2},   
                {"ACE_adenosine", 1},
                {"ACE_elasticBandage", 2},
                {"ACE_quikclot", 2},
                {"ACE_Splint", 1},
                {"ACE_salineIV_500", 1},
                {"ACE_Flashlight_MX991", 1},
                {"HandGrenade", 1}
            };
                
            vest[] = {"V_CarrierRigKBT_01_light_EAF_F"};
            vestContents[] = {
                {"30Rnd_65x39_caseless_msbs_mag", 4},
                {"HandGrenade", 3},
                {"11Rnd_45ACP_Mag", 2}
            };
                
            backpack[] = {"B_Carryall_eaf_F"};
            backpackContents[] = {
                {"muzzle_snds_h", 1},
                {"ace_maptools", 1},
                {"30Rnd_65x39_caseless_msbs_mag", 4},
                {"30Rnd_65x39_caseless_msbs_mag_Tracer", 2},
                {"SmokeShell", 2}
            };
        };

        class SL: baseUnit { 
            
            assignedItems[] = {"ItemMap","ItemCompass","ItemWatch","ace_maptools", "ItemRadio", "O_NVGoggles_grn_F"};

            weapons[] = {
                            {"arifle_MSBS65_GL_camo_F", 
                                {"30Rnd_65x39_caseless_msbs_mag", "rhs_mag_M433_HEDP", "acc_pointer_ir", "optic_ico_01_camo_f"},
                            },
                            {"hgun_Pistol_heavy_01_green_F",
                                {"11Rnd_45ACP_Mag"}
                            },
                            "ace_vector"
            };
            vestContents[] = {
                {"30Rnd_65x39_caseless_msbs_mag", 4},
                {"HandGrenade", 3},
                {"rhs_mag_M433_HEDP", 5},
                {"acre_prc148", 1},
                {"11Rnd_45ACP_Mag", 2}
            };

            backpackContents[] = {
                {"muzzle_snds_h", 1},
                {"itc_land_tablet_rover", 1},
                {"30Rnd_65x39_caseless_msbs_mag", 4},
                {"ace_microdagr", 1},
                {"SmokeShell", 2},
                {"rhs_mag_M433_HEDP", 5},
                {"ace_maptools", 1},
                {"SmokeShellGreen", 2},
                {"1Rnd_SmokeGreen_Grenade_shell", 3},
                {"1Rnd_SmokeRed_Grenade_shell", 3},
                {"1Rnd_SmokePurple_Grenade_shell", 3}

            };      
        };
        class PL: SL {};
        class ZEUS: PL {};

        class TL: baseUnit { 

            assignedItems[] = {"ItemMap","ItemCompass","ItemWatch","ace_vectore_maptools", "ItemRadio", "O_NVGoggles_grn_F"};

            weapons[] = {
                            {"arifle_MSBS65_camo_F", 
                                {"30Rnd_65x39_caseless_msbs_mag", "acc_pointer_ir", "optic_ico_01_camo_f"},
                            },
                            {"hgun_Pistol_heavy_01_green_F",
                                {"11Rnd_45ACP_Mag"}
                            },
                            "ace_vector"
            };

            backpackContents[] = {
                {"muzzle_snds_h", 1},
                {"ace_maptools", 1},
                {"30Rnd_65x39_caseless_msbs_mag", 4},
                {"30Rnd_65x39_caseless_msbs_mag_Tracer", 2},
                {"SmokeShell", 2},
                {"ACE_salineIV_500", 2},
                {"acre_prc148", 1},
                {"ace_microdagr", 1},
                {"200Rnd_65x39_cased_Box", 2}
            };   
        };

         class RF: baseUnit { 
            weapons[] = {
                            {"arifle_MSBS65_camo_F", 
                                {"30Rnd_65x39_caseless_msbs_mag", "acc_pointer_ir", "optic_ico_01_camo_f"},
                            },
                            {"hgun_Pistol_heavy_01_green_F",
                                {"11Rnd_45ACP_Mag"}
                            },
                            "rhs_weap_m72a7"
            };

            backpackContents[] = {
                {"muzzle_snds_h", 1},
                {"ace_maptools", 1},
                {"30Rnd_65x39_caseless_msbs_mag", 5},
                {"30Rnd_65x39_caseless_msbs_mag_Tracer", 2},
                {"SmokeShell", 2},
                {"200Rnd_65x39_cased_Box", 1}
            };      
        };

        class RFSG: baseUnit { 
            weapons[] = {
                            {"arifle_MSBS65_UBS_camo_F", 
                                {"30Rnd_65x39_caseless_msbs_mag", "acc_pointer_ir", "optic_ico_01_camo_f", "6Rnd_12Gauge_Pellets"},
                            },
                            {"hgun_Pistol_heavy_01_green_F",
                                {"11Rnd_45ACP_Mag"}
                            },
                            "rhs_weap_m72a7"
            };

            backpackContents[] = {
                {"muzzle_snds_h", 1},
                {"ace_maptools", 1},
                {"30Rnd_65x39_caseless_msbs_mag", 4},
                {"30Rnd_65x39_caseless_msbs_mag_Tracer", 2},
                {"SmokeShell", 2},
                {"6Rnd_12Gauge_Pellets", 3},
                {"6Rnd_12Gauge_Slug", 2}
            };      
        };

       class LMG: baseUnit { 

            weapons[] = {
                            {"LMG_Mk200_black_F", 
                                {"200Rnd_65x39_cased_Box", "optic_hamr", "acc_pointer_ir", "bipod_01_f_blk"},
                            }
                        };
            vestContents[] = {
                {"200Rnd_65x39_cased_Box", 3},
                {"SmokeShell", 2},
                {"HandGrenade", 2}
            };

            backpackContents[] = {
                {"muzzle_snds_h", 1},
                {"ace_maptools", 1},
                {"200Rnd_65x39_cased_Box", 1},
                {"200Rnd_65x39_cased_Box_Tracer", 2}
            };      
        };
        class UGL: baseUnit { 
            
            weapons[] = {
                            {"arifle_MSBS65_GL_camo_F", 
                                {"30Rnd_65x39_caseless_msbs_mag", "rhs_mag_M433_HEDP", "acc_pointer_ir", "optic_ico_01_camo_f"},
                            },
                            {"hgun_Pistol_heavy_01_green_F",
                                {"11Rnd_45ACP_Mag"}
                            }
            };

            vest[] = {"V_CarrierRigKBT_01_heavy_EAF_F"};
            vestContents[] = {
                {"30Rnd_65x39_caseless_msbs_mag", 4},
                {"HandGrenade", 1},
                {"rhs_mag_M433_HEDP", 10},
                {"11Rnd_45ACP_Mag", 2}
            };

            backpackContents[] = {
                {"muzzle_snds_h", 1},
                {"ace_maptools", 1},
                {"30Rnd_65x39_caseless_msbs_mag", 4},
                {"SmokeShell", 2},
                {"rhs_mag_M433_HEDP", 20}

            };      
        };
        
        class UAV: TL {
            assignedItems[] = {"ItemMap","ItemCompass","ItemWatch","ace_maptools", "ItemRadio", "O_NVGoggles_grn_F"};

            weapons[] = {
                            {"arifle_MSBS65_camo_F", 
                                {"30Rnd_65x39_caseless_msbs_mag", "rhs_mag_M433_HEDP", "acc_pointer_ir", "optic_ico_01_camo_f"},
                            },
                            {"hgun_Pistol_heavy_01_green_F",
                                {"11Rnd_45ACP_Mag"}
                            },
                            "ace_vector"
            };

            vestContents[] = {
                {"30Rnd_65x39_caseless_msbs_mag", 4},
                {"HandGrenade", 3},
                {"acre_prc148", 1},
                {"11Rnd_45ACP_Mag", 2}
            };

            backpack[]={"ITC_Land_i_uav06_backpack"};
             backpackContents[] = { 
                {"acre_prc148", 1},
                {"muzzle_snds_h", 1},
                {"ace_maptools", 1},
                {"30Rnd_65x39_caseless_msbs_mag", 2},
                {"SmokeShell", 2},
                {"itc_land_b_uav_packed", 2}

            };      
        };

        class FSO: baseUnit {
            assignedItems[] = {"ItemMap","ItemCompass","ItemWatch","ace_maptools", "ItemRadio", "O_NVGoggles_grn_F", "B_UAV_Terminal"};

            weapons[] = {
                            {"arifle_MSBS65_GL_camo_F", 
                                {"30Rnd_65x39_caseless_msbs_mag", "rhs_mag_M433_HEDP", "acc_pointer_ir", "optic_ico_01_camo_f"},
                            },
                            {"hgun_Pistol_heavy_01_green_F",
                                {"11Rnd_45ACP_Mag"}
                            },
                            "Laserdesignator_01_khk_F"
            };

            vestContents[] = {
                {"30Rnd_65x39_caseless_msbs_mag", 4},
                {"HandGrenade", 3},
                {"rhs_mag_M433_HEDP", 5},
                {"acre_prc148", 1},
                {"11Rnd_45ACP_Mag", 2}
            };

             backpackContents[] = {
                {"acre_prc148", 1},
                {"muzzle_snds_h", 1},
                {"ace_maptools", 1},
                {"30Rnd_65x39_caseless_msbs_mag", 2},
                {"itc_land_tablet_rover", 1},
                {"Laserbatteries", 3},
                {"ace_vector", 1},
                {"ace_microdagr", 1},
                {"SmokeShell", 2},
                {"SmokeShellGreen", 2},
                {"1Rnd_SmokeGreen_Grenade_shell", 3},
                {"1Rnd_SmokeRed_Grenade_shell", 3},
                {"1Rnd_SmokePurple_Grenade_shell", 3}
            };      
        };

        class RTO: baseUnit { 
            backpackContents[] = {
                {"muzzle_snds_h", 1},
                {"ace_maptools", 1},
                {"30Rnd_65x39_caseless_msbs_mag", 7},
                {"30Rnd_65x39_caseless_msbs_mag_Tracer", 2},
                {"SmokeShell", 2},
                {"acre_prc148", 1},
                {"acre_prc117f", 1}
            };      
        };


        class DMR: RF {
            
            weapons[] = {
                            {"arifle_MSBS65_Mark_camo_F", 
                                {"30Rnd_65x39_caseless_msbs_mag", "acc_pointer_ir", "optic_hamr", "bipod_01_f_blk"}
                            },
                            {"hgun_Pistol_heavy_01_green_F",
                                {"11Rnd_45ACP_Mag"}
                            }
            };

        };
        
        class LAT: baseUnit { 
            weapons[] = {
                            {"arifle_MSBS65_camo_F", 
                                {"30Rnd_65x39_caseless_msbs_mag", "acc_pointer_ir", "optic_ico_01_camo_f"},
                            },
                            {"hgun_Pistol_heavy_01_green_F",
                                {"11Rnd_45ACP_Mag"}
                            },
                            {"rhs_weap_maaws",
                                {"rhs_mag_maaws_HEDP", "rhs_optic_maaws"}
                        }
            };

            backpackContents[] = {
                {"muzzle_snds_h", 1},
                {"ace_maptools", 1},
                {"30Rnd_65x39_caseless_msbs_mag", 2},
                {"rhs_mag_maaws_HE", 1}
            };      
        };

        class LATA: baseUnit { 
            backpackContents[] = {
                {"muzzle_snds_h", 1},
                {"ace_maptools", 1},
                {"30Rnd_65x39_caseless_msbs_mag", 2},
                {"rhs_mag_maaws_HE", 1},
                {"rhs_mag_maaws_HEDP", 3}
            };           
        };

        class MAT: baseUnit { 
            weapons[] = {
                            {"arifle_MSBS65_camo_F", 
                                {"30Rnd_65x39_caseless_msbs_mag", "acc_pointer_ir", "optic_ico_01_camo_f"},
                            },
                            {"hgun_Pistol_heavy_01_green_F",
                                {"11Rnd_45ACP_Mag"}
                            },
                            {"rhs_weap_maaws",
                                {"rhs_mag_maaws_HEAT", "rhs_optic_maaws"}
                        }
            };

            backpackContents[] = {
                {"muzzle_snds_h", 1},
                {"ace_maptools", 1},
                {"30Rnd_65x39_caseless_msbs_mag", 2},
                {"rhs_mag_maaws_HEAT", 1}
            };      
        };

        class MATA: baseUnit { 
            backpackContents[] = {
                {"muzzle_snds_h", 1},
                {"ace_maptools", 1},
                {"30Rnd_65x39_caseless_msbs_mag", 2},
                {"rhs_mag_maaws_HEAT", 2},
                {"rhs_mag_maaws_HEDP", 1}
            };           
        };

        class HAT: baseUnit { 
            weapons[] = {
                            {"arifle_MSBS65_camo_F", 
                                {"30Rnd_65x39_caseless_msbs_mag", "acc_pointer_ir", "optic_ico_01_camo_f", "rhs_acc_grip_ffg2"},
                            },
                            {"hgun_Pistol_heavy_01_green_F",
                                {"11Rnd_45ACP_Mag"}
                            },
                            {"launch_I_Titan_short_F",
                                {"Titan_AT"}
                        }
            };

            backpackContents[] = {
                {"muzzle_snds_h", 1},
                {"ace_maptools", 1},
                {"30Rnd_65x39_caseless_msbs_mag", 2},
                {"Titan_AT", 1}
            };      
        };

        class HATA: baseUnit { 
            backpackContents[] = {
                {"muzzle_snds_h", 1},
                {"ace_maptools", 1},
                {"30Rnd_65x39_caseless_msbs_mag", 2},
                {"Titan_AT", 2},
                {"Titan_AP", 1}
            };           
        };
        
        class MED: baseUnit { 
            ace_medic = 2;

            backpackContents[] = {
                {"muzzle_snds_h", 1},
                {"ace_maptools", 1},
                {"30Rnd_65x39_caseless_msbs_mag", 2},
                {"SmokeShell", 2},
                {"ACE_fieldDressing", 15},
                {"ACE_packingBandage", 10},
                {"ACE_quikclot", 15},
                {"ACE_elasticBandage", 15},
                {"ACE_morphine", 10},
                {"ACE_epinephrine", 10},
                {"ACE_adenosine", 10},
                {"ACE_salineIV_250", 5},
                {"ACE_bloodIV_500", 4},
                {"ACE_salineiv_500", 4},
                {"ACE_salineiv", 2},
                {"ACE_personalAidKit", 1},
                {"ACE_surgicalKit", 1},
                {"ACE_splint", 7},
                {"ACE_tourniquet", 5}
      };      
        };

        class GPMG: baseUnit { 

            weapons[] = {
                            {"MMG_02_black_F", 
                                {"130Rnd_338_Mag", "acc_pointer_ir", "bipod_01_f_blk", "optic_hamr"},
                            }
                        };
            vestContents[] = {
                {"130Rnd_338_Mag", 1},
                {"HandGrenade", 2}
            };

            backpackContents[] = {
                {"muzzle_snds_338_black", 1},
                {"ace_maptools", 1},
                {"130Rnd_338_Mag", 2}
            };      
        };

        class GPMGA: baseUnit { 

             weapons[] = {
                            {"arifle_MSBS65_camo_F", 
                                {"30Rnd_65x39_caseless_msbs_mag", "acc_pointer_ir", "optic_ico_01_camo_f"},
                            },
                            {"hgun_Pistol_heavy_01_green_F",
                                {"11Rnd_45ACP_Mag"}
                            },
                            "Binocular"
            };
            assignedItems[] = {"ItemMap","ItemCompass","ItemWatch","ace_maptools", "ItemRadio", "O_NVGoggles_grn_F"};

            backpackContents[] = {
                {"muzzle_snds_h", 1},
                {"ace_maptools", 1},
                {"30Rnd_65x39_caseless_msbs_mag", 2},
                {"SmokeShell", 2},
                {"130Rnd_338_Mag", 4}
            };      
        };

        class PILOT {
            ace_earplugs = 1;
            allowPlayerGoggles = 1;
            ace_medic = 1;  
            
            weapons[] = {
                            {"hgun_Pistol_heavy_01_green_F",
                                {"11Rnd_45ACP_Mag"}
                            }
            };
            
            assignedItems[] = {"ItemMap","ItemCompass","ItemWatch","ace_maptools", "ItemRadio", "O_NVGoggles_grn_F"};
            
            headgear[] = {"H_PilotHelmetFighter_I_E"};
           
            goggles[] = {};
            
            uniform[] = {"U_B_PilotCoveralls"};
        
            uniformContents[] = {
                {"ACE_fieldDressing", 5},
                {"ACE_morphine", 2},
                {"ACE_tourniquet", 2},   
                {"ACE_adenosine", 1},
                {"ACE_elasticBandage", 2},
                {"ACE_quikclot", 2},
                {"ACE_Splint", 1},
                {"ACE_salineIV_500", 1},
                {"ACE_Flashlight_MX991", 1},
                {"ace_maptools", 1},
                {"ace_microdagr", 1},
                {"11Rnd_45ACP_Mag", 2},
                {"SmokeShellOrange", 1}
            };
        };
};
