#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: Bakuhatsu__4CPotFPfPf
// Address: 0x2ccda0 - 0x2cce68
void Bakuhatsu__4CPotFPfPf_0x2ccda0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Bakuhatsu__4CPotFPfPf_0x2ccda0");
#endif

    switch (ctx->pc) {
        case 0x2ccdd0u: goto label_2ccdd0;
        case 0x2ccdfcu: goto label_2ccdfc;
        case 0x2cce18u: goto label_2cce18;
        case 0x2cce30u: goto label_2cce30;
        case 0x2cce48u: goto label_2cce48;
        case 0x2cce50u: goto label_2cce50;
        default: break;
    }

    ctx->pc = 0x2ccda0u;

    // 0x2ccda0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2ccda0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2ccda4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2ccda4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2ccda8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2ccda8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2ccdac: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2ccdacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2ccdb0: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2ccdb0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ccdb4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2ccdb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2ccdb8: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2ccdb8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ccdbc: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x2ccdbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2ccdc0: 0x10600023  beqz        $v1, . + 4 + (0x23 << 2)
    ctx->pc = 0x2CCDC0u;
    {
        const bool branch_taken_0x2ccdc0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CCDC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CCDC0u;
            // 0x2ccdc4: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ccdc0) {
            ctx->pc = 0x2CCE50u;
            goto label_2cce50;
        }
    }
    ctx->pc = 0x2CCDC8u;
    // 0x2ccdc8: 0xc06421c  jal         func_190870
    ctx->pc = 0x2CCDC8u;
    SET_GPR_U32(ctx, 31, 0x2CCDD0u);
    ctx->pc = 0x190870u;
    if (runtime->hasFunction(0x190870u)) {
        auto targetFn = runtime->lookupFunction(0x190870u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CCDD0u; }
        if (ctx->pc != 0x2CCDD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetMainScene__Fv_0x190870(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CCDD0u; }
        if (ctx->pc != 0x2CCDD0u) { return; }
    }
    ctx->pc = 0x2CCDD0u;
label_2ccdd0:
    // 0x2ccdd0: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x2ccdd0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x2ccdd4: 0x410821  addu        $at, $v0, $at
    ctx->pc = 0x2ccdd4u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 1)));
    // 0x2ccdd8: 0x8c24c4d0  lw          $a0, -0x3B30($at)
    ctx->pc = 0x2ccdd8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294952144)));
    // 0x2ccddc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2ccddcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ccde0: 0x3c0101eb  lui         $at, 0x1EB
    ctx->pc = 0x2ccde0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)491 << 16));
    // 0x2ccde4: 0x8c23f434  lw          $v1, -0xBCC($at)
    ctx->pc = 0x2ccde4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294964276)));
    // 0x2ccde8: 0x14620006  bne         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2CCDE8u;
    {
        const bool branch_taken_0x2ccde8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2CCDECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CCDE8u;
            // 0x2ccdec: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ccde8) {
            ctx->pc = 0x2CCE04u;
            goto label_2cce04;
        }
    }
    ctx->pc = 0x2CCDF0u;
    // 0x2ccdf0: 0x24050039  addiu       $a1, $zero, 0x39
    ctx->pc = 0x2ccdf0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 57));
    // 0x2ccdf4: 0xc063818  jal         func_18E060
    ctx->pc = 0x2CCDF4u;
    SET_GPR_U32(ctx, 31, 0x2CCDFCu);
    ctx->pc = 0x2CCDF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CCDF4u;
            // 0x2ccdf8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18E060u;
    if (runtime->hasFunction(0x18E060u)) {
        auto targetFn = runtime->lookupFunction(0x18E060u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CCDFCu; }
        if (ctx->pc != 0x2CCDFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sndSePlay__FUiii_0x18e060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CCDFCu; }
        if (ctx->pc != 0x2CCDFCu) { return; }
    }
    ctx->pc = 0x2CCDFCu;
label_2ccdfc:
    // 0x2ccdfc: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x2CCDFCu;
    {
        const bool branch_taken_0x2ccdfc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ccdfc) {
            ctx->pc = 0x2CCE30u;
            goto label_2cce30;
        }
    }
    ctx->pc = 0x2CCE04u;
