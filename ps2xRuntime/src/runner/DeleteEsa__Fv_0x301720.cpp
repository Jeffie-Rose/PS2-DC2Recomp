#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: DeleteEsa__Fv
// Address: 0x301720 - 0x30175c
void DeleteEsa__Fv_0x301720(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("DeleteEsa__Fv_0x301720");
#endif

    switch (ctx->pc) {
        case 0x301730u: goto label_301730;
        case 0x301738u: goto label_301738;
        case 0x30174cu: goto label_30174c;
        default: break;
    }

    ctx->pc = 0x301720u;

    // 0x301720: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x301720u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x301724: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x301724u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x301728: 0xc064220  jal         func_190880
    ctx->pc = 0x301728u;
    SET_GPR_U32(ctx, 31, 0x301730u);
    ctx->pc = 0x30172Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x301728u;
            // 0x30172c: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x190880u;
    if (runtime->hasFunction(0x190880u)) {
        auto targetFn = runtime->lookupFunction(0x190880u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x301730u; }
        if (ctx->pc != 0x301730u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetSaveData__Fv_0x190880(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x301730u; }
        if (ctx->pc != 0x301730u) { return; }
    }
    ctx->pc = 0x301730u;
label_301730:
    // 0x301730: 0xc0bf154  jal         func_2FC550
    ctx->pc = 0x301730u;
    SET_GPR_U32(ctx, 31, 0x301738u);
    ctx->pc = 0x301734u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x301730u;
            // 0x301734: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2FC550u;
    if (runtime->hasFunction(0x2FC550u)) {
        auto targetFn = runtime->lookupFunction(0x2FC550u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x301738u; }
        if (ctx->pc != 0x301738u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EsaInit__Fv_0x2fc550(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x301738u; }
        if (ctx->pc != 0x301738u) { return; }
    }
    ctx->pc = 0x301738u;
label_301738:
    // 0x301738: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x301738u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x30173c: 0xaf809fa8  sw          $zero, -0x6058($gp)
    ctx->pc = 0x30173cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294942632), GPR_U32(ctx, 0));
    // 0x301740: 0x3421d2a0  ori         $at, $at, 0xD2A0
    ctx->pc = 0x301740u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)53920);
    // 0x301744: 0xc0673e4  jal         func_19CF90
    ctx->pc = 0x301744u;
    SET_GPR_U32(ctx, 31, 0x30174Cu);
    ctx->pc = 0x301748u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x301744u;
            // 0x301748: 0x2012021  addu        $a0, $s0, $at (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 1)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19CF90u;
    if (runtime->hasFunction(0x19CF90u)) {
        auto targetFn = runtime->lookupFunction(0x19CF90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30174Cu; }
        if (ctx->pc != 0x30174Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DeleteBait__16CUserDataManagerFv_0x19cf90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30174Cu; }
        if (ctx->pc != 0x30174Cu) { return; }
    }
    ctx->pc = 0x30174Cu;
label_30174c:
    // 0x30174c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x30174cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x301750: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x301750u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x301754: 0x3e00008  jr          $ra
    ctx->pc = 0x301754u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x301758u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x301754u;
            // 0x301758: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x30175Cu;
}
