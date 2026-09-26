#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _SPT_ASSIGN_SPRITE__FP12RS_STACKDATAi
// Address: 0x2e5490 - 0x2e5564
void ps2__SPT_ASSIGN_SPRITE__FP12RS_STACKDATAi_0x2e5490(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__SPT_ASSIGN_SPRITE__FP12RS_STACKDATAi_0x2e5490");
#endif

    switch (ctx->pc) {
        case 0x2e54d4u: goto label_2e54d4;
        case 0x2e54fcu: goto label_2e54fc;
        case 0x2e551cu: goto label_2e551c;
        case 0x2e5538u: goto label_2e5538;
        default: break;
    }

    ctx->pc = 0x2e5490u;

    // 0x2e5490: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2e5490u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2e5494: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2e5494u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e5498: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2e5498u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2e549c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2e549cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2e54a0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2e54a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2e54a4: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2e54a4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e54a8: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2e54a8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e54ac: 0x12220006  beq         $s1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2E54ACu;
    {
        const bool branch_taken_0x2e54ac = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x2E54B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E54ACu;
            // 0x2e54b0: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e54ac) {
            ctx->pc = 0x2E54C8u;
            goto label_2e54c8;
        }
    }
    ctx->pc = 0x2E54B4u;
    // 0x2e54b4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2e54b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2e54b8: 0x12220004  beq         $s1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2E54B8u;
    {
        const bool branch_taken_0x2e54b8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x2E54BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E54B8u;
            // 0x2e54bc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e54b8) {
            ctx->pc = 0x2E54CCu;
            goto label_2e54cc;
        }
    }
    ctx->pc = 0x2E54C0u;
    // 0x2e54c0: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x2E54C0u;
    {
        const bool branch_taken_0x2e54c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E54C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E54C0u;
            // 0x2e54c4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e54c0) {
            ctx->pc = 0x2E554Cu;
            goto label_2e554c;
        }
    }
    ctx->pc = 0x2E54C8u;
label_2e54c8:
    // 0x2e54c8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2e54c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2e54cc:
    // 0x2e54cc: 0xc0b8ca0  jal         func_2E3280
    ctx->pc = 0x2E54CCu;
    SET_GPR_U32(ctx, 31, 0x2E54D4u);
    ctx->pc = 0x2E54D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E54CCu;
            // 0x2e54d0: 0x24920008  addiu       $s2, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E3280u;
    if (runtime->hasFunction(0x2E3280u)) {
        auto targetFn = runtime->lookupFunction(0x2E3280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E54D4u; }
        if (ctx->pc != 0x2E54D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x2e3280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E54D4u; }
        if (ctx->pc != 0x2E54D4u) { return; }
    }
    ctx->pc = 0x2E54D4u;
label_2e54d4:
    // 0x2e54d4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2e54d4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e54d8: 0x8f829ed0  lw          $v0, -0x6130($gp)
    ctx->pc = 0x2e54d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942416)));
    // 0x2e54dc: 0x8c420028  lw          $v0, 0x28($v0)
    ctx->pc = 0x2e54dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
    // 0x2e54e0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2E54E0u;
    {
        const bool branch_taken_0x2e54e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E54E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E54E0u;
            // 0x2e54e4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e54e0) {
            ctx->pc = 0x2E54F0u;
            goto label_2e54f0;
        }
    }
    ctx->pc = 0x2E54E8u;
    // 0x2e54e8: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x2E54E8u;
    {
        const bool branch_taken_0x2e54e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E54ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E54E8u;
            // 0x2e54ec: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e54e8) {
            ctx->pc = 0x2E5550u;
            goto label_2e5550;
        }
    }
    ctx->pc = 0x2E54F0u;
label_2e54f0:
    // 0x2e54f0: 0x8f849ecc  lw          $a0, -0x6134($gp)
    ctx->pc = 0x2e54f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942412)));
    // 0x2e54f4: 0xc0b879c  jal         func_2E1E70
    ctx->pc = 0x2E54F4u;
    SET_GPR_U32(ctx, 31, 0x2E54FCu);
    ctx->pc = 0x2E54F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E54F4u;
            // 0x2e54f8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E1E70u;
    if (runtime->hasFunction(0x2E1E70u)) {
        auto targetFn = runtime->lookupFunction(0x2E1E70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E54FCu; }
        if (ctx->pc != 0x2E54FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AssignSprite__16CEffectScriptManFi_0x2e1e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E54FCu; }
        if (ctx->pc != 0x2E54FCu) { return; }
    }
    ctx->pc = 0x2E54FCu;
