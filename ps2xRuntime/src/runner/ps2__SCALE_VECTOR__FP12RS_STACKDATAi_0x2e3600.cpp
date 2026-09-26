#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _SCALE_VECTOR__FP12RS_STACKDATAi
// Address: 0x2e3600 - 0x2e3670
void ps2__SCALE_VECTOR__FP12RS_STACKDATAi_0x2e3600(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__SCALE_VECTOR__FP12RS_STACKDATAi_0x2e3600");
#endif

    switch (ctx->pc) {
        case 0x2e3624u: goto label_2e3624;
        case 0x2e3638u: goto label_2e3638;
        case 0x2e364cu: goto label_2e364c;
        case 0x2e3660u: goto label_2e3660;
        default: break;
    }

    ctx->pc = 0x2e3600u;

    // 0x2e3600: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2e3600u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2e3604: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x2e3604u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2e3608: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2e3608u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2e360c: 0x10a20003  beq         $a1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2E360Cu;
    {
        const bool branch_taken_0x2e360c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x2E3610u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E360Cu;
            // 0x2e3610: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e360c) {
            ctx->pc = 0x2E361Cu;
            goto label_2e361c;
        }
    }
    ctx->pc = 0x2E3614u;
    // 0x2e3614: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x2E3614u;
    {
        const bool branch_taken_0x2e3614 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E3618u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E3614u;
            // 0x2e3618: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e3614) {
            ctx->pc = 0x2E3664u;
            goto label_2e3664;
        }
    }
    ctx->pc = 0x2E361Cu;
label_2e361c:
    // 0x2e361c: 0xc0b8cb0  jal         func_2E32C0
    ctx->pc = 0x2E361Cu;
    SET_GPR_U32(ctx, 31, 0x2E3624u);
    ctx->pc = 0x2E3620u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E361Cu;
            // 0x2e3620: 0x24c40018  addiu       $a0, $a2, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 24));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E32C0u;
    if (runtime->hasFunction(0x2E32C0u)) {
        auto targetFn = runtime->lookupFunction(0x2E32C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E3624u; }
        if (ctx->pc != 0x2E3624u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackFloat__FP12RS_STACKDATA_0x2e32c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E3624u; }
        if (ctx->pc != 0x2E3624u) { return; }
    }
    ctx->pc = 0x2E3624u;
label_2e3624:
    // 0x2e3624: 0x8cc20004  lw          $v0, 0x4($a2)
    ctx->pc = 0x2e3624u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x2e3628: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x2e3628u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e362c: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x2e362cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e3630: 0xc0b8cdc  jal         func_2E3370
    ctx->pc = 0x2E3630u;
    SET_GPR_U32(ctx, 31, 0x2E3638u);
    ctx->pc = 0x2E3634u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E3630u;
            // 0x2e3634: 0x46000b02  mul.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E3370u;
    if (runtime->hasFunction(0x2E3370u)) {
        auto targetFn = runtime->lookupFunction(0x2E3370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E3638u; }
        if (ctx->pc != 0x2E3638u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAf_0x2e3370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E3638u; }
        if (ctx->pc != 0x2E3638u) { return; }
    }
    ctx->pc = 0x2E3638u;
label_2e3638:
    // 0x2e3638: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x2e3638u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x2e363c: 0x24c40008  addiu       $a0, $a2, 0x8
    ctx->pc = 0x2e363cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
    // 0x2e3640: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x2e3640u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e3644: 0xc0b8cdc  jal         func_2E3370
    ctx->pc = 0x2E3644u;
    SET_GPR_U32(ctx, 31, 0x2E364Cu);
    ctx->pc = 0x2E3648u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E3644u;
            // 0x2e3648: 0x46000b02  mul.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E3370u;
    if (runtime->hasFunction(0x2E3370u)) {
        auto targetFn = runtime->lookupFunction(0x2E3370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E364Cu; }
        if (ctx->pc != 0x2E364Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAf_0x2e3370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E364Cu; }
        if (ctx->pc != 0x2E364Cu) { return; }
    }
    ctx->pc = 0x2E364Cu;
label_2e364c:
    // 0x2e364c: 0x8cc20014  lw          $v0, 0x14($a2)
    ctx->pc = 0x2e364cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 20)));
    // 0x2e3650: 0x24c40010  addiu       $a0, $a2, 0x10
    ctx->pc = 0x2e3650u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    // 0x2e3654: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x2e3654u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e3658: 0xc0b8cdc  jal         func_2E3370
    ctx->pc = 0x2E3658u;
    SET_GPR_U32(ctx, 31, 0x2E3660u);
    ctx->pc = 0x2E365Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E3658u;
            // 0x2e365c: 0x46000b02  mul.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E3370u;
    if (runtime->hasFunction(0x2E3370u)) {
        auto targetFn = runtime->lookupFunction(0x2E3370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E3660u; }
        if (ctx->pc != 0x2E3660u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAf_0x2e3370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E3660u; }
        if (ctx->pc != 0x2E3660u) { return; }
    }
    ctx->pc = 0x2E3660u;
label_2e3660:
    // 0x2e3660: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2e3660u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2e3664:
    // 0x2e3664: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2e3664u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e3668: 0x3e00008  jr          $ra
    ctx->pc = 0x2E3668u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E366Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E3668u;
            // 0x2e366c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2E3670u;
}
