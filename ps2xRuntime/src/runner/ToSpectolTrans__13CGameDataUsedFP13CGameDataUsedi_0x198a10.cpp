#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: ToSpectolTrans__13CGameDataUsedFP13CGameDataUsedi
// Address: 0x198a10 - 0x198e0c
void ToSpectolTrans__13CGameDataUsedFP13CGameDataUsedi_0x198a10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ToSpectolTrans__13CGameDataUsedFP13CGameDataUsedi_0x198a10");
#endif

    switch (ctx->pc) {
        case 0x198a48u: goto label_198a48;
        case 0x198a50u: goto label_198a50;
        case 0x198a78u: goto label_198a78;
        case 0x198a84u: goto label_198a84;
        case 0x198ac8u: goto label_198ac8;
        case 0x198ad8u: goto label_198ad8;
        case 0x198ae4u: goto label_198ae4;
        case 0x198b74u: goto label_198b74;
        case 0x198b9cu: goto label_198b9c;
        case 0x198bc4u: goto label_198bc4;
        case 0x198becu: goto label_198bec;
        case 0x198c14u: goto label_198c14;
        case 0x198c3cu: goto label_198c3c;
        case 0x198c64u: goto label_198c64;
        case 0x198c8cu: goto label_198c8c;
        case 0x198cb4u: goto label_198cb4;
        case 0x198d94u: goto label_198d94;
        case 0x198db8u: goto label_198db8;
        case 0x198de0u: goto label_198de0;
        case 0x198de8u: goto label_198de8;
        default: break;
    }

    ctx->pc = 0x198a10u;

    // 0x198a10: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x198a10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x198a14: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x198a14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x198a18: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x198a18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x198a1c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x198a1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x198a20: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x198a20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x198a24: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x198a24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x198a28: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x198a28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x198a2c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x198a2cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x198a30: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x198a30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x198a34: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x198a34u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x198a38: 0x122000eb  beqz        $s1, . + 4 + (0xEB << 2)
    ctx->pc = 0x198A38u;
    {
        const bool branch_taken_0x198a38 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x198A3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x198A38u;
            // 0x198a3c: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x198a38) {
            ctx->pc = 0x198DE8u;
            goto label_198de8;
        }
    }
    ctx->pc = 0x198A40u;
    // 0x198a40: 0xc065c30  jal         func_1970C0
    ctx->pc = 0x198A40u;
    SET_GPR_U32(ctx, 31, 0x198A48u);
    ctx->pc = 0x198A44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x198A40u;
            // 0x198a44: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1970C0u;
    if (runtime->hasFunction(0x1970C0u)) {
        auto targetFn = runtime->lookupFunction(0x1970C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x198A48u; }
        if (ctx->pc != 0x198A48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Init__13CGameDataUsedFv_0x1970c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x198A48u; }
        if (ctx->pc != 0x198A48u) { return; }
    }
    ctx->pc = 0x198A48u;
label_198a48:
    // 0x198a48: 0xc065cb8  jal         func_1972E0
    ctx->pc = 0x198A48u;
    SET_GPR_U32(ctx, 31, 0x198A50u);
    ctx->pc = 0x198A4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x198A48u;
            // 0x198a4c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1972E0u;
    if (runtime->hasFunction(0x1972E0u)) {
        auto targetFn = runtime->lookupFunction(0x1972E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x198A50u; }
        if (ctx->pc != 0x198A50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetNum__13CGameDataUsedFv_0x1972e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x198A50u; }
        if (ctx->pc != 0x198A50u) { return; }
    }
    ctx->pc = 0x198A50u;
label_198a50:
    // 0x198a50: 0x10082a  slt         $at, $zero, $s0
    ctx->pc = 0x198a50u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x198a54: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x198A54u;
    {
        const bool branch_taken_0x198a54 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x198A58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x198A54u;
            // 0x198a58: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x198a54) {
            ctx->pc = 0x198A60u;
            goto label_198a60;
        }
    }
    ctx->pc = 0x198A5Cu;
    // 0x198a5c: 0x200982d  daddu       $s3, $s0, $zero
    ctx->pc = 0x198a5cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_198a60:
    // 0x198a60: 0x86420002  lh          $v0, 0x2($s2)
    ctx->pc = 0x198a60u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 2)));
    // 0x198a64: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x198a64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x198a68: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x198a68u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x198a6c: 0x26300010  addiu       $s0, $s1, 0x10
    ctx->pc = 0x198a6cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x198a70: 0xc065dc0  jal         func_197700
    ctx->pc = 0x198A70u;
    SET_GPR_U32(ctx, 31, 0x198A78u);
    ctx->pc = 0x198A74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x198A70u;
            // 0x198a74: 0xa6220026  sh          $v0, 0x26($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 38), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x197700u;
    if (runtime->hasFunction(0x197700u)) {
        auto targetFn = runtime->lookupFunction(0x197700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x198A78u; }
        if (ctx->pc != 0x198A78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetName__13CGameDataUsedFi_0x197700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x198A78u; }
        if (ctx->pc != 0x198A78u) { return; }
    }
    ctx->pc = 0x198A78u;
