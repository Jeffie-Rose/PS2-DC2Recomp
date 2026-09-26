#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GameDataSwap__FP13CGameDataUsedP13CGameDataUsedi
// Address: 0x196e80 - 0x196ff4
void GameDataSwap__FP13CGameDataUsedP13CGameDataUsedi_0x196e80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GameDataSwap__FP13CGameDataUsedP13CGameDataUsedi_0x196e80");
#endif

    switch (ctx->pc) {
        case 0x196ec4u: goto label_196ec4;
        case 0x196ed0u: goto label_196ed0;
        case 0x196edcu: goto label_196edc;
        case 0x196ee8u: goto label_196ee8;
        case 0x196efcu: goto label_196efc;
        case 0x196f1cu: goto label_196f1c;
        case 0x196f28u: goto label_196f28;
        case 0x196f40u: goto label_196f40;
        case 0x196f48u: goto label_196f48;
        case 0x196f58u: goto label_196f58;
        case 0x196f68u: goto label_196f68;
        case 0x196f70u: goto label_196f70;
        case 0x196f80u: goto label_196f80;
        case 0x196f94u: goto label_196f94;
        case 0x196fc0u: goto label_196fc0;
        case 0x196fd8u: goto label_196fd8;
        default: break;
    }

    ctx->pc = 0x196e80u;

    // 0x196e80: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x196e80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x196e84: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x196e84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x196e88: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x196e88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x196e8c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x196e8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x196e90: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x196e90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x196e94: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x196e94u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x196e98: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x196e98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x196e9c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x196e9cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x196ea0: 0x1220004d  beqz        $s1, . + 4 + (0x4D << 2)
    ctx->pc = 0x196EA0u;
    {
        const bool branch_taken_0x196ea0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x196EA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x196EA0u;
            // 0x196ea4: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x196ea0) {
            ctx->pc = 0x196FD8u;
            goto label_196fd8;
        }
    }
    ctx->pc = 0x196EA8u;
    // 0x196ea8: 0x16000004  bnez        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x196EA8u;
    {
        const bool branch_taken_0x196ea8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x196EACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x196EA8u;
            // 0x196eac: 0x27a40050  addiu       $a0, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x196ea8) {
            ctx->pc = 0x196EBCu;
            goto label_196ebc;
        }
    }
    ctx->pc = 0x196EB0u;
    // 0x196eb0: 0x1000004a  b           . + 4 + (0x4A << 2)
    ctx->pc = 0x196EB0u;
    {
        const bool branch_taken_0x196eb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x196EB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x196EB0u;
            // 0x196eb4: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x196eb0) {
            ctx->pc = 0x196FDCu;
            goto label_196fdc;
        }
    }
    ctx->pc = 0x196EB8u;
    // 0x196eb8: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x196eb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_196ebc:
    // 0x196ebc: 0xc065c24  jal         func_197090
    ctx->pc = 0x196EBCu;
    SET_GPR_U32(ctx, 31, 0x196EC4u);
    ctx->pc = 0x197090u;
    if (runtime->hasFunction(0x197090u)) {
        auto targetFn = runtime->lookupFunction(0x197090u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x196EC4u; }
        if (ctx->pc != 0x196EC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___ct__13CGameDataUsedFv_0x197090(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x196EC4u; }
        if (ctx->pc != 0x196EC4u) { return; }
    }
    ctx->pc = 0x196EC4u;
label_196ec4:
    // 0x196ec4: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x196ec4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x196ec8: 0xc06666c  jal         func_1999B0
    ctx->pc = 0x196EC8u;
    SET_GPR_U32(ctx, 31, 0x196ED0u);
    ctx->pc = 0x196ECCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x196EC8u;
            // 0x196ecc: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1999B0u;
    if (runtime->hasFunction(0x1999B0u)) {
        auto targetFn = runtime->lookupFunction(0x1999B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x196ED0u; }
        if (ctx->pc != 0x196ED0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CopyGameData__13CGameDataUsedFP13CGameDataUsed_0x1999b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x196ED0u; }
        if (ctx->pc != 0x196ED0u) { return; }
    }
    ctx->pc = 0x196ED0u;
label_196ed0:
    // 0x196ed0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x196ed0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x196ed4: 0xc06666c  jal         func_1999B0
    ctx->pc = 0x196ED4u;
    SET_GPR_U32(ctx, 31, 0x196EDCu);
    ctx->pc = 0x196ED8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x196ED4u;
            // 0x196ed8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1999B0u;
    if (runtime->hasFunction(0x1999B0u)) {
        auto targetFn = runtime->lookupFunction(0x1999B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x196EDCu; }
        if (ctx->pc != 0x196EDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CopyGameData__13CGameDataUsedFP13CGameDataUsed_0x1999b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x196EDCu; }
        if (ctx->pc != 0x196EDCu) { return; }
    }
    ctx->pc = 0x196EDCu;
label_196edc:
    // 0x196edc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x196edcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x196ee0: 0xc06666c  jal         func_1999B0
    ctx->pc = 0x196EE0u;
    SET_GPR_U32(ctx, 31, 0x196EE8u);
    ctx->pc = 0x196EE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x196EE0u;
            // 0x196ee4: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1999B0u;
    if (runtime->hasFunction(0x1999B0u)) {
        auto targetFn = runtime->lookupFunction(0x1999B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x196EE8u; }
        if (ctx->pc != 0x196EE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CopyGameData__13CGameDataUsedFP13CGameDataUsed_0x1999b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x196EE8u; }
        if (ctx->pc != 0x196EE8u) { return; }
    }
    ctx->pc = 0x196EE8u;
label_196ee8:
    // 0x196ee8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x196ee8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x196eec: 0x1643003a  bne         $s2, $v1, . + 4 + (0x3A << 2)
    ctx->pc = 0x196EECu;
    {
        const bool branch_taken_0x196eec = (GPR_U64(ctx, 18) != GPR_U64(ctx, 3));
        if (branch_taken_0x196eec) {
            ctx->pc = 0x196FD8u;
            goto label_196fd8;
        }
    }
    ctx->pc = 0x196EF4u;
    // 0x196ef4: 0xc065af8  jal         func_196BE0
    ctx->pc = 0x196EF4u;
    SET_GPR_U32(ctx, 31, 0x196EFCu);
    ctx->pc = 0x196BE0u;
    if (runtime->hasFunction(0x196BE0u)) {
        auto targetFn = runtime->lookupFunction(0x196BE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x196EFCu; }
        if (ctx->pc != 0x196EFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetUserDataMan__Fv_0x196be0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x196EFCu; }
        if (ctx->pc != 0x196EFCu) { return; }
    }
    ctx->pc = 0x196EFCu;
label_196efc:
    // 0x196efc: 0x245340b8  addiu       $s3, $v0, 0x40B8
    ctx->pc = 0x196efcu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 16568));
    // 0x196f00: 0x12710004  beq         $s3, $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x196F00u;
    {
        const bool branch_taken_0x196f00 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 17));
        ctx->pc = 0x196F04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x196F00u;
            // 0x196f04: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x196f00) {
            ctx->pc = 0x196F14u;
            goto label_196f14;
        }
    }
    ctx->pc = 0x196F08u;
    // 0x196f08: 0x16700020  bne         $s3, $s0, . + 4 + (0x20 << 2)
    ctx->pc = 0x196F08u;
    {
        const bool branch_taken_0x196f08 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 16));
        ctx->pc = 0x196F0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x196F08u;
            // 0x196f0c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x196f08) {
            ctx->pc = 0x196F8Cu;
            goto label_196f8c;
        }
    }
    ctx->pc = 0x196F10u;
    // 0x196f10: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x196f10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_196f14:
    // 0x196f14: 0xc0664ac  jal         func_1992B0
    ctx->pc = 0x196F14u;
    SET_GPR_U32(ctx, 31, 0x196F1Cu);
    ctx->pc = 0x1992B0u;
    if (runtime->hasFunction(0x1992B0u)) {
        auto targetFn = runtime->lookupFunction(0x1992B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x196F1Cu; }
        if (ctx->pc != 0x196F1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        IsFishingRod__13CGameDataUsedFv_0x1992b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x196F1Cu; }
        if (ctx->pc != 0x196F1Cu) { return; }
    }
    ctx->pc = 0x196F1Cu;
