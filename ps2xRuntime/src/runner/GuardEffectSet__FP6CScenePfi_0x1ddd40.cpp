#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GuardEffectSet__FP6CScenePfi
// Address: 0x1ddd40 - 0x1ddf5c
void GuardEffectSet__FP6CScenePfi_0x1ddd40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GuardEffectSet__FP6CScenePfi_0x1ddd40");
#endif

    switch (ctx->pc) {
        case 0x1ddd64u: goto label_1ddd64;
        case 0x1ddd78u: goto label_1ddd78;
        case 0x1ddd84u: goto label_1ddd84;
        case 0x1ddd94u: goto label_1ddd94;
        case 0x1ddda0u: goto label_1ddda0;
        case 0x1dddb4u: goto label_1dddb4;
        case 0x1dddc4u: goto label_1dddc4;
        case 0x1dde68u: goto label_1dde68;
        case 0x1dded0u: goto label_1dded0;
        case 0x1ddf30u: goto label_1ddf30;
        case 0x1ddf44u: goto label_1ddf44;
        default: break;
    }

    ctx->pc = 0x1ddd40u;

    // 0x1ddd40: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x1ddd40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x1ddd44: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1ddd44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1ddd48: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1ddd48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1ddd4c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1ddd4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1ddd50: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1ddd50u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ddd54: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1ddd54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1ddd58: 0x8c852e54  lw          $a1, 0x2E54($a0)
    ctx->pc = 0x1ddd58u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 11860)));
    // 0x1ddd5c: 0xc0a0e30  jal         func_2838C0
    ctx->pc = 0x1DDD5Cu;
    SET_GPR_U32(ctx, 31, 0x1DDD64u);
    ctx->pc = 0x1DDD60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DDD5Cu;
            // 0x1ddd60: 0xc0882d  daddu       $s1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2838C0u;
    if (runtime->hasFunction(0x2838C0u)) {
        auto targetFn = runtime->lookupFunction(0x2838C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DDD64u; }
        if (ctx->pc != 0x1DDD64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetCamera__6CSceneFi_0x2838c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DDD64u; }
        if (ctx->pc != 0x1DDD64u) { return; }
    }
    ctx->pc = 0x1DDD64u;
label_1ddd64:
    // 0x1ddd64: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1ddd64u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ddd68: 0x12000076  beqz        $s0, . + 4 + (0x76 << 2)
    ctx->pc = 0x1DDD68u;
    {
        const bool branch_taken_0x1ddd68 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DDD6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DDD68u;
            // 0x1ddd6c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ddd68) {
            ctx->pc = 0x1DDF44u;
            goto label_1ddf44;
        }
    }
    ctx->pc = 0x1DDD70u;
    // 0x1ddd70: 0xc041c5c  jal         func_107170
    ctx->pc = 0x1DDD70u;
    SET_GPR_U32(ctx, 31, 0x1DDD78u);
    ctx->pc = 0x1DDD74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DDD70u;
            // 0x1ddd74: 0x27a40050  addiu       $a0, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107170u;
    if (runtime->hasFunction(0x107170u)) {
        auto targetFn = runtime->lookupFunction(0x107170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DDD78u; }
        if (ctx->pc != 0x1DDD78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0CopyVector_0x107170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DDD78u; }
        if (ctx->pc != 0x1DDD78u) { return; }
    }
    ctx->pc = 0x1DDD78u;
label_1ddd78:
    // 0x1ddd78: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ddd78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ddd7c: 0xc04c574  jal         func_1315D0
    ctx->pc = 0x1DDD7Cu;
    SET_GPR_U32(ctx, 31, 0x1DDD84u);
    ctx->pc = 0x1DDD80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DDD7Cu;
            // 0x1ddd80: 0x27a50040  addiu       $a1, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1315D0u;
    if (runtime->hasFunction(0x1315D0u)) {
        auto targetFn = runtime->lookupFunction(0x1315D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DDD84u; }
        if (ctx->pc != 0x1DDD84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPos__9mgCCameraFPf_0x1315d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DDD84u; }
        if (ctx->pc != 0x1DDD84u) { return; }
    }
    ctx->pc = 0x1DDD84u;
