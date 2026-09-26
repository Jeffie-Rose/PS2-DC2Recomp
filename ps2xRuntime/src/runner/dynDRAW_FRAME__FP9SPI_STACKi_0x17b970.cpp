#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: dynDRAW_FRAME__FP9SPI_STACKi
// Address: 0x17b970 - 0x17b9ec
void dynDRAW_FRAME__FP9SPI_STACKi_0x17b970(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("dynDRAW_FRAME__FP9SPI_STACKi_0x17b970");
#endif

    switch (ctx->pc) {
        case 0x17b998u: goto label_17b998;
        case 0x17b9a8u: goto label_17b9a8;
        case 0x17b9b0u: goto label_17b9b0;
        case 0x17b9c0u: goto label_17b9c0;
        default: break;
    }

    ctx->pc = 0x17b970u;

    // 0x17b970: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x17b970u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x17b974: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x17b974u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x17b978: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x17b978u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x17b97c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x17b97cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x17b980: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x17b980u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17b984: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x17b984u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x17b988: 0x8f848a10  lw          $a0, -0x75F0($gp)
    ctx->pc = 0x17b988u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937104)));
    // 0x17b98c: 0x8f868a14  lw          $a2, -0x75EC($gp)
    ctx->pc = 0x17b98cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937108)));
    // 0x17b990: 0xc05e994  jal         func_17A650
    ctx->pc = 0x17B990u;
    SET_GPR_U32(ctx, 31, 0x17B998u);
    ctx->pc = 0x17B994u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17B990u;
            // 0x17b994: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17A650u;
    if (runtime->hasFunction(0x17A650u)) {
        auto targetFn = runtime->lookupFunction(0x17A650u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17B998u; }
        if (ctx->pc != 0x17B998u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        NewDrawFrameTable__13CDynamicAnimeFiP9mgCMemory_0x17a650(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17B998u; }
        if (ctx->pc != 0x17B998u) { return; }
    }
    ctx->pc = 0x17B998u;
label_17b998:
    // 0x17b998: 0x11082a  slt         $at, $zero, $s1
    ctx->pc = 0x17b998u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x17b99c: 0x1020000c  beqz        $at, . + 4 + (0xC << 2)
    ctx->pc = 0x17B99Cu;
    {
        const bool branch_taken_0x17b99c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x17B9A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17B99Cu;
            // 0x17b9a0: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17b99c) {
            ctx->pc = 0x17B9D0u;
            goto label_17b9d0;
        }
    }
    ctx->pc = 0x17B9A4u;
    // 0x17b9a4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x17b9a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_17b9a8:
    // 0x17b9a8: 0xc0518f8  jal         func_1463E0
    ctx->pc = 0x17B9A8u;
    SET_GPR_U32(ctx, 31, 0x17B9B0u);
    ctx->pc = 0x17B9ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17B9A8u;
            // 0x17b9ac: 0x24920008  addiu       $s2, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1463E0u;
    if (runtime->hasFunction(0x1463E0u)) {
        auto targetFn = runtime->lookupFunction(0x1463E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17B9B0u; }
        if (ctx->pc != 0x17B9B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackInt__FP9SPI_STACK_0x1463e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17B9B0u; }
        if (ctx->pc != 0x17B9B0u) { return; }
    }
    ctx->pc = 0x17B9B0u;
label_17b9b0:
    // 0x17b9b0: 0x8f848a10  lw          $a0, -0x75F0($gp)
    ctx->pc = 0x17b9b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937104)));
    // 0x17b9b4: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x17b9b4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17b9b8: 0xc05ead8  jal         func_17AB60
    ctx->pc = 0x17B9B8u;
    SET_GPR_U32(ctx, 31, 0x17B9C0u);
    ctx->pc = 0x17B9BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17B9B8u;
            // 0x17b9bc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17AB60u;
    if (runtime->hasFunction(0x17AB60u)) {
        auto targetFn = runtime->lookupFunction(0x17AB60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17B9C0u; }
        if (ctx->pc != 0x17B9C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetDrawFrame__13CDynamicAnimeFii_0x17ab60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17B9C0u; }
        if (ctx->pc != 0x17B9C0u) { return; }
    }
    ctx->pc = 0x17B9C0u;
label_17b9c0:
    // 0x17b9c0: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x17b9c0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x17b9c4: 0x211102a  slt         $v0, $s0, $s1
    ctx->pc = 0x17b9c4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x17b9c8: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x17B9C8u;
    {
        const bool branch_taken_0x17b9c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x17B9CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17B9C8u;
            // 0x17b9cc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17b9c8) {
            ctx->pc = 0x17B9A8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_17b9a8;
        }
    }
    ctx->pc = 0x17B9D0u;
label_17b9d0:
    // 0x17b9d0: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x17b9d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x17b9d4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x17b9d4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17b9d8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x17b9d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x17b9dc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x17b9dcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17b9e0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x17b9e0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17b9e4: 0x3e00008  jr          $ra
    ctx->pc = 0x17B9E4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17B9E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17B9E4u;
            // 0x17b9e8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x17B9ECu;
}
