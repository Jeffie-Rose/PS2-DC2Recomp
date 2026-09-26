#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: strFileOpen__FP7StrFilePc
// Address: 0x29ab10 - 0x29adfc
void strFileOpen__FP7StrFilePc_0x29ab10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("strFileOpen__FP7StrFilePc_0x29ab10");
#endif

    switch (ctx->pc) {
        case 0x29ab48u: goto label_29ab48;
        case 0x29ab68u: goto label_29ab68;
        case 0x29ab80u: goto label_29ab80;
        case 0x29ab90u: goto label_29ab90;
        case 0x29abacu: goto label_29abac;
        case 0x29abd0u: goto label_29abd0;
        case 0x29ac00u: goto label_29ac00;
        case 0x29ac20u: goto label_29ac20;
        case 0x29ac34u: goto label_29ac34;
        case 0x29ac50u: goto label_29ac50;
        case 0x29ac68u: goto label_29ac68;
        case 0x29ac74u: goto label_29ac74;
        case 0x29ac84u: goto label_29ac84;
        case 0x29ac98u: goto label_29ac98;
        case 0x29acb8u: goto label_29acb8;
        case 0x29ace4u: goto label_29ace4;
        case 0x29acf0u: goto label_29acf0;
        case 0x29ad04u: goto label_29ad04;
        case 0x29ad30u: goto label_29ad30;
        case 0x29ad40u: goto label_29ad40;
        case 0x29ad60u: goto label_29ad60;
        case 0x29ad70u: goto label_29ad70;
        case 0x29ad8cu: goto label_29ad8c;
        case 0x29ad94u: goto label_29ad94;
        case 0x29adacu: goto label_29adac;
        case 0x29adc0u: goto label_29adc0;
        case 0x29adc8u: goto label_29adc8;
        default: break;
    }

    ctx->pc = 0x29ab10u;

    // 0x29ab10: 0x27bdfe30  addiu       $sp, $sp, -0x1D0
    ctx->pc = 0x29ab10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966832));
    // 0x29ab14: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x29ab14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x29ab18: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x29ab18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x29ab1c: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x29ab1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x29ab20: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x29ab20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x29ab24: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x29ab24u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29ab28: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x29ab28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x29ab2c: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x29ab2cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29ab30: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x29ab30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x29ab34: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x29ab34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29ab38: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x29ab38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x29ab3c: 0x2405003a  addiu       $a1, $zero, 0x3A
    ctx->pc = 0x29ab3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 58));
    // 0x29ab40: 0xc049878  jal         func_1261E0
    ctx->pc = 0x29AB40u;
    SET_GPR_U32(ctx, 31, 0x29AB48u);
    ctx->pc = 0x29AB44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29AB40u;
            // 0x29ab44: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1261E0u;
    if (runtime->hasFunction(0x1261E0u)) {
        auto targetFn = runtime->lookupFunction(0x1261E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29AB48u; }
        if (ctx->pc != 0x29AB48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        index_0x1261e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29AB48u; }
        if (ctx->pc != 0x29AB48u) { return; }
    }
    ctx->pc = 0x29AB48u;
label_29ab48:
    // 0x29ab48: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x29ab48u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29ab4c: 0x12000036  beqz        $s0, . + 4 + (0x36 << 2)
    ctx->pc = 0x29AB4Cu;
    {
        const bool branch_taken_0x29ab4c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x29AB50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29AB4Cu;
            // 0x29ab50: 0x3c050037  lui         $a1, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29ab4c) {
            ctx->pc = 0x29AC28u;
            goto label_29ac28;
        }
    }
    ctx->pc = 0x29AB54u;
    // 0x29ab54: 0x2158823  subu        $s1, $s0, $s5
    ctx->pc = 0x29ab54u;
    SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 21)));
    // 0x29ab58: 0x27a40180  addiu       $a0, $sp, 0x180
    ctx->pc = 0x29ab58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
    // 0x29ab5c: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x29ab5cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29ab60: 0xc04a54a  jal         func_129528
    ctx->pc = 0x29AB60u;
    SET_GPR_U32(ctx, 31, 0x29AB68u);
    ctx->pc = 0x29AB64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29AB60u;
            // 0x29ab64: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129528u;
    if (runtime->hasFunction(0x129528u)) {
        auto targetFn = runtime->lookupFunction(0x129528u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29AB68u; }
        if (ctx->pc != 0x29AB68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strncpy_0x129528(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29AB68u; }
        if (ctx->pc != 0x29AB68u) { return; }
    }
    ctx->pc = 0x29AB68u;
label_29ab68:
    // 0x29ab68: 0x23d1021  addu        $v0, $s1, $sp
    ctx->pc = 0x29ab68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 29)));
    // 0x29ab6c: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x29ab6cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x29ab70: 0x27a40180  addiu       $a0, $sp, 0x180
    ctx->pc = 0x29ab70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
    // 0x29ab74: 0xa0400180  sb          $zero, 0x180($v0)
    ctx->pc = 0x29ab74u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 384), (uint8_t)GPR_U32(ctx, 0));
    // 0x29ab78: 0xc04a38a  jal         func_128E28
    ctx->pc = 0x29AB78u;
    SET_GPR_U32(ctx, 31, 0x29AB80u);
    ctx->pc = 0x29AB7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29AB78u;
            // 0x29ab7c: 0x24a5de28  addiu       $a1, $a1, -0x21D8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294958632));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128E28u;
    if (runtime->hasFunction(0x128E28u)) {
        auto targetFn = runtime->lookupFunction(0x128E28u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29AB80u; }
        if (ctx->pc != 0x29AB80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcmp_0x128e28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29AB80u; }
        if (ctx->pc != 0x29AB80u) { return; }
    }
    ctx->pc = 0x29AB80u;
