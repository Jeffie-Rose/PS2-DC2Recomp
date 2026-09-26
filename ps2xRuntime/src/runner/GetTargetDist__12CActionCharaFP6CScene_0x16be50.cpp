#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetTargetDist__12CActionCharaFP6CScene
// Address: 0x16be50 - 0x16bee0
void GetTargetDist__12CActionCharaFP6CScene_0x16be50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetTargetDist__12CActionCharaFP6CScene_0x16be50");
#endif

    switch (ctx->pc) {
        case 0x16be50u: goto label_16be50;
        case 0x16be54u: goto label_16be54;
        case 0x16be58u: goto label_16be58;
        case 0x16be5cu: goto label_16be5c;
        case 0x16be60u: goto label_16be60;
        case 0x16be64u: goto label_16be64;
        case 0x16be68u: goto label_16be68;
        case 0x16be6cu: goto label_16be6c;
        case 0x16be70u: goto label_16be70;
        case 0x16be74u: goto label_16be74;
        case 0x16be78u: goto label_16be78;
        case 0x16be7cu: goto label_16be7c;
        case 0x16be80u: goto label_16be80;
        case 0x16be84u: goto label_16be84;
        case 0x16be88u: goto label_16be88;
        case 0x16be8cu: goto label_16be8c;
        case 0x16be90u: goto label_16be90;
        case 0x16be94u: goto label_16be94;
        case 0x16be98u: goto label_16be98;
        case 0x16be9cu: goto label_16be9c;
        case 0x16bea0u: goto label_16bea0;
        case 0x16bea4u: goto label_16bea4;
        case 0x16bea8u: goto label_16bea8;
        case 0x16beacu: goto label_16beac;
        case 0x16beb0u: goto label_16beb0;
        case 0x16beb4u: goto label_16beb4;
        case 0x16beb8u: goto label_16beb8;
        case 0x16bebcu: goto label_16bebc;
        case 0x16bec0u: goto label_16bec0;
        case 0x16bec4u: goto label_16bec4;
        case 0x16bec8u: goto label_16bec8;
        case 0x16beccu: goto label_16becc;
        case 0x16bed0u: goto label_16bed0;
        case 0x16bed4u: goto label_16bed4;
        case 0x16bed8u: goto label_16bed8;
        case 0x16bedcu: goto label_16bedc;
        default: break;
    }

    ctx->pc = 0x16be50u;

label_16be50:
    // 0x16be50: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x16be50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_16be54:
    // 0x16be54: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x16be54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_16be58:
    // 0x16be58: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x16be58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_16be5c:
    // 0x16be5c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x16be5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_16be60:
    // 0x16be60: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x16be60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_16be64:
    // 0x16be64: 0x84830770  lh          $v1, 0x770($a0)
    ctx->pc = 0x16be64u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 1904)));
label_16be68:
    // 0x16be68: 0x10620016  beq         $v1, $v0, . + 4 + (0x16 << 2)
label_16be6c:
    if (ctx->pc == 0x16BE6Cu) {
        ctx->pc = 0x16BE6Cu;
            // 0x16be6c: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x16BE70u;
        goto label_16be70;
    }
    ctx->pc = 0x16BE68u;
    {
        const bool branch_taken_0x16be68 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x16BE6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16BE68u;
            // 0x16be6c: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16be68) {
            ctx->pc = 0x16BEC4u;
            goto label_16bec4;
        }
    }
    ctx->pc = 0x16BE70u;
label_16be70:
    // 0x16be70: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x16be70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_16be74:
    // 0x16be74: 0xc0a0ed8  jal         func_283B60
label_16be78:
    if (ctx->pc == 0x16BE78u) {
        ctx->pc = 0x16BE78u;
            // 0x16be78: 0x60282d  daddu       $a1, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x16BE7Cu;
        goto label_16be7c;
    }
    ctx->pc = 0x16BE74u;
    SET_GPR_U32(ctx, 31, 0x16BE7Cu);
    ctx->pc = 0x16BE78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16BE74u;
            // 0x16be78: 0x60282d  daddu       $a1, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x283B60u;
    if (runtime->hasFunction(0x283B60u)) {
        auto targetFn = runtime->lookupFunction(0x283B60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16BE7Cu; }
        if (ctx->pc != 0x16BE7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetCharacter__6CSceneFi_0x283b60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16BE7Cu; }
        if (ctx->pc != 0x16BE7Cu) { return; }
    }
    ctx->pc = 0x16BE7Cu;
label_16be7c:
    // 0x16be7c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x16be7cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_16be80:
    // 0x16be80: 0x12000011  beqz        $s0, . + 4 + (0x11 << 2)
