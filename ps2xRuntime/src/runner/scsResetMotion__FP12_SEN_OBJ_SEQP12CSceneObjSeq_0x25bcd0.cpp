#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: scsResetMotion__FP12_SEN_OBJ_SEQP12CSceneObjSeq
// Address: 0x25bcd0 - 0x25bcf8
void scsResetMotion__FP12_SEN_OBJ_SEQP12CSceneObjSeq_0x25bcd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("scsResetMotion__FP12_SEN_OBJ_SEQP12CSceneObjSeq_0x25bcd0");
#endif

    switch (ctx->pc) {
        case 0x25bce8u: goto label_25bce8;
        default: break;
    }

    ctx->pc = 0x25bcd0u;

    // 0x25bcd0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x25bcd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x25bcd4: 0x3c0401ed  lui         $a0, 0x1ED
    ctx->pc = 0x25bcd4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)493 << 16));
    // 0x25bcd8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x25bcd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x25bcdc: 0x8ca50064  lw          $a1, 0x64($a1)
    ctx->pc = 0x25bcdcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 100)));
    // 0x25bce0: 0xc0979c0  jal         func_25E700
    ctx->pc = 0x25BCE0u;
    SET_GPR_U32(ctx, 31, 0x25BCE8u);
    ctx->pc = 0x25BCE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x25BCE0u;
            // 0x25bce4: 0x2484e880  addiu       $a0, $a0, -0x1780 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961280));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25E700u;
    if (runtime->hasFunction(0x25E700u)) {
        auto targetFn = runtime->lookupFunction(0x25E700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25BCE8u; }
        if (ctx->pc != 0x25BCE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ResetMotion__10CEohMotherFi_0x25e700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25BCE8u; }
        if (ctx->pc != 0x25BCE8u) { return; }
    }
    ctx->pc = 0x25BCE8u;
label_25bce8:
    // 0x25bce8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x25bce8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25bcec: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x25bcecu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25bcf0: 0x3e00008  jr          $ra
    ctx->pc = 0x25BCF0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25BCF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25BCF0u;
            // 0x25bcf4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x25BCF8u;
}
