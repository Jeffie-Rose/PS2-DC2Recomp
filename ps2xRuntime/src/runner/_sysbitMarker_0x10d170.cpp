#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _sysbitMarker
// Address: 0x10d170 - 0x10d1b4
void _sysbitMarker_0x10d170(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("_sysbitMarker_0x10d170");
#endif

    switch (ctx->pc) {
        case 0x10d18cu: goto label_10d18c;
        case 0x10d19cu: goto label_10d19c;
        default: break;
    }

    ctx->pc = 0x10d170u;

    // 0x10d170: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x10d170u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x10d174: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x10d174u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x10d178: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x10d178u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x10d17c: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x10d17cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x10d180: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x10d180u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x10d184: 0xc04341a  jal         func_10D068
    ctx->pc = 0x10D184u;
    SET_GPR_U32(ctx, 31, 0x10D18Cu);
    ctx->pc = 0x10D188u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10D184u;
            // 0x10d188: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10D068u;
    if (runtime->hasFunction(0x10D068u)) {
        auto targetFn = runtime->lookupFunction(0x10D068u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10D18Cu; }
        if (ctx->pc != 0x10D18Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _sysbitNext_0x10d068(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10D18Cu; }
        if (ctx->pc != 0x10D18Cu) { return; }
    }
    ctx->pc = 0x10D18Cu;
label_10d18c:
    // 0x10d18c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x10d18cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10d190: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10d190u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10d194: 0xc043422  jal         func_10D088
    ctx->pc = 0x10D194u;
    SET_GPR_U32(ctx, 31, 0x10D19Cu);
    ctx->pc = 0x10D198u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10D194u;
            // 0x10d198: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10D088u;
    if (runtime->hasFunction(0x10D088u)) {
        auto targetFn = runtime->lookupFunction(0x10D088u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10D19Cu; }
        if (ctx->pc != 0x10D19Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _sysbitFlush_0x10d088(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10D19Cu; }
        if (ctx->pc != 0x10D19Cu) { return; }
    }
    ctx->pc = 0x10D19Cu;
label_10d19c:
    // 0x10d19c: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x10d19cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10d1a0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x10d1a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x10d1a4: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x10d1a4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10d1a8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x10d1a8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10d1ac: 0x3e00008  jr          $ra
    ctx->pc = 0x10D1ACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10D1B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10D1ACu;
            // 0x10d1b0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x10D1B4u;
}
