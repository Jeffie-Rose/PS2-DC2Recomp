#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _GET_ROT__FP12RS_STACKDATAi
// Address: 0x1e3fa0 - 0x1e4068
void ps2__GET_ROT__FP12RS_STACKDATAi_0x1e3fa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__GET_ROT__FP12RS_STACKDATAi_0x1e3fa0");
#endif

    switch (ctx->pc) {
        case 0x1e3fa0u: goto label_1e3fa0;
        case 0x1e3fa4u: goto label_1e3fa4;
        case 0x1e3fa8u: goto label_1e3fa8;
        case 0x1e3facu: goto label_1e3fac;
        case 0x1e3fb0u: goto label_1e3fb0;
        case 0x1e3fb4u: goto label_1e3fb4;
        case 0x1e3fb8u: goto label_1e3fb8;
        case 0x1e3fbcu: goto label_1e3fbc;
        case 0x1e3fc0u: goto label_1e3fc0;
        case 0x1e3fc4u: goto label_1e3fc4;
        case 0x1e3fc8u: goto label_1e3fc8;
        case 0x1e3fccu: goto label_1e3fcc;
        case 0x1e3fd0u: goto label_1e3fd0;
        case 0x1e3fd4u: goto label_1e3fd4;
        case 0x1e3fd8u: goto label_1e3fd8;
        case 0x1e3fdcu: goto label_1e3fdc;
        case 0x1e3fe0u: goto label_1e3fe0;
        case 0x1e3fe4u: goto label_1e3fe4;
        case 0x1e3fe8u: goto label_1e3fe8;
        case 0x1e3fecu: goto label_1e3fec;
        case 0x1e3ff0u: goto label_1e3ff0;
        case 0x1e3ff4u: goto label_1e3ff4;
        case 0x1e3ff8u: goto label_1e3ff8;
        case 0x1e3ffcu: goto label_1e3ffc;
        case 0x1e4000u: goto label_1e4000;
        case 0x1e4004u: goto label_1e4004;
        case 0x1e4008u: goto label_1e4008;
        case 0x1e400cu: goto label_1e400c;
        case 0x1e4010u: goto label_1e4010;
        case 0x1e4014u: goto label_1e4014;
        case 0x1e4018u: goto label_1e4018;
        case 0x1e401cu: goto label_1e401c;
        case 0x1e4020u: goto label_1e4020;
        case 0x1e4024u: goto label_1e4024;
        case 0x1e4028u: goto label_1e4028;
        case 0x1e402cu: goto label_1e402c;
        case 0x1e4030u: goto label_1e4030;
        case 0x1e4034u: goto label_1e4034;
        case 0x1e4038u: goto label_1e4038;
        case 0x1e403cu: goto label_1e403c;
        case 0x1e4040u: goto label_1e4040;
        case 0x1e4044u: goto label_1e4044;
        case 0x1e4048u: goto label_1e4048;
        case 0x1e404cu: goto label_1e404c;
        case 0x1e4050u: goto label_1e4050;
        case 0x1e4054u: goto label_1e4054;
        case 0x1e4058u: goto label_1e4058;
        case 0x1e405cu: goto label_1e405c;
        case 0x1e4060u: goto label_1e4060;
        case 0x1e4064u: goto label_1e4064;
        default: break;
    }

    ctx->pc = 0x1e3fa0u;

label_1e3fa0:
    // 0x1e3fa0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1e3fa0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_1e3fa4:
    // 0x1e3fa4: 0x28a20003  slti        $v0, $a1, 0x3
    ctx->pc = 0x1e3fa4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)3) ? 1 : 0);
label_1e3fa8:
    // 0x1e3fa8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1e3fa8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_1e3fac:
    // 0x1e3fac: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1e3facu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1e3fb0:
    // 0x1e3fb0: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_1e3fb4:
    if (ctx->pc == 0x1E3FB4u) {
        ctx->pc = 0x1E3FB4u;
            // 0x1e3fb4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1E3FB8u;
        goto label_1e3fb8;
    }
    ctx->pc = 0x1E3FB0u;
    {
        const bool branch_taken_0x1e3fb0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E3FB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E3FB0u;
            // 0x1e3fb4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e3fb0) {
            ctx->pc = 0x1E3FC4u;
            goto label_1e3fc4;
        }
    }
    ctx->pc = 0x1E3FB8u;
