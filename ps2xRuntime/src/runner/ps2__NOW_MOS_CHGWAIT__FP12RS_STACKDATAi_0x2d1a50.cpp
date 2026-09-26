#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _NOW_MOS_CHGWAIT__FP12RS_STACKDATAi
// Address: 0x2d1a50 - 0x2d1aa8
void ps2__NOW_MOS_CHGWAIT__FP12RS_STACKDATAi_0x2d1a50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__NOW_MOS_CHGWAIT__FP12RS_STACKDATAi_0x2d1a50");
#endif

    switch (ctx->pc) {
        case 0x2d1a50u: goto label_2d1a50;
        case 0x2d1a54u: goto label_2d1a54;
        case 0x2d1a58u: goto label_2d1a58;
        case 0x2d1a5cu: goto label_2d1a5c;
        case 0x2d1a60u: goto label_2d1a60;
        case 0x2d1a64u: goto label_2d1a64;
        case 0x2d1a68u: goto label_2d1a68;
        case 0x2d1a6cu: goto label_2d1a6c;
        case 0x2d1a70u: goto label_2d1a70;
        case 0x2d1a74u: goto label_2d1a74;
        case 0x2d1a78u: goto label_2d1a78;
        case 0x2d1a7cu: goto label_2d1a7c;
        case 0x2d1a80u: goto label_2d1a80;
        case 0x2d1a84u: goto label_2d1a84;
        case 0x2d1a88u: goto label_2d1a88;
        case 0x2d1a8cu: goto label_2d1a8c;
        case 0x2d1a90u: goto label_2d1a90;
        case 0x2d1a94u: goto label_2d1a94;
        case 0x2d1a98u: goto label_2d1a98;
        case 0x2d1a9cu: goto label_2d1a9c;
        case 0x2d1aa0u: goto label_2d1aa0;
        case 0x2d1aa4u: goto label_2d1aa4;
        default: break;
    }

    ctx->pc = 0x2d1a50u;

label_2d1a50:
    // 0x2d1a50: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2d1a50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_2d1a54:
    // 0x2d1a54: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2d1a54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2d1a58:
    // 0x2d1a58: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2d1a58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_2d1a5c:
    // 0x2d1a5c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2d1a5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2d1a60:
    // 0x2d1a60: 0x10a20003  beq         $a1, $v0, . + 4 + (0x3 << 2)
label_2d1a64:
    if (ctx->pc == 0x2D1A64u) {
        ctx->pc = 0x2D1A64u;
            // 0x2d1a64: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2D1A68u;
        goto label_2d1a68;
    }
    ctx->pc = 0x2D1A60u;
    {
        const bool branch_taken_0x2d1a60 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x2D1A64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D1A60u;
            // 0x2d1a64: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d1a60) {
            ctx->pc = 0x2D1A70u;
            goto label_2d1a70;
        }
    }
    ctx->pc = 0x2D1A68u;
label_2d1a68:
    // 0x2d1a68: 0x1000000b  b           . + 4 + (0xB << 2)
label_2d1a6c:
    if (ctx->pc == 0x2D1A6Cu) {
        ctx->pc = 0x2D1A6Cu;
            // 0x2d1a6c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2D1A70u;
        goto label_2d1a70;
    }
    ctx->pc = 0x2D1A68u;
    {
        const bool branch_taken_0x2d1a68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D1A6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D1A68u;
            // 0x2d1a6c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d1a68) {
            ctx->pc = 0x2D1A98u;
            goto label_2d1a98;
        }
    }
    ctx->pc = 0x2D1A70u;
label_2d1a70:
    // 0x2d1a70: 0x3c0101f1  lui         $at, 0x1F1
    ctx->pc = 0x2d1a70u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)497 << 16));
label_2d1a74:
    // 0x2d1a74: 0x8c24d430  lw          $a0, -0x2BD0($at)
    ctx->pc = 0x2d1a74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294956080)));
label_2d1a78:
    // 0x2d1a78: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2d1a78u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2d1a7c:
    // 0x2d1a7c: 0x8f390098  lw          $t9, 0x98($t9)
    ctx->pc = 0x2d1a7cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 152)));
label_2d1a80:
    // 0x2d1a80: 0x320f809  jalr        $t9
label_2d1a84:
    if (ctx->pc == 0x2D1A84u) {
        ctx->pc = 0x2D1A88u;
        goto label_2d1a88;
    }
    ctx->pc = 0x2D1A80u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2D1A88u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x2D1A88u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2D1A88u; }
            if (ctx->pc != 0x2D1A88u) { return; }
        }
        }
    }
    ctx->pc = 0x2D1A88u;
label_2d1a88:
    // 0x2d1a88: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2d1a88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2d1a8c:
    // 0x2d1a8c: 0xc0b37b4  jal         func_2CDED0
label_2d1a90:
    if (ctx->pc == 0x2D1A90u) {
        ctx->pc = 0x2D1A90u;
            // 0x2d1a90: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->pc = 0x2D1A94u;
        goto label_2d1a94;
    }
    ctx->pc = 0x2D1A8Cu;
    SET_GPR_U32(ctx, 31, 0x2D1A94u);
    ctx->pc = 0x2D1A90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D1A8Cu;
            // 0x2d1a90: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2CDED0u;
    if (runtime->hasFunction(0x2CDED0u)) {
        auto targetFn = runtime->lookupFunction(0x2CDED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D1A94u; }
        if (ctx->pc != 0x2D1A94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAf_0x2cded0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D1A94u; }
        if (ctx->pc != 0x2D1A94u) { return; }
    }
    ctx->pc = 0x2D1A94u;
label_2d1a94:
    // 0x2d1a94: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2d1a94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2d1a98:
    // 0x2d1a98: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2d1a98u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2d1a9c:
    // 0x2d1a9c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2d1a9cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2d1aa0:
    // 0x2d1aa0: 0x3e00008  jr          $ra
label_2d1aa4:
    if (ctx->pc == 0x2D1AA4u) {
        ctx->pc = 0x2D1AA4u;
            // 0x2d1aa4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x2D1AA8u;
        goto label_fallthrough_0x2d1aa0;
    }
    ctx->pc = 0x2D1AA0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D1AA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D1AA0u;
            // 0x2d1aa4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x2d1aa0:
    ctx->pc = 0x2D1AA8u;
}
