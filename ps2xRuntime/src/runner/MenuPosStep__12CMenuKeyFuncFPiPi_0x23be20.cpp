#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: MenuPosStep__12CMenuKeyFuncFPiPi
// Address: 0x23be20 - 0x23bffc
void MenuPosStep__12CMenuKeyFuncFPiPi_0x23be20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("MenuPosStep__12CMenuKeyFuncFPiPi_0x23be20");
#endif

    switch (ctx->pc) {
        case 0x23be4cu: goto label_23be4c;
        case 0x23be58u: goto label_23be58;
        case 0x23bea8u: goto label_23bea8;
        case 0x23beb8u: goto label_23beb8;
        case 0x23bed8u: goto label_23bed8;
        case 0x23bf28u: goto label_23bf28;
        case 0x23bf48u: goto label_23bf48;
        case 0x23bf68u: goto label_23bf68;
        case 0x23bf98u: goto label_23bf98;
        case 0x23bfd4u: goto label_23bfd4;
        default: break;
    }

    ctx->pc = 0x23be20u;

    // 0x23be20: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x23be20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x23be24: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x23be24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x23be28: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x23be28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x23be2c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x23be2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x23be30: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x23be30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x23be34: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x23be34u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23be38: 0x8c84013c  lw          $a0, 0x13C($a0)
    ctx->pc = 0x23be38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 316)));
    // 0x23be3c: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x23BE3Cu;
    {
        const bool branch_taken_0x23be3c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x23BE40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23BE3Cu;
            // 0x23be40: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23be3c) {
            ctx->pc = 0x23BE58u;
            goto label_23be58;
        }
    }
    ctx->pc = 0x23BE44u;
    // 0x23be44: 0xc08a264  jal         func_228990
    ctx->pc = 0x23BE44u;
    SET_GPR_U32(ctx, 31, 0x23BE4Cu);
    ctx->pc = 0x23BE48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23BE44u;
            // 0x23be48: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x228990u;
    if (runtime->hasFunction(0x228990u)) {
        auto targetFn = runtime->lookupFunction(0x228990u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23BE4Cu; }
        if (ctx->pc != 0x23BE4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetNextMovePos__16CMenuPosDataFormFPii_0x228990(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23BE4Cu; }
        if (ctx->pc != 0x23BE4Cu) { return; }
    }
    ctx->pc = 0x23BE4Cu;
label_23be4c:
    // 0x23be4c: 0x8e24013c  lw          $a0, 0x13C($s1)
    ctx->pc = 0x23be4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 316)));
    // 0x23be50: 0xc08a26c  jal         func_2289B0
    ctx->pc = 0x23BE50u;
    SET_GPR_U32(ctx, 31, 0x23BE58u);
    ctx->pc = 0x23BE54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23BE50u;
            // 0x23be54: 0x27a50048  addiu       $a1, $sp, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2289B0u;
    if (runtime->hasFunction(0x2289B0u)) {
        auto targetFn = runtime->lookupFunction(0x2289B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23BE58u; }
        if (ctx->pc != 0x23BE58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetNextMovePos__16CMenuPosDataFormFPi_0x2289b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23BE58u; }
        if (ctx->pc != 0x23BE58u) { return; }
    }
    ctx->pc = 0x23BE58u;
label_23be58:
    // 0x23be58: 0xdf829660  ld          $v0, -0x69A0($gp)
    ctx->pc = 0x23be58u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294940256)));
    // 0x23be5c: 0x27a30050  addiu       $v1, $sp, 0x50
    ctx->pc = 0x23be5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x23be60: 0xfc620000  sd          $v0, 0x0($v1)
    ctx->pc = 0x23be60u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 2));
    // 0x23be64: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x23be64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x23be68: 0x8fa2004c  lw          $v0, 0x4C($sp)
    ctx->pc = 0x23be68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x23be6c: 0xafa30050  sw          $v1, 0x50($sp)
    ctx->pc = 0x23be6cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 3));
    // 0x23be70: 0x12000009  beqz        $s0, . + 4 + (0x9 << 2)
    ctx->pc = 0x23BE70u;
    {
        const bool branch_taken_0x23be70 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x23BE74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23BE70u;
            // 0x23be74: 0xafa20054  sw          $v0, 0x54($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23be70) {
            ctx->pc = 0x23BE98u;
            goto label_23be98;
        }
    }
    ctx->pc = 0x23BE78u;
    // 0x23be78: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x23be78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x23be7c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x23be7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x23be80: 0x8fa30054  lw          $v1, 0x54($sp)
    ctx->pc = 0x23be80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
    // 0x23be84: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x23be84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x23be88: 0xafa20050  sw          $v0, 0x50($sp)
    ctx->pc = 0x23be88u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 2));
    // 0x23be8c: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x23be8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x23be90: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x23be90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x23be94: 0xafa20054  sw          $v0, 0x54($sp)
    ctx->pc = 0x23be94u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 2));