label_1e3fb8:
    // 0x1e3fb8: 0x28a10005  slti        $at, $a1, 0x5
    ctx->pc = 0x1e3fb8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)5) ? 1 : 0);
label_1e3fbc:
    // 0x1e3fbc: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
label_1e3fc0:
    if (ctx->pc == 0x1E3FC0u) {
        ctx->pc = 0x1E3FC0u;
            // 0x1e3fc0: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x1E3FC4u;
        goto label_1e3fc4;
    }
    ctx->pc = 0x1E3FBCu;
    {
        const bool branch_taken_0x1e3fbc = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E3FC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E3FBCu;
            // 0x1e3fc0: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e3fbc) {
            ctx->pc = 0x1E3FCCu;
            goto label_1e3fcc;
        }
    }
    ctx->pc = 0x1E3FC4u;
label_1e3fc4:
    // 0x1e3fc4: 0x10000024  b           . + 4 + (0x24 << 2)
label_1e3fc8:
    if (ctx->pc == 0x1E3FC8u) {
        ctx->pc = 0x1E3FC8u;
            // 0x1e3fc8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1E3FCCu;
        goto label_1e3fcc;
    }
    ctx->pc = 0x1E3FC4u;
    {
        const bool branch_taken_0x1e3fc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E3FC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E3FC4u;
            // 0x1e3fc8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e3fc4) {
            ctx->pc = 0x1E4058u;
            goto label_1e4058;
        }
    }
    ctx->pc = 0x1E3FCCu;
label_1e3fcc:
    // 0x1e3fcc: 0x14a20011  bne         $a1, $v0, . + 4 + (0x11 << 2)
label_1e3fd0:
    if (ctx->pc == 0x1E3FD0u) {
        ctx->pc = 0x1E3FD4u;
        goto label_1e3fd4;
    }
    ctx->pc = 0x1E3FCCu;
    {
        const bool branch_taken_0x1e3fcc = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x1e3fcc) {
            ctx->pc = 0x1E4014u;
            goto label_1e4014;
        }
    }
    ctx->pc = 0x1E3FD4u;
label_1e3fd4:
    // 0x1e3fd4: 0xc07819c  jal         func_1E0670
label_1e3fd8:
    if (ctx->pc == 0x1E3FD8u) {
        ctx->pc = 0x1E3FD8u;
            // 0x1e3fd8: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->pc = 0x1E3FDCu;
        goto label_1e3fdc;
    }
    ctx->pc = 0x1E3FD4u;
    SET_GPR_U32(ctx, 31, 0x1E3FDCu);
    ctx->pc = 0x1E3FD8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E3FD4u;
            // 0x1e3fd8: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E0670u;
    if (runtime->hasFunction(0x1E0670u)) {
        auto targetFn = runtime->lookupFunction(0x1E0670u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E3FDCu; }
        if (ctx->pc != 0x1E3FDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x1e0670(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E3FDCu; }
        if (ctx->pc != 0x1E3FDCu) { return; }
    }
    ctx->pc = 0x1E3FDCu;
label_1e3fdc:
    // 0x1e3fdc: 0x8f848e6c  lw          $a0, -0x7194($gp)
    ctx->pc = 0x1e3fdcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938220)));
label_1e3fe0:
    // 0x1e3fe0: 0xc0a0ed8  jal         func_283B60
label_1e3fe4:
    if (ctx->pc == 0x1E3FE4u) {
        ctx->pc = 0x1E3FE4u;
            // 0x1e3fe4: 0x24450018  addiu       $a1, $v0, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 24));
        ctx->pc = 0x1E3FE8u;
        goto label_1e3fe8;
    }
    ctx->pc = 0x1E3FE0u;
    SET_GPR_U32(ctx, 31, 0x1E3FE8u);
    ctx->pc = 0x1E3FE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E3FE0u;
            // 0x1e3fe4: 0x24450018  addiu       $a1, $v0, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 24));
        ctx->in_delay_slot = false;
    ctx->pc = 0x283B60u;
    if (runtime->hasFunction(0x283B60u)) {
        auto targetFn = runtime->lookupFunction(0x283B60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E3FE8u; }
        if (ctx->pc != 0x1E3FE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetCharacter__6CSceneFi_0x283b60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E3FE8u; }
        if (ctx->pc != 0x1E3FE8u) { return; }
    }
    ctx->pc = 0x1E3FE8u;
