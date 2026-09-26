#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: LoadSeBasePack__6CSceneFiPUi
// Address: 0x2a7560 - 0x2a75fc
void LoadSeBasePack__6CSceneFiPUi_0x2a7560(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("LoadSeBasePack__6CSceneFiPUi_0x2a7560");
#endif

    switch (ctx->pc) {
        case 0x2a7584u: goto label_2a7584;
        case 0x2a759cu: goto label_2a759c;
        case 0x2a75b0u: goto label_2a75b0;
        default: break;
    }

    ctx->pc = 0x2a7560u;

    // 0x2a7560: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2a7560u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2a7564: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2a7564u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2a7568: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2a7568u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2a756c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2a756cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2a7570: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2a7570u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a7574: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2a7574u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2a7578: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2a7578u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a757c: 0xc0a9b00  jal         func_2A6C00
    ctx->pc = 0x2A757Cu;
    SET_GPR_U32(ctx, 31, 0x2A7584u);
    ctx->pc = 0x2A7580u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A757Cu;
            // 0x2a7580: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A6C00u;
    if (runtime->hasFunction(0x2A6C00u)) {
        auto targetFn = runtime->lookupFunction(0x2A6C00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A7584u; }
        if (ctx->pc != 0x2A7584u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckLoadSeBase__6CSceneFi_0x2a6c00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A7584u; }
        if (ctx->pc != 0x2A7584u) { return; }
    }
    ctx->pc = 0x2A7584u;
label_2a7584:
    // 0x2a7584: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2A7584u;
    {
        const bool branch_taken_0x2a7584 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A7588u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A7584u;
            // 0x2a7588: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a7584) {
            ctx->pc = 0x2A7594u;
            goto label_2a7594;
        }
    }
    ctx->pc = 0x2A758Cu;
    // 0x2a758c: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x2A758Cu;
    {
        const bool branch_taken_0x2a758c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A7590u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A758Cu;
            // 0x2a7590: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a758c) {
            ctx->pc = 0x2A75E4u;
            goto label_2a75e4;
        }
    }
    ctx->pc = 0x2A7594u;
label_2a7594:
    // 0x2a7594: 0xc0a97d8  jal         func_2A5F60
    ctx->pc = 0x2A7594u;
    SET_GPR_U32(ctx, 31, 0x2A759Cu);
    ctx->pc = 0x2A5F60u;
    if (runtime->hasFunction(0x2A5F60u)) {
        auto targetFn = runtime->lookupFunction(0x2A5F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A759Cu; }
        if (ctx->pc != 0x2A759Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        InitSeBas__6CSceneFv_0x2a5f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A759Cu; }
        if (ctx->pc != 0x2A759Cu) { return; }
    }
    ctx->pc = 0x2A759Cu;
label_2a759c:
    // 0x2a759c: 0x3401c4a0  ori         $at, $zero, 0xC4A0
    ctx->pc = 0x2a759cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)50336);
    // 0x2a75a0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2a75a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a75a4: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x2a75a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2a75a8: 0xc06368c  jal         func_18DA30
    ctx->pc = 0x2A75A8u;
    SET_GPR_U32(ctx, 31, 0x2A75B0u);
    ctx->pc = 0x2A75ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A75A8u;
            // 0x2a75ac: 0x2413021  addu        $a2, $s2, $at (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 1)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18DA30u;
    if (runtime->hasFunction(0x18DA30u)) {
        auto targetFn = runtime->lookupFunction(0x18DA30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A75B0u; }
        if (ctx->pc != 0x2A75B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sndLoadSound__FiPUiP9mgCMemory_0x18da30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A75B0u; }
        if (ctx->pc != 0x2A75B0u) { return; }
    }
    ctx->pc = 0x2A75B0u;
label_2a75b0:
    // 0x2a75b0: 0x3403a498  ori         $v1, $zero, 0xA498
    ctx->pc = 0x2a75b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)42136);
    // 0x2a75b4: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x2a75b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x2a75b8: 0x2431821  addu        $v1, $s2, $v1
    ctx->pc = 0x2a75b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x2a75bc: 0x2410821  addu        $at, $s2, $at
    ctx->pc = 0x2a75bcu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 1)));
    // 0x2a75c0: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x2a75c0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x2a75c4: 0x8c22a498  lw          $v0, -0x5B68($at)
    ctx->pc = 0x2a75c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294943896)));
    // 0x2a75c8: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2A75C8u;
    {
        const bool branch_taken_0x2a75c8 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x2A75CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A75C8u;
            // 0x2a75cc: 0x3c010001  lui         $at, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a75c8) {
            ctx->pc = 0x2A75D8u;
            goto label_2a75d8;
        }
    }
    ctx->pc = 0x2A75D0u;
    // 0x2a75d0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2A75D0u;
    {
        const bool branch_taken_0x2a75d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A75D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A75D0u;
            // 0x2a75d4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a75d0) {
            ctx->pc = 0x2A75E4u;
            goto label_2a75e4;
        }
    }
    ctx->pc = 0x2A75D8u;
label_2a75d8:
    // 0x2a75d8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2a75d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a75dc: 0x2410821  addu        $at, $s2, $at
    ctx->pc = 0x2a75dcu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 1)));
    // 0x2a75e0: 0xac31a49c  sw          $s1, -0x5B64($at)
    ctx->pc = 0x2a75e0u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294943900), GPR_U32(ctx, 17));
label_2a75e4:
    // 0x2a75e4: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2a75e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2a75e8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2a75e8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2a75ec: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2a75ecu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a75f0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2a75f0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2a75f4: 0x3e00008  jr          $ra
    ctx->pc = 0x2A75F4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A75F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A75F4u;
            // 0x2a75f8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2A75FCu;
}
