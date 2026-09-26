#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sceDevConsDraw
// Address: 0x105068 - 0x105230
void sceDevConsDraw_0x105068(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sceDevConsDraw_0x105068");
#endif

    switch (ctx->pc) {
        case 0x1050c0u: goto label_1050c0;
        case 0x1050f0u: goto label_1050f0;
        case 0x105104u: goto label_105104;
        case 0x105138u: goto label_105138;
        case 0x105168u: goto label_105168;
        case 0x105184u: goto label_105184;
        case 0x10519cu: goto label_10519c;
        case 0x1051a8u: goto label_1051a8;
        case 0x1051b0u: goto label_1051b0;
        case 0x1051bcu: goto label_1051bc;
        case 0x1051ccu: goto label_1051cc;
        case 0x1051f4u: goto label_1051f4;
        default: break;
    }

    ctx->pc = 0x105068u;

    // 0x105068: 0x3c0c0004  lui         $t4, 0x4
    ctx->pc = 0x105068u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)4 << 16));
    // 0x10506c: 0x3c020004  lui         $v0, 0x4
    ctx->pc = 0x10506cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4 << 16));
    // 0x105070: 0x358c60d0  ori         $t4, $t4, 0x60D0
    ctx->pc = 0x105070u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) | (uint64_t)(uint16_t)24784);
    // 0x105074: 0x34426024  ori         $v0, $v0, 0x6024
    ctx->pc = 0x105074u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)24612);
    // 0x105078: 0x3ace823  subu        $sp, $sp, $t4
    ctx->pc = 0x105078u;
    SET_GPR_S32(ctx, 29, (int32_t)SUB32(GPR_U32(ctx, 29), GPR_U32(ctx, 12)));
    // 0x10507c: 0x19d6821  addu        $t5, $t4, $sp
    ctx->pc = 0x10507cu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 29)));
    // 0x105080: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x105080u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x105084: 0xfdb1ff70  sd          $s1, -0x90($t5)
    ctx->pc = 0x105084u;
    WRITE64(ADD32(GPR_U32(ctx, 13), 4294967152), GPR_U64(ctx, 17));
    // 0x105088: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x105088u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10508c: 0xfdbeffe0  sd          $fp, -0x20($t5)
    ctx->pc = 0x10508cu;
    WRITE64(ADD32(GPR_U32(ctx, 13), 4294967264), GPR_U64(ctx, 30));
    // 0x105090: 0xfdb7ffd0  sd          $s7, -0x30($t5)
    ctx->pc = 0x105090u;
    WRITE64(ADD32(GPR_U32(ctx, 13), 4294967248), GPR_U64(ctx, 23));
    // 0x105094: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x105094u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x105098: 0xfdb3ff90  sd          $s3, -0x70($t5)
    ctx->pc = 0x105098u;
    WRITE64(ADD32(GPR_U32(ctx, 13), 4294967184), GPR_U64(ctx, 19));
    // 0x10509c: 0xfdb2ff80  sd          $s2, -0x80($t5)
    ctx->pc = 0x10509cu;
    WRITE64(ADD32(GPR_U32(ctx, 13), 4294967168), GPR_U64(ctx, 18));
    // 0x1050a0: 0xfdb0ff60  sd          $s0, -0xA0($t5)
    ctx->pc = 0x1050a0u;
    WRITE64(ADD32(GPR_U32(ctx, 13), 4294967136), GPR_U64(ctx, 16));
    // 0x1050a4: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1050a4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1050a8: 0xfdbffff0  sd          $ra, -0x10($t5)
    ctx->pc = 0x1050a8u;
    WRITE64(ADD32(GPR_U32(ctx, 13), 4294967280), GPR_U64(ctx, 31));
    // 0x1050ac: 0xfdb6ffc0  sd          $s6, -0x40($t5)
    ctx->pc = 0x1050acu;
    WRITE64(ADD32(GPR_U32(ctx, 13), 4294967232), GPR_U64(ctx, 22));
    // 0x1050b0: 0xfdb5ffb0  sd          $s5, -0x50($t5)
    ctx->pc = 0x1050b0u;
    WRITE64(ADD32(GPR_U32(ctx, 13), 4294967216), GPR_U64(ctx, 21));
    // 0x1050b4: 0xfdb4ffa0  sd          $s4, -0x60($t5)
    ctx->pc = 0x1050b4u;
    WRITE64(ADD32(GPR_U32(ctx, 13), 4294967200), GPR_U64(ctx, 20));
    // 0x1050b8: 0xc0410b0  jal         func_1042C0
    ctx->pc = 0x1050B8u;
    SET_GPR_U32(ctx, 31, 0x1050C0u);
    ctx->pc = 0x1050BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1050B8u;
            // 0x1050bc: 0xac400000  sw          $zero, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1042C0u;
    if (runtime->hasFunction(0x1042C0u)) {
        auto targetFn = runtime->lookupFunction(0x1042C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1050C0u; }
        if (ctx->pc != 0x1050C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceDmaGetChan_0x1042c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1050C0u; }
        if (ctx->pc != 0x1050C0u) { return; }
    }
    ctx->pc = 0x1050C0u;
