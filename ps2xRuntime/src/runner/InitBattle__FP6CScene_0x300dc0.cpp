#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: InitBattle__FP6CScene
// Address: 0x300dc0 - 0x300f4c
void InitBattle__FP6CScene_0x300dc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("InitBattle__FP6CScene_0x300dc0");
#endif

    switch (ctx->pc) {
        case 0x300dc0u: goto label_300dc0;
        case 0x300dc4u: goto label_300dc4;
        case 0x300dc8u: goto label_300dc8;
        case 0x300dccu: goto label_300dcc;
        case 0x300dd0u: goto label_300dd0;
        case 0x300dd4u: goto label_300dd4;
        case 0x300dd8u: goto label_300dd8;
        case 0x300ddcu: goto label_300ddc;
        case 0x300de0u: goto label_300de0;
        case 0x300de4u: goto label_300de4;
        case 0x300de8u: goto label_300de8;
        case 0x300decu: goto label_300dec;
        case 0x300df0u: goto label_300df0;
        case 0x300df4u: goto label_300df4;
        case 0x300df8u: goto label_300df8;
        case 0x300dfcu: goto label_300dfc;
        case 0x300e00u: goto label_300e00;
        case 0x300e04u: goto label_300e04;
        case 0x300e08u: goto label_300e08;
        case 0x300e0cu: goto label_300e0c;
        case 0x300e10u: goto label_300e10;
        case 0x300e14u: goto label_300e14;
        case 0x300e18u: goto label_300e18;
        case 0x300e1cu: goto label_300e1c;
        case 0x300e20u: goto label_300e20;
        case 0x300e24u: goto label_300e24;
        case 0x300e28u: goto label_300e28;
        case 0x300e2cu: goto label_300e2c;
        case 0x300e30u: goto label_300e30;
        case 0x300e34u: goto label_300e34;
        case 0x300e38u: goto label_300e38;
        case 0x300e3cu: goto label_300e3c;
        case 0x300e40u: goto label_300e40;
        case 0x300e44u: goto label_300e44;
        case 0x300e48u: goto label_300e48;
        case 0x300e4cu: goto label_300e4c;
        case 0x300e50u: goto label_300e50;
        case 0x300e54u: goto label_300e54;
        case 0x300e58u: goto label_300e58;
        case 0x300e5cu: goto label_300e5c;
        case 0x300e60u: goto label_300e60;
        case 0x300e64u: goto label_300e64;
        case 0x300e68u: goto label_300e68;
        case 0x300e6cu: goto label_300e6c;
        case 0x300e70u: goto label_300e70;
        case 0x300e74u: goto label_300e74;
        case 0x300e78u: goto label_300e78;
        case 0x300e7cu: goto label_300e7c;
        case 0x300e80u: goto label_300e80;
        case 0x300e84u: goto label_300e84;
        case 0x300e88u: goto label_300e88;
        case 0x300e8cu: goto label_300e8c;
        case 0x300e90u: goto label_300e90;
        case 0x300e94u: goto label_300e94;
        case 0x300e98u: goto label_300e98;
        case 0x300e9cu: goto label_300e9c;
        case 0x300ea0u: goto label_300ea0;
        case 0x300ea4u: goto label_300ea4;
        case 0x300ea8u: goto label_300ea8;
        case 0x300eacu: goto label_300eac;
        case 0x300eb0u: goto label_300eb0;
        case 0x300eb4u: goto label_300eb4;
        case 0x300eb8u: goto label_300eb8;
        case 0x300ebcu: goto label_300ebc;
        case 0x300ec0u: goto label_300ec0;
        case 0x300ec4u: goto label_300ec4;
        case 0x300ec8u: goto label_300ec8;
        case 0x300eccu: goto label_300ecc;
        case 0x300ed0u: goto label_300ed0;
        case 0x300ed4u: goto label_300ed4;
        case 0x300ed8u: goto label_300ed8;
        case 0x300edcu: goto label_300edc;
        case 0x300ee0u: goto label_300ee0;
        case 0x300ee4u: goto label_300ee4;
        case 0x300ee8u: goto label_300ee8;
        case 0x300eecu: goto label_300eec;
        case 0x300ef0u: goto label_300ef0;
        case 0x300ef4u: goto label_300ef4;
        case 0x300ef8u: goto label_300ef8;
        case 0x300efcu: goto label_300efc;
        case 0x300f00u: goto label_300f00;
        case 0x300f04u: goto label_300f04;
        case 0x300f08u: goto label_300f08;
        case 0x300f0cu: goto label_300f0c;
        case 0x300f10u: goto label_300f10;
        case 0x300f14u: goto label_300f14;
        case 0x300f18u: goto label_300f18;
        case 0x300f1cu: goto label_300f1c;
        case 0x300f20u: goto label_300f20;
        case 0x300f24u: goto label_300f24;
        case 0x300f28u: goto label_300f28;
        case 0x300f2cu: goto label_300f2c;
        case 0x300f30u: goto label_300f30;
        case 0x300f34u: goto label_300f34;
        case 0x300f38u: goto label_300f38;
        case 0x300f3cu: goto label_300f3c;
        case 0x300f40u: goto label_300f40;
        case 0x300f44u: goto label_300f44;
        case 0x300f48u: goto label_300f48;
        default: break;
    }

    ctx->pc = 0x300dc0u;

