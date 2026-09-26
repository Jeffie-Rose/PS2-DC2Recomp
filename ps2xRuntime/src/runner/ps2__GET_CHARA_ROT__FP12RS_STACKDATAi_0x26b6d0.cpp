#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _GET_CHARA_ROT__FP12RS_STACKDATAi
// Address: 0x26b6d0 - 0x26b750
void ps2__GET_CHARA_ROT__FP12RS_STACKDATAi_0x26b6d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__GET_CHARA_ROT__FP12RS_STACKDATAi_0x26b6d0");
#endif

    switch (ctx->pc) {
        case 0x26b6d0u: goto label_26b6d0;
        case 0x26b6d4u: goto label_26b6d4;
        case 0x26b6d8u: goto label_26b6d8;
        case 0x26b6dcu: goto label_26b6dc;
        case 0x26b6e0u: goto label_26b6e0;
        case 0x26b6e4u: goto label_26b6e4;
        case 0x26b6e8u: goto label_26b6e8;
        case 0x26b6ecu: goto label_26b6ec;
        case 0x26b6f0u: goto label_26b6f0;
        case 0x26b6f4u: goto label_26b6f4;
        case 0x26b6f8u: goto label_26b6f8;
        case 0x26b6fcu: goto label_26b6fc;
        case 0x26b700u: goto label_26b700;
        case 0x26b704u: goto label_26b704;
        case 0x26b708u: goto label_26b708;
        case 0x26b70cu: goto label_26b70c;
        case 0x26b710u: goto label_26b710;
        case 0x26b714u: goto label_26b714;
        case 0x26b718u: goto label_26b718;
        case 0x26b71cu: goto label_26b71c;
        case 0x26b720u: goto label_26b720;
        case 0x26b724u: goto label_26b724;
        case 0x26b728u: goto label_26b728;
        case 0x26b72cu: goto label_26b72c;
        case 0x26b730u: goto label_26b730;
        case 0x26b734u: goto label_26b734;
        case 0x26b738u: goto label_26b738;
        case 0x26b73cu: goto label_26b73c;
        case 0x26b740u: goto label_26b740;
        case 0x26b744u: goto label_26b744;
        case 0x26b748u: goto label_26b748;
        case 0x26b74cu: goto label_26b74c;
        default: break;
    }

    ctx->pc = 0x26b6d0u;

label_26b6d0:
    // 0x26b6d0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x26b6d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_26b6d4:
    // 0x26b6d4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x26b6d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_26b6d8:
    // 0x26b6d8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x26b6d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_26b6dc:
    // 0x26b6dc: 0xc097e18  jal         func_25F860
label_26b6e0:
    if (ctx->pc == 0x26B6E0u) {
        ctx->pc = 0x26B6E0u;
            // 0x26b6e0: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->pc = 0x26B6E4u;
        goto label_26b6e4;
    }
    ctx->pc = 0x26B6DCu;
    SET_GPR_U32(ctx, 31, 0x26B6E4u);
    ctx->pc = 0x26B6E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26B6DCu;
            // 0x26b6e0: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26B6E4u; }
        if (ctx->pc != 0x26B6E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26B6E4u; }
        if (ctx->pc != 0x26B6E4u) { return; }
    }
    ctx->pc = 0x26B6E4u;
label_26b6e4:
    // 0x26b6e4: 0xc09ac74  jal         func_26B1D0
label_26b6e8:
    if (ctx->pc == 0x26B6E8u) {
        ctx->pc = 0x26B6E8u;
            // 0x26b6e8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x26B6ECu;
        goto label_26b6ec;
    }
    ctx->pc = 0x26B6E4u;
    SET_GPR_U32(ctx, 31, 0x26B6ECu);
    ctx->pc = 0x26B6E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26B6E4u;
            // 0x26b6e8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x26B1D0u;
    if (runtime->hasFunction(0x26B1D0u)) {
        auto targetFn = runtime->lookupFunction(0x26B1D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26B6ECu; }
        if (ctx->pc != 0x26B6ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetChara__Fi_0x26b1d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26B6ECu; }
        if (ctx->pc != 0x26B6ECu) { return; }
    }
    ctx->pc = 0x26B6ECu;
label_26b6ec:
    // 0x26b6ec: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_26b6f0:
    if (ctx->pc == 0x26B6F0u) {
        ctx->pc = 0x26B6F4u;
        goto label_26b6f4;
    }
    ctx->pc = 0x26B6ECu;
    {
        const bool branch_taken_0x26b6ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x26b6ec) {
            ctx->pc = 0x26B6FCu;
            goto label_26b6fc;
        }
    }
    ctx->pc = 0x26B6F4u;
label_26b6f4:
    // 0x26b6f4: 0x10000012  b           . + 4 + (0x12 << 2)
