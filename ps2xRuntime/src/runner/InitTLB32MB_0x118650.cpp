#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: InitTLB32MB
// Address: 0x118650 - 0x118844
void InitTLB32MB_0x118650(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("InitTLB32MB_0x118650");
#endif

    switch (ctx->pc) {
        case 0x1186a0u: goto label_1186a0;
        case 0x1186c4u: goto label_1186c4;
        case 0x1186ccu: goto label_1186cc;
        case 0x1186e0u: goto label_1186e0;
        case 0x1186f8u: goto label_1186f8;
        case 0x11872cu: goto label_11872c;
        case 0x118734u: goto label_118734;
        case 0x118748u: goto label_118748;
        case 0x118760u: goto label_118760;
        case 0x1187a8u: goto label_1187a8;
        case 0x1187b0u: goto label_1187b0;
        case 0x1187c0u: goto label_1187c0;
        case 0x1187d8u: goto label_1187d8;
        case 0x118800u: goto label_118800;
        case 0x11881cu: goto label_11881c;
        default: break;
    }

    ctx->pc = 0x118650u;

    // 0x118650: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x118650u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x118654: 0x3c040036  lui         $a0, 0x36
    ctx->pc = 0x118654u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)54 << 16));
    // 0x118658: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x118658u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x11865c: 0x24840d30  addiu       $a0, $a0, 0xD30
    ctx->pc = 0x11865cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 3376));
    // 0x118660: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x118660u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x118664: 0x3c120033  lui         $s2, 0x33
    ctx->pc = 0x118664u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)51 << 16));
    // 0x118668: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x118668u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x11866c: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x11866cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x118670: 0x26501568  addiu       $s0, $s2, 0x1568
    ctx->pc = 0x118670u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 5480));
    // 0x118674: 0x8e451568  lw          $a1, 0x1568($s2)
    ctx->pc = 0x118674u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 5480)));
    // 0x118678: 0x8e070004  lw          $a3, 0x4($s0)
    ctx->pc = 0x118678u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x11867c: 0x8e090008  lw          $t1, 0x8($s0)
    ctx->pc = 0x11867cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x118680: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x118680u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x118684: 0xa73821  addu        $a3, $a1, $a3
    ctx->pc = 0x118684u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
    // 0x118688: 0xe94821  addu        $t1, $a3, $t1
    ctx->pc = 0x118688u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 9)));
    // 0x11868c: 0xe0402d  daddu       $t0, $a3, $zero
    ctx->pc = 0x11868cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x118690: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x118690u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x118694: 0x2529ffff  addiu       $t1, $t1, -0x1
    ctx->pc = 0x118694u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967295));
    // 0x118698: 0xc044898  jal         func_112260
    ctx->pc = 0x118698u;
    SET_GPR_U32(ctx, 31, 0x1186A0u);
    ctx->pc = 0x11869Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x118698u;
            // 0x11869c: 0x24e7ffff  addiu       $a3, $a3, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x112260u;
    if (runtime->hasFunction(0x112260u)) {
        auto targetFn = runtime->lookupFunction(0x112260u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1186A0u; }
        if (ctx->pc != 0x1186A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        kprintf_0x112260(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1186A0u; }
        if (ctx->pc != 0x1186A0u) { return; }
    }
    ctx->pc = 0x1186A0u;
label_1186a0:
    // 0x1186a0: 0x40803000  mtc0        $zero, Wired
    ctx->pc = 0x1186a0u;
    ctx->cop0_wired = GPR_U32(ctx, 0) & 0x3F; ctx->cop0_random = 47;
    // 0x1186a4: 0x40f  sync.p
    ctx->pc = 0x1186a4u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x1186a8: 0x8e511568  lw          $s1, 0x1568($s2)
    ctx->pc = 0x1186a8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 5480)));
    // 0x1186ac: 0x2a220031  slti        $v0, $s1, 0x31
    ctx->pc = 0x1186acu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)49) ? 1 : 0);
    // 0x1186b0: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1186B0u;
    {
        const bool branch_taken_0x1186b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1186B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1186B0u;
            // 0x1186b4: 0xc82d  daddu       $t9, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 25, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1186b0) {
            ctx->pc = 0x1186CCu;
            goto label_1186cc;
        }
    }
    ctx->pc = 0x1186B8u;
    // 0x1186b8: 0x3c040036  lui         $a0, 0x36
    ctx->pc = 0x1186b8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)54 << 16));
    // 0x1186bc: 0xc044898  jal         func_112260
    ctx->pc = 0x1186BCu;
    SET_GPR_U32(ctx, 31, 0x1186C4u);
    ctx->pc = 0x1186C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1186BCu;
            // 0x1186c0: 0x24840d68  addiu       $a0, $a0, 0xD68 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 3432));
        ctx->in_delay_slot = false;
    ctx->pc = 0x112260u;
    if (runtime->hasFunction(0x112260u)) {
        auto targetFn = runtime->lookupFunction(0x112260u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1186C4u; }
        if (ctx->pc != 0x1186C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        kprintf_0x112260(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1186C4u; }
        if (ctx->pc != 0x1186C4u) { return; }
    }
    ctx->pc = 0x1186C4u;
label_1186c4:
    // 0x1186c4: 0xc0463ec  jal         func_118FB0
    ctx->pc = 0x1186C4u;
    SET_GPR_U32(ctx, 31, 0x1186CCu);
    ctx->pc = 0x1186C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1186C4u;
            // 0x1186c8: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x118FB0u;
    if (runtime->hasFunction(0x118FB0u)) {
        auto targetFn = runtime->lookupFunction(0x118FB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1186CCu; }
        if (ctx->pc != 0x1186CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Exit_0x118fb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1186CCu; }
        if (ctx->pc != 0x1186CCu) { return; }
    }
    ctx->pc = 0x1186CCu;
label_1186cc:
    // 0x1186cc: 0x331102a  slt         $v0, $t9, $s1
    ctx->pc = 0x1186ccu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 25) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x1186d0: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1186D0u;
    {
        const bool branch_taken_0x1186d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1186D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1186D0u;
            // 0x1186d4: 0x8e100010  lw          $s0, 0x10($s0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1186d0) {
            ctx->pc = 0x118708u;
            goto label_118708;
        }
    }
    ctx->pc = 0x1186D8u;
    // 0x1186d8: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x1186d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1186dc: 0x0  nop
    ctx->pc = 0x1186dcu;
    // NOP
