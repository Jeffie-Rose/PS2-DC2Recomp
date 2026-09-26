#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: __ct__9CMapPieceFv
// Address: 0x1623d0 - 0x162414
void ps2___ct__9CMapPieceFv_0x1623d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___ct__9CMapPieceFv_0x1623d0");
#endif

    switch (ctx->pc) {
        case 0x1623d0u: goto label_1623d0;
        case 0x1623d4u: goto label_1623d4;
        case 0x1623d8u: goto label_1623d8;
        case 0x1623dcu: goto label_1623dc;
        case 0x1623e0u: goto label_1623e0;
        case 0x1623e4u: goto label_1623e4;
        case 0x1623e8u: goto label_1623e8;
        case 0x1623ecu: goto label_1623ec;
        case 0x1623f0u: goto label_1623f0;
        case 0x1623f4u: goto label_1623f4;
        case 0x1623f8u: goto label_1623f8;
        case 0x1623fcu: goto label_1623fc;
        case 0x162400u: goto label_162400;
        case 0x162404u: goto label_162404;
        case 0x162408u: goto label_162408;
        case 0x16240cu: goto label_16240c;
        case 0x162410u: goto label_162410;
        default: break;
    }

    ctx->pc = 0x1623d0u;

label_1623d0:
    // 0x1623d0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1623d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1623d4:
    // 0x1623d4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1623d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_1623d8:
    // 0x1623d8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1623d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1623dc:
    // 0x1623dc: 0xc058908  jal         func_162420
label_1623e0:
    if (ctx->pc == 0x1623E0u) {
        ctx->pc = 0x1623E0u;
            // 0x1623e0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1623E4u;
        goto label_1623e4;
    }
    ctx->pc = 0x1623DCu;
    SET_GPR_U32(ctx, 31, 0x1623E4u);
    ctx->pc = 0x1623E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1623DCu;
            // 0x1623e0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x162420u;
    if (runtime->hasFunction(0x162420u)) {
        auto targetFn = runtime->lookupFunction(0x162420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1623E4u; }
        if (ctx->pc != 0x1623E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___ct__12CObjectFrameFv_0x162420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1623E4u; }
        if (ctx->pc != 0x1623E4u) { return; }
    }
    ctx->pc = 0x1623E4u;
label_1623e4:
    // 0x1623e4: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x1623e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
label_1623e8:
    // 0x1623e8: 0x24425570  addiu       $v0, $v0, 0x5570
    ctx->pc = 0x1623e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 21872));
label_1623ec:
    // 0x1623ec: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x1623ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_1623f0:
    // 0x1623f0: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x1623f0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1623f4:
    // 0x1623f4: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x1623f4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_1623f8:
    // 0x1623f8: 0x320f809  jalr        $t9
label_1623fc:
    if (ctx->pc == 0x1623FCu) {
        ctx->pc = 0x1623FCu;
            // 0x1623fc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x162400u;
        goto label_162400;
    }
    ctx->pc = 0x1623F8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x162400u);
        ctx->pc = 0x1623FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1623F8u;
            // 0x1623fc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x162400u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x162400u; }
            if (ctx->pc != 0x162400u) { return; }
        }
        }
    }
    ctx->pc = 0x162400u;
label_162400:
    // 0x162400: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x162400u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_162404:
    // 0x162404: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x162404u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_162408:
    // 0x162408: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x162408u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_16240c:
    // 0x16240c: 0x3e00008  jr          $ra
label_162410:
    if (ctx->pc == 0x162410u) {
        ctx->pc = 0x162410u;
            // 0x162410: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x162414u;
        goto label_fallthrough_0x16240c;
    }
    ctx->pc = 0x16240Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x162410u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16240Cu;
            // 0x162410: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x16240c:
    ctx->pc = 0x162414u;
}
