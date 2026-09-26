#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _GET_USER_ID__FP12RS_STACKDATAi
// Address: 0x2e3f00 - 0x2e3f34
void ps2__GET_USER_ID__FP12RS_STACKDATAi_0x2e3f00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__GET_USER_ID__FP12RS_STACKDATAi_0x2e3f00");
#endif

    switch (ctx->pc) {
        case 0x2e3f24u: goto label_2e3f24;
        default: break;
    }

    ctx->pc = 0x2e3f00u;

    // 0x2e3f00: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2e3f00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2e3f04: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2e3f04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e3f08: 0x10a20003  beq         $a1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2E3F08u;
    {
        const bool branch_taken_0x2e3f08 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x2E3F0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E3F08u;
            // 0x2e3f0c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e3f08) {
            ctx->pc = 0x2E3F18u;
            goto label_2e3f18;
        }
    }
    ctx->pc = 0x2E3F10u;
    // 0x2e3f10: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2E3F10u;
    {
        const bool branch_taken_0x2e3f10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E3F14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E3F10u;
            // 0x2e3f14: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e3f10) {
            ctx->pc = 0x2E3F28u;
            goto label_2e3f28;
        }
    }
    ctx->pc = 0x2E3F18u;
label_2e3f18:
    // 0x2e3f18: 0x8f829ed0  lw          $v0, -0x6130($gp)
    ctx->pc = 0x2e3f18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942416)));
    // 0x2e3f1c: 0xc0b8cd4  jal         func_2E3350
    ctx->pc = 0x2E3F1Cu;
    SET_GPR_U32(ctx, 31, 0x2E3F24u);
    ctx->pc = 0x2E3F20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E3F1Cu;
            // 0x2e3f20: 0x8c4500a8  lw          $a1, 0xA8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 168)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E3350u;
    if (runtime->hasFunction(0x2E3350u)) {
        auto targetFn = runtime->lookupFunction(0x2E3350u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E3F24u; }
        if (ctx->pc != 0x2E3F24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAi_0x2e3350(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E3F24u; }
        if (ctx->pc != 0x2E3F24u) { return; }
    }
    ctx->pc = 0x2E3F24u;
label_2e3f24:
    // 0x2e3f24: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2e3f24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2e3f28:
    // 0x2e3f28: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2e3f28u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e3f2c: 0x3e00008  jr          $ra
    ctx->pc = 0x2E3F2Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E3F30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E3F2Cu;
            // 0x2e3f30: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2E3F34u;
}