label_198a78:
    // 0x198a78: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x198a78u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x198a7c: 0xc065c74  jal         func_1971D0
    ctx->pc = 0x198A7Cu;
    SET_GPR_U32(ctx, 31, 0x198A84u);
    ctx->pc = 0x198A80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x198A7Cu;
            // 0x198a80: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1971D0u;
    if (runtime->hasFunction(0x1971D0u)) {
        auto targetFn = runtime->lookupFunction(0x1971D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x198A84u; }
        if (ctx->pc != 0x198A84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetLevel__13CGameDataUsedFv_0x1971d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x198A84u; }
        if (ctx->pc != 0x198A84u) { return; }
    }
    ctx->pc = 0x198A84u;
label_198a84:
    // 0x198a84: 0x86430000  lh          $v1, 0x0($s2)
    ctx->pc = 0x198a84u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x198a88: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x198a88u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x198a8c: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x198a8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x198a90: 0x106200b4  beq         $v1, $v0, . + 4 + (0xB4 << 2)
    ctx->pc = 0x198A90u;
    {
        const bool branch_taken_0x198a90 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x198A94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x198A90u;
            // 0x198a94: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x198a90) {
            ctx->pc = 0x198D64u;
            goto label_198d64;
        }
    }
    ctx->pc = 0x198A98u;
    // 0x198a98: 0x10620088  beq         $v1, $v0, . + 4 + (0x88 << 2)
    ctx->pc = 0x198A98u;
    {
        const bool branch_taken_0x198a98 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x198a98) {
            ctx->pc = 0x198CBCu;
            goto label_198cbc;
        }
    }
    ctx->pc = 0x198AA0u;
    // 0x198aa0: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x198aa0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x198aa4: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x198AA4u;
    {
        const bool branch_taken_0x198aa4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x198AA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x198AA4u;
            // 0x198aa8: 0x2aa10005  slti        $at, $s5, 0x5 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 21) < (int64_t)(int32_t)5) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x198aa4) {
            ctx->pc = 0x198AB4u;
            goto label_198ab4;
        }
    }
    ctx->pc = 0x198AACu;
    // 0x198aac: 0x100000b6  b           . + 4 + (0xB6 << 2)
    ctx->pc = 0x198AACu;
    {
        const bool branch_taken_0x198aac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x198AB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x198AACu;
            // 0x198ab0: 0x86040016  lh          $a0, 0x16($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 22)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x198aac) {
            ctx->pc = 0x198D88u;
            goto label_198d88;
        }
    }
    ctx->pc = 0x198AB4u;
label_198ab4:
    // 0x198ab4: 0x10200017  beqz        $at, . + 4 + (0x17 << 2)
    ctx->pc = 0x198AB4u;
    {
        const bool branch_taken_0x198ab4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x198AB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x198AB4u;
            // 0x198ab8: 0x26520010  addiu       $s2, $s2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x198ab4) {
            ctx->pc = 0x198B14u;
            goto label_198b14;
        }
    }
    ctx->pc = 0x198ABCu;
    // 0x198abc: 0xa2020000  sb          $v0, 0x0($s0)
    ctx->pc = 0x198abcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x198ac0: 0xc0941b0  jal         func_2506C0
    ctx->pc = 0x198AC0u;
    SET_GPR_U32(ctx, 31, 0x198AC8u);
    ctx->pc = 0x198AC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x198AC0u;
            // 0x198ac4: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2506C0u;
    if (runtime->hasFunction(0x2506C0u)) {
        auto targetFn = runtime->lookupFunction(0x2506C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x198AC8u; }
        if (ctx->pc != 0x198AC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetRandI__Fi_0x2506c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x198AC8u; }
        if (ctx->pc != 0x198AC8u) { return; }
    }
    ctx->pc = 0x198AC8u;
label_198ac8:
    // 0x198ac8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x198ac8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x198acc: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x198accu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x198ad0: 0xc0941b0  jal         func_2506C0
    ctx->pc = 0x198AD0u;
    SET_GPR_U32(ctx, 31, 0x198AD8u);
    ctx->pc = 0x198AD4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x198AD0u;
            // 0x198ad4: 0xa2020001  sb          $v0, 0x1($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2506C0u;
    if (runtime->hasFunction(0x2506C0u)) {
        auto targetFn = runtime->lookupFunction(0x2506C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x198AD8u; }
        if (ctx->pc != 0x198AD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetRandI__Fi_0x2506c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x198AD8u; }
        if (ctx->pc != 0x198AD8u) { return; }
    }
    ctx->pc = 0x198AD8u;
