#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _SET_MOS_STEP__FP12RS_STACKDATAi
// Address: 0x2d1bb0 - 0x2d1bf8
void ps2__SET_MOS_STEP__FP12RS_STACKDATAi_0x2d1bb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__SET_MOS_STEP__FP12RS_STACKDATAi_0x2d1bb0");
#endif

    switch (ctx->pc) {
        case 0x2d1bb0u: goto label_2d1bb0;
        case 0x2d1bb4u: goto label_2d1bb4;
        case 0x2d1bb8u: goto label_2d1bb8;
        case 0x2d1bbcu: goto label_2d1bbc;
        case 0x2d1bc0u: goto label_2d1bc0;
        case 0x2d1bc4u: goto label_2d1bc4;
        case 0x2d1bc8u: goto label_2d1bc8;
        case 0x2d1bccu: goto label_2d1bcc;
        case 0x2d1bd0u: goto label_2d1bd0;
        case 0x2d1bd4u: goto label_2d1bd4;
        case 0x2d1bd8u: goto label_2d1bd8;
        case 0x2d1bdcu: goto label_2d1bdc;
        case 0x2d1be0u: goto label_2d1be0;
        case 0x2d1be4u: goto label_2d1be4;
        case 0x2d1be8u: goto label_2d1be8;
        case 0x2d1becu: goto label_2d1bec;
        case 0x2d1bf0u: goto label_2d1bf0;
        case 0x2d1bf4u: goto label_2d1bf4;
        default: break;
    }

    ctx->pc = 0x2d1bb0u;

label_2d1bb0:
    // 0x2d1bb0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2d1bb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_2d1bb4:
    // 0x2d1bb4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2d1bb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2d1bb8:
    // 0x2d1bb8: 0x10a20003  beq         $a1, $v0, . + 4 + (0x3 << 2)
label_2d1bbc:
    if (ctx->pc == 0x2D1BBCu) {
        ctx->pc = 0x2D1BBCu;
            // 0x2d1bbc: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->pc = 0x2D1BC0u;
        goto label_2d1bc0;
    }
    ctx->pc = 0x2D1BB8u;
    {
        const bool branch_taken_0x2d1bb8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x2D1BBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D1BB8u;
            // 0x2d1bbc: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d1bb8) {
            ctx->pc = 0x2D1BC8u;
            goto label_2d1bc8;
        }
    }
    ctx->pc = 0x2D1BC0u;
label_2d1bc0:
    // 0x2d1bc0: 0x1000000a  b           . + 4 + (0xA << 2)
label_2d1bc4:
    if (ctx->pc == 0x2D1BC4u) {
        ctx->pc = 0x2D1BC4u;
            // 0x2d1bc4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2D1BC8u;
        goto label_2d1bc8;
    }
    ctx->pc = 0x2D1BC0u;
    {
        const bool branch_taken_0x2d1bc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D1BC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D1BC0u;
            // 0x2d1bc4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d1bc0) {
            ctx->pc = 0x2D1BECu;
            goto label_2d1bec;
        }
    }
    ctx->pc = 0x2D1BC8u;
label_2d1bc8:
    // 0x2d1bc8: 0xc0b379c  jal         func_2CDE70
label_2d1bcc:
    if (ctx->pc == 0x2D1BCCu) {
        ctx->pc = 0x2D1BD0u;
        goto label_2d1bd0;
    }
    ctx->pc = 0x2D1BC8u;
    SET_GPR_U32(ctx, 31, 0x2D1BD0u);
    ctx->pc = 0x2CDE70u;
    if (runtime->hasFunction(0x2CDE70u)) {
        auto targetFn = runtime->lookupFunction(0x2CDE70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D1BD0u; }
        if (ctx->pc != 0x2D1BD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackFloat__FP12RS_STACKDATA_0x2cde70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D1BD0u; }
        if (ctx->pc != 0x2D1BD0u) { return; }
    }
    ctx->pc = 0x2D1BD0u;
label_2d1bd0:
    // 0x2d1bd0: 0x3c0101f1  lui         $at, 0x1F1
    ctx->pc = 0x2d1bd0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)497 << 16));
label_2d1bd4:
    // 0x2d1bd4: 0x8c24d430  lw          $a0, -0x2BD0($at)
    ctx->pc = 0x2d1bd4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294956080)));
label_2d1bd8:
    // 0x2d1bd8: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2d1bd8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2d1bdc:
    // 0x2d1bdc: 0x8f3900b8  lw          $t9, 0xB8($t9)
    ctx->pc = 0x2d1bdcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 184)));
label_2d1be0:
    // 0x2d1be0: 0x320f809  jalr        $t9
label_2d1be4:
    if (ctx->pc == 0x2D1BE4u) {
        ctx->pc = 0x2D1BE4u;
            // 0x2d1be4: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->pc = 0x2D1BE8u;
        goto label_2d1be8;
    }
    ctx->pc = 0x2D1BE0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2D1BE8u);
        ctx->pc = 0x2D1BE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D1BE0u;
            // 0x2d1be4: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2D1BE8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2D1BE8u; }
            if (ctx->pc != 0x2D1BE8u) { return; }
        }
        }
    }
    ctx->pc = 0x2D1BE8u;
label_2d1be8:
    // 0x2d1be8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2d1be8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2d1bec:
    // 0x2d1bec: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2d1becu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2d1bf0:
    // 0x2d1bf0: 0x3e00008  jr          $ra
label_2d1bf4:
    if (ctx->pc == 0x2D1BF4u) {
        ctx->pc = 0x2D1BF4u;
            // 0x2d1bf4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x2D1BF8u;
        goto label_fallthrough_0x2d1bf0;
    }
    ctx->pc = 0x2D1BF0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D1BF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D1BF0u;
            // 0x2d1bf4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x2d1bf0:
    ctx->pc = 0x2D1BF8u;
}
