#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: SphidaScreListUpdate__FP7CDC2Mesi
// Address: 0x2ade00 - 0x2adf28
void SphidaScreListUpdate__FP7CDC2Mesi_0x2ade00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SphidaScreListUpdate__FP7CDC2Mesi_0x2ade00");
#endif

    switch (ctx->pc) {
        case 0x2ade64u: goto label_2ade64;
        case 0x2ade70u: goto label_2ade70;
        case 0x2adebcu: goto label_2adebc;
        case 0x2adee0u: goto label_2adee0;
        case 0x2adf0cu: goto label_2adf0c;
        default: break;
    }

    ctx->pc = 0x2ade00u;

    // 0x2ade00: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2ade00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2ade04: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2ade04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x2ade08: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2ade08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2ade0c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2ade0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2ade10: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x2ade10u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ade14: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2ade14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2ade18: 0x1260003c  beqz        $s3, . + 4 + (0x3C << 2)
    ctx->pc = 0x2ADE18u;
    {
        const bool branch_taken_0x2ade18 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ADE1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2ADE18u;
            // 0x2ade1c: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ade18) {
            ctx->pc = 0x2ADF0Cu;
            goto label_2adf0c;
        }
    }
    ctx->pc = 0x2ADE20u;
    // 0x2ade20: 0x8f839b08  lw          $v1, -0x64F8($gp)
    ctx->pc = 0x2ade20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941448)));
    // 0x2ade24: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2ADE24u;
    {
        const bool branch_taken_0x2ade24 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ade24) {
            ctx->pc = 0x2ADE34u;
            goto label_2ade34;
        }
    }
    ctx->pc = 0x2ADE2Cu;
    // 0x2ade2c: 0x10000038  b           . + 4 + (0x38 << 2)
    ctx->pc = 0x2ADE2Cu;
    {
        const bool branch_taken_0x2ade2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ADE30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2ADE2Cu;
            // 0x2ade30: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ade2c) {
            ctx->pc = 0x2ADF10u;
            goto label_2adf10;
        }
    }
    ctx->pc = 0x2ADE34u;
label_2ade34:
    // 0x2ade34: 0x87849b54  lh          $a0, -0x64AC($gp)
    ctx->pc = 0x2ade34u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294941524)));
    // 0x2ade38: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2ade38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ade3c: 0x14830005  bne         $a0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2ADE3Cu;
    {
        const bool branch_taken_0x2ade3c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x2ADE40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2ADE3Cu;
            // 0x2ade40: 0x8f909b4c  lw          $s0, -0x64B4($gp) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941516)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ade3c) {
            ctx->pc = 0x2ADE54u;
            goto label_2ade54;
        }
    }
    ctx->pc = 0x2ADE44u;
    // 0x2ade44: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x2ade44u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x2ade48: 0x6010002  bgez        $s0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2ADE48u;
    {
        const bool branch_taken_0x2ade48 = (GPR_S32(ctx, 16) >= 0);
        if (branch_taken_0x2ade48) {
            ctx->pc = 0x2ADE54u;
            goto label_2ade54;
        }
    }
    ctx->pc = 0x2ADE50u;
    // 0x2ade50: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2ade50u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2ade54:
    // 0x2ade54: 0x10a0002d  beqz        $a1, . + 4 + (0x2D << 2)
    ctx->pc = 0x2ADE54u;
    {
        const bool branch_taken_0x2ade54 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ade54) {
            ctx->pc = 0x2ADF0Cu;
            goto label_2adf0c;
        }
    }
    ctx->pc = 0x2ADE5Cu;
    // 0x2ade5c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2ade5cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ade60: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x2ade60u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2ade64:
    // 0x2ade64: 0x8f849b08  lw          $a0, -0x64F8($gp)
    ctx->pc = 0x2ade64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941448)));
    // 0x2ade68: 0xc0bdbd8  jal         func_2F6F60
    ctx->pc = 0x2ADE68u;
    SET_GPR_U32(ctx, 31, 0x2ADE70u);
    ctx->pc = 0x2ADE6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2ADE68u;
            // 0x2ade6c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F6F60u;
    if (runtime->hasFunction(0x2F6F60u)) {
        auto targetFn = runtime->lookupFunction(0x2F6F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ADE70u; }
        if (ctx->pc != 0x2ADE70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlayerData__11CSphidaDataFi_0x2f6f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ADE70u; }
        if (ctx->pc != 0x2ADE70u) { return; }
    }
    ctx->pc = 0x2ADE70u;
