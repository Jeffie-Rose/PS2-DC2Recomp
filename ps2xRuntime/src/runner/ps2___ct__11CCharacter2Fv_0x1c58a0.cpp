#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: __ct__11CCharacter2Fv
// Address: 0x1c58a0 - 0x1c593c
void ps2___ct__11CCharacter2Fv_0x1c58a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___ct__11CCharacter2Fv_0x1c58a0");
#endif

    switch (ctx->pc) {
        case 0x1c58a0u: goto label_1c58a0;
        case 0x1c58a4u: goto label_1c58a4;
        case 0x1c58a8u: goto label_1c58a8;
        case 0x1c58acu: goto label_1c58ac;
        case 0x1c58b0u: goto label_1c58b0;
        case 0x1c58b4u: goto label_1c58b4;
        case 0x1c58b8u: goto label_1c58b8;
        case 0x1c58bcu: goto label_1c58bc;
        case 0x1c58c0u: goto label_1c58c0;
        case 0x1c58c4u: goto label_1c58c4;
        case 0x1c58c8u: goto label_1c58c8;
        case 0x1c58ccu: goto label_1c58cc;
        case 0x1c58d0u: goto label_1c58d0;
        case 0x1c58d4u: goto label_1c58d4;
        case 0x1c58d8u: goto label_1c58d8;
        case 0x1c58dcu: goto label_1c58dc;
        case 0x1c58e0u: goto label_1c58e0;
        case 0x1c58e4u: goto label_1c58e4;
        case 0x1c58e8u: goto label_1c58e8;
        case 0x1c58ecu: goto label_1c58ec;
        case 0x1c58f0u: goto label_1c58f0;
        case 0x1c58f4u: goto label_1c58f4;
        case 0x1c58f8u: goto label_1c58f8;
        case 0x1c58fcu: goto label_1c58fc;
        case 0x1c5900u: goto label_1c5900;
        case 0x1c5904u: goto label_1c5904;
        case 0x1c5908u: goto label_1c5908;
        case 0x1c590cu: goto label_1c590c;
        case 0x1c5910u: goto label_1c5910;
        case 0x1c5914u: goto label_1c5914;
        case 0x1c5918u: goto label_1c5918;
        case 0x1c591cu: goto label_1c591c;
        case 0x1c5920u: goto label_1c5920;
        case 0x1c5924u: goto label_1c5924;
        case 0x1c5928u: goto label_1c5928;
        case 0x1c592cu: goto label_1c592c;
        case 0x1c5930u: goto label_1c5930;
        case 0x1c5934u: goto label_1c5934;
        case 0x1c5938u: goto label_1c5938;
        default: break;
    }

    ctx->pc = 0x1c58a0u;

label_1c58a0:
    // 0x1c58a0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1c58a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1c58a4:
    // 0x1c58a4: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x1c58a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
label_1c58a8:
    // 0x1c58a8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1c58a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_1c58ac:
    // 0x1c58ac: 0x24424fe0  addiu       $v0, $v0, 0x4FE0
    ctx->pc = 0x1c58acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20448));
label_1c58b0:
    // 0x1c58b0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1c58b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1c58b4:
    // 0x1c58b4: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x1c58b4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_1c58b8:
    // 0x1c58b8: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1c58b8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1c58bc:
    // 0x1c58bc: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x1c58bcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_1c58c0:
    // 0x1c58c0: 0x320f809  jalr        $t9
label_1c58c4:
    if (ctx->pc == 0x1C58C4u) {
        ctx->pc = 0x1C58C4u;
            // 0x1c58c4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1C58C8u;
        goto label_1c58c8;
    }
    ctx->pc = 0x1C58C0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1C58C8u);
        ctx->pc = 0x1C58C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C58C0u;
            // 0x1c58c4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1C58C8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1C58C8u; }
            if (ctx->pc != 0x1C58C8u) { return; }
        }
        }
    }
    ctx->pc = 0x1C58C8u;
label_1c58c8:
    // 0x1c58c8: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x1c58c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
label_1c58cc:
    // 0x1c58cc: 0x24425670  addiu       $v0, $v0, 0x5670
    ctx->pc = 0x1c58ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 22128));
