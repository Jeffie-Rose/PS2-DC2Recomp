#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: SearchNowPosItemExist__9CShopMenuFv
// Address: 0x2940a0 - 0x29417c
void SearchNowPosItemExist__9CShopMenuFv_0x2940a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SearchNowPosItemExist__9CShopMenuFv_0x2940a0");
#endif

    switch (ctx->pc) {
        case 0x294114u: goto label_294114;
        case 0x29411cu: goto label_29411c;
        case 0x29412cu: goto label_29412c;
        case 0x294150u: goto label_294150;
        case 0x29415cu: goto label_29415c;
        default: break;
    }

    ctx->pc = 0x2940a0u;

    // 0x2940a0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2940a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2940a4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2940a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2940a8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2940a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2940ac: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2940acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2940b0: 0x84820014  lh          $v0, 0x14($a0)
    ctx->pc = 0x2940b0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x2940b4: 0x2c410008  sltiu       $at, $v0, 0x8
    ctx->pc = 0x2940b4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x2940b8: 0x1020002a  beqz        $at, . + 4 + (0x2A << 2)
    ctx->pc = 0x2940B8u;
    {
        const bool branch_taken_0x2940b8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2940BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2940B8u;
            // 0x2940bc: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2940b8) {
            ctx->pc = 0x294164u;
            goto label_294164;
        }
    }
    ctx->pc = 0x2940C0u;
    // 0x2940c0: 0x3c030037  lui         $v1, 0x37
    ctx->pc = 0x2940c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)55 << 16));
    // 0x2940c4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2940c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2940c8: 0x2463dcc0  addiu       $v1, $v1, -0x2340
    ctx->pc = 0x2940c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294958272));
    // 0x2940cc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2940ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2940d0: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2940d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2940d4: 0x400008  jr          $v0
    ctx->pc = 0x2940D4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2940DCu: goto label_2940dc;
            case 0x294148u: goto label_294148;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2940DCu;
label_2940dc:
    // 0x2940dc: 0x8e0401bc  lw          $a0, 0x1BC($s0)
    ctx->pc = 0x2940dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 444)));
    // 0x2940e0: 0x4800005  bltz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2940E0u;
    {
        const bool branch_taken_0x2940e0 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x2940E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2940E0u;
            // 0x2940e4: 0x8f839840  lw          $v1, -0x67C0($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940736)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2940e0) {
            ctx->pc = 0x2940F8u;
            goto label_2940f8;
        }
    }
    ctx->pc = 0x2940E8u;
    // 0x2940e8: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x2940e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x2940ec: 0x82082a  slt         $at, $a0, $v0
    ctx->pc = 0x2940ecu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2940f0: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x2940F0u;
    {
        const bool branch_taken_0x2940f0 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x2940F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2940F0u;
            // 0x2940f4: 0x41080  sll         $v0, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2940f0) {
            ctx->pc = 0x294100u;
            goto label_294100;
        }
    }
    ctx->pc = 0x2940F8u;
label_2940f8:
    // 0x2940f8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2940F8u;
    {
        const bool branch_taken_0x2940f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2940FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2940F8u;
            // 0x2940fc: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2940f8) {
            ctx->pc = 0x29410Cu;
            goto label_29410c;
        }
    }
    ctx->pc = 0x294100u;
label_294100:
    // 0x294100: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x294100u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x294104: 0x8c510008  lw          $s1, 0x8($v0)
    ctx->pc = 0x294104u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x294108: 0x0  nop
    ctx->pc = 0x294108u;
    // NOP
label_29410c:
    // 0x29410c: 0xc065c30  jal         func_1970C0
    ctx->pc = 0x29410Cu;
    SET_GPR_U32(ctx, 31, 0x294114u);
    ctx->pc = 0x294110u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29410Cu;
            // 0x294110: 0x26040148  addiu       $a0, $s0, 0x148 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 328));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1970C0u;
    if (runtime->hasFunction(0x1970C0u)) {
        auto targetFn = runtime->lookupFunction(0x1970C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x294114u; }
        if (ctx->pc != 0x294114u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Init__13CGameDataUsedFv_0x1970c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x294114u; }
        if (ctx->pc != 0x294114u) { return; }
    }
    ctx->pc = 0x294114u;