label_2ade70:
    // 0x2ade70: 0x1040001c  beqz        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x2ADE70u;
    {
        const bool branch_taken_0x2ade70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ade70) {
            ctx->pc = 0x2ADEE4u;
            goto label_2adee4;
        }
    }
    ctx->pc = 0x2ADE78u;
    // 0x2ade78: 0x80430000  lb          $v1, 0x0($v0)
    ctx->pc = 0x2ade78u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2ade7c: 0x14600011  bnez        $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x2ADE7Cu;
    {
        const bool branch_taken_0x2ade7c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ade7c) {
            ctx->pc = 0x2ADEC4u;
            goto label_2adec4;
        }
    }
    ctx->pc = 0x2ADE84u;
    // 0x2ade84: 0x80430001  lb          $v1, 0x1($v0)
    ctx->pc = 0x2ade84u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
    // 0x2ade88: 0x1460000e  bnez        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x2ADE88u;
    {
        const bool branch_taken_0x2ade88 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ade88) {
            ctx->pc = 0x2ADEC4u;
            goto label_2adec4;
        }
    }
    ctx->pc = 0x2ADE90u;
    // 0x2ade90: 0x8f838ad0  lw          $v1, -0x7530($gp)
    ctx->pc = 0x2ade90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937296)));
    // 0x2ade94: 0x3c020035  lui         $v0, 0x35
    ctx->pc = 0x2ade94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)53 << 16));
    // 0x2ade98: 0x2442fec0  addiu       $v0, $v0, -0x140
    ctx->pc = 0x2ade98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966976));
    // 0x2ade9c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2ade9cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2adea0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2adea0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2adea4: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x2adea4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2adea8: 0x10a0000d  beqz        $a1, . + 4 + (0xD << 2)
    ctx->pc = 0x2ADEA8u;
    {
        const bool branch_taken_0x2adea8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x2adea8) {
            ctx->pc = 0x2ADEE0u;
            goto label_2adee0;
        }
    }
    ctx->pc = 0x2ADEB0u;
    // 0x2adeb0: 0x2721021  addu        $v0, $s3, $s2
    ctx->pc = 0x2adeb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 18)));
    // 0x2adeb4: 0xc04a3dc  jal         func_128F70
    ctx->pc = 0x2ADEB4u;
    SET_GPR_U32(ctx, 31, 0x2ADEBCu);
    ctx->pc = 0x2ADEB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2ADEB4u;
            // 0x2adeb8: 0x24441801  addiu       $a0, $v0, 0x1801 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 6145));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128F70u;
    if (runtime->hasFunction(0x128F70u)) {
        auto targetFn = runtime->lookupFunction(0x128F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ADEBCu; }
        if (ctx->pc != 0x2ADEBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcpy_0x128f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ADEBCu; }
        if (ctx->pc != 0x2ADEBCu) { return; }
    }
    ctx->pc = 0x2ADEBCu;
label_2adebc:
    // 0x2adebc: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2ADEBCu;
    {
        const bool branch_taken_0x2adebc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2adebc) {
            ctx->pc = 0x2ADEE0u;
            goto label_2adee0;
        }
    }
    ctx->pc = 0x2ADEC4u;
label_2adec4:
    // 0x2adec4: 0x0  nop
    ctx->pc = 0x2adec4u;
    // NOP
    // 0x2adec8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2ADEC8u;
    {
        const bool branch_taken_0x2adec8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2adec8) {
            ctx->pc = 0x2ADEE0u;
            goto label_2adee0;
        }
    }
    ctx->pc = 0x2ADED0u;
    // 0x2aded0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2aded0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aded4: 0x2721021  addu        $v0, $s3, $s2
    ctx->pc = 0x2aded4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 18)));
    // 0x2aded8: 0xc04a3dc  jal         func_128F70
    ctx->pc = 0x2ADED8u;
    SET_GPR_U32(ctx, 31, 0x2ADEE0u);
    ctx->pc = 0x2ADEDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2ADED8u;
            // 0x2adedc: 0x24441801  addiu       $a0, $v0, 0x1801 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 6145));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128F70u;
    if (runtime->hasFunction(0x128F70u)) {
        auto targetFn = runtime->lookupFunction(0x128F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ADEE0u; }
        if (ctx->pc != 0x2ADEE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcpy_0x128f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ADEE0u; }
        if (ctx->pc != 0x2ADEE0u) { return; }
    }
    ctx->pc = 0x2ADEE0u;
label_2adee0:
    // 0x2adee0: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2adee0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_2adee4:
    // 0x2adee4: 0x0  nop
    ctx->pc = 0x2adee4u;
    // NOP
    // 0x2adee8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x2adee8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x2adeec: 0x2a220009  slti        $v0, $s1, 0x9
    ctx->pc = 0x2adeecu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)9) ? 1 : 0);
    // 0x2adef0: 0x1440ffdc  bnez        $v0, . + 4 + (-0x24 << 2)
    ctx->pc = 0x2ADEF0u;
    {
        const bool branch_taken_0x2adef0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2ADEF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2ADEF0u;
            // 0x2adef4: 0x26520020  addiu       $s2, $s2, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2adef0) {
            ctx->pc = 0x2ADE64u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2ade64;
        }
    }
    ctx->pc = 0x2ADEF8u;
    // 0x2adef8: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2adef8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2adefc: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2adefcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2adf00: 0xae6217e4  sw          $v0, 0x17E4($s3)
    ctx->pc = 0x2adf00u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 6116), GPR_U32(ctx, 2));
    // 0x2adf04: 0xc0877e0  jal         func_21DF80
    ctx->pc = 0x2ADF04u;
    SET_GPR_U32(ctx, 31, 0x2ADF0Cu);
    ctx->pc = 0x2ADF08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2ADF04u;
            // 0x2adf08: 0x240513ee  addiu       $a1, $zero, 0x13EE (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5102));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21DF80u;
    if (runtime->hasFunction(0x21DF80u)) {
        auto targetFn = runtime->lookupFunction(0x21DF80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ADF0Cu; }
        if (ctx->pc != 0x2ADF0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MakeMsg__7CDC2MesFi_0x21df80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ADF0Cu; }
        if (ctx->pc != 0x2ADF0Cu) { return; }
    }
    ctx->pc = 0x2ADF0Cu;
label_2adf0c:
    // 0x2adf0c: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x2adf0cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_2adf10:
    // 0x2adf10: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2adf10u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2adf14: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2adf14u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2adf18: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2adf18u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2adf1c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2adf1cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2adf20: 0x3e00008  jr          $ra
    ctx->pc = 0x2ADF20u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2ADF24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2ADF20u;
            // 0x2adf24: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2ADF28u;
}
