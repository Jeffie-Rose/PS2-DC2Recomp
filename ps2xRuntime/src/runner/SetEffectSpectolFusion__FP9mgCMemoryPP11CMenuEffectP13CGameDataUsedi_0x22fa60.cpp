#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: SetEffectSpectolFusion__FP9mgCMemoryPP11CMenuEffectP13CGameDataUsedi
// Address: 0x22fa60 - 0x22fb58
void SetEffectSpectolFusion__FP9mgCMemoryPP11CMenuEffectP13CGameDataUsedi_0x22fa60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetEffectSpectolFusion__FP9mgCMemoryPP11CMenuEffectP13CGameDataUsedi_0x22fa60");
#endif

    switch (ctx->pc) {
        case 0x22fab8u: goto label_22fab8;
        case 0x22fb00u: goto label_22fb00;
        case 0x22fb0cu: goto label_22fb0c;
        case 0x22fb2cu: goto label_22fb2c;
        case 0x22fb34u: goto label_22fb34;
        case 0x22fb3cu: goto label_22fb3c;
        default: break;
    }

    ctx->pc = 0x22fa60u;

    // 0x22fa60: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x22fa60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x22fa64: 0x3c020035  lui         $v0, 0x35
    ctx->pc = 0x22fa64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)53 << 16));
    // 0x22fa68: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x22fa68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x22fa6c: 0x24420840  addiu       $v0, $v0, 0x840
    ctx->pc = 0x22fa6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2112));
    // 0x22fa70: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x22fa70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x22fa74: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x22fa74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x22fa78: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x22fa78u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22fa7c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x22fa7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x22fa80: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x22fa80u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22fa84: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x22fa84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x22fa88: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x22fa88u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22fa8c: 0x78460000  lq          $a2, 0x0($v0)
    ctx->pc = 0x22fa8cu;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x22fa90: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x22fa90u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22fa94: 0x78430010  lq          $v1, 0x10($v0)
    ctx->pc = 0x22fa94u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x22fa98: 0x27a70050  addiu       $a3, $sp, 0x50
    ctx->pc = 0x22fa98u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x22fa9c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x22fa9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22faa0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x22faa0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22faa4: 0xdc420020  ld          $v0, 0x20($v0)
    ctx->pc = 0x22faa4u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x22faa8: 0x7ce60000  sq          $a2, 0x0($a3)
    ctx->pc = 0x22faa8u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), GPR_VEC(ctx, 6));
    // 0x22faac: 0x7ce30010  sq          $v1, 0x10($a3)
    ctx->pc = 0x22faacu;
    WRITE128(ADD32(GPR_U32(ctx, 7), 16), GPR_VEC(ctx, 3));
    // 0x22fab0: 0xc0943e4  jal         func_250F90
    ctx->pc = 0x22FAB0u;
    SET_GPR_U32(ctx, 31, 0x22FAB8u);
    ctx->pc = 0x22FAB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22FAB0u;
            // 0x22fab4: 0xfce20020  sd          $v0, 0x20($a3) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 7), 32), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x250F90u;
    if (runtime->hasFunction(0x250F90u)) {
        auto targetFn = runtime->lookupFunction(0x250F90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22FAB8u; }
        if (ctx->pc != 0x22FAB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetSameAdrressUserData__FP13CGameDataUsedi_0x250f90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22FAB8u; }
        if (ctx->pc != 0x22FAB8u) { return; }
    }
    ctx->pc = 0x22FAB8u;
label_22fab8:
    // 0x22fab8: 0xaf828374  sw          $v0, -0x7C8C($gp)
    ctx->pc = 0x22fab8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935412), GPR_U32(ctx, 2));
    // 0x22fabc: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x22FABCu;
    {
        const bool branch_taken_0x22fabc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x22FAC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22FABCu;
            // 0x22fac0: 0xaf80961c  sw          $zero, -0x69E4($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294940188), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22fabc) {
            ctx->pc = 0x22FACCu;
            goto label_22facc;
        }
    }
    ctx->pc = 0x22FAC4u;
    // 0x22fac4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x22fac4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x22fac8: 0xafa20060  sw          $v0, 0x60($sp)
    ctx->pc = 0x22fac8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 2));
label_22facc:
    // 0x22facc: 0x8f828374  lw          $v0, -0x7C8C($gp)
    ctx->pc = 0x22faccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935412)));
    // 0x22fad0: 0x4400002  bltz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x22FAD0u;
    {
        const bool branch_taken_0x22fad0 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x22fad0) {
            ctx->pc = 0x22FADCu;
            goto label_22fadc;
        }
    }
    ctx->pc = 0x22FAD8u;
    // 0x22fad8: 0xa380962c  sb          $zero, -0x69D4($gp)
    ctx->pc = 0x22fad8u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294940204), (uint8_t)GPR_U32(ctx, 0));
