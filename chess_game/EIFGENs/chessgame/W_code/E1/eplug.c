/*
 * Generated by ISE 17.05.10.0416 GPL Edition - win64
 */

#include "eif_eiffel.h"
#include "eif_project.h"
#include "egc_include.h"

#ifdef __cplusplus
extern "C" {
#endif
extern void F1_23();
extern EIF_REFERENCE F1_14();
extern void F875_17776();
extern void F878_18041();
extern void F874_17725();
extern void F877_17950();
extern void F1595_11000();
extern void F1560_17091();
extern void F331_6470();
extern EIF_REFERENCE F331_6457();
extern EIF_BOOLEAN F331_6469();
extern EIF_BOOLEAN F331_6477();
extern void F331_6479();
extern void F331_6480();
extern void F331_6481();
extern void F344_6604();
extern EIF_TYPED_VALUE F344_6605();

long *eif_area_table = (long *)0;
long *eif_lower_table = (long *)0;


extern void egc_init_plug (void); 
void egc_init_plug (void)
{
	egc_prof_enabled = (EIF_INTEGER) 0;
	egc_correct_mismatch = (void (*)(EIF_REFERENCE)) F1_23;
	egc_twin = (EIF_TYPED_VALUE (*)(EIF_REFERENCE)) F1_14;
	egc_strmake = (void (*)(EIF_REFERENCE, EIF_TYPED_VALUE)) F875_17776;
	egc_str32make = (void (*)(EIF_REFERENCE, EIF_TYPED_VALUE)) F874_17725;
	egc_arrmake = (void (*)(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) F1595_11000;
	egc_strset = (void (*)(EIF_REFERENCE, EIF_TYPED_VALUE)) F878_18041;
	egc_str32set = (void (*)(EIF_REFERENCE, EIF_TYPED_VALUE)) F877_17950;
	egc_routdisp_wb = (void (*)(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) F1560_17091;
	egc_is_scoop_capable = 1;
	egc_set_exception_data = (void (*)(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) F331_6470;
	egc_set_last_exception = (void (*)(EIF_REFERENCE, EIF_TYPED_VALUE)) F331_6469;
	egc_last_exception = (EIF_TYPED_VALUE (*)(EIF_REFERENCE)) F331_6457;
	egc_is_code_ignored = (EIF_TYPED_VALUE (*)(EIF_REFERENCE, EIF_TYPED_VALUE)) F331_6477;
	egc_once_raise = (void (*)(EIF_REFERENCE, EIF_TYPED_VALUE)) F331_6479;
	egc_init_exception_manager = (void (*)(EIF_REFERENCE)) F331_6480;
	egc_free_preallocated_trace = (void (*)(EIF_REFERENCE)) F331_6481;

	egc_str_dtype = 877;

	egc_str32_dtype = 876;
	egc_arr_dtype = 1594;
	egc_tup_dtype = 801;
	egc_disp_rout_id = 11104;
	egc_copy_rout_id = 18;
	egc_is_equal_rout_id = 11;

	egc_sp_char = 0x0852;
	egc_sp_wchar = 0x070B;
	egc_sp_bool = 0x082F;
	egc_sp_uint8 = 0x066D;
	egc_sp_uint16 = 0x076F;
	egc_sp_uint32 = 0x07E1;
	egc_sp_uint64 = 0x06D7;
	egc_sp_int8 = 0x0883;
	egc_sp_int16 = 0x08CC;
	egc_sp_int32 = 0x0698;
	egc_sp_int64 = 0x08A7;
	egc_sp_real32 = 0x085F;
	egc_sp_real64 = 0x06B1;
	egc_sp_pointer = 0x07B8;
	egc_sp_ref = 0x0636;

	egc_uint8_dtype = 836;
	egc_uint16_dtype = 815;
	egc_uint32_dtype = 812;
	egc_uint64_dtype = 821;
	egc_int8_dtype = 806;
	egc_int16_dtype = 839;
	egc_int32_dtype = 830;
	egc_int64_dtype = 809;
	egc_bool_dtype = 827;
	egc_real32_dtype = 818;
	egc_char_dtype = 833;
	egc_wchar_dtype = 803;
	egc_real64_dtype = 824;
	egc_point_dtype = 842;

	egc_exception_dtype = 436;
	egc_except_emnger_dtype = 330;

	egc_ce_type = egc_ce_type_init;

	egc_ce_exp_type = egc_ce_exp_type_init;
	egc_fsystem = egc_fsystem_init;
	egc_system_mod_init = egc_system_mod_init_init;
	egc_partab = egc_partab_init;
	egc_partab_size = egc_partab_size_init;
	egc_foption = egc_foption_init;
	egc_frozen = egc_frozen_init;
	egc_fpatidtab = egc_fpatidtab_init;
	egc_address_table = egc_address_table_init;
	egc_fpattern = egc_fpattern_init;

	egc_einit = egc_einit_init;
	egc_tabinit = egc_tabinit_init;
	egc_forg_table = egc_forg_table_init;

	egc_system_name = "chessgame";
	egc_system_location = "C:\\eiffel\\chess_game\\EIFGENs\\chessgame\\W_code";
	egc_compiler_tag = 38;
	egc_project_version = 1509437831;
	egc_has_old_special_semantic = 0;
	egc_has_ieee_semantic = 1;
	scount = 2399;

	egc_rcount = 1;
	egc_ridx = 0;
	egc_rlist = (char**) eif_malloc (sizeof(char*)*egc_rcount);
	egc_rcdt = (int32 *) eif_malloc (sizeof(int32)*egc_rcount);
	egc_rcrid = (int32 *) eif_malloc (sizeof(int32)*egc_rcount);
	egc_rcarg = (int32 *) eif_malloc (sizeof(int32)*egc_rcount);
	egc_rlist[0] = "APPLICATION.make_and_launch";
	egc_rcdt[0] = 0;
	egc_rcrid[0] = 23767;
	egc_rcarg[0] = 0;
	
	
	egc_platform_level = 0x00000D00;
	egc_rt_extension_dt = 343;
	egc_rt_extension_notify = (void (*)(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) F344_6604;
	egc_rt_extension_notify_argument = (EIF_TYPED_VALUE (*)(EIF_REFERENCE, EIF_TYPED_VALUE)) F344_6605;
}

void egc_rcdt_init (void)
{
	if (egc_rcdt[0] == 0) {
		egc_rcdt[0] = 2301; /* APPLICATION */
	}
}

#ifdef __cplusplus
}
#endif