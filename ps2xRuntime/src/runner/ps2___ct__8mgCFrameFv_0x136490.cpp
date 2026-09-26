#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: __ct__8mgCFrameFv
// Address: 0x136490 - 0x136504
void ps2___ct__8mgCFrameFv_0x136490(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___ct__8mgCFrameFv_0x136490");
#endif

    switch (ctx->pc) {
        case 0x136490u: goto label_136490;
        case 0x136494u: goto label_136494;
        case 0x136498u: goto label_136498;
        case 0x13649cu: goto label_13649c;
        case 0x1364a0u: goto label_1364a0;
        case 0x1364a4u: goto label_1364a4;
        case 0x1364a8u: goto label_1364a8;
        case 0x1364acu: goto label_1364ac;
        case 0x1364b0u: goto label_1364b0;
        case 0x1364b4u: goto label_1364b4;
        case 0x1364b8u: goto label_1364b8;
        case 0x1364bcu: goto label_1364bc;
        case 0x1364c0u: goto label_1364c0;
        case 0x1364c4u: goto label_1364c4;
        case 0x1364c8u: goto label_1364c8;
        case 0x1364ccu: goto label_1364cc;
        case 0x1364d0u: goto label_1364d0;
        case 0x1364d4u: goto label_1364d4;
        case 0x1364d8u: goto label_1364d8;
        case 0x1364dcu: goto label_1364dc;
        case 0x1364e0u: goto label_1364e0;
        case 0x1364e4u: goto label_1364e4;
        case 0x1364e8u: goto label_1364e8;
        case 0x1364ecu: goto label_1364ec;
        case 0x1364f0u: goto label_1364f0;
        case 0x1364f4u: goto label_1364f4;
        case 0x1364f8u: goto label_1364f8;
        case 0x1364fcu: goto label_1364fc;
        case 0x136500u: goto label_136500;
        default: break;
    }

    ctx->pc = 0x136490u;

label_136490:
    // 0x136490: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x136490u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_136494:
    // 0x136494: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x136494u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
label_136498:
    // 0x136498: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x136498u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_13649c:
    // 0x13649c: 0x24424fe0  addiu       $v0, $v0, 0x4FE0
    ctx->pc = 0x13649cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20448));
label_1364a0:
    // 0x1364a0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1364a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1364a4:
    // 0x1364a4: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x1364a4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_1364a8:
    // 0x1364a8: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1364a8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1364ac:
    // 0x1364ac: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x1364acu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_1364b0:
    // 0x1364b0: 0x320f809  jalr        $t9
label_1364b4:
    if (ctx->pc == 0x1364B4u) {
        ctx->pc = 0x1364B4u;
            // 0x1364b4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1364B8u;
        goto label_1364b8;
    }
    ctx->pc = 0x1364B0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1364B8u);
        ctx->pc = 0x1364B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1364B0u;
            // 0x1364b4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1364B8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1364B8u; }
            if (ctx->pc != 0x1364B8u) { return; }
        }
        }
    }
    ctx->pc = 0x1364B8u;
label_1364b8:
    // 0x1364b8: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x1364b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
label_1364bc:
    // 0x1364bc: 0x24424fa0  addiu       $v0, $v0, 0x4FA0
    ctx->pc = 0x1364bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20384));
label_1364c0:
    // 0x1364c0: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x1364c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_1364c4:
    // 0x1364c4: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x1364c4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1364c8:
    // 0x1364c8: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x1364c8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_1364cc:
    // 0x1364cc: 0x320f809  jalr        $t9
label_1364d0:
    if (ctx->pc == 0x1364D0u) {
        ctx->pc = 0x1364D0u;
            // 0x1364d0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1364D4u;
        goto label_1364d4;
    }
    ctx->pc = 0x1364CCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1364D4u);
        ctx->pc = 0x1364D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1364CCu;
            // 0x1364d0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1364D4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1364D4u; }
            if (ctx->pc != 0x1364D4u) { return; }
        }
        }
    }
    ctx->pc = 0x1364D4u;
label_1364d4:
    // 0x1364d4: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x1364d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
label_1364d8:
    // 0x1364d8: 0x24424f50  addiu       $v0, $v0, 0x4F50
    ctx->pc = 0x1364d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20304));
label_1364dc:
    // 0x1364dc: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x1364dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_1364e0:
    // 0x1364e0: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x1364e0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1364e4:
    // 0x1364e4: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x1364e4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_1364e8:
    // 0x1364e8: 0x320f809  jalr        $t9
label_1364ec:
    if (ctx->pc == 0x1364ECu) {
        ctx->pc = 0x1364ECu;
            // 0x1364ec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1364F0u;
        goto label_1364f0;
    }
    ctx->pc = 0x1364E8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1364F0u);
        ctx->pc = 0x1364ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1364E8u;
            // 0x1364ec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1364F0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1364F0u; }
            if (ctx->pc != 0x1364F0u) { return; }
        }
        }
    }
    ctx->pc = 0x1364F0u;
label_1364f0:
    // 0x1364f0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1364f0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1364f4:
    // 0x1364f4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1364f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1364f8:
    // 0x1364f8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1364f8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1364fc:
    // 0x1364fc: 0x3e00008  jr          $ra
label_136500:
    if (ctx->pc == 0x136500u) {
        ctx->pc = 0x136500u;
            // 0x136500: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x136504u;
        goto label_fallthrough_0x1364fc;
    }
    ctx->pc = 0x1364FCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x136500u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1364FCu;
            // 0x136500: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x1364fc:
    ctx->pc = 0x136504u;
}
