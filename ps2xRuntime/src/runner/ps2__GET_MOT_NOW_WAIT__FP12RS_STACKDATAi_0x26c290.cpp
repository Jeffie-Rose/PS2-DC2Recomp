#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _GET_MOT_NOW_WAIT__FP12RS_STACKDATAi
// Address: 0x26c290 - 0x26c2fc
void ps2__GET_MOT_NOW_WAIT__FP12RS_STACKDATAi_0x26c290(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__GET_MOT_NOW_WAIT__FP12RS_STACKDATAi_0x26c290");
#endif

    switch (ctx->pc) {
        case 0x26c290u: goto label_26c290;
        case 0x26c294u: goto label_26c294;
        case 0x26c298u: goto label_26c298;
        case 0x26c29cu: goto label_26c29c;
        case 0x26c2a0u: goto label_26c2a0;
        case 0x26c2a4u: goto label_26c2a4;
        case 0x26c2a8u: goto label_26c2a8;
        case 0x26c2acu: goto label_26c2ac;
        case 0x26c2b0u: goto label_26c2b0;
        case 0x26c2b4u: goto label_26c2b4;
        case 0x26c2b8u: goto label_26c2b8;
        case 0x26c2bcu: goto label_26c2bc;
        case 0x26c2c0u: goto label_26c2c0;
        case 0x26c2c4u: goto label_26c2c4;
        case 0x26c2c8u: goto label_26c2c8;
        case 0x26c2ccu: goto label_26c2cc;
        case 0x26c2d0u: goto label_26c2d0;
        case 0x26c2d4u: goto label_26c2d4;
        case 0x26c2d8u: goto label_26c2d8;
        case 0x26c2dcu: goto label_26c2dc;
        case 0x26c2e0u: goto label_26c2e0;
        case 0x26c2e4u: goto label_26c2e4;
        case 0x26c2e8u: goto label_26c2e8;
        case 0x26c2ecu: goto label_26c2ec;
        case 0x26c2f0u: goto label_26c2f0;
        case 0x26c2f4u: goto label_26c2f4;
        case 0x26c2f8u: goto label_26c2f8;
        default: break;
    }

    ctx->pc = 0x26c290u;

label_26c290:
    // 0x26c290: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x26c290u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_26c294:
    // 0x26c294: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x26c294u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_26c298:
    // 0x26c298: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x26c298u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_26c29c:
    // 0x26c29c: 0x10a20003  beq         $a1, $v0, . + 4 + (0x3 << 2)
label_26c2a0:
    if (ctx->pc == 0x26C2A0u) {
        ctx->pc = 0x26C2A0u;
            // 0x26c2a0: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->pc = 0x26C2A4u;
        goto label_26c2a4;
    }
    ctx->pc = 0x26C29Cu;
    {
        const bool branch_taken_0x26c29c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x26C2A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26C29Cu;
            // 0x26c2a0: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26c29c) {
            ctx->pc = 0x26C2ACu;
            goto label_26c2ac;
        }
    }
    ctx->pc = 0x26C2A4u;
label_26c2a4:
    // 0x26c2a4: 0x10000011  b           . + 4 + (0x11 << 2)
label_26c2a8:
    if (ctx->pc == 0x26C2A8u) {
        ctx->pc = 0x26C2A8u;
            // 0x26c2a8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x26C2ACu;
        goto label_26c2ac;
    }
    ctx->pc = 0x26C2A4u;
    {
        const bool branch_taken_0x26c2a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26C2A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26C2A4u;
            // 0x26c2a8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26c2a4) {
            ctx->pc = 0x26C2ECu;
            goto label_26c2ec;
        }
    }
    ctx->pc = 0x26C2ACu;
label_26c2ac:
    // 0x26c2ac: 0xc097e18  jal         func_25F860
label_26c2b0:
    if (ctx->pc == 0x26C2B0u) {
        ctx->pc = 0x26C2B0u;
            // 0x26c2b0: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->pc = 0x26C2B4u;
        goto label_26c2b4;
    }
    ctx->pc = 0x26C2ACu;
    SET_GPR_U32(ctx, 31, 0x26C2B4u);
    ctx->pc = 0x26C2B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26C2ACu;
            // 0x26c2b0: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26C2B4u; }
        if (ctx->pc != 0x26C2B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26C2B4u; }
        if (ctx->pc != 0x26C2B4u) { return; }
    }
    ctx->pc = 0x26C2B4u;
label_26c2b4:
    // 0x26c2b4: 0xc09ac74  jal         func_26B1D0
