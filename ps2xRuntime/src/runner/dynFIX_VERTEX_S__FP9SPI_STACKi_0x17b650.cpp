#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: dynFIX_VERTEX_S__FP9SPI_STACKi
// Address: 0x17b650 - 0x17b6dc
void dynFIX_VERTEX_S__FP9SPI_STACKi_0x17b650(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("dynFIX_VERTEX_S__FP9SPI_STACKi_0x17b650");
#endif

    switch (ctx->pc) {
        case 0x17b670u: goto label_17b670;
        case 0x17b69cu: goto label_17b69c;
        case 0x17b6b4u: goto label_17b6b4;
        default: break;
    }

    ctx->pc = 0x17b650u;

    // 0x17b650: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x17b650u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x17b654: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x17b654u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x17b658: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x17b658u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x17b65c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x17b65cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x17b660: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x17b660u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17b664: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x17b664u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17b668: 0xc05ed10  jal         func_17B440
    ctx->pc = 0x17B668u;
    SET_GPR_U32(ctx, 31, 0x17B670u);
    ctx->pc = 0x17B66Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17B668u;
            // 0x17b66c: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17B440u;
    if (runtime->hasFunction(0x17B440u)) {
        auto targetFn = runtime->lookupFunction(0x17B440u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17B670u; }
        if (ctx->pc != 0x17B670u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dynFixVertex__FP9SPI_STACKi_0x17b440(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17B670u; }
        if (ctx->pc != 0x17B670u) { return; }
    }
    ctx->pc = 0x17B670u;
label_17b670:
    // 0x17b670: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x17b670u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17b674: 0x16000003  bnez        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x17B674u;
    {
        const bool branch_taken_0x17b674 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x17B678u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17B674u;
            // 0x17b678: 0x26520010  addiu       $s2, $s2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17b674) {
            ctx->pc = 0x17B684u;
            goto label_17b684;
        }
    }
    ctx->pc = 0x17B67Cu;
    // 0x17b67c: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x17B67Cu;
    {
        const bool branch_taken_0x17b67c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17B680u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17B67Cu;
            // 0x17b680: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17b67c) {
            ctx->pc = 0x17B6C4u;
            goto label_17b6c4;
        }
    }
    ctx->pc = 0x17B684u;
label_17b684:
    // 0x17b684: 0x2a220003  slti        $v0, $s1, 0x3
    ctx->pc = 0x17b684u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x17b688: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x17B688u;
    {
        const bool branch_taken_0x17b688 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x17B68Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17B688u;
            // 0x17b68c: 0x2a220004  slti        $v0, $s1, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)4) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x17b688) {
            ctx->pc = 0x17B6A4u;
            goto label_17b6a4;
        }
    }
    ctx->pc = 0x17B690u;
    // 0x17b690: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x17b690u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17b694: 0xc05190c  jal         func_146430
    ctx->pc = 0x17B694u;
    SET_GPR_U32(ctx, 31, 0x17B69Cu);
    ctx->pc = 0x17B698u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17B694u;
            // 0x17b698: 0x24920008  addiu       $s2, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x146430u;
    if (runtime->hasFunction(0x146430u)) {
        auto targetFn = runtime->lookupFunction(0x146430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17B69Cu; }
        if (ctx->pc != 0x17B69Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackFloat__FP9SPI_STACK_0x146430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17B69Cu; }
        if (ctx->pc != 0x17B69Cu) { return; }
    }
    ctx->pc = 0x17B69Cu;
label_17b69c:
    // 0x17b69c: 0xe6000014  swc1        $f0, 0x14($s0)
    ctx->pc = 0x17b69cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 20), bits); }
    // 0x17b6a0: 0x2a220004  slti        $v0, $s1, 0x4
    ctx->pc = 0x17b6a0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)4) ? 1 : 0);
label_17b6a4:
    // 0x17b6a4: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x17B6A4u;
    {
        const bool branch_taken_0x17b6a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x17B6A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17B6A4u;
            // 0x17b6a8: 0x3c03bf80  lui         $v1, 0xBF80 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49024 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17b6a4) {
            ctx->pc = 0x17B6BCu;
            goto label_17b6bc;
        }
    }
    ctx->pc = 0x17B6ACu;
    // 0x17b6ac: 0xc05190c  jal         func_146430
    ctx->pc = 0x17B6ACu;
    SET_GPR_U32(ctx, 31, 0x17B6B4u);
    ctx->pc = 0x17B6B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17B6ACu;
            // 0x17b6b0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x146430u;
    if (runtime->hasFunction(0x146430u)) {
        auto targetFn = runtime->lookupFunction(0x146430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17B6B4u; }
        if (ctx->pc != 0x17B6B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackFloat__FP9SPI_STACK_0x146430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17B6B4u; }
        if (ctx->pc != 0x17B6B4u) { return; }
    }
    ctx->pc = 0x17B6B4u;
label_17b6b4:
    // 0x17b6b4: 0xe600001c  swc1        $f0, 0x1C($s0)
    ctx->pc = 0x17b6b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 28), bits); }
    // 0x17b6b8: 0x3c03bf80  lui         $v1, 0xBF80
    ctx->pc = 0x17b6b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49024 << 16));
label_17b6bc:
    // 0x17b6bc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x17b6bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x17b6c0: 0xae030018  sw          $v1, 0x18($s0)
    ctx->pc = 0x17b6c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 3));
label_17b6c4:
    // 0x17b6c4: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x17b6c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x17b6c8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x17b6c8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17b6cc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x17b6ccu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17b6d0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x17b6d0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17b6d4: 0x3e00008  jr          $ra
    ctx->pc = 0x17B6D4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17B6D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17B6D4u;
            // 0x17b6d8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x17B6DCu;
}
