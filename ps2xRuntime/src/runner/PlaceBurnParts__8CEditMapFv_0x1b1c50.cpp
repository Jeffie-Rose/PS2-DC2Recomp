#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: PlaceBurnParts__8CEditMapFv
// Address: 0x1b1c50 - 0x1b1cd4
void PlaceBurnParts__8CEditMapFv_0x1b1c50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("PlaceBurnParts__8CEditMapFv_0x1b1c50");
#endif

    switch (ctx->pc) {
        case 0x1b1c74u: goto label_1b1c74;
        case 0x1b1c7cu: goto label_1b1c7c;
        case 0x1b1c8cu: goto label_1b1c8c;
        default: break;
    }

    ctx->pc = 0x1b1c50u;

    // 0x1b1c50: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1b1c50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1b1c54: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1b1c54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1b1c58: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1b1c58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1b1c5c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1b1c5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1b1c60: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1b1c60u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b1c64: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1b1c64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1b1c68: 0x8c900d44  lw          $s0, 0xD44($a0)
    ctx->pc = 0x1b1c68u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 3396)));
    // 0x1b1c6c: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x1B1C6Cu;
    {
        const bool branch_taken_0x1b1c6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B1C70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B1C6Cu;
            // 0x1b1c70: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b1c6c) {
            ctx->pc = 0x1B1CA4u;
            goto label_1b1ca4;
        }
    }
    ctx->pc = 0x1B1C74u;
label_1b1c74:
    // 0x1b1c74: 0xc0bb988  jal         func_2EE620
    ctx->pc = 0x1B1C74u;
    SET_GPR_U32(ctx, 31, 0x1B1C7Cu);
    ctx->pc = 0x1B1C78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B1C74u;
            // 0x1b1c78: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2EE620u;
    if (runtime->hasFunction(0x2EE620u)) {
        auto targetFn = runtime->lookupFunction(0x2EE620u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B1C7Cu; }
        if (ctx->pc != 0x1B1C7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckNormalPlaceParts__8CEditMapFP10CEditParts_0x2ee620(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B1C7Cu; }
        if (ctx->pc != 0x1B1C7Cu) { return; }
    }
    ctx->pc = 0x1B1C7Cu;
label_1b1c7c:
    // 0x1b1c7c: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1B1C7Cu;
    {
        const bool branch_taken_0x1b1c7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B1C80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B1C7Cu;
            // 0x1b1c80: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b1c7c) {
            ctx->pc = 0x1B1C9Cu;
            goto label_1b1c9c;
        }
    }
    ctx->pc = 0x1B1C84u;
    // 0x1b1c84: 0xc06d6bc  jal         func_1B5AF0
    ctx->pc = 0x1B1C84u;
    SET_GPR_U32(ctx, 31, 0x1B1C8Cu);
    ctx->pc = 0x1B5AF0u;
    if (runtime->hasFunction(0x1B5AF0u)) {
        auto targetFn = runtime->lookupFunction(0x1B5AF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B1C8Cu; }
        if (ctx->pc != 0x1B1C8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        IsBurn__10CEditPartsFv_0x1b5af0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B1C8Cu; }
        if (ctx->pc != 0x1B1C8Cu) { return; }
    }
    ctx->pc = 0x1B1C8Cu;
label_1b1c8c:
    // 0x1b1c8c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1B1C8Cu;
    {
        const bool branch_taken_0x1b1c8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B1C90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B1C8Cu;
            // 0x1b1c90: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b1c8c) {
            ctx->pc = 0x1B1C9Cu;
            goto label_1b1c9c;
        }
    }
    ctx->pc = 0x1B1C94u;
    // 0x1b1c94: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x1B1C94u;
    {
        const bool branch_taken_0x1b1c94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B1C98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B1C94u;
            // 0x1b1c98: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b1c94) {
            ctx->pc = 0x1B1CC0u;
            goto label_1b1cc0;
        }
    }
    ctx->pc = 0x1B1C9Cu;
label_1b1c9c:
    // 0x1b1c9c: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1b1c9cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1b1ca0: 0x26100330  addiu       $s0, $s0, 0x330
    ctx->pc = 0x1b1ca0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 816));
label_1b1ca4:
    // 0x1b1ca4: 0x0  nop
    ctx->pc = 0x1b1ca4u;
    // NOP
    // 0x1b1ca8: 0x8e420d40  lw          $v0, 0xD40($s2)
    ctx->pc = 0x1b1ca8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3392)));
    // 0x1b1cac: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x1b1cacu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1b1cb0: 0x1440fff0  bnez        $v0, . + 4 + (-0x10 << 2)
    ctx->pc = 0x1B1CB0u;
    {
        const bool branch_taken_0x1b1cb0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B1CB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B1CB0u;
            // 0x1b1cb4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b1cb0) {
            ctx->pc = 0x1B1C74u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1b1c74;
        }
    }
    ctx->pc = 0x1B1CB8u;
    // 0x1b1cb8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1b1cb8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b1cbc: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1b1cbcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1b1cc0:
    // 0x1b1cc0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1b1cc0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b1cc4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1b1cc4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b1cc8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1b1cc8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b1ccc: 0x3e00008  jr          $ra
    ctx->pc = 0x1B1CCCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B1CD0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B1CCCu;
            // 0x1b1cd0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1B1CD4u;
}
