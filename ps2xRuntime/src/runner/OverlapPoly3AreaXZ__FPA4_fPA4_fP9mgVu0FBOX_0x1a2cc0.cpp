#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: OverlapPoly3AreaXZ__FPA4_fPA4_fP9mgVu0FBOX
// Address: 0x1a2cc0 - 0x1a3298
void OverlapPoly3AreaXZ__FPA4_fPA4_fP9mgVu0FBOX_0x1a2cc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("OverlapPoly3AreaXZ__FPA4_fPA4_fP9mgVu0FBOX_0x1a2cc0");
#endif

    switch (ctx->pc) {
        case 0x1a2d8cu: goto label_1a2d8c;
        case 0x1a2db4u: goto label_1a2db4;
        case 0x1a2dccu: goto label_1a2dcc;
        case 0x1a2e08u: goto label_1a2e08;
        case 0x1a2e20u: goto label_1a2e20;
        case 0x1a2e30u: goto label_1a2e30;
        case 0x1a2f08u: goto label_1a2f08;
        case 0x1a2f64u: goto label_1a2f64;
        case 0x1a2f70u: goto label_1a2f70;
        case 0x1a3044u: goto label_1a3044;
        case 0x1a312cu: goto label_1a312c;
        case 0x1a3188u: goto label_1a3188;
        case 0x1a319cu: goto label_1a319c;
        case 0x1a31acu: goto label_1a31ac;
        case 0x1a31b8u: goto label_1a31b8;
        case 0x1a31d4u: goto label_1a31d4;
        case 0x1a3250u: goto label_1a3250;
        default: break;
    }

    ctx->pc = 0x1a2cc0u;

    // 0x1a2cc0: 0x27bdfd50  addiu       $sp, $sp, -0x2B0
    ctx->pc = 0x1a2cc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966608));
    // 0x1a2cc4: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1a2cc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1a2cc8: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x1a2cc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
    // 0x1a2ccc: 0x27ab0100  addiu       $t3, $sp, 0x100
    ctx->pc = 0x1a2cccu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x1a2cd0: 0x7fbe0090  sq          $fp, 0x90($sp)
    ctx->pc = 0x1a2cd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 30));
    // 0x1a2cd4: 0x27aa0110  addiu       $t2, $sp, 0x110
    ctx->pc = 0x1a2cd4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x1a2cd8: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x1a2cd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
    // 0x1a2cdc: 0x27a90120  addiu       $t1, $sp, 0x120
    ctx->pc = 0x1a2cdcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x1a2ce0: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x1a2ce0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
    // 0x1a2ce4: 0x27a80130  addiu       $t0, $sp, 0x130
    ctx->pc = 0x1a2ce4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    // 0x1a2ce8: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x1a2ce8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x1a2cec: 0x27a701e0  addiu       $a3, $sp, 0x1E0
    ctx->pc = 0x1a2cecu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
    // 0x1a2cf0: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x1a2cf0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x1a2cf4: 0x27a30200  addiu       $v1, $sp, 0x200
    ctx->pc = 0x1a2cf4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 512));
    // 0x1a2cf8: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x1a2cf8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x1a2cfc: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x1a2cfcu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a2d00: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x1a2d00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x1a2d04: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1a2d04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x1a2d08: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1a2d08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1a2d0c: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x1a2d0cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x1a2d10: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1a2d10u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a2d14: 0xafa600ec  sw          $a2, 0xEC($sp)
    ctx->pc = 0x1a2d14u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 236), GPR_U32(ctx, 6));
    // 0x1a2d18: 0xafa200b0  sw          $v0, 0xB0($sp)
    ctx->pc = 0x1a2d18u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 2));
    // 0x1a2d1c: 0x27a601f0  addiu       $a2, $sp, 0x1F0
    ctx->pc = 0x1a2d1cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 496));
    // 0x1a2d20: 0xafa500f0  sw          $a1, 0xF0($sp)
    ctx->pc = 0x1a2d20u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 240), GPR_U32(ctx, 5));
    // 0x1a2d24: 0x27a20210  addiu       $v0, $sp, 0x210
    ctx->pc = 0x1a2d24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 528));
    // 0x1a2d28: 0x788c0000  lq          $t4, 0x0($a0)
    ctx->pc = 0x1a2d28u;
    SET_GPR_VEC(ctx, 12, READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1a2d2c: 0xafa000c0  sw          $zero, 0xC0($sp)
    ctx->pc = 0x1a2d2cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 0));
    // 0x1a2d30: 0x7d6c0000  sq          $t4, 0x0($t3)
    ctx->pc = 0x1a2d30u;
    WRITE128(ADD32(GPR_U32(ctx, 11), 0), GPR_VEC(ctx, 12));
    // 0x1a2d34: 0xafa00104  sw          $zero, 0x104($sp)
    ctx->pc = 0x1a2d34u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 260), GPR_U32(ctx, 0));
    // 0x1a2d38: 0x788b0010  lq          $t3, 0x10($a0)
    ctx->pc = 0x1a2d38u;
    SET_GPR_VEC(ctx, 11, READ128(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1a2d3c: 0x7d4b0000  sq          $t3, 0x0($t2)
    ctx->pc = 0x1a2d3cu;
    WRITE128(ADD32(GPR_U32(ctx, 10), 0), GPR_VEC(ctx, 11));
    // 0x1a2d40: 0xafa00114  sw          $zero, 0x114($sp)
    ctx->pc = 0x1a2d40u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 276), GPR_U32(ctx, 0));
    // 0x1a2d44: 0x788a0020  lq          $t2, 0x20($a0)
    ctx->pc = 0x1a2d44u;
    SET_GPR_VEC(ctx, 10, READ128(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x1a2d48: 0x7d2a0000  sq          $t2, 0x0($t1)
    ctx->pc = 0x1a2d48u;
    WRITE128(ADD32(GPR_U32(ctx, 9), 0), GPR_VEC(ctx, 10));
    // 0x1a2d4c: 0xafa00124  sw          $zero, 0x124($sp)
    ctx->pc = 0x1a2d4cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 292), GPR_U32(ctx, 0));
    // 0x1a2d50: 0x78840000  lq          $a0, 0x0($a0)
    ctx->pc = 0x1a2d50u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1a2d54: 0x7d040000  sq          $a0, 0x0($t0)
    ctx->pc = 0x1a2d54u;
    WRITE128(ADD32(GPR_U32(ctx, 8), 0), GPR_VEC(ctx, 4));
    // 0x1a2d58: 0xafa00134  sw          $zero, 0x134($sp)
    ctx->pc = 0x1a2d58u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 308), GPR_U32(ctx, 0));
    // 0x1a2d5c: 0x78a40000  lq          $a0, 0x0($a1)
    ctx->pc = 0x1a2d5cu;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1a2d60: 0x7ce40000  sq          $a0, 0x0($a3)
    ctx->pc = 0x1a2d60u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), GPR_VEC(ctx, 4));
    // 0x1a2d64: 0xafa001e4  sw          $zero, 0x1E4($sp)
    ctx->pc = 0x1a2d64u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 484), GPR_U32(ctx, 0));
    // 0x1a2d68: 0x78a40010  lq          $a0, 0x10($a1)
    ctx->pc = 0x1a2d68u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x1a2d6c: 0x7cc40000  sq          $a0, 0x0($a2)
    ctx->pc = 0x1a2d6cu;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 4));
    // 0x1a2d70: 0xafa001f4  sw          $zero, 0x1F4($sp)
    ctx->pc = 0x1a2d70u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 500), GPR_U32(ctx, 0));
    // 0x1a2d74: 0x78a40020  lq          $a0, 0x20($a1)
    ctx->pc = 0x1a2d74u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 5), 32)));
    // 0x1a2d78: 0x7c640000  sq          $a0, 0x0($v1)
    ctx->pc = 0x1a2d78u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 4));
    // 0x1a2d7c: 0xafa00204  sw          $zero, 0x204($sp)
    ctx->pc = 0x1a2d7cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 516), GPR_U32(ctx, 0));
    // 0x1a2d80: 0x78a30000  lq          $v1, 0x0($a1)
    ctx->pc = 0x1a2d80u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1a2d84: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x1a2d84u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x1a2d88: 0xafa00214  sw          $zero, 0x214($sp)
    ctx->pc = 0x1a2d88u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 532), GPR_U32(ctx, 0));