label_300dc0:
    // 0x300dc0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x300dc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_300dc4:
    // 0x300dc4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x300dc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_300dc8:
    // 0x300dc8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x300dc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_300dcc:
    // 0x300dcc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x300dccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_300dd0:
    // 0x300dd0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x300dd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_300dd4:
    // 0x300dd4: 0x8c852e50  lw          $a1, 0x2E50($a0)
    ctx->pc = 0x300dd4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 11856)));
label_300dd8:
    // 0x300dd8: 0xc0a0ed8  jal         func_283B60
label_300ddc:
    if (ctx->pc == 0x300DDCu) {
        ctx->pc = 0x300DDCu;
            // 0x300ddc: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x300DE0u;
        goto label_300de0;
    }
    ctx->pc = 0x300DD8u;
    SET_GPR_U32(ctx, 31, 0x300DE0u);
    ctx->pc = 0x300DDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x300DD8u;
            // 0x300ddc: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x283B60u;
    if (runtime->hasFunction(0x283B60u)) {
        auto targetFn = runtime->lookupFunction(0x283B60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x300DE0u; }
        if (ctx->pc != 0x300DE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetCharacter__6CSceneFi_0x283b60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x300DE0u; }
        if (ctx->pc != 0x300DE0u) { return; }
    }
    ctx->pc = 0x300DE0u;
label_300de0:
    // 0x300de0: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x300de0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_300de4:
    // 0x300de4: 0x16400003  bnez        $s2, . + 4 + (0x3 << 2)
label_300de8:
    if (ctx->pc == 0x300DE8u) {
        ctx->pc = 0x300DE8u;
            // 0x300de8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x300DECu;
        goto label_300dec;
    }
    ctx->pc = 0x300DE4u;
    {
        const bool branch_taken_0x300de4 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x300DE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x300DE4u;
            // 0x300de8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x300de4) {
            ctx->pc = 0x300DF4u;
            goto label_300df4;
        }
    }
    ctx->pc = 0x300DECu;
label_300dec:
    // 0x300dec: 0x10000052  b           . + 4 + (0x52 << 2)
label_300df0:
    if (ctx->pc == 0x300DF0u) {
        ctx->pc = 0x300DF0u;
            // 0x300df0: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->pc = 0x300DF4u;
        goto label_300df4;
    }
    ctx->pc = 0x300DECu;
    {
        const bool branch_taken_0x300dec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x300DF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x300DECu;
            // 0x300df0: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x300dec) {
            ctx->pc = 0x300F38u;
            goto label_300f38;
        }
    }
    ctx->pc = 0x300DF4u;