label_26c2b8:
    if (ctx->pc == 0x26C2B8u) {
        ctx->pc = 0x26C2B8u;
            // 0x26c2b8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x26C2BCu;
        goto label_26c2bc;
    }
    ctx->pc = 0x26C2B4u;
    SET_GPR_U32(ctx, 31, 0x26C2BCu);
    ctx->pc = 0x26C2B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26C2B4u;
            // 0x26c2b8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x26B1D0u;
    if (runtime->hasFunction(0x26B1D0u)) {
        auto targetFn = runtime->lookupFunction(0x26B1D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26C2BCu; }
        if (ctx->pc != 0x26C2BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetChara__Fi_0x26b1d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26C2BCu; }
        if (ctx->pc != 0x26C2BCu) { return; }
    }
    ctx->pc = 0x26C2BCu;
label_26c2bc:
    // 0x26c2bc: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_26c2c0:
    if (ctx->pc == 0x26C2C0u) {
        ctx->pc = 0x26C2C4u;
        goto label_26c2c4;
    }
    ctx->pc = 0x26C2BCu;
    {
        const bool branch_taken_0x26c2bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x26c2bc) {
            ctx->pc = 0x26C2CCu;
            goto label_26c2cc;
        }
    }
    ctx->pc = 0x26C2C4u;
label_26c2c4:
    // 0x26c2c4: 0x10000009  b           . + 4 + (0x9 << 2)
label_26c2c8:
    if (ctx->pc == 0x26C2C8u) {
        ctx->pc = 0x26C2C8u;
            // 0x26c2c8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x26C2CCu;
        goto label_26c2cc;
    }
    ctx->pc = 0x26C2C4u;
    {
        const bool branch_taken_0x26c2c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26C2C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26C2C4u;
            // 0x26c2c8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26c2c4) {
            ctx->pc = 0x26C2ECu;
            goto label_26c2ec;
        }
    }
    ctx->pc = 0x26C2CCu;
label_26c2cc:
    // 0x26c2cc: 0x8c590000  lw          $t9, 0x0($v0)
    ctx->pc = 0x26c2ccu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_26c2d0:
    // 0x26c2d0: 0x8f390094  lw          $t9, 0x94($t9)
    ctx->pc = 0x26c2d0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 148)));
label_26c2d4:
    // 0x26c2d4: 0x320f809  jalr        $t9
label_26c2d8:
    if (ctx->pc == 0x26C2D8u) {
        ctx->pc = 0x26C2D8u;
            // 0x26c2d8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x26C2DCu;
        goto label_26c2dc;
    }
    ctx->pc = 0x26C2D4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x26C2DCu);
        ctx->pc = 0x26C2D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26C2D4u;
            // 0x26c2d8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x26C2DCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x26C2DCu; }
            if (ctx->pc != 0x26C2DCu) { return; }
        }
        }
    }
    ctx->pc = 0x26C2DCu;
label_26c2dc:
    // 0x26c2dc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x26c2dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_26c2e0:
    // 0x26c2e0: 0xc097e54  jal         func_25F950
label_26c2e4:
    if (ctx->pc == 0x26C2E4u) {
        ctx->pc = 0x26C2E4u;
            // 0x26c2e4: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->pc = 0x26C2E8u;
        goto label_26c2e8;
    }
    ctx->pc = 0x26C2E0u;
    SET_GPR_U32(ctx, 31, 0x26C2E8u);
    ctx->pc = 0x26C2E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26C2E0u;
            // 0x26c2e4: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F950u;
    if (runtime->hasFunction(0x25F950u)) {
        auto targetFn = runtime->lookupFunction(0x25F950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26C2E8u; }
        if (ctx->pc != 0x26C2E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAf_0x25f950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26C2E8u; }
        if (ctx->pc != 0x26C2E8u) { return; }
    }
    ctx->pc = 0x26C2E8u;
label_26c2e8:
    // 0x26c2e8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x26c2e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_26c2ec:
    // 0x26c2ec: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x26c2ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_26c2f0:
    // 0x26c2f0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x26c2f0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_26c2f4:
    // 0x26c2f4: 0x3e00008  jr          $ra
label_26c2f8:
    if (ctx->pc == 0x26C2F8u) {
        ctx->pc = 0x26C2F8u;
            // 0x26c2f8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x26C2FCu;
        goto label_fallthrough_0x26c2f4;
    }
    ctx->pc = 0x26C2F4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26C2F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26C2F4u;
            // 0x26c2f8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x26c2f4:
    ctx->pc = 0x26C2FCu;
}
