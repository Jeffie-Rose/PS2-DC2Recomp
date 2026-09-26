#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: CheckHDDInstall__Fv
// Address: 0x2a4d40 - 0x2a4d88
void CheckHDDInstall__Fv_0x2a4d40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("CheckHDDInstall__Fv_0x2a4d40");
#endif

    switch (ctx->pc) {
        case 0x2a4d50u: goto label_2a4d50;
        case 0x2a4d64u: goto label_2a4d64;
        default: break;
    }

    ctx->pc = 0x2a4d40u;

    // 0x2a4d40: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2a4d40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2a4d44: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2a4d44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2a4d48: 0xc0c6e90  jal         func_31BA40
    ctx->pc = 0x2A4D48u;
    SET_GPR_U32(ctx, 31, 0x2A4D50u);
    ctx->pc = 0x2A4D4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A4D48u;
            // 0x2a4d4c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x31BA40u;
    if (runtime->hasFunction(0x31BA40u)) {
        auto targetFn = runtime->lookupFunction(0x31BA40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A4D50u; }
        if (ctx->pc != 0x2A4D50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        HddConectCheck__FPi_0x31ba40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A4D50u; }
        if (ctx->pc != 0x2A4D50u) { return; }
    }
    ctx->pc = 0x2A4D50u;
label_2a4d50:
    // 0x2a4d50: 0x2082a  slt         $at, $zero, $v0
    ctx->pc = 0x2a4d50u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2a4d54: 0x10200009  beqz        $at, . + 4 + (0x9 << 2)
    ctx->pc = 0x2A4D54u;
    {
        const bool branch_taken_0x2a4d54 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A4D58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A4D54u;
            // 0x2a4d58: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a4d54) {
            ctx->pc = 0x2A4D7Cu;
            goto label_2a4d7c;
        }
    }
    ctx->pc = 0x2A4D5Cu;
    // 0x2a4d5c: 0xc0a9340  jal         func_2A4D00
    ctx->pc = 0x2A4D5Cu;
    SET_GPR_U32(ctx, 31, 0x2A4D64u);
    ctx->pc = 0x2A4D00u;
    if (runtime->hasFunction(0x2A4D00u)) {
        auto targetFn = runtime->lookupFunction(0x2A4D00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A4D64u; }
        if (ctx->pc != 0x2A4D64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckAppInstallForTitle__Fv_0x2a4d00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A4D64u; }
        if (ctx->pc != 0x2A4D64u) { return; }
    }
    ctx->pc = 0x2A4D64u;
label_2a4d64:
    // 0x2a4d64: 0x2082a  slt         $at, $zero, $v0
    ctx->pc = 0x2a4d64u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2a4d68: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x2A4D68u;
    {
        const bool branch_taken_0x2a4d68 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A4D6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A4D68u;
            // 0x2a4d6c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a4d68) {
            ctx->pc = 0x2A4D78u;
            goto label_2a4d78;
        }
    }
    ctx->pc = 0x2A4D70u;
    // 0x2a4d70: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2A4D70u;
    {
        const bool branch_taken_0x2a4d70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A4D74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A4D70u;
            // 0x2a4d74: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a4d70) {
            ctx->pc = 0x2A4D80u;
            goto label_2a4d80;
        }
    }
    ctx->pc = 0x2A4D78u;
label_2a4d78:
    // 0x2a4d78: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2a4d78u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2a4d7c:
    // 0x2a4d7c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2a4d7cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2a4d80:
    // 0x2a4d80: 0x3e00008  jr          $ra
    ctx->pc = 0x2A4D80u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A4D84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A4D80u;
            // 0x2a4d84: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2A4D88u;
}
