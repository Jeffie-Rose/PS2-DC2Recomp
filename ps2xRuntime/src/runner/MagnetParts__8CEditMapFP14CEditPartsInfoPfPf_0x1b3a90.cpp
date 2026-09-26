#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: MagnetParts__8CEditMapFP14CEditPartsInfoPfPf
// Address: 0x1b3a90 - 0x1b3b00
void MagnetParts__8CEditMapFP14CEditPartsInfoPfPf_0x1b3a90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("MagnetParts__8CEditMapFP14CEditPartsInfoPfPf_0x1b3a90");
#endif

    switch (ctx->pc) {
        case 0x1b3ac8u: goto label_1b3ac8;
        case 0x1b3ae4u: goto label_1b3ae4;
        default: break;
    }

    ctx->pc = 0x1b3a90u;

    // 0x1b3a90: 0x27bdf7b0  addiu       $sp, $sp, -0x850
    ctx->pc = 0x1b3a90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294965168));
    // 0x1b3a94: 0x24080200  addiu       $t0, $zero, 0x200
    ctx->pc = 0x1b3a94u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x1b3a98: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1b3a98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x1b3a9c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1b3a9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1b3aa0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1b3aa0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1b3aa4: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x1b3aa4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b3aa8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1b3aa8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1b3aac: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1b3aacu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b3ab0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1b3ab0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1b3ab4: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x1b3ab4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b3ab8: 0xc4ec0000  lwc1        $f12, 0x0($a3)
    ctx->pc = 0x1b3ab8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1b3abc: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x1b3abcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b3ac0: 0xc06c8c8  jal         func_1B2320
    ctx->pc = 0x1B3AC0u;
    SET_GPR_U32(ctx, 31, 0x1B3AC8u);
    ctx->pc = 0x1B3AC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B3AC0u;
            // 0x1b3ac4: 0x27a70050  addiu       $a3, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B2320u;
    if (runtime->hasFunction(0x1B2320u)) {
        auto targetFn = runtime->lookupFunction(0x1B2320u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B3AC8u; }
        if (ctx->pc != 0x1B3AC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetNearParts__8CEditMapFP14CEditPartsInfoPffPP10CEditPartsi_0x1b2320(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B3AC8u; }
        if (ctx->pc != 0x1B3AC8u) { return; }
    }
    ctx->pc = 0x1B3AC8u;
label_1b3ac8:
    // 0x1b3ac8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1b3ac8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b3acc: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1b3accu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b3ad0: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1b3ad0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b3ad4: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x1b3ad4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b3ad8: 0x27a80050  addiu       $t0, $sp, 0x50
    ctx->pc = 0x1b3ad8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1b3adc: 0xc06cad4  jal         func_1B2B50
    ctx->pc = 0x1B3ADCu;
    SET_GPR_U32(ctx, 31, 0x1B3AE4u);
    ctx->pc = 0x1B3AE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B3ADCu;
            // 0x1b3ae0: 0x40482d  daddu       $t1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B2B50u;
    if (runtime->hasFunction(0x1B2B50u)) {
        auto targetFn = runtime->lookupFunction(0x1B2B50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B3AE4u; }
        if (ctx->pc != 0x1B3AE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MagnetParts__8CEditMapFP14CEditPartsInfoPfPfPP10CEditPartsi_0x1b2b50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B3AE4u; }
        if (ctx->pc != 0x1B3AE4u) { return; }
    }
    ctx->pc = 0x1B3AE4u;
label_1b3ae4:
    // 0x1b3ae4: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1b3ae4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1b3ae8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1b3ae8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1b3aec: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1b3aecu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b3af0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1b3af0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b3af4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1b3af4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b3af8: 0x3e00008  jr          $ra
    ctx->pc = 0x1B3AF8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B3AFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B3AF8u;
            // 0x1b3afc: 0x27bd0850  addiu       $sp, $sp, 0x850 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 2128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1B3B00u;
}
