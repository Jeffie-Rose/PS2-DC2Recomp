#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: dynFRAME__FP9SPI_STACKi
// Address: 0x17b190 - 0x17b20c
void dynFRAME__FP9SPI_STACKi_0x17b190(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("dynFRAME__FP9SPI_STACKi_0x17b190");
#endif

    switch (ctx->pc) {
        case 0x17b1a4u: goto label_17b1a4;
        case 0x17b1c4u: goto label_17b1c4;
        case 0x17b1dcu: goto label_17b1dc;
        case 0x17b1f4u: goto label_17b1f4;
        default: break;
    }

    ctx->pc = 0x17b190u;

    // 0x17b190: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x17b190u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x17b194: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x17b194u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x17b198: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x17b198u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x17b19c: 0xc05191c  jal         func_146470
    ctx->pc = 0x17B19Cu;
    SET_GPR_U32(ctx, 31, 0x17B1A4u);
    ctx->pc = 0x17B1A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17B19Cu;
            // 0x17b1a0: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x146470u;
    if (runtime->hasFunction(0x146470u)) {
        auto targetFn = runtime->lookupFunction(0x146470u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17B1A4u; }
        if (ctx->pc != 0x17B1A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackString__FP9SPI_STACK_0x146470(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17B1A4u; }
        if (ctx->pc != 0x17B1A4u) { return; }
    }
    ctx->pc = 0x17B1A4u;
label_17b1a4:
    // 0x17b1a4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x17b1a4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17b1a8: 0x16000003  bnez        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x17B1A8u;
    {
        const bool branch_taken_0x17b1a8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x17B1ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17B1A8u;
            // 0x17b1ac: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17b1a8) {
            ctx->pc = 0x17B1B8u;
            goto label_17b1b8;
        }
    }
    ctx->pc = 0x17B1B0u;
    // 0x17b1b0: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x17B1B0u;
    {
        const bool branch_taken_0x17b1b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17B1B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17B1B0u;
            // 0x17b1b4: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17b1b0) {
            ctx->pc = 0x17B1FCu;
            goto label_17b1fc;
        }
    }
    ctx->pc = 0x17B1B8u;
label_17b1b8:
    // 0x17b1b8: 0x8f848a18  lw          $a0, -0x75E8($gp)
    ctx->pc = 0x17b1b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937112)));
    // 0x17b1bc: 0xc04ddb4  jal         func_1376D0
    ctx->pc = 0x17B1BCu;
    SET_GPR_U32(ctx, 31, 0x17B1C4u);
    ctx->pc = 0x17B1C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17B1BCu;
            // 0x17b1c0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1376D0u;
    if (runtime->hasFunction(0x1376D0u)) {
        auto targetFn = runtime->lookupFunction(0x1376D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17B1C4u; }
        if (ctx->pc != 0x17B1C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SearchFrame__8mgCFrameFPc_0x1376d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17B1C4u; }
        if (ctx->pc != 0x17B1C4u) { return; }
    }
    ctx->pc = 0x17B1C4u;
label_17b1c4:
    // 0x17b1c4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x17b1c4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17b1c8: 0x16200004  bnez        $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x17B1C8u;
    {
        const bool branch_taken_0x17b1c8 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x17B1CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17B1C8u;
            // 0x17b1cc: 0x3c040036  lui         $a0, 0x36 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)54 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17b1c8) {
            ctx->pc = 0x17B1DCu;
            goto label_17b1dc;
        }
    }
    ctx->pc = 0x17B1D0u;
    // 0x17b1d0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x17b1d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17b1d4: 0xc04a0d2  jal         func_128348
    ctx->pc = 0x17B1D4u;
    SET_GPR_U32(ctx, 31, 0x17B1DCu);
    ctx->pc = 0x17B1D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17B1D4u;
            // 0x17b1d8: 0x24843b58  addiu       $a0, $a0, 0x3B58 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 15192));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128348u;
    if (runtime->hasFunction(0x128348u)) {
        auto targetFn = runtime->lookupFunction(0x128348u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17B1DCu; }
        if (ctx->pc != 0x17B1DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        printf_0x128348(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17B1DCu; }
        if (ctx->pc != 0x17B1DCu) { return; }
    }
    ctx->pc = 0x17B1DCu;
label_17b1dc:
    // 0x17b1dc: 0x8f858a1c  lw          $a1, -0x75E4($gp)
    ctx->pc = 0x17b1dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937116)));
    // 0x17b1e0: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x17b1e0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17b1e4: 0x8f848a10  lw          $a0, -0x75F0($gp)
    ctx->pc = 0x17b1e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937104)));
    // 0x17b1e8: 0x24a20001  addiu       $v0, $a1, 0x1
    ctx->pc = 0x17b1e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x17b1ec: 0xc05ea2c  jal         func_17A8B0
    ctx->pc = 0x17B1ECu;
    SET_GPR_U32(ctx, 31, 0x17B1F4u);
    ctx->pc = 0x17B1F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17B1ECu;
            // 0x17b1f0: 0xaf828a1c  sw          $v0, -0x75E4($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937116), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17A8B0u;
    if (runtime->hasFunction(0x17A8B0u)) {
        auto targetFn = runtime->lookupFunction(0x17A8B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17B1F4u; }
        if (ctx->pc != 0x17B1F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetFrame__13CDynamicAnimeFiP8mgCFrame_0x17a8b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17B1F4u; }
        if (ctx->pc != 0x17B1F4u) { return; }
    }
    ctx->pc = 0x17B1F4u;
label_17b1f4:
    // 0x17b1f4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x17b1f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x17b1f8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x17b1f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_17b1fc:
    // 0x17b1fc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x17b1fcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17b200: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x17b200u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17b204: 0x3e00008  jr          $ra
    ctx->pc = 0x17B204u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17B208u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17B204u;
            // 0x17b208: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x17B20Cu;
}
