#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _SET_NEBA2__FP12RS_STACKDATAi
// Address: 0x2d1c90 - 0x2d1cfc
void ps2__SET_NEBA2__FP12RS_STACKDATAi_0x2d1c90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__SET_NEBA2__FP12RS_STACKDATAi_0x2d1c90");
#endif

    switch (ctx->pc) {
        case 0x2d1c90u: goto label_2d1c90;
        case 0x2d1c94u: goto label_2d1c94;
        case 0x2d1c98u: goto label_2d1c98;
        case 0x2d1c9cu: goto label_2d1c9c;
        case 0x2d1ca0u: goto label_2d1ca0;
        case 0x2d1ca4u: goto label_2d1ca4;
        case 0x2d1ca8u: goto label_2d1ca8;
        case 0x2d1cacu: goto label_2d1cac;
        case 0x2d1cb0u: goto label_2d1cb0;
        case 0x2d1cb4u: goto label_2d1cb4;
        case 0x2d1cb8u: goto label_2d1cb8;
        case 0x2d1cbcu: goto label_2d1cbc;
        case 0x2d1cc0u: goto label_2d1cc0;
        case 0x2d1cc4u: goto label_2d1cc4;
        case 0x2d1cc8u: goto label_2d1cc8;
        case 0x2d1cccu: goto label_2d1ccc;
        case 0x2d1cd0u: goto label_2d1cd0;
        case 0x2d1cd4u: goto label_2d1cd4;
        case 0x2d1cd8u: goto label_2d1cd8;
        case 0x2d1cdcu: goto label_2d1cdc;
        case 0x2d1ce0u: goto label_2d1ce0;
        case 0x2d1ce4u: goto label_2d1ce4;
        case 0x2d1ce8u: goto label_2d1ce8;
        case 0x2d1cecu: goto label_2d1cec;
        case 0x2d1cf0u: goto label_2d1cf0;
        case 0x2d1cf4u: goto label_2d1cf4;
        case 0x2d1cf8u: goto label_2d1cf8;
        default: break;
    }

    ctx->pc = 0x2d1c90u;

label_2d1c90:
    // 0x2d1c90: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2d1c90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_2d1c94:
    // 0x2d1c94: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2d1c94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_2d1c98:
    // 0x2d1c98: 0xc0683a8  jal         func_1A0EA0
label_2d1c9c:
    if (ctx->pc == 0x2D1C9Cu) {
        ctx->pc = 0x2D1CA0u;
        goto label_2d1ca0;
    }
    ctx->pc = 0x2D1C98u;
    SET_GPR_U32(ctx, 31, 0x2D1CA0u);
    ctx->pc = 0x1A0EA0u;
    if (runtime->hasFunction(0x1A0EA0u)) {
        auto targetFn = runtime->lookupFunction(0x1A0EA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D1CA0u; }
        if (ctx->pc != 0x2D1CA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetBattleCharaInfo__Fv_0x1a0ea0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D1CA0u; }
        if (ctx->pc != 0x2D1CA0u) { return; }
    }
    ctx->pc = 0x2D1CA0u;
label_2d1ca0:
    // 0x2d1ca0: 0xc068140  jal         func_1A0500
label_2d1ca4:
    if (ctx->pc == 0x2D1CA4u) {
        ctx->pc = 0x2D1CA4u;
            // 0x2d1ca4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2D1CA8u;
        goto label_2d1ca8;
    }
    ctx->pc = 0x2D1CA0u;
    SET_GPR_U32(ctx, 31, 0x2D1CA8u);
    ctx->pc = 0x2D1CA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D1CA0u;
            // 0x2d1ca4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A0500u;
    if (runtime->hasFunction(0x1A0500u)) {
        auto targetFn = runtime->lookupFunction(0x1A0500u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D1CA8u; }
        if (ctx->pc != 0x2D1CA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetAttr__16CBattleCharaInfoFv_0x1a0500(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D1CA8u; }
        if (ctx->pc != 0x2D1CA8u) { return; }
    }
    ctx->pc = 0x2D1CA8u;
label_2d1ca8:
    // 0x2d1ca8: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x2d1ca8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
label_2d1cac:
    // 0x2d1cac: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
label_2d1cb0:
    if (ctx->pc == 0x2D1CB0u) {
        ctx->pc = 0x2D1CB0u;
            // 0x2d1cb0: 0x3c0101f1  lui         $at, 0x1F1 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)497 << 16));
        ctx->pc = 0x2D1CB4u;
        goto label_2d1cb4;
    }
    ctx->pc = 0x2D1CACu;
    {
        const bool branch_taken_0x2d1cac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D1CB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D1CACu;
            // 0x2d1cb0: 0x3c0101f1  lui         $at, 0x1F1 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)497 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d1cac) {
            ctx->pc = 0x2D1CECu;
            goto label_2d1cec;
        }
    }
    ctx->pc = 0x2D1CB4u;
