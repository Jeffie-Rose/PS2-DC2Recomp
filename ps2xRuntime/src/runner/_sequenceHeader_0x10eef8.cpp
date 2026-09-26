#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _sequenceHeader
// Address: 0x10eef8 - 0x10f01c
void _sequenceHeader_0x10eef8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("_sequenceHeader_0x10eef8");
#endif

    switch (ctx->pc) {
        case 0x10ef14u: goto label_10ef14;
        case 0x10ef44u: goto label_10ef44;
        case 0x10ef50u: goto label_10ef50;
        case 0x10ef74u: goto label_10ef74;
        case 0x10ef84u: goto label_10ef84;
        case 0x10ef90u: goto label_10ef90;
        case 0x10ef98u: goto label_10ef98;
        case 0x10efb4u: goto label_10efb4;
        case 0x10efc0u: goto label_10efc0;
        case 0x10efd0u: goto label_10efd0;
        case 0x10efdcu: goto label_10efdc;
        case 0x10efe4u: goto label_10efe4;
        case 0x10f000u: goto label_10f000;
        case 0x10f008u: goto label_10f008;
        default: break;
    }

    ctx->pc = 0x10eef8u;

    // 0x10eef8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x10eef8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x10eefc: 0x24050020  addiu       $a1, $zero, 0x20
    ctx->pc = 0x10eefcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x10ef00: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x10ef00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x10ef04: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x10ef04u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10ef08: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x10ef08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x10ef0c: 0xc042c0a  jal         func_10B028
    ctx->pc = 0x10EF0Cu;
    SET_GPR_U32(ctx, 31, 0x10EF14u);
    ctx->pc = 0x10EF10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10EF0Cu;
            // 0x10ef10: 0xae0000d4  sw          $zero, 0xD4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 212), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10B028u;
    if (runtime->hasFunction(0x10B028u)) {
        auto targetFn = runtime->lookupFunction(0x10B028u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10EF14u; }
        if (ctx->pc != 0x10EF14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _nextBit_0x10b028(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10EF14u; }
        if (ctx->pc != 0x10EF14u) { return; }
    }
    ctx->pc = 0x10EF14u;
label_10ef14:
    // 0x10ef14: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x10ef14u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10ef18: 0x31202  srl         $v0, $v1, 8
    ctx->pc = 0x10ef18u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 8));
    // 0x10ef1c: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x10ef1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    // 0x10ef20: 0x31d02  srl         $v1, $v1, 20
    ctx->pc = 0x10ef20u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 20));
    // 0x10ef24: 0xae030124  sw          $v1, 0x124($s0)
    ctx->pc = 0x10ef24u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 292), GPR_U32(ctx, 3));
    // 0x10ef28: 0x28440af1  slti        $a0, $v0, 0xAF1
    ctx->pc = 0x10ef28u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2801) ? 1 : 0);
    // 0x10ef2c: 0x14800005  bnez        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x10EF2Cu;
    {
        const bool branch_taken_0x10ef2c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x10EF30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10EF2Cu;
            // 0x10ef30: 0xae020128  sw          $v0, 0x128($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 296), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10ef2c) {
            ctx->pc = 0x10EF44u;
            goto label_10ef44;
        }
    }
    ctx->pc = 0x10EF34u;
    // 0x10ef34: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x10ef34u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
    // 0x10ef38: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10ef38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10ef3c: 0xc043b64  jal         func_10ED90
    ctx->pc = 0x10EF3Cu;
    SET_GPR_U32(ctx, 31, 0x10EF44u);
    ctx->pc = 0x10EF40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10EF3Cu;
            // 0x10ef40: 0x24a50968  addiu       $a1, $a1, 0x968 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2408));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10ED90u;
    if (runtime->hasFunction(0x10ED90u)) {
        auto targetFn = runtime->lookupFunction(0x10ED90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10EF44u; }
        if (ctx->pc != 0x10EF44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2__Error_0x10ed90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10EF44u; }
        if (ctx->pc != 0x10EF44u) { return; }
    }
    ctx->pc = 0x10EF44u;
