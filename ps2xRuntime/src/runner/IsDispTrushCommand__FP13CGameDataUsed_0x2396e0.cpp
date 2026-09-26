#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: IsDispTrushCommand__FP13CGameDataUsed
// Address: 0x2396e0 - 0x2397c8
void IsDispTrushCommand__FP13CGameDataUsed_0x2396e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("IsDispTrushCommand__FP13CGameDataUsed_0x2396e0");
#endif

    switch (ctx->pc) {
        case 0x239718u: goto label_239718;
        case 0x239728u: goto label_239728;
        case 0x239738u: goto label_239738;
        case 0x239748u: goto label_239748;
        case 0x239760u: goto label_239760;
        case 0x239794u: goto label_239794;
        default: break;
    }

    ctx->pc = 0x2396e0u;

    // 0x2396e0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x2396e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x2396e4: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x2396e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x2396e8: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x2396e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x2396ec: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x2396ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x2396f0: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2396f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2396f4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2396f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2396f8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2396f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2396fc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2396fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x239700: 0x80820004  lb          $v0, 0x4($a0)
    ctx->pc = 0x239700u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x239704: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x239704u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x239708: 0x14500026  bne         $v0, $s0, . + 4 + (0x26 << 2)
    ctx->pc = 0x239708u;
    {
        const bool branch_taken_0x239708 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        ctx->pc = 0x23970Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x239708u;
            // 0x23970c: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x239708) {
            ctx->pc = 0x2397A4u;
            goto label_2397a4;
        }
    }
    ctx->pc = 0x239710u;
    // 0x239710: 0xc065af8  jal         func_196BE0
    ctx->pc = 0x239710u;
    SET_GPR_U32(ctx, 31, 0x239718u);
    ctx->pc = 0x196BE0u;
    if (runtime->hasFunction(0x196BE0u)) {
        auto targetFn = runtime->lookupFunction(0x196BE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x239718u; }
        if (ctx->pc != 0x239718u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetUserDataMan__Fv_0x196be0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x239718u; }
        if (ctx->pc != 0x239718u) { return; }
    }
    ctx->pc = 0x239718u;
label_239718:
    // 0x239718: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x239718u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23971c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x23971cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x239720: 0xc066d14  jal         func_19B450
    ctx->pc = 0x239720u;
    SET_GPR_U32(ctx, 31, 0x239728u);
    ctx->pc = 0x239724u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x239720u;
            // 0x239724: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19B450u;
    if (runtime->hasFunction(0x19B450u)) {
        auto targetFn = runtime->lookupFunction(0x19B450u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x239728u; }
        if (ctx->pc != 0x239728u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetUsedDataPtr__16CUserDataManagerFi_0x19b450(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x239728u; }
        if (ctx->pc != 0x239728u) { return; }
    }
    ctx->pc = 0x239728u;
label_239728:
    // 0x239728: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x239728u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23972c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x23972cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x239730: 0xc068644  jal         func_1A1910
    ctx->pc = 0x239730u;
    SET_GPR_U32(ctx, 31, 0x239738u);
    ctx->pc = 0x239734u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x239730u;
            // 0x239734: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A1910u;
    if (runtime->hasFunction(0x1A1910u)) {
        auto targetFn = runtime->lookupFunction(0x1A1910u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x239738u; }
        if (ctx->pc != 0x239738u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetNowBagMax__Fi_0x1a1910(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x239738u; }
        if (ctx->pc != 0x239738u) { return; }
    }
    ctx->pc = 0x239738u;
label_239738:
    // 0x239738: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x239738u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23973c: 0x14082a  slt         $at, $zero, $s4
    ctx->pc = 0x23973cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
    // 0x239740: 0x1020000f  beqz        $at, . + 4 + (0xF << 2)
    ctx->pc = 0x239740u;
    {
        const bool branch_taken_0x239740 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x239744u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x239740u;
            // 0x239744: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x239740) {
            ctx->pc = 0x239780u;
            goto label_239780;
        }
    }
    ctx->pc = 0x239748u;
label_239748:
    // 0x239748: 0x82430004  lb          $v1, 0x4($s2)
    ctx->pc = 0x239748u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x23974c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x23974cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x239750: 0x14620006  bne         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x239750u;
    {
        const bool branch_taken_0x239750 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x239754u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x239750u;
            // 0x239754: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x239750) {
            ctx->pc = 0x23976Cu;
            goto label_23976c;
        }
    }
    ctx->pc = 0x239758u;
    // 0x239758: 0xc0664ac  jal         func_1992B0
    ctx->pc = 0x239758u;
    SET_GPR_U32(ctx, 31, 0x239760u);
    ctx->pc = 0x1992B0u;
    if (runtime->hasFunction(0x1992B0u)) {
        auto targetFn = runtime->lookupFunction(0x1992B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x239760u; }
        if (ctx->pc != 0x239760u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        IsFishingRod__13CGameDataUsedFv_0x1992b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x239760u; }
        if (ctx->pc != 0x239760u) { return; }
    }
    ctx->pc = 0x239760u;
