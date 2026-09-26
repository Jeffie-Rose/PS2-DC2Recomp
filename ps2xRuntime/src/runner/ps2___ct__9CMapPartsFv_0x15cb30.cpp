#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: __ct__9CMapPartsFv
// Address: 0x15cb30 - 0x15cbc4
void ps2___ct__9CMapPartsFv_0x15cb30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___ct__9CMapPartsFv_0x15cb30");
#endif

    switch (ctx->pc) {
        case 0x15cb30u: goto label_15cb30;
        case 0x15cb34u: goto label_15cb34;
        case 0x15cb38u: goto label_15cb38;
        case 0x15cb3cu: goto label_15cb3c;
        case 0x15cb40u: goto label_15cb40;
        case 0x15cb44u: goto label_15cb44;
        case 0x15cb48u: goto label_15cb48;
        case 0x15cb4cu: goto label_15cb4c;
        case 0x15cb50u: goto label_15cb50;
        case 0x15cb54u: goto label_15cb54;
        case 0x15cb58u: goto label_15cb58;
        case 0x15cb5cu: goto label_15cb5c;
        case 0x15cb60u: goto label_15cb60;
        case 0x15cb64u: goto label_15cb64;
        case 0x15cb68u: goto label_15cb68;
        case 0x15cb6cu: goto label_15cb6c;
        case 0x15cb70u: goto label_15cb70;
        case 0x15cb74u: goto label_15cb74;
        case 0x15cb78u: goto label_15cb78;
        case 0x15cb7cu: goto label_15cb7c;
        case 0x15cb80u: goto label_15cb80;
        case 0x15cb84u: goto label_15cb84;
        case 0x15cb88u: goto label_15cb88;
        case 0x15cb8cu: goto label_15cb8c;
        case 0x15cb90u: goto label_15cb90;
        case 0x15cb94u: goto label_15cb94;
        case 0x15cb98u: goto label_15cb98;
        case 0x15cb9cu: goto label_15cb9c;
        case 0x15cba0u: goto label_15cba0;
        case 0x15cba4u: goto label_15cba4;
        case 0x15cba8u: goto label_15cba8;
        case 0x15cbacu: goto label_15cbac;
        case 0x15cbb0u: goto label_15cbb0;
        case 0x15cbb4u: goto label_15cbb4;
        case 0x15cbb8u: goto label_15cbb8;
        case 0x15cbbcu: goto label_15cbbc;
        case 0x15cbc0u: goto label_15cbc0;
        default: break;
    }

    ctx->pc = 0x15cb30u;

label_15cb30:
    // 0x15cb30: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x15cb30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_15cb34:
    // 0x15cb34: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x15cb34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
label_15cb38:
    // 0x15cb38: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x15cb38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_15cb3c:
    // 0x15cb3c: 0x24424fe0  addiu       $v0, $v0, 0x4FE0
    ctx->pc = 0x15cb3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20448));
label_15cb40:
    // 0x15cb40: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x15cb40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_15cb44:
    // 0x15cb44: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x15cb44u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_15cb48:
    // 0x15cb48: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x15cb48u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_15cb4c:
    // 0x15cb4c: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x15cb4cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_15cb50:
    // 0x15cb50: 0x320f809  jalr        $t9
label_15cb54:
    if (ctx->pc == 0x15CB54u) {
        ctx->pc = 0x15CB54u;
            // 0x15cb54: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x15CB58u;
        goto label_15cb58;
    }
    ctx->pc = 0x15CB50u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x15CB58u);
        ctx->pc = 0x15CB54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15CB50u;
            // 0x15cb54: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x15CB58u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x15CB58u; }
            if (ctx->pc != 0x15CB58u) { return; }
        }
        }
    }
    ctx->pc = 0x15CB58u;
label_15cb58:
    // 0x15cb58: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x15cb58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
label_15cb5c:
    // 0x15cb5c: 0x24425670  addiu       $v0, $v0, 0x5670
    ctx->pc = 0x15cb5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 22128));
label_15cb60:
    // 0x15cb60: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x15cb60u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_15cb64:
    // 0x15cb64: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x15cb64u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_15cb68:
    // 0x15cb68: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x15cb68u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_15cb6c:
    // 0x15cb6c: 0x320f809  jalr        $t9
label_15cb70:
    if (ctx->pc == 0x15CB70u) {
        ctx->pc = 0x15CB70u;
            // 0x15cb70: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x15CB74u;
        goto label_15cb74;
    }
    ctx->pc = 0x15CB6Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x15CB74u);
        ctx->pc = 0x15CB70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15CB6Cu;
            // 0x15cb70: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x15CB74u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x15CB74u; }
            if (ctx->pc != 0x15CB74u) { return; }
        }
        }
    }
    ctx->pc = 0x15CB74u;