label_198ad8:
    // 0x198ad8: 0x24520001  addiu       $s2, $v0, 0x1
    ctx->pc = 0x198ad8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x198adc: 0xc0941b0  jal         func_2506C0
    ctx->pc = 0x198ADCu;
    SET_GPR_U32(ctx, 31, 0x198AE4u);
    ctx->pc = 0x198AE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x198ADCu;
            // 0x198ae0: 0x2404000a  addiu       $a0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2506C0u;
    if (runtime->hasFunction(0x2506C0u)) {
        auto targetFn = runtime->lookupFunction(0x2506C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x198AE4u; }
        if (ctx->pc != 0x198AE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetRandI__Fi_0x2506c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x198AE4u; }
        if (ctx->pc != 0x198AE4u) { return; }
    }
    ctx->pc = 0x198AE4u;
label_198ae4:
    // 0x198ae4: 0x28410008  slti        $at, $v0, 0x8
    ctx->pc = 0x198ae4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x198ae8: 0x10200005  beqz        $at, . + 4 + (0x5 << 2)
    ctx->pc = 0x198AE8u;
    {
        const bool branch_taken_0x198ae8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x198ae8) {
            ctx->pc = 0x198B00u;
            goto label_198b00;
        }
    }
    ctx->pc = 0x198AF0u;
    // 0x198af0: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x198af0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x198af4: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x198af4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x198af8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x198AF8u;
    {
        const bool branch_taken_0x198af8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x198AFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x198AF8u;
            // 0x198afc: 0xa4520006  sh          $s2, 0x6($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 6), (uint16_t)GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x198af8) {
            ctx->pc = 0x198B0Cu;
            goto label_198b0c;
        }
    }
    ctx->pc = 0x198B00u;
label_198b00:
    // 0x198b00: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x198b00u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x198b04: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x198b04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x198b08: 0xa452fff2  sh          $s2, -0xE($v0)
    ctx->pc = 0x198b08u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4294967282), (uint16_t)GPR_U32(ctx, 18));
label_198b0c:
    // 0x198b0c: 0x100000a5  b           . + 4 + (0xA5 << 2)
    ctx->pc = 0x198B0Cu;
    {
        const bool branch_taken_0x198b0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x198B10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x198B0Cu;
            // 0x198b10: 0xae00001c  sw          $zero, 0x1C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x198b0c) {
            ctx->pc = 0x198DA4u;
            goto label_198da4;
        }
    }
    ctx->pc = 0x198B14u;
label_198b14:
    // 0x198b14: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x198b14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x198b18: 0xa2020000  sb          $v0, 0x0($s0)
    ctx->pc = 0x198b18u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x198b1c: 0x82420010  lb          $v0, 0x10($s2)
    ctx->pc = 0x198b1cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x198b20: 0xa2020001  sb          $v0, 0x1($s0)
    ctx->pc = 0x198b20u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x198b24: 0x92020001  lbu         $v0, 0x1($s0)
    ctx->pc = 0x198b24u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
    // 0x198b28: 0x28410015  slti        $at, $v0, 0x15
    ctx->pc = 0x198b28u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)21) ? 1 : 0);
    // 0x198b2c: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x198B2Cu;
    {
        const bool branch_taken_0x198b2c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x198B30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x198B2Cu;
            // 0x198b30: 0x24020014  addiu       $v0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x198b2c) {
            ctx->pc = 0x198B38u;
            goto label_198b38;
        }
    }
    ctx->pc = 0x198B34u;
    // 0x198b34: 0xa2020001  sb          $v0, 0x1($s0)
    ctx->pc = 0x198b34u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 2));
label_198b38:
    // 0x198b38: 0x8e430028  lw          $v1, 0x28($s2)
    ctx->pc = 0x198b38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 40)));
    // 0x198b3c: 0x3c023f19  lui         $v0, 0x3F19
    ctx->pc = 0x198b3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16153 << 16));
    // 0x198b40: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x198b40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39322);
    // 0x198b44: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x198b44u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x198b48: 0xae03001c  sw          $v1, 0x1C($s0)
    ctx->pc = 0x198b48u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 3));
    // 0x198b4c: 0x86420010  lh          $v0, 0x10($s2)
    ctx->pc = 0x198b4cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x198b50: 0xa6020018  sh          $v0, 0x18($s0)
    ctx->pc = 0x198b50u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 24), (uint16_t)GPR_U32(ctx, 2));
    // 0x198b54: 0x86420012  lh          $v0, 0x12($s2)
    ctx->pc = 0x198b54u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 18)));
    // 0x198b58: 0xa6020002  sh          $v0, 0x2($s0)
    ctx->pc = 0x198b58u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2), (uint16_t)GPR_U32(ctx, 2));
    // 0x198b5c: 0x86420014  lh          $v0, 0x14($s2)
    ctx->pc = 0x198b5cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 20)));
    // 0x198b60: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x198b60u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x198b64: 0x0  nop
    ctx->pc = 0x198b64u;
    // NOP
    // 0x198b68: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x198b68u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x198b6c: 0xc0a248c  jal         func_289230
    ctx->pc = 0x198B6Cu;
    SET_GPR_U32(ctx, 31, 0x198B74u);
    ctx->pc = 0x198B70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x198B6Cu;
            // 0x198b70: 0x46000b02  mul.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x198B74u; }
        if (ctx->pc != 0x198B74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x198B74u; }
        if (ctx->pc != 0x198B74u) { return; }
    }
    ctx->pc = 0x198B74u;
