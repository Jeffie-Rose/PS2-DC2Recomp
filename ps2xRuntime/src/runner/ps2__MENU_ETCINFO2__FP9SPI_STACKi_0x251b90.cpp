#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _MENU_ETCINFO2__FP9SPI_STACKi
// Address: 0x251b90 - 0x251cc4
void ps2__MENU_ETCINFO2__FP9SPI_STACKi_0x251b90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__MENU_ETCINFO2__FP9SPI_STACKi_0x251b90");
#endif

    switch (ctx->pc) {
        case 0x251bf8u: goto label_251bf8;
        case 0x251c10u: goto label_251c10;
        case 0x251c1cu: goto label_251c1c;
        case 0x251c4cu: goto label_251c4c;
        case 0x251c64u: goto label_251c64;
        case 0x251c70u: goto label_251c70;
        default: break;
    }

    ctx->pc = 0x251b90u;

    // 0x251b90: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x251b90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x251b94: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x251b94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x251b98: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x251b98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x251b9c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x251b9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x251ba0: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x251ba0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x251ba4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x251ba4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x251ba8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x251ba8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x251bac: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x251bacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x251bb0: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x251bb0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x251bb4: 0x878397b4  lh          $v1, -0x684C($gp)
    ctx->pc = 0x251bb4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294940596)));
    // 0x251bb8: 0x878297b8  lh          $v0, -0x6848($gp)
    ctx->pc = 0x251bb8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294940600)));
    // 0x251bbc: 0x8f859450  lw          $a1, -0x6BB0($gp)
    ctx->pc = 0x251bbcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939728)));
    // 0x251bc0: 0x629821  addu        $s3, $v1, $v0
    ctx->pc = 0x251bc0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x251bc4: 0x94a2000c  lhu         $v0, 0xC($a1)
    ctx->pc = 0x251bc4u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x251bc8: 0x262102a  slt         $v0, $s3, $v0
    ctx->pc = 0x251bc8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x251bcc: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x251BCCu;
    {
        const bool branch_taken_0x251bcc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x251BD0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x251BCCu;
            // 0x251bd0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x251bcc) {
            ctx->pc = 0x251BDCu;
            goto label_251bdc;
        }
    }
    ctx->pc = 0x251BD4u;
    // 0x251bd4: 0x10000033  b           . + 4 + (0x33 << 2)
    ctx->pc = 0x251BD4u;
    {
        const bool branch_taken_0x251bd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x251BD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x251BD4u;
            // 0x251bd8: 0xdfbf0060  ld          $ra, 0x60($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x251bd4) {
            ctx->pc = 0x251CA4u;
            goto label_251ca4;
        }
    }
    ctx->pc = 0x251BDCu;
label_251bdc:
    // 0x251bdc: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x251bdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x251be0: 0x131880  sll         $v1, $s3, 2
    ctx->pc = 0x251be0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
    // 0x251be4: 0x731821  addu        $v1, $v1, $s3
    ctx->pc = 0x251be4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
    // 0x251be8: 0x24920008  addiu       $s2, $a0, 0x8
    ctx->pc = 0x251be8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x251bec: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x251becu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x251bf0: 0xc05191c  jal         func_146470
    ctx->pc = 0x251BF0u;
    SET_GPR_U32(ctx, 31, 0x251BF8u);
    ctx->pc = 0x251BF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x251BF0u;
            // 0x251bf4: 0x438021  addu        $s0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x146470u;
    if (runtime->hasFunction(0x146470u)) {
        auto targetFn = runtime->lookupFunction(0x146470u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x251BF8u; }
        if (ctx->pc != 0x251BF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackString__FP9SPI_STACK_0x146470(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x251BF8u; }
        if (ctx->pc != 0x251BF8u) { return; }
    }
    ctx->pc = 0x251BF8u;
label_251bf8:
    // 0x251bf8: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x251bf8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x251bfc: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x251bfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x251c00: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x251C00u;
    {
        const bool branch_taken_0x251c00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x251C04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x251C00u;
            // 0x251c04: 0x13082a  slt         $at, $zero, $s3 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x251c00) {
            ctx->pc = 0x251C3Cu;
            goto label_251c3c;
        }
    }
    ctx->pc = 0x251C08u;
    // 0x251c08: 0x1020000c  beqz        $at, . + 4 + (0xC << 2)
    ctx->pc = 0x251C08u;
    {
        const bool branch_taken_0x251c08 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x251C0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x251C08u;
            // 0x251c0c: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x251c08) {
            ctx->pc = 0x251C3Cu;
            goto label_251c3c;
        }
    }
    ctx->pc = 0x251C10u;
label_251c10:
    // 0x251c10: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x251c10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x251c14: 0xc04a38a  jal         func_128E28
    ctx->pc = 0x251C14u;
    SET_GPR_U32(ctx, 31, 0x251C1Cu);
    ctx->pc = 0x251C18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x251C14u;
            // 0x251c18: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128E28u;
    if (runtime->hasFunction(0x128E28u)) {
        auto targetFn = runtime->lookupFunction(0x128E28u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x251C1Cu; }
        if (ctx->pc != 0x251C1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcmp_0x128e28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x251C1Cu; }
        if (ctx->pc != 0x251C1Cu) { return; }
    }
    ctx->pc = 0x251C1Cu;
