#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _SCN_GET_CHR_POS__FP12RS_STACKDATAi
// Address: 0x2e7250 - 0x2e72e4
void ps2__SCN_GET_CHR_POS__FP12RS_STACKDATAi_0x2e7250(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__SCN_GET_CHR_POS__FP12RS_STACKDATAi_0x2e7250");
#endif

    switch (ctx->pc) {
        case 0x2e7250u: goto label_2e7250;
        case 0x2e7254u: goto label_2e7254;
        case 0x2e7258u: goto label_2e7258;
        case 0x2e725cu: goto label_2e725c;
        case 0x2e7260u: goto label_2e7260;
        case 0x2e7264u: goto label_2e7264;
        case 0x2e7268u: goto label_2e7268;
        case 0x2e726cu: goto label_2e726c;
        case 0x2e7270u: goto label_2e7270;
        case 0x2e7274u: goto label_2e7274;
        case 0x2e7278u: goto label_2e7278;
        case 0x2e727cu: goto label_2e727c;
        case 0x2e7280u: goto label_2e7280;
        case 0x2e7284u: goto label_2e7284;
        case 0x2e7288u: goto label_2e7288;
        case 0x2e728cu: goto label_2e728c;
        case 0x2e7290u: goto label_2e7290;
        case 0x2e7294u: goto label_2e7294;
        case 0x2e7298u: goto label_2e7298;
        case 0x2e729cu: goto label_2e729c;
        case 0x2e72a0u: goto label_2e72a0;
        case 0x2e72a4u: goto label_2e72a4;
        case 0x2e72a8u: goto label_2e72a8;
        case 0x2e72acu: goto label_2e72ac;
        case 0x2e72b0u: goto label_2e72b0;
        case 0x2e72b4u: goto label_2e72b4;
        case 0x2e72b8u: goto label_2e72b8;
        case 0x2e72bcu: goto label_2e72bc;
        case 0x2e72c0u: goto label_2e72c0;
        case 0x2e72c4u: goto label_2e72c4;
        case 0x2e72c8u: goto label_2e72c8;
        case 0x2e72ccu: goto label_2e72cc;
        case 0x2e72d0u: goto label_2e72d0;
        case 0x2e72d4u: goto label_2e72d4;
        case 0x2e72d8u: goto label_2e72d8;
        case 0x2e72dcu: goto label_2e72dc;
        case 0x2e72e0u: goto label_2e72e0;
        default: break;
    }

    ctx->pc = 0x2e7250u;

label_2e7250:
    // 0x2e7250: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2e7250u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_2e7254:
    // 0x2e7254: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x2e7254u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_2e7258:
    // 0x2e7258: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2e7258u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_2e725c:
    // 0x2e725c: 0x10a20003  beq         $a1, $v0, . + 4 + (0x3 << 2)
label_2e7260:
    if (ctx->pc == 0x2E7260u) {
        ctx->pc = 0x2E7260u;
            // 0x2e7260: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->pc = 0x2E7264u;
        goto label_2e7264;
    }
    ctx->pc = 0x2E725Cu;
    {
        const bool branch_taken_0x2e725c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x2E7260u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E725Cu;
            // 0x2e7260: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e725c) {
            ctx->pc = 0x2E726Cu;
            goto label_2e726c;
        }
    }
    ctx->pc = 0x2E7264u;
label_2e7264:
    // 0x2e7264: 0x1000001b  b           . + 4 + (0x1B << 2)
label_2e7268:
    if (ctx->pc == 0x2E7268u) {
        ctx->pc = 0x2E7268u;
            // 0x2e7268: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2E726Cu;
        goto label_2e726c;
    }
    ctx->pc = 0x2E7264u;
    {
        const bool branch_taken_0x2e7264 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E7268u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E7264u;
            // 0x2e7268: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e7264) {
            ctx->pc = 0x2E72D4u;
            goto label_2e72d4;
        }
    }
    ctx->pc = 0x2E726Cu;
