#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: HitEffectSet__FP6CScenePfi
// Address: 0x1dda00 - 0x1ddd34
void HitEffectSet__FP6CScenePfi_0x1dda00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("HitEffectSet__FP6CScenePfi_0x1dda00");
#endif

    switch (ctx->pc) {
        case 0x1dda24u: goto label_1dda24;
        case 0x1dda38u: goto label_1dda38;
        case 0x1dda44u: goto label_1dda44;
        case 0x1dda54u: goto label_1dda54;
        case 0x1dda60u: goto label_1dda60;
        case 0x1dda74u: goto label_1dda74;
        case 0x1dda84u: goto label_1dda84;
        case 0x1ddb38u: goto label_1ddb38;
        case 0x1ddb54u: goto label_1ddb54;
        case 0x1ddbf4u: goto label_1ddbf4;
        case 0x1ddc48u: goto label_1ddc48;
        case 0x1ddd14u: goto label_1ddd14;
        default: break;
    }

    ctx->pc = 0x1dda00u;

    // 0x1dda00: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x1dda00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x1dda04: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1dda04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1dda08: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1dda08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1dda0c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1dda0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1dda10: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1dda10u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dda14: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1dda14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1dda18: 0x8c852e54  lw          $a1, 0x2E54($a0)
    ctx->pc = 0x1dda18u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 11860)));
    // 0x1dda1c: 0xc0a0e30  jal         func_2838C0
    ctx->pc = 0x1DDA1Cu;
    SET_GPR_U32(ctx, 31, 0x1DDA24u);
    ctx->pc = 0x1DDA20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DDA1Cu;
            // 0x1dda20: 0xc0882d  daddu       $s1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2838C0u;
    if (runtime->hasFunction(0x2838C0u)) {
        auto targetFn = runtime->lookupFunction(0x2838C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DDA24u; }
        if (ctx->pc != 0x1DDA24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetCamera__6CSceneFi_0x2838c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DDA24u; }
        if (ctx->pc != 0x1DDA24u) { return; }
    }
    ctx->pc = 0x1DDA24u;
label_1dda24:
    // 0x1dda24: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1dda24u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dda28: 0x120000bc  beqz        $s0, . + 4 + (0xBC << 2)
    ctx->pc = 0x1DDA28u;
    {
        const bool branch_taken_0x1dda28 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DDA2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DDA28u;
            // 0x1dda2c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dda28) {
            ctx->pc = 0x1DDD1Cu;
            goto label_1ddd1c;
        }
    }
    ctx->pc = 0x1DDA30u;
    // 0x1dda30: 0xc041c5c  jal         func_107170
    ctx->pc = 0x1DDA30u;
    SET_GPR_U32(ctx, 31, 0x1DDA38u);
    ctx->pc = 0x1DDA34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DDA30u;
            // 0x1dda34: 0x27a40050  addiu       $a0, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107170u;
    if (runtime->hasFunction(0x107170u)) {
        auto targetFn = runtime->lookupFunction(0x107170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DDA38u; }
        if (ctx->pc != 0x1DDA38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0CopyVector_0x107170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DDA38u; }
        if (ctx->pc != 0x1DDA38u) { return; }
    }
    ctx->pc = 0x1DDA38u;
label_1dda38:
    // 0x1dda38: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1dda38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dda3c: 0xc04c574  jal         func_1315D0
    ctx->pc = 0x1DDA3Cu;
    SET_GPR_U32(ctx, 31, 0x1DDA44u);
    ctx->pc = 0x1DDA40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DDA3Cu;
            // 0x1dda40: 0x27a50040  addiu       $a1, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1315D0u;
    if (runtime->hasFunction(0x1315D0u)) {
        auto targetFn = runtime->lookupFunction(0x1315D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DDA44u; }
        if (ctx->pc != 0x1DDA44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPos__9mgCCameraFPf_0x1315d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DDA44u; }
        if (ctx->pc != 0x1DDA44u) { return; }
    }
    ctx->pc = 0x1DDA44u;
