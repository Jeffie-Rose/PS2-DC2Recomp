#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: ResetMapInfo__Fv
// Address: 0x2c5180 - 0x2c51cc
void ResetMapInfo__Fv_0x2c5180(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ResetMapInfo__Fv_0x2c5180");
#endif

    switch (ctx->pc) {
        case 0x2c5190u: goto label_2c5190;
        case 0x2c51a4u: goto label_2c51a4;
        case 0x2c51acu: goto label_2c51ac;
        default: break;
    }

    ctx->pc = 0x2c5180u;

    // 0x2c5180: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2c5180u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2c5184: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2c5184u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2c5188: 0xc064220  jal         func_190880
    ctx->pc = 0x2C5188u;
    SET_GPR_U32(ctx, 31, 0x2C5190u);
    ctx->pc = 0x2C518Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C5188u;
            // 0x2c518c: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x190880u;
    if (runtime->hasFunction(0x190880u)) {
        auto targetFn = runtime->lookupFunction(0x190880u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C5190u; }
        if (ctx->pc != 0x2C5190u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetSaveData__Fv_0x190880(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C5190u; }
        if (ctx->pc != 0x2C5190u) { return; }
    }
    ctx->pc = 0x2C5190u;
label_2c5190:
    // 0x2c5190: 0x3c0501f1  lui         $a1, 0x1F1
    ctx->pc = 0x2c5190u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)497 << 16));
    // 0x2c5194: 0x24441a18  addiu       $a0, $v0, 0x1A18
    ctx->pc = 0x2c5194u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 6680));
    // 0x2c5198: 0x24a5d2c8  addiu       $a1, $a1, -0x2D38
    ctx->pc = 0x2c5198u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294955720));
    // 0x2c519c: 0xc049c18  jal         func_127060
    ctx->pc = 0x2C519Cu;
    SET_GPR_U32(ctx, 31, 0x2C51A4u);
    ctx->pc = 0x2C51A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C519Cu;
            // 0x2c51a0: 0x2406000c  addiu       $a2, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127060u;
    if (runtime->hasFunction(0x127060u)) {
        auto targetFn = runtime->lookupFunction(0x127060u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C51A4u; }
        if (ctx->pc != 0x2C51A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        memcpy_0x127060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C51A4u; }
        if (ctx->pc != 0x2C51A4u) { return; }
    }
    ctx->pc = 0x2C51A4u;
label_2c51a4:
    // 0x2c51a4: 0xc064220  jal         func_190880
    ctx->pc = 0x2C51A4u;
    SET_GPR_U32(ctx, 31, 0x2C51ACu);
    ctx->pc = 0x2C51A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C51A4u;
            // 0x2c51a8: 0x87909d1c  lh          $s0, -0x62E4($gp) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294941980)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x190880u;
    if (runtime->hasFunction(0x190880u)) {
        auto targetFn = runtime->lookupFunction(0x190880u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C51ACu; }
        if (ctx->pc != 0x2C51ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetSaveData__Fv_0x190880(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C51ACu; }
        if (ctx->pc != 0x2C51ACu) { return; }
    }
    ctx->pc = 0x2C51ACu;
label_2c51ac:
    // 0x2c51ac: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x2c51acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x2c51b0: 0x3421c5b4  ori         $at, $at, 0xC5B4
    ctx->pc = 0x2c51b0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)50612);
    // 0x2c51b4: 0x411821  addu        $v1, $v0, $at
    ctx->pc = 0x2c51b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 1)));
    // 0x2c51b8: 0xac700000  sw          $s0, 0x0($v1)
    ctx->pc = 0x2c51b8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 16));
    // 0x2c51bc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2c51bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c51c0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2c51c0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c51c4: 0x3e00008  jr          $ra
    ctx->pc = 0x2C51C4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C51C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C51C4u;
            // 0x2c51c8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2C51CCu;
}