label_1ddd84:
    // 0x1ddd84: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x1ddd84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1ddd88: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x1ddd88u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1ddd8c: 0xc041c3e  jal         func_1070F8
    ctx->pc = 0x1DDD8Cu;
    SET_GPR_U32(ctx, 31, 0x1DDD94u);
    ctx->pc = 0x1DDD90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DDD8Cu;
            // 0x1ddd90: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1070F8u;
    if (runtime->hasFunction(0x1070F8u)) {
        auto targetFn = runtime->lookupFunction(0x1070F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DDD94u; }
        if (ctx->pc != 0x1DDD94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0SubVector_0x1070f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DDD94u; }
        if (ctx->pc != 0x1DDD94u) { return; }
    }
    ctx->pc = 0x1DDD94u;
label_1ddd94:
    // 0x1ddd94: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x1ddd94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1ddd98: 0xc041be0  jal         func_106F80
    ctx->pc = 0x1DDD98u;
    SET_GPR_U32(ctx, 31, 0x1DDDA0u);
    ctx->pc = 0x1DDD9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DDD98u;
            // 0x1ddd9c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x106F80u;
    if (runtime->hasFunction(0x106F80u)) {
        auto targetFn = runtime->lookupFunction(0x106F80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DDDA0u; }
        if (ctx->pc != 0x1DDDA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0Normalize_0x106f80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DDDA0u; }
        if (ctx->pc != 0x1DDDA0u) { return; }
    }
    ctx->pc = 0x1DDDA0u;
label_1ddda0:
    // 0x1ddda0: 0x3c0241a0  lui         $v0, 0x41A0
    ctx->pc = 0x1ddda0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16800 << 16));
    // 0x1ddda4: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x1ddda4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1ddda8: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1ddda8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1dddac: 0xc041c4a  jal         func_107128
    ctx->pc = 0x1DDDACu;
    SET_GPR_U32(ctx, 31, 0x1DDDB4u);
    ctx->pc = 0x1DDDB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DDDACu;
            // 0x1dddb0: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107128u;
    if (runtime->hasFunction(0x107128u)) {
        auto targetFn = runtime->lookupFunction(0x107128u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DDDB4u; }
        if (ctx->pc != 0x1DDDB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0ScaleVector_0x107128(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DDDB4u; }
        if (ctx->pc != 0x1DDDB4u) { return; }
    }
    ctx->pc = 0x1DDDB4u;
label_1dddb4:
    // 0x1dddb4: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x1dddb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1dddb8: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x1dddb8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1dddbc: 0xc041c38  jal         func_1070E0
    ctx->pc = 0x1DDDBCu;
    SET_GPR_U32(ctx, 31, 0x1DDDC4u);
    ctx->pc = 0x1DDDC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DDDBCu;
            // 0x1dddc0: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1070E0u;
    if (runtime->hasFunction(0x1070E0u)) {
        auto targetFn = runtime->lookupFunction(0x1070E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DDDC4u; }
        if (ctx->pc != 0x1DDDC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0AddVector_0x1070e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DDDC4u; }
        if (ctx->pc != 0x1DDDC4u) { return; }
    }
    ctx->pc = 0x1DDDC4u;
label_1dddc4:
    // 0x1dddc4: 0x3c020035  lui         $v0, 0x35
    ctx->pc = 0x1dddc4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)53 << 16));
    // 0x1dddc8: 0x27a30060  addiu       $v1, $sp, 0x60
    ctx->pc = 0x1dddc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1dddcc: 0x2442d150  addiu       $v0, $v0, -0x2EB0
    ctx->pc = 0x1dddccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294955344));
    // 0x1dddd0: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x1dddd0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
    // 0x1dddd4: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x1dddd4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1dddd8: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x1dddd8u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x1ddddc: 0x8c260324  lw          $a2, 0x324($at)
    ctx->pc = 0x1ddddcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 804)));
    // 0x1ddde0: 0x14c00003  bnez        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x1DDDE0u;
    {
        const bool branch_taken_0x1ddde0 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DDDE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DDDE0u;
            // 0x1ddde4: 0x3c0101ea  lui         $at, 0x1EA (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ddde0) {
            ctx->pc = 0x1DDDF0u;
            goto label_1dddf0;
        }
    }
    ctx->pc = 0x1DDDE8u;
    // 0x1ddde8: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x1DDDE8u;
    {
        const bool branch_taken_0x1ddde8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DDDECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DDDE8u;
            // 0x1dddec: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ddde8) {
            ctx->pc = 0x1DDE30u;
            goto label_1dde30;
        }
    }
    ctx->pc = 0x1DDDF0u;
