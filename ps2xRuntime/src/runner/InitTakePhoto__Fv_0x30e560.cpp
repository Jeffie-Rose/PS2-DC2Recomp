#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: InitTakePhoto__Fv
// Address: 0x30e560 - 0x30e598
void InitTakePhoto__Fv_0x30e560(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("InitTakePhoto__Fv_0x30e560");
#endif

    switch (ctx->pc) {
        case 0x30e574u: goto label_30e574;
        default: break;
    }

    ctx->pc = 0x30e560u;

    // 0x30e560: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x30e560u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x30e564: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x30e564u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x30e568: 0xaf80a220  sw          $zero, -0x5DE0($gp)
    ctx->pc = 0x30e568u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294943264), GPR_U32(ctx, 0));
    // 0x30e56c: 0xc0c3954  jal         func_30E550
    ctx->pc = 0x30E56Cu;
    SET_GPR_U32(ctx, 31, 0x30E574u);
    ctx->pc = 0x30E570u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30E56Cu;
            // 0x30e570: 0xaf80a224  sw          $zero, -0x5DDC($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294943268), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x30E550u;
    if (runtime->hasFunction(0x30E550u)) {
        auto targetFn = runtime->lookupFunction(0x30E550u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30E574u; }
        if (ctx->pc != 0x30E574u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        InitPhotoTitle__Fv_0x30e550(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30E574u; }
        if (ctx->pc != 0x30E574u) { return; }
    }
    ctx->pc = 0x30E574u;
label_30e574:
    // 0x30e574: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x30e574u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x30e578: 0xaf80a234  sw          $zero, -0x5DCC($gp)
    ctx->pc = 0x30e578u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294943284), GPR_U32(ctx, 0));
    // 0x30e57c: 0xaf83a228  sw          $v1, -0x5DD8($gp)
    ctx->pc = 0x30e57cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294943272), GPR_U32(ctx, 3));
    // 0x30e580: 0xaf80a230  sw          $zero, -0x5DD0($gp)
    ctx->pc = 0x30e580u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294943280), GPR_U32(ctx, 0));
    // 0x30e584: 0xaf80a238  sw          $zero, -0x5DC8($gp)
    ctx->pc = 0x30e584u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294943288), GPR_U32(ctx, 0));
    // 0x30e588: 0xaf80a240  sw          $zero, -0x5DC0($gp)
    ctx->pc = 0x30e588u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294943296), GPR_U32(ctx, 0));
    // 0x30e58c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x30e58cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x30e590: 0x3e00008  jr          $ra
    ctx->pc = 0x30E590u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x30E594u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30E590u;
            // 0x30e594: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x30E598u;
}
