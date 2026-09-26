#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _GET_POS__FP12RS_STACKDATAi
// Address: 0x1e3ec0 - 0x1e3f34
void ps2__GET_POS__FP12RS_STACKDATAi_0x1e3ec0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__GET_POS__FP12RS_STACKDATAi_0x1e3ec0");
#endif

    switch (ctx->pc) {
        case 0x1e3ec0u: goto label_1e3ec0;
        case 0x1e3ec4u: goto label_1e3ec4;
        case 0x1e3ec8u: goto label_1e3ec8;
        case 0x1e3eccu: goto label_1e3ecc;
        case 0x1e3ed0u: goto label_1e3ed0;
        case 0x1e3ed4u: goto label_1e3ed4;
        case 0x1e3ed8u: goto label_1e3ed8;
        case 0x1e3edcu: goto label_1e3edc;
        case 0x1e3ee0u: goto label_1e3ee0;
        case 0x1e3ee4u: goto label_1e3ee4;
        case 0x1e3ee8u: goto label_1e3ee8;
        case 0x1e3eecu: goto label_1e3eec;
        case 0x1e3ef0u: goto label_1e3ef0;
        case 0x1e3ef4u: goto label_1e3ef4;
        case 0x1e3ef8u: goto label_1e3ef8;
        case 0x1e3efcu: goto label_1e3efc;
        case 0x1e3f00u: goto label_1e3f00;
        case 0x1e3f04u: goto label_1e3f04;
        case 0x1e3f08u: goto label_1e3f08;
        case 0x1e3f0cu: goto label_1e3f0c;
        case 0x1e3f10u: goto label_1e3f10;
        case 0x1e3f14u: goto label_1e3f14;
        case 0x1e3f18u: goto label_1e3f18;
        case 0x1e3f1cu: goto label_1e3f1c;
        case 0x1e3f20u: goto label_1e3f20;
        case 0x1e3f24u: goto label_1e3f24;
        case 0x1e3f28u: goto label_1e3f28;
        case 0x1e3f2cu: goto label_1e3f2c;
        case 0x1e3f30u: goto label_1e3f30;
        default: break;
    }

    ctx->pc = 0x1e3ec0u;

label_1e3ec0:
    // 0x1e3ec0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1e3ec0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_1e3ec4:
    // 0x1e3ec4: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1e3ec4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1e3ec8:
    // 0x1e3ec8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1e3ec8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_1e3ecc:
    // 0x1e3ecc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1e3eccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1e3ed0:
    // 0x1e3ed0: 0x10a20003  beq         $a1, $v0, . + 4 + (0x3 << 2)
label_1e3ed4:
    if (ctx->pc == 0x1E3ED4u) {
        ctx->pc = 0x1E3ED4u;
            // 0x1e3ed4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1E3ED8u;
        goto label_1e3ed8;
    }
    ctx->pc = 0x1E3ED0u;
    {
        const bool branch_taken_0x1e3ed0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x1E3ED4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E3ED0u;
            // 0x1e3ed4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e3ed0) {
            ctx->pc = 0x1E3EE0u;
            goto label_1e3ee0;
        }
    }
    ctx->pc = 0x1E3ED8u;
label_1e3ed8:
    // 0x1e3ed8: 0x10000012  b           . + 4 + (0x12 << 2)
label_1e3edc:
    if (ctx->pc == 0x1E3EDCu) {
        ctx->pc = 0x1E3EDCu;
            // 0x1e3edc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1E3EE0u;
        goto label_1e3ee0;
    }
    ctx->pc = 0x1E3ED8u;
    {
        const bool branch_taken_0x1e3ed8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E3EDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E3ED8u;
            // 0x1e3edc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e3ed8) {
            ctx->pc = 0x1E3F24u;
            goto label_1e3f24;
        }
    }
    ctx->pc = 0x1E3EE0u;
label_1e3ee0:
    // 0x1e3ee0: 0x8f848e70  lw          $a0, -0x7190($gp)
    ctx->pc = 0x1e3ee0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938224)));
label_1e3ee4:
    // 0x1e3ee4: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1e3ee4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1e3ee8:
    // 0x1e3ee8: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x1e3ee8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_1e3eec:
    // 0x1e3eec: 0x320f809  jalr        $t9
