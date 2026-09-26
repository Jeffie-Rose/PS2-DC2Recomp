#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: ShotNormalGun__FPfPf
// Address: 0x2cff80 - 0x2d00d8
void ShotNormalGun__FPfPf_0x2cff80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ShotNormalGun__FPfPf_0x2cff80");
#endif

    switch (ctx->pc) {
        case 0x2cffb8u: goto label_2cffb8;
        case 0x2cffd4u: goto label_2cffd4;
        case 0x2cffe8u: goto label_2cffe8;
        case 0x2d0004u: goto label_2d0004;
        case 0x2d0010u: goto label_2d0010;
        case 0x2d0030u: goto label_2d0030;
        case 0x2d0044u: goto label_2d0044;
        case 0x2d0060u: goto label_2d0060;
        case 0x2d0070u: goto label_2d0070;
        case 0x2d0090u: goto label_2d0090;
        case 0x2d00acu: goto label_2d00ac;
        case 0x2d00c4u: goto label_2d00c4;
        default: break;
    }

    ctx->pc = 0x2cff80u;

    // 0x2cff80: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2cff80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2cff84: 0x3c0101f1  lui         $at, 0x1F1
    ctx->pc = 0x2cff84u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)497 << 16));
    // 0x2cff88: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2cff88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2cff8c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2cff8cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cff90: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2cff90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2cff94: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2cff94u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cff98: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2cff98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2cff9c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2cff9cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cffa0: 0x8c22d430  lw          $v0, -0x2BD0($at)
    ctx->pc = 0x2cffa0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294956080)));
    // 0x2cffa4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2cffa4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cffa8: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x2cffa8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x2cffac: 0x8c4407dc  lw          $a0, 0x7DC($v0)
    ctx->pc = 0x2cffacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2012)));
    // 0x2cffb0: 0xc0b8498  jal         func_2E1260
    ctx->pc = 0x2CFFB0u;
    SET_GPR_U32(ctx, 31, 0x2CFFB8u);
    ctx->pc = 0x2CFFB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CFFB0u;
            // 0x2cffb4: 0x24a502a0  addiu       $a1, $a1, 0x2A0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 672));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E1260u;
    if (runtime->hasFunction(0x2E1260u)) {
        auto targetFn = runtime->lookupFunction(0x2E1260u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CFFB8u; }
        if (ctx->pc != 0x2CFFB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEffSpt__16CEffectScriptManFPcii_0x2e1260(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CFFB8u; }
        if (ctx->pc != 0x2CFFB8u) { return; }
    }
    ctx->pc = 0x2CFFB8u;
label_2cffb8:
    // 0x2cffb8: 0x3c0101f1  lui         $at, 0x1F1
    ctx->pc = 0x2cffb8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)497 << 16));
    // 0x2cffbc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2cffbcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cffc0: 0x8c22d430  lw          $v0, -0x2BD0($at)
    ctx->pc = 0x2cffc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294956080)));
    // 0x2cffc4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2cffc4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cffc8: 0x8c4407dc  lw          $a0, 0x7DC($v0)
    ctx->pc = 0x2cffc8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2012)));
    // 0x2cffcc: 0xc0b8894  jal         func_2E2250
    ctx->pc = 0x2CFFCCu;
    SET_GPR_U32(ctx, 31, 0x2CFFD4u);
    ctx->pc = 0x2CFFD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CFFCCu;
            // 0x2cffd0: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E2250u;
    if (runtime->hasFunction(0x2E2250u)) {
        auto targetFn = runtime->lookupFunction(0x2E2250u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CFFD4u; }
        if (ctx->pc != 0x2CFFD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetScriptVect1__16CEffectScriptManFPfii_0x2e2250(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CFFD4u; }
        if (ctx->pc != 0x2CFFD4u) { return; }
    }
    ctx->pc = 0x2CFFD4u;
label_2cffd4:
    // 0x2cffd4: 0x3c0241a0  lui         $v0, 0x41A0
    ctx->pc = 0x2cffd4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16800 << 16));
    // 0x2cffd8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2cffd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cffdc: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2cffdcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2cffe0: 0xc041c4a  jal         func_107128
    ctx->pc = 0x2CFFE0u;
    SET_GPR_U32(ctx, 31, 0x2CFFE8u);
    ctx->pc = 0x2CFFE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CFFE0u;
            // 0x2cffe4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107128u;
    if (runtime->hasFunction(0x107128u)) {
        auto targetFn = runtime->lookupFunction(0x107128u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CFFE8u; }
        if (ctx->pc != 0x2CFFE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0ScaleVector_0x107128(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CFFE8u; }
        if (ctx->pc != 0x2CFFE8u) { return; }
    }
    ctx->pc = 0x2CFFE8u;
label_2cffe8:
    // 0x2cffe8: 0x3c0101f1  lui         $at, 0x1F1
    ctx->pc = 0x2cffe8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)497 << 16));
    // 0x2cffec: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2cffecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cfff0: 0x8c22d430  lw          $v0, -0x2BD0($at)
    ctx->pc = 0x2cfff0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294956080)));
    // 0x2cfff4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2cfff4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cfff8: 0x8c4407dc  lw          $a0, 0x7DC($v0)
    ctx->pc = 0x2cfff8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2012)));
    // 0x2cfffc: 0xc0b88d8  jal         func_2E2360
    ctx->pc = 0x2CFFFCu;
    SET_GPR_U32(ctx, 31, 0x2D0004u);
    ctx->pc = 0x2D0000u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CFFFCu;
            // 0x2d0000: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E2360u;
    if (runtime->hasFunction(0x2E2360u)) {
        auto targetFn = runtime->lookupFunction(0x2E2360u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D0004u; }
        if (ctx->pc != 0x2D0004u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetScriptVect2__16CEffectScriptManFPfii_0x2e2360(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D0004u; }
        if (ctx->pc != 0x2D0004u) { return; }
    }
    ctx->pc = 0x2D0004u;
label_2d0004:
    // 0x2d0004: 0x3c0401ea  lui         $a0, 0x1EA
    ctx->pc = 0x2d0004u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)490 << 16));
    // 0x2d0008: 0xc06e9c0  jal         func_1BA700
    ctx->pc = 0x2D0008u;
    SET_GPR_U32(ctx, 31, 0x2D0010u);
    ctx->pc = 0x2D000Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D0008u;
            // 0x2d000c: 0x24840710  addiu       $a0, $a0, 0x710 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1808));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1BA700u;
    if (runtime->hasFunction(0x1BA700u)) {
        auto targetFn = runtime->lookupFunction(0x1BA700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D0010u; }
        if (ctx->pc != 0x2D0010u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPrim__11CColPrimManFv_0x1ba700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D0010u; }
        if (ctx->pc != 0x2D0010u) { return; }
    }
    ctx->pc = 0x2D0010u;