label_196f1c:
    // 0x196f1c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x196f1cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x196f20: 0xc0664ac  jal         func_1992B0
    ctx->pc = 0x196F20u;
    SET_GPR_U32(ctx, 31, 0x196F28u);
    ctx->pc = 0x196F24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x196F20u;
            // 0x196f24: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1992B0u;
    if (runtime->hasFunction(0x1992B0u)) {
        auto targetFn = runtime->lookupFunction(0x1992B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x196F28u; }
        if (ctx->pc != 0x196F28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        IsFishingRod__13CGameDataUsedFv_0x1992b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x196F28u; }
        if (ctx->pc != 0x196F28u) { return; }
    }
    ctx->pc = 0x196F28u;
label_196f28:
    // 0x196f28: 0x12420017  beq         $s2, $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x196F28u;
    {
        const bool branch_taken_0x196f28 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        if (branch_taken_0x196f28) {
            ctx->pc = 0x196F88u;
            goto label_196f88;
        }
    }
    ctx->pc = 0x196F30u;
    // 0x196f30: 0x16710009  bne         $s3, $s1, . + 4 + (0x9 << 2)
    ctx->pc = 0x196F30u;
    {
        const bool branch_taken_0x196f30 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 17));
        if (branch_taken_0x196f30) {
            ctx->pc = 0x196F58u;
            goto label_196f58;
        }
    }
    ctx->pc = 0x196F38u;
    // 0x196f38: 0xc065b84  jal         func_196E10
    ctx->pc = 0x196F38u;
    SET_GPR_U32(ctx, 31, 0x196F40u);
    ctx->pc = 0x196F3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x196F38u;
            // 0x196f3c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x196E10u;
    if (runtime->hasFunction(0x196E10u)) {
        auto targetFn = runtime->lookupFunction(0x196E10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x196F40u; }
        if (ctx->pc != 0x196F40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetFishingGamePreEquip__FP13CGameDataUsed_0x196e10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x196F40u; }
        if (ctx->pc != 0x196F40u) { return; }
    }
    ctx->pc = 0x196F40u;
