#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _SET_SPECIAL_SHOT__FP12RS_STACKDATAi
// Address: 0x2d0960 - 0x2d0b8c
void ps2__SET_SPECIAL_SHOT__FP12RS_STACKDATAi_0x2d0960(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__SET_SPECIAL_SHOT__FP12RS_STACKDATAi_0x2d0960");
#endif

    switch (ctx->pc) {
        case 0x2d0990u: goto label_2d0990;
        case 0x2d0998u: goto label_2d0998;
        case 0x2d09a4u: goto label_2d09a4;
        case 0x2d09e4u: goto label_2d09e4;
        case 0x2d0a08u: goto label_2d0a08;
        case 0x2d0a14u: goto label_2d0a14;
        case 0x2d0a28u: goto label_2d0a28;
        case 0x2d0a44u: goto label_2d0a44;
        case 0x2d0a68u: goto label_2d0a68;
        case 0x2d0a84u: goto label_2d0a84;
        case 0x2d0aa0u: goto label_2d0aa0;
        case 0x2d0ac0u: goto label_2d0ac0;
        case 0x2d0adcu: goto label_2d0adc;
        case 0x2d0ae8u: goto label_2d0ae8;
        case 0x2d0b08u: goto label_2d0b08;
        case 0x2d0b10u: goto label_2d0b10;
        case 0x2d0b20u: goto label_2d0b20;
        case 0x2d0b38u: goto label_2d0b38;
        case 0x2d0b60u: goto label_2d0b60;
        case 0x2d0b6cu: goto label_2d0b6c;
        default: break;
    }

    ctx->pc = 0x2d0960u;

    // 0x2d0960: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x2d0960u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x2d0964: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2d0964u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d0968: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2d0968u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x2d096c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2d096cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2d0970: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2d0970u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2d0974: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2d0974u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2d0978: 0x10a20003  beq         $a1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2D0978u;
    {
        const bool branch_taken_0x2d0978 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x2D097Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D0978u;
            // 0x2d097c: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d0978) {
            ctx->pc = 0x2D0988u;
            goto label_2d0988;
        }
    }
    ctx->pc = 0x2D0980u;
    // 0x2d0980: 0x1000007b  b           . + 4 + (0x7B << 2)
    ctx->pc = 0x2D0980u;
    {
        const bool branch_taken_0x2d0980 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D0984u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D0980u;
            // 0x2d0984: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d0980) {
            ctx->pc = 0x2D0B70u;
            goto label_2d0b70;
        }
    }
    ctx->pc = 0x2D0988u;
label_2d0988:
    // 0x2d0988: 0xc0b37a8  jal         func_2CDEA0
    ctx->pc = 0x2D0988u;
    SET_GPR_U32(ctx, 31, 0x2D0990u);
    ctx->pc = 0x2CDEA0u;
    if (runtime->hasFunction(0x2CDEA0u)) {
        auto targetFn = runtime->lookupFunction(0x2CDEA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D0990u; }
        if (ctx->pc != 0x2D0990u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackString__FP12RS_STACKDATA_0x2cdea0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D0990u; }
        if (ctx->pc != 0x2D0990u) { return; }
    }
    ctx->pc = 0x2D0990u;
label_2d0990:
    // 0x2d0990: 0xc0683a8  jal         func_1A0EA0
    ctx->pc = 0x2D0990u;
    SET_GPR_U32(ctx, 31, 0x2D0998u);
    ctx->pc = 0x2D0994u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D0990u;
            // 0x2d0994: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A0EA0u;
    if (runtime->hasFunction(0x1A0EA0u)) {
        auto targetFn = runtime->lookupFunction(0x1A0EA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D0998u; }
        if (ctx->pc != 0x2D0998u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetBattleCharaInfo__Fv_0x1a0ea0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D0998u; }
        if (ctx->pc != 0x2D0998u) { return; }
    }
    ctx->pc = 0x2D0998u;
