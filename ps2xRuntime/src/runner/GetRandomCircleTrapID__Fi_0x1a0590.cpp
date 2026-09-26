#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetRandomCircleTrapID__Fi
// Address: 0x1a0590 - 0x1a06a4
void GetRandomCircleTrapID__Fi_0x1a0590(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetRandomCircleTrapID__Fi_0x1a0590");
#endif

    switch (ctx->pc) {
        case 0x1a05acu: goto label_1a05ac;
        case 0x1a05b4u: goto label_1a05b4;
        case 0x1a05c0u: goto label_1a05c0;
        case 0x1a062cu: goto label_1a062c;
        case 0x1a0638u: goto label_1a0638;
        default: break;
    }

    ctx->pc = 0x1a0590u;

    // 0x1a0590: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1a0590u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1a0594: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1a0594u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1a0598: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1a0598u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1a059c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1a059cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1a05a0: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1a05a0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a05a4: 0xc0683a8  jal         func_1A0EA0
    ctx->pc = 0x1A05A4u;
    SET_GPR_U32(ctx, 31, 0x1A05ACu);
    ctx->pc = 0x1A05A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A05A4u;
            // 0x1a05a8: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A0EA0u;
    if (runtime->hasFunction(0x1A0EA0u)) {
        auto targetFn = runtime->lookupFunction(0x1A0EA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A05ACu; }
        if (ctx->pc != 0x1A05ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetBattleCharaInfo__Fv_0x1a0ea0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A05ACu; }
        if (ctx->pc != 0x1A05ACu) { return; }
    }
    ctx->pc = 0x1A05ACu;
label_1a05ac:
    // 0x1a05ac: 0xc04a0ea  jal         func_1283A8
    ctx->pc = 0x1A05ACu;
    SET_GPR_U32(ctx, 31, 0x1A05B4u);
    ctx->pc = 0x1A05B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A05ACu;
            // 0x1a05b0: 0x84510000  lh          $s1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1283A8u;
    if (runtime->hasFunction(0x1283A8u)) {
        auto targetFn = runtime->lookupFunction(0x1283A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A05B4u; }
        if (ctx->pc != 0x1A05B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        rand_0x1283a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A05B4u; }
        if (ctx->pc != 0x1A05B4u) { return; }
    }
    ctx->pc = 0x1A05B4u;
label_1a05b4:
    // 0x1a05b4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1a05b4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a05b8: 0xc04a0e6  jal         func_128398
    ctx->pc = 0x1A05B8u;
    SET_GPR_U32(ctx, 31, 0x1A05C0u);
    ctx->pc = 0x1A05BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A05B8u;
            // 0x1a05bc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128398u;
    if (runtime->hasFunction(0x128398u)) {
        auto targetFn = runtime->lookupFunction(0x128398u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A05C0u; }
        if (ctx->pc != 0x1A05C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        srand_0x128398(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A05C0u; }
        if (ctx->pc != 0x1A05C0u) { return; }
    }
    ctx->pc = 0x1A05C0u;
label_1a05c0:
    // 0x1a05c0: 0x1640000a  bnez        $s2, . + 4 + (0xA << 2)
    ctx->pc = 0x1A05C0u;
    {
        const bool branch_taken_0x1a05c0 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A05C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A05C0u;
            // 0x1a05c4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a05c0) {
            ctx->pc = 0x1A05ECu;
            goto label_1a05ec;
        }
    }
    ctx->pc = 0x1A05C8u;
    // 0x1a05c8: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x1a05c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1a05cc: 0x278280b8  addiu       $v0, $gp, -0x7F48
    ctx->pc = 0x1a05ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294934712));
    // 0x1a05d0: 0x203001a  div         $zero, $s0, $v1
    ctx->pc = 0x1a05d0u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 16);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1a05d4: 0x0  nop
    ctx->pc = 0x1a05d4u;
    // NOP
    // 0x1a05d8: 0x0  nop
    ctx->pc = 0x1a05d8u;
    // NOP
    // 0x1a05dc: 0x1810  mfhi        $v1
    ctx->pc = 0x1a05dcu;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x1a05e0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1a05e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1a05e4: 0x80420000  lb          $v0, 0x0($v0)
    ctx->pc = 0x1a05e4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1a05e8: 0x0  nop
    ctx->pc = 0x1a05e8u;
    // NOP
label_1a05ec:
    // 0x1a05ec: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1a05ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a05f0: 0x1643001c  bne         $s2, $v1, . + 4 + (0x1C << 2)
    ctx->pc = 0x1A05F0u;
    {
        const bool branch_taken_0x1a05f0 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 3));
        ctx->pc = 0x1A05F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A05F0u;
            // 0x1a05f4: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a05f0) {
            ctx->pc = 0x1A0664u;
            goto label_1a0664;
        }
    }
    ctx->pc = 0x1A05F8u;
    // 0x1a05f8: 0x6010004  bgez        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1A05F8u;
    {
        const bool branch_taken_0x1a05f8 = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x1A05FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A05F8u;
            // 0x1a05fc: 0x32040001  andi        $a0, $s0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a05f8) {
            ctx->pc = 0x1A060Cu;
            goto label_1a060c;
        }
    }
    ctx->pc = 0x1A0600u;
    // 0x1a0600: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1A0600u;
    {
        const bool branch_taken_0x1a0600 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A0604u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A0600u;
            // 0x1a0604: 0x278280bc  addiu       $v0, $gp, -0x7F44 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294934716));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a0600) {
            ctx->pc = 0x1A0610u;
            goto label_1a0610;
        }
    }
    ctx->pc = 0x1A0608u;
    // 0x1a0608: 0x2484fffe  addiu       $a0, $a0, -0x2
    ctx->pc = 0x1a0608u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967294));
