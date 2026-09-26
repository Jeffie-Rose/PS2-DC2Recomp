#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetGuardData__9CGameDataFi
// Address: 0x195b10 - 0x195b7c
void GetGuardData__9CGameDataFi_0x195b10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetGuardData__9CGameDataFi_0x195b10");
#endif

    switch (ctx->pc) {
        case 0x195b24u: goto label_195b24;
        default: break;
    }

    ctx->pc = 0x195b10u;

    // 0x195b10: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x195b10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x195b14: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x195b14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x195b18: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x195b18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x195b1c: 0xc0655dc  jal         func_195770
    ctx->pc = 0x195B1Cu;
    SET_GPR_U32(ctx, 31, 0x195B24u);
    ctx->pc = 0x195B20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x195B1Cu;
            // 0x195b20: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195770u;
    if (runtime->hasFunction(0x195770u)) {
        auto targetFn = runtime->lookupFunction(0x195770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x195B24u; }
        if (ctx->pc != 0x195B24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetCommonData__9CGameDataFi_0x195770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x195B24u; }
        if (ctx->pc != 0x195B24u) { return; }
    }
    ctx->pc = 0x195B24u;
label_195b24:
    // 0x195b24: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x195B24u;
    {
        const bool branch_taken_0x195b24 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x195b24) {
            ctx->pc = 0x195B34u;
            goto label_195b34;
        }
    }
    ctx->pc = 0x195B2Cu;
    // 0x195b2c: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x195B2Cu;
    {
        const bool branch_taken_0x195b2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x195B30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x195B2Cu;
            // 0x195b30: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x195b2c) {
            ctx->pc = 0x195B6Cu;
            goto label_195b6c;
        }
    }
    ctx->pc = 0x195B34u;
label_195b34:
    // 0x195b34: 0x84420004  lh          $v0, 0x4($v0)
    ctx->pc = 0x195b34u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x195b38: 0x96030028  lhu         $v1, 0x28($s0)
    ctx->pc = 0x195b38u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x195b3c: 0x43082a  slt         $at, $v0, $v1
    ctx->pc = 0x195b3cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x195b40: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x195B40u;
    {
        const bool branch_taken_0x195b40 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x195b40) {
            ctx->pc = 0x195B50u;
            goto label_195b50;
        }
    }
    ctx->pc = 0x195B48u;
    // 0x195b48: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x195B48u;
    {
        const bool branch_taken_0x195b48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x195B4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x195B48u;
            // 0x195b4c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x195b48) {
            ctx->pc = 0x195B6Cu;
            goto label_195b6c;
        }
    }
    ctx->pc = 0x195B50u;
label_195b50:
    // 0x195b50: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x195b50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x195b54: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x195B54u;
    {
        const bool branch_taken_0x195b54 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x195b54) {
            ctx->pc = 0x195B68u;
            goto label_195b68;
        }
    }
    ctx->pc = 0x195B5Cu;
    // 0x195b5c: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x195b5cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x195b60: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x195B60u;
    {
        const bool branch_taken_0x195b60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x195B64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x195B60u;
            // 0x195b64: 0x621021  addu        $v0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x195b60) {
            ctx->pc = 0x195B6Cu;
            goto label_195b6c;
        }
    }
    ctx->pc = 0x195B68u;
label_195b68:
    // 0x195b68: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x195b68u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_195b6c:
    // 0x195b6c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x195b6cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x195b70: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x195b70u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x195b74: 0x3e00008  jr          $ra
    ctx->pc = 0x195B74u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x195B78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x195B74u;
            // 0x195b78: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x195B7Cu;
}
