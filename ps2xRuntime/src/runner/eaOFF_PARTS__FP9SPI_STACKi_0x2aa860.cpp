#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: eaOFF_PARTS__FP9SPI_STACKi
// Address: 0x2aa860 - 0x2aa8a8
void eaOFF_PARTS__FP9SPI_STACKi_0x2aa860(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("eaOFF_PARTS__FP9SPI_STACKi_0x2aa860");
#endif

    switch (ctx->pc) {
        case 0x2aa884u: goto label_2aa884;
        case 0x2aa890u: goto label_2aa890;
        default: break;
    }

    ctx->pc = 0x2aa860u;

    // 0x2aa860: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2aa860u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2aa864: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2aa864u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2aa868: 0x8f829a88  lw          $v0, -0x6578($gp)
    ctx->pc = 0x2aa868u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941320)));
    // 0x2aa86c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2AA86Cu;
    {
        const bool branch_taken_0x2aa86c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2AA870u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AA86Cu;
            // 0x2aa870: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aa86c) {
            ctx->pc = 0x2AA87Cu;
            goto label_2aa87c;
        }
    }
    ctx->pc = 0x2AA874u;
    // 0x2aa874: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x2AA874u;
    {
        const bool branch_taken_0x2aa874 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AA878u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AA874u;
            // 0x2aa878: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aa874) {
            ctx->pc = 0x2AA8A0u;
            goto label_2aa8a0;
        }
    }
    ctx->pc = 0x2AA87Cu;
label_2aa87c:
    // 0x2aa87c: 0xc05191c  jal         func_146470
    ctx->pc = 0x2AA87Cu;
    SET_GPR_U32(ctx, 31, 0x2AA884u);
    ctx->pc = 0x146470u;
    if (runtime->hasFunction(0x146470u)) {
        auto targetFn = runtime->lookupFunction(0x146470u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AA884u; }
        if (ctx->pc != 0x2AA884u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackString__FP9SPI_STACK_0x146470(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AA884u; }
        if (ctx->pc != 0x2AA884u) { return; }
    }
    ctx->pc = 0x2AA884u;
label_2aa884:
    // 0x2aa884: 0x8f859a8c  lw          $a1, -0x6574($gp)
    ctx->pc = 0x2aa884u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941324)));
    // 0x2aa888: 0xc04e7a0  jal         func_139E80
    ctx->pc = 0x2AA888u;
    SET_GPR_U32(ctx, 31, 0x2AA890u);
    ctx->pc = 0x2AA88Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AA888u;
            // 0x2aa88c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139E80u;
    if (runtime->hasFunction(0x139E80u)) {
        auto targetFn = runtime->lookupFunction(0x139E80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AA890u; }
        if (ctx->pc != 0x2AA890u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgCopyString__FPcP9mgCMemory_0x139e80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AA890u; }
        if (ctx->pc != 0x2AA890u) { return; }
    }
    ctx->pc = 0x2AA890u;
label_2aa890:
    // 0x2aa890: 0x8f839a88  lw          $v1, -0x6578($gp)
    ctx->pc = 0x2aa890u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941320)));
    // 0x2aa894: 0xac620018  sw          $v0, 0x18($v1)
    ctx->pc = 0x2aa894u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 24), GPR_U32(ctx, 2));
    // 0x2aa898: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2aa898u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2aa89c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2aa89cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2aa8a0:
    // 0x2aa8a0: 0x3e00008  jr          $ra
    ctx->pc = 0x2AA8A0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2AA8A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AA8A0u;
            // 0x2aa8a4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2AA8A8u;
}
