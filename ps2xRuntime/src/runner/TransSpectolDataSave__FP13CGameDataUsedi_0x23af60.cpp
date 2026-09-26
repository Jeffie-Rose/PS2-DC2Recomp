#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: TransSpectolDataSave__FP13CGameDataUsedi
// Address: 0x23af60 - 0x23afdc
void TransSpectolDataSave__FP13CGameDataUsedi_0x23af60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("TransSpectolDataSave__FP13CGameDataUsedi_0x23af60");
#endif

    switch (ctx->pc) {
        case 0x23af8cu: goto label_23af8c;
        case 0x23afc8u: goto label_23afc8;
        default: break;
    }

    ctx->pc = 0x23af60u;

    // 0x23af60: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x23af60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x23af64: 0x2406006c  addiu       $a2, $zero, 0x6C
    ctx->pc = 0x23af64u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 108));
    // 0x23af68: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x23af68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x23af6c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x23af6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x23af70: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x23af70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x23af74: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x23af74u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23af78: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x23af78u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23af7c: 0x3c0401ed  lui         $a0, 0x1ED
    ctx->pc = 0x23af7cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)493 << 16));
    // 0x23af80: 0x2484dd70  addiu       $a0, $a0, -0x2290
    ctx->pc = 0x23af80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294958448));
    // 0x23af84: 0xc049c18  jal         func_127060
    ctx->pc = 0x23AF84u;
    SET_GPR_U32(ctx, 31, 0x23AF8Cu);
    ctx->pc = 0x23AF88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23AF84u;
            // 0x23af88: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127060u;
    if (runtime->hasFunction(0x127060u)) {
        auto targetFn = runtime->lookupFunction(0x127060u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23AF8Cu; }
        if (ctx->pc != 0x23AF8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        memcpy_0x127060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23AF8Cu; }
        if (ctx->pc != 0x23AF8Cu) { return; }
    }
    ctx->pc = 0x23AF8Cu;
label_23af8c:
    // 0x23af8c: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x23af8cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x23af90: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x23af90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x23af94: 0x8423dd70  lh          $v1, -0x2290($at)
    ctx->pc = 0x23af94u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 4294958448)));
    // 0x23af98: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x23AF98u;
    {
        const bool branch_taken_0x23af98 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x23AF9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23AF98u;
            // 0x23af9c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23af98) {
            ctx->pc = 0x23AFACu;
            goto label_23afac;
        }
    }
    ctx->pc = 0x23AFA0u;
    // 0x23afa0: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x23afa0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x23afa4: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x23AFA4u;
    {
        const bool branch_taken_0x23afa4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23AFA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23AFA4u;
            // 0x23afa8: 0xa430dd80  sh          $s0, -0x2280($at) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 1), 4294958464), (uint16_t)GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23afa4) {
            ctx->pc = 0x23AFBCu;
            goto label_23afbc;
        }
    }
    ctx->pc = 0x23AFACu;
label_23afac:
    // 0x23afac: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x23AFACu;
    {
        const bool branch_taken_0x23afac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x23AFB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23AFACu;
            // 0x23afb0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23afac) {
            ctx->pc = 0x23AFC0u;
            goto label_23afc0;
        }
    }
    ctx->pc = 0x23AFB4u;
    // 0x23afb4: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x23afb4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x23afb8: 0xa430ddba  sh          $s0, -0x2246($at)
    ctx->pc = 0x23afb8u;
    WRITE16(ADD32(GPR_U32(ctx, 1), 4294958522), (uint16_t)GPR_U32(ctx, 16));
label_23afbc:
    // 0x23afbc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x23afbcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_23afc0:
    // 0x23afc0: 0xc065f4c  jal         func_197D30
    ctx->pc = 0x23AFC0u;
    SET_GPR_U32(ctx, 31, 0x23AFC8u);
    ctx->pc = 0x23AFC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23AFC0u;
            // 0x23afc4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x197D30u;
    if (runtime->hasFunction(0x197D30u)) {
        auto targetFn = runtime->lookupFunction(0x197D30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23AFC8u; }
        if (ctx->pc != 0x23AFC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DeleteNum__13CGameDataUsedFi_0x197d30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23AFC8u; }
        if (ctx->pc != 0x23AFC8u) { return; }
    }
    ctx->pc = 0x23AFC8u;
label_23afc8:
    // 0x23afc8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x23afc8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x23afcc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x23afccu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23afd0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x23afd0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23afd4: 0x3e00008  jr          $ra
    ctx->pc = 0x23AFD4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23AFD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23AFD4u;
            // 0x23afd8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x23AFDCu;
}
