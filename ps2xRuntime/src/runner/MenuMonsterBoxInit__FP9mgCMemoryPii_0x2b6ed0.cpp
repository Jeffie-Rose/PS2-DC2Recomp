#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: MenuMonsterBoxInit__FP9mgCMemoryPii
// Address: 0x2b6ed0 - 0x2b7320
void MenuMonsterBoxInit__FP9mgCMemoryPii_0x2b6ed0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("MenuMonsterBoxInit__FP9mgCMemoryPii_0x2b6ed0");
#endif

    switch (ctx->pc) {
        case 0x2b6ef8u: goto label_2b6ef8;
        case 0x2b6f18u: goto label_2b6f18;
        case 0x2b6f28u: goto label_2b6f28;
        case 0x2b6f34u: goto label_2b6f34;
        case 0x2b6f44u: goto label_2b6f44;
        case 0x2b6f54u: goto label_2b6f54;
        case 0x2b6f64u: goto label_2b6f64;
        case 0x2b6f6cu: goto label_2b6f6c;
        case 0x2b6f9cu: goto label_2b6f9c;
        case 0x2b6fa8u: goto label_2b6fa8;
        case 0x2b701cu: goto label_2b701c;
        case 0x2b7030u: goto label_2b7030;
        case 0x2b7040u: goto label_2b7040;
        case 0x2b7050u: goto label_2b7050;
        case 0x2b7058u: goto label_2b7058;
        case 0x2b707cu: goto label_2b707c;
        case 0x2b70a0u: goto label_2b70a0;
        case 0x2b70b4u: goto label_2b70b4;
        case 0x2b70d8u: goto label_2b70d8;
        case 0x2b70f0u: goto label_2b70f0;
        case 0x2b711cu: goto label_2b711c;
        case 0x2b7124u: goto label_2b7124;
        case 0x2b7154u: goto label_2b7154;
        case 0x2b7168u: goto label_2b7168;
        case 0x2b7170u: goto label_2b7170;
        case 0x2b7180u: goto label_2b7180;
        case 0x2b7190u: goto label_2b7190;
        case 0x2b71bcu: goto label_2b71bc;
        case 0x2b71d0u: goto label_2b71d0;
        case 0x2b71e0u: goto label_2b71e0;
        case 0x2b71f8u: goto label_2b71f8;
        case 0x2b7208u: goto label_2b7208;
        case 0x2b7218u: goto label_2b7218;
        case 0x2b7228u: goto label_2b7228;
        case 0x2b7230u: goto label_2b7230;
        case 0x2b7238u: goto label_2b7238;
        case 0x2b725cu: goto label_2b725c;
        case 0x2b728cu: goto label_2b728c;
        case 0x2b72a4u: goto label_2b72a4;
        default: break;
    }

    ctx->pc = 0x2b6ed0u;

    // 0x2b6ed0: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x2b6ed0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x2b6ed4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2b6ed4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x2b6ed8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2b6ed8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2b6edc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2b6edcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2b6ee0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2b6ee0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2b6ee4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2b6ee4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2b6ee8: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2b6ee8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b6eec: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2b6eecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b6ef0: 0xc04e640  jal         func_139900
    ctx->pc = 0x2B6EF0u;
    SET_GPR_U32(ctx, 31, 0x2B6EF8u);
    ctx->pc = 0x2B6EF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B6EF0u;
            // 0x2b6ef4: 0x27a40050  addiu       $a0, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139900u;
    if (runtime->hasFunction(0x139900u)) {
        auto targetFn = runtime->lookupFunction(0x139900u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B6EF8u; }
        if (ctx->pc != 0x2B6EF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Init__9mgCMemoryFv_0x139900(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B6EF8u; }
        if (ctx->pc != 0x2B6EF8u) { return; }
    }
    ctx->pc = 0x2B6EF8u;
label_2b6ef8:
    // 0x2b6ef8: 0x8e030028  lw          $v1, 0x28($s0)
    ctx->pc = 0x2b6ef8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x2b6efc: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x2b6efcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2b6f00: 0x8e050024  lw          $a1, 0x24($s0)
    ctx->pc = 0x2b6f00u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x2b6f04: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x2b6f04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x2b6f08: 0x653023  subu        $a2, $v1, $a1
    ctx->pc = 0x2b6f08u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x2b6f0c: 0x51900  sll         $v1, $a1, 4
    ctx->pc = 0x2b6f0cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x2b6f10: 0xc04e79c  jal         func_139E70
    ctx->pc = 0x2B6F10u;
    SET_GPR_U32(ctx, 31, 0x2B6F18u);
    ctx->pc = 0x2B6F14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B6F10u;
            // 0x2b6f14: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139E70u;
    if (runtime->hasFunction(0x139E70u)) {
        auto targetFn = runtime->lookupFunction(0x139E70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B6F18u; }
        if (ctx->pc != 0x2B6F18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        stSetBuffer__9mgCMemoryFP1i_0x139e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B6F18u; }
        if (ctx->pc != 0x2B6F18u) { return; }
    }
    ctx->pc = 0x2B6F18u;
label_2b6f18:
    // 0x2b6f18: 0x27b00050  addiu       $s0, $sp, 0x50
    ctx->pc = 0x2b6f18u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2b6f1c: 0x24050679  addiu       $a1, $zero, 0x679
    ctx->pc = 0x2b6f1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1657));
    // 0x2b6f20: 0xc04e748  jal         func_139D20
    ctx->pc = 0x2B6F20u;
    SET_GPR_U32(ctx, 31, 0x2B6F28u);
    ctx->pc = 0x2B6F24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B6F20u;
            // 0x2b6f24: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139D20u;
    if (runtime->hasFunction(0x139D20u)) {
        auto targetFn = runtime->lookupFunction(0x139D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B6F28u; }
        if (ctx->pc != 0x2B6F28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Alloc__9mgCMemoryFi_0x139d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B6F28u; }
        if (ctx->pc != 0x2B6F28u) { return; }
    }
    ctx->pc = 0x2B6F28u;
label_2b6f28:
    // 0x2b6f28: 0x24046770  addiu       $a0, $zero, 0x6770
    ctx->pc = 0x2b6f28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 26480));
    // 0x2b6f2c: 0xc04e638  jal         func_1398E0
    ctx->pc = 0x2B6F2Cu;
    SET_GPR_U32(ctx, 31, 0x2B6F34u);
    ctx->pc = 0x2B6F30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B6F2Cu;
            // 0x2b6f30: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1398E0u;
    if (runtime->hasFunction(0x1398E0u)) {
        auto targetFn = runtime->lookupFunction(0x1398E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B6F34u; }
        if (ctx->pc != 0x2B6F34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___nw__FUiP1_0x1398e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B6F34u; }
        if (ctx->pc != 0x2B6F34u) { return; }
    }
    ctx->pc = 0x2B6F34u;