label_2cce04:
    // 0x2cce04: 0x14620006  bne         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2CCE04u;
    {
        const bool branch_taken_0x2cce04 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2CCE08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CCE04u;
            // 0x2cce08: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cce04) {
            ctx->pc = 0x2CCE20u;
            goto label_2cce20;
        }
    }
    ctx->pc = 0x2CCE0Cu;
    // 0x2cce0c: 0x2405003a  addiu       $a1, $zero, 0x3A
    ctx->pc = 0x2cce0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 58));
    // 0x2cce10: 0xc063818  jal         func_18E060
    ctx->pc = 0x2CCE10u;
    SET_GPR_U32(ctx, 31, 0x2CCE18u);
    ctx->pc = 0x2CCE14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CCE10u;
            // 0x2cce14: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18E060u;
    if (runtime->hasFunction(0x18E060u)) {
        auto targetFn = runtime->lookupFunction(0x18E060u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CCE18u; }
        if (ctx->pc != 0x2CCE18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sndSePlay__FUiii_0x18e060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CCE18u; }
        if (ctx->pc != 0x2CCE18u) { return; }
    }
    ctx->pc = 0x2CCE18u;
label_2cce18:
    // 0x2cce18: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2CCE18u;
    {
        const bool branch_taken_0x2cce18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cce18) {
            ctx->pc = 0x2CCE30u;
            goto label_2cce30;
        }
    }
    ctx->pc = 0x2CCE20u;
label_2cce20:
    // 0x2cce20: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2CCE20u;
    {
        const bool branch_taken_0x2cce20 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2CCE24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CCE20u;
            // 0x2cce24: 0x2405003b  addiu       $a1, $zero, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 59));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cce20) {
            ctx->pc = 0x2CCE30u;
            goto label_2cce30;
        }
    }
    ctx->pc = 0x2CCE28u;
    // 0x2cce28: 0xc063818  jal         func_18E060
    ctx->pc = 0x2CCE28u;
    SET_GPR_U32(ctx, 31, 0x2CCE30u);
    ctx->pc = 0x2CCE2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CCE28u;
            // 0x2cce2c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18E060u;
    if (runtime->hasFunction(0x18E060u)) {
        auto targetFn = runtime->lookupFunction(0x18E060u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CCE30u; }
        if (ctx->pc != 0x2CCE30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sndSePlay__FUiii_0x18e060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CCE30u; }
        if (ctx->pc != 0x2CCE30u) { return; }
    }
    ctx->pc = 0x2CCE30u;
label_2cce30:
    // 0x2cce30: 0x3c0401eb  lui         $a0, 0x1EB
    ctx->pc = 0x2cce30u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)491 << 16));
    // 0x2cce34: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x2cce34u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cce38: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x2cce38u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cce3c: 0x2484f430  addiu       $a0, $a0, -0xBD0
    ctx->pc = 0x2cce3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294964272));
    // 0x2cce40: 0xc0b30a0  jal         func_2CC280
    ctx->pc = 0x2CCE40u;
    SET_GPR_U32(ctx, 31, 0x2CCE48u);
    ctx->pc = 0x2CCE44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CCE40u;
            // 0x2cce44: 0x26450010  addiu       $a1, $s2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2CC280u;
    if (runtime->hasFunction(0x2CC280u)) {
        auto targetFn = runtime->lookupFunction(0x2CC280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CCE48u; }
        if (ctx->pc != 0x2CCE48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Clash__5CBPotFPfPfPf_0x2cc280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CCE48u; }
        if (ctx->pc != 0x2CCE48u) { return; }
    }
    ctx->pc = 0x2CCE48u;
label_2cce48:
    // 0x2cce48: 0xc0b3348  jal         func_2CCD20
    ctx->pc = 0x2CCE48u;
    SET_GPR_U32(ctx, 31, 0x2CCE50u);
    ctx->pc = 0x2CCE4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CCE48u;
            // 0x2cce4c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2CCD20u;
    if (runtime->hasFunction(0x2CCD20u)) {
        auto targetFn = runtime->lookupFunction(0x2CCD20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CCE50u; }
        if (ctx->pc != 0x2CCE50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Clear__4CPotFv_0x2ccd20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CCE50u; }
        if (ctx->pc != 0x2CCE50u) { return; }
    }
    ctx->pc = 0x2CCE50u;
label_2cce50:
    // 0x2cce50: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2cce50u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2cce54: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2cce54u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2cce58: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2cce58u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2cce5c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2cce5cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2cce60: 0x3e00008  jr          $ra
    ctx->pc = 0x2CCE60u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CCE64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CCE60u;
            // 0x2cce64: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2CCE68u;
}
