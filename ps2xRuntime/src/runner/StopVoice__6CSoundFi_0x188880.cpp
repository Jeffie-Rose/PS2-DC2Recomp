#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: StopVoice__6CSoundFi
// Address: 0x188880 - 0x1888c8
void StopVoice__6CSoundFi_0x188880(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("StopVoice__6CSoundFi_0x188880");
#endif

    switch (ctx->pc) {
        case 0x1888a8u: goto label_1888a8;
        case 0x1888b8u: goto label_1888b8;
        default: break;
    }

    ctx->pc = 0x188880u;

    // 0x188880: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x188880u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x188884: 0x3c0200ff  lui         $v0, 0xFF
    ctx->pc = 0x188884u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)255 << 16));
    // 0x188888: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x188888u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x18888c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x18888cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x188890: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x188890u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x188894: 0x3447ffff  ori         $a3, $v0, 0xFFFF
    ctx->pc = 0x188894u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x188898: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x188898u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18889c: 0x36061600  ori         $a2, $s0, 0x1600
    ctx->pc = 0x18889cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)5632);
    // 0x1888a0: 0xc046454  jal         func_119150
    ctx->pc = 0x1888A0u;
    SET_GPR_U32(ctx, 31, 0x1888A8u);
    ctx->pc = 0x1888A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1888A0u;
            // 0x1888a4: 0x34058030  ori         $a1, $zero, 0x8030 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32816);
        ctx->in_delay_slot = false;
    ctx->pc = 0x119150u;
    if (runtime->hasFunction(0x119150u)) {
        auto targetFn = runtime->lookupFunction(0x119150u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1888A8u; }
        if (ctx->pc != 0x1888A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceSdRemote_0x119150(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1888A8u; }
        if (ctx->pc != 0x1888A8u) { return; }
    }
    ctx->pc = 0x1888A8u;
label_1888a8:
    // 0x1888a8: 0x3c040036  lui         $a0, 0x36
    ctx->pc = 0x1888a8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)54 << 16));
    // 0x1888ac: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1888acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1888b0: 0xc04a0d2  jal         func_128348
    ctx->pc = 0x1888B0u;
    SET_GPR_U32(ctx, 31, 0x1888B8u);
    ctx->pc = 0x1888B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1888B0u;
            // 0x1888b4: 0x248444b0  addiu       $a0, $a0, 0x44B0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17584));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128348u;
    if (runtime->hasFunction(0x128348u)) {
        auto targetFn = runtime->lookupFunction(0x128348u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1888B8u; }
        if (ctx->pc != 0x1888B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        printf_0x128348(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1888B8u; }
        if (ctx->pc != 0x1888B8u) { return; }
    }
    ctx->pc = 0x1888B8u;
label_1888b8:
    // 0x1888b8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1888b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1888bc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1888bcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1888c0: 0x3e00008  jr          $ra
    ctx->pc = 0x1888C0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1888C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1888C0u;
            // 0x1888c4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1888C8u;
}
