#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: Stop__6CSoundFi
// Address: 0x18a280 - 0x18a2bc
void Stop__6CSoundFi_0x18a280(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Stop__6CSoundFi_0x18a280");
#endif

    switch (ctx->pc) {
        case 0x18a29cu: goto label_18a29c;
        case 0x18a2acu: goto label_18a2ac;
        default: break;
    }

    ctx->pc = 0x18a280u;

    // 0x18a280: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x18a280u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x18a284: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x18a284u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x18a288: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x18a288u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x18a28c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x18a28cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18a290: 0x26040020  addiu       $a0, $s0, 0x20
    ctx->pc = 0x18a290u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x18a294: 0xc062c94  jal         func_18B250
    ctx->pc = 0x18A294u;
    SET_GPR_U32(ctx, 31, 0x18A29Cu);
    ctx->pc = 0x18A298u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18A294u;
            // 0x18a298: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18B250u;
    if (runtime->hasFunction(0x18B250u)) {
        auto targetFn = runtime->lookupFunction(0x18B250u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18A29Cu; }
        if (ctx->pc != 0x18A29Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ezMidi__Fii_0x18b250(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18A29Cu; }
        if (ctx->pc != 0x18A29Cu) { return; }
    }
    ctx->pc = 0x18A29Cu;
label_18a29c:
    // 0x18a29c: 0x3c040036  lui         $a0, 0x36
    ctx->pc = 0x18a29cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)54 << 16));
    // 0x18a2a0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x18a2a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18a2a4: 0xc04a0d2  jal         func_128348
    ctx->pc = 0x18A2A4u;
    SET_GPR_U32(ctx, 31, 0x18A2ACu);
    ctx->pc = 0x18A2A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18A2A4u;
            // 0x18a2a8: 0x24844810  addiu       $a0, $a0, 0x4810 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18448));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128348u;
    if (runtime->hasFunction(0x128348u)) {
        auto targetFn = runtime->lookupFunction(0x128348u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18A2ACu; }
        if (ctx->pc != 0x18A2ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        printf_0x128348(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18A2ACu; }
        if (ctx->pc != 0x18A2ACu) { return; }
    }
    ctx->pc = 0x18A2ACu;
label_18a2ac:
    // 0x18a2ac: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x18a2acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18a2b0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x18a2b0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18a2b4: 0x3e00008  jr          $ra
    ctx->pc = 0x18A2B4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18A2B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18A2B4u;
            // 0x18a2b8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x18A2BCu;
}