label_1a2d8c:
    // 0x1a2d8c: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x1a2d8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1a2d90: 0x26e30001  addiu       $v1, $s7, 0x1
    ctx->pc = 0x1a2d90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
    // 0x1a2d94: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x1a2d94u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1a2d98: 0x27a40230  addiu       $a0, $sp, 0x230
    ctx->pc = 0x1a2d98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 560));
    // 0x1a2d9c: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x1a2d9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x1a2da0: 0x245401e0  addiu       $s4, $v0, 0x1E0
    ctx->pc = 0x1a2da0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 480));
    // 0x1a2da4: 0x7d1021  addu        $v0, $v1, $sp
    ctx->pc = 0x1a2da4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 29)));
    // 0x1a2da8: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x1a2da8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a2dac: 0xc041c3e  jal         func_1070F8
    ctx->pc = 0x1A2DACu;
    SET_GPR_U32(ctx, 31, 0x1A2DB4u);
    ctx->pc = 0x1A2DB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A2DACu;
            // 0x1a2db0: 0x244501e0  addiu       $a1, $v0, 0x1E0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 480));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1070F8u;
    if (runtime->hasFunction(0x1070F8u)) {
        auto targetFn = runtime->lookupFunction(0x1070F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A2DB4u; }
        if (ctx->pc != 0x1A2DB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0SubVector_0x1070f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A2DB4u; }
        if (ctx->pc != 0x1A2DB4u) { return; }
    }
    ctx->pc = 0x1A2DB4u;
label_1a2db4:
    // 0x1a2db4: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x1a2db4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1a2db8: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1a2db8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a2dbc: 0x2082a  slt         $at, $zero, $v0
    ctx->pc = 0x1a2dbcu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1a2dc0: 0x1020007e  beqz        $at, . + 4 + (0x7E << 2)
    ctx->pc = 0x1A2DC0u;
    {
        const bool branch_taken_0x1a2dc0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A2DC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A2DC0u;
            // 0x1a2dc4: 0xb02d  daddu       $s6, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a2dc0) {
            ctx->pc = 0x1A2FBCu;
            goto label_1a2fbc;
        }
    }
    ctx->pc = 0x1A2DC8u;
    // 0x1a2dc8: 0xf02d  daddu       $fp, $zero, $zero
    ctx->pc = 0x1a2dc8u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a2dcc:
    // 0x1a2dcc: 0x0  nop
    ctx->pc = 0x1a2dccu;
    // NOP
    // 0x1a2dd0: 0x1010c0  sll         $v0, $s0, 3
    ctx->pc = 0x1a2dd0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x1a2dd4: 0x501823  subu        $v1, $v0, $s0
    ctx->pc = 0x1a2dd4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1a2dd8: 0x27a40240  addiu       $a0, $sp, 0x240
    ctx->pc = 0x1a2dd8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 576));
    // 0x1a2ddc: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x1a2ddcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1a2de0: 0x26c20001  addiu       $v0, $s6, 0x1
    ctx->pc = 0x1a2de0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
    // 0x1a2de4: 0x7d1821  addu        $v1, $v1, $sp
    ctx->pc = 0x1a2de4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 29)));
    // 0x1a2de8: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1a2de8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1a2dec: 0x24630100  addiu       $v1, $v1, 0x100
    ctx->pc = 0x1a2decu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 256));
    // 0x1a2df0: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1a2df0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1a2df4: 0x7ea821  addu        $s5, $v1, $fp
    ctx->pc = 0x1a2df4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 30)));
    // 0x1a2df8: 0xafa200d0  sw          $v0, 0xD0($sp)
    ctx->pc = 0x1a2df8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 2));
    // 0x1a2dfc: 0x8fa500d0  lw          $a1, 0xD0($sp)
    ctx->pc = 0x1a2dfcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x1a2e00: 0xc041c3e  jal         func_1070F8
    ctx->pc = 0x1A2E00u;
    SET_GPR_U32(ctx, 31, 0x1A2E08u);
    ctx->pc = 0x1A2E04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A2E00u;
            // 0x1a2e04: 0x2a0302d  daddu       $a2, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1070F8u;
    if (runtime->hasFunction(0x1070F8u)) {
        auto targetFn = runtime->lookupFunction(0x1070F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A2E08u; }
        if (ctx->pc != 0x1A2E08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0SubVector_0x1070f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A2E08u; }
        if (ctx->pc != 0x1A2E08u) { return; }
    }
    ctx->pc = 0x1A2E08u;
label_1a2e08:
    // 0x1a2e08: 0x27a40250  addiu       $a0, $sp, 0x250
    ctx->pc = 0x1a2e08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 592));
    // 0x1a2e0c: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x1a2e0cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a2e10: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x1a2e10u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a2e14: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1a2e14u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a2e18: 0xc041c3e  jal         func_1070F8
    ctx->pc = 0x1A2E18u;
    SET_GPR_U32(ctx, 31, 0x1A2E20u);
    ctx->pc = 0x1A2E1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A2E18u;
            // 0x1a2e1c: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1070F8u;
    if (runtime->hasFunction(0x1070F8u)) {
        auto targetFn = runtime->lookupFunction(0x1070F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A2E20u; }
        if (ctx->pc != 0x1A2E20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0SubVector_0x1070f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A2E20u; }
        if (ctx->pc != 0x1A2E20u) { return; }
    }
    ctx->pc = 0x1A2E20u;
