#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetColPoly__6CSceneFP6CCPolyR9mgVu0FBOXi
// Address: 0x2c7b50 - 0x2c7c1c
void GetColPoly__6CSceneFP6CCPolyR9mgVu0FBOXi_0x2c7b50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetColPoly__6CSceneFP6CCPolyR9mgVu0FBOXi_0x2c7b50");
#endif

    switch (ctx->pc) {
        case 0x2c7b50u: goto label_2c7b50;
        case 0x2c7b54u: goto label_2c7b54;
        case 0x2c7b58u: goto label_2c7b58;
        case 0x2c7b5cu: goto label_2c7b5c;
        case 0x2c7b60u: goto label_2c7b60;
        case 0x2c7b64u: goto label_2c7b64;
        case 0x2c7b68u: goto label_2c7b68;
        case 0x2c7b6cu: goto label_2c7b6c;
        case 0x2c7b70u: goto label_2c7b70;
        case 0x2c7b74u: goto label_2c7b74;
        case 0x2c7b78u: goto label_2c7b78;
        case 0x2c7b7cu: goto label_2c7b7c;
        case 0x2c7b80u: goto label_2c7b80;
        case 0x2c7b84u: goto label_2c7b84;
        case 0x2c7b88u: goto label_2c7b88;
        case 0x2c7b8cu: goto label_2c7b8c;
        case 0x2c7b90u: goto label_2c7b90;
        case 0x2c7b94u: goto label_2c7b94;
        case 0x2c7b98u: goto label_2c7b98;
        case 0x2c7b9cu: goto label_2c7b9c;
        case 0x2c7ba0u: goto label_2c7ba0;
        case 0x2c7ba4u: goto label_2c7ba4;
        case 0x2c7ba8u: goto label_2c7ba8;
        case 0x2c7bacu: goto label_2c7bac;
        case 0x2c7bb0u: goto label_2c7bb0;
        case 0x2c7bb4u: goto label_2c7bb4;
        case 0x2c7bb8u: goto label_2c7bb8;
        case 0x2c7bbcu: goto label_2c7bbc;
        case 0x2c7bc0u: goto label_2c7bc0;
        case 0x2c7bc4u: goto label_2c7bc4;
        case 0x2c7bc8u: goto label_2c7bc8;
        case 0x2c7bccu: goto label_2c7bcc;
        case 0x2c7bd0u: goto label_2c7bd0;
        case 0x2c7bd4u: goto label_2c7bd4;
        case 0x2c7bd8u: goto label_2c7bd8;
        case 0x2c7bdcu: goto label_2c7bdc;
        case 0x2c7be0u: goto label_2c7be0;
        case 0x2c7be4u: goto label_2c7be4;
        case 0x2c7be8u: goto label_2c7be8;
        case 0x2c7becu: goto label_2c7bec;
        case 0x2c7bf0u: goto label_2c7bf0;
        case 0x2c7bf4u: goto label_2c7bf4;
        case 0x2c7bf8u: goto label_2c7bf8;
        case 0x2c7bfcu: goto label_2c7bfc;
        case 0x2c7c00u: goto label_2c7c00;
        case 0x2c7c04u: goto label_2c7c04;
        case 0x2c7c08u: goto label_2c7c08;
        case 0x2c7c0cu: goto label_2c7c0c;
        case 0x2c7c10u: goto label_2c7c10;
        case 0x2c7c14u: goto label_2c7c14;
        case 0x2c7c18u: goto label_2c7c18;
        default: break;
    }

    ctx->pc = 0x2c7b50u;

label_2c7b50:
    // 0x2c7b50: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x2c7b50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
label_2c7b54:
    // 0x2c7b54: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x2c7b54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
