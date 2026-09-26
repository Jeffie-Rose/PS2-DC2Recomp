#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: __ct__10CEditPartsFv
// Address: 0x1b0a80 - 0x1b0b30
void ps2___ct__10CEditPartsFv_0x1b0a80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___ct__10CEditPartsFv_0x1b0a80");
#endif

    switch (ctx->pc) {
        case 0x1b0a80u: goto label_1b0a80;
        case 0x1b0a84u: goto label_1b0a84;
        case 0x1b0a88u: goto label_1b0a88;
        case 0x1b0a8cu: goto label_1b0a8c;
        case 0x1b0a90u: goto label_1b0a90;
        case 0x1b0a94u: goto label_1b0a94;
        case 0x1b0a98u: goto label_1b0a98;
        case 0x1b0a9cu: goto label_1b0a9c;
        case 0x1b0aa0u: goto label_1b0aa0;
        case 0x1b0aa4u: goto label_1b0aa4;
        case 0x1b0aa8u: goto label_1b0aa8;
        case 0x1b0aacu: goto label_1b0aac;
        case 0x1b0ab0u: goto label_1b0ab0;
        case 0x1b0ab4u: goto label_1b0ab4;
        case 0x1b0ab8u: goto label_1b0ab8;
        case 0x1b0abcu: goto label_1b0abc;
        case 0x1b0ac0u: goto label_1b0ac0;
        case 0x1b0ac4u: goto label_1b0ac4;
        case 0x1b0ac8u: goto label_1b0ac8;
        case 0x1b0accu: goto label_1b0acc;
        case 0x1b0ad0u: goto label_1b0ad0;
        case 0x1b0ad4u: goto label_1b0ad4;
        case 0x1b0ad8u: goto label_1b0ad8;
        case 0x1b0adcu: goto label_1b0adc;
        case 0x1b0ae0u: goto label_1b0ae0;
        case 0x1b0ae4u: goto label_1b0ae4;
        case 0x1b0ae8u: goto label_1b0ae8;
        case 0x1b0aecu: goto label_1b0aec;
        case 0x1b0af0u: goto label_1b0af0;
        case 0x1b0af4u: goto label_1b0af4;
        case 0x1b0af8u: goto label_1b0af8;
        case 0x1b0afcu: goto label_1b0afc;
        case 0x1b0b00u: goto label_1b0b00;
        case 0x1b0b04u: goto label_1b0b04;
        case 0x1b0b08u: goto label_1b0b08;
        case 0x1b0b0cu: goto label_1b0b0c;
        case 0x1b0b10u: goto label_1b0b10;
        case 0x1b0b14u: goto label_1b0b14;
        case 0x1b0b18u: goto label_1b0b18;
        case 0x1b0b1cu: goto label_1b0b1c;
        case 0x1b0b20u: goto label_1b0b20;
        case 0x1b0b24u: goto label_1b0b24;
        case 0x1b0b28u: goto label_1b0b28;
        case 0x1b0b2cu: goto label_1b0b2c;
        default: break;
    }

    ctx->pc = 0x1b0a80u;

label_1b0a80:
    // 0x1b0a80: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1b0a80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1b0a84:
    // 0x1b0a84: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x1b0a84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
label_1b0a88:
    // 0x1b0a88: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1b0a88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_1b0a8c:
    // 0x1b0a8c: 0x24424fe0  addiu       $v0, $v0, 0x4FE0
    ctx->pc = 0x1b0a8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20448));
label_1b0a90:
    // 0x1b0a90: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1b0a90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1b0a94:
    // 0x1b0a94: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x1b0a94u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_1b0a98:
    // 0x1b0a98: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1b0a98u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1b0a9c:
    // 0x1b0a9c: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x1b0a9cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_1b0aa0:
    // 0x1b0aa0: 0x320f809  jalr        $t9
label_1b0aa4:
    if (ctx->pc == 0x1B0AA4u) {
        ctx->pc = 0x1B0AA4u;
            // 0x1b0aa4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1B0AA8u;
        goto label_1b0aa8;
    }
    ctx->pc = 0x1B0AA0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1B0AA8u);
        ctx->pc = 0x1B0AA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B0AA0u;
            // 0x1b0aa4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1B0AA8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1B0AA8u; }
            if (ctx->pc != 0x1B0AA8u) { return; }
        }
        }
    }
    ctx->pc = 0x1B0AA8u;
label_1b0aa8:
    // 0x1b0aa8: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x1b0aa8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
label_1b0aac:
    // 0x1b0aac: 0x24425670  addiu       $v0, $v0, 0x5670
    ctx->pc = 0x1b0aacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 22128));
label_1b0ab0:
    // 0x1b0ab0: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x1b0ab0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_1b0ab4:
    // 0x1b0ab4: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x1b0ab4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1b0ab8:
    // 0x1b0ab8: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x1b0ab8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_1b0abc:
    // 0x1b0abc: 0x320f809  jalr        $t9
label_1b0ac0:
    if (ctx->pc == 0x1B0AC0u) {
        ctx->pc = 0x1B0AC0u;
            // 0x1b0ac0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1B0AC4u;
        goto label_1b0ac4;
    }
    ctx->pc = 0x1B0ABCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1B0AC4u);
        ctx->pc = 0x1B0AC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B0ABCu;
            // 0x1b0ac0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1B0AC4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1B0AC4u; }
            if (ctx->pc != 0x1B0AC4u) { return; }
        }
        }
    }
    ctx->pc = 0x1B0AC4u;
label_1b0ac4:
    // 0x1b0ac4: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x1b0ac4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
