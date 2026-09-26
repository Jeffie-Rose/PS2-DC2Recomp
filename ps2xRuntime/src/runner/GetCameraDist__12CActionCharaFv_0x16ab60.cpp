#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetCameraDist__12CActionCharaFv
// Address: 0x16ab60 - 0x16ab98
void GetCameraDist__12CActionCharaFv_0x16ab60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetCameraDist__12CActionCharaFv_0x16ab60");
#endif

    switch (ctx->pc) {
        case 0x16ab7cu: goto label_16ab7c;
        case 0x16ab8cu: goto label_16ab8c;
        default: break;
    }

    ctx->pc = 0x16ab60u;

    // 0x16ab60: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x16ab60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x16ab64: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x16ab64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x16ab68: 0x8c820674  lw          $v0, 0x674($a0)
    ctx->pc = 0x16ab68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1652)));
    // 0x16ab6c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x16AB6Cu;
    {
        const bool branch_taken_0x16ab6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x16ab6c) {
            ctx->pc = 0x16AB84u;
            goto label_16ab84;
        }
    }
    ctx->pc = 0x16AB74u;
    // 0x16ab74: 0xc05cc5c  jal         func_173170
    ctx->pc = 0x16AB74u;
    SET_GPR_U32(ctx, 31, 0x16AB7Cu);
    ctx->pc = 0x16AB78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16AB74u;
            // 0x16ab78: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x173170u;
    if (runtime->hasFunction(0x173170u)) {
        auto targetFn = runtime->lookupFunction(0x173170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16AB7Cu; }
        if (ctx->pc != 0x16AB7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetCameraDist__11CCharacter2Fv_0x173170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16AB7Cu; }
        if (ctx->pc != 0x16AB7Cu) { return; }
    }
    ctx->pc = 0x16AB7Cu;
label_16ab7c:
    // 0x16ab7c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x16AB7Cu;
    {
        const bool branch_taken_0x16ab7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16AB80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16AB7Cu;
            // 0x16ab80: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16ab7c) {
            ctx->pc = 0x16AB90u;
            goto label_16ab90;
        }
    }
    ctx->pc = 0x16AB84u;
label_16ab84:
    // 0x16ab84: 0xc05cc5c  jal         func_173170
    ctx->pc = 0x16AB84u;
    SET_GPR_U32(ctx, 31, 0x16AB8Cu);
    ctx->pc = 0x173170u;
    if (runtime->hasFunction(0x173170u)) {
        auto targetFn = runtime->lookupFunction(0x173170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16AB8Cu; }
        if (ctx->pc != 0x16AB8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetCameraDist__11CCharacter2Fv_0x173170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16AB8Cu; }
        if (ctx->pc != 0x16AB8Cu) { return; }
    }
    ctx->pc = 0x16AB8Cu;
label_16ab8c:
    // 0x16ab8c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x16ab8cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_16ab90:
    // 0x16ab90: 0x3e00008  jr          $ra
    ctx->pc = 0x16AB90u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16AB94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16AB90u;
            // 0x16ab94: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x16AB98u;
}
