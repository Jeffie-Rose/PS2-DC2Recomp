#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: SubGameSaveInit__FP9mgCMemoryPii
// Address: 0x2c5b30 - 0x2c5f04
void SubGameSaveInit__FP9mgCMemoryPii_0x2c5b30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SubGameSaveInit__FP9mgCMemoryPii_0x2c5b30");
#endif

    switch (ctx->pc) {
        case 0x2c5b6cu: goto label_2c5b6c;
        case 0x2c5b94u: goto label_2c5b94;
        case 0x2c5ba8u: goto label_2c5ba8;
        case 0x2c5bb0u: goto label_2c5bb0;
        case 0x2c5bb8u: goto label_2c5bb8;
        case 0x2c5bc8u: goto label_2c5bc8;
        case 0x2c5bd4u: goto label_2c5bd4;
        case 0x2c5be4u: goto label_2c5be4;
        case 0x2c5bf4u: goto label_2c5bf4;
        case 0x2c5c00u: goto label_2c5c00;
        case 0x2c5c08u: goto label_2c5c08;
        case 0x2c5c1cu: goto label_2c5c1c;
        case 0x2c5c2cu: goto label_2c5c2c;
        case 0x2c5c38u: goto label_2c5c38;
        case 0x2c5c48u: goto label_2c5c48;
        case 0x2c5c5cu: goto label_2c5c5c;
        case 0x2c5ca4u: goto label_2c5ca4;
        case 0x2c5cc4u: goto label_2c5cc4;
        case 0x2c5cd8u: goto label_2c5cd8;
        case 0x2c5cfcu: goto label_2c5cfc;
        case 0x2c5d10u: goto label_2c5d10;
        case 0x2c5d28u: goto label_2c5d28;
        case 0x2c5d4cu: goto label_2c5d4c;
        case 0x2c5d54u: goto label_2c5d54;
        case 0x2c5d68u: goto label_2c5d68;
        case 0x2c5d7cu: goto label_2c5d7c;
        case 0x2c5da8u: goto label_2c5da8;
        case 0x2c5dbcu: goto label_2c5dbc;
        case 0x2c5dc4u: goto label_2c5dc4;
        case 0x2c5de0u: goto label_2c5de0;
        case 0x2c5df0u: goto label_2c5df0;
        case 0x2c5e04u: goto label_2c5e04;
        case 0x2c5e20u: goto label_2c5e20;
        case 0x2c5e40u: goto label_2c5e40;
        case 0x2c5e4cu: goto label_2c5e4c;
        case 0x2c5e70u: goto label_2c5e70;
        case 0x2c5e88u: goto label_2c5e88;
        case 0x2c5e9cu: goto label_2c5e9c;
        case 0x2c5eb0u: goto label_2c5eb0;
        case 0x2c5ec8u: goto label_2c5ec8;
        case 0x2c5ed0u: goto label_2c5ed0;
        case 0x2c5ee4u: goto label_2c5ee4;
        case 0x2c5ef0u: goto label_2c5ef0;
        default: break;
    }

    ctx->pc = 0x2c5b30u;

    // 0x2c5b30: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2c5b30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2c5b34: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2c5b34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2c5b38: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2c5b38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2c5b3c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2c5b3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2c5b40: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2c5b40u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c5b44: 0x8c830028  lw          $v1, 0x28($a0)
    ctx->pc = 0x2c5b44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
    // 0x2c5b48: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x2c5b48u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c5b4c: 0x8c850024  lw          $a1, 0x24($a0)
    ctx->pc = 0x2c5b4cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
    // 0x2c5b50: 0x8c820020  lw          $v0, 0x20($a0)
    ctx->pc = 0x2c5b50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x2c5b54: 0x653023  subu        $a2, $v1, $a1
    ctx->pc = 0x2c5b54u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x2c5b58: 0x51900  sll         $v1, $a1, 4
    ctx->pc = 0x2c5b58u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x2c5b5c: 0x3c0401f1  lui         $a0, 0x1F1
    ctx->pc = 0x2c5b5cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)497 << 16));
    // 0x2c5b60: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x2c5b60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2c5b64: 0xc04e79c  jal         func_139E70
    ctx->pc = 0x2C5B64u;
    SET_GPR_U32(ctx, 31, 0x2C5B6Cu);
    ctx->pc = 0x2C5B68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C5B64u;
            // 0x2c5b68: 0x2484d260  addiu       $a0, $a0, -0x2DA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955616));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139E70u;
    if (runtime->hasFunction(0x139E70u)) {
        auto targetFn = runtime->lookupFunction(0x139E70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C5B6Cu; }
        if (ctx->pc != 0x2C5B6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        stSetBuffer__9mgCMemoryFP1i_0x139e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C5B6Cu; }
        if (ctx->pc != 0x2C5B6Cu) { return; }
    }
    ctx->pc = 0x2C5B6Cu;
label_2c5b6c:
    // 0x2c5b6c: 0x2402001b  addiu       $v0, $zero, 0x1B
    ctx->pc = 0x2c5b6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
    // 0x2c5b70: 0x16020004  bne         $s0, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2C5B70u;
    {
        const bool branch_taken_0x2c5b70 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x2C5B74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C5B70u;
            // 0x2c5b74: 0x2402001a  addiu       $v0, $zero, 0x1A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c5b70) {
            ctx->pc = 0x2C5B84u;
            goto label_2c5b84;
        }
    }
    ctx->pc = 0x2C5B78u;
    // 0x2c5b78: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2c5b78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c5b7c: 0xa3829d20  sb          $v0, -0x62E0($gp)
    ctx->pc = 0x2c5b7cu;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294941984), (uint8_t)GPR_U32(ctx, 2));
    // 0x2c5b80: 0x2402001a  addiu       $v0, $zero, 0x1A
    ctx->pc = 0x2c5b80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
label_2c5b84:
    // 0x2c5b84: 0x1602000c  bne         $s0, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x2C5B84u;
    {
        const bool branch_taken_0x2c5b84 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x2c5b84) {
            ctx->pc = 0x2C5BB8u;
            goto label_2c5bb8;
        }
    }
    ctx->pc = 0x2C5B8Cu;
    // 0x2c5b8c: 0xc064268  jal         func_1909A0
    ctx->pc = 0x2C5B8Cu;
    SET_GPR_U32(ctx, 31, 0x2C5B94u);
    ctx->pc = 0x2C5B90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C5B8Cu;
            // 0x2c5b90: 0xa3809d20  sb          $zero, -0x62E0($gp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 28), 4294941984), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1909A0u;
    if (runtime->hasFunction(0x1909A0u)) {
        auto targetFn = runtime->lookupFunction(0x1909A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C5B94u; }
        if (ctx->pc != 0x2C5B94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetNowLoopNo__Fv_0x1909a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C5B94u; }
        if (ctx->pc != 0x2C5B94u) { return; }
    }
    ctx->pc = 0x2C5B94u;