label_1a2e20:
    // 0x1a2e20: 0x8fa500d0  lw          $a1, 0xD0($sp)
    ctx->pc = 0x1a2e20u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x1a2e24: 0x27a40260  addiu       $a0, $sp, 0x260
    ctx->pc = 0x1a2e24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 608));
    // 0x1a2e28: 0xc041c3e  jal         func_1070F8
    ctx->pc = 0x1A2E28u;
    SET_GPR_U32(ctx, 31, 0x1A2E30u);
    ctx->pc = 0x1A2E2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A2E28u;
            // 0x1a2e2c: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1070F8u;
    if (runtime->hasFunction(0x1070F8u)) {
        auto targetFn = runtime->lookupFunction(0x1070F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A2E30u; }
        if (ctx->pc != 0x1A2E30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0SubVector_0x1070f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A2E30u; }
        if (ctx->pc != 0x1A2E30u) { return; }
    }
    ctx->pc = 0x1A2E30u;
label_1a2e30:
    // 0x1a2e30: 0x27a20258  addiu       $v0, $sp, 0x258
    ctx->pc = 0x1a2e30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 600));
    // 0x1a2e34: 0xc4430000  lwc1        $f3, 0x0($v0)
    ctx->pc = 0x1a2e34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1a2e38: 0xc7a40230  lwc1        $f4, 0x230($sp)
    ctx->pc = 0x1a2e38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 560)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x1a2e3c: 0xc7a10250  lwc1        $f1, 0x250($sp)
    ctx->pc = 0x1a2e3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 592)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1a2e40: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1a2e40u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1a2e44: 0x27a20238  addiu       $v0, $sp, 0x238
    ctx->pc = 0x1a2e44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 568));
    // 0x1a2e48: 0xc4420000  lwc1        $f2, 0x0($v0)
    ctx->pc = 0x1a2e48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1a2e4c: 0x46002107  neg.s       $f4, $f4
    ctx->pc = 0x1a2e4cu;
    ctx->f[4] = FPU_NEG_S(ctx->f[4]);
    // 0x1a2e50: 0x4603201a  mula.s      $f4, $f3
    ctx->pc = 0x1a2e50u;
    ctx->f[31] = FPU_MUL_S(ctx->f[4], ctx->f[3]);
    // 0x1a2e54: 0x4601105c  madd.s      $f1, $f2, $f1
    ctx->pc = 0x1a2e54u;
    ctx->f[1] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[1]));
    // 0x1a2e58: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1a2e58u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1a2e5c: 0x0  nop
    ctx->pc = 0x1a2e5cu;
    // NOP
    // 0x1a2e60: 0x4501000e  bc1t        . + 4 + (0xE << 2)
    ctx->pc = 0x1A2E60u;
    {
        const bool branch_taken_0x1a2e60 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1A2E64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A2E60u;
            // 0x1a2e64: 0x10102b  sltu        $v0, $zero, $s0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a2e60) {
            ctx->pc = 0x1A2E9Cu;
            goto label_1a2e9c;
        }
    }
    ctx->pc = 0x1A2E68u;
    // 0x1a2e68: 0x7aa50000  lq          $a1, 0x0($s5)
    ctx->pc = 0x1a2e68u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x1a2e6c: 0x38430001  xori        $v1, $v0, 0x1
    ctx->pc = 0x1a2e6cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x1a2e70: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x1a2e70u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a2e74: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x1a2e74u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1a2e78: 0x111100  sll         $v0, $s1, 4
    ctx->pc = 0x1a2e78u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
    // 0x1a2e7c: 0x418c0  sll         $v1, $a0, 3
    ctx->pc = 0x1a2e7cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x1a2e80: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1a2e80u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1a2e84: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x1a2e84u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1a2e88: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x1a2e88u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1a2e8c: 0x7d1821  addu        $v1, $v1, $sp
    ctx->pc = 0x1a2e8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 29)));
    // 0x1a2e90: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1a2e90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1a2e94: 0x24420100  addiu       $v0, $v0, 0x100
    ctx->pc = 0x1a2e94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 256));
    // 0x1a2e98: 0x7c450000  sq          $a1, 0x0($v0)
    ctx->pc = 0x1a2e98u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 5));
label_1a2e9c:
    // 0x1a2e9c: 0x0  nop
    ctx->pc = 0x1a2e9cu;
    // NOP
    // 0x1a2ea0: 0x27a20238  addiu       $v0, $sp, 0x238
    ctx->pc = 0x1a2ea0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 568));
    // 0x1a2ea4: 0xc7a40230  lwc1        $f4, 0x230($sp)
    ctx->pc = 0x1a2ea4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 560)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x1a2ea8: 0xc7a30268  lwc1        $f3, 0x268($sp)
    ctx->pc = 0x1a2ea8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 616)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1a2eac: 0xc4420000  lwc1        $f2, 0x0($v0)
    ctx->pc = 0x1a2eacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1a2eb0: 0xc7a10260  lwc1        $f1, 0x260($sp)
    ctx->pc = 0x1a2eb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 608)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1a2eb4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1a2eb4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1a2eb8: 0x46002107  neg.s       $f4, $f4
    ctx->pc = 0x1a2eb8u;
    ctx->f[4] = FPU_NEG_S(ctx->f[4]);
    // 0x1a2ebc: 0x4603201a  mula.s      $f4, $f3
    ctx->pc = 0x1a2ebcu;
    ctx->f[31] = FPU_MUL_S(ctx->f[4], ctx->f[3]);
    // 0x1a2ec0: 0x4601105c  madd.s      $f1, $f2, $f1
    ctx->pc = 0x1a2ec0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[1]));
    // 0x1a2ec4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1a2ec4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1a2ec8: 0x0  nop
    ctx->pc = 0x1a2ec8u;
    // NOP
    // 0x1a2ecc: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x1A2ECCu;
    {
        const bool branch_taken_0x1a2ecc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1a2ecc) {
            ctx->pc = 0x1A2ED8u;
            goto label_1a2ed8;
        }
    }
    ctx->pc = 0x1A2ED4u;
    // 0x1a2ed4: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x1a2ed4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1a2ed8:
    // 0x1a2ed8: 0x12400003  beqz        $s2, . + 4 + (0x3 << 2)
    ctx->pc = 0x1A2ED8u;
    {
        const bool branch_taken_0x1a2ed8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a2ed8) {
            ctx->pc = 0x1A2EE8u;
            goto label_1a2ee8;
        }
    }
    ctx->pc = 0x1A2EE0u;
    // 0x1a2ee0: 0x16600031  bnez        $s3, . + 4 + (0x31 << 2)
    ctx->pc = 0x1A2EE0u;
    {
        const bool branch_taken_0x1a2ee0 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a2ee0) {
            ctx->pc = 0x1A2FA8u;
            goto label_1a2fa8;
        }
    }
    ctx->pc = 0x1A2EE8u;