label_1dddf0:
    // 0x1dddf0: 0x8c25032c  lw          $a1, 0x32C($at)
    ctx->pc = 0x1dddf0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 812)));
    // 0x1dddf4: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x1dddf4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
    // 0x1dddf8: 0x52040  sll         $a0, $a1, 1
    ctx->pc = 0x1dddf8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x1dddfc: 0x8c220328  lw          $v0, 0x328($at)
    ctx->pc = 0x1dddfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 808)));
    // 0x1dde00: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x1dde00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x1dde04: 0x42140  sll         $a0, $a0, 5
    ctx->pc = 0x1dde04u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
    // 0x1dde08: 0x24a30001  addiu       $v1, $a1, 0x1
    ctx->pc = 0x1dde08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x1dde0c: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x1dde0cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
    // 0x1dde10: 0xac23032c  sw          $v1, 0x32C($at)
    ctx->pc = 0x1dde10u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 812), GPR_U32(ctx, 3));
    // 0x1dde14: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x1dde14u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
    // 0x1dde18: 0x8c23032c  lw          $v1, 0x32C($at)
    ctx->pc = 0x1dde18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 812)));
    // 0x1dde1c: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x1dde1cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1dde20: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1DDE20u;
    {
        const bool branch_taken_0x1dde20 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DDE24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DDE20u;
            // 0x1dde24: 0xc48021  addu        $s0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dde20) {
            ctx->pc = 0x1DDE30u;
            goto label_1dde30;
        }
    }
    ctx->pc = 0x1DDE28u;
    // 0x1dde28: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x1dde28u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
    // 0x1dde2c: 0xac20032c  sw          $zero, 0x32C($at)
    ctx->pc = 0x1dde2cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 812), GPR_U32(ctx, 0));
label_1dde30:
    // 0x1dde30: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x1dde30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
    // 0x1dde34: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1dde34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dde38: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1dde38u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1dde3c: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x1dde3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1dde40: 0x44807000  mtc1        $zero, $f14
    ctx->pc = 0x1dde40u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x1dde44: 0x27a60060  addiu       $a2, $sp, 0x60
    ctx->pc = 0x1dde44u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1dde48: 0x3c0241f0  lui         $v0, 0x41F0
    ctx->pc = 0x1dde48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16880 << 16));
    // 0x1dde4c: 0x2407001e  addiu       $a3, $zero, 0x1E
    ctx->pc = 0x1dde4cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x1dde50: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x1dde50u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x1dde54: 0x3c023dcc  lui         $v0, 0x3DCC
    ctx->pc = 0x1dde54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15820 << 16));
    // 0x1dde58: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x1dde58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x1dde5c: 0x44827800  mtc1        $v0, $f15
    ctx->pc = 0x1dde5cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
    // 0x1dde60: 0xc07098c  jal         func_1C2630
    ctx->pc = 0x1DDE60u;
    SET_GPR_U32(ctx, 31, 0x1DDE68u);
    ctx->pc = 0x1DDE64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DDE60u;
            // 0x1dde64: 0x24080020  addiu       $t0, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C2630u;
    if (runtime->hasFunction(0x1C2630u)) {
        auto targetFn = runtime->lookupFunction(0x1C2630u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DDE68u; }
        if (ctx->pc != 0x1DDE68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SethitEffect__15CHitEffectImageFPfPfffffii_0x1c2630(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DDE68u; }
        if (ctx->pc != 0x1DDE68u) { return; }
    }
    ctx->pc = 0x1DDE68u;
label_1dde68:
    // 0x1dde68: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1dde68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1dde6c: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x1dde6cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
    // 0x1dde70: 0xae030044  sw          $v1, 0x44($s0)
    ctx->pc = 0x1dde70u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 68), GPR_U32(ctx, 3));
    // 0x1dde74: 0x8c260330  lw          $a2, 0x330($at)
    ctx->pc = 0x1dde74u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 816)));
    // 0x1dde78: 0x14c00003  bnez        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x1DDE78u;
    {
        const bool branch_taken_0x1dde78 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DDE7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DDE78u;
            // 0x1dde7c: 0x3c0101ea  lui         $at, 0x1EA (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dde78) {
            ctx->pc = 0x1DDE88u;
            goto label_1dde88;
        }
    }
    ctx->pc = 0x1DDE80u;
    // 0x1dde80: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x1DDE80u;
    {
        const bool branch_taken_0x1dde80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DDE84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DDE80u;
            // 0x1dde84: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dde80) {
            ctx->pc = 0x1DDEC0u;
            goto label_1ddec0;
        }
    }
    ctx->pc = 0x1DDE88u;