label_1c58d0:
    // 0x1c58d0: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x1c58d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_1c58d4:
    // 0x1c58d4: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x1c58d4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1c58d8:
    // 0x1c58d8: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x1c58d8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_1c58dc:
    // 0x1c58dc: 0x320f809  jalr        $t9
label_1c58e0:
    if (ctx->pc == 0x1C58E0u) {
        ctx->pc = 0x1C58E0u;
            // 0x1c58e0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1C58E4u;
        goto label_1c58e4;
    }
    ctx->pc = 0x1C58DCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1C58E4u);
        ctx->pc = 0x1C58E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C58DCu;
            // 0x1c58e0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1C58E4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1C58E4u; }
            if (ctx->pc != 0x1C58E4u) { return; }
        }
        }
    }
    ctx->pc = 0x1C58E4u;
label_1c58e4:
    // 0x1c58e4: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x1c58e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
label_1c58e8:
    // 0x1c58e8: 0x244255f0  addiu       $v0, $v0, 0x55F0
    ctx->pc = 0x1c58e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 22000));
label_1c58ec:
    // 0x1c58ec: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x1c58ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_1c58f0:
    // 0x1c58f0: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x1c58f0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1c58f4:
    // 0x1c58f4: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x1c58f4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_1c58f8:
    // 0x1c58f8: 0x320f809  jalr        $t9
label_1c58fc:
    if (ctx->pc == 0x1C58FCu) {
        ctx->pc = 0x1C58FCu;
            // 0x1c58fc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1C5900u;
        goto label_1c5900;
    }
    ctx->pc = 0x1C58F8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1C5900u);
        ctx->pc = 0x1C58FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C58F8u;
            // 0x1c58fc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1C5900u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1C5900u; }
            if (ctx->pc != 0x1C5900u) { return; }
        }
        }
    }
    ctx->pc = 0x1C5900u;
label_1c5900:
    // 0x1c5900: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x1c5900u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
label_1c5904:
    // 0x1c5904: 0x24425810  addiu       $v0, $v0, 0x5810
    ctx->pc = 0x1c5904u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 22544));
label_1c5908:
    // 0x1c5908: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x1c5908u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_1c590c:
    // 0x1c590c: 0xae00035c  sw          $zero, 0x35C($s0)
    ctx->pc = 0x1c590cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 860), GPR_U32(ctx, 0));
label_1c5910:
    // 0x1c5910: 0xae000364  sw          $zero, 0x364($s0)
    ctx->pc = 0x1c5910u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 868), GPR_U32(ctx, 0));
label_1c5914:
    // 0x1c5914: 0xae000360  sw          $zero, 0x360($s0)
    ctx->pc = 0x1c5914u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 864), GPR_U32(ctx, 0));
label_1c5918:
    // 0x1c5918: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x1c5918u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1c591c:
    // 0x1c591c: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x1c591cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_1c5920:
    // 0x1c5920: 0x320f809  jalr        $t9
label_1c5924:
    if (ctx->pc == 0x1C5924u) {
        ctx->pc = 0x1C5924u;
            // 0x1c5924: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1C5928u;
        goto label_1c5928;
    }
    ctx->pc = 0x1C5920u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1C5928u);
        ctx->pc = 0x1C5924u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C5920u;
            // 0x1c5924: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1C5928u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1C5928u; }
            if (ctx->pc != 0x1C5928u) { return; }
        }
        }
    }
    ctx->pc = 0x1C5928u;
label_1c5928:
    // 0x1c5928: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1c5928u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1c592c:
    // 0x1c592c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1c592cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1c5930:
    // 0x1c5930: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1c5930u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1c5934:
    // 0x1c5934: 0x3e00008  jr          $ra
label_1c5938:
    if (ctx->pc == 0x1C5938u) {
        ctx->pc = 0x1C5938u;
            // 0x1c5938: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x1C593Cu;
        goto label_fallthrough_0x1c5934;
    }
    ctx->pc = 0x1C5934u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C5938u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C5934u;
            // 0x1c5938: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x1c5934:
    ctx->pc = 0x1C593Cu;
}