label_300df4:
    // 0x300df4: 0x8e252e54  lw          $a1, 0x2E54($s1)
    ctx->pc = 0x300df4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 11860)));
label_300df8:
    // 0x300df8: 0xc0a0e30  jal         func_2838C0
label_300dfc:
    if (ctx->pc == 0x300DFCu) {
        ctx->pc = 0x300DFCu;
            // 0x300dfc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x300E00u;
        goto label_300e00;
    }
    ctx->pc = 0x300DF8u;
    SET_GPR_U32(ctx, 31, 0x300E00u);
    ctx->pc = 0x300DFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x300DF8u;
            // 0x300dfc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2838C0u;
    if (runtime->hasFunction(0x2838C0u)) {
        auto targetFn = runtime->lookupFunction(0x2838C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x300E00u; }
        if (ctx->pc != 0x300E00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetCamera__6CSceneFi_0x2838c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x300E00u; }
        if (ctx->pc != 0x300E00u) { return; }
    }
    ctx->pc = 0x300E00u;
label_300e00:
    // 0x300e00: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x300e00u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_300e04:
    // 0x300e04: 0x12000009  beqz        $s0, . + 4 + (0x9 << 2)
label_300e08:
    if (ctx->pc == 0x300E08u) {
        ctx->pc = 0x300E08u;
            // 0x300e08: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x300E0Cu;
        goto label_300e0c;
    }
    ctx->pc = 0x300E04u;
    {
        const bool branch_taken_0x300e04 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x300E08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x300E04u;
            // 0x300e08: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x300e04) {
            ctx->pc = 0x300E2Cu;
            goto label_300e2c;
        }
    }
    ctx->pc = 0x300E0Cu;
label_300e0c:
    // 0x300e0c: 0x8e190060  lw          $t9, 0x60($s0)
    ctx->pc = 0x300e0cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
label_300e10:
    // 0x300e10: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x300e10u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_300e14:
    // 0x300e14: 0x320f809  jalr        $t9
label_300e18:
    if (ctx->pc == 0x300E18u) {
        ctx->pc = 0x300E18u;
            // 0x300e18: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x300E1Cu;
        goto label_300e1c;
    }
    ctx->pc = 0x300E14u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x300E1Cu);
        ctx->pc = 0x300E18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x300E14u;
            // 0x300e18: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x300E1Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x300E1Cu; }
            if (ctx->pc != 0x300E1Cu) { return; }
        }
        }
    }
    ctx->pc = 0x300E1Cu;
label_300e1c:
    // 0x300e1c: 0x240303e8  addiu       $v1, $zero, 0x3E8
    ctx->pc = 0x300e1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1000));
label_300e20:
    // 0x300e20: 0x10430004  beq         $v0, $v1, . + 4 + (0x4 << 2)
label_300e24:
    if (ctx->pc == 0x300E24u) {
        ctx->pc = 0x300E28u;
        goto label_300e28;
    }
    ctx->pc = 0x300E20u;
    {
        const bool branch_taken_0x300e20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x300e20) {
            ctx->pc = 0x300E34u;
            goto label_300e34;
        }
    }
    ctx->pc = 0x300E28u;
label_300e28:
    // 0x300e28: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x300e28u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_300e2c:
    // 0x300e2c: 0x10000041  b           . + 4 + (0x41 << 2)
label_300e30:
    if (ctx->pc == 0x300E30u) {
        ctx->pc = 0x300E34u;
        goto label_300e34;
    }
    ctx->pc = 0x300E2Cu;
    {
        const bool branch_taken_0x300e2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x300e2c) {
            ctx->pc = 0x300F34u;
            goto label_300f34;
        }
    }
    ctx->pc = 0x300E34u;