label_198b74:
    // 0x198b74: 0xa6020004  sh          $v0, 0x4($s0)
    ctx->pc = 0x198b74u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 4), (uint16_t)GPR_U32(ctx, 2));
    // 0x198b78: 0x86430016  lh          $v1, 0x16($s2)
    ctx->pc = 0x198b78u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 22)));
    // 0x198b7c: 0x3c023f19  lui         $v0, 0x3F19
    ctx->pc = 0x198b7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16153 << 16));
    // 0x198b80: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x198b80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39322);
    // 0x198b84: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x198b84u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x198b88: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x198b88u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x198b8c: 0x0  nop
    ctx->pc = 0x198b8cu;
    // NOP
    // 0x198b90: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x198b90u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x198b94: 0xc0a248c  jal         func_289230
    ctx->pc = 0x198B94u;
    SET_GPR_U32(ctx, 31, 0x198B9Cu);
    ctx->pc = 0x198B98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x198B94u;
            // 0x198b98: 0x46010302  mul.s       $f12, $f0, $f1 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x198B9Cu; }
        if (ctx->pc != 0x198B9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x198B9Cu; }
        if (ctx->pc != 0x198B9Cu) { return; }
    }
    ctx->pc = 0x198B9Cu;
label_198b9c:
    // 0x198b9c: 0xa6020006  sh          $v0, 0x6($s0)
    ctx->pc = 0x198b9cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 6), (uint16_t)GPR_U32(ctx, 2));
    // 0x198ba0: 0x86430018  lh          $v1, 0x18($s2)
    ctx->pc = 0x198ba0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 24)));
    // 0x198ba4: 0x3c023f19  lui         $v0, 0x3F19
    ctx->pc = 0x198ba4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16153 << 16));
    // 0x198ba8: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x198ba8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39322);
    // 0x198bac: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x198bacu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x198bb0: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x198bb0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x198bb4: 0x0  nop
    ctx->pc = 0x198bb4u;
    // NOP
    // 0x198bb8: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x198bb8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x198bbc: 0xc0a248c  jal         func_289230
    ctx->pc = 0x198BBCu;
    SET_GPR_U32(ctx, 31, 0x198BC4u);
    ctx->pc = 0x198BC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x198BBCu;
            // 0x198bc0: 0x46010302  mul.s       $f12, $f0, $f1 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x198BC4u; }
        if (ctx->pc != 0x198BC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x198BC4u; }
        if (ctx->pc != 0x198BC4u) { return; }
    }
    ctx->pc = 0x198BC4u;
label_198bc4:
    // 0x198bc4: 0xa6020008  sh          $v0, 0x8($s0)
    ctx->pc = 0x198bc4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 8), (uint16_t)GPR_U32(ctx, 2));
    // 0x198bc8: 0x8643001a  lh          $v1, 0x1A($s2)
    ctx->pc = 0x198bc8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 26)));
    // 0x198bcc: 0x3c023f19  lui         $v0, 0x3F19
    ctx->pc = 0x198bccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16153 << 16));
    // 0x198bd0: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x198bd0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39322);
    // 0x198bd4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x198bd4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x198bd8: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x198bd8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x198bdc: 0x0  nop
    ctx->pc = 0x198bdcu;
    // NOP
    // 0x198be0: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x198be0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x198be4: 0xc0a248c  jal         func_289230
    ctx->pc = 0x198BE4u;
    SET_GPR_U32(ctx, 31, 0x198BECu);
    ctx->pc = 0x198BE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x198BE4u;
            // 0x198be8: 0x46010302  mul.s       $f12, $f0, $f1 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x198BECu; }
        if (ctx->pc != 0x198BECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x198BECu; }
        if (ctx->pc != 0x198BECu) { return; }
    }
    ctx->pc = 0x198BECu;
