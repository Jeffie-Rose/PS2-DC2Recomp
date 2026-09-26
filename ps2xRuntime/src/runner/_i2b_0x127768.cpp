#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _i2b
// Address: 0x127768 - 0x1277a0
void _i2b_0x127768(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("_i2b_0x127768");
#endif

    switch (ctx->pc) {
        case 0x127780u: goto label_127780;
        default: break;
    }

    ctx->pc = 0x127768u;

    // 0x127768: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x127768u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x12776c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x12776cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x127770: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x127770u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x127774: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x127774u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x127778: 0xc049cba  jal         func_1272E8
    ctx->pc = 0x127778u;
    SET_GPR_U32(ctx, 31, 0x127780u);
    ctx->pc = 0x12777Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x127778u;
            // 0x12777c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1272E8u;
    if (runtime->hasFunction(0x1272E8u)) {
        auto targetFn = runtime->lookupFunction(0x1272E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x127780u; }
        if (ctx->pc != 0x127780u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2__Balloc_0x1272e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x127780u; }
        if (ctx->pc != 0x127780u) { return; }
    }
    ctx->pc = 0x127780u;
label_127780:
    // 0x127780: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x127780u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x127784: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x127784u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x127788: 0xac700014  sw          $s0, 0x14($v1)
    ctx->pc = 0x127788u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 16));
    // 0x12778c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x12778cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x127790: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x127790u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x127794: 0xac640010  sw          $a0, 0x10($v1)
    ctx->pc = 0x127794u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 4));
    // 0x127798: 0x3e00008  jr          $ra
    ctx->pc = 0x127798u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12779Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x127798u;
            // 0x12779c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1277A0u;
}
