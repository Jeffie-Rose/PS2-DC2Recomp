#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _SET_REFERENCE__FP12RS_STACKDATAi
// Address: 0x26bca0 - 0x26bd78
void ps2__SET_REFERENCE__FP12RS_STACKDATAi_0x26bca0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__SET_REFERENCE__FP12RS_STACKDATAi_0x26bca0");
#endif

    switch (ctx->pc) {
        case 0x26bcbcu: goto label_26bcbc;
        case 0x26bcccu: goto label_26bccc;
        case 0x26bcd8u: goto label_26bcd8;
        case 0x26bce4u: goto label_26bce4;
        case 0x26bd00u: goto label_26bd00;
        case 0x26bd30u: goto label_26bd30;
        case 0x26bd5cu: goto label_26bd5c;
        default: break;
    }

    ctx->pc = 0x26bca0u;

    // 0x26bca0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x26bca0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x26bca4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x26bca4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x26bca8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x26bca8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x26bcac: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x26bcacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x26bcb0: 0x24910008  addiu       $s1, $a0, 0x8
    ctx->pc = 0x26bcb0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x26bcb4: 0xc097e18  jal         func_25F860
    ctx->pc = 0x26BCB4u;
    SET_GPR_U32(ctx, 31, 0x26BCBCu);
    ctx->pc = 0x26BCB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26BCB4u;
            // 0x26bcb8: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26BCBCu; }
        if (ctx->pc != 0x26BCBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26BCBCu; }
        if (ctx->pc != 0x26BCBCu) { return; }
    }
    ctx->pc = 0x26BCBCu;
label_26bcbc:
    // 0x26bcbc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x26bcbcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26bcc0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x26bcc0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26bcc4: 0xc097e48  jal         func_25F920
    ctx->pc = 0x26BCC4u;
    SET_GPR_U32(ctx, 31, 0x26BCCCu);
    ctx->pc = 0x26BCC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26BCC4u;
            // 0x26bcc8: 0x24910008  addiu       $s1, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F920u;
    if (runtime->hasFunction(0x25F920u)) {
        auto targetFn = runtime->lookupFunction(0x25F920u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26BCCCu; }
        if (ctx->pc != 0x26BCCCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackString__FP12RS_STACKDATA_0x25f920(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26BCCCu; }
        if (ctx->pc != 0x26BCCCu) { return; }
    }
    ctx->pc = 0x26BCCCu;
label_26bccc:
    // 0x26bccc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x26bcccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26bcd0: 0xc097e18  jal         func_25F860
    ctx->pc = 0x26BCD0u;
    SET_GPR_U32(ctx, 31, 0x26BCD8u);
    ctx->pc = 0x26BCD4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26BCD0u;
            // 0x26bcd4: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26BCD8u; }
        if (ctx->pc != 0x26BCD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26BCD8u; }
        if (ctx->pc != 0x26BCD8u) { return; }
    }
    ctx->pc = 0x26BCD8u;
label_26bcd8:
    // 0x26bcd8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x26bcd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26bcdc: 0xc09ac74  jal         func_26B1D0
    ctx->pc = 0x26BCDCu;
    SET_GPR_U32(ctx, 31, 0x26BCE4u);
    ctx->pc = 0x26BCE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26BCDCu;
            // 0x26bce0: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x26B1D0u;
    if (runtime->hasFunction(0x26B1D0u)) {
        auto targetFn = runtime->lookupFunction(0x26B1D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26BCE4u; }
        if (ctx->pc != 0x26BCE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetChara__Fi_0x26b1d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26BCE4u; }
        if (ctx->pc != 0x26BCE4u) { return; }
    }
    ctx->pc = 0x26BCE4u;
label_26bce4:
    // 0x26bce4: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x26bce4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26bce8: 0x16400003  bnez        $s2, . + 4 + (0x3 << 2)
    ctx->pc = 0x26BCE8u;
    {
        const bool branch_taken_0x26bce8 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x26BCECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26BCE8u;
            // 0x26bcec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26bce8) {
            ctx->pc = 0x26BCF8u;
            goto label_26bcf8;
        }
    }
    ctx->pc = 0x26BCF0u;
    // 0x26bcf0: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x26BCF0u;
    {
        const bool branch_taken_0x26bcf0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26BCF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26BCF0u;
            // 0x26bcf4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26bcf0) {
            ctx->pc = 0x26BD60u;
            goto label_26bd60;
        }
    }
    ctx->pc = 0x26BCF8u;
label_26bcf8:
    // 0x26bcf8: 0xc09ac74  jal         func_26B1D0
    ctx->pc = 0x26BCF8u;
    SET_GPR_U32(ctx, 31, 0x26BD00u);
    ctx->pc = 0x26B1D0u;
    if (runtime->hasFunction(0x26B1D0u)) {
        auto targetFn = runtime->lookupFunction(0x26B1D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26BD00u; }
        if (ctx->pc != 0x26BD00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetChara__Fi_0x26b1d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26BD00u; }
        if (ctx->pc != 0x26BD00u) { return; }
    }
    ctx->pc = 0x26BD00u;
