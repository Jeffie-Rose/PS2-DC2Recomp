#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: DeadMessage__8CAquaMesFP9CAquaFish
// Address: 0x211850 - 0x2118e0
void DeadMessage__8CAquaMesFP9CAquaFish_0x211850(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("DeadMessage__8CAquaMesFP9CAquaFish_0x211850");
#endif

    switch (ctx->pc) {
        case 0x211878u: goto label_211878;
        case 0x211898u: goto label_211898;
        case 0x2118a4u: goto label_2118a4;
        case 0x2118acu: goto label_2118ac;
        case 0x2118c0u: goto label_2118c0;
        case 0x2118ccu: goto label_2118cc;
        default: break;
    }

    ctx->pc = 0x211850u;

    // 0x211850: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x211850u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x211854: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x211854u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x211858: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x211858u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x21185c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x21185cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x211860: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x211860u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x211864: 0x12000019  beqz        $s0, . + 4 + (0x19 << 2)
    ctx->pc = 0x211864u;
    {
        const bool branch_taken_0x211864 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x211868u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x211864u;
            // 0x211868: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x211864) {
            ctx->pc = 0x2118CCu;
            goto label_2118cc;
        }
    }
    ctx->pc = 0x21186Cu;
    // 0x21186c: 0x8e040938  lw          $a0, 0x938($s0)
    ctx->pc = 0x21186cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2360)));
    // 0x211870: 0xc065dc0  jal         func_197700
    ctx->pc = 0x211870u;
    SET_GPR_U32(ctx, 31, 0x211878u);
    ctx->pc = 0x211874u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x211870u;
            // 0x211874: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x197700u;
    if (runtime->hasFunction(0x197700u)) {
        auto targetFn = runtime->lookupFunction(0x197700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x211878u; }
        if (ctx->pc != 0x211878u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetName__13CGameDataUsedFi_0x197700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x211878u; }
        if (ctx->pc != 0x211878u) { return; }
    }
    ctx->pc = 0x211878u;
label_211878:
    // 0x211878: 0x8e230054  lw          $v1, 0x54($s1)
    ctx->pc = 0x211878u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
    // 0x21187c: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x21187cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x211880: 0xac6417e4  sw          $a0, 0x17E4($v1)
    ctx->pc = 0x211880u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 6116), GPR_U32(ctx, 4));
    // 0x211884: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x211884u;
    {
        const bool branch_taken_0x211884 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x211888u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x211884u;
            // 0x211888: 0x8e230054  lw          $v1, 0x54($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x211884) {
            ctx->pc = 0x211898u;
            goto label_211898;
        }
    }
    ctx->pc = 0x21188Cu;
    // 0x21188c: 0x24641801  addiu       $a0, $v1, 0x1801
    ctx->pc = 0x21188cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 6145));
    // 0x211890: 0xc04a3dc  jal         func_128F70
    ctx->pc = 0x211890u;
    SET_GPR_U32(ctx, 31, 0x211898u);
    ctx->pc = 0x211894u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x211890u;
            // 0x211894: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128F70u;
    if (runtime->hasFunction(0x128F70u)) {
        auto targetFn = runtime->lookupFunction(0x128F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x211898u; }
        if (ctx->pc != 0x211898u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcpy_0x128f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x211898u; }
        if (ctx->pc != 0x211898u) { return; }
    }
    ctx->pc = 0x211898u;
label_211898:
    // 0x211898: 0x8e240054  lw          $a0, 0x54($s1)
    ctx->pc = 0x211898u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
    // 0x21189c: 0xc0562c8  jal         func_158B20
    ctx->pc = 0x21189Cu;
    SET_GPR_U32(ctx, 31, 0x2118A4u);
    ctx->pc = 0x2118A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21189Cu;
            // 0x2118a0: 0x24050134  addiu       $a1, $zero, 0x134 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 308));
        ctx->in_delay_slot = false;
    ctx->pc = 0x158B20u;
    if (runtime->hasFunction(0x158B20u)) {
        auto targetFn = runtime->lookupFunction(0x158B20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2118A4u; }
        if (ctx->pc != 0x2118A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MakeMesWin__6ClsMesFi_0x158b20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2118A4u; }
        if (ctx->pc != 0x2118A4u) { return; }
    }
    ctx->pc = 0x2118A4u;
label_2118a4:
    // 0x2118a4: 0xc054ee8  jal         func_153BA0
    ctx->pc = 0x2118A4u;
    SET_GPR_U32(ctx, 31, 0x2118ACu);
    ctx->pc = 0x2118A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2118A4u;
            // 0x2118a8: 0x8e240054  lw          $a0, 0x54($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x153BA0u;
    if (runtime->hasFunction(0x153BA0u)) {
        auto targetFn = runtime->lookupFunction(0x153BA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2118ACu; }
        if (ctx->pc != 0x2118ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Step__6ClsMesFv_0x153ba0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2118ACu; }
        if (ctx->pc != 0x2118ACu) { return; }
    }
    ctx->pc = 0x2118ACu;
label_2118ac:
    // 0x2118ac: 0x2402012c  addiu       $v0, $zero, 0x12C
    ctx->pc = 0x2118acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 300));
    // 0x2118b0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2118b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2118b4: 0xae220058  sw          $v0, 0x58($s1)
    ctx->pc = 0x2118b4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 88), GPR_U32(ctx, 2));
    // 0x2118b8: 0xc083594  jal         func_20D650
    ctx->pc = 0x2118B8u;
    SET_GPR_U32(ctx, 31, 0x2118C0u);
    ctx->pc = 0x2118BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2118B8u;
            // 0x2118bc: 0x27a50038  addiu       $a1, $sp, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 56));
        ctx->in_delay_slot = false;
    ctx->pc = 0x20D650u;
    if (runtime->hasFunction(0x20D650u)) {
        auto targetFn = runtime->lookupFunction(0x20D650u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2118C0u; }
        if (ctx->pc != 0x2118C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPosition2D__9CAquaFishFPi_0x20d650(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2118C0u; }
        if (ctx->pc != 0x2118C0u) { return; }
    }
    ctx->pc = 0x2118C0u;
label_2118c0:
    // 0x2118c0: 0x8e240054  lw          $a0, 0x54($s1)
    ctx->pc = 0x2118c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
    // 0x2118c4: 0xc083e8c  jal         func_20FA30
    ctx->pc = 0x2118C4u;
    SET_GPR_U32(ctx, 31, 0x2118CCu);
    ctx->pc = 0x2118C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2118C4u;
            // 0x2118c8: 0x27a50038  addiu       $a1, $sp, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 56));
        ctx->in_delay_slot = false;
    ctx->pc = 0x20FA30u;
    if (runtime->hasFunction(0x20FA30u)) {
        auto targetFn = runtime->lookupFunction(0x20FA30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2118CCu; }
        if (ctx->pc != 0x2118CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AquaMesDispAdjustPos__FP6ClsMesPi_0x20fa30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2118CCu; }
        if (ctx->pc != 0x2118CCu) { return; }
    }
    ctx->pc = 0x2118CCu;
label_2118cc:
    // 0x2118cc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2118ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2118d0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2118d0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2118d4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2118d4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2118d8: 0x3e00008  jr          $ra
    ctx->pc = 0x2118D8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2118DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2118D8u;
            // 0x2118dc: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2118E0u;
}
