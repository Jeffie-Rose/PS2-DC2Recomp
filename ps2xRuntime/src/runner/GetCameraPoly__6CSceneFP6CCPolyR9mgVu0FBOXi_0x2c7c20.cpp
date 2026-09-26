#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetCameraPoly__6CSceneFP6CCPolyR9mgVu0FBOXi
// Address: 0x2c7c20 - 0x2c7cec
void GetCameraPoly__6CSceneFP6CCPolyR9mgVu0FBOXi_0x2c7c20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetCameraPoly__6CSceneFP6CCPolyR9mgVu0FBOXi_0x2c7c20");
#endif

    switch (ctx->pc) {
        case 0x2c7c20u: goto label_2c7c20;
        case 0x2c7c24u: goto label_2c7c24;
        case 0x2c7c28u: goto label_2c7c28;
        case 0x2c7c2cu: goto label_2c7c2c;
        case 0x2c7c30u: goto label_2c7c30;
        case 0x2c7c34u: goto label_2c7c34;
        case 0x2c7c38u: goto label_2c7c38;
        case 0x2c7c3cu: goto label_2c7c3c;
        case 0x2c7c40u: goto label_2c7c40;
        case 0x2c7c44u: goto label_2c7c44;
        case 0x2c7c48u: goto label_2c7c48;
        case 0x2c7c4cu: goto label_2c7c4c;
        case 0x2c7c50u: goto label_2c7c50;
        case 0x2c7c54u: goto label_2c7c54;
        case 0x2c7c58u: goto label_2c7c58;
        case 0x2c7c5cu: goto label_2c7c5c;
        case 0x2c7c60u: goto label_2c7c60;
        case 0x2c7c64u: goto label_2c7c64;
        case 0x2c7c68u: goto label_2c7c68;
        case 0x2c7c6cu: goto label_2c7c6c;
        case 0x2c7c70u: goto label_2c7c70;
        case 0x2c7c74u: goto label_2c7c74;
        case 0x2c7c78u: goto label_2c7c78;
        case 0x2c7c7cu: goto label_2c7c7c;
        case 0x2c7c80u: goto label_2c7c80;
        case 0x2c7c84u: goto label_2c7c84;
        case 0x2c7c88u: goto label_2c7c88;
        case 0x2c7c8cu: goto label_2c7c8c;
        case 0x2c7c90u: goto label_2c7c90;
        case 0x2c7c94u: goto label_2c7c94;
        case 0x2c7c98u: goto label_2c7c98;
        case 0x2c7c9cu: goto label_2c7c9c;
        case 0x2c7ca0u: goto label_2c7ca0;
        case 0x2c7ca4u: goto label_2c7ca4;
        case 0x2c7ca8u: goto label_2c7ca8;
        case 0x2c7cacu: goto label_2c7cac;
        case 0x2c7cb0u: goto label_2c7cb0;
        case 0x2c7cb4u: goto label_2c7cb4;
        case 0x2c7cb8u: goto label_2c7cb8;
        case 0x2c7cbcu: goto label_2c7cbc;
        case 0x2c7cc0u: goto label_2c7cc0;
        case 0x2c7cc4u: goto label_2c7cc4;
        case 0x2c7cc8u: goto label_2c7cc8;
        case 0x2c7cccu: goto label_2c7ccc;
        case 0x2c7cd0u: goto label_2c7cd0;
        case 0x2c7cd4u: goto label_2c7cd4;
        case 0x2c7cd8u: goto label_2c7cd8;
        case 0x2c7cdcu: goto label_2c7cdc;
        case 0x2c7ce0u: goto label_2c7ce0;
        case 0x2c7ce4u: goto label_2c7ce4;
        case 0x2c7ce8u: goto label_2c7ce8;
        default: break;
    }

    ctx->pc = 0x2c7c20u;

label_2c7c20:
    // 0x2c7c20: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x2c7c20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
label_2c7c24:
    // 0x2c7c24: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x2c7c24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