label_2b6f34:
    // 0x2b6f34: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2B6F34u;
    {
        const bool branch_taken_0x2b6f34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B6F38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B6F34u;
            // 0x2b6f38: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b6f34) {
            ctx->pc = 0x2B6F48u;
            goto label_2b6f48;
        }
    }
    ctx->pc = 0x2B6F3Cu;
    // 0x2b6f3c: 0xc0ad7e4  jal         func_2B5F90
    ctx->pc = 0x2B6F3Cu;
    SET_GPR_U32(ctx, 31, 0x2B6F44u);
    ctx->pc = 0x2B6F40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B6F3Cu;
            // 0x2b6f40: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2B5F90u;
    if (runtime->hasFunction(0x2B5F90u)) {
        auto targetFn = runtime->lookupFunction(0x2B5F90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B6F44u; }
        if (ctx->pc != 0x2B6F44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___ct__14CMenuMosSelectFv_0x2b5f90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B6F44u; }
        if (ctx->pc != 0x2B6F44u) { return; }
    }
    ctx->pc = 0x2B6F44u;
label_2b6f44:
    // 0x2b6f44: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2b6f44u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2b6f48:
    // 0x2b6f48: 0xaf829be8  sw          $v0, -0x6418($gp)
    ctx->pc = 0x2b6f48u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294941672), GPR_U32(ctx, 2));
    // 0x2b6f4c: 0xc08dc6c  jal         func_2371B0
    ctx->pc = 0x2B6F4Cu;
    SET_GPR_U32(ctx, 31, 0x2B6F54u);
    ctx->pc = 0x2B6F50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B6F4Cu;
            // 0x2b6f50: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2371B0u;
    if (runtime->hasFunction(0x2371B0u)) {
        auto targetFn = runtime->lookupFunction(0x2371B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B6F54u; }
        if (ctx->pc != 0x2B6F54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetTexBlock__14CBaseMenuClassFPi_0x2371b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B6F54u; }
        if (ctx->pc != 0x2B6F54u) { return; }
    }
    ctx->pc = 0x2B6F54u;
label_2b6f54:
    // 0x2b6f54: 0x8f849be8  lw          $a0, -0x6418($gp)
    ctx->pc = 0x2b6f54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941672)));
    // 0x2b6f58: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2b6f58u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2b6f5c: 0xc08e88c  jal         func_23A230
    ctx->pc = 0x2B6F5Cu;
    SET_GPR_U32(ctx, 31, 0x2B6F64u);
    ctx->pc = 0x2B6F60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B6F5Cu;
            // 0x2b6f60: 0x24050028  addiu       $a1, $zero, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23A230u;
    if (runtime->hasFunction(0x23A230u)) {
        auto targetFn = runtime->lookupFunction(0x23A230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B6F64u; }
        if (ctx->pc != 0x2B6F64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FadeInMenu__14CBaseMenuClassFif_0x23a230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B6F64u; }
        if (ctx->pc != 0x2B6F64u) { return; }
    }
    ctx->pc = 0x2B6F64u;
label_2b6f64:
    // 0x2b6f64: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2b6f64u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b6f68: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x2b6f68u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2b6f6c:
    // 0x2b6f6c: 0x3c0301f1  lui         $v1, 0x1F1
    ctx->pc = 0x2b6f6cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)497 << 16));
    // 0x2b6f70: 0x3c020035  lui         $v0, 0x35
    ctx->pc = 0x2b6f70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)53 << 16));
    // 0x2b6f74: 0x2463cf30  addiu       $v1, $v1, -0x30D0
    ctx->pc = 0x2b6f74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954800));
    // 0x2b6f78: 0x24424b30  addiu       $v0, $v0, 0x4B30
    ctx->pc = 0x2b6f78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 19248));
    // 0x2b6f7c: 0x729821  addu        $s3, $v1, $s2
    ctx->pc = 0x2b6f7cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x2b6f80: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x2b6f80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x2b6f84: 0xae600000  sw          $zero, 0x0($s3)
    ctx->pc = 0x2b6f84u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 0));
    // 0x2b6f88: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2b6f88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2b6f8c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2B6F8Cu;
    {
        const bool branch_taken_0x2b6f8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B6F90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B6F8Cu;
            // 0x2b6f90: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b6f8c) {
            ctx->pc = 0x2B6FA8u;
            goto label_2b6fa8;
        }
    }
    ctx->pc = 0x2B6F94u;
    // 0x2b6f94: 0xc04e748  jal         func_139D20
    ctx->pc = 0x2B6F94u;
    SET_GPR_U32(ctx, 31, 0x2B6F9Cu);
    ctx->pc = 0x2B6F98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B6F94u;
            // 0x2b6f98: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139D20u;
    if (runtime->hasFunction(0x139D20u)) {
        auto targetFn = runtime->lookupFunction(0x139D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B6F9Cu; }
        if (ctx->pc != 0x2B6F9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Alloc__9mgCMemoryFi_0x139d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B6F9Cu; }
        if (ctx->pc != 0x2B6F9Cu) { return; }
    }
    ctx->pc = 0x2B6F9Cu;
label_2b6f9c:
    // 0x2b6f9c: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x2b6f9cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
    // 0x2b6fa0: 0xc0abf08  jal         func_2AFC20
    ctx->pc = 0x2B6FA0u;
    SET_GPR_U32(ctx, 31, 0x2B6FA8u);
    ctx->pc = 0x2B6FA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B6FA0u;
            // 0x2b6fa4: 0x8e640000  lw          $a0, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2AFC20u;
    if (runtime->hasFunction(0x2AFC20u)) {
        auto targetFn = runtime->lookupFunction(0x2AFC20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B6FA8u; }
        if (ctx->pc != 0x2B6FA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        InitMenuBGReadInfo2__FP17MENU_BGREAD_INFO2_0x2afc20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B6FA8u; }
        if (ctx->pc != 0x2B6FA8u) { return; }
    }
    ctx->pc = 0x2B6FA8u;
