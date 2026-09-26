#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _CHR_SET_MOT_STEP__FP12RS_STACKDATAi
// Address: 0x2e46d0 - 0x2e4720
void ps2__CHR_SET_MOT_STEP__FP12RS_STACKDATAi_0x2e46d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__CHR_SET_MOT_STEP__FP12RS_STACKDATAi_0x2e46d0");
#endif

    switch (ctx->pc) {
        case 0x2e46d0u: goto label_2e46d0;
        case 0x2e46d4u: goto label_2e46d4;
        case 0x2e46d8u: goto label_2e46d8;
        case 0x2e46dcu: goto label_2e46dc;
        case 0x2e46e0u: goto label_2e46e0;
        case 0x2e46e4u: goto label_2e46e4;
        case 0x2e46e8u: goto label_2e46e8;
        case 0x2e46ecu: goto label_2e46ec;
        case 0x2e46f0u: goto label_2e46f0;
        case 0x2e46f4u: goto label_2e46f4;
        case 0x2e46f8u: goto label_2e46f8;
        case 0x2e46fcu: goto label_2e46fc;
        case 0x2e4700u: goto label_2e4700;
        case 0x2e4704u: goto label_2e4704;
        case 0x2e4708u: goto label_2e4708;
        case 0x2e470cu: goto label_2e470c;
        case 0x2e4710u: goto label_2e4710;
        case 0x2e4714u: goto label_2e4714;
        case 0x2e4718u: goto label_2e4718;
        case 0x2e471cu: goto label_2e471c;
        default: break;
    }

    ctx->pc = 0x2e46d0u;

label_2e46d0:
    // 0x2e46d0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2e46d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_2e46d4:
    // 0x2e46d4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2e46d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_2e46d8:
    // 0x2e46d8: 0x8f829ed0  lw          $v0, -0x6130($gp)
    ctx->pc = 0x2e46d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942416)));
label_2e46dc:
    // 0x2e46dc: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x2e46dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_2e46e0:
    // 0x2e46e0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_2e46e4:
    if (ctx->pc == 0x2E46E4u) {
        ctx->pc = 0x2E46E4u;
            // 0x2e46e4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2E46E8u;
        goto label_2e46e8;
    }
    ctx->pc = 0x2E46E0u;
    {
        const bool branch_taken_0x2e46e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E46E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E46E0u;
            // 0x2e46e4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e46e0) {
            ctx->pc = 0x2E46F0u;
            goto label_2e46f0;
        }
    }
    ctx->pc = 0x2E46E8u;
label_2e46e8:
    // 0x2e46e8: 0x1000000b  b           . + 4 + (0xB << 2)
label_2e46ec:
    if (ctx->pc == 0x2E46ECu) {
        ctx->pc = 0x2E46ECu;
            // 0x2e46ec: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->pc = 0x2E46F0u;
        goto label_2e46f0;
    }
    ctx->pc = 0x2E46E8u;
    {
        const bool branch_taken_0x2e46e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E46ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E46E8u;
            // 0x2e46ec: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e46e8) {
            ctx->pc = 0x2E4718u;
            goto label_2e4718;
        }
    }
    ctx->pc = 0x2E46F0u;
label_2e46f0:
    // 0x2e46f0: 0xc0b8cb0  jal         func_2E32C0
label_2e46f4:
    if (ctx->pc == 0x2E46F4u) {
        ctx->pc = 0x2E46F8u;
        goto label_2e46f8;
    }
    ctx->pc = 0x2E46F0u;
    SET_GPR_U32(ctx, 31, 0x2E46F8u);
    ctx->pc = 0x2E32C0u;
    if (runtime->hasFunction(0x2E32C0u)) {
        auto targetFn = runtime->lookupFunction(0x2E32C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E46F8u; }
        if (ctx->pc != 0x2E46F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackFloat__FP12RS_STACKDATA_0x2e32c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E46F8u; }
        if (ctx->pc != 0x2E46F8u) { return; }
    }
    ctx->pc = 0x2E46F8u;
label_2e46f8:
    // 0x2e46f8: 0x8f829ed0  lw          $v0, -0x6130($gp)
    ctx->pc = 0x2e46f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942416)));
label_2e46fc:
    // 0x2e46fc: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x2e46fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_2e4700:
    // 0x2e4700: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2e4700u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2e4704:
    // 0x2e4704: 0x8f3900b8  lw          $t9, 0xB8($t9)
    ctx->pc = 0x2e4704u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 184)));
label_2e4708:
    // 0x2e4708: 0x320f809  jalr        $t9
label_2e470c:
    if (ctx->pc == 0x2E470Cu) {
        ctx->pc = 0x2E470Cu;
            // 0x2e470c: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->pc = 0x2E4710u;
        goto label_2e4710;
    }
    ctx->pc = 0x2E4708u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2E4710u);
        ctx->pc = 0x2E470Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E4708u;
            // 0x2e470c: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2E4710u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2E4710u; }
            if (ctx->pc != 0x2E4710u) { return; }
        }
        }
    }
    ctx->pc = 0x2E4710u;
label_2e4710:
    // 0x2e4710: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2e4710u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2e4714:
    // 0x2e4714: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2e4714u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2e4718:
    // 0x2e4718: 0x3e00008  jr          $ra
label_2e471c:
    if (ctx->pc == 0x2E471Cu) {
        ctx->pc = 0x2E471Cu;
            // 0x2e471c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x2E4720u;
        goto label_fallthrough_0x2e4718;
    }
    ctx->pc = 0x2E4718u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E471Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E4718u;
            // 0x2e471c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x2e4718:
    ctx->pc = 0x2E4720u;
}