label_1a2ee8:
    // 0x1a2ee8: 0x16400003  bnez        $s2, . + 4 + (0x3 << 2)
    ctx->pc = 0x1A2EE8u;
    {
        const bool branch_taken_0x1a2ee8 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a2ee8) {
            ctx->pc = 0x1A2EF8u;
            goto label_1a2ef8;
        }
    }
    ctx->pc = 0x1A2EF0u;
    // 0x1a2ef0: 0x1260002d  beqz        $s3, . + 4 + (0x2D << 2)
    ctx->pc = 0x1A2EF0u;
    {
        const bool branch_taken_0x1a2ef0 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a2ef0) {
            ctx->pc = 0x1A2FA8u;
            goto label_1a2fa8;
        }
    }
    ctx->pc = 0x1A2EF8u;
label_1a2ef8:
    // 0x1a2ef8: 0x27a40250  addiu       $a0, $sp, 0x250
    ctx->pc = 0x1a2ef8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 592));
    // 0x1a2efc: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x1a2efcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a2f00: 0xc041c3e  jal         func_1070F8
    ctx->pc = 0x1A2F00u;
    SET_GPR_U32(ctx, 31, 0x1A2F08u);
    ctx->pc = 0x1A2F04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A2F00u;
            // 0x1a2f04: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1070F8u;
    if (runtime->hasFunction(0x1070F8u)) {
        auto targetFn = runtime->lookupFunction(0x1070F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A2F08u; }
        if (ctx->pc != 0x1A2F08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0SubVector_0x1070f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A2F08u; }
        if (ctx->pc != 0x1A2F08u) { return; }
    }
    ctx->pc = 0x1A2F08u;
label_1a2f08:
    // 0x1a2f08: 0x27a20238  addiu       $v0, $sp, 0x238
    ctx->pc = 0x1a2f08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 568));
    // 0x1a2f0c: 0xc4430000  lwc1        $f3, 0x0($v0)
    ctx->pc = 0x1a2f0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1a2f10: 0xc7a20240  lwc1        $f2, 0x240($sp)
    ctx->pc = 0x1a2f10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 576)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1a2f14: 0xc7a40230  lwc1        $f4, 0x230($sp)
    ctx->pc = 0x1a2f14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 560)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x1a2f18: 0xc7a10248  lwc1        $f1, 0x248($sp)
    ctx->pc = 0x1a2f18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 584)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1a2f1c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1a2f1cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1a2f20: 0x4603101a  mula.s      $f2, $f3
    ctx->pc = 0x1a2f20u;
    ctx->f[31] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
    // 0x1a2f24: 0x4604089d  msub.s      $f2, $f1, $f4
    ctx->pc = 0x1a2f24u;
    ctx->f[2] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[1], ctx->f[4]));
    // 0x1a2f28: 0x46020032  c.eq.s      $f0, $f2
    ctx->pc = 0x1a2f28u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1a2f2c: 0x0  nop
    ctx->pc = 0x1a2f2cu;
    // NOP
    // 0x1a2f30: 0x4501001d  bc1t        . + 4 + (0x1D << 2)
    ctx->pc = 0x1A2F30u;
    {
        const bool branch_taken_0x1a2f30 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1A2F34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A2F30u;
            // 0x1a2f34: 0x27a20258  addiu       $v0, $sp, 0x258 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 600));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a2f30) {
            ctx->pc = 0x1A2FA8u;
            goto label_1a2fa8;
        }
    }
    ctx->pc = 0x1A2F38u;
    // 0x1a2f38: 0x27a40270  addiu       $a0, $sp, 0x270
    ctx->pc = 0x1a2f38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 624));
    // 0x1a2f3c: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x1a2f3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1a2f40: 0x27a50240  addiu       $a1, $sp, 0x240
    ctx->pc = 0x1a2f40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 576));
    // 0x1a2f44: 0xc7a00250  lwc1        $f0, 0x250($sp)
    ctx->pc = 0x1a2f44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 592)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a2f48: 0x4601201a  mula.s      $f4, $f1
    ctx->pc = 0x1a2f48u;
    ctx->f[31] = FPU_MUL_S(ctx->f[4], ctx->f[1]);
    // 0x1a2f4c: 0x46001b1d  msub.s      $f12, $f3, $f0
    ctx->pc = 0x1a2f4cu;
    ctx->f[12] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[0]));
    // 0x1a2f50: 0x46026303  div.s       $f12, $f12, $f2
    ctx->pc = 0x1a2f50u;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[12], ctx->f[2]); }
    // 0x1a2f54: 0x0  nop
    ctx->pc = 0x1a2f54u;
    // NOP
    // 0x1a2f58: 0x0  nop
    ctx->pc = 0x1a2f58u;
    // NOP
    // 0x1a2f5c: 0xc041c4a  jal         func_107128
    ctx->pc = 0x1A2F5Cu;
    SET_GPR_U32(ctx, 31, 0x1A2F64u);
    ctx->pc = 0x107128u;
    if (runtime->hasFunction(0x107128u)) {
        auto targetFn = runtime->lookupFunction(0x107128u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A2F64u; }
        if (ctx->pc != 0x1A2F64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0ScaleVector_0x107128(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A2F64u; }
        if (ctx->pc != 0x1A2F64u) { return; }
    }
    ctx->pc = 0x1A2F64u;
label_1a2f64:
    // 0x1a2f64: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x1a2f64u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a2f68: 0xc04bcf4  jal         func_12F3D0
    ctx->pc = 0x1A2F68u;
    SET_GPR_U32(ctx, 31, 0x1A2F70u);
    ctx->pc = 0x1A2F6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A2F68u;
            // 0x1a2f6c: 0x27a40270  addiu       $a0, $sp, 0x270 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 624));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12F3D0u;
    if (runtime->hasFunction(0x12F3D0u)) {
        auto targetFn = runtime->lookupFunction(0x12F3D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A2F70u; }
        if (ctx->pc != 0x1A2F70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgAddVector__FPfPf_0x12f3d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A2F70u; }
        if (ctx->pc != 0x1A2F70u) { return; }
    }
    ctx->pc = 0x1A2F70u;
label_1a2f70:
    // 0x1a2f70: 0x27a30270  addiu       $v1, $sp, 0x270
    ctx->pc = 0x1a2f70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 624));
    // 0x1a2f74: 0x10102b  sltu        $v0, $zero, $s0
    ctx->pc = 0x1a2f74u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x1a2f78: 0x78650000  lq          $a1, 0x0($v1)
    ctx->pc = 0x1a2f78u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1a2f7c: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x1a2f7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x1a2f80: 0x304400ff  andi        $a0, $v0, 0xFF
    ctx->pc = 0x1a2f80u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1a2f84: 0x111100  sll         $v0, $s1, 4
    ctx->pc = 0x1a2f84u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
    // 0x1a2f88: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1a2f88u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1a2f8c: 0x418c0  sll         $v1, $a0, 3
    ctx->pc = 0x1a2f8cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x1a2f90: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x1a2f90u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1a2f94: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x1a2f94u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1a2f98: 0x7d1821  addu        $v1, $v1, $sp
    ctx->pc = 0x1a2f98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 29)));
    // 0x1a2f9c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1a2f9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1a2fa0: 0x24420100  addiu       $v0, $v0, 0x100
    ctx->pc = 0x1a2fa0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 256));
    // 0x1a2fa4: 0x7c450000  sq          $a1, 0x0($v0)
    ctx->pc = 0x1a2fa4u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 5));
