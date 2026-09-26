#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: MenuDeleteTextureBlock__FPi
// Address: 0x251290 - 0x251304
void MenuDeleteTextureBlock__FPi_0x251290(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("MenuDeleteTextureBlock__FPi_0x251290");
#endif

    switch (ctx->pc) {
        case 0x2512c0u: goto label_2512c0;
        case 0x2512c8u: goto label_2512c8;
        default: break;
    }

    ctx->pc = 0x251290u;

    // 0x251290: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x251290u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x251294: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x251294u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x251298: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x251298u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x25129c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x25129cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2512a0: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x2512a0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2512a4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2512a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2512a8: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x2512a8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2512ac: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2512acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2512b0: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2512b0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2512b4: 0x3c100038  lui         $s0, 0x38
    ctx->pc = 0x2512b4u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)56 << 16));
    // 0x2512b8: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2512B8u;
    {
        const bool branch_taken_0x2512b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2512BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2512B8u;
            // 0x2512bc: 0x26101ef0  addiu       $s0, $s0, 0x1EF0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 7920));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2512b8) {
            ctx->pc = 0x2512D0u;
            goto label_2512d0;
        }
    }
    ctx->pc = 0x2512C0u;
label_2512c0:
    // 0x2512c0: 0xc04b950  jal         func_12E540
    ctx->pc = 0x2512C0u;
    SET_GPR_U32(ctx, 31, 0x2512C8u);
    ctx->pc = 0x2512C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2512C0u;
            // 0x2512c4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12E540u;
    if (runtime->hasFunction(0x12E540u)) {
        auto targetFn = runtime->lookupFunction(0x12E540u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2512C8u; }
        if (ctx->pc != 0x2512C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DeleteBlock__17mgCTextureManagerFi_0x12e540(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2512C8u; }
        if (ctx->pc != 0x2512C8u) { return; }
    }
    ctx->pc = 0x2512C8u;
label_2512c8:
    // 0x2512c8: 0x26520004  addiu       $s2, $s2, 0x4
    ctx->pc = 0x2512c8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
    // 0x2512cc: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x2512ccu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_2512d0:
    // 0x2512d0: 0x2721821  addu        $v1, $s3, $s2
    ctx->pc = 0x2512d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 18)));
    // 0x2512d4: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x2512d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2512d8: 0x4a00003  bltz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2512D8u;
    {
        const bool branch_taken_0x2512d8 = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x2512DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2512D8u;
            // 0x2512dc: 0x2a230010  slti        $v1, $s1, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)16) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2512d8) {
            ctx->pc = 0x2512E8u;
            goto label_2512e8;
        }
    }
    ctx->pc = 0x2512E0u;
    // 0x2512e0: 0x1460fff7  bnez        $v1, . + 4 + (-0x9 << 2)
    ctx->pc = 0x2512E0u;
    {
        const bool branch_taken_0x2512e0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2512e0) {
            ctx->pc = 0x2512C0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2512c0;
        }
    }
    ctx->pc = 0x2512E8u;
label_2512e8:
    // 0x2512e8: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x2512e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2512ec: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2512ecu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2512f0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2512f0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2512f4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2512f4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2512f8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2512f8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2512fc: 0x3e00008  jr          $ra
    ctx->pc = 0x2512FCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x251300u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2512FCu;
            // 0x251300: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x251304u;
}
