#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _GET_ADJUST_POLYGON_SCALE__FP12RS_STACKDATAi
// Address: 0x265130 - 0x2651b4
void ps2__GET_ADJUST_POLYGON_SCALE__FP12RS_STACKDATAi_0x265130(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__GET_ADJUST_POLYGON_SCALE__FP12RS_STACKDATAi_0x265130");
#endif

    switch (ctx->pc) {
        case 0x265148u: goto label_265148;
        case 0x265158u: goto label_265158;
        case 0x265164u: goto label_265164;
        case 0x265190u: goto label_265190;
        case 0x26519cu: goto label_26519c;
        default: break;
    }

    ctx->pc = 0x265130u;

    // 0x265130: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x265130u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x265134: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x265134u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x265138: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x265138u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x26513c: 0x24900008  addiu       $s0, $a0, 0x8
    ctx->pc = 0x26513cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x265140: 0xc097e18  jal         func_25F860
    ctx->pc = 0x265140u;
    SET_GPR_U32(ctx, 31, 0x265148u);
    ctx->pc = 0x265144u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x265140u;
            // 0x265144: 0xe7b40000  swc1        $f20, 0x0($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x265148u; }
        if (ctx->pc != 0x265148u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x265148u; }
        if (ctx->pc != 0x265148u) { return; }
    }
    ctx->pc = 0x265148u;
label_265148:
    // 0x265148: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x265148u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26514c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x26514cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x265150: 0xc097e28  jal         func_25F8A0
    ctx->pc = 0x265150u;
    SET_GPR_U32(ctx, 31, 0x265158u);
    ctx->pc = 0x265154u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x265150u;
            // 0x265154: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F8A0u;
    if (runtime->hasFunction(0x25F8A0u)) {
        auto targetFn = runtime->lookupFunction(0x25F8A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x265158u; }
        if (ctx->pc != 0x265158u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackFloat__FP12RS_STACKDATA_0x25f8a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x265158u; }
        if (ctx->pc != 0x265158u) { return; }
    }
    ctx->pc = 0x265158u;
label_265158:
    // 0x265158: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x265158u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x26515c: 0xc0956d4  jal         func_255B50
    ctx->pc = 0x26515Cu;
    SET_GPR_U32(ctx, 31, 0x265164u);
    ctx->pc = 0x265160u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26515Cu;
            // 0x265160: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x255B50u;
    if (runtime->hasFunction(0x255B50u)) {
        auto targetFn = runtime->lookupFunction(0x255B50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x265164u; }
        if (ctx->pc != 0x265164u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetCharacter__Fi_0x255b50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x265164u; }
        if (ctx->pc != 0x265164u) { return; }
    }
    ctx->pc = 0x265164u;
label_265164:
    // 0x265164: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x265164u;
    {
        const bool branch_taken_0x265164 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x265164) {
            ctx->pc = 0x265174u;
            goto label_265174;
        }
    }
    ctx->pc = 0x26516Cu;
    // 0x26516c: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x26516Cu;
    {
        const bool branch_taken_0x26516c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x265170u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26516Cu;
            // 0x265170: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26516c) {
            ctx->pc = 0x2651A0u;
            goto label_2651a0;
        }
    }
    ctx->pc = 0x265174u;
label_265174:
    // 0x265174: 0x8c440070  lw          $a0, 0x70($v0)
    ctx->pc = 0x265174u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 112)));
    // 0x265178: 0x14800003  bnez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x265178u;
    {
        const bool branch_taken_0x265178 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x26517Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x265178u;
            // 0x26517c: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x265178) {
            ctx->pc = 0x265188u;
            goto label_265188;
        }
    }
    ctx->pc = 0x265180u;
    // 0x265180: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x265180u;
    {
        const bool branch_taken_0x265180 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x265184u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x265180u;
            // 0x265184: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x265180) {
            ctx->pc = 0x2651A0u;
            goto label_2651a0;
        }
    }
    ctx->pc = 0x265188u;
label_265188:
    // 0x265188: 0xc0941f4  jal         func_2507D0
    ctx->pc = 0x265188u;
    SET_GPR_U32(ctx, 31, 0x265190u);
    ctx->pc = 0x2507D0u;
    if (runtime->hasFunction(0x2507D0u)) {
        auto targetFn = runtime->lookupFunction(0x2507D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x265190u; }
        if (ctx->pc != 0x265190u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuAdjustPolygonScale__FP8mgCFramef_0x2507d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x265190u; }
        if (ctx->pc != 0x265190u) { return; }
    }
    ctx->pc = 0x265190u;
label_265190:
    // 0x265190: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x265190u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x265194: 0xc097e54  jal         func_25F950
    ctx->pc = 0x265194u;
    SET_GPR_U32(ctx, 31, 0x26519Cu);
    ctx->pc = 0x265198u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x265194u;
            // 0x265198: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F950u;
    if (runtime->hasFunction(0x25F950u)) {
        auto targetFn = runtime->lookupFunction(0x25F950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26519Cu; }
        if (ctx->pc != 0x26519Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAf_0x25f950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26519Cu; }
        if (ctx->pc != 0x26519Cu) { return; }
    }
    ctx->pc = 0x26519Cu;
label_26519c:
    // 0x26519c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x26519cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2651a0:
    // 0x2651a0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2651a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2651a4: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x2651a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2651a8: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2651a8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2651ac: 0x3e00008  jr          $ra
    ctx->pc = 0x2651ACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2651B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2651ACu;
            // 0x2651b0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2651B4u;
}
