#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _GET_RND_CIRCLE_TRAPID__FP12RS_STACKDATAi
// Address: 0x279120 - 0x27915c
void ps2__GET_RND_CIRCLE_TRAPID__FP12RS_STACKDATAi_0x279120(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__GET_RND_CIRCLE_TRAPID__FP12RS_STACKDATAi_0x279120");
#endif

    switch (ctx->pc) {
        case 0x279134u: goto label_279134;
        case 0x27913cu: goto label_27913c;
        case 0x279148u: goto label_279148;
        default: break;
    }

    ctx->pc = 0x279120u;

    // 0x279120: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x279120u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x279124: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x279124u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x279128: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x279128u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x27912c: 0xc097e18  jal         func_25F860
    ctx->pc = 0x27912Cu;
    SET_GPR_U32(ctx, 31, 0x279134u);
    ctx->pc = 0x279130u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27912Cu;
            // 0x279130: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x279134u; }
        if (ctx->pc != 0x279134u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x279134u; }
        if (ctx->pc != 0x279134u) { return; }
    }
    ctx->pc = 0x279134u;
label_279134:
    // 0x279134: 0xc068164  jal         func_1A0590
    ctx->pc = 0x279134u;
    SET_GPR_U32(ctx, 31, 0x27913Cu);
    ctx->pc = 0x279138u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x279134u;
            // 0x279138: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A0590u;
    if (runtime->hasFunction(0x1A0590u)) {
        auto targetFn = runtime->lookupFunction(0x1A0590u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27913Cu; }
        if (ctx->pc != 0x27913Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetRandomCircleTrapID__Fi_0x1a0590(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27913Cu; }
        if (ctx->pc != 0x27913Cu) { return; }
    }
    ctx->pc = 0x27913Cu;
label_27913c:
    // 0x27913c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x27913cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x279140: 0xc097e4c  jal         func_25F930
    ctx->pc = 0x279140u;
    SET_GPR_U32(ctx, 31, 0x279148u);
    ctx->pc = 0x279144u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x279140u;
            // 0x279144: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F930u;
    if (runtime->hasFunction(0x25F930u)) {
        auto targetFn = runtime->lookupFunction(0x25F930u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x279148u; }
        if (ctx->pc != 0x279148u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAi_0x25f930(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x279148u; }
        if (ctx->pc != 0x279148u) { return; }
    }
    ctx->pc = 0x279148u;
label_279148:
    // 0x279148: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x279148u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x27914c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x27914cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x279150: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x279150u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x279154: 0x3e00008  jr          $ra
    ctx->pc = 0x279154u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x279158u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x279154u;
            // 0x279158: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x27915Cu;
}
