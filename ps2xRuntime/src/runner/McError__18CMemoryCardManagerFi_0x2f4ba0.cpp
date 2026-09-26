#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: McError__18CMemoryCardManagerFi
// Address: 0x2f4ba0 - 0x2f4c98
void McError__18CMemoryCardManagerFi_0x2f4ba0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("McError__18CMemoryCardManagerFi_0x2f4ba0");
#endif

    switch (ctx->pc) {
        case 0x2f4c6cu: goto label_2f4c6c;
        default: break;
    }

    ctx->pc = 0x2f4ba0u;

    // 0x2f4ba0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2f4ba0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2f4ba4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2f4ba4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2f4ba8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2f4ba8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2f4bac: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2f4bacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2f4bb0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2f4bb0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f4bb4: 0x8c8304c8  lw          $v1, 0x4C8($a0)
    ctx->pc = 0x2f4bb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1224)));
    // 0x2f4bb8: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2F4BB8u;
    {
        const bool branch_taken_0x2f4bb8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F4BBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F4BB8u;
            // 0x2f4bbc: 0x263004d0  addiu       $s0, $s1, 0x4D0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 1232));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f4bb8) {
            ctx->pc = 0x2F4BCCu;
            goto label_2f4bcc;
        }
    }
    ctx->pc = 0x2F4BC0u;
    // 0x2f4bc0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2f4bc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f4bc4: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2F4BC4u;
    {
        const bool branch_taken_0x2f4bc4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2F4BC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F4BC4u;
            // 0x2f4bc8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f4bc4) {
            ctx->pc = 0x2F4BD8u;
            goto label_2f4bd8;
        }
    }
    ctx->pc = 0x2F4BCCu;
label_2f4bcc:
    // 0x2f4bcc: 0x31140  sll         $v0, $v1, 5
    ctx->pc = 0x2f4bccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x2f4bd0: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x2f4bd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x2f4bd4: 0x24440d5c  addiu       $a0, $v0, 0xD5C
    ctx->pc = 0x2f4bd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 3420));
label_2f4bd8:
    // 0x2f4bd8: 0x2402fff8  addiu       $v0, $zero, -0x8
    ctx->pc = 0x2f4bd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967288));
    // 0x2f4bdc: 0x10a20016  beq         $a1, $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x2F4BDCu;
    {
        const bool branch_taken_0x2f4bdc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x2F4BE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F4BDCu;
            // 0x2f4be0: 0x28a1fff6  slti        $at, $a1, -0xA (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)4294967286) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f4bdc) {
            ctx->pc = 0x2F4C38u;
            goto label_2f4c38;
        }
    }
    ctx->pc = 0x2F4BE4u;
    // 0x2f4be4: 0x2402fffb  addiu       $v0, $zero, -0x5
    ctx->pc = 0x2f4be4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
    // 0x2f4be8: 0x10a20012  beq         $a1, $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x2F4BE8u;
    {
        const bool branch_taken_0x2f4be8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x2F4BECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F4BE8u;
            // 0x2f4bec: 0x2402fffc  addiu       $v0, $zero, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f4be8) {
            ctx->pc = 0x2F4C34u;
            goto label_2f4c34;
        }
    }
    ctx->pc = 0x2F4BF0u;
    // 0x2f4bf0: 0x10a20010  beq         $a1, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x2F4BF0u;
    {
        const bool branch_taken_0x2f4bf0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x2F4BF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F4BF0u;
            // 0x2f4bf4: 0x2402fffd  addiu       $v0, $zero, -0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f4bf0) {
            ctx->pc = 0x2F4C34u;
            goto label_2f4c34;
        }
    }
    ctx->pc = 0x2F4BF8u;
    // 0x2f4bf8: 0x10a2000d  beq         $a1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x2F4BF8u;
    {
        const bool branch_taken_0x2f4bf8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x2F4BFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F4BF8u;
            // 0x2f4bfc: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f4bf8) {
            ctx->pc = 0x2F4C30u;
            goto label_2f4c30;
        }
    }
    ctx->pc = 0x2F4C00u;
    // 0x2f4c00: 0x2402fff4  addiu       $v0, $zero, -0xC
    ctx->pc = 0x2f4c00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967284));
    // 0x2f4c04: 0x10a20007  beq         $a1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2F4C04u;
    {
        const bool branch_taken_0x2f4c04 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x2F4C08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F4C04u;
            // 0x2f4c08: 0x24020007  addiu       $v0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f4c04) {
            ctx->pc = 0x2F4C24u;
            goto label_2f4c24;
        }
    }
    ctx->pc = 0x2F4C0Cu;
    // 0x2f4c0c: 0x2402fffe  addiu       $v0, $zero, -0x2
    ctx->pc = 0x2f4c0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x2f4c10: 0x10a20003  beq         $a1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2F4C10u;
    {
        const bool branch_taken_0x2f4c10 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x2f4c10) {
            ctx->pc = 0x2F4C20u;
            goto label_2f4c20;
        }
    }
    ctx->pc = 0x2F4C18u;
    // 0x2f4c18: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2F4C18u;
    {
        const bool branch_taken_0x2f4c18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f4c18) {
            ctx->pc = 0x2F4C34u;
            goto label_2f4c34;
        }
    }
    ctx->pc = 0x2F4C20u;