label_300e34:
    // 0x300e34: 0x8e590000  lw          $t9, 0x0($s2)
    ctx->pc = 0x300e34u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_300e38:
    // 0x300e38: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x300e38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_300e3c:
    // 0x300e3c: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x300e3cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_300e40:
    // 0x300e40: 0x320f809  jalr        $t9
label_300e44:
    if (ctx->pc == 0x300E44u) {
        ctx->pc = 0x300E44u;
            // 0x300e44: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x300E48u;
        goto label_300e48;
    }
    ctx->pc = 0x300E40u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x300E48u);
        ctx->pc = 0x300E44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x300E40u;
            // 0x300e44: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x300E48u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x300E48u; }
            if (ctx->pc != 0x300E48u) { return; }
        }
        }
    }
    ctx->pc = 0x300E48u;
label_300e48:
    // 0x300e48: 0x8e590000  lw          $t9, 0x0($s2)
    ctx->pc = 0x300e48u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_300e4c:
    // 0x300e4c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x300e4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_300e50:
    // 0x300e50: 0x8f390024  lw          $t9, 0x24($t9)
    ctx->pc = 0x300e50u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 36)));
label_300e54:
    // 0x300e54: 0x320f809  jalr        $t9
label_300e58:
    if (ctx->pc == 0x300E58u) {
        ctx->pc = 0x300E58u;
            // 0x300e58: 0x27a50040  addiu       $a1, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x300E5Cu;
        goto label_300e5c;
    }
    ctx->pc = 0x300E54u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x300E5Cu);
        ctx->pc = 0x300E58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x300E54u;
            // 0x300e58: 0x27a50040  addiu       $a1, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x300E5Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x300E5Cu; }
            if (ctx->pc != 0x300E5Cu) { return; }
        }
        }
    }
    ctx->pc = 0x300E5Cu;
label_300e5c:
    // 0x300e5c: 0xc0bafe8  jal         func_2EBFA0
label_300e60:
    if (ctx->pc == 0x300E60u) {
        ctx->pc = 0x300E60u;
            // 0x300e60: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x300E64u;
        goto label_300e64;
    }
    ctx->pc = 0x300E5Cu;
    SET_GPR_U32(ctx, 31, 0x300E64u);
    ctx->pc = 0x300E60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x300E5Cu;
            // 0x300e60: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2EBFA0u;
    if (runtime->hasFunction(0x2EBFA0u)) {
        auto targetFn = runtime->lookupFunction(0x2EBFA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x300E64u; }
        if (ctx->pc != 0x300E64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetActiveParam__14CCameraControlFv_0x2ebfa0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x300E64u; }
        if (ctx->pc != 0x300E64u) { return; }
    }
    ctx->pc = 0x300E64u;
label_300e64:
    // 0x300e64: 0x3c0542a0  lui         $a1, 0x42A0
    ctx->pc = 0x300e64u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)17056 << 16));
label_300e68:
    // 0x300e68: 0x3c034049  lui         $v1, 0x4049
    ctx->pc = 0x300e68u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16457 << 16));
label_300e6c:
    // 0x300e6c: 0xac450004  sw          $a1, 0x4($v0)
    ctx->pc = 0x300e6cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 5));
label_300e70:
    // 0x300e70: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x300e70u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
label_300e74:
    // 0x300e74: 0x3c044140  lui         $a0, 0x4140
    ctx->pc = 0x300e74u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16704 << 16));
label_300e78:
    // 0x300e78: 0xac450000  sw          $a1, 0x0($v0)
    ctx->pc = 0x300e78u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5));
label_300e7c:
    // 0x300e7c: 0xac440008  sw          $a0, 0x8($v0)
    ctx->pc = 0x300e7cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 4));
label_300e80:
    // 0x300e80: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x300e80u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_300e84:
    // 0x300e84: 0xac44000c  sw          $a0, 0xC($v0)
    ctx->pc = 0x300e84u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 4));
label_300e88:
    // 0x300e88: 0xc7a10044  lwc1        $f1, 0x44($sp)
    ctx->pc = 0x300e88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_300e8c:
    // 0x300e8c: 0x3c023e4c  lui         $v0, 0x3E4C
    ctx->pc = 0x300e8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15948 << 16));