label_23be98:
    // 0x23be98: 0x8e240138  lw          $a0, 0x138($s1)
    ctx->pc = 0x23be98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 312)));
    // 0x23be9c: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x23be9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x23bea0: 0xc08a264  jal         func_228990
    ctx->pc = 0x23BEA0u;
    SET_GPR_U32(ctx, 31, 0x23BEA8u);
    ctx->pc = 0x23BEA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23BEA0u;
            // 0x23bea4: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x228990u;
    if (runtime->hasFunction(0x228990u)) {
        auto targetFn = runtime->lookupFunction(0x228990u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23BEA8u; }
        if (ctx->pc != 0x23BEA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetNextMovePos__16CMenuPosDataFormFPii_0x228990(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23BEA8u; }
        if (ctx->pc != 0x23BEA8u) { return; }
    }
    ctx->pc = 0x23BEA8u;
label_23bea8:
    // 0x23bea8: 0x8fa50050  lw          $a1, 0x50($sp)
    ctx->pc = 0x23bea8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x23beac: 0x8fa60054  lw          $a2, 0x54($sp)
    ctx->pc = 0x23beacu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
    // 0x23beb0: 0xc08a210  jal         func_228840
    ctx->pc = 0x23BEB0u;
    SET_GPR_U32(ctx, 31, 0x23BEB8u);
    ctx->pc = 0x23BEB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23BEB0u;
            // 0x23beb4: 0x8e240138  lw          $a0, 0x138($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 312)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x228840u;
    if (runtime->hasFunction(0x228840u)) {
        auto targetFn = runtime->lookupFunction(0x228840u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23BEB8u; }
        if (ctx->pc != 0x23BEB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckMoveEnd__16CMenuPosDataFormFii_0x228840(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23BEB8u; }
        if (ctx->pc != 0x23BEB8u) { return; }
    }
    ctx->pc = 0x23BEB8u;
label_23beb8:
    // 0x23beb8: 0x8e240138  lw          $a0, 0x138($s1)
    ctx->pc = 0x23beb8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 312)));
    // 0x23bebc: 0x27b2005c  addiu       $s2, $sp, 0x5C
    ctx->pc = 0x23bebcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 92));
    // 0x23bec0: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x23bec0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x23bec4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x23bec4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23bec8: 0x24a5abe8  addiu       $a1, $a1, -0x5418
    ctx->pc = 0x23bec8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294945768));
    // 0x23becc: 0x27a60058  addiu       $a2, $sp, 0x58
    ctx->pc = 0x23beccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 88));
    // 0x23bed0: 0xc08974c  jal         func_225D30
    ctx->pc = 0x23BED0u;
    SET_GPR_U32(ctx, 31, 0x23BED8u);
    ctx->pc = 0x23BED4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23BED0u;
            // 0x23bed4: 0x240382d  daddu       $a3, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x225D30u;
    if (runtime->hasFunction(0x225D30u)) {
        auto targetFn = runtime->lookupFunction(0x225D30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23BED8u; }
        if (ctx->pc != 0x23BED8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPutPosXY__16CMenuPosDataFormFPcRiRi_0x225d30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23BED8u; }
        if (ctx->pc != 0x23BED8u) { return; }
    }
    ctx->pc = 0x23BED8u;
label_23bed8:
    // 0x23bed8: 0x8e240140  lw          $a0, 0x140($s1)
    ctx->pc = 0x23bed8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 320)));
    // 0x23bedc: 0x1080000c  beqz        $a0, . + 4 + (0xC << 2)
    ctx->pc = 0x23BEDCu;
    {
        const bool branch_taken_0x23bedc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x23bedc) {
            ctx->pc = 0x23BF10u;
            goto label_23bf10;
        }
    }
    ctx->pc = 0x23BEE4u;
    // 0x23bee4: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x23bee4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x23bee8: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x23bee8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x23beec: 0x2442000a  addiu       $v0, $v0, 0xA
    ctx->pc = 0x23beecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10));
    // 0x23bef0: 0x24630028  addiu       $v1, $v1, 0x28
    ctx->pc = 0x23bef0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 40));
    // 0x23bef4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x23bef4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x23bef8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x23bef8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23befc: 0x0  nop
    ctx->pc = 0x23befcu;
    // NOP
    // 0x23bf00: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x23bf00u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x23bf04: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x23bf04u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x23bf08: 0xe481000c  swc1        $f1, 0xC($a0)
    ctx->pc = 0x23bf08u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
    // 0x23bf0c: 0xe4800010  swc1        $f0, 0x10($a0)
    ctx->pc = 0x23bf0cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 16), bits); }
