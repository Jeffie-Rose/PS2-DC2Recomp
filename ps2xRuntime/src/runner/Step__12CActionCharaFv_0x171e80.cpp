#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: Step__12CActionCharaFv
// Address: 0x171e80 - 0x172090
void Step__12CActionCharaFv_0x171e80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Step__12CActionCharaFv_0x171e80");
#endif

    switch (ctx->pc) {
        case 0x171e80u: goto label_171e80;
        case 0x171e84u: goto label_171e84;
        case 0x171e88u: goto label_171e88;
        case 0x171e8cu: goto label_171e8c;
        case 0x171e90u: goto label_171e90;
        case 0x171e94u: goto label_171e94;
        case 0x171e98u: goto label_171e98;
        case 0x171e9cu: goto label_171e9c;
        case 0x171ea0u: goto label_171ea0;
        case 0x171ea4u: goto label_171ea4;
        case 0x171ea8u: goto label_171ea8;
        case 0x171eacu: goto label_171eac;
        case 0x171eb0u: goto label_171eb0;
        case 0x171eb4u: goto label_171eb4;
        case 0x171eb8u: goto label_171eb8;
        case 0x171ebcu: goto label_171ebc;
        case 0x171ec0u: goto label_171ec0;
        case 0x171ec4u: goto label_171ec4;
        case 0x171ec8u: goto label_171ec8;
        case 0x171eccu: goto label_171ecc;
        case 0x171ed0u: goto label_171ed0;
        case 0x171ed4u: goto label_171ed4;
        case 0x171ed8u: goto label_171ed8;
        case 0x171edcu: goto label_171edc;
        case 0x171ee0u: goto label_171ee0;
        case 0x171ee4u: goto label_171ee4;
        case 0x171ee8u: goto label_171ee8;
        case 0x171eecu: goto label_171eec;
        case 0x171ef0u: goto label_171ef0;
        case 0x171ef4u: goto label_171ef4;
        case 0x171ef8u: goto label_171ef8;
        case 0x171efcu: goto label_171efc;
        case 0x171f00u: goto label_171f00;
        case 0x171f04u: goto label_171f04;
        case 0x171f08u: goto label_171f08;
        case 0x171f0cu: goto label_171f0c;
        case 0x171f10u: goto label_171f10;
        case 0x171f14u: goto label_171f14;
        case 0x171f18u: goto label_171f18;
        case 0x171f1cu: goto label_171f1c;
        case 0x171f20u: goto label_171f20;
        case 0x171f24u: goto label_171f24;
        case 0x171f28u: goto label_171f28;
        case 0x171f2cu: goto label_171f2c;
        case 0x171f30u: goto label_171f30;
        case 0x171f34u: goto label_171f34;
        case 0x171f38u: goto label_171f38;
        case 0x171f3cu: goto label_171f3c;
        case 0x171f40u: goto label_171f40;
        case 0x171f44u: goto label_171f44;
        case 0x171f48u: goto label_171f48;
        case 0x171f4cu: goto label_171f4c;
        case 0x171f50u: goto label_171f50;
        case 0x171f54u: goto label_171f54;
        case 0x171f58u: goto label_171f58;
        case 0x171f5cu: goto label_171f5c;
        case 0x171f60u: goto label_171f60;
        case 0x171f64u: goto label_171f64;
        case 0x171f68u: goto label_171f68;
        case 0x171f6cu: goto label_171f6c;
        case 0x171f70u: goto label_171f70;
        case 0x171f74u: goto label_171f74;
        case 0x171f78u: goto label_171f78;
        case 0x171f7cu: goto label_171f7c;
        case 0x171f80u: goto label_171f80;
        case 0x171f84u: goto label_171f84;
        case 0x171f88u: goto label_171f88;
        case 0x171f8cu: goto label_171f8c;
        case 0x171f90u: goto label_171f90;
        case 0x171f94u: goto label_171f94;
        case 0x171f98u: goto label_171f98;
        case 0x171f9cu: goto label_171f9c;
        case 0x171fa0u: goto label_171fa0;
        case 0x171fa4u: goto label_171fa4;
        case 0x171fa8u: goto label_171fa8;
        case 0x171facu: goto label_171fac;
        case 0x171fb0u: goto label_171fb0;
        case 0x171fb4u: goto label_171fb4;
        case 0x171fb8u: goto label_171fb8;
        case 0x171fbcu: goto label_171fbc;
        case 0x171fc0u: goto label_171fc0;
        case 0x171fc4u: goto label_171fc4;
        case 0x171fc8u: goto label_171fc8;
        case 0x171fccu: goto label_171fcc;
        case 0x171fd0u: goto label_171fd0;
        case 0x171fd4u: goto label_171fd4;
        case 0x171fd8u: goto label_171fd8;
        case 0x171fdcu: goto label_171fdc;
        case 0x171fe0u: goto label_171fe0;
        case 0x171fe4u: goto label_171fe4;
        case 0x171fe8u: goto label_171fe8;
        case 0x171fecu: goto label_171fec;
        case 0x171ff0u: goto label_171ff0;
        case 0x171ff4u: goto label_171ff4;
        case 0x171ff8u: goto label_171ff8;
        case 0x171ffcu: goto label_171ffc;
        case 0x172000u: goto label_172000;
        case 0x172004u: goto label_172004;
        case 0x172008u: goto label_172008;
        case 0x17200cu: goto label_17200c;
        case 0x172010u: goto label_172010;
        case 0x172014u: goto label_172014;
        case 0x172018u: goto label_172018;
        case 0x17201cu: goto label_17201c;
        case 0x172020u: goto label_172020;
        case 0x172024u: goto label_172024;
        case 0x172028u: goto label_172028;
        case 0x17202cu: goto label_17202c;
        case 0x172030u: goto label_172030;
        case 0x172034u: goto label_172034;
        case 0x172038u: goto label_172038;
        case 0x17203cu: goto label_17203c;
        case 0x172040u: goto label_172040;
        case 0x172044u: goto label_172044;
        case 0x172048u: goto label_172048;
        case 0x17204cu: goto label_17204c;
        case 0x172050u: goto label_172050;
        case 0x172054u: goto label_172054;
        case 0x172058u: goto label_172058;
        case 0x17205cu: goto label_17205c;
        case 0x172060u: goto label_172060;
        case 0x172064u: goto label_172064;
        case 0x172068u: goto label_172068;
        case 0x17206cu: goto label_17206c;
        case 0x172070u: goto label_172070;
        case 0x172074u: goto label_172074;
        case 0x172078u: goto label_172078;
        case 0x17207cu: goto label_17207c;
        case 0x172080u: goto label_172080;
        case 0x172084u: goto label_172084;
        case 0x172088u: goto label_172088;
        case 0x17208cu: goto label_17208c;
        default: break;
    }

    ctx->pc = 0x171e80u;

