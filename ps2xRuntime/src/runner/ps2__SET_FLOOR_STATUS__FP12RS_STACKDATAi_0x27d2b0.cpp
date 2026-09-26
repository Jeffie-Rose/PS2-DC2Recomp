#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _SET_FLOOR_STATUS__FP12RS_STACKDATAi
// Address: 0x27d2b0 - 0x27d334
void ps2__SET_FLOOR_STATUS__FP12RS_STACKDATAi_0x27d2b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__SET_FLOOR_STATUS__FP12RS_STACKDATAi_0x27d2b0");
#endif

    switch (ctx->pc) {
        case 0x27d2e0u: goto label_27d2e0;
        case 0x27d2ecu: goto label_27d2ec;
        default: break;
    }

    ctx->pc = 0x27d2b0u;

    // 0x27d2b0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x27d2b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x27d2b4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x27d2b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x27d2b8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x27d2b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x27d2bc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x27d2bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x27d2c0: 0x8f8297dc  lw          $v0, -0x6824($gp)
    ctx->pc = 0x27d2c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940636)));
    // 0x27d2c4: 0x24502f90  addiu       $s0, $v0, 0x2F90
    ctx->pc = 0x27d2c4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 12176));
    // 0x27d2c8: 0x16000003  bnez        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x27D2C8u;
    {
        const bool branch_taken_0x27d2c8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x27D2CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27D2C8u;
            // 0x27d2cc: 0x24910008  addiu       $s1, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27d2c8) {
            ctx->pc = 0x27D2D8u;
            goto label_27d2d8;
        }
    }
    ctx->pc = 0x27D2D0u;
    // 0x27d2d0: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x27D2D0u;
    {
        const bool branch_taken_0x27d2d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27D2D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27D2D0u;
            // 0x27d2d4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27d2d0) {
            ctx->pc = 0x27D320u;
            goto label_27d320;
        }
    }
    ctx->pc = 0x27D2D8u;
label_27d2d8:
    // 0x27d2d8: 0xc097e18  jal         func_25F860
    ctx->pc = 0x27D2D8u;
    SET_GPR_U32(ctx, 31, 0x27D2E0u);
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27D2E0u; }
        if (ctx->pc != 0x27D2E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27D2E0u; }
        if (ctx->pc != 0x27D2E0u) { return; }
    }
    ctx->pc = 0x27D2E0u;
label_27d2e0:
    // 0x27d2e0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x27d2e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27d2e4: 0xc097e18  jal         func_25F860
    ctx->pc = 0x27D2E4u;
    SET_GPR_U32(ctx, 31, 0x27D2ECu);
    ctx->pc = 0x27D2E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27D2E4u;
            // 0x27d2e8: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27D2ECu; }
        if (ctx->pc != 0x27D2ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27D2ECu; }
        if (ctx->pc != 0x27D2ECu) { return; }
    }
    ctx->pc = 0x27D2ECu;
label_27d2ec:
    // 0x27d2ec: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x27D2ECu;
    {
        const bool branch_taken_0x27d2ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x27d2ec) {
            ctx->pc = 0x27D308u;
            goto label_27d308;
        }
    }
    ctx->pc = 0x27D2F4u;
    // 0x27d2f4: 0x9602000c  lhu         $v0, 0xC($s0)
    ctx->pc = 0x27d2f4u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x27d2f8: 0x3223ffff  andi        $v1, $s1, 0xFFFF
    ctx->pc = 0x27d2f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)65535);
    // 0x27d2fc: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x27d2fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x27d300: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x27D300u;
    {
        const bool branch_taken_0x27d300 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27D304u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27D300u;
            // 0x27d304: 0xa602000c  sh          $v0, 0xC($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 12), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27d300) {
            ctx->pc = 0x27D31Cu;
            goto label_27d31c;
        }
    }
    ctx->pc = 0x27D308u;
label_27d308:
    // 0x27d308: 0x9602000c  lhu         $v0, 0xC($s0)
    ctx->pc = 0x27d308u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x27d30c: 0x2201827  not         $v1, $s1
    ctx->pc = 0x27d30cu;
    SET_GPR_U64(ctx, 3, ~(GPR_U64(ctx, 17) | GPR_U64(ctx, 0)));
    // 0x27d310: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x27d310u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x27d314: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x27d314u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x27d318: 0xa602000c  sh          $v0, 0xC($s0)
    ctx->pc = 0x27d318u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 12), (uint16_t)GPR_U32(ctx, 2));
label_27d31c:
    // 0x27d31c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x27d31cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_27d320:
    // 0x27d320: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x27d320u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x27d324: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x27d324u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x27d328: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x27d328u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x27d32c: 0x3e00008  jr          $ra
    ctx->pc = 0x27D32Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27D330u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27D32Cu;
            // 0x27d330: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x27D334u;
}