label_2c5b94:
    // 0x2c5b94: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2c5b94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2c5b98: 0x14430007  bne         $v0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x2C5B98u;
    {
        const bool branch_taken_0x2c5b98 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x2c5b98) {
            ctx->pc = 0x2C5BB8u;
            goto label_2c5bb8;
        }
    }
    ctx->pc = 0x2C5BA0u;
    // 0x2c5ba0: 0xc064224  jal         func_190890
    ctx->pc = 0x2C5BA0u;
    SET_GPR_U32(ctx, 31, 0x2C5BA8u);
    ctx->pc = 0x190890u;
    if (runtime->hasFunction(0x190890u)) {
        auto targetFn = runtime->lookupFunction(0x190890u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C5BA8u; }
        if (ctx->pc != 0x2C5BA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetSubGameSaveData__Fv_0x190890(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C5BA8u; }
        if (ctx->pc != 0x2C5BA8u) { return; }
    }
    ctx->pc = 0x2C5BA8u;
label_2c5ba8:
    // 0x2c5ba8: 0xc0bdc74  jal         func_2F71D0
    ctx->pc = 0x2C5BA8u;
    SET_GPR_U32(ctx, 31, 0x2C5BB0u);
    ctx->pc = 0x2C5BACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C5BA8u;
            // 0x2c5bac: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F71D0u;
    if (runtime->hasFunction(0x2F71D0u)) {
        auto targetFn = runtime->lookupFunction(0x2F71D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C5BB0u; }
        if (ctx->pc != 0x2C5BB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetSphidaData__12CSubGameDataFv_0x2f71d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C5BB0u; }
        if (ctx->pc != 0x2C5BB0u) { return; }
    }
    ctx->pc = 0x2C5BB0u;
label_2c5bb0:
    // 0x2c5bb0: 0xc0bdb70  jal         func_2F6DC0
    ctx->pc = 0x2C5BB0u;
    SET_GPR_U32(ctx, 31, 0x2C5BB8u);
    ctx->pc = 0x2C5BB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C5BB0u;
            // 0x2c5bb4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F6DC0u;
    if (runtime->hasFunction(0x2F6DC0u)) {
        auto targetFn = runtime->lookupFunction(0x2F6DC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C5BB8u; }
        if (ctx->pc != 0x2C5BB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnterScore__11CSphidaDataFv_0x2f6dc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C5BB8u; }
        if (ctx->pc != 0x2C5BB8u) { return; }
    }
    ctx->pc = 0x2C5BB8u;
label_2c5bb8:
    // 0x2c5bb8: 0x3c0401f1  lui         $a0, 0x1F1
    ctx->pc = 0x2c5bb8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)497 << 16));
    // 0x2c5bbc: 0x24050112  addiu       $a1, $zero, 0x112
    ctx->pc = 0x2c5bbcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 274));
    // 0x2c5bc0: 0xc04e748  jal         func_139D20
    ctx->pc = 0x2C5BC0u;
    SET_GPR_U32(ctx, 31, 0x2C5BC8u);
    ctx->pc = 0x2C5BC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C5BC0u;
            // 0x2c5bc4: 0x2484d260  addiu       $a0, $a0, -0x2DA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955616));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139D20u;
    if (runtime->hasFunction(0x139D20u)) {
        auto targetFn = runtime->lookupFunction(0x139D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C5BC8u; }
        if (ctx->pc != 0x2C5BC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Alloc__9mgCMemoryFi_0x139d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C5BC8u; }
        if (ctx->pc != 0x2C5BC8u) { return; }
    }
    ctx->pc = 0x2C5BC8u;
label_2c5bc8:
    // 0x2c5bc8: 0x24041100  addiu       $a0, $zero, 0x1100
    ctx->pc = 0x2c5bc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4352));
    // 0x2c5bcc: 0xc04e638  jal         func_1398E0
    ctx->pc = 0x2C5BCCu;
    SET_GPR_U32(ctx, 31, 0x2C5BD4u);
    ctx->pc = 0x2C5BD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C5BCCu;
            // 0x2c5bd0: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1398E0u;
    if (runtime->hasFunction(0x1398E0u)) {
        auto targetFn = runtime->lookupFunction(0x1398E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C5BD4u; }
        if (ctx->pc != 0x2C5BD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___nw__FUiP1_0x1398e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C5BD4u; }
        if (ctx->pc != 0x2C5BD4u) { return; }
    }
    ctx->pc = 0x2C5BD4u;
label_2c5bd4:
    // 0x2c5bd4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2C5BD4u;
    {
        const bool branch_taken_0x2c5bd4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C5BD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C5BD4u;
            // 0x2c5bd8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c5bd4) {
            ctx->pc = 0x2C5BE4u;
            goto label_2c5be4;
        }
    }
    ctx->pc = 0x2C5BDCu;
    // 0x2c5bdc: 0xc0bc598  jal         func_2F1660
    ctx->pc = 0x2C5BDCu;
    SET_GPR_U32(ctx, 31, 0x2C5BE4u);
    ctx->pc = 0x2F1660u;
    if (runtime->hasFunction(0x2F1660u)) {
        auto targetFn = runtime->lookupFunction(0x2F1660u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C5BE4u; }
        if (ctx->pc != 0x2C5BE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___ct__18CMemoryCardManagerFv_0x2f1660(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C5BE4u; }
        if (ctx->pc != 0x2C5BE4u) { return; }
    }
    ctx->pc = 0x2C5BE4u;
label_2c5be4:
    // 0x2c5be4: 0xaf829cc4  sw          $v0, -0x633C($gp)
    ctx->pc = 0x2c5be4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294941892), GPR_U32(ctx, 2));
    // 0x2c5be8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2c5be8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c5bec: 0xc0bc5a4  jal         func_2F1690
    ctx->pc = 0x2C5BECu;
    SET_GPR_U32(ctx, 31, 0x2C5BF4u);
    ctx->pc = 0x2C5BF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C5BECu;
            // 0x2c5bf0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F1690u;
    if (runtime->hasFunction(0x2F1690u)) {
        auto targetFn = runtime->lookupFunction(0x2F1690u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C5BF4u; }
        if (ctx->pc != 0x2C5BF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Initialize__18CMemoryCardManagerFP9mgCMemory_0x2f1690(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C5BF4u; }
        if (ctx->pc != 0x2C5BF4u) { return; }
    }
    ctx->pc = 0x2C5BF4u;
label_2c5bf4:
    // 0x2c5bf4: 0x8f849cc4  lw          $a0, -0x633C($gp)
    ctx->pc = 0x2c5bf4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941892)));
    // 0x2c5bf8: 0xc0bc66c  jal         func_2F19B0
    ctx->pc = 0x2C5BF8u;
    SET_GPR_U32(ctx, 31, 0x2C5C00u);
    ctx->pc = 0x2C5BFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C5BF8u;
            // 0x2c5bfc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F19B0u;
    if (runtime->hasFunction(0x2F19B0u)) {
        auto targetFn = runtime->lookupFunction(0x2F19B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C5C00u; }
        if (ctx->pc != 0x2C5C00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetBuff_Album__18CMemoryCardManagerFPc_0x2f19b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C5C00u; }
        if (ctx->pc != 0x2C5C00u) { return; }
    }
    ctx->pc = 0x2C5C00u;
