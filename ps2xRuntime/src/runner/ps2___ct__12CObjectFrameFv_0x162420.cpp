#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: __ct__12CObjectFrameFv
// Address: 0x162420 - 0x162464
void ps2___ct__12CObjectFrameFv_0x162420(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___ct__12CObjectFrameFv_0x162420");
#endif

    switch (ctx->pc) {
        case 0x162420u: goto label_162420;
        case 0x162424u: goto label_162424;
        case 0x162428u: goto label_162428;
        case 0x16242cu: goto label_16242c;
        case 0x162430u: goto label_162430;
        case 0x162434u: goto label_162434;
        case 0x162438u: goto label_162438;
        case 0x16243cu: goto label_16243c;
        case 0x162440u: goto label_162440;
        case 0x162444u: goto label_162444;
        case 0x162448u: goto label_162448;
        case 0x16244cu: goto label_16244c;
        case 0x162450u: goto label_162450;
        case 0x162454u: goto label_162454;
        case 0x162458u: goto label_162458;
        case 0x16245cu: goto label_16245c;
        case 0x162460u: goto label_162460;
        default: break;
    }

    ctx->pc = 0x162420u;

label_162420:
    // 0x162420: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x162420u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_162424:
    // 0x162424: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x162424u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_162428:
    // 0x162428: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x162428u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_16242c:
    // 0x16242c: 0xc058768  jal         func_161DA0
label_162430:
    if (ctx->pc == 0x162430u) {
        ctx->pc = 0x162430u;
            // 0x162430: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x162434u;
        goto label_162434;
    }
    ctx->pc = 0x16242Cu;
    SET_GPR_U32(ctx, 31, 0x162434u);
    ctx->pc = 0x162430u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16242Cu;
            // 0x162430: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x161DA0u;
    if (runtime->hasFunction(0x161DA0u)) {
        auto targetFn = runtime->lookupFunction(0x161DA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x162434u; }
        if (ctx->pc != 0x162434u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___ct__7CObjectFv_0x161da0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x162434u; }
        if (ctx->pc != 0x162434u) { return; }
    }
    ctx->pc = 0x162434u;
label_162434:
    // 0x162434: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x162434u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
label_162438:
    // 0x162438: 0x244255f0  addiu       $v0, $v0, 0x55F0
    ctx->pc = 0x162438u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 22000));
label_16243c:
    // 0x16243c: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x16243cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_162440:
    // 0x162440: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x162440u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_162444:
    // 0x162444: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x162444u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_162448:
    // 0x162448: 0x320f809  jalr        $t9
label_16244c:
    if (ctx->pc == 0x16244Cu) {
        ctx->pc = 0x16244Cu;
            // 0x16244c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x162450u;
        goto label_162450;
    }
    ctx->pc = 0x162448u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x162450u);
        ctx->pc = 0x16244Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x162448u;
            // 0x16244c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x162450u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x162450u; }
            if (ctx->pc != 0x162450u) { return; }
        }
        }
    }
    ctx->pc = 0x162450u;
label_162450:
    // 0x162450: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x162450u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_162454:
    // 0x162454: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x162454u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_162458:
    // 0x162458: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x162458u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_16245c:
    // 0x16245c: 0x3e00008  jr          $ra
label_162460:
    if (ctx->pc == 0x162460u) {
        ctx->pc = 0x162460u;
            // 0x162460: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x162464u;
        goto label_fallthrough_0x16245c;
    }
    ctx->pc = 0x16245Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x162460u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16245Cu;
            // 0x162460: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x16245c:
    ctx->pc = 0x162464u;
}