label_171e80:
    // 0x171e80: 0x27bdff10  addiu       $sp, $sp, -0xF0
    ctx->pc = 0x171e80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967056));
label_171e84:
    // 0x171e84: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x171e84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_171e88:
    // 0x171e88: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x171e88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_171e8c:
    // 0x171e8c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x171e8cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_171e90:
    // 0x171e90: 0xc05c67c  jal         func_1719F0
label_171e94:
    if (ctx->pc == 0x171E94u) {
        ctx->pc = 0x171E94u;
            // 0x171e94: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->pc = 0x171E98u;
        goto label_171e98;
    }
    ctx->pc = 0x171E90u;
    SET_GPR_U32(ctx, 31, 0x171E98u);
    ctx->pc = 0x171E94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x171E90u;
            // 0x171e94: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1719F0u;
    if (runtime->hasFunction(0x1719F0u)) {
        auto targetFn = runtime->lookupFunction(0x1719F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x171E98u; }
        if (ctx->pc != 0x171E98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        StepParam__12CActionCharaFv_0x1719f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x171E98u; }
        if (ctx->pc != 0x171E98u) { return; }
    }
    ctx->pc = 0x171E98u;
label_171e98:
    // 0x171e98: 0x8e230590  lw          $v1, 0x590($s1)
    ctx->pc = 0x171e98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1424)));
label_171e9c:
    // 0x171e9c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x171e9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_171ea0:
    // 0x171ea0: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
label_171ea4:
    if (ctx->pc == 0x171EA4u) {
        ctx->pc = 0x171EA4u;
            // 0x171ea4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x171EA8u;
        goto label_171ea8;
    }
    ctx->pc = 0x171EA0u;
    {
        const bool branch_taken_0x171ea0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x171EA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x171EA0u;
            // 0x171ea4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x171ea0) {
            ctx->pc = 0x171EB0u;
            goto label_171eb0;
        }
    }
    ctx->pc = 0x171EA8u;
label_171ea8:
    // 0x171ea8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x171ea8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_171eac:
    // 0x171eac: 0xae220590  sw          $v0, 0x590($s1)
    ctx->pc = 0x171eacu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1424), GPR_U32(ctx, 2));
label_171eb0:
    // 0x171eb0: 0xc05cfb4  jal         func_173ED0