label_2d0998:
    // 0x2d0998: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2d0998u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d099c: 0xc067f14  jal         func_19FC50
    ctx->pc = 0x2D099Cu;
    SET_GPR_U32(ctx, 31, 0x2D09A4u);
    ctx->pc = 0x2D09A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D099Cu;
            // 0x2d09a0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19FC50u;
    if (runtime->hasFunction(0x19FC50u)) {
        auto targetFn = runtime->lookupFunction(0x19FC50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D09A4u; }
        if (ctx->pc != 0x2D09A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetMagicSwordCounterNow__16CBattleCharaInfoFv_0x19fc50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D09A4u; }
        if (ctx->pc != 0x2D09A4u) { return; }
    }
    ctx->pc = 0x2D09A4u;
label_2d09a4:
    // 0x2d09a4: 0x1c400003  bgtz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2D09A4u;
    {
        const bool branch_taken_0x2d09a4 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x2D09A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D09A4u;
            // 0x2d09a8: 0x3c0101f1  lui         $at, 0x1F1 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)497 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d09a4) {
            ctx->pc = 0x2D09B4u;
            goto label_2d09b4;
        }
    }
    ctx->pc = 0x2D09ACu;
    // 0x2d09ac: 0x10000070  b           . + 4 + (0x70 << 2)
    ctx->pc = 0x2D09ACu;
    {
        const bool branch_taken_0x2d09ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D09B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D09ACu;
            // 0x2d09b0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d09ac) {
            ctx->pc = 0x2D0B70u;
            goto label_2d0b70;
        }
    }
    ctx->pc = 0x2D09B4u;
label_2d09b4:
    // 0x2d09b4: 0x8c22d430  lw          $v0, -0x2BD0($at)
    ctx->pc = 0x2d09b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294956080)));
    // 0x2d09b8: 0x24430764  addiu       $v1, $v0, 0x764
    ctx->pc = 0x2d09b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 1892));
    // 0x2d09bc: 0x84420764  lh          $v0, 0x764($v0)
    ctx->pc = 0x2d09bcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 1892)));
    // 0x2d09c0: 0x18400003  blez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2D09C0u;
    {
        const bool branch_taken_0x2d09c0 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x2D09C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D09C0u;
            // 0x2d09c4: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d09c0) {
            ctx->pc = 0x2D09D0u;
            goto label_2d09d0;
        }
    }
    ctx->pc = 0x2D09C8u;
    // 0x2d09c8: 0x10000069  b           . + 4 + (0x69 << 2)
    ctx->pc = 0x2D09C8u;
    {
        const bool branch_taken_0x2d09c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D09CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D09C8u;
            // 0x2d09cc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d09c8) {
            ctx->pc = 0x2D0B70u;
            goto label_2d0b70;
        }
    }
    ctx->pc = 0x2D09D0u;
label_2d09d0:
    // 0x2d09d0: 0x3c0101f1  lui         $at, 0x1F1
    ctx->pc = 0x2d09d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)497 << 16));
    // 0x2d09d4: 0xa4620000  sh          $v0, 0x0($v1)
    ctx->pc = 0x2d09d4u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x2d09d8: 0x8c24d430  lw          $a0, -0x2BD0($at)
    ctx->pc = 0x2d09d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294956080)));
    // 0x2d09dc: 0xc05af3c  jal         func_16BCF0
    ctx->pc = 0x2D09DCu;
    SET_GPR_U32(ctx, 31, 0x2D09E4u);
    ctx->pc = 0x2D09E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D09DCu;
            // 0x2d09e0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16BCF0u;
    if (runtime->hasFunction(0x16BCF0u)) {
        auto targetFn = runtime->lookupFunction(0x16BCF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D09E4u; }
        if (ctx->pc != 0x2D09E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SearchObject__12CActionCharaFPc_0x16bcf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D09E4u; }
        if (ctx->pc != 0x2D09E4u) { return; }
    }
    ctx->pc = 0x2D09E4u;
