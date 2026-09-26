#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: quest_NEW__FP9SPI_STACKi
// Address: 0x31a8d0 - 0x31a91c
void quest_NEW__FP9SPI_STACKi_0x31a8d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("quest_NEW__FP9SPI_STACKi_0x31a8d0");
#endif

    switch (ctx->pc) {
        case 0x31a8e4u: goto label_31a8e4;
        case 0x31a8f0u: goto label_31a8f0;
        case 0x31a908u: goto label_31a908;
        default: break;
    }

    ctx->pc = 0x31a8d0u;

    // 0x31a8d0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x31a8d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x31a8d4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x31a8d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x31a8d8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x31a8d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x31a8dc: 0xc0518f8  jal         func_1463E0
    ctx->pc = 0x31A8DCu;
    SET_GPR_U32(ctx, 31, 0x31A8E4u);
    ctx->pc = 0x31A8E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x31A8DCu;
            // 0x31a8e0: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1463E0u;
    if (runtime->hasFunction(0x1463E0u)) {
        auto targetFn = runtime->lookupFunction(0x1463E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31A8E4u; }
        if (ctx->pc != 0x31A8E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackInt__FP9SPI_STACK_0x1463e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31A8E4u; }
        if (ctx->pc != 0x31A8E4u) { return; }
    }
    ctx->pc = 0x31A8E4u;
label_31a8e4:
    // 0x31a8e4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x31a8e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31a8e8: 0xc05191c  jal         func_146470
    ctx->pc = 0x31A8E8u;
    SET_GPR_U32(ctx, 31, 0x31A8F0u);
    ctx->pc = 0x31A8ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x31A8E8u;
            // 0x31a8ec: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x146470u;
    if (runtime->hasFunction(0x146470u)) {
        auto targetFn = runtime->lookupFunction(0x146470u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31A8F0u; }
        if (ctx->pc != 0x31A8F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackString__FP9SPI_STACK_0x146470(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31A8F0u; }
        if (ctx->pc != 0x31A8F0u) { return; }
    }
    ctx->pc = 0x31A8F0u;
label_31a8f0:
    // 0x31a8f0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x31a8f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31a8f4: 0x8f82a388  lw          $v0, -0x5C78($gp)
    ctx->pc = 0x31a8f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943624)));
    // 0x31a8f8: 0xac500000  sw          $s0, 0x0($v0)
    ctx->pc = 0x31a8f8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
    // 0x31a8fc: 0x8f82a388  lw          $v0, -0x5C78($gp)
    ctx->pc = 0x31a8fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943624)));
    // 0x31a900: 0xc04a3dc  jal         func_128F70
    ctx->pc = 0x31A900u;
    SET_GPR_U32(ctx, 31, 0x31A908u);
    ctx->pc = 0x31A904u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x31A900u;
            // 0x31a904: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128F70u;
    if (runtime->hasFunction(0x128F70u)) {
        auto targetFn = runtime->lookupFunction(0x128F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31A908u; }
        if (ctx->pc != 0x31A908u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcpy_0x128f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31A908u; }
        if (ctx->pc != 0x31A908u) { return; }
    }
    ctx->pc = 0x31A908u;
label_31a908:
    // 0x31a908: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x31a908u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x31a90c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x31a90cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x31a910: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x31a910u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x31a914: 0x3e00008  jr          $ra
    ctx->pc = 0x31A914u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31A918u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31A914u;
            // 0x31a918: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x31A91Cu;
}