label_1dde88:
    // 0x1dde88: 0x8c240338  lw          $a0, 0x338($at)
    ctx->pc = 0x1dde88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 824)));
    // 0x1dde8c: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x1dde8cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
    // 0x1dde90: 0x42980  sll         $a1, $a0, 6
    ctx->pc = 0x1dde90u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 6));
    // 0x1dde94: 0x8c230334  lw          $v1, 0x334($at)
    ctx->pc = 0x1dde94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 820)));
    // 0x1dde98: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x1dde98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x1dde9c: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x1dde9cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
    // 0x1ddea0: 0xac240338  sw          $a0, 0x338($at)
    ctx->pc = 0x1ddea0u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 824), GPR_U32(ctx, 4));
    // 0x1ddea4: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x1ddea4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
    // 0x1ddea8: 0x8c240338  lw          $a0, 0x338($at)
    ctx->pc = 0x1ddea8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 824)));
    // 0x1ddeac: 0x83182a  slt         $v1, $a0, $v1
    ctx->pc = 0x1ddeacu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1ddeb0: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1DDEB0u;
    {
        const bool branch_taken_0x1ddeb0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DDEB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DDEB0u;
            // 0x1ddeb4: 0xc58021  addu        $s0, $a2, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ddeb0) {
            ctx->pc = 0x1DDEC0u;
            goto label_1ddec0;
        }
    }
    ctx->pc = 0x1DDEB8u;
    // 0x1ddeb8: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x1ddeb8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
    // 0x1ddebc: 0xac200338  sw          $zero, 0x338($at)
    ctx->pc = 0x1ddebcu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 824), GPR_U32(ctx, 0));
label_1ddec0:
    // 0x1ddec0: 0x12000013  beqz        $s0, . + 4 + (0x13 << 2)
    ctx->pc = 0x1DDEC0u;
    {
        const bool branch_taken_0x1ddec0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DDEC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DDEC0u;
            // 0x1ddec4: 0x26040010  addiu       $a0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ddec0) {
            ctx->pc = 0x1DDF10u;
            goto label_1ddf10;
        }
    }
    ctx->pc = 0x1DDEC8u;
    // 0x1ddec8: 0xc041c5c  jal         func_107170
    ctx->pc = 0x1DDEC8u;
    SET_GPR_U32(ctx, 31, 0x1DDED0u);
    ctx->pc = 0x1DDECCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DDEC8u;
            // 0x1ddecc: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107170u;
    if (runtime->hasFunction(0x107170u)) {
        auto targetFn = runtime->lookupFunction(0x107170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DDED0u; }
        if (ctx->pc != 0x1DDED0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0CopyVector_0x107170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DDED0u; }
        if (ctx->pc != 0x1DDED0u) { return; }
    }
    ctx->pc = 0x1DDED0u;