label_2d09e4:
    // 0x2d09e4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2d09e4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d09e8: 0x16200003  bnez        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2D09E8u;
    {
        const bool branch_taken_0x2d09e8 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D09ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D09E8u;
            // 0x2d09ec: 0x3c0101f1  lui         $at, 0x1F1 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)497 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d09e8) {
            ctx->pc = 0x2D09F8u;
            goto label_2d09f8;
        }
    }
    ctx->pc = 0x2D09F0u;
    // 0x2d09f0: 0x1000005f  b           . + 4 + (0x5F << 2)
    ctx->pc = 0x2D09F0u;
    {
        const bool branch_taken_0x2d09f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D09F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D09F0u;
            // 0x2d09f4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d09f0) {
            ctx->pc = 0x2D0B70u;
            goto label_2d0b70;
        }
    }
    ctx->pc = 0x2D09F8u;
label_2d09f8:
    // 0x2d09f8: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x2d09f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2d09fc: 0x8c22d430  lw          $v0, -0x2BD0($at)
    ctx->pc = 0x2d09fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294956080)));
    // 0x2d0a00: 0xc041c5c  jal         func_107170
    ctx->pc = 0x2D0A00u;
    SET_GPR_U32(ctx, 31, 0x2D0A08u);
    ctx->pc = 0x2D0A04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D0A00u;
            // 0x2d0a04: 0x24450690  addiu       $a1, $v0, 0x690 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1680));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107170u;
    if (runtime->hasFunction(0x107170u)) {
        auto targetFn = runtime->lookupFunction(0x107170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D0A08u; }
        if (ctx->pc != 0x2D0A08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0CopyVector_0x107170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D0A08u; }
        if (ctx->pc != 0x2D0A08u) { return; }
    }
    ctx->pc = 0x2D0A08u;
label_2d0a08:
    // 0x2d0a08: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2d0a08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d0a0c: 0xc04de0c  jal         func_137830
    ctx->pc = 0x2D0A0Cu;
    SET_GPR_U32(ctx, 31, 0x2D0A14u);
    ctx->pc = 0x2D0A10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D0A0Cu;
            // 0x2d0a10: 0x27a50060  addiu       $a1, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
    ctx->pc = 0x137830u;
    if (runtime->hasFunction(0x137830u)) {
        auto targetFn = runtime->lookupFunction(0x137830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D0A14u; }
        if (ctx->pc != 0x2D0A14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetWorldPosition0__8mgCFrameFPf_0x137830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D0A14u; }
        if (ctx->pc != 0x2D0A14u) { return; }
    }
    ctx->pc = 0x2D0A14u;
label_2d0a14:
    // 0x2d0a14: 0x3c0101f1  lui         $at, 0x1F1
    ctx->pc = 0x2d0a14u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)497 << 16));
    // 0x2d0a18: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x2d0a18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x2d0a1c: 0x8c22d430  lw          $v0, -0x2BD0($at)
    ctx->pc = 0x2d0a1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294956080)));
    // 0x2d0a20: 0xc041c5c  jal         func_107170
    ctx->pc = 0x2D0A20u;
    SET_GPR_U32(ctx, 31, 0x2D0A28u);
    ctx->pc = 0x2D0A24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D0A20u;
            // 0x2d0a24: 0x24450690  addiu       $a1, $v0, 0x690 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1680));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107170u;
    if (runtime->hasFunction(0x107170u)) {
        auto targetFn = runtime->lookupFunction(0x107170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D0A28u; }
        if (ctx->pc != 0x2D0A28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0CopyVector_0x107170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D0A28u; }
        if (ctx->pc != 0x2D0A28u) { return; }
    }
    ctx->pc = 0x2D0A28u;
