#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _CMRS_ADD_PAS__FP12RS_STACKDATAi
// Address: 0x26f9e0 - 0x26fb04
void ps2__CMRS_ADD_PAS__FP12RS_STACKDATAi_0x26f9e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__CMRS_ADD_PAS__FP12RS_STACKDATAi_0x26f9e0");
#endif

    switch (ctx->pc) {
        case 0x26fa14u: goto label_26fa14;
        case 0x26fa38u: goto label_26fa38;
        case 0x26faa0u: goto label_26faa0;
        case 0x26faacu: goto label_26faac;
        case 0x26fac0u: goto label_26fac0;
        case 0x26faccu: goto label_26facc;
        case 0x26faf0u: goto label_26faf0;
        default: break;
    }

    ctx->pc = 0x26f9e0u;

    // 0x26f9e0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x26f9e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x26f9e4: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x26f9e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x26f9e8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x26f9e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x26f9ec: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x26f9ecu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26f9f0: 0x10a20030  beq         $a1, $v0, . + 4 + (0x30 << 2)
    ctx->pc = 0x26F9F0u;
    {
        const bool branch_taken_0x26f9f0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x26F9F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26F9F0u;
            // 0x26f9f4: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26f9f0) {
            ctx->pc = 0x26FAB4u;
            goto label_26fab4;
        }
    }
    ctx->pc = 0x26F9F8u;
    // 0x26f9f8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x26f9f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x26f9fc: 0x10a20003  beq         $a1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x26F9FCu;
    {
        const bool branch_taken_0x26f9fc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x26f9fc) {
            ctx->pc = 0x26FA0Cu;
            goto label_26fa0c;
        }
    }
    ctx->pc = 0x26FA04u;
    // 0x26fa04: 0x10000033  b           . + 4 + (0x33 << 2)
    ctx->pc = 0x26FA04u;
    {
        const bool branch_taken_0x26fa04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26FA08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26FA04u;
            // 0x26fa08: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26fa04) {
            ctx->pc = 0x26FAD4u;
            goto label_26fad4;
        }
    }
    ctx->pc = 0x26FA0Cu;
label_26fa0c:
    // 0x26fa0c: 0xc097e18  jal         func_25F860
    ctx->pc = 0x26FA0Cu;
    SET_GPR_U32(ctx, 31, 0x26FA14u);
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26FA14u; }
        if (ctx->pc != 0x26FA14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26FA14u; }
        if (ctx->pc != 0x26FA14u) { return; }
    }
    ctx->pc = 0x26FA14u;
label_26fa14:
    // 0x26fa14: 0x3c0101f0  lui         $at, 0x1F0
    ctx->pc = 0x26fa14u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)496 << 16));
    // 0x26fa18: 0x8c262a34  lw          $a2, 0x2A34($at)
    ctx->pc = 0x26fa18u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 10804)));
    // 0x26fa1c: 0x14c00003  bnez        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x26FA1Cu;
    {
        const bool branch_taken_0x26fa1c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x26FA20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26FA1Cu;
            // 0x26fa20: 0x3c0101f0  lui         $at, 0x1F0 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)496 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26fa1c) {
            ctx->pc = 0x26FA2Cu;
            goto label_26fa2c;
        }
    }
    ctx->pc = 0x26FA24u;
    // 0x26fa24: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x26FA24u;
    {
        const bool branch_taken_0x26fa24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26FA28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26FA24u;
            // 0x26fa28: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26fa24) {
            ctx->pc = 0x26FA88u;
            goto label_26fa88;
        }
    }
    ctx->pc = 0x26FA2Cu;
label_26fa2c:
    // 0x26fa2c: 0x8c242a38  lw          $a0, 0x2A38($at)
    ctx->pc = 0x26fa2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 10808)));
    // 0x26fa30: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x26FA30u;
    {
        const bool branch_taken_0x26fa30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26FA34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26FA30u;
            // 0x26fa34: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26fa30) {
            ctx->pc = 0x26FA60u;
            goto label_26fa60;
        }
    }
    ctx->pc = 0x26FA38u;
