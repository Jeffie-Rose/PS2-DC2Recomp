#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: Draw__15BattleEffectManFv
// Address: 0x1c5ae0 - 0x1c5be8
void Draw__15BattleEffectManFv_0x1c5ae0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Draw__15BattleEffectManFv_0x1c5ae0");
#endif

    switch (ctx->pc) {
        case 0x1c5b08u: goto label_1c5b08;
        case 0x1c5b10u: goto label_1c5b10;
        case 0x1c5b3cu: goto label_1c5b3c;
        case 0x1c5b44u: goto label_1c5b44;
        case 0x1c5b74u: goto label_1c5b74;
        case 0x1c5b7cu: goto label_1c5b7c;
        case 0x1c5bacu: goto label_1c5bac;
        case 0x1c5bb4u: goto label_1c5bb4;
        default: break;
    }

    ctx->pc = 0x1c5ae0u;

    // 0x1c5ae0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1c5ae0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1c5ae4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1c5ae4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1c5ae8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1c5ae8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1c5aec: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1c5aecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1c5af0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1c5af0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1c5af4: 0x8c920004  lw          $s2, 0x4($a0)
    ctx->pc = 0x1c5af4u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1c5af8: 0x1240000b  beqz        $s2, . + 4 + (0xB << 2)
    ctx->pc = 0x1C5AF8u;
    {
        const bool branch_taken_0x1c5af8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C5AFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C5AF8u;
            // 0x1c5afc: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c5af8) {
            ctx->pc = 0x1C5B28u;
            goto label_1c5b28;
        }
    }
    ctx->pc = 0x1C5B00u;
    // 0x1c5b00: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1C5B00u;
    {
        const bool branch_taken_0x1c5b00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C5B04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C5B00u;
            // 0x1c5b04: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c5b00) {
            ctx->pc = 0x1C5B18u;
            goto label_1c5b18;
        }
    }
    ctx->pc = 0x1C5B08u;
label_1c5b08:
    // 0x1c5b08: 0xc070a98  jal         func_1C2A60
    ctx->pc = 0x1C5B08u;
    SET_GPR_U32(ctx, 31, 0x1C5B10u);
    ctx->pc = 0x1C5B0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C5B08u;
            // 0x1c5b0c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C2A60u;
    if (runtime->hasFunction(0x1C2A60u)) {
        auto targetFn = runtime->lookupFunction(0x1C2A60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C5B10u; }
        if (ctx->pc != 0x1C5B10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Draw__15CHitEffectImageFv_0x1c2a60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C5B10u; }
        if (ctx->pc != 0x1C5B10u) { return; }
    }
    ctx->pc = 0x1C5B10u;
label_1c5b10:
    // 0x1c5b10: 0x26520060  addiu       $s2, $s2, 0x60
    ctx->pc = 0x1c5b10u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 96));
    // 0x1c5b14: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1c5b14u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_1c5b18:
    // 0x1c5b18: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x1c5b18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1c5b1c: 0x223182a  slt         $v1, $s1, $v1
    ctx->pc = 0x1c5b1cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1c5b20: 0x1460fff9  bnez        $v1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x1C5B20u;
    {
        const bool branch_taken_0x1c5b20 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c5b20) {
            ctx->pc = 0x1C5B08u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1c5b08;
        }
    }
    ctx->pc = 0x1C5B28u;
label_1c5b28:
    // 0x1c5b28: 0x8e120010  lw          $s2, 0x10($s0)
    ctx->pc = 0x1c5b28u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1c5b2c: 0x1240000c  beqz        $s2, . + 4 + (0xC << 2)
    ctx->pc = 0x1C5B2Cu;
    {
        const bool branch_taken_0x1c5b2c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C5B30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C5B2Cu;
            // 0x1c5b30: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c5b2c) {
            ctx->pc = 0x1C5B60u;
            goto label_1c5b60;
        }
    }
    ctx->pc = 0x1C5B34u;
    // 0x1c5b34: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1C5B34u;
    {
        const bool branch_taken_0x1c5b34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c5b34) {
            ctx->pc = 0x1C5B4Cu;
            goto label_1c5b4c;
        }
    }
    ctx->pc = 0x1C5B3Cu;
label_1c5b3c:
    // 0x1c5b3c: 0xc070bc8  jal         func_1C2F20
    ctx->pc = 0x1C5B3Cu;
    SET_GPR_U32(ctx, 31, 0x1C5B44u);
    ctx->pc = 0x1C5B40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C5B3Cu;
            // 0x1c5b40: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C2F20u;
    if (runtime->hasFunction(0x1C2F20u)) {
        auto targetFn = runtime->lookupFunction(0x1C2F20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C5B44u; }
        if (ctx->pc != 0x1C5B44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Draw__12CFlushEffectFv_0x1c2f20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C5B44u; }
        if (ctx->pc != 0x1C5B44u) { return; }
    }
    ctx->pc = 0x1C5B44u;
label_1c5b44:
    // 0x1c5b44: 0x26520040  addiu       $s2, $s2, 0x40
    ctx->pc = 0x1c5b44u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 64));
    // 0x1c5b48: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1c5b48u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_1c5b4c:
    // 0x1c5b4c: 0x0  nop
    ctx->pc = 0x1c5b4cu;
    // NOP
    // 0x1c5b50: 0x8e030014  lw          $v1, 0x14($s0)
    ctx->pc = 0x1c5b50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x1c5b54: 0x223182a  slt         $v1, $s1, $v1
    ctx->pc = 0x1c5b54u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1c5b58: 0x1460fff8  bnez        $v1, . + 4 + (-0x8 << 2)
    ctx->pc = 0x1C5B58u;
    {
        const bool branch_taken_0x1c5b58 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c5b58) {
            ctx->pc = 0x1C5B3Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1c5b3c;
        }
    }
    ctx->pc = 0x1C5B60u;