label_171eb4:
    if (ctx->pc == 0x171EB4u) {
        ctx->pc = 0x171EB8u;
        goto label_171eb8;
    }
    ctx->pc = 0x171EB0u;
    SET_GPR_U32(ctx, 31, 0x171EB8u);
    ctx->pc = 0x173ED0u;
    if (runtime->hasFunction(0x173ED0u)) {
        auto targetFn = runtime->lookupFunction(0x173ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x171EB8u; }
        if (ctx->pc != 0x171EB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Step__11CCharacter2Fv_0x173ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x171EB8u; }
        if (ctx->pc != 0x171EB8u) { return; }
    }
    ctx->pc = 0x171EB8u;
label_171eb8:
    // 0x171eb8: 0x8e300678  lw          $s0, 0x678($s1)
    ctx->pc = 0x171eb8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1656)));
label_171ebc:
    // 0x171ebc: 0x1200000b  beqz        $s0, . + 4 + (0xB << 2)
label_171ec0:
    if (ctx->pc == 0x171EC0u) {
        ctx->pc = 0x171EC4u;
        goto label_171ec4;
    }
    ctx->pc = 0x171EBCu;
    {
        const bool branch_taken_0x171ebc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x171ebc) {
            ctx->pc = 0x171EECu;
            goto label_171eec;
        }
    }
    ctx->pc = 0x171EC4u;
label_171ec4:
    // 0x171ec4: 0x8e030590  lw          $v1, 0x590($s0)
    ctx->pc = 0x171ec4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1424)));
label_171ec8:
    // 0x171ec8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x171ec8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_171ecc:
    // 0x171ecc: 0x10620002  beq         $v1, $v0, . + 4 + (0x2 << 2)
label_171ed0:
    if (ctx->pc == 0x171ED0u) {
        ctx->pc = 0x171ED4u;
        goto label_171ed4;
    }
    ctx->pc = 0x171ECCu;
    {
        const bool branch_taken_0x171ecc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x171ecc) {
            ctx->pc = 0x171ED8u;
            goto label_171ed8;
        }
    }
    ctx->pc = 0x171ED4u;
label_171ed4:
    // 0x171ed4: 0xae000590  sw          $zero, 0x590($s0)
    ctx->pc = 0x171ed4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1424), GPR_U32(ctx, 0));
label_171ed8:
    // 0x171ed8: 0xc05cfb4  jal         func_173ED0
label_171edc:
    if (ctx->pc == 0x171EDCu) {
        ctx->pc = 0x171EDCu;
            // 0x171edc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x171EE0u;
        goto label_171ee0;
    }
    ctx->pc = 0x171ED8u;
    SET_GPR_U32(ctx, 31, 0x171EE0u);
    ctx->pc = 0x171EDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x171ED8u;
            // 0x171edc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x173ED0u;
    if (runtime->hasFunction(0x173ED0u)) {
        auto targetFn = runtime->lookupFunction(0x173ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x171EE0u; }
        if (ctx->pc != 0x171EE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Step__11CCharacter2Fv_0x173ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x171EE0u; }
        if (ctx->pc != 0x171EE0u) { return; }
    }
    ctx->pc = 0x171EE0u;
label_171ee0:
    // 0x171ee0: 0x8e100678  lw          $s0, 0x678($s0)
    ctx->pc = 0x171ee0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1656)));
label_171ee4:
    // 0x171ee4: 0x1600fff7  bnez        $s0, . + 4 + (-0x9 << 2)
label_171ee8:
    if (ctx->pc == 0x171EE8u) {
        ctx->pc = 0x171EECu;
        goto label_171eec;
    }
    ctx->pc = 0x171EE4u;
    {
        const bool branch_taken_0x171ee4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x171ee4) {
            ctx->pc = 0x171EC4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_171ec4;
        }
    }
    ctx->pc = 0x171EECu;
label_171eec:
    // 0x171eec: 0x0  nop
    ctx->pc = 0x171eecu;
    // NOP
label_171ef0:
    // 0x171ef0: 0x8623071c  lh          $v1, 0x71C($s1)
    ctx->pc = 0x171ef0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1820)));
label_171ef4:
    // 0x171ef4: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x171ef4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_171ef8:
    // 0x171ef8: 0x1462001f  bne         $v1, $v0, . + 4 + (0x1F << 2)
label_171efc:
    if (ctx->pc == 0x171EFCu) {
        ctx->pc = 0x171F00u;
        goto label_171f00;
    }
    ctx->pc = 0x171EF8u;
    {
        const bool branch_taken_0x171ef8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x171ef8) {
            ctx->pc = 0x171F78u;
            goto label_171f78;
        }
    }
    ctx->pc = 0x171F00u;