label_1186e0:
    // 0x1186e0: 0x320202d  daddu       $a0, $t9, $zero
    ctx->pc = 0x1186e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 25) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1186e4: 0x8e060004  lw          $a2, 0x4($s0)
    ctx->pc = 0x1186e4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1186e8: 0x8e070008  lw          $a3, 0x8($s0)
    ctx->pc = 0x1186e8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1186ec: 0x8e08000c  lw          $t0, 0xC($s0)
    ctx->pc = 0x1186ecu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1186f0: 0xc04615c  jal         func_118570
    ctx->pc = 0x1186F0u;
    SET_GPR_U32(ctx, 31, 0x1186F8u);
    ctx->pc = 0x1186F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1186F0u;
            // 0x1186f4: 0x26100010  addiu       $s0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x118570u;
    if (runtime->hasFunction(0x118570u)) {
        auto targetFn = runtime->lookupFunction(0x118570u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1186F8u; }
        if (ctx->pc != 0x1186F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2__SetTLBEntry_0x118570(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1186F8u; }
        if (ctx->pc != 0x1186F8u) { return; }
    }
    ctx->pc = 0x1186F8u;
label_1186f8:
    // 0x1186f8: 0x27390001  addiu       $t9, $t9, 0x1
    ctx->pc = 0x1186f8u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), 1));
    // 0x1186fc: 0x331102a  slt         $v0, $t9, $s1
    ctx->pc = 0x1186fcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 25) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x118700: 0x5440fff7  bnel        $v0, $zero, . + 4 + (-0x9 << 2)
    ctx->pc = 0x118700u;
    {
        const bool branch_taken_0x118700 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x118700) {
            ctx->pc = 0x118704u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x118700u;
            // 0x118704: 0x8e050000  lw          $a1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1186E0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1186e0;
        }
    }
    ctx->pc = 0x118708u;
