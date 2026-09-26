#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: SetSprite__12CDamageScoreFPfiiii
// Address: 0x1caa50 - 0x1caad8
void SetSprite__12CDamageScoreFPfiiii_0x1caa50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetSprite__12CDamageScoreFPfiiii_0x1caa50");
#endif

    switch (ctx->pc) {
        case 0x1caa88u: goto label_1caa88;
        default: break;
    }

    ctx->pc = 0x1caa50u;

    // 0x1caa50: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1caa50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1caa54: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x1caa54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x1caa58: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1caa58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x1caa5c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1caa5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1caa60: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x1caa60u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1caa64: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1caa64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1caa68: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x1caa68u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1caa6c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1caa6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1caa70: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x1caa70u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1caa74: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1caa74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1caa78: 0x100882d  daddu       $s1, $t0, $zero
    ctx->pc = 0x1caa78u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1caa7c: 0x120802d  daddu       $s0, $t1, $zero
    ctx->pc = 0x1caa7cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1caa80: 0xc041c5c  jal         func_107170
    ctx->pc = 0x1CAA80u;
    SET_GPR_U32(ctx, 31, 0x1CAA88u);
    ctx->pc = 0x1CAA84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CAA80u;
            // 0x1caa84: 0x26840010  addiu       $a0, $s4, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107170u;
    if (runtime->hasFunction(0x107170u)) {
        auto targetFn = runtime->lookupFunction(0x107170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CAA88u; }
        if (ctx->pc != 0x1CAA88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0CopyVector_0x107170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CAA88u; }
        if (ctx->pc != 0x1CAA88u) { return; }
    }
    ctx->pc = 0x1CAA88u;
label_1caa88:
    // 0x1caa88: 0xa680004e  sh          $zero, 0x4E($s4)
    ctx->pc = 0x1caa88u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 78), (uint16_t)GPR_U32(ctx, 0));
    // 0x1caa8c: 0x3c034049  lui         $v1, 0x4049
    ctx->pc = 0x1caa8cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16457 << 16));
    // 0x1caa90: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1caa90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1caa94: 0xa6800050  sh          $zero, 0x50($s4)
    ctx->pc = 0x1caa94u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 80), (uint16_t)GPR_U32(ctx, 0));
    // 0x1caa98: 0xae840088  sw          $a0, 0x88($s4)
    ctx->pc = 0x1caa98u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 136), GPR_U32(ctx, 4));
    // 0x1caa9c: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x1caa9cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x1caaa0: 0xae840084  sw          $a0, 0x84($s4)
    ctx->pc = 0x1caaa0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 132), GPR_U32(ctx, 4));
    // 0x1caaa4: 0xae830028  sw          $v1, 0x28($s4)
    ctx->pc = 0x1caaa4u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 40), GPR_U32(ctx, 3));
    // 0x1caaa8: 0xae910074  sw          $s1, 0x74($s4)
    ctx->pc = 0x1caaa8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 116), GPR_U32(ctx, 17));
    // 0x1caaac: 0xae900078  sw          $s0, 0x78($s4)
    ctx->pc = 0x1caaacu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 120), GPR_U32(ctx, 16));
    // 0x1caab0: 0xae93007c  sw          $s3, 0x7C($s4)
    ctx->pc = 0x1caab0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 124), GPR_U32(ctx, 19));
    // 0x1caab4: 0xae920080  sw          $s2, 0x80($s4)
    ctx->pc = 0x1caab4u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 128), GPR_U32(ctx, 18));
    // 0x1caab8: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x1caab8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1caabc: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1caabcu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1caac0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1caac0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1caac4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1caac4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1caac8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1caac8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1caacc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1caaccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1caad0: 0x3e00008  jr          $ra
    ctx->pc = 0x1CAAD0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CAAD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CAAD0u;
            // 0x1caad4: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1CAAD8u;
}