label_23bf10:
    // 0x23bf10: 0x862200c2  lh          $v0, 0xC2($s1)
    ctx->pc = 0x23bf10u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 194)));
    // 0x23bf14: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x23BF14u;
    {
        const bool branch_taken_0x23bf14 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x23BF18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23BF14u;
            // 0x23bf18: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23bf14) {
            ctx->pc = 0x23BF28u;
            goto label_23bf28;
        }
    }
    ctx->pc = 0x23BF1Cu;
    // 0x23bf1c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x23bf1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x23bf20: 0xc08fa94  jal         func_23EA50
    ctx->pc = 0x23BF20u;
    SET_GPR_U32(ctx, 31, 0x23BF28u);
    ctx->pc = 0x23BF24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23BF20u;
            // 0x23bf24: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23EA50u;
    if (runtime->hasFunction(0x23EA50u)) {
        auto targetFn = runtime->lookupFunction(0x23EA50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23BF28u; }
        if (ctx->pc != 0x23BF28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetHaveItemInfo__12CMenuKeyFuncFii_0x23ea50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23BF28u; }
        if (ctx->pc != 0x23BF28u) { return; }
    }
    ctx->pc = 0x23BF28u;
label_23bf28:
    // 0x23bf28: 0x8e240140  lw          $a0, 0x140($s1)
    ctx->pc = 0x23bf28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 320)));
    // 0x23bf2c: 0x24060060  addiu       $a2, $zero, 0x60
    ctx->pc = 0x23bf2cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x23bf30: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x23bf30u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x23bf34: 0x24090080  addiu       $t1, $zero, 0x80
    ctx->pc = 0x23bf34u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x23bf38: 0x24a5ac38  addiu       $a1, $a1, -0x53C8
    ctx->pc = 0x23bf38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294945848));
    // 0x23bf3c: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x23bf3cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23bf40: 0xc089734  jal         func_225CD0
    ctx->pc = 0x23BF40u;
    SET_GPR_U32(ctx, 31, 0x23BF48u);
    ctx->pc = 0x23BF44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23BF40u;
            // 0x23bf44: 0xc0402d  daddu       $t0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x225CD0u;
    if (runtime->hasFunction(0x225CD0u)) {
        auto targetFn = runtime->lookupFunction(0x225CD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23BF48u; }
        if (ctx->pc != 0x23BF48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetPartRGBA__16CMenuPosDataFormFPciiii_0x225cd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23BF48u; }
        if (ctx->pc != 0x23BF48u) { return; }
    }
    ctx->pc = 0x23BF48u;
label_23bf48:
    // 0x23bf48: 0x8e240140  lw          $a0, 0x140($s1)
    ctx->pc = 0x23bf48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 320)));
    // 0x23bf4c: 0x24060060  addiu       $a2, $zero, 0x60
    ctx->pc = 0x23bf4cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x23bf50: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x23bf50u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x23bf54: 0x24090080  addiu       $t1, $zero, 0x80
    ctx->pc = 0x23bf54u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x23bf58: 0x24a5ac40  addiu       $a1, $a1, -0x53C0
    ctx->pc = 0x23bf58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294945856));
    // 0x23bf5c: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x23bf5cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23bf60: 0xc089734  jal         func_225CD0
    ctx->pc = 0x23BF60u;
    SET_GPR_U32(ctx, 31, 0x23BF68u);
    ctx->pc = 0x23BF64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23BF60u;
            // 0x23bf64: 0xc0402d  daddu       $t0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x225CD0u;
    if (runtime->hasFunction(0x225CD0u)) {
        auto targetFn = runtime->lookupFunction(0x225CD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23BF68u; }
        if (ctx->pc != 0x23BF68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetPartRGBA__16CMenuPosDataFormFPciiii_0x225cd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23BF68u; }
        if (ctx->pc != 0x23BF68u) { return; }
    }
    ctx->pc = 0x23BF68u;
