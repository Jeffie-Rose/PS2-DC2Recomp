#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: ResetEyeView__FP12CActionChara
// Address: 0x1d3ec0 - 0x1d3f7c
void ResetEyeView__FP12CActionChara_0x1d3ec0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ResetEyeView__FP12CActionChara_0x1d3ec0");
#endif

    switch (ctx->pc) {
        case 0x1d3ec0u: goto label_1d3ec0;
        case 0x1d3ec4u: goto label_1d3ec4;
        case 0x1d3ec8u: goto label_1d3ec8;
        case 0x1d3eccu: goto label_1d3ecc;
        case 0x1d3ed0u: goto label_1d3ed0;
        case 0x1d3ed4u: goto label_1d3ed4;
        case 0x1d3ed8u: goto label_1d3ed8;
        case 0x1d3edcu: goto label_1d3edc;
        case 0x1d3ee0u: goto label_1d3ee0;
        case 0x1d3ee4u: goto label_1d3ee4;
        case 0x1d3ee8u: goto label_1d3ee8;
        case 0x1d3eecu: goto label_1d3eec;
        case 0x1d3ef0u: goto label_1d3ef0;
        case 0x1d3ef4u: goto label_1d3ef4;
        case 0x1d3ef8u: goto label_1d3ef8;
        case 0x1d3efcu: goto label_1d3efc;
        case 0x1d3f00u: goto label_1d3f00;
        case 0x1d3f04u: goto label_1d3f04;
        case 0x1d3f08u: goto label_1d3f08;
        case 0x1d3f0cu: goto label_1d3f0c;
        case 0x1d3f10u: goto label_1d3f10;
        case 0x1d3f14u: goto label_1d3f14;
        case 0x1d3f18u: goto label_1d3f18;
        case 0x1d3f1cu: goto label_1d3f1c;
        case 0x1d3f20u: goto label_1d3f20;
        case 0x1d3f24u: goto label_1d3f24;
        case 0x1d3f28u: goto label_1d3f28;
        case 0x1d3f2cu: goto label_1d3f2c;
        case 0x1d3f30u: goto label_1d3f30;
        case 0x1d3f34u: goto label_1d3f34;
        case 0x1d3f38u: goto label_1d3f38;
        case 0x1d3f3cu: goto label_1d3f3c;
        case 0x1d3f40u: goto label_1d3f40;
        case 0x1d3f44u: goto label_1d3f44;
        case 0x1d3f48u: goto label_1d3f48;
        case 0x1d3f4cu: goto label_1d3f4c;
        case 0x1d3f50u: goto label_1d3f50;
        case 0x1d3f54u: goto label_1d3f54;
        case 0x1d3f58u: goto label_1d3f58;
        case 0x1d3f5cu: goto label_1d3f5c;
        case 0x1d3f60u: goto label_1d3f60;
        case 0x1d3f64u: goto label_1d3f64;
        case 0x1d3f68u: goto label_1d3f68;
        case 0x1d3f6cu: goto label_1d3f6c;
        case 0x1d3f70u: goto label_1d3f70;
        case 0x1d3f74u: goto label_1d3f74;
        case 0x1d3f78u: goto label_1d3f78;
        default: break;
    }

    ctx->pc = 0x1d3ec0u;

label_1d3ec0:
    // 0x1d3ec0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1d3ec0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_1d3ec4:
    // 0x1d3ec4: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x1d3ec4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
label_1d3ec8:
    // 0x1d3ec8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1d3ec8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_1d3ecc:
    // 0x1d3ecc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1d3eccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1d3ed0:
    // 0x1d3ed0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1d3ed0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1d3ed4:
    // 0x1d3ed4: 0x8c23f6e8  lw          $v1, -0x918($at)
    ctx->pc = 0x1d3ed4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294964968)));
label_1d3ed8:
    // 0x1d3ed8: 0x10600023  beqz        $v1, . + 4 + (0x23 << 2)
