#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _CHECK_BUTTON__FP12RS_STACKDATAi
// Address: 0x2694a0 - 0x2695bc
void ps2__CHECK_BUTTON__FP12RS_STACKDATAi_0x2694a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__CHECK_BUTTON__FP12RS_STACKDATAi_0x2694a0");
#endif

    switch (ctx->pc) {
        case 0x2694bcu: goto label_2694bc;
        case 0x2694d0u: goto label_2694d0;
        case 0x2695a0u: goto label_2695a0;
        default: break;
    }

    ctx->pc = 0x2694a0u;

    // 0x2694a0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2694a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2694a4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2694a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2694a8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2694a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2694ac: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2694acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2694b0: 0x24910008  addiu       $s1, $a0, 0x8
    ctx->pc = 0x2694b0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x2694b4: 0xc097e18  jal         func_25F860
    ctx->pc = 0x2694B4u;
    SET_GPR_U32(ctx, 31, 0x2694BCu);
    ctx->pc = 0x2694B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2694B4u;
            // 0x2694b8: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2694BCu; }
        if (ctx->pc != 0x2694BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2694BCu; }
        if (ctx->pc != 0x2694BCu) { return; }
    }
    ctx->pc = 0x2694BCu;
label_2694bc:
    // 0x2694bc: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x2694bcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
    // 0x2694c0: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2694c0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2694c4: 0x248476e0  addiu       $a0, $a0, 0x76E0
    ctx->pc = 0x2694c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
    // 0x2694c8: 0xc052c88  jal         func_14B220
    ctx->pc = 0x2694C8u;
    SET_GPR_U32(ctx, 31, 0x2694D0u);
    ctx->pc = 0x2694CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2694C8u;
            // 0x2694cc: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14B220u;
    if (runtime->hasFunction(0x14B220u)) {
        auto targetFn = runtime->lookupFunction(0x14B220u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2694D0u; }
        if (ctx->pc != 0x2694D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPadDown__8CGamePadFv_0x14b220(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2694D0u; }
        if (ctx->pc != 0x2694D0u) { return; }
    }
    ctx->pc = 0x2694D0u;
label_2694d0:
    // 0x2694d0: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x2694d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2694d4: 0x12430028  beq         $s2, $v1, . + 4 + (0x28 << 2)
    ctx->pc = 0x2694D4u;
    {
        const bool branch_taken_0x2694d4 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 3));
        ctx->pc = 0x2694D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2694D4u;
            // 0x2694d8: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2694d4) {
            ctx->pc = 0x269578u;
            goto label_269578;
        }
    }
    ctx->pc = 0x2694DCu;
    // 0x2694dc: 0x12430021  beq         $s2, $v1, . + 4 + (0x21 << 2)
    ctx->pc = 0x2694DCu;
    {
        const bool branch_taken_0x2694dc = (GPR_U64(ctx, 18) == GPR_U64(ctx, 3));
        ctx->pc = 0x2694E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2694DCu;
            // 0x2694e0: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2694dc) {
            ctx->pc = 0x269564u;
            goto label_269564;
        }
    }
    ctx->pc = 0x2694E4u;
    // 0x2694e4: 0x12440012  beq         $s2, $a0, . + 4 + (0x12 << 2)
    ctx->pc = 0x2694E4u;
    {
        const bool branch_taken_0x2694e4 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 4));
        if (branch_taken_0x2694e4) {
            ctx->pc = 0x269530u;
            goto label_269530;
        }
    }
    ctx->pc = 0x2694ECu;
    // 0x2694ec: 0x12400003  beqz        $s2, . + 4 + (0x3 << 2)
    ctx->pc = 0x2694ECu;
    {
        const bool branch_taken_0x2694ec = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x2694ec) {
            ctx->pc = 0x2694FCu;
            goto label_2694fc;
        }
    }
    ctx->pc = 0x2694F4u;
    // 0x2694f4: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x2694F4u;
    {
        const bool branch_taken_0x2694f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2694F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2694F4u;
            // 0x2694f8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2694f4) {
            ctx->pc = 0x26958Cu;
            goto label_26958c;
        }
    }
    ctx->pc = 0x2694FCu;
label_2694fc:
    // 0x2694fc: 0x8f838ad0  lw          $v1, -0x7530($gp)
    ctx->pc = 0x2694fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937296)));
    // 0x269500: 0x14640006  bne         $v1, $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x269500u;
    {
        const bool branch_taken_0x269500 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x269500) {
            ctx->pc = 0x26951Cu;
            goto label_26951c;
        }
    }
    ctx->pc = 0x269508u;
    // 0x269508: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x269508u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
    // 0x26950c: 0x10400021  beqz        $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x26950Cu;
    {
        const bool branch_taken_0x26950c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x26950c) {
            ctx->pc = 0x269594u;
            goto label_269594;
        }
    }
    ctx->pc = 0x269514u;
    // 0x269514: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x269514u;
    {
        const bool branch_taken_0x269514 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x269518u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x269514u;
            // 0x269518: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x269514) {
            ctx->pc = 0x269594u;
            goto label_269594;
        }
    }
    ctx->pc = 0x26951Cu;
