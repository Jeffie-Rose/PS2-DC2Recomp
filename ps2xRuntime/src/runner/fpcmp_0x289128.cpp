#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: fpcmp
// Address: 0x289128 - 0x289174
void fpcmp_0x289128(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("fpcmp_0x289128");
#endif

    switch (ctx->pc) {
        case 0x289148u: goto label_289148;
        case 0x289158u: goto label_289158;
        case 0x289164u: goto label_289164;
        default: break;
    }

    ctx->pc = 0x289128u;

    // 0x289128: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x289128u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x28912c: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x28912cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x289130: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x289130u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x289134: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x289134u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x289138: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x289138u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28913c: 0xe7ac0020  swc1        $f12, 0x20($sp)
    ctx->pc = 0x28913cu;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x289140: 0xc0a224c  jal         func_288930
    ctx->pc = 0x289140u;
    SET_GPR_U32(ctx, 31, 0x289148u);
    ctx->pc = 0x289144u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x289140u;
            // 0x289144: 0xe7ad0024  swc1        $f13, 0x24($sp) (Delay Slot)
        { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x288930u;
    if (runtime->hasFunction(0x288930u)) {
        auto targetFn = runtime->lookupFunction(0x288930u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x289148u; }
        if (ctx->pc != 0x289148u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___unpack_f_0x288930(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x289148u; }
        if (ctx->pc != 0x289148u) { return; }
    }
    ctx->pc = 0x289148u;
label_289148:
    // 0x289148: 0x27b00010  addiu       $s0, $sp, 0x10
    ctx->pc = 0x289148u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x28914c: 0x27a40024  addiu       $a0, $sp, 0x24
    ctx->pc = 0x28914cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 36));
    // 0x289150: 0xc0a224c  jal         func_288930
    ctx->pc = 0x289150u;
    SET_GPR_U32(ctx, 31, 0x289158u);
    ctx->pc = 0x289154u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x289150u;
            // 0x289154: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x288930u;
    if (runtime->hasFunction(0x288930u)) {
        auto targetFn = runtime->lookupFunction(0x288930u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x289158u; }
        if (ctx->pc != 0x289158u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___unpack_f_0x288930(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x289158u; }
        if (ctx->pc != 0x289158u) { return; }
    }
    ctx->pc = 0x289158u;
label_289158:
    // 0x289158: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x289158u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28915c: 0xc0a2404  jal         func_289010
    ctx->pc = 0x28915Cu;
    SET_GPR_U32(ctx, 31, 0x289164u);
    ctx->pc = 0x289160u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28915Cu;
            // 0x289160: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x289010u;
    if (runtime->hasFunction(0x289010u)) {
        auto targetFn = runtime->lookupFunction(0x289010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x289164u; }
        if (ctx->pc != 0x289164u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___fpcmp_parts_f_0x289010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x289164u; }
        if (ctx->pc != 0x289164u) { return; }
    }
    ctx->pc = 0x289164u;
label_289164:
    // 0x289164: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x289164u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x289168: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x289168u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x28916c: 0x3e00008  jr          $ra
    ctx->pc = 0x28916Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x289170u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28916Cu;
            // 0x289170: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x289174u;
}
