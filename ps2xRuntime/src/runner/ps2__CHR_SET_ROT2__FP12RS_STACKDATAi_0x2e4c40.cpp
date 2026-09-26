#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _CHR_SET_ROT2__FP12RS_STACKDATAi
// Address: 0x2e4c40 - 0x2e4cac
void ps2__CHR_SET_ROT2__FP12RS_STACKDATAi_0x2e4c40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__CHR_SET_ROT2__FP12RS_STACKDATAi_0x2e4c40");
#endif

    switch (ctx->pc) {
        case 0x2e4c40u: goto label_2e4c40;
        case 0x2e4c44u: goto label_2e4c44;
        case 0x2e4c48u: goto label_2e4c48;
        case 0x2e4c4cu: goto label_2e4c4c;
        case 0x2e4c50u: goto label_2e4c50;
        case 0x2e4c54u: goto label_2e4c54;
        case 0x2e4c58u: goto label_2e4c58;
        case 0x2e4c5cu: goto label_2e4c5c;
        case 0x2e4c60u: goto label_2e4c60;
        case 0x2e4c64u: goto label_2e4c64;
        case 0x2e4c68u: goto label_2e4c68;
        case 0x2e4c6cu: goto label_2e4c6c;
        case 0x2e4c70u: goto label_2e4c70;
        case 0x2e4c74u: goto label_2e4c74;
        case 0x2e4c78u: goto label_2e4c78;
        case 0x2e4c7cu: goto label_2e4c7c;
        case 0x2e4c80u: goto label_2e4c80;
        case 0x2e4c84u: goto label_2e4c84;
        case 0x2e4c88u: goto label_2e4c88;
        case 0x2e4c8cu: goto label_2e4c8c;
        case 0x2e4c90u: goto label_2e4c90;
        case 0x2e4c94u: goto label_2e4c94;
        case 0x2e4c98u: goto label_2e4c98;
        case 0x2e4c9cu: goto label_2e4c9c;
        case 0x2e4ca0u: goto label_2e4ca0;
        case 0x2e4ca4u: goto label_2e4ca4;
        case 0x2e4ca8u: goto label_2e4ca8;
        default: break;
    }

    ctx->pc = 0x2e4c40u;

label_2e4c40:
    // 0x2e4c40: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2e4c40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_2e4c44:
    // 0x2e4c44: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2e4c44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_2e4c48:
    // 0x2e4c48: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2e4c48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2e4c4c:
    // 0x2e4c4c: 0xc0b8ca0  jal         func_2E3280
label_2e4c50:
    if (ctx->pc == 0x2E4C50u) {
        ctx->pc = 0x2E4C50u;
            // 0x2e4c50: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->pc = 0x2E4C54u;
        goto label_2e4c54;
    }
    ctx->pc = 0x2E4C4Cu;
    SET_GPR_U32(ctx, 31, 0x2E4C54u);
    ctx->pc = 0x2E4C50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E4C4Cu;
            // 0x2e4c50: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E3280u;
    if (runtime->hasFunction(0x2E3280u)) {
        auto targetFn = runtime->lookupFunction(0x2E3280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E4C54u; }
        if (ctx->pc != 0x2E4C54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x2e3280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E4C54u; }
        if (ctx->pc != 0x2E4C54u) { return; }
    }
    ctx->pc = 0x2E4C54u;
label_2e4c54:
    // 0x2e4c54: 0x23880  sll         $a3, $v0, 2
    ctx->pc = 0x2e4c54u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_2e4c58:
    // 0x2e4c58: 0x8f829ed0  lw          $v0, -0x6130($gp)
    ctx->pc = 0x2e4c58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942416)));
label_2e4c5c:
    // 0x2e4c5c: 0xe21021  addu        $v0, $a3, $v0
    ctx->pc = 0x2e4c5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
label_2e4c60:
    // 0x2e4c60: 0x8c420010  lw          $v0, 0x10($v0)
    ctx->pc = 0x2e4c60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
