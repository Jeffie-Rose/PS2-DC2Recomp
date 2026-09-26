#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: PlaceParts__4CMapFPcPfPfPfP9mgCMemory
// Address: 0x15d080 - 0x15d164
void PlaceParts__4CMapFPcPfPfPfP9mgCMemory_0x15d080(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("PlaceParts__4CMapFPcPfPfPfP9mgCMemory_0x15d080");
#endif

    switch (ctx->pc) {
        case 0x15d080u: goto label_15d080;
        case 0x15d084u: goto label_15d084;
        case 0x15d088u: goto label_15d088;
        case 0x15d08cu: goto label_15d08c;
        case 0x15d090u: goto label_15d090;
        case 0x15d094u: goto label_15d094;
        case 0x15d098u: goto label_15d098;
        case 0x15d09cu: goto label_15d09c;
        case 0x15d0a0u: goto label_15d0a0;
        case 0x15d0a4u: goto label_15d0a4;
        case 0x15d0a8u: goto label_15d0a8;
        case 0x15d0acu: goto label_15d0ac;
        case 0x15d0b0u: goto label_15d0b0;
        case 0x15d0b4u: goto label_15d0b4;
        case 0x15d0b8u: goto label_15d0b8;
        case 0x15d0bcu: goto label_15d0bc;
        case 0x15d0c0u: goto label_15d0c0;
        case 0x15d0c4u: goto label_15d0c4;
        case 0x15d0c8u: goto label_15d0c8;
        case 0x15d0ccu: goto label_15d0cc;
        case 0x15d0d0u: goto label_15d0d0;
        case 0x15d0d4u: goto label_15d0d4;
        case 0x15d0d8u: goto label_15d0d8;
        case 0x15d0dcu: goto label_15d0dc;
        case 0x15d0e0u: goto label_15d0e0;
        case 0x15d0e4u: goto label_15d0e4;
        case 0x15d0e8u: goto label_15d0e8;
        case 0x15d0ecu: goto label_15d0ec;
        case 0x15d0f0u: goto label_15d0f0;
        case 0x15d0f4u: goto label_15d0f4;
        case 0x15d0f8u: goto label_15d0f8;
        case 0x15d0fcu: goto label_15d0fc;
        case 0x15d100u: goto label_15d100;
        case 0x15d104u: goto label_15d104;
        case 0x15d108u: goto label_15d108;
        case 0x15d10cu: goto label_15d10c;
        case 0x15d110u: goto label_15d110;
        case 0x15d114u: goto label_15d114;
        case 0x15d118u: goto label_15d118;
        case 0x15d11cu: goto label_15d11c;
        case 0x15d120u: goto label_15d120;
        case 0x15d124u: goto label_15d124;
        case 0x15d128u: goto label_15d128;
        case 0x15d12cu: goto label_15d12c;
        case 0x15d130u: goto label_15d130;
        case 0x15d134u: goto label_15d134;
        case 0x15d138u: goto label_15d138;
        case 0x15d13cu: goto label_15d13c;
        case 0x15d140u: goto label_15d140;
        case 0x15d144u: goto label_15d144;
        case 0x15d148u: goto label_15d148;
        case 0x15d14cu: goto label_15d14c;
        case 0x15d150u: goto label_15d150;
        case 0x15d154u: goto label_15d154;
        case 0x15d158u: goto label_15d158;
        case 0x15d15cu: goto label_15d15c;
        case 0x15d160u: goto label_15d160;
        default: break;
    }

    ctx->pc = 0x15d080u;

label_15d080:
    // 0x15d080: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x15d080u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_15d084:
    // 0x15d084: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x15d084u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
label_15d088:
    // 0x15d088: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x15d088u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_15d08c:
    // 0x15d08c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x15d08cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_15d090:
    // 0x15d090: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x15d090u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_15d094:
    // 0x15d094: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x15d094u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_15d098:
    // 0x15d098: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x15d098u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_15d09c:
    // 0x15d09c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x15d09cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_15d0a0:
    // 0x15d0a0: 0x100982d  daddu       $s3, $t0, $zero
    ctx->pc = 0x15d0a0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_15d0a4:
    // 0x15d0a4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x15d0a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_15d0a8:
    // 0x15d0a8: 0x120902d  daddu       $s2, $t1, $zero
    ctx->pc = 0x15d0a8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_15d0ac:
    // 0x15d0ac: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x15d0acu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_15d0b0:
    // 0x15d0b0: 0xc057358  jal         func_15CD60
label_15d0b4:
    if (ctx->pc == 0x15D0B4u) {
        ctx->pc = 0x15D0B4u;
            // 0x15d0b4: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->pc = 0x15D0B8u;
        goto label_15d0b8;
    }
    ctx->pc = 0x15D0B0u;
    SET_GPR_U32(ctx, 31, 0x15D0B8u);
    ctx->pc = 0x15D0B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15D0B0u;
            // 0x15d0b4: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15CD60u;
    if (runtime->hasFunction(0x15CD60u)) {
        auto targetFn = runtime->lookupFunction(0x15CD60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15D0B8u; }
        if (ctx->pc != 0x15D0B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetParts__4CMapFPc_0x15cd60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15D0B8u; }
        if (ctx->pc != 0x15D0B8u) { return; }
    }
    ctx->pc = 0x15D0B8u;
label_15d0b8:
    // 0x15d0b8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x15d0b8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_15d0bc:
    // 0x15d0bc: 0x16000003  bnez        $s0, . + 4 + (0x3 << 2)
label_15d0c0:
    if (ctx->pc == 0x15D0C0u) {
        ctx->pc = 0x15D0C0u;
            // 0x15d0c0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x15D0C4u;
        goto label_15d0c4;
    }
    ctx->pc = 0x15D0BCu;
    {
        const bool branch_taken_0x15d0bc = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x15D0C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15D0BCu;
            // 0x15d0c0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15d0bc) {
            ctx->pc = 0x15D0CCu;
            goto label_15d0cc;
        }
    }
    ctx->pc = 0x15D0C4u;
