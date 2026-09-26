#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: SetColor__11CWaterFrameFUcUcUcUc
// Address: 0x185c30 - 0x185c9c
void SetColor__11CWaterFrameFUcUcUcUc_0x185c30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetColor__11CWaterFrameFUcUcUcUc_0x185c30");
#endif

    switch (ctx->pc) {
        case 0x185c30u: goto label_185c30;
        case 0x185c34u: goto label_185c34;
        case 0x185c38u: goto label_185c38;
        case 0x185c3cu: goto label_185c3c;
        case 0x185c40u: goto label_185c40;
        case 0x185c44u: goto label_185c44;
        case 0x185c48u: goto label_185c48;
        case 0x185c4cu: goto label_185c4c;
        case 0x185c50u: goto label_185c50;
        case 0x185c54u: goto label_185c54;
        case 0x185c58u: goto label_185c58;
        case 0x185c5cu: goto label_185c5c;
        case 0x185c60u: goto label_185c60;
        case 0x185c64u: goto label_185c64;
        case 0x185c68u: goto label_185c68;
        case 0x185c6cu: goto label_185c6c;
        case 0x185c70u: goto label_185c70;
        case 0x185c74u: goto label_185c74;
        case 0x185c78u: goto label_185c78;
        case 0x185c7cu: goto label_185c7c;
        case 0x185c80u: goto label_185c80;
        case 0x185c84u: goto label_185c84;
        case 0x185c88u: goto label_185c88;
        case 0x185c8cu: goto label_185c8c;
        case 0x185c90u: goto label_185c90;
        case 0x185c94u: goto label_185c94;
        case 0x185c98u: goto label_185c98;
        default: break;
    }

    ctx->pc = 0x185c30u;

label_185c30:
    // 0x185c30: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x185c30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_185c34:
    // 0x185c34: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x185c34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_185c38:
    // 0x185c38: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x185c38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_185c3c:
    // 0x185c3c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x185c3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_185c40:
    // 0x185c40: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x185c40u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_185c44:
    // 0x185c44: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x185c44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_185c48:
    // 0x185c48: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x185c48u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_185c4c:
    // 0x185c4c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x185c4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_185c50:
    // 0x185c50: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x185c50u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_185c54:
    // 0x185c54: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x185c54u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_185c58:
    // 0x185c58: 0x8f39004c  lw          $t9, 0x4C($t9)
    ctx->pc = 0x185c58u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 76)));
label_185c5c:
    // 0x185c5c: 0x320f809  jalr        $t9
label_185c60:
    if (ctx->pc == 0x185C60u) {
        ctx->pc = 0x185C60u;
            // 0x185c60: 0x100802d  daddu       $s0, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x185C64u;
        goto label_185c64;
    }
    ctx->pc = 0x185C5Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x185C64u);
        ctx->pc = 0x185C60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x185C5Cu;
            // 0x185c60: 0x100802d  daddu       $s0, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x185C64u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x185C64u; }
            if (ctx->pc != 0x185C64u) { return; }
        }
        }
    }
    ctx->pc = 0x185C64u;
label_185c64:
    // 0x185c64: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x185c64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_185c68:
    // 0x185c68: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_185c6c:
    if (ctx->pc == 0x185C6Cu) {
        ctx->pc = 0x185C6Cu;
            // 0x185c6c: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x185C70u;
        goto label_185c70;
    }
    ctx->pc = 0x185C68u;
    {
        const bool branch_taken_0x185c68 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x185C6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x185C68u;
            // 0x185c6c: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x185c68) {
            ctx->pc = 0x185C80u;
            goto label_185c80;
        }
    }
    ctx->pc = 0x185C70u;
label_185c70:
    // 0x185c70: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x185c70u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_185c74:
    // 0x185c74: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x185c74u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_185c78:
    // 0x185c78: 0xc061320  jal         func_184C80
label_185c7c:
    if (ctx->pc == 0x185C7Cu) {
        ctx->pc = 0x185C7Cu;
            // 0x185c7c: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x185C80u;
        goto label_185c80;
    }
    ctx->pc = 0x185C78u;
    SET_GPR_U32(ctx, 31, 0x185C80u);
    ctx->pc = 0x185C7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x185C78u;
            // 0x185c7c: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x184C80u;
    if (runtime->hasFunction(0x184C80u)) {
        auto targetFn = runtime->lookupFunction(0x184C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x185C80u; }
        if (ctx->pc != 0x185C80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetColor__6CWaterFUcUcUcUc_0x184c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x185C80u; }
        if (ctx->pc != 0x185C80u) { return; }
    }
    ctx->pc = 0x185C80u;
label_185c80:
    // 0x185c80: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x185c80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_185c84:
    // 0x185c84: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x185c84u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_185c88:
    // 0x185c88: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x185c88u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_185c8c:
    // 0x185c8c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x185c8cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_185c90:
    // 0x185c90: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x185c90u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_185c94:
    // 0x185c94: 0x3e00008  jr          $ra
label_185c98:
    if (ctx->pc == 0x185C98u) {
        ctx->pc = 0x185C98u;
            // 0x185c98: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x185C9Cu;
        goto label_fallthrough_0x185c94;
    }
    ctx->pc = 0x185C94u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x185C98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x185C94u;
            // 0x185c98: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x185c94:
    ctx->pc = 0x185C9Cu;
}