label_1dda44:
    // 0x1dda44: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x1dda44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1dda48: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x1dda48u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1dda4c: 0xc041c3e  jal         func_1070F8
    ctx->pc = 0x1DDA4Cu;
    SET_GPR_U32(ctx, 31, 0x1DDA54u);
    ctx->pc = 0x1DDA50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DDA4Cu;
            // 0x1dda50: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1070F8u;
    if (runtime->hasFunction(0x1070F8u)) {
        auto targetFn = runtime->lookupFunction(0x1070F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DDA54u; }
        if (ctx->pc != 0x1DDA54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0SubVector_0x1070f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DDA54u; }
        if (ctx->pc != 0x1DDA54u) { return; }
    }
    ctx->pc = 0x1DDA54u;
label_1dda54:
    // 0x1dda54: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x1dda54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1dda58: 0xc041be0  jal         func_106F80
    ctx->pc = 0x1DDA58u;
    SET_GPR_U32(ctx, 31, 0x1DDA60u);
    ctx->pc = 0x1DDA5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DDA58u;
            // 0x1dda5c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x106F80u;
    if (runtime->hasFunction(0x106F80u)) {
        auto targetFn = runtime->lookupFunction(0x106F80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DDA60u; }
        if (ctx->pc != 0x1DDA60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0Normalize_0x106f80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DDA60u; }
        if (ctx->pc != 0x1DDA60u) { return; }
    }
    ctx->pc = 0x1DDA60u;
label_1dda60:
    // 0x1dda60: 0x3c0241a0  lui         $v0, 0x41A0
    ctx->pc = 0x1dda60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16800 << 16));
    // 0x1dda64: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x1dda64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1dda68: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1dda68u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1dda6c: 0xc041c4a  jal         func_107128
    ctx->pc = 0x1DDA6Cu;
    SET_GPR_U32(ctx, 31, 0x1DDA74u);
    ctx->pc = 0x1DDA70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DDA6Cu;
            // 0x1dda70: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107128u;
    if (runtime->hasFunction(0x107128u)) {
        auto targetFn = runtime->lookupFunction(0x107128u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DDA74u; }
        if (ctx->pc != 0x1DDA74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0ScaleVector_0x107128(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DDA74u; }
        if (ctx->pc != 0x1DDA74u) { return; }
    }
    ctx->pc = 0x1DDA74u;
label_1dda74:
    // 0x1dda74: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x1dda74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1dda78: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x1dda78u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1dda7c: 0xc041c38  jal         func_1070E0
    ctx->pc = 0x1DDA7Cu;
    SET_GPR_U32(ctx, 31, 0x1DDA84u);
    ctx->pc = 0x1DDA80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DDA7Cu;
            // 0x1dda80: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1070E0u;
    if (runtime->hasFunction(0x1070E0u)) {
        auto targetFn = runtime->lookupFunction(0x1070E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DDA84u; }
        if (ctx->pc != 0x1DDA84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0AddVector_0x1070e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DDA84u; }
        if (ctx->pc != 0x1DDA84u) { return; }
    }
    ctx->pc = 0x1DDA84u;
label_1dda84:
    // 0x1dda84: 0x3c030035  lui         $v1, 0x35
    ctx->pc = 0x1dda84u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)53 << 16));
    // 0x1dda88: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x1dda88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1dda8c: 0x2463d140  addiu       $v1, $v1, -0x2EC0
    ctx->pc = 0x1dda8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294955328));
    // 0x1dda90: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x1dda90u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
    // 0x1dda94: 0x78630000  lq          $v1, 0x0($v1)
    ctx->pc = 0x1dda94u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1dda98: 0x7c830000  sq          $v1, 0x0($a0)
    ctx->pc = 0x1dda98u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 3));
    // 0x1dda9c: 0x8c270324  lw          $a3, 0x324($at)
    ctx->pc = 0x1dda9cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 804)));
    // 0x1ddaa0: 0x14e00003  bnez        $a3, . + 4 + (0x3 << 2)
    ctx->pc = 0x1DDAA0u;
    {
        const bool branch_taken_0x1ddaa0 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DDAA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DDAA0u;
            // 0x1ddaa4: 0x3c0101ea  lui         $at, 0x1EA (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ddaa0) {
            ctx->pc = 0x1DDAB0u;
            goto label_1ddab0;
        }
    }
    ctx->pc = 0x1DDAA8u;
    // 0x1ddaa8: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x1DDAA8u;
    {
        const bool branch_taken_0x1ddaa8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DDAACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DDAA8u;
            // 0x1ddaac: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ddaa8) {
            ctx->pc = 0x1DDAF0u;
            goto label_1ddaf0;
        }
    }
    ctx->pc = 0x1DDAB0u;
