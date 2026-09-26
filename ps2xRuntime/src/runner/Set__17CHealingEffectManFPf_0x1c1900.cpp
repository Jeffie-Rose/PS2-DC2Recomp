#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: Set__17CHealingEffectManFPf
// Address: 0x1c1900 - 0x1c193c
void Set__17CHealingEffectManFPf_0x1c1900(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Set__17CHealingEffectManFPf_0x1c1900");
#endif

    switch (ctx->pc) {
        case 0x1c1918u: goto label_1c1918;
        default: break;
    }

    ctx->pc = 0x1c1900u;

    // 0x1c1900: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1c1900u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1c1904: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1c1904u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1c1908: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1c1908u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1c190c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1c190cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c1910: 0xc041c5c  jal         func_107170
    ctx->pc = 0x1C1910u;
    SET_GPR_U32(ctx, 31, 0x1C1918u);
    ctx->pc = 0x1C1914u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C1910u;
            // 0x1c1914: 0x26040320  addiu       $a0, $s0, 0x320 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 800));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107170u;
    if (runtime->hasFunction(0x107170u)) {
        auto targetFn = runtime->lookupFunction(0x107170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C1918u; }
        if (ctx->pc != 0x1C1918u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0CopyVector_0x107170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C1918u; }
        if (ctx->pc != 0x1C1918u) { return; }
    }
    ctx->pc = 0x1C1918u;
label_1c1918:
    // 0x1c1918: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1c1918u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c191c: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x1c191cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x1c1920: 0xa6040000  sh          $a0, 0x0($s0)
    ctx->pc = 0x1c1920u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 4));
    // 0x1c1924: 0xa6000314  sh          $zero, 0x314($s0)
    ctx->pc = 0x1c1924u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 788), (uint16_t)GPR_U32(ctx, 0));
    // 0x1c1928: 0xae030310  sw          $v1, 0x310($s0)
    ctx->pc = 0x1c1928u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 784), GPR_U32(ctx, 3));
    // 0x1c192c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1c192cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c1930: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1c1930u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c1934: 0x3e00008  jr          $ra
    ctx->pc = 0x1C1934u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C1938u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C1934u;
            // 0x1c1938: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1C193Cu;
}
