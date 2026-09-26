#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sndSetSePitch__FUiiii
// Address: 0x18ede0 - 0x18eec0
void sndSetSePitch__FUiiii_0x18ede0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sndSetSePitch__FUiiii_0x18ede0");
#endif

    switch (ctx->pc) {
        case 0x18ee00u: goto label_18ee00;
        case 0x18ee08u: goto label_18ee08;
        case 0x18ee14u: goto label_18ee14;
        case 0x18eeb4u: goto label_18eeb4;
        default: break;
    }

    ctx->pc = 0x18ede0u;

    // 0x18ede0: 0xe0402d  daddu       $t0, $a3, $zero
    ctx->pc = 0x18ede0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18ede4: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x18ede4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x18ede8: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x18ede8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18edec: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x18edecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x18edf0: 0x10e30030  beq         $a3, $v1, . + 4 + (0x30 << 2)
    ctx->pc = 0x18EDF0u;
    {
        const bool branch_taken_0x18edf0 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 3));
        ctx->pc = 0x18EDF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18EDF0u;
            // 0x18edf4: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18edf0) {
            ctx->pc = 0x18EEB4u;
            goto label_18eeb4;
        }
    }
    ctx->pc = 0x18EDF8u;
    // 0x18edf8: 0xc0632c0  jal         func_18CB00
    ctx->pc = 0x18EDF8u;
    SET_GPR_U32(ctx, 31, 0x18EE00u);
    ctx->pc = 0x18CB00u;
    if (runtime->hasFunction(0x18CB00u)) {
        auto targetFn = runtime->lookupFunction(0x18CB00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18EE00u; }
        if (ctx->pc != 0x18EE00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPortNo__FUi_0x18cb00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18EE00u; }
        if (ctx->pc != 0x18EE00u) { return; }
    }
    ctx->pc = 0x18EE00u;
label_18ee00:
    // 0x18ee00: 0xc0632c4  jal         func_18CB10
    ctx->pc = 0x18EE00u;
    SET_GPR_U32(ctx, 31, 0x18EE08u);
    ctx->pc = 0x18EE04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18EE00u;
            // 0x18ee04: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18CB10u;
    if (runtime->hasFunction(0x18CB10u)) {
        auto targetFn = runtime->lookupFunction(0x18CB10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18EE08u; }
        if (ctx->pc != 0x18EE08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetBankNo__FUi_0x18cb10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18EE08u; }
        if (ctx->pc != 0x18EE08u) { return; }
    }
    ctx->pc = 0x18EE08u;
label_18ee08:
    // 0x18ee08: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x18ee08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18ee0c: 0xc063288  jal         func_18CA20
    ctx->pc = 0x18EE0Cu;
    SET_GPR_U32(ctx, 31, 0x18EE14u);
    ctx->pc = 0x18EE10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18EE0Cu;
            // 0x18ee10: 0x40482d  daddu       $t1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18CA20u;
    if (runtime->hasFunction(0x18CA20u)) {
        auto targetFn = runtime->lookupFunction(0x18CA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18EE14u; }
        if (ctx->pc != 0x18EE14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPortInfo__Fi_0x18ca20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18EE14u; }
        if (ctx->pc != 0x18EE14u) { return; }
    }
    ctx->pc = 0x18EE14u;
label_18ee14:
    // 0x18ee14: 0x10400027  beqz        $v0, . + 4 + (0x27 << 2)
    ctx->pc = 0x18EE14u;
    {
        const bool branch_taken_0x18ee14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x18ee14) {
            ctx->pc = 0x18EEB4u;
            goto label_18eeb4;
        }
    }
    ctx->pc = 0x18EE1Cu;
    // 0x18ee1c: 0x5200005  bltz        $t1, . + 4 + (0x5 << 2)
    ctx->pc = 0x18EE1Cu;
    {
        const bool branch_taken_0x18ee1c = (GPR_S32(ctx, 9) < 0);
        ctx->pc = 0x18EE20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18EE1Cu;
            // 0x18ee20: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18ee1c) {
            ctx->pc = 0x18EE34u;
            goto label_18ee34;
        }
    }
    ctx->pc = 0x18EE24u;
    // 0x18ee24: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x18ee24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x18ee28: 0x123182a  slt         $v1, $t1, $v1
    ctx->pc = 0x18ee28u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 9) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x18ee2c: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x18EE2Cu;
    {
        const bool branch_taken_0x18ee2c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x18EE30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18EE2Cu;
            // 0x18ee30: 0x918c0  sll         $v1, $t1, 3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 9), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18ee2c) {
            ctx->pc = 0x18EE3Cu;
            goto label_18ee3c;
        }
    }
    ctx->pc = 0x18EE34u;