label_1ddab0:
    // 0x1ddab0: 0x8c26032c  lw          $a2, 0x32C($at)
    ctx->pc = 0x1ddab0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 812)));
    // 0x1ddab4: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x1ddab4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
    // 0x1ddab8: 0x62840  sll         $a1, $a2, 1
    ctx->pc = 0x1ddab8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
    // 0x1ddabc: 0x8c230328  lw          $v1, 0x328($at)
    ctx->pc = 0x1ddabcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 808)));
    // 0x1ddac0: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x1ddac0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x1ddac4: 0x52940  sll         $a1, $a1, 5
    ctx->pc = 0x1ddac4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
    // 0x1ddac8: 0x24c40001  addiu       $a0, $a2, 0x1
    ctx->pc = 0x1ddac8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x1ddacc: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x1ddaccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
    // 0x1ddad0: 0xac24032c  sw          $a0, 0x32C($at)
    ctx->pc = 0x1ddad0u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 812), GPR_U32(ctx, 4));
    // 0x1ddad4: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x1ddad4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
    // 0x1ddad8: 0x8c24032c  lw          $a0, 0x32C($at)
    ctx->pc = 0x1ddad8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 812)));
    // 0x1ddadc: 0x83182a  slt         $v1, $a0, $v1
    ctx->pc = 0x1ddadcu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1ddae0: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1DDAE0u;
    {
        const bool branch_taken_0x1ddae0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DDAE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DDAE0u;
            // 0x1ddae4: 0xe58021  addu        $s0, $a3, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ddae0) {
            ctx->pc = 0x1DDAF0u;
            goto label_1ddaf0;
        }
    }
    ctx->pc = 0x1DDAE8u;
    // 0x1ddae8: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x1ddae8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
    // 0x1ddaec: 0xac20032c  sw          $zero, 0x32C($at)
    ctx->pc = 0x1ddaecu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 812), GPR_U32(ctx, 0));
