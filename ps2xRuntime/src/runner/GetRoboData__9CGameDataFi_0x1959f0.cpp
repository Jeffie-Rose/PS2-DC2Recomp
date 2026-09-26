#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetRoboData__9CGameDataFi
// Address: 0x1959f0 - 0x195a60
void GetRoboData__9CGameDataFi_0x1959f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetRoboData__9CGameDataFi_0x1959f0");
#endif

    switch (ctx->pc) {
        case 0x195a04u: goto label_195a04;
        default: break;
    }

    ctx->pc = 0x1959f0u;

    // 0x1959f0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1959f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1959f4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1959f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1959f8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1959f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1959fc: 0xc0655dc  jal         func_195770
    ctx->pc = 0x1959FCu;
    SET_GPR_U32(ctx, 31, 0x195A04u);
    ctx->pc = 0x195A00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1959FCu;
            // 0x195a00: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195770u;
    if (runtime->hasFunction(0x195770u)) {
        auto targetFn = runtime->lookupFunction(0x195770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x195A04u; }
        if (ctx->pc != 0x195A04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetCommonData__9CGameDataFi_0x195770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x195A04u; }
        if (ctx->pc != 0x195A04u) { return; }
    }
    ctx->pc = 0x195A04u;
label_195a04:
    // 0x195a04: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x195A04u;
    {
        const bool branch_taken_0x195a04 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x195a04) {
            ctx->pc = 0x195A14u;
            goto label_195a14;
        }
    }
    ctx->pc = 0x195A0Cu;
    // 0x195a0c: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x195A0Cu;
    {
        const bool branch_taken_0x195a0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x195A10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x195A0Cu;
            // 0x195a10: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x195a0c) {
            ctx->pc = 0x195A50u;
            goto label_195a50;
        }
    }
    ctx->pc = 0x195A14u;
label_195a14:
    // 0x195a14: 0x84430004  lh          $v1, 0x4($v0)
    ctx->pc = 0x195a14u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x195a18: 0x9602002c  lhu         $v0, 0x2C($s0)
    ctx->pc = 0x195a18u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x195a1c: 0x62082a  slt         $at, $v1, $v0
    ctx->pc = 0x195a1cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x195a20: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x195A20u;
    {
        const bool branch_taken_0x195a20 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x195A24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x195A20u;
            // 0x195a24: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x195a20) {
            ctx->pc = 0x195A30u;
            goto label_195a30;
        }
    }
    ctx->pc = 0x195A28u;
    // 0x195a28: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x195A28u;
    {
        const bool branch_taken_0x195a28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x195A2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x195A28u;
            // 0x195a2c: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x195a28) {
            ctx->pc = 0x195A54u;
            goto label_195a54;
        }
    }
    ctx->pc = 0x195A30u;
label_195a30:
    // 0x195a30: 0x8e040018  lw          $a0, 0x18($s0)
    ctx->pc = 0x195a30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x195a34: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x195A34u;
    {
        const bool branch_taken_0x195a34 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x195A38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x195A34u;
            // 0x195a38: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x195a34) {
            ctx->pc = 0x195A50u;
            goto label_195a50;
        }
    }
    ctx->pc = 0x195A3Cu;
    // 0x195a3c: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x195a3cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x195a40: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x195a40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x195a44: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x195a44u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x195a48: 0x10000001  b           . + 4 + (0x1 << 2)
    ctx->pc = 0x195A48u;
    {
        const bool branch_taken_0x195a48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x195A4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x195A48u;
            // 0x195a4c: 0x821021  addu        $v0, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x195a48) {
            ctx->pc = 0x195A50u;
            goto label_195a50;
        }
    }
    ctx->pc = 0x195A50u;
label_195a50:
    // 0x195a50: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x195a50u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_195a54:
    // 0x195a54: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x195a54u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x195a58: 0x3e00008  jr          $ra
    ctx->pc = 0x195A58u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x195A5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x195A58u;
            // 0x195a5c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x195A60u;
}
