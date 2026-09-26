#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: Draw__19CTreasureBoxManagerFPf
// Address: 0x28c7b0 - 0x28c824
void Draw__19CTreasureBoxManagerFPf_0x28c7b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Draw__19CTreasureBoxManagerFPf_0x28c7b0");
#endif

    switch (ctx->pc) {
        case 0x28c7d8u: goto label_28c7d8;
        case 0x28c7f4u: goto label_28c7f4;
        default: break;
    }

    ctx->pc = 0x28c7b0u;

    // 0x28c7b0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x28c7b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x28c7b4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x28c7b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x28c7b8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x28c7b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x28c7bc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x28c7bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x28c7c0: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x28c7c0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28c7c4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x28c7c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x28c7c8: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x28c7c8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28c7cc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x28c7ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x28c7d0: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x28c7d0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28c7d4: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x28c7d4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_28c7d8:
    // 0x28c7d8: 0x2711821  addu        $v1, $s3, $s1
    ctx->pc = 0x28c7d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 17)));
    // 0x28c7dc: 0x24640010  addiu       $a0, $v1, 0x10
    ctx->pc = 0x28c7dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x28c7e0: 0x80630064  lb          $v1, 0x64($v1)
    ctx->pc = 0x28c7e0u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 100)));
    // 0x28c7e4: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x28C7E4u;
    {
        const bool branch_taken_0x28c7e4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x28C7E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28C7E4u;
            // 0x28c7e8: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28c7e4) {
            ctx->pc = 0x28C7F4u;
            goto label_28c7f4;
        }
    }
    ctx->pc = 0x28C7ECu;
    // 0x28c7ec: 0xc0a3074  jal         func_28C1D0
    ctx->pc = 0x28C7ECu;
    SET_GPR_U32(ctx, 31, 0x28C7F4u);
    ctx->pc = 0x28C1D0u;
    if (runtime->hasFunction(0x28C1D0u)) {
        auto targetFn = runtime->lookupFunction(0x28C1D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28C7F4u; }
        if (ctx->pc != 0x28C7F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Draw__12CTreasureBoxFPf_0x28c1d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28C7F4u; }
        if (ctx->pc != 0x28C7F4u) { return; }
    }
    ctx->pc = 0x28C7F4u;
label_28c7f4:
    // 0x28c7f4: 0x0  nop
    ctx->pc = 0x28c7f4u;
    // NOP
    // 0x28c7f8: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x28c7f8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x28c7fc: 0x2a030018  slti        $v1, $s0, 0x18
    ctx->pc = 0x28c7fcu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)24) ? 1 : 0);
    // 0x28c800: 0x1460fff5  bnez        $v1, . + 4 + (-0xB << 2)
    ctx->pc = 0x28C800u;
    {
        const bool branch_taken_0x28c800 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x28C804u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28C800u;
            // 0x28c804: 0x26310070  addiu       $s1, $s1, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 112));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28c800) {
            ctx->pc = 0x28C7D8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_28c7d8;
        }
    }
    ctx->pc = 0x28C808u;
    // 0x28c808: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x28c808u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x28c80c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x28c80cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x28c810: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x28c810u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x28c814: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x28c814u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x28c818: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x28c818u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28c81c: 0x3e00008  jr          $ra
    ctx->pc = 0x28C81Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28C820u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28C81Cu;
            // 0x28c820: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x28C824u;
}