label_118708:
    // 0x118708: 0x26501568  addiu       $s0, $s2, 0x1568
    ctx->pc = 0x118708u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 5480));
    // 0x11870c: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x11870cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x118710: 0x3228821  addu        $s1, $t9, $v0
    ctx->pc = 0x118710u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 2)));
    // 0x118714: 0x2a230031  slti        $v1, $s1, 0x31
    ctx->pc = 0x118714u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)49) ? 1 : 0);
    // 0x118718: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x118718u;
    {
        const bool branch_taken_0x118718 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x11871Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x118718u;
            // 0x11871c: 0x331102a  slt         $v0, $t9, $s1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 25) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x118718) {
            ctx->pc = 0x118738u;
            goto label_118738;
        }
    }
    ctx->pc = 0x118720u;
    // 0x118720: 0x3c040036  lui         $a0, 0x36
    ctx->pc = 0x118720u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)54 << 16));
    // 0x118724: 0xc044898  jal         func_112260
    ctx->pc = 0x118724u;
    SET_GPR_U32(ctx, 31, 0x11872Cu);
    ctx->pc = 0x118728u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x118724u;
            // 0x118728: 0x24840d80  addiu       $a0, $a0, 0xD80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 3456));
        ctx->in_delay_slot = false;
    ctx->pc = 0x112260u;
    if (runtime->hasFunction(0x112260u)) {
        auto targetFn = runtime->lookupFunction(0x112260u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11872Cu; }
        if (ctx->pc != 0x11872Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        kprintf_0x112260(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11872Cu; }
        if (ctx->pc != 0x11872Cu) { return; }
    }
    ctx->pc = 0x11872Cu;
label_11872c:
    // 0x11872c: 0xc0463ec  jal         func_118FB0
    ctx->pc = 0x11872Cu;
    SET_GPR_U32(ctx, 31, 0x118734u);
    ctx->pc = 0x118730u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11872Cu;
            // 0x118730: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x118FB0u;
    if (runtime->hasFunction(0x118FB0u)) {
        auto targetFn = runtime->lookupFunction(0x118FB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x118734u; }
        if (ctx->pc != 0x118734u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Exit_0x118fb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x118734u; }
        if (ctx->pc != 0x118734u) { return; }
    }
    ctx->pc = 0x118734u;
label_118734:
    // 0x118734: 0x331102a  slt         $v0, $t9, $s1
    ctx->pc = 0x118734u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 25) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
label_118738:
    // 0x118738: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x118738u;
    {
        const bool branch_taken_0x118738 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11873Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x118738u;
            // 0x11873c: 0x8e100014  lw          $s0, 0x14($s0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x118738) {
            ctx->pc = 0x118770u;
            goto label_118770;
        }
    }
    ctx->pc = 0x118740u;
    // 0x118740: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x118740u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x118744: 0x0  nop
    ctx->pc = 0x118744u;
    // NOP
label_118748:
    // 0x118748: 0x320202d  daddu       $a0, $t9, $zero
    ctx->pc = 0x118748u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 25) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11874c: 0x8e060004  lw          $a2, 0x4($s0)
    ctx->pc = 0x11874cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x118750: 0x8e070008  lw          $a3, 0x8($s0)
    ctx->pc = 0x118750u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x118754: 0x8e08000c  lw          $t0, 0xC($s0)
    ctx->pc = 0x118754u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x118758: 0xc04615c  jal         func_118570
    ctx->pc = 0x118758u;
    SET_GPR_U32(ctx, 31, 0x118760u);
    ctx->pc = 0x11875Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x118758u;
            // 0x11875c: 0x26100010  addiu       $s0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x118570u;
    if (runtime->hasFunction(0x118570u)) {
        auto targetFn = runtime->lookupFunction(0x118570u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x118760u; }
        if (ctx->pc != 0x118760u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2__SetTLBEntry_0x118570(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x118760u; }
        if (ctx->pc != 0x118760u) { return; }
    }
    ctx->pc = 0x118760u;
label_118760:
    // 0x118760: 0x27390001  addiu       $t9, $t9, 0x1
    ctx->pc = 0x118760u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), 1));
    // 0x118764: 0x331102a  slt         $v0, $t9, $s1
    ctx->pc = 0x118764u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 25) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x118768: 0x5440fff7  bnel        $v0, $zero, . + 4 + (-0x9 << 2)
    ctx->pc = 0x118768u;
    {
        const bool branch_taken_0x118768 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x118768) {
            ctx->pc = 0x11876Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x118768u;
            // 0x11876c: 0x8e050000  lw          $a1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x118748u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_118748;
        }
    }
    ctx->pc = 0x118770u;
