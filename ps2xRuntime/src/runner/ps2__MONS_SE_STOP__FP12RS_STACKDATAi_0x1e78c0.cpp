#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _MONS_SE_STOP__FP12RS_STACKDATAi
// Address: 0x1e78c0 - 0x1e7938
void ps2__MONS_SE_STOP__FP12RS_STACKDATAi_0x1e78c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__MONS_SE_STOP__FP12RS_STACKDATAi_0x1e78c0");
#endif

    switch (ctx->pc) {
        case 0x1e78e4u: goto label_1e78e4;
        case 0x1e78f0u: goto label_1e78f0;
        case 0x1e7924u: goto label_1e7924;
        default: break;
    }

    ctx->pc = 0x1e78c0u;

    // 0x1e78c0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1e78c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1e78c4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1e78c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1e78c8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1e78c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1e78cc: 0x10a20003  beq         $a1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1E78CCu;
    {
        const bool branch_taken_0x1e78cc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x1E78D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E78CCu;
            // 0x1e78d0: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e78cc) {
            ctx->pc = 0x1E78DCu;
            goto label_1e78dc;
        }
    }
    ctx->pc = 0x1E78D4u;
    // 0x1e78d4: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x1E78D4u;
    {
        const bool branch_taken_0x1e78d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E78D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E78D4u;
            // 0x1e78d8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e78d4) {
            ctx->pc = 0x1E7928u;
            goto label_1e7928;
        }
    }
    ctx->pc = 0x1E78DCu;
label_1e78dc:
    // 0x1e78dc: 0xc07819c  jal         func_1E0670
    ctx->pc = 0x1E78DCu;
    SET_GPR_U32(ctx, 31, 0x1E78E4u);
    ctx->pc = 0x1E78E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E78DCu;
            // 0x1e78e0: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E0670u;
    if (runtime->hasFunction(0x1E0670u)) {
        auto targetFn = runtime->lookupFunction(0x1E0670u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E78E4u; }
        if (ctx->pc != 0x1E78E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x1e0670(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E78E4u; }
        if (ctx->pc != 0x1E78E4u) { return; }
    }
    ctx->pc = 0x1E78E4u;
label_1e78e4:
    // 0x1e78e4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1e78e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e78e8: 0xc07819c  jal         func_1E0670
    ctx->pc = 0x1E78E8u;
    SET_GPR_U32(ctx, 31, 0x1E78F0u);
    ctx->pc = 0x1E78ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E78E8u;
            // 0x1e78ec: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E0670u;
    if (runtime->hasFunction(0x1E0670u)) {
        auto targetFn = runtime->lookupFunction(0x1E0670u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E78F0u; }
        if (ctx->pc != 0x1E78F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x1e0670(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E78F0u; }
        if (ctx->pc != 0x1E78F0u) { return; }
    }
    ctx->pc = 0x1E78F0u;
label_1e78f0:
    // 0x1e78f0: 0x8f848db8  lw          $a0, -0x7248($gp)
    ctx->pc = 0x1e78f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938040)));
    // 0x1e78f4: 0x2603ffe8  addiu       $v1, $s0, -0x18
    ctx->pc = 0x1e78f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967272));
    // 0x1e78f8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1e78f8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1e78fc: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1e78fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1e7900: 0x8c630484  lw          $v1, 0x484($v1)
    ctx->pc = 0x1e7900u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1156)));
    // 0x1e7904: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1E7904u;
    {
        const bool branch_taken_0x1e7904 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e7904) {
            ctx->pc = 0x1E7914u;
            goto label_1e7914;
        }
    }
    ctx->pc = 0x1E790Cu;
    // 0x1e790c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1E790Cu;
    {
        const bool branch_taken_0x1e790c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E7910u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E790Cu;
            // 0x1e7910: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e790c) {
            ctx->pc = 0x1E7928u;
            goto label_1e7928;
        }
    }
    ctx->pc = 0x1E7914u;
label_1e7914:
    // 0x1e7914: 0x8c640588  lw          $a0, 0x588($v1)
    ctx->pc = 0x1e7914u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1416)));
    // 0x1e7918: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1e7918u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e791c: 0xc063a0c  jal         func_18E830
    ctx->pc = 0x1E791Cu;
    SET_GPR_U32(ctx, 31, 0x1E7924u);
    ctx->pc = 0x1E7920u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E791Cu;
            // 0x1e7920: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18E830u;
    if (runtime->hasFunction(0x18E830u)) {
        auto targetFn = runtime->lookupFunction(0x18E830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E7924u; }
        if (ctx->pc != 0x1E7924u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sndSeStop__FUiii_0x18e830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E7924u; }
        if (ctx->pc != 0x1E7924u) { return; }
    }
    ctx->pc = 0x1E7924u;
label_1e7924:
    // 0x1e7924: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1e7924u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1e7928:
    // 0x1e7928: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1e7928u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e792c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1e792cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e7930: 0x3e00008  jr          $ra
    ctx->pc = 0x1E7930u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E7934u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E7930u;
            // 0x1e7934: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1E7938u;
}