label_1050c0:
    // 0x1050c0: 0x3c030004  lui         $v1, 0x4
    ctx->pc = 0x1050c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4 << 16));
    // 0x1050c4: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x1050c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1050c8: 0x34636020  ori         $v1, $v1, 0x6020
    ctx->pc = 0x1050c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)24608);
    // 0x1050cc: 0x8e370000  lw          $s7, 0x0($s1)
    ctx->pc = 0x1050ccu;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1050d0: 0x7d1821  addu        $v1, $v1, $sp
    ctx->pc = 0x1050d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 29)));
    // 0x1050d4: 0x27b00020  addiu       $s0, $sp, 0x20
    ctx->pc = 0x1050d4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1050d8: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x1050d8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    // 0x1050dc: 0x40f02d  daddu       $fp, $v0, $zero
    ctx->pc = 0x1050dcu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1050e0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1050e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1050e4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1050e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1050e8: 0xc04198c  jal         func_106630
    ctx->pc = 0x1050E8u;
    SET_GPR_U32(ctx, 31, 0x1050F0u);
    ctx->pc = 0x1050ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1050E8u;
            // 0x1050ec: 0x8e330008  lw          $s3, 0x8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x106630u;
    if (runtime->hasFunction(0x106630u)) {
        auto targetFn = runtime->lookupFunction(0x106630u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1050F0u; }
        if (ctx->pc != 0x1050F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceGifPkInit_0x106630(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1050F0u; }
        if (ctx->pc != 0x1050F0u) { return; }
    }
    ctx->pc = 0x1050F0u;
label_1050f0:
    // 0x1050f0: 0x3c050002  lui         $a1, 0x2
    ctx->pc = 0x1050f0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)2 << 16));
    // 0x1050f4: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x1050f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1050f8: 0x34a53000  ori         $a1, $a1, 0x3000
    ctx->pc = 0x1050f8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)12288);
    // 0x1050fc: 0xc04198c  jal         func_106630
    ctx->pc = 0x1050FCu;
    SET_GPR_U32(ctx, 31, 0x105104u);
    ctx->pc = 0x105100u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1050FCu;
            // 0x105100: 0x2052821  addu        $a1, $s0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x106630u;
    if (runtime->hasFunction(0x106630u)) {
        auto targetFn = runtime->lookupFunction(0x106630u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x105104u; }
        if (ctx->pc != 0x105104u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceGifPkInit_0x106630(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x105104u; }
        if (ctx->pc != 0x105104u) { return; }
    }
    ctx->pc = 0x105104u;
label_105104:
    // 0x105104: 0x8fc20000  lw          $v0, 0x0($fp)
    ctx->pc = 0x105104u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x105108: 0x34420040  ori         $v0, $v0, 0x40
    ctx->pc = 0x105108u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64);
    // 0x10510c: 0xafc20000  sw          $v0, 0x0($fp)
    ctx->pc = 0x10510cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 2));
    // 0x105110: 0x3c020004  lui         $v0, 0x4
    ctx->pc = 0x105110u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4 << 16));
    // 0x105114: 0x34426020  ori         $v0, $v0, 0x6020
    ctx->pc = 0x105114u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)24608);
    // 0x105118: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x105118u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x10511c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x10511cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x105120: 0x10400031  beqz        $v0, . + 4 + (0x31 << 2)
    ctx->pc = 0x105120u;
    {
        const bool branch_taken_0x105120 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x105124u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x105120u;
            // 0x105124: 0x26360018  addiu       $s6, $s1, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 17), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x105120) {
            ctx->pc = 0x1051E8u;
            goto label_1051e8;
        }
    }
    ctx->pc = 0x105128u;
    // 0x105128: 0x27b50004  addiu       $s5, $sp, 0x4
    ctx->pc = 0x105128u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    // 0x10512c: 0x17a040  sll         $s4, $s7, 1
    ctx->pc = 0x10512cu;
    SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 23), 1));
    // 0x105130: 0x3c030004  lui         $v1, 0x4
    ctx->pc = 0x105130u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4 << 16));
    // 0x105134: 0x0  nop
    ctx->pc = 0x105134u;
    // NOP