label_118770:
    // 0x118770: 0x26501568  addiu       $s0, $s2, 0x1568
    ctx->pc = 0x118770u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 5480));
    // 0x118774: 0xae19000c  sw          $t9, 0xC($s0)
    ctx->pc = 0x118774u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 25));
    // 0x118778: 0x40993000  mtc0        $t9, Wired
    ctx->pc = 0x118778u;
    ctx->cop0_wired = GPR_U32(ctx, 25) & 0x3F; ctx->cop0_random = 47;
    // 0x11877c: 0x40f  sync.p
    ctx->pc = 0x11877cu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x118780: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x118780u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x118784: 0x58400019  blezl       $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x118784u;
    {
        const bool branch_taken_0x118784 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x118784) {
            ctx->pc = 0x118788u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x118784u;
            // 0x118788: 0x320802d  daddu       $s0, $t9, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 25) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1187ECu;
            goto label_1187ec;
        }
    }
    ctx->pc = 0x11878Cu;
    // 0x11878c: 0x3228821  addu        $s1, $t9, $v0
    ctx->pc = 0x11878cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 2)));
    // 0x118790: 0x2a220031  slti        $v0, $s1, 0x31
    ctx->pc = 0x118790u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)49) ? 1 : 0);
    // 0x118794: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x118794u;
    {
        const bool branch_taken_0x118794 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x118798u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x118794u;
            // 0x118798: 0x331102a  slt         $v0, $t9, $s1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 25) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x118794) {
            ctx->pc = 0x1187B4u;
            goto label_1187b4;
        }
    }
    ctx->pc = 0x11879Cu;
    // 0x11879c: 0x3c040036  lui         $a0, 0x36
    ctx->pc = 0x11879cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)54 << 16));
    // 0x1187a0: 0xc044898  jal         func_112260
    ctx->pc = 0x1187A0u;
    SET_GPR_U32(ctx, 31, 0x1187A8u);
    ctx->pc = 0x1187A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1187A0u;
            // 0x1187a4: 0x24840d98  addiu       $a0, $a0, 0xD98 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 3480));
        ctx->in_delay_slot = false;
    ctx->pc = 0x112260u;
    if (runtime->hasFunction(0x112260u)) {
        auto targetFn = runtime->lookupFunction(0x112260u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1187A8u; }
        if (ctx->pc != 0x1187A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        kprintf_0x112260(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1187A8u; }
        if (ctx->pc != 0x1187A8u) { return; }
    }
    ctx->pc = 0x1187A8u;
label_1187a8:
    // 0x1187a8: 0xc0463ec  jal         func_118FB0
    ctx->pc = 0x1187A8u;
    SET_GPR_U32(ctx, 31, 0x1187B0u);
    ctx->pc = 0x1187ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1187A8u;
            // 0x1187ac: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x118FB0u;
    if (runtime->hasFunction(0x118FB0u)) {
        auto targetFn = runtime->lookupFunction(0x118FB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1187B0u; }
        if (ctx->pc != 0x1187B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Exit_0x118fb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1187B0u; }
        if (ctx->pc != 0x1187B0u) { return; }
    }
    ctx->pc = 0x1187B0u;
label_1187b0:
    // 0x1187b0: 0x331102a  slt         $v0, $t9, $s1
    ctx->pc = 0x1187b0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 25) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