label_2d0a28:
    // 0x2d0a28: 0x3c020035  lui         $v0, 0x35
    ctx->pc = 0x2d0a28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)53 << 16));
    // 0x2d0a2c: 0x27a30080  addiu       $v1, $sp, 0x80
    ctx->pc = 0x2d0a2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x2d0a30: 0x244260e0  addiu       $v0, $v0, 0x60E0
    ctx->pc = 0x2d0a30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 24800));
    // 0x2d0a34: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2d0a34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d0a38: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x2d0a38u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2d0a3c: 0xc067ed8  jal         func_19FB60
    ctx->pc = 0x2D0A3Cu;
    SET_GPR_U32(ctx, 31, 0x2D0A44u);
    ctx->pc = 0x2D0A40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D0A3Cu;
            // 0x2d0a40: 0x7c620000  sq          $v0, 0x0($v1) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19FB60u;
    if (runtime->hasFunction(0x19FB60u)) {
        auto targetFn = runtime->lookupFunction(0x19FB60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D0A44u; }
        if (ctx->pc != 0x2D0A44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetMagicSwordElem__16CBattleCharaInfoFv_0x19fb60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D0A44u; }
        if (ctx->pc != 0x2D0A44u) { return; }
    }
    ctx->pc = 0x2D0A44u;
label_2d0a44:
    // 0x2d0a44: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x2d0a44u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2d0a48: 0x3c0101f1  lui         $at, 0x1F1
    ctx->pc = 0x2d0a48u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)497 << 16));
    // 0x2d0a4c: 0x8c22d430  lw          $v0, -0x2BD0($at)
    ctx->pc = 0x2d0a4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294956080)));
    // 0x2d0a50: 0x7d1821  addu        $v1, $v1, $sp
    ctx->pc = 0x2d0a50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 29)));
    // 0x2d0a54: 0x8c650080  lw          $a1, 0x80($v1)
    ctx->pc = 0x2d0a54u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 128)));
    // 0x2d0a58: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2d0a58u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d0a5c: 0x8c4407dc  lw          $a0, 0x7DC($v0)
    ctx->pc = 0x2d0a5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2012)));
    // 0x2d0a60: 0xc0b8498  jal         func_2E1260
    ctx->pc = 0x2D0A60u;
    SET_GPR_U32(ctx, 31, 0x2D0A68u);
    ctx->pc = 0x2D0A64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D0A60u;
            // 0x2d0a64: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E1260u;
    if (runtime->hasFunction(0x2E1260u)) {
        auto targetFn = runtime->lookupFunction(0x2E1260u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D0A68u; }
        if (ctx->pc != 0x2D0A68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEffSpt__16CEffectScriptManFPcii_0x2e1260(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D0A68u; }
        if (ctx->pc != 0x2D0A68u) { return; }
    }
    ctx->pc = 0x2D0A68u;
label_2d0a68:
    // 0x2d0a68: 0x3c0101f1  lui         $at, 0x1F1
    ctx->pc = 0x2d0a68u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)497 << 16));
    // 0x2d0a6c: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x2d0a6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2d0a70: 0x8c22d430  lw          $v0, -0x2BD0($at)
    ctx->pc = 0x2d0a70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294956080)));
    // 0x2d0a74: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2d0a74u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d0a78: 0x8c4407dc  lw          $a0, 0x7DC($v0)
    ctx->pc = 0x2d0a78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2012)));
    // 0x2d0a7c: 0xc0b8894  jal         func_2E2250
    ctx->pc = 0x2D0A7Cu;
    SET_GPR_U32(ctx, 31, 0x2D0A84u);
    ctx->pc = 0x2D0A80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D0A7Cu;
            // 0x2d0a80: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E2250u;
    if (runtime->hasFunction(0x2E2250u)) {
        auto targetFn = runtime->lookupFunction(0x2E2250u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D0A84u; }
        if (ctx->pc != 0x2D0A84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetScriptVect1__16CEffectScriptManFPfii_0x2e2250(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D0A84u; }
        if (ctx->pc != 0x2D0A84u) { return; }
    }
    ctx->pc = 0x2D0A84u;
label_2d0a84:
    // 0x2d0a84: 0x3c0101f1  lui         $at, 0x1F1
    ctx->pc = 0x2d0a84u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)497 << 16));
    // 0x2d0a88: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x2d0a88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x2d0a8c: 0x8c22d430  lw          $v0, -0x2BD0($at)
    ctx->pc = 0x2d0a8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294956080)));
    // 0x2d0a90: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2d0a90u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d0a94: 0x8c4407dc  lw          $a0, 0x7DC($v0)
    ctx->pc = 0x2d0a94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2012)));
    // 0x2d0a98: 0xc0b88d8  jal         func_2E2360
    ctx->pc = 0x2D0A98u;
    SET_GPR_U32(ctx, 31, 0x2D0AA0u);
    ctx->pc = 0x2D0A9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D0A98u;
            // 0x2d0a9c: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E2360u;
    if (runtime->hasFunction(0x2E2360u)) {
        auto targetFn = runtime->lookupFunction(0x2E2360u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D0AA0u; }
        if (ctx->pc != 0x2D0AA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetScriptVect2__16CEffectScriptManFPfii_0x2e2360(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D0AA0u; }
        if (ctx->pc != 0x2D0AA0u) { return; }
    }
    ctx->pc = 0x2D0AA0u;
label_2d0aa0:
    // 0x2d0aa0: 0x3c0101f1  lui         $at, 0x1F1
    ctx->pc = 0x2d0aa0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)497 << 16));
    // 0x2d0aa4: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x2d0aa4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2d0aa8: 0x8c22d430  lw          $v0, -0x2BD0($at)
    ctx->pc = 0x2d0aa8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294956080)));
    // 0x2d0aac: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2d0aacu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2d0ab0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2d0ab0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d0ab4: 0x8c4407dc  lw          $a0, 0x7DC($v0)
    ctx->pc = 0x2d0ab4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2012)));
    // 0x2d0ab8: 0xc0b89f0  jal         func_2E27C0
    ctx->pc = 0x2D0AB8u;
    SET_GPR_U32(ctx, 31, 0x2D0AC0u);
    ctx->pc = 0x2D0ABCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D0AB8u;
            // 0x2d0abc: 0xc0382d  daddu       $a3, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E27C0u;
    if (runtime->hasFunction(0x2E27C0u)) {
        auto targetFn = runtime->lookupFunction(0x2E27C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D0AC0u; }
        if (ctx->pc != 0x2D0AC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetValue__16CEffectScriptManFifii_0x2e27c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D0AC0u; }
        if (ctx->pc != 0x2D0AC0u) { return; }
    }
    ctx->pc = 0x2D0AC0u;