label_300e90:
    // 0x300e90: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x300e90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
label_300e94:
    // 0x300e94: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x300e94u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_300e98:
    // 0x300e98: 0x0  nop
    ctx->pc = 0x300e98u;
    // NOP
label_300e9c:
    // 0x300e9c: 0x46011040  add.s       $f1, $f2, $f1
    ctx->pc = 0x300e9cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
label_300ea0:
    // 0x300ea0: 0xc04c374  jal         func_130DD0
label_300ea4:
    if (ctx->pc == 0x300EA4u) {
        ctx->pc = 0x300EA4u;
            // 0x300ea4: 0x46000b01  sub.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->pc = 0x300EA8u;
        goto label_300ea8;
    }
    ctx->pc = 0x300EA0u;
    SET_GPR_U32(ctx, 31, 0x300EA8u);
    ctx->pc = 0x300EA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x300EA0u;
            // 0x300ea4: 0x46000b01  sub.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x130DD0u;
    if (runtime->hasFunction(0x130DD0u)) {
        auto targetFn = runtime->lookupFunction(0x130DD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x300EA8u; }
        if (ctx->pc != 0x300EA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgAngleLimit__Ff_0x130dd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x300EA8u; }
        if (ctx->pc != 0x300EA8u) { return; }
    }
    ctx->pc = 0x300EA8u;
label_300ea8:
    // 0x300ea8: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x300ea8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
label_300eac:
    // 0x300eac: 0xc0bb224  jal         func_2EC890
label_300eb0:
    if (ctx->pc == 0x300EB0u) {
        ctx->pc = 0x300EB0u;
            // 0x300eb0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x300EB4u;
        goto label_300eb4;
    }
    ctx->pc = 0x300EACu;
    SET_GPR_U32(ctx, 31, 0x300EB4u);
    ctx->pc = 0x300EB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x300EACu;
            // 0x300eb0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2EC890u;
    if (runtime->hasFunction(0x2EC890u)) {
        auto targetFn = runtime->lookupFunction(0x2EC890u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x300EB4u; }
        if (ctx->pc != 0x300EB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        RotBack__14CCameraControlFf_0x2ec890(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x300EB4u; }
        if (ctx->pc != 0x300EB4u) { return; }
    }
    ctx->pc = 0x300EB4u;
label_300eb4:
    // 0x300eb4: 0x8e190060  lw          $t9, 0x60($s0)
    ctx->pc = 0x300eb4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
label_300eb8:
    // 0x300eb8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x300eb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_300ebc:
    // 0x300ebc: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x300ebcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_300ec0:
    // 0x300ec0: 0x320f809  jalr        $t9
label_300ec4:
    if (ctx->pc == 0x300EC4u) {
        ctx->pc = 0x300EC4u;
            // 0x300ec4: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x300EC8u;
        goto label_300ec8;
    }
    ctx->pc = 0x300EC0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x300EC8u);
        ctx->pc = 0x300EC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x300EC0u;
            // 0x300ec4: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x300EC8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x300EC8u; }
            if (ctx->pc != 0x300EC8u) { return; }
        }
        }
    }
    ctx->pc = 0x300EC8u;
label_300ec8:
    // 0x300ec8: 0xc0c42e8  jal         func_310BA0
label_300ecc:
    if (ctx->pc == 0x300ECCu) {
        ctx->pc = 0x300ED0u;
        goto label_300ed0;
    }
    ctx->pc = 0x300EC8u;
    SET_GPR_U32(ctx, 31, 0x300ED0u);
    ctx->pc = 0x310BA0u;
    if (runtime->hasFunction(0x310BA0u)) {
        auto targetFn = runtime->lookupFunction(0x310BA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x300ED0u; }
        if (ctx->pc != 0x300ED0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        InitFishBattle__Fv_0x310ba0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x300ED0u; }
        if (ctx->pc != 0x300ED0u) { return; }
    }
    ctx->pc = 0x300ED0u;
