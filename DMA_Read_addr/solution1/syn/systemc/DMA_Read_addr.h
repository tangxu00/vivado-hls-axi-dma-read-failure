// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2016.4
// Copyright (C) 1986-2016 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

#ifndef _DMA_Read_addr_HH_
#define _DMA_Read_addr_HH_

#include "systemc.h"
#include "AESL_pkg.h"

#include "DMA_Read_addr_AXILiteS_s_axi.h"
#include "DMA_Read_addr_in_r_m_axi.h"

namespace ap_rtl {

template<unsigned int C_M_AXI_IN_R_ADDR_WIDTH = 32,
         unsigned int C_M_AXI_IN_R_ID_WIDTH = 1,
         unsigned int C_M_AXI_IN_R_AWUSER_WIDTH = 1,
         unsigned int C_M_AXI_IN_R_DATA_WIDTH = 32,
         unsigned int C_M_AXI_IN_R_WUSER_WIDTH = 1,
         unsigned int C_M_AXI_IN_R_ARUSER_WIDTH = 1,
         unsigned int C_M_AXI_IN_R_RUSER_WIDTH = 1,
         unsigned int C_M_AXI_IN_R_BUSER_WIDTH = 1,
         unsigned int C_S_AXI_AXILITES_ADDR_WIDTH = 6,
         unsigned int C_S_AXI_AXILITES_DATA_WIDTH = 32>
struct DMA_Read_addr : public sc_module {
    // Port declarations 75
    sc_in_clk ap_clk;
    sc_in< sc_logic > ap_rst_n;
    sc_out< sc_logic > m_axi_in_r_AWVALID;
    sc_in< sc_logic > m_axi_in_r_AWREADY;
    sc_out< sc_uint<C_M_AXI_IN_R_ADDR_WIDTH> > m_axi_in_r_AWADDR;
    sc_out< sc_uint<C_M_AXI_IN_R_ID_WIDTH> > m_axi_in_r_AWID;
    sc_out< sc_lv<8> > m_axi_in_r_AWLEN;
    sc_out< sc_lv<3> > m_axi_in_r_AWSIZE;
    sc_out< sc_lv<2> > m_axi_in_r_AWBURST;
    sc_out< sc_lv<2> > m_axi_in_r_AWLOCK;
    sc_out< sc_lv<4> > m_axi_in_r_AWCACHE;
    sc_out< sc_lv<3> > m_axi_in_r_AWPROT;
    sc_out< sc_lv<4> > m_axi_in_r_AWQOS;
    sc_out< sc_lv<4> > m_axi_in_r_AWREGION;
    sc_out< sc_uint<C_M_AXI_IN_R_AWUSER_WIDTH> > m_axi_in_r_AWUSER;
    sc_out< sc_logic > m_axi_in_r_WVALID;
    sc_in< sc_logic > m_axi_in_r_WREADY;
    sc_out< sc_uint<C_M_AXI_IN_R_DATA_WIDTH> > m_axi_in_r_WDATA;
    sc_out< sc_uint<C_M_AXI_IN_R_DATA_WIDTH/8> > m_axi_in_r_WSTRB;
    sc_out< sc_logic > m_axi_in_r_WLAST;
    sc_out< sc_uint<C_M_AXI_IN_R_ID_WIDTH> > m_axi_in_r_WID;
    sc_out< sc_uint<C_M_AXI_IN_R_WUSER_WIDTH> > m_axi_in_r_WUSER;
    sc_out< sc_logic > m_axi_in_r_ARVALID;
    sc_in< sc_logic > m_axi_in_r_ARREADY;
    sc_out< sc_uint<C_M_AXI_IN_R_ADDR_WIDTH> > m_axi_in_r_ARADDR;
    sc_out< sc_uint<C_M_AXI_IN_R_ID_WIDTH> > m_axi_in_r_ARID;
    sc_out< sc_lv<8> > m_axi_in_r_ARLEN;
    sc_out< sc_lv<3> > m_axi_in_r_ARSIZE;
    sc_out< sc_lv<2> > m_axi_in_r_ARBURST;
    sc_out< sc_lv<2> > m_axi_in_r_ARLOCK;
    sc_out< sc_lv<4> > m_axi_in_r_ARCACHE;
    sc_out< sc_lv<3> > m_axi_in_r_ARPROT;
    sc_out< sc_lv<4> > m_axi_in_r_ARQOS;
    sc_out< sc_lv<4> > m_axi_in_r_ARREGION;
    sc_out< sc_uint<C_M_AXI_IN_R_ARUSER_WIDTH> > m_axi_in_r_ARUSER;
    sc_in< sc_logic > m_axi_in_r_RVALID;
    sc_out< sc_logic > m_axi_in_r_RREADY;
    sc_in< sc_uint<C_M_AXI_IN_R_DATA_WIDTH> > m_axi_in_r_RDATA;
    sc_in< sc_logic > m_axi_in_r_RLAST;
    sc_in< sc_uint<C_M_AXI_IN_R_ID_WIDTH> > m_axi_in_r_RID;
    sc_in< sc_uint<C_M_AXI_IN_R_RUSER_WIDTH> > m_axi_in_r_RUSER;
    sc_in< sc_lv<2> > m_axi_in_r_RRESP;
    sc_in< sc_logic > m_axi_in_r_BVALID;
    sc_out< sc_logic > m_axi_in_r_BREADY;
    sc_in< sc_lv<2> > m_axi_in_r_BRESP;
    sc_in< sc_uint<C_M_AXI_IN_R_ID_WIDTH> > m_axi_in_r_BID;
    sc_in< sc_uint<C_M_AXI_IN_R_BUSER_WIDTH> > m_axi_in_r_BUSER;
    sc_out< sc_lv<32> > outs_TDATA;
    sc_out< sc_logic > outs_TVALID;
    sc_in< sc_logic > outs_TREADY;
    sc_out< sc_lv<4> > outs_TKEEP;
    sc_out< sc_lv<4> > outs_TSTRB;
    sc_out< sc_lv<1> > outs_TUSER;
    sc_out< sc_lv<1> > outs_TLAST;
    sc_out< sc_lv<1> > outs_TID;
    sc_out< sc_lv<1> > outs_TDEST;
    sc_in< sc_lv<2> > active_frame_V;
    sc_in< sc_logic > s_axi_AXILiteS_AWVALID;
    sc_out< sc_logic > s_axi_AXILiteS_AWREADY;
    sc_in< sc_uint<C_S_AXI_AXILITES_ADDR_WIDTH> > s_axi_AXILiteS_AWADDR;
    sc_in< sc_logic > s_axi_AXILiteS_WVALID;
    sc_out< sc_logic > s_axi_AXILiteS_WREADY;
    sc_in< sc_uint<C_S_AXI_AXILITES_DATA_WIDTH> > s_axi_AXILiteS_WDATA;
    sc_in< sc_uint<C_S_AXI_AXILITES_DATA_WIDTH/8> > s_axi_AXILiteS_WSTRB;
    sc_in< sc_logic > s_axi_AXILiteS_ARVALID;
    sc_out< sc_logic > s_axi_AXILiteS_ARREADY;
    sc_in< sc_uint<C_S_AXI_AXILITES_ADDR_WIDTH> > s_axi_AXILiteS_ARADDR;
    sc_out< sc_logic > s_axi_AXILiteS_RVALID;
    sc_in< sc_logic > s_axi_AXILiteS_RREADY;
    sc_out< sc_uint<C_S_AXI_AXILITES_DATA_WIDTH> > s_axi_AXILiteS_RDATA;
    sc_out< sc_lv<2> > s_axi_AXILiteS_RRESP;
    sc_out< sc_logic > s_axi_AXILiteS_BVALID;
    sc_in< sc_logic > s_axi_AXILiteS_BREADY;
    sc_out< sc_lv<2> > s_axi_AXILiteS_BRESP;
    sc_out< sc_logic > interrupt;
    sc_signal< sc_logic > ap_var_for_const0;
    sc_signal< sc_logic > ap_var_for_const7;
    sc_signal< sc_lv<32> > ap_var_for_const1;
    sc_signal< sc_lv<1> > ap_var_for_const2;
    sc_signal< sc_lv<2> > ap_var_for_const5;
    sc_signal< sc_lv<32> > ap_var_for_const3;
    sc_signal< sc_lv<3> > ap_var_for_const4;
    sc_signal< sc_lv<4> > ap_var_for_const6;


