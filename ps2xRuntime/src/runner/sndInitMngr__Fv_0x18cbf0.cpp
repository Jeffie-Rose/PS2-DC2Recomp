#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sndInitMngr__Fv
// Address: 0x18cbf0 - 0x18ccc4
void sndInitMngr__Fv_0x18cbf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sndInitMngr__Fv_0x18cbf0");
#endif

    switch (ctx->pc) {
        case 0x18cc14u: goto label_18cc14;
        case 0x18cc20u: goto label_18cc20;
        case 0x18cc3cu: goto label_18cc3c;
        case 0x18cc58u: goto label_18cc58;
        case 0x18cc68u: goto label_18cc68;
        case 0x18cc78u: goto label_18cc78;
        case 0x18cc88u: goto label_18cc88;
        case 0x18cc90u: goto label_18cc90;
        default: break;
    }

    ctx->pc = 0x18cbf0u;

    // 0x18cbf0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x18cbf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x18cbf4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x18cbf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x18cbf8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x18cbf8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x18cbfc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x18cbfcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x18cc00: 0x8f828aa0  lw          $v0, -0x7560($gp)
    ctx->pc = 0x18cc00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937248)));
    // 0x18cc04: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x18CC04u;
    {
        const bool branch_taken_0x18cc04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x18CC08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18CC04u;
            // 0x18cc08: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18cc04) {
            ctx->pc = 0x18CC2Cu;
            goto label_18cc2c;
        }
    }
    ctx->pc = 0x18CC0Cu;
    // 0x18cc0c: 0xc062578  jal         func_1895E0
    ctx->pc = 0x18CC0Cu;
    SET_GPR_U32(ctx, 31, 0x18CC14u);
    ctx->pc = 0x18CC10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18CC0Cu;
            // 0x18cc10: 0x27848af0  addiu       $a0, $gp, -0x7510 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294937328));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1895E0u;
    if (runtime->hasFunction(0x1895E0u)) {
        auto targetFn = runtime->lookupFunction(0x1895E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18CC14u; }
        if (ctx->pc != 0x18CC14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Exit__6CSoundFv_0x1895e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18CC14u; }
        if (ctx->pc != 0x18CC14u) { return; }
    }
    ctx->pc = 0x18CC14u;
label_18cc14:
    // 0x18cc14: 0x8f84803c  lw          $a0, -0x7FC4($gp)
    ctx->pc = 0x18cc14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934588)));
    // 0x18cc18: 0xc04403c  jal         func_1100F0
    ctx->pc = 0x18CC18u;
    SET_GPR_U32(ctx, 31, 0x18CC20u);
    ctx->pc = 0x18CC1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18CC18u;
            // 0x18cc1c: 0xaf808aa0  sw          $zero, -0x7560($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937248), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1100F0u;
    if (runtime->hasFunction(0x1100F0u)) {
        auto targetFn = runtime->lookupFunction(0x1100F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18CC20u; }
        if (ctx->pc != 0x18CC20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DeleteSema_0x1100f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18CC20u; }
        if (ctx->pc != 0x18CC20u) { return; }
    }
    ctx->pc = 0x18CC20u;
label_18cc20:
    // 0x18cc20: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x18cc20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x18cc24: 0xaf82803c  sw          $v0, -0x7FC4($gp)
    ctx->pc = 0x18cc24u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934588), GPR_U32(ctx, 2));
    // 0x18cc28: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x18cc28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_18cc2c:
    // 0x18cc2c: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x18cc2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x18cc30: 0xafa20038  sw          $v0, 0x38($sp)
    ctx->pc = 0x18cc30u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 2));
    // 0x18cc34: 0xc044038  jal         func_1100E0
    ctx->pc = 0x18CC34u;
    SET_GPR_U32(ctx, 31, 0x18CC3Cu);
    ctx->pc = 0x18CC38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18CC34u;
            // 0x18cc38: 0xafa20034  sw          $v0, 0x34($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1100E0u;
    if (runtime->hasFunction(0x1100E0u)) {
        auto targetFn = runtime->lookupFunction(0x1100E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18CC3Cu; }
        if (ctx->pc != 0x18CC3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateSema_0x1100e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18CC3Cu; }
        if (ctx->pc != 0x18CC3Cu) { return; }
    }
    ctx->pc = 0x18CC3Cu;