label_2b6fa8:
    // 0x2b6fa8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x2b6fa8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x2b6fac: 0x2a220007  slti        $v0, $s1, 0x7
    ctx->pc = 0x2b6facu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)7) ? 1 : 0);
    // 0x2b6fb0: 0x1440ffee  bnez        $v0, . + 4 + (-0x12 << 2)
    ctx->pc = 0x2B6FB0u;
    {
        const bool branch_taken_0x2b6fb0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B6FB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B6FB0u;
            // 0x2b6fb4: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b6fb0) {
            ctx->pc = 0x2B6F6Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2b6f6c;
        }
    }
    ctx->pc = 0x2B6FB8u;
    // 0x2b6fb8: 0x8f8394f4  lw          $v1, -0x6B0C($gp)
    ctx->pc = 0x2b6fb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939892)));
    // 0x2b6fbc: 0x3c050035  lui         $a1, 0x35
    ctx->pc = 0x2b6fbcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)53 << 16));
    // 0x2b6fc0: 0x8f829be8  lw          $v0, -0x6418($gp)
    ctx->pc = 0x2b6fc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941672)));
    // 0x2b6fc4: 0x24a54b50  addiu       $a1, $a1, 0x4B50
    ctx->pc = 0x2b6fc4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 19280));
    // 0x2b6fc8: 0xc4630090  lwc1        $f3, 0x90($v1)
    ctx->pc = 0x2b6fc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2b6fcc: 0xc4620094  lwc1        $f2, 0x94($v1)
    ctx->pc = 0x2b6fccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2b6fd0: 0xc4610098  lwc1        $f1, 0x98($v1)
    ctx->pc = 0x2b6fd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b6fd4: 0xc460009c  lwc1        $f0, 0x9C($v1)
    ctx->pc = 0x2b6fd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b6fd8: 0xe4430110  swc1        $f3, 0x110($v0)
    ctx->pc = 0x2b6fd8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 272), bits); }
    // 0x2b6fdc: 0xe4420114  swc1        $f2, 0x114($v0)
    ctx->pc = 0x2b6fdcu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 276), bits); }
    // 0x2b6fe0: 0xe4410118  swc1        $f1, 0x118($v0)
    ctx->pc = 0x2b6fe0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 280), bits); }
    // 0x2b6fe4: 0xe440011c  swc1        $f0, 0x11C($v0)
    ctx->pc = 0x2b6fe4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 284), bits); }
    // 0x2b6fe8: 0x8f8394f4  lw          $v1, -0x6B0C($gp)
    ctx->pc = 0x2b6fe8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939892)));
    // 0x2b6fec: 0x8f829be8  lw          $v0, -0x6418($gp)
    ctx->pc = 0x2b6fecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941672)));
    // 0x2b6ff0: 0xc4630080  lwc1        $f3, 0x80($v1)
    ctx->pc = 0x2b6ff0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2b6ff4: 0xc4620084  lwc1        $f2, 0x84($v1)
    ctx->pc = 0x2b6ff4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2b6ff8: 0xc4610088  lwc1        $f1, 0x88($v1)
    ctx->pc = 0x2b6ff8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b6ffc: 0xc460008c  lwc1        $f0, 0x8C($v1)
    ctx->pc = 0x2b6ffcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b7000: 0xe4430120  swc1        $f3, 0x120($v0)
    ctx->pc = 0x2b7000u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 288), bits); }
    // 0x2b7004: 0xe4420124  swc1        $f2, 0x124($v0)
    ctx->pc = 0x2b7004u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 292), bits); }
    // 0x2b7008: 0xe4410128  swc1        $f1, 0x128($v0)
    ctx->pc = 0x2b7008u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 296), bits); }
    // 0x2b700c: 0xe440012c  swc1        $f0, 0x12C($v0)
    ctx->pc = 0x2b700cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 300), bits); }
    // 0x2b7010: 0x8f8294f4  lw          $v0, -0x6B0C($gp)
    ctx->pc = 0x2b7010u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939892)));
    // 0x2b7014: 0xc041c5c  jal         func_107170
    ctx->pc = 0x2B7014u;
    SET_GPR_U32(ctx, 31, 0x2B701Cu);
    ctx->pc = 0x2B7018u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B7014u;
            // 0x2b7018: 0x24440090  addiu       $a0, $v0, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107170u;
    if (runtime->hasFunction(0x107170u)) {
        auto targetFn = runtime->lookupFunction(0x107170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B701Cu; }
        if (ctx->pc != 0x2B701Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0CopyVector_0x107170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B701Cu; }
        if (ctx->pc != 0x2B701Cu) { return; }
    }
    ctx->pc = 0x2B701Cu;
label_2b701c:
    // 0x2b701c: 0x8f8294f4  lw          $v0, -0x6B0C($gp)
    ctx->pc = 0x2b701cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939892)));
    // 0x2b7020: 0x3c050035  lui         $a1, 0x35
    ctx->pc = 0x2b7020u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)53 << 16));
    // 0x2b7024: 0x24a54b60  addiu       $a1, $a1, 0x4B60
    ctx->pc = 0x2b7024u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 19296));
    // 0x2b7028: 0xc041c5c  jal         func_107170
    ctx->pc = 0x2B7028u;
    SET_GPR_U32(ctx, 31, 0x2B7030u);
    ctx->pc = 0x2B702Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B7028u;
            // 0x2b702c: 0x24440080  addiu       $a0, $v0, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107170u;
    if (runtime->hasFunction(0x107170u)) {
        auto targetFn = runtime->lookupFunction(0x107170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B7030u; }
        if (ctx->pc != 0x2B7030u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0CopyVector_0x107170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B7030u; }
        if (ctx->pc != 0x2B7030u) { return; }
    }
    ctx->pc = 0x2B7030u;
