#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: MySetTex__FiP11mgCDrawPrim
// Address: 0x2d54c0 - 0x2d5594
void MySetTex__FiP11mgCDrawPrim_0x2d54c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("MySetTex__FiP11mgCDrawPrim_0x2d54c0");
#endif

    switch (ctx->pc) {
        case 0x2d54e8u: goto label_2d54e8;
        case 0x2d54f4u: goto label_2d54f4;
        case 0x2d5518u: goto label_2d5518;
        case 0x2d5530u: goto label_2d5530;
        case 0x2d553cu: goto label_2d553c;
        case 0x2d5560u: goto label_2d5560;
        case 0x2d5578u: goto label_2d5578;
        case 0x2d5584u: goto label_2d5584;
        default: break;
    }

    ctx->pc = 0x2d54c0u;

    // 0x2d54c0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2d54c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2d54c4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2d54c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2d54c8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2d54c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2d54cc: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2D54CCu;
    {
        const bool branch_taken_0x2d54cc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D54D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D54CCu;
            // 0x2d54d0: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d54cc) {
            ctx->pc = 0x2D54E0u;
            goto label_2d54e0;
        }
    }
    ctx->pc = 0x2D54D4u;
    // 0x2d54d4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2d54d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d54d8: 0x14830008  bne         $a0, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x2D54D8u;
    {
        const bool branch_taken_0x2d54d8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x2D54DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D54D8u;
            // 0x2d54dc: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d54d8) {
            ctx->pc = 0x2D54FCu;
            goto label_2d54fc;
        }
    }
    ctx->pc = 0x2D54E0u;
label_2d54e0:
    // 0x2d54e0: 0xc064b0c  jal         func_192C30
    ctx->pc = 0x2D54E0u;
    SET_GPR_U32(ctx, 31, 0x2D54E8u);
    ctx->pc = 0x192C30u;
    if (runtime->hasFunction(0x192C30u)) {
        auto targetFn = runtime->lookupFunction(0x192C30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D54E8u; }
        if (ctx->pc != 0x2D54E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetFontTexture__Fi_0x192c30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D54E8u; }
        if (ctx->pc != 0x2D54E8u) { return; }
    }
    ctx->pc = 0x2D54E8u;
label_2d54e8:
    // 0x2d54e8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2d54e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d54ec: 0xc04d368  jal         func_134DA0
    ctx->pc = 0x2D54ECu;
    SET_GPR_U32(ctx, 31, 0x2D54F4u);
    ctx->pc = 0x2D54F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D54ECu;
            // 0x2d54f0: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134DA0u;
    if (runtime->hasFunction(0x134DA0u)) {
        auto targetFn = runtime->lookupFunction(0x134DA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D54F4u; }
        if (ctx->pc != 0x2D54F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Texture__11mgCDrawPrimFP10mgCTexture_0x134da0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D54F4u; }
        if (ctx->pc != 0x2D54F4u) { return; }
    }
    ctx->pc = 0x2D54F4u;
label_2d54f4:
    // 0x2d54f4: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x2D54F4u;
    {
        const bool branch_taken_0x2d54f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D54F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D54F4u;
            // 0x2d54f8: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d54f4) {
            ctx->pc = 0x2D5588u;
            goto label_2d5588;
        }
    }
    ctx->pc = 0x2D54FCu;
label_2d54fc:
    // 0x2d54fc: 0x14830011  bne         $a0, $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x2D54FCu;
    {
        const bool branch_taken_0x2d54fc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x2D5500u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D54FCu;
            // 0x2d5500: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d54fc) {
            ctx->pc = 0x2D5544u;
            goto label_2d5544;
        }
    }
    ctx->pc = 0x2D5504u;
    // 0x2d5504: 0x8f868ad0  lw          $a2, -0x7530($gp)
    ctx->pc = 0x2d5504u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937296)));
    // 0x2d5508: 0x14c00005  bnez        $a2, . + 4 + (0x5 << 2)
    ctx->pc = 0x2D5508u;
    {
        const bool branch_taken_0x2d5508 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D550Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D5508u;
            // 0x2d550c: 0x3c040037  lui         $a0, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d5508) {
            ctx->pc = 0x2D5520u;
            goto label_2d5520;
        }
    }
    ctx->pc = 0x2D5510u;
    // 0x2d5510: 0xc0b551c  jal         func_2D5470
    ctx->pc = 0x2D5510u;
    SET_GPR_U32(ctx, 31, 0x2D5518u);
    ctx->pc = 0x2D5514u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D5510u;
            // 0x2d5514: 0x24840988  addiu       $a0, $a0, 0x988 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2440));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D5470u;
    if (runtime->hasFunction(0x2D5470u)) {
        auto targetFn = runtime->lookupFunction(0x2D5470u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D5518u; }
        if (ctx->pc != 0x2D5518u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MySetTex__FPcP11mgCDrawPrim_0x2d5470(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D5518u; }
        if (ctx->pc != 0x2D5518u) { return; }
    }
    ctx->pc = 0x2D5518u;
label_2d5518:
    // 0x2d5518: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x2D5518u;
    {
        const bool branch_taken_0x2d5518 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d5518) {
            ctx->pc = 0x2D5584u;
            goto label_2d5584;
        }
    }
    ctx->pc = 0x2D5520u;
