#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: StepEffectScript__11CMonsterManFv
// Address: 0x1db1a0 - 0x1db208
void StepEffectScript__11CMonsterManFv_0x1db1a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("StepEffectScript__11CMonsterManFv_0x1db1a0");
#endif

    switch (ctx->pc) {
        case 0x1db1a0u: goto label_1db1a0;
        case 0x1db1a4u: goto label_1db1a4;
        case 0x1db1a8u: goto label_1db1a8;
        case 0x1db1acu: goto label_1db1ac;
        case 0x1db1b0u: goto label_1db1b0;
        case 0x1db1b4u: goto label_1db1b4;
        case 0x1db1b8u: goto label_1db1b8;
        case 0x1db1bcu: goto label_1db1bc;
        case 0x1db1c0u: goto label_1db1c0;
        case 0x1db1c4u: goto label_1db1c4;
        case 0x1db1c8u: goto label_1db1c8;
        case 0x1db1ccu: goto label_1db1cc;
        case 0x1db1d0u: goto label_1db1d0;
        case 0x1db1d4u: goto label_1db1d4;
        case 0x1db1d8u: goto label_1db1d8;
        case 0x1db1dcu: goto label_1db1dc;
        case 0x1db1e0u: goto label_1db1e0;
        case 0x1db1e4u: goto label_1db1e4;
        case 0x1db1e8u: goto label_1db1e8;
        case 0x1db1ecu: goto label_1db1ec;
        case 0x1db1f0u: goto label_1db1f0;
        case 0x1db1f4u: goto label_1db1f4;
        case 0x1db1f8u: goto label_1db1f8;
        case 0x1db1fcu: goto label_1db1fc;
        case 0x1db200u: goto label_1db200;
        case 0x1db204u: goto label_1db204;
        default: break;
    }

    ctx->pc = 0x1db1a0u;

label_1db1a0:
    // 0x1db1a0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1db1a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_1db1a4:
    // 0x1db1a4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1db1a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_1db1a8:
    // 0x1db1a8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1db1a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_1db1ac:
    // 0x1db1ac: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1db1acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1db1b0:
    // 0x1db1b0: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1db1b0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1db1b4:
    // 0x1db1b4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1db1b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1db1b8:
    // 0x1db1b8: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1db1b8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1db1bc:
    // 0x1db1bc: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1db1bcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1db1c0:
    // 0x1db1c0: 0x2511821  addu        $v1, $s2, $s1
    ctx->pc = 0x1db1c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 17)));
label_1db1c4:
    // 0x1db1c4: 0x8c640484  lw          $a0, 0x484($v1)
    ctx->pc = 0x1db1c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1156)));
label_1db1c8:
    // 0x1db1c8: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_1db1cc:
    if (ctx->pc == 0x1DB1CCu) {
        ctx->pc = 0x1DB1D0u;
        goto label_1db1d0;
    }
    ctx->pc = 0x1DB1C8u;
    {
        const bool branch_taken_0x1db1c8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1db1c8) {
            ctx->pc = 0x1DB1E0u;
            goto label_1db1e0;
        }
    }
    ctx->pc = 0x1DB1D0u;
label_1db1d0:
    // 0x1db1d0: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1db1d0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1db1d4:
    // 0x1db1d4: 0x8f390114  lw          $t9, 0x114($t9)
    ctx->pc = 0x1db1d4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 276)));
label_1db1d8:
    // 0x1db1d8: 0x320f809  jalr        $t9
label_1db1dc:
    if (ctx->pc == 0x1DB1DCu) {
        ctx->pc = 0x1DB1E0u;
        goto label_1db1e0;
    }
    ctx->pc = 0x1DB1D8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1DB1E0u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x1DB1E0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1DB1E0u; }
            if (ctx->pc != 0x1DB1E0u) { return; }
        }
        }
    }
    ctx->pc = 0x1DB1E0u;
label_1db1e0:
    // 0x1db1e0: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1db1e0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1db1e4:
    // 0x1db1e4: 0x2a030018  slti        $v1, $s0, 0x18
    ctx->pc = 0x1db1e4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)24) ? 1 : 0);
label_1db1e8:
    // 0x1db1e8: 0x1460fff5  bnez        $v1, . + 4 + (-0xB << 2)
label_1db1ec:
    if (ctx->pc == 0x1DB1ECu) {
        ctx->pc = 0x1DB1ECu;
            // 0x1db1ec: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->pc = 0x1DB1F0u;
        goto label_1db1f0;
    }
    ctx->pc = 0x1DB1E8u;
    {
        const bool branch_taken_0x1db1e8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DB1ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DB1E8u;
            // 0x1db1ec: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1db1e8) {
            ctx->pc = 0x1DB1C0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1db1c0;
        }
    }
    ctx->pc = 0x1DB1F0u;
label_1db1f0:
    // 0x1db1f0: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1db1f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1db1f4:
    // 0x1db1f4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1db1f4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1db1f8:
    // 0x1db1f8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1db1f8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1db1fc:
    // 0x1db1fc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1db1fcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1db200:
    // 0x1db200: 0x3e00008  jr          $ra
label_1db204:
    if (ctx->pc == 0x1DB204u) {
        ctx->pc = 0x1DB204u;
            // 0x1db204: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x1DB208u;
        goto label_fallthrough_0x1db200;
    }
    ctx->pc = 0x1DB200u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DB204u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DB200u;
            // 0x1db204: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x1db200:
    ctx->pc = 0x1DB208u;
}