label_2b7030:
    // 0x2b7030: 0x8f8494f4  lw          $a0, -0x6B0C($gp)
    ctx->pc = 0x2b7030u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939892)));
    // 0x2b7034: 0x3c050035  lui         $a1, 0x35
    ctx->pc = 0x2b7034u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)53 << 16));
    // 0x2b7038: 0xc04c504  jal         func_131410
    ctx->pc = 0x2B7038u;
    SET_GPR_U32(ctx, 31, 0x2B7040u);
    ctx->pc = 0x2B703Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B7038u;
            // 0x2b703c: 0x24a54b50  addiu       $a1, $a1, 0x4B50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 19280));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131410u;
    if (runtime->hasFunction(0x131410u)) {
        auto targetFn = runtime->lookupFunction(0x131410u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B7040u; }
        if (ctx->pc != 0x2B7040u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetPos__9mgCCameraFPf_0x131410(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B7040u; }
        if (ctx->pc != 0x2B7040u) { return; }
    }
    ctx->pc = 0x2B7040u;
label_2b7040:
    // 0x2b7040: 0x8f8494f4  lw          $a0, -0x6B0C($gp)
    ctx->pc = 0x2b7040u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939892)));
    // 0x2b7044: 0x3c050035  lui         $a1, 0x35
    ctx->pc = 0x2b7044u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)53 << 16));
    // 0x2b7048: 0xc04c518  jal         func_131460
    ctx->pc = 0x2B7048u;
    SET_GPR_U32(ctx, 31, 0x2B7050u);
    ctx->pc = 0x2B704Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B7048u;
            // 0x2b704c: 0x24a54b60  addiu       $a1, $a1, 0x4B60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 19296));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131460u;
    if (runtime->hasFunction(0x131460u)) {
        auto targetFn = runtime->lookupFunction(0x131460u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B7050u; }
        if (ctx->pc != 0x2B7050u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetRef__9mgCCameraFPf_0x131460(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B7050u; }
        if (ctx->pc != 0x2B7050u) { return; }
    }
    ctx->pc = 0x2B7050u;
label_2b7050:
    // 0x2b7050: 0xc04e780  jal         func_139E00
    ctx->pc = 0x2B7050u;
    SET_GPR_U32(ctx, 31, 0x2B7058u);
    ctx->pc = 0x2B7054u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B7050u;
            // 0x2b7054: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139E00u;
    if (runtime->hasFunction(0x139E00u)) {
        auto targetFn = runtime->lookupFunction(0x139E00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B7058u; }
        if (ctx->pc != 0x2B7058u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Align64__9mgCMemoryFv_0x139e00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B7058u; }
        if (ctx->pc != 0x2B7058u) { return; }
    }
    ctx->pc = 0x2B7058u;
label_2b7058:
    // 0x2b7058: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x2b7058u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x2b705c: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x2b705cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
    // 0x2b7060: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x2b7060u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x2b7064: 0x2484f048  addiu       $a0, $a0, -0xFB8
    ctx->pc = 0x2b7064u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294963272));
    // 0x2b7068: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2b7068u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b706c: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x2b706cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x2b7070: 0x438821  addu        $s1, $v0, $v1
    ctx->pc = 0x2b7070u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b7074: 0xc094440  jal         func_251100
    ctx->pc = 0x2B7074u;
    SET_GPR_U32(ctx, 31, 0x2B707Cu);
    ctx->pc = 0x2B7078u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B7074u;
            // 0x2b7078: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x251100u;
    if (runtime->hasFunction(0x251100u)) {
        auto targetFn = runtime->lookupFunction(0x251100u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B707Cu; }
        if (ctx->pc != 0x2B707Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        LoadFileMenu__FPcP1i_0x251100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B707Cu; }
        if (ctx->pc != 0x2B707Cu) { return; }
    }
    ctx->pc = 0x2B707Cu;
label_2b707c:
    // 0x2b707c: 0xafa2008c  sw          $v0, 0x8C($sp)
    ctx->pc = 0x2b707cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 140), GPR_U32(ctx, 2));
    // 0x2b7080: 0x8fa3008c  lw          $v1, 0x8C($sp)
    ctx->pc = 0x2b7080u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 140)));
    // 0x2b7084: 0x3062000f  andi        $v0, $v1, 0xF
    ctx->pc = 0x2b7084u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
    // 0x2b7088: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2B7088u;
    {
        const bool branch_taken_0x2b7088 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B708Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B7088u;
            // 0x2b708c: 0x32902  srl         $a1, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b7088) {
            ctx->pc = 0x2B7098u;
            goto label_2b7098;
        }
    }
    ctx->pc = 0x2B7090u;
    // 0x2b7090: 0x31102  srl         $v0, $v1, 4
    ctx->pc = 0x2b7090u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
    // 0x2b7094: 0x24450001  addiu       $a1, $v0, 0x1
    ctx->pc = 0x2b7094u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_2b7098:
    // 0x2b7098: 0xc04e748  jal         func_139D20
    ctx->pc = 0x2B7098u;
    SET_GPR_U32(ctx, 31, 0x2B70A0u);
    ctx->pc = 0x2B709Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B7098u;
            // 0x2b709c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139D20u;
    if (runtime->hasFunction(0x139D20u)) {
        auto targetFn = runtime->lookupFunction(0x139D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B70A0u; }
        if (ctx->pc != 0x2B70A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Alloc__9mgCMemoryFi_0x139d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B70A0u; }
        if (ctx->pc != 0x2B70A0u) { return; }
    }
    ctx->pc = 0x2B70A0u;
label_2b70a0:
    // 0x2b70a0: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x2b70a0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x2b70a4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2b70a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b70a8: 0x24a5f058  addiu       $a1, $a1, -0xFA8
    ctx->pc = 0x2b70a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963288));
    // 0x2b70ac: 0xc052734  jal         func_149CD0
    ctx->pc = 0x2B70ACu;
    SET_GPR_U32(ctx, 31, 0x2B70B4u);
    ctx->pc = 0x2B70B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B70ACu;
            // 0x2b70b0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x149CD0u;
    if (runtime->hasFunction(0x149CD0u)) {
        auto targetFn = runtime->lookupFunction(0x149CD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B70B4u; }
        if (ctx->pc != 0x2B70B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPackFile__FPUiPcPi_0x149cd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B70B4u; }
        if (ctx->pc != 0x2B70B4u) { return; }
    }
    ctx->pc = 0x2B70B4u;
label_2b70b4:
    // 0x2b70b4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2b70b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b70b8: 0x3c040038  lui         $a0, 0x38
    ctx->pc = 0x2b70b8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)56 << 16));
    // 0x2b70bc: 0x8f829be8  lw          $v0, -0x6418($gp)
    ctx->pc = 0x2b70bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941672)));
    // 0x2b70c0: 0x24841ef0  addiu       $a0, $a0, 0x1EF0
    ctx->pc = 0x2b70c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7920));
    // 0x2b70c4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2b70c4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b70c8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2b70c8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b70cc: 0x8c520018  lw          $s2, 0x18($v0)
    ctx->pc = 0x2b70ccu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x2b70d0: 0xc04b6a4  jal         func_12DA90
    ctx->pc = 0x2B70D0u;
    SET_GPR_U32(ctx, 31, 0x2B70D8u);
    ctx->pc = 0x2B70D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B70D0u;
            // 0x2b70d4: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12DA90u;
    if (runtime->hasFunction(0x12DA90u)) {
        auto targetFn = runtime->lookupFunction(0x12DA90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B70D8u; }
        if (ctx->pc != 0x2B70D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnterIMGFile__17mgCTextureManagerFPUciP9mgCMemoryP15mgCEnterIMGInfo_0x12da90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B70D8u; }
        if (ctx->pc != 0x2B70D8u) { return; }
    }
    ctx->pc = 0x2B70D8u;
