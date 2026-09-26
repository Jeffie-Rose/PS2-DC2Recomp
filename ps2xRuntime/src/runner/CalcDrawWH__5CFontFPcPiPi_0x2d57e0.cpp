#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: CalcDrawWH__5CFontFPcPiPi
// Address: 0x2d57e0 - 0x2d5a14
void CalcDrawWH__5CFontFPcPiPi_0x2d57e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("CalcDrawWH__5CFontFPcPiPi_0x2d57e0");
#endif

    switch (ctx->pc) {
        case 0x2d5824u: goto label_2d5824;
        case 0x2d5848u: goto label_2d5848;
        case 0x2d5854u: goto label_2d5854;
        case 0x2d587cu: goto label_2d587c;
        case 0x2d5894u: goto label_2d5894;
        case 0x2d58a4u: goto label_2d58a4;
        case 0x2d58c0u: goto label_2d58c0;
        case 0x2d58d4u: goto label_2d58d4;
        case 0x2d5900u: goto label_2d5900;
        case 0x2d593cu: goto label_2d593c;
        case 0x2d5950u: goto label_2d5950;
        case 0x2d595cu: goto label_2d595c;
        case 0x2d5978u: goto label_2d5978;
        case 0x2d5984u: goto label_2d5984;
        case 0x2d59bcu: goto label_2d59bc;
        default: break;
    }

    ctx->pc = 0x2d57e0u;

    // 0x2d57e0: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x2d57e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x2d57e4: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x2d57e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x2d57e8: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x2d57e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x2d57ec: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x2d57ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x2d57f0: 0xc0f02d  daddu       $fp, $a2, $zero
    ctx->pc = 0x2d57f0u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d57f4: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x2d57f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x2d57f8: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x2d57f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x2d57fc: 0xa0b02d  daddu       $s6, $a1, $zero
    ctx->pc = 0x2d57fcu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d5800: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x2d5800u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x2d5804: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x2d5804u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d5808: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2d5808u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2d580c: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x2d580cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d5810: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2d5810u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2d5814: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2d5814u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2d5818: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2d5818u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2d581c: 0xc04a422  jal         func_129088
    ctx->pc = 0x2D581Cu;
    SET_GPR_U32(ctx, 31, 0x2D5824u);
    ctx->pc = 0x2D5820u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D581Cu;
            // 0x2d5820: 0xafa700a4  sw          $a3, 0xA4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 164), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129088u;
    if (runtime->hasFunction(0x129088u)) {
        auto targetFn = runtime->lookupFunction(0x129088u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D5824u; }
        if (ctx->pc != 0x2D5824u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strlen_0x129088(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D5824u; }
        if (ctx->pc != 0x2D5824u) { return; }
    }
    ctx->pc = 0x2D5824u;
label_2d5824:
    // 0x2d5824: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x2d5824u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d5828: 0xafa000a8  sw          $zero, 0xA8($sp)
    ctx->pc = 0x2d5828u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 168), GPR_U32(ctx, 0));
    // 0x2d582c: 0x17082a  slt         $at, $zero, $s7
    ctx->pc = 0x2d582cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 23)) ? 1 : 0);
    // 0x2d5830: 0xafa000ac  sw          $zero, 0xAC($sp)
    ctx->pc = 0x2d5830u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 0));
    // 0x2d5834: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2d5834u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d5838: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2d5838u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d583c: 0x10200063  beqz        $at, . + 4 + (0x63 << 2)
    ctx->pc = 0x2D583Cu;
    {
        const bool branch_taken_0x2d583c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D5840u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D583Cu;
            // 0x2d5840: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d583c) {
            ctx->pc = 0x2D59CCu;
            goto label_2d59cc;
        }
    }
    ctx->pc = 0x2D5844u;
    // 0x2d5844: 0x2d2a021  addu        $s4, $s6, $s2
    ctx->pc = 0x2d5844u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 18)));
