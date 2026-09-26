#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: DrawStep__9CMapPartsFv
// Address: 0x166e50 - 0x166ecc
void DrawStep__9CMapPartsFv_0x166e50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("DrawStep__9CMapPartsFv_0x166e50");
#endif

    switch (ctx->pc) {
        case 0x166e50u: goto label_166e50;
        case 0x166e54u: goto label_166e54;
        case 0x166e58u: goto label_166e58;
        case 0x166e5cu: goto label_166e5c;
        case 0x166e60u: goto label_166e60;
        case 0x166e64u: goto label_166e64;
        case 0x166e68u: goto label_166e68;
        case 0x166e6cu: goto label_166e6c;
        case 0x166e70u: goto label_166e70;
        case 0x166e74u: goto label_166e74;
        case 0x166e78u: goto label_166e78;
        case 0x166e7cu: goto label_166e7c;
        case 0x166e80u: goto label_166e80;
        case 0x166e84u: goto label_166e84;
        case 0x166e88u: goto label_166e88;
        case 0x166e8cu: goto label_166e8c;
        case 0x166e90u: goto label_166e90;
        case 0x166e94u: goto label_166e94;
        case 0x166e98u: goto label_166e98;
        case 0x166e9cu: goto label_166e9c;
        case 0x166ea0u: goto label_166ea0;
        case 0x166ea4u: goto label_166ea4;
        case 0x166ea8u: goto label_166ea8;
        case 0x166eacu: goto label_166eac;
        case 0x166eb0u: goto label_166eb0;
        case 0x166eb4u: goto label_166eb4;
        case 0x166eb8u: goto label_166eb8;
        case 0x166ebcu: goto label_166ebc;
        case 0x166ec0u: goto label_166ec0;
        case 0x166ec4u: goto label_166ec4;
        case 0x166ec8u: goto label_166ec8;
        default: break;
    }

    ctx->pc = 0x166e50u;

label_166e50:
    // 0x166e50: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x166e50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_166e54:
    // 0x166e54: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x166e54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_166e58:
    // 0x166e58: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x166e58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_166e5c:
    // 0x166e5c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x166e5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_166e60:
    // 0x166e60: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x166e60u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_166e64:
    // 0x166e64: 0x8f39007c  lw          $t9, 0x7C($t9)
    ctx->pc = 0x166e64u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 124)));
label_166e68:
    // 0x166e68: 0x320f809  jalr        $t9
label_166e6c:
    if (ctx->pc == 0x166E6Cu) {
        ctx->pc = 0x166E6Cu;
            // 0x166e6c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x166E70u;
        goto label_166e70;
    }
    ctx->pc = 0x166E68u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x166E70u);
        ctx->pc = 0x166E6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x166E68u;
            // 0x166e6c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x166E70u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x166E70u; }
            if (ctx->pc != 0x166E70u) { return; }
        }
        }
    }
    ctx->pc = 0x166E70u;
label_166e70:
    // 0x166e70: 0xc05a744  jal         func_169D10
label_166e74:
    if (ctx->pc == 0x166E74u) {
        ctx->pc = 0x166E74u;
            // 0x166e74: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x166E78u;
        goto label_166e78;
    }
    ctx->pc = 0x166E70u;
    SET_GPR_U32(ctx, 31, 0x166E78u);
    ctx->pc = 0x166E74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x166E70u;
            // 0x166e74: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x169D10u;
    if (runtime->hasFunction(0x169D10u)) {
        auto targetFn = runtime->lookupFunction(0x169D10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x166E78u; }
        if (ctx->pc != 0x166E78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DrawStep__7CObjectFv_0x169d10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x166E78u; }
        if (ctx->pc != 0x166E78u) { return; }
    }
    ctx->pc = 0x166E78u;
label_166e78:
    // 0x166e78: 0x8e1000b0  lw          $s0, 0xB0($s0)
    ctx->pc = 0x166e78u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 176)));
label_166e7c:
    // 0x166e7c: 0x1200000d  beqz        $s0, . + 4 + (0xD << 2)
label_166e80:
    if (ctx->pc == 0x166E80u) {
        ctx->pc = 0x166E84u;
        goto label_166e84;
    }
    ctx->pc = 0x166E7Cu;
    {
        const bool branch_taken_0x166e7c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x166e7c) {
            ctx->pc = 0x166EB4u;
            goto label_166eb4;
        }
    }
    ctx->pc = 0x166E84u;
label_166e84:
    // 0x166e84: 0x8e190010  lw          $t9, 0x10($s0)
    ctx->pc = 0x166e84u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_166e88:
    // 0x166e88: 0x26110010  addiu       $s1, $s0, 0x10
    ctx->pc = 0x166e88u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
label_166e8c:
    // 0x166e8c: 0x8f390074  lw          $t9, 0x74($t9)
    ctx->pc = 0x166e8cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 116)));
label_166e90:
    // 0x166e90: 0x320f809  jalr        $t9
label_166e94:
    if (ctx->pc == 0x166E94u) {
        ctx->pc = 0x166E94u;
            // 0x166e94: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x166E98u;
        goto label_166e98;
    }
    ctx->pc = 0x166E90u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x166E98u);
        ctx->pc = 0x166E94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x166E90u;
            // 0x166e94: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x166E98u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x166E98u; }
            if (ctx->pc != 0x166E98u) { return; }
        }
        }
    }
    ctx->pc = 0x166E98u;
label_166e98:
    // 0x166e98: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x166e98u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_166e9c:
    // 0x166e9c: 0x8f39004c  lw          $t9, 0x4C($t9)
    ctx->pc = 0x166e9cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 76)));
label_166ea0:
    // 0x166ea0: 0x320f809  jalr        $t9
label_166ea4:
    if (ctx->pc == 0x166EA4u) {
        ctx->pc = 0x166EA4u;
            // 0x166ea4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x166EA8u;
        goto label_166ea8;
    }
    ctx->pc = 0x166EA0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x166EA8u);
        ctx->pc = 0x166EA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x166EA0u;
            // 0x166ea4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x166EA8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x166EA8u; }
            if (ctx->pc != 0x166EA8u) { return; }
        }
        }
    }
    ctx->pc = 0x166EA8u;
label_166ea8:
    // 0x166ea8: 0x8e100000  lw          $s0, 0x0($s0)
    ctx->pc = 0x166ea8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_166eac:
    // 0x166eac: 0x1600fff5  bnez        $s0, . + 4 + (-0xB << 2)
label_166eb0:
    if (ctx->pc == 0x166EB0u) {
        ctx->pc = 0x166EB4u;
        goto label_166eb4;
    }
    ctx->pc = 0x166EACu;
    {
        const bool branch_taken_0x166eac = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x166eac) {
            ctx->pc = 0x166E84u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_166e84;
        }
    }
    ctx->pc = 0x166EB4u;
label_166eb4:
    // 0x166eb4: 0x0  nop
    ctx->pc = 0x166eb4u;
    // NOP
label_166eb8:
    // 0x166eb8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x166eb8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_166ebc:
    // 0x166ebc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x166ebcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_166ec0:
    // 0x166ec0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x166ec0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_166ec4:
    // 0x166ec4: 0x3e00008  jr          $ra
label_166ec8:
    if (ctx->pc == 0x166EC8u) {
        ctx->pc = 0x166EC8u;
            // 0x166ec8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x166ECCu;
        goto label_fallthrough_0x166ec4;
    }
    ctx->pc = 0x166EC4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x166EC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x166EC4u;
            // 0x166ec8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x166ec4:
    ctx->pc = 0x166ECCu;
}