label_2d0010:
    // 0x2d0010: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2d0010u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d0014: 0x12200016  beqz        $s1, . + 4 + (0x16 << 2)
    ctx->pc = 0x2D0014u;
    {
        const bool branch_taken_0x2d0014 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d0014) {
            ctx->pc = 0x2D0070u;
            goto label_2d0070;
        }
    }
    ctx->pc = 0x2D001Cu;
    // 0x2d001c: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x2d001cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x2d0020: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2d0020u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d0024: 0x24a502a8  addiu       $a1, $a1, 0x2A8
    ctx->pc = 0x2d0024u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 680));
    // 0x2d0028: 0xc06e718  jal         func_1B9C60
    ctx->pc = 0x2D0028u;
    SET_GPR_U32(ctx, 31, 0x2D0030u);
    ctx->pc = 0x2D002Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D0028u;
            // 0x2d002c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B9C60u;
    if (runtime->hasFunction(0x1B9C60u)) {
        auto targetFn = runtime->lookupFunction(0x1B9C60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D0030u; }
        if (ctx->pc != 0x2D0030u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetDamage__8CColPrimFPci_0x1b9c60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D0030u; }
        if (ctx->pc != 0x2D0030u) { return; }
    }
    ctx->pc = 0x2D0030u;
label_2d0030:
    // 0x2d0030: 0x3c024396  lui         $v0, 0x4396
    ctx->pc = 0x2d0030u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17302 << 16));
    // 0x2d0034: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2d0034u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d0038: 0xae2200a4  sw          $v0, 0xA4($s1)
    ctx->pc = 0x2d0038u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 164), GPR_U32(ctx, 2));
    // 0x2d003c: 0xc07a260  jal         func_1E8980
    ctx->pc = 0x2D003Cu;
    SET_GPR_U32(ctx, 31, 0x2D0044u);
    ctx->pc = 0x2D0040u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D003Cu;
            // 0x2d0040: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E8980u;
    if (runtime->hasFunction(0x1E8980u)) {
        auto targetFn = runtime->lookupFunction(0x1E8980u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D0044u; }
        if (ctx->pc != 0x2D0044u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetDamageParam__FP8CColPrimi_0x1e8980(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D0044u; }
        if (ctx->pc != 0x2D0044u) { return; }
    }
    ctx->pc = 0x2D0044u;
label_2d0044:
    // 0x2d0044: 0x3c0101f1  lui         $at, 0x1F1
    ctx->pc = 0x2d0044u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)497 << 16));
    // 0x2d0048: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x2d0048u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2d004c: 0x8c22d430  lw          $v0, -0x2BD0($at)
    ctx->pc = 0x2d004cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294956080)));
    // 0x2d0050: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2d0050u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d0054: 0x8c4407dc  lw          $a0, 0x7DC($v0)
    ctx->pc = 0x2d0054u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2012)));
    // 0x2d0058: 0xc0b89a4  jal         func_2E2690
    ctx->pc = 0x2D0058u;
    SET_GPR_U32(ctx, 31, 0x2D0060u);
    ctx->pc = 0x2D005Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D0058u;
            // 0x2d005c: 0xc0382d  daddu       $a3, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E2690u;
    if (runtime->hasFunction(0x2E2690u)) {
        auto targetFn = runtime->lookupFunction(0x2E2690u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D0060u; }
        if (ctx->pc != 0x2D0060u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetColPrim__16CEffectScriptManFP8CColPrimii_0x2e2690(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D0060u; }
        if (ctx->pc != 0x2D0060u) { return; }
    }
    ctx->pc = 0x2D0060u;
label_2d0060:
    // 0x2d0060: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x2d0060u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x2d0064: 0x84450046  lh          $a1, 0x46($v0)
    ctx->pc = 0x2d0064u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 70)));
    // 0x2d0068: 0xc07a1f8  jal         func_1E87E0
    ctx->pc = 0x2D0068u;
    SET_GPR_U32(ctx, 31, 0x2D0070u);
    ctx->pc = 0x2D006Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D0068u;
            // 0x2d006c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E87E0u;
    if (runtime->hasFunction(0x1E87E0u)) {
        auto targetFn = runtime->lookupFunction(0x1E87E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D0070u; }
        if (ctx->pc != 0x2D0070u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        calcWeaponParam2__Fii_0x1e87e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D0070u; }
        if (ctx->pc != 0x2D0070u) { return; }
    }
    ctx->pc = 0x2D0070u;
