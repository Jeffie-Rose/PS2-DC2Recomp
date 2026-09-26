#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: __ct__9CColFrameFv
// Address: 0x1481b0 - 0x1481f4
void ps2___ct__9CColFrameFv_0x1481b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___ct__9CColFrameFv_0x1481b0");
#endif

    switch (ctx->pc) {
        case 0x1481b0u: goto label_1481b0;
        case 0x1481b4u: goto label_1481b4;
        case 0x1481b8u: goto label_1481b8;
        case 0x1481bcu: goto label_1481bc;
        case 0x1481c0u: goto label_1481c0;
        case 0x1481c4u: goto label_1481c4;
        case 0x1481c8u: goto label_1481c8;
        case 0x1481ccu: goto label_1481cc;
        case 0x1481d0u: goto label_1481d0;
        case 0x1481d4u: goto label_1481d4;
        case 0x1481d8u: goto label_1481d8;
        case 0x1481dcu: goto label_1481dc;
        case 0x1481e0u: goto label_1481e0;
        case 0x1481e4u: goto label_1481e4;
        case 0x1481e8u: goto label_1481e8;
        case 0x1481ecu: goto label_1481ec;
        case 0x1481f0u: goto label_1481f0;
        default: break;
    }

    ctx->pc = 0x1481b0u;

label_1481b0:
    // 0x1481b0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1481b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1481b4:
    // 0x1481b4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1481b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_1481b8:
    // 0x1481b8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1481b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1481bc:
    // 0x1481bc: 0xc04d924  jal         func_136490
label_1481c0:
    if (ctx->pc == 0x1481C0u) {
        ctx->pc = 0x1481C0u;
            // 0x1481c0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1481C4u;
        goto label_1481c4;
    }
    ctx->pc = 0x1481BCu;
    SET_GPR_U32(ctx, 31, 0x1481C4u);
    ctx->pc = 0x1481C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1481BCu;
            // 0x1481c0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x136490u;
    if (runtime->hasFunction(0x136490u)) {
        auto targetFn = runtime->lookupFunction(0x136490u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1481C4u; }
        if (ctx->pc != 0x1481C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___ct__8mgCFrameFv_0x136490(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1481C4u; }
        if (ctx->pc != 0x1481C4u) { return; }
    }
    ctx->pc = 0x1481C4u;
label_1481c4:
    // 0x1481c4: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x1481c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
label_1481c8:
    // 0x1481c8: 0x244251e0  addiu       $v0, $v0, 0x51E0
    ctx->pc = 0x1481c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20960));
label_1481cc:
    // 0x1481cc: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x1481ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_1481d0:
    // 0x1481d0: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x1481d0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1481d4:
    // 0x1481d4: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x1481d4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_1481d8:
    // 0x1481d8: 0x320f809  jalr        $t9
label_1481dc:
    if (ctx->pc == 0x1481DCu) {
        ctx->pc = 0x1481DCu;
            // 0x1481dc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1481E0u;
        goto label_1481e0;
    }
    ctx->pc = 0x1481D8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1481E0u);
        ctx->pc = 0x1481DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1481D8u;
            // 0x1481dc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1481E0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1481E0u; }
            if (ctx->pc != 0x1481E0u) { return; }
        }
        }
    }
    ctx->pc = 0x1481E0u;
label_1481e0:
    // 0x1481e0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1481e0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1481e4:
    // 0x1481e4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1481e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1481e8:
    // 0x1481e8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1481e8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1481ec:
    // 0x1481ec: 0x3e00008  jr          $ra
label_1481f0:
    if (ctx->pc == 0x1481F0u) {
        ctx->pc = 0x1481F0u;
            // 0x1481f0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x1481F4u;
        goto label_fallthrough_0x1481ec;
    }
    ctx->pc = 0x1481ECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1481F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1481ECu;
            // 0x1481f0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x1481ec:
    ctx->pc = 0x1481F4u;
}
