#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: CheckBitFlagMenu__Fi
// Address: 0x232b10 - 0x232b50
void CheckBitFlagMenu__Fi_0x232b10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("CheckBitFlagMenu__Fi_0x232b10");
#endif

    switch (ctx->pc) {
        case 0x232b24u: goto label_232b24;
        case 0x232b34u: goto label_232b34;
        default: break;
    }

    ctx->pc = 0x232b10u;

    // 0x232b10: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x232b10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x232b14: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x232b14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x232b18: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x232b18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x232b1c: 0xc064220  jal         func_190880
    ctx->pc = 0x232B1Cu;
    SET_GPR_U32(ctx, 31, 0x232B24u);
    ctx->pc = 0x232B20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x232B1Cu;
            // 0x232b20: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x190880u;
    if (runtime->hasFunction(0x190880u)) {
        auto targetFn = runtime->lookupFunction(0x190880u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x232B24u; }
        if (ctx->pc != 0x232B24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetSaveData__Fv_0x190880(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x232B24u; }
        if (ctx->pc != 0x232B24u) { return; }
    }
    ctx->pc = 0x232B24u;
label_232b24:
    // 0x232b24: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x232B24u;
    {
        const bool branch_taken_0x232b24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x232B28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x232B24u;
            // 0x232b28: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x232b24) {
            ctx->pc = 0x232B3Cu;
            goto label_232b3c;
        }
    }
    ctx->pc = 0x232B2Cu;
    // 0x232b2c: 0xc0bd920  jal         func_2F6480
    ctx->pc = 0x232B2Cu;
    SET_GPR_U32(ctx, 31, 0x232B34u);
    ctx->pc = 0x232B30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x232B2Cu;
            // 0x232b30: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F6480u;
    if (runtime->hasFunction(0x2F6480u)) {
        auto targetFn = runtime->lookupFunction(0x2F6480u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x232B34u; }
        if (ctx->pc != 0x232B34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetBitFlag__9CSaveDataFi_0x2f6480(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x232B34u; }
        if (ctx->pc != 0x232B34u) { return; }
    }
    ctx->pc = 0x232B34u;
label_232b34:
    // 0x232b34: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x232B34u;
    {
        const bool branch_taken_0x232b34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x232B38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x232B34u;
            // 0x232b38: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x232b34) {
            ctx->pc = 0x232B44u;
            goto label_232b44;
        }
    }
    ctx->pc = 0x232B3Cu;
label_232b3c:
    // 0x232b3c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x232b3cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x232b40: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x232b40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_232b44:
    // 0x232b44: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x232b44u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x232b48: 0x3e00008  jr          $ra
    ctx->pc = 0x232B48u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x232B4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x232B48u;
            // 0x232b4c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x232B50u;
}
