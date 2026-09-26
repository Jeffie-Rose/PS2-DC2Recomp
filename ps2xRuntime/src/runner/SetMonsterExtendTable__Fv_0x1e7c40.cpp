#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: SetMonsterExtendTable__Fv
// Address: 0x1e7c40 - 0x1e7d6c
void SetMonsterExtendTable__Fv_0x1e7c40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetMonsterExtendTable__Fv_0x1e7c40");
#endif

    switch (ctx->pc) {
        case 0x1e7c60u: goto label_1e7c60;
        case 0x1e7c9cu: goto label_1e7c9c;
        case 0x1e7cc8u: goto label_1e7cc8;
        case 0x1e7ce4u: goto label_1e7ce4;
        case 0x1e7d24u: goto label_1e7d24;
        default: break;
    }

    ctx->pc = 0x1e7c40u;

    // 0x1e7c40: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1e7c40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1e7c44: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1e7c44u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e7c48: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1e7c48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1e7c4c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1e7c4cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e7c50: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1e7c50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1e7c54: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1e7c54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1e7c58: 0x3c0401ed  lui         $a0, 0x1ED
    ctx->pc = 0x1e7c58u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)493 << 16));
    // 0x1e7c5c: 0x24848910  addiu       $a0, $a0, -0x76F0
    ctx->pc = 0x1e7c5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936848));
label_1e7c60:
    // 0x1e7c60: 0x863821  addu        $a3, $a0, $a2
    ctx->pc = 0x1e7c60u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x1e7c64: 0x24a50008  addiu       $a1, $a1, 0x8
    ctx->pc = 0x1e7c64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
    // 0x1e7c68: 0xace00000  sw          $zero, 0x0($a3)
    ctx->pc = 0x1e7c68u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 0));
    // 0x1e7c6c: 0x28a30100  slti        $v1, $a1, 0x100
    ctx->pc = 0x1e7c6cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)256) ? 1 : 0);
    // 0x1e7c70: 0xace00004  sw          $zero, 0x4($a3)
    ctx->pc = 0x1e7c70u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 0));
    // 0x1e7c74: 0x24c60020  addiu       $a2, $a2, 0x20
    ctx->pc = 0x1e7c74u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
    // 0x1e7c78: 0xace00008  sw          $zero, 0x8($a3)
    ctx->pc = 0x1e7c78u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 8), GPR_U32(ctx, 0));
    // 0x1e7c7c: 0xace0000c  sw          $zero, 0xC($a3)
    ctx->pc = 0x1e7c7cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 12), GPR_U32(ctx, 0));
    // 0x1e7c80: 0xace00010  sw          $zero, 0x10($a3)
    ctx->pc = 0x1e7c80u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 16), GPR_U32(ctx, 0));
    // 0x1e7c84: 0xace00014  sw          $zero, 0x14($a3)
    ctx->pc = 0x1e7c84u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 20), GPR_U32(ctx, 0));
    // 0x1e7c88: 0xace00018  sw          $zero, 0x18($a3)
    ctx->pc = 0x1e7c88u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 24), GPR_U32(ctx, 0));
    // 0x1e7c8c: 0x1460fff4  bnez        $v1, . + 4 + (-0xC << 2)
    ctx->pc = 0x1E7C8Cu;
    {
        const bool branch_taken_0x1e7c8c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E7C90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E7C8Cu;
            // 0x1e7c90: 0xace0001c  sw          $zero, 0x1C($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 28), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e7c8c) {
            ctx->pc = 0x1E7C60u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1e7c60;
        }
    }
    ctx->pc = 0x1E7C94u;
    // 0x1e7c94: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1e7c94u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e7c98: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1e7c98u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e7c9c:
    // 0x1e7c9c: 0x3c050035  lui         $a1, 0x35
    ctx->pc = 0x1e7c9cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)53 << 16));
    // 0x1e7ca0: 0x24a5d340  addiu       $a1, $a1, -0x2CC0
    ctx->pc = 0x1e7ca0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294955840));
    // 0x1e7ca4: 0xb04021  addu        $t0, $a1, $s0
    ctx->pc = 0x1e7ca4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 16)));
    // 0x1e7ca8: 0x8d090000  lw          $t1, 0x0($t0)
    ctx->pc = 0x1e7ca8u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1e7cac: 0x11200029  beqz        $t1, . + 4 + (0x29 << 2)
    ctx->pc = 0x1E7CACu;
    {
        const bool branch_taken_0x1e7cac = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E7CB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E7CACu;
            // 0x1e7cb0: 0x11082a  slt         $at, $zero, $s1 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e7cac) {
            ctx->pc = 0x1E7D54u;
            goto label_1e7d54;
        }
    }
    ctx->pc = 0x1E7CB4u;
    // 0x1e7cb4: 0x10200012  beqz        $at, . + 4 + (0x12 << 2)
    ctx->pc = 0x1E7CB4u;
    {
        const bool branch_taken_0x1e7cb4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E7CB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E7CB4u;
            // 0x1e7cb8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e7cb4) {
            ctx->pc = 0x1E7D00u;
            goto label_1e7d00;
        }
    }
    ctx->pc = 0x1E7CBCu;
    // 0x1e7cbc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1e7cbcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e7cc0: 0x8d040004  lw          $a0, 0x4($t0)
    ctx->pc = 0x1e7cc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
    // 0x1e7cc4: 0x0  nop
    ctx->pc = 0x1e7cc4u;
    // NOP