label_1ddaf0:
    // 0x1ddaf0: 0x12000024  beqz        $s0, . + 4 + (0x24 << 2)
    ctx->pc = 0x1DDAF0u;
    {
        const bool branch_taken_0x1ddaf0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ddaf0) {
            ctx->pc = 0x1DDB84u;
            goto label_1ddb84;
        }
    }
    ctx->pc = 0x1DDAF8u;
    // 0x1ddaf8: 0x3c0241f0  lui         $v0, 0x41F0
    ctx->pc = 0x1ddaf8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16880 << 16));
    // 0x1ddafc: 0x3c034270  lui         $v1, 0x4270
    ctx->pc = 0x1ddafcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17008 << 16));
    // 0x1ddb00: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1ddb00u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1ddb04: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ddb04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ddb08: 0x44836800  mtc1        $v1, $f13
    ctx->pc = 0x1ddb08u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x1ddb0c: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x1ddb0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1ddb10: 0x3c023e4c  lui         $v0, 0x3E4C
    ctx->pc = 0x1ddb10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15948 << 16));
    // 0x1ddb14: 0x27a60060  addiu       $a2, $sp, 0x60
    ctx->pc = 0x1ddb14u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1ddb18: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x1ddb18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x1ddb1c: 0x2407001e  addiu       $a3, $zero, 0x1E
    ctx->pc = 0x1ddb1cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x1ddb20: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x1ddb20u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x1ddb24: 0x3c023dcc  lui         $v0, 0x3DCC
    ctx->pc = 0x1ddb24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15820 << 16));
    // 0x1ddb28: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x1ddb28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x1ddb2c: 0x44827800  mtc1        $v0, $f15
    ctx->pc = 0x1ddb2cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
    // 0x1ddb30: 0xc07098c  jal         func_1C2630
    ctx->pc = 0x1DDB30u;
    SET_GPR_U32(ctx, 31, 0x1DDB38u);
    ctx->pc = 0x1DDB34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DDB30u;
            // 0x1ddb34: 0x24080020  addiu       $t0, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C2630u;
    if (runtime->hasFunction(0x1C2630u)) {
        auto targetFn = runtime->lookupFunction(0x1C2630u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DDB38u; }
        if (ctx->pc != 0x1DDB38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SethitEffect__15CHitEffectImageFPfPfffffii_0x1c2630(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DDB38u; }
        if (ctx->pc != 0x1DDB38u) { return; }
    }
    ctx->pc = 0x1DDB38u;
label_1ddb38:
    // 0x1ddb38: 0x24050020  addiu       $a1, $zero, 0x20
    ctx->pc = 0x1ddb38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x1ddb3c: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x1ddb3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x1ddb40: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1ddb40u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ddb44: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x1ddb44u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ddb48: 0xa0402d  daddu       $t0, $a1, $zero
    ctx->pc = 0x1ddb48u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ddb4c: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x1DDB4Cu;
    SET_GPR_U32(ctx, 31, 0x1DDB54u);
    ctx->pc = 0x1DDB50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DDB4Cu;
            // 0x1ddb50: 0xae000044  sw          $zero, 0x44($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 68), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DDB54u; }
        if (ctx->pc != 0x1DDB54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DDB54u; }
        if (ctx->pc != 0x1DDB54u) { return; }
    }
    ctx->pc = 0x1DDB54u;
label_1ddb54:
    // 0x1ddb54: 0x27a30070  addiu       $v1, $sp, 0x70
    ctx->pc = 0x1ddb54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x1ddb58: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x1ddb58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x1ddb5c: 0x78630000  lq          $v1, 0x0($v1)
    ctx->pc = 0x1ddb5cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1ddb60: 0x7c830000  sq          $v1, 0x0($a0)
    ctx->pc = 0x1ddb60u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 3));
    // 0x1ddb64: 0x8fa30080  lw          $v1, 0x80($sp)
    ctx->pc = 0x1ddb64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1ddb68: 0xae030050  sw          $v1, 0x50($s0)
    ctx->pc = 0x1ddb68u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 3));
    // 0x1ddb6c: 0x8fa30084  lw          $v1, 0x84($sp)
    ctx->pc = 0x1ddb6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 132)));
    // 0x1ddb70: 0xae030054  sw          $v1, 0x54($s0)
    ctx->pc = 0x1ddb70u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 3));
    // 0x1ddb74: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x1ddb74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x1ddb78: 0xae030058  sw          $v1, 0x58($s0)
    ctx->pc = 0x1ddb78u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 88), GPR_U32(ctx, 3));
    // 0x1ddb7c: 0x8fa3008c  lw          $v1, 0x8C($sp)
    ctx->pc = 0x1ddb7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 140)));
    // 0x1ddb80: 0xae03005c  sw          $v1, 0x5C($s0)
    ctx->pc = 0x1ddb80u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 92), GPR_U32(ctx, 3));