label_1a2fa8:
    // 0x1a2fa8: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x1a2fa8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1a2fac: 0x26d60001  addiu       $s6, $s6, 0x1
    ctx->pc = 0x1a2facu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
    // 0x1a2fb0: 0x2c2102a  slt         $v0, $s6, $v0
    ctx->pc = 0x1a2fb0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 22) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1a2fb4: 0x1440ff85  bnez        $v0, . + 4 + (-0x7B << 2)
    ctx->pc = 0x1A2FB4u;
    {
        const bool branch_taken_0x1a2fb4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A2FB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A2FB4u;
            // 0x1a2fb8: 0x27de0010  addiu       $fp, $fp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a2fb4) {
            ctx->pc = 0x1A2DCCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1a2dcc;
        }
    }
    ctx->pc = 0x1A2FBCu;
label_1a2fbc:
    // 0x1a2fbc: 0x0  nop
    ctx->pc = 0x1a2fbcu;
    // NOP
    // 0x1a2fc0: 0x10102b  sltu        $v0, $zero, $s0
    ctx->pc = 0x1a2fc0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x1a2fc4: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x1a2fc4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x1a2fc8: 0xafb100b0  sw          $s1, 0xB0($sp)
    ctx->pc = 0x1a2fc8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 17));
    // 0x1a2fcc: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x1a2fccu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1a2fd0: 0x111900  sll         $v1, $s1, 4
    ctx->pc = 0x1a2fd0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
    // 0x1a2fd4: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x1a2fd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1a2fd8: 0x1020c0  sll         $a0, $s0, 3
    ctx->pc = 0x1a2fd8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x1a2fdc: 0x26f70001  addiu       $s7, $s7, 0x1
    ctx->pc = 0x1a2fdcu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
    // 0x1a2fe0: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x1a2fe0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x1a2fe4: 0xafa200c0  sw          $v0, 0xC0($sp)
    ctx->pc = 0x1a2fe4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 2));
    // 0x1a2fe8: 0x901023  subu        $v0, $a0, $s0
    ctx->pc = 0x1a2fe8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    // 0x1a2fec: 0x22100  sll         $a0, $v0, 4
    ctx->pc = 0x1a2fecu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1a2ff0: 0x9d2021  addu        $a0, $a0, $sp
    ctx->pc = 0x1a2ff0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 29)));
    // 0x1a2ff4: 0x2ae20003  slti        $v0, $s7, 0x3
    ctx->pc = 0x1a2ff4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 23) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x1a2ff8: 0x24930100  addiu       $s3, $a0, 0x100
    ctx->pc = 0x1a2ff8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 4), 256));
    // 0x1a2ffc: 0x7a640000  lq          $a0, 0x0($s3)
    ctx->pc = 0x1a2ffcu;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1a3000: 0x2631821  addu        $v1, $s3, $v1
    ctx->pc = 0x1a3000u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
    // 0x1a3004: 0x1440ff61  bnez        $v0, . + 4 + (-0x9F << 2)
    ctx->pc = 0x1A3004u;
    {
        const bool branch_taken_0x1a3004 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A3008u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A3004u;
            // 0x1a3008: 0x7c640000  sq          $a0, 0x0($v1) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a3004) {
            ctx->pc = 0x1A2D8Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1a2d8c;
        }
    }
    ctx->pc = 0x1A300Cu;
    // 0x1a300c: 0x2a210003  slti        $at, $s1, 0x3
    ctx->pc = 0x1a300cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x1a3010: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x1A3010u;
    {
        const bool branch_taken_0x1a3010 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a3010) {
            ctx->pc = 0x1A3024u;
            goto label_1a3024;
        }
    }
    ctx->pc = 0x1A3018u;
    // 0x1a3018: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1a3018u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1a301c: 0x10000092  b           . + 4 + (0x92 << 2)
    ctx->pc = 0x1A301Cu;
    {
        const bool branch_taken_0x1a301c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A3020u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A301Cu;
            // 0x1a3020: 0xdfbf00a0  ld          $ra, 0xA0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a301c) {
            ctx->pc = 0x1A3268u;
            goto label_1a3268;
        }
    }
    ctx->pc = 0x1A3024u;
