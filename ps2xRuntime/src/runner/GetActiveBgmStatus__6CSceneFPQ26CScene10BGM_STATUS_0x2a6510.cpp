#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetActiveBgmStatus__6CSceneFPQ26CScene10BGM_STATUS
// Address: 0x2a6510 - 0x2a6580
void GetActiveBgmStatus__6CSceneFPQ26CScene10BGM_STATUS_0x2a6510(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetActiveBgmStatus__6CSceneFPQ26CScene10BGM_STATUS_0x2a6510");
#endif

    switch (ctx->pc) {
        case 0x2a652cu: goto label_2a652c;
        case 0x2a6538u: goto label_2a6538;
        default: break;
    }

    ctx->pc = 0x2a6510u;

    // 0x2a6510: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2a6510u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2a6514: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2a6514u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2a6518: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2a6518u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2a651c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2a651cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2a6520: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2a6520u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a6524: 0xc0a9838  jal         func_2A60E0
    ctx->pc = 0x2A6524u;
    SET_GPR_U32(ctx, 31, 0x2A652Cu);
    ctx->pc = 0x2A6528u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A6524u;
            // 0x2a6528: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A60E0u;
    if (runtime->hasFunction(0x2A60E0u)) {
        auto targetFn = runtime->lookupFunction(0x2A60E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A652Cu; }
        if (ctx->pc != 0x2A652Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetActiveBgmInfo__6CSceneFv_0x2a60e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A652Cu; }
        if (ctx->pc != 0x2A652Cu) { return; }
    }
    ctx->pc = 0x2A652Cu;
label_2a652c:
    // 0x2a652c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2a652cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a6530: 0xc0a98dc  jal         func_2A6370
    ctx->pc = 0x2A6530u;
    SET_GPR_U32(ctx, 31, 0x2A6538u);
    ctx->pc = 0x2A6534u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A6530u;
            // 0x2a6534: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A6370u;
    if (runtime->hasFunction(0x2A6370u)) {
        auto targetFn = runtime->lookupFunction(0x2A6370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A6538u; }
        if (ctx->pc != 0x2A6538u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetBGMState__6CSceneFv_0x2a6370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A6538u; }
        if (ctx->pc != 0x2A6538u) { return; }
    }
    ctx->pc = 0x2A6538u;
label_2a6538:
    // 0x2a6538: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x2a6538u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x2a653c: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x2a653cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x2a6540: 0xae230004  sw          $v1, 0x4($s1)
    ctx->pc = 0x2a6540u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 3));
    // 0x2a6544: 0xc600000c  lwc1        $f0, 0xC($s0)
    ctx->pc = 0x2a6544u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a6548: 0xe620000c  swc1        $f0, 0xC($s1)
    ctx->pc = 0x2a6548u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12), bits); }
    // 0x2a654c: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x2a654cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x2a6550: 0xae230010  sw          $v1, 0x10($s1)
    ctx->pc = 0x2a6550u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 3));
    // 0x2a6554: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x2a6554u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x2a6558: 0xae230018  sw          $v1, 0x18($s1)
    ctx->pc = 0x2a6558u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 3));
    // 0x2a655c: 0xc6000014  lwc1        $f0, 0x14($s0)
    ctx->pc = 0x2a655cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a6560: 0xe6200014  swc1        $f0, 0x14($s1)
    ctx->pc = 0x2a6560u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 20), bits); }
    // 0x2a6564: 0x8e030020  lw          $v1, 0x20($s0)
    ctx->pc = 0x2a6564u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x2a6568: 0xae230008  sw          $v1, 0x8($s1)
    ctx->pc = 0x2a6568u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 3));
    // 0x2a656c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2a656cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2a6570: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2a6570u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a6574: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2a6574u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2a6578: 0x3e00008  jr          $ra
    ctx->pc = 0x2A6578u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A657Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A6578u;
            // 0x2a657c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2A6580u;
}
