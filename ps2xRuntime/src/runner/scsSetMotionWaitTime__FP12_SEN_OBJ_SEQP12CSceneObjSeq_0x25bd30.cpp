#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: scsSetMotionWaitTime__FP12_SEN_OBJ_SEQP12CSceneObjSeq
// Address: 0x25bd30 - 0x25bd5c
void scsSetMotionWaitTime__FP12_SEN_OBJ_SEQP12CSceneObjSeq_0x25bd30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("scsSetMotionWaitTime__FP12_SEN_OBJ_SEQP12CSceneObjSeq_0x25bd30");
#endif

    switch (ctx->pc) {
        case 0x25bd4cu: goto label_25bd4c;
        default: break;
    }

    ctx->pc = 0x25bd30u;

    // 0x25bd30: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x25bd30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x25bd34: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x25bd34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x25bd38: 0xc48c0020  lwc1        $f12, 0x20($a0)
    ctx->pc = 0x25bd38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x25bd3c: 0x8ca50064  lw          $a1, 0x64($a1)
    ctx->pc = 0x25bd3cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 100)));
    // 0x25bd40: 0x3c0401ed  lui         $a0, 0x1ED
    ctx->pc = 0x25bd40u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)493 << 16));
    // 0x25bd44: 0xc097c84  jal         func_25F210
    ctx->pc = 0x25BD44u;
    SET_GPR_U32(ctx, 31, 0x25BD4Cu);
    ctx->pc = 0x25BD48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x25BD44u;
            // 0x25bd48: 0x2484e880  addiu       $a0, $a0, -0x1780 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961280));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F210u;
    if (runtime->hasFunction(0x25F210u)) {
        auto targetFn = runtime->lookupFunction(0x25F210u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25BD4Cu; }
        if (ctx->pc != 0x25BD4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetMotionWaitTime__10CEohMotherFif_0x25f210(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25BD4Cu; }
        if (ctx->pc != 0x25BD4Cu) { return; }
    }
    ctx->pc = 0x25BD4Cu;
label_25bd4c:
    // 0x25bd4c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x25bd4cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25bd50: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x25bd50u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25bd54: 0x3e00008  jr          $ra
    ctx->pc = 0x25BD54u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25BD58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25BD54u;
            // 0x25bd58: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x25BD5Cu;
}
