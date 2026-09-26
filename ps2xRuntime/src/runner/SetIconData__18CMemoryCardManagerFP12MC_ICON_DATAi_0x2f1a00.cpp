#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: SetIconData__18CMemoryCardManagerFP12MC_ICON_DATAi
// Address: 0x2f1a00 - 0x2f1b88
void SetIconData__18CMemoryCardManagerFP12MC_ICON_DATAi_0x2f1a00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetIconData__18CMemoryCardManagerFP12MC_ICON_DATAi_0x2f1a00");
#endif

    switch (ctx->pc) {
        case 0x2f1a2cu: goto label_2f1a2c;
        case 0x2f1a3cu: goto label_2f1a3c;
        case 0x2f1a4cu: goto label_2f1a4c;
        case 0x2f1ae4u: goto label_2f1ae4;
        case 0x2f1af4u: goto label_2f1af4;
        case 0x2f1b04u: goto label_2f1b04;
        case 0x2f1b1cu: goto label_2f1b1c;
        case 0x2f1b2cu: goto label_2f1b2c;
        case 0x2f1b3cu: goto label_2f1b3c;
        case 0x2f1b4cu: goto label_2f1b4c;
        case 0x2f1b58u: goto label_2f1b58;
        case 0x2f1b64u: goto label_2f1b64;
        case 0x2f1b70u: goto label_2f1b70;
        default: break;
    }

    ctx->pc = 0x2f1a00u;

    // 0x2f1a00: 0x27bdff10  addiu       $sp, $sp, -0xF0
    ctx->pc = 0x2f1a00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967056));
    // 0x2f1a04: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2f1a04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2f1a08: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2f1a08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2f1a0c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2f1a0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2f1a10: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x2f1a10u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f1a14: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2f1a14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2f1a18: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2f1a18u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f1a1c: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x2f1a1cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f1a20: 0x26240920  addiu       $a0, $s1, 0x920
    ctx->pc = 0x2f1a20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 2336));
    // 0x2f1a24: 0xc049c18  jal         func_127060
    ctx->pc = 0x2F1A24u;
    SET_GPR_U32(ctx, 31, 0x2F1A2Cu);
    ctx->pc = 0x2F1A28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F1A24u;
            // 0x2f1a28: 0x24060028  addiu       $a2, $zero, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127060u;
    if (runtime->hasFunction(0x127060u)) {
        auto targetFn = runtime->lookupFunction(0x127060u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F1A2Cu; }
        if (ctx->pc != 0x2F1A2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        memcpy_0x127060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F1A2Cu; }
        if (ctx->pc != 0x2F1A2Cu) { return; }
    }
    ctx->pc = 0x2F1A2Cu;
label_2f1a2c:
    // 0x2f1a2c: 0x26240948  addiu       $a0, $s1, 0x948
    ctx->pc = 0x2f1a2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 2376));
    // 0x2f1a30: 0x26450028  addiu       $a1, $s2, 0x28
    ctx->pc = 0x2f1a30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 40));
    // 0x2f1a34: 0xc049c18  jal         func_127060
    ctx->pc = 0x2F1A34u;
    SET_GPR_U32(ctx, 31, 0x2F1A3Cu);
    ctx->pc = 0x2F1A38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F1A34u;
            // 0x2f1a38: 0x24060028  addiu       $a2, $zero, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127060u;
    if (runtime->hasFunction(0x127060u)) {
        auto targetFn = runtime->lookupFunction(0x127060u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F1A3Cu; }
        if (ctx->pc != 0x2F1A3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        memcpy_0x127060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F1A3Cu; }
        if (ctx->pc != 0x2F1A3Cu) { return; }
    }
    ctx->pc = 0x2F1A3Cu;
