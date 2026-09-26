#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: SetEffectScript__FP10CRunScriptPcP9mgCMemory
// Address: 0x2e8c00 - 0x2e8c88
void SetEffectScript__FP10CRunScriptPcP9mgCMemory_0x2e8c00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetEffectScript__FP10CRunScriptPcP9mgCMemory_0x2e8c00");
#endif

    switch (ctx->pc) {
        case 0x2e8c2cu: goto label_2e8c2c;
        case 0x2e8c3cu: goto label_2e8c3c;
        case 0x2e8c58u: goto label_2e8c58;
        case 0x2e8c6cu: goto label_2e8c6c;
        default: break;
    }

    ctx->pc = 0x2e8c00u;

    // 0x2e8c00: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2e8c00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2e8c04: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2e8c04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2e8c08: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2e8c08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2e8c0c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2e8c0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2e8c10: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2e8c10u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e8c14: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2e8c14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2e8c18: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2e8c18u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e8c1c: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x2e8c1cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e8c20: 0x24050020  addiu       $a1, $zero, 0x20
    ctx->pc = 0x2e8c20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x2e8c24: 0xc04e748  jal         func_139D20
    ctx->pc = 0x2E8C24u;
    SET_GPR_U32(ctx, 31, 0x2E8C2Cu);
    ctx->pc = 0x2E8C28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E8C24u;
            // 0x2e8c28: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139D20u;
    if (runtime->hasFunction(0x139D20u)) {
        auto targetFn = runtime->lookupFunction(0x139D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E8C2Cu; }
        if (ctx->pc != 0x2E8C2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Alloc__9mgCMemoryFi_0x139d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E8C2Cu; }
        if (ctx->pc != 0x2E8C2Cu) { return; }
    }
    ctx->pc = 0x2E8C2Cu;
label_2e8c2c:
    // 0x2e8c2c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2e8c2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e8c30: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2e8c30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e8c34: 0xc04e748  jal         func_139D20
    ctx->pc = 0x2E8C34u;
    SET_GPR_U32(ctx, 31, 0x2E8C3Cu);
    ctx->pc = 0x2E8C38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E8C34u;
            // 0x2e8c38: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139D20u;
    if (runtime->hasFunction(0x139D20u)) {
        auto targetFn = runtime->lookupFunction(0x139D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E8C3Cu; }
        if (ctx->pc != 0x2E8C3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Alloc__9mgCMemoryFi_0x139d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E8C3Cu; }
        if (ctx->pc != 0x2E8C3Cu) { return; }
    }
    ctx->pc = 0x2E8C3Cu;
label_2e8c3c:
    // 0x2e8c3c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2e8c3cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e8c40: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2e8c40u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e8c44: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x2e8c44u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e8c48: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2e8c48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e8c4c: 0x24070040  addiu       $a3, $zero, 0x40
    ctx->pc = 0x2e8c4cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x2e8c50: 0xc061c3c  jal         func_1870F0
    ctx->pc = 0x2E8C50u;
    SET_GPR_U32(ctx, 31, 0x2E8C58u);
    ctx->pc = 0x2E8C54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E8C50u;
            // 0x2e8c54: 0x24090002  addiu       $t1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1870F0u;
    if (runtime->hasFunction(0x1870F0u)) {
        auto targetFn = runtime->lookupFunction(0x1870F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E8C58u; }
        if (ctx->pc != 0x2E8C58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        load__10CRunScriptFP14RS_PROG_HEADERP12RS_STACKDATAiP11RS_CALLDATAi_0x1870f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E8C58u; }
        if (ctx->pc != 0x2E8C58u) { return; }
    }
    ctx->pc = 0x2E8C58u;
label_2e8c58:
    // 0x2e8c58: 0x3c0501f6  lui         $a1, 0x1F6
    ctx->pc = 0x2e8c58u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)502 << 16));
    // 0x2e8c5c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2e8c5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e8c60: 0x24a58f30  addiu       $a1, $a1, -0x70D0
    ctx->pc = 0x2e8c60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294938416));
    // 0x2e8c64: 0xc061c74  jal         func_1871D0
    ctx->pc = 0x2E8C64u;
    SET_GPR_U32(ctx, 31, 0x2E8C6Cu);
    ctx->pc = 0x2E8C68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E8C64u;
            // 0x2e8c68: 0x24060100  addiu       $a2, $zero, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1871D0u;
    if (runtime->hasFunction(0x1871D0u)) {
        auto targetFn = runtime->lookupFunction(0x1871D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E8C6Cu; }
        if (ctx->pc != 0x2E8C6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ext_func__10CRunScriptFPPFP12RS_STACKDATAi_ii_0x1871d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E8C6Cu; }
        if (ctx->pc != 0x2E8C6Cu) { return; }
    }
    ctx->pc = 0x2E8C6Cu;
label_2e8c6c:
    // 0x2e8c6c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2e8c6cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2e8c70: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2e8c70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e8c74: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2e8c74u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2e8c78: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2e8c78u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e8c7c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2e8c7cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e8c80: 0x3e00008  jr          $ra
    ctx->pc = 0x2E8C80u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E8C84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E8C80u;
            // 0x2e8c84: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2E8C88u;
}