label_1d3edc:
    if (ctx->pc == 0x1D3EDCu) {
        ctx->pc = 0x1D3EDCu;
            // 0x1d3edc: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1D3EE0u;
        goto label_1d3ee0;
    }
    ctx->pc = 0x1D3ED8u;
    {
        const bool branch_taken_0x1d3ed8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D3EDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D3ED8u;
            // 0x1d3edc: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3ed8) {
            ctx->pc = 0x1D3F68u;
            goto label_1d3f68;
        }
    }
    ctx->pc = 0x1D3EE0u;
label_1d3ee0:
    // 0x1d3ee0: 0x8f848dac  lw          $a0, -0x7254($gp)
    ctx->pc = 0x1d3ee0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938028)));
label_1d3ee4:
    // 0x1d3ee4: 0xc0a0e30  jal         func_2838C0
label_1d3ee8:
    if (ctx->pc == 0x1D3EE8u) {
        ctx->pc = 0x1D3EE8u;
            // 0x1d3ee8: 0x8c852e54  lw          $a1, 0x2E54($a0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 11860)));
        ctx->pc = 0x1D3EECu;
        goto label_1d3eec;
    }
    ctx->pc = 0x1D3EE4u;
    SET_GPR_U32(ctx, 31, 0x1D3EECu);
    ctx->pc = 0x1D3EE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D3EE4u;
            // 0x1d3ee8: 0x8c852e54  lw          $a1, 0x2E54($a0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 11860)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2838C0u;
    if (runtime->hasFunction(0x2838C0u)) {
        auto targetFn = runtime->lookupFunction(0x2838C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D3EECu; }
        if (ctx->pc != 0x1D3EECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetCamera__6CSceneFi_0x2838c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D3EECu; }
        if (ctx->pc != 0x1D3EECu) { return; }
    }
    ctx->pc = 0x1D3EECu;
label_1d3eec:
    // 0x1d3eec: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1d3eecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1d3ef0:
    // 0x1d3ef0: 0x1200000b  beqz        $s0, . + 4 + (0xB << 2)
label_1d3ef4:
    if (ctx->pc == 0x1D3EF4u) {
        ctx->pc = 0x1D3EF8u;
        goto label_1d3ef8;
    }
    ctx->pc = 0x1D3EF0u;
    {
        const bool branch_taken_0x1d3ef0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d3ef0) {
            ctx->pc = 0x1D3F20u;
            goto label_1d3f20;
        }
    }
    ctx->pc = 0x1D3EF8u;
label_1d3ef8:
    // 0x1d3ef8: 0x8f828d84  lw          $v0, -0x727C($gp)
    ctx->pc = 0x1d3ef8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937988)));
label_1d3efc:
    // 0x1d3efc: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_1d3f00:
    if (ctx->pc == 0x1D3F00u) {
        ctx->pc = 0x1D3F00u;
            // 0x1d3f00: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1D3F04u;
        goto label_1d3f04;
    }
    ctx->pc = 0x1D3EFCu;
    {
        const bool branch_taken_0x1d3efc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D3F00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D3EFCu;
            // 0x1d3f00: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3efc) {
            ctx->pc = 0x1D3F18u;
            goto label_1d3f18;
        }
    }
    ctx->pc = 0x1D3F04u;
label_1d3f04:
    // 0x1d3f04: 0x3c0501ed  lui         $a1, 0x1ED
    ctx->pc = 0x1d3f04u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)493 << 16));
label_1d3f08:
    // 0x1d3f08: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d3f08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1d3f0c:
    // 0x1d3f0c: 0xc04c504  jal         func_131410
