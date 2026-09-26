#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: InteriorMapJump__FP6CScenei
// Address: 0x2dfcf0 - 0x2dfdd4
void InteriorMapJump__FP6CScenei_0x2dfcf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("InteriorMapJump__FP6CScenei_0x2dfcf0");
#endif

    switch (ctx->pc) {
        case 0x2dfd14u: goto label_2dfd14;
        case 0x2dfd30u: goto label_2dfd30;
        case 0x2dfd44u: goto label_2dfd44;
        case 0x2dfd5cu: goto label_2dfd5c;
        case 0x2dfd74u: goto label_2dfd74;
        case 0x2dfd8cu: goto label_2dfd8c;
        case 0x2dfda4u: goto label_2dfda4;
        case 0x2dfdacu: goto label_2dfdac;
        default: break;
    }

    ctx->pc = 0x2dfcf0u;

    // 0x2dfcf0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2dfcf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2dfcf4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2dfcf4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dfcf8: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2dfcf8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2dfcfc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2dfcfcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2dfd00: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2dfd00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2dfd04: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2dfd04u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dfd08: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2dfd08u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dfd0c: 0xc0b7c6c  jal         func_2DF1B0
    ctx->pc = 0x2DFD0Cu;
    SET_GPR_U32(ctx, 31, 0x2DFD14u);
    ctx->pc = 0x2DFD10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DFD0Cu;
            // 0x2dfd10: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DF1B0u;
    if (runtime->hasFunction(0x2DF1B0u)) {
        auto targetFn = runtime->lookupFunction(0x2DF1B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DFD14u; }
        if (ctx->pc != 0x2DFD14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        LoadSubMap__FP6CSceneii_0x2df1b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DFD14u; }
        if (ctx->pc != 0x2DFD14u) { return; }
    }
    ctx->pc = 0x2DFD14u;
label_2dfd14:
    // 0x2dfd14: 0x10400029  beqz        $v0, . + 4 + (0x29 << 2)
    ctx->pc = 0x2DFD14u;
    {
        const bool branch_taken_0x2dfd14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DFD18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DFD14u;
            // 0x2dfd18: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dfd14) {
            ctx->pc = 0x2DFDBCu;
            goto label_2dfdbc;
        }
    }
    ctx->pc = 0x2DFD1Cu;
    // 0x2dfd1c: 0x3c0101f6  lui         $at, 0x1F6
    ctx->pc = 0x2dfd1cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)502 << 16));
    // 0x2dfd20: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2dfd20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dfd24: 0x8c268d70  lw          $a2, -0x7290($at)
    ctx->pc = 0x2dfd24u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294937968)));
    // 0x2dfd28: 0xc0a11b4  jal         func_2846D0
    ctx->pc = 0x2DFD28u;
    SET_GPR_U32(ctx, 31, 0x2DFD30u);
    ctx->pc = 0x2DFD2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DFD28u;
            // 0x2dfd2c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2846D0u;
    if (runtime->hasFunction(0x2846D0u)) {
        auto targetFn = runtime->lookupFunction(0x2846D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DFD30u; }
        if (ctx->pc != 0x2DFD30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetActive__6CSceneFii_0x2846d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DFD30u; }
        if (ctx->pc != 0x2DFD30u) { return; }
    }
    ctx->pc = 0x2DFD30u;
label_2dfd30:
    // 0x2dfd30: 0x3c0101f6  lui         $at, 0x1F6
    ctx->pc = 0x2dfd30u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)502 << 16));
    // 0x2dfd34: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2dfd34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dfd38: 0x8c268d50  lw          $a2, -0x72B0($at)
    ctx->pc = 0x2dfd38u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294937936)));
    // 0x2dfd3c: 0xc0a11c0  jal         func_284700
    ctx->pc = 0x2DFD3Cu;
    SET_GPR_U32(ctx, 31, 0x2DFD44u);
    ctx->pc = 0x2DFD40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DFD3Cu;
            // 0x2dfd40: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x284700u;
    if (runtime->hasFunction(0x284700u)) {
        auto targetFn = runtime->lookupFunction(0x284700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DFD44u; }
        if (ctx->pc != 0x2DFD44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ResetActive__6CSceneFii_0x284700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DFD44u; }
        if (ctx->pc != 0x2DFD44u) { return; }
    }
    ctx->pc = 0x2DFD44u;
label_2dfd44:
    // 0x2dfd44: 0x3c0101f6  lui         $at, 0x1F6
    ctx->pc = 0x2dfd44u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)502 << 16));
    // 0x2dfd48: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2dfd48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dfd4c: 0x8c228d70  lw          $v0, -0x7290($at)
    ctx->pc = 0x2dfd4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294937968)));
    // 0x2dfd50: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2dfd50u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dfd54: 0xc0b49e8  jal         func_2D27A0
    ctx->pc = 0x2DFD54u;
    SET_GPR_U32(ctx, 31, 0x2DFD5Cu);
    ctx->pc = 0x2DFD58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DFD54u;
            // 0x2dfd58: 0xae422e5c  sw          $v0, 0x2E5C($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 11868), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D27A0u;
    if (runtime->hasFunction(0x2D27A0u)) {
        auto targetFn = runtime->lookupFunction(0x2D27A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DFD5Cu; }
        if (ctx->pc != 0x2DFD5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetMapName__FiPPc_0x2d27a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DFD5Cu; }
        if (ctx->pc != 0x2DFD5Cu) { return; }
    }
    ctx->pc = 0x2DFD5Cu;