label_2d5848:
    // 0x2d5848: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2d5848u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d584c: 0xc0b519c  jal         func_2D4670
    ctx->pc = 0x2D584Cu;
    SET_GPR_U32(ctx, 31, 0x2D5854u);
    ctx->pc = 0x2D5850u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D584Cu;
            // 0x2d5850: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D4670u;
    if (runtime->hasFunction(0x2D4670u)) {
        auto targetFn = runtime->lookupFunction(0x2D4670u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D5854u; }
        if (ctx->pc != 0x2D5854u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetGaijiFontNo__5CFontFPc_0x2d4670(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D5854u; }
        if (ctx->pc != 0x2D5854u) { return; }
    }
    ctx->pc = 0x2D5854u;
label_2d5854:
    // 0x2d5854: 0x3053ffff  andi        $s3, $v0, 0xFFFF
    ctx->pc = 0x2d5854u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2d5858: 0x3402fd00  ori         $v0, $zero, 0xFD00
    ctx->pc = 0x2d5858u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)64768);
    // 0x2d585c: 0x262102a  slt         $v0, $s3, $v0
    ctx->pc = 0x2d585cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2d5860: 0x14400019  bnez        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x2D5860u;
    {
        const bool branch_taken_0x2d5860 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D5864u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D5860u;
            // 0x2d5864: 0x3401fd32  ori         $at, $zero, 0xFD32 (Delay Slot)
        SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)64818);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d5860) {
            ctx->pc = 0x2D58C8u;
            goto label_2d58c8;
        }
    }
    ctx->pc = 0x2D5868u;
    // 0x2d5868: 0x261082a  slt         $at, $s3, $at
    ctx->pc = 0x2d5868u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 1)) ? 1 : 0);
    // 0x2d586c: 0x10200016  beqz        $at, . + 4 + (0x16 << 2)
    ctx->pc = 0x2D586Cu;
    {
        const bool branch_taken_0x2d586c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D5870u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D586Cu;
            // 0x2d5870: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d586c) {
            ctx->pc = 0x2D58C8u;
            goto label_2d58c8;
        }
    }
    ctx->pc = 0x2D5874u;
    // 0x2d5874: 0xc0b55c4  jal         func_2D5710
    ctx->pc = 0x2D5874u;
    SET_GPR_U32(ctx, 31, 0x2D587Cu);
    ctx->pc = 0x2D5878u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D5874u;
            // 0x2d5878: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D5710u;
    if (runtime->hasFunction(0x2D5710u)) {
        auto targetFn = runtime->lookupFunction(0x2D5710u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D587Cu; }
        if (ctx->pc != 0x2D587Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetGaijiW__5CFontFi_0x2d5710(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D587Cu; }
        if (ctx->pc != 0x2D587Cu) { return; }
    }
    ctx->pc = 0x2D587Cu;
label_2d587c:
    // 0x2d587c: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x2d587cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x2d5880: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2d5880u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d5884: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2d5884u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x2d5888: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2d5888u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d588c: 0xc0b51b0  jal         func_2D46C0
    ctx->pc = 0x2D588Cu;
    SET_GPR_U32(ctx, 31, 0x2D5894u);
    ctx->pc = 0x2D5890u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D588Cu;
            // 0x2d5890: 0x2028021  addu        $s0, $s0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D46C0u;
    if (runtime->hasFunction(0x2D46C0u)) {
        auto targetFn = runtime->lookupFunction(0x2D46C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D5894u; }
        if (ctx->pc != 0x2D5894u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetGaijiLen__5CFontFi_0x2d46c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D5894u; }
        if (ctx->pc != 0x2D5894u) { return; }
    }
    ctx->pc = 0x2D5894u;
label_2d5894:
    // 0x2d5894: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2d5894u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d5898: 0x2429021  addu        $s2, $s2, $v0
    ctx->pc = 0x2d5898u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x2d589c: 0xc0b55d8  jal         func_2D5760
    ctx->pc = 0x2D589Cu;
    SET_GPR_U32(ctx, 31, 0x2D58A4u);
    ctx->pc = 0x2D58A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D589Cu;
            // 0x2d58a0: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D5760u;
    if (runtime->hasFunction(0x2D5760u)) {
        auto targetFn = runtime->lookupFunction(0x2D5760u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D58A4u; }
        if (ctx->pc != 0x2D58A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetGaijiH__5CFontFi_0x2d5760(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D58A4u; }
        if (ctx->pc != 0x2D58A4u) { return; }
    }
    ctx->pc = 0x2D58A4u;
label_2d58a4:
    // 0x2d58a4: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x2d58a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x2d58a8: 0x27a400a8  addiu       $a0, $sp, 0xA8
    ctx->pc = 0x2d58a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 168));
    // 0x2d58ac: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2d58acu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x2d58b0: 0x27a500ac  addiu       $a1, $sp, 0xAC
    ctx->pc = 0x2d58b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 172));
    // 0x2d58b4: 0x2223821  addu        $a3, $s1, $v0
    ctx->pc = 0x2d58b4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x2d58b8: 0xc0b55ec  jal         func_2D57B0
    ctx->pc = 0x2D58B8u;
    SET_GPR_U32(ctx, 31, 0x2D58C0u);
    ctx->pc = 0x2D58BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D58B8u;
            // 0x2d58bc: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D57B0u;
    if (runtime->hasFunction(0x2D57B0u)) {
        auto targetFn = runtime->lookupFunction(0x2D57B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D58C0u; }
        if (ctx->pc != 0x2D58C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        UpDateWH__FPiPiii_0x2d57b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D58C0u; }
        if (ctx->pc != 0x2D58C0u) { return; }
    }
    ctx->pc = 0x2D58C0u;
