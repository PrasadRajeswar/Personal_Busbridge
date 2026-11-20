// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_mc16x2_updated.h for the primary calling header

#ifndef VERILATED_VTB_MC16X2_UPDATED_MC_PC_CORE_H_
#define VERILATED_VTB_MC16X2_UPDATED_MC_PC_CORE_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vtb_mc16x2_updated__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_mc16x2_updated_mc_pc_core final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(clk,0,0);
        VL_IN8(rst_n,0,0);
        VL_IN8(cmd_push_val,0,0);
        VL_OUT8(cmdq_full,0,0);
        VL_IN8(wdb_push_val,0,0);
        VL_OUT8(wdb_alloc_ptr,3,0);
        VL_OUT8(wdb_full,0,0);
        VL_IN8(wdb_raddr,3,0);
        VL_IN8(wbeat,2,0);
        VL_OUT8(wdb_rmask,3,0);
        VL_IN8(wdb_pop_val,0,0);
        VL_IN8(wdb_pop_ptr,3,0);
        VL_IN8(dfi_rddata_valid,0,0);
        VL_OUT8(rdb_valid,0,0);
        VL_IN8(rdb_ready,0,0);
        VL_OUT8(rdb_axi_id,7,0);
        VL_OUT8(row_req_val,0,0);
        VL_OUT8(row_req_is_ref,0,0);
        VL_OUT8(row_req_cmd,2,0);
        VL_OUT8(row_req_bg,1,0);
        VL_OUT8(row_req_bank,1,0);
        VL_IN8(ch_arb_row_grant,0,0);
        VL_OUT8(col_req_val,0,0);
        VL_OUT8(col_req_cmd,1,0);
        VL_OUT8(col_req_addr,4,0);
        VL_OUT8(col_req_bg,1,0);
        VL_OUT8(col_req_bank,1,0);
        VL_OUT8(col_req_wdb_ptr,3,0);
        VL_OUT8(col_req_axi_id,7,0);
        VL_IN8(ch_arb_col_grant,0,0);
        VL_OUT8(err_cmdq_overflow,0,0);
        VL_OUT8(err_wdb_overflow,0,0);
        VL_OUT8(err_ref_deadline_miss,0,0);
        CData/*4:0*/ __PVT__cmdq_grant_idx;
        CData/*0:0*/ __PVT__cmdq_grant_valid;
        CData/*0:0*/ __PVT__cmdq_arb_ack;
        CData/*0:0*/ __PVT__legal_ref;
        CData/*0:0*/ __PVT__ref_req;
        CData/*0:0*/ __PVT__ref_ack;
        CData/*0:0*/ __PVT__issue_act;
        CData/*0:0*/ __PVT__issue_pre;
        CData/*0:0*/ __PVT__issue_rd;
        CData/*0:0*/ __PVT__issue_wr;
        CData/*3:0*/ __PVT__active_bank_idx;
        CData/*0:0*/ __PVT__refresh_pre_valid;
        CData/*3:0*/ __PVT__refresh_pre_bank_idx;
        CData/*0:0*/ __PVT__any_bank_open;
        CData/*0:0*/ __Vcellinp__u_cmdq__pop_val;
        CData/*3:0*/ __PVT__unnamedblk1__DOT__unnamedblk2__DOT__b_idx;
        CData/*0:0*/ __PVT__unnamedblk1__DOT__unnamedblk2__DOT__data_buf_ok;
        CData/*4:0*/ __PVT__u_cmdq__DOT__free_idx;
        CData/*0:0*/ __PVT__u_cmdq__DOT__free_found;
        CData/*0:0*/ __PVT__u_wdb__DOT__free_found;
        CData/*4:0*/ __PVT__u_rdb__DOT__id_wr_ptr;
        CData/*4:0*/ __PVT__u_rdb__DOT__id_rd_ptr;
        CData/*4:0*/ __PVT__u_rdb__DOT__data_wr_ptr;
        CData/*4:0*/ __PVT__u_rdb__DOT__data_rd_ptr;
        CData/*2:0*/ __PVT__u_rdb__DOT__rbeat_cnt;
        CData/*4:0*/ __PVT__u_rdb__DOT__outstanding_cnt;
        CData/*0:0*/ __PVT__u_rdb__DOT__id_empty;
        CData/*0:0*/ __PVT__u_rdb__DOT__data_empty;
        CData/*3:0*/ __PVT__u_bank_state__DOT__flat_update_bank;
        CData/*7:0*/ __PVT__u_timing_check__DOT__cnt_rrd;
        CData/*7:0*/ __PVT__u_timing_check__DOT__cnt_ccd;
    };
    struct {
        CData/*7:0*/ __PVT__u_timing_check__DOT__cnt_wtr;
        CData/*7:0*/ __PVT__u_cmdq_arbiter__DOT__unnamedblk1__DOT__max_ctr;
        CData/*0:0*/ __PVT__u_cmdq_arbiter__DOT__unnamedblk1__DOT__priority_seen;
        VL_OUT16(row_req_addr,13,0);
        SData/*15:0*/ __PVT__bank_is_open;
        SData/*15:0*/ __PVT__legal_act;
        SData/*15:0*/ __PVT__legal_pre;
        SData/*15:0*/ __PVT__legal_rd;
        SData/*15:0*/ __PVT__legal_wr;
        SData/*15:0*/ __PVT__u_wdb__DOT__valid_reg;
        SData/*12:0*/ __PVT__u_ref_eng__DOT__refi_counter;
        SData/*9:0*/ __PVT__u_timing_check__DOT__cnt_rfc;
        VL_INW(wdb_push_data,255,0,8);
        VL_IN(wdb_push_mask,31,0);
        VL_OUT(wdb_rdata,31,0);
        VL_IN(dfi_rddata,31,0);
        VL_OUTW(rdb_data,255,0,8);
        IData/*31:0*/ __PVT__slot_legal;
        IData/*31:0*/ __PVT__cmdq_grant;
        IData/*31:0*/ __PVT__u_cmdq__DOT__valid_reg;
        IData/*31:0*/ __PVT__u_cmdq__DOT__unnamedblk2__DOT__i;
        IData/*31:0*/ __PVT__u_wdb__DOT__unnamedblk2__DOT__i;
        IData/*31:0*/ __PVT__u_bank_state__DOT__unnamedblk1__DOT__i;
        IData/*31:0*/ __PVT__u_timing_check__DOT__unnamedblk4__DOT__i;
        IData/*31:0*/ __PVT__u_timing_check__DOT__unnamedblk5__DOT__i;
        IData/*31:0*/ __PVT__u_timing_check__DOT__unnamedblk6__DOT__i;
        IData/*31:0*/ __PVT__u_timing_check__DOT__unnamedblk2__DOT__i;
        IData/*31:0*/ __PVT__u_timing_check__DOT__unnamedblk3__DOT__i;
        IData/*31:0*/ __PVT__u_cmdq_arbiter__DOT__eligible;
        IData/*31:0*/ __PVT__u_cmdq_arbiter__DOT__unnamedblk3__DOT__i;
        VL_IN64(cmd_push_entry,35,0);
        QData/*35:0*/ __PVT__winner;
        QData/*35:0*/ __PVT__unnamedblk1__DOT__unnamedblk2__DOT__slot_entry;
        VlUnpacked<QData/*35:0*/, 32> __PVT__slot_data;
        VlUnpacked<SData/*13:0*/, 16> __PVT__open_row;
        VlUnpacked<QData/*35:0*/, 32> __PVT__u_cmdq__DOT__entries;
        VlUnpacked<VlWide<8>/*255:0*/, 16> __PVT__u_wdb__DOT__data_mem;
        VlUnpacked<IData/*31:0*/, 16> __PVT__u_wdb__DOT__mask_mem;
        VlUnpacked<CData/*7:0*/, 16> __PVT__u_rdb__DOT__id_fifo;
        VlUnpacked<VlWide<8>/*255:0*/, 16> __PVT__u_rdb__DOT__data_fifo;
        VlUnpacked<CData/*7:0*/, 16> __PVT__u_rdb__DOT__ret_id_fifo;
        VlUnpacked<CData/*7:0*/, 16> __PVT__u_timing_check__DOT__cnt_rcd;
        VlUnpacked<CData/*7:0*/, 16> __PVT__u_timing_check__DOT__cnt_ras;
        VlUnpacked<CData/*7:0*/, 16> __PVT__u_timing_check__DOT__cnt_rp;
        VlUnpacked<CData/*7:0*/, 16> __PVT__u_timing_check__DOT__cnt_rc;
        VlUnpacked<CData/*7:0*/, 16> __PVT__u_timing_check__DOT__cnt_wr;
        VlUnpacked<CData/*7:0*/, 16> __PVT__u_timing_check__DOT__cnt_rtp;
        VlUnpacked<CData/*7:0*/, 4> __PVT__u_timing_check__DOT__faw_timer;
        VlUnpacked<CData/*7:0*/, 32> __PVT__u_cmdq_arbiter__DOT__wait_ctr;
    };

    // INTERNAL VARIABLES
    Vtb_mc16x2_updated__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtb_mc16x2_updated_mc_pc_core(Vtb_mc16x2_updated__Syms* symsp, const char* v__name);
    ~Vtb_mc16x2_updated_mc_pc_core();
    VL_UNCOPYABLE(Vtb_mc16x2_updated_mc_pc_core);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
