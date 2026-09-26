#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _OBJS_SET_COLOR__FP12RS_STACKDATAi
// Address: 0x272430 - 0x2724f4
void ps2__OBJS_SET_COLOR__FP12RS_STACKDATAi_0x272430(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__OBJS_SET_COLOR__FP12RS_STACKDATAi_0x272430");
#endif

    switch (ctx->pc) {
        case 0x272458u: goto label_272458;
        case 0x272468u: goto label_272468;
        case 0x272478u: goto label_272478;
        case 0x272488u: goto label_272488;
        case 0x272498u: goto label_272498;
        case 0x2724acu: goto label_2724ac;
        case 0x2724b8u: goto label_2724b8;
        case 0x2724d4u: goto label_2724d4;
        default: break;
    }

    ctx->pc = 0x272430u;

    // 0x272430: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x272430u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x272434: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x272434u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x272438: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x272438u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x27243c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x27243cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x272440: 0x24930008  addiu       $s3, $a0, 0x8
    ctx->pc = 0x272440u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x272444: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x272444u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x272448: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x272448u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27244c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x27244cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x272450: 0xc097e18  jal         func_25F860
    ctx->pc = 0x272450u;
    SET_GPR_U32(ctx, 31, 0x272458u);
    ctx->pc = 0x272454u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x272450u;
            // 0x272454: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x272458u; }
        if (ctx->pc != 0x272458u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x272458u; }
        if (ctx->pc != 0x272458u) { return; }
    }
    ctx->pc = 0x272458u;
label_272458:
    // 0x272458: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x272458u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27245c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x27245cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x272460: 0xc097e28  jal         func_25F8A0
    ctx->pc = 0x272460u;
    SET_GPR_U32(ctx, 31, 0x272468u);
    ctx->pc = 0x272464u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x272460u;
            // 0x272464: 0x24930008  addiu       $s3, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F8A0u;
    if (runtime->hasFunction(0x25F8A0u)) {
        auto targetFn = runtime->lookupFunction(0x25F8A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x272468u; }
        if (ctx->pc != 0x272468u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackFloat__FP12RS_STACKDATA_0x25f8a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x272468u; }
        if (ctx->pc != 0x272468u) { return; }
    }
    ctx->pc = 0x272468u;
label_272468:
    // 0x272468: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x272468u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27246c: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x27246cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x272470: 0xc097e28  jal         func_25F8A0
    ctx->pc = 0x272470u;
    SET_GPR_U32(ctx, 31, 0x272478u);
    ctx->pc = 0x272474u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x272470u;
            // 0x272474: 0x24930008  addiu       $s3, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F8A0u;
    if (runtime->hasFunction(0x25F8A0u)) {
        auto targetFn = runtime->lookupFunction(0x25F8A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x272478u; }
        if (ctx->pc != 0x272478u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackFloat__FP12RS_STACKDATA_0x25f8a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x272478u; }
        if (ctx->pc != 0x272478u) { return; }
    }
    ctx->pc = 0x272478u;
label_272478:
    // 0x272478: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x272478u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27247c: 0xe7a00054  swc1        $f0, 0x54($sp)
    ctx->pc = 0x27247cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x272480: 0xc097e28  jal         func_25F8A0
    ctx->pc = 0x272480u;
    SET_GPR_U32(ctx, 31, 0x272488u);
    ctx->pc = 0x272484u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x272480u;
            // 0x272484: 0x24930008  addiu       $s3, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F8A0u;
    if (runtime->hasFunction(0x25F8A0u)) {
        auto targetFn = runtime->lookupFunction(0x25F8A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x272488u; }
        if (ctx->pc != 0x272488u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackFloat__FP12RS_STACKDATA_0x25f8a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x272488u; }
        if (ctx->pc != 0x272488u) { return; }
    }
    ctx->pc = 0x272488u;
