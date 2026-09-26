#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: BookshelfMessageMake__FP6ClsMesiii
// Address: 0x236ea0 - 0x237020
void BookshelfMessageMake__FP6ClsMesiii_0x236ea0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("BookshelfMessageMake__FP6ClsMesiii_0x236ea0");
#endif

    switch (ctx->pc) {
        case 0x236edcu: goto label_236edc;
        case 0x236f08u: goto label_236f08;
        case 0x236f14u: goto label_236f14;
        case 0x236f20u: goto label_236f20;
        case 0x236f2cu: goto label_236f2c;
        case 0x236f38u: goto label_236f38;
        case 0x236f44u: goto label_236f44;
        case 0x236f50u: goto label_236f50;
        case 0x236fa0u: goto label_236fa0;
        case 0x236facu: goto label_236fac;
        case 0x236fc0u: goto label_236fc0;
        case 0x236fd4u: goto label_236fd4;
        case 0x236ffcu: goto label_236ffc;
        default: break;
    }

    ctx->pc = 0x236ea0u;

    // 0x236ea0: 0x27bdfef0  addiu       $sp, $sp, -0x110
    ctx->pc = 0x236ea0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967024));
    // 0x236ea4: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x236ea4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x236ea8: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x236ea8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x236eac: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x236eacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x236eb0: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x236eb0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x236eb4: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x236eb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x236eb8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x236eb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x236ebc: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x236ebcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x236ec0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x236ec0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x236ec4: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x236ec4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x236ec8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x236ec8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x236ecc: 0x1260004b  beqz        $s3, . + 4 + (0x4B << 2)
    ctx->pc = 0x236ECCu;
    {
        const bool branch_taken_0x236ecc = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x236ED0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x236ECCu;
            // 0x236ed0: 0xe0882d  daddu       $s1, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x236ecc) {
            ctx->pc = 0x236FFCu;
            goto label_236ffc;
        }
    }
    ctx->pc = 0x236ED4u;
    // 0x236ed4: 0xc065af8  jal         func_196BE0
    ctx->pc = 0x236ED4u;
    SET_GPR_U32(ctx, 31, 0x236EDCu);
    ctx->pc = 0x236ED8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x236ED4u;
            // 0x236ed8: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x196BE0u;
    if (runtime->hasFunction(0x196BE0u)) {
        auto targetFn = runtime->lookupFunction(0x196BE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x236EDCu; }
        if (ctx->pc != 0x236EDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetUserDataMan__Fv_0x196be0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x236EDCu; }
        if (ctx->pc != 0x236EDCu) { return; }
    }
    ctx->pc = 0x236EDCu;
