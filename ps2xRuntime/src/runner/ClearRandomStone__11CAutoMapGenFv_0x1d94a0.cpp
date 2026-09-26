#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: ClearRandomStone__11CAutoMapGenFv
// Address: 0x1d94a0 - 0x1d9518
void ClearRandomStone__11CAutoMapGenFv_0x1d94a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ClearRandomStone__11CAutoMapGenFv_0x1d94a0");
#endif

    switch (ctx->pc) {
        case 0x1d94a0u: goto label_1d94a0;
        case 0x1d94a4u: goto label_1d94a4;
        case 0x1d94a8u: goto label_1d94a8;
        case 0x1d94acu: goto label_1d94ac;
        case 0x1d94b0u: goto label_1d94b0;
        case 0x1d94b4u: goto label_1d94b4;
        case 0x1d94b8u: goto label_1d94b8;
        case 0x1d94bcu: goto label_1d94bc;
        case 0x1d94c0u: goto label_1d94c0;
        case 0x1d94c4u: goto label_1d94c4;
        case 0x1d94c8u: goto label_1d94c8;
        case 0x1d94ccu: goto label_1d94cc;
        case 0x1d94d0u: goto label_1d94d0;
        case 0x1d94d4u: goto label_1d94d4;
        case 0x1d94d8u: goto label_1d94d8;
        case 0x1d94dcu: goto label_1d94dc;
        case 0x1d94e0u: goto label_1d94e0;
        case 0x1d94e4u: goto label_1d94e4;
        case 0x1d94e8u: goto label_1d94e8;
        case 0x1d94ecu: goto label_1d94ec;
        case 0x1d94f0u: goto label_1d94f0;
        case 0x1d94f4u: goto label_1d94f4;
        case 0x1d94f8u: goto label_1d94f8;
        case 0x1d94fcu: goto label_1d94fc;
        case 0x1d9500u: goto label_1d9500;
        case 0x1d9504u: goto label_1d9504;
        case 0x1d9508u: goto label_1d9508;
        case 0x1d950cu: goto label_1d950c;
        case 0x1d9510u: goto label_1d9510;
        case 0x1d9514u: goto label_1d9514;
        default: break;
    }

    ctx->pc = 0x1d94a0u;

label_1d94a0:
    // 0x1d94a0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1d94a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_1d94a4:
    // 0x1d94a4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1d94a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_1d94a8:
    // 0x1d94a8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1d94a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_1d94ac:
    // 0x1d94ac: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1d94acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1d94b0:
    // 0x1d94b0: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1d94b0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1d94b4:
    // 0x1d94b4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1d94b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1d94b8:
    // 0x1d94b8: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1d94b8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d94bc:
    // 0x1d94bc: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1d94bcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d94c0:
    // 0x1d94c0: 0x2511821  addu        $v1, $s2, $s1
    ctx->pc = 0x1d94c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 17)));
label_1d94c4:
    // 0x1d94c4: 0x8c640004  lw          $a0, 0x4($v1)
    ctx->pc = 0x1d94c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_1d94c8:
    // 0x1d94c8: 0x10800009  beqz        $a0, . + 4 + (0x9 << 2)
label_1d94cc:
    if (ctx->pc == 0x1D94CCu) {
        ctx->pc = 0x1D94D0u;
        goto label_1d94d0;
    }
    ctx->pc = 0x1D94C8u;
    {
        const bool branch_taken_0x1d94c8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d94c8) {
            ctx->pc = 0x1D94F0u;
            goto label_1d94f0;
        }
    }
    ctx->pc = 0x1D94D0u;
label_1d94d0:
    // 0x1d94d0: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1d94d0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1d94d4:
    // 0x1d94d4: 0x3c02c7c3  lui         $v0, 0xC7C3
    ctx->pc = 0x1d94d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51139 << 16));
label_1d94d8:
    // 0x1d94d8: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1d94d8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1d94dc:
    // 0x1d94dc: 0x34424f80  ori         $v0, $v0, 0x4F80
    ctx->pc = 0x1d94dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)20352);
label_1d94e0:
    // 0x1d94e0: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x1d94e0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_1d94e4:
    // 0x1d94e4: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x1d94e4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_1d94e8:
    // 0x1d94e8: 0x320f809  jalr        $t9
label_1d94ec:
    if (ctx->pc == 0x1D94ECu) {
        ctx->pc = 0x1D94ECu;
            // 0x1d94ec: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x1D94F0u;
        goto label_1d94f0;
    }
    ctx->pc = 0x1D94E8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1D94F0u);
        ctx->pc = 0x1D94ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D94E8u;
            // 0x1d94ec: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1D94F0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1D94F0u; }
            if (ctx->pc != 0x1D94F0u) { return; }
        }
        }
    }
    ctx->pc = 0x1D94F0u;
label_1d94f0:
    // 0x1d94f0: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1d94f0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1d94f4:
    // 0x1d94f4: 0x2a03000c  slti        $v1, $s0, 0xC
    ctx->pc = 0x1d94f4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)12) ? 1 : 0);
label_1d94f8:
    // 0x1d94f8: 0x1460fff1  bnez        $v1, . + 4 + (-0xF << 2)
label_1d94fc:
    if (ctx->pc == 0x1D94FCu) {
        ctx->pc = 0x1D94FCu;
            // 0x1d94fc: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->pc = 0x1D9500u;
        goto label_1d9500;
    }
    ctx->pc = 0x1D94F8u;
    {
        const bool branch_taken_0x1d94f8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D94FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D94F8u;
            // 0x1d94fc: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d94f8) {
            ctx->pc = 0x1D94C0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1d94c0;
        }
    }
    ctx->pc = 0x1D9500u;
label_1d9500:
    // 0x1d9500: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1d9500u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1d9504:
    // 0x1d9504: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1d9504u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1d9508:
    // 0x1d9508: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1d9508u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1d950c:
    // 0x1d950c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1d950cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1d9510:
    // 0x1d9510: 0x3e00008  jr          $ra
label_1d9514:
    if (ctx->pc == 0x1D9514u) {
        ctx->pc = 0x1D9514u;
            // 0x1d9514: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x1D9518u;
        goto label_fallthrough_0x1d9510;
    }
    ctx->pc = 0x1D9510u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D9514u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D9510u;
            // 0x1d9514: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x1d9510:
    ctx->pc = 0x1D9518u;
}
