#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: dynFRAME_POSE_L__FP9SPI_STACKi
// Address: 0x17b8b0 - 0x17b908
void dynFRAME_POSE_L__FP9SPI_STACKi_0x17b8b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("dynFRAME_POSE_L__FP9SPI_STACKi_0x17b8b0");
#endif

    switch (ctx->pc) {
        case 0x17b8c4u: goto label_17b8c4;
        case 0x17b8d0u: goto label_17b8d0;
        case 0x17b8dcu: goto label_17b8dc;
        default: break;
    }

    ctx->pc = 0x17b8b0u;

    // 0x17b8b0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x17b8b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x17b8b4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x17b8b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x17b8b8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x17b8b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x17b8bc: 0xc05edbc  jal         func_17B6F0
    ctx->pc = 0x17B8BCu;
    SET_GPR_U32(ctx, 31, 0x17B8C4u);
    ctx->pc = 0x17B8C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17B8BCu;
            // 0x17b8c0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17B6F0u;
    if (runtime->hasFunction(0x17B6F0u)) {
        auto targetFn = runtime->lookupFunction(0x17B6F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17B8C4u; }
        if (ctx->pc != 0x17B8C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FRAME_POSE_Sub__FP9SPI_STACKi_0x17b6f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17B8C4u; }
        if (ctx->pc != 0x17B8C4u) { return; }
    }
    ctx->pc = 0x17B8C4u;
label_17b8c4:
    // 0x17b8c4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x17b8c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17b8c8: 0xc0518f8  jal         func_1463E0
    ctx->pc = 0x17B8C8u;
    SET_GPR_U32(ctx, 31, 0x17B8D0u);
    ctx->pc = 0x17B8CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17B8C8u;
            // 0x17b8cc: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1463E0u;
    if (runtime->hasFunction(0x1463E0u)) {
        auto targetFn = runtime->lookupFunction(0x1463E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17B8D0u; }
        if (ctx->pc != 0x17B8D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackInt__FP9SPI_STACK_0x1463e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17B8D0u; }
        if (ctx->pc != 0x17B8D0u) { return; }
    }
    ctx->pc = 0x17B8D0u;
label_17b8d0:
    // 0x17b8d0: 0x8f848a10  lw          $a0, -0x75F0($gp)
    ctx->pc = 0x17b8d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937104)));
    // 0x17b8d4: 0xc05ea3c  jal         func_17A8F0
    ctx->pc = 0x17B8D4u;
    SET_GPR_U32(ctx, 31, 0x17B8DCu);
    ctx->pc = 0x17B8D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17B8D4u;
            // 0x17b8d8: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17A8F0u;
    if (runtime->hasFunction(0x17A8F0u)) {
        auto targetFn = runtime->lookupFunction(0x17A8F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17B8DCu; }
        if (ctx->pc != 0x17B8DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetFrame__13CDynamicAnimeFi_0x17a8f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17B8DCu; }
        if (ctx->pc != 0x17B8DCu) { return; }
    }
    ctx->pc = 0x17B8DCu;
label_17b8dc:
    // 0x17b8dc: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x17B8DCu;
    {
        const bool branch_taken_0x17b8dc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x17b8dc) {
            ctx->pc = 0x17B8ECu;
            goto label_17b8ec;
        }
    }
    ctx->pc = 0x17B8E4u;
    // 0x17b8e4: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x17B8E4u;
    {
        const bool branch_taken_0x17b8e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x17B8E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17B8E4u;
            // 0x17b8e8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17b8e4) {
            ctx->pc = 0x17B8F4u;
            goto label_17b8f4;
        }
    }
    ctx->pc = 0x17B8ECu;
label_17b8ec:
    // 0x17b8ec: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x17B8ECu;
    {
        const bool branch_taken_0x17b8ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17B8F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17B8ECu;
            // 0x17b8f0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17b8ec) {
            ctx->pc = 0x17B8F8u;
            goto label_17b8f8;
        }
    }
    ctx->pc = 0x17B8F4u;
label_17b8f4:
    // 0x17b8f4: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x17b8f4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
label_17b8f8:
    // 0x17b8f8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x17b8f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17b8fc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x17b8fcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17b900: 0x3e00008  jr          $ra
    ctx->pc = 0x17B900u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17B904u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17B900u;
            // 0x17b904: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x17B908u;
}
