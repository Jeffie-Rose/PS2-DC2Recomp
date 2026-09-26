#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: EditPEffectEndCheck__Fv
// Address: 0x2fb080 - 0x2fb0cc
void EditPEffectEndCheck__Fv_0x2fb080(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("EditPEffectEndCheck__Fv_0x2fb080");
#endif

    switch (ctx->pc) {
        case 0x2fb090u: goto label_2fb090;
        case 0x2fb0a4u: goto label_2fb0a4;
        case 0x2fb0b4u: goto label_2fb0b4;
        default: break;
    }

    ctx->pc = 0x2fb080u;

    // 0x2fb080: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2fb080u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2fb084: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2fb084u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2fb088: 0xc0bec0c  jal         func_2FB030
    ctx->pc = 0x2FB088u;
    SET_GPR_U32(ctx, 31, 0x2FB090u);
    ctx->pc = 0x2FB030u;
    if (runtime->hasFunction(0x2FB030u)) {
        auto targetFn = runtime->lookupFunction(0x2FB030u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FB090u; }
        if (ctx->pc != 0x2FB090u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EditGetPEffectState__Fv_0x2fb030(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FB090u; }
        if (ctx->pc != 0x2FB090u) { return; }
    }
    ctx->pc = 0x2FB090u;
label_2fb090:
    // 0x2fb090: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x2fb090u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2fb094: 0x14430005  bne         $v0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2FB094u;
    {
        const bool branch_taken_0x2fb094 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x2fb094) {
            ctx->pc = 0x2FB0ACu;
            goto label_2fb0ac;
        }
    }
    ctx->pc = 0x2FB09Cu;
    // 0x2fb09c: 0xc0beaf8  jal         func_2FABE0
    ctx->pc = 0x2FB09Cu;
    SET_GPR_U32(ctx, 31, 0x2FB0A4u);
    ctx->pc = 0x2FABE0u;
    if (runtime->hasFunction(0x2FABE0u)) {
        auto targetFn = runtime->lookupFunction(0x2FABE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FB0A4u; }
        if (ctx->pc != 0x2FB0A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EditInitPlaceEffect__Fv_0x2fabe0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FB0A4u; }
        if (ctx->pc != 0x2FB0A4u) { return; }
    }
    ctx->pc = 0x2FB0A4u;
label_2fb0a4:
    // 0x2fb0a4: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2FB0A4u;
    {
        const bool branch_taken_0x2fb0a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FB0A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FB0A4u;
            // 0x2fb0a8: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fb0a4) {
            ctx->pc = 0x2FB0C0u;
            goto label_2fb0c0;
        }
    }
    ctx->pc = 0x2FB0ACu;
label_2fb0ac:
    // 0x2fb0ac: 0xc0bec0c  jal         func_2FB030
    ctx->pc = 0x2FB0ACu;
    SET_GPR_U32(ctx, 31, 0x2FB0B4u);
    ctx->pc = 0x2FB030u;
    if (runtime->hasFunction(0x2FB030u)) {
        auto targetFn = runtime->lookupFunction(0x2FB030u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FB0B4u; }
        if (ctx->pc != 0x2FB0B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EditGetPEffectState__Fv_0x2fb030(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FB0B4u; }
        if (ctx->pc != 0x2FB0B4u) { return; }
    }
    ctx->pc = 0x2FB0B4u;
label_2fb0b4:
    // 0x2fb0b4: 0x401026  xor         $v0, $v0, $zero
    ctx->pc = 0x2fb0b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 0));
    // 0x2fb0b8: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x2fb0b8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x2fb0bc: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x2fb0bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_2fb0c0:
    // 0x2fb0c0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2fb0c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2fb0c4: 0x3e00008  jr          $ra
    ctx->pc = 0x2FB0C4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FB0C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FB0C4u;
            // 0x2fb0c8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2FB0CCu;
}