label_171f00:
    // 0x171f00: 0x8e220720  lw          $v0, 0x720($s1)
    ctx->pc = 0x171f00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1824)));
label_171f04:
    // 0x171f04: 0x1040001c  beqz        $v0, . + 4 + (0x1C << 2)
label_171f08:
    if (ctx->pc == 0x171F08u) {
        ctx->pc = 0x171F0Cu;
        goto label_171f0c;
    }
    ctx->pc = 0x171F04u;
    {
        const bool branch_taken_0x171f04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x171f04) {
            ctx->pc = 0x171F78u;
            goto label_171f78;
        }
    }
    ctx->pc = 0x171F0Cu;
label_171f0c:
    // 0x171f0c: 0x8e220724  lw          $v0, 0x724($s1)
    ctx->pc = 0x171f0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1828)));
label_171f10:
    // 0x171f10: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
label_171f14:
    if (ctx->pc == 0x171F14u) {
        ctx->pc = 0x171F18u;
        goto label_171f18;
    }
    ctx->pc = 0x171F10u;
    {
        const bool branch_taken_0x171f10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x171f10) {
            ctx->pc = 0x171F78u;
            goto label_171f78;
        }
    }
    ctx->pc = 0x171F18u;
label_171f18:
    // 0x171f18: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x171f18u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_171f1c:
    // 0x171f1c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x171f1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_171f20:
    // 0x171f20: 0x8f390024  lw          $t9, 0x24($t9)
    ctx->pc = 0x171f20u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 36)));
label_171f24:
    // 0x171f24: 0x320f809  jalr        $t9
label_171f28:
    if (ctx->pc == 0x171F28u) {
        ctx->pc = 0x171F28u;
            // 0x171f28: 0x27a50040  addiu       $a1, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x171F2Cu;
        goto label_171f2c;
    }
    ctx->pc = 0x171F24u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x171F2Cu);
        ctx->pc = 0x171F28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x171F24u;
            // 0x171f28: 0x27a50040  addiu       $a1, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x171F2Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x171F2Cu; }
            if (ctx->pc != 0x171F2Cu) { return; }
        }
        }
    }
    ctx->pc = 0x171F2Cu;
label_171f2c:
    // 0x171f2c: 0x8e240724  lw          $a0, 0x724($s1)
    ctx->pc = 0x171f2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1828)));
label_171f30:
    // 0x171f30: 0xc04de0c  jal         func_137830
label_171f34:
    if (ctx->pc == 0x171F34u) {
        ctx->pc = 0x171F34u;
            // 0x171f34: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x171F38u;
        goto label_171f38;
    }
    ctx->pc = 0x171F30u;
    SET_GPR_U32(ctx, 31, 0x171F38u);
    ctx->pc = 0x171F34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x171F30u;
            // 0x171f34: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x137830u;
    if (runtime->hasFunction(0x137830u)) {
        auto targetFn = runtime->lookupFunction(0x137830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x171F38u; }
        if (ctx->pc != 0x171F38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetWorldPosition0__8mgCFrameFPf_0x137830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x171F38u; }
        if (ctx->pc != 0x171F38u) { return; }
    }
    ctx->pc = 0x171F38u;
label_171f38:
    // 0x171f38: 0xc7a00034  lwc1        $f0, 0x34($sp)
    ctx->pc = 0x171f38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_171f3c:
    // 0x171f3c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x171f3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_171f40:
    // 0x171f40: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x171f40u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_171f44:
    // 0x171f44: 0xafa2003c  sw          $v0, 0x3C($sp)
    ctx->pc = 0x171f44u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 2));
label_171f48:
    // 0x171f48: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x171f48u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_171f4c:
    // 0x171f4c: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x171f4cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
label_171f50:
    // 0x171f50: 0x8e240720  lw          $a0, 0x720($s1)
    ctx->pc = 0x171f50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1824)));
label_171f54:
    // 0x171f54: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x171f54u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_171f58:
    // 0x171f58: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x171f58u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_171f5c:
    // 0x171f5c: 0x320f809  jalr        $t9
label_171f60:
    if (ctx->pc == 0x171F60u) {
        ctx->pc = 0x171F60u;
            // 0x171f60: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x171F64u;
        goto label_171f64;
    }
    ctx->pc = 0x171F5Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x171F64u);
        ctx->pc = 0x171F60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x171F5Cu;
            // 0x171f60: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x171F64u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x171F64u; }
            if (ctx->pc != 0x171F64u) { return; }
        }
        }
    }
    ctx->pc = 0x171F64u;