    // Module declarations
    DMA_Read_addr(sc_module_name name);
    SC_HAS_PROCESS(DMA_Read_addr);

    ~DMA_Read_addr();

    sc_trace_file* mVcdFile;

    ofstream mHdltvinHandle;
    ofstream mHdltvoutHandle;
    DMA_Read_addr_AXILiteS_s_axi<C_S_AXI_AXILITES_ADDR_WIDTH,C_S_AXI_AXILITES_DATA_WIDTH>* DMA_Read_addr_AXILiteS_s_axi_U;
    DMA_Read_addr_in_r_m_axi<32,32,5,16,16,16,16,C_M_AXI_IN_R_ID_WIDTH,C_M_AXI_IN_R_ADDR_WIDTH,C_M_AXI_IN_R_DATA_WIDTH,C_M_AXI_IN_R_AWUSER_WIDTH,C_M_AXI_IN_R_ARUSER_WIDTH,C_M_AXI_IN_R_WUSER_WIDTH,C_M_AXI_IN_R_RUSER_WIDTH,C_M_AXI_IN_R_BUSER_WIDTH,C_M_AXI_IN_R_TARGET_ADDR,C_M_AXI_IN_R_USER_VALUE,C_M_AXI_IN_R_PROT_VALUE,C_M_AXI_IN_R_CACHE_VALUE>* DMA_Read_addr_in_r_m_axi_U;
    sc_signal< sc_logic > ap_rst_n_inv;
    sc_signal< sc_logic > ap_start;
    sc_signal< sc_logic > ap_done;
    sc_signal< sc_logic > ap_idle;
    sc_signal< sc_lv<11> > ap_CS_fsm;
    sc_signal< sc_lv<1> > ap_CS_fsm_state1;
    sc_signal< sc_logic > ap_ready;
    sc_signal< sc_lv<32> > outs_V_data_V_1_data_out;
    sc_signal< sc_logic > outs_V_data_V_1_vld_in;
    sc_signal< sc_logic > outs_V_data_V_1_vld_out;
    sc_signal< sc_logic > outs_V_data_V_1_ack_in;
    sc_signal< sc_logic > outs_V_data_V_1_ack_out;
    sc_signal< sc_lv<32> > outs_V_data_V_1_payload_A;
    sc_signal< sc_lv<32> > outs_V_data_V_1_payload_B;
    sc_signal< sc_logic > outs_V_data_V_1_sel_rd;
    sc_signal< sc_logic > outs_V_data_V_1_sel_wr;
    sc_signal< sc_logic > outs_V_data_V_1_sel;
    sc_signal< sc_logic > outs_V_data_V_1_load_A;
    sc_signal< sc_logic > outs_V_data_V_1_load_B;
    sc_signal< sc_lv<2> > outs_V_data_V_1_state;
    sc_signal< sc_logic > outs_V_data_V_1_state_cmp_full;
    sc_signal< sc_lv<4> > outs_V_keep_V_1_data_out;
    sc_signal< sc_logic > outs_V_keep_V_1_vld_in;
    sc_signal< sc_logic > outs_V_keep_V_1_vld_out;
    sc_signal< sc_logic > outs_V_keep_V_1_ack_in;
    sc_signal< sc_logic > outs_V_keep_V_1_ack_out;
    sc_signal< sc_logic > outs_V_keep_V_1_sel_rd;
    sc_signal< sc_logic > outs_V_keep_V_1_sel;
    sc_signal< sc_lv<2> > outs_V_keep_V_1_state;
    sc_signal< sc_lv<4> > outs_V_strb_V_1_data_out;
    sc_signal< sc_logic > outs_V_strb_V_1_vld_in;
    sc_signal< sc_logic > outs_V_strb_V_1_vld_out;
    sc_signal< sc_logic > outs_V_strb_V_1_ack_in;
    sc_signal< sc_logic > outs_V_strb_V_1_ack_out;
    sc_signal< sc_logic > outs_V_strb_V_1_sel_rd;
    sc_signal< sc_logic > outs_V_strb_V_1_sel;
    sc_signal< sc_lv<2> > outs_V_strb_V_1_state;
    sc_signal< sc_lv<1> > outs_V_user_V_1_data_out;
    sc_signal< sc_logic > outs_V_user_V_1_vld_in;
    sc_signal< sc_logic > outs_V_user_V_1_vld_out;
    sc_signal< sc_logic > outs_V_user_V_1_ack_in;
    sc_signal< sc_logic > outs_V_user_V_1_ack_out;
    sc_signal< sc_lv<1> > outs_V_user_V_1_payload_A;
    sc_signal< sc_lv<1> > outs_V_user_V_1_payload_B;
    sc_signal< sc_logic > outs_V_user_V_1_sel_rd;
    sc_signal< sc_logic > outs_V_user_V_1_sel_wr;
    sc_signal< sc_logic > outs_V_user_V_1_sel;
    sc_signal< sc_logic > outs_V_user_V_1_load_A;
    sc_signal< sc_logic > outs_V_user_V_1_load_B;
    sc_signal< sc_lv<2> > outs_V_user_V_1_state;
    sc_signal< sc_logic > outs_V_user_V_1_state_cmp_full;
    sc_signal< sc_lv<1> > outs_V_last_V_1_data_out;
    sc_signal< sc_logic > outs_V_last_V_1_vld_in;
    sc_signal< sc_logic > outs_V_last_V_1_vld_out;
    sc_signal< sc_logic > outs_V_last_V_1_ack_in;
    sc_signal< sc_logic > outs_V_last_V_1_ack_out;
    sc_signal< sc_lv<1> > outs_V_last_V_1_payload_A;
    sc_signal< sc_lv<1> > outs_V_last_V_1_payload_B;
    sc_signal< sc_logic > outs_V_last_V_1_sel_rd;
    sc_signal< sc_logic > outs_V_last_V_1_sel_wr;
    sc_signal< sc_logic > outs_V_last_V_1_sel;
    sc_signal< sc_logic > outs_V_last_V_1_load_A;
    sc_signal< sc_logic > outs_V_last_V_1_load_B;
    sc_signal< sc_lv<2> > outs_V_last_V_1_state;
    sc_signal< sc_logic > outs_V_last_V_1_state_cmp_full;
    sc_signal< sc_lv<1> > outs_V_id_V_1_data_out;
    sc_signal< sc_logic > outs_V_id_V_1_vld_in;
    sc_signal< sc_logic > outs_V_id_V_1_vld_out;
    sc_signal< sc_logic > outs_V_id_V_1_ack_in;
    sc_signal< sc_logic > outs_V_id_V_1_ack_out;
    sc_signal< sc_logic > outs_V_id_V_1_sel_rd;
    sc_signal< sc_logic > outs_V_id_V_1_sel;
    sc_signal< sc_lv<2> > outs_V_id_V_1_state;
    sc_signal< sc_lv<1> > outs_V_dest_V_1_data_out;
    sc_signal< sc_logic > outs_V_dest_V_1_vld_in;
    sc_signal< sc_logic > outs_V_dest_V_1_vld_out;
    sc_signal< sc_logic > outs_V_dest_V_1_ack_in;
    sc_signal< sc_logic > outs_V_dest_V_1_ack_out;
    sc_signal< sc_logic > outs_V_dest_V_1_sel_rd;
    sc_signal< sc_logic > outs_V_dest_V_1_sel;
    sc_signal< sc_lv<2> > outs_V_dest_V_1_state;
    sc_signal< sc_lv<32> > frame_buffer0;
    sc_signal< sc_lv<32> > frame_buffer1;
    sc_signal< sc_lv<32> > frame_buffer2;
    sc_signal< sc_lv<2> > active_frame_V_0_data_reg;
    sc_signal< sc_logic > active_frame_V_0_vld_reg;
    sc_signal< sc_logic > active_frame_V_0_ack_out;
    sc_signal< sc_lv<1> > mode_V;
    sc_signal< sc_lv<32> > n;
    sc_signal< sc_logic > in_r_blk_n_AR;
    sc_signal< sc_lv<1> > ap_CS_fsm_state3;
    sc_signal< sc_logic > in_r_blk_n_R;
    sc_signal< sc_lv<1> > ap_CS_fsm_pp0_stage0;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter1;
    sc_signal< sc_lv<1> > exitcond_flatten_reg_426;
    sc_signal< sc_logic > outs_TDATA_blk_n;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter2;
    sc_signal< sc_lv<1> > ap_pipeline_reg_pp0_iter1_exitcond_flatten_reg_426;
    sc_signal< sc_logic > in_r_AWREADY;
    sc_signal< sc_logic > in_r_WREADY;
    sc_signal< sc_logic > in_r_ARVALID;
    sc_signal< sc_logic > in_r_ARREADY;
    sc_signal< sc_logic > in_r_RVALID;
    sc_signal< sc_logic > in_r_RREADY;
    sc_signal< sc_lv<32> > in_r_RDATA;
    sc_signal< sc_logic > in_r_RLAST;
    sc_signal< sc_lv<1> > in_r_RID;
    sc_signal< sc_lv<1> > in_r_RUSER;
    sc_signal< sc_lv<2> > in_r_RRESP;
    sc_signal< sc_logic > in_r_BVALID;
    sc_signal< sc_lv<2> > in_r_BRESP;
    sc_signal< sc_lv<1> > in_r_BID;
    sc_signal< sc_lv<1> > in_r_BUSER;
    sc_signal< sc_lv<19> > indvar_flatten_reg_180;
    sc_signal< sc_lv<10> > y_reg_191;
    sc_signal< sc_lv<10> > x_reg_202;
    sc_signal< sc_lv<32> > tmp_fu_217_p2;
    sc_signal< sc_lv<32> > tmp_reg_405;
    sc_signal< sc_lv<1> > tmp_1_fu_223_p2;
    sc_signal< sc_lv<1> > tmp_1_reg_410;
    sc_signal< sc_lv<30> > p_v_fu_323_p3;
    sc_signal< sc_lv<30> > p_v_reg_415;
    sc_signal< sc_lv<1> > ap_CS_fsm_state2;
    sc_signal< sc_logic > ap_sig_ioackin_in_r_ARREADY;
    sc_signal< sc_lv<1> > exitcond_flatten_fu_341_p2;
    sc_signal< sc_lv<19> > indvar_flatten_next_fu_347_p2;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter0;
    sc_signal< sc_lv<10> > tmp_3_cast8_mid2_v_v_1_fu_373_p3;
    sc_signal< sc_lv<10> > tmp_3_cast8_mid2_v_v_1_reg_435;
    sc_signal< sc_lv<1> > pix_user_V_fu_387_p2;
    sc_signal< sc_lv<1> > pix_user_V_reg_440;
    sc_signal< sc_lv<1> > pix_last_V_fu_393_p2;
    sc_signal< sc_lv<1> > pix_last_V_reg_445;
    sc_signal< sc_lv<10> > x_1_fu_399_p2;
    sc_signal< sc_lv<1> > ap_CS_fsm_state9;
    sc_signal< sc_lv<10> > y_phi_fu_195_p4;
    sc_signal< sc_lv<32> > tmp_10_fu_331_p1;
    sc_signal< sc_logic > ap_reg_ioackin_in_r_ARREADY;
    sc_signal< sc_lv<32> > storemerge_fu_239_p3;
    sc_signal< sc_lv<32> > p_s_fu_229_p3;
    sc_signal< sc_lv<32> > tmp_2_fu_235_p1;
    sc_signal< sc_lv<1> > tmp_s_fu_265_p2;
    sc_signal< sc_lv<1> > tmp_9_fu_259_p2;
    sc_signal< sc_lv<30> > tmp_3_fu_277_p4;
    sc_signal< sc_lv<30> > tmp_5_fu_287_p4;
    sc_signal< sc_lv<1> > tmp_4_fu_253_p2;
    sc_signal< sc_lv<30> > tmp_8_fu_305_p4;
    sc_signal< sc_lv<1> > or_cond_fu_271_p2;
    sc_signal< sc_lv<30> > tmp_6_fu_297_p3;
    sc_signal< sc_lv<30> > tmp_12_fu_315_p3;
    sc_signal< sc_lv<1> > exitcond4_fu_353_p2;
    sc_signal< sc_lv<10> > y_s_fu_367_p2;
    sc_signal< sc_lv<10> > x_mid2_fu_359_p3;
    sc_signal< sc_lv<10> > tmp_7_fu_381_p2;
    sc_signal< sc_lv<1> > ap_CS_fsm_state13;
    sc_signal< bool > ap_condition_906;
    sc_signal< sc_lv<11> > ap_NS_fsm;
    sc_signal< sc_lv<32> > ap_return;
    static const sc_logic ap_const_logic_1;
    static const sc_logic ap_const_logic_0;
    static const sc_lv<11> ap_ST_fsm_state1;
    static const sc_lv<11> ap_ST_fsm_state2;
    static const sc_lv<11> ap_ST_fsm_state3;
    static const sc_lv<11> ap_ST_fsm_state4;
    static const sc_lv<11> ap_ST_fsm_state5;
    static const sc_lv<11> ap_ST_fsm_state6;
    static const sc_lv<11> ap_ST_fsm_state7;
    static const sc_lv<11> ap_ST_fsm_state8;
    static const sc_lv<11> ap_ST_fsm_state9;
    static const sc_lv<11> ap_ST_fsm_pp0_stage0;
    static const sc_lv<11> ap_ST_fsm_state13;
    static const sc_lv<32> ap_const_lv32_0;
    static const sc_lv<1> ap_const_lv1_1;
    static const bool ap_const_boolean_1;
    static const sc_lv<1> ap_const_lv1_0;
    static const sc_lv<2> ap_const_lv2_0;
    static const sc_lv<2> ap_const_lv2_2;
    static const sc_lv<2> ap_const_lv2_3;
    static const sc_lv<2> ap_const_lv2_1;
    static const sc_lv<32> ap_const_lv32_2;
    static const sc_lv<32> ap_const_lv32_9;
    static const int C_S_AXI_DATA_WIDTH;
    static const int C_M_AXI_DATA_WIDTH;
    static const int C_M_AXI_IN_R_TARGET_ADDR;
    static const int C_M_AXI_IN_R_USER_VALUE;
    static const int C_M_AXI_IN_R_PROT_VALUE;
    static const int C_M_AXI_IN_R_CACHE_VALUE;
    static const sc_lv<32> ap_const_lv32_1;
    static const sc_lv<32> ap_const_lv32_8;
    static const sc_lv<19> ap_const_lv19_0;
    static const sc_lv<10> ap_const_lv10_0;
    static const sc_lv<32> ap_const_lv32_75300;
    static const sc_lv<3> ap_const_lv3_0;
    static const sc_lv<4> ap_const_lv4_0;
    static const sc_lv<32> ap_const_lv32_1F;
    static const sc_lv<19> ap_const_lv19_75300;
    static const sc_lv<19> ap_const_lv19_1;
    static const sc_lv<10> ap_const_lv10_320;
    static const sc_lv<10> ap_const_lv10_1;
    static const sc_lv<10> ap_const_lv10_31F;
    static const sc_lv<32> ap_const_lv32_A;
    // Thread declarations
    void thread_ap_var_for_const0();
    void thread_ap_var_for_const7();
    void thread_ap_var_for_const1();
    void thread_ap_var_for_const2();
    void thread_ap_var_for_const5();
    void thread_ap_var_for_const3();
    void thread_ap_var_for_const4();
    void thread_ap_var_for_const6();
    void thread_ap_clk_no_reset_();
    void thread_active_frame_V_0_ack_out();
    void thread_ap_CS_fsm_pp0_stage0();
    void thread_ap_CS_fsm_state1();
    void thread_ap_CS_fsm_state13();
    void thread_ap_CS_fsm_state2();
    void thread_ap_CS_fsm_state3();
    void thread_ap_CS_fsm_state9();
    void thread_ap_condition_906();
    void thread_ap_done();
    void thread_ap_idle();
    void thread_ap_ready();
    void thread_ap_rst_n_inv();
    void thread_ap_sig_ioackin_in_r_ARREADY();
    void thread_exitcond4_fu_353_p2();
    void thread_exitcond_flatten_fu_341_p2();
    void thread_in_r_ARVALID();
    void thread_in_r_RREADY();
    void thread_in_r_blk_n_AR();
    void thread_in_r_blk_n_R();
    void thread_indvar_flatten_next_fu_347_p2();
    void thread_or_cond_fu_271_p2();
    void thread_outs_TDATA();
    void thread_outs_TDATA_blk_n();
    void thread_outs_TDEST();
    void thread_outs_TID();
    void thread_outs_TKEEP();
    void thread_outs_TLAST();
    void thread_outs_TSTRB();
    void thread_outs_TUSER();
    void thread_outs_TVALID();
    void thread_outs_V_data_V_1_ack_in();
    void thread_outs_V_data_V_1_ack_out();
    void thread_outs_V_data_V_1_data_out();
    void thread_outs_V_data_V_1_load_A();
    void thread_outs_V_data_V_1_load_B();
    void thread_outs_V_data_V_1_sel();
    void thread_outs_V_data_V_1_state_cmp_full();
    void thread_outs_V_data_V_1_vld_in();
    void thread_outs_V_data_V_1_vld_out();
    void thread_outs_V_dest_V_1_ack_in();
    void thread_outs_V_dest_V_1_ack_out();
    void thread_outs_V_dest_V_1_data_out();
    void thread_outs_V_dest_V_1_sel();
    void thread_outs_V_dest_V_1_vld_in();
    void thread_outs_V_dest_V_1_vld_out();
    void thread_outs_V_id_V_1_ack_in();
    void thread_outs_V_id_V_1_ack_out();
    void thread_outs_V_id_V_1_data_out();
    void thread_outs_V_id_V_1_sel();
    void thread_outs_V_id_V_1_vld_in();
    void thread_outs_V_id_V_1_vld_out();
    void thread_outs_V_keep_V_1_ack_in();
    void thread_outs_V_keep_V_1_ack_out();
    void thread_outs_V_keep_V_1_data_out();
    void thread_outs_V_keep_V_1_sel();
    void thread_outs_V_keep_V_1_vld_in();
    void thread_outs_V_keep_V_1_vld_out();
    void thread_outs_V_last_V_1_ack_in();
    void thread_outs_V_last_V_1_ack_out();
    void thread_outs_V_last_V_1_data_out();
    void thread_outs_V_last_V_1_load_A();
    void thread_outs_V_last_V_1_load_B();
    void thread_outs_V_last_V_1_sel();
    void thread_outs_V_last_V_1_state_cmp_full();
    void thread_outs_V_last_V_1_vld_in();
    void thread_outs_V_last_V_1_vld_out();
    void thread_outs_V_strb_V_1_ack_in();
    void thread_outs_V_strb_V_1_ack_out();
    void thread_outs_V_strb_V_1_data_out();
    void thread_outs_V_strb_V_1_sel();
    void thread_outs_V_strb_V_1_vld_in();
    void thread_outs_V_strb_V_1_vld_out();
    void thread_outs_V_user_V_1_ack_in();
    void thread_outs_V_user_V_1_ack_out();
    void thread_outs_V_user_V_1_data_out();
    void thread_outs_V_user_V_1_load_A();
    void thread_outs_V_user_V_1_load_B();
    void thread_outs_V_user_V_1_sel();
    void thread_outs_V_user_V_1_state_cmp_full();
    void thread_outs_V_user_V_1_vld_in();
    void thread_outs_V_user_V_1_vld_out();
    void thread_p_s_fu_229_p3();
    void thread_p_v_fu_323_p3();
    void thread_pix_last_V_fu_393_p2();
    void thread_pix_user_V_fu_387_p2();
    void thread_storemerge_fu_239_p3();
    void thread_tmp_10_fu_331_p1();
    void thread_tmp_12_fu_315_p3();
    void thread_tmp_1_fu_223_p2();
    void thread_tmp_2_fu_235_p1();
    void thread_tmp_3_cast8_mid2_v_v_1_fu_373_p3();
    void thread_tmp_3_fu_277_p4();
    void thread_tmp_4_fu_253_p2();
    void thread_tmp_5_fu_287_p4();
    void thread_tmp_6_fu_297_p3();
    void thread_tmp_7_fu_381_p2();
    void thread_tmp_8_fu_305_p4();
    void thread_tmp_9_fu_259_p2();
    void thread_tmp_fu_217_p2();
    void thread_tmp_s_fu_265_p2();
    void thread_x_1_fu_399_p2();
    void thread_x_mid2_fu_359_p3();
    void thread_y_phi_fu_195_p4();
    void thread_y_s_fu_367_p2();
    void thread_ap_NS_fsm();
    void thread_hdltv_gen();
};

}

using namespace ap_rtl;

#endif