label_300ed0:
    // 0x300ed0: 0xaf80a028  sw          $zero, -0x5FD8($gp)
    ctx->pc = 0x300ed0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294942760), GPR_U32(ctx, 0));
label_300ed4:
    // 0x300ed4: 0xaf80a02c  sw          $zero, -0x5FD4($gp)
    ctx->pc = 0x300ed4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294942764), GPR_U32(ctx, 0));
label_300ed8:
    // 0x300ed8: 0xc0c3f04  jal         func_30FC10
label_300edc:
    if (ctx->pc == 0x300EDCu) {
        ctx->pc = 0x300EDCu;
            // 0x300edc: 0xaf80a030  sw          $zero, -0x5FD0($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294942768), GPR_U32(ctx, 0));
        ctx->pc = 0x300EE0u;
        goto label_300ee0;
    }
    ctx->pc = 0x300ED8u;
    SET_GPR_U32(ctx, 31, 0x300EE0u);
    ctx->pc = 0x300EDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x300ED8u;
            // 0x300edc: 0xaf80a030  sw          $zero, -0x5FD0($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294942768), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x30FC10u;
    if (runtime->hasFunction(0x30FC10u)) {
        auto targetFn = runtime->lookupFunction(0x30FC10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x300EE0u; }
        if (ctx->pc != 0x300EE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetNowLineLength__Fv_0x30fc10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x300EE0u; }
        if (ctx->pc != 0x300EE0u) { return; }
    }
    ctx->pc = 0x300EE0u;
label_300ee0:
    // 0x300ee0: 0xc0c3f18  jal         func_30FC60
label_300ee4:
    if (ctx->pc == 0x300EE4u) {
        ctx->pc = 0x300EE4u;
            // 0x300ee4: 0xe780a034  swc1        $f0, -0x5FCC($gp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 28), 4294942772), bits); }
        ctx->pc = 0x300EE8u;
        goto label_300ee8;
    }
    ctx->pc = 0x300EE0u;
    SET_GPR_U32(ctx, 31, 0x300EE8u);
    ctx->pc = 0x300EE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x300EE0u;
            // 0x300ee4: 0xe780a034  swc1        $f0, -0x5FCC($gp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 28), 4294942772), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x30FC60u;
    if (runtime->hasFunction(0x30FC60u)) {
        auto targetFn = runtime->lookupFunction(0x30FC60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x300EE8u; }
        if (ctx->pc != 0x300EE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetMinLineLength__Fv_0x30fc60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x300EE8u; }
        if (ctx->pc != 0x300EE8u) { return; }
    }
    ctx->pc = 0x300EE8u;
label_300ee8:
    // 0x300ee8: 0xe780a038  swc1        $f0, -0x5FC8($gp)
    ctx->pc = 0x300ee8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 28), 4294942776), bits); }
label_300eec:
    // 0x300eec: 0xc0c05a8  jal         func_3016A0
label_300ef0:
    if (ctx->pc == 0x300EF0u) {
        ctx->pc = 0x300EF0u;
            // 0x300ef0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x300EF4u;
        goto label_300ef4;
    }
    ctx->pc = 0x300EECu;
    SET_GPR_U32(ctx, 31, 0x300EF4u);
    ctx->pc = 0x300EF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x300EECu;
            // 0x300ef0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3016A0u;
    if (runtime->hasFunction(0x3016A0u)) {
        auto targetFn = runtime->lookupFunction(0x3016A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x300EF4u; }
        if (ctx->pc != 0x300EF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetFishDist__FP6CScene_0x3016a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x300EF4u; }
        if (ctx->pc != 0x300EF4u) { return; }
    }
    ctx->pc = 0x300EF4u;
label_300ef4:
    // 0x300ef4: 0x3c0242b4  lui         $v0, 0x42B4
    ctx->pc = 0x300ef4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17076 << 16));
