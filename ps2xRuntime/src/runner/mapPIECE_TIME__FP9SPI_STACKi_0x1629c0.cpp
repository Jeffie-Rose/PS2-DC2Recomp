#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: mapPIECE_TIME__FP9SPI_STACKi
// Address: 0x1629c0 - 0x162a3c
void mapPIECE_TIME__FP9SPI_STACKi_0x1629c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("mapPIECE_TIME__FP9SPI_STACKi_0x1629c0");
#endif

    switch (ctx->pc) {
        case 0x1629f4u: goto label_1629f4;
        case 0x162a04u: goto label_162a04;
        case 0x162a10u: goto label_162a10;
        case 0x162a20u: goto label_162a20;
        default: break;
    }

    ctx->pc = 0x1629c0u;

    // 0x1629c0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1629c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1629c4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1629c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1629c8: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1629c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x1629cc: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1629ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1629d0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1629d0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1629d4: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x1629d4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x1629d8: 0x8f84891c  lw          $a0, -0x76E4($gp)
    ctx->pc = 0x1629d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936860)));
    // 0x1629dc: 0x14800003  bnez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1629DCu;
    {
        const bool branch_taken_0x1629dc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1629E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1629DCu;
            // 0x1629e0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1629dc) {
            ctx->pc = 0x1629ECu;
            goto label_1629ec;
        }
    }
    ctx->pc = 0x1629E4u;
    // 0x1629e4: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x1629E4u;
    {
        const bool branch_taken_0x1629e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1629E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1629E4u;
            // 0x1629e8: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1629e4) {
            ctx->pc = 0x162A28u;
            goto label_162a28;
        }
    }
    ctx->pc = 0x1629ECu;
label_1629ec:
    // 0x1629ec: 0xc0588d8  jal         func_162360
    ctx->pc = 0x1629ECu;
    SET_GPR_U32(ctx, 31, 0x1629F4u);
    ctx->pc = 0x162360u;
    if (runtime->hasFunction(0x162360u)) {
        auto targetFn = runtime->lookupFunction(0x162360u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1629F4u; }
        if (ctx->pc != 0x1629F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        pGetData__17CList_9CMapPiece_Fv_0x162360(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1629F4u; }
        if (ctx->pc != 0x1629F4u) { return; }
    }
    ctx->pc = 0x1629F4u;
label_1629f4:
    // 0x1629f4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1629f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1629f8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1629f8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1629fc: 0xc05190c  jal         func_146430
    ctx->pc = 0x1629FCu;
    SET_GPR_U32(ctx, 31, 0x162A04u);
    ctx->pc = 0x162A00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1629FCu;
            // 0x162a00: 0x24910008  addiu       $s1, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x146430u;
    if (runtime->hasFunction(0x146430u)) {
        auto targetFn = runtime->lookupFunction(0x146430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x162A04u; }
        if (ctx->pc != 0x162A04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackFloat__FP9SPI_STACK_0x146430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x162A04u; }
        if (ctx->pc != 0x162A04u) { return; }
    }
    ctx->pc = 0x162A04u;
label_162a04:
    // 0x162a04: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x162a04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x162a08: 0xc05190c  jal         func_146430
    ctx->pc = 0x162A08u;
    SET_GPR_U32(ctx, 31, 0x162A10u);
    ctx->pc = 0x162A0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x162A08u;
            // 0x162a0c: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x146430u;
    if (runtime->hasFunction(0x146430u)) {
        auto targetFn = runtime->lookupFunction(0x146430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x162A10u; }
        if (ctx->pc != 0x162A10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackFloat__FP9SPI_STACK_0x146430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x162A10u; }
        if (ctx->pc != 0x162A10u) { return; }
    }
    ctx->pc = 0x162A10u;
label_162a10:
    // 0x162a10: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x162a10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x162a14: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x162a14u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x162a18: 0xc05a188  jal         func_168620
    ctx->pc = 0x162A18u;
    SET_GPR_U32(ctx, 31, 0x162A20u);
    ctx->pc = 0x162A1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x162A18u;
            // 0x162a1c: 0x46000346  mov.s       $f13, $f0 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x168620u;
    if (runtime->hasFunction(0x168620u)) {
        auto targetFn = runtime->lookupFunction(0x168620u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x162A20u; }
        if (ctx->pc != 0x162A20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetTimeBand__9CMapPieceFff_0x168620(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x162A20u; }
        if (ctx->pc != 0x162A20u) { return; }
    }
    ctx->pc = 0x162A20u;
label_162a20:
    // 0x162a20: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x162a20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x162a24: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x162a24u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_162a28:
    // 0x162a28: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x162a28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x162a2c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x162a2cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x162a30: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x162a30u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x162a34: 0x3e00008  jr          $ra
    ctx->pc = 0x162A34u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x162A38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x162A34u;
            // 0x162a38: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x162A3Cu;
}