label_26fa38:
    // 0x26fa38: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x26fa38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x26fa3c: 0x1043000b  beq         $v0, $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x26FA3Cu;
    {
        const bool branch_taken_0x26fa3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x26fa3c) {
            ctx->pc = 0x26FA6Cu;
            goto label_26fa6c;
        }
    }
    ctx->pc = 0x26FA44u;
    // 0x26fa44: 0x8cc6000c  lw          $a2, 0xC($a2)
    ctx->pc = 0x26fa44u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x26fa48: 0x10c00003  beqz        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x26FA48u;
    {
        const bool branch_taken_0x26fa48 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x26fa48) {
            ctx->pc = 0x26FA58u;
            goto label_26fa58;
        }
    }
    ctx->pc = 0x26FA50u;
    // 0x26fa50: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x26FA50u;
    {
        const bool branch_taken_0x26fa50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26FA54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26FA50u;
            // 0x26fa54: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26fa50) {
            ctx->pc = 0x26FA60u;
            goto label_26fa60;
        }
    }
    ctx->pc = 0x26FA58u;
label_26fa58:
    // 0x26fa58: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x26FA58u;
    {
        const bool branch_taken_0x26fa58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26FA5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26FA58u;
            // 0x26fa5c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26fa58) {
            ctx->pc = 0x26FA88u;
            goto label_26fa88;
        }
    }
    ctx->pc = 0x26FA60u;
label_26fa60:
    // 0x26fa60: 0xa4182a  slt         $v1, $a1, $a0
    ctx->pc = 0x26fa60u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x26fa64: 0x1460fff4  bnez        $v1, . + 4 + (-0xC << 2)
    ctx->pc = 0x26FA64u;
    {
        const bool branch_taken_0x26fa64 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x26fa64) {
            ctx->pc = 0x26FA38u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_26fa38;
        }
    }
    ctx->pc = 0x26FA6Cu;
label_26fa6c:
    // 0x26fa6c: 0x0  nop
    ctx->pc = 0x26fa6cu;
    // NOP
    // 0x26fa70: 0x14c00003  bnez        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x26FA70u;
    {
        const bool branch_taken_0x26fa70 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x26FA74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26FA70u;
            // 0x26fa74: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26fa70) {
            ctx->pc = 0x26FA80u;
            goto label_26fa80;
        }
    }
    ctx->pc = 0x26FA78u;
    // 0x26fa78: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x26FA78u;
    {
        const bool branch_taken_0x26fa78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26fa78) {
            ctx->pc = 0x26FA88u;
            goto label_26fa88;
        }
    }
    ctx->pc = 0x26FA80u;
label_26fa80:
    // 0x26fa80: 0x8cd00004  lw          $s0, 0x4($a2)
    ctx->pc = 0x26fa80u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x26fa84: 0x0  nop
    ctx->pc = 0x26fa84u;
    // NOP
label_26fa88:
    // 0x26fa88: 0x16000003  bnez        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x26FA88u;
    {
        const bool branch_taken_0x26fa88 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x26FA8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26FA88u;
            // 0x26fa8c: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26fa88) {
            ctx->pc = 0x26FA98u;
            goto label_26fa98;
        }
    }
    ctx->pc = 0x26FA90u;
    // 0x26fa90: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x26FA90u;
    {
        const bool branch_taken_0x26fa90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26FA94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26FA90u;
            // 0x26fa94: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26fa90) {
            ctx->pc = 0x26FAF4u;
            goto label_26faf4;
        }
    }
    ctx->pc = 0x26FA98u;
label_26fa98:
    // 0x26fa98: 0xc097fa8  jal         func_25FEA0
    ctx->pc = 0x26FA98u;
    SET_GPR_U32(ctx, 31, 0x26FAA0u);
    ctx->pc = 0x26FA9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26FA98u;
            // 0x26fa9c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25FEA0u;
    if (runtime->hasFunction(0x25FEA0u)) {
        auto targetFn = runtime->lookupFunction(0x25FEA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26FAA0u; }
        if (ctx->pc != 0x26FAA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetArgVector__FPfP8ARG_DATA_0x25fea0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26FAA0u; }
        if (ctx->pc != 0x26FAA0u) { return; }
    }
    ctx->pc = 0x26FAA0u;
label_26faa0:
    // 0x26faa0: 0x26050018  addiu       $a1, $s0, 0x18
    ctx->pc = 0x26faa0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
    // 0x26faa4: 0xc097fa8  jal         func_25FEA0
    ctx->pc = 0x26FAA4u;
    SET_GPR_U32(ctx, 31, 0x26FAACu);
    ctx->pc = 0x26FAA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26FAA4u;
            // 0x26faa8: 0x27a40030  addiu       $a0, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25FEA0u;
    if (runtime->hasFunction(0x25FEA0u)) {
        auto targetFn = runtime->lookupFunction(0x25FEA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26FAACu; }
        if (ctx->pc != 0x26FAACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetArgVector__FPfP8ARG_DATA_0x25fea0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26FAACu; }
        if (ctx->pc != 0x26FAACu) { return; }
    }
    ctx->pc = 0x26FAACu;