label_1a3024:
    // 0x1a3024: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x1a3024u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x1a3028: 0x11082a  slt         $at, $zero, $s1
    ctx->pc = 0x1a3028u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x1a302c: 0x1020004c  beqz        $at, . + 4 + (0x4C << 2)
    ctx->pc = 0x1A302Cu;
    {
        const bool branch_taken_0x1a302c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A3030u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A302Cu;
            // 0x1a3030: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a302c) {
            ctx->pc = 0x1A3160u;
            goto label_1a3160;
        }
    }
    ctx->pc = 0x1A3034u;
    // 0x1a3034: 0x2a210009  slti        $at, $s1, 0x9
    ctx->pc = 0x1a3034u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)9) ? 1 : 0);
    // 0x1a3038: 0x14200039  bnez        $at, . + 4 + (0x39 << 2)
    ctx->pc = 0x1A3038u;
    {
        const bool branch_taken_0x1a3038 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A303Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A3038u;
            // 0x1a303c: 0x2624fff8  addiu       $a0, $s1, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967288));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a3038) {
            ctx->pc = 0x1A3120u;
            goto label_1a3120;
        }
    }
    ctx->pc = 0x1A3040u;
    // 0x1a3040: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1a3040u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a3044:
    // 0x1a3044: 0x2653021  addu        $a2, $s3, $a1
    ctx->pc = 0x1a3044u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 5)));
    // 0x1a3048: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x1a3048u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x1a304c: 0xc4c00000  lwc1        $f0, 0x0($a2)
    ctx->pc = 0x1a304cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a3050: 0x64102a  slt         $v0, $v1, $a0
    ctx->pc = 0x1a3050u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x1a3054: 0xc4c20018  lwc1        $f2, 0x18($a2)
    ctx->pc = 0x1a3054u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1a3058: 0x24a50080  addiu       $a1, $a1, 0x80
    ctx->pc = 0x1a3058u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 128));
    // 0x1a305c: 0xc4c30010  lwc1        $f3, 0x10($a2)
    ctx->pc = 0x1a305cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1a3060: 0xc4c10008  lwc1        $f1, 0x8($a2)
    ctx->pc = 0x1a3060u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1a3064: 0xc4c40028  lwc1        $f4, 0x28($a2)
    ctx->pc = 0x1a3064u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x1a3068: 0xc4c50020  lwc1        $f5, 0x20($a2)
    ctx->pc = 0x1a3068u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x1a306c: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x1a306cu;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x1a3070: 0x4602001a  mula.s      $f0, $f2
    ctx->pc = 0x1a3070u;
    ctx->f[31] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x1a3074: 0xc4c60038  lwc1        $f6, 0x38($a2)
    ctx->pc = 0x1a3074u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x1a3078: 0x4601185c  madd.s      $f1, $f3, $f1
    ctx->pc = 0x1a3078u;
    ctx->f[1] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[1]));
    // 0x1a307c: 0x46001807  neg.s       $f0, $f3
    ctx->pc = 0x1a307cu;
    ctx->f[0] = FPU_NEG_S(ctx->f[3]);
    // 0x1a3080: 0x4601a500  add.s       $f20, $f20, $f1
    ctx->pc = 0x1a3080u;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[1]);
    // 0x1a3084: 0x4604001a  mula.s      $f0, $f4
    ctx->pc = 0x1a3084u;
    ctx->f[31] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x1a3088: 0x4602281c  madd.s      $f0, $f5, $f2
    ctx->pc = 0x1a3088u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[5], ctx->f[2]));
    // 0x1a308c: 0x4600a500  add.s       $f20, $f20, $f0
    ctx->pc = 0x1a308cu;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
    // 0x1a3090: 0x46002887  neg.s       $f2, $f5
    ctx->pc = 0x1a3090u;
    ctx->f[2] = FPU_NEG_S(ctx->f[5]);
    // 0x1a3094: 0xc4c70030  lwc1        $f7, 0x30($a2)
    ctx->pc = 0x1a3094u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x1a3098: 0x4606101a  mula.s      $f2, $f6
    ctx->pc = 0x1a3098u;
    ctx->f[31] = FPU_MUL_S(ctx->f[2], ctx->f[6]);
    // 0x1a309c: 0xc4c80048  lwc1        $f8, 0x48($a2)
    ctx->pc = 0x1a309cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x1a30a0: 0xc4c30040  lwc1        $f3, 0x40($a2)
    ctx->pc = 0x1a30a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1a30a4: 0xc4c90058  lwc1        $f9, 0x58($a2)
    ctx->pc = 0x1a30a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
    // 0x1a30a8: 0xc4ca0050  lwc1        $f10, 0x50($a2)
    ctx->pc = 0x1a30a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[10] = f; }
    // 0x1a30ac: 0x4604389c  madd.s      $f2, $f7, $f4
    ctx->pc = 0x1a30acu;
    ctx->f[2] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[7], ctx->f[4]));
    // 0x1a30b0: 0x4602a500  add.s       $f20, $f20, $f2
    ctx->pc = 0x1a30b0u;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[2]);
    // 0x1a30b4: 0x46003887  neg.s       $f2, $f7
    ctx->pc = 0x1a30b4u;
    ctx->f[2] = FPU_NEG_S(ctx->f[7]);
    // 0x1a30b8: 0x4608101a  mula.s      $f2, $f8
    ctx->pc = 0x1a30b8u;
    ctx->f[31] = FPU_MUL_S(ctx->f[2], ctx->f[8]);
    // 0x1a30bc: 0x4606189c  madd.s      $f2, $f3, $f6
    ctx->pc = 0x1a30bcu;
    ctx->f[2] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[6]));
    // 0x1a30c0: 0x4602a500  add.s       $f20, $f20, $f2
    ctx->pc = 0x1a30c0u;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[2]);
    // 0x1a30c4: 0x46001887  neg.s       $f2, $f3
    ctx->pc = 0x1a30c4u;
    ctx->f[2] = FPU_NEG_S(ctx->f[3]);
    // 0x1a30c8: 0x4609101a  mula.s      $f2, $f9
    ctx->pc = 0x1a30c8u;
    ctx->f[31] = FPU_MUL_S(ctx->f[2], ctx->f[9]);
    // 0x1a30cc: 0x4608509c  madd.s      $f2, $f10, $f8
    ctx->pc = 0x1a30ccu;
    ctx->f[2] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[10], ctx->f[8]));
    // 0x1a30d0: 0x4602a500  add.s       $f20, $f20, $f2
    ctx->pc = 0x1a30d0u;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[2]);
    // 0x1a30d4: 0xc4cb0068  lwc1        $f11, 0x68($a2)
    ctx->pc = 0x1a30d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[11] = f; }
    // 0x1a30d8: 0x46005087  neg.s       $f2, $f10
    ctx->pc = 0x1a30d8u;
    ctx->f[2] = FPU_NEG_S(ctx->f[10]);
    // 0x1a30dc: 0xc4cc0060  lwc1        $f12, 0x60($a2)
    ctx->pc = 0x1a30dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1a30e0: 0xc4cd0078  lwc1        $f13, 0x78($a2)
    ctx->pc = 0x1a30e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1a30e4: 0xc4ce0070  lwc1        $f14, 0x70($a2)
    ctx->pc = 0x1a30e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x1a30e8: 0xc4c10088  lwc1        $f1, 0x88($a2)
    ctx->pc = 0x1a30e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1a30ec: 0x460b101a  mula.s      $f2, $f11
    ctx->pc = 0x1a30ecu;
    ctx->f[31] = FPU_MUL_S(ctx->f[2], ctx->f[11]);
    // 0x1a30f0: 0xc4c00080  lwc1        $f0, 0x80($a2)
    ctx->pc = 0x1a30f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a30f4: 0x4609609c  madd.s      $f2, $f12, $f9
    ctx->pc = 0x1a30f4u;
    ctx->f[2] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[12], ctx->f[9]));
    // 0x1a30f8: 0x4602a500  add.s       $f20, $f20, $f2
    ctx->pc = 0x1a30f8u;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[2]);
    // 0x1a30fc: 0x46006087  neg.s       $f2, $f12
    ctx->pc = 0x1a30fcu;
    ctx->f[2] = FPU_NEG_S(ctx->f[12]);
    // 0x1a3100: 0x460d101a  mula.s      $f2, $f13
    ctx->pc = 0x1a3100u;
    ctx->f[31] = FPU_MUL_S(ctx->f[2], ctx->f[13]);
    // 0x1a3104: 0x460b709c  madd.s      $f2, $f14, $f11
    ctx->pc = 0x1a3104u;
    ctx->f[2] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[14], ctx->f[11]));
    // 0x1a3108: 0x4602a500  add.s       $f20, $f20, $f2
    ctx->pc = 0x1a3108u;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[2]);
    // 0x1a310c: 0x46007087  neg.s       $f2, $f14
    ctx->pc = 0x1a310cu;
    ctx->f[2] = FPU_NEG_S(ctx->f[14]);
    // 0x1a3110: 0x4601101a  mula.s      $f2, $f1
    ctx->pc = 0x1a3110u;
    ctx->f[31] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x1a3114: 0x460d001c  madd.s      $f0, $f0, $f13
    ctx->pc = 0x1a3114u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[0], ctx->f[13]));
    // 0x1a3118: 0x1440ffca  bnez        $v0, . + 4 + (-0x36 << 2)
    ctx->pc = 0x1A3118u;
    {
        const bool branch_taken_0x1a3118 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A311Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A3118u;
            // 0x1a311c: 0x4600a500  add.s       $f20, $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a3118) {
            ctx->pc = 0x1A3044u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1a3044;
        }
    }
    ctx->pc = 0x1A3120u;