label_26bd00:
    // 0x26bd00: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x26bd00u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26bd04: 0x16000003  bnez        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x26BD04u;
    {
        const bool branch_taken_0x26bd04 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x26BD08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26BD04u;
            // 0x26bd08: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26bd04) {
            ctx->pc = 0x26BD14u;
            goto label_26bd14;
        }
    }
    ctx->pc = 0x26BD0Cu;
    // 0x26bd0c: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x26BD0Cu;
    {
        const bool branch_taken_0x26bd0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26BD10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26BD0Cu;
            // 0x26bd10: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26bd0c) {
            ctx->pc = 0x26BD64u;
            goto label_26bd64;
        }
    }
    ctx->pc = 0x26BD14u;
label_26bd14:
    // 0x26bd14: 0x8e440070  lw          $a0, 0x70($s2)
    ctx->pc = 0x26bd14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 112)));
    // 0x26bd18: 0x14800003  bnez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x26BD18u;
    {
        const bool branch_taken_0x26bd18 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x26BD1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26BD18u;
            // 0x26bd1c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26bd18) {
            ctx->pc = 0x26BD28u;
            goto label_26bd28;
        }
    }
    ctx->pc = 0x26BD20u;
    // 0x26bd20: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x26BD20u;
    {
        const bool branch_taken_0x26bd20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26BD24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26BD20u;
            // 0x26bd24: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26bd20) {
            ctx->pc = 0x26BD60u;
            goto label_26bd60;
        }
    }
    ctx->pc = 0x26BD28u;
label_26bd28:
    // 0x26bd28: 0xc04ddb4  jal         func_1376D0
    ctx->pc = 0x26BD28u;
    SET_GPR_U32(ctx, 31, 0x26BD30u);
    ctx->pc = 0x1376D0u;
    if (runtime->hasFunction(0x1376D0u)) {
        auto targetFn = runtime->lookupFunction(0x1376D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26BD30u; }
        if (ctx->pc != 0x26BD30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SearchFrame__8mgCFrameFPc_0x1376d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26BD30u; }
        if (ctx->pc != 0x26BD30u) { return; }
    }
    ctx->pc = 0x26BD30u;
label_26bd30:
    // 0x26bd30: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x26BD30u;
    {
        const bool branch_taken_0x26bd30 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x26bd30) {
            ctx->pc = 0x26BD40u;
            goto label_26bd40;
        }
    }
    ctx->pc = 0x26BD38u;
    // 0x26bd38: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x26BD38u;
    {
        const bool branch_taken_0x26bd38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26BD3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26BD38u;
            // 0x26bd3c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26bd38) {
            ctx->pc = 0x26BD60u;
            goto label_26bd60;
        }
    }
    ctx->pc = 0x26BD40u;
label_26bd40:
    // 0x26bd40: 0x8e040070  lw          $a0, 0x70($s0)
    ctx->pc = 0x26bd40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 112)));
    // 0x26bd44: 0x14800003  bnez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x26BD44u;
    {
        const bool branch_taken_0x26bd44 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x26BD48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26BD44u;
            // 0x26bd48: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26bd44) {
            ctx->pc = 0x26BD54u;
            goto label_26bd54;
        }
    }
    ctx->pc = 0x26BD4Cu;
    // 0x26bd4c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x26BD4Cu;
    {
        const bool branch_taken_0x26bd4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26BD50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26BD4Cu;
            // 0x26bd50: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26bd4c) {
            ctx->pc = 0x26BD60u;
            goto label_26bd60;
        }
    }
    ctx->pc = 0x26BD54u;
label_26bd54:
    // 0x26bd54: 0xc04db0c  jal         func_136C30
    ctx->pc = 0x26BD54u;
    SET_GPR_U32(ctx, 31, 0x26BD5Cu);
    ctx->pc = 0x136C30u;
    if (runtime->hasFunction(0x136C30u)) {
        auto targetFn = runtime->lookupFunction(0x136C30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26BD5Cu; }
        if (ctx->pc != 0x26BD5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetReference__8mgCFrameFP8mgCFrame_0x136c30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26BD5Cu; }
        if (ctx->pc != 0x26BD5Cu) { return; }
    }
    ctx->pc = 0x26BD5Cu;
label_26bd5c:
    // 0x26bd5c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x26bd5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_26bd60:
    // 0x26bd60: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x26bd60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_26bd64:
    // 0x26bd64: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x26bd64u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x26bd68: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x26bd68u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x26bd6c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x26bd6cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x26bd70: 0x3e00008  jr          $ra
    ctx->pc = 0x26BD70u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26BD74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26BD70u;
            // 0x26bd74: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x26BD78u;
}