label_15d0c4:
    // 0x15d0c4: 0x1000001e  b           . + 4 + (0x1E << 2)
label_15d0c8:
    if (ctx->pc == 0x15D0C8u) {
        ctx->pc = 0x15D0C8u;
            // 0x15d0c8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x15D0CCu;
        goto label_15d0cc;
    }
    ctx->pc = 0x15D0C4u;
    {
        const bool branch_taken_0x15d0c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15D0C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15D0C4u;
            // 0x15d0c8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15d0c4) {
            ctx->pc = 0x15D140u;
            goto label_15d140;
        }
    }
    ctx->pc = 0x15D0CCu;
label_15d0cc:
    // 0x15d0cc: 0xc057310  jal         func_15CC40
label_15d0d0:
    if (ctx->pc == 0x15D0D0u) {
        ctx->pc = 0x15D0D4u;
        goto label_15d0d4;
    }
    ctx->pc = 0x15D0CCu;
    SET_GPR_U32(ctx, 31, 0x15D0D4u);
    ctx->pc = 0x15CC40u;
    if (runtime->hasFunction(0x15CC40u)) {
        auto targetFn = runtime->lookupFunction(0x15CC40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15D0D4u; }
        if (ctx->pc != 0x15D0D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        NewPlaceParts__4CMapFv_0x15cc40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15D0D4u; }
        if (ctx->pc != 0x15D0D4u) { return; }
    }
    ctx->pc = 0x15D0D4u;
label_15d0d4:
    // 0x15d0d4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x15d0d4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_15d0d8:
    // 0x15d0d8: 0x16200003  bnez        $s1, . + 4 + (0x3 << 2)
label_15d0dc:
    if (ctx->pc == 0x15D0DCu) {
        ctx->pc = 0x15D0DCu;
            // 0x15d0dc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x15D0E0u;
        goto label_15d0e0;
    }
    ctx->pc = 0x15D0D8u;
    {
        const bool branch_taken_0x15d0d8 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x15D0DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15D0D8u;
            // 0x15d0dc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15d0d8) {
            ctx->pc = 0x15D0E8u;
            goto label_15d0e8;
        }
    }
    ctx->pc = 0x15D0E0u;
label_15d0e0:
    // 0x15d0e0: 0x10000018  b           . + 4 + (0x18 << 2)
label_15d0e4:
    if (ctx->pc == 0x15D0E4u) {
        ctx->pc = 0x15D0E4u;
            // 0x15d0e4: 0xdfbf0060  ld          $ra, 0x60($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->pc = 0x15D0E8u;
        goto label_15d0e8;
    }
    ctx->pc = 0x15D0E0u;
    {
        const bool branch_taken_0x15d0e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15D0E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15D0E0u;
            // 0x15d0e4: 0xdfbf0060  ld          $ra, 0x60($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15d0e0) {
            ctx->pc = 0x15D144u;
            goto label_15d144;
        }
    }
    ctx->pc = 0x15D0E8u;
