#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: CheckPartition__Fv
// Address: 0x31bac0 - 0x31bbb4
void CheckPartition__Fv_0x31bac0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("CheckPartition__Fv_0x31bac0");
#endif

    switch (ctx->pc) {
        case 0x31bae0u: goto label_31bae0;
        case 0x31bb00u: goto label_31bb00;
        case 0x31bb18u: goto label_31bb18;
        case 0x31bb20u: goto label_31bb20;
        case 0x31bb3cu: goto label_31bb3c;
        case 0x31bb4cu: goto label_31bb4c;
        case 0x31bb5cu: goto label_31bb5c;
        case 0x31bb70u: goto label_31bb70;
        default: break;
    }

    ctx->pc = 0x31bac0u;

    // 0x31bac0: 0x27bdfe70  addiu       $sp, $sp, -0x190
    ctx->pc = 0x31bac0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966896));
    // 0x31bac4: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x31bac4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
    // 0x31bac8: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x31bac8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x31bacc: 0x24842d70  addiu       $a0, $a0, 0x2D70
    ctx->pc = 0x31baccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 11632));
    // 0x31bad0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x31bad0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x31bad4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x31bad4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x31bad8: 0xc0456a0  jal         func_115A80
    ctx->pc = 0x31BAD8u;
    SET_GPR_U32(ctx, 31, 0x31BAE0u);
    ctx->pc = 0x31BADCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x31BAD8u;
            // 0x31badc: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x115A80u;
    if (runtime->hasFunction(0x115A80u)) {
        auto targetFn = runtime->lookupFunction(0x115A80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31BAE0u; }
        if (ctx->pc != 0x31BAE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceDopen_0x115a80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31BAE0u; }
        if (ctx->pc != 0x31BAE0u) { return; }
    }
    ctx->pc = 0x31BAE0u;
label_31bae0:
    // 0x31bae0: 0x4410009  bgez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x31BAE0u;
    {
        const bool branch_taken_0x31bae0 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x31BAE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31BAE0u;
            // 0x31bae4: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31bae0) {
            ctx->pc = 0x31BB08u;
            goto label_31bb08;
        }
    }
    ctx->pc = 0x31BAE8u;
    // 0x31bae8: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x31bae8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
    // 0x31baec: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x31baecu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x31baf0: 0x24842d80  addiu       $a0, $a0, 0x2D80
    ctx->pc = 0x31baf0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 11648));
    // 0x31baf4: 0x24a52da0  addiu       $a1, $a1, 0x2DA0
    ctx->pc = 0x31baf4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 11680));
    // 0x31baf8: 0xc04a0d2  jal         func_128348
    ctx->pc = 0x31BAF8u;
    SET_GPR_U32(ctx, 31, 0x31BB00u);
    ctx->pc = 0x31BAFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x31BAF8u;
            // 0x31bafc: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128348u;
    if (runtime->hasFunction(0x128348u)) {
        auto targetFn = runtime->lookupFunction(0x128348u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31BB00u; }
        if (ctx->pc != 0x31BB00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        printf_0x128348(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31BB00u; }
        if (ctx->pc != 0x31BB00u) { return; }
    }
    ctx->pc = 0x31BB00u;
label_31bb00:
    // 0x31bb00: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x31BB00u;
    {
        const bool branch_taken_0x31bb00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31BB04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31BB00u;
            // 0x31bb04: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31bb00) {
            ctx->pc = 0x31BB9Cu;
            goto label_31bb9c;
        }
    }
    ctx->pc = 0x31BB08u;
label_31bb08:
    // 0x31bb08: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x31bb08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31bb0c: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x31bb0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x31bb10: 0xc04572c  jal         func_115CB0
    ctx->pc = 0x31BB10u;
    SET_GPR_U32(ctx, 31, 0x31BB18u);
    ctx->pc = 0x31BB14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x31BB10u;
            // 0x31bb14: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x115CB0u;
    if (runtime->hasFunction(0x115CB0u)) {
        auto targetFn = runtime->lookupFunction(0x115CB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31BB18u; }
        if (ctx->pc != 0x31BB18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceDread_0x115cb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31BB18u; }
        if (ctx->pc != 0x31BB18u) { return; }
    }
    ctx->pc = 0x31BB18u;
label_31bb18:
    // 0x31bb18: 0x18400012  blez        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x31BB18u;
    {
        const bool branch_taken_0x31bb18 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x31BB1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31BB18u;
            // 0x31bb1c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31bb18) {
            ctx->pc = 0x31BB64u;
            goto label_31bb64;
        }
    }
    ctx->pc = 0x31BB20u;
label_31bb20:
    // 0x31bb20: 0x8fa20044  lw          $v0, 0x44($sp)
    ctx->pc = 0x31bb20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
    // 0x31bb24: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x31bb24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x31bb28: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x31BB28u;
    {
        const bool branch_taken_0x31bb28 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x31BB2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31BB28u;
            // 0x31bb2c: 0x3c050037  lui         $a1, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31bb28) {
            ctx->pc = 0x31BB50u;
            goto label_31bb50;
        }
    }
    ctx->pc = 0x31BB30u;
    // 0x31bb30: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x31bb30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x31bb34: 0xc04a38a  jal         func_128E28
    ctx->pc = 0x31BB34u;
    SET_GPR_U32(ctx, 31, 0x31BB3Cu);
    ctx->pc = 0x31BB38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x31BB34u;
            // 0x31bb38: 0x24a52dc0  addiu       $a1, $a1, 0x2DC0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 11712));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128E28u;
    if (runtime->hasFunction(0x128E28u)) {
        auto targetFn = runtime->lookupFunction(0x128E28u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31BB3Cu; }
        if (ctx->pc != 0x31BB3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcmp_0x128e28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31BB3Cu; }
        if (ctx->pc != 0x31BB3Cu) { return; }
    }
    ctx->pc = 0x31BB3Cu;