label_2b70d8:
    // 0x2b70d8: 0x3c040038  lui         $a0, 0x38
    ctx->pc = 0x2b70d8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)56 << 16));
    // 0x2b70dc: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x2b70dcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x2b70e0: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x2b70e0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b70e4: 0x24841ef0  addiu       $a0, $a0, 0x1EF0
    ctx->pc = 0x2b70e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7920));
    // 0x2b70e8: 0xc04b414  jal         func_12D050
    ctx->pc = 0x2B70E8u;
    SET_GPR_U32(ctx, 31, 0x2B70F0u);
    ctx->pc = 0x2B70ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B70E8u;
            // 0x2b70ec: 0x24a5f068  addiu       $a1, $a1, -0xF98 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963304));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12D050u;
    if (runtime->hasFunction(0x12D050u)) {
        auto targetFn = runtime->lookupFunction(0x12D050u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B70F0u; }
        if (ctx->pc != 0x2B70F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetTexture__17mgCTextureManagerFPci_0x12d050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B70F0u; }
        if (ctx->pc != 0x2B70F0u) { return; }
    }
    ctx->pc = 0x2B70F0u;
label_2b70f0:
    // 0x2b70f0: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x2b70f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x2b70f4: 0xaf829bd8  sw          $v0, -0x6428($gp)
    ctx->pc = 0x2b70f4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294941656), GPR_U32(ctx, 2));
    // 0x2b70f8: 0x8c23ca40  lw          $v1, -0x35C0($at)
    ctx->pc = 0x2b70f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294953536)));
    // 0x2b70fc: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x2b70fcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x2b7100: 0x8f829be8  lw          $v0, -0x6418($gp)
    ctx->pc = 0x2b7100u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941672)));
    // 0x2b7104: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2b7104u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b7108: 0x24a5f070  addiu       $a1, $a1, -0xF90
    ctx->pc = 0x2b7108u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963312));
    // 0x2b710c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2b710cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b7110: 0x8c6321d4  lw          $v1, 0x21D4($v1)
    ctx->pc = 0x2b7110u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8660)));
    // 0x2b7114: 0xc052734  jal         func_149CD0
    ctx->pc = 0x2B7114u;
    SET_GPR_U32(ctx, 31, 0x2B711Cu);
    ctx->pc = 0x2B7118u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B7114u;
            // 0x2b7118: 0xac430134  sw          $v1, 0x134($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 308), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x149CD0u;
    if (runtime->hasFunction(0x149CD0u)) {
        auto targetFn = runtime->lookupFunction(0x149CD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B711Cu; }
        if (ctx->pc != 0x2B711Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPackFile__FPUiPcPi_0x149cd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B711Cu; }
        if (ctx->pc != 0x2B711Cu) { return; }
    }
    ctx->pc = 0x2B711Cu;
label_2b711c:
    // 0x2b711c: 0xc065a18  jal         func_196860
    ctx->pc = 0x2B711Cu;
    SET_GPR_U32(ctx, 31, 0x2B7124u);
    ctx->pc = 0x2B7120u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B711Cu;
            // 0x2b7120: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x196860u;
    if (runtime->hasFunction(0x196860u)) {
        auto targetFn = runtime->lookupFunction(0x196860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B7124u; }
        if (ctx->pc != 0x2B7124u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetSystemMesBuffer__Fv_0x196860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B7124u; }
        if (ctx->pc != 0x2B7124u) { return; }
    }
    ctx->pc = 0x2B7124u;
label_2b7124:
    // 0x2b7124: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x2b7124u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x2b7128: 0xac22e3a8  sw          $v0, -0x1C58($at)
    ctx->pc = 0x2b7128u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294960040), GPR_U32(ctx, 2));
    // 0x2b712c: 0x8f829be8  lw          $v0, -0x6418($gp)
    ctx->pc = 0x2b712cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941672)));
    // 0x2b7130: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x2b7130u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x2b7134: 0xac32e3ac  sw          $s2, -0x1C54($at)
    ctx->pc = 0x2b7134u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294960044), GPR_U32(ctx, 18));
    // 0x2b7138: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x2b7138u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x2b713c: 0x24530134  addiu       $s3, $v0, 0x134
    ctx->pc = 0x2b713cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 308));
    // 0x2b7140: 0x8c420134  lw          $v0, 0x134($v0)
    ctx->pc = 0x2b7140u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 308)));
    // 0x2b7144: 0xac22e3b8  sw          $v0, -0x1C48($at)
    ctx->pc = 0x2b7144u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294960056), GPR_U32(ctx, 2));
    // 0x2b7148: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x2b7148u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x2b714c: 0xc065a18  jal         func_196860
    ctx->pc = 0x2B714Cu;
    SET_GPR_U32(ctx, 31, 0x2B7154u);
    ctx->pc = 0x2B7150u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B714Cu;
            // 0x2b7150: 0xac32e3bc  sw          $s2, -0x1C44($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294960060), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
    ctx->pc = 0x196860u;
    if (runtime->hasFunction(0x196860u)) {
        auto targetFn = runtime->lookupFunction(0x196860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B7154u; }
        if (ctx->pc != 0x2B7154u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetSystemMesBuffer__Fv_0x196860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B7154u; }
        if (ctx->pc != 0x2B7154u) { return; }
    }
    ctx->pc = 0x2B7154u;