label_2c7c28:
    // 0x2c7c28: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x2c7c28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_2c7c2c:
    // 0x2c7c2c: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x2c7c2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_2c7c30:
    // 0x2c7c30: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x2c7c30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_2c7c34:
    // 0x2c7c34: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2c7c34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_2c7c38:
    // 0x2c7c38: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2c7c38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_2c7c3c:
    // 0x2c7c3c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2c7c3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2c7c40:
    // 0x2c7c40: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x2c7c40u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2c7c44:
    // 0x2c7c44: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2c7c44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2c7c48:
    // 0x2c7c48: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x2c7c48u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_2c7c4c:
    // 0x2c7c4c: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x2c7c4cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_2c7c50:
    // 0x2c7c50: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x2c7c50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_2c7c54:
    // 0x2c7c54: 0xc0a1214  jal         func_284850
label_2c7c58:
    if (ctx->pc == 0x2C7C58u) {
        ctx->pc = 0x2C7C58u;
            // 0x2c7c58: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x2C7C5Cu;
        goto label_2c7c5c;
    }
    ctx->pc = 0x2C7C54u;
    SET_GPR_U32(ctx, 31, 0x2C7C5Cu);
    ctx->pc = 0x2C7C58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C7C54u;
            // 0x2c7c58: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x284850u;
    if (runtime->hasFunction(0x284850u)) {
        auto targetFn = runtime->lookupFunction(0x284850u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C7C5Cu; }
        if (ctx->pc != 0x2C7C5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetActiveMap__6CSceneFPP4CMapi_0x284850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C7C5Cu; }
        if (ctx->pc != 0x2C7C5Cu) { return; }
    }
    ctx->pc = 0x2C7C5Cu;
label_2c7c5c:
    // 0x2c7c5c: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x2c7c5cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2c7c60:
    // 0x2c7c60: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x2c7c60u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2c7c64:
    // 0x2c7c64: 0x13082a  slt         $at, $zero, $s3
    ctx->pc = 0x2c7c64u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
label_2c7c68:
    // 0x2c7c68: 0x10200015  beqz        $at, . + 4 + (0x15 << 2)
label_2c7c6c:
    if (ctx->pc == 0x2C7C6Cu) {
        ctx->pc = 0x2C7C6Cu;
            // 0x2c7c6c: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2C7C70u;
        goto label_2c7c70;
    }
    ctx->pc = 0x2C7C68u;
    {
        const bool branch_taken_0x2c7c68 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C7C6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C7C68u;
            // 0x2c7c6c: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c7c68) {
            ctx->pc = 0x2C7CC0u;
            goto label_2c7cc0;
        }
    }
    ctx->pc = 0x2C7C70u;
label_2c7c70:
    // 0x2c7c70: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x2c7c70u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2c7c74:
    // 0x2c7c74: 0x2dd1021  addu        $v0, $s6, $sp
    ctx->pc = 0x2c7c74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 29)));
label_2c7c78:
    // 0x2c7c78: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2c7c78u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2c7c7c:
    // 0x2c7c7c: 0x8c440080  lw          $a0, 0x80($v0)
    ctx->pc = 0x2c7c7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 128)));
label_2c7c80:
    // 0x2c7c80: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x2c7c80u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2c7c84:
    // 0x2c7c84: 0x8c990d00  lw          $t9, 0xD00($a0)
    ctx->pc = 0x2c7c84u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 3328)));
label_2c7c88:
    // 0x2c7c88: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x2c7c88u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_2c7c8c:
    // 0x2c7c8c: 0x320f809  jalr        $t9
label_2c7c90:
    if (ctx->pc == 0x2C7C90u) {
        ctx->pc = 0x2C7C90u;
            // 0x2c7c90: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2C7C94u;
        goto label_2c7c94;
    }
    ctx->pc = 0x2C7C8Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2C7C94u);
        ctx->pc = 0x2C7C90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C7C8Cu;
            // 0x2c7c90: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2C7C94u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2C7C94u; }
            if (ctx->pc != 0x2C7C94u) { return; }
        }
        }
    }
    ctx->pc = 0x2C7C94u;
