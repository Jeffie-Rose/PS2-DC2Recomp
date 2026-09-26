#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetInventUserDataPtr__Fv
// Address: 0x1fe130 - 0x1fe168
void GetInventUserDataPtr__Fv_0x1fe130(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetInventUserDataPtr__Fv_0x1fe130");
#endif

    switch (ctx->pc) {
        case 0x1fe140u: goto label_1fe140;
        default: break;
    }

    ctx->pc = 0x1fe130u;

    // 0x1fe130: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1fe130u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1fe134: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1fe134u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1fe138: 0xc064220  jal         func_190880
    ctx->pc = 0x1FE138u;
    SET_GPR_U32(ctx, 31, 0x1FE140u);
    ctx->pc = 0x190880u;
    if (runtime->hasFunction(0x190880u)) {
        auto targetFn = runtime->lookupFunction(0x190880u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FE140u; }
        if (ctx->pc != 0x1FE140u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetSaveData__Fv_0x190880(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FE140u; }
        if (ctx->pc != 0x1FE140u) { return; }
    }
    ctx->pc = 0x1FE140u;
label_1fe140:
    // 0x1fe140: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1FE140u;
    {
        const bool branch_taken_0x1fe140 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FE144u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FE140u;
            // 0x1fe144: 0x3c010001  lui         $at, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fe140) {
            ctx->pc = 0x1FE150u;
            goto label_1fe150;
        }
    }
    ctx->pc = 0x1FE148u;
    // 0x1fe148: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1FE148u;
    {
        const bool branch_taken_0x1fe148 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FE14Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FE148u;
            // 0x1fe14c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fe148) {
            ctx->pc = 0x1FE15Cu;
            goto label_1fe15c;
        }
    }
    ctx->pc = 0x1FE150u;
label_1fe150:
    // 0x1fe150: 0x3421d2a0  ori         $at, $at, 0xD2A0
    ctx->pc = 0x1fe150u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)53920);
    // 0x1fe154: 0x411021  addu        $v0, $v0, $at
    ctx->pc = 0x1fe154u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 1)));
    // 0x1fe158: 0x24427f30  addiu       $v0, $v0, 0x7F30
    ctx->pc = 0x1fe158u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32560));
label_1fe15c:
    // 0x1fe15c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1fe15cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1fe160: 0x3e00008  jr          $ra
    ctx->pc = 0x1FE160u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FE164u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FE160u;
            // 0x1fe164: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1FE168u;
}
