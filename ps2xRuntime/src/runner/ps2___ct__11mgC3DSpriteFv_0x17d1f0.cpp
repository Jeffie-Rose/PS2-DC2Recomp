#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: __ct__11mgC3DSpriteFv
// Address: 0x17d1f0 - 0x17d248
void ps2___ct__11mgC3DSpriteFv_0x17d1f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___ct__11mgC3DSpriteFv_0x17d1f0");
#endif

    switch (ctx->pc) {
        case 0x17d1f0u: goto label_17d1f0;
        case 0x17d1f4u: goto label_17d1f4;
        case 0x17d1f8u: goto label_17d1f8;
        case 0x17d1fcu: goto label_17d1fc;
        case 0x17d200u: goto label_17d200;
        case 0x17d204u: goto label_17d204;
        case 0x17d208u: goto label_17d208;
        case 0x17d20cu: goto label_17d20c;
        case 0x17d210u: goto label_17d210;
        case 0x17d214u: goto label_17d214;
        case 0x17d218u: goto label_17d218;
        case 0x17d21cu: goto label_17d21c;
        case 0x17d220u: goto label_17d220;
        case 0x17d224u: goto label_17d224;
        case 0x17d228u: goto label_17d228;
        case 0x17d22cu: goto label_17d22c;
        case 0x17d230u: goto label_17d230;
        case 0x17d234u: goto label_17d234;
        case 0x17d238u: goto label_17d238;
        case 0x17d23cu: goto label_17d23c;
        case 0x17d240u: goto label_17d240;
        case 0x17d244u: goto label_17d244;
        default: break;
    }

    ctx->pc = 0x17d1f0u;

label_17d1f0:
    // 0x17d1f0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x17d1f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_17d1f4:
    // 0x17d1f4: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x17d1f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
label_17d1f8:
    // 0x17d1f8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x17d1f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_17d1fc:
    // 0x17d1fc: 0x24424f10  addiu       $v0, $v0, 0x4F10
    ctx->pc = 0x17d1fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20240));
label_17d200:
    // 0x17d200: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x17d200u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_17d204:
    // 0x17d204: 0xac82001c  sw          $v0, 0x1C($a0)
    ctx->pc = 0x17d204u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 2));
label_17d208:
    // 0x17d208: 0x8c99001c  lw          $t9, 0x1C($a0)
    ctx->pc = 0x17d208u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
label_17d20c:
    // 0x17d20c: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x17d20cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_17d210:
    // 0x17d210: 0x320f809  jalr        $t9
label_17d214:
    if (ctx->pc == 0x17D214u) {
        ctx->pc = 0x17D214u;
            // 0x17d214: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x17D218u;
        goto label_17d218;
    }
    ctx->pc = 0x17D210u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x17D218u);
        ctx->pc = 0x17D214u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17D210u;
            // 0x17d214: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x17D218u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x17D218u; }
            if (ctx->pc != 0x17D218u) { return; }
        }
        }
    }
    ctx->pc = 0x17D218u;
label_17d218:
    // 0x17d218: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x17d218u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
label_17d21c:
    // 0x17d21c: 0x244250b0  addiu       $v0, $v0, 0x50B0
    ctx->pc = 0x17d21cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20656));
label_17d220:
    // 0x17d220: 0xae02001c  sw          $v0, 0x1C($s0)
    ctx->pc = 0x17d220u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 2));
label_17d224:
    // 0x17d224: 0x8e19001c  lw          $t9, 0x1C($s0)
    ctx->pc = 0x17d224u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_17d228:
    // 0x17d228: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x17d228u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_17d22c:
    // 0x17d22c: 0x320f809  jalr        $t9
label_17d230:
    if (ctx->pc == 0x17D230u) {
        ctx->pc = 0x17D230u;
            // 0x17d230: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x17D234u;
        goto label_17d234;
    }
    ctx->pc = 0x17D22Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x17D234u);
        ctx->pc = 0x17D230u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17D22Cu;
            // 0x17d230: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x17D234u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x17D234u; }
            if (ctx->pc != 0x17D234u) { return; }
        }
        }
    }
    ctx->pc = 0x17D234u;
label_17d234:
    // 0x17d234: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x17d234u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_17d238:
    // 0x17d238: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x17d238u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_17d23c:
    // 0x17d23c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x17d23cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_17d240:
    // 0x17d240: 0x3e00008  jr          $ra
label_17d244:
    if (ctx->pc == 0x17D244u) {
        ctx->pc = 0x17D244u;
            // 0x17d244: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x17D248u;
        goto label_fallthrough_0x17d240;
    }
    ctx->pc = 0x17D240u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17D244u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17D240u;
            // 0x17d244: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x17d240:
    ctx->pc = 0x17D248u;
}
