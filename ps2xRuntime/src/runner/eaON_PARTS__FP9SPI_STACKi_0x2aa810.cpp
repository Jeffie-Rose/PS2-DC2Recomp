#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: eaON_PARTS__FP9SPI_STACKi
// Address: 0x2aa810 - 0x2aa858
void eaON_PARTS__FP9SPI_STACKi_0x2aa810(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("eaON_PARTS__FP9SPI_STACKi_0x2aa810");
#endif

    switch (ctx->pc) {
        case 0x2aa834u: goto label_2aa834;
        case 0x2aa840u: goto label_2aa840;
        default: break;
    }

    ctx->pc = 0x2aa810u;

    // 0x2aa810: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2aa810u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2aa814: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2aa814u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2aa818: 0x8f829a88  lw          $v0, -0x6578($gp)
    ctx->pc = 0x2aa818u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941320)));
    // 0x2aa81c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2AA81Cu;
    {
        const bool branch_taken_0x2aa81c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2AA820u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AA81Cu;
            // 0x2aa820: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aa81c) {
            ctx->pc = 0x2AA82Cu;
            goto label_2aa82c;
        }
    }
    ctx->pc = 0x2AA824u;
    // 0x2aa824: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x2AA824u;
    {
        const bool branch_taken_0x2aa824 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AA828u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AA824u;
            // 0x2aa828: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aa824) {
            ctx->pc = 0x2AA850u;
            goto label_2aa850;
        }
    }
    ctx->pc = 0x2AA82Cu;
label_2aa82c:
    // 0x2aa82c: 0xc05191c  jal         func_146470
    ctx->pc = 0x2AA82Cu;
    SET_GPR_U32(ctx, 31, 0x2AA834u);
    ctx->pc = 0x146470u;
    if (runtime->hasFunction(0x146470u)) {
        auto targetFn = runtime->lookupFunction(0x146470u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AA834u; }
        if (ctx->pc != 0x2AA834u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackString__FP9SPI_STACK_0x146470(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AA834u; }
        if (ctx->pc != 0x2AA834u) { return; }
    }
    ctx->pc = 0x2AA834u;
label_2aa834:
    // 0x2aa834: 0x8f859a8c  lw          $a1, -0x6574($gp)
    ctx->pc = 0x2aa834u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941324)));
    // 0x2aa838: 0xc04e7a0  jal         func_139E80
    ctx->pc = 0x2AA838u;
    SET_GPR_U32(ctx, 31, 0x2AA840u);
    ctx->pc = 0x2AA83Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AA838u;
            // 0x2aa83c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139E80u;
    if (runtime->hasFunction(0x139E80u)) {
        auto targetFn = runtime->lookupFunction(0x139E80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AA840u; }
        if (ctx->pc != 0x2AA840u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgCopyString__FPcP9mgCMemory_0x139e80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AA840u; }
        if (ctx->pc != 0x2AA840u) { return; }
    }
    ctx->pc = 0x2AA840u;
label_2aa840:
    // 0x2aa840: 0x8f839a88  lw          $v1, -0x6578($gp)
    ctx->pc = 0x2aa840u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941320)));
    // 0x2aa844: 0xac620014  sw          $v0, 0x14($v1)
    ctx->pc = 0x2aa844u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 2));
    // 0x2aa848: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2aa848u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2aa84c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2aa84cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2aa850:
    // 0x2aa850: 0x3e00008  jr          $ra
    ctx->pc = 0x2AA850u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2AA854u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AA850u;
            // 0x2aa854: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2AA858u;
}
