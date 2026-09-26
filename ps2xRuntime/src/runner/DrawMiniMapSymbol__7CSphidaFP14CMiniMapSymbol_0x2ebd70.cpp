#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: DrawMiniMapSymbol__7CSphidaFP14CMiniMapSymbol
// Address: 0x2ebd70 - 0x2ebe4c
void DrawMiniMapSymbol__7CSphidaFP14CMiniMapSymbol_0x2ebd70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("DrawMiniMapSymbol__7CSphidaFP14CMiniMapSymbol_0x2ebd70");
#endif

    switch (ctx->pc) {
        case 0x2ebdb4u: goto label_2ebdb4;
        case 0x2ebdc8u: goto label_2ebdc8;
        case 0x2ebde4u: goto label_2ebde4;
        case 0x2ebdf8u: goto label_2ebdf8;
        case 0x2ebe0cu: goto label_2ebe0c;
        case 0x2ebe20u: goto label_2ebe20;
        default: break;
    }

    ctx->pc = 0x2ebd70u;

    // 0x2ebd70: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2ebd70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2ebd74: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2ebd74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x2ebd78: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2ebd78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2ebd7c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2ebd7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2ebd80: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2ebd80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2ebd84: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2ebd84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2ebd88: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2ebd88u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ebd8c: 0x8c830028  lw          $v1, 0x28($a0)
    ctx->pc = 0x2ebd8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
    // 0x2ebd90: 0x10600027  beqz        $v1, . + 4 + (0x27 << 2)
    ctx->pc = 0x2EBD90u;
    {
        const bool branch_taken_0x2ebd90 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EBD94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2EBD90u;
            // 0x2ebd94: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ebd90) {
            ctx->pc = 0x2EBE30u;
            goto label_2ebe30;
        }
    }
    ctx->pc = 0x2EBD98u;
    // 0x2ebd98: 0x8e2200b0  lw          $v0, 0xB0($s1)
    ctx->pc = 0x2ebd98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 176)));
    // 0x2ebd9c: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2EBD9Cu;
    {
        const bool branch_taken_0x2ebd9c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2EBDA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2EBD9Cu;
            // 0x2ebda0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ebd9c) {
            ctx->pc = 0x2EBDBCu;
            goto label_2ebdbc;
        }
    }
    ctx->pc = 0x2EBDA4u;
    // 0x2ebda4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2ebda4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ebda8: 0x26250090  addiu       $a1, $s1, 0x90
    ctx->pc = 0x2ebda8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 144));
    // 0x2ebdac: 0xc075310  jal         func_1D4C40
    ctx->pc = 0x2EBDACu;
    SET_GPR_U32(ctx, 31, 0x2EBDB4u);
    ctx->pc = 0x2EBDB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2EBDACu;
            // 0x2ebdb0: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D4C40u;
    if (runtime->hasFunction(0x1D4C40u)) {
        auto targetFn = runtime->lookupFunction(0x1D4C40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EBDB4u; }
        if (ctx->pc != 0x2EBDB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DrawSymbol__14CMiniMapSymbolFPfi_0x1d4c40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EBDB4u; }
        if (ctx->pc != 0x2EBDB4u) { return; }
    }
    ctx->pc = 0x2EBDB4u;
label_2ebdb4:
    // 0x2ebdb4: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2EBDB4u;
    {
        const bool branch_taken_0x2ebdb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EBDB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2EBDB4u;
            // 0x2ebdb8: 0x8e2200b4  lw          $v0, 0xB4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 180)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ebdb4) {
            ctx->pc = 0x2EBDCCu;
            goto label_2ebdcc;
        }
    }
    ctx->pc = 0x2EBDBCu;
label_2ebdbc:
    // 0x2ebdbc: 0x26250090  addiu       $a1, $s1, 0x90
    ctx->pc = 0x2ebdbcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 144));
    // 0x2ebdc0: 0xc075310  jal         func_1D4C40
    ctx->pc = 0x2EBDC0u;
    SET_GPR_U32(ctx, 31, 0x2EBDC8u);
    ctx->pc = 0x2EBDC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2EBDC0u;
            // 0x2ebdc4: 0x24060005  addiu       $a2, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D4C40u;
    if (runtime->hasFunction(0x1D4C40u)) {
        auto targetFn = runtime->lookupFunction(0x1D4C40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EBDC8u; }
        if (ctx->pc != 0x2EBDC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DrawSymbol__14CMiniMapSymbolFPfi_0x1d4c40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EBDC8u; }
        if (ctx->pc != 0x2EBDC8u) { return; }
    }
    ctx->pc = 0x2EBDC8u;
label_2ebdc8:
    // 0x2ebdc8: 0x8e2200b4  lw          $v0, 0xB4($s1)
    ctx->pc = 0x2ebdc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 180)));
