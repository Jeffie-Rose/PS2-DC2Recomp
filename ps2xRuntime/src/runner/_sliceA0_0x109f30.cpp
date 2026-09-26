#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _sliceA0
// Address: 0x109f30 - 0x10a05c
void _sliceA0_0x109f30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("_sliceA0_0x109f30");
#endif

    switch (ctx->pc) {
        case 0x109f68u: goto label_109f68;
        case 0x109f74u: goto label_109f74;
        case 0x109f98u: goto label_109f98;
        case 0x109fa8u: goto label_109fa8;
        case 0x109fb0u: goto label_109fb0;
        case 0x109fbcu: goto label_109fbc;
        case 0x109fdcu: goto label_109fdc;
        default: break;
    }

    ctx->pc = 0x109f30u;

    // 0x109f30: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x109f30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x109f34: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x109f34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x109f38: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x109f38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x109f3c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x109f3cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x109f40: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x109f40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x109f44: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x109f44u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x109f48: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x109f48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x109f4c: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x109f4cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x109f50: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x109f50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x109f54: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x109f54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x109f58: 0x100882d  daddu       $s1, $t0, $zero
    ctx->pc = 0x109f58u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x109f5c: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x109f5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x109f60: 0xc042c5e  jal         func_10B178
    ctx->pc = 0x109F60u;
    SET_GPR_U32(ctx, 31, 0x109F68u);
    ctx->pc = 0x109F64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x109F60u;
            // 0x109f64: 0xae00011c  sw          $zero, 0x11C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 284), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10B178u;
    if (runtime->hasFunction(0x10B178u)) {
        auto targetFn = runtime->lookupFunction(0x10B178u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x109F68u; }
        if (ctx->pc != 0x109F68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _nextStartCode_0x10b178(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x109F68u; }
        if (ctx->pc != 0x109F68u) { return; }
    }
    ctx->pc = 0x109F68u;
label_109f68:
    // 0x109f68: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x109f68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x109f6c: 0xc042b8c  jal         func_10AE30
    ctx->pc = 0x109F6Cu;
    SET_GPR_U32(ctx, 31, 0x109F74u);
    ctx->pc = 0x109F70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x109F6Cu;
            // 0x109f70: 0x24050020  addiu       $a1, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10AE30u;
    if (runtime->hasFunction(0x10AE30u)) {
        auto targetFn = runtime->lookupFunction(0x10AE30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x109F74u; }
        if (ctx->pc != 0x109F74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _peepBit_0x10ae30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x109F74u; }
        if (ctx->pc != 0x109F74u) { return; }
    }
    ctx->pc = 0x109F74u;
label_109f74:
    // 0x109f74: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x109f74u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x109f78: 0x2642feff  addiu       $v0, $s2, -0x101
    ctx->pc = 0x109f78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967039));
    // 0x109f7c: 0x2c4200af  sltiu       $v0, $v0, 0xAF
    ctx->pc = 0x109f7cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)175) ? 1 : 0);
    // 0x109f80: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x109F80u;
    {
        const bool branch_taken_0x109f80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x109F84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x109F80u;
            // 0x109f84: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x109f80) {
            ctx->pc = 0x109FA0u;
            goto label_109fa0;
        }
    }
    ctx->pc = 0x109F88u;
    // 0x109f88: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x109f88u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
    // 0x109f8c: 0x24a50680  addiu       $a1, $a1, 0x680
    ctx->pc = 0x109f8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1664));
    // 0x109f90: 0xc043b56  jal         func_10ED58
    ctx->pc = 0x109F90u;
    SET_GPR_U32(ctx, 31, 0x109F98u);
    ctx->pc = 0x109F94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x109F90u;
            // 0x109f94: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10ED58u;
    if (runtime->hasFunction(0x10ED58u)) {
        auto targetFn = runtime->lookupFunction(0x10ED58u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x109F98u; }
        if (ctx->pc != 0x109F98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2__Error1_0x10ed58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x109F98u; }
        if (ctx->pc != 0x109F98u) { return; }
    }
    ctx->pc = 0x109F98u;
label_109f98:
    // 0x109f98: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x109F98u;
    {
        const bool branch_taken_0x109f98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x109F9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x109F98u;
            // 0x109f9c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x109f98) {
            ctx->pc = 0x10A038u;
            goto label_10a038;
        }
    }
    ctx->pc = 0x109FA0u;