label_2c5c00:
    // 0x2c5c00: 0xc0bc650  jal         func_2F1940
    ctx->pc = 0x2C5C00u;
    SET_GPR_U32(ctx, 31, 0x2C5C08u);
    ctx->pc = 0x2C5C04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C5C00u;
            // 0x2c5c04: 0x8f849cc4  lw          $a0, -0x633C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941892)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F1940u;
    if (runtime->hasFunction(0x2F1940u)) {
        auto targetFn = runtime->lookupFunction(0x2F1940u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C5C08u; }
        if (ctx->pc != 0x2C5C08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        InitForMC__18CMemoryCardManagerFv_0x2f1940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C5C08u; }
        if (ctx->pc != 0x2C5C08u) { return; }
    }
    ctx->pc = 0x2C5C08u;
label_2c5c08:
    // 0x2c5c08: 0x8f829cc4  lw          $v0, -0x633C($gp)
    ctx->pc = 0x2c5c08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941892)));
    // 0x2c5c0c: 0xac4004c8  sw          $zero, 0x4C8($v0)
    ctx->pc = 0x2c5c0cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1224), GPR_U32(ctx, 0));
    // 0x2c5c10: 0x8f849cc4  lw          $a0, -0x633C($gp)
    ctx->pc = 0x2c5c10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941892)));
    // 0x2c5c14: 0xc0bc740  jal         func_2F1D00
    ctx->pc = 0x2C5C14u;
    SET_GPR_U32(ctx, 31, 0x2C5C1Cu);
    ctx->pc = 0x2C5C18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C5C14u;
            // 0x2c5c18: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F1D00u;
    if (runtime->hasFunction(0x2F1D00u)) {
        auto targetFn = runtime->lookupFunction(0x2F1D00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C5C1Cu; }
        if (ctx->pc != 0x2C5C1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetFuncNo__18CMemoryCardManagerFi_0x2f1d00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C5C1Cu; }
        if (ctx->pc != 0x2C5C1Cu) { return; }
    }
    ctx->pc = 0x2C5C1Cu;
label_2c5c1c:
    // 0x2c5c1c: 0x3c0401f1  lui         $a0, 0x1F1
    ctx->pc = 0x2c5c1cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)497 << 16));
    // 0x2c5c20: 0x24050549  addiu       $a1, $zero, 0x549
    ctx->pc = 0x2c5c20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1353));
    // 0x2c5c24: 0xc04e748  jal         func_139D20
    ctx->pc = 0x2C5C24u;
    SET_GPR_U32(ctx, 31, 0x2C5C2Cu);
    ctx->pc = 0x2C5C28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C5C24u;
            // 0x2c5c28: 0x2484d260  addiu       $a0, $a0, -0x2DA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955616));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139D20u;
    if (runtime->hasFunction(0x139D20u)) {
        auto targetFn = runtime->lookupFunction(0x139D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C5C2Cu; }
        if (ctx->pc != 0x2C5C2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Alloc__9mgCMemoryFi_0x139d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C5C2Cu; }
        if (ctx->pc != 0x2C5C2Cu) { return; }
    }
    ctx->pc = 0x2C5C2Cu;
label_2c5c2c:
    // 0x2c5c2c: 0x24045470  addiu       $a0, $zero, 0x5470
    ctx->pc = 0x2c5c2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 21616));
    // 0x2c5c30: 0xc04e638  jal         func_1398E0
    ctx->pc = 0x2C5C30u;
    SET_GPR_U32(ctx, 31, 0x2C5C38u);
    ctx->pc = 0x2C5C34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C5C30u;
            // 0x2c5c34: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1398E0u;
    if (runtime->hasFunction(0x1398E0u)) {
        auto targetFn = runtime->lookupFunction(0x1398E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C5C38u; }
        if (ctx->pc != 0x2C5C38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___nw__FUiP1_0x1398e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C5C38u; }
        if (ctx->pc != 0x2C5C38u) { return; }
    }
    ctx->pc = 0x2C5C38u;
label_2c5c38:
    // 0x2c5c38: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2C5C38u;
    {
        const bool branch_taken_0x2c5c38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C5C3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C5C38u;
            // 0x2c5c3c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c5c38) {
            ctx->pc = 0x2C5C48u;
            goto label_2c5c48;
        }
    }
    ctx->pc = 0x2C5C40u;
    // 0x2c5c40: 0xc0bdc40  jal         func_2F7100
    ctx->pc = 0x2C5C40u;
    SET_GPR_U32(ctx, 31, 0x2C5C48u);
    ctx->pc = 0x2F7100u;
    if (runtime->hasFunction(0x2F7100u)) {
        auto targetFn = runtime->lookupFunction(0x2F7100u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C5C48u; }
        if (ctx->pc != 0x2C5C48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___ct__12CSubGameDataFv_0x2f7100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C5C48u; }
        if (ctx->pc != 0x2C5C48u) { return; }
    }
    ctx->pc = 0x2C5C48u;
label_2c5c48:
    // 0x2c5c48: 0x8f839cc4  lw          $v1, -0x633C($gp)
    ctx->pc = 0x2c5c48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941892)));
    // 0x2c5c4c: 0x3c0401f1  lui         $a0, 0x1F1
    ctx->pc = 0x2c5c4cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)497 << 16));
    // 0x2c5c50: 0x2484d260  addiu       $a0, $a0, -0x2DA0
    ctx->pc = 0x2c5c50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955616));
    // 0x2c5c54: 0xc04e780  jal         func_139E00
    ctx->pc = 0x2C5C54u;
    SET_GPR_U32(ctx, 31, 0x2C5C5Cu);
    ctx->pc = 0x2C5C58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C5C54u;
            // 0x2c5c58: 0xac6208f0  sw          $v0, 0x8F0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 2288), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139E00u;
    if (runtime->hasFunction(0x139E00u)) {
        auto targetFn = runtime->lookupFunction(0x139E00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C5C5Cu; }
        if (ctx->pc != 0x2C5C5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Align64__9mgCMemoryFv_0x139e00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C5C5Cu; }
        if (ctx->pc != 0x2C5C5Cu) { return; }
    }
    ctx->pc = 0x2C5C5Cu;