label_1ddb84:
    // 0x1ddb84: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x1ddb84u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
    // 0x1ddb88: 0x8c260330  lw          $a2, 0x330($at)
    ctx->pc = 0x1ddb88u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 816)));
    // 0x1ddb8c: 0x14c00003  bnez        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x1DDB8Cu;
    {
        const bool branch_taken_0x1ddb8c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DDB90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DDB8Cu;
            // 0x1ddb90: 0x3c0101ea  lui         $at, 0x1EA (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ddb8c) {
            ctx->pc = 0x1DDB9Cu;
            goto label_1ddb9c;
        }
    }
    ctx->pc = 0x1DDB94u;
    // 0x1ddb94: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x1DDB94u;
    {
        const bool branch_taken_0x1ddb94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DDB98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DDB94u;
            // 0x1ddb98: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ddb94) {
            ctx->pc = 0x1DDBD4u;
            goto label_1ddbd4;
        }
    }
    ctx->pc = 0x1DDB9Cu;
label_1ddb9c:
    // 0x1ddb9c: 0x8c240338  lw          $a0, 0x338($at)
    ctx->pc = 0x1ddb9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 824)));
    // 0x1ddba0: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x1ddba0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
    // 0x1ddba4: 0x42980  sll         $a1, $a0, 6
    ctx->pc = 0x1ddba4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 6));
    // 0x1ddba8: 0x8c230334  lw          $v1, 0x334($at)
    ctx->pc = 0x1ddba8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 820)));
    // 0x1ddbac: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x1ddbacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x1ddbb0: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x1ddbb0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
    // 0x1ddbb4: 0xac240338  sw          $a0, 0x338($at)
    ctx->pc = 0x1ddbb4u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 824), GPR_U32(ctx, 4));
    // 0x1ddbb8: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x1ddbb8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
    // 0x1ddbbc: 0x8c240338  lw          $a0, 0x338($at)
    ctx->pc = 0x1ddbbcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 824)));
    // 0x1ddbc0: 0x83182a  slt         $v1, $a0, $v1
    ctx->pc = 0x1ddbc0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1ddbc4: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1DDBC4u;
    {
        const bool branch_taken_0x1ddbc4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DDBC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DDBC4u;
            // 0x1ddbc8: 0xc58021  addu        $s0, $a2, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ddbc4) {
            ctx->pc = 0x1DDBD4u;
            goto label_1ddbd4;
        }
    }
    ctx->pc = 0x1DDBCCu;
    // 0x1ddbcc: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x1ddbccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
    // 0x1ddbd0: 0xac200338  sw          $zero, 0x338($at)
    ctx->pc = 0x1ddbd0u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 824), GPR_U32(ctx, 0));
label_1ddbd4:
    // 0x1ddbd4: 0x32230002  andi        $v1, $s1, 0x2
    ctx->pc = 0x1ddbd4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)2);
    // 0x1ddbd8: 0x10600016  beqz        $v1, . + 4 + (0x16 << 2)
    ctx->pc = 0x1DDBD8u;
    {
        const bool branch_taken_0x1ddbd8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ddbd8) {
            ctx->pc = 0x1DDC34u;
            goto label_1ddc34;
        }
    }
    ctx->pc = 0x1DDBE0u;
    // 0x1ddbe0: 0x12000028  beqz        $s0, . + 4 + (0x28 << 2)
    ctx->pc = 0x1DDBE0u;
    {
        const bool branch_taken_0x1ddbe0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ddbe0) {
            ctx->pc = 0x1DDC84u;
            goto label_1ddc84;
        }
    }
    ctx->pc = 0x1DDBE8u;
    // 0x1ddbe8: 0x26040010  addiu       $a0, $s0, 0x10
    ctx->pc = 0x1ddbe8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x1ddbec: 0xc041c5c  jal         func_107170
    ctx->pc = 0x1DDBECu;
    SET_GPR_U32(ctx, 31, 0x1DDBF4u);
    ctx->pc = 0x1DDBF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DDBECu;
            // 0x1ddbf0: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107170u;
    if (runtime->hasFunction(0x107170u)) {
        auto targetFn = runtime->lookupFunction(0x107170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DDBF4u; }
        if (ctx->pc != 0x1DDBF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0CopyVector_0x107170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DDBF4u; }
        if (ctx->pc != 0x1DDBF4u) { return; }
    }
    ctx->pc = 0x1DDBF4u;