label_2e54fc:
    // 0x2e54fc: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x2E54FCu;
    {
        const bool branch_taken_0x2e54fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E5500u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E54FCu;
            // 0x2e5500: 0x2a230002  slti        $v1, $s1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e54fc) {
            ctx->pc = 0x2E5528u;
            goto label_2e5528;
        }
    }
    ctx->pc = 0x2E5504u;
    // 0x2e5504: 0x2a220002  slti        $v0, $s1, 0x2
    ctx->pc = 0x2e5504u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x2e5508: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2E5508u;
    {
        const bool branch_taken_0x2e5508 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E550Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E5508u;
            // 0x2e550c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e5508) {
            ctx->pc = 0x2E5520u;
            goto label_2e5520;
        }
    }
    ctx->pc = 0x2E5510u;
    // 0x2e5510: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2e5510u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e5514: 0xc0b8cd4  jal         func_2E3350
    ctx->pc = 0x2E5514u;
    SET_GPR_U32(ctx, 31, 0x2E551Cu);
    ctx->pc = 0x2E5518u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E5514u;
            // 0x2e5518: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E3350u;
    if (runtime->hasFunction(0x2E3350u)) {
        auto targetFn = runtime->lookupFunction(0x2E3350u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E551Cu; }
        if (ctx->pc != 0x2E551Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAi_0x2e3350(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E551Cu; }
        if (ctx->pc != 0x2E551Cu) { return; }
    }
    ctx->pc = 0x2E551Cu;
label_2e551c:
    // 0x2e551c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2e551cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2e5520:
    // 0x2e5520: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x2E5520u;
    {
        const bool branch_taken_0x2e5520 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e5520) {
            ctx->pc = 0x2E554Cu;
            goto label_2e554c;
        }
    }
    ctx->pc = 0x2E5528u;
label_2e5528:
    // 0x2e5528: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2E5528u;
    {
        const bool branch_taken_0x2e5528 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E552Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E5528u;
            // 0x2e552c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e5528) {
            ctx->pc = 0x2E5538u;
            goto label_2e5538;
        }
    }
    ctx->pc = 0x2E5530u;
    // 0x2e5530: 0xc0b8cd4  jal         func_2E3350
    ctx->pc = 0x2E5530u;
    SET_GPR_U32(ctx, 31, 0x2E5538u);
    ctx->pc = 0x2E5534u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E5530u;
            // 0x2e5534: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E3350u;
    if (runtime->hasFunction(0x2E3350u)) {
        auto targetFn = runtime->lookupFunction(0x2E3350u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E5538u; }
        if (ctx->pc != 0x2E5538u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAi_0x2e3350(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E5538u; }
        if (ctx->pc != 0x2E5538u) { return; }
    }
    ctx->pc = 0x2E5538u;
label_2e5538:
    // 0x2e5538: 0x8f839ed0  lw          $v1, -0x6130($gp)
    ctx->pc = 0x2e5538u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942416)));
    // 0x2e553c: 0xac620028  sw          $v0, 0x28($v1)
    ctx->pc = 0x2e553cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 40), GPR_U32(ctx, 2));
    // 0x2e5540: 0x8f839ed0  lw          $v1, -0x6130($gp)
    ctx->pc = 0x2e5540u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942416)));
    // 0x2e5544: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2e5544u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e5548: 0xac70002c  sw          $s0, 0x2C($v1)
    ctx->pc = 0x2e5548u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 44), GPR_U32(ctx, 16));
label_2e554c:
    // 0x2e554c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2e554cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_2e5550:
    // 0x2e5550: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2e5550u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2e5554: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2e5554u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e5558: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2e5558u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e555c: 0x3e00008  jr          $ra
    ctx->pc = 0x2E555Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E5560u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E555Cu;
            // 0x2e5560: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2E5564u;
}