label_2c5c5c:
    // 0x2c5c5c: 0xa3809d2c  sb          $zero, -0x62D4($gp)
    ctx->pc = 0x2c5c5cu;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294941996), (uint8_t)GPR_U32(ctx, 0));
    // 0x2c5c60: 0x3c0101f1  lui         $at, 0x1F1
    ctx->pc = 0x2c5c60u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)497 << 16));
    // 0x2c5c64: 0x8c23d284  lw          $v1, -0x2D7C($at)
    ctx->pc = 0x2c5c64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294955652)));
    // 0x2c5c68: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x2c5c68u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
    // 0x2c5c6c: 0x86250000  lh          $a1, 0x0($s1)
    ctx->pc = 0x2c5c6cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2c5c70: 0x2484fe68  addiu       $a0, $a0, -0x198
    ctx->pc = 0x2c5c70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966888));
    // 0x2c5c74: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2c5c74u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c5c78: 0x3c0101f1  lui         $at, 0x1F1
    ctx->pc = 0x2c5c78u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)497 << 16));
    // 0x2c5c7c: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x2c5c7cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x2c5c80: 0xa7859d30  sh          $a1, -0x62D0($gp)
    ctx->pc = 0x2c5c80u;
    WRITE16(ADD32(GPR_U32(ctx, 28), 4294942000), (uint16_t)GPR_U32(ctx, 5));
    // 0x2c5c84: 0x8c22d280  lw          $v0, -0x2D80($at)
    ctx->pc = 0x2c5c84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294955648)));
    // 0x2c5c88: 0x86270004  lh          $a3, 0x4($s1)
    ctx->pc = 0x2c5c88u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x2c5c8c: 0x438021  addu        $s0, $v0, $v1
    ctx->pc = 0x2c5c8cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2c5c90: 0xa7879d32  sh          $a3, -0x62CE($gp)
    ctx->pc = 0x2c5c90u;
    WRITE16(ADD32(GPR_U32(ctx, 28), 4294942002), (uint16_t)GPR_U32(ctx, 7));
    // 0x2c5c94: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2c5c94u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c5c98: 0x86220008  lh          $v0, 0x8($s1)
    ctx->pc = 0x2c5c98u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x2c5c9c: 0xc094440  jal         func_251100
    ctx->pc = 0x2C5C9Cu;
    SET_GPR_U32(ctx, 31, 0x2C5CA4u);
    ctx->pc = 0x2C5CA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C5C9Cu;
            // 0x2c5ca0: 0xa7829d34  sh          $v0, -0x62CC($gp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 28), 4294942004), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x251100u;
    if (runtime->hasFunction(0x251100u)) {
        auto targetFn = runtime->lookupFunction(0x251100u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C5CA4u; }
        if (ctx->pc != 0x2C5CA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        LoadFileMenu__FPcP1i_0x251100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C5CA4u; }
        if (ctx->pc != 0x2C5CA4u) { return; }
    }
    ctx->pc = 0x2C5CA4u;
label_2c5ca4:
    // 0x2c5ca4: 0x3043000f  andi        $v1, $v0, 0xF
    ctx->pc = 0x2c5ca4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x2c5ca8: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2C5CA8u;
    {
        const bool branch_taken_0x2c5ca8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C5CACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C5CA8u;
            // 0x2c5cac: 0x22902  srl         $a1, $v0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c5ca8) {
            ctx->pc = 0x2C5CB8u;
            goto label_2c5cb8;
        }
    }
    ctx->pc = 0x2C5CB0u;
    // 0x2c5cb0: 0x21102  srl         $v0, $v0, 4
    ctx->pc = 0x2c5cb0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 4));
    // 0x2c5cb4: 0x24450001  addiu       $a1, $v0, 0x1
    ctx->pc = 0x2c5cb4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_2c5cb8:
    // 0x2c5cb8: 0x3c0401f1  lui         $a0, 0x1F1
    ctx->pc = 0x2c5cb8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)497 << 16));
    // 0x2c5cbc: 0xc04e748  jal         func_139D20
    ctx->pc = 0x2C5CBCu;
    SET_GPR_U32(ctx, 31, 0x2C5CC4u);
    ctx->pc = 0x2C5CC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C5CBCu;
            // 0x2c5cc0: 0x2484d260  addiu       $a0, $a0, -0x2DA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955616));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139D20u;
    if (runtime->hasFunction(0x139D20u)) {
        auto targetFn = runtime->lookupFunction(0x139D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C5CC4u; }
        if (ctx->pc != 0x2C5CC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Alloc__9mgCMemoryFi_0x139d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C5CC4u; }
        if (ctx->pc != 0x2C5CC4u) { return; }
    }
    ctx->pc = 0x2C5CC4u;
label_2c5cc4:
    // 0x2c5cc4: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x2c5cc4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x2c5cc8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2c5cc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c5ccc: 0x24a5fd08  addiu       $a1, $a1, -0x2F8
    ctx->pc = 0x2c5cccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294966536));
    // 0x2c5cd0: 0xc052734  jal         func_149CD0
    ctx->pc = 0x2C5CD0u;
    SET_GPR_U32(ctx, 31, 0x2C5CD8u);
    ctx->pc = 0x2C5CD4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C5CD0u;
            // 0x2c5cd4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x149CD0u;
    if (runtime->hasFunction(0x149CD0u)) {
        auto targetFn = runtime->lookupFunction(0x149CD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C5CD8u; }
        if (ctx->pc != 0x2C5CD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPackFile__FPUiPcPi_0x149cd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C5CD8u; }
        if (ctx->pc != 0x2C5CD8u) { return; }
    }
    ctx->pc = 0x2C5CD8u;
label_2c5cd8:
    // 0x2c5cd8: 0x3c110038  lui         $s1, 0x38
    ctx->pc = 0x2c5cd8u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)56 << 16));
    // 0x2c5cdc: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2C5CDCu;
    {
        const bool branch_taken_0x2c5cdc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C5CE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C5CDCu;
            // 0x2c5ce0: 0x26311ef0  addiu       $s1, $s1, 0x1EF0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 7920));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c5cdc) {
            ctx->pc = 0x2C5CFCu;
            goto label_2c5cfc;
        }
    }
    ctx->pc = 0x2C5CE4u;
    // 0x2c5ce4: 0x87869d30  lh          $a2, -0x62D0($gp)
    ctx->pc = 0x2c5ce4u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294942000)));
    // 0x2c5ce8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2c5ce8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c5cec: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2c5cecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c5cf0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2c5cf0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c5cf4: 0xc04b6a4  jal         func_12DA90
    ctx->pc = 0x2C5CF4u;
    SET_GPR_U32(ctx, 31, 0x2C5CFCu);
    ctx->pc = 0x2C5CF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C5CF4u;
            // 0x2c5cf8: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12DA90u;
    if (runtime->hasFunction(0x12DA90u)) {
        auto targetFn = runtime->lookupFunction(0x12DA90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C5CFCu; }
        if (ctx->pc != 0x2C5CFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnterIMGFile__17mgCTextureManagerFPUciP9mgCMemoryP15mgCEnterIMGInfo_0x12da90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C5CFCu; }
        if (ctx->pc != 0x2C5CFCu) { return; }
    }
    ctx->pc = 0x2C5CFCu;