label_1ddbf4:
    // 0x1ddbf4: 0x3c044100  lui         $a0, 0x4100
    ctx->pc = 0x1ddbf4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16640 << 16));
    // 0x1ddbf8: 0x240300a0  addiu       $v1, $zero, 0xA0
    ctx->pc = 0x1ddbf8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 160));
    // 0x1ddbfc: 0xae040020  sw          $a0, 0x20($s0)
    ctx->pc = 0x1ddbfcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 4));
    // 0x1ddc00: 0xa6030024  sh          $v1, 0x24($s0)
    ctx->pc = 0x1ddc00u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 36), (uint16_t)GPR_U32(ctx, 3));
    // 0x1ddc04: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1ddc04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ddc08: 0xa6040030  sh          $a0, 0x30($s0)
    ctx->pc = 0x1ddc08u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 48), (uint16_t)GPR_U32(ctx, 4));
    // 0x1ddc0c: 0x3c034180  lui         $v1, 0x4180
    ctx->pc = 0x1ddc0cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16768 << 16));
    // 0x1ddc10: 0xae030028  sw          $v1, 0x28($s0)
    ctx->pc = 0x1ddc10u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 3));
    // 0x1ddc14: 0x3c044000  lui         $a0, 0x4000
    ctx->pc = 0x1ddc14u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16384 << 16));
    // 0x1ddc18: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x1ddc18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1ddc1c: 0xae04002c  sw          $a0, 0x2C($s0)
    ctx->pc = 0x1ddc1cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 4));
    // 0x1ddc20: 0xa6030032  sh          $v1, 0x32($s0)
    ctx->pc = 0x1ddc20u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 50), (uint16_t)GPR_U32(ctx, 3));
    // 0x1ddc24: 0xa6030034  sh          $v1, 0x34($s0)
    ctx->pc = 0x1ddc24u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 52), (uint16_t)GPR_U32(ctx, 3));
    // 0x1ddc28: 0xa6030036  sh          $v1, 0x36($s0)
    ctx->pc = 0x1ddc28u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 54), (uint16_t)GPR_U32(ctx, 3));
    // 0x1ddc2c: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x1DDC2Cu;
    {
        const bool branch_taken_0x1ddc2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DDC30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DDC2Cu;
            // 0x1ddc30: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ddc2c) {
            ctx->pc = 0x1DDC84u;
            goto label_1ddc84;
        }
    }
    ctx->pc = 0x1DDC34u;
label_1ddc34:
    // 0x1ddc34: 0x12000013  beqz        $s0, . + 4 + (0x13 << 2)
    ctx->pc = 0x1DDC34u;
    {
        const bool branch_taken_0x1ddc34 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ddc34) {
            ctx->pc = 0x1DDC84u;
            goto label_1ddc84;
        }
    }
    ctx->pc = 0x1DDC3Cu;
    // 0x1ddc3c: 0x26040010  addiu       $a0, $s0, 0x10
    ctx->pc = 0x1ddc3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x1ddc40: 0xc041c5c  jal         func_107170
    ctx->pc = 0x1DDC40u;
    SET_GPR_U32(ctx, 31, 0x1DDC48u);
    ctx->pc = 0x1DDC44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DDC40u;
            // 0x1ddc44: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107170u;
    if (runtime->hasFunction(0x107170u)) {
        auto targetFn = runtime->lookupFunction(0x107170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DDC48u; }
        if (ctx->pc != 0x1DDC48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0CopyVector_0x107170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DDC48u; }
        if (ctx->pc != 0x1DDC48u) { return; }
    }
    ctx->pc = 0x1DDC48u;