label_29ab80:
    // 0x29ab80: 0x14400021  bnez        $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x29AB80u;
    {
        const bool branch_taken_0x29ab80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x29AB84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29AB80u;
            // 0x29ab84: 0x3c050037  lui         $a1, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29ab80) {
            ctx->pc = 0x29AC08u;
            goto label_29ac08;
        }
    }
    ctx->pc = 0x29AB88u;
    // 0x29ab88: 0xc04a422  jal         func_129088
    ctx->pc = 0x29AB88u;
    SET_GPR_U32(ctx, 31, 0x29AB90u);
    ctx->pc = 0x29AB8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29AB88u;
            // 0x29ab8c: 0x26040001  addiu       $a0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129088u;
    if (runtime->hasFunction(0x129088u)) {
        auto targetFn = runtime->lookupFunction(0x129088u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29AB90u; }
        if (ctx->pc != 0x29AB90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strlen_0x129088(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29AB90u; }
        if (ctx->pc != 0x29AB90u) { return; }
    }
    ctx->pc = 0x29AB90u;
label_29ab90:
    // 0x29ab90: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x29ab90u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29ab94: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x29ab94u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29ab98: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x29ab98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x29ab9c: 0x12082a  slt         $at, $zero, $s2
    ctx->pc = 0x29ab9cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x29aba0: 0x10200010  beqz        $at, . + 4 + (0x10 << 2)
    ctx->pc = 0x29ABA0u;
    {
        const bool branch_taken_0x29aba0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x29ABA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29ABA0u;
            // 0x29aba4: 0xae820028  sw          $v0, 0x28($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 40), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29aba0) {
            ctx->pc = 0x29ABE4u;
            goto label_29abe4;
        }
    }
    ctx->pc = 0x29ABA8u;
    // 0x29aba8: 0x2111821  addu        $v1, $s0, $s1
    ctx->pc = 0x29aba8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
label_29abac:
    // 0x29abac: 0x2402002f  addiu       $v0, $zero, 0x2F
    ctx->pc = 0x29abacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
    // 0x29abb0: 0x24730001  addiu       $s3, $v1, 0x1
    ctx->pc = 0x29abb0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x29abb4: 0x80630001  lb          $v1, 0x1($v1)
    ctx->pc = 0x29abb4u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 1)));
    // 0x29abb8: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x29ABB8u;
    {
        const bool branch_taken_0x29abb8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x29ABBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29ABB8u;
            // 0x29abbc: 0x2402005c  addiu       $v0, $zero, 0x5C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 92));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29abb8) {
            ctx->pc = 0x29ABC4u;
            goto label_29abc4;
        }
    }
    ctx->pc = 0x29ABC0u;
    // 0x29abc0: 0xa2620000  sb          $v0, 0x0($s3)
    ctx->pc = 0x29abc0u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 0), (uint8_t)GPR_U32(ctx, 2));