label_1dded0:
    // 0x1dded0: 0x3c034180  lui         $v1, 0x4180
    ctx->pc = 0x1dded0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16768 << 16));
    // 0x1dded4: 0x240400a0  addiu       $a0, $zero, 0xA0
    ctx->pc = 0x1dded4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 160));
    // 0x1dded8: 0xae030020  sw          $v1, 0x20($s0)
    ctx->pc = 0x1dded8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 3));
    // 0x1ddedc: 0xa6040024  sh          $a0, 0x24($s0)
    ctx->pc = 0x1ddedcu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 36), (uint16_t)GPR_U32(ctx, 4));
    // 0x1ddee0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1ddee0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ddee4: 0xa6030030  sh          $v1, 0x30($s0)
    ctx->pc = 0x1ddee4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 48), (uint16_t)GPR_U32(ctx, 3));
    // 0x1ddee8: 0x3c044120  lui         $a0, 0x4120
    ctx->pc = 0x1ddee8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16672 << 16));
    // 0x1ddeec: 0xae040028  sw          $a0, 0x28($s0)
    ctx->pc = 0x1ddeecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 4));
    // 0x1ddef0: 0x3c034040  lui         $v1, 0x4040
    ctx->pc = 0x1ddef0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16448 << 16));
    // 0x1ddef4: 0xae03002c  sw          $v1, 0x2C($s0)
    ctx->pc = 0x1ddef4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 3));
    // 0x1ddef8: 0x24040040  addiu       $a0, $zero, 0x40
    ctx->pc = 0x1ddef8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x1ddefc: 0x240300c0  addiu       $v1, $zero, 0xC0
    ctx->pc = 0x1ddefcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
    // 0x1ddf00: 0xa6040032  sh          $a0, 0x32($s0)
    ctx->pc = 0x1ddf00u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 50), (uint16_t)GPR_U32(ctx, 4));
    // 0x1ddf04: 0xa6030034  sh          $v1, 0x34($s0)
    ctx->pc = 0x1ddf04u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 52), (uint16_t)GPR_U32(ctx, 3));
    // 0x1ddf08: 0xa6040036  sh          $a0, 0x36($s0)
    ctx->pc = 0x1ddf08u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 54), (uint16_t)GPR_U32(ctx, 4));
    // 0x1ddf0c: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x1ddf0cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_1ddf10:
    // 0x1ddf10: 0x1220000c  beqz        $s1, . + 4 + (0xC << 2)
    ctx->pc = 0x1DDF10u;
    {
        const bool branch_taken_0x1ddf10 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ddf10) {
            ctx->pc = 0x1DDF44u;
            goto label_1ddf44;
        }
    }
    ctx->pc = 0x1DDF18u;
    // 0x1ddf18: 0x8f848ddc  lw          $a0, -0x7224($gp)
    ctx->pc = 0x1ddf18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938076)));
    // 0x1ddf1c: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x1ddf1cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
    // 0x1ddf20: 0x24a57f70  addiu       $a1, $a1, 0x7F70
    ctx->pc = 0x1ddf20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32624));
    // 0x1ddf24: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1ddf24u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ddf28: 0xc0b8498  jal         func_2E1260
    ctx->pc = 0x1DDF28u;
    SET_GPR_U32(ctx, 31, 0x1DDF30u);
    ctx->pc = 0x1DDF2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DDF28u;
            // 0x1ddf2c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E1260u;
    if (runtime->hasFunction(0x2E1260u)) {
        auto targetFn = runtime->lookupFunction(0x2E1260u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DDF30u; }
        if (ctx->pc != 0x1DDF30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEffSpt__16CEffectScriptManFPcii_0x2e1260(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DDF30u; }
        if (ctx->pc != 0x1DDF30u) { return; }
    }
    ctx->pc = 0x1DDF30u;
label_1ddf30:
    // 0x1ddf30: 0x8f848ddc  lw          $a0, -0x7224($gp)
    ctx->pc = 0x1ddf30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938076)));
    // 0x1ddf34: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x1ddf34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1ddf38: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1ddf38u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ddf3c: 0xc0b8894  jal         func_2E2250
    ctx->pc = 0x1DDF3Cu;
    SET_GPR_U32(ctx, 31, 0x1DDF44u);
    ctx->pc = 0x1DDF40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DDF3Cu;
            // 0x1ddf40: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E2250u;
    if (runtime->hasFunction(0x2E2250u)) {
        auto targetFn = runtime->lookupFunction(0x2E2250u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DDF44u; }
        if (ctx->pc != 0x1DDF44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetScriptVect1__16CEffectScriptManFPfii_0x2e2250(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DDF44u; }
        if (ctx->pc != 0x1DDF44u) { return; }
    }
    ctx->pc = 0x1DDF44u;
label_1ddf44:
    // 0x1ddf44: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1ddf44u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1ddf48: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1ddf48u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ddf4c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1ddf4cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ddf50: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1ddf50u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ddf54: 0x3e00008  jr          $ra
    ctx->pc = 0x1DDF54u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DDF58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DDF54u;
            // 0x1ddf58: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1DDF5Cu;
}
