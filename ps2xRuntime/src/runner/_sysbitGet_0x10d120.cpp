#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _sysbitGet
// Address: 0x10d120 - 0x10d16c
void _sysbitGet_0x10d120(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("_sysbitGet_0x10d120");
#endif

    switch (ctx->pc) {
        case 0x10d140u: goto label_10d140;
        case 0x10d150u: goto label_10d150;
        default: break;
    }

    ctx->pc = 0x10d120u;

    // 0x10d120: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x10d120u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x10d124: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x10d124u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x10d128: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x10d128u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x10d12c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x10d12cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10d130: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x10d130u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x10d134: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x10d134u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x10d138: 0xc04341a  jal         func_10D068
    ctx->pc = 0x10D138u;
    SET_GPR_U32(ctx, 31, 0x10D140u);
    ctx->pc = 0x10D13Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10D138u;
            // 0x10d13c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10D068u;
    if (runtime->hasFunction(0x10D068u)) {
        auto targetFn = runtime->lookupFunction(0x10D068u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10D140u; }
        if (ctx->pc != 0x10D140u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _sysbitNext_0x10d068(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10D140u; }
        if (ctx->pc != 0x10D140u) { return; }
    }
    ctx->pc = 0x10D140u;
label_10d140:
    // 0x10d140: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x10d140u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10d144: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10d144u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10d148: 0xc043422  jal         func_10D088
    ctx->pc = 0x10D148u;
    SET_GPR_U32(ctx, 31, 0x10D150u);
    ctx->pc = 0x10D14Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10D148u;
            // 0x10d14c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10D088u;
    if (runtime->hasFunction(0x10D088u)) {
        auto targetFn = runtime->lookupFunction(0x10D088u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10D150u; }
        if (ctx->pc != 0x10D150u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _sysbitFlush_0x10d088(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10D150u; }
        if (ctx->pc != 0x10D150u) { return; }
    }
    ctx->pc = 0x10D150u;
label_10d150:
    // 0x10d150: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x10d150u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10d154: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x10d154u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x10d158: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x10d158u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x10d15c: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x10d15cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10d160: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x10d160u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10d164: 0x3e00008  jr          $ra
    ctx->pc = 0x10D164u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10D168u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10D164u;
            // 0x10d168: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x10D16Cu;
}
