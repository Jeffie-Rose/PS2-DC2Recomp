#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetLocalFlag__Fi
// Address: 0x260fc0 - 0x261034
void GetLocalFlag__Fi_0x260fc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetLocalFlag__Fi_0x260fc0");
#endif

    ctx->pc = 0x260fc0u;

    // 0x260fc0: 0x4810003  bgez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x260FC0u;
    {
        const bool branch_taken_0x260fc0 = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x260FC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x260FC0u;
            // 0x260fc4: 0x41943  sra         $v1, $a0, 5 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 4), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x260fc0) {
            ctx->pc = 0x260FD0u;
            goto label_260fd0;
        }
    }
    ctx->pc = 0x260FC8u;
    // 0x260fc8: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x260FC8u;
    {
        const bool branch_taken_0x260fc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x260FCCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x260FC8u;
            // 0x260fcc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x260fc8) {
            ctx->pc = 0x26102Cu;
            goto label_26102c;
        }
    }
    ctx->pc = 0x260FD0u;
label_260fd0:
    // 0x260fd0: 0x4810004  bgez        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x260FD0u;
    {
        const bool branch_taken_0x260fd0 = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x260FD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x260FD0u;
            // 0x260fd4: 0x28620040  slti        $v0, $v1, 0x40 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)64) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x260fd0) {
            ctx->pc = 0x260FE4u;
            goto label_260fe4;
        }
    }
    ctx->pc = 0x260FD8u;
    // 0x260fd8: 0x2482001f  addiu       $v0, $a0, 0x1F
    ctx->pc = 0x260fd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 31));
    // 0x260fdc: 0x21943  sra         $v1, $v0, 5
    ctx->pc = 0x260fdcu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 5));
    // 0x260fe0: 0x28620040  slti        $v0, $v1, 0x40
    ctx->pc = 0x260fe0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)64) ? 1 : 0);
label_260fe4:
    // 0x260fe4: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x260FE4u;
    {
        const bool branch_taken_0x260fe4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x260FE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x260FE4u;
            // 0x260fe8: 0x3085001f  andi        $a1, $a0, 0x1F (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)31);
        ctx->in_delay_slot = false;
        if (branch_taken_0x260fe4) {
            ctx->pc = 0x260FF4u;
            goto label_260ff4;
        }
    }
    ctx->pc = 0x260FECu;
    // 0x260fec: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x260FECu;
    {
        const bool branch_taken_0x260fec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x260FF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x260FECu;
            // 0x260ff0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x260fec) {
            ctx->pc = 0x26102Cu;
            goto label_26102c;
        }
    }
    ctx->pc = 0x260FF4u;
label_260ff4:
    // 0x260ff4: 0x4810005  bgez        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x260FF4u;
    {
        const bool branch_taken_0x260ff4 = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x260FF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x260FF4u;
            // 0x260ff8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x260ff4) {
            ctx->pc = 0x26100Cu;
            goto label_26100c;
        }
    }
    ctx->pc = 0x260FFCu;
    // 0x260ffc: 0x10a00002  beqz        $a1, . + 4 + (0x2 << 2)
    ctx->pc = 0x260FFCu;
    {
        const bool branch_taken_0x260ffc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x260ffc) {
            ctx->pc = 0x261008u;
            goto label_261008;
        }
    }
    ctx->pc = 0x261004u;
    // 0x261004: 0x24a5ffe0  addiu       $a1, $a1, -0x20
    ctx->pc = 0x261004u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967264));
label_261008:
    // 0x261008: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x261008u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_26100c:
    // 0x26100c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x26100cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x261010: 0xa22004  sllv        $a0, $v0, $a1
    ctx->pc = 0x261010u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 5) & 0x1F));
    // 0x261014: 0x3c0201ed  lui         $v0, 0x1ED
    ctx->pc = 0x261014u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)493 << 16));
    // 0x261018: 0x2442eec0  addiu       $v0, $v0, -0x1140
    ctx->pc = 0x261018u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962880));
    // 0x26101c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x26101cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x261020: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x261020u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x261024: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x261024u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x261028: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x261028u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_26102c:
    // 0x26102c: 0x3e00008  jr          $ra
    ctx->pc = 0x26102Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x261034u;
}