label_26951c:
    // 0x26951c: 0x30420040  andi        $v0, $v0, 0x40
    ctx->pc = 0x26951cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)64);
    // 0x269520: 0x1040001c  beqz        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x269520u;
    {
        const bool branch_taken_0x269520 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x269520) {
            ctx->pc = 0x269594u;
            goto label_269594;
        }
    }
    ctx->pc = 0x269528u;
    // 0x269528: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x269528u;
    {
        const bool branch_taken_0x269528 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26952Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x269528u;
            // 0x26952c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x269528) {
            ctx->pc = 0x269594u;
            goto label_269594;
        }
    }
    ctx->pc = 0x269530u;
label_269530:
    // 0x269530: 0x8f838ad0  lw          $v1, -0x7530($gp)
    ctx->pc = 0x269530u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937296)));
    // 0x269534: 0x14640006  bne         $v1, $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x269534u;
    {
        const bool branch_taken_0x269534 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x269534) {
            ctx->pc = 0x269550u;
            goto label_269550;
        }
    }
    ctx->pc = 0x26953Cu;
    // 0x26953c: 0x30420040  andi        $v0, $v0, 0x40
    ctx->pc = 0x26953cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)64);
    // 0x269540: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x269540u;
    {
        const bool branch_taken_0x269540 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x269540) {
            ctx->pc = 0x269594u;
            goto label_269594;
        }
    }
    ctx->pc = 0x269548u;
    // 0x269548: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x269548u;
    {
        const bool branch_taken_0x269548 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26954Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x269548u;
            // 0x26954c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x269548) {
            ctx->pc = 0x269594u;
            goto label_269594;
        }
    }
    ctx->pc = 0x269550u;
label_269550:
    // 0x269550: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x269550u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
    // 0x269554: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x269554u;
    {
        const bool branch_taken_0x269554 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x269554) {
            ctx->pc = 0x269594u;
            goto label_269594;
        }
    }
    ctx->pc = 0x26955Cu;
    // 0x26955c: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x26955Cu;
    {
        const bool branch_taken_0x26955c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x269560u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26955Cu;
            // 0x269560: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26955c) {
            ctx->pc = 0x269594u;
            goto label_269594;
        }
    }
    ctx->pc = 0x269564u;
label_269564:
    // 0x269564: 0x30420080  andi        $v0, $v0, 0x80
    ctx->pc = 0x269564u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
    // 0x269568: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x269568u;
    {
        const bool branch_taken_0x269568 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26956Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x269568u;
            // 0x26956c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x269568) {
            ctx->pc = 0x269598u;
            goto label_269598;
        }
    }
    ctx->pc = 0x269570u;
    // 0x269570: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x269570u;
    {
        const bool branch_taken_0x269570 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x269574u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x269570u;
            // 0x269574: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x269570) {
            ctx->pc = 0x269594u;
            goto label_269594;
        }
    }
    ctx->pc = 0x269578u;
label_269578:
    // 0x269578: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x269578u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x26957c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x26957Cu;
    {
        const bool branch_taken_0x26957c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x26957c) {
            ctx->pc = 0x269594u;
            goto label_269594;
        }
    }
    ctx->pc = 0x269584u;
    // 0x269584: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x269584u;
    {
        const bool branch_taken_0x269584 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x269588u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x269584u;
            // 0x269588: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x269584) {
            ctx->pc = 0x269594u;
            goto label_269594;
        }
    }
    ctx->pc = 0x26958Cu;
label_26958c:
    // 0x26958c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x26958Cu;
    {
        const bool branch_taken_0x26958c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x269590u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26958Cu;
            // 0x269590: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26958c) {
            ctx->pc = 0x2695A8u;
            goto label_2695a8;
        }
    }
    ctx->pc = 0x269594u;
label_269594:
    // 0x269594: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x269594u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_269598:
    // 0x269598: 0xc097e4c  jal         func_25F930
    ctx->pc = 0x269598u;
    SET_GPR_U32(ctx, 31, 0x2695A0u);
    ctx->pc = 0x26959Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x269598u;
            // 0x26959c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F930u;
    if (runtime->hasFunction(0x25F930u)) {
        auto targetFn = runtime->lookupFunction(0x25F930u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2695A0u; }
        if (ctx->pc != 0x2695A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAi_0x25f930(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2695A0u; }
        if (ctx->pc != 0x2695A0u) { return; }
    }
    ctx->pc = 0x2695A0u;
label_2695a0:
    // 0x2695a0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2695a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2695a4: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2695a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_2695a8:
    // 0x2695a8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2695a8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2695ac: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2695acu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2695b0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2695b0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2695b4: 0x3e00008  jr          $ra
    ctx->pc = 0x2695B4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2695B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2695B4u;
            // 0x2695b8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2695BCu;
}