label_10ef44:
    // 0x10ef44: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10ef44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10ef48: 0xc042c0a  jal         func_10B028
    ctx->pc = 0x10EF48u;
    SET_GPR_U32(ctx, 31, 0x10EF50u);
    ctx->pc = 0x10EF4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10EF48u;
            // 0x10ef4c: 0x2405001e  addiu       $a1, $zero, 0x1E (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10B028u;
    if (runtime->hasFunction(0x10B028u)) {
        auto targetFn = runtime->lookupFunction(0x10B028u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10EF50u; }
        if (ctx->pc != 0x10EF50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _nextBit_0x10b028(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10EF50u; }
        if (ctx->pc != 0x10EF50u) { return; }
    }
    ctx->pc = 0x10EF50u;
label_10ef50:
    // 0x10ef50: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x10ef50u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10ef54: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10ef54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10ef58: 0x31042  srl         $v0, $v1, 1
    ctx->pc = 0x10ef58u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
    // 0x10ef5c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x10ef5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x10ef60: 0x31b02  srl         $v1, $v1, 12
    ctx->pc = 0x10ef60u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 12));
    // 0x10ef64: 0x304203ff  andi        $v0, $v0, 0x3FF
    ctx->pc = 0x10ef64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1023);
    // 0x10ef68: 0xae030134  sw          $v1, 0x134($s0)
    ctx->pc = 0x10ef68u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 308), GPR_U32(ctx, 3));
    // 0x10ef6c: 0xc042c0a  jal         func_10B028
    ctx->pc = 0x10EF6Cu;
    SET_GPR_U32(ctx, 31, 0x10EF74u);
    ctx->pc = 0x10EF70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10EF6Cu;
            // 0x10ef70: 0xae020138  sw          $v0, 0x138($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 312), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10B028u;
    if (runtime->hasFunction(0x10B028u)) {
        auto targetFn = runtime->lookupFunction(0x10B028u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10EF74u; }
        if (ctx->pc != 0x10EF74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _nextBit_0x10b028(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10EF74u; }
        if (ctx->pc != 0x10EF74u) { return; }
    }
    ctx->pc = 0x10EF74u;
label_10ef74:
    // 0x10ef74: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x10EF74u;
    {
        const bool branch_taken_0x10ef74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10EF78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10EF74u;
            // 0x10ef78: 0xae020840  sw          $v0, 0x840($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 2112), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10ef74) {
            ctx->pc = 0x10EFA0u;
            goto label_10efa0;
        }
    }
    ctx->pc = 0x10EF7Cu;
    // 0x10ef7c: 0xc042ad8  jal         func_10AB60
    ctx->pc = 0x10EF7Cu;
    SET_GPR_U32(ctx, 31, 0x10EF84u);
    ctx->pc = 0x10EF80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10EF7Cu;
            // 0x10ef80: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10AB60u;
    if (runtime->hasFunction(0x10AB60u)) {
        auto targetFn = runtime->lookupFunction(0x10AB60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10EF84u; }
        if (ctx->pc != 0x10EF84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _waitIpuIdle_0x10ab60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10EF84u; }
        if (ctx->pc != 0x10EF84u) { return; }
    }
    ctx->pc = 0x10EF84u;
label_10ef84:
    // 0x10ef84: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10ef84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10ef88: 0xc042acc  jal         func_10AB30
    ctx->pc = 0x10EF88u;
    SET_GPR_U32(ctx, 31, 0x10EF90u);
    ctx->pc = 0x10EF8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10EF88u;
            // 0x10ef8c: 0x3c055000  lui         $a1, 0x5000 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)20480 << 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10AB30u;
    if (runtime->hasFunction(0x10AB30u)) {
        auto targetFn = runtime->lookupFunction(0x10AB30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10EF90u; }
        if (ctx->pc != 0x10EF90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _sendIpuCommand_0x10ab30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10EF90u; }
        if (ctx->pc != 0x10EF90u) { return; }
    }
    ctx->pc = 0x10EF90u;