label_2c5cfc:
    // 0x2c5cfc: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x2c5cfcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x2c5d00: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2c5d00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c5d04: 0x24a5fd38  addiu       $a1, $a1, -0x2C8
    ctx->pc = 0x2c5d04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294966584));
    // 0x2c5d08: 0xc052734  jal         func_149CD0
    ctx->pc = 0x2C5D08u;
    SET_GPR_U32(ctx, 31, 0x2C5D10u);
    ctx->pc = 0x2C5D0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C5D08u;
            // 0x2c5d0c: 0x27869d48  addiu       $a2, $gp, -0x62B8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 28), 4294942024));
        ctx->in_delay_slot = false;
    ctx->pc = 0x149CD0u;
    if (runtime->hasFunction(0x149CD0u)) {
        auto targetFn = runtime->lookupFunction(0x149CD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C5D10u; }
        if (ctx->pc != 0x2C5D10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPackFile__FPUiPcPi_0x149cd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C5D10u; }
        if (ctx->pc != 0x2C5D10u) { return; }
    }
    ctx->pc = 0x2C5D10u;
label_2c5d10:
    // 0x2c5d10: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x2c5d10u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x2c5d14: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2c5d14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c5d18: 0xaf829d44  sw          $v0, -0x62BC($gp)
    ctx->pc = 0x2c5d18u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294942020), GPR_U32(ctx, 2));
    // 0x2c5d1c: 0x24a5fd20  addiu       $a1, $a1, -0x2E0
    ctx->pc = 0x2c5d1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294966560));
    // 0x2c5d20: 0xc04b414  jal         func_12D050
    ctx->pc = 0x2C5D20u;
    SET_GPR_U32(ctx, 31, 0x2C5D28u);
    ctx->pc = 0x2C5D24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C5D20u;
            // 0x2c5d24: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12D050u;
    if (runtime->hasFunction(0x12D050u)) {
        auto targetFn = runtime->lookupFunction(0x12D050u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C5D28u; }
        if (ctx->pc != 0x2C5D28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetTexture__17mgCTextureManagerFPci_0x12d050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C5D28u; }
        if (ctx->pc != 0x2C5D28u) { return; }
    }
    ctx->pc = 0x2C5D28u;
label_2c5d28:
    // 0x2c5d28: 0xaf829d10  sw          $v0, -0x62F0($gp)
    ctx->pc = 0x2c5d28u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294941968), GPR_U32(ctx, 2));
    // 0x2c5d2c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2c5d2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c5d30: 0x8f8294f8  lw          $v0, -0x6B08($gp)
    ctx->pc = 0x2c5d30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939896)));
    // 0x2c5d34: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2c5d34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c5d38: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x2c5d38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2c5d3c: 0xa0430001  sb          $v1, 0x1($v0)
    ctx->pc = 0x2c5d3cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x2c5d40: 0xa7809d24  sh          $zero, -0x62DC($gp)
    ctx->pc = 0x2c5d40u;
    WRITE16(ADD32(GPR_U32(ctx, 28), 4294941988), (uint16_t)GPR_U32(ctx, 0));
    // 0x2c5d44: 0xc0b13ec  jal         func_2C4FB0
    ctx->pc = 0x2C5D44u;
    SET_GPR_U32(ctx, 31, 0x2C5D4Cu);
    ctx->pc = 0x2C5D48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C5D44u;
            // 0x2c5d48: 0xa7809d28  sh          $zero, -0x62D8($gp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 28), 4294941992), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C4FB0u;
    if (runtime->hasFunction(0x2C4FB0u)) {
        auto targetFn = runtime->lookupFunction(0x2C4FB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C5D4Cu; }
        if (ctx->pc != 0x2C5D4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetMCIconData__FPUii_0x2c4fb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C5D4Cu; }
        if (ctx->pc != 0x2C5D4Cu) { return; }
    }
    ctx->pc = 0x2C5D4Cu;
label_2c5d4c:
    // 0x2c5d4c: 0xc08d1bc  jal         func_2346F0
    ctx->pc = 0x2C5D4Cu;
    SET_GPR_U32(ctx, 31, 0x2C5D54u);
    ctx->pc = 0x2346F0u;
    if (runtime->hasFunction(0x2346F0u)) {
        auto targetFn = runtime->lookupFunction(0x2346F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C5D54u; }
        if (ctx->pc != 0x2C5D54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetMenuMainMessageBuffer__Fv_0x2346f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C5D54u; }
        if (ctx->pc != 0x2C5D54u) { return; }
    }
    ctx->pc = 0x2C5D54u;
label_2c5d54:
    // 0x2c5d54: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x2c5d54u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x2c5d58: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2c5d58u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c5d5c: 0x8c24ca40  lw          $a0, -0x35C0($at)
    ctx->pc = 0x2c5d5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294953536)));
    // 0x2c5d60: 0xc0874d8  jal         func_21D360
    ctx->pc = 0x2C5D60u;
    SET_GPR_U32(ctx, 31, 0x2C5D68u);
    ctx->pc = 0x2C5D64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C5D60u;
            // 0x2c5d64: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21D360u;
    if (runtime->hasFunction(0x21D360u)) {
        auto targetFn = runtime->lookupFunction(0x21D360u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C5D68u; }
        if (ctx->pc != 0x2C5D68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetMessData__7CDC2MesFPsPs_0x21d360(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C5D68u; }
        if (ctx->pc != 0x2C5D68u) { return; }
    }
    ctx->pc = 0x2C5D68u;
label_2c5d68:
    // 0x2c5d68: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x2c5d68u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x2c5d6c: 0x8f868ad0  lw          $a2, -0x7530($gp)
    ctx->pc = 0x2c5d6cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937296)));
    // 0x2c5d70: 0x8c24ca40  lw          $a0, -0x35C0($at)
    ctx->pc = 0x2c5d70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294953536)));
    // 0x2c5d74: 0xc0875a0  jal         func_21D680
    ctx->pc = 0x2C5D74u;
    SET_GPR_U32(ctx, 31, 0x2C5D7Cu);
    ctx->pc = 0x2C5D78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C5D74u;
            // 0x2c5d78: 0x24050012  addiu       $a1, $zero, 0x12 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21D680u;
    if (runtime->hasFunction(0x21D680u)) {
        auto targetFn = runtime->lookupFunction(0x21D680u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C5D7Cu; }
        if (ctx->pc != 0x2C5D7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MsgPreset__7CDC2MesFii_0x21d680(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C5D7Cu; }
        if (ctx->pc != 0x2C5D7Cu) { return; }
    }
    ctx->pc = 0x2C5D7Cu;
label_2c5d7c:
    // 0x2c5d7c: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x2c5d7cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x2c5d80: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x2c5d80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2c5d84: 0x8c22ca40  lw          $v0, -0x35C0($at)
    ctx->pc = 0x2c5d84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294953536)));
    // 0x2c5d88: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x2c5d88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2c5d8c: 0xac43014c  sw          $v1, 0x14C($v0)
    ctx->pc = 0x2c5d8cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 332), GPR_U32(ctx, 3));
    // 0x2c5d90: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x2c5d90u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x2c5d94: 0x8c22ca40  lw          $v0, -0x35C0($at)
    ctx->pc = 0x2c5d94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294953536)));
    // 0x2c5d98: 0xac451b14  sw          $a1, 0x1B14($v0)
    ctx->pc = 0x2c5d98u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 6932), GPR_U32(ctx, 5));
    // 0x2c5d9c: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x2c5d9cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x2c5da0: 0xc0875b0  jal         func_21D6C0
    ctx->pc = 0x2C5DA0u;
    SET_GPR_U32(ctx, 31, 0x2C5DA8u);
    ctx->pc = 0x2C5DA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C5DA0u;
            // 0x2c5da4: 0x8c24ca40  lw          $a0, -0x35C0($at) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294953536)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21D6C0u;
    if (runtime->hasFunction(0x21D6C0u)) {
        auto targetFn = runtime->lookupFunction(0x21D6C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C5DA8u; }
        if (ctx->pc != 0x2C5DA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetMsgCursor__7CDC2MesFi_0x21d6c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C5DA8u; }
        if (ctx->pc != 0x2C5DA8u) { return; }
    }
    ctx->pc = 0x2C5DA8u;
