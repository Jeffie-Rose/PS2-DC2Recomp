#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: UnFormat__18CMemoryCardManagerFv
// Address: 0x2f4ca0 - 0x2f4d70
void UnFormat__18CMemoryCardManagerFv_0x2f4ca0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("UnFormat__18CMemoryCardManagerFv_0x2f4ca0");
#endif

    switch (ctx->pc) {
        case 0x2f4cd4u: goto label_2f4cd4;
        case 0x2f4d00u: goto label_2f4d00;
        case 0x2f4d18u: goto label_2f4d18;
        default: break;
    }

    ctx->pc = 0x2f4ca0u;

    // 0x2f4ca0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2f4ca0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2f4ca4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2f4ca4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f4ca8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2f4ca8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2f4cac: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2f4cacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2f4cb0: 0x8c820058  lw          $v0, 0x58($a0)
    ctx->pc = 0x2f4cb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 88)));
    // 0x2f4cb4: 0x10450014  beq         $v0, $a1, . + 4 + (0x14 << 2)
    ctx->pc = 0x2F4CB4u;
    {
        const bool branch_taken_0x2f4cb4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        ctx->pc = 0x2F4CB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F4CB4u;
            // 0x2f4cb8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f4cb4) {
            ctx->pc = 0x2F4D08u;
            goto label_2f4d08;
        }
    }
    ctx->pc = 0x2F4CBCu;
    // 0x2f4cbc: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2F4CBCu;
    {
        const bool branch_taken_0x2f4cbc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f4cbc) {
            ctx->pc = 0x2F4CCCu;
            goto label_2f4ccc;
        }
    }
    ctx->pc = 0x2F4CC4u;
    // 0x2f4cc4: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x2F4CC4u;
    {
        const bool branch_taken_0x2f4cc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F4CC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F4CC4u;
            // 0x2f4cc8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f4cc4) {
            ctx->pc = 0x2F4D60u;
            goto label_2f4d60;
        }
    }
    ctx->pc = 0x2F4CCCu;
label_2f4ccc:
    // 0x2f4ccc: 0xc048e8c  jal         func_123A30
    ctx->pc = 0x2F4CCCu;
    SET_GPR_U32(ctx, 31, 0x2F4CD4u);
    ctx->pc = 0x2F4CD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F4CCCu;
            // 0x2f4cd0: 0x8e0404c8  lw          $a0, 0x4C8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1224)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x123A30u;
    if (runtime->hasFunction(0x123A30u)) {
        auto targetFn = runtime->lookupFunction(0x123A30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F4CD4u; }
        if (ctx->pc != 0x2F4CD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceMcUnformat_0x123a30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F4CD4u; }
        if (ctx->pc != 0x2F4CD4u) { return; }
    }
    ctx->pc = 0x2F4CD4u;
label_2f4cd4:
    // 0x2f4cd4: 0xafa20024  sw          $v0, 0x24($sp)
    ctx->pc = 0x2f4cd4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 2));
    // 0x2f4cd8: 0x8fa20024  lw          $v0, 0x24($sp)
    ctx->pc = 0x2f4cd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x2f4cdc: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2F4CDCu;
    {
        const bool branch_taken_0x2f4cdc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F4CE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F4CDCu;
            // 0x2f4ce0: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f4cdc) {
            ctx->pc = 0x2F4CF4u;
            goto label_2f4cf4;
        }
    }
    ctx->pc = 0x2F4CE4u;
    // 0x2f4ce4: 0x8e020058  lw          $v0, 0x58($s0)
    ctx->pc = 0x2f4ce4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
    // 0x2f4ce8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2f4ce8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2f4cec: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x2F4CECu;
    {
        const bool branch_taken_0x2f4cec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F4CF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F4CECu;
            // 0x2f4cf0: 0xae020058  sw          $v0, 0x58($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 88), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f4cec) {
            ctx->pc = 0x2F4D5Cu;
            goto label_2f4d5c;
        }
    }
    ctx->pc = 0x2F4CF4u;
