#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: SetMonsterScript__FP10CRunScriptPcP9mgCMemory
// Address: 0x1e7bb0 - 0x1e7c38
void SetMonsterScript__FP10CRunScriptPcP9mgCMemory_0x1e7bb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetMonsterScript__FP10CRunScriptPcP9mgCMemory_0x1e7bb0");
#endif

    switch (ctx->pc) {
        case 0x1e7bdcu: goto label_1e7bdc;
        case 0x1e7becu: goto label_1e7bec;
        case 0x1e7c08u: goto label_1e7c08;
        case 0x1e7c1cu: goto label_1e7c1c;
        default: break;
    }

    ctx->pc = 0x1e7bb0u;

    // 0x1e7bb0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1e7bb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1e7bb4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1e7bb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1e7bb8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1e7bb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1e7bbc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1e7bbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1e7bc0: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1e7bc0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e7bc4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1e7bc4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1e7bc8: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1e7bc8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e7bcc: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x1e7bccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e7bd0: 0x24050040  addiu       $a1, $zero, 0x40
    ctx->pc = 0x1e7bd0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x1e7bd4: 0xc04e748  jal         func_139D20
    ctx->pc = 0x1E7BD4u;
    SET_GPR_U32(ctx, 31, 0x1E7BDCu);
    ctx->pc = 0x1E7BD8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E7BD4u;
            // 0x1e7bd8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139D20u;
    if (runtime->hasFunction(0x139D20u)) {
        auto targetFn = runtime->lookupFunction(0x139D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E7BDCu; }
        if (ctx->pc != 0x1E7BDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Alloc__9mgCMemoryFi_0x139d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E7BDCu; }
        if (ctx->pc != 0x1E7BDCu) { return; }
    }
    ctx->pc = 0x1E7BDCu;
label_1e7bdc:
    // 0x1e7bdc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1e7bdcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e7be0: 0x24050180  addiu       $a1, $zero, 0x180
    ctx->pc = 0x1e7be0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 384));
    // 0x1e7be4: 0xc04e748  jal         func_139D20
    ctx->pc = 0x1E7BE4u;
    SET_GPR_U32(ctx, 31, 0x1E7BECu);
    ctx->pc = 0x1E7BE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E7BE4u;
            // 0x1e7be8: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139D20u;
    if (runtime->hasFunction(0x139D20u)) {
        auto targetFn = runtime->lookupFunction(0x139D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E7BECu; }
        if (ctx->pc != 0x1E7BECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Alloc__9mgCMemoryFi_0x139d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E7BECu; }
        if (ctx->pc != 0x1E7BECu) { return; }
    }
    ctx->pc = 0x1E7BECu;
label_1e7bec:
    // 0x1e7bec: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1e7becu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e7bf0: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1e7bf0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e7bf4: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x1e7bf4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e7bf8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1e7bf8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e7bfc: 0x24070080  addiu       $a3, $zero, 0x80
    ctx->pc = 0x1e7bfcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1e7c00: 0xc061c3c  jal         func_1870F0
    ctx->pc = 0x1E7C00u;
    SET_GPR_U32(ctx, 31, 0x1E7C08u);
    ctx->pc = 0x1E7C04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E7C00u;
            // 0x1e7c04: 0x24090200  addiu       $t1, $zero, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1870F0u;
    if (runtime->hasFunction(0x1870F0u)) {
        auto targetFn = runtime->lookupFunction(0x1870F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E7C08u; }
        if (ctx->pc != 0x1E7C08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        load__10CRunScriptFP14RS_PROG_HEADERP12RS_STACKDATAiP11RS_CALLDATAi_0x1870f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E7C08u; }
        if (ctx->pc != 0x1E7C08u) { return; }
    }
    ctx->pc = 0x1E7C08u;
label_1e7c08:
    // 0x1e7c08: 0x3c0501ed  lui         $a1, 0x1ED
    ctx->pc = 0x1e7c08u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)493 << 16));
    // 0x1e7c0c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1e7c0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e7c10: 0x24a58910  addiu       $a1, $a1, -0x76F0
    ctx->pc = 0x1e7c10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294936848));
    // 0x1e7c14: 0xc061c74  jal         func_1871D0
    ctx->pc = 0x1E7C14u;
    SET_GPR_U32(ctx, 31, 0x1E7C1Cu);
    ctx->pc = 0x1E7C18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E7C14u;
            // 0x1e7c18: 0x24060100  addiu       $a2, $zero, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1871D0u;
    if (runtime->hasFunction(0x1871D0u)) {
        auto targetFn = runtime->lookupFunction(0x1871D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E7C1Cu; }
        if (ctx->pc != 0x1E7C1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ext_func__10CRunScriptFPPFP12RS_STACKDATAi_ii_0x1871d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E7C1Cu; }
        if (ctx->pc != 0x1E7C1Cu) { return; }
    }
    ctx->pc = 0x1E7C1Cu;
label_1e7c1c:
    // 0x1e7c1c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1e7c1cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1e7c20: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1e7c20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e7c24: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1e7c24u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e7c28: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1e7c28u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e7c2c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1e7c2cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e7c30: 0x3e00008  jr          $ra
    ctx->pc = 0x1E7C30u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E7C34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E7C30u;
            // 0x1e7c34: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1E7C38u;
}