label_2c5da8:
    // 0x2c5da8: 0x83829d20  lb          $v0, -0x62E0($gp)
    ctx->pc = 0x2c5da8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294941984)));
    // 0x2c5dac: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x2c5dacu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x2c5db0: 0x8c24ca40  lw          $a0, -0x35C0($at)
    ctx->pc = 0x2c5db0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294953536)));
    // 0x2c5db4: 0xc0877e0  jal         func_21DF80
    ctx->pc = 0x2C5DB4u;
    SET_GPR_U32(ctx, 31, 0x2C5DBCu);
    ctx->pc = 0x2C5DB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C5DB4u;
            // 0x2c5db8: 0x24450c4e  addiu       $a1, $v0, 0xC4E (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 3150));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21DF80u;
    if (runtime->hasFunction(0x21DF80u)) {
        auto targetFn = runtime->lookupFunction(0x21DF80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C5DBCu; }
        if (ctx->pc != 0x2C5DBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MakeMsg__7CDC2MesFi_0x21df80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C5DBCu; }
        if (ctx->pc != 0x2C5DBCu) { return; }
    }
    ctx->pc = 0x2C5DBCu;
label_2c5dbc:
    // 0x2c5dbc: 0xc064268  jal         func_1909A0
    ctx->pc = 0x2C5DBCu;
    SET_GPR_U32(ctx, 31, 0x2C5DC4u);
    ctx->pc = 0x1909A0u;
    if (runtime->hasFunction(0x1909A0u)) {
        auto targetFn = runtime->lookupFunction(0x1909A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C5DC4u; }
        if (ctx->pc != 0x2C5DC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetNowLoopNo__Fv_0x1909a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C5DC4u; }
        if (ctx->pc != 0x2C5DC4u) { return; }
    }
    ctx->pc = 0x2C5DC4u;
label_2c5dc4:
    // 0x2c5dc4: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2c5dc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2c5dc8: 0x14430005  bne         $v0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2C5DC8u;
    {
        const bool branch_taken_0x2c5dc8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x2c5dc8) {
            ctx->pc = 0x2C5DE0u;
            goto label_2c5de0;
        }
    }
    ctx->pc = 0x2C5DD0u;
    // 0x2c5dd0: 0x8f8294a4  lw          $v0, -0x6B5C($gp)
    ctx->pc = 0x2c5dd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939812)));
    // 0x2c5dd4: 0x24050028  addiu       $a1, $zero, 0x28
    ctx->pc = 0x2c5dd4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x2c5dd8: 0xc05f5fc  jal         func_17D7F0
    ctx->pc = 0x2C5DD8u;
    SET_GPR_U32(ctx, 31, 0x2C5DE0u);
    ctx->pc = 0x2C5DDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C5DD8u;
            // 0x2c5ddc: 0x24442c70  addiu       $a0, $v0, 0x2C70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 11376));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17D7F0u;
    if (runtime->hasFunction(0x17D7F0u)) {
        auto targetFn = runtime->lookupFunction(0x17D7F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C5DE0u; }
        if (ctx->pc != 0x2C5DE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FadeIn__10CFadeInOutFi_0x17d7f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C5DE0u; }
        if (ctx->pc != 0x2C5DE0u) { return; }
    }
    ctx->pc = 0x2C5DE0u;
label_2c5de0:
    // 0x2c5de0: 0x3c0401f1  lui         $a0, 0x1F1
    ctx->pc = 0x2c5de0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)497 << 16));
    // 0x2c5de4: 0x24051900  addiu       $a1, $zero, 0x1900
    ctx->pc = 0x2c5de4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6400));
    // 0x2c5de8: 0xc04e748  jal         func_139D20
    ctx->pc = 0x2C5DE8u;
    SET_GPR_U32(ctx, 31, 0x2C5DF0u);
    ctx->pc = 0x2C5DECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C5DE8u;
            // 0x2c5dec: 0x2484d260  addiu       $a0, $a0, -0x2DA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955616));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139D20u;
    if (runtime->hasFunction(0x139D20u)) {
        auto targetFn = runtime->lookupFunction(0x139D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C5DF0u; }
        if (ctx->pc != 0x2C5DF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Alloc__9mgCMemoryFi_0x139d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C5DF0u; }
        if (ctx->pc != 0x2C5DF0u) { return; }
    }
    ctx->pc = 0x2C5DF0u;
label_2c5df0:
    // 0x2c5df0: 0x8f849cc4  lw          $a0, -0x633C($gp)
    ctx->pc = 0x2c5df0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941892)));
    // 0x2c5df4: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x2c5df4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x2c5df8: 0xaf829ef8  sw          $v0, -0x6108($gp)
    ctx->pc = 0x2c5df8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294942456), GPR_U32(ctx, 2));
    // 0x2c5dfc: 0xc0bc6fc  jal         func_2F1BF0
    ctx->pc = 0x2C5DFCu;
    SET_GPR_U32(ctx, 31, 0x2C5E04u);
    ctx->pc = 0x2C5E00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C5DFCu;
            // 0x2c5e00: 0xaf809d40  sw          $zero, -0x62C0($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294942016), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F1BF0u;
    if (runtime->hasFunction(0x2F1BF0u)) {
        auto targetFn = runtime->lookupFunction(0x2F1BF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C5E04u; }
        if (ctx->pc != 0x2C5E04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetSaveDataSize__18CMemoryCardManagerFi_0x2f1bf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C5E04u; }
        if (ctx->pc != 0x2C5E04u) { return; }
    }
    ctx->pc = 0x2C5E04u;