label_105138:
    // 0x105138: 0x3c040004  lui         $a0, 0x4
    ctx->pc = 0x105138u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4 << 16));
    // 0x10513c: 0x34636024  ori         $v1, $v1, 0x6024
    ctx->pc = 0x10513cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)24612);
    // 0x105140: 0x34846024  ori         $a0, $a0, 0x6024
    ctx->pc = 0x105140u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)24612);
    // 0x105144: 0x7d1821  addu        $v1, $v1, $sp
    ctx->pc = 0x105144u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 29)));
    // 0x105148: 0x9d2021  addu        $a0, $a0, $sp
    ctx->pc = 0x105148u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 29)));
    // 0x10514c: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x10514cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x105150: 0x38900  sll         $s1, $v1, 4
    ctx->pc = 0x105150u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x105154: 0x38620001  xori        $v0, $v1, 0x1
    ctx->pc = 0x105154u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
    // 0x105158: 0x3b18021  addu        $s0, $sp, $s1
    ctx->pc = 0x105158u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 17)));
    // 0x10515c: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x10515cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x105160: 0xc041990  jal         func_106640
    ctx->pc = 0x105160u;
    SET_GPR_U32(ctx, 31, 0x105168u);
    ctx->pc = 0x105164u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x105160u;
            // 0x105164: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x106640u;
    if (runtime->hasFunction(0x106640u)) {
        auto targetFn = runtime->lookupFunction(0x106640u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x105168u; }
        if (ctx->pc != 0x105168u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceGifPkReset_0x106640(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x105168u; }
        if (ctx->pc != 0x105168u) { return; }
    }
    ctx->pc = 0x105168u;
label_105168:
    // 0x105168: 0x260402d  daddu       $t0, $s3, $zero
    ctx->pc = 0x105168u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10516c: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x10516cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x105170: 0x2e0482d  daddu       $t1, $s7, $zero
    ctx->pc = 0x105170u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x105174: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x105174u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x105178: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x105178u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10517c: 0xc0417e8  jal         func_105FA0
    ctx->pc = 0x10517Cu;
    SET_GPR_U32(ctx, 31, 0x105184u);
    ctx->pc = 0x105180u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10517Cu;
            // 0x105180: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x105FA0u;
    if (runtime->hasFunction(0x105FA0u)) {
        auto targetFn = runtime->lookupFunction(0x105FA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x105184u; }
        if (ctx->pc != 0x105184u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceDevFontRefStrN_0x105fa0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x105184u; }
        if (ctx->pc != 0x105184u) { return; }
    }
    ctx->pc = 0x105184u;
label_105184:
    // 0x105184: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x105184u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x105188: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x105188u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10518c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x10518cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x105190: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x105190u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x105194: 0xc0419ee  jal         func_1067B8
    ctx->pc = 0x105194u;
    SET_GPR_U32(ctx, 31, 0x10519Cu);
    ctx->pc = 0x105198u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x105194u;
            // 0x105198: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1067B8u;
    if (runtime->hasFunction(0x1067B8u)) {
        auto targetFn = runtime->lookupFunction(0x1067B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10519Cu; }
        if (ctx->pc != 0x10519Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceGifPkEnd_0x1067b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10519Cu; }
        if (ctx->pc != 0x10519Cu) { return; }
    }
    ctx->pc = 0x10519Cu;
label_10519c:
    // 0x10519c: 0x2749821  addu        $s3, $s3, $s4
    ctx->pc = 0x10519cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 20)));
    // 0x1051a0: 0xc041994  jal         func_106650
    ctx->pc = 0x1051A0u;
    SET_GPR_U32(ctx, 31, 0x1051A8u);
    ctx->pc = 0x1051A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1051A0u;
            // 0x1051a4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x106650u;
    if (runtime->hasFunction(0x106650u)) {
        auto targetFn = runtime->lookupFunction(0x106650u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1051A8u; }
        if (ctx->pc != 0x1051A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceGifPkTerminate_0x106650(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1051A8u; }
        if (ctx->pc != 0x1051A8u) { return; }
    }
    ctx->pc = 0x1051A8u;
label_1051a8:
    // 0x1051a8: 0xc0440d8  jal         func_110360
    ctx->pc = 0x1051A8u;
    SET_GPR_U32(ctx, 31, 0x1051B0u);
    ctx->pc = 0x1051ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1051A8u;
            // 0x1051ac: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x110360u;
    if (runtime->hasFunction(0x110360u)) {
        auto targetFn = runtime->lookupFunction(0x110360u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1051B0u; }
        if (ctx->pc != 0x1051B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FlushCache_0x110360(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1051B0u; }
        if (ctx->pc != 0x1051B0u) { return; }
    }
    ctx->pc = 0x1051B0u;
label_1051b0:
    // 0x1051b0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1051b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1051b4: 0xc040ce6  jal         func_103398
    ctx->pc = 0x1051B4u;
    SET_GPR_U32(ctx, 31, 0x1051BCu);
    ctx->pc = 0x1051B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1051B4u;
            // 0x1051b8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x103398u;
    if (runtime->hasFunction(0x103398u)) {
        auto targetFn = runtime->lookupFunction(0x103398u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1051BCu; }
        if (ctx->pc != 0x1051BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceGsSyncPath_0x103398(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1051BCu; }
        if (ctx->pc != 0x1051BCu) { return; }
    }
    ctx->pc = 0x1051BCu;
label_1051bc:
    // 0x1051bc: 0x2b18821  addu        $s1, $s5, $s1
    ctx->pc = 0x1051bcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 17)));
    // 0x1051c0: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x1051c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1051c4: 0xc041184  jal         func_104610
    ctx->pc = 0x1051C4u;
    SET_GPR_U32(ctx, 31, 0x1051CCu);
    ctx->pc = 0x1051C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1051C4u;
            // 0x1051c8: 0x8e250000  lw          $a1, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x104610u;
    if (runtime->hasFunction(0x104610u)) {
        auto targetFn = runtime->lookupFunction(0x104610u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1051CCu; }
        if (ctx->pc != 0x1051CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceDmaSend_0x104610(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1051CCu; }
        if (ctx->pc != 0x1051CCu) { return; }
    }
    ctx->pc = 0x1051CCu;
label_1051cc:
    // 0x1051cc: 0x3c030004  lui         $v1, 0x4
    ctx->pc = 0x1051ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4 << 16));
    // 0x1051d0: 0x34636020  ori         $v1, $v1, 0x6020
    ctx->pc = 0x1051d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)24608);
    // 0x1051d4: 0x7d1821  addu        $v1, $v1, $sp
    ctx->pc = 0x1051d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 29)));
    // 0x1051d8: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x1051d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1051dc: 0x243102b  sltu        $v0, $s2, $v1
    ctx->pc = 0x1051dcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1051e0: 0x1440ffd5  bnez        $v0, . + 4 + (-0x2B << 2)
    ctx->pc = 0x1051E0u;
    {
        const bool branch_taken_0x1051e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1051E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1051E0u;
            // 0x1051e4: 0x3c030004  lui         $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1051e0) {
            ctx->pc = 0x105138u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_105138;
        }
    }
    ctx->pc = 0x1051E8u;