label_1ddc48:
    // 0x1ddc48: 0x3c044120  lui         $a0, 0x4120
    ctx->pc = 0x1ddc48u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16672 << 16));
    // 0x1ddc4c: 0x240300a0  addiu       $v1, $zero, 0xA0
    ctx->pc = 0x1ddc4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 160));
    // 0x1ddc50: 0xae040020  sw          $a0, 0x20($s0)
    ctx->pc = 0x1ddc50u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 4));
    // 0x1ddc54: 0xa6030024  sh          $v1, 0x24($s0)
    ctx->pc = 0x1ddc54u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 36), (uint16_t)GPR_U32(ctx, 3));
    // 0x1ddc58: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1ddc58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ddc5c: 0xa6040030  sh          $a0, 0x30($s0)
    ctx->pc = 0x1ddc5cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 48), (uint16_t)GPR_U32(ctx, 4));
    // 0x1ddc60: 0x3c034170  lui         $v1, 0x4170
    ctx->pc = 0x1ddc60u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16752 << 16));
    // 0x1ddc64: 0xae030028  sw          $v1, 0x28($s0)
    ctx->pc = 0x1ddc64u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 3));
    // 0x1ddc68: 0x3c043fc0  lui         $a0, 0x3FC0
    ctx->pc = 0x1ddc68u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16320 << 16));
    // 0x1ddc6c: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x1ddc6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1ddc70: 0xae04002c  sw          $a0, 0x2C($s0)
    ctx->pc = 0x1ddc70u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 4));
    // 0x1ddc74: 0xa6030032  sh          $v1, 0x32($s0)
    ctx->pc = 0x1ddc74u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 50), (uint16_t)GPR_U32(ctx, 3));
    // 0x1ddc78: 0xa6030034  sh          $v1, 0x34($s0)
    ctx->pc = 0x1ddc78u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 52), (uint16_t)GPR_U32(ctx, 3));
    // 0x1ddc7c: 0xa6030036  sh          $v1, 0x36($s0)
    ctx->pc = 0x1ddc7cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 54), (uint16_t)GPR_U32(ctx, 3));
    // 0x1ddc80: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x1ddc80u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_1ddc84:
    // 0x1ddc84: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x1ddc84u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
    // 0x1ddc88: 0x8c270324  lw          $a3, 0x324($at)
    ctx->pc = 0x1ddc88u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 804)));
    // 0x1ddc8c: 0x14e00003  bnez        $a3, . + 4 + (0x3 << 2)
    ctx->pc = 0x1DDC8Cu;
    {
        const bool branch_taken_0x1ddc8c = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DDC90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DDC8Cu;
            // 0x1ddc90: 0x3c0101ea  lui         $at, 0x1EA (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ddc8c) {
            ctx->pc = 0x1DDC9Cu;
            goto label_1ddc9c;
        }
    }
    ctx->pc = 0x1DDC94u;
    // 0x1ddc94: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x1DDC94u;
    {
        const bool branch_taken_0x1ddc94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DDC98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DDC94u;
            // 0x1ddc98: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ddc94) {
            ctx->pc = 0x1DDCDCu;
            goto label_1ddcdc;
        }
    }
    ctx->pc = 0x1DDC9Cu;