label_1b0ac8:
    // 0x1b0ac8: 0x260400c0  addiu       $a0, $s0, 0xC0
    ctx->pc = 0x1b0ac8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 192));
label_1b0acc:
    // 0x1b0acc: 0x244254d0  addiu       $v0, $v0, 0x54D0
    ctx->pc = 0x1b0accu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 21712));
label_1b0ad0:
    // 0x1b0ad0: 0xc04d924  jal         func_136490
label_1b0ad4:
    if (ctx->pc == 0x1B0AD4u) {
        ctx->pc = 0x1B0AD4u;
            // 0x1b0ad4: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x1B0AD8u;
        goto label_1b0ad8;
    }
    ctx->pc = 0x1B0AD0u;
    SET_GPR_U32(ctx, 31, 0x1B0AD8u);
    ctx->pc = 0x1B0AD4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B0AD0u;
            // 0x1b0ad4: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x136490u;
    if (runtime->hasFunction(0x136490u)) {
        auto targetFn = runtime->lookupFunction(0x136490u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B0AD8u; }
        if (ctx->pc != 0x1B0AD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___ct__8mgCFrameFv_0x136490(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B0AD8u; }
        if (ctx->pc != 0x1B0AD8u) { return; }
    }
    ctx->pc = 0x1B0AD8u;
label_1b0ad8:
    // 0x1b0ad8: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x1b0ad8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
label_1b0adc:
    // 0x1b0adc: 0x260402b0  addiu       $a0, $s0, 0x2B0
    ctx->pc = 0x1b0adcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 688));
label_1b0ae0:
    // 0x1b0ae0: 0x24426210  addiu       $v0, $v0, 0x6210
    ctx->pc = 0x1b0ae0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 25104));
label_1b0ae4:
    // 0x1b0ae4: 0xc0a78d4  jal         func_29E350
label_1b0ae8:
    if (ctx->pc == 0x1B0AE8u) {
        ctx->pc = 0x1B0AE8u;
            // 0x1b0ae8: 0xae0202e0  sw          $v0, 0x2E0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 736), GPR_U32(ctx, 2));
        ctx->pc = 0x1B0AECu;
        goto label_1b0aec;
    }
    ctx->pc = 0x1B0AE4u;
    SET_GPR_U32(ctx, 31, 0x1B0AECu);
    ctx->pc = 0x1B0AE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B0AE4u;
            // 0x1b0ae8: 0xae0202e0  sw          $v0, 0x2E0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 736), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29E350u;
    if (runtime->hasFunction(0x29E350u)) {
        auto targetFn = runtime->lookupFunction(0x29E350u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B0AECu; }
        if (ctx->pc != 0x1B0AECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Initialize__14CFuncPointMngrFv_0x29e350(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B0AECu; }
        if (ctx->pc != 0x1B0AECu) { return; }
    }
    ctx->pc = 0x1B0AECu;
label_1b0aec:
    // 0x1b0aec: 0xae0002fc  sw          $zero, 0x2FC($s0)
    ctx->pc = 0x1b0aecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 764), GPR_U32(ctx, 0));
label_1b0af0:
    // 0x1b0af0: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x1b0af0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1b0af4:
    // 0x1b0af4: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x1b0af4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_1b0af8:
    // 0x1b0af8: 0x320f809  jalr        $t9
label_1b0afc:
    if (ctx->pc == 0x1B0AFCu) {
        ctx->pc = 0x1B0AFCu;
            // 0x1b0afc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1B0B00u;
        goto label_1b0b00;
    }
    ctx->pc = 0x1B0AF8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1B0B00u);
        ctx->pc = 0x1B0AFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B0AF8u;
            // 0x1b0afc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1B0B00u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1B0B00u; }
            if (ctx->pc != 0x1B0B00u) { return; }
        }
        }
    }
    ctx->pc = 0x1B0B00u;
label_1b0b00:
    // 0x1b0b00: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x1b0b00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
label_1b0b04:
    // 0x1b0b04: 0x24425a70  addiu       $v0, $v0, 0x5A70
    ctx->pc = 0x1b0b04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 23152));
label_1b0b08:
    // 0x1b0b08: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x1b0b08u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_1b0b0c:
    // 0x1b0b0c: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x1b0b0cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1b0b10:
    // 0x1b0b10: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x1b0b10u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_1b0b14:
    // 0x1b0b14: 0x320f809  jalr        $t9
label_1b0b18:
    if (ctx->pc == 0x1B0B18u) {
        ctx->pc = 0x1B0B18u;
            // 0x1b0b18: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1B0B1Cu;
        goto label_1b0b1c;
    }
    ctx->pc = 0x1B0B14u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1B0B1Cu);
        ctx->pc = 0x1B0B18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B0B14u;
            // 0x1b0b18: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1B0B1Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1B0B1Cu; }
            if (ctx->pc != 0x1B0B1Cu) { return; }
        }
        }
    }
    ctx->pc = 0x1B0B1Cu;
label_1b0b1c:
    // 0x1b0b1c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1b0b1cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1b0b20:
    // 0x1b0b20: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1b0b20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1b0b24:
    // 0x1b0b24: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1b0b24u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1b0b28:
    // 0x1b0b28: 0x3e00008  jr          $ra
label_1b0b2c:
    if (ctx->pc == 0x1B0B2Cu) {
        ctx->pc = 0x1B0B2Cu;
            // 0x1b0b2c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x1B0B30u;
        goto label_fallthrough_0x1b0b28;
    }
    ctx->pc = 0x1B0B28u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B0B2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B0B28u;
            // 0x1b0b2c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x1b0b28:
    ctx->pc = 0x1B0B30u;
}