label_1e3fe8:
    // 0x1e3fe8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_1e3fec:
    if (ctx->pc == 0x1E3FECu) {
        ctx->pc = 0x1E3FF0u;
        goto label_1e3ff0;
    }
    ctx->pc = 0x1E3FE8u;
    {
        const bool branch_taken_0x1e3fe8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e3fe8) {
            ctx->pc = 0x1E3FF8u;
            goto label_1e3ff8;
        }
    }
    ctx->pc = 0x1E3FF0u;
label_1e3ff0:
    // 0x1e3ff0: 0x10000019  b           . + 4 + (0x19 << 2)
label_1e3ff4:
    if (ctx->pc == 0x1E3FF4u) {
        ctx->pc = 0x1E3FF4u;
            // 0x1e3ff4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1E3FF8u;
        goto label_1e3ff8;
    }
    ctx->pc = 0x1E3FF0u;
    {
        const bool branch_taken_0x1e3ff0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E3FF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E3FF0u;
            // 0x1e3ff4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e3ff0) {
            ctx->pc = 0x1E4058u;
            goto label_1e4058;
        }
    }
    ctx->pc = 0x1E3FF8u;
label_1e3ff8:
    // 0x1e3ff8: 0x8c590000  lw          $t9, 0x0($v0)
    ctx->pc = 0x1e3ff8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1e3ffc:
    // 0x1e3ffc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1e3ffcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1e4000:
    // 0x1e4000: 0x8f390024  lw          $t9, 0x24($t9)
    ctx->pc = 0x1e4000u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 36)));
label_1e4004:
    // 0x1e4004: 0x320f809  jalr        $t9
label_1e4008:
    if (ctx->pc == 0x1E4008u) {
        ctx->pc = 0x1E4008u;
            // 0x1e4008: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x1E400Cu;
        goto label_1e400c;
    }
    ctx->pc = 0x1E4004u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1E400Cu);
        ctx->pc = 0x1E4008u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E4004u;
            // 0x1e4008: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1E400Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1E400Cu; }
            if (ctx->pc != 0x1E400Cu) { return; }
        }
        }
    }
    ctx->pc = 0x1E400Cu;
label_1e400c:
    // 0x1e400c: 0x10000007  b           . + 4 + (0x7 << 2)
label_1e4010:
    if (ctx->pc == 0x1E4010u) {
        ctx->pc = 0x1E4010u;
            // 0x1e4010: 0xc7ac0020  lwc1        $f12, 0x20($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->pc = 0x1E4014u;
        goto label_1e4014;
    }
    ctx->pc = 0x1E400Cu;
    {
        const bool branch_taken_0x1e400c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E4010u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E400Cu;
            // 0x1e4010: 0xc7ac0020  lwc1        $f12, 0x20($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e400c) {
            ctx->pc = 0x1E402Cu;
            goto label_1e402c;
        }
    }
    ctx->pc = 0x1E4014u;
label_1e4014:
    // 0x1e4014: 0x8f848e70  lw          $a0, -0x7190($gp)
    ctx->pc = 0x1e4014u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938224)));
label_1e4018:
    // 0x1e4018: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1e4018u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1e401c:
    // 0x1e401c: 0x8f390024  lw          $t9, 0x24($t9)
    ctx->pc = 0x1e401cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 36)));
label_1e4020:
    // 0x1e4020: 0x320f809  jalr        $t9