label_1ddc9c:
    // 0x1ddc9c: 0x8c26032c  lw          $a2, 0x32C($at)
    ctx->pc = 0x1ddc9cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 812)));
    // 0x1ddca0: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x1ddca0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
    // 0x1ddca4: 0x62840  sll         $a1, $a2, 1
    ctx->pc = 0x1ddca4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
    // 0x1ddca8: 0x8c230328  lw          $v1, 0x328($at)
    ctx->pc = 0x1ddca8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 808)));
    // 0x1ddcac: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x1ddcacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x1ddcb0: 0x52940  sll         $a1, $a1, 5
    ctx->pc = 0x1ddcb0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
    // 0x1ddcb4: 0x24c40001  addiu       $a0, $a2, 0x1
    ctx->pc = 0x1ddcb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x1ddcb8: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x1ddcb8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
    // 0x1ddcbc: 0xac24032c  sw          $a0, 0x32C($at)
    ctx->pc = 0x1ddcbcu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 812), GPR_U32(ctx, 4));
    // 0x1ddcc0: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x1ddcc0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
    // 0x1ddcc4: 0x8c24032c  lw          $a0, 0x32C($at)
    ctx->pc = 0x1ddcc4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 812)));
    // 0x1ddcc8: 0x83182a  slt         $v1, $a0, $v1
    ctx->pc = 0x1ddcc8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1ddccc: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1DDCCCu;
    {
        const bool branch_taken_0x1ddccc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DDCD0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DDCCCu;
            // 0x1ddcd0: 0xe58021  addu        $s0, $a3, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ddccc) {
            ctx->pc = 0x1DDCDCu;
            goto label_1ddcdc;
        }
    }
    ctx->pc = 0x1DDCD4u;
    // 0x1ddcd4: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x1ddcd4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
    // 0x1ddcd8: 0xac20032c  sw          $zero, 0x32C($at)
    ctx->pc = 0x1ddcd8u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 812), GPR_U32(ctx, 0));
label_1ddcdc:
    // 0x1ddcdc: 0x1200000f  beqz        $s0, . + 4 + (0xF << 2)
    ctx->pc = 0x1DDCDCu;
    {
        const bool branch_taken_0x1ddcdc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ddcdc) {
            ctx->pc = 0x1DDD1Cu;
            goto label_1ddd1c;
        }
    }
    ctx->pc = 0x1DDCE4u;
    // 0x1ddce4: 0x3c024270  lui         $v0, 0x4270
    ctx->pc = 0x1ddce4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17008 << 16));
    // 0x1ddce8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ddce8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ddcec: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1ddcecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1ddcf0: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x1ddcf0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1ddcf4: 0x44807000  mtc1        $zero, $f14
    ctx->pc = 0x1ddcf4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x1ddcf8: 0x27a60060  addiu       $a2, $sp, 0x60
    ctx->pc = 0x1ddcf8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1ddcfc: 0x3c024234  lui         $v0, 0x4234
    ctx->pc = 0x1ddcfcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16948 << 16));
    // 0x1ddd00: 0x2407000f  addiu       $a3, $zero, 0xF
    ctx->pc = 0x1ddd00u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x1ddd04: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x1ddd04u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x1ddd08: 0x24080010  addiu       $t0, $zero, 0x10
    ctx->pc = 0x1ddd08u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1ddd0c: 0xc07098c  jal         func_1C2630
    ctx->pc = 0x1DDD0Cu;
    SET_GPR_U32(ctx, 31, 0x1DDD14u);
    ctx->pc = 0x1DDD10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DDD0Cu;
            // 0x1ddd10: 0x460073c6  mov.s       $f15, $f14 (Delay Slot)
        ctx->f[15] = FPU_MOV_S(ctx->f[14]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C2630u;
    if (runtime->hasFunction(0x1C2630u)) {
        auto targetFn = runtime->lookupFunction(0x1C2630u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DDD14u; }
        if (ctx->pc != 0x1DDD14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SethitEffect__15CHitEffectImageFPfPfffffii_0x1c2630(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DDD14u; }
        if (ctx->pc != 0x1DDD14u) { return; }
    }
    ctx->pc = 0x1DDD14u;
label_1ddd14:
    // 0x1ddd14: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1ddd14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1ddd18: 0xae030044  sw          $v1, 0x44($s0)
    ctx->pc = 0x1ddd18u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 68), GPR_U32(ctx, 3));
label_1ddd1c:
    // 0x1ddd1c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1ddd1cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1ddd20: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1ddd20u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ddd24: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1ddd24u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ddd28: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1ddd28u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ddd2c: 0x3e00008  jr          $ra
    ctx->pc = 0x1DDD2Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DDD30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DDD2Cu;
            // 0x1ddd30: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1DDD34u;
}