label_2d58c0:
    // 0x2d58c0: 0x1000003e  b           . + 4 + (0x3E << 2)
    ctx->pc = 0x2D58C0u;
    {
        const bool branch_taken_0x2d58c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d58c0) {
            ctx->pc = 0x2D59BCu;
            goto label_2d59bc;
        }
    }
    ctx->pc = 0x2D58C8u;
label_2d58c8:
    // 0x2d58c8: 0x82850000  lb          $a1, 0x0($s4)
    ctx->pc = 0x2d58c8u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x2d58cc: 0xc0b522c  jal         func_2D48B0
    ctx->pc = 0x2D58CCu;
    SET_GPR_U32(ctx, 31, 0x2D58D4u);
    ctx->pc = 0x2D58D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D58CCu;
            // 0x2d58d0: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D48B0u;
    if (runtime->hasFunction(0x2D48B0u)) {
        auto targetFn = runtime->lookupFunction(0x2D48B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D58D4u; }
        if (ctx->pc != 0x2D58D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetHalfFontNo__5CFontFc_0x2d48b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D58D4u; }
        if (ctx->pc != 0x2D58D4u) { return; }
    }
    ctx->pc = 0x2D58D4u;
label_2d58d4:
    // 0x2d58d4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2d58d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d58d8: 0x2403fffe  addiu       $v1, $zero, -0x2
    ctx->pc = 0x2d58d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x2d58dc: 0x14a30006  bne         $a1, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x2D58DCu;
    {
        const bool branch_taken_0x2d58dc = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        if (branch_taken_0x2d58dc) {
            ctx->pc = 0x2D58F8u;
            goto label_2d58f8;
        }
    }
    ctx->pc = 0x2D58E4u;
    // 0x2d58e4: 0x8ea300a0  lw          $v1, 0xA0($s5)
    ctx->pc = 0x2d58e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 160)));
    // 0x2d58e8: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2d58e8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d58ec: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x2d58ecu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x2d58f0: 0x10000032  b           . + 4 + (0x32 << 2)
    ctx->pc = 0x2D58F0u;
    {
        const bool branch_taken_0x2d58f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D58F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D58F0u;
            // 0x2d58f4: 0x2238821  addu        $s1, $s1, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d58f0) {
            ctx->pc = 0x2D59BCu;
            goto label_2d59bc;
        }
    }
    ctx->pc = 0x2D58F8u;
label_2d58f8:
    // 0x2d58f8: 0xc0b5110  jal         func_2D4440
    ctx->pc = 0x2D58F8u;
    SET_GPR_U32(ctx, 31, 0x2D5900u);
    ctx->pc = 0x2D58FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D58F8u;
            // 0x2d58fc: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D4440u;
    if (runtime->hasFunction(0x2D4440u)) {
        auto targetFn = runtime->lookupFunction(0x2D4440u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D5900u; }
        if (ctx->pc != 0x2D5900u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckHalfFont__5CFontFi_0x2d4440(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D5900u; }
        if (ctx->pc != 0x2D5900u) { return; }
    }
    ctx->pc = 0x2D5900u;
label_2d5900:
    // 0x2d5900: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x2D5900u;
    {
        const bool branch_taken_0x2d5900 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d5900) {
            ctx->pc = 0x2D5944u;
            goto label_2d5944;
        }
    }
    ctx->pc = 0x2D5908u;
    // 0x2d5908: 0x8ea3009c  lw          $v1, 0x9C($s5)
    ctx->pc = 0x2d5908u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 156)));
    // 0x2d590c: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2D590Cu;
    {
        const bool branch_taken_0x2d590c = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x2D5910u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D590Cu;
            // 0x2d5910: 0x31043  sra         $v0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d590c) {
            ctx->pc = 0x2D591Cu;
            goto label_2d591c;
        }
    }
    ctx->pc = 0x2D5914u;
    // 0x2d5914: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x2d5914u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2d5918: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x2d5918u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
