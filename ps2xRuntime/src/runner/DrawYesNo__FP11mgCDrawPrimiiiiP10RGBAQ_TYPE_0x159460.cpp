#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: DrawYesNo__FP11mgCDrawPrimiiiiP10RGBAQ_TYPE
// Address: 0x159460 - 0x159554
void DrawYesNo__FP11mgCDrawPrimiiiiP10RGBAQ_TYPE_0x159460(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("DrawYesNo__FP11mgCDrawPrimiiiiP10RGBAQ_TYPE_0x159460");
#endif

    switch (ctx->pc) {
        case 0x1594b0u: goto label_1594b0;
        case 0x1594c8u: goto label_1594c8;
        case 0x1594e4u: goto label_1594e4;
        case 0x1594fcu: goto label_1594fc;
        case 0x159514u: goto label_159514;
        case 0x159530u: goto label_159530;
        default: break;
    }

    ctx->pc = 0x159460u;

    // 0x159460: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x159460u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x159464: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x159464u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x159468: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x159468u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x15946c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x15946cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x159470: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x159470u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x159474: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x159474u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x159478: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x159478u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15947c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x15947cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x159480: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x159480u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x159484: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x159484u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x159488: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x159488u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15948c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x15948cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x159490: 0x100882d  daddu       $s1, $t0, $zero
    ctx->pc = 0x159490u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x159494: 0x120802d  daddu       $s0, $t1, $zero
    ctx->pc = 0x159494u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x159498: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x159498u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x15949c: 0x24050088  addiu       $a1, $zero, 0x88
    ctx->pc = 0x15949cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 136));
    // 0x1594a0: 0x240600e6  addiu       $a2, $zero, 0xE6
    ctx->pc = 0x1594a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 230));
    // 0x1594a4: 0x2407003c  addiu       $a3, $zero, 0x3C
    ctx->pc = 0x1594a4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x1594a8: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x1594A8u;
    SET_GPR_U32(ctx, 31, 0x1594B0u);
    ctx->pc = 0x1594ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1594A8u;
            // 0x1594ac: 0x2408001a  addiu       $t0, $zero, 0x1A (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1594B0u; }
        if (ctx->pc != 0x1594B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1594B0u; }
        if (ctx->pc != 0x1594B0u) { return; }
    }
    ctx->pc = 0x1594B0u;
label_1594b0:
    // 0x1594b0: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x1594b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1594b4: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x1594b4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1594b8: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x1594b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x1594bc: 0x2407003c  addiu       $a3, $zero, 0x3C
    ctx->pc = 0x1594bcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x1594c0: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x1594C0u;
    SET_GPR_U32(ctx, 31, 0x1594C8u);
    ctx->pc = 0x1594C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1594C0u;
            // 0x1594c4: 0x2408001a  addiu       $t0, $zero, 0x1A (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1594C8u; }
        if (ctx->pc != 0x1594C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1594C8u; }
        if (ctx->pc != 0x1594C8u) { return; }
    }
    ctx->pc = 0x1594C8u;
label_1594c8:
    // 0x1594c8: 0x3c040036  lui         $a0, 0x36
    ctx->pc = 0x1594c8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)54 << 16));
    // 0x1594cc: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x1594ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1594d0: 0x24842b00  addiu       $a0, $a0, 0x2B00
    ctx->pc = 0x1594d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 11008));
    // 0x1594d4: 0x27a60070  addiu       $a2, $sp, 0x70
    ctx->pc = 0x1594d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x1594d8: 0x27a70080  addiu       $a3, $sp, 0x80
    ctx->pc = 0x1594d8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x1594dc: 0xc0545d8  jal         func_151760
    ctx->pc = 0x1594DCu;
    SET_GPR_U32(ctx, 31, 0x1594E4u);
    ctx->pc = 0x1594E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1594DCu;
            // 0x1594e0: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x151760u;
    if (runtime->hasFunction(0x151760u)) {
        auto targetFn = runtime->lookupFunction(0x151760u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1594E4u; }
        if (ctx->pc != 0x1594E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        set2DSprite__FPcP11mgCDrawPrim9mgRect_i_9mgRect_i_P10RGBAQ_TYPE_0x151760(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1594E4u; }
        if (ctx->pc != 0x1594E4u) { return; }
    }
    ctx->pc = 0x1594E4u;
label_1594e4:
    // 0x1594e4: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x1594e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x1594e8: 0x240500c4  addiu       $a1, $zero, 0xC4
    ctx->pc = 0x1594e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 196));
    // 0x1594ec: 0x240600e6  addiu       $a2, $zero, 0xE6
    ctx->pc = 0x1594ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 230));
    // 0x1594f0: 0x2407003c  addiu       $a3, $zero, 0x3C
    ctx->pc = 0x1594f0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x1594f4: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x1594F4u;
    SET_GPR_U32(ctx, 31, 0x1594FCu);
    ctx->pc = 0x1594F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1594F4u;
            // 0x1594f8: 0x2408001a  addiu       $t0, $zero, 0x1A (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1594FCu; }
        if (ctx->pc != 0x1594FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1594FCu; }
        if (ctx->pc != 0x1594FCu) { return; }
    }
    ctx->pc = 0x1594FCu;
label_1594fc:
    // 0x1594fc: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1594fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x159500: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x159500u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x159504: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x159504u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x159508: 0x2407003c  addiu       $a3, $zero, 0x3C
    ctx->pc = 0x159508u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x15950c: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x15950Cu;
    SET_GPR_U32(ctx, 31, 0x159514u);
    ctx->pc = 0x159510u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15950Cu;
            // 0x159510: 0x2408001a  addiu       $t0, $zero, 0x1A (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x159514u; }
        if (ctx->pc != 0x159514u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x159514u; }
        if (ctx->pc != 0x159514u) { return; }
    }
    ctx->pc = 0x159514u;
label_159514:
    // 0x159514: 0x3c040036  lui         $a0, 0x36
    ctx->pc = 0x159514u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)54 << 16));
    // 0x159518: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x159518u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15951c: 0x200402d  daddu       $t0, $s0, $zero
    ctx->pc = 0x15951cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x159520: 0x24842b00  addiu       $a0, $a0, 0x2B00
    ctx->pc = 0x159520u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 11008));
    // 0x159524: 0x27a60090  addiu       $a2, $sp, 0x90
    ctx->pc = 0x159524u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x159528: 0xc0545d8  jal         func_151760
    ctx->pc = 0x159528u;
    SET_GPR_U32(ctx, 31, 0x159530u);
    ctx->pc = 0x15952Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x159528u;
            // 0x15952c: 0x27a700a0  addiu       $a3, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x151760u;
    if (runtime->hasFunction(0x151760u)) {
        auto targetFn = runtime->lookupFunction(0x151760u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x159530u; }
        if (ctx->pc != 0x159530u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        set2DSprite__FPcP11mgCDrawPrim9mgRect_i_9mgRect_i_P10RGBAQ_TYPE_0x151760(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x159530u; }
        if (ctx->pc != 0x159530u) { return; }
    }
    ctx->pc = 0x159530u;
label_159530:
    // 0x159530: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x159530u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x159534: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x159534u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x159538: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x159538u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x15953c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x15953cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x159540: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x159540u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x159544: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x159544u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x159548: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x159548u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15954c: 0x3e00008  jr          $ra
    ctx->pc = 0x15954Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x159550u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15954Cu;
            // 0x159550: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x159554u;
}