label_1e3ef0:
    if (ctx->pc == 0x1E3EF0u) {
        ctx->pc = 0x1E3EF0u;
            // 0x1e3ef0: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x1E3EF4u;
        goto label_1e3ef4;
    }
    ctx->pc = 0x1E3EECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1E3EF4u);
        ctx->pc = 0x1E3EF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E3EECu;
            // 0x1e3ef0: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1E3EF4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1E3EF4u; }
            if (ctx->pc != 0x1E3EF4u) { return; }
        }
        }
    }
    ctx->pc = 0x1E3EF4u;
label_1e3ef4:
    // 0x1e3ef4: 0xc7ac0020  lwc1        $f12, 0x20($sp)
    ctx->pc = 0x1e3ef4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1e3ef8:
    // 0x1e3ef8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1e3ef8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1e3efc:
    // 0x1e3efc: 0xc0781c4  jal         func_1E0710
label_1e3f00:
    if (ctx->pc == 0x1E3F00u) {
        ctx->pc = 0x1E3F00u;
            // 0x1e3f00: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->pc = 0x1E3F04u;
        goto label_1e3f04;
    }
    ctx->pc = 0x1E3EFCu;
    SET_GPR_U32(ctx, 31, 0x1E3F04u);
    ctx->pc = 0x1E3F00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E3EFCu;
            // 0x1e3f00: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E0710u;
    if (runtime->hasFunction(0x1E0710u)) {
        auto targetFn = runtime->lookupFunction(0x1E0710u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E3F04u; }
        if (ctx->pc != 0x1E3F04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAf_0x1e0710(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E3F04u; }
        if (ctx->pc != 0x1E3F04u) { return; }
    }
    ctx->pc = 0x1E3F04u;
label_1e3f04:
    // 0x1e3f04: 0xc7ac0024  lwc1        $f12, 0x24($sp)
    ctx->pc = 0x1e3f04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1e3f08:
    // 0x1e3f08: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1e3f08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1e3f0c:
    // 0x1e3f0c: 0xc0781c4  jal         func_1E0710
label_1e3f10:
    if (ctx->pc == 0x1E3F10u) {
        ctx->pc = 0x1E3F10u;
            // 0x1e3f10: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->pc = 0x1E3F14u;
        goto label_1e3f14;
    }
    ctx->pc = 0x1E3F0Cu;
    SET_GPR_U32(ctx, 31, 0x1E3F14u);
    ctx->pc = 0x1E3F10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E3F0Cu;
            // 0x1e3f10: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E0710u;
    if (runtime->hasFunction(0x1E0710u)) {
        auto targetFn = runtime->lookupFunction(0x1E0710u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E3F14u; }
        if (ctx->pc != 0x1E3F14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAf_0x1e0710(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E3F14u; }
        if (ctx->pc != 0x1E3F14u) { return; }
    }
    ctx->pc = 0x1E3F14u;
label_1e3f14:
    // 0x1e3f14: 0xc7ac0028  lwc1        $f12, 0x28($sp)
    ctx->pc = 0x1e3f14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1e3f18:
    // 0x1e3f18: 0xc0781c4  jal         func_1E0710
label_1e3f1c:
    if (ctx->pc == 0x1E3F1Cu) {
        ctx->pc = 0x1E3F1Cu;
            // 0x1e3f1c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1E3F20u;
        goto label_1e3f20;
    }
    ctx->pc = 0x1E3F18u;
    SET_GPR_U32(ctx, 31, 0x1E3F20u);
    ctx->pc = 0x1E3F1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E3F18u;
            // 0x1e3f1c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E0710u;
    if (runtime->hasFunction(0x1E0710u)) {
        auto targetFn = runtime->lookupFunction(0x1E0710u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E3F20u; }
        if (ctx->pc != 0x1E3F20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAf_0x1e0710(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E3F20u; }
        if (ctx->pc != 0x1E3F20u) { return; }
    }
    ctx->pc = 0x1E3F20u;
label_1e3f20:
    // 0x1e3f20: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1e3f20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1e3f24:
    // 0x1e3f24: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1e3f24u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1e3f28:
    // 0x1e3f28: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1e3f28u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1e3f2c:
    // 0x1e3f2c: 0x3e00008  jr          $ra
label_1e3f30:
    if (ctx->pc == 0x1E3F30u) {
        ctx->pc = 0x1E3F30u;
            // 0x1e3f30: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x1E3F34u;
        goto label_fallthrough_0x1e3f2c;
    }
    ctx->pc = 0x1E3F2Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E3F30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E3F2Cu;
            // 0x1e3f30: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x1e3f2c:
    ctx->pc = 0x1E3F34u;
}