label_1e7cc8:
    // 0x1e7cc8: 0xa71821  addu        $v1, $a1, $a3
    ctx->pc = 0x1e7cc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
    // 0x1e7ccc: 0x8c630004  lw          $v1, 0x4($v1)
    ctx->pc = 0x1e7cccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1e7cd0: 0x14830006  bne         $a0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1E7CD0u;
    {
        const bool branch_taken_0x1e7cd0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x1e7cd0) {
            ctx->pc = 0x1E7CECu;
            goto label_1e7cec;
        }
    }
    ctx->pc = 0x1E7CD8u;
    // 0x1e7cd8: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x1e7cd8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
    // 0x1e7cdc: 0xc04a0d2  jal         func_128348
    ctx->pc = 0x1E7CDCu;
    SET_GPR_U32(ctx, 31, 0x1E7CE4u);
    ctx->pc = 0x1E7CE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E7CDCu;
            // 0x1e7ce0: 0x248480a0  addiu       $a0, $a0, -0x7F60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294934688));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128348u;
    if (runtime->hasFunction(0x128348u)) {
        auto targetFn = runtime->lookupFunction(0x128348u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E7CE4u; }
        if (ctx->pc != 0x1E7CE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        printf_0x128348(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E7CE4u; }
        if (ctx->pc != 0x1E7CE4u) { return; }
    }
    ctx->pc = 0x1E7CE4u;
label_1e7ce4:
    // 0x1e7ce4: 0x1000ffff  b           . + 4 + (-0x1 << 2)
    ctx->pc = 0x1E7CE4u;
    {
        const bool branch_taken_0x1e7ce4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e7ce4) {
            ctx->pc = 0x1E7CE4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1e7ce4;
        }
    }
    ctx->pc = 0x1E7CECu;
label_1e7cec:
    // 0x1e7cec: 0x0  nop
    ctx->pc = 0x1e7cecu;
    // NOP
    // 0x1e7cf0: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x1e7cf0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x1e7cf4: 0xd1182a  slt         $v1, $a2, $s1
    ctx->pc = 0x1e7cf4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x1e7cf8: 0x1460fff3  bnez        $v1, . + 4 + (-0xD << 2)
    ctx->pc = 0x1E7CF8u;
    {
        const bool branch_taken_0x1e7cf8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E7CFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E7CF8u;
            // 0x1e7cfc: 0x24e70008  addiu       $a3, $a3, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e7cf8) {
            ctx->pc = 0x1E7CC8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1e7cc8;
        }
    }
    ctx->pc = 0x1E7D00u;