label_29abc4:
    // 0x29abc4: 0x0  nop
    ctx->pc = 0x29abc4u;
    // NOP
    // 0x29abc8: 0xc04aa5c  jal         func_12A970
    ctx->pc = 0x29ABC8u;
    SET_GPR_U32(ctx, 31, 0x29ABD0u);
    ctx->pc = 0x29ABCCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29ABC8u;
            // 0x29abcc: 0x82640000  lb          $a0, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12A970u;
    if (runtime->hasFunction(0x12A970u)) {
        auto targetFn = runtime->lookupFunction(0x12A970u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29ABD0u; }
        if (ctx->pc != 0x29ABD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        toupper_0x12a970(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29ABD0u; }
        if (ctx->pc != 0x29ABD0u) { return; }
    }
    ctx->pc = 0x29ABD0u;
label_29abd0:
    // 0x29abd0: 0xa2620000  sb          $v0, 0x0($s3)
    ctx->pc = 0x29abd0u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x29abd4: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x29abd4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x29abd8: 0x232102a  slt         $v0, $s1, $s2
    ctx->pc = 0x29abd8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x29abdc: 0x1440fff3  bnez        $v0, . + 4 + (-0xD << 2)
    ctx->pc = 0x29ABDCu;
    {
        const bool branch_taken_0x29abdc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x29ABE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29ABDCu;
            // 0x29abe0: 0x2111821  addu        $v1, $s0, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29abdc) {
            ctx->pc = 0x29ABACu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_29abac;
        }
    }
    ctx->pc = 0x29ABE4u;
label_29abe4:
    // 0x29abe4: 0x0  nop
    ctx->pc = 0x29abe4u;
    // NOP
    // 0x29abe8: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x29abe8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x29abec: 0x26060001  addiu       $a2, $s0, 0x1
    ctx->pc = 0x29abecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x29abf0: 0x2c0382d  daddu       $a3, $s6, $zero
    ctx->pc = 0x29abf0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29abf4: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x29abf4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x29abf8: 0xc04a234  jal         func_1288D0
    ctx->pc = 0x29ABF8u;
    SET_GPR_U32(ctx, 31, 0x29AC00u);
    ctx->pc = 0x29ABFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29ABF8u;
            // 0x29abfc: 0x24a5de30  addiu       $a1, $a1, -0x21D0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294958640));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1288D0u;
    if (runtime->hasFunction(0x1288D0u)) {
        auto targetFn = runtime->lookupFunction(0x1288D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29AC00u; }
        if (ctx->pc != 0x29AC00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x1288d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29AC00u; }
        if (ctx->pc != 0x29AC00u) { return; }
    }
    ctx->pc = 0x29AC00u;
label_29ac00:
    // 0x29ac00: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x29AC00u;
    {
        const bool branch_taken_0x29ac00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29AC04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29AC00u;
            // 0x29ac04: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29ac00) {
            ctx->pc = 0x29AC54u;
            goto label_29ac54;
        }
    }
    ctx->pc = 0x29AC08u;
label_29ac08:
    // 0x29ac08: 0x26070001  addiu       $a3, $s0, 0x1
    ctx->pc = 0x29ac08u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x29ac0c: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x29ac0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x29ac10: 0x24a5de38  addiu       $a1, $a1, -0x21C8
    ctx->pc = 0x29ac10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294958648));
    // 0x29ac14: 0x27a60180  addiu       $a2, $sp, 0x180
    ctx->pc = 0x29ac14u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
    // 0x29ac18: 0xc04a234  jal         func_1288D0
    ctx->pc = 0x29AC18u;
    SET_GPR_U32(ctx, 31, 0x29AC20u);
    ctx->pc = 0x29AC1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29AC18u;
            // 0x29ac1c: 0xae800028  sw          $zero, 0x28($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 40), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1288D0u;
    if (runtime->hasFunction(0x1288D0u)) {
        auto targetFn = runtime->lookupFunction(0x1288D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29AC20u; }
        if (ctx->pc != 0x29AC20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x1288d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29AC20u; }
        if (ctx->pc != 0x29AC20u) { return; }
    }
    ctx->pc = 0x29AC20u;
label_29ac20:
    // 0x29ac20: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x29AC20u;
    {
        const bool branch_taken_0x29ac20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x29ac20) {
            ctx->pc = 0x29AC50u;
            goto label_29ac50;
        }
    }
    ctx->pc = 0x29AC28u;
label_29ac28:
    // 0x29ac28: 0x27a40180  addiu       $a0, $sp, 0x180
    ctx->pc = 0x29ac28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
    // 0x29ac2c: 0xc04a3dc  jal         func_128F70
    ctx->pc = 0x29AC2Cu;
    SET_GPR_U32(ctx, 31, 0x29AC34u);
    ctx->pc = 0x29AC30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29AC2Cu;
            // 0x29ac30: 0x24a5de40  addiu       $a1, $a1, -0x21C0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294958656));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128F70u;
    if (runtime->hasFunction(0x128F70u)) {
        auto targetFn = runtime->lookupFunction(0x128F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29AC34u; }
        if (ctx->pc != 0x29AC34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcpy_0x128f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29AC34u; }
        if (ctx->pc != 0x29AC34u) { return; }
    }
    ctx->pc = 0x29AC34u;
