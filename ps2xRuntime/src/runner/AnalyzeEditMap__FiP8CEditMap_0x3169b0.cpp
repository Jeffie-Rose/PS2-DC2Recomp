#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: AnalyzeEditMap__FiP8CEditMap
// Address: 0x3169b0 - 0x316a78
void AnalyzeEditMap__FiP8CEditMap_0x3169b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("AnalyzeEditMap__FiP8CEditMap_0x3169b0");
#endif

    switch (ctx->pc) {
        case 0x3169d8u: goto label_3169d8;
        case 0x3169e4u: goto label_3169e4;
        case 0x316a04u: goto label_316a04;
        case 0x316a1cu: goto label_316a1c;
        case 0x316a34u: goto label_316a34;
        case 0x316a4cu: goto label_316a4c;
        case 0x316a60u: goto label_316a60;
        default: break;
    }

    ctx->pc = 0x3169b0u;

    // 0x3169b0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x3169b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x3169b4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x3169b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x3169b8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3169b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x3169bc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3169bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3169c0: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x3169c0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3169c4: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x3169c4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3169c8: 0x12200025  beqz        $s1, . + 4 + (0x25 << 2)
    ctx->pc = 0x3169C8u;
    {
        const bool branch_taken_0x3169c8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x3169CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3169C8u;
            // 0x3169cc: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3169c8) {
            ctx->pc = 0x316A60u;
            goto label_316a60;
        }
    }
    ctx->pc = 0x3169D0u;
    // 0x3169d0: 0xc064220  jal         func_190880
    ctx->pc = 0x3169D0u;
    SET_GPR_U32(ctx, 31, 0x3169D8u);
    ctx->pc = 0x190880u;
    if (runtime->hasFunction(0x190880u)) {
        auto targetFn = runtime->lookupFunction(0x190880u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3169D8u; }
        if (ctx->pc != 0x3169D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetSaveData__Fv_0x190880(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3169D8u; }
        if (ctx->pc != 0x3169D8u) { return; }
    }
    ctx->pc = 0x3169D8u;
label_3169d8:
    // 0x3169d8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3169d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3169dc: 0xc0bd9a4  jal         func_2F6690
    ctx->pc = 0x3169DCu;
    SET_GPR_U32(ctx, 31, 0x3169E4u);
    ctx->pc = 0x3169E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3169DCu;
            // 0x3169e0: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F6690u;
    if (runtime->hasFunction(0x2F6690u)) {
        auto targetFn = runtime->lookupFunction(0x2F6690u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3169E4u; }
        if (ctx->pc != 0x3169E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetEditData__9CSaveDataFi_0x2f6690(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3169E4u; }
        if (ctx->pc != 0x3169E4u) { return; }
    }
    ctx->pc = 0x3169E4u;
label_3169e4:
    // 0x3169e4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3169e4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3169e8: 0x1200001d  beqz        $s0, . + 4 + (0x1D << 2)
    ctx->pc = 0x3169E8u;
    {
        const bool branch_taken_0x3169e8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x3169e8) {
            ctx->pc = 0x316A60u;
            goto label_316a60;
        }
    }
    ctx->pc = 0x3169F0u;
    // 0x3169f0: 0x16400005  bnez        $s2, . + 4 + (0x5 << 2)
    ctx->pc = 0x3169F0u;
    {
        const bool branch_taken_0x3169f0 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x3169F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3169F0u;
            // 0x3169f4: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3169f0) {
            ctx->pc = 0x316A08u;
            goto label_316a08;
        }
    }
    ctx->pc = 0x3169F8u;
    // 0x3169f8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3169f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3169fc: 0xc0c5ba0  jal         func_316E80
    ctx->pc = 0x3169FCu;
    SET_GPR_U32(ctx, 31, 0x316A04u);
    ctx->pc = 0x316A00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3169FCu;
            // 0x316a00: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x316E80u;
    if (runtime->hasFunction(0x316E80u)) {
        auto targetFn = runtime->lookupFunction(0x316E80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x316A04u; }
        if (ctx->pc != 0x316A04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AnalyzeSharlot__FP9CEditDataP8CEditMap_0x316e80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x316A04u; }
        if (ctx->pc != 0x316A04u) { return; }
    }
    ctx->pc = 0x316A04u;