label_2ebdcc:
    // 0x2ebdcc: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2EBDCCu;
    {
        const bool branch_taken_0x2ebdcc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2EBDD0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2EBDCCu;
            // 0x2ebdd0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ebdcc) {
            ctx->pc = 0x2EBDECu;
            goto label_2ebdec;
        }
    }
    ctx->pc = 0x2EBDD4u;
    // 0x2ebdd4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2ebdd4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ebdd8: 0x262500a0  addiu       $a1, $s1, 0xA0
    ctx->pc = 0x2ebdd8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 160));
    // 0x2ebddc: 0xc075310  jal         func_1D4C40
    ctx->pc = 0x2EBDDCu;
    SET_GPR_U32(ctx, 31, 0x2EBDE4u);
    ctx->pc = 0x2EBDE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2EBDDCu;
            // 0x2ebde0: 0x24060006  addiu       $a2, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D4C40u;
    if (runtime->hasFunction(0x1D4C40u)) {
        auto targetFn = runtime->lookupFunction(0x1D4C40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EBDE4u; }
        if (ctx->pc != 0x2EBDE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DrawSymbol__14CMiniMapSymbolFPfi_0x1d4c40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EBDE4u; }
        if (ctx->pc != 0x2EBDE4u) { return; }
    }
    ctx->pc = 0x2EBDE4u;
label_2ebde4:
    // 0x2ebde4: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2EBDE4u;
    {
        const bool branch_taken_0x2ebde4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EBDE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2EBDE4u;
            // 0x2ebde8: 0x8e240030  lw          $a0, 0x30($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ebde4) {
            ctx->pc = 0x2EBDFCu;
            goto label_2ebdfc;
        }
    }
    ctx->pc = 0x2EBDECu;
label_2ebdec:
    // 0x2ebdec: 0x262500a0  addiu       $a1, $s1, 0xA0
    ctx->pc = 0x2ebdecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 160));
    // 0x2ebdf0: 0xc075310  jal         func_1D4C40
    ctx->pc = 0x2EBDF0u;
    SET_GPR_U32(ctx, 31, 0x2EBDF8u);
    ctx->pc = 0x2EBDF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2EBDF0u;
            // 0x2ebdf4: 0x24060007  addiu       $a2, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D4C40u;
    if (runtime->hasFunction(0x1D4C40u)) {
        auto targetFn = runtime->lookupFunction(0x1D4C40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EBDF8u; }
        if (ctx->pc != 0x2EBDF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DrawSymbol__14CMiniMapSymbolFPfi_0x1d4c40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EBDF8u; }
        if (ctx->pc != 0x2EBDF8u) { return; }
    }
    ctx->pc = 0x2EBDF8u;
label_2ebdf8:
    // 0x2ebdf8: 0x8e240030  lw          $a0, 0x30($s1)
    ctx->pc = 0x2ebdf8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
label_2ebdfc:
    // 0x2ebdfc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2ebdfcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ebe00: 0x1483000b  bne         $a0, $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x2EBE00u;
    {
        const bool branch_taken_0x2ebe00 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x2EBE04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2EBE00u;
            // 0x2ebe04: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ebe00) {
            ctx->pc = 0x2EBE30u;
            goto label_2ebe30;
        }
    }
    ctx->pc = 0x2EBE08u;
    // 0x2ebe08: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x2ebe08u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2ebe0c:
    // 0x2ebe0c: 0x2331021  addu        $v0, $s1, $s3
    ctx->pc = 0x2ebe0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 19)));
    // 0x2ebe10: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2ebe10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ebe14: 0x24450040  addiu       $a1, $v0, 0x40
    ctx->pc = 0x2ebe14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x2ebe18: 0xc075310  jal         func_1D4C40
    ctx->pc = 0x2EBE18u;
    SET_GPR_U32(ctx, 31, 0x2EBE20u);
    ctx->pc = 0x2EBE1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2EBE18u;
            // 0x2ebe1c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D4C40u;
    if (runtime->hasFunction(0x1D4C40u)) {
        auto targetFn = runtime->lookupFunction(0x1D4C40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EBE20u; }
        if (ctx->pc != 0x2EBE20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DrawSymbol__14CMiniMapSymbolFPfi_0x1d4c40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EBE20u; }
        if (ctx->pc != 0x2EBE20u) { return; }
    }
    ctx->pc = 0x2EBE20u;
label_2ebe20:
    // 0x2ebe20: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x2ebe20u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x2ebe24: 0x2a430005  slti        $v1, $s2, 0x5
    ctx->pc = 0x2ebe24u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x2ebe28: 0x1460fff8  bnez        $v1, . + 4 + (-0x8 << 2)
    ctx->pc = 0x2EBE28u;
    {
        const bool branch_taken_0x2ebe28 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2EBE2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2EBE28u;
            // 0x2ebe2c: 0x26730010  addiu       $s3, $s3, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ebe28) {
            ctx->pc = 0x2EBE0Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2ebe0c;
        }
    }
    ctx->pc = 0x2EBE30u;
label_2ebe30:
    // 0x2ebe30: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x2ebe30u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2ebe34: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2ebe34u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2ebe38: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2ebe38u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2ebe3c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2ebe3cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ebe40: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2ebe40u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ebe44: 0x3e00008  jr          $ra
    ctx->pc = 0x2EBE44u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2EBE48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2EBE44u;
            // 0x2ebe48: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2EBE4Cu;
}
