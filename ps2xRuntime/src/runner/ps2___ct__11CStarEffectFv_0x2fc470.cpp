#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: __ct__11CStarEffectFv
// Address: 0x2fc470 - 0x2fc50c
void ps2___ct__11CStarEffectFv_0x2fc470(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___ct__11CStarEffectFv_0x2fc470");
#endif

    switch (ctx->pc) {
        case 0x2fc470u: goto label_2fc470;
        case 0x2fc474u: goto label_2fc474;
        case 0x2fc478u: goto label_2fc478;
        case 0x2fc47cu: goto label_2fc47c;
        case 0x2fc480u: goto label_2fc480;
        case 0x2fc484u: goto label_2fc484;
        case 0x2fc488u: goto label_2fc488;
        case 0x2fc48cu: goto label_2fc48c;
        case 0x2fc490u: goto label_2fc490;
        case 0x2fc494u: goto label_2fc494;
        case 0x2fc498u: goto label_2fc498;
        case 0x2fc49cu: goto label_2fc49c;
        case 0x2fc4a0u: goto label_2fc4a0;
        case 0x2fc4a4u: goto label_2fc4a4;
        case 0x2fc4a8u: goto label_2fc4a8;
        case 0x2fc4acu: goto label_2fc4ac;
        case 0x2fc4b0u: goto label_2fc4b0;
        case 0x2fc4b4u: goto label_2fc4b4;
        case 0x2fc4b8u: goto label_2fc4b8;
        case 0x2fc4bcu: goto label_2fc4bc;
        case 0x2fc4c0u: goto label_2fc4c0;
        case 0x2fc4c4u: goto label_2fc4c4;
        case 0x2fc4c8u: goto label_2fc4c8;
        case 0x2fc4ccu: goto label_2fc4cc;
        case 0x2fc4d0u: goto label_2fc4d0;
        case 0x2fc4d4u: goto label_2fc4d4;
        case 0x2fc4d8u: goto label_2fc4d8;
        case 0x2fc4dcu: goto label_2fc4dc;
        case 0x2fc4e0u: goto label_2fc4e0;
        case 0x2fc4e4u: goto label_2fc4e4;
        case 0x2fc4e8u: goto label_2fc4e8;
        case 0x2fc4ecu: goto label_2fc4ec;
        case 0x2fc4f0u: goto label_2fc4f0;
        case 0x2fc4f4u: goto label_2fc4f4;
        case 0x2fc4f8u: goto label_2fc4f8;
        case 0x2fc4fcu: goto label_2fc4fc;
        case 0x2fc500u: goto label_2fc500;
        case 0x2fc504u: goto label_2fc504;
        case 0x2fc508u: goto label_2fc508;
        default: break;
    }

    ctx->pc = 0x2fc470u;

label_2fc470:
    // 0x2fc470: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2fc470u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_2fc474:
    // 0x2fc474: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x2fc474u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
label_2fc478:
    // 0x2fc478: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2fc478u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_2fc47c:
    // 0x2fc47c: 0x24424fe0  addiu       $v0, $v0, 0x4FE0
    ctx->pc = 0x2fc47cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20448));
label_2fc480:
    // 0x2fc480: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2fc480u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2fc484:
    // 0x2fc484: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x2fc484u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_2fc488:
    // 0x2fc488: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2fc488u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2fc48c:
    // 0x2fc48c: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x2fc48cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_2fc490:
    // 0x2fc490: 0x320f809  jalr        $t9
label_2fc494:
    if (ctx->pc == 0x2FC494u) {
        ctx->pc = 0x2FC494u;
            // 0x2fc494: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2FC498u;
        goto label_2fc498;
    }
    ctx->pc = 0x2FC490u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2FC498u);
        ctx->pc = 0x2FC494u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FC490u;
            // 0x2fc494: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2FC498u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2FC498u; }
            if (ctx->pc != 0x2FC498u) { return; }
        }
        }
    }
    ctx->pc = 0x2FC498u;
label_2fc498:
    // 0x2fc498: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x2fc498u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
label_2fc49c:
    // 0x2fc49c: 0x24425670  addiu       $v0, $v0, 0x5670
    ctx->pc = 0x2fc49cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 22128));
label_2fc4a0:
    // 0x2fc4a0: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x2fc4a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_2fc4a4:
    // 0x2fc4a4: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x2fc4a4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2fc4a8:
    // 0x2fc4a8: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x2fc4a8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_2fc4ac:
    // 0x2fc4ac: 0x320f809  jalr        $t9
