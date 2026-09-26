#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetBBox__8mgCFrameFPfPf
// Address: 0x1366f0 - 0x136758
void GetBBox__8mgCFrameFPfPf_0x1366f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetBBox__8mgCFrameFPfPf_0x1366f0");
#endif

    switch (ctx->pc) {
        case 0x136718u: goto label_136718;
        case 0x136720u: goto label_136720;
        case 0x136734u: goto label_136734;
        case 0x136744u: goto label_136744;
        default: break;
    }

    ctx->pc = 0x1366f0u;

    // 0x1366f0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1366f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1366f4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1366f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1366f8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1366f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1366fc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1366fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x136700: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x136700u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x136704: 0x8c8200f0  lw          $v0, 0xF0($a0)
    ctx->pc = 0x136704u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 240)));
    // 0x136708: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x136708u;
    {
        const bool branch_taken_0x136708 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x13670Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x136708u;
            // 0x13670c: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x136708) {
            ctx->pc = 0x136728u;
            goto label_136728;
        }
    }
    ctx->pc = 0x136710u;
    // 0x136710: 0xc04bc90  jal         func_12F240
    ctx->pc = 0x136710u;
    SET_GPR_U32(ctx, 31, 0x136718u);
    ctx->pc = 0x136714u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x136710u;
            // 0x136714: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12F240u;
    if (runtime->hasFunction(0x12F240u)) {
        auto targetFn = runtime->lookupFunction(0x12F240u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x136718u; }
        if (ctx->pc != 0x136718u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgZeroVectorW__FPf_0x12f240(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x136718u; }
        if (ctx->pc != 0x136718u) { return; }
    }
    ctx->pc = 0x136718u;
label_136718:
    // 0x136718: 0xc04bc90  jal         func_12F240
    ctx->pc = 0x136718u;
    SET_GPR_U32(ctx, 31, 0x136720u);
    ctx->pc = 0x13671Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x136718u;
            // 0x13671c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12F240u;
    if (runtime->hasFunction(0x12F240u)) {
        auto targetFn = runtime->lookupFunction(0x12F240u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x136720u; }
        if (ctx->pc != 0x136720u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgZeroVectorW__FPf_0x12f240(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x136720u; }
        if (ctx->pc != 0x136720u) { return; }
    }
    ctx->pc = 0x136720u;
label_136720:
    // 0x136720: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x136720u;
    {
        const bool branch_taken_0x136720 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x136724u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x136720u;
            // 0x136724: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x136720) {
            ctx->pc = 0x136748u;
            goto label_136748;
        }
    }
    ctx->pc = 0x136728u;
label_136728:
    // 0x136728: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x136728u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13672c: 0xc041c5c  jal         func_107170
    ctx->pc = 0x13672Cu;
    SET_GPR_U32(ctx, 31, 0x136734u);
    ctx->pc = 0x136730u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13672Cu;
            // 0x136730: 0x24450080  addiu       $a1, $v0, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107170u;
    if (runtime->hasFunction(0x107170u)) {
        auto targetFn = runtime->lookupFunction(0x107170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x136734u; }
        if (ctx->pc != 0x136734u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0CopyVector_0x107170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x136734u; }
        if (ctx->pc != 0x136734u) { return; }
    }
    ctx->pc = 0x136734u;
label_136734:
    // 0x136734: 0x8e2200f0  lw          $v0, 0xF0($s1)
    ctx->pc = 0x136734u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
    // 0x136738: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x136738u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13673c: 0xc041c5c  jal         func_107170
    ctx->pc = 0x13673Cu;
    SET_GPR_U32(ctx, 31, 0x136744u);
    ctx->pc = 0x136740u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13673Cu;
            // 0x136740: 0x24450090  addiu       $a1, $v0, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107170u;
    if (runtime->hasFunction(0x107170u)) {
        auto targetFn = runtime->lookupFunction(0x107170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x136744u; }
        if (ctx->pc != 0x136744u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0CopyVector_0x107170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x136744u; }
        if (ctx->pc != 0x136744u) { return; }
    }
    ctx->pc = 0x136744u;
label_136744:
    // 0x136744: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x136744u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_136748:
    // 0x136748: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x136748u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13674c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x13674cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x136750: 0x3e00008  jr          $ra
    ctx->pc = 0x136750u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x136754u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x136750u;
            // 0x136754: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x136758u;
}
