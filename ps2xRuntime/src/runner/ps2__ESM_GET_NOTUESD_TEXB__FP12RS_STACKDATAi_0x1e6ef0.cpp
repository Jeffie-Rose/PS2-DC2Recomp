#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _ESM_GET_NOTUESD_TEXB__FP12RS_STACKDATAi
// Address: 0x1e6ef0 - 0x1e6f44
void ps2__ESM_GET_NOTUESD_TEXB__FP12RS_STACKDATAi_0x1e6ef0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__ESM_GET_NOTUESD_TEXB__FP12RS_STACKDATAi_0x1e6ef0");
#endif

    switch (ctx->pc) {
        case 0x1e6f24u: goto label_1e6f24;
        case 0x1e6f30u: goto label_1e6f30;
        default: break;
    }

    ctx->pc = 0x1e6ef0u;

    // 0x1e6ef0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1e6ef0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1e6ef4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1e6ef4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e6ef8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1e6ef8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1e6efc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1e6efcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1e6f00: 0x10a20003  beq         $a1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1E6F00u;
    {
        const bool branch_taken_0x1e6f00 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x1E6F04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E6F00u;
            // 0x1e6f04: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e6f00) {
            ctx->pc = 0x1E6F10u;
            goto label_1e6f10;
        }
    }
    ctx->pc = 0x1E6F08u;
    // 0x1e6f08: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x1E6F08u;
    {
        const bool branch_taken_0x1e6f08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E6F0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E6F08u;
            // 0x1e6f0c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e6f08) {
            ctx->pc = 0x1E6F34u;
            goto label_1e6f34;
        }
    }
    ctx->pc = 0x1E6F10u;
label_1e6f10:
    // 0x1e6f10: 0x8f828db8  lw          $v0, -0x7248($gp)
    ctx->pc = 0x1e6f10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938040)));
    // 0x1e6f14: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x1e6f14u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x1e6f18: 0x410821  addu        $at, $v0, $at
    ctx->pc = 0x1e6f18u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 1)));
    // 0x1e6f1c: 0xc0b80ec  jal         func_2E03B0
    ctx->pc = 0x1E6F1Cu;
    SET_GPR_U32(ctx, 31, 0x1E6F24u);
    ctx->pc = 0x1E6F20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E6F1Cu;
            // 0x1e6f20: 0x8c24fff0  lw          $a0, -0x10($at) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294967280)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E03B0u;
    if (runtime->hasFunction(0x2E03B0u)) {
        auto targetFn = runtime->lookupFunction(0x2E03B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E6F24u; }
        if (ctx->pc != 0x1E6F24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetNotUsedTexb__16CEffectScriptManFv_0x2e03b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E6F24u; }
        if (ctx->pc != 0x1E6F24u) { return; }
    }
    ctx->pc = 0x1E6F24u;
label_1e6f24:
    // 0x1e6f24: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1e6f24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e6f28: 0xc0781bc  jal         func_1E06F0
    ctx->pc = 0x1E6F28u;
    SET_GPR_U32(ctx, 31, 0x1E6F30u);
    ctx->pc = 0x1E6F2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E6F28u;
            // 0x1e6f2c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E06F0u;
    if (runtime->hasFunction(0x1E06F0u)) {
        auto targetFn = runtime->lookupFunction(0x1E06F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E6F30u; }
        if (ctx->pc != 0x1E6F30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAi_0x1e06f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E6F30u; }
        if (ctx->pc != 0x1E6F30u) { return; }
    }
    ctx->pc = 0x1E6F30u;
label_1e6f30:
    // 0x1e6f30: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1e6f30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1e6f34:
    // 0x1e6f34: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1e6f34u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e6f38: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1e6f38u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e6f3c: 0x3e00008  jr          $ra
    ctx->pc = 0x1E6F3Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E6F40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E6F3Cu;
            // 0x1e6f40: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1E6F44u;
}
