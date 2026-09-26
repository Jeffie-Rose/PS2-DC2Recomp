#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: dynFIX_VERTEX_C__FP9SPI_STACKi
// Address: 0x17b5c0 - 0x17b64c
void dynFIX_VERTEX_C__FP9SPI_STACKi_0x17b5c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("dynFIX_VERTEX_C__FP9SPI_STACKi_0x17b5c0");
#endif

    switch (ctx->pc) {
        case 0x17b5e0u: goto label_17b5e0;
        case 0x17b60cu: goto label_17b60c;
        case 0x17b624u: goto label_17b624;
        default: break;
    }

    ctx->pc = 0x17b5c0u;

    // 0x17b5c0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x17b5c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x17b5c4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x17b5c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x17b5c8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x17b5c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x17b5cc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x17b5ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x17b5d0: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x17b5d0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17b5d4: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x17b5d4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17b5d8: 0xc05ed10  jal         func_17B440
    ctx->pc = 0x17B5D8u;
    SET_GPR_U32(ctx, 31, 0x17B5E0u);
    ctx->pc = 0x17B5DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17B5D8u;
            // 0x17b5dc: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17B440u;
    if (runtime->hasFunction(0x17B440u)) {
        auto targetFn = runtime->lookupFunction(0x17B440u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17B5E0u; }
        if (ctx->pc != 0x17B5E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dynFixVertex__FP9SPI_STACKi_0x17b440(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17B5E0u; }
        if (ctx->pc != 0x17B5E0u) { return; }
    }
    ctx->pc = 0x17B5E0u;
label_17b5e0:
    // 0x17b5e0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x17b5e0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17b5e4: 0x16000003  bnez        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x17B5E4u;
    {
        const bool branch_taken_0x17b5e4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x17B5E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17B5E4u;
            // 0x17b5e8: 0x26520010  addiu       $s2, $s2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17b5e4) {
            ctx->pc = 0x17B5F4u;
            goto label_17b5f4;
        }
    }
    ctx->pc = 0x17B5ECu;
    // 0x17b5ec: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x17B5ECu;
    {
        const bool branch_taken_0x17b5ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17B5F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17B5ECu;
            // 0x17b5f0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17b5ec) {
            ctx->pc = 0x17B634u;
            goto label_17b634;
        }
    }
    ctx->pc = 0x17B5F4u;
label_17b5f4:
    // 0x17b5f4: 0x2a220003  slti        $v0, $s1, 0x3
    ctx->pc = 0x17b5f4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x17b5f8: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x17B5F8u;
    {
        const bool branch_taken_0x17b5f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x17B5FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17B5F8u;
            // 0x17b5fc: 0x2a220004  slti        $v0, $s1, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)4) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x17b5f8) {
            ctx->pc = 0x17B614u;
            goto label_17b614;
        }
    }
    ctx->pc = 0x17B600u;
    // 0x17b600: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x17b600u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17b604: 0xc05190c  jal         func_146430
    ctx->pc = 0x17B604u;
    SET_GPR_U32(ctx, 31, 0x17B60Cu);
    ctx->pc = 0x17B608u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17B604u;
            // 0x17b608: 0x24920008  addiu       $s2, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x146430u;
    if (runtime->hasFunction(0x146430u)) {
        auto targetFn = runtime->lookupFunction(0x146430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17B60Cu; }
        if (ctx->pc != 0x17B60Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackFloat__FP9SPI_STACK_0x146430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17B60Cu; }
        if (ctx->pc != 0x17B60Cu) { return; }
    }
    ctx->pc = 0x17B60Cu;
label_17b60c:
    // 0x17b60c: 0xe6000014  swc1        $f0, 0x14($s0)
    ctx->pc = 0x17b60cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 20), bits); }
    // 0x17b610: 0x2a220004  slti        $v0, $s1, 0x4
    ctx->pc = 0x17b610u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)4) ? 1 : 0);
label_17b614:
    // 0x17b614: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x17B614u;
    {
        const bool branch_taken_0x17b614 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x17B618u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17B614u;
            // 0x17b618: 0x3c033f80  lui         $v1, 0x3F80 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17b614) {
            ctx->pc = 0x17B62Cu;
            goto label_17b62c;
        }
    }
    ctx->pc = 0x17B61Cu;
    // 0x17b61c: 0xc05190c  jal         func_146430
    ctx->pc = 0x17B61Cu;
    SET_GPR_U32(ctx, 31, 0x17B624u);
    ctx->pc = 0x17B620u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17B61Cu;
            // 0x17b620: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x146430u;
    if (runtime->hasFunction(0x146430u)) {
        auto targetFn = runtime->lookupFunction(0x146430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17B624u; }
        if (ctx->pc != 0x17B624u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackFloat__FP9SPI_STACK_0x146430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17B624u; }
        if (ctx->pc != 0x17B624u) { return; }
    }
    ctx->pc = 0x17B624u;
label_17b624:
    // 0x17b624: 0xe600001c  swc1        $f0, 0x1C($s0)
    ctx->pc = 0x17b624u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 28), bits); }
    // 0x17b628: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x17b628u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_17b62c:
    // 0x17b62c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x17b62cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x17b630: 0xae030018  sw          $v1, 0x18($s0)
    ctx->pc = 0x17b630u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 3));
label_17b634:
    // 0x17b634: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x17b634u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x17b638: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x17b638u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17b63c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x17b63cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17b640: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x17b640u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17b644: 0x3e00008  jr          $ra
    ctx->pc = 0x17B644u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17B648u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17B644u;
            // 0x17b648: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x17B64Cu;
}