label_272488:
    // 0x272488: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x272488u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27248c: 0xe7a00058  swc1        $f0, 0x58($sp)
    ctx->pc = 0x27248cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x272490: 0xc097e28  jal         func_25F8A0
    ctx->pc = 0x272490u;
    SET_GPR_U32(ctx, 31, 0x272498u);
    ctx->pc = 0x272494u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x272490u;
            // 0x272494: 0x24930008  addiu       $s3, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F8A0u;
    if (runtime->hasFunction(0x25F8A0u)) {
        auto targetFn = runtime->lookupFunction(0x25F8A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x272498u; }
        if (ctx->pc != 0x272498u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackFloat__FP12RS_STACKDATA_0x25f8a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x272498u; }
        if (ctx->pc != 0x272498u) { return; }
    }
    ctx->pc = 0x272498u;
label_272498:
    // 0x272498: 0x2a420006  slti        $v0, $s2, 0x6
    ctx->pc = 0x272498u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)6) ? 1 : 0);
    // 0x27249c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x27249Cu;
    {
        const bool branch_taken_0x27249c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2724A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27249Cu;
            // 0x2724a0: 0xe7a0005c  swc1        $f0, 0x5C($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x27249c) {
            ctx->pc = 0x2724B0u;
            goto label_2724b0;
        }
    }
    ctx->pc = 0x2724A4u;
    // 0x2724a4: 0xc097e18  jal         func_25F860
    ctx->pc = 0x2724A4u;
    SET_GPR_U32(ctx, 31, 0x2724ACu);
    ctx->pc = 0x2724A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2724A4u;
            // 0x2724a8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2724ACu; }
        if (ctx->pc != 0x2724ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2724ACu; }
        if (ctx->pc != 0x2724ACu) { return; }
    }
    ctx->pc = 0x2724ACu;
label_2724ac:
    // 0x2724ac: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2724acu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2724b0:
    // 0x2724b0: 0xc098a44  jal         func_262910
    ctx->pc = 0x2724B0u;
    SET_GPR_U32(ctx, 31, 0x2724B8u);
    ctx->pc = 0x2724B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2724B0u;
            // 0x2724b4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x262910u;
    if (runtime->hasFunction(0x262910u)) {
        auto targetFn = runtime->lookupFunction(0x262910u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2724B8u; }
        if (ctx->pc != 0x2724B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetObjSeq__Fi_0x262910(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2724B8u; }
        if (ctx->pc != 0x2724B8u) { return; }
    }
    ctx->pc = 0x2724B8u;
label_2724b8:
    // 0x2724b8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2724B8u;
    {
        const bool branch_taken_0x2724b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2724BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2724B8u;
            // 0x2724bc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2724b8) {
            ctx->pc = 0x2724C8u;
            goto label_2724c8;
        }
    }
    ctx->pc = 0x2724C0u;
    // 0x2724c0: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2724C0u;
    {
        const bool branch_taken_0x2724c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2724C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2724C0u;
            // 0x2724c4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2724c0) {
            ctx->pc = 0x2724D8u;
            goto label_2724d8;
        }
    }
    ctx->pc = 0x2724C8u;
label_2724c8:
    // 0x2724c8: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x2724c8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2724cc: 0xc0974bc  jal         func_25D2F0
    ctx->pc = 0x2724CCu;
    SET_GPR_U32(ctx, 31, 0x2724D4u);
    ctx->pc = 0x2724D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2724CCu;
            // 0x2724d0: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25D2F0u;
    if (runtime->hasFunction(0x25D2F0u)) {
        auto targetFn = runtime->lookupFunction(0x25D2F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2724D4u; }
        if (ctx->pc != 0x2724D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetColor__12CSceneObjSeqFPfi_0x25d2f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2724D4u; }
        if (ctx->pc != 0x2724D4u) { return; }
    }
    ctx->pc = 0x2724D4u;
label_2724d4:
    // 0x2724d4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2724d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2724d8:
    // 0x2724d8: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x2724d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2724dc: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2724dcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2724e0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2724e0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2724e4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2724e4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2724e8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2724e8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2724ec: 0x3e00008  jr          $ra
    ctx->pc = 0x2724ECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2724F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2724ECu;
            // 0x2724f0: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2724F4u;
}
