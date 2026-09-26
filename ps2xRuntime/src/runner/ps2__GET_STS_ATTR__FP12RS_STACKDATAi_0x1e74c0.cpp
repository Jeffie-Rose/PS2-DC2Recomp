#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _GET_STS_ATTR__FP12RS_STACKDATAi
// Address: 0x1e74c0 - 0x1e750c
void ps2__GET_STS_ATTR__FP12RS_STACKDATAi_0x1e74c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__GET_STS_ATTR__FP12RS_STACKDATAi_0x1e74c0");
#endif

    switch (ctx->pc) {
        case 0x1e74e4u: goto label_1e74e4;
        case 0x1e74f8u: goto label_1e74f8;
        default: break;
    }

    ctx->pc = 0x1e74c0u;

    // 0x1e74c0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1e74c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1e74c4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1e74c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1e74c8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1e74c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1e74cc: 0x10a20003  beq         $a1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1E74CCu;
    {
        const bool branch_taken_0x1e74cc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x1E74D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E74CCu;
            // 0x1e74d0: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e74cc) {
            ctx->pc = 0x1E74DCu;
            goto label_1e74dc;
        }
    }
    ctx->pc = 0x1E74D4u;
    // 0x1e74d4: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1E74D4u;
    {
        const bool branch_taken_0x1e74d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E74D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E74D4u;
            // 0x1e74d8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e74d4) {
            ctx->pc = 0x1E74FCu;
            goto label_1e74fc;
        }
    }
    ctx->pc = 0x1E74DCu;
label_1e74dc:
    // 0x1e74dc: 0xc07819c  jal         func_1E0670
    ctx->pc = 0x1E74DCu;
    SET_GPR_U32(ctx, 31, 0x1E74E4u);
    ctx->pc = 0x1E74E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E74DCu;
            // 0x1e74e0: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E0670u;
    if (runtime->hasFunction(0x1E0670u)) {
        auto targetFn = runtime->lookupFunction(0x1E0670u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E74E4u; }
        if (ctx->pc != 0x1E74E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x1e0670(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E74E4u; }
        if (ctx->pc != 0x1E74E4u) { return; }
    }
    ctx->pc = 0x1E74E4u;
label_1e74e4:
    // 0x1e74e4: 0x8f838e70  lw          $v1, -0x7190($gp)
    ctx->pc = 0x1e74e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938224)));
    // 0x1e74e8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1e74e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e74ec: 0x8c63133c  lw          $v1, 0x133C($v1)
    ctx->pc = 0x1e74ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4924)));
    // 0x1e74f0: 0xc0781bc  jal         func_1E06F0
    ctx->pc = 0x1E74F0u;
    SET_GPR_U32(ctx, 31, 0x1E74F8u);
    ctx->pc = 0x1E74F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E74F0u;
            // 0x1e74f4: 0x622824  and         $a1, $v1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E06F0u;
    if (runtime->hasFunction(0x1E06F0u)) {
        auto targetFn = runtime->lookupFunction(0x1E06F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E74F8u; }
        if (ctx->pc != 0x1E74F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAi_0x1e06f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E74F8u; }
        if (ctx->pc != 0x1E74F8u) { return; }
    }
    ctx->pc = 0x1E74F8u;
label_1e74f8:
    // 0x1e74f8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1e74f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1e74fc:
    // 0x1e74fc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1e74fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e7500: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1e7500u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e7504: 0x3e00008  jr          $ra
    ctx->pc = 0x1E7504u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E7508u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E7504u;
            // 0x1e7508: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1E750Cu;
}
