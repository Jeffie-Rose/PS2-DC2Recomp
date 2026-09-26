#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: InitHaveData__12CMenuKeyFuncFv
// Address: 0x23ea00 - 0x23ea4c
void InitHaveData__12CMenuKeyFuncFv_0x23ea00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("InitHaveData__12CMenuKeyFuncFv_0x23ea00");
#endif

    switch (ctx->pc) {
        case 0x23ea18u: goto label_23ea18;
        case 0x23ea3cu: goto label_23ea3c;
        default: break;
    }

    ctx->pc = 0x23ea00u;

    // 0x23ea00: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x23ea00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x23ea04: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x23ea04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x23ea08: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x23ea08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x23ea0c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x23ea0cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23ea10: 0xc065c30  jal         func_1970C0
    ctx->pc = 0x23EA10u;
    SET_GPR_U32(ctx, 31, 0x23EA18u);
    ctx->pc = 0x23EA14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23EA10u;
            // 0x23ea14: 0x260400c0  addiu       $a0, $s0, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 192));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1970C0u;
    if (runtime->hasFunction(0x1970C0u)) {
        auto targetFn = runtime->lookupFunction(0x1970C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23EA18u; }
        if (ctx->pc != 0x23EA18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Init__13CGameDataUsedFv_0x1970c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23EA18u; }
        if (ctx->pc != 0x23EA18u) { return; }
    }
    ctx->pc = 0x23EA18u;
label_23ea18:
    // 0x23ea18: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x23ea18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x23ea1c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x23ea1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23ea20: 0xa602012e  sh          $v0, 0x12E($s0)
    ctx->pc = 0x23ea20u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 302), (uint16_t)GPR_U32(ctx, 2));
    // 0x23ea24: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x23ea24u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23ea28: 0xa6000130  sh          $zero, 0x130($s0)
    ctx->pc = 0x23ea28u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 304), (uint16_t)GPR_U32(ctx, 0));
    // 0x23ea2c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x23ea2cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x23ea30: 0xa6020132  sh          $v0, 0x132($s0)
    ctx->pc = 0x23ea30u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 306), (uint16_t)GPR_U32(ctx, 2));
    // 0x23ea34: 0xc08fa94  jal         func_23EA50
    ctx->pc = 0x23EA34u;
    SET_GPR_U32(ctx, 31, 0x23EA3Cu);
    ctx->pc = 0x23EA38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23EA34u;
            // 0x23ea38: 0xa600012c  sh          $zero, 0x12C($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 300), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23EA50u;
    if (runtime->hasFunction(0x23EA50u)) {
        auto targetFn = runtime->lookupFunction(0x23EA50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23EA3Cu; }
        if (ctx->pc != 0x23EA3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetHaveItemInfo__12CMenuKeyFuncFii_0x23ea50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23EA3Cu; }
        if (ctx->pc != 0x23EA3Cu) { return; }
    }
    ctx->pc = 0x23EA3Cu;
label_23ea3c:
    // 0x23ea3c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x23ea3cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23ea40: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x23ea40u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23ea44: 0x3e00008  jr          $ra
    ctx->pc = 0x23EA44u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23EA48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23EA44u;
            // 0x23ea48: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x23EA4Cu;
}