label_2d0ac0:
    // 0x2d0ac0: 0x3c0101f1  lui         $at, 0x1F1
    ctx->pc = 0x2d0ac0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)497 << 16));
    // 0x2d0ac4: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x2d0ac4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2d0ac8: 0x8c22d430  lw          $v0, -0x2BD0($at)
    ctx->pc = 0x2d0ac8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294956080)));
    // 0x2d0acc: 0x84450770  lh          $a1, 0x770($v0)
    ctx->pc = 0x2d0accu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 1904)));
    // 0x2d0ad0: 0x8c4407dc  lw          $a0, 0x7DC($v0)
    ctx->pc = 0x2d0ad0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2012)));
    // 0x2d0ad4: 0xc0b891c  jal         func_2E2470
    ctx->pc = 0x2D0AD4u;
    SET_GPR_U32(ctx, 31, 0x2D0ADCu);
    ctx->pc = 0x2D0AD8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D0AD4u;
            // 0x2d0ad8: 0xc0382d  daddu       $a3, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E2470u;
    if (runtime->hasFunction(0x2E2470u)) {
        auto targetFn = runtime->lookupFunction(0x2E2470u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D0ADCu; }
        if (ctx->pc != 0x2D0ADCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetScriptTargetId__16CEffectScriptManFiii_0x2e2470(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D0ADCu; }
        if (ctx->pc != 0x2D0ADCu) { return; }
    }
    ctx->pc = 0x2D0ADCu;
label_2d0adc:
    // 0x2d0adc: 0x3c0401ea  lui         $a0, 0x1EA
    ctx->pc = 0x2d0adcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)490 << 16));
    // 0x2d0ae0: 0xc06e9c0  jal         func_1BA700
    ctx->pc = 0x2D0AE0u;
    SET_GPR_U32(ctx, 31, 0x2D0AE8u);
    ctx->pc = 0x2D0AE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D0AE0u;
            // 0x2d0ae4: 0x24840710  addiu       $a0, $a0, 0x710 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1808));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1BA700u;
    if (runtime->hasFunction(0x1BA700u)) {
        auto targetFn = runtime->lookupFunction(0x1BA700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D0AE8u; }
        if (ctx->pc != 0x2D0AE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPrim__11CColPrimManFv_0x1ba700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D0AE8u; }
        if (ctx->pc != 0x2D0AE8u) { return; }
    }
    ctx->pc = 0x2D0AE8u;