label_26b6f8:
    if (ctx->pc == 0x26B6F8u) {
        ctx->pc = 0x26B6F8u;
            // 0x26b6f8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x26B6FCu;
        goto label_26b6fc;
    }
    ctx->pc = 0x26B6F4u;
    {
        const bool branch_taken_0x26b6f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26B6F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26B6F4u;
            // 0x26b6f8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26b6f4) {
            ctx->pc = 0x26B740u;
            goto label_26b740;
        }
    }
    ctx->pc = 0x26B6FCu;
label_26b6fc:
    // 0x26b6fc: 0x8c590000  lw          $t9, 0x0($v0)
    ctx->pc = 0x26b6fcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_26b700:
    // 0x26b700: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x26b700u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_26b704:
    // 0x26b704: 0x8f390024  lw          $t9, 0x24($t9)
    ctx->pc = 0x26b704u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 36)));
label_26b708:
    // 0x26b708: 0x320f809  jalr        $t9
label_26b70c:
    if (ctx->pc == 0x26B70Cu) {
        ctx->pc = 0x26B70Cu;
            // 0x26b70c: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x26B710u;
        goto label_26b710;
    }
    ctx->pc = 0x26B708u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x26B710u);
        ctx->pc = 0x26B70Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26B708u;
            // 0x26b70c: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x26B710u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x26B710u; }
            if (ctx->pc != 0x26B710u) { return; }
        }
        }
    }
    ctx->pc = 0x26B710u;
label_26b710:
    // 0x26b710: 0xc7ac0020  lwc1        $f12, 0x20($sp)
    ctx->pc = 0x26b710u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_26b714:
    // 0x26b714: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x26b714u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_26b718:
    // 0x26b718: 0xc097e54  jal         func_25F950
label_26b71c:
    if (ctx->pc == 0x26B71Cu) {
        ctx->pc = 0x26B71Cu;
            // 0x26b71c: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->pc = 0x26B720u;
        goto label_26b720;
    }
    ctx->pc = 0x26B718u;
    SET_GPR_U32(ctx, 31, 0x26B720u);
    ctx->pc = 0x26B71Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26B718u;
            // 0x26b71c: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F950u;
    if (runtime->hasFunction(0x25F950u)) {
        auto targetFn = runtime->lookupFunction(0x25F950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26B720u; }
        if (ctx->pc != 0x26B720u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAf_0x25f950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26B720u; }
        if (ctx->pc != 0x26B720u) { return; }
    }
    ctx->pc = 0x26B720u;
label_26b720:
    // 0x26b720: 0xc7ac0024  lwc1        $f12, 0x24($sp)
    ctx->pc = 0x26b720u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_26b724:
    // 0x26b724: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x26b724u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_26b728:
    // 0x26b728: 0xc097e54  jal         func_25F950
label_26b72c:
    if (ctx->pc == 0x26B72Cu) {
        ctx->pc = 0x26B72Cu;
            // 0x26b72c: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->pc = 0x26B730u;
        goto label_26b730;
    }
    ctx->pc = 0x26B728u;
    SET_GPR_U32(ctx, 31, 0x26B730u);
    ctx->pc = 0x26B72Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26B728u;
            // 0x26b72c: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F950u;
    if (runtime->hasFunction(0x25F950u)) {
        auto targetFn = runtime->lookupFunction(0x25F950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26B730u; }
        if (ctx->pc != 0x26B730u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAf_0x25f950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26B730u; }
        if (ctx->pc != 0x26B730u) { return; }
    }
    ctx->pc = 0x26B730u;
label_26b730:
    // 0x26b730: 0xc7ac0028  lwc1        $f12, 0x28($sp)
    ctx->pc = 0x26b730u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_26b734:
    // 0x26b734: 0xc097e54  jal         func_25F950
label_26b738:
    if (ctx->pc == 0x26B738u) {
        ctx->pc = 0x26B738u;
            // 0x26b738: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x26B73Cu;
        goto label_26b73c;
    }
    ctx->pc = 0x26B734u;
    SET_GPR_U32(ctx, 31, 0x26B73Cu);
    ctx->pc = 0x26B738u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26B734u;
            // 0x26b738: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F950u;
    if (runtime->hasFunction(0x25F950u)) {
        auto targetFn = runtime->lookupFunction(0x25F950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26B73Cu; }
        if (ctx->pc != 0x26B73Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAf_0x25f950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26B73Cu; }
        if (ctx->pc != 0x26B73Cu) { return; }
    }
    ctx->pc = 0x26B73Cu;
label_26b73c:
    // 0x26b73c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x26b73cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_26b740:
    // 0x26b740: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x26b740u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_26b744:
    // 0x26b744: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x26b744u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_26b748:
    // 0x26b748: 0x3e00008  jr          $ra
label_26b74c:
    if (ctx->pc == 0x26B74Cu) {
        ctx->pc = 0x26B74Cu;
            // 0x26b74c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x26B750u;
        goto label_fallthrough_0x26b748;
    }
    ctx->pc = 0x26B748u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26B74Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26B748u;
            // 0x26b74c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x26b748:
    ctx->pc = 0x26B750u;
}