label_2d0070:
    // 0x2d0070: 0x3c0101f1  lui         $at, 0x1F1
    ctx->pc = 0x2d0070u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)497 << 16));
    // 0x2d0074: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x2d0074u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x2d0078: 0x8c22d430  lw          $v0, -0x2BD0($at)
    ctx->pc = 0x2d0078u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294956080)));
    // 0x2d007c: 0x24a502c0  addiu       $a1, $a1, 0x2C0
    ctx->pc = 0x2d007cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 704));
    // 0x2d0080: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2d0080u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d0084: 0x8c4407dc  lw          $a0, 0x7DC($v0)
    ctx->pc = 0x2d0084u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2012)));
    // 0x2d0088: 0xc0b8498  jal         func_2E1260
    ctx->pc = 0x2D0088u;
    SET_GPR_U32(ctx, 31, 0x2D0090u);
    ctx->pc = 0x2D008Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D0088u;
            // 0x2d008c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E1260u;
    if (runtime->hasFunction(0x2E1260u)) {
        auto targetFn = runtime->lookupFunction(0x2E1260u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D0090u; }
        if (ctx->pc != 0x2D0090u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEffSpt__16CEffectScriptManFPcii_0x2e1260(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D0090u; }
        if (ctx->pc != 0x2D0090u) { return; }
    }
    ctx->pc = 0x2D0090u;
label_2d0090:
    // 0x2d0090: 0x3c0101f1  lui         $at, 0x1F1
    ctx->pc = 0x2d0090u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)497 << 16));
    // 0x2d0094: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2d0094u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d0098: 0x8c22d430  lw          $v0, -0x2BD0($at)
    ctx->pc = 0x2d0098u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294956080)));
    // 0x2d009c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2d009cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d00a0: 0x8c4407dc  lw          $a0, 0x7DC($v0)
    ctx->pc = 0x2d00a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2012)));
    // 0x2d00a4: 0xc0b8894  jal         func_2E2250
    ctx->pc = 0x2D00A4u;
    SET_GPR_U32(ctx, 31, 0x2D00ACu);
    ctx->pc = 0x2D00A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D00A4u;
            // 0x2d00a8: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E2250u;
    if (runtime->hasFunction(0x2E2250u)) {
        auto targetFn = runtime->lookupFunction(0x2E2250u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D00ACu; }
        if (ctx->pc != 0x2D00ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetScriptVect1__16CEffectScriptManFPfii_0x2e2250(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D00ACu; }
        if (ctx->pc != 0x2D00ACu) { return; }
    }
    ctx->pc = 0x2D00ACu;
label_2d00ac:
    // 0x2d00ac: 0x3c0101f1  lui         $at, 0x1F1
    ctx->pc = 0x2d00acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)497 << 16));
    // 0x2d00b0: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x2d00b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2d00b4: 0x8c22d430  lw          $v0, -0x2BD0($at)
    ctx->pc = 0x2d00b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294956080)));
    // 0x2d00b8: 0x8c440588  lw          $a0, 0x588($v0)
    ctx->pc = 0x2d00b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1416)));
    // 0x2d00bc: 0xc063818  jal         func_18E060
    ctx->pc = 0x2D00BCu;
    SET_GPR_U32(ctx, 31, 0x2D00C4u);
    ctx->pc = 0x2D00C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D00BCu;
            // 0x2d00c0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18E060u;
    if (runtime->hasFunction(0x18E060u)) {
        auto targetFn = runtime->lookupFunction(0x18E060u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D00C4u; }
        if (ctx->pc != 0x2D00C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sndSePlay__FUiii_0x18e060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D00C4u; }
        if (ctx->pc != 0x2D00C4u) { return; }
    }
    ctx->pc = 0x2D00C4u;
label_2d00c4:
    // 0x2d00c4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2d00c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2d00c8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2d00c8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d00cc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2d00ccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d00d0: 0x3e00008  jr          $ra
    ctx->pc = 0x2D00D0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D00D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D00D0u;
            // 0x2d00d4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2D00D8u;
}