label_316a04:
    // 0x316a04: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x316a04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_316a08:
    // 0x316a08: 0x16430005  bne         $s2, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x316A08u;
    {
        const bool branch_taken_0x316a08 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 3));
        ctx->pc = 0x316A0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x316A08u;
            // 0x316a0c: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x316a08) {
            ctx->pc = 0x316A20u;
            goto label_316a20;
        }
    }
    ctx->pc = 0x316A10u;
    // 0x316a10: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x316a10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x316a14: 0xc0c5cf4  jal         func_3173D0
    ctx->pc = 0x316A14u;
    SET_GPR_U32(ctx, 31, 0x316A1Cu);
    ctx->pc = 0x316A18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x316A14u;
            // 0x316a18: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3173D0u;
    if (runtime->hasFunction(0x3173D0u)) {
        auto targetFn = runtime->lookupFunction(0x3173D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x316A1Cu; }
        if (ctx->pc != 0x316A1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AnalyzeStera__FP9CEditDataP8CEditMap_0x3173d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x316A1Cu; }
        if (ctx->pc != 0x316A1Cu) { return; }
    }
    ctx->pc = 0x316A1Cu;
label_316a1c:
    // 0x316a1c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x316a1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_316a20:
    // 0x316a20: 0x16430005  bne         $s2, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x316A20u;
    {
        const bool branch_taken_0x316a20 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 3));
        ctx->pc = 0x316A24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x316A20u;
            // 0x316a24: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x316a20) {
            ctx->pc = 0x316A38u;
            goto label_316a38;
        }
    }
    ctx->pc = 0x316A28u;
    // 0x316a28: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x316a28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x316a2c: 0xc0c5d80  jal         func_317600
    ctx->pc = 0x316A2Cu;
    SET_GPR_U32(ctx, 31, 0x316A34u);
    ctx->pc = 0x316A30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x316A2Cu;
            // 0x316a30: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x317600u;
    if (runtime->hasFunction(0x317600u)) {
        auto targetFn = runtime->lookupFunction(0x317600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x316A34u; }
        if (ctx->pc != 0x316A34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AnalyzeBenietio__FP9CEditDataP8CEditMap_0x317600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x316A34u; }
        if (ctx->pc != 0x316A34u) { return; }
    }
    ctx->pc = 0x316A34u;
label_316a34:
    // 0x316a34: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x316a34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_316a38:
    // 0x316a38: 0x16430005  bne         $s2, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x316A38u;
    {
        const bool branch_taken_0x316a38 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 3));
        ctx->pc = 0x316A3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x316A38u;
            // 0x316a3c: 0x24030004  addiu       $v1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x316a38) {
            ctx->pc = 0x316A50u;
            goto label_316a50;
        }
    }
    ctx->pc = 0x316A40u;
    // 0x316a40: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x316a40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x316a44: 0xc0c5ef0  jal         func_317BC0
    ctx->pc = 0x316A44u;
    SET_GPR_U32(ctx, 31, 0x316A4Cu);
    ctx->pc = 0x316A48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x316A44u;
            // 0x316a48: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x317BC0u;
    if (runtime->hasFunction(0x317BC0u)) {
        auto targetFn = runtime->lookupFunction(0x317BC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x316A4Cu; }
        if (ctx->pc != 0x316A4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AnalyzeHeim__FP9CEditDataP8CEditMap_0x317bc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x316A4Cu; }
        if (ctx->pc != 0x316A4Cu) { return; }
    }
    ctx->pc = 0x316A4Cu;
label_316a4c:
    // 0x316a4c: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x316a4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_316a50:
    // 0x316a50: 0x16430003  bne         $s2, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x316A50u;
    {
        const bool branch_taken_0x316a50 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 3));
        ctx->pc = 0x316A54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x316A50u;
            // 0x316a54: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x316a50) {
            ctx->pc = 0x316A60u;
            goto label_316a60;
        }
    }
    ctx->pc = 0x316A58u;
    // 0x316a58: 0xc0c604c  jal         func_318130
    ctx->pc = 0x316A58u;
    SET_GPR_U32(ctx, 31, 0x316A60u);
    ctx->pc = 0x316A5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x316A58u;
            // 0x316a5c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x318130u;
    if (runtime->hasFunction(0x318130u)) {
        auto targetFn = runtime->lookupFunction(0x318130u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x316A60u; }
        if (ctx->pc != 0x316A60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AnalyzeMoonFlower__FP9CEditDataP8CEditMap_0x318130(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x316A60u; }
        if (ctx->pc != 0x316A60u) { return; }
    }
    ctx->pc = 0x316A60u;
label_316a60:
    // 0x316a60: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x316a60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x316a64: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x316a64u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x316a68: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x316a68u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x316a6c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x316a6cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x316a70: 0x3e00008  jr          $ra
    ctx->pc = 0x316A70u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x316A74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x316A70u;
            // 0x316a74: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x316A78u;
}