label_2e4c64:
    // 0x2e4c64: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_2e4c68:
    if (ctx->pc == 0x2E4C68u) {
        ctx->pc = 0x2E4C68u;
            // 0x2e4c68: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2E4C6Cu;
        goto label_2e4c6c;
    }
    ctx->pc = 0x2E4C64u;
    {
        const bool branch_taken_0x2e4c64 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E4C68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E4C64u;
            // 0x2e4c68: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e4c64) {
            ctx->pc = 0x2E4C74u;
            goto label_2e4c74;
        }
    }
    ctx->pc = 0x2E4C6Cu;
label_2e4c6c:
    // 0x2e4c6c: 0x1000000b  b           . + 4 + (0xB << 2)
label_2e4c70:
    if (ctx->pc == 0x2E4C70u) {
        ctx->pc = 0x2E4C70u;
            // 0x2e4c70: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2E4C74u;
        goto label_2e4c74;
    }
    ctx->pc = 0x2E4C6Cu;
    {
        const bool branch_taken_0x2e4c6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E4C70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E4C6Cu;
            // 0x2e4c70: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e4c6c) {
            ctx->pc = 0x2E4C9Cu;
            goto label_2e4c9c;
        }
    }
    ctx->pc = 0x2E4C74u;
label_2e4c74:
    // 0x2e4c74: 0xc0b8cbc  jal         func_2E32F0
label_2e4c78:
    if (ctx->pc == 0x2E4C78u) {
        ctx->pc = 0x2E4C78u;
            // 0x2e4c78: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x2E4C7Cu;
        goto label_2e4c7c;
    }
    ctx->pc = 0x2E4C74u;
    SET_GPR_U32(ctx, 31, 0x2E4C7Cu);
    ctx->pc = 0x2E4C78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E4C74u;
            // 0x2e4c78: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E32F0u;
    if (runtime->hasFunction(0x2E32F0u)) {
        auto targetFn = runtime->lookupFunction(0x2E32F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E4C7Cu; }
        if (ctx->pc != 0x2E4C7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackVector__FPfP12RS_STACKDATA_0x2e32f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E4C7Cu; }
        if (ctx->pc != 0x2E4C7Cu) { return; }
    }
    ctx->pc = 0x2E4C7Cu;
label_2e4c7c:
    // 0x2e4c7c: 0x8f829ed0  lw          $v0, -0x6130($gp)
    ctx->pc = 0x2e4c7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942416)));
label_2e4c80:
    // 0x2e4c80: 0xe21021  addu        $v0, $a3, $v0
    ctx->pc = 0x2e4c80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
label_2e4c84:
    // 0x2e4c84: 0x8c440010  lw          $a0, 0x10($v0)
    ctx->pc = 0x2e4c84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
label_2e4c88:
    // 0x2e4c88: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2e4c88u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2e4c8c:
    // 0x2e4c8c: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x2e4c8cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_2e4c90:
    // 0x2e4c90: 0x320f809  jalr        $t9
label_2e4c94:
    if (ctx->pc == 0x2E4C94u) {
        ctx->pc = 0x2E4C94u;
            // 0x2e4c94: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x2E4C98u;
        goto label_2e4c98;
    }
    ctx->pc = 0x2E4C90u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2E4C98u);
        ctx->pc = 0x2E4C94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E4C90u;
            // 0x2e4c94: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2E4C98u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2E4C98u; }
            if (ctx->pc != 0x2E4C98u) { return; }
        }
        }
    }
    ctx->pc = 0x2E4C98u;
label_2e4c98:
    // 0x2e4c98: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2e4c98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2e4c9c:
    // 0x2e4c9c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2e4c9cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2e4ca0:
    // 0x2e4ca0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2e4ca0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2e4ca4:
    // 0x2e4ca4: 0x3e00008  jr          $ra
label_2e4ca8:
    if (ctx->pc == 0x2E4CA8u) {
        ctx->pc = 0x2E4CA8u;
            // 0x2e4ca8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x2E4CACu;
        goto label_fallthrough_0x2e4ca4;
    }
    ctx->pc = 0x2E4CA4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E4CA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E4CA4u;
            // 0x2e4ca8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x2e4ca4:
    ctx->pc = 0x2E4CACu;
}
