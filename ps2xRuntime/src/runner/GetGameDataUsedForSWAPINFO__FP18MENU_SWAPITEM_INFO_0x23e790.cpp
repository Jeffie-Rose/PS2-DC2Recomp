#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetGameDataUsedForSWAPINFO__FP18MENU_SWAPITEM_INFO
// Address: 0x23e790 - 0x23e890
void GetGameDataUsedForSWAPINFO__FP18MENU_SWAPITEM_INFO_0x23e790(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetGameDataUsedForSWAPINFO__FP18MENU_SWAPITEM_INFO_0x23e790");
#endif

    switch (ctx->pc) {
        case 0x23e858u: goto label_23e858;
        default: break;
    }

    ctx->pc = 0x23e790u;

    // 0x23e790: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x23e790u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x23e794: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x23e794u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x23e798: 0x84830006  lh          $v1, 0x6($a0)
    ctx->pc = 0x23e798u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 6)));
    // 0x23e79c: 0x60082a  slt         $at, $v1, $zero
    ctx->pc = 0x23e79cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
    // 0x23e7a0: 0x1420002f  bnez        $at, . + 4 + (0x2F << 2)
    ctx->pc = 0x23E7A0u;
    {
        const bool branch_taken_0x23e7a0 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x23E7A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23E7A0u;
            // 0x23e7a4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e7a0) {
            ctx->pc = 0x23E860u;
            goto label_23e860;
        }
    }
    ctx->pc = 0x23E7A8u;
    // 0x23e7a8: 0x32880  sll         $a1, $v1, 2
    ctx->pc = 0x23e7a8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x23e7ac: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x23e7acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x23e7b0: 0x3c0301ed  lui         $v1, 0x1ED
    ctx->pc = 0x23e7b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)493 << 16));
    // 0x23e7b4: 0x2463d8c0  addiu       $v1, $v1, -0x2740
    ctx->pc = 0x23e7b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294957248));
    // 0x23e7b8: 0x652821  addu        $a1, $v1, $a1
    ctx->pc = 0x23e7b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x23e7bc: 0x8ca70000  lw          $a3, 0x0($a1)
    ctx->pc = 0x23e7bcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x23e7c0: 0x84850002  lh          $a1, 0x2($a0)
    ctx->pc = 0x23e7c0u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x23e7c4: 0x14a00009  bnez        $a1, . + 4 + (0x9 << 2)
    ctx->pc = 0x23E7C4u;
    {
        const bool branch_taken_0x23e7c4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x23E7C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23E7C4u;
            // 0x23e7c8: 0x8c23d8c8  lw          $v1, -0x2738($at) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294957256)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e7c4) {
            ctx->pc = 0x23E7ECu;
            goto label_23e7ec;
        }
    }
    ctx->pc = 0x23E7CCu;
    // 0x23e7cc: 0x84860004  lh          $a2, 0x4($a0)
    ctx->pc = 0x23e7ccu;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x23e7d0: 0x610c0  sll         $v0, $a2, 3
    ctx->pc = 0x23e7d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x23e7d4: 0x463021  addu        $a2, $v0, $a2
    ctx->pc = 0x23e7d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x23e7d8: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x23e7d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x23e7dc: 0x461023  subu        $v0, $v0, $a2
    ctx->pc = 0x23e7dcu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x23e7e0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x23e7e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x23e7e4: 0xe21021  addu        $v0, $a3, $v0
    ctx->pc = 0x23e7e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x23e7e8: 0x2442002c  addiu       $v0, $v0, 0x2C
    ctx->pc = 0x23e7e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 44));
