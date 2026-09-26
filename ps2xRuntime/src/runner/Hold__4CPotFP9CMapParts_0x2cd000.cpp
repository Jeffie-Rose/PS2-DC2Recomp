#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: Hold__4CPotFP9CMapParts
// Address: 0x2cd000 - 0x2cd048
void Hold__4CPotFP9CMapParts_0x2cd000(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Hold__4CPotFP9CMapParts_0x2cd000");
#endif

    switch (ctx->pc) {
        case 0x2cd020u: goto label_2cd020;
        case 0x2cd034u: goto label_2cd034;
        default: break;
    }

    ctx->pc = 0x2cd000u;

    // 0x2cd000: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2cd000u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2cd004: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2cd004u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2cd008: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2cd008u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2cd00c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2cd00cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2cd010: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2cd010u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cd014: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x2cd014u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cd018: 0xc0b3414  jal         func_2CD050
    ctx->pc = 0x2CD018u;
    SET_GPR_U32(ctx, 31, 0x2CD020u);
    ctx->pc = 0x2CD01Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CD018u;
            // 0x2cd01c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2CD050u;
    if (runtime->hasFunction(0x2CD050u)) {
        auto targetFn = runtime->lookupFunction(0x2CD050u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CD020u; }
        if (ctx->pc != 0x2CD020u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Init__4CPotFi_0x2cd050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CD020u; }
        if (ctx->pc != 0x2CD020u) { return; }
    }
    ctx->pc = 0x2CD020u;
label_2cd020:
    // 0x2cd020: 0xae300004  sw          $s0, 0x4($s1)
    ctx->pc = 0x2cd020u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 16));
    // 0x2cd024: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2cd024u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2cd028: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x2cd028u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x2cd02c: 0xc0b3208  jal         func_2CC820
    ctx->pc = 0x2CD02Cu;
    SET_GPR_U32(ctx, 31, 0x2CD034u);
    ctx->pc = 0x2CD030u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CD02Cu;
            // 0x2cd030: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2CC820u;
    if (runtime->hasFunction(0x2CC820u)) {
        auto targetFn = runtime->lookupFunction(0x2CC820u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CD034u; }
        if (ctx->pc != 0x2CD034u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        HoldStep__4CPotFv_0x2cc820(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CD034u; }
        if (ctx->pc != 0x2CD034u) { return; }
    }
    ctx->pc = 0x2CD034u;
label_2cd034:
    // 0x2cd034: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2cd034u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2cd038: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2cd038u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2cd03c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2cd03cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2cd040: 0x3e00008  jr          $ra
    ctx->pc = 0x2CD040u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CD044u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CD040u;
            // 0x2cd044: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2CD048u;
}
