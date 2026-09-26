#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: mapTIME_FLAG__FP9SPI_STACKi
// Address: 0x165850 - 0x1658d8
void mapTIME_FLAG__FP9SPI_STACKi_0x165850(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("mapTIME_FLAG__FP9SPI_STACKi_0x165850");
#endif

    switch (ctx->pc) {
        case 0x16586cu: goto label_16586c;
        case 0x165880u: goto label_165880;
        case 0x16589cu: goto label_16589c;
        case 0x1658b8u: goto label_1658b8;
        default: break;
    }

    ctx->pc = 0x165850u;

    // 0x165850: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x165850u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x165854: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x165854u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x165858: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x165858u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x16585c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x16585cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x165860: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x165860u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x165864: 0xc0518f8  jal         func_1463E0
    ctx->pc = 0x165864u;
    SET_GPR_U32(ctx, 31, 0x16586Cu);
    ctx->pc = 0x165868u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x165864u;
            // 0x165868: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1463E0u;
    if (runtime->hasFunction(0x1463E0u)) {
        auto targetFn = runtime->lookupFunction(0x1463E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16586Cu; }
        if (ctx->pc != 0x16586Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackInt__FP9SPI_STACK_0x1463e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16586Cu; }
        if (ctx->pc != 0x16586Cu) { return; }
    }
    ctx->pc = 0x16586Cu;
label_16586c:
    // 0x16586c: 0x8f83895c  lw          $v1, -0x76A4($gp)
    ctx->pc = 0x16586cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936924)));
    // 0x165870: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x165870u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x165874: 0x24900008  addiu       $s0, $a0, 0x8
    ctx->pc = 0x165874u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x165878: 0xc0518f8  jal         func_1463E0
    ctx->pc = 0x165878u;
    SET_GPR_U32(ctx, 31, 0x165880u);
    ctx->pc = 0x16587Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x165878u;
            // 0x16587c: 0xac6200c0  sw          $v0, 0xC0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 192), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1463E0u;
    if (runtime->hasFunction(0x1463E0u)) {
        auto targetFn = runtime->lookupFunction(0x1463E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x165880u; }
        if (ctx->pc != 0x165880u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackInt__FP9SPI_STACK_0x1463e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x165880u; }
        if (ctx->pc != 0x165880u) { return; }
    }
    ctx->pc = 0x165880u;
label_165880:
    // 0x165880: 0x8f84895c  lw          $a0, -0x76A4($gp)
    ctx->pc = 0x165880u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936924)));
    // 0x165884: 0x2a230003  slti        $v1, $s1, 0x3
    ctx->pc = 0x165884u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x165888: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x165888u;
    {
        const bool branch_taken_0x165888 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x16588Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x165888u;
            // 0x16588c: 0xac8200c4  sw          $v0, 0xC4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 196), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x165888) {
            ctx->pc = 0x1658A4u;
            goto label_1658a4;
        }
    }
    ctx->pc = 0x165890u;
    // 0x165890: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x165890u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x165894: 0xc05190c  jal         func_146430
    ctx->pc = 0x165894u;
    SET_GPR_U32(ctx, 31, 0x16589Cu);
    ctx->pc = 0x165898u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x165894u;
            // 0x165898: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x146430u;
    if (runtime->hasFunction(0x146430u)) {
        auto targetFn = runtime->lookupFunction(0x146430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16589Cu; }
        if (ctx->pc != 0x16589Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackFloat__FP9SPI_STACK_0x146430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16589Cu; }
        if (ctx->pc != 0x16589Cu) { return; }
    }
    ctx->pc = 0x16589Cu;
label_16589c:
    // 0x16589c: 0x8f82895c  lw          $v0, -0x76A4($gp)
    ctx->pc = 0x16589cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936924)));
    // 0x1658a0: 0xe44000c8  swc1        $f0, 0xC8($v0)
    ctx->pc = 0x1658a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 200), bits); }
label_1658a4:
    // 0x1658a4: 0x2a220004  slti        $v0, $s1, 0x4
    ctx->pc = 0x1658a4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x1658a8: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1658A8u;
    {
        const bool branch_taken_0x1658a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1658ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1658A8u;
            // 0x1658ac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1658a8) {
            ctx->pc = 0x1658C0u;
            goto label_1658c0;
        }
    }
    ctx->pc = 0x1658B0u;
    // 0x1658b0: 0xc0518f8  jal         func_1463E0
    ctx->pc = 0x1658B0u;
    SET_GPR_U32(ctx, 31, 0x1658B8u);
    ctx->pc = 0x1463E0u;
    if (runtime->hasFunction(0x1463E0u)) {
        auto targetFn = runtime->lookupFunction(0x1463E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1658B8u; }
        if (ctx->pc != 0x1658B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackInt__FP9SPI_STACK_0x1463e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1658B8u; }
        if (ctx->pc != 0x1658B8u) { return; }
    }
    ctx->pc = 0x1658B8u;
label_1658b8:
    // 0x1658b8: 0x8f83895c  lw          $v1, -0x76A4($gp)
    ctx->pc = 0x1658b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936924)));
    // 0x1658bc: 0xac6200cc  sw          $v0, 0xCC($v1)
    ctx->pc = 0x1658bcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 204), GPR_U32(ctx, 2));
label_1658c0:
    // 0x1658c0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1658c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1658c4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1658c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1658c8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1658c8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1658cc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1658ccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1658d0: 0x3e00008  jr          $ra
    ctx->pc = 0x1658D0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1658D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1658D0u;
            // 0x1658d4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1658D8u;
}
