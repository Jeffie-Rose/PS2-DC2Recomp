#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: InstallPause__Fv
// Address: 0x31c1f0 - 0x31c254
void InstallPause__Fv_0x31c1f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("InstallPause__Fv_0x31c1f0");
#endif

    switch (ctx->pc) {
        case 0x31c230u: goto label_31c230;
        case 0x31c240u: goto label_31c240;
        default: break;
    }

    ctx->pc = 0x31c1f0u;

    // 0x31c1f0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x31c1f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x31c1f4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x31c1f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x31c1f8: 0x8f82a3e8  lw          $v0, -0x5C18($gp)
    ctx->pc = 0x31c1f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943720)));
    // 0x31c1fc: 0x8f84a3c8  lw          $a0, -0x5C38($gp)
    ctx->pc = 0x31c1fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943688)));
    // 0x31c200: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x31c200u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x31c204: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x31c204u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x31c208: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x31c208u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x31c20c: 0x4810003  bgez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x31C20Cu;
    {
        const bool branch_taken_0x31c20c = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x31C210u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31C20Cu;
            // 0x31c210: 0xaf82a3e8  sw          $v0, -0x5C18($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294943720), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31c20c) {
            ctx->pc = 0x31C21Cu;
            goto label_31c21c;
        }
    }
    ctx->pc = 0x31C214u;
    // 0x31c214: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x31C214u;
    {
        const bool branch_taken_0x31c214 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31C218u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31C214u;
            // 0x31c218: 0x8f82a3e8  lw          $v0, -0x5C18($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943720)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31c214) {
            ctx->pc = 0x31C248u;
            goto label_31c248;
        }
    }
    ctx->pc = 0x31C21Cu;
label_31c21c:
    // 0x31c21c: 0x8f82a3e8  lw          $v0, -0x5C18($gp)
    ctx->pc = 0x31c21cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943720)));
    // 0x31c220: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x31C220u;
    {
        const bool branch_taken_0x31c220 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31C224u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31C220u;
            // 0x31c224: 0x2405000a  addiu       $a1, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31c220) {
            ctx->pc = 0x31C238u;
            goto label_31c238;
        }
    }
    ctx->pc = 0x31C228u;
    // 0x31c228: 0xc043fdc  jal         func_10FF70
    ctx->pc = 0x31C228u;
    SET_GPR_U32(ctx, 31, 0x31C230u);
    ctx->pc = 0x31C22Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x31C228u;
            // 0x31c22c: 0x2405000b  addiu       $a1, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10FF70u;
    if (runtime->hasFunction(0x10FF70u)) {
        auto targetFn = runtime->lookupFunction(0x10FF70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31C230u; }
        if (ctx->pc != 0x31C230u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ChangeThreadPriority_0x10ff70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31C230u; }
        if (ctx->pc != 0x31C230u) { return; }
    }
    ctx->pc = 0x31C230u;
label_31c230:
    // 0x31c230: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x31C230u;
    {
        const bool branch_taken_0x31c230 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31C234u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31C230u;
            // 0x31c234: 0x8f82a3e8  lw          $v0, -0x5C18($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943720)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31c230) {
            ctx->pc = 0x31C244u;
            goto label_31c244;
        }
    }
    ctx->pc = 0x31C238u;
label_31c238:
    // 0x31c238: 0xc043fdc  jal         func_10FF70
    ctx->pc = 0x31C238u;
    SET_GPR_U32(ctx, 31, 0x31C240u);
    ctx->pc = 0x10FF70u;
    if (runtime->hasFunction(0x10FF70u)) {
        auto targetFn = runtime->lookupFunction(0x10FF70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31C240u; }
        if (ctx->pc != 0x31C240u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ChangeThreadPriority_0x10ff70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31C240u; }
        if (ctx->pc != 0x31C240u) { return; }
    }
    ctx->pc = 0x31C240u;
label_31c240:
    // 0x31c240: 0x8f82a3e8  lw          $v0, -0x5C18($gp)
    ctx->pc = 0x31c240u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943720)));
label_31c244:
    // 0x31c244: 0x0  nop
    ctx->pc = 0x31c244u;
    // NOP
label_31c248:
    // 0x31c248: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x31c248u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x31c24c: 0x3e00008  jr          $ra
    ctx->pc = 0x31C24Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31C250u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31C24Cu;
            // 0x31c250: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x31C254u;
}
