#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: AllDeleteDamage__12CActionCharaFv
// Address: 0x16a9b0 - 0x16aa28
void AllDeleteDamage__12CActionCharaFv_0x16a9b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("AllDeleteDamage__12CActionCharaFv_0x16a9b0");
#endif

    switch (ctx->pc) {
        case 0x16a9d4u: goto label_16a9d4;
        case 0x16a9f4u: goto label_16a9f4;
        default: break;
    }

    ctx->pc = 0x16a9b0u;

    // 0x16a9b0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x16a9b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x16a9b4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x16a9b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x16a9b8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x16a9b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x16a9bc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x16a9bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x16a9c0: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x16a9c0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16a9c4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x16a9c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x16a9c8: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x16a9c8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16a9cc: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x16A9CCu;
    {
        const bool branch_taken_0x16a9cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16A9D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16A9CCu;
            // 0x16a9d0: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16a9cc) {
            ctx->pc = 0x16AA00u;
            goto label_16aa00;
        }
    }
    ctx->pc = 0x16A9D4u;
label_16a9d4:
    // 0x16a9d4: 0x80830a20  lb          $v1, 0xA20($a0)
    ctx->pc = 0x16a9d4u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 2592)));
    // 0x16a9d8: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x16A9D8u;
    {
        const bool branch_taken_0x16a9d8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x16a9d8) {
            ctx->pc = 0x16A9F4u;
            goto label_16a9f4;
        }
    }
    ctx->pc = 0x16A9E0u;
    // 0x16a9e0: 0x8c840a44  lw          $a0, 0xA44($a0)
    ctx->pc = 0x16a9e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 2628)));
    // 0x16a9e4: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x16A9E4u;
    {
        const bool branch_taken_0x16a9e4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x16A9E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16A9E4u;
            // 0x16a9e8: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16a9e4) {
            ctx->pc = 0x16A9F4u;
            goto label_16a9f4;
        }
    }
    ctx->pc = 0x16A9ECu;
    // 0x16a9ec: 0xc06e9a0  jal         func_1BA680
    ctx->pc = 0x16A9ECu;
    SET_GPR_U32(ctx, 31, 0x16A9F4u);
    ctx->pc = 0x1BA680u;
    if (runtime->hasFunction(0x1BA680u)) {
        auto targetFn = runtime->lookupFunction(0x1BA680u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16A9F4u; }
        if (ctx->pc != 0x16A9F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Delete__8CColPrimFi_0x1ba680(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16A9F4u; }
        if (ctx->pc != 0x16A9F4u) { return; }
    }
    ctx->pc = 0x16A9F4u;
label_16a9f4:
    // 0x16a9f4: 0x0  nop
    ctx->pc = 0x16a9f4u;
    // NOP
    // 0x16a9f8: 0x26310028  addiu       $s1, $s1, 0x28
    ctx->pc = 0x16a9f8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 40));
    // 0x16a9fc: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x16a9fcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_16aa00:
    // 0x16aa00: 0x82430bd8  lb          $v1, 0xBD8($s2)
    ctx->pc = 0x16aa00u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 3032)));
    // 0x16aa04: 0x203182a  slt         $v1, $s0, $v1
    ctx->pc = 0x16aa04u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x16aa08: 0x1460fff2  bnez        $v1, . + 4 + (-0xE << 2)
    ctx->pc = 0x16AA08u;
    {
        const bool branch_taken_0x16aa08 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x16AA0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16AA08u;
            // 0x16aa0c: 0x2512021  addu        $a0, $s2, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16aa08) {
            ctx->pc = 0x16A9D4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_16a9d4;
        }
    }
    ctx->pc = 0x16AA10u;
    // 0x16aa10: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x16aa10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x16aa14: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x16aa14u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x16aa18: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x16aa18u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16aa1c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x16aa1cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16aa20: 0x3e00008  jr          $ra
    ctx->pc = 0x16AA20u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16AA24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16AA20u;
            // 0x16aa24: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x16AA28u;
}