label_1187b4:
    // 0x1187b4: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1187B4u;
    {
        const bool branch_taken_0x1187b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1187B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1187B4u;
            // 0x1187b8: 0x8e100018  lw          $s0, 0x18($s0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1187b4) {
            ctx->pc = 0x1187E8u;
            goto label_1187e8;
        }
    }
    ctx->pc = 0x1187BCu;
    // 0x1187bc: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x1187bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1187c0:
    // 0x1187c0: 0x320202d  daddu       $a0, $t9, $zero
    ctx->pc = 0x1187c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 25) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1187c4: 0x8e060004  lw          $a2, 0x4($s0)
    ctx->pc = 0x1187c4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1187c8: 0x8e070008  lw          $a3, 0x8($s0)
    ctx->pc = 0x1187c8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1187cc: 0x8e08000c  lw          $t0, 0xC($s0)
    ctx->pc = 0x1187ccu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1187d0: 0xc04615c  jal         func_118570
    ctx->pc = 0x1187D0u;
    SET_GPR_U32(ctx, 31, 0x1187D8u);
    ctx->pc = 0x1187D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1187D0u;
            // 0x1187d4: 0x26100010  addiu       $s0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x118570u;
    if (runtime->hasFunction(0x118570u)) {
        auto targetFn = runtime->lookupFunction(0x118570u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1187D8u; }
        if (ctx->pc != 0x1187D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2__SetTLBEntry_0x118570(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1187D8u; }
        if (ctx->pc != 0x1187D8u) { return; }
    }
    ctx->pc = 0x1187D8u;
label_1187d8:
    // 0x1187d8: 0x27390001  addiu       $t9, $t9, 0x1
    ctx->pc = 0x1187d8u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), 1));
    // 0x1187dc: 0x331102a  slt         $v0, $t9, $s1
    ctx->pc = 0x1187dcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 25) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x1187e0: 0x5440fff7  bnel        $v0, $zero, . + 4 + (-0x9 << 2)
    ctx->pc = 0x1187E0u;
    {
        const bool branch_taken_0x1187e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1187e0) {
            ctx->pc = 0x1187E4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1187E0u;
            // 0x1187e4: 0x8e050000  lw          $a1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1187C0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1187c0;
        }
    }
    ctx->pc = 0x1187E8u;
label_1187e8:
    // 0x1187e8: 0x320802d  daddu       $s0, $t9, $zero
    ctx->pc = 0x1187e8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 25) + (uint64_t)GPR_U64(ctx, 0));
label_1187ec:
    // 0x1187ec: 0x2a020030  slti        $v0, $s0, 0x30
    ctx->pc = 0x1187ecu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)48) ? 1 : 0);
    // 0x1187f0: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1187F0u;
    {
        const bool branch_taken_0x1187f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1187F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1187F0u;
            // 0x1187f4: 0x19cb40  sll         $t9, $t9, 13 (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)SLL32(GPR_U32(ctx, 25), 13));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1187f0) {
            ctx->pc = 0x118828u;
            goto label_118828;
        }
    }
    ctx->pc = 0x1187F8u;
    // 0x1187f8: 0x3c02e000  lui         $v0, 0xE000
    ctx->pc = 0x1187f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57344 << 16));
    // 0x1187fc: 0x3228821  addu        $s1, $t9, $v0
    ctx->pc = 0x1187fcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 2)));
label_118800:
    // 0x118800: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x118800u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x118804: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x118804u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x118808: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x118808u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11880c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x11880cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x118810: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x118810u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x118814: 0xc04615c  jal         func_118570
    ctx->pc = 0x118814u;
    SET_GPR_U32(ctx, 31, 0x11881Cu);
    ctx->pc = 0x118818u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x118814u;
            // 0x118818: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x118570u;
    if (runtime->hasFunction(0x118570u)) {
        auto targetFn = runtime->lookupFunction(0x118570u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11881Cu; }
        if (ctx->pc != 0x11881Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2__SetTLBEntry_0x118570(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11881Cu; }
        if (ctx->pc != 0x11881Cu) { return; }
    }
    ctx->pc = 0x11881Cu;
label_11881c:
    // 0x11881c: 0x2a020030  slti        $v0, $s0, 0x30
    ctx->pc = 0x11881cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)48) ? 1 : 0);
    // 0x118820: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x118820u;
    {
        const bool branch_taken_0x118820 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x118824u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x118820u;
            // 0x118824: 0x26312000  addiu       $s1, $s1, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8192));
        ctx->in_delay_slot = false;
        if (branch_taken_0x118820) {
            ctx->pc = 0x118800u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_118800;
        }
    }
    ctx->pc = 0x118828u;
label_118828:
    // 0x118828: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x118828u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x11882c: 0x320102d  daddu       $v0, $t9, $zero
    ctx->pc = 0x11882cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 25) + (uint64_t)GPR_U64(ctx, 0));
    // 0x118830: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x118830u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x118834: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x118834u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x118838: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x118838u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11883c: 0x3e00008  jr          $ra
    ctx->pc = 0x11883Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x118840u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11883Cu;
            // 0x118840: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x118844u;
}
