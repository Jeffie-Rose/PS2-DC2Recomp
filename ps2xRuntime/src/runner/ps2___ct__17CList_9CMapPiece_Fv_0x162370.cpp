#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: __ct__17CList<9CMapPiece>Fv
// Address: 0x162370 - 0x1623b8
void ps2___ct__17CList_9CMapPiece_Fv_0x162370(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___ct__17CList_9CMapPiece_Fv_0x162370");
#endif

    switch (ctx->pc) {
        case 0x162370u: goto label_162370;
        case 0x162374u: goto label_162374;
        case 0x162378u: goto label_162378;
        case 0x16237cu: goto label_16237c;
        case 0x162380u: goto label_162380;
        case 0x162384u: goto label_162384;
        case 0x162388u: goto label_162388;
        case 0x16238cu: goto label_16238c;
        case 0x162390u: goto label_162390;
        case 0x162394u: goto label_162394;
        case 0x162398u: goto label_162398;
        case 0x16239cu: goto label_16239c;
        case 0x1623a0u: goto label_1623a0;
        case 0x1623a4u: goto label_1623a4;
        case 0x1623a8u: goto label_1623a8;
        case 0x1623acu: goto label_1623ac;
        case 0x1623b0u: goto label_1623b0;
        case 0x1623b4u: goto label_1623b4;
        default: break;
    }

    ctx->pc = 0x162370u;

label_162370:
    // 0x162370: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x162370u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_162374:
    // 0x162374: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x162374u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
label_162378:
    // 0x162378: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x162378u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_16237c:
    // 0x16237c: 0x24425398  addiu       $v0, $v0, 0x5398
    ctx->pc = 0x16237cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 21400));
label_162380:
    // 0x162380: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x162380u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_162384:
    // 0x162384: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x162384u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_162388:
    // 0x162388: 0xac8200c0  sw          $v0, 0xC0($a0)
    ctx->pc = 0x162388u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 192), GPR_U32(ctx, 2));
label_16238c:
    // 0x16238c: 0xc0588f4  jal         func_1623D0
label_162390:
    if (ctx->pc == 0x162390u) {
        ctx->pc = 0x162390u;
            // 0x162390: 0x26040010  addiu       $a0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->pc = 0x162394u;
        goto label_162394;
    }
    ctx->pc = 0x16238Cu;
    SET_GPR_U32(ctx, 31, 0x162394u);
    ctx->pc = 0x162390u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16238Cu;
            // 0x162390: 0x26040010  addiu       $a0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1623D0u;
    if (runtime->hasFunction(0x1623D0u)) {
        auto targetFn = runtime->lookupFunction(0x1623D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x162394u; }
        if (ctx->pc != 0x162394u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___ct__9CMapPieceFv_0x1623d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x162394u; }
        if (ctx->pc != 0x162394u) { return; }
    }
    ctx->pc = 0x162394u;
label_162394:
    // 0x162394: 0x8e1900c0  lw          $t9, 0xC0($s0)
    ctx->pc = 0x162394u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 192)));
label_162398:
    // 0x162398: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x162398u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_16239c:
    // 0x16239c: 0x320f809  jalr        $t9
label_1623a0:
    if (ctx->pc == 0x1623A0u) {
        ctx->pc = 0x1623A0u;
            // 0x1623a0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1623A4u;
        goto label_1623a4;
    }
    ctx->pc = 0x16239Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1623A4u);
        ctx->pc = 0x1623A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16239Cu;
            // 0x1623a0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1623A4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1623A4u; }
            if (ctx->pc != 0x1623A4u) { return; }
        }
        }
    }
    ctx->pc = 0x1623A4u;
label_1623a4:
    // 0x1623a4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1623a4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1623a8:
    // 0x1623a8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1623a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1623ac:
    // 0x1623ac: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1623acu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1623b0:
    // 0x1623b0: 0x3e00008  jr          $ra
label_1623b4:
    if (ctx->pc == 0x1623B4u) {
        ctx->pc = 0x1623B4u;
            // 0x1623b4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x1623B8u;
        goto label_fallthrough_0x1623b0;
    }
    ctx->pc = 0x1623B0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1623B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1623B0u;
            // 0x1623b4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x1623b0:
    ctx->pc = 0x1623B8u;
}