label_29ac34:
    // 0x29ac34: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x29ac34u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x29ac38: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x29ac38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x29ac3c: 0x24a5de38  addiu       $a1, $a1, -0x21C8
    ctx->pc = 0x29ac3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294958648));
    // 0x29ac40: 0x27a60180  addiu       $a2, $sp, 0x180
    ctx->pc = 0x29ac40u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
    // 0x29ac44: 0x2a0382d  daddu       $a3, $s5, $zero
    ctx->pc = 0x29ac44u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29ac48: 0xc04a234  jal         func_1288D0
    ctx->pc = 0x29AC48u;
    SET_GPR_U32(ctx, 31, 0x29AC50u);
    ctx->pc = 0x29AC4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29AC48u;
            // 0x29ac4c: 0xae800028  sw          $zero, 0x28($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 40), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1288D0u;
    if (runtime->hasFunction(0x1288D0u)) {
        auto targetFn = runtime->lookupFunction(0x1288D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29AC50u; }
        if (ctx->pc != 0x29AC50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x1288d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29AC50u; }
        if (ctx->pc != 0x29AC50u) { return; }
    }
    ctx->pc = 0x29AC50u;
label_29ac50:
    // 0x29ac50: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x29ac50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_29ac54:
    // 0x29ac54: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x29ac54u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x29ac58: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x29ac58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x29ac5c: 0xae820028  sw          $v0, 0x28($s4)
    ctx->pc = 0x29ac5cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 40), GPR_U32(ctx, 2));
    // 0x29ac60: 0xc04a3dc  jal         func_128F70
    ctx->pc = 0x29AC60u;
    SET_GPR_U32(ctx, 31, 0x29AC68u);
    ctx->pc = 0x29AC64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29AC60u;
            // 0x29ac64: 0x24a5de48  addiu       $a1, $a1, -0x21B8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294958664));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128F70u;
    if (runtime->hasFunction(0x128F70u)) {
        auto targetFn = runtime->lookupFunction(0x128F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29AC68u; }
        if (ctx->pc != 0x29AC68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcpy_0x128f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29AC68u; }
        if (ctx->pc != 0x29AC68u) { return; }
    }
    ctx->pc = 0x29AC68u;
label_29ac68:
    // 0x29ac68: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x29ac68u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29ac6c: 0xc04a2da  jal         func_128B68
    ctx->pc = 0x29AC6Cu;
    SET_GPR_U32(ctx, 31, 0x29AC74u);
    ctx->pc = 0x29AC70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29AC6Cu;
            // 0x29ac70: 0x27a40080  addiu       $a0, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128B68u;
    if (runtime->hasFunction(0x128B68u)) {
        auto targetFn = runtime->lookupFunction(0x128B68u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29AC74u; }
        if (ctx->pc != 0x29AC74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcat_0x128b68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29AC74u; }
        if (ctx->pc != 0x29AC74u) { return; }
    }
    ctx->pc = 0x29AC74u;
label_29ac74:
    // 0x29ac74: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x29ac74u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x29ac78: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x29ac78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x29ac7c: 0xc04a2da  jal         func_128B68
    ctx->pc = 0x29AC7Cu;
    SET_GPR_U32(ctx, 31, 0x29AC84u);
    ctx->pc = 0x29AC80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29AC7Cu;
            // 0x29ac80: 0x24a5de50  addiu       $a1, $a1, -0x21B0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294958672));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128B68u;
    if (runtime->hasFunction(0x128B68u)) {
        auto targetFn = runtime->lookupFunction(0x128B68u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29AC84u; }
        if (ctx->pc != 0x29AC84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcat_0x128b68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29AC84u; }
        if (ctx->pc != 0x29AC84u) { return; }
    }
    ctx->pc = 0x29AC84u;