label_10ef90:
    // 0x10ef90: 0xc042ad8  jal         func_10AB60
    ctx->pc = 0x10EF90u;
    SET_GPR_U32(ctx, 31, 0x10EF98u);
    ctx->pc = 0x10EF94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10EF90u;
            // 0x10ef94: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10AB60u;
    if (runtime->hasFunction(0x10AB60u)) {
        auto targetFn = runtime->lookupFunction(0x10AB60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10EF98u; }
        if (ctx->pc != 0x10EF98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _waitIpuIdle_0x10ab60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10EF98u; }
        if (ctx->pc != 0x10EF98u) { return; }
    }
    ctx->pc = 0x10EF98u;
label_10ef98:
    // 0x10ef98: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x10EF98u;
    {
        const bool branch_taken_0x10ef98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10EF9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10EF98u;
            // 0x10ef9c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10ef98) {
            ctx->pc = 0x10EFB8u;
            goto label_10efb8;
        }
    }
    ctx->pc = 0x10EFA0u;
label_10efa0:
    // 0x10efa0: 0x3c060033  lui         $a2, 0x33
    ctx->pc = 0x10efa0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)51 << 16));
    // 0x10efa4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10efa4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10efa8: 0x24c605c0  addiu       $a2, $a2, 0x5C0
    ctx->pc = 0x10efa8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1472));
    // 0x10efac: 0xc043cea  jal         func_10F3A8
    ctx->pc = 0x10EFACu;
    SET_GPR_U32(ctx, 31, 0x10EFB4u);
    ctx->pc = 0x10EFB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10EFACu;
            // 0x10efb0: 0x3c055000  lui         $a1, 0x5000 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)20480 << 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10F3A8u;
    if (runtime->hasFunction(0x10F3A8u)) {
        auto targetFn = runtime->lookupFunction(0x10F3A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10EFB4u; }
        if (ctx->pc != 0x10EFB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _setDefaultQM_0x10f3a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10EFB4u; }
        if (ctx->pc != 0x10EFB4u) { return; }
    }
    ctx->pc = 0x10EFB4u;
label_10efb4:
    // 0x10efb4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10efb4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_10efb8:
    // 0x10efb8: 0xc042c0a  jal         func_10B028
    ctx->pc = 0x10EFB8u;
    SET_GPR_U32(ctx, 31, 0x10EFC0u);
    ctx->pc = 0x10EFBCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10EFB8u;
            // 0x10efbc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10B028u;
    if (runtime->hasFunction(0x10B028u)) {
        auto targetFn = runtime->lookupFunction(0x10B028u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10EFC0u; }
        if (ctx->pc != 0x10EFC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _nextBit_0x10b028(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10EFC0u; }
        if (ctx->pc != 0x10EFC0u) { return; }
    }
    ctx->pc = 0x10EFC0u;
label_10efc0:
    // 0x10efc0: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x10EFC0u;
    {
        const bool branch_taken_0x10efc0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10EFC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10EFC0u;
            // 0x10efc4: 0xae020844  sw          $v0, 0x844($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 2116), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10efc0) {
            ctx->pc = 0x10EFECu;
            goto label_10efec;
        }
    }
    ctx->pc = 0x10EFC8u;
    // 0x10efc8: 0xc042ad8  jal         func_10AB60
    ctx->pc = 0x10EFC8u;
    SET_GPR_U32(ctx, 31, 0x10EFD0u);
    ctx->pc = 0x10EFCCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10EFC8u;
            // 0x10efcc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10AB60u;
    if (runtime->hasFunction(0x10AB60u)) {
        auto targetFn = runtime->lookupFunction(0x10AB60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10EFD0u; }
        if (ctx->pc != 0x10EFD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _waitIpuIdle_0x10ab60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10EFD0u; }
        if (ctx->pc != 0x10EFD0u) { return; }
    }
    ctx->pc = 0x10EFD0u;