label_23e7ec:
    // 0x23e7ec: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x23e7ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x23e7f0: 0x14a6000a  bne         $a1, $a2, . + 4 + (0xA << 2)
    ctx->pc = 0x23E7F0u;
    {
        const bool branch_taken_0x23e7f0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 6));
        ctx->pc = 0x23E7F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23E7F0u;
            // 0x23e7f4: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e7f0) {
            ctx->pc = 0x23E81Cu;
            goto label_23e81c;
        }
    }
    ctx->pc = 0x23E7F8u;
    // 0x23e7f8: 0x84860004  lh          $a2, 0x4($a0)
    ctx->pc = 0x23e7f8u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x23e7fc: 0x610c0  sll         $v0, $a2, 3
    ctx->pc = 0x23e7fcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x23e800: 0x463021  addu        $a2, $v0, $a2
    ctx->pc = 0x23e800u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x23e804: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x23e804u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x23e808: 0x461023  subu        $v0, $v0, $a2
    ctx->pc = 0x23e808u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x23e80c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x23e80cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x23e810: 0xe21021  addu        $v0, $a3, $v0
    ctx->pc = 0x23e810u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x23e814: 0x24420170  addiu       $v0, $v0, 0x170
    ctx->pc = 0x23e814u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 368));
    // 0x23e818: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x23e818u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_23e81c:
    // 0x23e81c: 0x14a60009  bne         $a1, $a2, . + 4 + (0x9 << 2)
    ctx->pc = 0x23E81Cu;
    {
        const bool branch_taken_0x23e81c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 6));
        if (branch_taken_0x23e81c) {
            ctx->pc = 0x23E844u;
            goto label_23e844;
        }
    }
    ctx->pc = 0x23E824u;
    // 0x23e824: 0x84840004  lh          $a0, 0x4($a0)
    ctx->pc = 0x23e824u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x23e828: 0x410c0  sll         $v0, $a0, 3
    ctx->pc = 0x23e828u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x23e82c: 0x442021  addu        $a0, $v0, $a0
    ctx->pc = 0x23e82cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x23e830: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x23e830u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x23e834: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x23e834u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x23e838: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x23e838u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x23e83c: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x23e83cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x23e840: 0x24420030  addiu       $v0, $v0, 0x30
    ctx->pc = 0x23e840u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
label_23e844:
    // 0x23e844: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x23e844u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x23e848: 0x14a3000e  bne         $a1, $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x23E848u;
    {
        const bool branch_taken_0x23e848 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        if (branch_taken_0x23e848) {
            ctx->pc = 0x23E884u;
            goto label_23e884;
        }
    }
    ctx->pc = 0x23E850u;
    // 0x23e850: 0xc0673b8  jal         func_19CEE0
    ctx->pc = 0x23E850u;
    SET_GPR_U32(ctx, 31, 0x23E858u);
    ctx->pc = 0x23E854u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23E850u;
            // 0x23e854: 0x8f8494ac  lw          $a0, -0x6B54($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939820)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19CEE0u;
    if (runtime->hasFunction(0x19CEE0u)) {
        auto targetFn = runtime->lookupFunction(0x19CEE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23E858u; }
        if (ctx->pc != 0x23E858u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetActiveEsa__16CUserDataManagerFv_0x19cee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23E858u; }
        if (ctx->pc != 0x23E858u) { return; }
    }
    ctx->pc = 0x23E858u;
label_23e858:
    // 0x23e858: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x23E858u;
    {
        const bool branch_taken_0x23e858 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23E85Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23E858u;
            // 0x23e85c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e858) {
            ctx->pc = 0x23E888u;
            goto label_23e888;
        }
    }
    ctx->pc = 0x23E860u;
label_23e860:
    // 0x23e860: 0x84840004  lh          $a0, 0x4($a0)
    ctx->pc = 0x23e860u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x23e864: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x23e864u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x23e868: 0x8c22d8d0  lw          $v0, -0x2730($at)
    ctx->pc = 0x23e868u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294957264)));
    // 0x23e86c: 0x418c0  sll         $v1, $a0, 3
    ctx->pc = 0x23e86cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x23e870: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x23e870u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x23e874: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x23e874u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x23e878: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x23e878u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x23e87c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x23e87cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x23e880: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x23e880u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_23e884:
    // 0x23e884: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x23e884u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_23e888:
    // 0x23e888: 0x3e00008  jr          $ra
    ctx->pc = 0x23E888u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23E88Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23E888u;
            // 0x23e88c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x23E890u;
}
