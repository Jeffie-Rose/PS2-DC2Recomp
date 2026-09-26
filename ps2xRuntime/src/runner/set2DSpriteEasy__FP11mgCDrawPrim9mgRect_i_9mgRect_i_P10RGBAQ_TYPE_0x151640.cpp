#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: set2DSpriteEasy__FP11mgCDrawPrim9mgRect<i>9mgRect<i>P10RGBAQ_TYPE
// Address: 0x151640 - 0x151760
void set2DSpriteEasy__FP11mgCDrawPrim9mgRect_i_9mgRect_i_P10RGBAQ_TYPE_0x151640(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("set2DSpriteEasy__FP11mgCDrawPrim9mgRect_i_9mgRect_i_P10RGBAQ_TYPE_0x151640");
#endif

    switch (ctx->pc) {
        case 0x1516f0u: goto label_1516f0;
        case 0x151700u: goto label_151700;
        case 0x151714u: goto label_151714;
        case 0x151724u: goto label_151724;
        case 0x151738u: goto label_151738;
        default: break;
    }

    ctx->pc = 0x151640u;

    // 0x151640: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x151640u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x151644: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x151644u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x151648: 0x27a80080  addiu       $t0, $sp, 0x80
    ctx->pc = 0x151648u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x15164c: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x15164cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x151650: 0x27a30090  addiu       $v1, $sp, 0x90
    ctx->pc = 0x151650u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x151654: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x151654u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x151658: 0x27b60094  addiu       $s6, $sp, 0x94
    ctx->pc = 0x151658u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 148));
    // 0x15165c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x15165cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x151660: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x151660u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x151664: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x151664u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x151668: 0x27b40088  addiu       $s4, $sp, 0x88
    ctx->pc = 0x151668u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 136));
    // 0x15166c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x15166cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x151670: 0x27b3008c  addiu       $s3, $sp, 0x8C
    ctx->pc = 0x151670u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 140));
    // 0x151674: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x151674u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x151678: 0x27b20098  addiu       $s2, $sp, 0x98
    ctx->pc = 0x151678u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 152));
    // 0x15167c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x15167cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x151680: 0x27b1009c  addiu       $s1, $sp, 0x9C
    ctx->pc = 0x151680u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 156));
    // 0x151684: 0x78a20000  lq          $v0, 0x0($a1)
    ctx->pc = 0x151684u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x151688: 0x27b00084  addiu       $s0, $sp, 0x84
    ctx->pc = 0x151688u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 132));
    // 0x15168c: 0x7d020000  sq          $v0, 0x0($t0)
    ctx->pc = 0x15168cu;
    WRITE128(ADD32(GPR_U32(ctx, 8), 0), GPR_VEC(ctx, 2));
    // 0x151690: 0x78c20000  lq          $v0, 0x0($a2)
    ctx->pc = 0x151690u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x151694: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x151694u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x151698: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x151698u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x15169c: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x15169cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1516a0: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1516a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1516a4: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x1516a4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
    // 0x1516a8: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x1516a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1516ac: 0x8ec20000  lw          $v0, 0x0($s6)
    ctx->pc = 0x1516acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x1516b0: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1516b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1516b4: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x1516b4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x1516b8: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x1516b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x1516bc: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x1516bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1516c0: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1516c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1516c4: 0xae820000  sw          $v0, 0x0($s4)
    ctx->pc = 0x1516c4u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
    // 0x1516c8: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x1516c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1516cc: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1516ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1516d0: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1516d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1516d4: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x1516d4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
    // 0x1516d8: 0x90e50000  lbu         $a1, 0x0($a3)
    ctx->pc = 0x1516d8u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x1516dc: 0x90e60001  lbu         $a2, 0x1($a3)
    ctx->pc = 0x1516dcu;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 1)));
    // 0x1516e0: 0x90e20002  lbu         $v0, 0x2($a3)
    ctx->pc = 0x1516e0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 2)));
    // 0x1516e4: 0x90e80003  lbu         $t0, 0x3($a3)
    ctx->pc = 0x1516e4u;
    SET_GPR_U32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 3)));
    // 0x1516e8: 0xc04d320  jal         func_134C80
    ctx->pc = 0x1516E8u;
    SET_GPR_U32(ctx, 31, 0x1516F0u);
    ctx->pc = 0x1516ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1516E8u;
            // 0x1516ec: 0x40382d  daddu       $a3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134C80u;
    if (runtime->hasFunction(0x134C80u)) {
        auto targetFn = runtime->lookupFunction(0x134C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1516F0u; }
        if (ctx->pc != 0x1516F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Color__11mgCDrawPrimFiiii_0x134c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1516F0u; }
        if (ctx->pc != 0x1516F0u) { return; }
    }
    ctx->pc = 0x1516F0u;