label_2c5e04:
    // 0x2c5e04: 0xaf829d38  sw          $v0, -0x62C8($gp)
    ctx->pc = 0x2c5e04u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294942008), GPR_U32(ctx, 2));
    // 0x2c5e08: 0x3c0401f1  lui         $a0, 0x1F1
    ctx->pc = 0x2c5e08u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)497 << 16));
    // 0x2c5e0c: 0x8f829d38  lw          $v0, -0x62C8($gp)
    ctx->pc = 0x2c5e0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942008)));
    // 0x2c5e10: 0x2484d260  addiu       $a0, $a0, -0x2DA0
    ctx->pc = 0x2c5e10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955616));
    // 0x2c5e14: 0x24420003  addiu       $v0, $v0, 0x3
    ctx->pc = 0x2c5e14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3));
    // 0x2c5e18: 0xc04e780  jal         func_139E00
    ctx->pc = 0x2C5E18u;
    SET_GPR_U32(ctx, 31, 0x2C5E20u);
    ctx->pc = 0x2C5E1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C5E18u;
            // 0x2c5e1c: 0xaf829d3c  sw          $v0, -0x62C4($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294942012), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139E00u;
    if (runtime->hasFunction(0x139E00u)) {
        auto targetFn = runtime->lookupFunction(0x139E00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C5E20u; }
        if (ctx->pc != 0x2C5E20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Align64__9mgCMemoryFv_0x139e00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C5E20u; }
        if (ctx->pc != 0x2C5E20u) { return; }
    }
    ctx->pc = 0x2C5E20u;
label_2c5e20:
    // 0x2c5e20: 0x83839d20  lb          $v1, -0x62E0($gp)
    ctx->pc = 0x2c5e20u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294941984)));
    // 0x2c5e24: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2c5e24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c5e28: 0x14620017  bne         $v1, $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x2C5E28u;
    {
        const bool branch_taken_0x2c5e28 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2c5e28) {
            ctx->pc = 0x2C5E88u;
            goto label_2c5e88;
        }
    }
    ctx->pc = 0x2C5E30u;
    // 0x2c5e30: 0x8f8494a4  lw          $a0, -0x6B5C($gp)
    ctx->pc = 0x2c5e30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939812)));
    // 0x2c5e34: 0x3c0501f1  lui         $a1, 0x1F1
    ctx->pc = 0x2c5e34u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)497 << 16));
    // 0x2c5e38: 0xc0a9944  jal         func_2A6510
    ctx->pc = 0x2C5E38u;
    SET_GPR_U32(ctx, 31, 0x2C5E40u);
    ctx->pc = 0x2C5E3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C5E38u;
            // 0x2c5e3c: 0x24a5d2e0  addiu       $a1, $a1, -0x2D20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294955744));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A6510u;
    if (runtime->hasFunction(0x2A6510u)) {
        auto targetFn = runtime->lookupFunction(0x2A6510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C5E40u; }
        if (ctx->pc != 0x2C5E40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetActiveBgmStatus__6CSceneFPQ26CScene10BGM_STATUS_0x2a6510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C5E40u; }
        if (ctx->pc != 0x2C5E40u) { return; }
    }
    ctx->pc = 0x2C5E40u;
label_2c5e40:
    // 0x2c5e40: 0x8f8494a4  lw          $a0, -0x6B5C($gp)
    ctx->pc = 0x2c5e40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939812)));
    // 0x2c5e44: 0xc0a98a0  jal         func_2A6280
    ctx->pc = 0x2C5E44u;
    SET_GPR_U32(ctx, 31, 0x2C5E4Cu);
    ctx->pc = 0x2C5E48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C5E44u;
            // 0x2c5e48: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A6280u;
    if (runtime->hasFunction(0x2A6280u)) {
        auto targetFn = runtime->lookupFunction(0x2A6280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C5E4Cu; }
        if (ctx->pc != 0x2C5E4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        StopBGM__6CSceneFi_0x2a6280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C5E4Cu; }
        if (ctx->pc != 0x2C5E4Cu) { return; }
    }
    ctx->pc = 0x2C5E4Cu;
label_2c5e4c:
    // 0x2c5e4c: 0x3c0101f1  lui         $at, 0x1F1
    ctx->pc = 0x2c5e4cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)497 << 16));
    // 0x2c5e50: 0x8f8494a4  lw          $a0, -0x6B5C($gp)
    ctx->pc = 0x2c5e50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939812)));
    // 0x2c5e54: 0x8c23d284  lw          $v1, -0x2D7C($at)
    ctx->pc = 0x2c5e54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294955652)));
    // 0x2c5e58: 0x24050030  addiu       $a1, $zero, 0x30
    ctx->pc = 0x2c5e58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x2c5e5c: 0x3c0101f1  lui         $at, 0x1F1
    ctx->pc = 0x2c5e5cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)497 << 16));
    // 0x2c5e60: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x2c5e60u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x2c5e64: 0x8c22d280  lw          $v0, -0x2D80($at)
    ctx->pc = 0x2c5e64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294955648)));
    // 0x2c5e68: 0xc0a9be4  jal         func_2A6F90
    ctx->pc = 0x2C5E68u;
    SET_GPR_U32(ctx, 31, 0x2C5E70u);
    ctx->pc = 0x2C5E6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C5E68u;
            // 0x2c5e6c: 0x433021  addu        $a2, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A6F90u;
    if (runtime->hasFunction(0x2A6F90u)) {
        auto targetFn = runtime->lookupFunction(0x2A6F90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C5E70u; }
        if (ctx->pc != 0x2C5E70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        LoadBGM__6CSceneFiP1_0x2a6f90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C5E70u; }
        if (ctx->pc != 0x2C5E70u) { return; }
    }
    ctx->pc = 0x2C5E70u;