label_18cc3c:
    // 0x18cc3c: 0xaf82803c  sw          $v0, -0x7FC4($gp)
    ctx->pc = 0x18cc3cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934588), GPR_U32(ctx, 2));
    // 0x18cc40: 0x27848af0  addiu       $a0, $gp, -0x7510
    ctx->pc = 0x18cc40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294937328));
    // 0x18cc44: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x18cc44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x18cc48: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x18cc48u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18cc4c: 0x24070028  addiu       $a3, $zero, 0x28
    ctx->pc = 0x18cc4cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x18cc50: 0xc062398  jal         func_188E60
    ctx->pc = 0x18CC50u;
    SET_GPR_U32(ctx, 31, 0x18CC58u);
    ctx->pc = 0x18CC54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18CC50u;
            // 0x18cc54: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x188E60u;
    if (runtime->hasFunction(0x188E60u)) {
        auto targetFn = runtime->lookupFunction(0x188E60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18CC58u; }
        if (ctx->pc != 0x18CC58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Init__6CSoundFiiii_0x188e60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18CC58u; }
        if (ctx->pc != 0x18CC58u) { return; }
    }
    ctx->pc = 0x18CC58u;
label_18cc58:
    // 0x18cc58: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x18cc58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x18cc5c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x18cc5cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x18cc60: 0xc063478  jal         func_18D1E0
    ctx->pc = 0x18CC60u;
    SET_GPR_U32(ctx, 31, 0x18CC68u);
    ctx->pc = 0x18CC64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18CC60u;
            // 0x18cc64: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18D1E0u;
    if (runtime->hasFunction(0x18D1E0u)) {
        auto targetFn = runtime->lookupFunction(0x18D1E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18CC68u; }
        if (ctx->pc != 0x18CC68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sndSetMasterVol__Fif_0x18d1e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18CC68u; }
        if (ctx->pc != 0x18CC68u) { return; }
    }
    ctx->pc = 0x18CC68u;
label_18cc68:
    // 0x18cc68: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x18cc68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x18cc6c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x18cc6cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x18cc70: 0xc063478  jal         func_18D1E0
    ctx->pc = 0x18CC70u;
    SET_GPR_U32(ctx, 31, 0x18CC78u);
    ctx->pc = 0x18CC74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18CC70u;
            // 0x18cc74: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18D1E0u;
    if (runtime->hasFunction(0x18D1E0u)) {
        auto targetFn = runtime->lookupFunction(0x18D1E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18CC78u; }
        if (ctx->pc != 0x18CC78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sndSetMasterVol__Fif_0x18d1e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18CC78u; }
        if (ctx->pc != 0x18CC78u) { return; }
    }
    ctx->pc = 0x18CC78u;
label_18cc78:
    // 0x18cc78: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x18cc78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x18cc7c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x18cc7cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18cc80: 0xaf828aa0  sw          $v0, -0x7560($gp)
    ctx->pc = 0x18cc80u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937248), GPR_U32(ctx, 2));
    // 0x18cc84: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x18cc84u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_18cc88:
    // 0x18cc88: 0xc06334c  jal         func_18CD30
    ctx->pc = 0x18CC88u;
    SET_GPR_U32(ctx, 31, 0x18CC90u);
    ctx->pc = 0x18CC8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18CC88u;
            // 0x18cc8c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18CD30u;
    if (runtime->hasFunction(0x18CD30u)) {
        auto targetFn = runtime->lookupFunction(0x18CD30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18CC90u; }
        if (ctx->pc != 0x18CC90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sndInitPort__Fi_0x18cd30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18CC90u; }
        if (ctx->pc != 0x18CC90u) { return; }
    }
    ctx->pc = 0x18CC90u;
label_18cc90:
    // 0x18cc90: 0x3c03003d  lui         $v1, 0x3D
    ctx->pc = 0x18cc90u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)61 << 16));
    // 0x18cc94: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x18cc94u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x18cc98: 0x24637640  addiu       $v1, $v1, 0x7640
    ctx->pc = 0x18cc98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 30272));
    // 0x18cc9c: 0x712021  addu        $a0, $v1, $s1
    ctx->pc = 0x18cc9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x18cca0: 0x2a030010  slti        $v1, $s0, 0x10
    ctx->pc = 0x18cca0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x18cca4: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x18cca4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x18cca8: 0x1460fff7  bnez        $v1, . + 4 + (-0x9 << 2)
    ctx->pc = 0x18CCA8u;
    {
        const bool branch_taken_0x18cca8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x18CCACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18CCA8u;
            // 0x18ccac: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18cca8) {
            ctx->pc = 0x18CC88u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_18cc88;
        }
    }
    ctx->pc = 0x18CCB0u;
    // 0x18ccb0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x18ccb0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x18ccb4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x18ccb4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18ccb8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x18ccb8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18ccbc: 0x3e00008  jr          $ra
    ctx->pc = 0x18CCBCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18CCC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18CCBCu;
            // 0x18ccc0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x18CCC4u;
}