label_29ac84:
    // 0x29ac84: 0x8e850028  lw          $a1, 0x28($s4)
    ctx->pc = 0x29ac84u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 40)));
    // 0x29ac88: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x29ac88u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
    // 0x29ac8c: 0x2484de58  addiu       $a0, $a0, -0x21A8
    ctx->pc = 0x29ac8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294958680));
    // 0x29ac90: 0xc04a0d2  jal         func_128348
    ctx->pc = 0x29AC90u;
    SET_GPR_U32(ctx, 31, 0x29AC98u);
    ctx->pc = 0x29AC94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29AC90u;
            // 0x29ac94: 0x27a60080  addiu       $a2, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128348u;
    if (runtime->hasFunction(0x128348u)) {
        auto targetFn = runtime->lookupFunction(0x128348u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29AC98u; }
        if (ctx->pc != 0x29AC98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        printf_0x128348(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29AC98u; }
        if (ctx->pc != 0x29AC98u) { return; }
    }
    ctx->pc = 0x29AC98u;
label_29ac98:
    // 0x29ac98: 0x8e820028  lw          $v0, 0x28($s4)
    ctx->pc = 0x29ac98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 40)));
    // 0x29ac9c: 0x10400026  beqz        $v0, . + 4 + (0x26 << 2)
    ctx->pc = 0x29AC9Cu;
    {
        const bool branch_taken_0x29ac9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x29ACA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29AC9Cu;
            // 0x29aca0: 0x27a40080  addiu       $a0, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29ac9c) {
            ctx->pc = 0x29AD38u;
            goto label_29ad38;
        }
    }
    ctx->pc = 0x29ACA4u;
    // 0x29aca4: 0x93829900  lbu         $v0, -0x6700($gp)
    ctx->pc = 0x29aca4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294940928)));
    // 0x29aca8: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x29ACA8u;
    {
        const bool branch_taken_0x29aca8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x29ACACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29ACA8u;
            // 0x29acac: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29aca8) {
            ctx->pc = 0x29ACC0u;
            goto label_29acc0;
        }
    }
    ctx->pc = 0x29ACB0u;
    // 0x29acb0: 0xc04811c  jal         func_120470
    ctx->pc = 0x29ACB0u;
    SET_GPR_U32(ctx, 31, 0x29ACB8u);
    ctx->pc = 0x120470u;
    if (runtime->hasFunction(0x120470u)) {
        auto targetFn = runtime->lookupFunction(0x120470u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29ACB8u; }
        if (ctx->pc != 0x29ACB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceCdDiskReady_0x120470(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29ACB8u; }
        if (ctx->pc != 0x29ACB8u) { return; }
    }
    ctx->pc = 0x29ACB8u;
label_29acb8:
    // 0x29acb8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x29acb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x29acbc: 0xa3829900  sb          $v0, -0x6700($gp)
    ctx->pc = 0x29acbcu;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294940928), (uint8_t)GPR_U32(ctx, 2));
label_29acc0:
    // 0x29acc0: 0x8f838a80  lw          $v1, -0x7580($gp)
    ctx->pc = 0x29acc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937216)));
    // 0x29acc4: 0x2402fff0  addiu       $v0, $zero, -0x10
    ctx->pc = 0x29acc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x29acc8: 0x24040050  addiu       $a0, $zero, 0x50
    ctx->pc = 0x29acc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x29accc: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x29acccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x29acd0: 0xae830030  sw          $v1, 0x30($s4)
    ctx->pc = 0x29acd0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 48), GPR_U32(ctx, 3));
    // 0x29acd4: 0x8e830030  lw          $v1, 0x30($s4)
    ctx->pc = 0x29acd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 48)));
    // 0x29acd8: 0x2463000f  addiu       $v1, $v1, 0xF
    ctx->pc = 0x29acd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 15));
    // 0x29acdc: 0xc0482cc  jal         func_120B30
    ctx->pc = 0x29ACDCu;
    SET_GPR_U32(ctx, 31, 0x29ACE4u);
    ctx->pc = 0x29ACE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29ACDCu;
            // 0x29ace0: 0x623024  and         $a2, $v1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x120B30u;
    if (runtime->hasFunction(0x120B30u)) {
        auto targetFn = runtime->lookupFunction(0x120B30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29ACE4u; }
        if (ctx->pc != 0x29ACE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceCdStInit_0x120b30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29ACE4u; }
        if (ctx->pc != 0x29ACE4u) { return; }
    }
    ctx->pc = 0x29ACE4u;