label_171f64:
    // 0x171f64: 0x8e240720  lw          $a0, 0x720($s1)
    ctx->pc = 0x171f64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1824)));
label_171f68:
    // 0x171f68: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x171f68u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_171f6c:
    // 0x171f6c: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x171f6cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_171f70:
    // 0x171f70: 0x320f809  jalr        $t9
label_171f74:
    if (ctx->pc == 0x171F74u) {
        ctx->pc = 0x171F74u;
            // 0x171f74: 0x27a50040  addiu       $a1, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x171F78u;
        goto label_171f78;
    }
    ctx->pc = 0x171F70u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x171F78u);
        ctx->pc = 0x171F74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x171F70u;
            // 0x171f74: 0x27a50040  addiu       $a1, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x171F78u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x171F78u; }
            if (ctx->pc != 0x171F78u) { return; }
        }
        }
    }
    ctx->pc = 0x171F78u;
label_171f78:
    // 0x171f78: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x171f78u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
label_171f7c:
    // 0x171f7c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x171f7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_171f80:
    // 0x171f80: 0xc05af3c  jal         func_16BCF0
label_171f84:
    if (ctx->pc == 0x171F84u) {
        ctx->pc = 0x171F84u;
            // 0x171f84: 0x24a53770  addiu       $a1, $a1, 0x3770 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 14192));
        ctx->pc = 0x171F88u;
        goto label_171f88;
    }
    ctx->pc = 0x171F80u;
    SET_GPR_U32(ctx, 31, 0x171F88u);
    ctx->pc = 0x171F84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x171F80u;
            // 0x171f84: 0x24a53770  addiu       $a1, $a1, 0x3770 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 14192));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16BCF0u;
    if (runtime->hasFunction(0x16BCF0u)) {
        auto targetFn = runtime->lookupFunction(0x16BCF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x171F88u; }
        if (ctx->pc != 0x171F88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SearchObject__12CActionCharaFPc_0x16bcf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x171F88u; }
        if (ctx->pc != 0x171F88u) { return; }
    }
    ctx->pc = 0x171F88u;
label_171f88:
    // 0x171f88: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x171f88u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_171f8c:
    // 0x171f8c: 0x1200003b  beqz        $s0, . + 4 + (0x3B << 2)
label_171f90:
    if (ctx->pc == 0x171F90u) {
        ctx->pc = 0x171F94u;
        goto label_171f94;
    }
    ctx->pc = 0x171F8Cu;
    {
        const bool branch_taken_0x171f8c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x171f8c) {
            ctx->pc = 0x17207Cu;
            goto label_17207c;
        }
    }
    ctx->pc = 0x171F94u;
label_171f94:
    // 0x171f94: 0x83828998  lb          $v0, -0x7668($gp)
    ctx->pc = 0x171f94u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294936984)));
label_171f98:
    // 0x171f98: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_171f9c:
    if (ctx->pc == 0x171F9Cu) {
        ctx->pc = 0x171F9Cu;
            // 0x171f9c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x171FA0u;
        goto label_171fa0;
    }
    ctx->pc = 0x171F98u;
    {
        const bool branch_taken_0x171f98 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x171F9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x171F98u;
            // 0x171f9c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x171f98) {
            ctx->pc = 0x171FACu;
            goto label_171fac;
        }
    }
    ctx->pc = 0x171FA0u;
label_171fa0:
    // 0x171fa0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x171fa0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_171fa4:
    // 0x171fa4: 0xaf808994  sw          $zero, -0x766C($gp)
    ctx->pc = 0x171fa4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936980), GPR_U32(ctx, 0));
label_171fa8:
    // 0x171fa8: 0xa3828998  sb          $v0, -0x7668($gp)
    ctx->pc = 0x171fa8u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294936984), (uint8_t)GPR_U32(ctx, 2));
label_171fac:
    // 0x171fac: 0xc04de0c  jal         func_137830
label_171fb0:
    if (ctx->pc == 0x171FB0u) {
        ctx->pc = 0x171FB0u;
            // 0x171fb0: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x171FB4u;
        goto label_171fb4;
    }
    ctx->pc = 0x171FACu;
    SET_GPR_U32(ctx, 31, 0x171FB4u);
    ctx->pc = 0x171FB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x171FACu;
            // 0x171fb0: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x137830u;
    if (runtime->hasFunction(0x137830u)) {
        auto targetFn = runtime->lookupFunction(0x137830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x171FB4u; }
        if (ctx->pc != 0x171FB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetWorldPosition0__8mgCFrameFPf_0x137830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x171FB4u; }
        if (ctx->pc != 0x171FB4u) { return; }
    }
    ctx->pc = 0x171FB4u;
