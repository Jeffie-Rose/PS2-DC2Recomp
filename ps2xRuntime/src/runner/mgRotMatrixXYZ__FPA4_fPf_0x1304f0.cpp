#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: mgRotMatrixXYZ__FPA4_fPf
// Address: 0x1304f0 - 0x130550
void mgRotMatrixXYZ__FPA4_fPf_0x1304f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("mgRotMatrixXYZ__FPA4_fPf_0x1304f0");
#endif

    switch (ctx->pc) {
        case 0x130514u: goto label_130514;
        case 0x130520u: goto label_130520;
        case 0x13052cu: goto label_13052c;
        case 0x13053cu: goto label_13053c;
        default: break;
    }

    ctx->pc = 0x1304f0u;

    // 0x1304f0: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x1304f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x1304f4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1304f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1304f8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1304f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1304fc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1304fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x130500: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x130500u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130504: 0xc4ac0000  lwc1        $f12, 0x0($a1)
    ctx->pc = 0x130504u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x130508: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x130508u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13050c: 0xc04c0f4  jal         func_1303D0
    ctx->pc = 0x13050Cu;
    SET_GPR_U32(ctx, 31, 0x130514u);
    ctx->pc = 0x130510u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13050Cu;
            // 0x130510: 0x27a40030  addiu       $a0, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1303D0u;
    if (runtime->hasFunction(0x1303D0u)) {
        auto targetFn = runtime->lookupFunction(0x1303D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x130514u; }
        if (ctx->pc != 0x130514u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgRotMatrixX__FPA4_ff_0x1303d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x130514u; }
        if (ctx->pc != 0x130514u) { return; }
    }
    ctx->pc = 0x130514u;
label_130514:
    // 0x130514: 0xc60c0004  lwc1        $f12, 0x4($s0)
    ctx->pc = 0x130514u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x130518: 0xc04c10c  jal         func_130430
    ctx->pc = 0x130518u;
    SET_GPR_U32(ctx, 31, 0x130520u);
    ctx->pc = 0x13051Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x130518u;
            // 0x13051c: 0x27a40070  addiu       $a0, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x130430u;
    if (runtime->hasFunction(0x130430u)) {
        auto targetFn = runtime->lookupFunction(0x130430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x130520u; }
        if (ctx->pc != 0x130520u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgRotMatrixY__FPA4_ff_0x130430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x130520u; }
        if (ctx->pc != 0x130520u) { return; }
    }
    ctx->pc = 0x130520u;
label_130520:
    // 0x130520: 0xc60c0008  lwc1        $f12, 0x8($s0)
    ctx->pc = 0x130520u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x130524: 0xc04c124  jal         func_130490
    ctx->pc = 0x130524u;
    SET_GPR_U32(ctx, 31, 0x13052Cu);
    ctx->pc = 0x130528u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x130524u;
            // 0x130528: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x130490u;
    if (runtime->hasFunction(0x130490u)) {
        auto targetFn = runtime->lookupFunction(0x130490u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13052Cu; }
        if (ctx->pc != 0x13052Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgRotMatrixZ__FPA4_ff_0x130490(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13052Cu; }
        if (ctx->pc != 0x13052Cu) { return; }
    }
    ctx->pc = 0x13052Cu;
label_13052c:
    // 0x13052c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x13052cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130530: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x130530u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x130534: 0xc04c060  jal         func_130180
    ctx->pc = 0x130534u;
    SET_GPR_U32(ctx, 31, 0x13053Cu);
    ctx->pc = 0x130538u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x130534u;
            // 0x130538: 0x27a60030  addiu       $a2, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x130180u;
    if (runtime->hasFunction(0x130180u)) {
        auto targetFn = runtime->lookupFunction(0x130180u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13053Cu; }
        if (ctx->pc != 0x13053Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MulMatrix3__FPA4_fPA4_fPA4_f_0x130180(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13053Cu; }
        if (ctx->pc != 0x13053Cu) { return; }
    }
    ctx->pc = 0x13053Cu;
label_13053c:
    // 0x13053c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x13053cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x130540: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x130540u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x130544: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x130544u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x130548: 0x3e00008  jr          $ra
    ctx->pc = 0x130548u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13054Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x130548u;
            // 0x13054c: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x130550u;
}