label_196f40:
    // 0x196f40: 0xc0664ac  jal         func_1992B0
    ctx->pc = 0x196F40u;
    SET_GPR_U32(ctx, 31, 0x196F48u);
    ctx->pc = 0x196F44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x196F40u;
            // 0x196f44: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1992B0u;
    if (runtime->hasFunction(0x1992B0u)) {
        auto targetFn = runtime->lookupFunction(0x1992B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x196F48u; }
        if (ctx->pc != 0x196F48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        IsFishingRod__13CGameDataUsedFv_0x1992b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x196F48u; }
        if (ctx->pc != 0x196F48u) { return; }
    }
    ctx->pc = 0x196F48u;
label_196f48:
    // 0x196f48: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x196F48u;
    {
        const bool branch_taken_0x196f48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x196f48) {
            ctx->pc = 0x196F58u;
            goto label_196f58;
        }
    }
    ctx->pc = 0x196F50u;
    // 0x196f50: 0xc065b84  jal         func_196E10
    ctx->pc = 0x196F50u;
    SET_GPR_U32(ctx, 31, 0x196F58u);
    ctx->pc = 0x196F54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x196F50u;
            // 0x196f54: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x196E10u;
    if (runtime->hasFunction(0x196E10u)) {
        auto targetFn = runtime->lookupFunction(0x196E10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x196F58u; }
        if (ctx->pc != 0x196F58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetFishingGamePreEquip__FP13CGameDataUsed_0x196e10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x196F58u; }
        if (ctx->pc != 0x196F58u) { return; }
    }
    ctx->pc = 0x196F58u;
