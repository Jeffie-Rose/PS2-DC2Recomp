#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: ReloadMapScript__Fv
// Address: 0x2df400 - 0x2df42c
void ReloadMapScript__Fv_0x2df400(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ReloadMapScript__Fv_0x2df400");
#endif

    switch (ctx->pc) {
        case 0x2df420u: goto label_2df420;
        default: break;
    }

    ctx->pc = 0x2df400u;

    // 0x2df400: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2df400u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2df404: 0x3c0101f6  lui         $at, 0x1F6
    ctx->pc = 0x2df404u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)502 << 16));
    // 0x2df408: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2df408u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2df40c: 0x80238d10  lb          $v1, -0x72F0($at)
    ctx->pc = 0x2df40cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294937872)));
    // 0x2df410: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2DF410u;
    {
        const bool branch_taken_0x2df410 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DF414u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DF410u;
            // 0x2df414: 0x3c0401f6  lui         $a0, 0x1F6 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)502 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2df410) {
            ctx->pc = 0x2DF420u;
            goto label_2df420;
        }
    }
    ctx->pc = 0x2DF418u;
    // 0x2df418: 0xc0b7d0c  jal         func_2DF430
    ctx->pc = 0x2DF418u;
    SET_GPR_U32(ctx, 31, 0x2DF420u);
    ctx->pc = 0x2DF41Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DF418u;
            // 0x2df41c: 0x24848d10  addiu       $a0, $a0, -0x72F0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937872));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DF430u;
    if (runtime->hasFunction(0x2DF430u)) {
        auto targetFn = runtime->lookupFunction(0x2DF430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DF420u; }
        if (ctx->pc != 0x2DF420u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        LoadScript__FPc_0x2df430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DF420u; }
        if (ctx->pc != 0x2DF420u) { return; }
    }
    ctx->pc = 0x2DF420u;
label_2df420:
    // 0x2df420: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2df420u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2df424: 0x3e00008  jr          $ra
    ctx->pc = 0x2DF424u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DF428u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DF424u;
            // 0x2df428: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2DF42Cu;
}