label_171fb4:
    // 0x171fb4: 0x86220772  lh          $v0, 0x772($s1)
    ctx->pc = 0x171fb4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1906)));
label_171fb8:
    // 0x171fb8: 0x1040001f  beqz        $v0, . + 4 + (0x1F << 2)
label_171fbc:
    if (ctx->pc == 0x171FBCu) {
        ctx->pc = 0x171FC0u;
        goto label_171fc0;
    }
    ctx->pc = 0x171FB8u;
    {
        const bool branch_taken_0x171fb8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x171fb8) {
            ctx->pc = 0x172038u;
            goto label_172038;
        }
    }
    ctx->pc = 0x171FC0u;
label_171fc0:
    // 0x171fc0: 0x8222076e  lb          $v0, 0x76E($s1)
    ctx->pc = 0x171fc0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 1902)));
label_171fc4:
    // 0x171fc4: 0x1040001c  beqz        $v0, . + 4 + (0x1C << 2)
label_171fc8:
    if (ctx->pc == 0x171FC8u) {
        ctx->pc = 0x171FCCu;
        goto label_171fcc;
    }
    ctx->pc = 0x171FC4u;
    {
        const bool branch_taken_0x171fc4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x171fc4) {
            ctx->pc = 0x172038u;
            goto label_172038;
        }
    }
    ctx->pc = 0x171FCCu;
label_171fcc:
    // 0x171fcc: 0x86230770  lh          $v1, 0x770($s1)
    ctx->pc = 0x171fccu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1904)));
label_171fd0:
    // 0x171fd0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x171fd0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_171fd4:
    // 0x171fd4: 0x8f828db8  lw          $v0, -0x7248($gp)
    ctx->pc = 0x171fd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938040)));
label_171fd8:
    // 0x171fd8: 0x2463ffe8  addiu       $v1, $v1, -0x18
    ctx->pc = 0x171fd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967272));
label_171fdc:
    // 0x171fdc: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x171fdcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_171fe0:
    // 0x171fe0: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x171fe0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_171fe4:
    // 0x171fe4: 0x8c440484  lw          $a0, 0x484($v0)
    ctx->pc = 0x171fe4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1156)));
label_171fe8:
    // 0x171fe8: 0xc05d3d4  jal         func_174F50
label_171fec:
    if (ctx->pc == 0x171FECu) {
        ctx->pc = 0x171FECu;
            // 0x171fec: 0x27a60060  addiu       $a2, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x171FF0u;
        goto label_171ff0;
    }
    ctx->pc = 0x171FE8u;
    SET_GPR_U32(ctx, 31, 0x171FF0u);
    ctx->pc = 0x171FECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x171FE8u;
            // 0x171fec: 0x27a60060  addiu       $a2, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
    ctx->pc = 0x174F50u;
    if (runtime->hasFunction(0x174F50u)) {
        auto targetFn = runtime->lookupFunction(0x174F50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x171FF0u; }
        if (ctx->pc != 0x171FF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetEntryObjectPos__11CCharacter2FiPf_0x174f50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x171FF0u; }
        if (ctx->pc != 0x171FF0u) { return; }
    }
    ctx->pc = 0x171FF0u;
label_171ff0:
    // 0x171ff0: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x171ff0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_171ff4:
    // 0x171ff4: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x171ff4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_171ff8:
    // 0x171ff8: 0xc041c3e  jal         func_1070F8
label_171ffc:
    if (ctx->pc == 0x171FFCu) {
        ctx->pc = 0x171FFCu;
            // 0x171ffc: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x172000u;
        goto label_172000;
    }
    ctx->pc = 0x171FF8u;
    SET_GPR_U32(ctx, 31, 0x172000u);
    ctx->pc = 0x171FFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x171FF8u;
            // 0x171ffc: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1070F8u;
    if (runtime->hasFunction(0x1070F8u)) {
        auto targetFn = runtime->lookupFunction(0x1070F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x172000u; }
        if (ctx->pc != 0x172000u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0SubVector_0x1070f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x172000u; }
        if (ctx->pc != 0x172000u) { return; }
    }
    ctx->pc = 0x172000u;
label_172000:
    // 0x172000: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x172000u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_172004:
    // 0x172004: 0xc041c5c  jal         func_107170