label_31bb3c:
    // 0x31bb3c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x31BB3Cu;
    {
        const bool branch_taken_0x31bb3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x31BB40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31BB3Cu;
            // 0x31bb40: 0x3c040037  lui         $a0, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31bb3c) {
            ctx->pc = 0x31BB50u;
            goto label_31bb50;
        }
    }
    ctx->pc = 0x31BB44u;
    // 0x31bb44: 0xc04a0d2  jal         func_128348
    ctx->pc = 0x31BB44u;
    SET_GPR_U32(ctx, 31, 0x31BB4Cu);
    ctx->pc = 0x31BB48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x31BB44u;
            // 0x31bb48: 0x24842de0  addiu       $a0, $a0, 0x2DE0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 11744));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128348u;
    if (runtime->hasFunction(0x128348u)) {
        auto targetFn = runtime->lookupFunction(0x128348u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31BB4Cu; }
        if (ctx->pc != 0x31BB4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        printf_0x128348(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31BB4Cu; }
        if (ctx->pc != 0x31BB4Cu) { return; }
    }
    ctx->pc = 0x31BB4Cu;
label_31bb4c:
    // 0x31bb4c: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x31bb4cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_31bb50:
    // 0x31bb50: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x31bb50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31bb54: 0xc04572c  jal         func_115CB0
    ctx->pc = 0x31BB54u;
    SET_GPR_U32(ctx, 31, 0x31BB5Cu);
    ctx->pc = 0x31BB58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x31BB54u;
            // 0x31bb58: 0x27a50040  addiu       $a1, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x115CB0u;
    if (runtime->hasFunction(0x115CB0u)) {
        auto targetFn = runtime->lookupFunction(0x115CB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31BB5Cu; }
        if (ctx->pc != 0x31BB5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceDread_0x115cb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31BB5Cu; }
        if (ctx->pc != 0x31BB5Cu) { return; }
    }
    ctx->pc = 0x31BB5Cu;
label_31bb5c:
    // 0x31bb5c: 0x1c40fff0  bgtz        $v0, . + 4 + (-0x10 << 2)
    ctx->pc = 0x31BB5Cu;
    {
        const bool branch_taken_0x31bb5c = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x31BB60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31BB5Cu;
            // 0x31bb60: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31bb5c) {
            ctx->pc = 0x31BB20u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_31bb20;
        }
    }
    ctx->pc = 0x31BB64u;
label_31bb64:
    // 0x31bb64: 0x0  nop
    ctx->pc = 0x31bb64u;
    // NOP
    // 0x31bb68: 0xc0456d2  jal         func_115B48
    ctx->pc = 0x31BB68u;
    SET_GPR_U32(ctx, 31, 0x31BB70u);
    ctx->pc = 0x31BB6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x31BB68u;
            // 0x31bb6c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x115B48u;
    if (runtime->hasFunction(0x115B48u)) {
        auto targetFn = runtime->lookupFunction(0x115B48u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31BB70u; }
        if (ctx->pc != 0x31BB70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceDclose_0x115b48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31BB70u; }
        if (ctx->pc != 0x31BB70u) { return; }
    }
    ctx->pc = 0x31BB70u;
label_31bb70:
    // 0x31bb70: 0x2402fffb  addiu       $v0, $zero, -0x5
    ctx->pc = 0x31bb70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
    // 0x31bb74: 0x16020003  bne         $s0, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x31BB74u;
    {
        const bool branch_taken_0x31bb74 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x31bb74) {
            ctx->pc = 0x31BB84u;
            goto label_31bb84;
        }
    }
    ctx->pc = 0x31BB7Cu;
    // 0x31bb7c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x31BB7Cu;
    {
        const bool branch_taken_0x31bb7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31BB80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31BB7Cu;
            // 0x31bb80: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31bb7c) {
            ctx->pc = 0x31BBA0u;
            goto label_31bba0;
        }
    }
    ctx->pc = 0x31BB84u;
label_31bb84:
    // 0x31bb84: 0x6010003  bgez        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x31BB84u;
    {
        const bool branch_taken_0x31bb84 = (GPR_S32(ctx, 16) >= 0);
        if (branch_taken_0x31bb84) {
            ctx->pc = 0x31BB94u;
            goto label_31bb94;
        }
    }
    ctx->pc = 0x31BB8Cu;
    // 0x31bb8c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x31BB8Cu;
    {
        const bool branch_taken_0x31bb8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31BB90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31BB8Cu;
            // 0x31bb90: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31bb8c) {
            ctx->pc = 0x31BB9Cu;
            goto label_31bb9c;
        }
    }
    ctx->pc = 0x31BB94u;
label_31bb94:
    // 0x31bb94: 0x240802d  daddu       $s0, $s2, $zero
    ctx->pc = 0x31bb94u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31bb98: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x31bb98u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_31bb9c:
    // 0x31bb9c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x31bb9cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_31bba0:
    // 0x31bba0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x31bba0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x31bba4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x31bba4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x31bba8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x31bba8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x31bbac: 0x3e00008  jr          $ra
    ctx->pc = 0x31BBACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31BBB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31BBACu;
            // 0x31bbb0: 0x27bd0190  addiu       $sp, $sp, 0x190 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x31BBB4u;
}