label_2b7154:
    // 0x2b7154: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2b7154u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b7158: 0x8e660000  lw          $a2, 0x0($s3)
    ctx->pc = 0x2b7158u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x2b715c: 0x8f829be8  lw          $v0, -0x6418($gp)
    ctx->pc = 0x2b715cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941672)));
    // 0x2b7160: 0xc0874d8  jal         func_21D360
    ctx->pc = 0x2B7160u;
    SET_GPR_U32(ctx, 31, 0x2B7168u);
    ctx->pc = 0x2B7164u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B7160u;
            // 0x2b7164: 0x24440150  addiu       $a0, $v0, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 336));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21D360u;
    if (runtime->hasFunction(0x21D360u)) {
        auto targetFn = runtime->lookupFunction(0x21D360u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B7168u; }
        if (ctx->pc != 0x2B7168u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetMessData__7CDC2MesFPsPs_0x21d360(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B7168u; }
        if (ctx->pc != 0x2B7168u) { return; }
    }
    ctx->pc = 0x2B7168u;
label_2b7168:
    // 0x2b7168: 0xc065a18  jal         func_196860
    ctx->pc = 0x2B7168u;
    SET_GPR_U32(ctx, 31, 0x2B7170u);
    ctx->pc = 0x196860u;
    if (runtime->hasFunction(0x196860u)) {
        auto targetFn = runtime->lookupFunction(0x196860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B7170u; }
        if (ctx->pc != 0x2B7170u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetSystemMesBuffer__Fv_0x196860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B7170u; }
        if (ctx->pc != 0x2B7170u) { return; }
    }
    ctx->pc = 0x2B7170u;
label_2b7170:
    // 0x2b7170: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2b7170u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b7174: 0x8f829be8  lw          $v0, -0x6418($gp)
    ctx->pc = 0x2b7174u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941672)));
    // 0x2b7178: 0xc054bac  jal         func_152EB0
    ctx->pc = 0x2B7178u;
    SET_GPR_U32(ctx, 31, 0x2B7180u);
    ctx->pc = 0x2B717Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B7178u;
            // 0x2b717c: 0x24442428  addiu       $a0, $v0, 0x2428 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 9256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x152EB0u;
    if (runtime->hasFunction(0x152EB0u)) {
        auto targetFn = runtime->lookupFunction(0x152EB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B7180u; }
        if (ctx->pc != 0x2B7180u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetBuff_system__6ClsMesFPs_0x152eb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B7180u; }
        if (ctx->pc != 0x2B7180u) { return; }
    }
    ctx->pc = 0x2B7180u;
label_2b7180:
    // 0x2b7180: 0x8f829be8  lw          $v0, -0x6418($gp)
    ctx->pc = 0x2b7180u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941672)));
    // 0x2b7184: 0x8c450134  lw          $a1, 0x134($v0)
    ctx->pc = 0x2b7184u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 308)));
    // 0x2b7188: 0xc054ba8  jal         func_152EA0
    ctx->pc = 0x2B7188u;
    SET_GPR_U32(ctx, 31, 0x2B7190u);
    ctx->pc = 0x2B718Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B7188u;
            // 0x2b718c: 0x24442428  addiu       $a0, $v0, 0x2428 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 9256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x152EA0u;
    if (runtime->hasFunction(0x152EA0u)) {
        auto targetFn = runtime->lookupFunction(0x152EA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B7190u; }
        if (ctx->pc != 0x2B7190u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetBuff__6ClsMesFPs_0x152ea0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B7190u; }
        if (ctx->pc != 0x2B7190u) { return; }
    }
    ctx->pc = 0x2B7190u;
label_2b7190:
    // 0x2b7190: 0x8f838ad0  lw          $v1, -0x7530($gp)
    ctx->pc = 0x2b7190u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937296)));
    // 0x2b7194: 0x3c020035  lui         $v0, 0x35
    ctx->pc = 0x2b7194u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)53 << 16));
    // 0x2b7198: 0x8f849be8  lw          $a0, -0x6418($gp)
    ctx->pc = 0x2b7198u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941672)));
    // 0x2b719c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2b719cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b71a0: 0x24424b70  addiu       $v0, $v0, 0x4B70
    ctx->pc = 0x2b71a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 19312));
    // 0x2b71a4: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x2b71a4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b71a8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2b71a8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2b71ac: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2b71acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b71b0: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x2b71b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2b71b4: 0xc05638c  jal         func_158E30
    ctx->pc = 0x2B71B4u;
    SET_GPR_U32(ctx, 31, 0x2B71BCu);
    ctx->pc = 0x2B71B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B71B4u;
            // 0x2b71b8: 0x24842428  addiu       $a0, $a0, 0x2428 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 9256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x158E30u;
    if (runtime->hasFunction(0x158E30u)) {
        auto targetFn = runtime->lookupFunction(0x158E30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B71BCu; }
        if (ctx->pc != 0x2B71BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MakeMesWin__6ClsMesFPcii_0x158e30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B71BCu; }
        if (ctx->pc != 0x2B71BCu) { return; }
    }
    ctx->pc = 0x2B71BCu;
label_2b71bc:
    // 0x2b71bc: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x2b71bcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x2b71c0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2b71c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b71c4: 0x24a5f080  addiu       $a1, $a1, -0xF80
    ctx->pc = 0x2b71c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963328));
    // 0x2b71c8: 0xc052734  jal         func_149CD0
    ctx->pc = 0x2B71C8u;
    SET_GPR_U32(ctx, 31, 0x2B71D0u);
    ctx->pc = 0x2B71CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B71C8u;
            // 0x2b71cc: 0x27a6008c  addiu       $a2, $sp, 0x8C (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 140));
        ctx->in_delay_slot = false;
    ctx->pc = 0x149CD0u;
    if (runtime->hasFunction(0x149CD0u)) {
        auto targetFn = runtime->lookupFunction(0x149CD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B71D0u; }
        if (ctx->pc != 0x2B71D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPackFile__FPUiPcPi_0x149cd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B71D0u; }
        if (ctx->pc != 0x2B71D0u) { return; }
    }
    ctx->pc = 0x2B71D0u;
label_2b71d0:
    // 0x2b71d0: 0x8fa5008c  lw          $a1, 0x8C($sp)
    ctx->pc = 0x2b71d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 140)));
    // 0x2b71d4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2b71d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b71d8: 0xc094f98  jal         func_253E60
    ctx->pc = 0x2B71D8u;
    SET_GPR_U32(ctx, 31, 0x2B71E0u);
    ctx->pc = 0x2B71DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B71D8u;
            // 0x2b71dc: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x253E60u;
    if (runtime->hasFunction(0x253E60u)) {
        auto targetFn = runtime->lookupFunction(0x253E60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B71E0u; }
        if (ctx->pc != 0x2B71E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuDataAnalyze__FPciP9mgCMemory_0x253e60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B71E0u; }
        if (ctx->pc != 0x2B71E0u) { return; }
    }
    ctx->pc = 0x2B71E0u;