label_196f58:
    // 0x196f58: 0x1670001f  bne         $s3, $s0, . + 4 + (0x1F << 2)
    ctx->pc = 0x196F58u;
    {
        const bool branch_taken_0x196f58 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 16));
        if (branch_taken_0x196f58) {
            ctx->pc = 0x196FD8u;
            goto label_196fd8;
        }
    }
    ctx->pc = 0x196F60u;
    // 0x196f60: 0xc065b84  jal         func_196E10
    ctx->pc = 0x196F60u;
    SET_GPR_U32(ctx, 31, 0x196F68u);
    ctx->pc = 0x196F64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x196F60u;
            // 0x196f64: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x196E10u;
    if (runtime->hasFunction(0x196E10u)) {
        auto targetFn = runtime->lookupFunction(0x196E10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x196F68u; }
        if (ctx->pc != 0x196F68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetFishingGamePreEquip__FP13CGameDataUsed_0x196e10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x196F68u; }
        if (ctx->pc != 0x196F68u) { return; }
    }
    ctx->pc = 0x196F68u;
label_196f68:
    // 0x196f68: 0xc0664ac  jal         func_1992B0
    ctx->pc = 0x196F68u;
    SET_GPR_U32(ctx, 31, 0x196F70u);
    ctx->pc = 0x196F6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x196F68u;
            // 0x196f6c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1992B0u;
    if (runtime->hasFunction(0x1992B0u)) {
        auto targetFn = runtime->lookupFunction(0x1992B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x196F70u; }
        if (ctx->pc != 0x196F70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        IsFishingRod__13CGameDataUsedFv_0x1992b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x196F70u; }
        if (ctx->pc != 0x196F70u) { return; }
    }
    ctx->pc = 0x196F70u;
label_196f70:
    // 0x196f70: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x196F70u;
    {
        const bool branch_taken_0x196f70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x196f70) {
            ctx->pc = 0x196FD8u;
            goto label_196fd8;
        }
    }
    ctx->pc = 0x196F78u;
    // 0x196f78: 0xc065b84  jal         func_196E10
    ctx->pc = 0x196F78u;
    SET_GPR_U32(ctx, 31, 0x196F80u);
    ctx->pc = 0x196F7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x196F78u;
            // 0x196f7c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x196E10u;
    if (runtime->hasFunction(0x196E10u)) {
        auto targetFn = runtime->lookupFunction(0x196E10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x196F80u; }
        if (ctx->pc != 0x196F80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetFishingGamePreEquip__FP13CGameDataUsed_0x196e10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x196F80u; }
        if (ctx->pc != 0x196F80u) { return; }
    }
    ctx->pc = 0x196F80u;
label_196f80:
    // 0x196f80: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x196F80u;
    {
        const bool branch_taken_0x196f80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x196f80) {
            ctx->pc = 0x196FD8u;
            goto label_196fd8;
        }
    }
    ctx->pc = 0x196F88u;
label_196f88:
    // 0x196f88: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x196f88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_196f8c:
    // 0x196f8c: 0xc0664ac  jal         func_1992B0
    ctx->pc = 0x196F8Cu;
    SET_GPR_U32(ctx, 31, 0x196F94u);
    ctx->pc = 0x1992B0u;
    if (runtime->hasFunction(0x1992B0u)) {
        auto targetFn = runtime->lookupFunction(0x1992B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x196F94u; }
        if (ctx->pc != 0x196F94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        IsFishingRod__13CGameDataUsedFv_0x1992b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x196F94u; }
        if (ctx->pc != 0x196F94u) { return; }
    }
    ctx->pc = 0x196F94u;
