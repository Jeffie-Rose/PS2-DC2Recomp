#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: Load__6CMovieFPcP9mgCMemoryiibbb
// Address: 0x298b30 - 0x298b80
void Load__6CMovieFPcP9mgCMemoryiibbb_0x298b30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Load__6CMovieFPcP9mgCMemoryiibbb_0x298b30");
#endif

    switch (ctx->pc) {
        case 0x298b74u: goto label_298b74;
        default: break;
    }

    ctx->pc = 0x298b30u;

    // 0x298b30: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x298b30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x298b34: 0x3c0201f0  lui         $v0, 0x1F0
    ctx->pc = 0x298b34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)496 << 16));
    // 0x298b38: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x298b38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x298b3c: 0x24425d20  addiu       $v0, $v0, 0x5D20
    ctx->pc = 0x298b3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 23840));
    // 0x298b40: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x298b40u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x298b44: 0x27ac0010  addiu       $t4, $sp, 0x10
    ctx->pc = 0x298b44u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x298b48: 0xdc420010  ld          $v0, 0x10($v0)
    ctx->pc = 0x298b48u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x298b4c: 0x7d830000  sq          $v1, 0x0($t4)
    ctx->pc = 0x298b4cu;
    WRITE128(ADD32(GPR_U32(ctx, 12), 0), GPR_VEC(ctx, 3));
    // 0x298b50: 0xfd820010  sd          $v0, 0x10($t4)
    ctx->pc = 0x298b50u;
    WRITE64(ADD32(GPR_U32(ctx, 12), 16), GPR_U64(ctx, 2));
    // 0x298b54: 0xafa60010  sw          $a2, 0x10($sp)
    ctx->pc = 0x298b54u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 6));
    // 0x298b58: 0xafa60014  sw          $a2, 0x14($sp)
    ctx->pc = 0x298b58u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 6));
    // 0x298b5c: 0xafa60018  sw          $a2, 0x18($sp)
    ctx->pc = 0x298b5cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 6));
    // 0x298b60: 0xafa6001c  sw          $a2, 0x1C($sp)
    ctx->pc = 0x298b60u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 6));
    // 0x298b64: 0xafa60020  sw          $a2, 0x20($sp)
    ctx->pc = 0x298b64u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 6));
    // 0x298b68: 0xafa60024  sw          $a2, 0x24($sp)
    ctx->pc = 0x298b68u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 6));
    // 0x298b6c: 0xc0a6194  jal         func_298650
    ctx->pc = 0x298B6Cu;
    SET_GPR_U32(ctx, 31, 0x298B74u);
    ctx->pc = 0x298B70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x298B6Cu;
            // 0x298b70: 0x180302d  daddu       $a2, $t4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x298650u;
    if (runtime->hasFunction(0x298650u)) {
        auto targetFn = runtime->lookupFunction(0x298650u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x298B74u; }
        if (ctx->pc != 0x298B74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Load__6CMovieFPcPP9mgCMemoryiibbb_0x298650(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x298B74u; }
        if (ctx->pc != 0x298B74u) { return; }
    }
    ctx->pc = 0x298B74u;
label_298b74:
    // 0x298b74: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x298b74u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x298b78: 0x3e00008  jr          $ra
    ctx->pc = 0x298B78u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x298B7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x298B78u;
            // 0x298b7c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x298B80u;
}