label_236edc:
    // 0x236edc: 0x3c010004  lui         $at, 0x4
    ctx->pc = 0x236edcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4 << 16));
    // 0x236ee0: 0x410821  addu        $at, $v0, $at
    ctx->pc = 0x236ee0u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 1)));
    // 0x236ee4: 0x84344d96  lh          $s4, 0x4D96($at)
    ctx->pc = 0x236ee4u;
    SET_GPR_S32(ctx, 20, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 19862)));
    // 0x236ee8: 0x1680001b  bnez        $s4, . + 4 + (0x1B << 2)
    ctx->pc = 0x236EE8u;
    {
        const bool branch_taken_0x236ee8 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        ctx->pc = 0x236EECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x236EE8u;
            // 0x236eec: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x236ee8) {
            ctx->pc = 0x236F58u;
            goto label_236f58;
        }
    }
    ctx->pc = 0x236EF0u;
    // 0x236ef0: 0x15082a  slt         $at, $zero, $s5
    ctx->pc = 0x236ef0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 21)) ? 1 : 0);
    // 0x236ef4: 0x10200017  beqz        $at, . + 4 + (0x17 << 2)
    ctx->pc = 0x236EF4u;
    {
        const bool branch_taken_0x236ef4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x236EF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x236EF4u;
            // 0x236ef8: 0x24100bbb  addiu       $s0, $zero, 0xBBB (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 3003));
        ctx->in_delay_slot = false;
        if (branch_taken_0x236ef4) {
            ctx->pc = 0x236F54u;
            goto label_236f54;
        }
    }
    ctx->pc = 0x236EFCu;
    // 0x236efc: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x236efcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x236f00: 0xc080140  jal         func_200500
    ctx->pc = 0x236F00u;
    SET_GPR_U32(ctx, 31, 0x236F08u);
    ctx->pc = 0x236F04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x236F00u;
            // 0x236f04: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x200500u;
    if (runtime->hasFunction(0x200500u)) {
        auto targetFn = runtime->lookupFunction(0x200500u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x236F08u; }
        if (ctx->pc != 0x236F08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckItemTable__FiPi_0x200500(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x236F08u; }
        if (ctx->pc != 0x236F08u) { return; }
    }
    ctx->pc = 0x236F08u;
label_236f08:
    // 0x236f08: 0x8fa40070  lw          $a0, 0x70($sp)
    ctx->pc = 0x236f08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x236f0c: 0xc07fe84  jal         func_1FFA10
    ctx->pc = 0x236F0Cu;
    SET_GPR_U32(ctx, 31, 0x236F14u);
    ctx->pc = 0x236F10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x236F0Cu;
            // 0x236f10: 0x27a50090  addiu       $a1, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1FFA10u;
    if (runtime->hasFunction(0x1FFA10u)) {
        auto targetFn = runtime->lookupFunction(0x1FFA10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x236F14u; }
        if (ctx->pc != 0x236F14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPhotoNameStr__FiPc_0x1ffa10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x236F14u; }
        if (ctx->pc != 0x236F14u) { return; }
    }
    ctx->pc = 0x236F14u;
label_236f14:
    // 0x236f14: 0x26641801  addiu       $a0, $s3, 0x1801
    ctx->pc = 0x236f14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 6145));
    // 0x236f18: 0xc04a3dc  jal         func_128F70
    ctx->pc = 0x236F18u;
    SET_GPR_U32(ctx, 31, 0x236F20u);
    ctx->pc = 0x236F1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x236F18u;
            // 0x236f1c: 0x27a50090  addiu       $a1, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128F70u;
    if (runtime->hasFunction(0x128F70u)) {
        auto targetFn = runtime->lookupFunction(0x128F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x236F20u; }
        if (ctx->pc != 0x236F20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcpy_0x128f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x236F20u; }
        if (ctx->pc != 0x236F20u) { return; }
    }
    ctx->pc = 0x236F20u;
label_236f20:
    // 0x236f20: 0x8fa40074  lw          $a0, 0x74($sp)
    ctx->pc = 0x236f20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 116)));
    // 0x236f24: 0xc07fe84  jal         func_1FFA10
    ctx->pc = 0x236F24u;
    SET_GPR_U32(ctx, 31, 0x236F2Cu);
    ctx->pc = 0x236F28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x236F24u;
            // 0x236f28: 0x27a50090  addiu       $a1, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1FFA10u;
    if (runtime->hasFunction(0x1FFA10u)) {
        auto targetFn = runtime->lookupFunction(0x1FFA10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x236F2Cu; }
        if (ctx->pc != 0x236F2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPhotoNameStr__FiPc_0x1ffa10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x236F2Cu; }
        if (ctx->pc != 0x236F2Cu) { return; }
    }
    ctx->pc = 0x236F2Cu;
label_236f2c:
    // 0x236f2c: 0x26641821  addiu       $a0, $s3, 0x1821
    ctx->pc = 0x236f2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 6177));
    // 0x236f30: 0xc04a3dc  jal         func_128F70
    ctx->pc = 0x236F30u;
    SET_GPR_U32(ctx, 31, 0x236F38u);
    ctx->pc = 0x236F34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x236F30u;
            // 0x236f34: 0x27a50090  addiu       $a1, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128F70u;
    if (runtime->hasFunction(0x128F70u)) {
        auto targetFn = runtime->lookupFunction(0x128F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x236F38u; }
        if (ctx->pc != 0x236F38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcpy_0x128f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x236F38u; }
        if (ctx->pc != 0x236F38u) { return; }
    }
    ctx->pc = 0x236F38u;
label_236f38:
    // 0x236f38: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x236f38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x236f3c: 0xc07fe84  jal         func_1FFA10
    ctx->pc = 0x236F3Cu;
    SET_GPR_U32(ctx, 31, 0x236F44u);
    ctx->pc = 0x236F40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x236F3Cu;
            // 0x236f40: 0x27a50090  addiu       $a1, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1FFA10u;
    if (runtime->hasFunction(0x1FFA10u)) {
        auto targetFn = runtime->lookupFunction(0x1FFA10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x236F44u; }
        if (ctx->pc != 0x236F44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPhotoNameStr__FiPc_0x1ffa10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x236F44u; }
        if (ctx->pc != 0x236F44u) { return; }
    }
    ctx->pc = 0x236F44u;