label_29ace4:
    // 0x29ace4: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x29ace4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29ace8: 0xc047e82  jal         func_11FA08
    ctx->pc = 0x29ACE8u;
    SET_GPR_U32(ctx, 31, 0x29ACF0u);
    ctx->pc = 0x29ACECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29ACE8u;
            // 0x29acec: 0x27a50080  addiu       $a1, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11FA08u;
    if (runtime->hasFunction(0x11FA08u)) {
        auto targetFn = runtime->lookupFunction(0x11FA08u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29ACF0u; }
        if (ctx->pc != 0x29ACF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceCdSearchFile_0x11fa08(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29ACF0u; }
        if (ctx->pc != 0x29ACF0u) { return; }
    }
    ctx->pc = 0x29ACF0u;
label_29acf0:
    // 0x29acf0: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x29ACF0u;
    {
        const bool branch_taken_0x29acf0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x29ACF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29ACF0u;
            // 0x29acf4: 0x3c040037  lui         $a0, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29acf0) {
            ctx->pc = 0x29AD0Cu;
            goto label_29ad0c;
        }
    }
    ctx->pc = 0x29ACF8u;
    // 0x29acf8: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x29acf8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x29acfc: 0xc04a0d2  jal         func_128348
    ctx->pc = 0x29ACFCu;
    SET_GPR_U32(ctx, 31, 0x29AD04u);
    ctx->pc = 0x29AD00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29ACFCu;
            // 0x29ad00: 0x2484de70  addiu       $a0, $a0, -0x2190 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294958704));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128348u;
    if (runtime->hasFunction(0x128348u)) {
        auto targetFn = runtime->lookupFunction(0x128348u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29AD04u; }
        if (ctx->pc != 0x29AD04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        printf_0x128348(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29AD04u; }
        if (ctx->pc != 0x29AD04u) { return; }
    }
    ctx->pc = 0x29AD04u;
label_29ad04:
    // 0x29ad04: 0x1000ffff  b           . + 4 + (-0x1 << 2)
    ctx->pc = 0x29AD04u;
    {
        const bool branch_taken_0x29ad04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x29ad04) {
            ctx->pc = 0x29AD04u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_29ad04;
        }
    }
    ctx->pc = 0x29AD0Cu;
label_29ad0c:
    // 0x29ad0c: 0x0  nop
    ctx->pc = 0x29ad0cu;
    // NOP
    // 0x29ad10: 0x8e820004  lw          $v0, 0x4($s4)
    ctx->pc = 0x29ad10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x29ad14: 0xae82002c  sw          $v0, 0x2C($s4)
    ctx->pc = 0x29ad14u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 44), GPR_U32(ctx, 2));
    // 0x29ad18: 0xa3a001cc  sb          $zero, 0x1CC($sp)
    ctx->pc = 0x29ad18u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 460), (uint8_t)GPR_U32(ctx, 0));
    // 0x29ad1c: 0xa3a001cd  sb          $zero, 0x1CD($sp)
    ctx->pc = 0x29ad1cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 461), (uint8_t)GPR_U32(ctx, 0));
    // 0x29ad20: 0xa3a001ce  sb          $zero, 0x1CE($sp)
    ctx->pc = 0x29ad20u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 462), (uint8_t)GPR_U32(ctx, 0));
    // 0x29ad24: 0x8e840000  lw          $a0, 0x0($s4)
    ctx->pc = 0x29ad24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x29ad28: 0xc0482d8  jal         func_120B60
    ctx->pc = 0x29AD28u;
    SET_GPR_U32(ctx, 31, 0x29AD30u);
    ctx->pc = 0x29AD2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29AD28u;
            // 0x29ad2c: 0x27a501cc  addiu       $a1, $sp, 0x1CC (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 460));
        ctx->in_delay_slot = false;
    ctx->pc = 0x120B60u;
    if (runtime->hasFunction(0x120B60u)) {
        auto targetFn = runtime->lookupFunction(0x120B60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29AD30u; }
        if (ctx->pc != 0x29AD30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceCdStStart_0x120b60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29AD30u; }
        if (ctx->pc != 0x29AD30u) { return; }
    }
    ctx->pc = 0x29AD30u;
label_29ad30:
    // 0x29ad30: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x29AD30u;
    {
        const bool branch_taken_0x29ad30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29AD34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29AD30u;
            // 0x29ad34: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29ad30) {
            ctx->pc = 0x29ADD4u;
            goto label_29add4;
        }
    }
    ctx->pc = 0x29AD38u;
