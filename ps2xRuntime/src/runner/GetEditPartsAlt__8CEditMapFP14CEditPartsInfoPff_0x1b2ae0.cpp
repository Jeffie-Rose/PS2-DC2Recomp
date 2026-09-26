#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetEditPartsAlt__8CEditMapFP14CEditPartsInfoPff
// Address: 0x1b2ae0 - 0x1b2b4c
void GetEditPartsAlt__8CEditMapFP14CEditPartsInfoPff_0x1b2ae0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetEditPartsAlt__8CEditMapFP14CEditPartsInfoPff_0x1b2ae0");
#endif

    switch (ctx->pc) {
        case 0x1b2b14u: goto label_1b2b14;
        case 0x1b2b30u: goto label_1b2b30;
        default: break;
    }

    ctx->pc = 0x1b2ae0u;

    // 0x1b2ae0: 0x27bdf7b0  addiu       $sp, $sp, -0x850
    ctx->pc = 0x1b2ae0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294965168));
    // 0x1b2ae4: 0x24080200  addiu       $t0, $zero, 0x200
    ctx->pc = 0x1b2ae4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x1b2ae8: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1b2ae8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x1b2aec: 0x27a70050  addiu       $a3, $sp, 0x50
    ctx->pc = 0x1b2aecu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1b2af0: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x1b2af0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x1b2af4: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1b2af4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x1b2af8: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1b2af8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b2afc: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1b2afcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1b2b00: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1b2b00u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b2b04: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x1b2b04u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x1b2b08: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x1b2b08u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b2b0c: 0xc06c8c8  jal         func_1B2320
    ctx->pc = 0x1B2B0Cu;
    SET_GPR_U32(ctx, 31, 0x1B2B14u);
    ctx->pc = 0x1B2B10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B2B0Cu;
            // 0x1b2b10: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B2320u;
    if (runtime->hasFunction(0x1B2320u)) {
        auto targetFn = runtime->lookupFunction(0x1B2320u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B2B14u; }
        if (ctx->pc != 0x1B2B14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetNearParts__8CEditMapFP14CEditPartsInfoPffPP10CEditPartsi_0x1b2320(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B2B14u; }
        if (ctx->pc != 0x1B2B14u) { return; }
    }
    ctx->pc = 0x1B2B14u;
label_1b2b14:
    // 0x1b2b14: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1b2b14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b2b18: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1b2b18u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b2b1c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1b2b1cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b2b20: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x1b2b20u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b2b24: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1b2b24u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x1b2b28: 0xc0bb5c8  jal         func_2ED720
    ctx->pc = 0x1B2B28u;
    SET_GPR_U32(ctx, 31, 0x1B2B30u);
    ctx->pc = 0x1B2B2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B2B28u;
            // 0x1b2b2c: 0x27a70050  addiu       $a3, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2ED720u;
    if (runtime->hasFunction(0x2ED720u)) {
        auto targetFn = runtime->lookupFunction(0x2ED720u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B2B30u; }
        if (ctx->pc != 0x1B2B30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetEditPartsAlt__8CEditMapFP14CEditPartsInfoPffPP10CEditPartsi_0x2ed720(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B2B30u; }
        if (ctx->pc != 0x1B2B30u) { return; }
    }
    ctx->pc = 0x1B2B30u;
label_1b2b30:
    // 0x1b2b30: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1b2b30u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1b2b34: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x1b2b34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1b2b38: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x1b2b38u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1b2b3c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1b2b3cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b2b40: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1b2b40u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b2b44: 0x3e00008  jr          $ra
    ctx->pc = 0x1B2B44u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B2B48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B2B44u;
            // 0x1b2b48: 0x27bd0850  addiu       $sp, $sp, 0x850 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 2128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1B2B4Cu;
}