label_236f44:
    // 0x236f44: 0x26641841  addiu       $a0, $s3, 0x1841
    ctx->pc = 0x236f44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 6209));
    // 0x236f48: 0xc04a3dc  jal         func_128F70
    ctx->pc = 0x236F48u;
    SET_GPR_U32(ctx, 31, 0x236F50u);
    ctx->pc = 0x236F4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x236F48u;
            // 0x236f4c: 0x27a50090  addiu       $a1, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128F70u;
    if (runtime->hasFunction(0x128F70u)) {
        auto targetFn = runtime->lookupFunction(0x128F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x236F50u; }
        if (ctx->pc != 0x236F50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcpy_0x128f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x236F50u; }
        if (ctx->pc != 0x236F50u) { return; }
    }
    ctx->pc = 0x236F50u;
label_236f50:
    // 0x236f50: 0x26500bb8  addiu       $s0, $s2, 0xBB8
    ctx->pc = 0x236f50u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 3000));
label_236f54:
    // 0x236f54: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x236f54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_236f58:
    // 0x236f58: 0x16820026  bne         $s4, $v0, . + 4 + (0x26 << 2)
    ctx->pc = 0x236F58u;
    {
        const bool branch_taken_0x236f58 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 2));
        ctx->pc = 0x236F5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x236F58u;
            // 0x236f5c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x236f58) {
            ctx->pc = 0x236FF4u;
            goto label_236ff4;
        }
    }
    ctx->pc = 0x236F60u;
    // 0x236f60: 0x220082a  slt         $at, $s1, $zero
    ctx->pc = 0x236f60u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
    // 0x236f64: 0x14200022  bnez        $at, . + 4 + (0x22 << 2)
    ctx->pc = 0x236F64u;
    {
        const bool branch_taken_0x236f64 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x236F68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x236F64u;
            // 0x236f68: 0x26500bc5  addiu       $s0, $s2, 0xBC5 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 3013));
        ctx->in_delay_slot = false;
        if (branch_taken_0x236f64) {
            ctx->pc = 0x236FF0u;
            goto label_236ff0;
        }
    }
    ctx->pc = 0x236F6Cu;
    // 0x236f6c: 0x2a21000a  slti        $at, $s1, 0xA
    ctx->pc = 0x236f6cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x236f70: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x236F70u;
    {
        const bool branch_taken_0x236f70 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x236F74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x236F70u;
            // 0x236f74: 0x3c020035  lui         $v0, 0x35 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)53 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x236f70) {
            ctx->pc = 0x236F7Cu;
            goto label_236f7c;
        }
    }
    ctx->pc = 0x236F78u;
    // 0x236f78: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x236f78u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_236f7c:
    // 0x236f7c: 0x112080  sll         $a0, $s1, 2
    ctx->pc = 0x236f7cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x236f80: 0x24420b92  addiu       $v0, $v0, 0xB92
    ctx->pc = 0x236f80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2962));
    // 0x236f84: 0x441821  addu        $v1, $v0, $a0
    ctx->pc = 0x236f84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x236f88: 0x3c020035  lui         $v0, 0x35
    ctx->pc = 0x236f88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)53 << 16));
    // 0x236f8c: 0x24420b90  addiu       $v0, $v0, 0xB90
    ctx->pc = 0x236f8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2960));
    // 0x236f90: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x236f90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x236f94: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x236f94u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x236f98: 0xc0ad6c4  jal         func_2B5B10
    ctx->pc = 0x236F98u;
    SET_GPR_U32(ctx, 31, 0x236FA0u);
    ctx->pc = 0x236F9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x236F98u;
            // 0x236f9c: 0x84700000  lh          $s0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2B5B10u;
    if (runtime->hasFunction(0x2B5B10u)) {
        auto targetFn = runtime->lookupFunction(0x2B5B10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x236FA0u; }
        if (ctx->pc != 0x236FA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetMonsterName__Fi_0x2b5b10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x236FA0u; }
        if (ctx->pc != 0x236FA0u) { return; }
    }
    ctx->pc = 0x236FA0u;