label_2fc4b0:
    if (ctx->pc == 0x2FC4B0u) {
        ctx->pc = 0x2FC4B0u;
            // 0x2fc4b0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2FC4B4u;
        goto label_2fc4b4;
    }
    ctx->pc = 0x2FC4ACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2FC4B4u);
        ctx->pc = 0x2FC4B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FC4ACu;
            // 0x2fc4b0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2FC4B4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2FC4B4u; }
            if (ctx->pc != 0x2FC4B4u) { return; }
        }
        }
    }
    ctx->pc = 0x2FC4B4u;
label_2fc4b4:
    // 0x2fc4b4: 0x3c030037  lui         $v1, 0x37
    ctx->pc = 0x2fc4b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)55 << 16));
label_2fc4b8:
    // 0x2fc4b8: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x2fc4b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
label_2fc4bc:
    // 0x2fc4bc: 0x246363e0  addiu       $v1, $v1, 0x63E0
    ctx->pc = 0x2fc4bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 25568));
label_2fc4c0:
    // 0x2fc4c0: 0x24424f10  addiu       $v0, $v0, 0x4F10
    ctx->pc = 0x2fc4c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20240));
label_2fc4c4:
    // 0x2fc4c4: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x2fc4c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_2fc4c8:
    // 0x2fc4c8: 0xae0200bc  sw          $v0, 0xBC($s0)
    ctx->pc = 0x2fc4c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 188), GPR_U32(ctx, 2));
label_2fc4cc:
    // 0x2fc4cc: 0x8e1900bc  lw          $t9, 0xBC($s0)
    ctx->pc = 0x2fc4ccu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 188)));
label_2fc4d0:
    // 0x2fc4d0: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x2fc4d0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_2fc4d4:
    // 0x2fc4d4: 0x320f809  jalr        $t9
label_2fc4d8:
    if (ctx->pc == 0x2FC4D8u) {
        ctx->pc = 0x2FC4D8u;
            // 0x2fc4d8: 0x260400a0  addiu       $a0, $s0, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 160));
        ctx->pc = 0x2FC4DCu;
        goto label_2fc4dc;
    }
    ctx->pc = 0x2FC4D4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2FC4DCu);
        ctx->pc = 0x2FC4D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FC4D4u;
            // 0x2fc4d8: 0x260400a0  addiu       $a0, $s0, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 160));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2FC4DCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2FC4DCu; }
            if (ctx->pc != 0x2FC4DCu) { return; }
        }
        }
    }
    ctx->pc = 0x2FC4DCu;
label_2fc4dc:
    // 0x2fc4dc: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x2fc4dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
label_2fc4e0:
    // 0x2fc4e0: 0x244250b0  addiu       $v0, $v0, 0x50B0
    ctx->pc = 0x2fc4e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20656));
label_2fc4e4:
    // 0x2fc4e4: 0xae0200bc  sw          $v0, 0xBC($s0)
    ctx->pc = 0x2fc4e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 188), GPR_U32(ctx, 2));
label_2fc4e8:
    // 0x2fc4e8: 0x8e1900bc  lw          $t9, 0xBC($s0)
    ctx->pc = 0x2fc4e8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 188)));
label_2fc4ec:
    // 0x2fc4ec: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x2fc4ecu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_2fc4f0:
    // 0x2fc4f0: 0x320f809  jalr        $t9
label_2fc4f4:
    if (ctx->pc == 0x2FC4F4u) {
        ctx->pc = 0x2FC4F4u;
            // 0x2fc4f4: 0x260400a0  addiu       $a0, $s0, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 160));
        ctx->pc = 0x2FC4F8u;
        goto label_2fc4f8;
    }
    ctx->pc = 0x2FC4F0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2FC4F8u);
        ctx->pc = 0x2FC4F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FC4F0u;
            // 0x2fc4f4: 0x260400a0  addiu       $a0, $s0, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 160));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2FC4F8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2FC4F8u; }
            if (ctx->pc != 0x2FC4F8u) { return; }
        }
        }
    }
    ctx->pc = 0x2FC4F8u;
label_2fc4f8:
    // 0x2fc4f8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2fc4f8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2fc4fc:
    // 0x2fc4fc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2fc4fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2fc500:
    // 0x2fc500: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2fc500u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2fc504:
    // 0x2fc504: 0x3e00008  jr          $ra
label_2fc508:
    if (ctx->pc == 0x2FC508u) {
        ctx->pc = 0x2FC508u;
            // 0x2fc508: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x2FC50Cu;
        goto label_fallthrough_0x2fc504;
    }
    ctx->pc = 0x2FC504u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FC508u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FC504u;
            // 0x2fc508: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x2fc504:
    ctx->pc = 0x2FC50Cu;
}