label_1d3f10:
    if (ctx->pc == 0x1D3F10u) {
        ctx->pc = 0x1D3F10u;
            // 0x1d3f10: 0x24a588f0  addiu       $a1, $a1, -0x7710 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294936816));
        ctx->pc = 0x1D3F14u;
        goto label_1d3f14;
    }
    ctx->pc = 0x1D3F0Cu;
    SET_GPR_U32(ctx, 31, 0x1D3F14u);
    ctx->pc = 0x1D3F10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D3F0Cu;
            // 0x1d3f10: 0x24a588f0  addiu       $a1, $a1, -0x7710 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294936816));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131410u;
    if (runtime->hasFunction(0x131410u)) {
        auto targetFn = runtime->lookupFunction(0x131410u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D3F14u; }
        if (ctx->pc != 0x1D3F14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetPos__9mgCCameraFPf_0x131410(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D3F14u; }
        if (ctx->pc != 0x1D3F14u) { return; }
    }
    ctx->pc = 0x1D3F14u;
label_1d3f14:
    // 0x1d3f14: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d3f14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1d3f18:
    // 0x1d3f18: 0xc04c668  jal         func_1319A0
label_1d3f1c:
    if (ctx->pc == 0x1D3F1Cu) {
        ctx->pc = 0x1D3F20u;
        goto label_1d3f20;
    }
    ctx->pc = 0x1D3F18u;
    SET_GPR_U32(ctx, 31, 0x1D3F20u);
    ctx->pc = 0x1319A0u;
    if (runtime->hasFunction(0x1319A0u)) {
        auto targetFn = runtime->lookupFunction(0x1319A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D3F20u; }
        if (ctx->pc != 0x1D3F20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FollowOn__15mgCCameraFollowFv_0x1319a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D3F20u; }
        if (ctx->pc != 0x1D3F20u) { return; }
    }
    ctx->pc = 0x1D3F20u;
label_1d3f20:
    // 0x1d3f20: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x1d3f20u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
label_1d3f24:
    // 0x1d3f24: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1d3f24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1d3f28:
    // 0x1d3f28: 0xac20f6e8  sw          $zero, -0x918($at)
    ctx->pc = 0x1d3f28u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294964968), GPR_U32(ctx, 0));
label_1d3f2c:
    // 0x1d3f2c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1d3f2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1d3f30:
    // 0x1d3f30: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x1d3f30u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1d3f34:
    // 0x1d3f34: 0x8f3900f8  lw          $t9, 0xF8($t9)
    ctx->pc = 0x1d3f34u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 248)));
label_1d3f38:
    // 0x1d3f38: 0x320f809  jalr        $t9
label_1d3f3c:
    if (ctx->pc == 0x1D3F3Cu) {
        ctx->pc = 0x1D3F3Cu;
            // 0x1d3f3c: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1D3F40u;
        goto label_1d3f40;
    }
    ctx->pc = 0x1D3F38u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1D3F40u);
        ctx->pc = 0x1D3F3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D3F38u;
            // 0x1d3f3c: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1D3F40u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1D3F40u; }
            if (ctx->pc != 0x1D3F40u) { return; }
        }
        }
    }
    ctx->pc = 0x1D3F40u;
label_1d3f40:
    // 0x1d3f40: 0xc074f84  jal         func_1D3E10
label_1d3f44:
    if (ctx->pc == 0x1D3F44u) {
        ctx->pc = 0x1D3F48u;
        goto label_1d3f48;
    }
    ctx->pc = 0x1D3F40u;
    SET_GPR_U32(ctx, 31, 0x1D3F48u);
    ctx->pc = 0x1D3E10u;
    if (runtime->hasFunction(0x1D3E10u)) {
        auto targetFn = runtime->lookupFunction(0x1D3E10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D3F48u; }
        if (ctx->pc != 0x1D3F48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckWeaponEnable__Fv_0x1d3e10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D3F48u; }
        if (ctx->pc != 0x1D3F48u) { return; }
    }
    ctx->pc = 0x1D3F48u;
label_1d3f48:
    // 0x1d3f48: 0xc050e84  jal         func_143A10