label_2d0ae8:
    // 0x2d0ae8: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x2d0ae8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d0aec: 0x1260001d  beqz        $s3, . + 4 + (0x1D << 2)
    ctx->pc = 0x2D0AECu;
    {
        const bool branch_taken_0x2d0aec = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D0AF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D0AECu;
            // 0x2d0af0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d0aec) {
            ctx->pc = 0x2D0B64u;
            goto label_2d0b64;
        }
    }
    ctx->pc = 0x2D0AF4u;
    // 0x2d0af4: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x2d0af4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x2d0af8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2d0af8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d0afc: 0x24a50290  addiu       $a1, $a1, 0x290
    ctx->pc = 0x2d0afcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 656));
    // 0x2d0b00: 0xc06e718  jal         func_1B9C60
    ctx->pc = 0x2D0B00u;
    SET_GPR_U32(ctx, 31, 0x2D0B08u);
    ctx->pc = 0x2D0B04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D0B00u;
            // 0x2d0b04: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B9C60u;
    if (runtime->hasFunction(0x1B9C60u)) {
        auto targetFn = runtime->lookupFunction(0x1B9C60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D0B08u; }
        if (ctx->pc != 0x2D0B08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetDamage__8CColPrimFPci_0x1b9c60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D0B08u; }
        if (ctx->pc != 0x2D0B08u) { return; }
    }
    ctx->pc = 0x2D0B08u;
label_2d0b08:
    // 0x2d0b08: 0xc067ee0  jal         func_19FB80
    ctx->pc = 0x2D0B08u;
    SET_GPR_U32(ctx, 31, 0x2D0B10u);
    ctx->pc = 0x2D0B0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D0B08u;
            // 0x2d0b0c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19FB80u;
    if (runtime->hasFunction(0x19FB80u)) {
        auto targetFn = runtime->lookupFunction(0x19FB80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D0B10u; }
        if (ctx->pc != 0x2D0B10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetMagicSwordPow__16CBattleCharaInfoFv_0x19fb80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D0B10u; }
        if (ctx->pc != 0x2D0B10u) { return; }
    }
    ctx->pc = 0x2D0B10u;
label_2d0b10:
    // 0x2d0b10: 0xae620088  sw          $v0, 0x88($s3)
    ctx->pc = 0x2d0b10u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 136), GPR_U32(ctx, 2));
    // 0x2d0b14: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2d0b14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d0b18: 0xc067ed8  jal         func_19FB60
    ctx->pc = 0x2D0B18u;
    SET_GPR_U32(ctx, 31, 0x2D0B20u);
    ctx->pc = 0x2D0B1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D0B18u;
            // 0x2d0b1c: 0x24120064  addiu       $s2, $zero, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19FB60u;
    if (runtime->hasFunction(0x19FB60u)) {
        auto targetFn = runtime->lookupFunction(0x19FB60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D0B20u; }
        if (ctx->pc != 0x2D0B20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetMagicSwordElem__16CBattleCharaInfoFv_0x19fb60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D0B20u; }
        if (ctx->pc != 0x2D0B20u) { return; }
    }
    ctx->pc = 0x2D0B20u;
