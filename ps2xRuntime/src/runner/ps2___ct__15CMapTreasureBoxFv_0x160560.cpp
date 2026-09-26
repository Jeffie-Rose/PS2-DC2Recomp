#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: __ct__15CMapTreasureBoxFv
// Address: 0x160560 - 0x160618
void ps2___ct__15CMapTreasureBoxFv_0x160560(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___ct__15CMapTreasureBoxFv_0x160560");
#endif

    switch (ctx->pc) {
        case 0x160560u: goto label_160560;
        case 0x160564u: goto label_160564;
        case 0x160568u: goto label_160568;
        case 0x16056cu: goto label_16056c;
        case 0x160570u: goto label_160570;
        case 0x160574u: goto label_160574;
        case 0x160578u: goto label_160578;
        case 0x16057cu: goto label_16057c;
        case 0x160580u: goto label_160580;
        case 0x160584u: goto label_160584;
        case 0x160588u: goto label_160588;
        case 0x16058cu: goto label_16058c;
        case 0x160590u: goto label_160590;
        case 0x160594u: goto label_160594;
        case 0x160598u: goto label_160598;
        case 0x16059cu: goto label_16059c;
        case 0x1605a0u: goto label_1605a0;
        case 0x1605a4u: goto label_1605a4;
        case 0x1605a8u: goto label_1605a8;
        case 0x1605acu: goto label_1605ac;
        case 0x1605b0u: goto label_1605b0;
        case 0x1605b4u: goto label_1605b4;
        case 0x1605b8u: goto label_1605b8;
        case 0x1605bcu: goto label_1605bc;
        case 0x1605c0u: goto label_1605c0;
        case 0x1605c4u: goto label_1605c4;
        case 0x1605c8u: goto label_1605c8;
        case 0x1605ccu: goto label_1605cc;
        case 0x1605d0u: goto label_1605d0;
        case 0x1605d4u: goto label_1605d4;
        case 0x1605d8u: goto label_1605d8;
        case 0x1605dcu: goto label_1605dc;
        case 0x1605e0u: goto label_1605e0;
        case 0x1605e4u: goto label_1605e4;
        case 0x1605e8u: goto label_1605e8;
        case 0x1605ecu: goto label_1605ec;
        case 0x1605f0u: goto label_1605f0;
        case 0x1605f4u: goto label_1605f4;
        case 0x1605f8u: goto label_1605f8;
        case 0x1605fcu: goto label_1605fc;
        case 0x160600u: goto label_160600;
        case 0x160604u: goto label_160604;
        case 0x160608u: goto label_160608;
        case 0x16060cu: goto label_16060c;
        case 0x160610u: goto label_160610;
        case 0x160614u: goto label_160614;
        default: break;
    }

    ctx->pc = 0x160560u;

label_160560:
    // 0x160560: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x160560u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_160564:
    // 0x160564: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x160564u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
label_160568:
    // 0x160568: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x160568u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_16056c:
    // 0x16056c: 0x24424fe0  addiu       $v0, $v0, 0x4FE0
    ctx->pc = 0x16056cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20448));
label_160570:
    // 0x160570: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x160570u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_160574:
    // 0x160574: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x160574u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_160578:
    // 0x160578: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x160578u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_16057c:
    // 0x16057c: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x16057cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_160580:
    // 0x160580: 0x320f809  jalr        $t9
label_160584:
    if (ctx->pc == 0x160584u) {
        ctx->pc = 0x160584u;
            // 0x160584: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x160588u;
        goto label_160588;
    }
    ctx->pc = 0x160580u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x160588u);
        ctx->pc = 0x160584u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x160580u;
            // 0x160584: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x160588u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x160588u; }
            if (ctx->pc != 0x160588u) { return; }
        }
        }
    }
    ctx->pc = 0x160588u;
label_160588:
    // 0x160588: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x160588u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
label_16058c:
    // 0x16058c: 0x24425670  addiu       $v0, $v0, 0x5670
    ctx->pc = 0x16058cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 22128));
label_160590:
    // 0x160590: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x160590u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_160594:
    // 0x160594: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x160594u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_160598:
    // 0x160598: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x160598u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_16059c:
    // 0x16059c: 0x320f809  jalr        $t9