label_196f94:
    // 0x196f94: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x196F94u;
    {
        const bool branch_taken_0x196f94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x196f94) {
            ctx->pc = 0x196FD8u;
            goto label_196fd8;
        }
    }
    ctx->pc = 0x196F9Cu;
    // 0x196f9c: 0x8f838b7c  lw          $v1, -0x7484($gp)
    ctx->pc = 0x196f9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937468)));
    // 0x196fa0: 0x12230003  beq         $s1, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x196FA0u;
    {
        const bool branch_taken_0x196fa0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 3));
        if (branch_taken_0x196fa0) {
            ctx->pc = 0x196FB0u;
            goto label_196fb0;
        }
    }
    ctx->pc = 0x196FA8u;
    // 0x196fa8: 0x1603000b  bne         $s0, $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x196FA8u;
    {
        const bool branch_taken_0x196fa8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 3));
        if (branch_taken_0x196fa8) {
            ctx->pc = 0x196FD8u;
            goto label_196fd8;
        }
    }
    ctx->pc = 0x196FB0u;
label_196fb0:
    // 0x196fb0: 0x16230005  bne         $s1, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x196FB0u;
    {
        const bool branch_taken_0x196fb0 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 3));
        if (branch_taken_0x196fb0) {
            ctx->pc = 0x196FC8u;
            goto label_196fc8;
        }
    }
    ctx->pc = 0x196FB8u;
    // 0x196fb8: 0xc065b84  jal         func_196E10
    ctx->pc = 0x196FB8u;
    SET_GPR_U32(ctx, 31, 0x196FC0u);
    ctx->pc = 0x196FBCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x196FB8u;
            // 0x196fbc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x196E10u;
    if (runtime->hasFunction(0x196E10u)) {
        auto targetFn = runtime->lookupFunction(0x196E10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x196FC0u; }
        if (ctx->pc != 0x196FC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetFishingGamePreEquip__FP13CGameDataUsed_0x196e10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x196FC0u; }
        if (ctx->pc != 0x196FC0u) { return; }
    }
    ctx->pc = 0x196FC0u;
label_196fc0:
    // 0x196fc0: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x196FC0u;
    {
        const bool branch_taken_0x196fc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x196fc0) {
            ctx->pc = 0x196FD8u;
            goto label_196fd8;
        }
    }
    ctx->pc = 0x196FC8u;
label_196fc8:
    // 0x196fc8: 0x16030003  bne         $s0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x196FC8u;
    {
        const bool branch_taken_0x196fc8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 3));
        if (branch_taken_0x196fc8) {
            ctx->pc = 0x196FD8u;
            goto label_196fd8;
        }
    }
    ctx->pc = 0x196FD0u;
    // 0x196fd0: 0xc065b84  jal         func_196E10
    ctx->pc = 0x196FD0u;
    SET_GPR_U32(ctx, 31, 0x196FD8u);
    ctx->pc = 0x196FD4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x196FD0u;
            // 0x196fd4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x196E10u;
    if (runtime->hasFunction(0x196E10u)) {
        auto targetFn = runtime->lookupFunction(0x196E10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x196FD8u; }
        if (ctx->pc != 0x196FD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetFishingGamePreEquip__FP13CGameDataUsed_0x196e10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x196FD8u; }
        if (ctx->pc != 0x196FD8u) { return; }
    }
    ctx->pc = 0x196FD8u;
label_196fd8:
    // 0x196fd8: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x196fd8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_196fdc:
    // 0x196fdc: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x196fdcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x196fe0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x196fe0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x196fe4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x196fe4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x196fe8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x196fe8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x196fec: 0x3e00008  jr          $ra
    ctx->pc = 0x196FECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x196FF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x196FECu;
            // 0x196ff0: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x196FF4u;
}
