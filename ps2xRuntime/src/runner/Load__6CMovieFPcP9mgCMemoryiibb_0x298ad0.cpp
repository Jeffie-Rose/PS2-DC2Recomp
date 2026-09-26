#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: Load__6CMovieFPcP9mgCMemoryiibb
// Address: 0x298ad0 - 0x298b24
void Load__6CMovieFPcP9mgCMemoryiibb_0x298ad0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Load__6CMovieFPcP9mgCMemoryiibb_0x298ad0");
#endif

    switch (ctx->pc) {
        case 0x298b18u: goto label_298b18;
        default: break;
    }

    ctx->pc = 0x298ad0u;

    // 0x298ad0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x298ad0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x298ad4: 0x3c0201f0  lui         $v0, 0x1F0
    ctx->pc = 0x298ad4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)496 << 16));
    // 0x298ad8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x298ad8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x298adc: 0x24425d00  addiu       $v0, $v0, 0x5D00
    ctx->pc = 0x298adcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 23808));
    // 0x298ae0: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x298ae0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x298ae4: 0x27ac0010  addiu       $t4, $sp, 0x10
    ctx->pc = 0x298ae4u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x298ae8: 0x240b0001  addiu       $t3, $zero, 0x1
    ctx->pc = 0x298ae8u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x298aec: 0xdc420010  ld          $v0, 0x10($v0)
    ctx->pc = 0x298aecu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x298af0: 0x7d830000  sq          $v1, 0x0($t4)
    ctx->pc = 0x298af0u;
    WRITE128(ADD32(GPR_U32(ctx, 12), 0), GPR_VEC(ctx, 3));
    // 0x298af4: 0xfd820010  sd          $v0, 0x10($t4)
    ctx->pc = 0x298af4u;
    WRITE64(ADD32(GPR_U32(ctx, 12), 16), GPR_U64(ctx, 2));
    // 0x298af8: 0xafa60010  sw          $a2, 0x10($sp)
    ctx->pc = 0x298af8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 6));
    // 0x298afc: 0xafa60014  sw          $a2, 0x14($sp)
    ctx->pc = 0x298afcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 6));
    // 0x298b00: 0xafa60018  sw          $a2, 0x18($sp)
    ctx->pc = 0x298b00u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 6));
    // 0x298b04: 0xafa6001c  sw          $a2, 0x1C($sp)
    ctx->pc = 0x298b04u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 6));
    // 0x298b08: 0xafa60020  sw          $a2, 0x20($sp)
    ctx->pc = 0x298b08u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 6));
    // 0x298b0c: 0xafa60024  sw          $a2, 0x24($sp)
    ctx->pc = 0x298b0cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 6));
    // 0x298b10: 0xc0a6194  jal         func_298650
    ctx->pc = 0x298B10u;
    SET_GPR_U32(ctx, 31, 0x298B18u);
    ctx->pc = 0x298B14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x298B10u;
            // 0x298b14: 0x180302d  daddu       $a2, $t4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x298650u;
    if (runtime->hasFunction(0x298650u)) {
        auto targetFn = runtime->lookupFunction(0x298650u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x298B18u; }
        if (ctx->pc != 0x298B18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Load__6CMovieFPcPP9mgCMemoryiibbb_0x298650(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x298B18u; }
        if (ctx->pc != 0x298B18u) { return; }
    }
    ctx->pc = 0x298B18u;
label_298b18:
    // 0x298b18: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x298b18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x298b1c: 0x3e00008  jr          $ra
    ctx->pc = 0x298B1Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x298B20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x298B1Cu;
            // 0x298b20: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x298B24u;
}
