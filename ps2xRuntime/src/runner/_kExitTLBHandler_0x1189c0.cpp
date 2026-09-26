#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _kExitTLBHandler
// Address: 0x1189c0 - 0x118ab4
void _kExitTLBHandler_0x1189c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("_kExitTLBHandler_0x1189c0");
#endif

    ctx->pc = 0x1189c0u;

    // 0x1189c0: 0x40016000  mfc0        $at, Status
    ctx->pc = 0x1189c0u;
    SET_GPR_S32(ctx, 1, (int32_t)ctx->cop0_status);
    // 0x1189c4: 0x241affe4  addiu       $k0, $zero, -0x1C
    ctx->pc = 0x1189c4u;
    SET_GPR_S32(ctx, 26, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967268));
    // 0x1189c8: 0x3a0824  and         $at, $at, $k0
    ctx->pc = 0x1189c8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) & GPR_U64(ctx, 26));
    // 0x1189cc: 0x40816000  mtc0        $at, Status
    ctx->pc = 0x1189ccu;
    ctx->cop0_status = GPR_U32(ctx, 1) & 0xFF57FFFF;
    // 0x1189d0: 0x40f  sync.p
    ctx->pc = 0x1189d0u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x1189d4: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x1189d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
    // 0x1189d8: 0x8c42dfe8  lw          $v0, -0x2018($v0)
    ctx->pc = 0x1189d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294959080)));
    // 0x1189dc: 0x40827000  mtc0        $v0, EPC
    ctx->pc = 0x1189dcu;
    ctx->cop0_epc = GPR_U32(ctx, 2);
    // 0x1189e0: 0x40f  sync.p
    ctx->pc = 0x1189e0u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x1189e4: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x1189e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
    // 0x1189e8: 0xdc42dfc0  ld          $v0, -0x2040($v0)
    ctx->pc = 0x1189e8u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 2), 4294959040)));
    // 0x1189ec: 0x400011  mthi        $v0
    ctx->pc = 0x1189ecu;
    ctx->hi = GPR_U64(ctx, 2);
    // 0x1189f0: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x1189f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
    // 0x1189f4: 0xdc42dfc8  ld          $v0, -0x2038($v0)
    ctx->pc = 0x1189f4u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 2), 4294959048)));
    // 0x1189f8: 0x70400011  mthi1       $v0
    ctx->pc = 0x1189f8u;
    ctx->hi1 = GPR_U64(ctx, 2);
    // 0x1189fc: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x1189fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
    // 0x118a00: 0xdc42dfd0  ld          $v0, -0x2030($v0)
    ctx->pc = 0x118a00u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 2), 4294959056)));
    // 0x118a04: 0x400013  mtlo        $v0
    ctx->pc = 0x118a04u;
    ctx->lo = GPR_U64(ctx, 2);
    // 0x118a08: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x118a08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
    // 0x118a0c: 0xdc42dfd8  ld          $v0, -0x2028($v0)
    ctx->pc = 0x118a0cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 2), 4294959064)));
    // 0x118a10: 0x70400013  mtlo1       $v0
    ctx->pc = 0x118a10u;
    ctx->lo1 = GPR_U64(ctx, 2);
    // 0x118a14: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x118a14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
    // 0x118a18: 0xdc42dfe0  ld          $v0, -0x2020($v0)
    ctx->pc = 0x118a18u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 2), 4294959072)));
    // 0x118a1c: 0x400029  mtsa        $v0
    ctx->pc = 0x118a1cu;
    ctx->sa = GPR_U32(ctx, 2) & 0x7F;
    // 0x118a20: 0x40f  sync.p
    ctx->pc = 0x118a20u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x118a24: 0x3c1a0038  lui         $k0, 0x38
    ctx->pc = 0x118a24u;
    SET_GPR_S32(ctx, 26, (int32_t)((uint32_t)56 << 16));
    // 0x118a28: 0x275addc0  addiu       $k0, $k0, -0x2240
    ctx->pc = 0x118a28u;
    SET_GPR_S32(ctx, 26, (int32_t)ADD32(GPR_U32(ctx, 26), 4294958528));
    // 0x118a2c: 0x7b410010  lq          $at, 0x10($k0)
    ctx->pc = 0x118a2cu;
    SET_GPR_VEC(ctx, 1, READ128(ADD32(GPR_U32(ctx, 26), 16)));
    // 0x118a30: 0x7b420020  lq          $v0, 0x20($k0)
    ctx->pc = 0x118a30u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 26), 32)));
    // 0x118a34: 0x7b430030  lq          $v1, 0x30($k0)
    ctx->pc = 0x118a34u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 26), 48)));
    // 0x118a38: 0x7b440040  lq          $a0, 0x40($k0)
    ctx->pc = 0x118a38u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 26), 64)));
    // 0x118a3c: 0x7b450050  lq          $a1, 0x50($k0)
    ctx->pc = 0x118a3cu;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 26), 80)));
    // 0x118a40: 0x7b460060  lq          $a2, 0x60($k0)
    ctx->pc = 0x118a40u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 26), 96)));
    // 0x118a44: 0x7b470070  lq          $a3, 0x70($k0)
    ctx->pc = 0x118a44u;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 26), 112)));
    // 0x118a48: 0x7b480080  lq          $t0, 0x80($k0)
    ctx->pc = 0x118a48u;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 26), 128)));
    // 0x118a4c: 0x7b490090  lq          $t1, 0x90($k0)
    ctx->pc = 0x118a4cu;
    SET_GPR_VEC(ctx, 9, READ128(ADD32(GPR_U32(ctx, 26), 144)));
    // 0x118a50: 0x7b4a00a0  lq          $t2, 0xA0($k0)
    ctx->pc = 0x118a50u;
    SET_GPR_VEC(ctx, 10, READ128(ADD32(GPR_U32(ctx, 26), 160)));
    // 0x118a54: 0x7b4b00b0  lq          $t3, 0xB0($k0)
    ctx->pc = 0x118a54u;
    SET_GPR_VEC(ctx, 11, READ128(ADD32(GPR_U32(ctx, 26), 176)));
    // 0x118a58: 0x7b4c00c0  lq          $t4, 0xC0($k0)
    ctx->pc = 0x118a58u;
    SET_GPR_VEC(ctx, 12, READ128(ADD32(GPR_U32(ctx, 26), 192)));
    // 0x118a5c: 0x7b4d00d0  lq          $t5, 0xD0($k0)
    ctx->pc = 0x118a5cu;
    SET_GPR_VEC(ctx, 13, READ128(ADD32(GPR_U32(ctx, 26), 208)));
    // 0x118a60: 0x7b4e00e0  lq          $t6, 0xE0($k0)
    ctx->pc = 0x118a60u;
    SET_GPR_VEC(ctx, 14, READ128(ADD32(GPR_U32(ctx, 26), 224)));
    // 0x118a64: 0x7b4f00f0  lq          $t7, 0xF0($k0)
    ctx->pc = 0x118a64u;
    SET_GPR_VEC(ctx, 15, READ128(ADD32(GPR_U32(ctx, 26), 240)));
    // 0x118a68: 0x7b500100  lq          $s0, 0x100($k0)
    ctx->pc = 0x118a68u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 26), 256)));
    // 0x118a6c: 0x7b510110  lq          $s1, 0x110($k0)
    ctx->pc = 0x118a6cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 26), 272)));
    // 0x118a70: 0x7b520120  lq          $s2, 0x120($k0)
    ctx->pc = 0x118a70u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 26), 288)));
    // 0x118a74: 0x7b530130  lq          $s3, 0x130($k0)
    ctx->pc = 0x118a74u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 26), 304)));
    // 0x118a78: 0x7b540140  lq          $s4, 0x140($k0)
    ctx->pc = 0x118a78u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 26), 320)));
    // 0x118a7c: 0x7b550150  lq          $s5, 0x150($k0)
    ctx->pc = 0x118a7cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 26), 336)));
    // 0x118a80: 0x7b560160  lq          $s6, 0x160($k0)
    ctx->pc = 0x118a80u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 26), 352)));
    // 0x118a84: 0x7b570170  lq          $s7, 0x170($k0)
    ctx->pc = 0x118a84u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 26), 368)));
    // 0x118a88: 0x7b580180  lq          $t8, 0x180($k0)
    ctx->pc = 0x118a88u;
    SET_GPR_VEC(ctx, 24, READ128(ADD32(GPR_U32(ctx, 26), 384)));
    // 0x118a8c: 0x7b590190  lq          $t9, 0x190($k0)
    ctx->pc = 0x118a8cu;
    SET_GPR_VEC(ctx, 25, READ128(ADD32(GPR_U32(ctx, 26), 400)));
    // 0x118a90: 0x7b5c01c0  lq          $gp, 0x1C0($k0)
    ctx->pc = 0x118a90u;
    SET_GPR_VEC(ctx, 28, READ128(ADD32(GPR_U32(ctx, 26), 448)));
    // 0x118a94: 0x7b5d01d0  lq          $sp, 0x1D0($k0)
    ctx->pc = 0x118a94u;
    SET_GPR_VEC(ctx, 29, READ128(ADD32(GPR_U32(ctx, 26), 464)));
    // 0x118a98: 0x7b5e01e0  lq          $fp, 0x1E0($k0)
    ctx->pc = 0x118a98u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 26), 480)));
    // 0x118a9c: 0x7b5f01f0  lq          $ra, 0x1F0($k0)
    ctx->pc = 0x118a9cu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 26), 496)));
    // 0x118aa0: 0x401a6000  mfc0        $k0, Status
    ctx->pc = 0x118aa0u;
    SET_GPR_S32(ctx, 26, (int32_t)ctx->cop0_status);
    // 0x118aa4: 0x375a0013  ori         $k0, $k0, 0x13
    ctx->pc = 0x118aa4u;
    SET_GPR_U64(ctx, 26, GPR_U64(ctx, 26) | (uint64_t)(uint16_t)19);
    // 0x118aa8: 0x409a6000  mtc0        $k0, Status
    ctx->pc = 0x118aa8u;
    ctx->cop0_status = GPR_U32(ctx, 26) & 0xFF57FFFF;
    // 0x118aac: 0x40f  sync.p
    ctx->pc = 0x118aacu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x118ab0: 0x42000018  eret
    ctx->pc = 0x118ab0u;
    if (ctx->cop0_status & 0x4) { 
    ctx->pc = ctx->cop0_errorepc; 
    ctx->cop0_status &= ~0x4; 
} else { 
    ctx->pc = ctx->cop0_epc; 
    ctx->cop0_status &= ~0x2; 
} 
runtime->clearLLBit(ctx); 
return;
}
