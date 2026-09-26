#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: DrawMiniMapSymbol__9CGeoStoneFP14CMiniMapSymbol
// Address: 0x28bb70 - 0x28bbb8
void DrawMiniMapSymbol__9CGeoStoneFP14CMiniMapSymbol_0x28bb70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("DrawMiniMapSymbol__9CGeoStoneFP14CMiniMapSymbol_0x28bb70");
#endif

    switch (ctx->pc) {
        case 0x28bb70u: goto label_28bb70;
        case 0x28bb74u: goto label_28bb74;
        case 0x28bb78u: goto label_28bb78;
        case 0x28bb7cu: goto label_28bb7c;
        case 0x28bb80u: goto label_28bb80;
        case 0x28bb84u: goto label_28bb84;
        case 0x28bb88u: goto label_28bb88;
        case 0x28bb8cu: goto label_28bb8c;
        case 0x28bb90u: goto label_28bb90;
        case 0x28bb94u: goto label_28bb94;
        case 0x28bb98u: goto label_28bb98;
        case 0x28bb9cu: goto label_28bb9c;
        case 0x28bba0u: goto label_28bba0;
        case 0x28bba4u: goto label_28bba4;
        case 0x28bba8u: goto label_28bba8;
        case 0x28bbacu: goto label_28bbac;
        case 0x28bbb0u: goto label_28bbb0;
        case 0x28bbb4u: goto label_28bbb4;
        default: break;
    }

    ctx->pc = 0x28bb70u;

label_28bb70:
    // 0x28bb70: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x28bb70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_28bb74:
    // 0x28bb74: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x28bb74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_28bb78:
    // 0x28bb78: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x28bb78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_28bb7c:
    // 0x28bb7c: 0x8c830660  lw          $v1, 0x660($a0)
    ctx->pc = 0x28bb7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1632)));
label_28bb80:
    // 0x28bb80: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
label_28bb84:
    if (ctx->pc == 0x28BB84u) {
        ctx->pc = 0x28BB84u;
            // 0x28bb84: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x28BB88u;
        goto label_28bb88;
    }
    ctx->pc = 0x28BB80u;
    {
        const bool branch_taken_0x28bb80 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x28BB84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28BB80u;
            // 0x28bb84: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28bb80) {
            ctx->pc = 0x28BBA8u;
            goto label_28bba8;
        }
    }
    ctx->pc = 0x28BB88u;
label_28bb88:
    // 0x28bb88: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x28bb88u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_28bb8c:
    // 0x28bb8c: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x28bb8cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_28bb90:
    // 0x28bb90: 0x320f809  jalr        $t9
label_28bb94:
    if (ctx->pc == 0x28BB94u) {
        ctx->pc = 0x28BB94u;
            // 0x28bb94: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x28BB98u;
        goto label_28bb98;
    }
    ctx->pc = 0x28BB90u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x28BB98u);
        ctx->pc = 0x28BB94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28BB90u;
            // 0x28bb94: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x28BB98u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x28BB98u; }
            if (ctx->pc != 0x28BB98u) { return; }
        }
        }
    }
    ctx->pc = 0x28BB98u;
label_28bb98:
    // 0x28bb98: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x28bb98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_28bb9c:
    // 0x28bb9c: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x28bb9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_28bba0:
    // 0x28bba0: 0xc075310  jal         func_1D4C40
label_28bba4:
    if (ctx->pc == 0x28BBA4u) {
        ctx->pc = 0x28BBA4u;
            // 0x28bba4: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x28BBA8u;
        goto label_28bba8;
    }
    ctx->pc = 0x28BBA0u;
    SET_GPR_U32(ctx, 31, 0x28BBA8u);
    ctx->pc = 0x28BBA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28BBA0u;
            // 0x28bba4: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D4C40u;
    if (runtime->hasFunction(0x1D4C40u)) {
        auto targetFn = runtime->lookupFunction(0x1D4C40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28BBA8u; }
        if (ctx->pc != 0x28BBA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DrawSymbol__14CMiniMapSymbolFPfi_0x1d4c40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28BBA8u; }
        if (ctx->pc != 0x28BBA8u) { return; }
    }
    ctx->pc = 0x28BBA8u;
label_28bba8:
    // 0x28bba8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x28bba8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_28bbac:
    // 0x28bbac: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x28bbacu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_28bbb0:
    // 0x28bbb0: 0x3e00008  jr          $ra
label_28bbb4:
    if (ctx->pc == 0x28BBB4u) {
        ctx->pc = 0x28BBB4u;
            // 0x28bbb4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x28BBB8u;
        goto label_fallthrough_0x28bbb0;
    }
    ctx->pc = 0x28BBB0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28BBB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28BBB0u;
            // 0x28bbb4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x28bbb0:
    ctx->pc = 0x28BBB8u;
}
