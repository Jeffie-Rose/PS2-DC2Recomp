#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: Initialize__13CRandomCircleFv
// Address: 0x28c180 - 0x28c1c4
void Initialize__13CRandomCircleFv_0x28c180(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Initialize__13CRandomCircleFv_0x28c180");
#endif

    switch (ctx->pc) {
        case 0x28c180u: goto label_28c180;
        case 0x28c184u: goto label_28c184;
        case 0x28c188u: goto label_28c188;
        case 0x28c18cu: goto label_28c18c;
        case 0x28c190u: goto label_28c190;
        case 0x28c194u: goto label_28c194;
        case 0x28c198u: goto label_28c198;
        case 0x28c19cu: goto label_28c19c;
        case 0x28c1a0u: goto label_28c1a0;
        case 0x28c1a4u: goto label_28c1a4;
        case 0x28c1a8u: goto label_28c1a8;
        case 0x28c1acu: goto label_28c1ac;
        case 0x28c1b0u: goto label_28c1b0;
        case 0x28c1b4u: goto label_28c1b4;
        case 0x28c1b8u: goto label_28c1b8;
        case 0x28c1bcu: goto label_28c1bc;
        case 0x28c1c0u: goto label_28c1c0;
        default: break;
    }

    ctx->pc = 0x28c180u;

label_28c180:
    // 0x28c180: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x28c180u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_28c184:
    // 0x28c184: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x28c184u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_28c188:
    // 0x28c188: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x28c188u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_28c18c:
    // 0x28c18c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x28c18cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_28c190:
    // 0x28c190: 0x8e190040  lw          $t9, 0x40($s0)
    ctx->pc = 0x28c190u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
label_28c194:
    // 0x28c194: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x28c194u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_28c198:
    // 0x28c198: 0x320f809  jalr        $t9
label_28c19c:
    if (ctx->pc == 0x28C19Cu) {
        ctx->pc = 0x28C19Cu;
            // 0x28c19c: 0x26040040  addiu       $a0, $s0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
        ctx->pc = 0x28C1A0u;
        goto label_28c1a0;
    }
    ctx->pc = 0x28C198u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x28C1A0u);
        ctx->pc = 0x28C19Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28C198u;
            // 0x28c19c: 0x26040040  addiu       $a0, $s0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x28C1A0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x28C1A0u; }
            if (ctx->pc != 0x28C1A0u) { return; }
        }
        }
    }
    ctx->pc = 0x28C1A0u;
label_28c1a0:
    // 0x28c1a0: 0xae000030  sw          $zero, 0x30($s0)
    ctx->pc = 0x28c1a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 0));
label_28c1a4:
    // 0x28c1a4: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x28c1a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_28c1a8:
    // 0x28c1a8: 0xae000034  sw          $zero, 0x34($s0)
    ctx->pc = 0x28c1a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 0));
label_28c1ac:
    // 0x28c1ac: 0xae000038  sw          $zero, 0x38($s0)
    ctx->pc = 0x28c1acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 0));
label_28c1b0:
    // 0x28c1b0: 0xae03003c  sw          $v1, 0x3C($s0)
    ctx->pc = 0x28c1b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 3));
label_28c1b4:
    // 0x28c1b4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x28c1b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_28c1b8:
    // 0x28c1b8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x28c1b8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_28c1bc:
    // 0x28c1bc: 0x3e00008  jr          $ra
label_28c1c0:
    if (ctx->pc == 0x28C1C0u) {
        ctx->pc = 0x28C1C0u;
            // 0x28c1c0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x28C1C4u;
        goto label_fallthrough_0x28c1bc;
    }
    ctx->pc = 0x28C1BCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28C1C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28C1BCu;
            // 0x28c1c0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x28c1bc:
    ctx->pc = 0x28C1C4u;
}