label_23bf68:
    // 0x23bf68: 0x8622005c  lh          $v0, 0x5C($s1)
    ctx->pc = 0x23bf68u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 92)));
    // 0x23bf6c: 0x2082a  slt         $at, $zero, $v0
    ctx->pc = 0x23bf6cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x23bf70: 0x1020000c  beqz        $at, . + 4 + (0xC << 2)
    ctx->pc = 0x23BF70u;
    {
        const bool branch_taken_0x23bf70 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x23bf70) {
            ctx->pc = 0x23BFA4u;
            goto label_23bfa4;
        }
    }
    ctx->pc = 0x23BF78u;
    // 0x23bf78: 0x8e240140  lw          $a0, 0x140($s1)
    ctx->pc = 0x23bf78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 320)));
    // 0x23bf7c: 0x24060080  addiu       $a2, $zero, 0x80
    ctx->pc = 0x23bf7cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x23bf80: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x23bf80u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x23bf84: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x23bf84u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23bf88: 0x24a5ac38  addiu       $a1, $a1, -0x53C8
    ctx->pc = 0x23bf88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294945848));
    // 0x23bf8c: 0xc0402d  daddu       $t0, $a2, $zero
    ctx->pc = 0x23bf8cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23bf90: 0xc089734  jal         func_225CD0
    ctx->pc = 0x23BF90u;
    SET_GPR_U32(ctx, 31, 0x23BF98u);
    ctx->pc = 0x23BF94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23BF90u;
            // 0x23bf94: 0xc0482d  daddu       $t1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x225CD0u;
    if (runtime->hasFunction(0x225CD0u)) {
        auto targetFn = runtime->lookupFunction(0x225CD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23BF98u; }
        if (ctx->pc != 0x23BF98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetPartRGBA__16CMenuPosDataFormFPciiii_0x225cd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23BF98u; }
        if (ctx->pc != 0x23BF98u) { return; }
    }
    ctx->pc = 0x23BF98u;
label_23bf98:
    // 0x23bf98: 0x8622005c  lh          $v0, 0x5C($s1)
    ctx->pc = 0x23bf98u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 92)));
    // 0x23bf9c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x23bf9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x23bfa0: 0xa622005c  sh          $v0, 0x5C($s1)
    ctx->pc = 0x23bfa0u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 92), (uint16_t)GPR_U32(ctx, 2));
label_23bfa4:
    // 0x23bfa4: 0x8622005e  lh          $v0, 0x5E($s1)
    ctx->pc = 0x23bfa4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 94)));
    // 0x23bfa8: 0x2082a  slt         $at, $zero, $v0
    ctx->pc = 0x23bfa8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x23bfac: 0x1020000d  beqz        $at, . + 4 + (0xD << 2)
    ctx->pc = 0x23BFACu;
    {
        const bool branch_taken_0x23bfac = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x23BFB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23BFACu;
            // 0x23bfb0: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23bfac) {
            ctx->pc = 0x23BFE4u;
            goto label_23bfe4;
        }
    }
    ctx->pc = 0x23BFB4u;
    // 0x23bfb4: 0x8e240140  lw          $a0, 0x140($s1)
    ctx->pc = 0x23bfb4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 320)));
    // 0x23bfb8: 0x24060080  addiu       $a2, $zero, 0x80
    ctx->pc = 0x23bfb8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x23bfbc: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x23bfbcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x23bfc0: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x23bfc0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23bfc4: 0x24a5ac40  addiu       $a1, $a1, -0x53C0
    ctx->pc = 0x23bfc4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294945856));
    // 0x23bfc8: 0xc0402d  daddu       $t0, $a2, $zero
    ctx->pc = 0x23bfc8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23bfcc: 0xc089734  jal         func_225CD0
    ctx->pc = 0x23BFCCu;
    SET_GPR_U32(ctx, 31, 0x23BFD4u);
    ctx->pc = 0x23BFD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23BFCCu;
            // 0x23bfd0: 0xc0482d  daddu       $t1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x225CD0u;
    if (runtime->hasFunction(0x225CD0u)) {
        auto targetFn = runtime->lookupFunction(0x225CD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23BFD4u; }
        if (ctx->pc != 0x23BFD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetPartRGBA__16CMenuPosDataFormFPciiii_0x225cd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23BFD4u; }
        if (ctx->pc != 0x23BFD4u) { return; }
    }
    ctx->pc = 0x23BFD4u;
label_23bfd4:
    // 0x23bfd4: 0x8622005e  lh          $v0, 0x5E($s1)
    ctx->pc = 0x23bfd4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 94)));
    // 0x23bfd8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x23bfd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x23bfdc: 0xa622005e  sh          $v0, 0x5E($s1)
    ctx->pc = 0x23bfdcu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 94), (uint16_t)GPR_U32(ctx, 2));
    // 0x23bfe0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x23bfe0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_23bfe4:
    // 0x23bfe4: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x23bfe4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x23bfe8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x23bfe8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x23bfec: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x23bfecu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23bff0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x23bff0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23bff4: 0x3e00008  jr          $ra
    ctx->pc = 0x23BFF4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23BFF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23BFF4u;
            // 0x23bff8: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x23BFFCu;
}