label_1a060c:
    // 0x1a060c: 0x278280bc  addiu       $v0, $gp, -0x7F44
    ctx->pc = 0x1a060cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294934716));
label_1a0610:
    // 0x1a0610: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x1a0610u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1a0614: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1a0614u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1a0618: 0x80420000  lb          $v0, 0x0($v0)
    ctx->pc = 0x1a0618u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1a061c: 0x14430010  bne         $v0, $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x1A061Cu;
    {
        const bool branch_taken_0x1a061c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x1A0620u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A061Cu;
            // 0x1a0620: 0x2404000b  addiu       $a0, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a061c) {
            ctx->pc = 0x1A0660u;
            goto label_1a0660;
        }
    }
    ctx->pc = 0x1A0624u;
    // 0x1a0624: 0xc0941b0  jal         func_2506C0
    ctx->pc = 0x1A0624u;
    SET_GPR_U32(ctx, 31, 0x1A062Cu);
    ctx->pc = 0x2506C0u;
    if (runtime->hasFunction(0x2506C0u)) {
        auto targetFn = runtime->lookupFunction(0x2506C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A062Cu; }
        if (ctx->pc != 0x1A062Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetRandI__Fi_0x2506c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A062Cu; }
        if (ctx->pc != 0x1A062Cu) { return; }
    }
    ctx->pc = 0x1A062Cu;
label_1a062c:
    // 0x1a062c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1a062cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a0630: 0xc0941b0  jal         func_2506C0
    ctx->pc = 0x1A0630u;
    SET_GPR_U32(ctx, 31, 0x1A0638u);
    ctx->pc = 0x1A0634u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A0630u;
            // 0x1a0634: 0x24040015  addiu       $a0, $zero, 0x15 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2506C0u;
    if (runtime->hasFunction(0x2506C0u)) {
        auto targetFn = runtime->lookupFunction(0x2506C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A0638u; }
        if (ctx->pc != 0x1A0638u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetRandI__Fi_0x2506c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A0638u; }
        if (ctx->pc != 0x1A0638u) { return; }
    }
    ctx->pc = 0x1A0638u;
label_1a0638:
    // 0x1a0638: 0x2021821  addu        $v1, $s0, $v0
    ctx->pc = 0x1a0638u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x1a063c: 0x4610004  bgez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1A063Cu;
    {
        const bool branch_taken_0x1a063c = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x1A0640u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A063Cu;
            // 0x1a0640: 0x30620001  andi        $v0, $v1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a063c) {
            ctx->pc = 0x1A0650u;
            goto label_1a0650;
        }
    }
    ctx->pc = 0x1A0644u;
    // 0x1a0644: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1A0644u;
    {
        const bool branch_taken_0x1a0644 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A0648u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A0644u;
            // 0x1a0648: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a0644) {
            ctx->pc = 0x1A0654u;
            goto label_1a0654;
        }
    }
    ctx->pc = 0x1A064Cu;
    // 0x1a064c: 0x2442fffe  addiu       $v0, $v0, -0x2
    ctx->pc = 0x1a064cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967294));
label_1a0650:
    // 0x1a0650: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1a0650u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1a0654:
    // 0x1a0654: 0x16230002  bne         $s1, $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1A0654u;
    {
        const bool branch_taken_0x1a0654 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 3));
        ctx->pc = 0x1A0658u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A0654u;
            // 0x1a0658: 0x24420008  addiu       $v0, $v0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a0654) {
            ctx->pc = 0x1A0660u;
            goto label_1a0660;
        }
    }
    ctx->pc = 0x1A065Cu;
    // 0x1a065c: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x1a065cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
label_1a0660:
    // 0x1a0660: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1a0660u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1a0664:
    // 0x1a0664: 0x16230002  bne         $s1, $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1A0664u;
    {
        const bool branch_taken_0x1a0664 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 3));
        ctx->pc = 0x1A0668u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A0664u;
            // 0x1a0668: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a0664) {
            ctx->pc = 0x1A0670u;
            goto label_1a0670;
        }
    }
    ctx->pc = 0x1A066Cu;
    // 0x1a066c: 0x2402fffe  addiu       $v0, $zero, -0x2
    ctx->pc = 0x1a066cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
label_1a0670:
    // 0x1a0670: 0x16230006  bne         $s1, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1A0670u;
    {
        const bool branch_taken_0x1a0670 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 3));
        ctx->pc = 0x1A0674u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A0670u;
            // 0x1a0674: 0x24030004  addiu       $v1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a0670) {
            ctx->pc = 0x1A068Cu;
            goto label_1a068c;
        }
    }
    ctx->pc = 0x1A0678u;
    // 0x1a0678: 0x10430004  beq         $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1A0678u;
    {
        const bool branch_taken_0x1a0678 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x1A067Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A0678u;
            // 0x1a067c: 0x2403000c  addiu       $v1, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a0678) {
            ctx->pc = 0x1A068Cu;
            goto label_1a068c;
        }
    }
    ctx->pc = 0x1A0680u;
    // 0x1a0680: 0x10430002  beq         $v0, $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1A0680u;
    {
        const bool branch_taken_0x1a0680 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x1a0680) {
            ctx->pc = 0x1A068Cu;
            goto label_1a068c;
        }
    }
    ctx->pc = 0x1A0688u;
    // 0x1a0688: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1a0688u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1a068c:
    // 0x1a068c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1a068cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1a0690: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1a0690u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a0694: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1a0694u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a0698: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1a0698u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a069c: 0x3e00008  jr          $ra
    ctx->pc = 0x1A069Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A06A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A069Cu;
            // 0x1a06a0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1A06A4u;
}