label_172008:
    if (ctx->pc == 0x172008u) {
        ctx->pc = 0x172008u;
            // 0x172008: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x17200Cu;
        goto label_17200c;
    }
    ctx->pc = 0x172004u;
    SET_GPR_U32(ctx, 31, 0x17200Cu);
    ctx->pc = 0x172008u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x172004u;
            // 0x172008: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107170u;
    if (runtime->hasFunction(0x107170u)) {
        auto targetFn = runtime->lookupFunction(0x107170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17200Cu; }
        if (ctx->pc != 0x17200Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0CopyVector_0x107170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17200Cu; }
        if (ctx->pc != 0x17200Cu) { return; }
    }
    ctx->pc = 0x17200Cu;
label_17200c:
    // 0x17200c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x17200cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_172010:
    // 0x172010: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x172010u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_172014:
    // 0x172014: 0xafa2006c  sw          $v0, 0x6C($sp)
    ctx->pc = 0x172014u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 2));
label_172018:
    // 0x172018: 0xc04bff4  jal         func_12FFD0
label_17201c:
    if (ctx->pc == 0x17201Cu) {
        ctx->pc = 0x17201Cu;
            // 0x17201c: 0xafa00064  sw          $zero, 0x64($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 100), GPR_U32(ctx, 0));
        ctx->pc = 0x172020u;
        goto label_172020;
    }
    ctx->pc = 0x172018u;
    SET_GPR_U32(ctx, 31, 0x172020u);
    ctx->pc = 0x17201Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x172018u;
            // 0x17201c: 0xafa00064  sw          $zero, 0x64($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 100), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12FFD0u;
    if (runtime->hasFunction(0x12FFD0u)) {
        auto targetFn = runtime->lookupFunction(0x12FFD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x172020u; }
        if (ctx->pc != 0x172020u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgDistVector__FPf_0x12ffd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x172020u; }
        if (ctx->pc != 0x172020u) { return; }
    }
    ctx->pc = 0x172020u;
label_172020:
    // 0x172020: 0xc7ac0054  lwc1        $f12, 0x54($sp)
    ctx->pc = 0x172020u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_172024:
    // 0x172024: 0xc047c76  jal         func_11F1D8
label_172028:
    if (ctx->pc == 0x172028u) {
        ctx->pc = 0x172028u;
            // 0x172028: 0x46000346  mov.s       $f13, $f0 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[0]);
        ctx->pc = 0x17202Cu;
        goto label_17202c;
    }
    ctx->pc = 0x172024u;
    SET_GPR_U32(ctx, 31, 0x17202Cu);
    ctx->pc = 0x172028u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x172024u;
            // 0x172028: 0x46000346  mov.s       $f13, $f0 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x11F1D8u;
    if (runtime->hasFunction(0x11F1D8u)) {
        auto targetFn = runtime->lookupFunction(0x11F1D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17202Cu; }
        if (ctx->pc != 0x17202Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        atan2f_0x11f1d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17202Cu; }
        if (ctx->pc != 0x17202Cu) { return; }
    }
    ctx->pc = 0x17202Cu;
label_17202c:
    // 0x17202c: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x17202cu;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_172030:
    // 0x172030: 0x10000002  b           . + 4 + (0x2 << 2)
label_172034:
    if (ctx->pc == 0x172034u) {
        ctx->pc = 0x172034u;
            // 0x172034: 0xe7808994  swc1        $f0, -0x766C($gp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 28), 4294936980), bits); }
        ctx->pc = 0x172038u;
        goto label_172038;
    }
    ctx->pc = 0x172030u;
    {
        const bool branch_taken_0x172030 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x172034u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x172030u;
            // 0x172034: 0xe7808994  swc1        $f0, -0x766C($gp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 28), 4294936980), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x172030) {
            ctx->pc = 0x17203Cu;
            goto label_17203c;
        }
    }
    ctx->pc = 0x172038u;
label_172038:
    // 0x172038: 0xaf808994  sw          $zero, -0x766C($gp)
    ctx->pc = 0x172038u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936980), GPR_U32(ctx, 0));
label_17203c:
    // 0x17203c: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x17203cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_172040:
    // 0x172040: 0xc041c60  jal         func_107180