label_2f4c20:
    // 0x2f4c20: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x2f4c20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_2f4c24:
    // 0x2f4c24: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x2f4c24u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x2f4c28: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2F4C28u;
    {
        const bool branch_taken_0x2f4c28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F4C2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F4C28u;
            // 0x2f4c2c: 0xac800008  sw          $zero, 0x8($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f4c28) {
            ctx->pc = 0x2F4C34u;
            goto label_2f4c34;
        }
    }
    ctx->pc = 0x2F4C30u;
label_2f4c30:
    // 0x2f4c30: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x2f4c30u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_2f4c34:
    // 0x2f4c34: 0x28a1fff6  slti        $at, $a1, -0xA
    ctx->pc = 0x2f4c34u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)4294967286) ? 1 : 0);
label_2f4c38:
    // 0x2f4c38: 0x10200008  beqz        $at, . + 4 + (0x8 << 2)
    ctx->pc = 0x2F4C38u;
    {
        const bool branch_taken_0x2f4c38 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F4C3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F4C38u;
            // 0x2f4c3c: 0x24030008  addiu       $v1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f4c38) {
            ctx->pc = 0x2F4C5Cu;
            goto label_2f4c5c;
        }
    }
    ctx->pc = 0x2F4C40u;
    // 0x2f4c40: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x2f4c40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2f4c44: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x2f4c44u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x2f4c48: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x2f4c48u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x2f4c4c: 0x8e230050  lw          $v1, 0x50($s1)
    ctx->pc = 0x2f4c4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
    // 0x2f4c50: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2F4C50u;
    {
        const bool branch_taken_0x2f4c50 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2f4c50) {
            ctx->pc = 0x2F4C5Cu;
            goto label_2f4c5c;
        }
    }
    ctx->pc = 0x2F4C58u;
    // 0x2f4c58: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x2f4c58u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_2f4c5c:
    // 0x2f4c5c: 0x4a10008  bgez        $a1, . + 4 + (0x8 << 2)
    ctx->pc = 0x2F4C5Cu;
    {
        const bool branch_taken_0x2f4c5c = (GPR_S32(ctx, 5) >= 0);
        ctx->pc = 0x2F4C60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F4C5Cu;
            // 0x2f4c60: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f4c5c) {
            ctx->pc = 0x2F4C80u;
            goto label_2f4c80;
        }
    }
    ctx->pc = 0x2F4C64u;
    // 0x2f4c64: 0xc0bc748  jal         func_2F1D20
    ctx->pc = 0x2F4C64u;
    SET_GPR_U32(ctx, 31, 0x2F4C6Cu);
    ctx->pc = 0x2F1D20u;
    if (runtime->hasFunction(0x2F1D20u)) {
        auto targetFn = runtime->lookupFunction(0x2F1D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F4C6Cu; }
        if (ctx->pc != 0x2F4C6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetFuncNo__18CMemoryCardManagerFv_0x2f1d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F4C6Cu; }
        if (ctx->pc != 0x2F4C6Cu) { return; }
    }
    ctx->pc = 0x2F4C6Cu;
label_2f4c6c:
    // 0x2f4c6c: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x2f4c6cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x2f4c70: 0x8e220058  lw          $v0, 0x58($s1)
    ctx->pc = 0x2f4c70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 88)));
    // 0x2f4c74: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x2f4c74u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    // 0x2f4c78: 0x8e2204cc  lw          $v0, 0x4CC($s1)
    ctx->pc = 0x2f4c78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1228)));
    // 0x2f4c7c: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x2f4c7cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
label_2f4c80:
    // 0x2f4c80: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2f4c80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2f4c84: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2f4c84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f4c88: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2f4c88u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2f4c8c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2f4c8cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2f4c90: 0x3e00008  jr          $ra
    ctx->pc = 0x2F4C90u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F4C94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F4C90u;
            // 0x2f4c94: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2F4C98u;
}