label_1051e8:
    // 0x1051e8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1051e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1051ec: 0xc040ce6  jal         func_103398
    ctx->pc = 0x1051ECu;
    SET_GPR_U32(ctx, 31, 0x1051F4u);
    ctx->pc = 0x1051F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1051ECu;
            // 0x1051f0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x103398u;
    if (runtime->hasFunction(0x103398u)) {
        auto targetFn = runtime->lookupFunction(0x103398u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1051F4u; }
        if (ctx->pc != 0x1051F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceGsSyncPath_0x103398(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1051F4u; }
        if (ctx->pc != 0x1051F4u) { return; }
    }
    ctx->pc = 0x1051F4u;
label_1051f4:
    // 0x1051f4: 0x3c0c0004  lui         $t4, 0x4
    ctx->pc = 0x1051f4u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)4 << 16));
    // 0x1051f8: 0x358c60d0  ori         $t4, $t4, 0x60D0
    ctx->pc = 0x1051f8u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) | (uint64_t)(uint16_t)24784);
    // 0x1051fc: 0x19d6821  addu        $t5, $t4, $sp
    ctx->pc = 0x1051fcu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 29)));
    // 0x105200: 0xddbffff0  ld          $ra, -0x10($t5)
    ctx->pc = 0x105200u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 13), 4294967280)));
    // 0x105204: 0xddbeffe0  ld          $fp, -0x20($t5)
    ctx->pc = 0x105204u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 13), 4294967264)));
    // 0x105208: 0xddb7ffd0  ld          $s7, -0x30($t5)
    ctx->pc = 0x105208u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 13), 4294967248)));
    // 0x10520c: 0xddb6ffc0  ld          $s6, -0x40($t5)
    ctx->pc = 0x10520cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 13), 4294967232)));
    // 0x105210: 0xddb5ffb0  ld          $s5, -0x50($t5)
    ctx->pc = 0x105210u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 13), 4294967216)));
    // 0x105214: 0xddb4ffa0  ld          $s4, -0x60($t5)
    ctx->pc = 0x105214u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 13), 4294967200)));
    // 0x105218: 0xddb3ff90  ld          $s3, -0x70($t5)
    ctx->pc = 0x105218u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 13), 4294967184)));
    // 0x10521c: 0xddb2ff80  ld          $s2, -0x80($t5)
    ctx->pc = 0x10521cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 13), 4294967168)));
    // 0x105220: 0xddb1ff70  ld          $s1, -0x90($t5)
    ctx->pc = 0x105220u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 13), 4294967152)));
    // 0x105224: 0xddb0ff60  ld          $s0, -0xA0($t5)
    ctx->pc = 0x105224u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 13), 4294967136)));
    // 0x105228: 0x3e00008  jr          $ra
    ctx->pc = 0x105228u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10522Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x105228u;
            // 0x10522c: 0x3ace821  addu        $sp, $sp, $t4 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 12)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x105230u;
}