label_1d3f4c:
    if (ctx->pc == 0x1D3F4Cu) {
        ctx->pc = 0x1D3F4Cu;
            // 0x1d3f4c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1D3F50u;
        goto label_1d3f50;
    }
    ctx->pc = 0x1D3F48u;
    SET_GPR_U32(ctx, 31, 0x1D3F50u);
    ctx->pc = 0x1D3F4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D3F48u;
            // 0x1d3f4c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x143A10u;
    if (runtime->hasFunction(0x143A10u)) {
        auto targetFn = runtime->lookupFunction(0x143A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D3F50u; }
        if (ctx->pc != 0x1D3F50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgSetAllScissorFlag__Fi_0x143a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D3F50u; }
        if (ctx->pc != 0x1D3F50u) { return; }
    }
    ctx->pc = 0x1D3F50u;
label_1d3f50:
    // 0x1d3f50: 0xc0c39a0  jal         func_30E680
label_1d3f54:
    if (ctx->pc == 0x1D3F54u) {
        ctx->pc = 0x1D3F54u;
            // 0x1d3f54: 0xaf808d84  sw          $zero, -0x727C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937988), GPR_U32(ctx, 0));
        ctx->pc = 0x1D3F58u;
        goto label_1d3f58;
    }
    ctx->pc = 0x1D3F50u;
    SET_GPR_U32(ctx, 31, 0x1D3F58u);
    ctx->pc = 0x1D3F54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D3F50u;
            // 0x1d3f54: 0xaf808d84  sw          $zero, -0x727C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937988), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x30E680u;
    if (runtime->hasFunction(0x30E680u)) {
        auto targetFn = runtime->lookupFunction(0x30E680u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D3F58u; }
        if (ctx->pc != 0x1D3F58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        NowTakePhoto__Fv_0x30e680(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D3F58u; }
        if (ctx->pc != 0x1D3F58u) { return; }
    }
    ctx->pc = 0x1D3F58u;
label_1d3f58:
    // 0x1d3f58: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_1d3f5c:
    if (ctx->pc == 0x1D3F5Cu) {
        ctx->pc = 0x1D3F60u;
        goto label_1d3f60;
    }
    ctx->pc = 0x1D3F58u;
    {
        const bool branch_taken_0x1d3f58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d3f58) {
            ctx->pc = 0x1D3F68u;
            goto label_1d3f68;
        }
    }
    ctx->pc = 0x1D3F60u;
label_1d3f60:
    // 0x1d3f60: 0xc0c399c  jal         func_30E670
label_1d3f64:
    if (ctx->pc == 0x1D3F64u) {
        ctx->pc = 0x1D3F68u;
        goto label_1d3f68;
    }
    ctx->pc = 0x1D3F60u;
    SET_GPR_U32(ctx, 31, 0x1D3F68u);
    ctx->pc = 0x30E670u;
    if (runtime->hasFunction(0x30E670u)) {
        auto targetFn = runtime->lookupFunction(0x30E670u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D3F68u; }
        if (ctx->pc != 0x1D3F68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EndTakePhoto__Fv_0x30e670(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D3F68u; }
        if (ctx->pc != 0x1D3F68u) { return; }
    }
    ctx->pc = 0x1D3F68u;
label_1d3f68:
    // 0x1d3f68: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1d3f68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1d3f6c:
    // 0x1d3f6c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1d3f6cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1d3f70:
    // 0x1d3f70: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1d3f70u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1d3f74:
    // 0x1d3f74: 0x3e00008  jr          $ra
label_1d3f78:
    if (ctx->pc == 0x1D3F78u) {
        ctx->pc = 0x1D3F78u;
            // 0x1d3f78: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x1D3F7Cu;
        goto label_fallthrough_0x1d3f74;
    }
    ctx->pc = 0x1D3F74u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D3F78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D3F74u;
            // 0x1d3f78: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x1d3f74:
    ctx->pc = 0x1D3F7Cu;
}
