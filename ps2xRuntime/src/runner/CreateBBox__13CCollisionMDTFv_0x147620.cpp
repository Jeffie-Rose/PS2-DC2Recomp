#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: CreateBBox__13CCollisionMDTFv
// Address: 0x147620 - 0x147700
void CreateBBox__13CCollisionMDTFv_0x147620(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("CreateBBox__13CCollisionMDTFv_0x147620");
#endif

    switch (ctx->pc) {
        case 0x147690u: goto label_147690;
        case 0x14769cu: goto label_14769c;
        case 0x1476b0u: goto label_1476b0;
        case 0x1476ccu: goto label_1476cc;
        default: break;
    }

    ctx->pc = 0x147620u;

    // 0x147620: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x147620u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x147624: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x147624u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x147628: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x147628u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x14762c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x14762cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x147630: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x147630u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x147634: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x147634u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x147638: 0xac800020  sw          $zero, 0x20($a0)
    ctx->pc = 0x147638u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 0));
    // 0x14763c: 0xac800010  sw          $zero, 0x10($a0)
    ctx->pc = 0x14763cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 0));
    // 0x147640: 0xac800024  sw          $zero, 0x24($a0)
    ctx->pc = 0x147640u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 36), GPR_U32(ctx, 0));
    // 0x147644: 0xac800014  sw          $zero, 0x14($a0)
    ctx->pc = 0x147644u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 0));
    // 0x147648: 0xac800028  sw          $zero, 0x28($a0)
    ctx->pc = 0x147648u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 40), GPR_U32(ctx, 0));
    // 0x14764c: 0xac800018  sw          $zero, 0x18($a0)
    ctx->pc = 0x14764cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 0));
    // 0x147650: 0xac83002c  sw          $v1, 0x2C($a0)
    ctx->pc = 0x147650u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 3));
    // 0x147654: 0xac83001c  sw          $v1, 0x1C($a0)
    ctx->pc = 0x147654u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 3));
    // 0x147658: 0x8c920040  lw          $s2, 0x40($a0)
    ctx->pc = 0x147658u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 64)));
    // 0x14765c: 0x12400022  beqz        $s2, . + 4 + (0x22 << 2)
    ctx->pc = 0x14765Cu;
    {
        const bool branch_taken_0x14765c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x147660u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14765Cu;
            // 0x147660: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14765c) {
            ctx->pc = 0x1476E8u;
            goto label_1476e8;
        }
    }
    ctx->pc = 0x147664u;
    // 0x147664: 0x8e030044  lw          $v1, 0x44($s0)
    ctx->pc = 0x147664u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
    // 0x147668: 0x1c600004  bgtz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x147668u;
    {
        const bool branch_taken_0x147668 = (GPR_S32(ctx, 3) > 0);
        ctx->pc = 0x14766Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x147668u;
            // 0x14766c: 0x26040010  addiu       $a0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x147668) {
            ctx->pc = 0x14767Cu;
            goto label_14767c;
        }
    }
    ctx->pc = 0x147670u;
    // 0x147670: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x147670u;
    {
        const bool branch_taken_0x147670 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x147674u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x147670u;
            // 0x147674: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x147670) {
            ctx->pc = 0x1476ECu;
            goto label_1476ec;
        }
    }
    ctx->pc = 0x147678u;
    // 0x147678: 0x26040010  addiu       $a0, $s0, 0x10
    ctx->pc = 0x147678u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
label_14767c:
    // 0x14767c: 0x26050020  addiu       $a1, $s0, 0x20
    ctx->pc = 0x14767cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x147680: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x147680u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x147684: 0x26470010  addiu       $a3, $s2, 0x10
    ctx->pc = 0x147684u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x147688: 0xc04bd34  jal         func_12F4D0
    ctx->pc = 0x147688u;
    SET_GPR_U32(ctx, 31, 0x147690u);
    ctx->pc = 0x14768Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x147688u;
            // 0x14768c: 0x26480020  addiu       $t0, $s2, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12F4D0u;
    if (runtime->hasFunction(0x12F4D0u)) {
        auto targetFn = runtime->lookupFunction(0x12F4D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x147690u; }
        if (ctx->pc != 0x147690u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgVectorMaxMin__FPfPfPfPfPf_0x12f4d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x147690u; }
        if (ctx->pc != 0x147690u) { return; }
    }
    ctx->pc = 0x147690u;