label_15d0e8:
    // 0x15d0e8: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x15d0e8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_15d0ec:
    // 0x15d0ec: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x15d0ecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_15d0f0:
    // 0x15d0f0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x15d0f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_15d0f4:
    // 0x15d0f4: 0x8f390080  lw          $t9, 0x80($t9)
    ctx->pc = 0x15d0f4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 128)));
label_15d0f8:
    // 0x15d0f8: 0x320f809  jalr        $t9
label_15d0fc:
    if (ctx->pc == 0x15D0FCu) {
        ctx->pc = 0x15D0FCu;
            // 0x15d0fc: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x15D100u;
        goto label_15d100;
    }
    ctx->pc = 0x15D0F8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x15D100u);
        ctx->pc = 0x15D0FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15D0F8u;
            // 0x15d0fc: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x15D100u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x15D100u; }
            if (ctx->pc != 0x15D100u) { return; }
        }
        }
    }
    ctx->pc = 0x15D100u;
label_15d100:
    // 0x15d100: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x15d100u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_15d104:
    // 0x15d104: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x15d104u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_15d108:
    // 0x15d108: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x15d108u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_15d10c:
    // 0x15d10c: 0x320f809  jalr        $t9
label_15d110:
    if (ctx->pc == 0x15D110u) {
        ctx->pc = 0x15D110u;
            // 0x15d110: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x15D114u;
        goto label_15d114;
    }
    ctx->pc = 0x15D10Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x15D114u);
        ctx->pc = 0x15D110u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15D10Cu;
            // 0x15d110: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x15D114u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x15D114u; }
            if (ctx->pc != 0x15D114u) { return; }
        }
        }
    }
    ctx->pc = 0x15D114u;
label_15d114:
    // 0x15d114: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x15d114u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_15d118:
    // 0x15d118: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x15d118u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_15d11c:
    // 0x15d11c: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x15d11cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_15d120:
    // 0x15d120: 0x320f809  jalr        $t9
label_15d124:
    if (ctx->pc == 0x15D124u) {
        ctx->pc = 0x15D124u;
            // 0x15d124: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x15D128u;
        goto label_15d128;
    }
    ctx->pc = 0x15D120u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x15D128u);
        ctx->pc = 0x15D124u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15D120u;
            // 0x15d124: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x15D128u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x15D128u; }
            if (ctx->pc != 0x15D128u) { return; }
        }
        }
    }
    ctx->pc = 0x15D128u;
label_15d128:
    // 0x15d128: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x15d128u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_15d12c:
    // 0x15d12c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x15d12cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_15d130:
    // 0x15d130: 0x8f390028  lw          $t9, 0x28($t9)
    ctx->pc = 0x15d130u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 40)));
label_15d134:
    // 0x15d134: 0x320f809  jalr        $t9
label_15d138:
    if (ctx->pc == 0x15D138u) {
        ctx->pc = 0x15D138u;
            // 0x15d138: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x15D13Cu;
        goto label_15d13c;
    }
    ctx->pc = 0x15D134u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x15D13Cu);
        ctx->pc = 0x15D138u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15D134u;
            // 0x15d138: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x15D13Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x15D13Cu; }
            if (ctx->pc != 0x15D13Cu) { return; }
        }
        }
    }
    ctx->pc = 0x15D13Cu;
label_15d13c:
    // 0x15d13c: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x15d13cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_15d140:
    // 0x15d140: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x15d140u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_15d144:
    // 0x15d144: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x15d144u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_15d148:
    // 0x15d148: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x15d148u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_15d14c:
    // 0x15d14c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x15d14cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_15d150:
    // 0x15d150: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x15d150u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_15d154:
    // 0x15d154: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x15d154u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_15d158:
    // 0x15d158: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x15d158u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_15d15c:
    // 0x15d15c: 0x3e00008  jr          $ra
label_15d160:
    if (ctx->pc == 0x15D160u) {
        ctx->pc = 0x15D160u;
            // 0x15d160: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x15D164u;
        goto label_fallthrough_0x15d15c;
    }
    ctx->pc = 0x15D15Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15D160u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15D15Cu;
            // 0x15d160: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x15d15c:
    ctx->pc = 0x15D164u;
}