label_172044:
    if (ctx->pc == 0x172044u) {
        ctx->pc = 0x172044u;
            // 0x172044: 0x260500b0  addiu       $a1, $s0, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 176));
        ctx->pc = 0x172048u;
        goto label_172048;
    }
    ctx->pc = 0x172040u;
    SET_GPR_U32(ctx, 31, 0x172048u);
    ctx->pc = 0x172044u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x172040u;
            // 0x172044: 0x260500b0  addiu       $a1, $s0, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 176));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107180u;
    if (runtime->hasFunction(0x107180u)) {
        auto targetFn = runtime->lookupFunction(0x107180u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x172048u; }
        if (ctx->pc != 0x172048u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0CopyMatrix_0x107180(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x172048u; }
        if (ctx->pc != 0x172048u) { return; }
    }
    ctx->pc = 0x172048u;
label_172048:
    // 0x172048: 0xc041c7a  jal         func_1071E8
label_17204c:
    if (ctx->pc == 0x17204Cu) {
        ctx->pc = 0x17204Cu;
            // 0x17204c: 0x27a400b0  addiu       $a0, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->pc = 0x172050u;
        goto label_172050;
    }
    ctx->pc = 0x172048u;
    SET_GPR_U32(ctx, 31, 0x172050u);
    ctx->pc = 0x17204Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x172048u;
            // 0x17204c: 0x27a400b0  addiu       $a0, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1071E8u;
    if (runtime->hasFunction(0x1071E8u)) {
        auto targetFn = runtime->lookupFunction(0x1071E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x172050u; }
        if (ctx->pc != 0x172050u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0UnitMatrix_0x1071e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x172050u; }
        if (ctx->pc != 0x172050u) { return; }
    }
    ctx->pc = 0x172050u;
label_172050:
    // 0x172050: 0xc78c8994  lwc1        $f12, -0x766C($gp)
    ctx->pc = 0x172050u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936980)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_172054:
    // 0x172054: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x172054u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_172058:
    // 0x172058: 0xc041ca2  jal         func_107288
label_17205c:
    if (ctx->pc == 0x17205Cu) {
        ctx->pc = 0x17205Cu;
            // 0x17205c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x172060u;
        goto label_172060;
    }
    ctx->pc = 0x172058u;
    SET_GPR_U32(ctx, 31, 0x172060u);
    ctx->pc = 0x17205Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x172058u;
            // 0x17205c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107288u;
    if (runtime->hasFunction(0x107288u)) {
        auto targetFn = runtime->lookupFunction(0x107288u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x172060u; }
        if (ctx->pc != 0x172060u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0RotMatrixZ_0x107288(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x172060u; }
        if (ctx->pc != 0x172060u) { return; }
    }
    ctx->pc = 0x172060u;
label_172060:
    // 0x172060: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x172060u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_172064:
    // 0x172064: 0x27a600b0  addiu       $a2, $sp, 0xB0
    ctx->pc = 0x172064u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_172068:
    // 0x172068: 0xc041bbc  jal         func_106EF0
label_17206c:
    if (ctx->pc == 0x17206Cu) {
        ctx->pc = 0x17206Cu;
            // 0x17206c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x172070u;
        goto label_172070;
    }
    ctx->pc = 0x172068u;
    SET_GPR_U32(ctx, 31, 0x172070u);
    ctx->pc = 0x17206Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x172068u;
            // 0x17206c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x106EF0u;
    if (runtime->hasFunction(0x106EF0u)) {
        auto targetFn = runtime->lookupFunction(0x106EF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x172070u; }
        if (ctx->pc != 0x172070u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0MulMatrix_0x106ef0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x172070u; }
        if (ctx->pc != 0x172070u) { return; }
    }
    ctx->pc = 0x172070u;
label_172070:
    // 0x172070: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x172070u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_172074:
    // 0x172074: 0xc04dd64  jal         func_137590
label_172078:
    if (ctx->pc == 0x172078u) {
        ctx->pc = 0x172078u;
            // 0x172078: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x17207Cu;
        goto label_17207c;
    }
    ctx->pc = 0x172074u;
    SET_GPR_U32(ctx, 31, 0x17207Cu);
    ctx->pc = 0x172078u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x172074u;
            // 0x172078: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x137590u;
    if (runtime->hasFunction(0x137590u)) {
        auto targetFn = runtime->lookupFunction(0x137590u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17207Cu; }
        if (ctx->pc != 0x17207Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetTransMatrix__8mgCFrameFPA4_f_0x137590(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17207Cu; }
        if (ctx->pc != 0x17207Cu) { return; }
    }
    ctx->pc = 0x17207Cu;
label_17207c:
    // 0x17207c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x17207cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_172080:
    // 0x172080: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x172080u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_172084:
    // 0x172084: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x172084u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_172088:
    // 0x172088: 0x3e00008  jr          $ra
label_17208c:
    if (ctx->pc == 0x17208Cu) {
        ctx->pc = 0x17208Cu;
            // 0x17208c: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->pc = 0x172090u;
        goto label_fallthrough_0x172088;
    }
    ctx->pc = 0x172088u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17208Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x172088u;
            // 0x17208c: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x172088:
    ctx->pc = 0x172090u;
}