label_2dfd5c:
    // 0x2dfd5c: 0x3c0401f6  lui         $a0, 0x1F6
    ctx->pc = 0x2dfd5cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)502 << 16));
    // 0x2dfd60: 0x3c0501f6  lui         $a1, 0x1F6
    ctx->pc = 0x2dfd60u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)502 << 16));
    // 0x2dfd64: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2dfd64u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dfd68: 0x24848e90  addiu       $a0, $a0, -0x7170
    ctx->pc = 0x2dfd68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294938256));
    // 0x2dfd6c: 0xc04a3dc  jal         func_128F70
    ctx->pc = 0x2DFD6Cu;
    SET_GPR_U32(ctx, 31, 0x2DFD74u);
    ctx->pc = 0x2DFD70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DFD6Cu;
            // 0x2dfd70: 0x24a58ed0  addiu       $a1, $a1, -0x7130 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294938320));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128F70u;
    if (runtime->hasFunction(0x128F70u)) {
        auto targetFn = runtime->lookupFunction(0x128F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DFD74u; }
        if (ctx->pc != 0x2DFD74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcpy_0x128f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DFD74u; }
        if (ctx->pc != 0x2DFD74u) { return; }
    }
    ctx->pc = 0x2DFD74u;
label_2dfd74:
    // 0x2dfd74: 0x12000007  beqz        $s0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2DFD74u;
    {
        const bool branch_taken_0x2dfd74 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DFD78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DFD74u;
            // 0x2dfd78: 0x3c0101f6  lui         $at, 0x1F6 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)502 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dfd74) {
            ctx->pc = 0x2DFD94u;
            goto label_2dfd94;
        }
    }
    ctx->pc = 0x2DFD7Cu;
    // 0x2dfd7c: 0x3c0401f6  lui         $a0, 0x1F6
    ctx->pc = 0x2dfd7cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)502 << 16));
    // 0x2dfd80: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2dfd80u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dfd84: 0xc04a3dc  jal         func_128F70
    ctx->pc = 0x2DFD84u;
    SET_GPR_U32(ctx, 31, 0x2DFD8Cu);
    ctx->pc = 0x2DFD88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DFD84u;
            // 0x2dfd88: 0x24848ed0  addiu       $a0, $a0, -0x7130 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294938320));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128F70u;
    if (runtime->hasFunction(0x128F70u)) {
        auto targetFn = runtime->lookupFunction(0x128F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DFD8Cu; }
        if (ctx->pc != 0x2DFD8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcpy_0x128f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DFD8Cu; }
        if (ctx->pc != 0x2DFD8Cu) { return; }
    }
    ctx->pc = 0x2DFD8Cu;
label_2dfd8c:
    // 0x2dfd8c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2DFD8Cu;
    {
        const bool branch_taken_0x2dfd8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DFD90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DFD8Cu;
            // 0x2dfd90: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dfd8c) {
            ctx->pc = 0x2DFD9Cu;
            goto label_2dfd9c;
        }
    }
    ctx->pc = 0x2DFD94u;
label_2dfd94:
    // 0x2dfd94: 0xa0208ed0  sb          $zero, -0x7130($at)
    ctx->pc = 0x2dfd94u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294938320), (uint8_t)GPR_U32(ctx, 0));
    // 0x2dfd98: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2dfd98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2dfd9c:
    // 0x2dfd9c: 0xc0b7dbc  jal         func_2DF6F0
    ctx->pc = 0x2DFD9Cu;
    SET_GPR_U32(ctx, 31, 0x2DFDA4u);
    ctx->pc = 0x2DF6F0u;
    if (runtime->hasFunction(0x2DF6F0u)) {
        auto targetFn = runtime->lookupFunction(0x2DF6F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DFDA4u; }
        if (ctx->pc != 0x2DFDA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetInteriorDoorPos__FP6CScene_0x2df6f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DFDA4u; }
        if (ctx->pc != 0x2DFDA4u) { return; }
    }
    ctx->pc = 0x2DFDA4u;
label_2dfda4:
    // 0x2dfda4: 0xc0b7cdc  jal         func_2DF370
    ctx->pc = 0x2DFDA4u;
    SET_GPR_U32(ctx, 31, 0x2DFDACu);
    ctx->pc = 0x2DFDA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DFDA4u;
            // 0x2dfda8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DF370u;
    if (runtime->hasFunction(0x2DF370u)) {
        auto targetFn = runtime->lookupFunction(0x2DF370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DFDACu; }
        if (ctx->pc != 0x2DFDACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        LoadMapScript__FPc_0x2df370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DFDACu; }
        if (ctx->pc != 0x2DFDACu) { return; }
    }
    ctx->pc = 0x2DFDACu;
label_2dfdac:
    // 0x2dfdac: 0x8f839eb4  lw          $v1, -0x614C($gp)
    ctx->pc = 0x2dfdacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942388)));
    // 0x2dfdb0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2dfdb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2dfdb4: 0xaf839eb8  sw          $v1, -0x6148($gp)
    ctx->pc = 0x2dfdb4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294942392), GPR_U32(ctx, 3));
    // 0x2dfdb8: 0xaf919eb4  sw          $s1, -0x614C($gp)
    ctx->pc = 0x2dfdb8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294942388), GPR_U32(ctx, 17));
label_2dfdbc:
    // 0x2dfdbc: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2dfdbcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2dfdc0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2dfdc0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2dfdc4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2dfdc4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2dfdc8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2dfdc8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2dfdcc: 0x3e00008  jr          $ra
    ctx->pc = 0x2DFDCCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DFDD0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DFDCCu;
            // 0x2dfdd0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2DFDD4u;
}