label_239760:
    // 0x239760: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x239760u;
    {
        const bool branch_taken_0x239760 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x239760) {
            ctx->pc = 0x23976Cu;
            goto label_23976c;
        }
    }
    ctx->pc = 0x239768u;
    // 0x239768: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x239768u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_23976c:
    // 0x23976c: 0x0  nop
    ctx->pc = 0x23976cu;
    // NOP
    // 0x239770: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x239770u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x239774: 0x2b4102a  slt         $v0, $s5, $s4
    ctx->pc = 0x239774u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 21) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
    // 0x239778: 0x1440fff3  bnez        $v0, . + 4 + (-0xD << 2)
    ctx->pc = 0x239778u;
    {
        const bool branch_taken_0x239778 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23977Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x239778u;
            // 0x23977c: 0x2652006c  addiu       $s2, $s2, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 108));
        ctx->in_delay_slot = false;
        if (branch_taken_0x239778) {
            ctx->pc = 0x239748u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_239748;
        }
    }
    ctx->pc = 0x239780u;
label_239780:
    // 0x239780: 0x2a610002  slti        $at, $s3, 0x2
    ctx->pc = 0x239780u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x239784: 0x10200006  beqz        $at, . + 4 + (0x6 << 2)
    ctx->pc = 0x239784u;
    {
        const bool branch_taken_0x239784 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x239788u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x239784u;
            // 0x239788: 0x262440b8  addiu       $a0, $s1, 0x40B8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 16568));
        ctx->in_delay_slot = false;
        if (branch_taken_0x239784) {
            ctx->pc = 0x2397A0u;
            goto label_2397a0;
        }
    }
    ctx->pc = 0x23978Cu;
    // 0x23978c: 0xc0664ac  jal         func_1992B0
    ctx->pc = 0x23978Cu;
    SET_GPR_U32(ctx, 31, 0x239794u);
    ctx->pc = 0x1992B0u;
    if (runtime->hasFunction(0x1992B0u)) {
        auto targetFn = runtime->lookupFunction(0x1992B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x239794u; }
        if (ctx->pc != 0x239794u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        IsFishingRod__13CGameDataUsedFv_0x1992b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x239794u; }
        if (ctx->pc != 0x239794u) { return; }
    }
    ctx->pc = 0x239794u;
label_239794:
    // 0x239794: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x239794u;
    {
        const bool branch_taken_0x239794 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x239794) {
            ctx->pc = 0x2397A0u;
            goto label_2397a0;
        }
    }
    ctx->pc = 0x23979Cu;
    // 0x23979c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x23979cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2397a0:
    // 0x2397a0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2397a0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2397a4:
    // 0x2397a4: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x2397a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2397a8: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x2397a8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2397ac: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x2397acu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2397b0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2397b0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2397b4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2397b4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2397b8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2397b8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2397bc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2397bcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2397c0: 0x3e00008  jr          $ra
    ctx->pc = 0x2397C0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2397C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2397C0u;
            // 0x2397c4: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2397C8u;
}