label_18ee34:
    // 0x18ee34: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x18EE34u;
    {
        const bool branch_taken_0x18ee34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18ee34) {
            ctx->pc = 0x18EE4Cu;
            goto label_18ee4c;
        }
    }
    ctx->pc = 0x18EE3Cu;
label_18ee3c:
    // 0x18ee3c: 0x691823  subu        $v1, $v1, $t1
    ctx->pc = 0x18ee3cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x18ee40: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x18ee40u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x18ee44: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x18ee44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x18ee48: 0x2464000c  addiu       $a0, $v1, 0xC
    ctx->pc = 0x18ee48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 12));
label_18ee4c:
    // 0x18ee4c: 0x10800019  beqz        $a0, . + 4 + (0x19 << 2)
    ctx->pc = 0x18EE4Cu;
    {
        const bool branch_taken_0x18ee4c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x18ee4c) {
            ctx->pc = 0x18EEB4u;
            goto label_18eeb4;
        }
    }
    ctx->pc = 0x18EE54u;
    // 0x18ee54: 0x4a00005  bltz        $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x18EE54u;
    {
        const bool branch_taken_0x18ee54 = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x18EE58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18EE54u;
            // 0x18ee58: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18ee54) {
            ctx->pc = 0x18EE6Cu;
            goto label_18ee6c;
        }
    }
    ctx->pc = 0x18EE5Cu;
    // 0x18ee5c: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x18ee5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x18ee60: 0xa3182a  slt         $v1, $a1, $v1
    ctx->pc = 0x18ee60u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x18ee64: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x18EE64u;
    {
        const bool branch_taken_0x18ee64 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x18ee64) {
            ctx->pc = 0x18EE74u;
            goto label_18ee74;
        }
    }
    ctx->pc = 0x18EE6Cu;
label_18ee6c:
    // 0x18ee6c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x18EE6Cu;
    {
        const bool branch_taken_0x18ee6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18ee6c) {
            ctx->pc = 0x18EE88u;
            goto label_18ee88;
        }
    }
    ctx->pc = 0x18EE74u;
label_18ee74:
    // 0x18ee74: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x18ee74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x18ee78: 0x52040  sll         $a0, $a1, 1
    ctx->pc = 0x18ee78u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x18ee7c: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x18ee7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x18ee80: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x18ee80u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x18ee84: 0x644821  addu        $t1, $v1, $a0
    ctx->pc = 0x18ee84u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_18ee88:
    // 0x18ee88: 0x1120000a  beqz        $t1, . + 4 + (0xA << 2)
    ctx->pc = 0x18EE88u;
    {
        const bool branch_taken_0x18ee88 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        if (branch_taken_0x18ee88) {
            ctx->pc = 0x18EEB4u;
            goto label_18eeb4;
        }
    }
    ctx->pc = 0x18EE90u;
    // 0x18ee90: 0x81240004  lb          $a0, 0x4($t1)
    ctx->pc = 0x18ee90u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 9), 4)));
    // 0x18ee94: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x18EE94u;
    {
        const bool branch_taken_0x18ee94 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x18EE98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18EE94u;
            // 0x18ee98: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18ee94) {
            ctx->pc = 0x18EEB4u;
            goto label_18eeb4;
        }
    }
    ctx->pc = 0x18EE9Cu;
    // 0x18ee9c: 0x14830005  bne         $a0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x18EE9Cu;
    {
        const bool branch_taken_0x18ee9c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x18EEA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18EE9Cu;
            // 0x18eea0: 0xe0202d  daddu       $a0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18ee9c) {
            ctx->pc = 0x18EEB4u;
            goto label_18eeb4;
        }
    }
    ctx->pc = 0x18EEA4u;
    // 0x18eea4: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x18eea4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18eea8: 0x81260006  lb          $a2, 0x6($t1)
    ctx->pc = 0x18eea8u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 9), 6)));
    // 0x18eeac: 0xc063cbc  jal         func_18F2F0
    ctx->pc = 0x18EEACu;
    SET_GPR_U32(ctx, 31, 0x18EEB4u);
    ctx->pc = 0x18EEB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18EEACu;
            // 0x18eeb0: 0x81250005  lb          $a1, 0x5($t1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 9), 5)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18F2F0u;
    if (runtime->hasFunction(0x18F2F0u)) {
        auto targetFn = runtime->lookupFunction(0x18F2F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18EEB4u; }
        if (ctx->pc != 0x18EEB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sndSetSePitchPrKr__FUiiiii_0x18f2f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18EEB4u; }
        if (ctx->pc != 0x18EEB4u) { return; }
    }
    ctx->pc = 0x18EEB4u;
label_18eeb4:
    // 0x18eeb4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x18eeb4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18eeb8: 0x3e00008  jr          $ra
    ctx->pc = 0x18EEB8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18EEBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18EEB8u;
            // 0x18eebc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x18EEC0u;
}