label_198bec:
    // 0x198bec: 0xa602000a  sh          $v0, 0xA($s0)
    ctx->pc = 0x198becu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 10), (uint16_t)GPR_U32(ctx, 2));
    // 0x198bf0: 0x8643001c  lh          $v1, 0x1C($s2)
    ctx->pc = 0x198bf0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 28)));
    // 0x198bf4: 0x3c023f19  lui         $v0, 0x3F19
    ctx->pc = 0x198bf4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16153 << 16));
    // 0x198bf8: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x198bf8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39322);
    // 0x198bfc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x198bfcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x198c00: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x198c00u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x198c04: 0x0  nop
    ctx->pc = 0x198c04u;
    // NOP
    // 0x198c08: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x198c08u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x198c0c: 0xc0a248c  jal         func_289230
    ctx->pc = 0x198C0Cu;
    SET_GPR_U32(ctx, 31, 0x198C14u);
    ctx->pc = 0x198C10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x198C0Cu;
            // 0x198c10: 0x46010302  mul.s       $f12, $f0, $f1 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x198C14u; }
        if (ctx->pc != 0x198C14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x198C14u; }
        if (ctx->pc != 0x198C14u) { return; }
    }
    ctx->pc = 0x198C14u;
label_198c14:
    // 0x198c14: 0xa602000c  sh          $v0, 0xC($s0)
    ctx->pc = 0x198c14u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 12), (uint16_t)GPR_U32(ctx, 2));
    // 0x198c18: 0x8643001e  lh          $v1, 0x1E($s2)
    ctx->pc = 0x198c18u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 30)));
    // 0x198c1c: 0x3c023f19  lui         $v0, 0x3F19
    ctx->pc = 0x198c1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16153 << 16));
    // 0x198c20: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x198c20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39322);
    // 0x198c24: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x198c24u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x198c28: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x198c28u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x198c2c: 0x0  nop
    ctx->pc = 0x198c2cu;
    // NOP
    // 0x198c30: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x198c30u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x198c34: 0xc0a248c  jal         func_289230
    ctx->pc = 0x198C34u;
    SET_GPR_U32(ctx, 31, 0x198C3Cu);
    ctx->pc = 0x198C38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x198C34u;
            // 0x198c38: 0x46010302  mul.s       $f12, $f0, $f1 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x198C3Cu; }
        if (ctx->pc != 0x198C3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x198C3Cu; }
        if (ctx->pc != 0x198C3Cu) { return; }
    }
    ctx->pc = 0x198C3Cu;
label_198c3c:
    // 0x198c3c: 0xa602000e  sh          $v0, 0xE($s0)
    ctx->pc = 0x198c3cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 14), (uint16_t)GPR_U32(ctx, 2));
    // 0x198c40: 0x86430020  lh          $v1, 0x20($s2)
    ctx->pc = 0x198c40u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 32)));
    // 0x198c44: 0x3c023f19  lui         $v0, 0x3F19
    ctx->pc = 0x198c44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16153 << 16));
    // 0x198c48: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x198c48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39322);
    // 0x198c4c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x198c4cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x198c50: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x198c50u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x198c54: 0x0  nop
    ctx->pc = 0x198c54u;
    // NOP
    // 0x198c58: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x198c58u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x198c5c: 0xc0a248c  jal         func_289230
    ctx->pc = 0x198C5Cu;
    SET_GPR_U32(ctx, 31, 0x198C64u);
    ctx->pc = 0x198C60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x198C5Cu;
            // 0x198c60: 0x46010302  mul.s       $f12, $f0, $f1 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x198C64u; }
        if (ctx->pc != 0x198C64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x198C64u; }
        if (ctx->pc != 0x198C64u) { return; }
    }
    ctx->pc = 0x198C64u;
label_198c64:
    // 0x198c64: 0xa6020010  sh          $v0, 0x10($s0)
    ctx->pc = 0x198c64u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 16), (uint16_t)GPR_U32(ctx, 2));
    // 0x198c68: 0x86430022  lh          $v1, 0x22($s2)
    ctx->pc = 0x198c68u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 34)));
    // 0x198c6c: 0x3c023f19  lui         $v0, 0x3F19
    ctx->pc = 0x198c6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16153 << 16));
    // 0x198c70: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x198c70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39322);
    // 0x198c74: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x198c74u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x198c78: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x198c78u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x198c7c: 0x0  nop
    ctx->pc = 0x198c7cu;
    // NOP
    // 0x198c80: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x198c80u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x198c84: 0xc0a248c  jal         func_289230
    ctx->pc = 0x198C84u;
    SET_GPR_U32(ctx, 31, 0x198C8Cu);
    ctx->pc = 0x198C88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x198C84u;
            // 0x198c88: 0x46010302  mul.s       $f12, $f0, $f1 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x198C8Cu; }
        if (ctx->pc != 0x198C8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x198C8Cu; }
        if (ctx->pc != 0x198C8Cu) { return; }
    }
    ctx->pc = 0x198C8Cu;
