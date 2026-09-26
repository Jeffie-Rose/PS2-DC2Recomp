#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: CheckItemLimmitOver__Fv
// Address: 0x1a1450 - 0x1a1488
void CheckItemLimmitOver__Fv_0x1a1450(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("CheckItemLimmitOver__Fv_0x1a1450");
#endif

    switch (ctx->pc) {
        case 0x1a1460u: goto label_1a1460;
        case 0x1a1470u: goto label_1a1470;
        default: break;
    }

    ctx->pc = 0x1a1450u;

    // 0x1a1450: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1a1450u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1a1454: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1a1454u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1a1458: 0xc065af8  jal         func_196BE0
    ctx->pc = 0x1A1458u;
    SET_GPR_U32(ctx, 31, 0x1A1460u);
    ctx->pc = 0x196BE0u;
    if (runtime->hasFunction(0x196BE0u)) {
        auto targetFn = runtime->lookupFunction(0x196BE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A1460u; }
        if (ctx->pc != 0x1A1460u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetUserDataMan__Fv_0x196be0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A1460u; }
        if (ctx->pc != 0x1A1460u) { return; }
    }
    ctx->pc = 0x1A1460u;
label_1a1460:
    // 0x1a1460: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1A1460u;
    {
        const bool branch_taken_0x1a1460 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A1464u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A1460u;
            // 0x1a1464: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a1460) {
            ctx->pc = 0x1A1478u;
            goto label_1a1478;
        }
    }
    ctx->pc = 0x1A1468u;
    // 0x1a1468: 0xc067968  jal         func_19E5A0
    ctx->pc = 0x1A1468u;
    SET_GPR_U32(ctx, 31, 0x1A1470u);
    ctx->pc = 0x19E5A0u;
    if (runtime->hasFunction(0x19E5A0u)) {
        auto targetFn = runtime->lookupFunction(0x19E5A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A1470u; }
        if (ctx->pc != 0x1A1470u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckItemLimmitOver__16CUserDataManagerFv_0x19e5a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A1470u; }
        if (ctx->pc != 0x1A1470u) { return; }
    }
    ctx->pc = 0x1A1470u;
label_1a1470:
    // 0x1a1470: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1A1470u;
    {
        const bool branch_taken_0x1a1470 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A1474u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A1470u;
            // 0x1a1474: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a1470) {
            ctx->pc = 0x1A1480u;
            goto label_1a1480;
        }
    }
    ctx->pc = 0x1A1478u;
label_1a1478:
    // 0x1a1478: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1a1478u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a147c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1a147cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1a1480:
    // 0x1a1480: 0x3e00008  jr          $ra
    ctx->pc = 0x1A1480u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A1484u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A1480u;
            // 0x1a1484: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1A1488u;
}
