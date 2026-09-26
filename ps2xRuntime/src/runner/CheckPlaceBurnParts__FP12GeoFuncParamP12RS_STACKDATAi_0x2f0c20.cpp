#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: CheckPlaceBurnParts__FP12GeoFuncParamP12RS_STACKDATAi
// Address: 0x2f0c20 - 0x2f0cac
void CheckPlaceBurnParts__FP12GeoFuncParamP12RS_STACKDATAi_0x2f0c20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("CheckPlaceBurnParts__FP12GeoFuncParamP12RS_STACKDATAi_0x2f0c20");
#endif

    switch (ctx->pc) {
        case 0x2f0c54u: goto label_2f0c54;
        case 0x2f0c70u: goto label_2f0c70;
        case 0x2f0c88u: goto label_2f0c88;
        case 0x2f0c94u: goto label_2f0c94;
        default: break;
    }

    ctx->pc = 0x2f0c20u;

    // 0x2f0c20: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2f0c20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2f0c24: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2f0c24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f0c28: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2f0c28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2f0c2c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2f0c2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2f0c30: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2f0c30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2f0c34: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2f0c34u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f0c38: 0x10c20003  beq         $a2, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2F0C38u;
    {
        const bool branch_taken_0x2f0c38 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        ctx->pc = 0x2F0C3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F0C38u;
            // 0x2f0c3c: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f0c38) {
            ctx->pc = 0x2F0C48u;
            goto label_2f0c48;
        }
    }
    ctx->pc = 0x2F0C40u;
    // 0x2f0c40: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x2F0C40u;
    {
        const bool branch_taken_0x2f0c40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F0C44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F0C40u;
            // 0x2f0c44: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f0c40) {
            ctx->pc = 0x2F0C98u;
            goto label_2f0c98;
        }
    }
    ctx->pc = 0x2F0C48u;
label_2f0c48:
    // 0x2f0c48: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2f0c48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f0c4c: 0xc062218  jal         func_188860
    ctx->pc = 0x2F0C4Cu;
    SET_GPR_U32(ctx, 31, 0x2F0C54u);
    ctx->pc = 0x2F0C50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F0C4Cu;
            // 0x2f0c50: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x188860u;
    if (runtime->hasFunction(0x188860u)) {
        auto targetFn = runtime->lookupFunction(0x188860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F0C54u; }
        if (ctx->pc != 0x2F0C54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        rsSetStack__FP12RS_STACKDATAi_0x188860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F0C54u; }
        if (ctx->pc != 0x2F0C54u) { return; }
    }
    ctx->pc = 0x2F0C54u;
label_2f0c54:
    // 0x2f0c54: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x2f0c54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2f0c58: 0x14800003  bnez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2F0C58u;
    {
        const bool branch_taken_0x2f0c58 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F0C5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F0C58u;
            // 0x2f0c5c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f0c58) {
            ctx->pc = 0x2F0C68u;
            goto label_2f0c68;
        }
    }
    ctx->pc = 0x2F0C60u;
    // 0x2f0c60: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x2F0C60u;
    {
        const bool branch_taken_0x2f0c60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F0C64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F0C60u;
            // 0x2f0c64: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f0c60) {
            ctx->pc = 0x2F0C9Cu;
            goto label_2f0c9c;
        }
    }
    ctx->pc = 0x2F0C68u;
label_2f0c68:
    // 0x2f0c68: 0xc0a0f58  jal         func_283D60
    ctx->pc = 0x2F0C68u;
    SET_GPR_U32(ctx, 31, 0x2F0C70u);
    ctx->pc = 0x2F0C6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F0C68u;
            // 0x2f0c6c: 0x8c852e5c  lw          $a1, 0x2E5C($a0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 11868)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x283D60u;
    if (runtime->hasFunction(0x283D60u)) {
        auto targetFn = runtime->lookupFunction(0x283D60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F0C70u; }
        if (ctx->pc != 0x2F0C70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetMap__6CSceneFi_0x283d60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F0C70u; }
        if (ctx->pc != 0x2F0C70u) { return; }
    }
    ctx->pc = 0x2F0C70u;
label_2f0c70:
    // 0x2f0c70: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2F0C70u;
    {
        const bool branch_taken_0x2f0c70 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F0C74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F0C70u;
            // 0x2f0c74: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f0c70) {
            ctx->pc = 0x2F0C80u;
            goto label_2f0c80;
        }
    }
    ctx->pc = 0x2F0C78u;
    // 0x2f0c78: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2F0C78u;
    {
        const bool branch_taken_0x2f0c78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F0C7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F0C78u;
            // 0x2f0c7c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f0c78) {
            ctx->pc = 0x2F0C98u;
            goto label_2f0c98;
        }
    }
    ctx->pc = 0x2F0C80u;
label_2f0c80:
    // 0x2f0c80: 0xc06c714  jal         func_1B1C50
    ctx->pc = 0x2F0C80u;
    SET_GPR_U32(ctx, 31, 0x2F0C88u);
    ctx->pc = 0x1B1C50u;
    if (runtime->hasFunction(0x1B1C50u)) {
        auto targetFn = runtime->lookupFunction(0x1B1C50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F0C88u; }
        if (ctx->pc != 0x2F0C88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        PlaceBurnParts__8CEditMapFv_0x1b1c50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F0C88u; }
        if (ctx->pc != 0x2F0C88u) { return; }
    }
    ctx->pc = 0x2F0C88u;
label_2f0c88:
    // 0x2f0c88: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2f0c88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f0c8c: 0xc062218  jal         func_188860
    ctx->pc = 0x2F0C8Cu;
    SET_GPR_U32(ctx, 31, 0x2F0C94u);
    ctx->pc = 0x2F0C90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F0C8Cu;
            // 0x2f0c90: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x188860u;
    if (runtime->hasFunction(0x188860u)) {
        auto targetFn = runtime->lookupFunction(0x188860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F0C94u; }
        if (ctx->pc != 0x2F0C94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        rsSetStack__FP12RS_STACKDATAi_0x188860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F0C94u; }
        if (ctx->pc != 0x2F0C94u) { return; }
    }
    ctx->pc = 0x2F0C94u;
label_2f0c94:
    // 0x2f0c94: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2f0c94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2f0c98:
    // 0x2f0c98: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2f0c98u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2f0c9c:
    // 0x2f0c9c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2f0c9cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2f0ca0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2f0ca0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2f0ca4: 0x3e00008  jr          $ra
    ctx->pc = 0x2F0CA4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F0CA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F0CA4u;
            // 0x2f0ca8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2F0CACu;
}