label_1605a0:
    if (ctx->pc == 0x1605A0u) {
        ctx->pc = 0x1605A0u;
            // 0x1605a0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1605A4u;
        goto label_1605a4;
    }
    ctx->pc = 0x16059Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1605A4u);
        ctx->pc = 0x1605A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16059Cu;
            // 0x1605a0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1605A4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1605A4u; }
            if (ctx->pc != 0x1605A4u) { return; }
        }
        }
    }
    ctx->pc = 0x1605A4u;
label_1605a4:
    // 0x1605a4: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x1605a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
label_1605a8:
    // 0x1605a8: 0x244255f0  addiu       $v0, $v0, 0x55F0
    ctx->pc = 0x1605a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 22000));
label_1605ac:
    // 0x1605ac: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x1605acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_1605b0:
    // 0x1605b0: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x1605b0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1605b4:
    // 0x1605b4: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x1605b4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_1605b8:
    // 0x1605b8: 0x320f809  jalr        $t9
label_1605bc:
    if (ctx->pc == 0x1605BCu) {
        ctx->pc = 0x1605BCu;
            // 0x1605bc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1605C0u;
        goto label_1605c0;
    }
    ctx->pc = 0x1605B8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1605C0u);
        ctx->pc = 0x1605BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1605B8u;
            // 0x1605bc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1605C0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1605C0u; }
            if (ctx->pc != 0x1605C0u) { return; }
        }
        }
    }
    ctx->pc = 0x1605C0u;
label_1605c0:
    // 0x1605c0: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x1605c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
label_1605c4:
    // 0x1605c4: 0x24425810  addiu       $v0, $v0, 0x5810
    ctx->pc = 0x1605c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 22544));
label_1605c8:
    // 0x1605c8: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x1605c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_1605cc:
    // 0x1605cc: 0xae00035c  sw          $zero, 0x35C($s0)
    ctx->pc = 0x1605ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 860), GPR_U32(ctx, 0));
label_1605d0:
    // 0x1605d0: 0xae000364  sw          $zero, 0x364($s0)
    ctx->pc = 0x1605d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 868), GPR_U32(ctx, 0));
label_1605d4:
    // 0x1605d4: 0xae000360  sw          $zero, 0x360($s0)
    ctx->pc = 0x1605d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 864), GPR_U32(ctx, 0));
label_1605d8:
    // 0x1605d8: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x1605d8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1605dc:
    // 0x1605dc: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x1605dcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_1605e0:
    // 0x1605e0: 0x320f809  jalr        $t9
label_1605e4:
    if (ctx->pc == 0x1605E4u) {
        ctx->pc = 0x1605E4u;
            // 0x1605e4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1605E8u;
        goto label_1605e8;
    }
    ctx->pc = 0x1605E0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1605E8u);
        ctx->pc = 0x1605E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1605E0u;
            // 0x1605e4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1605E8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1605E8u; }
            if (ctx->pc != 0x1605E8u) { return; }
        }
        }
    }
    ctx->pc = 0x1605E8u;
label_1605e8:
    // 0x1605e8: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x1605e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
label_1605ec:
    // 0x1605ec: 0x244253c0  addiu       $v0, $v0, 0x53C0
    ctx->pc = 0x1605ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 21440));
label_1605f0:
    // 0x1605f0: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x1605f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_1605f4:
    // 0x1605f4: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x1605f4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1605f8:
    // 0x1605f8: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x1605f8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_1605fc:
    // 0x1605fc: 0x320f809  jalr        $t9
label_160600:
    if (ctx->pc == 0x160600u) {
        ctx->pc = 0x160600u;
            // 0x160600: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x160604u;
        goto label_160604;
    }
    ctx->pc = 0x1605FCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x160604u);
        ctx->pc = 0x160600u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1605FCu;
            // 0x160600: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x160604u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x160604u; }
            if (ctx->pc != 0x160604u) { return; }
        }
        }
    }
    ctx->pc = 0x160604u;
label_160604:
    // 0x160604: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x160604u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_160608:
    // 0x160608: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x160608u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_16060c:
    // 0x16060c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x16060cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_160610:
    // 0x160610: 0x3e00008  jr          $ra
label_160614:
    if (ctx->pc == 0x160614u) {
        ctx->pc = 0x160614u;
            // 0x160614: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x160618u;
        goto label_fallthrough_0x160610;
    }
    ctx->pc = 0x160610u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x160614u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x160610u;
            // 0x160614: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x160610:
    ctx->pc = 0x160618u;
}