label_1a3120:
    // 0x1a3120: 0x71082a  slt         $at, $v1, $s1
    ctx->pc = 0x1a3120u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x1a3124: 0x1020000e  beqz        $at, . + 4 + (0xE << 2)
    ctx->pc = 0x1A3124u;
    {
        const bool branch_taken_0x1a3124 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A3128u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A3124u;
            // 0x1a3128: 0x32100  sll         $a0, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a3124) {
            ctx->pc = 0x1A3160u;
            goto label_1a3160;
        }
    }
    ctx->pc = 0x1A312Cu;
label_1a312c:
    // 0x1a312c: 0x2642821  addu        $a1, $s3, $a0
    ctx->pc = 0x1a312cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
    // 0x1a3130: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1a3130u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1a3134: 0xc4a30000  lwc1        $f3, 0x0($a1)
    ctx->pc = 0x1a3134u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1a3138: 0x71102a  slt         $v0, $v1, $s1
    ctx->pc = 0x1a3138u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x1a313c: 0xc4a20018  lwc1        $f2, 0x18($a1)
    ctx->pc = 0x1a313cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1a3140: 0x24840010  addiu       $a0, $a0, 0x10
    ctx->pc = 0x1a3140u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x1a3144: 0xc4a10010  lwc1        $f1, 0x10($a1)
    ctx->pc = 0x1a3144u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1a3148: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x1a3148u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a314c: 0x460018c7  neg.s       $f3, $f3
    ctx->pc = 0x1a314cu;
    ctx->f[3] = FPU_NEG_S(ctx->f[3]);
    // 0x1a3150: 0x4602181a  mula.s      $f3, $f2
    ctx->pc = 0x1a3150u;
    ctx->f[31] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x1a3154: 0x4600081c  madd.s      $f0, $f1, $f0
    ctx->pc = 0x1a3154u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[1], ctx->f[0]));
    // 0x1a3158: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x1A3158u;
    {
        const bool branch_taken_0x1a3158 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A315Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A3158u;
            // 0x1a315c: 0x4600a500  add.s       $f20, $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a3158) {
            ctx->pc = 0x1A312Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1a312c;
        }
    }
    ctx->pc = 0x1A3160u;
label_1a3160:
    // 0x1a3160: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x1a3160u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x1a3164: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1a3164u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1a3168: 0x8fa200ec  lw          $v0, 0xEC($sp)
    ctx->pc = 0x1a3168u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 236)));
    // 0x1a316c: 0x1040003c  beqz        $v0, . + 4 + (0x3C << 2)
    ctx->pc = 0x1A316Cu;
    {
        const bool branch_taken_0x1a316c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A3170u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A316Cu;
            // 0x1a3170: 0x4600a502  mul.s       $f20, $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a316c) {
            ctx->pc = 0x1A3260u;
            goto label_1a3260;
        }
    }
    ctx->pc = 0x1A3174u;
    // 0x1a3174: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x1a3174u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x1a3178: 0x27a40280  addiu       $a0, $sp, 0x280
    ctx->pc = 0x1a3178u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 640));
    // 0x1a317c: 0x24450010  addiu       $a1, $v0, 0x10
    ctx->pc = 0x1a317cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x1a3180: 0xc041c3e  jal         func_1070F8
    ctx->pc = 0x1A3180u;
    SET_GPR_U32(ctx, 31, 0x1A3188u);
    ctx->pc = 0x1A3184u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A3180u;
            // 0x1a3184: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1070F8u;
    if (runtime->hasFunction(0x1070F8u)) {
        auto targetFn = runtime->lookupFunction(0x1070F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A3188u; }
        if (ctx->pc != 0x1A3188u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0SubVector_0x1070f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A3188u; }
        if (ctx->pc != 0x1A3188u) { return; }
    }
    ctx->pc = 0x1A3188u;
label_1a3188:
    // 0x1a3188: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x1a3188u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x1a318c: 0x27a40290  addiu       $a0, $sp, 0x290
    ctx->pc = 0x1a318cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 656));
    // 0x1a3190: 0x24450020  addiu       $a1, $v0, 0x20
    ctx->pc = 0x1a3190u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x1a3194: 0xc041c3e  jal         func_1070F8
    ctx->pc = 0x1A3194u;
    SET_GPR_U32(ctx, 31, 0x1A319Cu);
    ctx->pc = 0x1A3198u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A3194u;
            // 0x1a3198: 0x24460010  addiu       $a2, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1070F8u;
    if (runtime->hasFunction(0x1070F8u)) {
        auto targetFn = runtime->lookupFunction(0x1070F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A319Cu; }
        if (ctx->pc != 0x1A319Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0SubVector_0x1070f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A319Cu; }
        if (ctx->pc != 0x1A319Cu) { return; }
    }
    ctx->pc = 0x1A319Cu;