label_1516f0:
    // 0x1516f0: 0x8ec60000  lw          $a2, 0x0($s6)
    ctx->pc = 0x1516f0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x1516f4: 0x8fa50090  lw          $a1, 0x90($sp)
    ctx->pc = 0x1516f4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1516f8: 0xc04d35c  jal         func_134D70
    ctx->pc = 0x1516F8u;
    SET_GPR_U32(ctx, 31, 0x151700u);
    ctx->pc = 0x1516FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1516F8u;
            // 0x1516fc: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134D70u;
    if (runtime->hasFunction(0x134D70u)) {
        auto targetFn = runtime->lookupFunction(0x134D70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x151700u; }
        if (ctx->pc != 0x151700u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        TextureCrd__11mgCDrawPrimFii_0x134d70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x151700u; }
        if (ctx->pc != 0x151700u) { return; }
    }
    ctx->pc = 0x151700u;
label_151700:
    // 0x151700: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x151700u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x151704: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x151704u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x151708: 0x8fa50080  lw          $a1, 0x80($sp)
    ctx->pc = 0x151708u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x15170c: 0xc04d2c8  jal         func_134B20
    ctx->pc = 0x15170Cu;
    SET_GPR_U32(ctx, 31, 0x151714u);
    ctx->pc = 0x151710u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15170Cu;
            // 0x151710: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134B20u;
    if (runtime->hasFunction(0x134B20u)) {
        auto targetFn = runtime->lookupFunction(0x134B20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x151714u; }
        if (ctx->pc != 0x151714u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex__11mgCDrawPrimFiii_0x134b20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x151714u; }
        if (ctx->pc != 0x151714u) { return; }
    }
    ctx->pc = 0x151714u;
label_151714:
    // 0x151714: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x151714u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x151718: 0x8e260000  lw          $a2, 0x0($s1)
    ctx->pc = 0x151718u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x15171c: 0xc04d35c  jal         func_134D70
    ctx->pc = 0x15171Cu;
    SET_GPR_U32(ctx, 31, 0x151724u);
    ctx->pc = 0x151720u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15171Cu;
            // 0x151720: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134D70u;
    if (runtime->hasFunction(0x134D70u)) {
        auto targetFn = runtime->lookupFunction(0x134D70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x151724u; }
        if (ctx->pc != 0x151724u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        TextureCrd__11mgCDrawPrimFii_0x134d70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x151724u; }
        if (ctx->pc != 0x151724u) { return; }
    }
    ctx->pc = 0x151724u;
label_151724:
    // 0x151724: 0x8e850000  lw          $a1, 0x0($s4)
    ctx->pc = 0x151724u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x151728: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x151728u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15172c: 0x8e660000  lw          $a2, 0x0($s3)
    ctx->pc = 0x15172cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x151730: 0xc04d2c8  jal         func_134B20
    ctx->pc = 0x151730u;
    SET_GPR_U32(ctx, 31, 0x151738u);
    ctx->pc = 0x151734u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x151730u;
            // 0x151734: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134B20u;
    if (runtime->hasFunction(0x134B20u)) {
        auto targetFn = runtime->lookupFunction(0x134B20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x151738u; }
        if (ctx->pc != 0x151738u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex__11mgCDrawPrimFiii_0x134b20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x151738u; }
        if (ctx->pc != 0x151738u) { return; }
    }
    ctx->pc = 0x151738u;
label_151738:
    // 0x151738: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x151738u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x15173c: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x15173cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x151740: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x151740u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x151744: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x151744u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x151748: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x151748u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x15174c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x15174cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x151750: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x151750u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x151754: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x151754u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x151758: 0x3e00008  jr          $ra
    ctx->pc = 0x151758u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15175Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x151758u;
            // 0x15175c: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x151760u;
}