label_300ef8:
    // 0x300ef8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x300ef8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_300efc:
    // 0x300efc: 0xaf82a040  sw          $v0, -0x5FC0($gp)
    ctx->pc = 0x300efcu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294942784), GPR_U32(ctx, 2));
label_300f00:
    // 0x300f00: 0xe780a03c  swc1        $f0, -0x5FC4($gp)
    ctx->pc = 0x300f00u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 28), 4294942780), bits); }
label_300f04:
    // 0x300f04: 0x2402003c  addiu       $v0, $zero, 0x3C
    ctx->pc = 0x300f04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
label_300f08:
    // 0x300f08: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x300f08u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_300f0c:
    // 0x300f0c: 0xaf82a060  sw          $v0, -0x5FA0($gp)
    ctx->pc = 0x300f0cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294942816), GPR_U32(ctx, 2));
label_300f10:
    // 0x300f10: 0xaf80a04c  sw          $zero, -0x5FB4($gp)
    ctx->pc = 0x300f10u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294942796), GPR_U32(ctx, 0));
label_300f14:
    // 0x300f14: 0xaf80a050  sw          $zero, -0x5FB0($gp)
    ctx->pc = 0x300f14u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294942800), GPR_U32(ctx, 0));
label_300f18:
    // 0x300f18: 0xaf80a054  sw          $zero, -0x5FAC($gp)
    ctx->pc = 0x300f18u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294942804), GPR_U32(ctx, 0));
label_300f1c:
    // 0x300f1c: 0xaf80a058  sw          $zero, -0x5FA8($gp)
    ctx->pc = 0x300f1cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294942808), GPR_U32(ctx, 0));
label_300f20:
    // 0x300f20: 0xaf80a048  sw          $zero, -0x5FB8($gp)
    ctx->pc = 0x300f20u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294942792), GPR_U32(ctx, 0));
label_300f24:
    // 0x300f24: 0xc0a98a0  jal         func_2A6280
label_300f28:
    if (ctx->pc == 0x300F28u) {
        ctx->pc = 0x300F28u;
            // 0x300f28: 0xaf80a06c  sw          $zero, -0x5F94($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294942828), GPR_U32(ctx, 0));
        ctx->pc = 0x300F2Cu;
        goto label_300f2c;
    }
    ctx->pc = 0x300F24u;
    SET_GPR_U32(ctx, 31, 0x300F2Cu);
    ctx->pc = 0x300F28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x300F24u;
            // 0x300f28: 0xaf80a06c  sw          $zero, -0x5F94($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294942828), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A6280u;
    if (runtime->hasFunction(0x2A6280u)) {
        auto targetFn = runtime->lookupFunction(0x2A6280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x300F2Cu; }
        if (ctx->pc != 0x300F2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        StopBGM__6CSceneFi_0x2a6280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x300F2Cu; }
        if (ctx->pc != 0x300F2Cu) { return; }
    }
    ctx->pc = 0x300F2Cu;
label_300f2c:
    // 0x300f2c: 0xaf80a044  sw          $zero, -0x5FBC($gp)
    ctx->pc = 0x300f2cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294942788), GPR_U32(ctx, 0));
label_300f30:
    // 0x300f30: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x300f30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_300f34:
    // 0x300f34: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x300f34u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_300f38:
    // 0x300f38: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x300f38u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_300f3c:
    // 0x300f3c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x300f3cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_300f40:
    // 0x300f40: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x300f40u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_300f44:
    // 0x300f44: 0x3e00008  jr          $ra
label_300f48:
    if (ctx->pc == 0x300F48u) {
        ctx->pc = 0x300F48u;
            // 0x300f48: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x300F4Cu;
        goto label_fallthrough_0x300f44;
    }
    ctx->pc = 0x300F44u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x300F48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x300F44u;
            // 0x300f48: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x300f44:
    ctx->pc = 0x300F4Cu;
}