label_198c8c:
    // 0x198c8c: 0xa6020012  sh          $v0, 0x12($s0)
    ctx->pc = 0x198c8cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 18), (uint16_t)GPR_U32(ctx, 2));
    // 0x198c90: 0x86430024  lh          $v1, 0x24($s2)
    ctx->pc = 0x198c90u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 36)));
    // 0x198c94: 0x3c023f19  lui         $v0, 0x3F19
    ctx->pc = 0x198c94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16153 << 16));
    // 0x198c98: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x198c98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39322);
    // 0x198c9c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x198c9cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x198ca0: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x198ca0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x198ca4: 0x0  nop
    ctx->pc = 0x198ca4u;
    // NOP
    // 0x198ca8: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x198ca8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x198cac: 0xc0a248c  jal         func_289230
    ctx->pc = 0x198CACu;
    SET_GPR_U32(ctx, 31, 0x198CB4u);
    ctx->pc = 0x198CB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x198CACu;
            // 0x198cb0: 0x46010302  mul.s       $f12, $f0, $f1 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x198CB4u; }
        if (ctx->pc != 0x198CB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x198CB4u; }
        if (ctx->pc != 0x198CB4u) { return; }
    }
    ctx->pc = 0x198CB4u;
label_198cb4:
    // 0x198cb4: 0x1000003b  b           . + 4 + (0x3B << 2)
    ctx->pc = 0x198CB4u;
    {
        const bool branch_taken_0x198cb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x198CB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x198CB4u;
            // 0x198cb8: 0xa6020014  sh          $v0, 0x14($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 20), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x198cb4) {
            ctx->pc = 0x198DA4u;
            goto label_198da4;
        }
    }
    ctx->pc = 0x198CBCu;