label_1a319c:
    // 0x1a319c: 0x27a402a0  addiu       $a0, $sp, 0x2A0
    ctx->pc = 0x1a319cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 672));
    // 0x1a31a0: 0x27a50280  addiu       $a1, $sp, 0x280
    ctx->pc = 0x1a31a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 640));
    // 0x1a31a4: 0xc041bce  jal         func_106F38
    ctx->pc = 0x1A31A4u;
    SET_GPR_U32(ctx, 31, 0x1A31ACu);
    ctx->pc = 0x1A31A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A31A4u;
            // 0x1a31a8: 0x27a60290  addiu       $a2, $sp, 0x290 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 656));
        ctx->in_delay_slot = false;
    ctx->pc = 0x106F38u;
    if (runtime->hasFunction(0x106F38u)) {
        auto targetFn = runtime->lookupFunction(0x106F38u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A31ACu; }
        if (ctx->pc != 0x1A31ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0OuterProduct_0x106f38(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A31ACu; }
        if (ctx->pc != 0x1A31ACu) { return; }
    }
    ctx->pc = 0x1A31ACu;
label_1a31ac:
    // 0x1a31ac: 0x8fa500f0  lw          $a1, 0xF0($sp)
    ctx->pc = 0x1a31acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x1a31b0: 0xc041bd6  jal         func_106F58
    ctx->pc = 0x1A31B0u;
    SET_GPR_U32(ctx, 31, 0x1A31B8u);
    ctx->pc = 0x1A31B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A31B0u;
            // 0x1a31b4: 0x27a402a0  addiu       $a0, $sp, 0x2A0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 672));
        ctx->in_delay_slot = false;
    ctx->pc = 0x106F58u;
    if (runtime->hasFunction(0x106F58u)) {
        auto targetFn = runtime->lookupFunction(0x106F58u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A31B8u; }
        if (ctx->pc != 0x1A31B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0InnerProduct_0x106f58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A31B8u; }
        if (ctx->pc != 0x1A31B8u) { return; }
    }
    ctx->pc = 0x1A31B8u;
label_1a31b8:
    // 0x1a31b8: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x1a31b8u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x1a31bc: 0x27b402ac  addiu       $s4, $sp, 0x2AC
    ctx->pc = 0x1a31bcu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 684));
    // 0x1a31c0: 0x11082a  slt         $at, $zero, $s1
    ctx->pc = 0x1a31c0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x1a31c4: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1a31c4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a31c8: 0x10200025  beqz        $at, . + 4 + (0x25 << 2)
    ctx->pc = 0x1A31C8u;
    {
        const bool branch_taken_0x1a31c8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A31CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A31C8u;
            // 0x1a31cc: 0xe6800000  swc1        $f0, 0x0($s4) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a31c8) {
            ctx->pc = 0x1A3260u;
            goto label_1a3260;
        }
    }
    ctx->pc = 0x1A31D0u;
    // 0x1a31d0: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1a31d0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a31d4:
    // 0x1a31d4: 0x2724021  addu        $t0, $s3, $s2
    ctx->pc = 0x1a31d4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 18)));
    // 0x1a31d8: 0x27a20220  addiu       $v0, $sp, 0x220
    ctx->pc = 0x1a31d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 544));
    // 0x1a31dc: 0x79030000  lq          $v1, 0x0($t0)
    ctx->pc = 0x1a31dcu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1a31e0: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x1a31e0u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x1a31e4: 0xc7a50220  lwc1        $f5, 0x220($sp)
    ctx->pc = 0x1a31e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 544)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x1a31e8: 0xc7a402a0  lwc1        $f4, 0x2A0($sp)
    ctx->pc = 0x1a31e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 672)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x1a31ec: 0xc7a30228  lwc1        $f3, 0x228($sp)
    ctx->pc = 0x1a31ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 552)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1a31f0: 0xc7a202a8  lwc1        $f2, 0x2A8($sp)
    ctx->pc = 0x1a31f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 680)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1a31f4: 0xc6810000  lwc1        $f1, 0x0($s4)
    ctx->pc = 0x1a31f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1a31f8: 0xc7a002a4  lwc1        $f0, 0x2A4($sp)
    ctx->pc = 0x1a31f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 676)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a31fc: 0x4604281a  mula.s      $f5, $f4
    ctx->pc = 0x1a31fcu;
    ctx->f[31] = FPU_MUL_S(ctx->f[5], ctx->f[4]);
    // 0x1a3200: 0x4602189c  madd.s      $f2, $f3, $f2
    ctx->pc = 0x1a3200u;
    ctx->f[2] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[2]));
    // 0x1a3204: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x1a3204u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x1a3208: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x1a3208u;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
    // 0x1a320c: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x1a320cu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x1a3210: 0x0  nop
    ctx->pc = 0x1a3210u;
    // NOP
    // 0x1a3214: 0x0  nop
    ctx->pc = 0x1a3214u;
    // NOP
    // 0x1a3218: 0x16000007  bnez        $s0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1A3218u;
    {
        const bool branch_taken_0x1a3218 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A321Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A3218u;
            // 0x1a321c: 0xe5000004  swc1        $f0, 0x4($t0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 4), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a3218) {
            ctx->pc = 0x1A3238u;
            goto label_1a3238;
        }
    }
    ctx->pc = 0x1A3220u;
    // 0x1a3220: 0x79030000  lq          $v1, 0x0($t0)
    ctx->pc = 0x1a3220u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1a3224: 0x8fa200ec  lw          $v0, 0xEC($sp)
    ctx->pc = 0x1a3224u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 236)));
    // 0x1a3228: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x1a3228u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x1a322c: 0x8fa200ec  lw          $v0, 0xEC($sp)
    ctx->pc = 0x1a322cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 236)));
    // 0x1a3230: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1A3230u;
    {
        const bool branch_taken_0x1a3230 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A3234u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A3230u;
            // 0x1a3234: 0x7c430010  sq          $v1, 0x10($v0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 2), 16), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a3230) {
            ctx->pc = 0x1A3250u;
            goto label_1a3250;
        }
    }
    ctx->pc = 0x1A3238u;
label_1a3238:
    // 0x1a3238: 0x8fa400ec  lw          $a0, 0xEC($sp)
    ctx->pc = 0x1a3238u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 236)));
    // 0x1a323c: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x1a323cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a3240: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x1a3240u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a3244: 0x24450010  addiu       $a1, $v0, 0x10
    ctx->pc = 0x1a3244u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x1a3248: 0xc04bd34  jal         func_12F4D0
    ctx->pc = 0x1A3248u;
    SET_GPR_U32(ctx, 31, 0x1A3250u);
    ctx->pc = 0x1A324Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A3248u;
            // 0x1a324c: 0xa0382d  daddu       $a3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12F4D0u;
    if (runtime->hasFunction(0x12F4D0u)) {
        auto targetFn = runtime->lookupFunction(0x12F4D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A3250u; }
        if (ctx->pc != 0x1A3250u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgVectorMaxMin__FPfPfPfPfPf_0x12f4d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A3250u; }
        if (ctx->pc != 0x1A3250u) { return; }
    }
    ctx->pc = 0x1A3250u;
label_1a3250:
    // 0x1a3250: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1a3250u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1a3254: 0x211102a  slt         $v0, $s0, $s1
    ctx->pc = 0x1a3254u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x1a3258: 0x1440ffde  bnez        $v0, . + 4 + (-0x22 << 2)
    ctx->pc = 0x1A3258u;
    {
        const bool branch_taken_0x1a3258 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A325Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A3258u;
            // 0x1a325c: 0x26520010  addiu       $s2, $s2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a3258) {
            ctx->pc = 0x1A31D4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1a31d4;
        }
    }
    ctx->pc = 0x1A3260u;
label_1a3260:
    // 0x1a3260: 0x4600a006  mov.s       $f0, $f20
    ctx->pc = 0x1a3260u;
    ctx->f[0] = FPU_MOV_S(ctx->f[20]);
    // 0x1a3264: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x1a3264u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_1a3268:
    // 0x1a3268: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x1a3268u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1a326c: 0x7bbe0090  lq          $fp, 0x90($sp)
    ctx->pc = 0x1a326cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1a3270: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x1a3270u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1a3274: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x1a3274u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1a3278: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x1a3278u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1a327c: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x1a327cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1a3280: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x1a3280u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1a3284: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x1a3284u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1a3288: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1a3288u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a328c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1a328cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a3290: 0x3e00008  jr          $ra
    ctx->pc = 0x1A3290u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A3294u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A3290u;
            // 0x1a3294: 0x27bd02b0  addiu       $sp, $sp, 0x2B0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 688));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1A3298u;
}
