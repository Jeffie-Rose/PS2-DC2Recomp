#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: dynFIX_VERTEX__FP9SPI_STACKi
// Address: 0x17b530 - 0x17b5b8
void dynFIX_VERTEX__FP9SPI_STACKi_0x17b530(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("dynFIX_VERTEX__FP9SPI_STACKi_0x17b530");
#endif

    switch (ctx->pc) {
        case 0x17b550u: goto label_17b550;
        case 0x17b57cu: goto label_17b57c;
        case 0x17b594u: goto label_17b594;
        default: break;
    }

    ctx->pc = 0x17b530u;

    // 0x17b530: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x17b530u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x17b534: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x17b534u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x17b538: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x17b538u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x17b53c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x17b53cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x17b540: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x17b540u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17b544: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x17b544u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17b548: 0xc05ed10  jal         func_17B440
    ctx->pc = 0x17B548u;
    SET_GPR_U32(ctx, 31, 0x17B550u);
    ctx->pc = 0x17B54Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17B548u;
            // 0x17b54c: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17B440u;
    if (runtime->hasFunction(0x17B440u)) {
        auto targetFn = runtime->lookupFunction(0x17B440u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17B550u; }
        if (ctx->pc != 0x17B550u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dynFixVertex__FP9SPI_STACKi_0x17b440(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17B550u; }
        if (ctx->pc != 0x17B550u) { return; }
    }
    ctx->pc = 0x17B550u;
label_17b550:
    // 0x17b550: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x17b550u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17b554: 0x16000003  bnez        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x17B554u;
    {
        const bool branch_taken_0x17b554 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x17B558u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17B554u;
            // 0x17b558: 0x26520010  addiu       $s2, $s2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17b554) {
            ctx->pc = 0x17B564u;
            goto label_17b564;
        }
    }
    ctx->pc = 0x17B55Cu;
    // 0x17b55c: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x17B55Cu;
    {
        const bool branch_taken_0x17b55c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17B560u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17B55Cu;
            // 0x17b560: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17b55c) {
            ctx->pc = 0x17B5A0u;
            goto label_17b5a0;
        }
    }
    ctx->pc = 0x17B564u;
label_17b564:
    // 0x17b564: 0x2a220003  slti        $v0, $s1, 0x3
    ctx->pc = 0x17b564u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x17b568: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x17B568u;
    {
        const bool branch_taken_0x17b568 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x17B56Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17B568u;
            // 0x17b56c: 0x2a220004  slti        $v0, $s1, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)4) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x17b568) {
            ctx->pc = 0x17B584u;
            goto label_17b584;
        }
    }
    ctx->pc = 0x17B570u;
    // 0x17b570: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x17b570u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17b574: 0xc05190c  jal         func_146430
    ctx->pc = 0x17B574u;
    SET_GPR_U32(ctx, 31, 0x17B57Cu);
    ctx->pc = 0x17B578u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17B574u;
            // 0x17b578: 0x24920008  addiu       $s2, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x146430u;
    if (runtime->hasFunction(0x146430u)) {
        auto targetFn = runtime->lookupFunction(0x146430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17B57Cu; }
        if (ctx->pc != 0x17B57Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackFloat__FP9SPI_STACK_0x146430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17B57Cu; }
        if (ctx->pc != 0x17B57Cu) { return; }
    }
    ctx->pc = 0x17B57Cu;
label_17b57c:
    // 0x17b57c: 0xe6000014  swc1        $f0, 0x14($s0)
    ctx->pc = 0x17b57cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 20), bits); }
    // 0x17b580: 0x2a220004  slti        $v0, $s1, 0x4
    ctx->pc = 0x17b580u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)4) ? 1 : 0);
label_17b584:
    // 0x17b584: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x17B584u;
    {
        const bool branch_taken_0x17b584 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x17B588u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17B584u;
            // 0x17b588: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17b584) {
            ctx->pc = 0x17B598u;
            goto label_17b598;
        }
    }
    ctx->pc = 0x17B58Cu;
    // 0x17b58c: 0xc05190c  jal         func_146430
    ctx->pc = 0x17B58Cu;
    SET_GPR_U32(ctx, 31, 0x17B594u);
    ctx->pc = 0x146430u;
    if (runtime->hasFunction(0x146430u)) {
        auto targetFn = runtime->lookupFunction(0x146430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17B594u; }
        if (ctx->pc != 0x17B594u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackFloat__FP9SPI_STACK_0x146430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17B594u; }
        if (ctx->pc != 0x17B594u) { return; }
    }
    ctx->pc = 0x17B594u;
label_17b594:
    // 0x17b594: 0xe600001c  swc1        $f0, 0x1C($s0)
    ctx->pc = 0x17b594u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 28), bits); }
label_17b598:
    // 0x17b598: 0xae000018  sw          $zero, 0x18($s0)
    ctx->pc = 0x17b598u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 0));
    // 0x17b59c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x17b59cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_17b5a0:
    // 0x17b5a0: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x17b5a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x17b5a4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x17b5a4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17b5a8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x17b5a8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17b5ac: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x17b5acu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17b5b0: 0x3e00008  jr          $ra
    ctx->pc = 0x17B5B0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17B5B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17B5B0u;
            // 0x17b5b4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x17B5B8u;
}
