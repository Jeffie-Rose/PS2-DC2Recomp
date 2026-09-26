#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: CheckShortFlagMenu__Fi
// Address: 0x232b50 - 0x232b94
void CheckShortFlagMenu__Fi_0x232b50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("CheckShortFlagMenu__Fi_0x232b50");
#endif

    switch (ctx->pc) {
        case 0x232b64u: goto label_232b64;
        case 0x232b74u: goto label_232b74;
        default: break;
    }

    ctx->pc = 0x232b50u;

    // 0x232b50: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x232b50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x232b54: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x232b54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x232b58: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x232b58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x232b5c: 0xc064220  jal         func_190880
    ctx->pc = 0x232B5Cu;
    SET_GPR_U32(ctx, 31, 0x232B64u);
    ctx->pc = 0x232B60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x232B5Cu;
            // 0x232b60: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x190880u;
    if (runtime->hasFunction(0x190880u)) {
        auto targetFn = runtime->lookupFunction(0x190880u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x232B64u; }
        if (ctx->pc != 0x232B64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetSaveData__Fv_0x190880(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x232B64u; }
        if (ctx->pc != 0x232B64u) { return; }
    }
    ctx->pc = 0x232B64u;
label_232b64:
    // 0x232b64: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x232B64u;
    {
        const bool branch_taken_0x232b64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x232B68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x232B64u;
            // 0x232b68: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x232b64) {
            ctx->pc = 0x232B80u;
            goto label_232b80;
        }
    }
    ctx->pc = 0x232B6Cu;
    // 0x232b6c: 0xc0bd950  jal         func_2F6540
    ctx->pc = 0x232B6Cu;
    SET_GPR_U32(ctx, 31, 0x232B74u);
    ctx->pc = 0x232B70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x232B6Cu;
            // 0x232b70: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F6540u;
    if (runtime->hasFunction(0x2F6540u)) {
        auto targetFn = runtime->lookupFunction(0x2F6540u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x232B74u; }
        if (ctx->pc != 0x232B74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetShortFlag__9CSaveDataFi_0x2f6540(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x232B74u; }
        if (ctx->pc != 0x232B74u) { return; }
    }
    ctx->pc = 0x232B74u;
label_232b74:
    // 0x232b74: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x232b74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x232b78: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x232B78u;
    {
        const bool branch_taken_0x232b78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x232B7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x232B78u;
            // 0x232b7c: 0x2143f  dsra32      $v0, $v0, 16 (Delay Slot)
        SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x232b78) {
            ctx->pc = 0x232B84u;
            goto label_232b84;
        }
    }
    ctx->pc = 0x232B80u;
label_232b80:
    // 0x232b80: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x232b80u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_232b84:
    // 0x232b84: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x232b84u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x232b88: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x232b88u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x232b8c: 0x3e00008  jr          $ra
    ctx->pc = 0x232B8Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x232B90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x232B8Cu;
            // 0x232b90: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x232B94u;
}