label_2c7b58:
    // 0x2c7b58: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x2c7b58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_2c7b5c:
    // 0x2c7b5c: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x2c7b5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_2c7b60:
    // 0x2c7b60: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x2c7b60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_2c7b64:
    // 0x2c7b64: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2c7b64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_2c7b68:
    // 0x2c7b68: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2c7b68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_2c7b6c:
    // 0x2c7b6c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2c7b6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2c7b70:
    // 0x2c7b70: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x2c7b70u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2c7b74:
    // 0x2c7b74: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2c7b74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2c7b78:
    // 0x2c7b78: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x2c7b78u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_2c7b7c:
    // 0x2c7b7c: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x2c7b7cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_2c7b80:
    // 0x2c7b80: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x2c7b80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_2c7b84:
    // 0x2c7b84: 0xc0a1214  jal         func_284850
label_2c7b88:
    if (ctx->pc == 0x2C7B88u) {
        ctx->pc = 0x2C7B88u;
            // 0x2c7b88: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x2C7B8Cu;
        goto label_2c7b8c;
    }
    ctx->pc = 0x2C7B84u;
    SET_GPR_U32(ctx, 31, 0x2C7B8Cu);
    ctx->pc = 0x2C7B88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C7B84u;
            // 0x2c7b88: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x284850u;
    if (runtime->hasFunction(0x284850u)) {
        auto targetFn = runtime->lookupFunction(0x284850u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C7B8Cu; }
        if (ctx->pc != 0x2C7B8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetActiveMap__6CSceneFPP4CMapi_0x284850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C7B8Cu; }
        if (ctx->pc != 0x2C7B8Cu) { return; }
    }
    ctx->pc = 0x2C7B8Cu;
label_2c7b8c:
    // 0x2c7b8c: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x2c7b8cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2c7b90:
    // 0x2c7b90: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x2c7b90u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2c7b94:
    // 0x2c7b94: 0x13082a  slt         $at, $zero, $s3
    ctx->pc = 0x2c7b94u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
label_2c7b98:
    // 0x2c7b98: 0x10200015  beqz        $at, . + 4 + (0x15 << 2)
label_2c7b9c:
    if (ctx->pc == 0x2C7B9Cu) {
        ctx->pc = 0x2C7B9Cu;
            // 0x2c7b9c: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2C7BA0u;
        goto label_2c7ba0;
    }
    ctx->pc = 0x2C7B98u;
    {
        const bool branch_taken_0x2c7b98 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C7B9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C7B98u;
            // 0x2c7b9c: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c7b98) {
            ctx->pc = 0x2C7BF0u;
            goto label_2c7bf0;
        }
    }
    ctx->pc = 0x2C7BA0u;
label_2c7ba0:
    // 0x2c7ba0: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x2c7ba0u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2c7ba4:
    // 0x2c7ba4: 0x2dd1021  addu        $v0, $s6, $sp
    ctx->pc = 0x2c7ba4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 29)));
label_2c7ba8:
    // 0x2c7ba8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2c7ba8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2c7bac:
    // 0x2c7bac: 0x8c440080  lw          $a0, 0x80($v0)
    ctx->pc = 0x2c7bacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 128)));
label_2c7bb0:
    // 0x2c7bb0: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x2c7bb0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2c7bb4:
    // 0x2c7bb4: 0x8c990d00  lw          $t9, 0xD00($a0)
    ctx->pc = 0x2c7bb4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 3328)));
label_2c7bb8:
    // 0x2c7bb8: 0x8f39002c  lw          $t9, 0x2C($t9)
    ctx->pc = 0x2c7bb8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 44)));
label_2c7bbc:
    // 0x2c7bbc: 0x320f809  jalr        $t9
label_2c7bc0:
    if (ctx->pc == 0x2C7BC0u) {
        ctx->pc = 0x2C7BC0u;
            // 0x2c7bc0: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2C7BC4u;
        goto label_2c7bc4;
    }
    ctx->pc = 0x2C7BBCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2C7BC4u);
        ctx->pc = 0x2C7BC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C7BBCu;
            // 0x2c7bc0: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2C7BC4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2C7BC4u; }
            if (ctx->pc != 0x2C7BC4u) { return; }
        }
        }
    }
    ctx->pc = 0x2C7BC4u;