label_2d591c:
    // 0x2d591c: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x2d591cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x2d5920: 0x27a400a8  addiu       $a0, $sp, 0xA8
    ctx->pc = 0x2d5920u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 168));
    // 0x2d5924: 0x8ea200a0  lw          $v0, 0xA0($s5)
    ctx->pc = 0x2d5924u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 160)));
    // 0x2d5928: 0x27a500ac  addiu       $a1, $sp, 0xAC
    ctx->pc = 0x2d5928u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 172));
    // 0x2d592c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2d592cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d5930: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x2d5930u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x2d5934: 0xc0b55ec  jal         func_2D57B0
    ctx->pc = 0x2D5934u;
    SET_GPR_U32(ctx, 31, 0x2D593Cu);
    ctx->pc = 0x2D5938u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D5934u;
            // 0x2d5938: 0x2223821  addu        $a3, $s1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D57B0u;
    if (runtime->hasFunction(0x2D57B0u)) {
        auto targetFn = runtime->lookupFunction(0x2D57B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D593Cu; }
        if (ctx->pc != 0x2D593Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        UpDateWH__FPiPiii_0x2d57b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D593Cu; }
        if (ctx->pc != 0x2D593Cu) { return; }
    }
    ctx->pc = 0x2D593Cu;
label_2d593c:
    // 0x2d593c: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x2D593Cu;
    {
        const bool branch_taken_0x2d593c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d593c) {
            ctx->pc = 0x2D59BCu;
            goto label_2d59bc;
        }
    }
    ctx->pc = 0x2D5944u;
label_2d5944:
    // 0x2d5944: 0x0  nop
    ctx->pc = 0x2d5944u;
    // NOP
    // 0x2d5948: 0xc0b51d0  jal         func_2D4740
    ctx->pc = 0x2D5948u;
    SET_GPR_U32(ctx, 31, 0x2D5950u);
    ctx->pc = 0x2D594Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D5948u;
            // 0x2d594c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D4740u;
    if (runtime->hasFunction(0x2D4740u)) {
        auto targetFn = runtime->lookupFunction(0x2D4740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D5950u; }
        if (ctx->pc != 0x2D5950u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetFontNo__FPc_0x2d4740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D5950u; }
        if (ctx->pc != 0x2D5950u) { return; }
    }
    ctx->pc = 0x2D5950u;
label_2d5950:
    // 0x2d5950: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2d5950u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d5954: 0xc0b50fc  jal         func_2D43F0
    ctx->pc = 0x2D5954u;
    SET_GPR_U32(ctx, 31, 0x2D595Cu);
    ctx->pc = 0x2D5958u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D5954u;
            // 0x2d5958: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D43F0u;
    if (runtime->hasFunction(0x2D43F0u)) {
        auto targetFn = runtime->lookupFunction(0x2D43F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D595Cu; }
        if (ctx->pc != 0x2D595Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckKanjiFont__5CFontFi_0x2d43f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D595Cu; }
        if (ctx->pc != 0x2D595Cu) { return; }
    }
    ctx->pc = 0x2D595Cu;
label_2d595c:
    // 0x2d595c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2D595Cu;
    {
        const bool branch_taken_0x2d595c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d595c) {
            ctx->pc = 0x2D5970u;
            goto label_2d5970;
        }
    }
    ctx->pc = 0x2D5964u;
    // 0x2d5964: 0x8ea2009c  lw          $v0, 0x9C($s5)
    ctx->pc = 0x2d5964u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 156)));
    // 0x2d5968: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x2D5968u;
    {
        const bool branch_taken_0x2d5968 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D596Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D5968u;
            // 0x2d596c: 0x2028021  addu        $s0, $s0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d5968) {
            ctx->pc = 0x2D59A0u;
            goto label_2d59a0;
        }
    }
    ctx->pc = 0x2D5970u;
label_2d5970:
    // 0x2d5970: 0xc0b51d0  jal         func_2D4740
    ctx->pc = 0x2D5970u;
    SET_GPR_U32(ctx, 31, 0x2D5978u);
    ctx->pc = 0x2D5974u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D5970u;
            // 0x2d5974: 0x26840002  addiu       $a0, $s4, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D4740u;
    if (runtime->hasFunction(0x2D4740u)) {
        auto targetFn = runtime->lookupFunction(0x2D4740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D5978u; }
        if (ctx->pc != 0x2D5978u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetFontNo__FPc_0x2d4740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D5978u; }
        if (ctx->pc != 0x2D5978u) { return; }
    }
    ctx->pc = 0x2D5978u;
label_2d5978:
    // 0x2d5978: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2d5978u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d597c: 0xc0b50fc  jal         func_2D43F0
    ctx->pc = 0x2D597Cu;
    SET_GPR_U32(ctx, 31, 0x2D5984u);
    ctx->pc = 0x2D5980u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D597Cu;
            // 0x2d5980: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D43F0u;
    if (runtime->hasFunction(0x2D43F0u)) {
        auto targetFn = runtime->lookupFunction(0x2D43F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D5984u; }
        if (ctx->pc != 0x2D5984u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckKanjiFont__5CFontFi_0x2d43f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D5984u; }
        if (ctx->pc != 0x2D5984u) { return; }
    }
    ctx->pc = 0x2D5984u;