label_1c5b60:
    // 0x1c5b60: 0x8e120020  lw          $s2, 0x20($s0)
    ctx->pc = 0x1c5b60u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x1c5b64: 0x1240000c  beqz        $s2, . + 4 + (0xC << 2)
    ctx->pc = 0x1C5B64u;
    {
        const bool branch_taken_0x1c5b64 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C5B68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C5B64u;
            // 0x1c5b68: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c5b64) {
            ctx->pc = 0x1C5B98u;
            goto label_1c5b98;
        }
    }
    ctx->pc = 0x1C5B6Cu;
    // 0x1c5b6c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1C5B6Cu;
    {
        const bool branch_taken_0x1c5b6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c5b6c) {
            ctx->pc = 0x1C5B84u;
            goto label_1c5b84;
        }
    }
    ctx->pc = 0x1C5B74u;
label_1c5b74:
    // 0x1c5b74: 0xc070cf4  jal         func_1C33D0
    ctx->pc = 0x1C5B74u;
    SET_GPR_U32(ctx, 31, 0x1C5B7Cu);
    ctx->pc = 0x1C5B78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C5B74u;
            // 0x1c5b78: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C33D0u;
    if (runtime->hasFunction(0x1C33D0u)) {
        auto targetFn = runtime->lookupFunction(0x1C33D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C5B7Cu; }
        if (ctx->pc != 0x1C5B7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Draw__10CPowerLineFv_0x1c33d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C5B7Cu; }
        if (ctx->pc != 0x1C5B7Cu) { return; }
    }
    ctx->pc = 0x1C5B7Cu;
label_1c5b7c:
    // 0x1c5b7c: 0x26520080  addiu       $s2, $s2, 0x80
    ctx->pc = 0x1c5b7cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 128));
    // 0x1c5b80: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1c5b80u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_1c5b84:
    // 0x1c5b84: 0x0  nop
    ctx->pc = 0x1c5b84u;
    // NOP
    // 0x1c5b88: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x1c5b88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x1c5b8c: 0x223182a  slt         $v1, $s1, $v1
    ctx->pc = 0x1c5b8cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1c5b90: 0x1460fff8  bnez        $v1, . + 4 + (-0x8 << 2)
    ctx->pc = 0x1C5B90u;
    {
        const bool branch_taken_0x1c5b90 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c5b90) {
            ctx->pc = 0x1C5B74u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1c5b74;
        }
    }
    ctx->pc = 0x1C5B98u;
label_1c5b98:
    // 0x1c5b98: 0x8e120030  lw          $s2, 0x30($s0)
    ctx->pc = 0x1c5b98u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x1c5b9c: 0x1240000c  beqz        $s2, . + 4 + (0xC << 2)
    ctx->pc = 0x1C5B9Cu;
    {
        const bool branch_taken_0x1c5b9c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C5BA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C5B9Cu;
            // 0x1c5ba0: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c5b9c) {
            ctx->pc = 0x1C5BD0u;
            goto label_1c5bd0;
        }
    }
    ctx->pc = 0x1C5BA4u;
    // 0x1c5ba4: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1C5BA4u;
    {
        const bool branch_taken_0x1c5ba4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c5ba4) {
            ctx->pc = 0x1C5BBCu;
            goto label_1c5bbc;
        }
    }
    ctx->pc = 0x1C5BACu;
label_1c5bac:
    // 0x1c5bac: 0xc070eb8  jal         func_1C3AE0
    ctx->pc = 0x1C5BACu;
    SET_GPR_U32(ctx, 31, 0x1C5BB4u);
    ctx->pc = 0x1C5BB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C5BACu;
            // 0x1c5bb0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C3AE0u;
    if (runtime->hasFunction(0x1C3AE0u)) {
        auto targetFn = runtime->lookupFunction(0x1C3AE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C5BB4u; }
        if (ctx->pc != 0x1C5BB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Draw__11CDeadEffectFv_0x1c3ae0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C5BB4u; }
        if (ctx->pc != 0x1C5BB4u) { return; }
    }
    ctx->pc = 0x1C5BB4u;
label_1c5bb4:
    // 0x1c5bb4: 0x26520040  addiu       $s2, $s2, 0x40
    ctx->pc = 0x1c5bb4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 64));
    // 0x1c5bb8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1c5bb8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_1c5bbc:
    // 0x1c5bbc: 0x0  nop
    ctx->pc = 0x1c5bbcu;
    // NOP
    // 0x1c5bc0: 0x8e030034  lw          $v1, 0x34($s0)
    ctx->pc = 0x1c5bc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
    // 0x1c5bc4: 0x223182a  slt         $v1, $s1, $v1
    ctx->pc = 0x1c5bc4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1c5bc8: 0x1460fff8  bnez        $v1, . + 4 + (-0x8 << 2)
    ctx->pc = 0x1C5BC8u;
    {
        const bool branch_taken_0x1c5bc8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c5bc8) {
            ctx->pc = 0x1C5BACu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1c5bac;
        }
    }
    ctx->pc = 0x1C5BD0u;
label_1c5bd0:
    // 0x1c5bd0: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1c5bd0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1c5bd4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1c5bd4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1c5bd8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1c5bd8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c5bdc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1c5bdcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c5be0: 0x3e00008  jr          $ra
    ctx->pc = 0x1C5BE0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C5BE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C5BE0u;
            // 0x1c5be4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1C5BE8u;
}
