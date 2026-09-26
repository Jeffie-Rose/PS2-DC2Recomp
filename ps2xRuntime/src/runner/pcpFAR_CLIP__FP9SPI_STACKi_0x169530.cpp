#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: pcpFAR_CLIP__FP9SPI_STACKi
// Address: 0x169530 - 0x169584
void pcpFAR_CLIP__FP9SPI_STACKi_0x169530(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("pcpFAR_CLIP__FP9SPI_STACKi_0x169530");
#endif

    switch (ctx->pc) {
        case 0x169558u: goto label_169558;
        case 0x169568u: goto label_169568;
        default: break;
    }

    ctx->pc = 0x169530u;

    // 0x169530: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x169530u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x169534: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x169534u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x169538: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x169538u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x16953c: 0x8f828980  lw          $v0, -0x7680($gp)
    ctx->pc = 0x16953cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936960)));
    // 0x169540: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x169540u;
    {
        const bool branch_taken_0x169540 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x169544u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x169540u;
            // 0x169544: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x169540) {
            ctx->pc = 0x169550u;
            goto label_169550;
        }
    }
    ctx->pc = 0x169548u;
    // 0x169548: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x169548u;
    {
        const bool branch_taken_0x169548 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16954Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x169548u;
            // 0x16954c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x169548) {
            ctx->pc = 0x169574u;
            goto label_169574;
        }
    }
    ctx->pc = 0x169550u;
label_169550:
    // 0x169550: 0xc05190c  jal         func_146430
    ctx->pc = 0x169550u;
    SET_GPR_U32(ctx, 31, 0x169558u);
    ctx->pc = 0x146430u;
    if (runtime->hasFunction(0x146430u)) {
        auto targetFn = runtime->lookupFunction(0x146430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x169558u; }
        if (ctx->pc != 0x169558u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackFloat__FP9SPI_STACK_0x146430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x169558u; }
        if (ctx->pc != 0x169558u) { return; }
    }
    ctx->pc = 0x169558u;
label_169558:
    // 0x169558: 0x8f828980  lw          $v0, -0x7680($gp)
    ctx->pc = 0x169558u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936960)));
    // 0x16955c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x16955cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x169560: 0xc0518f8  jal         func_1463E0
    ctx->pc = 0x169560u;
    SET_GPR_U32(ctx, 31, 0x169568u);
    ctx->pc = 0x169564u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x169560u;
            // 0x169564: 0xe4400010  swc1        $f0, 0x10($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 16), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1463E0u;
    if (runtime->hasFunction(0x1463E0u)) {
        auto targetFn = runtime->lookupFunction(0x1463E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x169568u; }
        if (ctx->pc != 0x169568u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackInt__FP9SPI_STACK_0x1463e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x169568u; }
        if (ctx->pc != 0x169568u) { return; }
    }
    ctx->pc = 0x169568u;
label_169568:
    // 0x169568: 0x8f838980  lw          $v1, -0x7680($gp)
    ctx->pc = 0x169568u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936960)));
    // 0x16956c: 0xac620014  sw          $v0, 0x14($v1)
    ctx->pc = 0x16956cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 2));
    // 0x169570: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x169570u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_169574:
    // 0x169574: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x169574u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x169578: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x169578u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16957c: 0x3e00008  jr          $ra
    ctx->pc = 0x16957Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x169580u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16957Cu;
            // 0x169580: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x169584u;
}