label_2f1a3c:
    // 0x2f1a3c: 0x26450050  addiu       $a1, $s2, 0x50
    ctx->pc = 0x2f1a3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 80));
    // 0x2f1a40: 0x26240970  addiu       $a0, $s1, 0x970
    ctx->pc = 0x2f1a40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 2416));
    // 0x2f1a44: 0xc049c18  jal         func_127060
    ctx->pc = 0x2F1A44u;
    SET_GPR_U32(ctx, 31, 0x2F1A4Cu);
    ctx->pc = 0x2F1A48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F1A44u;
            // 0x2f1a48: 0x24060028  addiu       $a2, $zero, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127060u;
    if (runtime->hasFunction(0x127060u)) {
        auto targetFn = runtime->lookupFunction(0x127060u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F1A4Cu; }
        if (ctx->pc != 0x2F1A4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        memcpy_0x127060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F1A4Cu; }
        if (ctx->pc != 0x2F1A4Cu) { return; }
    }
    ctx->pc = 0x2F1A4Cu;
label_2f1a4c:
    // 0x2f1a4c: 0x3c020036  lui         $v0, 0x36
    ctx->pc = 0x2f1a4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
    // 0x2f1a50: 0x3c080036  lui         $t0, 0x36
    ctx->pc = 0x2f1a50u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)54 << 16));
    // 0x2f1a54: 0x2442cd60  addiu       $v0, $v0, -0x32A0
    ctx->pc = 0x2f1a54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954336));
    // 0x2f1a58: 0x3c070036  lui         $a3, 0x36
    ctx->pc = 0x2f1a58u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)54 << 16));
    // 0x2f1a5c: 0x784e0000  lq          $t6, 0x0($v0)
    ctx->pc = 0x2f1a5cu;
    SET_GPR_VEC(ctx, 14, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2f1a60: 0x27af0040  addiu       $t7, $sp, 0x40
    ctx->pc = 0x2f1a60u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2f1a64: 0x784d0010  lq          $t5, 0x10($v0)
    ctx->pc = 0x2f1a64u;
    SET_GPR_VEC(ctx, 13, READ128(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x2f1a68: 0x2508cda0  addiu       $t0, $t0, -0x3260
    ctx->pc = 0x2f1a68u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294954400));
    // 0x2f1a6c: 0x784b0020  lq          $t3, 0x20($v0)
    ctx->pc = 0x2f1a6cu;
    SET_GPR_VEC(ctx, 11, READ128(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x2f1a70: 0x27ac0080  addiu       $t4, $sp, 0x80
    ctx->pc = 0x2f1a70u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x2f1a74: 0x78490030  lq          $t1, 0x30($v0)
    ctx->pc = 0x2f1a74u;
    SET_GPR_VEC(ctx, 9, READ128(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x2f1a78: 0x24e7cdd0  addiu       $a3, $a3, -0x3230
    ctx->pc = 0x2f1a78u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294954448));
    // 0x2f1a7c: 0x27aa00b0  addiu       $t2, $sp, 0xB0
    ctx->pc = 0x2f1a7cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x2f1a80: 0x27a300e0  addiu       $v1, $sp, 0xE0
    ctx->pc = 0x2f1a80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x2f1a84: 0x26240998  addiu       $a0, $s1, 0x998
    ctx->pc = 0x2f1a84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 2456));
    // 0x2f1a88: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2f1a88u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f1a8c: 0x240603c4  addiu       $a2, $zero, 0x3C4
    ctx->pc = 0x2f1a8cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 964));
    // 0x2f1a90: 0x7dee0000  sq          $t6, 0x0($t7)
    ctx->pc = 0x2f1a90u;
    WRITE128(ADD32(GPR_U32(ctx, 15), 0), GPR_VEC(ctx, 14));
    // 0x2f1a94: 0x3c020036  lui         $v0, 0x36
    ctx->pc = 0x2f1a94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
    // 0x2f1a98: 0x7ded0010  sq          $t5, 0x10($t7)
    ctx->pc = 0x2f1a98u;
    WRITE128(ADD32(GPR_U32(ctx, 15), 16), GPR_VEC(ctx, 13));
    // 0x2f1a9c: 0x2442ce00  addiu       $v0, $v0, -0x3200
    ctx->pc = 0x2f1a9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954496));
    // 0x2f1aa0: 0x7deb0020  sq          $t3, 0x20($t7)
    ctx->pc = 0x2f1aa0u;
    WRITE128(ADD32(GPR_U32(ctx, 15), 32), GPR_VEC(ctx, 11));
    // 0x2f1aa4: 0x7de90030  sq          $t1, 0x30($t7)
    ctx->pc = 0x2f1aa4u;
    WRITE128(ADD32(GPR_U32(ctx, 15), 48), GPR_VEC(ctx, 9));
    // 0x2f1aa8: 0x790b0000  lq          $t3, 0x0($t0)
    ctx->pc = 0x2f1aa8u;
    SET_GPR_VEC(ctx, 11, READ128(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x2f1aac: 0x79090010  lq          $t1, 0x10($t0)
    ctx->pc = 0x2f1aacu;
    SET_GPR_VEC(ctx, 9, READ128(ADD32(GPR_U32(ctx, 8), 16)));
    // 0x2f1ab0: 0x79080020  lq          $t0, 0x20($t0)
    ctx->pc = 0x2f1ab0u;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 8), 32)));
    // 0x2f1ab4: 0x7d8b0000  sq          $t3, 0x0($t4)
    ctx->pc = 0x2f1ab4u;
    WRITE128(ADD32(GPR_U32(ctx, 12), 0), GPR_VEC(ctx, 11));
    // 0x2f1ab8: 0x7d890010  sq          $t1, 0x10($t4)
    ctx->pc = 0x2f1ab8u;
    WRITE128(ADD32(GPR_U32(ctx, 12), 16), GPR_VEC(ctx, 9));
    // 0x2f1abc: 0x7d880020  sq          $t0, 0x20($t4)
    ctx->pc = 0x2f1abcu;
    WRITE128(ADD32(GPR_U32(ctx, 12), 32), GPR_VEC(ctx, 8));
    // 0x2f1ac0: 0x78e90000  lq          $t1, 0x0($a3)
    ctx->pc = 0x2f1ac0u;
    SET_GPR_VEC(ctx, 9, READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x2f1ac4: 0x78e80010  lq          $t0, 0x10($a3)
    ctx->pc = 0x2f1ac4u;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 7), 16)));
    // 0x2f1ac8: 0x78e70020  lq          $a3, 0x20($a3)
    ctx->pc = 0x2f1ac8u;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 7), 32)));
    // 0x2f1acc: 0x7d490000  sq          $t1, 0x0($t2)
    ctx->pc = 0x2f1accu;
    WRITE128(ADD32(GPR_U32(ctx, 10), 0), GPR_VEC(ctx, 9));
    // 0x2f1ad0: 0x7d480010  sq          $t0, 0x10($t2)
    ctx->pc = 0x2f1ad0u;
    WRITE128(ADD32(GPR_U32(ctx, 10), 16), GPR_VEC(ctx, 8));
    // 0x2f1ad4: 0x7d470020  sq          $a3, 0x20($t2)
    ctx->pc = 0x2f1ad4u;
    WRITE128(ADD32(GPR_U32(ctx, 10), 32), GPR_VEC(ctx, 7));
    // 0x2f1ad8: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x2f1ad8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2f1adc: 0xc049c86  jal         func_127218
    ctx->pc = 0x2F1ADCu;
    SET_GPR_U32(ctx, 31, 0x2F1AE4u);
    ctx->pc = 0x2F1AE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F1ADCu;
            // 0x2f1ae0: 0x7c620000  sq          $v0, 0x0($v1) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127218u;
    if (runtime->hasFunction(0x127218u)) {
        auto targetFn = runtime->lookupFunction(0x127218u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F1AE4u; }
        if (ctx->pc != 0x2F1AE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        memset_0x127218(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F1AE4u; }
        if (ctx->pc != 0x2F1AE4u) { return; }
    }
    ctx->pc = 0x2F1AE4u;
label_2f1ae4:
    // 0x2f1ae4: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x2f1ae4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x2f1ae8: 0x26240998  addiu       $a0, $s1, 0x998
    ctx->pc = 0x2f1ae8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 2456));
    // 0x2f1aec: 0xc04a3dc  jal         func_128F70
    ctx->pc = 0x2F1AECu;
    SET_GPR_U32(ctx, 31, 0x2F1AF4u);
    ctx->pc = 0x2F1AF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F1AECu;
            // 0x2f1af0: 0x24a51810  addiu       $a1, $a1, 0x1810 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 6160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128F70u;
    if (runtime->hasFunction(0x128F70u)) {
        auto targetFn = runtime->lookupFunction(0x128F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F1AF4u; }
        if (ctx->pc != 0x2F1AF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcpy_0x128f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F1AF4u; }
        if (ctx->pc != 0x2F1AF4u) { return; }
    }
    ctx->pc = 0x2F1AF4u;