label_15cb74:
    // 0x15cb74: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x15cb74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
label_15cb78:
    // 0x15cb78: 0x260400c0  addiu       $a0, $s0, 0xC0
    ctx->pc = 0x15cb78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 192));
label_15cb7c:
    // 0x15cb7c: 0x244254d0  addiu       $v0, $v0, 0x54D0
    ctx->pc = 0x15cb7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 21712));
label_15cb80:
    // 0x15cb80: 0xc04d924  jal         func_136490
label_15cb84:
    if (ctx->pc == 0x15CB84u) {
        ctx->pc = 0x15CB84u;
            // 0x15cb84: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x15CB88u;
        goto label_15cb88;
    }
    ctx->pc = 0x15CB80u;
    SET_GPR_U32(ctx, 31, 0x15CB88u);
    ctx->pc = 0x15CB84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15CB80u;
            // 0x15cb84: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x136490u;
    if (runtime->hasFunction(0x136490u)) {
        auto targetFn = runtime->lookupFunction(0x136490u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15CB88u; }
        if (ctx->pc != 0x15CB88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___ct__8mgCFrameFv_0x136490(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15CB88u; }
        if (ctx->pc != 0x15CB88u) { return; }
    }
    ctx->pc = 0x15CB88u;
label_15cb88:
    // 0x15cb88: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x15cb88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
label_15cb8c:
    // 0x15cb8c: 0x260402b0  addiu       $a0, $s0, 0x2B0
    ctx->pc = 0x15cb8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 688));
label_15cb90:
    // 0x15cb90: 0x24426210  addiu       $v0, $v0, 0x6210
    ctx->pc = 0x15cb90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 25104));
label_15cb94:
    // 0x15cb94: 0xc0a78d4  jal         func_29E350
label_15cb98:
    if (ctx->pc == 0x15CB98u) {
        ctx->pc = 0x15CB98u;
            // 0x15cb98: 0xae0202e0  sw          $v0, 0x2E0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 736), GPR_U32(ctx, 2));
        ctx->pc = 0x15CB9Cu;
        goto label_15cb9c;
    }
    ctx->pc = 0x15CB94u;
    SET_GPR_U32(ctx, 31, 0x15CB9Cu);
    ctx->pc = 0x15CB98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15CB94u;
            // 0x15cb98: 0xae0202e0  sw          $v0, 0x2E0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 736), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29E350u;
    if (runtime->hasFunction(0x29E350u)) {
        auto targetFn = runtime->lookupFunction(0x29E350u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15CB9Cu; }
        if (ctx->pc != 0x15CB9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Initialize__14CFuncPointMngrFv_0x29e350(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15CB9Cu; }
        if (ctx->pc != 0x15CB9Cu) { return; }
    }
    ctx->pc = 0x15CB9Cu;
label_15cb9c:
    // 0x15cb9c: 0xae0002fc  sw          $zero, 0x2FC($s0)
    ctx->pc = 0x15cb9cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 764), GPR_U32(ctx, 0));
label_15cba0:
    // 0x15cba0: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x15cba0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_15cba4:
    // 0x15cba4: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x15cba4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_15cba8:
    // 0x15cba8: 0x320f809  jalr        $t9
label_15cbac:
    if (ctx->pc == 0x15CBACu) {
        ctx->pc = 0x15CBACu;
            // 0x15cbac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x15CBB0u;
        goto label_15cbb0;
    }
    ctx->pc = 0x15CBA8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x15CBB0u);
        ctx->pc = 0x15CBACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15CBA8u;
            // 0x15cbac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x15CBB0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x15CBB0u; }
            if (ctx->pc != 0x15CBB0u) { return; }
        }
        }
    }
    ctx->pc = 0x15CBB0u;
label_15cbb0:
    // 0x15cbb0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x15cbb0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_15cbb4:
    // 0x15cbb4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x15cbb4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_15cbb8:
    // 0x15cbb8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x15cbb8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_15cbbc:
    // 0x15cbbc: 0x3e00008  jr          $ra
label_15cbc0:
    if (ctx->pc == 0x15CBC0u) {
        ctx->pc = 0x15CBC0u;
            // 0x15cbc0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x15CBC4u;
        goto label_fallthrough_0x15cbbc;
    }
    ctx->pc = 0x15CBBCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15CBC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15CBBCu;
            // 0x15cbc0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x15cbbc:
    ctx->pc = 0x15CBC4u;
}