label_147690:
    // 0x147690: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x147690u;
    {
        const bool branch_taken_0x147690 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x147694u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x147690u;
            // 0x147694: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x147690) {
            ctx->pc = 0x1476D4u;
            goto label_1476d4;
        }
    }
    ctx->pc = 0x147698u;
    // 0x147698: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x147698u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_14769c:
    // 0x14769c: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x14769cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1476a0: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x1476a0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1476a4: 0x26470010  addiu       $a3, $s2, 0x10
    ctx->pc = 0x1476a4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x1476a8: 0xc04bd34  jal         func_12F4D0
    ctx->pc = 0x1476A8u;
    SET_GPR_U32(ctx, 31, 0x1476B0u);
    ctx->pc = 0x1476ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1476A8u;
            // 0x1476ac: 0x26480020  addiu       $t0, $s2, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12F4D0u;
    if (runtime->hasFunction(0x12F4D0u)) {
        auto targetFn = runtime->lookupFunction(0x12F4D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1476B0u; }
        if (ctx->pc != 0x1476B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgVectorMaxMin__FPfPfPfPfPf_0x12f4d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1476B0u; }
        if (ctx->pc != 0x1476B0u) { return; }
    }
    ctx->pc = 0x1476B0u;
label_1476b0:
    // 0x1476b0: 0x26040010  addiu       $a0, $s0, 0x10
    ctx->pc = 0x1476b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x1476b4: 0x26050020  addiu       $a1, $s0, 0x20
    ctx->pc = 0x1476b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x1476b8: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x1476b8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1476bc: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x1476bcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1476c0: 0x27a80040  addiu       $t0, $sp, 0x40
    ctx->pc = 0x1476c0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1476c4: 0xc04bd40  jal         func_12F500
    ctx->pc = 0x1476C4u;
    SET_GPR_U32(ctx, 31, 0x1476CCu);
    ctx->pc = 0x1476C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1476C4u;
            // 0x1476c8: 0x27a90050  addiu       $t1, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12F500u;
    if (runtime->hasFunction(0x12F500u)) {
        auto targetFn = runtime->lookupFunction(0x12F500u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1476CCu; }
        if (ctx->pc != 0x1476CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgVectorMaxMin__FPfPfPfPfPfPf_0x12f500(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1476CCu; }
        if (ctx->pc != 0x1476CCu) { return; }
    }
    ctx->pc = 0x1476CCu;
label_1476cc:
    // 0x1476cc: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1476ccu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1476d0: 0x26520050  addiu       $s2, $s2, 0x50
    ctx->pc = 0x1476d0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 80));
label_1476d4:
    // 0x1476d4: 0x0  nop
    ctx->pc = 0x1476d4u;
    // NOP
    // 0x1476d8: 0x8e030044  lw          $v1, 0x44($s0)
    ctx->pc = 0x1476d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
    // 0x1476dc: 0x223182a  slt         $v1, $s1, $v1
    ctx->pc = 0x1476dcu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1476e0: 0x1460ffee  bnez        $v1, . + 4 + (-0x12 << 2)
    ctx->pc = 0x1476E0u;
    {
        const bool branch_taken_0x1476e0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1476E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1476E0u;
            // 0x1476e4: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1476e0) {
            ctx->pc = 0x14769Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_14769c;
        }
    }
    ctx->pc = 0x1476E8u;
label_1476e8:
    // 0x1476e8: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1476e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1476ec:
    // 0x1476ec: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1476ecu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1476f0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1476f0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1476f4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1476f4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1476f8: 0x3e00008  jr          $ra
    ctx->pc = 0x1476F8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1476FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1476F8u;
            // 0x1476fc: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x147700u;
}