label_2b71e0:
    // 0x2b71e0: 0x8f829be8  lw          $v0, -0x6418($gp)
    ctx->pc = 0x2b71e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941672)));
    // 0x2b71e4: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x2b71e4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x2b71e8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2b71e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b71ec: 0x24a5f090  addiu       $a1, $a1, -0xF70
    ctx->pc = 0x2b71ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963344));
    // 0x2b71f0: 0xc052734  jal         func_149CD0
    ctx->pc = 0x2B71F0u;
    SET_GPR_U32(ctx, 31, 0x2B71F8u);
    ctx->pc = 0x2B71F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B71F0u;
            // 0x2b71f4: 0x2446000c  addiu       $a2, $v0, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
        ctx->in_delay_slot = false;
    ctx->pc = 0x149CD0u;
    if (runtime->hasFunction(0x149CD0u)) {
        auto targetFn = runtime->lookupFunction(0x149CD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B71F8u; }
        if (ctx->pc != 0x2B71F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPackFile__FPUiPcPi_0x149cd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B71F8u; }
        if (ctx->pc != 0x2B71F8u) { return; }
    }
    ctx->pc = 0x2B71F8u;
label_2b71f8:
    // 0x2b71f8: 0x8f839be8  lw          $v1, -0x6418($gp)
    ctx->pc = 0x2b71f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941672)));
    // 0x2b71fc: 0xac620008  sw          $v0, 0x8($v1)
    ctx->pc = 0x2b71fcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
    // 0x2b7200: 0xc0ad874  jal         func_2B61D0
    ctx->pc = 0x2B7200u;
    SET_GPR_U32(ctx, 31, 0x2B7208u);
    ctx->pc = 0x2B7204u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B7200u;
            // 0x2b7204: 0x8f849be8  lw          $a0, -0x6418($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941672)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2B61D0u;
    if (runtime->hasFunction(0x2B61D0u)) {
        auto targetFn = runtime->lookupFunction(0x2B61D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B7208u; }
        if (ctx->pc != 0x2B7208u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AttachForm__14CMenuMosSelectFv_0x2b61d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B7208u; }
        if (ctx->pc != 0x2B7208u) { return; }
    }
    ctx->pc = 0x2B7208u;
label_2b7208:
    // 0x2b7208: 0x8f849be8  lw          $a0, -0x6418($gp)
    ctx->pc = 0x2b7208u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941672)));
    // 0x2b720c: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x2b720cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x2b7210: 0xc08e7cc  jal         func_239F30
    ctx->pc = 0x2B7210u;
    SET_GPR_U32(ctx, 31, 0x2B7218u);
    ctx->pc = 0x2B7214u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B7210u;
            // 0x2b7214: 0x24a5f0a0  addiu       $a1, $a1, -0xF60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963360));
        ctx->in_delay_slot = false;
    ctx->pc = 0x239F30u;
    if (runtime->hasFunction(0x239F30u)) {
        auto targetFn = runtime->lookupFunction(0x239F30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B7218u; }
        if (ctx->pc != 0x2B7218u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ExeScript__14CBaseMenuClassFPc_0x239f30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B7218u; }
        if (ctx->pc != 0x2B7218u) { return; }
    }
    ctx->pc = 0x2B7218u;
label_2b7218:
    // 0x2b7218: 0x8f849be8  lw          $a0, -0x6418($gp)
    ctx->pc = 0x2b7218u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941672)));
    // 0x2b721c: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x2b721cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x2b7220: 0xc08e7cc  jal         func_239F30
    ctx->pc = 0x2B7220u;
    SET_GPR_U32(ctx, 31, 0x2B7228u);
    ctx->pc = 0x2B7224u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B7220u;
            // 0x2b7224: 0x24a5f0b0  addiu       $a1, $a1, -0xF50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963376));
        ctx->in_delay_slot = false;
    ctx->pc = 0x239F30u;
    if (runtime->hasFunction(0x239F30u)) {
        auto targetFn = runtime->lookupFunction(0x239F30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B7228u; }
        if (ctx->pc != 0x2B7228u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ExeScript__14CBaseMenuClassFPc_0x239f30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B7228u; }
        if (ctx->pc != 0x2B7228u) { return; }
    }
    ctx->pc = 0x2B7228u;
label_2b7228:
    // 0x2b7228: 0xc087d68  jal         func_21F5A0
    ctx->pc = 0x2B7228u;
    SET_GPR_U32(ctx, 31, 0x2B7230u);
    ctx->pc = 0x21F5A0u;
    if (runtime->hasFunction(0x21F5A0u)) {
        auto targetFn = runtime->lookupFunction(0x21F5A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B7230u; }
        if (ctx->pc != 0x2B7230u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AttachMessageForm__Fv_0x21f5a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B7230u; }
        if (ctx->pc != 0x2B7230u) { return; }
    }
    ctx->pc = 0x2B7230u;
label_2b7230:
    // 0x2b7230: 0xc04e780  jal         func_139E00
    ctx->pc = 0x2B7230u;
    SET_GPR_U32(ctx, 31, 0x2B7238u);
    ctx->pc = 0x2B7234u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B7230u;
            // 0x2b7234: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139E00u;
    if (runtime->hasFunction(0x139E00u)) {
        auto targetFn = runtime->lookupFunction(0x139E00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B7238u; }
        if (ctx->pc != 0x2B7238u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Align64__9mgCMemoryFv_0x139e00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B7238u; }
        if (ctx->pc != 0x2B7238u) { return; }
    }
    ctx->pc = 0x2B7238u;
label_2b7238:
    // 0x2b7238: 0x8e030028  lw          $v1, 0x28($s0)
    ctx->pc = 0x2b7238u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x2b723c: 0x3c0401f1  lui         $a0, 0x1F1
    ctx->pc = 0x2b723cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)497 << 16));
    // 0x2b7240: 0x8e050024  lw          $a1, 0x24($s0)
    ctx->pc = 0x2b7240u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x2b7244: 0x2484cf00  addiu       $a0, $a0, -0x3100
    ctx->pc = 0x2b7244u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954752));
    // 0x2b7248: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x2b7248u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x2b724c: 0x653023  subu        $a2, $v1, $a1
    ctx->pc = 0x2b724cu;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x2b7250: 0x51900  sll         $v1, $a1, 4
    ctx->pc = 0x2b7250u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x2b7254: 0xc04e79c  jal         func_139E70
    ctx->pc = 0x2B7254u;
    SET_GPR_U32(ctx, 31, 0x2B725Cu);
    ctx->pc = 0x2B7258u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B7254u;
            // 0x2b7258: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139E70u;
    if (runtime->hasFunction(0x139E70u)) {
        auto targetFn = runtime->lookupFunction(0x139E70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B725Cu; }
        if (ctx->pc != 0x2B725Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        stSetBuffer__9mgCMemoryFP1i_0x139e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B725Cu; }
        if (ctx->pc != 0x2B725Cu) { return; }
    }
    ctx->pc = 0x2B725Cu;