label_2e726c:
    // 0x2e726c: 0xc0b8ca0  jal         func_2E3280
label_2e7270:
    if (ctx->pc == 0x2E7270u) {
        ctx->pc = 0x2E7270u;
            // 0x2e7270: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->pc = 0x2E7274u;
        goto label_2e7274;
    }
    ctx->pc = 0x2E726Cu;
    SET_GPR_U32(ctx, 31, 0x2E7274u);
    ctx->pc = 0x2E7270u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E726Cu;
            // 0x2e7270: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E3280u;
    if (runtime->hasFunction(0x2E3280u)) {
        auto targetFn = runtime->lookupFunction(0x2E3280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E7274u; }
        if (ctx->pc != 0x2E7274u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x2e3280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E7274u; }
        if (ctx->pc != 0x2E7274u) { return; }
    }
    ctx->pc = 0x2E7274u;
label_2e7274:
    // 0x2e7274: 0x8f849ec8  lw          $a0, -0x6138($gp)
    ctx->pc = 0x2e7274u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942408)));
label_2e7278:
    // 0x2e7278: 0xc0a0ed8  jal         func_283B60
label_2e727c:
    if (ctx->pc == 0x2E727Cu) {
        ctx->pc = 0x2E727Cu;
            // 0x2e727c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2E7280u;
        goto label_2e7280;
    }
    ctx->pc = 0x2E7278u;
    SET_GPR_U32(ctx, 31, 0x2E7280u);
    ctx->pc = 0x2E727Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E7278u;
            // 0x2e727c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x283B60u;
    if (runtime->hasFunction(0x283B60u)) {
        auto targetFn = runtime->lookupFunction(0x283B60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E7280u; }
        if (ctx->pc != 0x2E7280u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetCharacter__6CSceneFi_0x283b60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E7280u; }
        if (ctx->pc != 0x2E7280u) { return; }
    }
    ctx->pc = 0x2E7280u;
label_2e7280:
    // 0x2e7280: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_2e7284:
    if (ctx->pc == 0x2E7284u) {
        ctx->pc = 0x2E7288u;
        goto label_2e7288;
    }
    ctx->pc = 0x2E7280u;
    {
        const bool branch_taken_0x2e7280 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e7280) {
            ctx->pc = 0x2E7290u;
            goto label_2e7290;
        }
    }
    ctx->pc = 0x2E7288u;
label_2e7288:
    // 0x2e7288: 0x10000012  b           . + 4 + (0x12 << 2)
label_2e728c:
    if (ctx->pc == 0x2E728Cu) {
        ctx->pc = 0x2E728Cu;
            // 0x2e728c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2E7290u;
        goto label_2e7290;
    }
    ctx->pc = 0x2E7288u;
    {
        const bool branch_taken_0x2e7288 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E728Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E7288u;
            // 0x2e728c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e7288) {
            ctx->pc = 0x2E72D4u;
            goto label_2e72d4;
        }
    }
    ctx->pc = 0x2E7290u;
label_2e7290:
    // 0x2e7290: 0x8c590000  lw          $t9, 0x0($v0)
    ctx->pc = 0x2e7290u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2e7294:
    // 0x2e7294: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2e7294u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2e7298:
    // 0x2e7298: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x2e7298u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_2e729c:
    // 0x2e729c: 0x320f809  jalr        $t9
label_2e72a0:
    if (ctx->pc == 0x2E72A0u) {
        ctx->pc = 0x2E72A0u;
            // 0x2e72a0: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x2E72A4u;
        goto label_2e72a4;
    }
    ctx->pc = 0x2E729Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2E72A4u);
        ctx->pc = 0x2E72A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E729Cu;
            // 0x2e72a0: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2E72A4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2E72A4u; }
            if (ctx->pc != 0x2E72A4u) { return; }
        }
        }
    }
    ctx->pc = 0x2E72A4u;