label_2f1af4:
    // 0x2f1af4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2f1af4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f1af8: 0x26250a58  addiu       $a1, $s1, 0xA58
    ctx->pc = 0x2f1af8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 2648));
    // 0x2f1afc: 0xc0bc4e4  jal         func_2F1390
    ctx->pc = 0x2F1AFCu;
    SET_GPR_U32(ctx, 31, 0x2F1B04u);
    ctx->pc = 0x2F1B00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F1AFCu;
            // 0x2f1b00: 0x2626099e  addiu       $a2, $s1, 0x99E (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 2462));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F1390u;
    if (runtime->hasFunction(0x2F1390u)) {
        auto targetFn = runtime->lookupFunction(0x2F1390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F1B04u; }
        if (ctx->pc != 0x2F1B04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CopyMCBrowserName__FiPcPUs_0x2f1390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F1B04u; }
        if (ctx->pc != 0x2F1B04u) { return; }
    }
    ctx->pc = 0x2F1B04u;
label_2f1b04:
    // 0x2f1b04: 0x24020060  addiu       $v0, $zero, 0x60
    ctx->pc = 0x2f1b04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x2f1b08: 0x262409a8  addiu       $a0, $s1, 0x9A8
    ctx->pc = 0x2f1b08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 2472));
    // 0x2f1b0c: 0xae2209a4  sw          $v0, 0x9A4($s1)
    ctx->pc = 0x2f1b0cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2468), GPR_U32(ctx, 2));
    // 0x2f1b10: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x2f1b10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2f1b14: 0xc049c18  jal         func_127060
    ctx->pc = 0x2F1B14u;
    SET_GPR_U32(ctx, 31, 0x2F1B1Cu);
    ctx->pc = 0x2F1B18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F1B14u;
            // 0x2f1b18: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127060u;
    if (runtime->hasFunction(0x127060u)) {
        auto targetFn = runtime->lookupFunction(0x127060u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F1B1Cu; }
        if (ctx->pc != 0x2F1B1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        memcpy_0x127060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F1B1Cu; }
        if (ctx->pc != 0x2F1B1Cu) { return; }
    }
    ctx->pc = 0x2F1B1Cu;