label_2d5984:
    // 0x2d5984: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2D5984u;
    {
        const bool branch_taken_0x2d5984 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d5984) {
            ctx->pc = 0x2D5998u;
            goto label_2d5998;
        }
    }
    ctx->pc = 0x2D598Cu;
    // 0x2d598c: 0x8ea2009c  lw          $v0, 0x9C($s5)
    ctx->pc = 0x2d598cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 156)));
    // 0x2d5990: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2D5990u;
    {
        const bool branch_taken_0x2d5990 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D5994u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D5990u;
            // 0x2d5994: 0x2028021  addu        $s0, $s0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d5990) {
            ctx->pc = 0x2D59A0u;
            goto label_2d59a0;
        }
    }
    ctx->pc = 0x2D5998u;
label_2d5998:
    // 0x2d5998: 0x8ea2009c  lw          $v0, 0x9C($s5)
    ctx->pc = 0x2d5998u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 156)));
    // 0x2d599c: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x2d599cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_2d59a0:
    // 0x2d59a0: 0x8ea200a0  lw          $v0, 0xA0($s5)
    ctx->pc = 0x2d59a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 160)));
    // 0x2d59a4: 0x27a400a8  addiu       $a0, $sp, 0xA8
    ctx->pc = 0x2d59a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 168));
    // 0x2d59a8: 0x27a500ac  addiu       $a1, $sp, 0xAC
    ctx->pc = 0x2d59a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 172));
    // 0x2d59ac: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2d59acu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d59b0: 0x26520002  addiu       $s2, $s2, 0x2
    ctx->pc = 0x2d59b0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 2));
    // 0x2d59b4: 0xc0b55ec  jal         func_2D57B0
    ctx->pc = 0x2D59B4u;
    SET_GPR_U32(ctx, 31, 0x2D59BCu);
    ctx->pc = 0x2D59B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D59B4u;
            // 0x2d59b8: 0x2223821  addu        $a3, $s1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D57B0u;
    if (runtime->hasFunction(0x2D57B0u)) {
        auto targetFn = runtime->lookupFunction(0x2D57B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D59BCu; }
        if (ctx->pc != 0x2D59BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        UpDateWH__FPiPiii_0x2d57b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D59BCu; }
        if (ctx->pc != 0x2D59BCu) { return; }
    }
    ctx->pc = 0x2D59BCu;
label_2d59bc:
    // 0x2d59bc: 0x0  nop
    ctx->pc = 0x2d59bcu;
    // NOP
    // 0x2d59c0: 0x257182a  slt         $v1, $s2, $s7
    ctx->pc = 0x2d59c0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 23)) ? 1 : 0);
    // 0x2d59c4: 0x1460ffa0  bnez        $v1, . + 4 + (-0x60 << 2)
    ctx->pc = 0x2D59C4u;
    {
        const bool branch_taken_0x2d59c4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D59C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D59C4u;
            // 0x2d59c8: 0x2d2a021  addu        $s4, $s6, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d59c4) {
            ctx->pc = 0x2D5848u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2d5848;
        }
    }
    ctx->pc = 0x2D59CCu;
label_2d59cc:
    // 0x2d59cc: 0x0  nop
    ctx->pc = 0x2d59ccu;
    // NOP
    // 0x2d59d0: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x2d59d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x2d59d4: 0xafc30000  sw          $v1, 0x0($fp)
    ctx->pc = 0x2d59d4u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 3));
    // 0x2d59d8: 0x8fa400ac  lw          $a0, 0xAC($sp)
    ctx->pc = 0x2d59d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
    // 0x2d59dc: 0x8fa300a4  lw          $v1, 0xA4($sp)
    ctx->pc = 0x2d59dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 164)));
    // 0x2d59e0: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x2d59e0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    // 0x2d59e4: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x2d59e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2d59e8: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x2d59e8u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2d59ec: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x2d59ecu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2d59f0: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x2d59f0u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2d59f4: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x2d59f4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2d59f8: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x2d59f8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2d59fc: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2d59fcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2d5a00: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2d5a00u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2d5a04: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2d5a04u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d5a08: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2d5a08u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d5a0c: 0x3e00008  jr          $ra
    ctx->pc = 0x2D5A0Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D5A10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D5A0Cu;
            // 0x2d5a10: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2D5A14u;
}
