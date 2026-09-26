#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: TitleCopyRightInit__Fv
// Address: 0x2a3020 - 0x2a306c
void TitleCopyRightInit__Fv_0x2a3020(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("TitleCopyRightInit__Fv_0x2a3020");
#endif

    switch (ctx->pc) {
        case 0x2a303cu: goto label_2a303c;
        case 0x2a3060u: goto label_2a3060;
        default: break;
    }

    ctx->pc = 0x2a3020u;

    // 0x2a3020: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2a3020u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2a3024: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2a3024u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2a3028: 0x8f8299ec  lw          $v0, -0x6614($gp)
    ctx->pc = 0x2a3028u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941164)));
    // 0x2a302c: 0xa38099b4  sb          $zero, -0x664C($gp)
    ctx->pc = 0x2a302cu;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294941108), (uint8_t)GPR_U32(ctx, 0));
    // 0x2a3030: 0xa78099b8  sh          $zero, -0x6648($gp)
    ctx->pc = 0x2a3030u;
    WRITE16(ADD32(GPR_U32(ctx, 28), 4294941112), (uint16_t)GPR_U32(ctx, 0));
    // 0x2a3034: 0xc05f5d4  jal         func_17D750
    ctx->pc = 0x2A3034u;
    SET_GPR_U32(ctx, 31, 0x2A303Cu);
    ctx->pc = 0x2A3038u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A3034u;
            // 0x2a3038: 0x24442c70  addiu       $a0, $v0, 0x2C70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 11376));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17D750u;
    if (runtime->hasFunction(0x17D750u)) {
        auto targetFn = runtime->lookupFunction(0x17D750u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A303Cu; }
        if (ctx->pc != 0x2A303Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Initialize__10CFadeInOutFv_0x17d750(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A303Cu; }
        if (ctx->pc != 0x2A303Cu) { return; }
    }
    ctx->pc = 0x2A303Cu;
label_2a303c:
    // 0x2a303c: 0x8f8299ec  lw          $v0, -0x6614($gp)
    ctx->pc = 0x2a303cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941164)));
    // 0x2a3040: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2a3040u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2a3044: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2a3044u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2a3048: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2a3048u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a304c: 0xa38399b4  sb          $v1, -0x664C($gp)
    ctx->pc = 0x2a304cu;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294941108), (uint8_t)GPR_U32(ctx, 3));
    // 0x2a3050: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x2a3050u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x2a3054: 0x46006386  mov.s       $f14, $f12
    ctx->pc = 0x2a3054u;
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
    // 0x2a3058: 0xc05f610  jal         func_17D840
    ctx->pc = 0x2A3058u;
    SET_GPR_U32(ctx, 31, 0x2A3060u);
    ctx->pc = 0x2A305Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A3058u;
            // 0x2a305c: 0x24442c70  addiu       $a0, $v0, 0x2C70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 11376));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17D840u;
    if (runtime->hasFunction(0x17D840u)) {
        auto targetFn = runtime->lookupFunction(0x17D840u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A3060u; }
        if (ctx->pc != 0x2A3060u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FadeOut__10CFadeInOutFifff_0x17d840(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A3060u; }
        if (ctx->pc != 0x2A3060u) { return; }
    }
    ctx->pc = 0x2A3060u;
label_2a3060:
    // 0x2a3060: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2a3060u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2a3064: 0x3e00008  jr          $ra
    ctx->pc = 0x2A3064u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A3068u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A3064u;
            // 0x2a3068: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2A306Cu;
}