label_2f1b1c:
    // 0x2f1b1c: 0x262409e8  addiu       $a0, $s1, 0x9E8
    ctx->pc = 0x2f1b1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 2536));
    // 0x2f1b20: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x2f1b20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x2f1b24: 0xc049c18  jal         func_127060
    ctx->pc = 0x2F1B24u;
    SET_GPR_U32(ctx, 31, 0x2F1B2Cu);
    ctx->pc = 0x2F1B28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F1B24u;
            // 0x2f1b28: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127060u;
    if (runtime->hasFunction(0x127060u)) {
        auto targetFn = runtime->lookupFunction(0x127060u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F1B2Cu; }
        if (ctx->pc != 0x2F1B2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        memcpy_0x127060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F1B2Cu; }
        if (ctx->pc != 0x2F1B2Cu) { return; }
    }
    ctx->pc = 0x2F1B2Cu;
label_2f1b2c:
    // 0x2f1b2c: 0x26240a18  addiu       $a0, $s1, 0xA18
    ctx->pc = 0x2f1b2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 2584));
    // 0x2f1b30: 0x27a500b0  addiu       $a1, $sp, 0xB0
    ctx->pc = 0x2f1b30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x2f1b34: 0xc049c18  jal         func_127060
    ctx->pc = 0x2F1B34u;
    SET_GPR_U32(ctx, 31, 0x2F1B3Cu);
    ctx->pc = 0x2F1B38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F1B34u;
            // 0x2f1b38: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127060u;
    if (runtime->hasFunction(0x127060u)) {
        auto targetFn = runtime->lookupFunction(0x127060u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F1B3Cu; }
        if (ctx->pc != 0x2F1B3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        memcpy_0x127060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F1B3Cu; }
        if (ctx->pc != 0x2F1B3Cu) { return; }
    }
    ctx->pc = 0x2F1B3Cu;