label_2e72a4:
    // 0x2e72a4: 0xc7ac0020  lwc1        $f12, 0x20($sp)
    ctx->pc = 0x2e72a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_2e72a8:
    // 0x2e72a8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2e72a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2e72ac:
    // 0x2e72ac: 0xc0b8cdc  jal         func_2E3370
label_2e72b0:
    if (ctx->pc == 0x2E72B0u) {
        ctx->pc = 0x2E72B0u;
            // 0x2e72b0: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->pc = 0x2E72B4u;
        goto label_2e72b4;
    }
    ctx->pc = 0x2E72ACu;
    SET_GPR_U32(ctx, 31, 0x2E72B4u);
    ctx->pc = 0x2E72B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E72ACu;
            // 0x2e72b0: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E3370u;
    if (runtime->hasFunction(0x2E3370u)) {
        auto targetFn = runtime->lookupFunction(0x2E3370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E72B4u; }
        if (ctx->pc != 0x2E72B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAf_0x2e3370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E72B4u; }
        if (ctx->pc != 0x2E72B4u) { return; }
    }
    ctx->pc = 0x2E72B4u;
label_2e72b4:
    // 0x2e72b4: 0xc7ac0024  lwc1        $f12, 0x24($sp)
    ctx->pc = 0x2e72b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_2e72b8:
    // 0x2e72b8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2e72b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2e72bc:
    // 0x2e72bc: 0xc0b8cdc  jal         func_2E3370
label_2e72c0:
    if (ctx->pc == 0x2E72C0u) {
        ctx->pc = 0x2E72C0u;
            // 0x2e72c0: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->pc = 0x2E72C4u;
        goto label_2e72c4;
    }
    ctx->pc = 0x2E72BCu;
    SET_GPR_U32(ctx, 31, 0x2E72C4u);
    ctx->pc = 0x2E72C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E72BCu;
            // 0x2e72c0: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E3370u;
    if (runtime->hasFunction(0x2E3370u)) {
        auto targetFn = runtime->lookupFunction(0x2E3370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E72C4u; }
        if (ctx->pc != 0x2E72C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAf_0x2e3370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E72C4u; }
        if (ctx->pc != 0x2E72C4u) { return; }
    }
    ctx->pc = 0x2E72C4u;
label_2e72c4:
    // 0x2e72c4: 0xc7ac0028  lwc1        $f12, 0x28($sp)
    ctx->pc = 0x2e72c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_2e72c8:
    // 0x2e72c8: 0xc0b8cdc  jal         func_2E3370
label_2e72cc:
    if (ctx->pc == 0x2E72CCu) {
        ctx->pc = 0x2E72CCu;
            // 0x2e72cc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2E72D0u;
        goto label_2e72d0;
    }
    ctx->pc = 0x2E72C8u;
    SET_GPR_U32(ctx, 31, 0x2E72D0u);
    ctx->pc = 0x2E72CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E72C8u;
            // 0x2e72cc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E3370u;
    if (runtime->hasFunction(0x2E3370u)) {
        auto targetFn = runtime->lookupFunction(0x2E3370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E72D0u; }
        if (ctx->pc != 0x2E72D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAf_0x2e3370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E72D0u; }
        if (ctx->pc != 0x2E72D0u) { return; }
    }
    ctx->pc = 0x2E72D0u;
label_2e72d0:
    // 0x2e72d0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2e72d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2e72d4:
    // 0x2e72d4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2e72d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2e72d8:
    // 0x2e72d8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2e72d8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2e72dc:
    // 0x2e72dc: 0x3e00008  jr          $ra
label_2e72e0:
    if (ctx->pc == 0x2E72E0u) {
        ctx->pc = 0x2E72E0u;
            // 0x2e72e0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x2E72E4u;
        goto label_fallthrough_0x2e72dc;
    }
    ctx->pc = 0x2E72DCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E72E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E72DCu;
            // 0x2e72e0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x2e72dc:
    ctx->pc = 0x2E72E4u;
}