label_22fadc:
    // 0x22fadc: 0xae600024  sw          $zero, 0x24($s3)
    ctx->pc = 0x22fadcu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 36), GPR_U32(ctx, 0));
    // 0x22fae0: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x22fae0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22fae4: 0xae60001c  sw          $zero, 0x1C($s3)
    ctx->pc = 0x22fae4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 28), GPR_U32(ctx, 0));
    // 0x22fae8: 0x2407000a  addiu       $a3, $zero, 0xA
    ctx->pc = 0x22fae8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x22faec: 0x8f829450  lw          $v0, -0x6BB0($gp)
    ctx->pc = 0x22faecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939728)));
    // 0x22faf0: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x22faf0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x22faf4: 0x8c460050  lw          $a2, 0x50($v0)
    ctx->pc = 0x22faf4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 80)));
    // 0x22faf8: 0xc08bee4  jal         func_22FB90
    ctx->pc = 0x22FAF8u;
    SET_GPR_U32(ctx, 31, 0x22FB00u);
    ctx->pc = 0x22FAFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22FAF8u;
            // 0x22fafc: 0x27a80050  addiu       $t0, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22FB90u;
    if (runtime->hasFunction(0x22FB90u)) {
        auto targetFn = runtime->lookupFunction(0x22FB90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22FB00u; }
        if (ctx->pc != 0x22FB00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        PresetEffect__11CMenuEffectFP9mgCMemoryP10mgCTextureiPi_0x22fb90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22FB00u; }
        if (ctx->pc != 0x22FB00u) { return; }
    }
    ctx->pc = 0x22FB00u;
label_22fb00:
    // 0x22fb00: 0x86240002  lh          $a0, 0x2($s1)
    ctx->pc = 0x22fb00u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x22fb04: 0xc087db4  jal         func_21F6D0
    ctx->pc = 0x22FB04u;
    SET_GPR_U32(ctx, 31, 0x22FB0Cu);
    ctx->pc = 0x22FB08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22FB04u;
            // 0x22fb08: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21F6D0u;
    if (runtime->hasFunction(0x21F6D0u)) {
        auto targetFn = runtime->lookupFunction(0x21F6D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22FB0Cu; }
        if (ctx->pc != 0x22FB0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetMenuItemIconTexInfo__Fii_0x21f6d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22FB0Cu; }
        if (ctx->pc != 0x22FB0Cu) { return; }
    }
    ctx->pc = 0x22FB0Cu;
label_22fb0c:
    // 0x22fb0c: 0x86230002  lh          $v1, 0x2($s1)
    ctx->pc = 0x22fb0cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x22fb10: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x22fb10u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22fb14: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x22fb14u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22fb18: 0x24070015  addiu       $a3, $zero, 0x15
    ctx->pc = 0x22fb18u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x22fb1c: 0xafa30058  sw          $v1, 0x58($sp)
    ctx->pc = 0x22fb1cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 3));
    // 0x22fb20: 0x8e440004  lw          $a0, 0x4($s2)
    ctx->pc = 0x22fb20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x22fb24: 0xc08bee4  jal         func_22FB90
    ctx->pc = 0x22FB24u;
    SET_GPR_U32(ctx, 31, 0x22FB2Cu);
    ctx->pc = 0x22FB28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22FB24u;
            // 0x22fb28: 0x27a80050  addiu       $t0, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22FB90u;
    if (runtime->hasFunction(0x22FB90u)) {
        auto targetFn = runtime->lookupFunction(0x22FB90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22FB2Cu; }
        if (ctx->pc != 0x22FB2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        PresetEffect__11CMenuEffectFP9mgCMemoryP10mgCTextureiPi_0x22fb90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22FB2Cu; }
        if (ctx->pc != 0x22FB2Cu) { return; }
    }
    ctx->pc = 0x22FB2Cu;
label_22fb2c:
    // 0x22fb2c: 0xc08bfa4  jal         func_22FE90
    ctx->pc = 0x22FB2Cu;
    SET_GPR_U32(ctx, 31, 0x22FB34u);
    ctx->pc = 0x22FB30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22FB2Cu;
            // 0x22fb30: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22FE90u;
    if (runtime->hasFunction(0x22FE90u)) {
        auto targetFn = runtime->lookupFunction(0x22FE90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22FB34u; }
        if (ctx->pc != 0x22FB34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EffectStart__11CMenuEffectFv_0x22fe90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22FB34u; }
        if (ctx->pc != 0x22FB34u) { return; }
    }
    ctx->pc = 0x22FB34u;
label_22fb34:
    // 0x22fb34: 0xc08bfa4  jal         func_22FE90
    ctx->pc = 0x22FB34u;
    SET_GPR_U32(ctx, 31, 0x22FB3Cu);
    ctx->pc = 0x22FB38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22FB34u;
            // 0x22fb38: 0x8e440004  lw          $a0, 0x4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22FE90u;
    if (runtime->hasFunction(0x22FE90u)) {
        auto targetFn = runtime->lookupFunction(0x22FE90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22FB3Cu; }
        if (ctx->pc != 0x22FB3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EffectStart__11CMenuEffectFv_0x22fe90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22FB3Cu; }
        if (ctx->pc != 0x22FB3Cu) { return; }
    }
    ctx->pc = 0x22FB3Cu;
label_22fb3c:
    // 0x22fb3c: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x22fb3cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x22fb40: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x22fb40u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x22fb44: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x22fb44u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x22fb48: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x22fb48u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22fb4c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x22fb4cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22fb50: 0x3e00008  jr          $ra
    ctx->pc = 0x22FB50u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22FB54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22FB50u;
            // 0x22fb54: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x22FB58u;
}