label_2f1b3c:
    // 0x2f1b3c: 0x26240a48  addiu       $a0, $s1, 0xA48
    ctx->pc = 0x2f1b3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 2632));
    // 0x2f1b40: 0x27a500e0  addiu       $a1, $sp, 0xE0
    ctx->pc = 0x2f1b40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x2f1b44: 0xc049c18  jal         func_127060
    ctx->pc = 0x2F1B44u;
    SET_GPR_U32(ctx, 31, 0x2F1B4Cu);
    ctx->pc = 0x2F1B48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F1B44u;
            // 0x2f1b48: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127060u;
    if (runtime->hasFunction(0x127060u)) {
        auto targetFn = runtime->lookupFunction(0x127060u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F1B4Cu; }
        if (ctx->pc != 0x2F1B4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        memcpy_0x127060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F1B4Cu; }
        if (ctx->pc != 0x2F1B4Cu) { return; }
    }
    ctx->pc = 0x2F1B4Cu;
label_2f1b4c:
    // 0x2f1b4c: 0x26240a9c  addiu       $a0, $s1, 0xA9C
    ctx->pc = 0x2f1b4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 2716));
    // 0x2f1b50: 0xc04a3dc  jal         func_128F70
    ctx->pc = 0x2F1B50u;
    SET_GPR_U32(ctx, 31, 0x2F1B58u);
    ctx->pc = 0x2F1B54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F1B50u;
            // 0x2f1b54: 0x26250920  addiu       $a1, $s1, 0x920 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 2336));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128F70u;
    if (runtime->hasFunction(0x128F70u)) {
        auto targetFn = runtime->lookupFunction(0x128F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F1B58u; }
        if (ctx->pc != 0x2F1B58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcpy_0x128f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F1B58u; }
        if (ctx->pc != 0x2F1B58u) { return; }
    }
    ctx->pc = 0x2F1B58u;
label_2f1b58:
    // 0x2f1b58: 0x26240adc  addiu       $a0, $s1, 0xADC
    ctx->pc = 0x2f1b58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 2780));
    // 0x2f1b5c: 0xc04a3dc  jal         func_128F70
    ctx->pc = 0x2F1B5Cu;
    SET_GPR_U32(ctx, 31, 0x2F1B64u);
    ctx->pc = 0x2F1B60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F1B5Cu;
            // 0x2f1b60: 0x26250948  addiu       $a1, $s1, 0x948 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 2376));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128F70u;
    if (runtime->hasFunction(0x128F70u)) {
        auto targetFn = runtime->lookupFunction(0x128F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F1B64u; }
        if (ctx->pc != 0x2F1B64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcpy_0x128f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F1B64u; }
        if (ctx->pc != 0x2F1B64u) { return; }
    }
    ctx->pc = 0x2F1B64u;
label_2f1b64:
    // 0x2f1b64: 0x26240b1c  addiu       $a0, $s1, 0xB1C
    ctx->pc = 0x2f1b64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 2844));
    // 0x2f1b68: 0xc04a3dc  jal         func_128F70
    ctx->pc = 0x2F1B68u;
    SET_GPR_U32(ctx, 31, 0x2F1B70u);
    ctx->pc = 0x2F1B6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F1B68u;
            // 0x2f1b6c: 0x26250970  addiu       $a1, $s1, 0x970 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 2416));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128F70u;
    if (runtime->hasFunction(0x128F70u)) {
        auto targetFn = runtime->lookupFunction(0x128F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F1B70u; }
        if (ctx->pc != 0x2F1B70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcpy_0x128f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F1B70u; }
        if (ctx->pc != 0x2F1B70u) { return; }
    }
    ctx->pc = 0x2F1B70u;
label_2f1b70:
    // 0x2f1b70: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2f1b70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2f1b74: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2f1b74u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2f1b78: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2f1b78u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2f1b7c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2f1b7cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2f1b80: 0x3e00008  jr          $ra
    ctx->pc = 0x2F1B80u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F1B84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F1B80u;
            // 0x2f1b84: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2F1B88u;
}