label_1e4024:
    if (ctx->pc == 0x1E4024u) {
        ctx->pc = 0x1E4024u;
            // 0x1e4024: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x1E4028u;
        goto label_1e4028;
    }
    ctx->pc = 0x1E4020u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1E4028u);
        ctx->pc = 0x1E4024u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E4020u;
            // 0x1e4024: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1E4028u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1E4028u; }
            if (ctx->pc != 0x1E4028u) { return; }
        }
        }
    }
    ctx->pc = 0x1E4028u;
label_1e4028:
    // 0x1e4028: 0xc7ac0020  lwc1        $f12, 0x20($sp)
    ctx->pc = 0x1e4028u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1e402c:
    // 0x1e402c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1e402cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1e4030:
    // 0x1e4030: 0xc0781c4  jal         func_1E0710
label_1e4034:
    if (ctx->pc == 0x1E4034u) {
        ctx->pc = 0x1E4034u;
            // 0x1e4034: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->pc = 0x1E4038u;
        goto label_1e4038;
    }
    ctx->pc = 0x1E4030u;
    SET_GPR_U32(ctx, 31, 0x1E4038u);
    ctx->pc = 0x1E4034u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E4030u;
            // 0x1e4034: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E0710u;
    if (runtime->hasFunction(0x1E0710u)) {
        auto targetFn = runtime->lookupFunction(0x1E0710u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E4038u; }
        if (ctx->pc != 0x1E4038u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAf_0x1e0710(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E4038u; }
        if (ctx->pc != 0x1E4038u) { return; }
    }
    ctx->pc = 0x1E4038u;
label_1e4038:
    // 0x1e4038: 0xc7ac0024  lwc1        $f12, 0x24($sp)
    ctx->pc = 0x1e4038u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1e403c:
    // 0x1e403c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1e403cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1e4040:
    // 0x1e4040: 0xc0781c4  jal         func_1E0710
label_1e4044:
    if (ctx->pc == 0x1E4044u) {
        ctx->pc = 0x1E4044u;
            // 0x1e4044: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->pc = 0x1E4048u;
        goto label_1e4048;
    }
    ctx->pc = 0x1E4040u;
    SET_GPR_U32(ctx, 31, 0x1E4048u);
    ctx->pc = 0x1E4044u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E4040u;
            // 0x1e4044: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E0710u;
    if (runtime->hasFunction(0x1E0710u)) {
        auto targetFn = runtime->lookupFunction(0x1E0710u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E4048u; }
        if (ctx->pc != 0x1E4048u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAf_0x1e0710(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E4048u; }
        if (ctx->pc != 0x1E4048u) { return; }
    }
    ctx->pc = 0x1E4048u;
label_1e4048:
    // 0x1e4048: 0xc7ac0028  lwc1        $f12, 0x28($sp)
    ctx->pc = 0x1e4048u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1e404c:
    // 0x1e404c: 0xc0781c4  jal         func_1E0710
label_1e4050:
    if (ctx->pc == 0x1E4050u) {
        ctx->pc = 0x1E4050u;
            // 0x1e4050: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1E4054u;
        goto label_1e4054;
    }
    ctx->pc = 0x1E404Cu;
    SET_GPR_U32(ctx, 31, 0x1E4054u);
    ctx->pc = 0x1E4050u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E404Cu;
            // 0x1e4050: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E0710u;
    if (runtime->hasFunction(0x1E0710u)) {
        auto targetFn = runtime->lookupFunction(0x1E0710u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E4054u; }
        if (ctx->pc != 0x1E4054u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAf_0x1e0710(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E4054u; }
        if (ctx->pc != 0x1E4054u) { return; }
    }
    ctx->pc = 0x1E4054u;
label_1e4054:
    // 0x1e4054: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1e4054u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1e4058:
    // 0x1e4058: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1e4058u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1e405c:
    // 0x1e405c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1e405cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1e4060:
    // 0x1e4060: 0x3e00008  jr          $ra
label_1e4064:
    if (ctx->pc == 0x1E4064u) {
        ctx->pc = 0x1E4064u;
            // 0x1e4064: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x1E4068u;
        goto label_fallthrough_0x1e4060;
    }
    ctx->pc = 0x1E4060u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E4064u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E4060u;
            // 0x1e4064: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x1e4060:
    ctx->pc = 0x1E4068u;
}