label_294114:
    // 0x294114: 0xc065af8  jal         func_196BE0
    ctx->pc = 0x294114u;
    SET_GPR_U32(ctx, 31, 0x29411Cu);
    ctx->pc = 0x196BE0u;
    if (runtime->hasFunction(0x196BE0u)) {
        auto targetFn = runtime->lookupFunction(0x196BE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29411Cu; }
        if (ctx->pc != 0x29411Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetUserDataMan__Fv_0x196be0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29411Cu; }
        if (ctx->pc != 0x29411Cu) { return; }
    }
    ctx->pc = 0x29411Cu;
label_29411c:
    // 0x29411c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x29411cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x294120: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x294120u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x294124: 0xc067a78  jal         func_19E9E0
    ctx->pc = 0x294124u;
    SET_GPR_U32(ctx, 31, 0x29412Cu);
    ctx->pc = 0x294128u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x294124u;
            // 0x294128: 0x26050148  addiu       $a1, $s0, 0x148 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 328));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19E9E0u;
    if (runtime->hasFunction(0x19E9E0u)) {
        auto targetFn = runtime->lookupFunction(0x19E9E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29412Cu; }
        if (ctx->pc != 0x29412Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CopyGameData__16CUserDataManagerFP13CGameDataUsedi_0x19e9e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29412Cu; }
        if (ctx->pc != 0x29412Cu) { return; }
    }
    ctx->pc = 0x29412Cu;
label_29412c:
    // 0x29412c: 0x86030148  lh          $v1, 0x148($s0)
    ctx->pc = 0x29412cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 328)));
    // 0x294130: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x294130u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x294134: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x294134u;
    {
        const bool branch_taken_0x294134 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x294138u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x294134u;
            // 0x294138: 0x26020148  addiu       $v0, $s0, 0x148 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 328));
        ctx->in_delay_slot = false;
        if (branch_taken_0x294134) {
            ctx->pc = 0x294140u;
            goto label_294140;
        }
    }
    ctx->pc = 0x29413Cu;
    // 0x29413c: 0xa6000184  sh          $zero, 0x184($s0)
    ctx->pc = 0x29413cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 388), (uint16_t)GPR_U32(ctx, 0));
label_294140:
    // 0x294140: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x294140u;
    {
        const bool branch_taken_0x294140 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x294144u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x294140u;
            // 0x294144: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x294140) {
            ctx->pc = 0x29416Cu;
            goto label_29416c;
        }
    }
    ctx->pc = 0x294148u;
label_294148:
    // 0x294148: 0xc065af8  jal         func_196BE0
    ctx->pc = 0x294148u;
    SET_GPR_U32(ctx, 31, 0x294150u);
    ctx->pc = 0x196BE0u;
    if (runtime->hasFunction(0x196BE0u)) {
        auto targetFn = runtime->lookupFunction(0x196BE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x294150u; }
        if (ctx->pc != 0x294150u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetUserDataMan__Fv_0x196be0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x294150u; }
        if (ctx->pc != 0x294150u) { return; }
    }
    ctx->pc = 0x294150u;
label_294150:
    // 0x294150: 0x8e0501b4  lw          $a1, 0x1B4($s0)
    ctx->pc = 0x294150u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 436)));
    // 0x294154: 0xc066d14  jal         func_19B450
    ctx->pc = 0x294154u;
    SET_GPR_U32(ctx, 31, 0x29415Cu);
    ctx->pc = 0x294158u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x294154u;
            // 0x294158: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19B450u;
    if (runtime->hasFunction(0x19B450u)) {
        auto targetFn = runtime->lookupFunction(0x19B450u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29415Cu; }
        if (ctx->pc != 0x29415Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetUsedDataPtr__16CUserDataManagerFi_0x19b450(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29415Cu; }
        if (ctx->pc != 0x29415Cu) { return; }
    }
    ctx->pc = 0x29415Cu;
label_29415c:
    // 0x29415c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x29415Cu;
    {
        const bool branch_taken_0x29415c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x29415c) {
            ctx->pc = 0x294168u;
            goto label_294168;
        }
    }
    ctx->pc = 0x294164u;
label_294164:
    // 0x294164: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x294164u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_294168:
    // 0x294168: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x294168u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_29416c:
    // 0x29416c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x29416cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x294170: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x294170u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x294174: 0x3e00008  jr          $ra
    ctx->pc = 0x294174u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x294178u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x294174u;
            // 0x294178: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x29417Cu;
}