label_109fa0:
    // 0x109fa0: 0xc042bce  jal         func_10AF38
    ctx->pc = 0x109FA0u;
    SET_GPR_U32(ctx, 31, 0x109FA8u);
    ctx->pc = 0x109FA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x109FA0u;
            // 0x109fa4: 0x24050020  addiu       $a1, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10AF38u;
    if (runtime->hasFunction(0x10AF38u)) {
        auto targetFn = runtime->lookupFunction(0x10AF38u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x109FA8u; }
        if (ctx->pc != 0x109FA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _flushBuf_0x10af38(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x109FA8u; }
        if (ctx->pc != 0x109FA8u) { return; }
    }
    ctx->pc = 0x109FA8u;
label_109fa8:
    // 0x109fa8: 0xc042c7e  jal         func_10B1F8
    ctx->pc = 0x109FA8u;
    SET_GPR_U32(ctx, 31, 0x109FB0u);
    ctx->pc = 0x109FACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x109FA8u;
            // 0x109fac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10B1F8u;
    if (runtime->hasFunction(0x10B1F8u)) {
        auto targetFn = runtime->lookupFunction(0x10B1F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x109FB0u; }
        if (ctx->pc != 0x109FB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _sliceB_0x10b1f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x109FB0u; }
        if (ctx->pc != 0x109FB0u) { return; }
    }
    ctx->pc = 0x109FB0u;
label_109fb0:
    // 0x109fb0: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x109fb0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x109fb4: 0xc042746  jal         func_109D18
    ctx->pc = 0x109FB4u;
    SET_GPR_U32(ctx, 31, 0x109FBCu);
    ctx->pc = 0x109FB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x109FB4u;
            // 0x109fb8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x109D18u;
    if (runtime->hasFunction(0x109D18u)) {
        auto targetFn = runtime->lookupFunction(0x109D18u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x109FBCu; }
        if (ctx->pc != 0x109FBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _mbAddressIncrement_0x109d18(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x109FBCu; }
        if (ctx->pc != 0x109FBCu) { return; }
    }
    ctx->pc = 0x109FBCu;
label_109fbc:
    // 0x109fbc: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x109fbcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x109fc0: 0xae860000  sw          $a2, 0x0($s4)
    ctx->pc = 0x109fc0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 6));
    // 0x109fc4: 0x8e02011c  lw          $v0, 0x11C($s0)
    ctx->pc = 0x109fc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 284)));
    // 0x109fc8: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x109FC8u;
    {
        const bool branch_taken_0x109fc8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x109FCCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x109FC8u;
            // 0x109fcc: 0x3c050036  lui         $a1, 0x36 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x109fc8) {
            ctx->pc = 0x109FE4u;
            goto label_109fe4;
        }
    }
    ctx->pc = 0x109FD0u;
    // 0x109fd0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x109fd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x109fd4: 0xc043b64  jal         func_10ED90
    ctx->pc = 0x109FD4u;
    SET_GPR_U32(ctx, 31, 0x109FDCu);
    ctx->pc = 0x109FD8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x109FD4u;
            // 0x109fd8: 0x24a506a8  addiu       $a1, $a1, 0x6A8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1704));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10ED90u;
    if (runtime->hasFunction(0x10ED90u)) {
        auto targetFn = runtime->lookupFunction(0x10ED90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x109FDCu; }
        if (ctx->pc != 0x109FDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2__Error_0x10ed90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x109FDCu; }
        if (ctx->pc != 0x109FDCu) { return; }
    }
    ctx->pc = 0x109FDCu;
label_109fdc:
    // 0x109fdc: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x109FDCu;
    {
        const bool branch_taken_0x109fdc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x109FE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x109FDCu;
            // 0x109fe0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x109fdc) {
            ctx->pc = 0x10A038u;
            goto label_10a038;
        }
    }
    ctx->pc = 0x109FE4u;
label_109fe4:
    // 0x109fe4: 0x324200ff  andi        $v0, $s2, 0xFF
    ctx->pc = 0x109fe4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)255);
    // 0x109fe8: 0x1319c0  sll         $v1, $s3, 7
    ctx->pc = 0x109fe8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 7));
    // 0x109fec: 0x8e04012c  lw          $a0, 0x12C($s0)
    ctx->pc = 0x109fecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 300)));
    // 0x109ff0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x109ff0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x109ff4: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x109ff4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x109ff8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x109ff8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x109ffc: 0x641018  mult        $v0, $v1, $a0
    ctx->pc = 0x109ffcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x10a000: 0x461821  addu        $v1, $v0, $a2
    ctx->pc = 0x10a000u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x10a004: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x10a004u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x10a008: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x10a008u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10a00c: 0xaea30000  sw          $v1, 0x0($s5)
    ctx->pc = 0x10a00cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 3));
    // 0x10a010: 0xae850000  sw          $a1, 0x0($s4)
    ctx->pc = 0x10a010u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 5));
    // 0x10a014: 0xae0501b0  sw          $a1, 0x1B0($s0)
    ctx->pc = 0x10a014u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 432), GPR_U32(ctx, 5));
    // 0x10a018: 0xae200008  sw          $zero, 0x8($s1)
    ctx->pc = 0x10a018u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
    // 0x10a01c: 0xae200014  sw          $zero, 0x14($s1)
    ctx->pc = 0x10a01cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 0));
    // 0x10a020: 0xae200010  sw          $zero, 0x10($s1)
    ctx->pc = 0x10a020u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 0));
    // 0x10a024: 0xae200004  sw          $zero, 0x4($s1)
    ctx->pc = 0x10a024u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
    // 0x10a028: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x10a028u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
    // 0x10a02c: 0xae20001c  sw          $zero, 0x1C($s1)
    ctx->pc = 0x10a02cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 0));
    // 0x10a030: 0xae200018  sw          $zero, 0x18($s1)
    ctx->pc = 0x10a030u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 0));
    // 0x10a034: 0xae20000c  sw          $zero, 0xC($s1)
    ctx->pc = 0x10a034u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 0));
label_10a038:
    // 0x10a038: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x10a038u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x10a03c: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x10a03cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x10a040: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x10a040u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x10a044: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x10a044u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x10a048: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x10a048u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x10a04c: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x10a04cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10a050: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x10a050u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10a054: 0x3e00008  jr          $ra
    ctx->pc = 0x10A054u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10A058u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10A054u;
            // 0x10a058: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x10A05Cu;
}