label_198cbc:
    // 0x198cbc: 0xa6000018  sh          $zero, 0x18($s0)
    ctx->pc = 0x198cbcu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 24), (uint16_t)GPR_U32(ctx, 0));
    // 0x198cc0: 0x2404017f  addiu       $a0, $zero, 0x17F
    ctx->pc = 0x198cc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 383));
    // 0x198cc4: 0x86450012  lh          $a1, 0x12($s2)
    ctx->pc = 0x198cc4u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 18)));
    // 0x198cc8: 0xb32818  mult        $a1, $a1, $s3
    ctx->pc = 0x198cc8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 19); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x198ccc: 0xa6050002  sh          $a1, 0x2($s0)
    ctx->pc = 0x198cccu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2), (uint16_t)GPR_U32(ctx, 5));
    // 0x198cd0: 0x86450014  lh          $a1, 0x14($s2)
    ctx->pc = 0x198cd0u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 20)));
    // 0x198cd4: 0x70b32818  mult1       $a1, $a1, $s3
    ctx->pc = 0x198cd4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 19); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x198cd8: 0xa6050004  sh          $a1, 0x4($s0)
    ctx->pc = 0x198cd8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 4), (uint16_t)GPR_U32(ctx, 5));
    // 0x198cdc: 0x86450016  lh          $a1, 0x16($s2)
    ctx->pc = 0x198cdcu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 22)));
    // 0x198ce0: 0xb32818  mult        $a1, $a1, $s3
    ctx->pc = 0x198ce0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 19); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x198ce4: 0xa6050006  sh          $a1, 0x6($s0)
    ctx->pc = 0x198ce4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 6), (uint16_t)GPR_U32(ctx, 5));
    // 0x198ce8: 0x86450018  lh          $a1, 0x18($s2)
    ctx->pc = 0x198ce8u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 24)));
    // 0x198cec: 0x70b32818  mult1       $a1, $a1, $s3
    ctx->pc = 0x198cecu;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 19); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x198cf0: 0xa6050008  sh          $a1, 0x8($s0)
    ctx->pc = 0x198cf0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 8), (uint16_t)GPR_U32(ctx, 5));
    // 0x198cf4: 0x8645001a  lh          $a1, 0x1A($s2)
    ctx->pc = 0x198cf4u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 26)));
    // 0x198cf8: 0xb32818  mult        $a1, $a1, $s3
    ctx->pc = 0x198cf8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 19); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x198cfc: 0xa605000a  sh          $a1, 0xA($s0)
    ctx->pc = 0x198cfcu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 10), (uint16_t)GPR_U32(ctx, 5));
    // 0x198d00: 0x8645001c  lh          $a1, 0x1C($s2)
    ctx->pc = 0x198d00u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 28)));
    // 0x198d04: 0x70b32818  mult1       $a1, $a1, $s3
    ctx->pc = 0x198d04u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 19); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x198d08: 0xa605000c  sh          $a1, 0xC($s0)
    ctx->pc = 0x198d08u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 12), (uint16_t)GPR_U32(ctx, 5));
    // 0x198d0c: 0x8645001e  lh          $a1, 0x1E($s2)
    ctx->pc = 0x198d0cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 30)));
    // 0x198d10: 0xb32818  mult        $a1, $a1, $s3
    ctx->pc = 0x198d10u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 19); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x198d14: 0xa605000e  sh          $a1, 0xE($s0)
    ctx->pc = 0x198d14u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 14), (uint16_t)GPR_U32(ctx, 5));
    // 0x198d18: 0x86450020  lh          $a1, 0x20($s2)
    ctx->pc = 0x198d18u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 32)));
    // 0x198d1c: 0x70b32818  mult1       $a1, $a1, $s3
    ctx->pc = 0x198d1cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 19); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x198d20: 0xa6050010  sh          $a1, 0x10($s0)
    ctx->pc = 0x198d20u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 16), (uint16_t)GPR_U32(ctx, 5));
    // 0x198d24: 0x86450022  lh          $a1, 0x22($s2)
    ctx->pc = 0x198d24u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 34)));
    // 0x198d28: 0xb32818  mult        $a1, $a1, $s3
    ctx->pc = 0x198d28u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 19); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x198d2c: 0xa6050012  sh          $a1, 0x12($s0)
    ctx->pc = 0x198d2cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 18), (uint16_t)GPR_U32(ctx, 5));
    // 0x198d30: 0x86450024  lh          $a1, 0x24($s2)
    ctx->pc = 0x198d30u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 36)));
    // 0x198d34: 0x70b32818  mult1       $a1, $a1, $s3
    ctx->pc = 0x198d34u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 19); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x198d38: 0xa6050014  sh          $a1, 0x14($s0)
    ctx->pc = 0x198d38u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 20), (uint16_t)GPR_U32(ctx, 5));
    // 0x198d3c: 0x8e45002c  lw          $a1, 0x2C($s2)
    ctx->pc = 0x198d3cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 44)));
    // 0x198d40: 0xae05001c  sw          $a1, 0x1C($s0)
    ctx->pc = 0x198d40u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 5));
    // 0x198d44: 0xa2020000  sb          $v0, 0x0($s0)
    ctx->pc = 0x198d44u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x198d48: 0xa2130001  sb          $s3, 0x1($s0)
    ctx->pc = 0x198d48u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 19));
    // 0x198d4c: 0x86420002  lh          $v0, 0x2($s2)
    ctx->pc = 0x198d4cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 2)));
    // 0x198d50: 0x14440014  bne         $v0, $a0, . + 4 + (0x14 << 2)
    ctx->pc = 0x198D50u;
    {
        const bool branch_taken_0x198d50 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x198D54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x198D50u;
            // 0x198d54: 0x26430010  addiu       $v1, $s2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x198d50) {
            ctx->pc = 0x198DA4u;
            goto label_198da4;
        }
    }
    ctx->pc = 0x198D58u;
    // 0x198d58: 0x90620001  lbu         $v0, 0x1($v1)
    ctx->pc = 0x198d58u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 1)));
    // 0x198d5c: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x198D5Cu;
    {
        const bool branch_taken_0x198d5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x198D60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x198D5Cu;
            // 0x198d60: 0xa2020001  sb          $v0, 0x1($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x198d5c) {
            ctx->pc = 0x198DA4u;
            goto label_198da4;
        }
    }
    ctx->pc = 0x198D64u;
label_198d64:
    // 0x198d64: 0xa6000018  sh          $zero, 0x18($s0)
    ctx->pc = 0x198d64u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 24), (uint16_t)GPR_U32(ctx, 0));
    // 0x198d68: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x198d68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x198d6c: 0xa6020014  sh          $v0, 0x14($s0)
    ctx->pc = 0x198d6cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 20), (uint16_t)GPR_U32(ctx, 2));
    // 0x198d70: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x198d70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x198d74: 0xae00001c  sw          $zero, 0x1C($s0)
    ctx->pc = 0x198d74u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 0));
    // 0x198d78: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x198d78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x198d7c: 0xa2030000  sb          $v1, 0x0($s0)
    ctx->pc = 0x198d7cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x198d80: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x198D80u;
    {
        const bool branch_taken_0x198d80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x198D84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x198D80u;
            // 0x198d84: 0xa2020001  sb          $v0, 0x1($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x198d80) {
            ctx->pc = 0x198DA4u;
            goto label_198da4;
        }
    }
    ctx->pc = 0x198D88u;