label_2b725c:
    // 0x2b725c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2b725cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b7260: 0x3c0401f1  lui         $a0, 0x1F1
    ctx->pc = 0x2b7260u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)497 << 16));
    // 0x2b7264: 0xa3829b72  sb          $v0, -0x648E($gp)
    ctx->pc = 0x2b7264u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294941554), (uint8_t)GPR_U32(ctx, 2));
    // 0x2b7268: 0x3c0501f1  lui         $a1, 0x1F1
    ctx->pc = 0x2b7268u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)497 << 16));
    // 0x2b726c: 0x3c0601f1  lui         $a2, 0x1F1
    ctx->pc = 0x2b726cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)497 << 16));
    // 0x2b7270: 0xa3809b70  sb          $zero, -0x6490($gp)
    ctx->pc = 0x2b7270u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294941552), (uint8_t)GPR_U32(ctx, 0));
    // 0x2b7274: 0x2484cf00  addiu       $a0, $a0, -0x3100
    ctx->pc = 0x2b7274u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954752));
    // 0x2b7278: 0x24a5cea0  addiu       $a1, $a1, -0x3160
    ctx->pc = 0x2b7278u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294954656));
    // 0x2b727c: 0x24c6cac0  addiu       $a2, $a2, -0x3540
    ctx->pc = 0x2b727cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294953664));
    // 0x2b7280: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x2b7280u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2b7284: 0xc0ac028  jal         func_2B00A0
    ctx->pc = 0x2B7284u;
    SET_GPR_U32(ctx, 31, 0x2B728Cu);
    ctx->pc = 0x2B7288u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B7284u;
            // 0x2b7288: 0xa3809b77  sb          $zero, -0x6489($gp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 28), 4294941559), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2B00A0u;
    if (runtime->hasFunction(0x2B00A0u)) {
        auto targetFn = runtime->lookupFunction(0x2B00A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B728Cu; }
        if (ctx->pc != 0x2B728Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuMemoryAdjust__FP9mgCMemoryP9mgCMemoryP9mgCMemoryi_0x2b00a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B728Cu; }
        if (ctx->pc != 0x2B728Cu) { return; }
    }
    ctx->pc = 0x2B728Cu;
label_2b728c:
    // 0x2b728c: 0x8f8294ac  lw          $v0, -0x6B54($gp)
    ctx->pc = 0x2b728cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939820)));
    // 0x2b7290: 0x3c010004  lui         $at, 0x4
    ctx->pc = 0x2b7290u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4 << 16));
    // 0x2b7294: 0x410821  addu        $at, $v0, $at
    ctx->pc = 0x2b7294u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 1)));
    // 0x2b7298: 0x84244d98  lh          $a0, 0x4D98($at)
    ctx->pc = 0x2b7298u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 19864)));
    // 0x2b729c: 0xc0ad6d0  jal         func_2B5B40
    ctx->pc = 0x2B729Cu;
    SET_GPR_U32(ctx, 31, 0x2B72A4u);
    ctx->pc = 0x2B72A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B729Cu;
            // 0x2b72a0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2B5B40u;
    if (runtime->hasFunction(0x2B5B40u)) {
        auto targetFn = runtime->lookupFunction(0x2B5B40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B72A4u; }
        if (ctx->pc != 0x2B72A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        get_gajji_id_from_monster_progress_table__FiPi_0x2b5b40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B72A4u; }
        if (ctx->pc != 0x2B72A4u) { return; }
    }
    ctx->pc = 0x2B72A4u;
label_2b72a4:
    // 0x2b72a4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2b72a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b72a8: 0x4810003  bgez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2B72A8u;
    {
        const bool branch_taken_0x2b72a8 = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x2B72ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B72A8u;
            // 0x2b72ac: 0x2881000c  slti        $at, $a0, 0xC (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)12) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b72a8) {
            ctx->pc = 0x2B72B8u;
            goto label_2b72b8;
        }
    }
    ctx->pc = 0x2B72B0u;
    // 0x2b72b0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2b72b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b72b4: 0x2881000c  slti        $at, $a0, 0xC
    ctx->pc = 0x2b72b4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)12) ? 1 : 0);
label_2b72b8:
    // 0x2b72b8: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x2B72B8u;
    {
        const bool branch_taken_0x2b72b8 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b72b8) {
            ctx->pc = 0x2B72C4u;
            goto label_2b72c4;
        }
    }
    ctx->pc = 0x2B72C0u;
    // 0x2b72c0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2b72c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2b72c4:
    // 0x2b72c4: 0x8f839be8  lw          $v1, -0x6418($gp)
    ctx->pc = 0x2b72c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941672)));
    // 0x2b72c8: 0xac640138  sw          $a0, 0x138($v1)
    ctx->pc = 0x2b72c8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 312), GPR_U32(ctx, 4));
    // 0x2b72cc: 0x8f859be8  lw          $a1, -0x6418($gp)
    ctx->pc = 0x2b72ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941672)));
    // 0x2b72d0: 0x8ca40138  lw          $a0, 0x138($a1)
    ctx->pc = 0x2b72d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 312)));
    // 0x2b72d4: 0x8ca60140  lw          $a2, 0x140($a1)
    ctx->pc = 0x2b72d4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 320)));
    // 0x2b72d8: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x2b72d8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x2b72dc: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2b72dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2b72e0: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x2b72e0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x2b72e4: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x2b72e4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2b72e8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2b72e8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2b72ec: 0x662021  addu        $a0, $v1, $a2
    ctx->pc = 0x2b72ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x2b72f0: 0x9083000a  lbu         $v1, 0xA($a0)
    ctx->pc = 0x2b72f0u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 10)));
    // 0x2b72f4: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2B72F4u;
    {
        const bool branch_taken_0x2b72f4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b72f4) {
            ctx->pc = 0x2B7304u;
            goto label_2b7304;
        }
    }
    ctx->pc = 0x2B72FCu;
    // 0x2b72fc: 0x84830008  lh          $v1, 0x8($a0)
    ctx->pc = 0x2b72fcu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x2b7300: 0xaca3465c  sw          $v1, 0x465C($a1)
    ctx->pc = 0x2b7300u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 18012), GPR_U32(ctx, 3));
label_2b7304:
    // 0x2b7304: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x2b7304u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2b7308: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2b7308u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2b730c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2b730cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2b7310: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2b7310u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b7314: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2b7314u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b7318: 0x3e00008  jr          $ra
    ctx->pc = 0x2B7318u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B731Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B7318u;
            // 0x2b731c: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2B7320u;
}
