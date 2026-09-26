#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: InitOmakeEnv__FiP13INIT_LOOP_ARGPi
// Address: 0x29f110 - 0x29f1f0
void InitOmakeEnv__FiP13INIT_LOOP_ARGPi_0x29f110(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("InitOmakeEnv__FiP13INIT_LOOP_ARGPi_0x29f110");
#endif

    switch (ctx->pc) {
        case 0x29f16cu: goto label_29f16c;
        case 0x29f1b8u: goto label_29f1b8;
        case 0x29f1ccu: goto label_29f1cc;
        default: break;
    }

    ctx->pc = 0x29f110u;

    // 0x29f110: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x29f110u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x29f114: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x29f114u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x29f118: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x29f118u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x29f11c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x29f11cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x29f120: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x29f120u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x29f124: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x29f124u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x29f128: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x29f128u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29f12c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x29f12cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x29f130: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x29f130u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29f134: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x29f134u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x29f138: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x29f138u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29f13c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x29f13cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x29f140: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x29f140u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29f144: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x29f144u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x29f148: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x29f148u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29f14c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x29f14cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29f150: 0x16a30007  bne         $s5, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x29F150u;
    {
        const bool branch_taken_0x29f150 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 3));
        ctx->pc = 0x29F154u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29F150u;
            // 0x29f154: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29f150) {
            ctx->pc = 0x29F170u;
            goto label_29f170;
        }
    }
    ctx->pc = 0x29F158u;
    // 0x29f158: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x29f158u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
    // 0x29f15c: 0x24100010  addiu       $s0, $zero, 0x10
    ctx->pc = 0x29f15cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x29f160: 0x2484dff8  addiu       $a0, $a0, -0x2008
    ctx->pc = 0x29f160u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294959096));
    // 0x29f164: 0xc0b49fc  jal         func_2D27F0
    ctx->pc = 0x29F164u;
    SET_GPR_U32(ctx, 31, 0x29F16Cu);
    ctx->pc = 0x29F168u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29F164u;
            // 0x29f168: 0x24110064  addiu       $s1, $zero, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D27F0u;
    if (runtime->hasFunction(0x2D27F0u)) {
        auto targetFn = runtime->lookupFunction(0x2D27F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29F16Cu; }
        if (ctx->pc != 0x29F16Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SearchMapNo__FPc_0x2d27f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29F16Cu; }
        if (ctx->pc != 0x29F16Cu) { return; }
    }
    ctx->pc = 0x29F16Cu;
label_29f16c:
    // 0x29f16c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x29f16cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_29f170:
    // 0x29f170: 0x16a00006  bnez        $s5, . + 4 + (0x6 << 2)
    ctx->pc = 0x29F170u;
    {
        const bool branch_taken_0x29f170 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 0));
        if (branch_taken_0x29f170) {
            ctx->pc = 0x29F18Cu;
            goto label_29f18c;
        }
    }
    ctx->pc = 0x29F178u;
    // 0x29f178: 0x24111770  addiu       $s1, $zero, 0x1770
    ctx->pc = 0x29f178u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 6000));
    // 0x29f17c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x29f17cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29f180: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x29f180u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29f184: 0x2410000f  addiu       $s0, $zero, 0xF
    ctx->pc = 0x29f184u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x29f188: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x29f188u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_29f18c:
    // 0x29f18c: 0x12600002  beqz        $s3, . + 4 + (0x2 << 2)
    ctx->pc = 0x29F18Cu;
    {
        const bool branch_taken_0x29f18c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x29f18c) {
            ctx->pc = 0x29F198u;
            goto label_29f198;
        }
    }
    ctx->pc = 0x29F194u;
    // 0x29f194: 0xae640000  sw          $a0, 0x0($s3)
    ctx->pc = 0x29f194u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 4));
label_29f198:
    // 0x29f198: 0x12800004  beqz        $s4, . + 4 + (0x4 << 2)
    ctx->pc = 0x29F198u;
    {
        const bool branch_taken_0x29f198 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x29f198) {
            ctx->pc = 0x29F1ACu;
            goto label_29f1ac;
        }
    }
    ctx->pc = 0x29F1A0u;
    // 0x29f1a0: 0xae910048  sw          $s1, 0x48($s4)
    ctx->pc = 0x29f1a0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 72), GPR_U32(ctx, 17));
    // 0x29f1a4: 0xae820000  sw          $v0, 0x0($s4)
    ctx->pc = 0x29f1a4u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
    // 0x29f1a8: 0xae920044  sw          $s2, 0x44($s4)
    ctx->pc = 0x29f1a8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 68), GPR_U32(ctx, 18));
label_29f1ac:
    // 0x29f1ac: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x29f1acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x29f1b0: 0xc064220  jal         func_190880
    ctx->pc = 0x29F1B0u;
    SET_GPR_U32(ctx, 31, 0x29F1B8u);
    ctx->pc = 0x29F1B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29F1B0u;
            // 0x29f1b4: 0xaf828ad4  sw          $v0, -0x752C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937300), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x190880u;
    if (runtime->hasFunction(0x190880u)) {
        auto targetFn = runtime->lookupFunction(0x190880u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29F1B8u; }
        if (ctx->pc != 0x29F1B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetSaveData__Fv_0x190880(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29F1B8u; }
        if (ctx->pc != 0x29F1B8u) { return; }
    }
    ctx->pc = 0x29F1B8u;
label_29f1b8:
    // 0x29f1b8: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x29f1b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x29f1bc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x29f1bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29f1c0: 0x3421d2a0  ori         $at, $at, 0xD2A0
    ctx->pc = 0x29f1c0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)53920);
    // 0x29f1c4: 0xc0686e0  jal         func_1A1B80
    ctx->pc = 0x29F1C4u;
    SET_GPR_U32(ctx, 31, 0x29F1CCu);
    ctx->pc = 0x29F1C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29F1C4u;
            // 0x29f1c8: 0x412021  addu        $a0, $v0, $at (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 1)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A1B80u;
    if (runtime->hasFunction(0x1A1B80u)) {
        auto targetFn = runtime->lookupFunction(0x1A1B80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29F1CCu; }
        if (ctx->pc != 0x29F1CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DebugGetItem__FP16CUserDataManageri_0x1a1b80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29F1CCu; }
        if (ctx->pc != 0x29F1CCu) { return; }
    }
    ctx->pc = 0x29F1CCu;
label_29f1cc:
    // 0x29f1cc: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x29f1ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x29f1d0: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x29f1d0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x29f1d4: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x29f1d4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x29f1d8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x29f1d8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x29f1dc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x29f1dcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x29f1e0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x29f1e0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x29f1e4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x29f1e4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x29f1e8: 0x3e00008  jr          $ra
    ctx->pc = 0x29F1E8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29F1ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29F1E8u;
            // 0x29f1ec: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x29F1F0u;
}