label_1e7d00:
    // 0x1e7d00: 0x8d040004  lw          $a0, 0x4($t0)
    ctx->pc = 0x1e7d00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
    // 0x1e7d04: 0x4800003  bltz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1E7D04u;
    {
        const bool branch_taken_0x1e7d04 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x1E7D08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E7D04u;
            // 0x1e7d08: 0x28830100  slti        $v1, $a0, 0x100 (Delay Slot)
        SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)256) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e7d04) {
            ctx->pc = 0x1E7D14u;
            goto label_1e7d14;
        }
    }
    ctx->pc = 0x1E7D0Cu;
    // 0x1e7d0c: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1E7D0Cu;
    {
        const bool branch_taken_0x1e7d0c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e7d0c) {
            ctx->pc = 0x1E7D2Cu;
            goto label_1e7d2c;
        }
    }
    ctx->pc = 0x1E7D14u;
label_1e7d14:
    // 0x1e7d14: 0x0  nop
    ctx->pc = 0x1e7d14u;
    // NOP
    // 0x1e7d18: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x1e7d18u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
    // 0x1e7d1c: 0xc04a0d2  jal         func_128348
    ctx->pc = 0x1E7D1Cu;
    SET_GPR_U32(ctx, 31, 0x1E7D24u);
    ctx->pc = 0x1E7D20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E7D1Cu;
            // 0x1e7d20: 0x248480c0  addiu       $a0, $a0, -0x7F40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294934720));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128348u;
    if (runtime->hasFunction(0x128348u)) {
        auto targetFn = runtime->lookupFunction(0x128348u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E7D24u; }
        if (ctx->pc != 0x1E7D24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        printf_0x128348(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E7D24u; }
        if (ctx->pc != 0x1E7D24u) { return; }
    }
    ctx->pc = 0x1E7D24u;
label_1e7d24:
    // 0x1e7d24: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1E7D24u;
    {
        const bool branch_taken_0x1e7d24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e7d24) {
            ctx->pc = 0x1E7D44u;
            goto label_1e7d44;
        }
    }
    ctx->pc = 0x1E7D2Cu;
label_1e7d2c:
    // 0x1e7d2c: 0x0  nop
    ctx->pc = 0x1e7d2cu;
    // NOP
    // 0x1e7d30: 0x3c0301ed  lui         $v1, 0x1ED
    ctx->pc = 0x1e7d30u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)493 << 16));
    // 0x1e7d34: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x1e7d34u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1e7d38: 0x24638910  addiu       $v1, $v1, -0x76F0
    ctx->pc = 0x1e7d38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294936848));
    // 0x1e7d3c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1e7d3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1e7d40: 0xac690000  sw          $t1, 0x0($v1)
    ctx->pc = 0x1e7d40u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 9));
label_1e7d44:
    // 0x1e7d44: 0x0  nop
    ctx->pc = 0x1e7d44u;
    // NOP
    // 0x1e7d48: 0x26100008  addiu       $s0, $s0, 0x8
    ctx->pc = 0x1e7d48u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x1e7d4c: 0x1000ffd3  b           . + 4 + (-0x2D << 2)
    ctx->pc = 0x1E7D4Cu;
    {
        const bool branch_taken_0x1e7d4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E7D50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E7D4Cu;
            // 0x1e7d50: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e7d4c) {
            ctx->pc = 0x1E7C9Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1e7c9c;
        }
    }
    ctx->pc = 0x1E7D54u;
label_1e7d54:
    // 0x1e7d54: 0x0  nop
    ctx->pc = 0x1e7d54u;
    // NOP
    // 0x1e7d58: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1e7d58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e7d5c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1e7d5cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e7d60: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1e7d60u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e7d64: 0x3e00008  jr          $ra
    ctx->pc = 0x1E7D64u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E7D68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E7D64u;
            // 0x1e7d68: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1E7D6Cu;
}