label_2c5e70:
    // 0x2c5e70: 0x8f8494a4  lw          $a0, -0x6B5C($gp)
    ctx->pc = 0x2c5e70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939812)));
    // 0x2c5e74: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2c5e74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2c5e78: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2c5e78u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2c5e7c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2c5e7cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c5e80: 0xc0a9844  jal         func_2A6110
    ctx->pc = 0x2C5E80u;
    SET_GPR_U32(ctx, 31, 0x2C5E88u);
    ctx->pc = 0x2C5E84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C5E80u;
            // 0x2c5e84: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A6110u;
    if (runtime->hasFunction(0x2A6110u)) {
        auto targetFn = runtime->lookupFunction(0x2A6110u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C5E88u; }
        if (ctx->pc != 0x2C5E88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        PlayBGM__6CSceneFiif_0x2a6110(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C5E88u; }
        if (ctx->pc != 0x2C5E88u) { return; }
    }
    ctx->pc = 0x2C5E88u;
label_2c5e88:
    // 0x2c5e88: 0x83829d20  lb          $v0, -0x62E0($gp)
    ctx->pc = 0x2c5e88u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294941984)));
    // 0x2c5e8c: 0x14400015  bnez        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x2C5E8Cu;
    {
        const bool branch_taken_0x2c5e8c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c5e8c) {
            ctx->pc = 0x2C5EE4u;
            goto label_2c5ee4;
        }
    }
    ctx->pc = 0x2C5E94u;
    // 0x2c5e94: 0xc064224  jal         func_190890
    ctx->pc = 0x2C5E94u;
    SET_GPR_U32(ctx, 31, 0x2C5E9Cu);
    ctx->pc = 0x190890u;
    if (runtime->hasFunction(0x190890u)) {
        auto targetFn = runtime->lookupFunction(0x190890u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C5E9Cu; }
        if (ctx->pc != 0x2C5E9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetSubGameSaveData__Fv_0x190890(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C5E9Cu; }
        if (ctx->pc != 0x2C5E9Cu) { return; }
    }
    ctx->pc = 0x2C5E9Cu;
label_2c5e9c:
    // 0x2c5e9c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2c5e9cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c5ea0: 0x12000010  beqz        $s0, . + 4 + (0x10 << 2)
    ctx->pc = 0x2C5EA0u;
    {
        const bool branch_taken_0x2c5ea0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c5ea0) {
            ctx->pc = 0x2C5EE4u;
            goto label_2c5ee4;
        }
    }
    ctx->pc = 0x2C5EA8u;
    // 0x2c5ea8: 0xc064268  jal         func_1909A0
    ctx->pc = 0x2C5EA8u;
    SET_GPR_U32(ctx, 31, 0x2C5EB0u);
    ctx->pc = 0x1909A0u;
    if (runtime->hasFunction(0x1909A0u)) {
        auto targetFn = runtime->lookupFunction(0x1909A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C5EB0u; }
        if (ctx->pc != 0x2C5EB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetNowLoopNo__Fv_0x1909a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C5EB0u; }
        if (ctx->pc != 0x2C5EB0u) { return; }
    }
    ctx->pc = 0x2C5EB0u;
label_2c5eb0:
    // 0x2c5eb0: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2c5eb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2c5eb4: 0x14430004  bne         $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2C5EB4u;
    {
        const bool branch_taken_0x2c5eb4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x2C5EB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C5EB4u;
            // 0x2c5eb8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c5eb4) {
            ctx->pc = 0x2C5EC8u;
            goto label_2c5ec8;
        }
    }
    ctx->pc = 0x2C5EBCu;
    // 0x2c5ebc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2c5ebcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c5ec0: 0xc0bdc64  jal         func_2F7190
    ctx->pc = 0x2C5EC0u;
    SET_GPR_U32(ctx, 31, 0x2C5EC8u);
    ctx->pc = 0x2C5EC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C5EC0u;
            // 0x2c5ec4: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F7190u;
    if (runtime->hasFunction(0x2F7190u)) {
        auto targetFn = runtime->lookupFunction(0x2F7190u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C5EC8u; }
        if (ctx->pc != 0x2C5EC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        PlayEnable__12CSubGameDataFii_0x2f7190(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C5EC8u; }
        if (ctx->pc != 0x2C5EC8u) { return; }
    }
    ctx->pc = 0x2C5EC8u;
label_2c5ec8:
    // 0x2c5ec8: 0xc064268  jal         func_1909A0
    ctx->pc = 0x2C5EC8u;
    SET_GPR_U32(ctx, 31, 0x2C5ED0u);
    ctx->pc = 0x1909A0u;
    if (runtime->hasFunction(0x1909A0u)) {
        auto targetFn = runtime->lookupFunction(0x1909A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C5ED0u; }
        if (ctx->pc != 0x2C5ED0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetNowLoopNo__Fv_0x1909a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C5ED0u; }
        if (ctx->pc != 0x2C5ED0u) { return; }
    }
    ctx->pc = 0x2C5ED0u;
label_2c5ed0:
    // 0x2c5ed0: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2c5ed0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c5ed4: 0x14460003  bne         $v0, $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x2C5ED4u;
    {
        const bool branch_taken_0x2c5ed4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 6));
        ctx->pc = 0x2C5ED8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C5ED4u;
            // 0x2c5ed8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c5ed4) {
            ctx->pc = 0x2C5EE4u;
            goto label_2c5ee4;
        }
    }
    ctx->pc = 0x2C5EDCu;
    // 0x2c5edc: 0xc0bdc64  jal         func_2F7190
    ctx->pc = 0x2C5EDCu;
    SET_GPR_U32(ctx, 31, 0x2C5EE4u);
    ctx->pc = 0x2C5EE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C5EDCu;
            // 0x2c5ee0: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F7190u;
    if (runtime->hasFunction(0x2F7190u)) {
        auto targetFn = runtime->lookupFunction(0x2F7190u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C5EE4u; }
        if (ctx->pc != 0x2C5EE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        PlayEnable__12CSubGameDataFii_0x2f7190(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C5EE4u; }
        if (ctx->pc != 0x2C5EE4u) { return; }
    }
    ctx->pc = 0x2C5EE4u;
label_2c5ee4:
    // 0x2c5ee4: 0x8f8294a4  lw          $v0, -0x6B5C($gp)
    ctx->pc = 0x2c5ee4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939812)));
    // 0x2c5ee8: 0xc05f5d4  jal         func_17D750
    ctx->pc = 0x2C5EE8u;
    SET_GPR_U32(ctx, 31, 0x2C5EF0u);
    ctx->pc = 0x2C5EECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C5EE8u;
            // 0x2c5eec: 0x24442c70  addiu       $a0, $v0, 0x2C70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 11376));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17D750u;
    if (runtime->hasFunction(0x17D750u)) {
        auto targetFn = runtime->lookupFunction(0x17D750u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C5EF0u; }
        if (ctx->pc != 0x2C5EF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Initialize__10CFadeInOutFv_0x17d750(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C5EF0u; }
        if (ctx->pc != 0x2C5EF0u) { return; }
    }
    ctx->pc = 0x2C5EF0u;
label_2c5ef0:
    // 0x2c5ef0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2c5ef0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2c5ef4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2c5ef4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c5ef8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2c5ef8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c5efc: 0x3e00008  jr          $ra
    ctx->pc = 0x2C5EFCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C5F00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C5EFCu;
            // 0x2c5f00: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2C5F04u;
}
