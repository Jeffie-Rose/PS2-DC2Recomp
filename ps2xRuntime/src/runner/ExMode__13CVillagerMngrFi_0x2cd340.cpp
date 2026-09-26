#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: ExMode__13CVillagerMngrFi
// Address: 0x2cd340 - 0x2cd37c
void ExMode__13CVillagerMngrFi_0x2cd340(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ExMode__13CVillagerMngrFi_0x2cd340");
#endif

    switch (ctx->pc) {
        case 0x2cd350u: goto label_2cd350;
        default: break;
    }

    ctx->pc = 0x2cd340u;

    // 0x2cd340: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2cd340u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2cd344: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2cd344u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2cd348: 0xc0b34a4  jal         func_2CD290
    ctx->pc = 0x2CD348u;
    SET_GPR_U32(ctx, 31, 0x2CD350u);
    ctx->pc = 0x2CD290u;
    if (runtime->hasFunction(0x2CD290u)) {
        auto targetFn = runtime->lookupFunction(0x2CD290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CD350u; }
        if (ctx->pc != 0x2CD350u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetData__13CVillagerMngrFi_0x2cd290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CD350u; }
        if (ctx->pc != 0x2CD350u) { return; }
    }
    ctx->pc = 0x2CD350u;
label_2cd350:
    // 0x2cd350: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2CD350u;
    {
        const bool branch_taken_0x2cd350 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cd350) {
            ctx->pc = 0x2CD370u;
            goto label_2cd370;
        }
    }
    ctx->pc = 0x2CD358u;
    // 0x2cd358: 0x8c430020  lw          $v1, 0x20($v0)
    ctx->pc = 0x2cd358u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x2cd35c: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2CD35Cu;
    {
        const bool branch_taken_0x2cd35c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2CD360u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CD35Cu;
            // 0x2cd360: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cd35c) {
            ctx->pc = 0x2CD36Cu;
            goto label_2cd36c;
        }
    }
    ctx->pc = 0x2CD364u;
    // 0x2cd364: 0xac430020  sw          $v1, 0x20($v0)
    ctx->pc = 0x2cd364u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 32), GPR_U32(ctx, 3));
    // 0x2cd368: 0xac430024  sw          $v1, 0x24($v0)
    ctx->pc = 0x2cd368u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 36), GPR_U32(ctx, 3));
label_2cd36c:
    // 0x2cd36c: 0xac400028  sw          $zero, 0x28($v0)
    ctx->pc = 0x2cd36cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 40), GPR_U32(ctx, 0));
label_2cd370:
    // 0x2cd370: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2cd370u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2cd374: 0x3e00008  jr          $ra
    ctx->pc = 0x2CD374u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CD378u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CD374u;
            // 0x2cd378: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2CD37Cu;
}