label_2d1cb4:
    // 0x2d1cb4: 0x8c24d430  lw          $a0, -0x2BD0($at)
    ctx->pc = 0x2d1cb4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294956080)));
label_2d1cb8:
    // 0x2d1cb8: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2d1cb8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2d1cbc:
    // 0x2d1cbc: 0x8f3900c0  lw          $t9, 0xC0($t9)
    ctx->pc = 0x2d1cbcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 192)));
label_2d1cc0:
    // 0x2d1cc0: 0x320f809  jalr        $t9
label_2d1cc4:
    if (ctx->pc == 0x2D1CC4u) {
        ctx->pc = 0x2D1CC8u;
        goto label_2d1cc8;
    }
    ctx->pc = 0x2D1CC0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2D1CC8u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x2D1CC8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2D1CC8u; }
            if (ctx->pc != 0x2D1CC8u) { return; }
        }
        }
    }
    ctx->pc = 0x2D1CC8u;
label_2d1cc8:
    // 0x2d1cc8: 0x3c0101f1  lui         $at, 0x1F1
    ctx->pc = 0x2d1cc8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)497 << 16));
label_2d1ccc:
    // 0x2d1ccc: 0x3c023f33  lui         $v0, 0x3F33
    ctx->pc = 0x2d1cccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16179 << 16));
label_2d1cd0:
    // 0x2d1cd0: 0x8c24d430  lw          $a0, -0x2BD0($at)
    ctx->pc = 0x2d1cd0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294956080)));
label_2d1cd4:
    // 0x2d1cd4: 0x34423333  ori         $v0, $v0, 0x3333
    ctx->pc = 0x2d1cd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13107);
label_2d1cd8:
    // 0x2d1cd8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2d1cd8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2d1cdc:
    // 0x2d1cdc: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2d1cdcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2d1ce0:
    // 0x2d1ce0: 0x8f3900b8  lw          $t9, 0xB8($t9)
    ctx->pc = 0x2d1ce0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 184)));
label_2d1ce4:
    // 0x2d1ce4: 0x320f809  jalr        $t9
label_2d1ce8:
    if (ctx->pc == 0x2D1CE8u) {
        ctx->pc = 0x2D1CE8u;
            // 0x2d1ce8: 0x46000b02  mul.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->pc = 0x2D1CECu;
        goto label_2d1cec;
    }
    ctx->pc = 0x2D1CE4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2D1CECu);
        ctx->pc = 0x2D1CE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D1CE4u;
            // 0x2d1ce8: 0x46000b02  mul.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2D1CECu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2D1CECu; }
            if (ctx->pc != 0x2D1CECu) { return; }
        }
        }
    }
    ctx->pc = 0x2D1CECu;
label_2d1cec:
    // 0x2d1cec: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2d1cecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2d1cf0:
    // 0x2d1cf0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2d1cf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2d1cf4:
    // 0x2d1cf4: 0x3e00008  jr          $ra
label_2d1cf8:
    if (ctx->pc == 0x2D1CF8u) {
        ctx->pc = 0x2D1CF8u;
            // 0x2d1cf8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x2D1CFCu;
        goto label_fallthrough_0x2d1cf4;
    }
    ctx->pc = 0x2D1CF4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D1CF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D1CF4u;
            // 0x2d1cf8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x2d1cf4:
    ctx->pc = 0x2D1CFCu;
}
