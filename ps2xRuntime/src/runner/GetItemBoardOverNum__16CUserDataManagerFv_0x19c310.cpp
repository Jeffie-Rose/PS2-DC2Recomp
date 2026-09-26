#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetItemBoardOverNum__16CUserDataManagerFv
// Address: 0x19c310 - 0x19c348
void GetItemBoardOverNum__16CUserDataManagerFv_0x19c310(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetItemBoardOverNum__16CUserDataManagerFv_0x19c310");
#endif

    switch (ctx->pc) {
        case 0x19c320u: goto label_19c320;
        case 0x19c32cu: goto label_19c32c;
        default: break;
    }

    ctx->pc = 0x19c310u;

    // 0x19c310: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x19c310u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x19c314: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x19c314u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x19c318: 0xc064220  jal         func_190880
    ctx->pc = 0x19C318u;
    SET_GPR_U32(ctx, 31, 0x19C320u);
    ctx->pc = 0x190880u;
    if (runtime->hasFunction(0x190880u)) {
        auto targetFn = runtime->lookupFunction(0x190880u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19C320u; }
        if (ctx->pc != 0x19C320u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetSaveData__Fv_0x190880(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19C320u; }
        if (ctx->pc != 0x19C320u) { return; }
    }
    ctx->pc = 0x19C320u;
label_19c320:
    // 0x19c320: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x19c320u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19c324: 0xc0bd920  jal         func_2F6480
    ctx->pc = 0x19C324u;
    SET_GPR_U32(ctx, 31, 0x19C32Cu);
    ctx->pc = 0x19C328u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19C324u;
            // 0x19c328: 0x240500fe  addiu       $a1, $zero, 0xFE (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 254));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F6480u;
    if (runtime->hasFunction(0x2F6480u)) {
        auto targetFn = runtime->lookupFunction(0x2F6480u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19C32Cu; }
        if (ctx->pc != 0x19C32Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetBitFlag__9CSaveDataFi_0x2f6480(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19C32Cu; }
        if (ctx->pc != 0x19C32Cu) { return; }
    }
    ctx->pc = 0x19C32Cu;
label_19c32c:
    // 0x19c32c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x19c32cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19c330: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x19c330u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x19c334: 0x2403000c  addiu       $v1, $zero, 0xC
    ctx->pc = 0x19c334u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x19c338: 0x62200a  movz        $a0, $v1, $v0
    ctx->pc = 0x19c338u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3));
    // 0x19c33c: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x19c33cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19c340: 0x3e00008  jr          $ra
    ctx->pc = 0x19C340u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19C344u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19C340u;
            // 0x19c344: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x19C348u;
}