label_16be84:
    if (ctx->pc == 0x16BE84u) {
        ctx->pc = 0x16BE84u;
            // 0x16be84: 0x3c02bf80  lui         $v0, 0xBF80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
        ctx->pc = 0x16BE88u;
        goto label_16be88;
    }
    ctx->pc = 0x16BE80u;
    {
        const bool branch_taken_0x16be80 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x16BE84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16BE80u;
            // 0x16be84: 0x3c02bf80  lui         $v0, 0xBF80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16be80) {
            ctx->pc = 0x16BEC8u;
            goto label_16bec8;
        }
    }
    ctx->pc = 0x16BE88u;
label_16be88:
    // 0x16be88: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x16be88u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_16be8c:
    // 0x16be8c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x16be8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_16be90:
    // 0x16be90: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x16be90u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_16be94:
    // 0x16be94: 0x320f809  jalr        $t9
label_16be98:
    if (ctx->pc == 0x16BE98u) {
        ctx->pc = 0x16BE98u;
            // 0x16be98: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x16BE9Cu;
        goto label_16be9c;
    }
    ctx->pc = 0x16BE94u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x16BE9Cu);
        ctx->pc = 0x16BE98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16BE94u;
            // 0x16be98: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x16BE9Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x16BE9Cu; }
            if (ctx->pc != 0x16BE9Cu) { return; }
        }
        }
    }
    ctx->pc = 0x16BE9Cu;
label_16be9c:
    // 0x16be9c: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x16be9cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_16bea0:
    // 0x16bea0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x16bea0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_16bea4:
    // 0x16bea4: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x16bea4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_16bea8:
    // 0x16bea8: 0x320f809  jalr        $t9
label_16beac:
    if (ctx->pc == 0x16BEACu) {
        ctx->pc = 0x16BEACu;
            // 0x16beac: 0x27a50040  addiu       $a1, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x16BEB0u;
        goto label_16beb0;
    }
    ctx->pc = 0x16BEA8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x16BEB0u);
        ctx->pc = 0x16BEACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16BEA8u;
            // 0x16beac: 0x27a50040  addiu       $a1, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x16BEB0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x16BEB0u; }
            if (ctx->pc != 0x16BEB0u) { return; }
        }
        }
    }
    ctx->pc = 0x16BEB0u;
label_16beb0:
    // 0x16beb0: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x16beb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_16beb4:
    // 0x16beb4: 0xc04c018  jal         func_130060
label_16beb8:
    if (ctx->pc == 0x16BEB8u) {
        ctx->pc = 0x16BEB8u;
            // 0x16beb8: 0x27a50040  addiu       $a1, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x16BEBCu;
        goto label_16bebc;
    }
    ctx->pc = 0x16BEB4u;
    SET_GPR_U32(ctx, 31, 0x16BEBCu);
    ctx->pc = 0x16BEB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16BEB4u;
            // 0x16beb8: 0x27a50040  addiu       $a1, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x130060u;
    if (runtime->hasFunction(0x130060u)) {
        auto targetFn = runtime->lookupFunction(0x130060u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16BEBCu; }
        if (ctx->pc != 0x16BEBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgDistVector__FPfPf_0x130060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16BEBCu; }
        if (ctx->pc != 0x16BEBCu) { return; }
    }
    ctx->pc = 0x16BEBCu;
label_16bebc:
    // 0x16bebc: 0x10000004  b           . + 4 + (0x4 << 2)
label_16bec0:
    if (ctx->pc == 0x16BEC0u) {
        ctx->pc = 0x16BEC0u;
            // 0x16bec0: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->pc = 0x16BEC4u;
        goto label_16bec4;
    }
    ctx->pc = 0x16BEBCu;
    {
        const bool branch_taken_0x16bebc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16BEC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16BEBCu;
            // 0x16bec0: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16bebc) {
            ctx->pc = 0x16BED0u;
            goto label_16bed0;
        }
    }
    ctx->pc = 0x16BEC4u;
label_16bec4:
    // 0x16bec4: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x16bec4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_16bec8:
    // 0x16bec8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x16bec8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_16becc:
    // 0x16becc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x16beccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_16bed0:
    // 0x16bed0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x16bed0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_16bed4:
    // 0x16bed4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x16bed4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_16bed8:
    // 0x16bed8: 0x3e00008  jr          $ra
label_16bedc:
    if (ctx->pc == 0x16BEDCu) {
        ctx->pc = 0x16BEDCu;
            // 0x16bedc: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x16BEE0u;
        goto label_fallthrough_0x16bed8;
    }
    ctx->pc = 0x16BED8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16BEDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16BED8u;
            // 0x16bedc: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x16bed8:
    ctx->pc = 0x16BEE0u;
}
