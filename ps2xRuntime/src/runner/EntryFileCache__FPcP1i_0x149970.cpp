#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: EntryFileCache__FPcP1i
// Address: 0x149970 - 0x1499c0
void EntryFileCache__FPcP1i_0x149970(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("EntryFileCache__FPcP1i_0x149970");
#endif

    switch (ctx->pc) {
        case 0x149984u: goto label_149984;
        case 0x1499b0u: goto label_1499b0;
        default: break;
    }

    ctx->pc = 0x149970u;

    // 0x149970: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x149970u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x149974: 0x80402d  daddu       $t0, $a0, $zero
    ctx->pc = 0x149974u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x149978: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x149978u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x14997c: 0xc052618  jal         func_149860
    ctx->pc = 0x14997Cu;
    SET_GPR_U32(ctx, 31, 0x149984u);
    ctx->pc = 0x149980u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14997Cu;
            // 0x149980: 0xa0382d  daddu       $a3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x149860u;
    if (runtime->hasFunction(0x149860u)) {
        auto targetFn = runtime->lookupFunction(0x149860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x149984u; }
        if (ctx->pc != 0x149984u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetNewFileCache__Fv_0x149860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x149984u; }
        if (ctx->pc != 0x149984u) { return; }
    }
    ctx->pc = 0x149984u;
label_149984:
    // 0x149984: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x149984u;
    {
        const bool branch_taken_0x149984 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x149984) {
            ctx->pc = 0x149994u;
            goto label_149994;
        }
    }
    ctx->pc = 0x14998Cu;
    // 0x14998c: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x14998Cu;
    {
        const bool branch_taken_0x14998c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x149990u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14998Cu;
            // 0x149990: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14998c) {
            ctx->pc = 0x1499B4u;
            goto label_1499b4;
        }
    }
    ctx->pc = 0x149994u;
label_149994:
    // 0x149994: 0xac470000  sw          $a3, 0x0($v0)
    ctx->pc = 0x149994u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 7));
    // 0x149998: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x149998u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14999c: 0xac460004  sw          $a2, 0x4($v0)
    ctx->pc = 0x14999cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 6));
    // 0x1499a0: 0x100282d  daddu       $a1, $t0, $zero
    ctx->pc = 0x1499a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1499a4: 0xac430008  sw          $v1, 0x8($v0)
    ctx->pc = 0x1499a4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 3));
    // 0x1499a8: 0xc04a3dc  jal         func_128F70
    ctx->pc = 0x1499A8u;
    SET_GPR_U32(ctx, 31, 0x1499B0u);
    ctx->pc = 0x1499ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1499A8u;
            // 0x1499ac: 0x24440010  addiu       $a0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128F70u;
    if (runtime->hasFunction(0x128F70u)) {
        auto targetFn = runtime->lookupFunction(0x128F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1499B0u; }
        if (ctx->pc != 0x1499B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcpy_0x128f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1499B0u; }
        if (ctx->pc != 0x1499B0u) { return; }
    }
    ctx->pc = 0x1499B0u;
label_1499b0:
    // 0x1499b0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1499b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1499b4:
    // 0x1499b4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1499b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1499b8: 0x3e00008  jr          $ra
    ctx->pc = 0x1499B8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1499BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1499B8u;
            // 0x1499bc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1499C0u;
}
