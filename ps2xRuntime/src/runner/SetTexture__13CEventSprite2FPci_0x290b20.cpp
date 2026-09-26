#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: SetTexture__13CEventSprite2FPci
// Address: 0x290b20 - 0x290b58
void SetTexture__13CEventSprite2FPci_0x290b20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetTexture__13CEventSprite2FPci_0x290b20");
#endif

    switch (ctx->pc) {
        case 0x290b40u: goto label_290b40;
        default: break;
    }

    ctx->pc = 0x290b20u;

    // 0x290b20: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x290b20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x290b24: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x290b24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x290b28: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x290b28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x290b2c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x290b2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x290b30: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x290b30u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x290b34: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x290b34u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x290b38: 0xc04a3dc  jal         func_128F70
    ctx->pc = 0x290B38u;
    SET_GPR_U32(ctx, 31, 0x290B40u);
    ctx->pc = 0x290B3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x290B38u;
            // 0x290b3c: 0x2624000c  addiu       $a0, $s1, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 12));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128F70u;
    if (runtime->hasFunction(0x128F70u)) {
        auto targetFn = runtime->lookupFunction(0x128F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x290B40u; }
        if (ctx->pc != 0x290B40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcpy_0x128f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x290B40u; }
        if (ctx->pc != 0x290B40u) { return; }
    }
    ctx->pc = 0x290B40u;
label_290b40:
    // 0x290b40: 0xae300008  sw          $s0, 0x8($s1)
    ctx->pc = 0x290b40u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 16));
    // 0x290b44: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x290b44u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x290b48: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x290b48u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x290b4c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x290b4cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x290b50: 0x3e00008  jr          $ra
    ctx->pc = 0x290B50u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x290B54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x290B50u;
            // 0x290b54: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x290B58u;
}