label_29ad38:
    // 0x29ad38: 0xc0450a6  jal         func_114298
    ctx->pc = 0x29AD38u;
    SET_GPR_U32(ctx, 31, 0x29AD40u);
    ctx->pc = 0x29AD3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29AD38u;
            // 0x29ad3c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x114298u;
    if (runtime->hasFunction(0x114298u)) {
        auto targetFn = runtime->lookupFunction(0x114298u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29AD40u; }
        if (ctx->pc != 0x29AD40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceOpen_0x114298(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29AD40u; }
        if (ctx->pc != 0x29AD40u) { return; }
    }
    ctx->pc = 0x29AD40u;
label_29ad40:
    // 0x29ad40: 0xae820024  sw          $v0, 0x24($s4)
    ctx->pc = 0x29ad40u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 36), GPR_U32(ctx, 2));
    // 0x29ad44: 0x8e840024  lw          $a0, 0x24($s4)
    ctx->pc = 0x29ad44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 36)));
    // 0x29ad48: 0x4810007  bgez        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x29AD48u;
    {
        const bool branch_taken_0x29ad48 = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x29AD4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29AD48u;
            // 0x29ad4c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29ad48) {
            ctx->pc = 0x29AD68u;
            goto label_29ad68;
        }
    }
    ctx->pc = 0x29AD50u;
    // 0x29ad50: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x29ad50u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
    // 0x29ad54: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x29ad54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x29ad58: 0xc04a0d2  jal         func_128348
    ctx->pc = 0x29AD58u;
    SET_GPR_U32(ctx, 31, 0x29AD60u);
    ctx->pc = 0x29AD5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29AD58u;
            // 0x29ad5c: 0x2484dea0  addiu       $a0, $a0, -0x2160 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294958752));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128348u;
    if (runtime->hasFunction(0x128348u)) {
        auto targetFn = runtime->lookupFunction(0x128348u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29AD60u; }
        if (ctx->pc != 0x29AD60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        printf_0x128348(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29AD60u; }
        if (ctx->pc != 0x29AD60u) { return; }
    }
    ctx->pc = 0x29AD60u;
label_29ad60:
    // 0x29ad60: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x29AD60u;
    {
        const bool branch_taken_0x29ad60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29AD64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29AD60u;
            // 0x29ad64: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29ad60) {
            ctx->pc = 0x29ADD4u;
            goto label_29add4;
        }
    }
    ctx->pc = 0x29AD68u;
label_29ad68:
    // 0x29ad68: 0xc0451a8  jal         func_1146A0
    ctx->pc = 0x29AD68u;
    SET_GPR_U32(ctx, 31, 0x29AD70u);
    ctx->pc = 0x29AD6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29AD68u;
            // 0x29ad6c: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1146A0u;
    if (runtime->hasFunction(0x1146A0u)) {
        auto targetFn = runtime->lookupFunction(0x1146A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29AD70u; }
        if (ctx->pc != 0x29AD70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceLseek_0x1146a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29AD70u; }
        if (ctx->pc != 0x29AD70u) { return; }
    }
    ctx->pc = 0x29AD70u;
label_29ad70:
    // 0x29ad70: 0xae82002c  sw          $v0, 0x2C($s4)
    ctx->pc = 0x29ad70u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 44), GPR_U32(ctx, 2));
    // 0x29ad74: 0x8e86002c  lw          $a2, 0x2C($s4)
    ctx->pc = 0x29ad74u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 44)));
    // 0x29ad78: 0x4c10008  bgez        $a2, . + 4 + (0x8 << 2)
    ctx->pc = 0x29AD78u;
    {
        const bool branch_taken_0x29ad78 = (GPR_S32(ctx, 6) >= 0);
        ctx->pc = 0x29AD7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29AD78u;
            // 0x29ad7c: 0x3c040037  lui         $a0, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29ad78) {
            ctx->pc = 0x29AD9Cu;
            goto label_29ad9c;
        }
    }
    ctx->pc = 0x29AD80u;
    // 0x29ad80: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x29ad80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x29ad84: 0xc04a0d2  jal         func_128348
    ctx->pc = 0x29AD84u;
    SET_GPR_U32(ctx, 31, 0x29AD8Cu);
    ctx->pc = 0x29AD88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29AD84u;
            // 0x29ad88: 0x2484dec0  addiu       $a0, $a0, -0x2140 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294958784));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128348u;
    if (runtime->hasFunction(0x128348u)) {
        auto targetFn = runtime->lookupFunction(0x128348u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29AD8Cu; }
        if (ctx->pc != 0x29AD8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        printf_0x128348(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29AD8Cu; }
        if (ctx->pc != 0x29AD8Cu) { return; }
    }
    ctx->pc = 0x29AD8Cu;
label_29ad8c:
    // 0x29ad8c: 0xc045148  jal         func_114520
    ctx->pc = 0x29AD8Cu;
    SET_GPR_U32(ctx, 31, 0x29AD94u);
    ctx->pc = 0x29AD90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29AD8Cu;
            // 0x29ad90: 0x8e840024  lw          $a0, 0x24($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 36)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x114520u;
    if (runtime->hasFunction(0x114520u)) {
        auto targetFn = runtime->lookupFunction(0x114520u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29AD94u; }
        if (ctx->pc != 0x29AD94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceClose_0x114520(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29AD94u; }
        if (ctx->pc != 0x29AD94u) { return; }
    }
    ctx->pc = 0x29AD94u;
label_29ad94:
    // 0x29ad94: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x29AD94u;
    {
        const bool branch_taken_0x29ad94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29AD98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29AD94u;
            // 0x29ad98: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29ad94) {
            ctx->pc = 0x29ADD4u;
            goto label_29add4;
        }
    }
    ctx->pc = 0x29AD9Cu;
label_29ad9c:
    // 0x29ad9c: 0x8e840024  lw          $a0, 0x24($s4)
    ctx->pc = 0x29ad9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 36)));
    // 0x29ada0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x29ada0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29ada4: 0xc0451a8  jal         func_1146A0
    ctx->pc = 0x29ADA4u;
    SET_GPR_U32(ctx, 31, 0x29ADACu);
    ctx->pc = 0x29ADA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29ADA4u;
            // 0x29ada8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1146A0u;
    if (runtime->hasFunction(0x1146A0u)) {
        auto targetFn = runtime->lookupFunction(0x1146A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29ADACu; }
        if (ctx->pc != 0x29ADACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceLseek_0x1146a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29ADACu; }
        if (ctx->pc != 0x29ADACu) { return; }
    }
    ctx->pc = 0x29ADACu;
