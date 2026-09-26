#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetStrWidth__6ClsMesFi
// Address: 0x1522c0 - 0x152300
void GetStrWidth__6ClsMesFi_0x1522c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetStrWidth__6ClsMesFi_0x1522c0");
#endif

    switch (ctx->pc) {
        case 0x1522f4u: goto label_1522f4;
        default: break;
    }

    ctx->pc = 0x1522c0u;

    // 0x1522c0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1522c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1522c4: 0x4a10003  bgez        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1522C4u;
    {
        const bool branch_taken_0x1522c4 = (GPR_S32(ctx, 5) >= 0);
        ctx->pc = 0x1522C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1522C4u;
            // 0x1522c8: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1522c4) {
            ctx->pc = 0x1522D4u;
            goto label_1522d4;
        }
    }
    ctx->pc = 0x1522CCu;
    // 0x1522cc: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1522CCu;
    {
        const bool branch_taken_0x1522cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1522D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1522CCu;
            // 0x1522d0: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1522cc) {
            ctx->pc = 0x1522F4u;
            goto label_1522f4;
        }
    }
    ctx->pc = 0x1522D4u;
label_1522d4:
    // 0x1522d4: 0x28a20010  slti        $v0, $a1, 0x10
    ctx->pc = 0x1522d4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x1522d8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1522D8u;
    {
        const bool branch_taken_0x1522d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1522DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1522D8u;
            // 0x1522dc: 0x51140  sll         $v0, $a1, 5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1522d8) {
            ctx->pc = 0x1522E8u;
            goto label_1522e8;
        }
    }
    ctx->pc = 0x1522E0u;
    // 0x1522e0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1522E0u;
    {
        const bool branch_taken_0x1522e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1522E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1522E0u;
            // 0x1522e4: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1522e0) {
            ctx->pc = 0x1522F4u;
            goto label_1522f4;
        }
    }
    ctx->pc = 0x1522E8u;
label_1522e8:
    // 0x1522e8: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x1522e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1522ec: 0xc05484c  jal         func_152130
    ctx->pc = 0x1522ECu;
    SET_GPR_U32(ctx, 31, 0x1522F4u);
    ctx->pc = 0x1522F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1522ECu;
            // 0x1522f0: 0x24451801  addiu       $a1, $v0, 0x1801 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 6145));
        ctx->in_delay_slot = false;
    ctx->pc = 0x152130u;
    if (runtime->hasFunction(0x152130u)) {
        auto targetFn = runtime->lookupFunction(0x152130u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1522F4u; }
        if (ctx->pc != 0x1522F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStrWidth__6ClsMesFPc_0x152130(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1522F4u; }
        if (ctx->pc != 0x1522F4u) { return; }
    }
    ctx->pc = 0x1522F4u;
label_1522f4:
    // 0x1522f4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1522f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1522f8: 0x3e00008  jr          $ra
    ctx->pc = 0x1522F8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1522FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1522F8u;
            // 0x1522fc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x152300u;
}
