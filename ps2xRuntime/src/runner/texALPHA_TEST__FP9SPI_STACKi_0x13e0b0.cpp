#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: texALPHA_TEST__FP9SPI_STACKi
// Address: 0x13e0b0 - 0x13e120
void texALPHA_TEST__FP9SPI_STACKi_0x13e0b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("texALPHA_TEST__FP9SPI_STACKi_0x13e0b0");
#endif

    switch (ctx->pc) {
        case 0x13e0dcu: goto label_13e0dc;
        case 0x13e0fcu: goto label_13e0fc;
        default: break;
    }

    ctx->pc = 0x13e0b0u;

    // 0x13e0b0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x13e0b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x13e0b4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x13e0b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x13e0b8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x13e0b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x13e0bc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x13e0bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x13e0c0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x13e0c0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13e0c4: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x13e0c4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13e0c8: 0x1a000006  blez        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x13E0C8u;
    {
        const bool branch_taken_0x13e0c8 = (GPR_S32(ctx, 16) <= 0);
        if (branch_taken_0x13e0c8) {
            ctx->pc = 0x13E0E4u;
            goto label_13e0e4;
        }
    }
    ctx->pc = 0x13E0D0u;
    // 0x13e0d0: 0x24910008  addiu       $s1, $a0, 0x8
    ctx->pc = 0x13e0d0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x13e0d4: 0xc0518f8  jal         func_1463E0
    ctx->pc = 0x13E0D4u;
    SET_GPR_U32(ctx, 31, 0x13E0DCu);
    ctx->pc = 0x1463E0u;
    if (runtime->hasFunction(0x1463E0u)) {
        auto targetFn = runtime->lookupFunction(0x1463E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13E0DCu; }
        if (ctx->pc != 0x13E0DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackInt__FP9SPI_STACK_0x1463e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13E0DCu; }
        if (ctx->pc != 0x13E0DCu) { return; }
    }
    ctx->pc = 0x13E0DCu;
label_13e0dc:
    // 0x13e0dc: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x13e0dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x13e0e0: 0xa0220e9e  sb          $v0, 0xE9E($at)
    ctx->pc = 0x13e0e0u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 3742), (uint8_t)GPR_U32(ctx, 2));
label_13e0e4:
    // 0x13e0e4: 0x2a010002  slti        $at, $s0, 0x2
    ctx->pc = 0x13e0e4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x13e0e8: 0x14200006  bnez        $at, . + 4 + (0x6 << 2)
    ctx->pc = 0x13E0E8u;
    {
        const bool branch_taken_0x13e0e8 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x13e0e8) {
            ctx->pc = 0x13E104u;
            goto label_13e104;
        }
    }
    ctx->pc = 0x13E0F0u;
    // 0x13e0f0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x13e0f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13e0f4: 0xc0518f8  jal         func_1463E0
    ctx->pc = 0x13E0F4u;
    SET_GPR_U32(ctx, 31, 0x13E0FCu);
    ctx->pc = 0x1463E0u;
    if (runtime->hasFunction(0x1463E0u)) {
        auto targetFn = runtime->lookupFunction(0x1463E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13E0FCu; }
        if (ctx->pc != 0x13E0FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackInt__FP9SPI_STACK_0x1463e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13E0FCu; }
        if (ctx->pc != 0x13E0FCu) { return; }
    }
    ctx->pc = 0x13E0FCu;
label_13e0fc:
    // 0x13e0fc: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x13e0fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x13e100: 0xa0220e9f  sb          $v0, 0xE9F($at)
    ctx->pc = 0x13e100u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 3743), (uint8_t)GPR_U32(ctx, 2));
label_13e104:
    // 0x13e104: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x13e104u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x13e108: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x13e108u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x13e10c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x13e10cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13e110: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x13e110u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13e114: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x13e114u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x13e118: 0x3e00008  jr          $ra
    ctx->pc = 0x13E118u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x13E120u;
}