label_2d5520:
    // 0x2d5520: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x2d5520u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x2d5524: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x2d5524u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2d5528: 0xc04a234  jal         func_1288D0
    ctx->pc = 0x2D5528u;
    SET_GPR_U32(ctx, 31, 0x2D5530u);
    ctx->pc = 0x2D552Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D5528u;
            // 0x2d552c: 0x24a50998  addiu       $a1, $a1, 0x998 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2456));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1288D0u;
    if (runtime->hasFunction(0x1288D0u)) {
        auto targetFn = runtime->lookupFunction(0x1288D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D5530u; }
        if (ctx->pc != 0x2D5530u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x1288d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D5530u; }
        if (ctx->pc != 0x2D5530u) { return; }
    }
    ctx->pc = 0x2D5530u;
label_2d5530:
    // 0x2d5530: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2d5530u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d5534: 0xc0b551c  jal         func_2D5470
    ctx->pc = 0x2D5534u;
    SET_GPR_U32(ctx, 31, 0x2D553Cu);
    ctx->pc = 0x2D5538u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D5534u;
            // 0x2d5538: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D5470u;
    if (runtime->hasFunction(0x2D5470u)) {
        auto targetFn = runtime->lookupFunction(0x2D5470u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D553Cu; }
        if (ctx->pc != 0x2D553Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MySetTex__FPcP11mgCDrawPrim_0x2d5470(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D553Cu; }
        if (ctx->pc != 0x2D553Cu) { return; }
    }
    ctx->pc = 0x2D553Cu;
label_2d553c:
    // 0x2d553c: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x2D553Cu;
    {
        const bool branch_taken_0x2d553c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d553c) {
            ctx->pc = 0x2D5584u;
            goto label_2d5584;
        }
    }
    ctx->pc = 0x2D5544u;
label_2d5544:
    // 0x2d5544: 0x1483000f  bne         $a0, $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x2D5544u;
    {
        const bool branch_taken_0x2d5544 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x2d5544) {
            ctx->pc = 0x2D5584u;
            goto label_2d5584;
        }
    }
    ctx->pc = 0x2D554Cu;
    // 0x2d554c: 0x8f868ad0  lw          $a2, -0x7530($gp)
    ctx->pc = 0x2d554cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937296)));
    // 0x2d5550: 0x14c00005  bnez        $a2, . + 4 + (0x5 << 2)
    ctx->pc = 0x2D5550u;
    {
        const bool branch_taken_0x2d5550 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D5554u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D5550u;
            // 0x2d5554: 0x3c040037  lui         $a0, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d5550) {
            ctx->pc = 0x2D5568u;
            goto label_2d5568;
        }
    }
    ctx->pc = 0x2D5558u;
    // 0x2d5558: 0xc0b551c  jal         func_2D5470
    ctx->pc = 0x2D5558u;
    SET_GPR_U32(ctx, 31, 0x2D5560u);
    ctx->pc = 0x2D555Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D5558u;
            // 0x2d555c: 0x248409a8  addiu       $a0, $a0, 0x9A8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2472));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D5470u;
    if (runtime->hasFunction(0x2D5470u)) {
        auto targetFn = runtime->lookupFunction(0x2D5470u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D5560u; }
        if (ctx->pc != 0x2D5560u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MySetTex__FPcP11mgCDrawPrim_0x2d5470(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D5560u; }
        if (ctx->pc != 0x2D5560u) { return; }
    }
    ctx->pc = 0x2D5560u;
label_2d5560:
    // 0x2d5560: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2D5560u;
    {
        const bool branch_taken_0x2d5560 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d5560) {
            ctx->pc = 0x2D5584u;
            goto label_2d5584;
        }
    }
    ctx->pc = 0x2D5568u;
label_2d5568:
    // 0x2d5568: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x2d5568u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x2d556c: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x2d556cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2d5570: 0xc04a234  jal         func_1288D0
    ctx->pc = 0x2D5570u;
    SET_GPR_U32(ctx, 31, 0x2D5578u);
    ctx->pc = 0x2D5574u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D5570u;
            // 0x2d5574: 0x24a509b8  addiu       $a1, $a1, 0x9B8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2488));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1288D0u;
    if (runtime->hasFunction(0x1288D0u)) {
        auto targetFn = runtime->lookupFunction(0x1288D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D5578u; }
        if (ctx->pc != 0x2D5578u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x1288d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D5578u; }
        if (ctx->pc != 0x2D5578u) { return; }
    }
    ctx->pc = 0x2D5578u;
label_2d5578:
    // 0x2d5578: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2d5578u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d557c: 0xc0b551c  jal         func_2D5470
    ctx->pc = 0x2D557Cu;
    SET_GPR_U32(ctx, 31, 0x2D5584u);
    ctx->pc = 0x2D5580u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D557Cu;
            // 0x2d5580: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D5470u;
    if (runtime->hasFunction(0x2D5470u)) {
        auto targetFn = runtime->lookupFunction(0x2D5470u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D5584u; }
        if (ctx->pc != 0x2D5584u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MySetTex__FPcP11mgCDrawPrim_0x2d5470(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D5584u; }
        if (ctx->pc != 0x2D5584u) { return; }
    }
    ctx->pc = 0x2D5584u;
label_2d5584:
    // 0x2d5584: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2d5584u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2d5588:
    // 0x2d5588: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2d5588u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d558c: 0x3e00008  jr          $ra
    ctx->pc = 0x2D558Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D5590u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D558Cu;
            // 0x2d5590: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2D5594u;
}