label_2f4cf4:
    // 0x2f4cf4: 0x27a50024  addiu       $a1, $sp, 0x24
    ctx->pc = 0x2f4cf4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 36));
    // 0x2f4cf8: 0xc048b7a  jal         func_122DE8
    ctx->pc = 0x2F4CF8u;
    SET_GPR_U32(ctx, 31, 0x2F4D00u);
    ctx->pc = 0x2F4CFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F4CF8u;
            // 0x2f4cfc: 0x27a6002c  addiu       $a2, $sp, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
        ctx->in_delay_slot = false;
    ctx->pc = 0x122DE8u;
    if (runtime->hasFunction(0x122DE8u)) {
        auto targetFn = runtime->lookupFunction(0x122DE8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F4D00u; }
        if (ctx->pc != 0x2F4D00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceMcSync_0x122de8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F4D00u; }
        if (ctx->pc != 0x2F4D00u) { return; }
    }
    ctx->pc = 0x2F4D00u;
label_2f4d00:
    // 0x2f4d00: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x2F4D00u;
    {
        const bool branch_taken_0x2f4d00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f4d00) {
            ctx->pc = 0x2F4D5Cu;
            goto label_2f4d5c;
        }
    }
    ctx->pc = 0x2F4D08u;
label_2f4d08:
    // 0x2f4d08: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x2f4d08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f4d0c: 0x27a6002c  addiu       $a2, $sp, 0x2C
    ctx->pc = 0x2f4d0cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
    // 0x2f4d10: 0xc048b7a  jal         func_122DE8
    ctx->pc = 0x2F4D10u;
    SET_GPR_U32(ctx, 31, 0x2F4D18u);
    ctx->pc = 0x2F4D14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F4D10u;
            // 0x2f4d14: 0x27a50028  addiu       $a1, $sp, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 40));
        ctx->in_delay_slot = false;
    ctx->pc = 0x122DE8u;
    if (runtime->hasFunction(0x122DE8u)) {
        auto targetFn = runtime->lookupFunction(0x122DE8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F4D18u; }
        if (ctx->pc != 0x2F4D18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceMcSync_0x122de8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F4D18u; }
        if (ctx->pc != 0x2F4D18u) { return; }
    }
    ctx->pc = 0x2F4D18u;
label_2f4d18:
    // 0x2f4d18: 0xafa20024  sw          $v0, 0x24($sp)
    ctx->pc = 0x2f4d18u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 2));
    // 0x2f4d1c: 0x8fa20024  lw          $v0, 0x24($sp)
    ctx->pc = 0x2f4d1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x2f4d20: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x2F4D20u;
    {
        const bool branch_taken_0x2f4d20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f4d20) {
            ctx->pc = 0x2F4D5Cu;
            goto label_2f4d5c;
        }
    }
    ctx->pc = 0x2F4D28u;
    // 0x2f4d28: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2f4d28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2f4d2c: 0x24020011  addiu       $v0, $zero, 0x11
    ctx->pc = 0x2f4d2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x2f4d30: 0x1462000a  bne         $v1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x2F4D30u;
    {
        const bool branch_taken_0x2f4d30 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2f4d30) {
            ctx->pc = 0x2F4D5Cu;
            goto label_2f4d5c;
        }
    }
    ctx->pc = 0x2F4D38u;
    // 0x2f4d38: 0x8fa2002c  lw          $v0, 0x2C($sp)
    ctx->pc = 0x2f4d38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x2f4d3c: 0x4400007  bltz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2F4D3Cu;
    {
        const bool branch_taken_0x2f4d3c = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x2f4d3c) {
            ctx->pc = 0x2F4D5Cu;
            goto label_2f4d5c;
        }
    }
    ctx->pc = 0x2F4D44u;
    // 0x2f4d44: 0x8e0304c8  lw          $v1, 0x4C8($s0)
    ctx->pc = 0x2f4d44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1224)));
    // 0x2f4d48: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2f4d48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f4d4c: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x2f4d4cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x2f4d50: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x2f4d50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x2f4d54: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2F4D54u;
    {
        const bool branch_taken_0x2f4d54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F4D58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F4D54u;
            // 0x2f4d58: 0xac600d64  sw          $zero, 0xD64($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 3428), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f4d54) {
            ctx->pc = 0x2F4D60u;
            goto label_2f4d60;
        }
    }
    ctx->pc = 0x2F4D5Cu;
label_2f4d5c:
    // 0x2f4d5c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2f4d5cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f4d60:
    // 0x2f4d60: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2f4d60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2f4d64: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2f4d64u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2f4d68: 0x3e00008  jr          $ra
    ctx->pc = 0x2F4D68u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F4D6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F4D68u;
            // 0x2f4d6c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2F4D70u;
}