label_251c1c:
    // 0x251c1c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x251C1Cu;
    {
        const bool branch_taken_0x251c1c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x251C20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x251C1Cu;
            // 0x251c20: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x251c1c) {
            ctx->pc = 0x251C2Cu;
            goto label_251c2c;
        }
    }
    ctx->pc = 0x251C24u;
    // 0x251c24: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x251C24u;
    {
        const bool branch_taken_0x251c24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x251c24) {
            ctx->pc = 0x251CA0u;
            goto label_251ca0;
        }
    }
    ctx->pc = 0x251C2Cu;
label_251c2c:
    // 0x251c2c: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x251c2cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x251c30: 0x2b3102a  slt         $v0, $s5, $s3
    ctx->pc = 0x251c30u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 21) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
    // 0x251c34: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x251C34u;
    {
        const bool branch_taken_0x251c34 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x251c34) {
            ctx->pc = 0x251C10u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_251c10;
        }
    }
    ctx->pc = 0x251C3Cu;
label_251c3c:
    // 0x251c3c: 0x0  nop
    ctx->pc = 0x251c3cu;
    // NOP
    // 0x251c40: 0x8f8597b0  lw          $a1, -0x6850($gp)
    ctx->pc = 0x251c40u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940592)));
    // 0x251c44: 0xc04e7a0  jal         func_139E80
    ctx->pc = 0x251C44u;
    SET_GPR_U32(ctx, 31, 0x251C4Cu);
    ctx->pc = 0x251C48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x251C44u;
            // 0x251c48: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139E80u;
    if (runtime->hasFunction(0x139E80u)) {
        auto targetFn = runtime->lookupFunction(0x139E80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x251C4Cu; }
        if (ctx->pc != 0x251C4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgCopyString__FPcP9mgCMemory_0x139e80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x251C4Cu; }
        if (ctx->pc != 0x251C4Cu) { return; }
    }
    ctx->pc = 0x251C4Cu;
label_251c4c:
    // 0x251c4c: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x251c4cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x251c50: 0x2622ffff  addiu       $v0, $s1, -0x1
    ctx->pc = 0x251c50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x251c54: 0x2082a  slt         $at, $zero, $v0
    ctx->pc = 0x251c54u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x251c58: 0x1020000c  beqz        $at, . + 4 + (0xC << 2)
    ctx->pc = 0x251C58u;
    {
        const bool branch_taken_0x251c58 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x251C5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x251C58u;
            // 0x251c5c: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x251c58) {
            ctx->pc = 0x251C8Cu;
            goto label_251c8c;
        }
    }
    ctx->pc = 0x251C60u;
    // 0x251c60: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x251c60u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_251c64:
    // 0x251c64: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x251c64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x251c68: 0xc05190c  jal         func_146430
    ctx->pc = 0x251C68u;
    SET_GPR_U32(ctx, 31, 0x251C70u);
    ctx->pc = 0x251C6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x251C68u;
            // 0x251c6c: 0x24920008  addiu       $s2, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x146430u;
    if (runtime->hasFunction(0x146430u)) {
        auto targetFn = runtime->lookupFunction(0x146430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x251C70u; }
        if (ctx->pc != 0x251C70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackFloat__FP9SPI_STACK_0x146430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x251C70u; }
        if (ctx->pc != 0x251C70u) { return; }
    }
    ctx->pc = 0x251C70u;
label_251c70:
    // 0x251c70: 0x2141021  addu        $v0, $s0, $s4
    ctx->pc = 0x251c70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 20)));
    // 0x251c74: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x251c74u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x251c78: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x251c78u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x251c7c: 0x2622ffff  addiu       $v0, $s1, -0x1
    ctx->pc = 0x251c7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x251c80: 0x262102a  slt         $v0, $s3, $v0
    ctx->pc = 0x251c80u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x251c84: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x251C84u;
    {
        const bool branch_taken_0x251c84 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x251C88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x251C84u;
            // 0x251c88: 0x26940004  addiu       $s4, $s4, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x251c84) {
            ctx->pc = 0x251C64u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_251c64;
        }
    }
    ctx->pc = 0x251C8Cu;
label_251c8c:
    // 0x251c8c: 0x0  nop
    ctx->pc = 0x251c8cu;
    // NOP
    // 0x251c90: 0x878397b8  lh          $v1, -0x6848($gp)
    ctx->pc = 0x251c90u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294940600)));
    // 0x251c94: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x251c94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x251c98: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x251c98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x251c9c: 0xa78397b8  sh          $v1, -0x6848($gp)
    ctx->pc = 0x251c9cu;
    WRITE16(ADD32(GPR_U32(ctx, 28), 4294940600), (uint16_t)GPR_U32(ctx, 3));
label_251ca0:
    // 0x251ca0: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x251ca0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_251ca4:
    // 0x251ca4: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x251ca4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x251ca8: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x251ca8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x251cac: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x251cacu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x251cb0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x251cb0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x251cb4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x251cb4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x251cb8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x251cb8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x251cbc: 0x3e00008  jr          $ra
    ctx->pc = 0x251CBCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x251CC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x251CBCu;
            // 0x251cc0: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x251CC4u;
}
