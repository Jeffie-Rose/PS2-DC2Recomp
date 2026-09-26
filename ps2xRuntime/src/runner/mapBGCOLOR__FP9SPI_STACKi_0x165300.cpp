#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: mapBGCOLOR__FP9SPI_STACKi
// Address: 0x165300 - 0x165374
void mapBGCOLOR__FP9SPI_STACKi_0x165300(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("mapBGCOLOR__FP9SPI_STACKi_0x165300");
#endif

    switch (ctx->pc) {
        case 0x165328u: goto label_165328;
        case 0x16533cu: goto label_16533c;
        case 0x16534cu: goto label_16534c;
        default: break;
    }

    ctx->pc = 0x165300u;

    // 0x165300: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x165300u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x165304: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x165304u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x165308: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x165308u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x16530c: 0x8f82896c  lw          $v0, -0x7694($gp)
    ctx->pc = 0x16530cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936940)));
    // 0x165310: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x165310u;
    {
        const bool branch_taken_0x165310 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x165314u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x165310u;
            // 0x165314: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x165310) {
            ctx->pc = 0x165320u;
            goto label_165320;
        }
    }
    ctx->pc = 0x165318u;
    // 0x165318: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x165318u;
    {
        const bool branch_taken_0x165318 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16531Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x165318u;
            // 0x16531c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x165318) {
            ctx->pc = 0x165364u;
            goto label_165364;
        }
    }
    ctx->pc = 0x165320u;
label_165320:
    // 0x165320: 0xc05190c  jal         func_146430
    ctx->pc = 0x165320u;
    SET_GPR_U32(ctx, 31, 0x165328u);
    ctx->pc = 0x146430u;
    if (runtime->hasFunction(0x146430u)) {
        auto targetFn = runtime->lookupFunction(0x146430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x165328u; }
        if (ctx->pc != 0x165328u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackFloat__FP9SPI_STACK_0x146430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x165328u; }
        if (ctx->pc != 0x165328u) { return; }
    }
    ctx->pc = 0x165328u;
label_165328:
    // 0x165328: 0x8f82896c  lw          $v0, -0x7694($gp)
    ctx->pc = 0x165328u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936940)));
    // 0x16532c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x16532cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x165330: 0x24900008  addiu       $s0, $a0, 0x8
    ctx->pc = 0x165330u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x165334: 0xc05190c  jal         func_146430
    ctx->pc = 0x165334u;
    SET_GPR_U32(ctx, 31, 0x16533Cu);
    ctx->pc = 0x165338u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x165334u;
            // 0x165338: 0xe4400010  swc1        $f0, 0x10($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 16), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x146430u;
    if (runtime->hasFunction(0x146430u)) {
        auto targetFn = runtime->lookupFunction(0x146430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16533Cu; }
        if (ctx->pc != 0x16533Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackFloat__FP9SPI_STACK_0x146430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16533Cu; }
        if (ctx->pc != 0x16533Cu) { return; }
    }
    ctx->pc = 0x16533Cu;
label_16533c:
    // 0x16533c: 0x8f82896c  lw          $v0, -0x7694($gp)
    ctx->pc = 0x16533cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936940)));
    // 0x165340: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x165340u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x165344: 0xc05190c  jal         func_146430
    ctx->pc = 0x165344u;
    SET_GPR_U32(ctx, 31, 0x16534Cu);
    ctx->pc = 0x165348u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x165344u;
            // 0x165348: 0xe4400014  swc1        $f0, 0x14($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 20), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x146430u;
    if (runtime->hasFunction(0x146430u)) {
        auto targetFn = runtime->lookupFunction(0x146430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16534Cu; }
        if (ctx->pc != 0x16534Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackFloat__FP9SPI_STACK_0x146430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16534Cu; }
        if (ctx->pc != 0x16534Cu) { return; }
    }
    ctx->pc = 0x16534Cu;
label_16534c:
    // 0x16534c: 0x8f83896c  lw          $v1, -0x7694($gp)
    ctx->pc = 0x16534cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936940)));
    // 0x165350: 0x3c044300  lui         $a0, 0x4300
    ctx->pc = 0x165350u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17152 << 16));
    // 0x165354: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x165354u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x165358: 0xe4600018  swc1        $f0, 0x18($v1)
    ctx->pc = 0x165358u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 24), bits); }
    // 0x16535c: 0x8f83896c  lw          $v1, -0x7694($gp)
    ctx->pc = 0x16535cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936940)));
    // 0x165360: 0xac64001c  sw          $a0, 0x1C($v1)
    ctx->pc = 0x165360u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 28), GPR_U32(ctx, 4));
label_165364:
    // 0x165364: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x165364u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x165368: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x165368u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16536c: 0x3e00008  jr          $ra
    ctx->pc = 0x16536Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x165370u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16536Cu;
            // 0x165370: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x165374u;
}
