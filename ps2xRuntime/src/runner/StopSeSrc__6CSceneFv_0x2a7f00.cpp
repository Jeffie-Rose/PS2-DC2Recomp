#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: StopSeSrc__6CSceneFv
// Address: 0x2a7f00 - 0x2a7fa8
void StopSeSrc__6CSceneFv_0x2a7f00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("StopSeSrc__6CSceneFv_0x2a7f00");
#endif

    switch (ctx->pc) {
        case 0x2a7f28u: goto label_2a7f28;
        case 0x2a7f48u: goto label_2a7f48;
        case 0x2a7f5cu: goto label_2a7f5c;
        case 0x2a7f70u: goto label_2a7f70;
        case 0x2a7f88u: goto label_2a7f88;
        default: break;
    }

    ctx->pc = 0x2a7f00u;

    // 0x2a7f00: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2a7f00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x2a7f04: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x2a7f04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x2a7f08: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x2a7f08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x2a7f0c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2a7f0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2a7f10: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x2a7f10u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a7f14: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2a7f14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2a7f18: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x2a7f18u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a7f1c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2a7f1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2a7f20: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2a7f20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2a7f24: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2a7f24u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2a7f28:
    // 0x2a7f28: 0x2931021  addu        $v0, $s4, $s3
    ctx->pc = 0x2a7f28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 19)));
    // 0x2a7f2c: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x2a7f2cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x2a7f30: 0x410821  addu        $at, $v0, $at
    ctx->pc = 0x2a7f30u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 1)));
    // 0x2a7f34: 0x8c319e00  lw          $s1, -0x6200($at)
    ctx->pc = 0x2a7f34u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294942208)));
    // 0x2a7f38: 0x620000d  bltz        $s1, . + 4 + (0xD << 2)
    ctx->pc = 0x2A7F38u;
    {
        const bool branch_taken_0x2a7f38 = (GPR_S32(ctx, 17) < 0);
        ctx->pc = 0x2A7F3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A7F38u;
            // 0x2a7f3c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a7f38) {
            ctx->pc = 0x2A7F70u;
            goto label_2a7f70;
        }
    }
    ctx->pc = 0x2A7F40u;
    // 0x2a7f40: 0xc0a9dec  jal         func_2A77B0
    ctx->pc = 0x2A7F40u;
    SET_GPR_U32(ctx, 31, 0x2A7F48u);
    ctx->pc = 0x2A7F44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A7F40u;
            // 0x2a7f44: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A77B0u;
    if (runtime->hasFunction(0x2A77B0u)) {
        auto targetFn = runtime->lookupFunction(0x2A77B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A7F48u; }
        if (ctx->pc != 0x2A7F48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        check_se_play__6CSceneFi_0x2a77b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A7F48u; }
        if (ctx->pc != 0x2A7F48u) { return; }
    }
    ctx->pc = 0x2A7F48u;
label_2a7f48:
    // 0x2a7f48: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2a7f48u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a7f4c: 0x6400008  bltz        $s2, . + 4 + (0x8 << 2)
    ctx->pc = 0x2A7F4Cu;
    {
        const bool branch_taken_0x2a7f4c = (GPR_S32(ctx, 18) < 0);
        ctx->pc = 0x2A7F50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A7F4Cu;
            // 0x2a7f50: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a7f4c) {
            ctx->pc = 0x2A7F70u;
            goto label_2a7f70;
        }
    }
    ctx->pc = 0x2A7F54u;
    // 0x2a7f54: 0xc0a9a3c  jal         func_2A68F0
    ctx->pc = 0x2A7F54u;
    SET_GPR_U32(ctx, 31, 0x2A7F5Cu);
    ctx->pc = 0x2A7F58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A7F54u;
            // 0x2a7f58: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A68F0u;
    if (runtime->hasFunction(0x2A68F0u)) {
        auto targetFn = runtime->lookupFunction(0x2A68F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A7F5Cu; }
        if (ctx->pc != 0x2A7F5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetSeSrcID__6CSceneFi_0x2a68f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A7F5Cu; }
        if (ctx->pc != 0x2A7F5Cu) { return; }
    }
    ctx->pc = 0x2A7F5Cu;
label_2a7f5c:
    // 0x2a7f5c: 0x12400004  beqz        $s2, . + 4 + (0x4 << 2)
    ctx->pc = 0x2A7F5Cu;
    {
        const bool branch_taken_0x2a7f5c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A7F60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A7F5Cu;
            // 0x2a7f60: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a7f5c) {
            ctx->pc = 0x2A7F70u;
            goto label_2a7f70;
        }
    }
    ctx->pc = 0x2A7F64u;
    // 0x2a7f64: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x2a7f64u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a7f68: 0xc063a0c  jal         func_18E830
    ctx->pc = 0x2A7F68u;
    SET_GPR_U32(ctx, 31, 0x2A7F70u);
    ctx->pc = 0x2A7F6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A7F68u;
            // 0x2a7f6c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18E830u;
    if (runtime->hasFunction(0x18E830u)) {
        auto targetFn = runtime->lookupFunction(0x18E830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A7F70u; }
        if (ctx->pc != 0x2A7F70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sndSeStop__FUiii_0x18e830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A7F70u; }
        if (ctx->pc != 0x2A7F70u) { return; }
    }
    ctx->pc = 0x2A7F70u;
label_2a7f70:
    // 0x2a7f70: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2a7f70u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x2a7f74: 0x2a020004  slti        $v0, $s0, 0x4
    ctx->pc = 0x2a7f74u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x2a7f78: 0x1440ffeb  bnez        $v0, . + 4 + (-0x15 << 2)
    ctx->pc = 0x2A7F78u;
    {
        const bool branch_taken_0x2a7f78 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A7F7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A7F78u;
            // 0x2a7f7c: 0x26730088  addiu       $s3, $s3, 0x88 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 136));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a7f78) {
            ctx->pc = 0x2A7F28u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2a7f28;
        }
    }
    ctx->pc = 0x2A7F80u;
    // 0x2a7f80: 0xc0a9d80  jal         func_2A7600
    ctx->pc = 0x2A7F80u;
    SET_GPR_U32(ctx, 31, 0x2A7F88u);
    ctx->pc = 0x2A7F84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A7F80u;
            // 0x2a7f84: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A7600u;
    if (runtime->hasFunction(0x2A7600u)) {
        auto targetFn = runtime->lookupFunction(0x2A7600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A7F88u; }
        if (ctx->pc != 0x2A7F88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        PrePlaySeSrc__6CSceneFv_0x2a7600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A7F88u; }
        if (ctx->pc != 0x2A7F88u) { return; }
    }
    ctx->pc = 0x2A7F88u;
label_2a7f88:
    // 0x2a7f88: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x2a7f88u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2a7f8c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x2a7f8cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2a7f90: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2a7f90u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2a7f94: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2a7f94u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2a7f98: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2a7f98u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a7f9c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2a7f9cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2a7fa0: 0x3e00008  jr          $ra
    ctx->pc = 0x2A7FA0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A7FA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A7FA0u;
            // 0x2a7fa4: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2A7FA8u;
}