label_2d0b20:
    // 0x2d0b20: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x2d0b20u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x2d0b24: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2d0b24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d0b28: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x2d0b28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x2d0b2c: 0x240882d  daddu       $s1, $s2, $zero
    ctx->pc = 0x2d0b2cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d0b30: 0xc067ed8  jal         func_19FB60
    ctx->pc = 0x2D0B30u;
    SET_GPR_U32(ctx, 31, 0x2D0B38u);
    ctx->pc = 0x2D0B34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D0B30u;
            // 0x2d0b34: 0xa4520090  sh          $s2, 0x90($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 144), (uint16_t)GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19FB60u;
    if (runtime->hasFunction(0x19FB60u)) {
        auto targetFn = runtime->lookupFunction(0x19FB60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D0B38u; }
        if (ctx->pc != 0x2D0B38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetMagicSwordElem__16CBattleCharaInfoFv_0x19fb60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D0B38u; }
        if (ctx->pc != 0x2D0B38u) { return; }
    }
    ctx->pc = 0x2D0B38u;
label_2d0b38:
    // 0x2d0b38: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x2d0b38u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x2d0b3c: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x2d0b3cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2d0b40: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x2d0b40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x2d0b44: 0x3c0101f1  lui         $at, 0x1F1
    ctx->pc = 0x2d0b44u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)497 << 16));
    // 0x2d0b48: 0xa4510090  sh          $s1, 0x90($v0)
    ctx->pc = 0x2d0b48u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 144), (uint16_t)GPR_U32(ctx, 17));
    // 0x2d0b4c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2d0b4cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d0b50: 0x8c22d430  lw          $v0, -0x2BD0($at)
    ctx->pc = 0x2d0b50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294956080)));
    // 0x2d0b54: 0x8c4407dc  lw          $a0, 0x7DC($v0)
    ctx->pc = 0x2d0b54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2012)));
    // 0x2d0b58: 0xc0b89a4  jal         func_2E2690
    ctx->pc = 0x2D0B58u;
    SET_GPR_U32(ctx, 31, 0x2D0B60u);
    ctx->pc = 0x2D0B5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D0B58u;
            // 0x2d0b5c: 0xc0382d  daddu       $a3, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E2690u;
    if (runtime->hasFunction(0x2E2690u)) {
        auto targetFn = runtime->lookupFunction(0x2E2690u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D0B60u; }
        if (ctx->pc != 0x2D0B60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetColPrim__16CEffectScriptManFP8CColPrimii_0x2e2690(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D0B60u; }
        if (ctx->pc != 0x2D0B60u) { return; }
    }
    ctx->pc = 0x2D0B60u;
label_2d0b60:
    // 0x2d0b60: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2d0b60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2d0b64:
    // 0x2d0b64: 0xc067f40  jal         func_19FD00
    ctx->pc = 0x2D0B64u;
    SET_GPR_U32(ctx, 31, 0x2D0B6Cu);
    ctx->pc = 0x19FD00u;
    if (runtime->hasFunction(0x19FD00u)) {
        auto targetFn = runtime->lookupFunction(0x19FD00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D0B6Cu; }
        if (ctx->pc != 0x2D0B6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ClearMagicSwordPow__16CBattleCharaInfoFv_0x19fd00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D0B6Cu; }
        if (ctx->pc != 0x2D0B6Cu) { return; }
    }
    ctx->pc = 0x2D0B6Cu;
label_2d0b6c:
    // 0x2d0b6c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2d0b6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2d0b70:
    // 0x2d0b70: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x2d0b70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2d0b74: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2d0b74u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2d0b78: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2d0b78u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2d0b7c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2d0b7cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d0b80: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2d0b80u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d0b84: 0x3e00008  jr          $ra
    ctx->pc = 0x2D0B84u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D0B88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D0B84u;
            // 0x2d0b88: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2D0B8Cu;
}