label_2c7bc4:
    // 0x2c7bc4: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x2c7bc4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_2c7bc8:
    // 0x2c7bc8: 0x282a021  addu        $s4, $s4, $v0
    ctx->pc = 0x2c7bc8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
label_2c7bcc:
    // 0x2c7bcc: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2c7bccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_2c7bd0:
    // 0x2c7bd0: 0x2028023  subu        $s0, $s0, $v0
    ctx->pc = 0x2c7bd0u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_2c7bd4:
    // 0x2c7bd4: 0x31100  sll         $v0, $v1, 4
    ctx->pc = 0x2c7bd4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_2c7bd8:
    // 0x2c7bd8: 0x6000005  bltz        $s0, . + 4 + (0x5 << 2)
label_2c7bdc:
    if (ctx->pc == 0x2C7BDCu) {
        ctx->pc = 0x2C7BDCu;
            // 0x2c7bdc: 0x2429021  addu        $s2, $s2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
        ctx->pc = 0x2C7BE0u;
        goto label_2c7be0;
    }
    ctx->pc = 0x2C7BD8u;
    {
        const bool branch_taken_0x2c7bd8 = (GPR_S32(ctx, 16) < 0);
        ctx->pc = 0x2C7BDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C7BD8u;
            // 0x2c7bdc: 0x2429021  addu        $s2, $s2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c7bd8) {
            ctx->pc = 0x2C7BF0u;
            goto label_2c7bf0;
        }
    }
    ctx->pc = 0x2C7BE0u;
label_2c7be0:
    // 0x2c7be0: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x2c7be0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
label_2c7be4:
    // 0x2c7be4: 0x2b3102a  slt         $v0, $s5, $s3
    ctx->pc = 0x2c7be4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 21) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
label_2c7be8:
    // 0x2c7be8: 0x1440ffee  bnez        $v0, . + 4 + (-0x12 << 2)
label_2c7bec:
    if (ctx->pc == 0x2C7BECu) {
        ctx->pc = 0x2C7BECu;
            // 0x2c7bec: 0x26d60004  addiu       $s6, $s6, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 4));
        ctx->pc = 0x2C7BF0u;
        goto label_2c7bf0;
    }
    ctx->pc = 0x2C7BE8u;
    {
        const bool branch_taken_0x2c7be8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C7BECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C7BE8u;
            // 0x2c7bec: 0x26d60004  addiu       $s6, $s6, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c7be8) {
            ctx->pc = 0x2C7BA4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2c7ba4;
        }
    }
    ctx->pc = 0x2C7BF0u;
label_2c7bf0:
    // 0x2c7bf0: 0x280102d  daddu       $v0, $s4, $zero
    ctx->pc = 0x2c7bf0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2c7bf4:
    // 0x2c7bf4: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x2c7bf4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_2c7bf8:
    // 0x2c7bf8: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x2c7bf8u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_2c7bfc:
    // 0x2c7bfc: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x2c7bfcu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_2c7c00:
    // 0x2c7c00: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x2c7c00u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_2c7c04:
    // 0x2c7c04: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2c7c04u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2c7c08:
    // 0x2c7c08: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2c7c08u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2c7c0c:
    // 0x2c7c0c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2c7c0cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2c7c10:
    // 0x2c7c10: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2c7c10u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2c7c14:
    // 0x2c7c14: 0x3e00008  jr          $ra
label_2c7c18:
    if (ctx->pc == 0x2C7C18u) {
        ctx->pc = 0x2C7C18u;
            // 0x2c7c18: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = 0x2C7C1Cu;
        goto label_fallthrough_0x2c7c14;
    }
    ctx->pc = 0x2C7C14u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C7C18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C7C14u;
            // 0x2c7c18: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x2c7c14:
    ctx->pc = 0x2C7C1Cu;
}