label_29adac:
    // 0x29adac: 0x4410008  bgez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x29ADACu;
    {
        const bool branch_taken_0x29adac = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x29ADB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29ADACu;
            // 0x29adb0: 0x3c040037  lui         $a0, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29adac) {
            ctx->pc = 0x29ADD0u;
            goto label_29add0;
        }
    }
    ctx->pc = 0x29ADB4u;
    // 0x29adb4: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x29adb4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x29adb8: 0xc04a0d2  jal         func_128348
    ctx->pc = 0x29ADB8u;
    SET_GPR_U32(ctx, 31, 0x29ADC0u);
    ctx->pc = 0x29ADBCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29ADB8u;
            // 0x29adbc: 0x2484dee0  addiu       $a0, $a0, -0x2120 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294958816));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128348u;
    if (runtime->hasFunction(0x128348u)) {
        auto targetFn = runtime->lookupFunction(0x128348u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29ADC0u; }
        if (ctx->pc != 0x29ADC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        printf_0x128348(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29ADC0u; }
        if (ctx->pc != 0x29ADC0u) { return; }
    }
    ctx->pc = 0x29ADC0u;
label_29adc0:
    // 0x29adc0: 0xc045148  jal         func_114520
    ctx->pc = 0x29ADC0u;
    SET_GPR_U32(ctx, 31, 0x29ADC8u);
    ctx->pc = 0x29ADC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29ADC0u;
            // 0x29adc4: 0x8e840024  lw          $a0, 0x24($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 36)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x114520u;
    if (runtime->hasFunction(0x114520u)) {
        auto targetFn = runtime->lookupFunction(0x114520u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29ADC8u; }
        if (ctx->pc != 0x29ADC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceClose_0x114520(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29ADC8u; }
        if (ctx->pc != 0x29ADC8u) { return; }
    }
    ctx->pc = 0x29ADC8u;
label_29adc8:
    // 0x29adc8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x29ADC8u;
    {
        const bool branch_taken_0x29adc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29ADCCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29ADC8u;
            // 0x29adcc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29adc8) {
            ctx->pc = 0x29ADD4u;
            goto label_29add4;
        }
    }
    ctx->pc = 0x29ADD0u;
label_29add0:
    // 0x29add0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x29add0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_29add4:
    // 0x29add4: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x29add4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x29add8: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x29add8u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x29addc: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x29addcu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x29ade0: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x29ade0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x29ade4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x29ade4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x29ade8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x29ade8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x29adec: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x29adecu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x29adf0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x29adf0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x29adf4: 0x3e00008  jr          $ra
    ctx->pc = 0x29ADF4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29ADF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29ADF4u;
            // 0x29adf8: 0x27bd01d0  addiu       $sp, $sp, 0x1D0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 464));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x29ADFCu;
}
