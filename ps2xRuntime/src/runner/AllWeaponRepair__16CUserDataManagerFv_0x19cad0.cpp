#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: AllWeaponRepair__16CUserDataManagerFv
// Address: 0x19cad0 - 0x19cb58
void AllWeaponRepair__16CUserDataManagerFv_0x19cad0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("AllWeaponRepair__16CUserDataManagerFv_0x19cad0");
#endif

    switch (ctx->pc) {
        case 0x19caf0u: goto label_19caf0;
        case 0x19cb0cu: goto label_19cb0c;
        case 0x19cb2cu: goto label_19cb2c;
        case 0x19cb40u: goto label_19cb40;
        default: break;
    }

    ctx->pc = 0x19cad0u;

    // 0x19cad0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x19cad0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x19cad4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x19cad4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x19cad8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x19cad8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x19cadc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x19cadcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x19cae0: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x19cae0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19cae4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x19cae4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x19cae8: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x19cae8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19caec: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x19caecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_19caf0:
    // 0x19caf0: 0x2512021  addu        $a0, $s2, $s1
    ctx->pc = 0x19caf0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 17)));
    // 0x19caf4: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x19caf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x19caf8: 0x84830000  lh          $v1, 0x0($a0)
    ctx->pc = 0x19caf8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x19cafc: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x19CAFCu;
    {
        const bool branch_taken_0x19cafc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x19CB00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19CAFCu;
            // 0x19cb00: 0x240503e7  addiu       $a1, $zero, 0x3E7 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 999));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19cafc) {
            ctx->pc = 0x19CB0Cu;
            goto label_19cb0c;
        }
    }
    ctx->pc = 0x19CB04u;
    // 0x19cb04: 0xc06609c  jal         func_198270
    ctx->pc = 0x19CB04u;
    SET_GPR_U32(ctx, 31, 0x19CB0Cu);
    ctx->pc = 0x198270u;
    if (runtime->hasFunction(0x198270u)) {
        auto targetFn = runtime->lookupFunction(0x198270u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19CB0Cu; }
        if (ctx->pc != 0x19CB0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Repair__13CGameDataUsedFi_0x198270(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19CB0Cu; }
        if (ctx->pc != 0x19CB0Cu) { return; }
    }
    ctx->pc = 0x19CB0Cu;
label_19cb0c:
    // 0x19cb0c: 0x0  nop
    ctx->pc = 0x19cb0cu;
    // NOP
    // 0x19cb10: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x19cb10u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x19cb14: 0x2a020096  slti        $v0, $s0, 0x96
    ctx->pc = 0x19cb14u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)150) ? 1 : 0);
    // 0x19cb18: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x19CB18u;
    {
        const bool branch_taken_0x19cb18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x19CB1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19CB18u;
            // 0x19cb1c: 0x2631006c  addiu       $s1, $s1, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19cb18) {
            ctx->pc = 0x19CAF0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_19caf0;
        }
    }
    ctx->pc = 0x19CB20u;
    // 0x19cb20: 0x26444690  addiu       $a0, $s2, 0x4690
    ctx->pc = 0x19cb20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 18064));
    // 0x19cb24: 0xc06609c  jal         func_198270
    ctx->pc = 0x19CB24u;
    SET_GPR_U32(ctx, 31, 0x19CB2Cu);
    ctx->pc = 0x19CB28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19CB24u;
            // 0x19cb28: 0x240503e7  addiu       $a1, $zero, 0x3E7 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 999));
        ctx->in_delay_slot = false;
    ctx->pc = 0x198270u;
    if (runtime->hasFunction(0x198270u)) {
        auto targetFn = runtime->lookupFunction(0x198270u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19CB2Cu; }
        if (ctx->pc != 0x19CB2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Repair__13CGameDataUsedFi_0x198270(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19CB2Cu; }
        if (ctx->pc != 0x19CB2Cu) { return; }
    }
    ctx->pc = 0x19CB2Cu;
label_19cb2c:
    // 0x19cb2c: 0x3c024479  lui         $v0, 0x4479
    ctx->pc = 0x19cb2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17529 << 16));
    // 0x19cb30: 0x3442c000  ori         $v0, $v0, 0xC000
    ctx->pc = 0x19cb30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)49152);
    // 0x19cb34: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x19cb34u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x19cb38: 0xc066a0c  jal         func_19A830
    ctx->pc = 0x19CB38u;
    SET_GPR_U32(ctx, 31, 0x19CB40u);
    ctx->pc = 0x19CB3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19CB38u;
            // 0x19cb3c: 0x26444660  addiu       $a0, $s2, 0x4660 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 18016));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19A830u;
    if (runtime->hasFunction(0x19A830u)) {
        auto targetFn = runtime->lookupFunction(0x19A830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19CB40u; }
        if (ctx->pc != 0x19CB40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AddPoint__9ROBO_DATAFf_0x19a830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19CB40u; }
        if (ctx->pc != 0x19CB40u) { return; }
    }
    ctx->pc = 0x19CB40u;
label_19cb40:
    // 0x19cb40: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x19cb40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x19cb44: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x19cb44u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x19cb48: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x19cb48u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19cb4c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x19cb4cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19cb50: 0x3e00008  jr          $ra
    ctx->pc = 0x19CB50u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19CB54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19CB50u;
            // 0x19cb54: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x19CB58u;
}