label_2c7c94:
    // 0x2c7c94: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x2c7c94u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_2c7c98:
    // 0x2c7c98: 0x282a021  addu        $s4, $s4, $v0
    ctx->pc = 0x2c7c98u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
label_2c7c9c:
    // 0x2c7c9c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2c7c9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_2c7ca0:
    // 0x2c7ca0: 0x2028023  subu        $s0, $s0, $v0
    ctx->pc = 0x2c7ca0u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_2c7ca4:
    // 0x2c7ca4: 0x31100  sll         $v0, $v1, 4
    ctx->pc = 0x2c7ca4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_2c7ca8:
    // 0x2c7ca8: 0x6000005  bltz        $s0, . + 4 + (0x5 << 2)
label_2c7cac:
    if (ctx->pc == 0x2C7CACu) {
        ctx->pc = 0x2C7CACu;
            // 0x2c7cac: 0x2429021  addu        $s2, $s2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
        ctx->pc = 0x2C7CB0u;
        goto label_2c7cb0;
    }
    ctx->pc = 0x2C7CA8u;
    {
        const bool branch_taken_0x2c7ca8 = (GPR_S32(ctx, 16) < 0);
        ctx->pc = 0x2C7CACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C7CA8u;
            // 0x2c7cac: 0x2429021  addu        $s2, $s2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c7ca8) {
            ctx->pc = 0x2C7CC0u;
            goto label_2c7cc0;
        }
    }
    ctx->pc = 0x2C7CB0u;
label_2c7cb0:
    // 0x2c7cb0: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x2c7cb0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
label_2c7cb4:
    // 0x2c7cb4: 0x2b3102a  slt         $v0, $s5, $s3
    ctx->pc = 0x2c7cb4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 21) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
label_2c7cb8:
    // 0x2c7cb8: 0x1440ffee  bnez        $v0, . + 4 + (-0x12 << 2)
label_2c7cbc:
    if (ctx->pc == 0x2C7CBCu) {
        ctx->pc = 0x2C7CBCu;
            // 0x2c7cbc: 0x26d60004  addiu       $s6, $s6, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 4));
        ctx->pc = 0x2C7CC0u;
        goto label_2c7cc0;
    }
    ctx->pc = 0x2C7CB8u;
    {
        const bool branch_taken_0x2c7cb8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C7CBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C7CB8u;
            // 0x2c7cbc: 0x26d60004  addiu       $s6, $s6, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c7cb8) {
            ctx->pc = 0x2C7C74u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2c7c74;
        }
    }
    ctx->pc = 0x2C7CC0u;
label_2c7cc0:
    // 0x2c7cc0: 0x280102d  daddu       $v0, $s4, $zero
    ctx->pc = 0x2c7cc0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2c7cc4:
    // 0x2c7cc4: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x2c7cc4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_2c7cc8:
    // 0x2c7cc8: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x2c7cc8u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_2c7ccc:
    // 0x2c7ccc: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x2c7cccu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_2c7cd0:
    // 0x2c7cd0: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x2c7cd0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_2c7cd4:
    // 0x2c7cd4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2c7cd4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2c7cd8:
    // 0x2c7cd8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2c7cd8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2c7cdc:
    // 0x2c7cdc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2c7cdcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2c7ce0:
    // 0x2c7ce0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2c7ce0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2c7ce4:
    // 0x2c7ce4: 0x3e00008  jr          $ra
label_2c7ce8:
    if (ctx->pc == 0x2C7CE8u) {
        ctx->pc = 0x2C7CE8u;
            // 0x2c7ce8: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = 0x2C7CECu;
        goto label_fallthrough_0x2c7ce4;
    }
    ctx->pc = 0x2C7CE4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C7CE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C7CE4u;
            // 0x2c7ce8: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x2c7ce4:
    ctx->pc = 0x2C7CECu;
}
