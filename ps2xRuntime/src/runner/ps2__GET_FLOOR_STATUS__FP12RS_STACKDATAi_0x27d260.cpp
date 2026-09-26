#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _GET_FLOOR_STATUS__FP12RS_STACKDATAi
// Address: 0x27d260 - 0x27d2b0
void ps2__GET_FLOOR_STATUS__FP12RS_STACKDATAi_0x27d260(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__GET_FLOOR_STATUS__FP12RS_STACKDATAi_0x27d260");
#endif

    switch (ctx->pc) {
        case 0x27d2a0u: goto label_27d2a0;
        default: break;
    }

    ctx->pc = 0x27d260u;

    // 0x27d260: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x27d260u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x27d264: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x27d264u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x27d268: 0x10a20003  beq         $a1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x27D268u;
    {
        const bool branch_taken_0x27d268 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x27D26Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27D268u;
            // 0x27d26c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27d268) {
            ctx->pc = 0x27D278u;
            goto label_27d278;
        }
    }
    ctx->pc = 0x27D270u;
    // 0x27d270: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x27D270u;
    {
        const bool branch_taken_0x27d270 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27D274u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27D270u;
            // 0x27d274: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27d270) {
            ctx->pc = 0x27D2A4u;
            goto label_27d2a4;
        }
    }
    ctx->pc = 0x27D278u;
label_27d278:
    // 0x27d278: 0x8f8297dc  lw          $v0, -0x6824($gp)
    ctx->pc = 0x27d278u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940636)));
    // 0x27d27c: 0x24422f90  addiu       $v0, $v0, 0x2F90
    ctx->pc = 0x27d27cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12176));
    // 0x27d280: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x27D280u;
    {
        const bool branch_taken_0x27d280 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x27d280) {
            ctx->pc = 0x27D290u;
            goto label_27d290;
        }
    }
    ctx->pc = 0x27D288u;
    // 0x27d288: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x27D288u;
    {
        const bool branch_taken_0x27d288 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27D28Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27D288u;
            // 0x27d28c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27d288) {
            ctx->pc = 0x27D2A4u;
            goto label_27d2a4;
        }
    }
    ctx->pc = 0x27D290u;
label_27d290:
    // 0x27d290: 0x9442000c  lhu         $v0, 0xC($v0)
    ctx->pc = 0x27d290u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x27d294: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x27d294u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x27d298: 0xc097e4c  jal         func_25F930
    ctx->pc = 0x27D298u;
    SET_GPR_U32(ctx, 31, 0x27D2A0u);
    ctx->pc = 0x27D29Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27D298u;
            // 0x27d29c: 0x2283e  dsrl32      $a1, $v0, 0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) >> (32 + 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F930u;
    if (runtime->hasFunction(0x25F930u)) {
        auto targetFn = runtime->lookupFunction(0x25F930u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27D2A0u; }
        if (ctx->pc != 0x27D2A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAi_0x25f930(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27D2A0u; }
        if (ctx->pc != 0x27D2A0u) { return; }
    }
    ctx->pc = 0x27D2A0u;
label_27d2a0:
    // 0x27d2a0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x27d2a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_27d2a4:
    // 0x27d2a4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x27d2a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x27d2a8: 0x3e00008  jr          $ra
    ctx->pc = 0x27D2A8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27D2ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27D2A8u;
            // 0x27d2ac: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x27D2B0u;
}
