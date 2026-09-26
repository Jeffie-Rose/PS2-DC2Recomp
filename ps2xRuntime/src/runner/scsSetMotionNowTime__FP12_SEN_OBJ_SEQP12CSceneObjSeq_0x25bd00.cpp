#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: scsSetMotionNowTime__FP12_SEN_OBJ_SEQP12CSceneObjSeq
// Address: 0x25bd00 - 0x25bd2c
void scsSetMotionNowTime__FP12_SEN_OBJ_SEQP12CSceneObjSeq_0x25bd00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("scsSetMotionNowTime__FP12_SEN_OBJ_SEQP12CSceneObjSeq_0x25bd00");
#endif

    switch (ctx->pc) {
        case 0x25bd1cu: goto label_25bd1c;
        default: break;
    }

    ctx->pc = 0x25bd00u;

    // 0x25bd00: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x25bd00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x25bd04: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x25bd04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x25bd08: 0xc48c0020  lwc1        $f12, 0x20($a0)
    ctx->pc = 0x25bd08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x25bd0c: 0x8ca50064  lw          $a1, 0x64($a1)
    ctx->pc = 0x25bd0cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 100)));
    // 0x25bd10: 0x3c0401ed  lui         $a0, 0x1ED
    ctx->pc = 0x25bd10u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)493 << 16));
    // 0x25bd14: 0xc097c50  jal         func_25F140
    ctx->pc = 0x25BD14u;
    SET_GPR_U32(ctx, 31, 0x25BD1Cu);
    ctx->pc = 0x25BD18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x25BD14u;
            // 0x25bd18: 0x2484e880  addiu       $a0, $a0, -0x1780 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961280));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F140u;
    if (runtime->hasFunction(0x25F140u)) {
        auto targetFn = runtime->lookupFunction(0x25F140u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25BD1Cu; }
        if (ctx->pc != 0x25BD1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetMotionNowTime__10CEohMotherFif_0x25f140(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25BD1Cu; }
        if (ctx->pc != 0x25BD1Cu) { return; }
    }
    ctx->pc = 0x25BD1Cu;
label_25bd1c:
    // 0x25bd1c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x25bd1cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25bd20: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x25bd20u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25bd24: 0x3e00008  jr          $ra
    ctx->pc = 0x25BD24u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25BD28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25BD24u;
            // 0x25bd28: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x25BD2Cu;
}