label_236fa0:
    // 0x236fa0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x236fa0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x236fa4: 0xc065810  jal         func_196040
    ctx->pc = 0x236FA4u;
    SET_GPR_U32(ctx, 31, 0x236FACu);
    ctx->pc = 0x236FA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x236FA4u;
            // 0x236fa8: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x196040u;
    if (runtime->hasFunction(0x196040u)) {
        auto targetFn = runtime->lookupFunction(0x196040u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x236FACu; }
        if (ctx->pc != 0x236FACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetItemMessage__Fi_0x196040(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x236FACu; }
        if (ctx->pc != 0x236FACu) { return; }
    }
    ctx->pc = 0x236FACu;
label_236fac:
    // 0x236fac: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x236FACu;
    {
        const bool branch_taken_0x236fac = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x236FB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x236FACu;
            // 0x236fb0: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x236fac) {
            ctx->pc = 0x236FC0u;
            goto label_236fc0;
        }
    }
    ctx->pc = 0x236FB4u;
    // 0x236fb4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x236fb4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x236fb8: 0xc04a3dc  jal         func_128F70
    ctx->pc = 0x236FB8u;
    SET_GPR_U32(ctx, 31, 0x236FC0u);
    ctx->pc = 0x236FBCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x236FB8u;
            // 0x236fbc: 0x26641801  addiu       $a0, $s3, 0x1801 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 6145));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128F70u;
    if (runtime->hasFunction(0x128F70u)) {
        auto targetFn = runtime->lookupFunction(0x128F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x236FC0u; }
        if (ctx->pc != 0x236FC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcpy_0x128f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x236FC0u; }
        if (ctx->pc != 0x236FC0u) { return; }
    }
    ctx->pc = 0x236FC0u;
label_236fc0:
    // 0x236fc0: 0x12800005  beqz        $s4, . + 4 + (0x5 << 2)
    ctx->pc = 0x236FC0u;
    {
        const bool branch_taken_0x236fc0 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x236FC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x236FC0u;
            // 0x236fc4: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x236fc0) {
            ctx->pc = 0x236FD8u;
            goto label_236fd8;
        }
    }
    ctx->pc = 0x236FC8u;
    // 0x236fc8: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x236fc8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x236fcc: 0xc04a3dc  jal         func_128F70
    ctx->pc = 0x236FCCu;
    SET_GPR_U32(ctx, 31, 0x236FD4u);
    ctx->pc = 0x236FD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x236FCCu;
            // 0x236fd0: 0x26641821  addiu       $a0, $s3, 0x1821 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 6177));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128F70u;
    if (runtime->hasFunction(0x128F70u)) {
        auto targetFn = runtime->lookupFunction(0x128F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x236FD4u; }
        if (ctx->pc != 0x236FD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcpy_0x128f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x236FD4u; }
        if (ctx->pc != 0x236FD4u) { return; }
    }
    ctx->pc = 0x236FD4u;
label_236fd4:
    // 0x236fd4: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x236fd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_236fd8:
    // 0x236fd8: 0x12220004  beq         $s1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x236FD8u;
    {
        const bool branch_taken_0x236fd8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x236FDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x236FD8u;
            // 0x236fdc: 0x26500bc2  addiu       $s0, $s2, 0xBC2 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 3010));
        ctx->in_delay_slot = false;
        if (branch_taken_0x236fd8) {
            ctx->pc = 0x236FECu;
            goto label_236fec;
        }
    }
    ctx->pc = 0x236FE0u;
    // 0x236fe0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x236fe0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x236fe4: 0x16220002  bne         $s1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x236FE4u;
    {
        const bool branch_taken_0x236fe4 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x236fe4) {
            ctx->pc = 0x236FF0u;
            goto label_236ff0;
        }
    }
    ctx->pc = 0x236FECu;
label_236fec:
    // 0x236fec: 0x2610000a  addiu       $s0, $s0, 0xA
    ctx->pc = 0x236fecu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 10));
label_236ff0:
    // 0x236ff0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x236ff0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_236ff4:
    // 0x236ff4: 0xc0562c8  jal         func_158B20
    ctx->pc = 0x236FF4u;
    SET_GPR_U32(ctx, 31, 0x236FFCu);
    ctx->pc = 0x236FF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x236FF4u;
            // 0x236ff8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x158B20u;
    if (runtime->hasFunction(0x158B20u)) {
        auto targetFn = runtime->lookupFunction(0x158B20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x236FFCu; }
        if (ctx->pc != 0x236FFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MakeMesWin__6ClsMesFi_0x158b20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x236FFCu; }
        if (ctx->pc != 0x236FFCu) { return; }
    }
    ctx->pc = 0x236FFCu;
label_236ffc:
    // 0x236ffc: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x236ffcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x237000: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x237000u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x237004: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x237004u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x237008: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x237008u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x23700c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x23700cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x237010: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x237010u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x237014: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x237014u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x237018: 0x3e00008  jr          $ra
    ctx->pc = 0x237018u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23701Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x237018u;
            // 0x23701c: 0x27bd0110  addiu       $sp, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x237020u;
}