label_198d88:
    // 0x198d88: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x198d88u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x198d8c: 0xc065830  jal         func_1960C0
    ctx->pc = 0x198D8Cu;
    SET_GPR_U32(ctx, 31, 0x198D94u);
    ctx->pc = 0x198D90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x198D8Cu;
            // 0x198d90: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1960C0u;
    if (runtime->hasFunction(0x1960C0u)) {
        auto targetFn = runtime->lookupFunction(0x1960C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x198D94u; }
        if (ctx->pc != 0x198D94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetItemSpectolPoint__FiP11ATTACH_USEDi_0x1960c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x198D94u; }
        if (ctx->pc != 0x198D94u) { return; }
    }
    ctx->pc = 0x198D94u;
label_198d94:
    // 0x198d94: 0xae00001c  sw          $zero, 0x1C($s0)
    ctx->pc = 0x198d94u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 0));
    // 0x198d98: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x198d98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x198d9c: 0xa2020000  sb          $v0, 0x0($s0)
    ctx->pc = 0x198d9cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x198da0: 0xa2130001  sb          $s3, 0x1($s0)
    ctx->pc = 0x198da0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 19));
label_198da4:
    // 0x198da4: 0x3c0401e7  lui         $a0, 0x1E7
    ctx->pc = 0x198da4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)487 << 16));
    // 0x198da8: 0x240500b9  addiu       $a1, $zero, 0xB9
    ctx->pc = 0x198da8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 185));
    // 0x198dac: 0x24849570  addiu       $a0, $a0, -0x6A90
    ctx->pc = 0x198dacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294940016));
    // 0x198db0: 0xc0656e0  jal         func_195B80
    ctx->pc = 0x198DB0u;
    SET_GPR_U32(ctx, 31, 0x198DB8u);
    ctx->pc = 0x198DB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x198DB0u;
            // 0x198db4: 0xa6150018  sh          $s5, 0x18($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 24), (uint16_t)GPR_U32(ctx, 21));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195B80u;
    if (runtime->hasFunction(0x195B80u)) {
        auto targetFn = runtime->lookupFunction(0x195B80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x198DB8u; }
        if (ctx->pc != 0x198DB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDataType__9CGameDataFi_0x195b80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x198DB8u; }
        if (ctx->pc != 0x198DB8u) { return; }
    }
    ctx->pc = 0x198DB8u;
label_198db8:
    // 0x198db8: 0xa2220004  sb          $v0, 0x4($s1)
    ctx->pc = 0x198db8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 4), (uint8_t)GPR_U32(ctx, 2));
    // 0x198dbc: 0x240300b9  addiu       $v1, $zero, 0xB9
    ctx->pc = 0x198dbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 185));
    // 0x198dc0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x198dc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x198dc4: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x198dc4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x198dc8: 0xa6220000  sh          $v0, 0x0($s1)
    ctx->pc = 0x198dc8u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x198dcc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x198dccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x198dd0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x198dd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x198dd4: 0xa6230002  sh          $v1, 0x2($s1)
    ctx->pc = 0x198dd4u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 2), (uint16_t)GPR_U32(ctx, 3));
    // 0x198dd8: 0xc065d8c  jal         func_197630
    ctx->pc = 0x198DD8u;
    SET_GPR_U32(ctx, 31, 0x198DE0u);
    ctx->pc = 0x198DDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x198DD8u;
            // 0x198ddc: 0xa602003a  sh          $v0, 0x3A($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 58), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x197630u;
    if (runtime->hasFunction(0x197630u)) {
        auto targetFn = runtime->lookupFunction(0x197630u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x198DE0u; }
        if (ctx->pc != 0x198DE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetName__13CGameDataUsedFPc_0x197630(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x198DE0u; }
        if (ctx->pc != 0x198DE0u) { return; }
    }
    ctx->pc = 0x198DE0u;
label_198de0:
    // 0x198de0: 0xc066538  jal         func_1994E0
    ctx->pc = 0x198DE0u;
    SET_GPR_U32(ctx, 31, 0x198DE8u);
    ctx->pc = 0x198DE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x198DE0u;
            // 0x198de4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1994E0u;
    if (runtime->hasFunction(0x1994E0u)) {
        auto targetFn = runtime->lookupFunction(0x1994E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x198DE8u; }
        if (ctx->pc != 0x198DE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckParamLimmit__13CGameDataUsedFv_0x1994e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x198DE8u; }
        if (ctx->pc != 0x198DE8u) { return; }
    }
    ctx->pc = 0x198DE8u;
label_198de8:
    // 0x198de8: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x198de8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x198dec: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x198decu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x198df0: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x198df0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x198df4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x198df4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x198df8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x198df8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x198dfc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x198dfcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x198e00: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x198e00u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x198e04: 0x3e00008  jr          $ra
    ctx->pc = 0x198E04u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x198E08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x198E04u;
            // 0x198e08: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x198E0Cu;
}