label_10efd0:
    // 0x10efd0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10efd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10efd4: 0xc042acc  jal         func_10AB30
    ctx->pc = 0x10EFD4u;
    SET_GPR_U32(ctx, 31, 0x10EFDCu);
    ctx->pc = 0x10EFD8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10EFD4u;
            // 0x10efd8: 0x3c055800  lui         $a1, 0x5800 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)22528 << 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10AB30u;
    if (runtime->hasFunction(0x10AB30u)) {
        auto targetFn = runtime->lookupFunction(0x10AB30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10EFDCu; }
        if (ctx->pc != 0x10EFDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _sendIpuCommand_0x10ab30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10EFDCu; }
        if (ctx->pc != 0x10EFDCu) { return; }
    }
    ctx->pc = 0x10EFDCu;
label_10efdc:
    // 0x10efdc: 0xc042ad8  jal         func_10AB60
    ctx->pc = 0x10EFDCu;
    SET_GPR_U32(ctx, 31, 0x10EFE4u);
    ctx->pc = 0x10EFE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10EFDCu;
            // 0x10efe0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10AB60u;
    if (runtime->hasFunction(0x10AB60u)) {
        auto targetFn = runtime->lookupFunction(0x10AB60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10EFE4u; }
        if (ctx->pc != 0x10EFE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _waitIpuIdle_0x10ab60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10EFE4u; }
        if (ctx->pc != 0x10EFE4u) { return; }
    }
    ctx->pc = 0x10EFE4u;
label_10efe4:
    // 0x10efe4: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x10EFE4u;
    {
        const bool branch_taken_0x10efe4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x10efe4) {
            ctx->pc = 0x10F000u;
            goto label_10f000;
        }
    }
    ctx->pc = 0x10EFECu;
label_10efec:
    // 0x10efec: 0x3c060033  lui         $a2, 0x33
    ctx->pc = 0x10efecu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)51 << 16));
    // 0x10eff0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10eff0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10eff4: 0x24c60600  addiu       $a2, $a2, 0x600
    ctx->pc = 0x10eff4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1536));
    // 0x10eff8: 0xc043cea  jal         func_10F3A8
    ctx->pc = 0x10EFF8u;
    SET_GPR_U32(ctx, 31, 0x10F000u);
    ctx->pc = 0x10EFFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10EFF8u;
            // 0x10effc: 0x3c055800  lui         $a1, 0x5800 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)22528 << 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10F3A8u;
    if (runtime->hasFunction(0x10F3A8u)) {
        auto targetFn = runtime->lookupFunction(0x10F3A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10F000u; }
        if (ctx->pc != 0x10F000u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _setDefaultQM_0x10f3a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10F000u; }
        if (ctx->pc != 0x10F000u) { return; }
    }
    ctx->pc = 0x10F000u;
label_10f000:
    // 0x10f000: 0xc042d0e  jal         func_10B438
    ctx->pc = 0x10F000u;
    SET_GPR_U32(ctx, 31, 0x10F008u);
    ctx->pc = 0x10F004u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10F000u;
            // 0x10f004: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10B438u;
    if (runtime->hasFunction(0x10B438u)) {
        auto targetFn = runtime->lookupFunction(0x10B438u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10F008u; }
        if (ctx->pc != 0x10F008u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _extensionAndUserData_0x10b438(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10F008u; }
        if (ctx->pc != 0x10F008u) { return; }
    }
    ctx->pc = 0x10F008u;
label_10f008:
    // 0x10f008: 0x8e040858  lw          $a0, 0x858($s0)
    ctx->pc = 0x10f008u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2136)));
    // 0x10f00c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x10f00cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10f010: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x10f010u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10f014: 0x8043c08  j           func_10F020
    ctx->pc = 0x10F014u;
    ctx->pc = 0x10F018u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10F014u;
            // 0x10f018: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10F020u;
    if (runtime->hasFunction(0x10F020u)) {
        auto targetFn = runtime->lookupFunction(0x10F020u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        _initSeq_0x10f020(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x10F01Cu;
}