label_26faac:
    // 0x26faac: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x26FAACu;
    {
        const bool branch_taken_0x26faac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26faac) {
            ctx->pc = 0x26FADCu;
            goto label_26fadc;
        }
    }
    ctx->pc = 0x26FAB4u;
label_26fab4:
    // 0x26fab4: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x26fab4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x26fab8: 0xc097e34  jal         func_25F8D0
    ctx->pc = 0x26FAB8u;
    SET_GPR_U32(ctx, 31, 0x26FAC0u);
    ctx->pc = 0x26FABCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26FAB8u;
            // 0x26fabc: 0xe0282d  daddu       $a1, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F8D0u;
    if (runtime->hasFunction(0x25F8D0u)) {
        auto targetFn = runtime->lookupFunction(0x25F8D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26FAC0u; }
        if (ctx->pc != 0x26FAC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackVector__FPfP12RS_STACKDATA_0x25f8d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26FAC0u; }
        if (ctx->pc != 0x26FAC0u) { return; }
    }
    ctx->pc = 0x26FAC0u;
label_26fac0:
    // 0x26fac0: 0x24e50018  addiu       $a1, $a3, 0x18
    ctx->pc = 0x26fac0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), 24));
    // 0x26fac4: 0xc097e34  jal         func_25F8D0
    ctx->pc = 0x26FAC4u;
    SET_GPR_U32(ctx, 31, 0x26FACCu);
    ctx->pc = 0x26FAC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26FAC4u;
            // 0x26fac8: 0x27a40030  addiu       $a0, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F8D0u;
    if (runtime->hasFunction(0x25F8D0u)) {
        auto targetFn = runtime->lookupFunction(0x25F8D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26FACCu; }
        if (ctx->pc != 0x26FACCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackVector__FPfP12RS_STACKDATA_0x25f8d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26FACCu; }
        if (ctx->pc != 0x26FACCu) { return; }
    }
    ctx->pc = 0x26FACCu;
label_26facc:
    // 0x26facc: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x26FACCu;
    {
        const bool branch_taken_0x26facc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26facc) {
            ctx->pc = 0x26FADCu;
            goto label_26fadc;
        }
    }
    ctx->pc = 0x26FAD4u;
label_26fad4:
    // 0x26fad4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x26FAD4u;
    {
        const bool branch_taken_0x26fad4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26FAD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26FAD4u;
            // 0x26fad8: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26fad4) {
            ctx->pc = 0x26FAF8u;
            goto label_26faf8;
        }
    }
    ctx->pc = 0x26FADCu;
label_26fadc:
    // 0x26fadc: 0x3c0401ef  lui         $a0, 0x1EF
    ctx->pc = 0x26fadcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)495 << 16));
    // 0x26fae0: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x26fae0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x26fae4: 0x2484f920  addiu       $a0, $a0, -0x6E0
    ctx->pc = 0x26fae4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294965536));
    // 0x26fae8: 0xc0967e4  jal         func_259F90
    ctx->pc = 0x26FAE8u;
    SET_GPR_U32(ctx, 31, 0x26FAF0u);
    ctx->pc = 0x26FAECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26FAE8u;
            // 0x26faec: 0x27a60030  addiu       $a2, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x259F90u;
    if (runtime->hasFunction(0x259F90u)) {
        auto targetFn = runtime->lookupFunction(0x259F90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26FAF0u; }
        if (ctx->pc != 0x26FAF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AddPas__12CSceneCmrSeqFPfPf_0x259f90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26FAF0u; }
        if (ctx->pc != 0x26FAF0u) { return; }
    }
    ctx->pc = 0x26FAF0u;
label_26faf0:
    // 0x26faf0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x26faf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_26faf4:
    // 0x26faf4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x26faf4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_26faf8:
    // 0x26faf8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x26faf8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x26fafc: 0x3e00008  jr          $ra
    ctx->pc = 0x26FAFCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26FB00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26FAFCu;
            // 0x26fb00: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x26FB04u;
}
